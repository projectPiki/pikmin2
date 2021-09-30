.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __init_user
__init_user:
/* 800F2FB4 000EFEF4  7C 08 02 A6 */	mflr r0
/* 800F2FB8 000EFEF8  90 01 00 04 */	stw r0, 4(r1)
/* 800F2FBC 000EFEFC  94 21 FF F8 */	stwu r1, -8(r1)
/* 800F2FC0 000EFF00  48 00 00 15 */	bl __init_cpp
/* 800F2FC4 000EFF04  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800F2FC8 000EFF08  38 21 00 08 */	addi r1, r1, 8
/* 800F2FCC 000EFF0C  7C 08 03 A6 */	mtlr r0
/* 800F2FD0 000EFF10  4E 80 00 20 */	blr 

.global __init_cpp
__init_cpp:
/* 800F2FD4 000EFF14  7C 08 02 A6 */	mflr r0
/* 800F2FD8 000EFF18  90 01 00 04 */	stw r0, 4(r1)
/* 800F2FDC 000EFF1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800F2FE0 000EFF20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800F2FE4 000EFF24  3C 60 80 47 */	lis r3, __init_cpp_exceptions_reference@ha
/* 800F2FE8 000EFF28  38 03 2F 00 */	addi r0, r3, __init_cpp_exceptions_reference@l
/* 800F2FEC 000EFF2C  7C 1F 03 78 */	mr r31, r0
/* 800F2FF0 000EFF30  48 00 00 04 */	b lbl_800F2FF4
lbl_800F2FF4:
/* 800F2FF4 000EFF34  48 00 00 04 */	b lbl_800F2FF8
lbl_800F2FF8:
/* 800F2FF8 000EFF38  48 00 00 10 */	b lbl_800F3008
lbl_800F2FFC:
/* 800F2FFC 000EFF3C  7D 88 03 A6 */	mtlr r12
/* 800F3000 000EFF40  4E 80 00 21 */	blrl 
/* 800F3004 000EFF44  3B FF 00 04 */	addi r31, r31, 4
lbl_800F3008:
/* 800F3008 000EFF48  81 9F 00 00 */	lwz r12, 0(r31)
/* 800F300C 000EFF4C  28 0C 00 00 */	cmplwi r12, 0
/* 800F3010 000EFF50  40 82 FF EC */	bne lbl_800F2FFC
/* 800F3014 000EFF54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800F3018 000EFF58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800F301C 000EFF5C  38 21 00 10 */	addi r1, r1, 0x10
/* 800F3020 000EFF60  7C 08 03 A6 */	mtlr r0
/* 800F3024 000EFF64  4E 80 00 20 */	blr 

.global _ExitProcess
_ExitProcess:
/* 800F3028 000EFF68  7C 08 02 A6 */	mflr r0
/* 800F302C 000EFF6C  90 01 00 04 */	stw r0, 4(r1)
/* 800F3030 000EFF70  94 21 FF F8 */	stwu r1, -8(r1)
/* 800F3034 000EFF74  4B FE 15 65 */	bl PPCHalt
/* 800F3038 000EFF78  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800F303C 000EFF7C  38 21 00 08 */	addi r1, r1, 8
/* 800F3040 000EFF80  7C 08 03 A6 */	mtlr r0
/* 800F3044 000EFF84  4E 80 00 20 */	blr 
