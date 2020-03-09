# (✿◠‿◠) 6502 SBC (づ｡◕‿‿◕｡)づ
Open source 6502 single board computer files, plans, and resources.
# About
The current version of my 6502 SBC is programmed to display a message on a display made from 6 alphanumeric LED segments, the LEDs are drivin by two ATMEGA328Ps. 
- 6502.asm   [This is the main program that gets the 6502 up n' runnin and executing code, this file gets flashed onto ROM]
- DISPLAY.ino [This is the 'decode' program for the LED segments, this gets flashed onto an ATMEGA]
- plogic.ino  [This is the segment selection program, this file also gets flashed onto an ATMEGA]

- INFO - The beginning of the 6502.asm, which is the bulk of the file has very useful info on how you display text on the LED segments, its loosely based on the binary representation of ASCII. I will eventually upload plans on how you can build your own 6502 SBC, but there are many YouTube videos and how to guides on building a 6502 SBC out there worth looking into.
# Whats Needed to Get Started?
- The chips - 6502/65C02 (CPU), 6522/65C22 (VIA), 6526/6551 (CIA), 28C256 (EEPROM), 62256 (RAM), some 74 series logic (NAND, and NOT)
- Other - A compatable EEPROM flasher/programmer (cheap ones on eBay), Adafruit FTDI friend (serial to USB), LED alphanumeric segments, push button, 1Kohm & 300ohm resistors, 0.1uf cap, cheap FPGA (again....eBay! its like $20), 5V power source, and a 1MHz clock.
- Software - VASM and whatever flasher program comes with your EEPROM programmer.
- 3/9/20 - Schematics comming soon!
- Soooo....where do I get the chips....that were made in the 1980s?? Easy! The chips needed can be found on old computers, or bought cheap an used on eBay, however Western Design Center still makes the MOS chips listed above while TI and ATMEL/Microchip still make the rest.
# Problems and Future Changes
- 3/9/20 - Currently the LED decode and control logic is ran off an ATMEGA, which is a microcontroller, and because of that the program runs so slow the LEDs can't actually display a message, the next version will use an FPGA as actual logic is needed.
- 3/9/20 - The next version will be running Microsoft BASIC/AppleSoft BASIC.
# Whats New?
- 3/9/20 - Umm....I uploaded some files :P
