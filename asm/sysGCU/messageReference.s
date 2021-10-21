.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q25P2JME10TReference
__vt__Q25P2JME10TReference:
	.4byte 0
	.4byte 0
	.4byte __dt__Q25P2JME10TReferenceFv
	.4byte do_word__Q25P2JME10TReferenceCFUl

.section .sbss # 0x80514D80 - 0x80516360
.balign 0x8
.global frm$674
frm$674:
	.skip 0x1
.global init$675
init$675:
	.skip 0x7

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 0x8
.global lbl_805208E8
lbl_805208E8:
	.4byte 0x83658358
	.4byte 0x83670000
.global lbl_805208F0
lbl_805208F0:
	.asciz "%d"
	.skip 1

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global do_word__Q25P2JME10TReferenceCFUl
do_word__Q25P2JME10TReferenceCFUl:
/* 8043DB18 0043AA58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043DB1C 0043AA5C  7C 08 02 A6 */	mflr r0
/* 8043DB20 0043AA60  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043DB24 0043AA64  88 0D 9B E9 */	lbz r0, init$675@sda21(r13)
/* 8043DB28 0043AA68  7C 00 07 75 */	extsb. r0, r0
/* 8043DB2C 0043AA6C  40 82 00 14 */	bne lbl_8043DB40
/* 8043DB30 0043AA70  38 60 00 22 */	li r3, 0x22
/* 8043DB34 0043AA74  38 00 00 01 */	li r0, 1
/* 8043DB38 0043AA78  98 6D 9B E8 */	stb r3, frm$674@sda21(r13)
/* 8043DB3C 0043AA7C  98 0D 9B E9 */	stb r0, init$675@sda21(r13)
lbl_8043DB40:
/* 8043DB40 0043AA80  88 6D 9B E8 */	lbz r3, frm$674@sda21(r13)
/* 8043DB44 0043AA84  28 04 00 00 */	cmplwi r4, 0
/* 8043DB48 0043AA88  38 03 00 01 */	addi r0, r3, 1
/* 8043DB4C 0043AA8C  98 0D 9B E8 */	stb r0, frm$674@sda21(r13)
/* 8043DB50 0043AA90  40 82 00 0C */	bne lbl_8043DB5C
/* 8043DB54 0043AA94  38 62 25 88 */	addi r3, r2, lbl_805208E8@sda21
/* 8043DB58 0043AA98  48 00 00 24 */	b lbl_8043DB7C
lbl_8043DB5C:
/* 8043DB5C 0043AA9C  3C 60 80 4F */	lis r3, str$673@ha
/* 8043DB60 0043AAA0  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 8043DB64 0043AAA4  38 63 7C 70 */	addi r3, r3, str$673@l
/* 8043DB68 0043AAA8  38 82 25 90 */	addi r4, r2, lbl_805208F0@sda21
/* 8043DB6C 0043AAAC  4C C6 31 82 */	crclr 6
/* 8043DB70 0043AAB0  4B C8 98 C9 */	bl sprintf
/* 8043DB74 0043AAB4  3C 60 80 4F */	lis r3, str$673@ha
/* 8043DB78 0043AAB8  38 63 7C 70 */	addi r3, r3, str$673@l
lbl_8043DB7C:
/* 8043DB7C 0043AABC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043DB80 0043AAC0  7C 08 03 A6 */	mtlr r0
/* 8043DB84 0043AAC4  38 21 00 10 */	addi r1, r1, 0x10
/* 8043DB88 0043AAC8  4E 80 00 20 */	blr 

.global __dt__Q25P2JME10TReferenceFv
__dt__Q25P2JME10TReferenceFv:
/* 8043DB8C 0043AACC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043DB90 0043AAD0  7C 08 02 A6 */	mflr r0
/* 8043DB94 0043AAD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043DB98 0043AAD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8043DB9C 0043AADC  7C 9F 23 78 */	mr r31, r4
/* 8043DBA0 0043AAE0  93 C1 00 08 */	stw r30, 8(r1)
/* 8043DBA4 0043AAE4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8043DBA8 0043AAE8  41 82 00 28 */	beq lbl_8043DBD0
/* 8043DBAC 0043AAEC  3C A0 80 4F */	lis r5, __vt__Q25P2JME10TReference@ha
/* 8043DBB0 0043AAF0  38 80 00 00 */	li r4, 0
/* 8043DBB4 0043AAF4  38 05 CB E0 */	addi r0, r5, __vt__Q25P2JME10TReference@l
/* 8043DBB8 0043AAF8  90 1E 00 00 */	stw r0, 0(r30)
/* 8043DBBC 0043AAFC  4B BC 91 51 */	bl __dt__Q28JMessage10TReferenceFv
/* 8043DBC0 0043AB00  7F E0 07 35 */	extsh. r0, r31
/* 8043DBC4 0043AB04  40 81 00 0C */	ble lbl_8043DBD0
/* 8043DBC8 0043AB08  7F C3 F3 78 */	mr r3, r30
/* 8043DBCC 0043AB0C  4B BE 64 E9 */	bl __dl__FPv
lbl_8043DBD0:
/* 8043DBD0 0043AB10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043DBD4 0043AB14  7F C3 F3 78 */	mr r3, r30
/* 8043DBD8 0043AB18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043DBDC 0043AB1C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8043DBE0 0043AB20  7C 08 03 A6 */	mtlr r0
/* 8043DBE4 0043AB24  38 21 00 10 */	addi r1, r1, 0x10
/* 8043DBE8 0043AB28  4E 80 00 20 */	blr 
