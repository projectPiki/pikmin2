.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__9AppThreadFUlii
__ct__9AppThreadFUlii:
/* 80424E18 00421D58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80424E1C 00421D5C  7C 08 02 A6 */	mflr r0
/* 80424E20 00421D60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80424E24 00421D64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80424E28 00421D68  7C 7F 1B 78 */	mr r31, r3
/* 80424E2C 00421D6C  4B C0 08 0D */	bl __ct__9JKRThreadFUlii
/* 80424E30 00421D70  3C 80 80 4F */	lis r4, __vt__9AppThread@ha
/* 80424E34 00421D74  7F E3 FB 78 */	mr r3, r31
/* 80424E38 00421D78  38 04 BB 58 */	addi r0, r4, __vt__9AppThread@l
/* 80424E3C 00421D7C  90 1F 00 00 */	stw r0, 0(r31)
/* 80424E40 00421D80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80424E44 00421D84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80424E48 00421D88  7C 08 03 A6 */	mtlr r0
/* 80424E4C 00421D8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80424E50 00421D90  4E 80 00 20 */	blr 
