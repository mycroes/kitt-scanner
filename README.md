# kitt-scanner
Hardware and software to recreate the iconic scanner bar from KITT.

The intention of this project is to create the following:
- A scanner bar that feels like it could've been the one from KITT
- Should consume only a small amount of power so it can stay turned on when the car is parked
- Should turn off on signal (car started or headlights turned on, for safety / compliance)

## Current state
The current implementation uses a Raspberry Pi Pico as controller and connects the LEDs to individual GPIO pins.
LEDs are either on or off, currently there's no fading trail following the on-LEDs.

First test, without fixating the LEDs (the wave is not intended):

![scanner_20230616](https://github.com/mycroes/kitt-scanner/assets/122017/4db16a6d-f8e4-4b13-b9a0-d0abadcb4179)
