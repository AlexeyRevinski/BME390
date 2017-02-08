## Digitally Adjustable Phrenic Nerve (DAPhNe) Stimulator System
### Northwestern University BME Senior Capstone Design (2016-2017)
#### Center for Autonomic Medicine in Pediatrics (CAMP) at Ann & Robert H. Lurie Children's Hospital of Chicago
<br></br>
<br></br>
Information will be updated in the next few weeks.
<br></br>
<br></br>

## Project Description
### Introduction
### What is DAPhNe?
### Next Steps 
<br></br>
<br></br>
## Quick Start 
Currently, the DAPhNe Stimulator System consists of two PCB prototype boards soon to be tested on New Zealand white rabbits for efficacy and function. The external user interface is being developed concurrently. Future developers should read the listed documents and make sure they have access to the listed hardware and software. The following "checklists" are intended to make this process as fast and easy as possible. When installing and configuring software, carefully follow appropriate sections in the [**Developing DAPhNe Stimulator**]() document.

### Important Documents 
The following documents are essential to read in order to understand the purpose, scope, and technical progress of the project in more detail:
* [**BME 390 Final Report: DAPhNe Stimulator System (2017)**]() generated by the 2016-17 BME 390 team
  - The most recent information on the project, design process, and team progress on the hardware/software design **TO DO**  
* [**Developing DAPhNe Stimulator**]() guide included in this repository
  - Step-by-step instructions for hardware and software implementation of the project **TO DO** 

### Hardware Checklist

Custom and off-the-shelf hardware components used currently:
* 2 x **IPNS_v0.1 MCU**
  - Custom microcontroller module featuring I2C bus to the NFC memory tag and breakout pins for **IPNS_v0.1 STIM**
  - Was designed using the free EagleCAD software (link below)
* 2 x **IPNS_v0.1 STIM**
  - Custom stimulation circuit controlled by **IPNS_v0.1 MCU**
  - Was designed using the free EagleCAD software (link below)
* 4 x [**ANT7-T-M24LR04E**](http://www.st.com/content/st_com/en/products/evaluation-tools/product-evaluation-tools/st25-nfc-rfid-eval-boards/st25-nfc-rfid-antennas/ant7-t-m24lr04e.html) Board
  - NFC memory tag used in wireless communication on the **IPNS_v0.1 MCU** board
  - NFC Transceiver board wirelessly reads/writes the EEPROM memory on the tag; MCU reads from the memory using I2C communication
* 1 x [**M24LR-DISCOVERY Transceiver**](http://www.st.com/content/st_com/en/products/evaluation-tools/product-evaluation-tools/st25-nfc-rfid-eval-boards/st25-nfc-rfid-eval-boards/m24lr-discovery.html) Board
  - Used to communicate with the NFC memory tag
  - Currently uilizes the ST Microelectronics NFC communication GUI (see below)
* 2 x [**ST-LINK/V2 in-circuit debugger/programmer for STM8**](http://www.st.com/en/development-tools/st-link-v2.html?s_searchtype=partnumber)
  - Debugging interface for the STM8L microcontroller

The following devices have been used (and may still be useful) in the development of the current IPNS System:
* 2 x [**STM8L-DISCOVERY**](http://www.st.com/en/evaluation-tools/stm8l-discovery.html) Board
  - Evaluation board used for preliminary code testing of the STM8L microcontroller
  - Very useful for debugging and reference circuit design (schematics [**here**](https://github.com/AlexeyRevinski/BME390/blob/master/Reference%20Documentation/STM8L-DISCOVERY%20Schematic.pdf))
* 1 x [**M24LR-DISCOVERY Receiver**](http://www.st.com/content/st_com/en/products/evaluation-tools/product-evaluation-tools/st25-nfc-rfid-eval-boards/st25-nfc-rfid-eval-boards/m24lr-discovery.html) Board
  - Used for development of the NFC memory tag
  - Has not been used in the project very much except to test the transceiver included in the kit

### Software Checklist 
In order to get started on the software side of the project, first download and install the following software following the step-by-step instructions in the [**Developing DAPhNe Stimulator**]() manual:
* [**GitHub Desktop**](https://desktop.github.com/)
  - Simple git client for managing the project repository on GitHub.
* [**IAR Embedded Workbench for STM8**](https://www.iar.com/iar-embedded-workbench/#!?architecture=STM8)
  - IDE used to program the STM8L MCU used in the implantable stimulator
* [**EagleCAD**](http://www.autodesk.com/products/eagle/free-download)
  - CAD software for printed circuit board (PCB) development. There are lots of great [**tutorials**](https://www.youtube.com/watch?v=1AXwjZoyNno) online!
* [**LTSpice**](http://www.linear.com/designtools/software/#LTspice)
  - Very user-friendly Spice simulation software; used to simulate the stimulation circuit function
* [**ST Microelectronics NFC Communication GUI**](http://www.st.com/content/st_com/en/products/embedded-software/st25-nfc-rfid-software/stsw-m24lr011.html)
  - Used to communicate with the **ANT7-T-M24LR04E** tag using the **M24LR-DISCOVERY Transceiver Board**

The following software is usually included with IAR installation (no steps needed). However, if during project development IAR is unable to flash the microcontroller's memory, you may need to install these separately:
* [**ST-LINK/V2 Driver**](http://www.st.com/content/st_com/en/products/embedded-software/development-tool-software/stsw-link009.html)
  - Drivers for the ST-LINK/V2 in-circuit debugging interface
* [**ST-LINK/V2 Firware Upgrade**](http://www.st.com/content/st_com/en/products/embedded-software/development-tool-software/stsw-link007.html)
  - Optional firmware upgrade for ST-LINK/V2 in-circuit debugging interface

Once the above software is installed, clone the project repository onto your local machine into a folder of your choice - see GitHub tutorials online if necessary. In the cloned folder, the following software and documentation will be included:
* [**Microcontroller Project**](https://github.com/AlexeyRevinski/BME390/tree/master/Implant%20STM8L%20Program%20NFC%2BPulse/Project) for a STM8L151C6xx device
  - Under `.../Implant STM8L Program NFC+Pulse/Project/`
  - Uses IAR Embedded Workbench for development
  - Project file is `workspace.eww` under `...\Implant STM8L Program NFC+Pulse\Project\EWSTM8`
* [**Standard Peripheral Library**](https://github.com/AlexeyRevinski/BME390/tree/master/Implant%20STM8L%20Program%20NFC%2BPulse/STM8L15x_StdPeriph_Driver) for STM8L15x devices
  - Under `.../Implant STM8L Program NFC+Pulse/STM8L15x_StdPeriph_Driver`
  - **DO NOT MOVE** relative to `/Project` folder or else the project will not compile
* [**LTSPice Simulation Files**](https://github.com/AlexeyRevinski/BME390/tree/master/LTSpice/PulseGenerator1)
  - Under `.../LTSpice/PulseGeneration1`
  - Current simulation file features only the stimulation circuit separately from the rest of the system
* [**EagleCAD project files**](https://github.com/AlexeyRevinski/BME390/tree/master/Eagle) for IPNS_v0.1 MCU and IPNS_v0.1 STIM boards
  - Under `.../Eagle`
  - Includes board and schematic files for both boards
  - Includes custom component library that contains every component used in both boards (`IPNS_Lib_v0.1.lbr`)
  - Includes CAM job used to create Gerber files for both boards (`sfe-gerb274x-JEB.cam`)
* [**Reference Documentation**](https://github.com/AlexeyRevinski/BME390/tree/master/Reference%20Documentation)
  - Component Datasheets
  - Application articles
  - EagleCAD files for certain components
  - Software manual for IAR
* Obsolete IAR projects that can be used for reference and preliminary "visualization" Solidworks model of the IPNS device

### Other Useful Software
* [**Notepad++**](https://notepad-plus-plus.org/download/v7.3.1.html)
  - Very useful text editor for viewing/modifying various text/code files with unusual extensions
* [**nScope**](http://www.nscope.org/)
  - Although not required, very useful for probing the circuit during development. Northwestern students will encounter this great resource in their introductory electronics ME233/BME305 courses. 
* [**Adafruit Library for EagleCAD**](https://github.com/adafruit/Adafruit-Eagle-Library/zipball/master)
  - General components available at [adafruit.com](https://www.adafruit.com)


