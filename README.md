# 6502 SBC
Open source 6502 single board computer files, plans, and resources.
# About
The current version of my 6502 SBC is programmed to display a message on a display made from 6 alphanumeric LED segments, the LEDs are drivin by two ATMEGA328Ps. 
- 6502.asm   [This is the main program that gets the 6502 up n' runnin and executing code, this file gets flashed onto ROM]
- DISPLAY.io [This is the 'decode' program for the LED segments, this gets flashed onto an ATMEGA]
- plogic.io  [This is the segment selection program, this file also gets flashed onto an ATMEGA]

- The beginning of the 6502.asm, which is the bulk of the file has very useful info on how you display text on the LED segments, its loosely based on the binary representation of ASCII.
# Problems and Future Changes
3/9/20 - Currently the LED decode and control logic is ran off an ATMEGA, which is a microcontroller, and because of that the program runs so slow the LEDs can't actually display a message, the next version will use an FPGA as actual logic is needed.
3/9/20 - The next version will be running Microsoft BASIC/AppleSoft BASIC.
# Whats New?
3/9/20 - Umm....I uploaded some files :P
