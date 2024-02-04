# ECE372 remote controlled clock

This repository contains the firmware, PCB design, and 3d printing models for my remote controlled clock. I made it as my final ECE 372 project. It uses an infrared receiver to get commands from an IR remote. The remote communicates using the NEC protocol, so I wrote a state machine-based decoder which matches the [NEC protocol specificiations](https://techdocs.altium.com/display/FPGA/NEC+Infrared+Transmission+Protocol).

## Final product
![final product](<graphics/Final product.jpeg>)

