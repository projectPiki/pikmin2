.include "macros.inc"
.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.global fragmentID
fragmentID:
	.4byte 0xFFFFFFFE

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global GetR2__Fv
GetR2__Fv:
/* 800C22C4 000BF204  7C 43 13 78 */	mr r3, r2
/* 800C22C8 000BF208  4E 80 00 20 */	blr 

.global __fini_cpp_exceptions
__fini_cpp_exceptions:
/* 800C22CC 000BF20C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C22D0 000BF210  7C 08 02 A6 */	mflr r0
/* 800C22D4 000BF214  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C22D8 000BF218  80 6D 82 18 */	lwz r3, fragmentID@sda21(r13)
/* 800C22DC 000BF21C  2C 03 FF FE */	cmpwi r3, -2
/* 800C22E0 000BF220  41 82 00 10 */	beq .L_800C22F0
/* 800C22E4 000BF224  48 00 00 5D */	bl __unregister_fragment
/* 800C22E8 000BF228  38 00 FF FE */	li r0, -2
/* 800C22EC 000BF22C  90 0D 82 18 */	stw r0, fragmentID@sda21(r13)
.L_800C22F0:
/* 800C22F0 000BF230  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C22F4 000BF234  7C 08 03 A6 */	mtlr r0
/* 800C22F8 000BF238  38 21 00 10 */	addi r1, r1, 0x10
/* 800C22FC 000BF23C  4E 80 00 20 */	blr 

.global __init_cpp_exceptions
__init_cpp_exceptions:
/* 800C2300 000BF240  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C2304 000BF244  7C 08 02 A6 */	mflr r0
/* 800C2308 000BF248  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C230C 000BF24C  80 0D 82 18 */	lwz r0, fragmentID@sda21(r13)
/* 800C2310 000BF250  2C 00 FF FE */	cmpwi r0, -2
/* 800C2314 000BF254  40 82 00 1C */	bne .L_800C2330
/* 800C2318 000BF258  4B FF FF AD */	bl GetR2__Fv
/* 800C231C 000BF25C  3C A0 80 00 */	lis r5, lbl_8000569C@ha
/* 800C2320 000BF260  7C 64 1B 78 */	mr r4, r3
/* 800C2324 000BF264  38 65 56 9C */	addi r3, r5, lbl_8000569C@l
/* 800C2328 000BF268  48 00 00 4D */	bl __register_fragment
/* 800C232C 000BF26C  90 6D 82 18 */	stw r3, fragmentID@sda21(r13)
.L_800C2330:
/* 800C2330 000BF270  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C2334 000BF274  7C 08 03 A6 */	mtlr r0
/* 800C2338 000BF278  38 21 00 10 */	addi r1, r1, 0x10
/* 800C233C 000BF27C  4E 80 00 20 */	blr 
