# PicoW USB Audio over Network Adapter
The Pico W USB Audio to Network Adapter transforms your Raspberry Pi Pico W into a (hopefully) high-quality, hassle-free audio streaming device. 
It allows any device with a USB input, including MacOS, Windows, Linux, Nintendo Switch, PS4/PS5, and more, to become an airwire client. 
With Pico W Adapter, you can easily shove raw PCM data at an airwire server of your choice.

Originally based on the Pico W USB Audio to Bluetooth Adapter, previous donation links:
**please consider becoming a [:heart: Sponsor via PayPal](https://www.paypal.com/donate/?business=UZAK3WFV233ML&no_recurring=0&item_name=Help+me+build+more+project%21&currency_code=USD) or support us via [:coffee: Ko-fi](https://ko-fi.com/wasdwasd0105).**  


### Driver-Free Setup
Setting up PicoW requires no driver or software installation. Simply plug the Pico W into your device's USB port and it does stuff after it connects to wifi of course. Everything is hardcoded into the firmware at build time for now.

### pcm
it shoves uncompressed pcm over network. idk if i'll support more than stereo.




## Installation

* compile with the usual pico sdk tools

## Acknowledgments

This project wouldn't have been possible without the foundational work provided by the following projects:

1. [usb-sound-card](https://github.com/raspberrypi/pico-playground/tree/master/apps/usb_sound_card): It served as a valuable reference for handling USB audio data with the Raspberry Pi Pico.

2. [a2dp_source_demo](https://github.com/bluekitchen/btstack/blob/master/example/a2dp_source_demo.c): The Advanced Audio Distribution Profile (A2DP) source demo provided by the BTstack.



## License

This project is licensed under the terms of the Apache License 2.0.

