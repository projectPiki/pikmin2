# Pikmin 2
Pikmin 2 disassembly/decompilation

## Modifying the MetroWerks compiler
More specifically, you need to modify the v2.7 linker as follows:

| Offset | From | To |
| :---: | :---: | :---: |
| 0x36510 | 0x74 | 0x75 |

Change 0x74 to 0x75 (fixes the destructor issue)
