.include "macros.inc"
.section .text, "ax"  # 0x800056C0 - 0x80472F00
.balign 32, 0
.global TRKAccessFile
TRKAccessFile:
	twui r0, 0
	blr 
.global TRKOpenFile
TRKOpenFile:
	twui r0, 0
	blr 
.global TRKCloseFile
TRKCloseFile:
	twui r0, 0
	blr 
.global TRKPositionFile
TRKPositionFile:
	twui r0, 0
	blr 
