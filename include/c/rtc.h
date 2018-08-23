

#ifndef RTC
#define RTC

typedef struct rtc_timestamp {
    u8 year;
    u8 month;
    u8 day;
    u8 day_of_week;
    u8 hour;
    u8 minute;
    u8 second;
} rtc_timestamp;

/**
 * Resets temporary flags that correspond to the current a-vector state
 */
void tmp_flags_reset();

typedef struct gpio {
    u16 data;
    u16 out;
    u16 cntrl;

} gpio;

void rtc_read(rtc_timestamp *s);
void rtc_send_byte(u8 byte);
void gpio_set_data(bool sck, bool sio, bool cs);
u8 rtc_read_byte();
u16 special_get_rtc();
void rtc_chip_wait();
u8 to_dec(u8 value);
u64 rtc_timestamp_to_seconds(rtc_timestamp *t);
bool rtc_test();

#endif
