.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__12MapCollision
__vt__12MapCollision:
	.4byte 0
	.4byte 0
	.4byte __dt__12MapCollisionFv
	.4byte getChildCount__5CNodeFv
	.4byte getBoundBox__12MapCollisionFR8BoundBox
	.4byte getCurrTri__12MapCollisionFRQ24Game11CurrTriInfo
	.4byte createTriangles__12MapCollisionFRQ23Sys17CreateTriangleArg
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global getCurrTri__12MapCollisionFRQ24Game11CurrTriInfo
getCurrTri__12MapCollisionFRQ24Game11CurrTriInfo:
/* 8041A030 00416F70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8041A034 00416F74  7C 08 02 A6 */	mflr r0
/* 8041A038 00416F78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8041A03C 00416F7C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8041A040 00416F80  81 83 00 00 */	lwz r12, 0(r3)
/* 8041A044 00416F84  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8041A048 00416F88  7D 89 03 A6 */	mtctr r12
/* 8041A04C 00416F8C  4E 80 04 21 */	bctrl 
/* 8041A050 00416F90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8041A054 00416F94  7C 08 03 A6 */	mtlr r0
/* 8041A058 00416F98  38 21 00 10 */	addi r1, r1, 0x10
/* 8041A05C 00416F9C  4E 80 00 20 */	blr 

.global read__12MapCollisionFR6Stream
read__12MapCollisionFR6Stream:
/* 8041A060 00416FA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8041A064 00416FA4  7C 08 02 A6 */	mflr r0
/* 8041A068 00416FA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8041A06C 00416FAC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8041A070 00416FB0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8041A074 00416FB4  7C 9E 23 78 */	mr r30, r4
/* 8041A078 00416FB8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8041A07C 00416FBC  7C 7D 1B 78 */	mr r29, r3
/* 8041A080 00416FC0  38 60 00 4C */	li r3, 0x4c
/* 8041A084 00416FC4  4B C0 9E 21 */	bl __nw__FUl
/* 8041A088 00416FC8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8041A08C 00416FCC  41 82 00 50 */	beq lbl_8041A0DC
/* 8041A090 00416FD0  4B FF 73 01 */	bl __ct__5CNodeFv
/* 8041A094 00416FD4  3C 80 80 4F */	lis r4, __vt__Q23Sys10TriDivider@ha
/* 8041A098 00416FD8  3C 60 80 4F */	lis r3, __vt__Q23Sys11GridDivider@ha
/* 8041A09C 00416FDC  38 04 BA 10 */	addi r0, r4, __vt__Q23Sys10TriDivider@l
/* 8041A0A0 00416FE0  C0 22 1F F0 */	lfs f1, lbl_80520350@sda21(r2)
/* 8041A0A4 00416FE4  90 1F 00 00 */	stw r0, 0(r31)
/* 8041A0A8 00416FE8  38 63 B6 C4 */	addi r3, r3, __vt__Q23Sys11GridDivider@l
/* 8041A0AC 00416FEC  C0 02 1F F4 */	lfs f0, lbl_80520354@sda21(r2)
/* 8041A0B0 00416FF0  38 00 00 00 */	li r0, 0
/* 8041A0B4 00416FF4  90 7F 00 00 */	stw r3, 0(r31)
/* 8041A0B8 00416FF8  D0 3F 00 2C */	stfs f1, 0x2c(r31)
/* 8041A0BC 00416FFC  D0 3F 00 30 */	stfs f1, 0x30(r31)
/* 8041A0C0 00417000  D0 3F 00 34 */	stfs f1, 0x34(r31)
/* 8041A0C4 00417004  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 8041A0C8 00417008  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 8041A0CC 0041700C  D0 1F 00 40 */	stfs f0, 0x40(r31)
/* 8041A0D0 00417010  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8041A0D4 00417014  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8041A0D8 00417018  90 1F 00 20 */	stw r0, 0x20(r31)
lbl_8041A0DC:
/* 8041A0DC 0041701C  93 FD 00 18 */	stw r31, 0x18(r29)
/* 8041A0E0 00417020  7F C4 F3 78 */	mr r4, r30
/* 8041A0E4 00417024  80 7D 00 18 */	lwz r3, 0x18(r29)
/* 8041A0E8 00417028  81 83 00 00 */	lwz r12, 0(r3)
/* 8041A0EC 0041702C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8041A0F0 00417030  7D 89 03 A6 */	mtctr r12
/* 8041A0F4 00417034  4E 80 04 21 */	bctrl 
/* 8041A0F8 00417038  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8041A0FC 0041703C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8041A100 00417040  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8041A104 00417044  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8041A108 00417048  7C 08 03 A6 */	mtlr r0
/* 8041A10C 0041704C  38 21 00 20 */	addi r1, r1, 0x20
/* 8041A110 00417050  4E 80 00 20 */	blr 

.global clone__12MapCollisionFR7Matrixf
clone__12MapCollisionFR7Matrixf:
/* 8041A114 00417054  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8041A118 00417058  7C 08 02 A6 */	mflr r0
/* 8041A11C 0041705C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8041A120 00417060  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8041A124 00417064  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8041A128 00417068  7C 9E 23 78 */	mr r30, r4
/* 8041A12C 0041706C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8041A130 00417070  7C 7D 1B 78 */	mr r29, r3
/* 8041A134 00417074  38 60 00 1C */	li r3, 0x1c
/* 8041A138 00417078  4B C0 9D 6D */	bl __nw__FUl
/* 8041A13C 0041707C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8041A140 00417080  41 82 00 14 */	beq lbl_8041A154
/* 8041A144 00417084  4B FF 72 4D */	bl __ct__5CNodeFv
/* 8041A148 00417088  3C 60 80 4F */	lis r3, __vt__12MapCollision@ha
/* 8041A14C 0041708C  38 03 B6 F8 */	addi r0, r3, __vt__12MapCollision@l
/* 8041A150 00417090  90 1F 00 00 */	stw r0, 0(r31)
lbl_8041A154:
/* 8041A154 00417094  80 7D 00 18 */	lwz r3, 0x18(r29)
/* 8041A158 00417098  7F C4 F3 78 */	mr r4, r30
/* 8041A15C 0041709C  81 83 00 00 */	lwz r12, 0(r3)
/* 8041A160 004170A0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8041A164 004170A4  7D 89 03 A6 */	mtctr r12
/* 8041A168 004170A8  4E 80 04 21 */	bctrl 
/* 8041A16C 004170AC  90 7F 00 18 */	stw r3, 0x18(r31)
/* 8041A170 004170B0  7F E3 FB 78 */	mr r3, r31
/* 8041A174 004170B4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8041A178 004170B8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8041A17C 004170BC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8041A180 004170C0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8041A184 004170C4  7C 08 03 A6 */	mtlr r0
/* 8041A188 004170C8  38 21 00 20 */	addi r1, r1, 0x20
/* 8041A18C 004170CC  4E 80 00 20 */	blr 
