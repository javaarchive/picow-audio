void * usb_audio_main(void);
void * setup_audio_queue(void);
void * drain_audio_queue(void);
int drain_count_from_queue(int count, int16_t *out);
int get_audio_channels(void);
int get_frame_size(void);