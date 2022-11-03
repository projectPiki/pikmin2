/*
Code sections:
    .init:    	0x00000100    0x80003100    0x80005600
    .text:    	0x00002600    0x800056C0    0x80472F00
Data sections:
    extab:    	0x000026E0    0x80005600    0x80005660
    extabindex: 0x00002740    0x80005660    0x800056C0
    .ctors:    	0x0046FF00    0x80472F00    0x804732C0
    .dtors:    	0x004702C0    0x804732C0    0x804732E0
    .rodata:    0x004702E0    0x804732E0    0x8049E220
    .data:    	0x0049B220    0x8049E220    0x804EFC20
    .sdata:    	0x004ECC20    0x80514680    0x80514D80
    .sdata2:    0x004ED320    0x80516360    0x80520E40
BSS section:
    .bss:    0x004ECC20    0x804EFC20    0x80520ED8
Entry Point: 0x80005240
*/
# PowerPC Register Constants
.set r0, 0
.set r1, 1
.set r2, 2
.set r3, 3
.set r4, 4
.set r5, 5
.set r6, 6
.set r7, 7
.set r8, 8
.set r9, 9
.set r10, 10
.set r11, 11
.set r12, 12
.set r13, 13
.set r14, 14
.set r15, 15
.set r16, 16
.set r17, 17
.set r18, 18
.set r19, 19
.set r20, 20
.set r21, 21
.set r22, 22
.set r23, 23
.set r24, 24
.set r25, 25
.set r26, 26
.set r27, 27
.set r28, 28
.set r29, 29
.set r30, 30
.set r31, 31
.set f0, 0
.set f1, 1
.set f2, 2
.set f3, 3
.set f4, 4
.set f5, 5
.set f6, 6
.set f7, 7
.set f8, 8
.set f9, 9
.set f10, 10
.set f11, 11
.set f12, 12
.set f13, 13
.set f14, 14
.set f15, 15
.set f16, 16
.set f17, 17
.set f18, 18
.set f19, 19
.set f20, 20
.set f21, 21
.set f22, 22
.set f23, 23
.set f24, 24
.set f25, 25
.set f26, 26
.set f27, 27
.set f28, 28
.set f29, 29
.set f30, 30
.set f31, 31
.set qr0, 0
.set qr1, 1
.set qr2, 2
.set qr3, 3
.set qr4, 4
.set qr5, 5
.set qr6, 6
.set qr7, 7
.if version == 1
# Small Data Area (read/write) Base
#.set _SDA_BASE_, 0x8051C5C0
# Small Data Area (read only) Base
#.set _SDA2_BASE_, 0x8051E2A0
.else
# Small Data Area (read/write) Base
#.set _SDA_BASE_, 0x8051C680
# Small Data Area (read only) Base
#.set _SDA2_BASE_, 0x8051E360
.endif

.macro fn visibility name
.\visibility \name
.type \name, @function
\name:
.endm

.macro obj visibility name
.\visibility \name
.type \name, @object
\name:
.endm

.macro end name
.size \name, . - \name
.endm
