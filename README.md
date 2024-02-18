# sf2040

The sf2040 is a mechanical 76-key keyboard based on the [RP2040](https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf) microcontroller from Raspberry Pi.

### Features
 - USB Type-C Port
 - Fully open-source/open-hardware design and firmware files
 - **No LED backlight**
 - **No Bluetooth/wireless connectivity**
### Assembly/Mechanical Information
**Required** parts:
 - PCB ([Download Gerber](/pcb/Gerber/Gerber.zip))
 - 3D-printed case ([Download .STEP](/case/Case.step))
 - Keyboard plate ([Download .STEP](/plate/Plate.step))
 - *Your choice of 76 full-size MX-style keyswitches*
 - MX-style Hot Swap Switch Mounts ([Amazon](https://www.amazon.com/gp/product/B0B4W9YMGM))
 - Screw-in PCB Mount Stabilizers ([Amazon](https://www.amazon.com/gp/product/B0CN38CXQ3))

**Optional, but recommended** parts:
 - 0.5mm Foam Switch Dampeners ([Amazon](https://www.amazon.com/gp/product/B0B942VCMV))
 - Krytox 205 Grade 0 Lubricant
 - Switch disassembly tools
 - Case filler (I used off-brand polyester fiber)

### Firmware
This keyboard runs standard [QMK firmware](https://docs.qmk.fm/#/), configuration for which is included in this repository.

`Make` example for this keyboard (after setting up your build environment):
```sh
    make strayfade2040:default
```
Flashing example for this keyboard:
```sh
    make strayfade2040:default:flash
```
The RP2040's bootloader can be accessed by holding the **ESC** key while plugging in the keyboard.

> For more information about setting up and working with [QMK](https://docs.qmk.fm/#/) keyboard firmware, read the QMK documentation (https://docs.qmk.fm).

### License
The sf2040 keyboard design and firmware is released under the GPL3 license. Contributions and pull requests to this repository are always welcome!
