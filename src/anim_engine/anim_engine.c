#include "types.h"
#include "romfuncs.h"
#include "oams.h"
#include "callbacks.h"
#include <stdbool.h>
#include "anim_engine.h"
#include "superstate.h"
#include "color.h"
#include "bg.h"
#include "text.h"
#include "save.h"

/**
/ Method to initalize the callback
 **/

void init_anim_engine_by_table() {
    u16 index = *vardecrypt(0x8004);
    init_anim_engine(anim_script_table[index]);
}

void init_anim_engine(void *script) {

    u8 callback_id = spawn_big_callback((void*) anim_engine_callback, 0);
    u32 callback_offset = (u32) (0x03004FE0 + 0x28 * callback_id);

    (*((u32*) (callback_offset + 0xC))) = (u32) (cmalloc(sizeof (ae_memory)));
    ae_memory* mem = (*((ae_memory**) (callback_offset + 0xC)));
    fmem->ae_mem = mem;
    
    //initalising values
    mem->current_programm = ((u32) script);
    mem->callback_id = callback_id;
    mem->active = true;
}

void anim_engine_callback(u8 callback_id) {

    ae_memory* mem = *((ae_memory**) (0x03004FE0 + 0x28 * callback_id + +0xC));

    //programm read loop
    u16 keyframe = anim_engine_get_hword(mem);
    while (keyframe == (mem->current_frame) && mem->active) {

        //execution of the command with the related frame
        mem->current_programm = (u32) (mem->current_programm + 2);
        anim_engine_execute_frame(mem);
        keyframe = anim_engine_get_hword(mem);
    }
    if ((mem->active) == false) {
        free(mem);
        return;
    }
    mem->current_frame = (u16) (mem->current_frame + 1);
}

void anim_engine_execute_frame(ae_memory* mem) {

    static ae_cmd cmdTable[] = {cmdx00_end,
        cmdx01_call,
        cmdx02_jump,
        cmdx03_oam_new,
        cmdx04_oam_delete,
        cmdx05_oam_vram_load,
        cmdx06_oam_vram_free,
        cmdx07_oam_despawn,
        cmdx08_spawn_callback,
        cmdx09_bg_reset,
        cmdx0A_bg_setup,
        cmdx0B_bg_sync_and_show,
        cmdx0C_bg_hide,
        cmdx0D_bg_display_sync,
        cmdx0E_bg_override,
        cmdx0F_load_obj_pal,
        cmdx10_free_obj_pal,
        cmdx11_get_io,
        cmdx12_set_io_to_var,
        cmdx13_set_io_to_value,
        cmdx14_prepare_tbox,
        cmdx15_display_text_inst,
        cmdx16_clear_textbox,
        cmdx17_display_rendered_tbox,
        cmdx18_rendered_tbox_event,
        cmdx19_objmove,
        anim_engine_cmdx1A, // cmd_x1A_callasm function in Assembler Code
        cmdx1B_gfx_anim_set,
        cmdx1C_rs_anim_set,
        cmdx1D_loadpal,
        cmdx1E_fade,
        cmdx1F_invertcolors,
        cmdx20_sound,
        cmdx21_song,
        cmdx22_cry,
        cmdx23_maintain,
        cmdx24_script_notify,
        cmdx25_oam_reset,
        cmdx26_callback_reset,
        cmdx27_dma3_controller_reset,
        cmdx28_bg_scroll_reset,
        cmdx29_bg_vmap_init,
        cmdx2A_bg_vmap_drop,
        cmdx2B_bg_scroll,
        cmdx2C_mapreload,
        cmdx2D_force_pals_to_black,
        cmdx2E_bg_clear_map,
        cmdx2F_setvar,
        cmdx30_fade_obj_pal,
        cmdx31_tbox_flush,
        cmdx32_pal_restore_force_current
    };
    u8 cmd_id = anim_engine_read_byte(mem);

    while (cmd_id != 0xFF) {
        cmdTable[cmd_id](mem);
        cmd_id = anim_engine_read_byte(mem);
    }
}

/**
/ Read functions
 **/

u8 anim_engine_read_byte(ae_memory* mem) {
    u8 result = (*((u8*) (mem->current_programm)));
    mem->current_programm = (u32) (mem->current_programm + 1);
    return result;
}

u16 anim_engine_read_param(ae_memory*mem) {
    u16 result = anim_engine_read_hword(mem);
    if ((u16) (result - 0x8000) < 0x10) {

        result = mem->vars[(u16) (result - 0x8000)];

        //*((u16*)0x2000000) = result;
        //while(true){}
    }
    return result;
}

u32 anim_engine_read_word(ae_memory* mem) {
    u32 result = (u32) (*((u8*) mem->current_programm));
    result = (u32) (result + (u32) ((*(u8*) (mem->current_programm + 1)) << 0x8));
    result = (u32) (result + (u32) ((*(u8*) (mem->current_programm + 2)) << 0x10));
    result = (u32) (result + (u32) ((*(u8*) (mem->current_programm + 3)) << 0x18));
    mem->current_programm = (u32) (mem->current_programm + 4);
    return result;
}

u16 anim_engine_get_hword(ae_memory* mem) {

    u16 result = (u16) (*((u8*) mem->current_programm));
    result = (u16) (result + (u16) ((*(u8*) (mem->current_programm + 1)) << 0x8));
    return result;
}

u16 anim_engine_read_hword(ae_memory*mem) {

    u16 result = (u16)*((u8*) mem->current_programm);
    result = (u16) (result + (u32) ((*(u8*) (mem->current_programm + 1)) << 0x8));
    mem->current_programm = (u32) (mem->current_programm + 2);
    return result;
}

void cmdx00_end(ae_memory* mem) {
    if (mem->link_numbers == 0) {
        //there are no links left -> engine is shut down
        mem->active = false;
        remove_big_callback(mem->callback_id);
    } else {
        //there are links -> return to last element on link list
        mem->link_numbers = (u8) (mem->link_numbers - 1);
        mem-> current_programm = mem->links[mem->link_numbers];
        mem-> current_frame = mem->lframes [mem->link_numbers];
    }
}

void cmdx01_call(ae_memory* mem) {
    u32 subscript = anim_engine_read_word(mem);
    u16 new_frame = anim_engine_read_hword(mem);

    if (mem->link_numbers < 8) {

        //saving the return adress and return frame
        mem->links[mem->link_numbers] = (mem->current_programm);
        mem->lframes[mem->link_numbers] = mem->current_frame;

        mem->link_numbers = (u8) (mem->link_numbers + 1);
        mem->current_programm = subscript;
        mem->current_frame = new_frame;

    }
}

void cmdx02_jump(ae_memory* mem) {
    mem->current_programm = anim_engine_read_word(mem);
    mem->current_frame = anim_engine_read_hword(mem);
}

void cmdx03_oam_new(ae_memory* mem) {
    oam_template* template = (oam_template*) (anim_engine_read_word(mem));
    s16 x = (s16) (anim_engine_read_hword(mem));
    s16 y = (s16) (anim_engine_read_hword(mem));
    u8 unkown = anim_engine_read_byte(mem);
    u16 target = (u16) (anim_engine_read_hword(mem) - 0x8000);

    //mem->vars[2] = target;
    //while(true){}

    //target var is 0x8000 min and 0x800F max
    if (target < 0x10) {
        //*((u16*)0x2000000) = mem->vars[target];
        //while(true){}
        mem->vars[target] = generate_oam_forward_search(template, x, y, unkown);
    }
}

void cmdx04_oam_delete(ae_memory* mem) {

    u16 id = anim_engine_read_hword(mem);

    if (id >= 0x8000) {
        id = mem->vars[id - 0x8000];
    }
    clear_oam_entry(&oams[id]);
    //clear_oam_entry((oam_object*) (id * 0x44 + 0x0202063c));
}

void cmdx05_oam_vram_load(ae_memory* mem) {
    graphic* resource = (graphic*) anim_engine_read_word(mem);

    //allocating vram
    load_and_alloc_obj_vram_lz77(resource);
}

void cmdx06_oam_vram_free(ae_memory* mem) {
    u16 oam_id = anim_engine_read_param(mem);

    //*((u16*)0x020370d0)=oam_id;
    //while (true){}

    oam_object* oam = (oam_object*) (oam_id * 0x44 + 0x0202063c);
    //*((oam_object**)0x020370d0)=oam;
    //while (true){}
    free_obj_vram_by_object(oam);
}

void cmdx07_oam_despawn(ae_memory* mem) {
    u8 oam_id = (u8) anim_engine_read_param(mem);
    oam_object* oam = &oams[oam_id];
    oam_despawn(oam);
}

void cmdx08_spawn_callback(ae_memory* mem) {
    void* function = (void*) anim_engine_read_word(mem);
    u8 priority = anim_engine_read_byte(mem);
    u8 length = anim_engine_read_byte(mem);

    u8 cbid = spawn_big_callback(function, priority);
    big_callback* callback = (big_callback*) (0x03004FE0 + cbid * 0x28);

    //Adding params to the ram
    int i;
    for (i = 0; i < length; i++) {
        callback->params[i] = anim_engine_read_hword(mem);
    }
}

void cmdx09_bg_reset(ae_memory* mem) {
    //first we drop the tilemaps to prevent memory leaks
    free(bg_get_tilemap(0));
    free(bg_get_tilemap(1));
    free(bg_get_tilemap(2));
    free(bg_get_tilemap(3));
    bg_reset(anim_engine_read_byte(mem));
}

void cmdx0A_bg_setup(ae_memory* mem) {
    //command 0xA: bg_setup
    bg_setup(anim_engine_read_byte(mem), (bg_config*) anim_engine_read_word(mem), anim_engine_read_byte(mem));
}

void cmdx0B_bg_sync_and_show(ae_memory* mem) {
    //command 0xB: bg_sync_and_display
    bg_sync_display_and_show(anim_engine_read_byte(mem));
}

void cmdx0C_bg_hide(ae_memory* mem) {
    //command 0xC: bg_hide
    bg_hide(anim_engine_read_byte(mem));
}

void cmdx0D_bg_display_sync() {
    //Command 0xD: bg_display_sync
    bg_display_sync();
}

void cmdx0E_bg_override(ae_memory* mem) {
    //Command 0xE: bg_override_tilemap
    u8 bgid = anim_engine_read_byte(mem);
    void* graphic = (void*) anim_engine_read_word(mem);
    u16 size = anim_engine_read_hword(mem);
    u16 start = anim_engine_read_hword(mem);
    u8 mode = anim_engine_read_byte(mem);

    void* buffer = malloc(size);

    lz77uncompwram(graphic, buffer);
    bg_copy_vram(bgid, buffer, size, start, mode);

    //spawn a free function for the memory block associated with the graphic
    int cid = spawn_big_callback(anim_engine_bg_free_task, 0);
    big_callbacks[cid].params[0] = 4;
    big_callbacks[cid].params[1] = (u16) (int) buffer;
    big_callbacks[cid].params[2] = (u16) ((int) buffer >> 16);
}



void cmdx0F_load_obj_pal(ae_memory* mem) {

    u8 pal_id = allocate_obj_pal(anim_engine_read_hword(mem));
    if(pal_id == 0xFF) return;
    
    void* pal = (void*) anim_engine_read_word(mem);
    u8 mode = anim_engine_read_byte(mem);
    u8 force = anim_engine_read_byte(mem);
    
    if(mode){
        void *nbuf = (void*) 0x02037ACC;
        lz77uncompwram(pal, nbuf);
        pal = nbuf;
    }
    
    cpuset(pal, &pal_restore[(pal_id + 16) * 16], 16);
    if(force) cpuset(pal, &pals[(pal_id + 16) * 16], 16);
}

void cmdx10_free_obj_pal(ae_memory* mem) {
    free_obj_pal(anim_engine_read_hword(mem));
}

void cmdx11_get_io(ae_memory*mem) {
    u16 var = (u16) (anim_engine_read_hword(mem) - 0x8000);
    u16 ioreg = anim_engine_read_hword(mem);
    if (var < 0x10) {
        mem->vars[var] = get_io(ioreg);

    }
}

void cmdx12_set_io_to_var(ae_memory*mem) {
    u16 var = (u16) (anim_engine_read_hword(mem) - 0x8000);
    u16 ioreg = anim_engine_read_hword(mem);
    if (var < 0x10) {
        set_io(ioreg, mem->vars[var]);
    }
}

void cmdx13_set_io_to_value(ae_memory*mem) {
    u16 val = anim_engine_read_hword(mem);
    u16 ioreg = anim_engine_read_hword(mem);
    set_io(ioreg, val);
}

void cmdx14_prepare_tbox(ae_memory*mem) {
    u16 target_var = (u16) (anim_engine_read_hword(mem) - 0x8000);
    u8 bgid = anim_engine_read_byte(mem);
    u8 x = anim_engine_read_byte(mem);
    u8 y = anim_engine_read_byte(mem);
    u8 w = anim_engine_read_byte(mem);
    u8 h = anim_engine_read_byte(mem);
    u8 palID = anim_engine_read_byte(mem);
    u16 startTile = anim_engine_read_hword(mem);
    if (target_var < 0x10) {
        tboxdata boxdata;
        tbox_data_new(&boxdata, bgid, x, y, w, h, palID, startTile);
        u8 boxid = tbox_new(&boxdata);
        tbox_flush(boxid, 0);
        tbox_tilemap_draw(boxid);
        mem->vars[target_var] = boxid;
    }


}

void cmdx15_display_text_inst(ae_memory* mem) {
    u8 boxid = (u8) anim_engine_read_param(mem);
    u8 font_id = anim_engine_read_byte(mem);
    u8 unkown = anim_engine_read_byte(mem);
    u8 border_distance = anim_engine_read_byte(mem);
    u8 line_distance_u = anim_engine_read_byte(mem);
    u8 line_distance_l = anim_engine_read_byte(mem);
    u8* font_map = (u8*) anim_engine_read_word(mem);
    u8 display_flag = anim_engine_read_byte(mem);
    u8* string = (u8*) anim_engine_read_word(mem);
    u8 bgid = anim_engine_read_byte(mem);

    //decrypting string
    u8* ram_buffer = (u8*) 0x02021D18;
    string_decrypt(ram_buffer, string);

    tbox_flush(boxid, 0);
    tbox_print_string(boxid, font_id, unkown, border_distance, line_distance_u, line_distance_l, font_map, display_flag, ram_buffer);
    bg_copy_vram(bgid, bg_get_tilemap(bgid), 0x800, 0x0, 0x2);

}

void cmdx16_clear_textbox(ae_memory* mem) {
    u8 boxid = (u8) anim_engine_read_param(mem);
    flush_tbox(boxid, 0);
    free_tbox(boxid);
    bg_copy_vram(0, bg_get_tilemap(0), 0x800, 0x0, 0x2);
}

void cmdx17_display_rendered_tbox(ae_memory*mem) {

    //reading all params
    u16 target_var = (u16) (anim_engine_read_hword(mem) - 0x8000);
    u8 boxid = (u8) anim_engine_read_param(mem);
    u8 text_speed = anim_engine_read_byte(mem);
    u8 font_id = anim_engine_read_byte(mem);
    u8 unkown = anim_engine_read_byte(mem);
    u8 border_distance = anim_engine_read_byte(mem);
    u8 line_distance_u = anim_engine_read_byte(mem);
    u8 line_distance_l = anim_engine_read_byte(mem);
    u8* font_map = (u8*) anim_engine_read_word(mem);
    u8 display_flag = anim_engine_read_byte(mem);
    u8* string = (u8*) anim_engine_read_word(mem);
    u8 bgid = anim_engine_read_byte(mem);
    u8 initial_flags = anim_engine_read_byte(mem);

    if (target_var < 0x10) {


        aetr_memory *trmem = (aetr_memory*) malloc(sizeof (aetr_memory));
        u8 *buf = (u8*) malloc(0x800);
        string_decrypt(buf, string); //decrypting buffer directives ([player] etc)
        u8 self = spawn_big_callback(anim_engine_text_renderer, 0);
        mem->vars[target_var] = self;

        big_callbacks[self].params[0] = (u16) (int) trmem;
        big_callbacks[self].params[1] = (u16) ((int) trmem >> 16);

        trmem->bg_id = bgid;
        trmem->border_distance = border_distance;
        trmem->boxid = boxid;
        trmem->color_map = font_map;
        trmem->delay = text_speed;
        trmem->delay_timer = 0;
        trmem->destination = (u8*) 0x02021D18;
        trmem->display_flag = display_flag;
        trmem->flags.value = initial_flags;
        trmem->font = font_id;
        trmem->line_distance_l = line_distance_l;
        trmem->line_distance_u = line_distance_u;
        trmem->o_text = buf;
        trmem->source = buf;
        trmem->unkown = unkown;
        anim_engine_text_renderer(self);
    }
}

void anim_engine_text_renderer(u8 self) {

    aetr_memory *mem = (aetr_memory*) (big_callbacks[self].params[0] + (big_callbacks[self].params[1] << 16));
    if (mem->delay_timer) {
        mem->delay_timer--;
        return;
    }
    mem->delay_timer = mem->delay;
    //read next char
    u8 c = *(mem->source);
    switch (c) {
        case 0xFF:
        {
            //end of text, renderer despawn
            if (!mem->flags.flags.pass_end) {
                if (mem->flags.flags.end) {
                    mem->flags.flags.end = 0;
                } else {
                    return; //no token for line break, so we wait
                }
            }
            //despawn
            flush_tbox(mem->boxid, 0);
            free_tbox(mem->boxid);
            bg_copy_vram(mem->bg_id, bg_get_tilemap(mem->bg_id), 0x800, 0, 2);
            free(mem->o_text);
            free(mem);
            remove_big_callback(self);
            return;
        }
        case 0xFB:
        {
            //new paragraph / box
            if (!mem->flags.flags.pass_paragraph) {
                if (mem->flags.flags.paragraph) {
                    mem->flags.flags.paragraph = 0;
                } else {
                    return; //no token for new paragraph, so we wait
                }
            }
            mem->destination = (u8*) 0x02021D18; //reset of destination buffer, so next chars are append to front
            break;
        }
        case 0xFE:
        {
            //linebreak
            if (!mem->flags.flags.pass_linebreak) {
                if (mem->flags.flags.linebreak) {
                    mem->flags.flags.linebreak = 0;
                } else {
                    return; //no token for line break, so we wait
                }
            }
            //fallthrough
        }
        default:
        {
            //normal char append
            *mem->destination++ = c;
            *mem->destination = 0xFF;

            //draw the text
            //tbox_flush(mem->boxid, 0);
            void *src = (void*) 0x02021D18;
            tbox_print_string(mem->boxid, mem->font, mem->unkown, mem->border_distance, mem->line_distance_u, mem->line_distance_l, mem->color_map, mem->display_flag, src);
            bg_copy_vram(mem->bg_id, bg_get_tilemap(mem->bg_id), 0x800, 0, 2);
            break;
        }
    }
    mem->source++;

}

/**
void anim_engine_tbox_renderer(u8 cb_id){
	
        int callback = 0x03004FE0 + 0x28*cb_id;
        u8* boxid =(u8*)(callback+0x8);
        u8* text_speed = (u8*)(callback+0x9);
        u8* font_id = (u8*)(callback+0xA);
        u8* unkown = (u8*)(callback+0xB);
        u8* border_distance = (u8*)(callback+0xC);
        u8* line_distance_u = (u8*)(callback+0xD);
        u8* line_distance_l = (u8*)(callback+0xE);
        u8* display_flag = (u8*)(callback+0xF);
        u8** font_map = (u8**)(callback+0x10);
        u8** source = (u8**)(callback+0x14);
        u8* delay_cnt = (u8*)(callback+0x18);
        u8* flags = (u8*)(callback+0x19); //0,1,2 = wait n,p,end ; 3,4,5 = allowed n,p,end 
        u16* cur_pos = (u16*)(callback+0x1A);
        u8** resource = (u8**)(callback+0x1C);
        u8* bgid = (u8*)(callback+0x20);
	
        u8* buffer = (u8*)0x02021D18;

	
        if (*delay_cnt == 0){
                //delay is over -> render text
		
                //check for halt flags
                if ((((*flags)&0x1)) && (((*flags)&0x8)!= 0x0)){
                        //wait n is set but we have token
 *flags = (u8)((*flags)&0xF6);
                }
                if ((((*flags)&0x2)!= 0x0) && (((*flags)&0x10)!= 0x0)){
                        //wait p is set but we have token -> proceed to a new box
 *flags = (u8)((*flags)&0xED);
                }
                if ((((*flags)&0x4)!= 0x0) && (((*flags)&0x20)!= 0x0)){
                        //wait end is set but we have token -> delete the box
                        free(*resource);
                        remove_big_callback(cb_id);
                        flush_tbox(*boxid, 0);
                        free_tbox(*boxid);
                        bg_copy_vram(*bgid, bg_get_tilemap(*bgid), 0x800, 0x0, 0x2);
                        return;
                }
		
		
                if (((*flags)&0x7) == 0){ //0000 0111 must be unset -> handle is not waiting
			
                        u8 current_char = (*source)[*cur_pos];
			
                        switch (current_char){
                                case 0xFB:{
                                        //new box
 *flags = (u8)((*flags)|0x2); //set wait p flag
 *source = (u8*)(*source+(*cur_pos)+1);
 *cur_pos = 0x0;
                                        break;
                                }
                                case 0xFF:{
                                        //textbox has ended
 *flags = (u8)((*flags)|0x4); //set wait end flag
                                        break;
                                }
                                case 0xFE:{
                                        //next line
 *flags = (u8)((*flags)|0x1); //set wait n flag
                                        //do the normal copy request
                                }
                                default:{
                                        //normal copy request
                                        buffer[(*cur_pos)] = (*source)[(*cur_pos)];
                                        buffer[(*cur_pos)+1] = 0xFF;
 *cur_pos = (u16)(*cur_pos+1);
					
                                        //printing the new text
                                        fill_box_bg(*boxid, 0);
                                        display_tbox_transbg(*boxid, *font_id, *unkown, *border_distance, *line_distance_u, *line_distance_l, *font_map, *display_flag, buffer );
                                        bg_copy_vram(*bgid, bg_get_tilemap(*bgid), 0x800, 0x0, 0x2);
					
                                        //resetting delay
 *delay_cnt = *text_speed;
                                        break;
                                }
                        }
                }	
        }else{
 *delay_cnt = (u8)(*delay_cnt-1);
        }
}
 **/

void cmdx18_rendered_tbox_event(ae_memory* mem) {
    u8 self = (u8) (anim_engine_read_param(mem));
    u8 event = (u8) (anim_engine_read_byte(mem));

    aetr_memory *trmem = (aetr_memory*) (big_callbacks[self].params[0] + (big_callbacks[self].params[1] << 16));
    trmem->flags.value |= (u8) (1 << event);

    /**
    int callback = (0x03004FE0 + 0x28*target_cb);
    u8* flags = (u8*)(callback+0x19); //0,1,2 = wait n,p,end ; 3,4,5 = allowed n,p,end 
     *flags = (u8)((*flags)|event);
     **/
}

void cmdx19_objmove(ae_memory* mem) {
    u8 oam_id = (u8) anim_engine_read_param(mem);
    u16 duration = anim_engine_read_hword(mem);
    s16 x = (s16) (anim_engine_read_hword(mem));
    s16 y = (s16) (anim_engine_read_hword(mem));

    if (duration == 0) {
        oam_object* oam = (oam_object*) (0x0202063c + oam_id * 0x44);
        oam-> x = (s16) (oam->x + x);
        oam-> y = (s16) (oam->y + y);
    } else {
        //spawn a new callback
        u8 cbid = spawn_big_callback(anim_engine_obj_mover, 1);
        big_callback* cb = (big_callback*) (0x03004FE0 + cbid * 0x28);
        cb->params[0] = oam_id;
        cb->params[1] = (u16) x;
        cb->params[2] = (u16) y;
        cb->params[3] = duration;
        cb->params[4] = 0x0; //frame count
    }
}

void anim_engine_obj_mover(u8 cbid) {
    big_callback* cb = (big_callback*) (0x03004FE0 + cbid * 0x28);
    u8 oam_id = (u8) (cb->params[0]);
    oam_object* oam = (oam_object*) (0x0202063c + oam_id * 0x44);
    s16 x = (s16) (cb->params[1]);
    s16 y = (s16) (cb->params[2]);
    u16 d = cb->params[3];
    u16 t = cb->params[4];


    cb->params[4] = (u16) (t + 1); //incrementing frame count 
    //calculating the movement in this frame by this formula mov_x(t) = x*t/d - (t-1)*x/d
    int x_mov = (x * t) / d - ((t - 1) * x) / d;
    int y_mov = (y * t) / d - ((t - 1) * y) / d;

    oam -> x = (s16) ((oam -> x) + x_mov);
    oam -> y = (s16) ((oam -> y) + y_mov);

    if (cb->params[4] == cb->params[3]) {
        remove_big_callback(cbid);
    }
}

void cmdx1B_gfx_anim_set(ae_memory* mem) {
    u16 oam_id = anim_engine_read_param(mem);
    u8 anim_id = anim_engine_read_byte(mem);

    oam_object* oam = (oam_object*) (oam_id * 0x44 + 0x0202063c);
    oam->anim_number = anim_id;
    gfx_init_animation(oam, 0);


}

void cmdx1C_rs_anim_set(ae_memory* mem) {
    u16 oam_id = anim_engine_read_param(mem);
    u8 anim_id = anim_engine_read_byte(mem);

    oam_object* oam = (oam_object*) (oam_id * 0x44 + 0x0202063c);
    rotscal_new_animation(oam, anim_id);

}

void cmdx1D_loadpal(ae_memory* mem) {
    void *pal = (void*) anim_engine_read_word(mem);
    u16 destcol = anim_engine_read_hword(mem);
    u16 bytecount = anim_engine_read_hword(mem);
    u8 cflag = anim_engine_read_byte(mem); //compressed flag: if 0x1 data is compressed
    u8 force = anim_engine_read_byte(mem);

    if (cflag) {
        void *nbuf = (void*) 0x02037ACC;
        lz77uncompwram(pal, nbuf);
        pal = nbuf;
    }

    cpuset(pal, &pal_restore[destcol], bytecount >> 1);
    if (force) {
        cpuset(pal, &pals[destcol], bytecount >> 1);
    }

}

void cmdx1E_fade(ae_memory* mem) {
    u16 color = anim_engine_read_hword(mem);
    u16 dcol = anim_engine_read_hword(mem);
    u16 ncol = anim_engine_read_hword(mem);
    u16 duration = anim_engine_read_hword(mem);
    u8 from_intensity = anim_engine_read_byte(mem);
    u8 to_intensity = anim_engine_read_byte(mem);

    //initing a callback
    u8 cb_id = spawn_big_callback(anim_engine_fader, 0);
    big_callbacks[cb_id].params[0] = color;
    big_callbacks[cb_id].params[1] = dcol;
    big_callbacks[cb_id].params[2] = ncol;
    big_callbacks[cb_id].params[3] = duration;
    big_callbacks[cb_id].params[4] = 0; //current frame
    big_callbacks[cb_id].params[5] = from_intensity;
    big_callbacks[cb_id].params[6] = to_intensity;

    anim_engine_fader(cb_id);

}

void anim_engine_fader(u8 cb_id) {

    u16 duration = big_callbacks[cb_id].params[3];
    u16 current_frame = big_callbacks[cb_id].params[4]++;
    u8 intensity;
    if (duration) {

        int d = big_callbacks[cb_id].params[6] - big_callbacks[cb_id].params[5];
        d *= current_frame;
        d /= duration;
        intensity = (u8) (d + big_callbacks[cb_id].params[5]);

    } else {
        //Instant palload
        intensity = (u8) big_callbacks[cb_id].params[6];
    }

    //now we do the fading loop
    int c = big_callbacks[cb_id].params[1];
    int max = big_callbacks[cb_id].params[2] + c;
    color over = {big_callbacks[cb_id].params[0]};
    while (c < max) {
        color b = pal_restore[c];
        color n = alpha_blend(b, over, intensity);
        pals[c] = n;
        c++;
    }

    if (current_frame >= duration) {
        remove_big_callback(cb_id);
    }
}

void cmdx1F_invertcolors(ae_memory* mem) {
    u16 startcol = anim_engine_read_hword(mem);
    u16 ncol = anim_engine_read_hword(mem);
    if (ncol != 0) {
        u16* palcopyram = (u16*) 0x020371F8;
        u16* palram = (u16*) 0x020375F8;

        //start a inversion loop
        for (int i = startcol; i < ncol + startcol; i++) {
            u16 oc = palcopyram[i];
            int red = 0x1F - (oc & 0x1F);
            int blue = 0x3E0 - (oc & 0x3E0);
            int green = 0x7C00 - (oc & 0x7C00);
            palcopyram[i] = (u16) (red | blue | green);
            palram[i] = (u16) (red | blue | green);
        }
    }
}

void cmdx20_sound(ae_memory* mem) {
    u16 soundid = anim_engine_read_hword(mem);
    sound(soundid);
}

void cmdx21_song(ae_memory* mem) {
    u16 songid = anim_engine_read_hword(mem);
    u8 feature = anim_engine_read_byte(mem);
    playsong1(songid, feature);
}

void cmdx22_cry(ae_memory* mem) {
    u16 pokeid = anim_engine_read_hword(mem);
    u8 feature = anim_engine_read_byte(mem);
    cry(pokeid, feature);
}

void cmdx23_maintain() {
    set_callback1(callback_maintain);
    super->callbacks[3] = NULL;
}

void cmdx24_script_notify() {
    *((bool*) 0x03000EA8) = false;
}

void cmdx25_oam_reset() {
    oam_reset();
}

void cmdx26_callback_reset(ae_memory *mem) {
    //we must not remove the engine callback
    u8 self = mem->callback_id;
    u8 i;
    for (i = 0; i < 0x10; i++) {
        if (i != self) {
            remove_big_callback(i);
        }
    }
}

void cmdx27_dma3_controller_reset() {
    dma3_controller_reset();
}

void cmdx28_bg_scroll_reset() {
    int i;
    for (i = 0; i < 4; i++) {
        bg_virtual_map_displace((u8) i, 0, 0);
        bg_virtual_set_displace((u8) i, 0, 0);
    }
}

void cmdx29_bg_vmap_init(ae_memory *mem) {
    u8 bg_id = anim_engine_read_byte(mem);
    u16 size = anim_engine_read_hword(mem);
    void *map = cmalloc(size);
    bg_set_tilemap(bg_id, map);
    bg_copy_vram(bg_id, map, size, 0, 2);
}

void cmdx2A_bg_vmap_drop(ae_memory *mem) {
    u8 bg_id = anim_engine_read_byte(mem);
    free(bg_get_tilemap(bg_id));
    bg_set_tilemap(bg_id, NULL);
}

void cmdx2B_bg_scroll(ae_memory *mem) {
    u8 bg_id = anim_engine_read_byte(mem);
    u16 duration = anim_engine_read_hword(mem);
    u16 hfrom = get_io((u16) (0x10 + bg_id * 4));
    u16 vfrom = get_io((u16) (0x12 + bg_id * 4));
    u16 hdelta = anim_engine_read_hword(mem);
    u16 vdelta = anim_engine_read_hword(mem);
    u8 self = spawn_big_callback(anim_engine_bg_scroller, 0);
    big_callbacks[self].params[0] = bg_id;
    big_callbacks[self].params[1] = duration;
    big_callbacks[self].params[2] = hdelta;
    big_callbacks[self].params[3] = vdelta;
    big_callbacks[self].params[4] = hfrom;
    big_callbacks[self].params[5] = vfrom;
    big_callbacks[self].params[6] = 0;
    anim_engine_bg_scroller(self);
}

void anim_engine_bg_scroller(u8 self) {
    u8 bg_id = (u8) big_callbacks[self].params[0];
    u16 duration = big_callbacks[self].params[1];
    u16 current_frame = big_callbacks[self].params[6]++;
    s16 hdelta = (s16) big_callbacks[self].params[2];
    s16 vdelta = (s16) big_callbacks[self].params[3];
    u16 hfrom = big_callbacks[self].params[4];
    u16 vfrom = big_callbacks[self].params[5];
    if (duration) {

        int hc = (current_frame * hdelta) / duration;
        int vc = (current_frame * vdelta) / duration;
        set_io((u16) (0x10 + bg_id * 4), (u16) (hfrom + hc));
        set_io((u16) (0x12 + bg_id * 4), (u16) (vfrom + vc));

    } else {
        set_io((u16) (0x10 + bg_id * 4), (u16) (hfrom + hdelta));
        set_io((u16) (0x12 + bg_id * 4), (u16) (vfrom + vdelta));
    }

    if (duration < current_frame) {
        remove_big_callback(self);
    }
}

void ae_mapreloader() {
    cb1handling();
    if ((*((u8*) 0x02037AB8 + 7)) & 0x80) {
        return;
    }
    int i;
    for (i = 0; i < 512; i++) {
        pal_restore[i].value = 0x0;
        pals[i].value = 0x0;
    }
    map_reload();
}

void cmdx2C_mapreload() {
    init_fadescreen(1, 0);
    super->callbacks[1] = ae_mapreloader;
}

void cmdx2D_force_pals_to_black() {
    int i;
    for (i = 0; i < 512; i++) {
        pal_restore[i].value = 0;
        pals[i].value = 0;
    }
}

void anim_engine_bg_free_task(u8 self) {
    if (!--big_callbacks[self].params[0]) {
        void *memory = (void*) (big_callbacks[self].params[1] + (big_callbacks[self].params[2] << 16));
        free(memory);
        remove_big_callback(self);
    }
}

void cmdx2E_bg_clear_map(ae_memory *mem) {
    u8 bg_id = anim_engine_read_byte(mem);
    u16 size = anim_engine_read_hword(mem);
    int n = 0;
    cpuset(&n, bg_get_tilemap(bg_id), (size / 4) || 0x5000000);
    bg_virtual_sync(bg_id);
}

void cmdx2F_setvar(ae_memory *mem) {
    int var = anim_engine_read_hword(mem) - 0x8000;
    u16 val = anim_engine_read_hword(mem);
    mem->vars[var] = val;
}

void cmdx30_fade_obj_pal(ae_memory *mem){
    u16 color = anim_engine_read_hword(mem);
    u16 tag = anim_engine_read_hword(mem);
    u8 start_col = anim_engine_read_byte(mem);
    u8 col_count = anim_engine_read_byte(mem);
    u16 duration = anim_engine_read_hword(mem);
    u8 from_intensity = anim_engine_read_byte(mem);
    u8 to_intensity = anim_engine_read_byte(mem);
    
    int pal_id = get_obj_pal_by_tag(tag) + 16;
    u16 dcol = (u16)(16 * pal_id + start_col);
    u16 ncol = col_count;
    u8 cb_id = spawn_big_callback(anim_engine_fader, 0);
    big_callbacks[cb_id].params[0] = color;
    big_callbacks[cb_id].params[1] = dcol;
    big_callbacks[cb_id].params[2] = ncol;
    big_callbacks[cb_id].params[3] = duration;
    big_callbacks[cb_id].params[4] = 0; //current frame
    big_callbacks[cb_id].params[5] = from_intensity;
    big_callbacks[cb_id].params[6] = to_intensity;

    anim_engine_fader(cb_id);
    
}

void cmdx31_tbox_flush(ae_memory *mem){
    u8 box_id = (u8)anim_engine_read_param(mem);
    u8 flush = anim_engine_read_byte(mem);
    tbox_flush(box_id, flush);
}

void cmdx32_pal_restore_force_current(ae_memory *mem){
    u16 first_col = anim_engine_read_hword(mem);
    u16 col_cnt = anim_engine_read_hword(mem);
    int i;
    for(i = 0; i < col_cnt; i++){
        pal_restore[first_col + i] = pals[first_col + i];
    }
    
}