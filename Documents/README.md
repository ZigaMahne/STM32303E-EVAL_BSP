# STM32303E-EVAL Evaluation board

## Overview

The STM32303E-EVAL evaluation board has been designed as a complete demonstrationand development platform for STMicroelectronic's ARM® Cortex®-M4 core-based STM32F303VET6 microcontrollers. It features two I2Cs, three SPIs, five USARTs, one CAN, four 12-bit ADCs, two 12-bit DACs, internal 64-KByte Data SRAM, 16-KByte Program SRAM and 512-KByte Flash, Touch sensing, USB FS, JTAG debugging support. This evaluation board can be used as the reference design for user application development but it is not considered as a final application.

The full range of hardware features on the board help you to evaluate all peripherals (USB FS, USART, Audio DAC and ADC, TFT color LCD, IrDA, LDR, MicroSD card, Motor control connectors, Humidity Sensor, High Brightness LED, CAN, IR, EEPROM, Touch Sensing Buttons & Temperature Sensor… etc.) and to develop your own applications. Extension headers make it possible to easily connect a daughter board or a wrapping board for your specific application.

An ST-LINK/V2 is integrated on the board as an embedded in-circuit debugger and programmer for the STM32 MCU.

## Getting started

- [User manual](https://www.st.com/resource/en/user_manual/um1807-stm32303eeval-evaluation-board-stmicroelectronics.pdf)

### ST-LINK driver installation and firmware upgrade (on Microsoft Windows)

1. Download the latest [ST-LINK driver](https://www.st.com/en/development-tools/stsw-link009.html).
2. Extract the archive and run `dpinst_amd64.exe`. Follow the displayed instructions.
3. Download the latest [ST-LINK firmware upgrade](https://www.st.com/en/development-tools/stsw-link007.html).
4. Extract the archive and run the `ST-LinkUpgrade.exe` program.
5. Connect the board to your PC using a USB cable and wait until the USB enumeration is completed.
6. In the **ST-Link Upgrade** program, press the **Device Connect** button.
7. When the ST-LINK driver is correctly installed, the current ST-LINK version is displayed.
8. Press the **Yes >>>>** button to start the firmware upgrade process.

## Technical reference

- [STM32F303VE microcontroller](https://www.st.com/en/microcontrollers-microprocessors/stm32f303ve.html)
- [STM32303E-EVAL board](https://www.st.com/en/evaluation-tools/stm32303e-eval.html)
- [User manual](https://www.st.com/resource/en/user_manual/um1807-stm32303eeval-evaluation-board-stmicroelectronics.pdf)
- [Data brief](https://www.st.com/resource/en/data_brief/stm32303e-eval.pdf)
- [Schematic](https://www.st.com/resource/en/schematic_pack/stm32303e-eval_sch.zip)
