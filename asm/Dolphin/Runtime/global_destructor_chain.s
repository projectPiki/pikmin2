.include "macros.inc"
.section .dtors, "wa"  # 0x804732C0 - 0x804732E0
__destroy_global_chain_reference:
	.4byte __destroy_global_chain

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global __global_destructor_chain
__global_destructor_chain:
	.skip 4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __destroy_global_chain
__destroy_global_chain:
/* 800C16B8 000BE5F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C16BC 000BE5FC  7C 08 02 A6 */	mflr r0
/* 800C16C0 000BE600  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C16C4 000BE604  48 00 00 20 */	b .L_800C16E4
.L_800C16C8:
/* 800C16C8 000BE608  80 03 00 00 */	lwz r0, 0(r3)
/* 800C16CC 000BE60C  38 80 FF FF */	li r4, -1
/* 800C16D0 000BE610  90 0D 8C A0 */	stw r0, __global_destructor_chain@sda21(r13)
/* 800C16D4 000BE614  81 83 00 04 */	lwz r12, 4(r3)
/* 800C16D8 000BE618  80 63 00 08 */	lwz r3, 8(r3)
/* 800C16DC 000BE61C  7D 89 03 A6 */	mtctr r12
/* 800C16E0 000BE620  4E 80 04 21 */	bctrl 
.L_800C16E4:
/* 800C16E4 000BE624  80 6D 8C A0 */	lwz r3, __global_destructor_chain@sda21(r13)
/* 800C16E8 000BE628  28 03 00 00 */	cmplwi r3, 0
/* 800C16EC 000BE62C  40 82 FF DC */	bne .L_800C16C8
/* 800C16F0 000BE630  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C16F4 000BE634  7C 08 03 A6 */	mtlr r0
/* 800C16F8 000BE638  38 21 00 10 */	addi r1, r1, 0x10
/* 800C16FC 000BE63C  4E 80 00 20 */	blr 

.global __register_global_object
__register_global_object:
/* 800C1700 000BE640  80 0D 8C A0 */	lwz r0, __global_destructor_chain@sda21(r13)
/* 800C1704 000BE644  90 05 00 00 */	stw r0, 0(r5)
/* 800C1708 000BE648  90 85 00 04 */	stw r4, 4(r5)
/* 800C170C 000BE64C  90 65 00 08 */	stw r3, 8(r5)
/* 800C1710 000BE650  90 AD 8C A0 */	stw r5, __global_destructor_chain@sda21(r13)
/* 800C1714 000BE654  4E 80 00 20 */	blr 
