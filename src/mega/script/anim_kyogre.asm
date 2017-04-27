.global attack_anim_kyogre
.global animk
.align 2

animk:
	
	.byte 0x0, 0xe3, 0x27	@load gfx for sparkles
	.byte 0x0, 0xe4, 0x27 @load gfx for ray
	
	@callback for custom mega icon loading
	.byte 0x3
	.word (anim_task_load_symbol)
	.byte 0x2
		@additional param for callback (sprite to load)
		.byte 0x1
		.byte 0x1, 0x0
	
	
	.byte 0x3
	.word anim_task_load_custom_pals
	.byte 0x2, 0x0 @spawn callback for color_change
	
	.byte 0x0a, 0x0			@enable ?? 0 ??
	.byte 0x0c, 0xc, 0x8		@set ablnd to 0x80c
	
	@color fade
	.byte 0x2, 0x24, 0x70, 0x3E, 0x8, 0x2
		@additional param for color fade oam
		.byte 0x5
		.byte 0x1, 0x0
		.byte 0x1, 0x0	@1 color change per frame
		.byte 0x0, 0x0   @from intensity
		.byte 0xA, 0x0   @to intensity
		.byte 0x86, 0x6c
	.byte 0x5 @waitstate
	
	@Earthquake
	.byte 0x03, 0xA1, 0x95, 0x0B, 0x8, 0x5 @heq
		@addition param for heq
		.byte 0x3, 0x5, 0x0, 0xa, 0x0, 0x32, 0x0
	.byte 0x03, 0xA1, 0x95, 0x0B, 0x8, 0x5 @heq
		@addition param for heq
		.byte 0x3, 0x4, 0x0, 0xa, 0x0, 0x32, 0x0	
	.byte 0x19, 0xe3, 0x0, 0x0 @sound eq		
	
	
	
	.byte 0x3, 0x2D, 0xE6, 0x0A, 0x8, 0x2 @spawn callback
		@additional callback params
		.byte 0x4, 0x0, 0x0, 0x3c, 0x0, 0x2, 0x0, 0xc, 0x0
		
	.byte 0x19, 0x85, 0x0, 0xC0 @sound 0x85, modulation -40
	.byte 0x4, 0x24 @pause 0x24
	.byte 0x19, 0x85, 0x0, 0xC0 @sound 0x85, modulation -40
	.byte 0x4, 0x24 @pause 0x24	
		
	.byte 0x2, 0xD4, 0x56, 0x3E, 0x8, 0x2 @spawn oam (ray)
		@additional anim for oam
		.byte 0x1, 0x0, 0x0
	.byte 0x04, 0x28 @pause 0x28
	.byte 0x19, 0xCe, 0x0, 0xC0 @sound 0xCE, modulation -40
	.byte 0x4, 0x1e @pause 0x24
	.byte 0x19, 0xCe, 0x0, 0xC0 @sound 0xCE, modulation -40
	
	
	@color fade
	.byte 0x2, 0x24, 0x70, 0x3E, 0x8, 0x2
		@additional param for color fade oam
		.byte 0x5
		.byte 0x1, 0x0
		.byte 0x1, 0x0	@1 color change per frame
		.byte 0xA, 0x0   @from intensity
		.byte 0x0, 0x0   @to intensity
		.byte 0x86, 0x6c
	.byte 0x4, 0xa	@pause 0xa (wait for backfade)
	
	.byte 0x3, 0x29, 0xA9, 0xB, 0x08, 0x5 @callback for white screen
		@additional callback params
		.byte 0x5, 0x5, 0x0, 0x2, 0x0, 0x00, 0x0, 0x10, 0x0, 0xFF, 0xFF
		
	.byte 0x4, 0x40 @pause 0x40
	.byte 0xB, 0x0 @make sprite acessable
	.byte 0x3
	.word anim_task_sprite_update
	.byte 0x2, 0x0 @ change sprites through callback
	.byte 0x4, 0x20 @pause 0x18
	.byte 0x3, 0x29, 0xA9, 0xB, 0x08, 0x5 @callback for white screen
		@additional callback params
		.byte 0x5, 0x5, 0x0, 0x2, 0x0, 0x10, 0x0, 0x00, 0x0, 0xFF, 0xFF
	.byte 0x4, 0x28 @pause 0x28
	
	.byte 0xA, 0x2
	@shake pokemon
	.byte 0x3, 0xA1, 0x95, 0xB, 0x8, 0x5
		@additional callback params
		.byte 0x3
		.byte 0x1, 0x0
		.byte 0x5, 0x0
		.byte 0xe, 0x0
	
	.byte 0x3
        .word anim_task_cry
        .hword 2 @cry of pokemon through callback
	.byte 0x5 @waitstate
	.byte 0xb, 0x2
	
		@spawn mega symbol above the pokemon
	.byte 0x2
	.word templ
	.byte 0x82, 0x0
	.byte 0x5 @waitstate
	
	.byte 0x4, 0x50
	.byte 0x8 				@end
	
.align 2
templ:
	.hword 0xAAA0, 0xAAA1
	.word 0x083AC944
	.word 0x08231BC0
	.word 0
	.word 0x08231BCC
	.word 0x080B68C1

.align 4
attack_anim_kyogre:
.word animk
