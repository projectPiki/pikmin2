.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80480168
lbl_80480168:
	.4byte 0x706C6174
	.4byte 0x2D6F6262
	.4byte 0x00000000
.global lbl_80480174
lbl_80480174:
	.4byte 0x706C6174
	.4byte 0x696E7374
	.4byte 0x616E6365
	.4byte 0x00000000
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q24Game7PlatMgr
__vt__Q24Game7PlatMgr:
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game7PlatMgrFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__32Container<Q24Game12PlatInstance>FPv"
	.4byte "getNext__36NodeObjectMgr<Q24Game12PlatInstance>FPv"
	.4byte "getStart__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "getEnd__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "get__36NodeObjectMgr<Q24Game12PlatInstance>FPv"
	.4byte "getAt__32Container<Q24Game12PlatInstance>Fi"
	.4byte "getTo__32Container<Q24Game12PlatInstance>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "@28@doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "@28@doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"
	.4byte "@28@doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "@28@doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"
	.4byte "@28@doDirectDraw__Q24Game7PlatMgrFR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"
	.4byte "doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"
	.4byte doDirectDraw__Q24Game7PlatMgrFR8Graphics
	.4byte "resetMgr__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte findRayIntersection__Q24Game7PlatMgrFRQ23Sys16RayIntersectInfo
.global "__vt__31Iterator<Q24Game12PlatInstance>"
"__vt__31Iterator<Q24Game12PlatInstance>":
	.4byte 0
	.4byte 0
	.4byte "first__31Iterator<Q24Game12PlatInstance>Fv"
	.4byte "next__31Iterator<Q24Game12PlatInstance>Fv"
	.4byte "isDone__31Iterator<Q24Game12PlatInstance>Fv"
	.4byte "__ml__31Iterator<Q24Game12PlatInstance>Fv"
.global "__vt__34TObjectNode<Q24Game12PlatInstance>"
"__vt__34TObjectNode<Q24Game12PlatInstance>":
	.4byte 0
	.4byte 0
	.4byte "__dt__34TObjectNode<Q24Game12PlatInstance>Fv"
	.4byte getChildCount__5CNodeFv
.global "__vt__36NodeObjectMgr<Q24Game12PlatInstance>"
"__vt__36NodeObjectMgr<Q24Game12PlatInstance>":
	.4byte 0
	.4byte 0
	.4byte "__dt__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__32Container<Q24Game12PlatInstance>FPv"
	.4byte "getNext__36NodeObjectMgr<Q24Game12PlatInstance>FPv"
	.4byte "getStart__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "getEnd__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "get__36NodeObjectMgr<Q24Game12PlatInstance>FPv"
	.4byte "getAt__32Container<Q24Game12PlatInstance>Fi"
	.4byte "getTo__32Container<Q24Game12PlatInstance>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "@28@doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "@28@doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"
	.4byte "@28@doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "@28@doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"
	.4byte "@28@doDirectDraw__32ObjectMgr<Q24Game12PlatInstance>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"
	.4byte "doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"
	.4byte "doDirectDraw__32ObjectMgr<Q24Game12PlatInstance>FR8Graphics"
	.4byte "resetMgr__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
.global "__vt__32ObjectMgr<Q24Game12PlatInstance>"
"__vt__32ObjectMgr<Q24Game12PlatInstance>":
	.4byte 0
	.4byte 0
	.4byte "__dt__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__32Container<Q24Game12PlatInstance>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__32Container<Q24Game12PlatInstance>Fi"
	.4byte "getTo__32Container<Q24Game12PlatInstance>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "@28@doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "@28@doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"
	.4byte "@28@doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "@28@doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"
	.4byte "@28@doDirectDraw__32ObjectMgr<Q24Game12PlatInstance>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"
	.4byte "doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"
	.4byte "doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"
	.4byte "doDirectDraw__32ObjectMgr<Q24Game12PlatInstance>FR8Graphics"
.global "__vt__32Container<Q24Game12PlatInstance>"
"__vt__32Container<Q24Game12PlatInstance>":
	.4byte 0
	.4byte 0
	.4byte "__dt__32Container<Q24Game12PlatInstance>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__32Container<Q24Game12PlatInstance>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__32Container<Q24Game12PlatInstance>Fi"
	.4byte "getTo__32Container<Q24Game12PlatInstance>Fv"
.global __vt__Q24Game12PlatInstance
__vt__Q24Game12PlatInstance:
	.4byte 0
	.4byte 0
	.4byte getPosition__Q24Game12PlatInstanceFv
	.4byte checkCollision__Q24Game12PlatInstanceFPQ24Game10CellObject
	.4byte getBoundingSphere__Q24Game12PlatInstanceFRQ23Sys6Sphere
	.4byte collisionUpdatable__Q24Game12PlatInstanceFv
	.4byte isPiki__Q24Game10CellObjectFv
	.4byte isNavi__Q24Game10CellObjectFv
	.4byte deferPikiCollision__Q24Game10CellObjectFv
	.4byte getTypeName__Q24Game12PlatInstanceFv
	.4byte getObjType__Q24Game12PlatInstanceFv
	.4byte constructor__Q24Game12PlatInstanceFv
	.4byte doAnimation__Q24Game12PlatInstanceFv
	.4byte doEntry__Q24Game12PlatInstanceFv
	.4byte doSetView__Q24Game12PlatInstanceFi
	.4byte doViewCalc__Q24Game12PlatInstanceFv
	.4byte doSimulation__Q24Game12PlatInstanceFf
	.4byte doDirectDraw__Q24Game12PlatInstanceFR8Graphics
	.4byte 0

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.global useFixCollision__Q24Game12PlatInstance
useFixCollision__Q24Game12PlatInstance:
	.byte 0x1
.global mUseCellMgr__Q24Game7PlatMgr
mUseCellMgr__Q24Game7PlatMgr:
	.byte 0x1
	.byte 0x0
	.byte 0x0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global platMgr__4Game
platMgr__4Game:
	.skip 0x8

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80519588
lbl_80519588:
	.4byte 0x00000000
.global lbl_8051958C
lbl_8051958C:
	.4byte 0x4B435000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setCollision__Q24Game12PlatInstanceFb
setCollision__Q24Game12PlatInstanceFb:
/* 801C4BD4 001C1B14  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 801C4BD8 001C1B18  41 82 00 14 */	beq lbl_801C4BEC
/* 801C4BDC 001C1B1C  88 03 01 08 */	lbz r0, 0x108(r3)
/* 801C4BE0 001C1B20  60 00 00 01 */	ori r0, r0, 1
/* 801C4BE4 001C1B24  98 03 01 08 */	stb r0, 0x108(r3)
/* 801C4BE8 001C1B28  4E 80 00 20 */	blr 
lbl_801C4BEC:
/* 801C4BEC 001C1B2C  88 03 01 08 */	lbz r0, 0x108(r3)
/* 801C4BF0 001C1B30  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 801C4BF4 001C1B34  98 03 01 08 */	stb r0, 0x108(r3)
/* 801C4BF8 001C1B38  4E 80 00 20 */	blr 

.global getPosition__Q24Game12PlatInstanceFv
getPosition__Q24Game12PlatInstanceFv:
/* 801C4BFC 001C1B3C  80 84 00 B8 */	lwz r4, 0xb8(r4)
/* 801C4C00 001C1B40  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 801C4C04 001C1B44  C0 44 00 2C */	lfs f2, 0x2c(r4)
/* 801C4C08 001C1B48  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 801C4C0C 001C1B4C  D0 03 00 00 */	stfs f0, 0(r3)
/* 801C4C10 001C1B50  D0 23 00 04 */	stfs f1, 4(r3)
/* 801C4C14 001C1B54  D0 43 00 08 */	stfs f2, 8(r3)
/* 801C4C18 001C1B58  4E 80 00 20 */	blr 

.global getBoundingSphere__Q24Game12PlatInstanceFRQ23Sys6Sphere
getBoundingSphere__Q24Game12PlatInstanceFRQ23Sys6Sphere:
/* 801C4C1C 001C1B5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C4C20 001C1B60  7C 08 02 A6 */	mflr r0
/* 801C4C24 001C1B64  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C4C28 001C1B68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C4C2C 001C1B6C  7C 9F 23 78 */	mr r31, r4
/* 801C4C30 001C1B70  80 63 00 EC */	lwz r3, 0xec(r3)
/* 801C4C34 001C1B74  4B F6 EA B9 */	bl getTriDivider__8PlatformFv
/* 801C4C38 001C1B78  C0 03 01 20 */	lfs f0, 0x120(r3)
/* 801C4C3C 001C1B7C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801C4C40 001C1B80  C0 03 01 24 */	lfs f0, 0x124(r3)
/* 801C4C44 001C1B84  D0 1F 00 04 */	stfs f0, 4(r31)
/* 801C4C48 001C1B88  C0 03 01 28 */	lfs f0, 0x128(r3)
/* 801C4C4C 001C1B8C  D0 1F 00 08 */	stfs f0, 8(r31)
/* 801C4C50 001C1B90  C0 03 01 2C */	lfs f0, 0x12c(r3)
/* 801C4C54 001C1B94  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 801C4C58 001C1B98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C4C5C 001C1B9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C4C60 001C1BA0  7C 08 03 A6 */	mtlr r0
/* 801C4C64 001C1BA4  38 21 00 10 */	addi r1, r1, 0x10
/* 801C4C68 001C1BA8  4E 80 00 20 */	blr 

.global getCurrTri__Q24Game12PlatInstanceFRQ24Game11CurrTriInfo
getCurrTri__Q24Game12PlatInstanceFRQ24Game11CurrTriInfo:
/* 801C4C6C 001C1BAC  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 801C4C70 001C1BB0  7C 08 02 A6 */	mflr r0
/* 801C4C74 001C1BB4  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 801C4C78 001C1BB8  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 801C4C7C 001C1BBC  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 801C4C80 001C1BC0  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 801C4C84 001C1BC4  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 801C4C88 001C1BC8  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 801C4C8C 001C1BCC  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 801C4C90 001C1BD0  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 801C4C94 001C1BD4  93 C1 00 88 */	stw r30, 0x88(r1)
/* 801C4C98 001C1BD8  7C 7E 1B 78 */	mr r30, r3
/* 801C4C9C 001C1BDC  7C 9F 23 78 */	mr r31, r4
/* 801C4CA0 001C1BE0  80 63 00 B8 */	lwz r3, 0xb8(r3)
/* 801C4CA4 001C1BE4  38 81 00 50 */	addi r4, r1, 0x50
/* 801C4CA8 001C1BE8  4B F2 56 25 */	bl PSMTXCopy
/* 801C4CAC 001C1BEC  88 0D 84 48 */	lbz r0, useFixCollision__Q24Game12PlatInstance@sda21(r13)
/* 801C4CB0 001C1BF0  28 00 00 00 */	cmplwi r0, 0
/* 801C4CB4 001C1BF4  41 82 00 10 */	beq .L_801C4CC4
/* 801C4CB8 001C1BF8  88 1E 01 08 */	lbz r0, 0x108(r30)
/* 801C4CBC 001C1BFC  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 801C4CC0 001C1C00  40 82 00 10 */	bne .L_801C4CD0
.L_801C4CC4:
/* 801C4CC4 001C1C04  38 61 00 50 */	addi r3, r1, 0x50
/* 801C4CC8 001C1C08  38 81 00 20 */	addi r4, r1, 0x20
/* 801C4CCC 001C1C0C  4B F2 57 51 */	bl PSMTXInverse
.L_801C4CD0:
/* 801C4CD0 001C1C10  88 0D 84 48 */	lbz r0, useFixCollision__Q24Game12PlatInstance@sda21(r13)
/* 801C4CD4 001C1C14  28 00 00 00 */	cmplwi r0, 0
/* 801C4CD8 001C1C18  41 82 00 30 */	beq .L_801C4D08
/* 801C4CDC 001C1C1C  88 1E 01 08 */	lbz r0, 0x108(r30)
/* 801C4CE0 001C1C20  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 801C4CE4 001C1C24  41 82 00 24 */	beq .L_801C4D08
/* 801C4CE8 001C1C28  7F E4 FB 78 */	mr r4, r31
/* 801C4CEC 001C1C2C  38 7E 00 BC */	addi r3, r30, 0xbc
/* 801C4CF0 001C1C30  38 A1 00 14 */	addi r5, r1, 0x14
/* 801C4CF4 001C1C34  4B F2 5E E5 */	bl PSMTXMultVec
/* 801C4CF8 001C1C38  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801C4CFC 001C1C3C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801C4D00 001C1C40  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 801C4D04 001C1C44  48 00 00 20 */	b .L_801C4D24
.L_801C4D08:
/* 801C4D08 001C1C48  7F E4 FB 78 */	mr r4, r31
/* 801C4D0C 001C1C4C  38 61 00 20 */	addi r3, r1, 0x20
/* 801C4D10 001C1C50  38 A1 00 08 */	addi r5, r1, 8
/* 801C4D14 001C1C54  4B F2 5E C5 */	bl PSMTXMultVec
/* 801C4D18 001C1C58  C0 01 00 08 */	lfs f0, 8(r1)
/* 801C4D1C 001C1C5C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801C4D20 001C1C60  C0 41 00 10 */	lfs f2, 0x10(r1)
.L_801C4D24:
/* 801C4D24 001C1C64  C3 FF 00 00 */	lfs f31, 0(r31)
/* 801C4D28 001C1C68  C3 DF 00 04 */	lfs f30, 4(r31)
/* 801C4D2C 001C1C6C  C3 BF 00 08 */	lfs f29, 8(r31)
/* 801C4D30 001C1C70  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801C4D34 001C1C74  D0 3F 00 04 */	stfs f1, 4(r31)
/* 801C4D38 001C1C78  D0 5F 00 08 */	stfs f2, 8(r31)
/* 801C4D3C 001C1C7C  80 7E 00 EC */	lwz r3, 0xec(r30)
/* 801C4D40 001C1C80  4B F6 E9 AD */	bl getTriDivider__8PlatformFv
/* 801C4D44 001C1C84  81 83 00 00 */	lwz r12, 0(r3)
/* 801C4D48 001C1C88  7F E4 FB 78 */	mr r4, r31
/* 801C4D4C 001C1C8C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C4D50 001C1C90  7D 89 03 A6 */	mtctr r12
/* 801C4D54 001C1C94  4E 80 04 21 */	bctrl 
/* 801C4D58 001C1C98  D3 FF 00 00 */	stfs f31, 0(r31)
/* 801C4D5C 001C1C9C  D3 DF 00 04 */	stfs f30, 4(r31)
/* 801C4D60 001C1CA0  D3 BF 00 08 */	stfs f29, 8(r31)
/* 801C4D64 001C1CA4  88 1F 00 0D */	lbz r0, 0xd(r31)
/* 801C4D68 001C1CA8  28 00 00 00 */	cmplwi r0, 0
/* 801C4D6C 001C1CAC  41 82 00 E0 */	beq .L_801C4E4C
/* 801C4D70 001C1CB0  88 0D 84 48 */	lbz r0, useFixCollision__Q24Game12PlatInstance@sda21(r13)
/* 801C4D74 001C1CB4  28 00 00 00 */	cmplwi r0, 0
/* 801C4D78 001C1CB8  41 82 00 74 */	beq .L_801C4DEC
/* 801C4D7C 001C1CBC  88 1E 01 08 */	lbz r0, 0x108(r30)
/* 801C4D80 001C1CC0  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 801C4D84 001C1CC4  41 82 00 68 */	beq .L_801C4DEC
/* 801C4D88 001C1CC8  C0 FF 00 24 */	lfs f7, 0x24(r31)
/* 801C4D8C 001C1CCC  C0 21 00 54 */	lfs f1, 0x54(r1)
/* 801C4D90 001C1CD0  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 801C4D94 001C1CD4  EC 27 00 72 */	fmuls f1, f7, f1
/* 801C4D98 001C1CD8  C1 1F 00 20 */	lfs f8, 0x20(r31)
/* 801C4D9C 001C1CDC  C0 81 00 50 */	lfs f4, 0x50(r1)
/* 801C4DA0 001C1CE0  EC 47 00 32 */	fmuls f2, f7, f0
/* 801C4DA4 001C1CE4  C0 01 00 74 */	lfs f0, 0x74(r1)
/* 801C4DA8 001C1CE8  C0 61 00 60 */	lfs f3, 0x60(r1)
/* 801C4DAC 001C1CEC  EC A8 09 3A */	fmadds f5, f8, f4, f1
/* 801C4DB0 001C1CF0  C1 3F 00 28 */	lfs f9, 0x28(r31)
/* 801C4DB4 001C1CF4  C0 C1 00 58 */	lfs f6, 0x58(r1)
/* 801C4DB8 001C1CF8  EC 07 00 32 */	fmuls f0, f7, f0
/* 801C4DBC 001C1CFC  C0 21 00 70 */	lfs f1, 0x70(r1)
/* 801C4DC0 001C1D00  EC 68 10 FA */	fmadds f3, f8, f3, f2
/* 801C4DC4 001C1D04  C0 81 00 68 */	lfs f4, 0x68(r1)
/* 801C4DC8 001C1D08  EC A9 29 BA */	fmadds f5, f9, f6, f5
/* 801C4DCC 001C1D0C  C0 41 00 78 */	lfs f2, 0x78(r1)
/* 801C4DD0 001C1D10  EC 08 00 7A */	fmadds f0, f8, f1, f0
/* 801C4DD4 001C1D14  EC 29 19 3A */	fmadds f1, f9, f4, f3
/* 801C4DD8 001C1D18  D0 BF 00 20 */	stfs f5, 0x20(r31)
/* 801C4DDC 001C1D1C  EC 09 00 BA */	fmadds f0, f9, f2, f0
/* 801C4DE0 001C1D20  D0 3F 00 24 */	stfs f1, 0x24(r31)
/* 801C4DE4 001C1D24  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 801C4DE8 001C1D28  48 00 00 64 */	b .L_801C4E4C
.L_801C4DEC:
/* 801C4DEC 001C1D2C  C0 FF 00 24 */	lfs f7, 0x24(r31)
/* 801C4DF0 001C1D30  C0 21 00 54 */	lfs f1, 0x54(r1)
/* 801C4DF4 001C1D34  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 801C4DF8 001C1D38  EC 27 00 72 */	fmuls f1, f7, f1
/* 801C4DFC 001C1D3C  C1 1F 00 20 */	lfs f8, 0x20(r31)
/* 801C4E00 001C1D40  C0 81 00 50 */	lfs f4, 0x50(r1)
/* 801C4E04 001C1D44  EC 47 00 32 */	fmuls f2, f7, f0
/* 801C4E08 001C1D48  C0 01 00 74 */	lfs f0, 0x74(r1)
/* 801C4E0C 001C1D4C  C0 61 00 60 */	lfs f3, 0x60(r1)
/* 801C4E10 001C1D50  EC A8 09 3A */	fmadds f5, f8, f4, f1
/* 801C4E14 001C1D54  C1 3F 00 28 */	lfs f9, 0x28(r31)
/* 801C4E18 001C1D58  C0 C1 00 58 */	lfs f6, 0x58(r1)
/* 801C4E1C 001C1D5C  EC 07 00 32 */	fmuls f0, f7, f0
/* 801C4E20 001C1D60  C0 21 00 70 */	lfs f1, 0x70(r1)
/* 801C4E24 001C1D64  EC 68 10 FA */	fmadds f3, f8, f3, f2
/* 801C4E28 001C1D68  C0 81 00 68 */	lfs f4, 0x68(r1)
/* 801C4E2C 001C1D6C  EC A9 29 BA */	fmadds f5, f9, f6, f5
/* 801C4E30 001C1D70  C0 41 00 78 */	lfs f2, 0x78(r1)
/* 801C4E34 001C1D74  EC 08 00 7A */	fmadds f0, f8, f1, f0
/* 801C4E38 001C1D78  EC 29 19 3A */	fmadds f1, f9, f4, f3
/* 801C4E3C 001C1D7C  D0 BF 00 20 */	stfs f5, 0x20(r31)
/* 801C4E40 001C1D80  EC 09 00 BA */	fmadds f0, f9, f2, f0
/* 801C4E44 001C1D84  D0 3F 00 24 */	stfs f1, 0x24(r31)
/* 801C4E48 001C1D88  D0 1F 00 28 */	stfs f0, 0x28(r31)
.L_801C4E4C:
/* 801C4E4C 001C1D8C  88 1F 00 0D */	lbz r0, 0xd(r31)
/* 801C4E50 001C1D90  28 00 00 00 */	cmplwi r0, 0
/* 801C4E54 001C1D94  41 82 00 3C */	beq .L_801C4E90
/* 801C4E58 001C1D98  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 801C4E5C 001C1D9C  38 00 00 00 */	li r0, 0
/* 801C4E60 001C1DA0  C0 5F 00 1C */	lfs f2, 0x1c(r31)
/* 801C4E64 001C1DA4  C0 23 00 14 */	lfs f1, 0x14(r3)
/* 801C4E68 001C1DA8  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 801C4E6C 001C1DAC  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 801C4E70 001C1DB0  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 801C4E74 001C1DB4  80 7E 00 B8 */	lwz r3, 0xb8(r30)
/* 801C4E78 001C1DB8  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 801C4E7C 001C1DBC  C0 23 00 14 */	lfs f1, 0x14(r3)
/* 801C4E80 001C1DC0  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 801C4E84 001C1DC4  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 801C4E88 001C1DC8  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 801C4E8C 001C1DCC  98 1F 00 0D */	stb r0, 0xd(r31)
.L_801C4E90:
/* 801C4E90 001C1DD0  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 801C4E94 001C1DD4  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 801C4E98 001C1DD8  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 801C4E9C 001C1DDC  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 801C4EA0 001C1DE0  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 801C4EA4 001C1DE4  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 801C4EA8 001C1DE8  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 801C4EAC 001C1DEC  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 801C4EB0 001C1DF0  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 801C4EB4 001C1DF4  7C 08 03 A6 */	mtlr r0
/* 801C4EB8 001C1DF8  38 21 00 C0 */	addi r1, r1, 0xc0
/* 801C4EBC 001C1DFC  4E 80 00 20 */	blr 

.global traceMove__Q24Game12PlatInstanceFRQ24Game8MoveInfof
traceMove__Q24Game12PlatInstanceFRQ24Game8MoveInfof:
/* 801C4EC0 001C1E00  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 801C4EC4 001C1E04  7C 08 02 A6 */	mflr r0
/* 801C4EC8 001C1E08  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 801C4ECC 001C1E0C  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 801C4ED0 001C1E10  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 801C4ED4 001C1E14  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 801C4ED8 001C1E18  93 C1 00 C8 */	stw r30, 0xc8(r1)
/* 801C4EDC 001C1E1C  93 A1 00 C4 */	stw r29, 0xc4(r1)
/* 801C4EE0 001C1E20  93 81 00 C0 */	stw r28, 0xc0(r1)
/* 801C4EE4 001C1E24  88 0D 84 58 */	lbz r0, mTraceMoveOptLevel__Q24Game6MapMgr@sda21(r13)
/* 801C4EE8 001C1E28  FF E0 08 90 */	fmr f31, f1
/* 801C4EEC 001C1E2C  7C 7C 1B 78 */	mr r28, r3
/* 801C4EF0 001C1E30  7C 9D 23 78 */	mr r29, r4
/* 801C4EF4 001C1E34  28 00 00 02 */	cmplwi r0, 2
/* 801C4EF8 001C1E38  41 80 00 68 */	blt .L_801C4F60
/* 801C4EFC 001C1E3C  80 7C 00 EC */	lwz r3, 0xec(r28)
/* 801C4F00 001C1E40  4B F6 E7 ED */	bl getTriDivider__8PlatformFv
/* 801C4F04 001C1E44  C0 A3 01 20 */	lfs f5, 0x120(r3)
/* 801C4F08 001C1E48  D0 A1 00 08 */	stfs f5, 8(r1)
/* 801C4F0C 001C1E4C  C0 83 01 24 */	lfs f4, 0x124(r3)
/* 801C4F10 001C1E50  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 801C4F14 001C1E54  C0 63 01 28 */	lfs f3, 0x128(r3)
/* 801C4F18 001C1E58  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 801C4F1C 001C1E5C  C0 03 01 2C */	lfs f0, 0x12c(r3)
/* 801C4F20 001C1E60  38 61 00 08 */	addi r3, r1, 8
/* 801C4F24 001C1E64  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801C4F28 001C1E68  80 9C 00 B8 */	lwz r4, 0xb8(r28)
/* 801C4F2C 001C1E6C  C0 44 00 2C */	lfs f2, 0x2c(r4)
/* 801C4F30 001C1E70  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 801C4F34 001C1E74  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 801C4F38 001C1E78  EC 43 10 2A */	fadds f2, f3, f2
/* 801C4F3C 001C1E7C  EC 24 08 2A */	fadds f1, f4, f1
/* 801C4F40 001C1E80  EC 05 00 2A */	fadds f0, f5, f0
/* 801C4F44 001C1E84  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 801C4F48 001C1E88  D0 01 00 08 */	stfs f0, 8(r1)
/* 801C4F4C 001C1E8C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801C4F50 001C1E90  80 9D 00 00 */	lwz r4, 0(r29)
/* 801C4F54 001C1E94  48 25 0F C1 */	bl intersect__Q23Sys6SphereFRQ23Sys6Sphere
/* 801C4F58 001C1E98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C4F5C 001C1E9C  41 82 02 20 */	beq .L_801C517C
.L_801C4F60:
/* 801C4F60 001C1EA0  80 7C 00 B8 */	lwz r3, 0xb8(r28)
/* 801C4F64 001C1EA4  38 81 00 84 */	addi r4, r1, 0x84
/* 801C4F68 001C1EA8  4B F2 53 65 */	bl PSMTXCopy
/* 801C4F6C 001C1EAC  88 0D 84 48 */	lbz r0, useFixCollision__Q24Game12PlatInstance@sda21(r13)
/* 801C4F70 001C1EB0  28 00 00 00 */	cmplwi r0, 0
/* 801C4F74 001C1EB4  41 82 00 10 */	beq .L_801C4F84
/* 801C4F78 001C1EB8  88 1C 01 08 */	lbz r0, 0x108(r28)
/* 801C4F7C 001C1EBC  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 801C4F80 001C1EC0  40 82 00 10 */	bne .L_801C4F90
.L_801C4F84:
/* 801C4F84 001C1EC4  38 61 00 84 */	addi r3, r1, 0x84
/* 801C4F88 001C1EC8  38 81 00 54 */	addi r4, r1, 0x54
/* 801C4F8C 001C1ECC  4B F2 54 91 */	bl PSMTXInverse
.L_801C4F90:
/* 801C4F90 001C1ED0  83 FD 00 44 */	lwz r31, 0x44(r29)
/* 801C4F94 001C1ED4  3C 60 80 48 */	lis r3, lbl_80480168@ha
/* 801C4F98 001C1ED8  83 DD 00 48 */	lwz r30, 0x48(r29)
/* 801C4F9C 001C1EDC  38 00 00 00 */	li r0, 0
/* 801C4FA0 001C1EE0  38 83 01 68 */	addi r4, r3, lbl_80480168@l
/* 801C4FA4 001C1EE4  38 A0 00 01 */	li r5, 1
/* 801C4FA8 001C1EE8  90 1D 00 44 */	stw r0, 0x44(r29)
/* 801C4FAC 001C1EEC  90 1D 00 48 */	stw r0, 0x48(r29)
/* 801C4FB0 001C1EF0  90 1D 00 4C */	stw r0, 0x4c(r29)
/* 801C4FB4 001C1EF4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C4FB8 001C1EF8  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801C4FBC 001C1EFC  48 26 5B 3D */	bl _start__9SysTimersFPcb
/* 801C4FC0 001C1F00  80 7C 00 EC */	lwz r3, 0xec(r28)
/* 801C4FC4 001C1F04  4B F6 E7 29 */	bl getTriDivider__8PlatformFv
/* 801C4FC8 001C1F08  80 9C 00 F0 */	lwz r4, 0xf0(r28)
/* 801C4FCC 001C1F0C  28 04 00 00 */	cmplwi r4, 0
/* 801C4FD0 001C1F10  41 82 00 28 */	beq .L_801C4FF8
/* 801C4FD4 001C1F14  88 0D 84 58 */	lbz r0, mTraceMoveOptLevel__Q24Game6MapMgr@sda21(r13)
/* 801C4FD8 001C1F18  28 00 00 03 */	cmplwi r0, 3
/* 801C4FDC 001C1F1C  41 80 00 1C */	blt .L_801C4FF8
/* 801C4FE0 001C1F20  7C 83 23 78 */	mr r3, r4
/* 801C4FE4 001C1F24  4B F6 E7 09 */	bl getTriDivider__8PlatformFv
/* 801C4FE8 001C1F28  FC 20 F8 90 */	fmr f1, f31
/* 801C4FEC 001C1F2C  7F A4 EB 78 */	mr r4, r29
/* 801C4FF0 001C1F30  48 25 9A 45 */	bl traceMove_global__Q23Sys7OBBTreeFRQ24Game8MoveInfof
/* 801C4FF4 001C1F34  48 00 00 48 */	b .L_801C503C
.L_801C4FF8:
/* 801C4FF8 001C1F38  88 0D 84 48 */	lbz r0, useFixCollision__Q24Game12PlatInstance@sda21(r13)
/* 801C4FFC 001C1F3C  28 00 00 00 */	cmplwi r0, 0
/* 801C5000 001C1F40  41 82 00 28 */	beq .L_801C5028
/* 801C5004 001C1F44  88 1C 01 08 */	lbz r0, 0x108(r28)
/* 801C5008 001C1F48  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 801C500C 001C1F4C  41 82 00 1C */	beq .L_801C5028
/* 801C5010 001C1F50  FC 20 F8 90 */	fmr f1, f31
/* 801C5014 001C1F54  7F A6 EB 78 */	mr r6, r29
/* 801C5018 001C1F58  38 81 00 84 */	addi r4, r1, 0x84
/* 801C501C 001C1F5C  38 BC 00 BC */	addi r5, r28, 0xbc
/* 801C5020 001C1F60  48 25 99 F1 */	bl traceMove__Q23Sys7OBBTreeFR7MatrixfR7MatrixfRQ24Game8MoveInfof
/* 801C5024 001C1F64  48 00 00 18 */	b .L_801C503C
.L_801C5028:
/* 801C5028 001C1F68  FC 20 F8 90 */	fmr f1, f31
/* 801C502C 001C1F6C  7F A6 EB 78 */	mr r6, r29
/* 801C5030 001C1F70  38 81 00 84 */	addi r4, r1, 0x84
/* 801C5034 001C1F74  38 A1 00 54 */	addi r5, r1, 0x54
/* 801C5038 001C1F78  48 25 99 D9 */	bl traceMove__Q23Sys7OBBTreeFR7MatrixfR7MatrixfRQ24Game8MoveInfof
.L_801C503C:
/* 801C503C 001C1F7C  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 801C5040 001C1F80  3C 60 80 48 */	lis r3, lbl_80480168@ha
/* 801C5044 001C1F84  38 83 01 68 */	addi r4, r3, lbl_80480168@l
/* 801C5048 001C1F88  80 65 00 28 */	lwz r3, 0x28(r5)
/* 801C504C 001C1F8C  48 26 5A B1 */	bl _stop__9SysTimersFPc
/* 801C5050 001C1F90  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 801C5054 001C1F94  28 03 00 00 */	cmplwi r3, 0
/* 801C5058 001C1F98  41 82 01 1C */	beq .L_801C5174
/* 801C505C 001C1F9C  80 1D 00 44 */	lwz r0, 0x44(r29)
/* 801C5060 001C1FA0  28 00 00 00 */	cmplwi r0, 0
/* 801C5064 001C1FA4  41 82 00 74 */	beq .L_801C50D8
/* 801C5068 001C1FA8  93 81 00 40 */	stw r28, 0x40(r1)
/* 801C506C 001C1FAC  38 81 00 40 */	addi r4, r1, 0x40
/* 801C5070 001C1FB0  C0 1D 00 50 */	lfs f0, 0x50(r29)
/* 801C5074 001C1FB4  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 801C5078 001C1FB8  C0 1D 00 54 */	lfs f0, 0x54(r29)
/* 801C507C 001C1FBC  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801C5080 001C1FC0  C0 1D 00 58 */	lfs f0, 0x58(r29)
/* 801C5084 001C1FC4  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801C5088 001C1FC8  80 1C 00 F4 */	lwz r0, 0xf4(r28)
/* 801C508C 001C1FCC  90 01 00 50 */	stw r0, 0x50(r1)
/* 801C5090 001C1FD0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5094 001C1FD4  81 8C 00 F0 */	lwz r12, 0xf0(r12)
/* 801C5098 001C1FD8  7D 89 03 A6 */	mtctr r12
/* 801C509C 001C1FDC  4E 80 04 21 */	bctrl 
/* 801C50A0 001C1FE0  80 7C 01 04 */	lwz r3, 0x104(r28)
/* 801C50A4 001C1FE4  38 03 00 01 */	addi r0, r3, 1
/* 801C50A8 001C1FE8  90 1C 01 04 */	stw r0, 0x104(r28)
/* 801C50AC 001C1FEC  80 7C 00 F4 */	lwz r3, 0xf4(r28)
/* 801C50B0 001C1FF0  28 03 00 00 */	cmplwi r3, 0
/* 801C50B4 001C1FF4  41 82 00 28 */	beq .L_801C50DC
/* 801C50B8 001C1FF8  80 1D 00 14 */	lwz r0, 0x14(r29)
/* 801C50BC 001C1FFC  38 81 00 40 */	addi r4, r1, 0x40
/* 801C50C0 001C2000  90 01 00 50 */	stw r0, 0x50(r1)
/* 801C50C4 001C2004  81 83 00 00 */	lwz r12, 0(r3)
/* 801C50C8 001C2008  81 8C 00 F0 */	lwz r12, 0xf0(r12)
/* 801C50CC 001C200C  7D 89 03 A6 */	mtctr r12
/* 801C50D0 001C2010  4E 80 04 21 */	bctrl 
/* 801C50D4 001C2014  48 00 00 08 */	b .L_801C50DC
.L_801C50D8:
/* 801C50D8 001C2018  93 FD 00 44 */	stw r31, 0x44(r29)
.L_801C50DC:
/* 801C50DC 001C201C  80 1D 00 48 */	lwz r0, 0x48(r29)
/* 801C50E0 001C2020  28 00 00 00 */	cmplwi r0, 0
/* 801C50E4 001C2024  41 82 00 44 */	beq .L_801C5128
/* 801C50E8 001C2028  93 81 00 2C */	stw r28, 0x2c(r1)
/* 801C50EC 001C202C  38 81 00 2C */	addi r4, r1, 0x2c
/* 801C50F0 001C2030  C0 1D 00 5C */	lfs f0, 0x5c(r29)
/* 801C50F4 001C2034  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801C50F8 001C2038  C0 1D 00 60 */	lfs f0, 0x60(r29)
/* 801C50FC 001C203C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801C5100 001C2040  C0 1D 00 64 */	lfs f0, 0x64(r29)
/* 801C5104 001C2044  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 801C5108 001C2048  80 1C 00 F4 */	lwz r0, 0xf4(r28)
/* 801C510C 001C204C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801C5110 001C2050  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 801C5114 001C2054  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5118 001C2058  81 8C 00 F0 */	lwz r12, 0xf0(r12)
/* 801C511C 001C205C  7D 89 03 A6 */	mtctr r12
/* 801C5120 001C2060  4E 80 04 21 */	bctrl 
/* 801C5124 001C2064  48 00 00 08 */	b .L_801C512C
.L_801C5128:
/* 801C5128 001C2068  93 DD 00 48 */	stw r30, 0x48(r29)
.L_801C512C:
/* 801C512C 001C206C  80 1D 00 4C */	lwz r0, 0x4c(r29)
/* 801C5130 001C2070  28 00 00 00 */	cmplwi r0, 0
/* 801C5134 001C2074  41 82 00 40 */	beq .L_801C5174
/* 801C5138 001C2078  93 81 00 18 */	stw r28, 0x18(r1)
/* 801C513C 001C207C  38 81 00 18 */	addi r4, r1, 0x18
/* 801C5140 001C2080  C0 1D 00 68 */	lfs f0, 0x68(r29)
/* 801C5144 001C2084  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801C5148 001C2088  C0 1D 00 6C */	lfs f0, 0x6c(r29)
/* 801C514C 001C208C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801C5150 001C2090  C0 1D 00 70 */	lfs f0, 0x70(r29)
/* 801C5154 001C2094  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801C5158 001C2098  80 1C 00 F4 */	lwz r0, 0xf4(r28)
/* 801C515C 001C209C  90 01 00 28 */	stw r0, 0x28(r1)
/* 801C5160 001C20A0  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 801C5164 001C20A4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5168 001C20A8  81 8C 00 F0 */	lwz r12, 0xf0(r12)
/* 801C516C 001C20AC  7D 89 03 A6 */	mtctr r12
/* 801C5170 001C20B0  4E 80 04 21 */	bctrl 
.L_801C5174:
/* 801C5174 001C20B4  38 00 00 00 */	li r0, 0
/* 801C5178 001C20B8  98 0D 9A E0 */	stb r0, debugTraceMove__Q23Sys7OBBTree@sda21(r13)
.L_801C517C:
/* 801C517C 001C20BC  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 801C5180 001C20C0  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 801C5184 001C20C4  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 801C5188 001C20C8  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 801C518C 001C20CC  83 C1 00 C8 */	lwz r30, 0xc8(r1)
/* 801C5190 001C20D0  83 A1 00 C4 */	lwz r29, 0xc4(r1)
/* 801C5194 001C20D4  83 81 00 C0 */	lwz r28, 0xc0(r1)
/* 801C5198 001C20D8  7C 08 03 A6 */	mtlr r0
/* 801C519C 001C20DC  38 21 00 E0 */	addi r1, r1, 0xe0
/* 801C51A0 001C20E0  4E 80 00 20 */	blr 

.global __ct__Q24Game20PlatInstanceAttacherFv
__ct__Q24Game20PlatInstanceAttacherFv:
/* 801C51A4 001C20E4  38 00 00 00 */	li r0, 0
/* 801C51A8 001C20E8  90 03 00 00 */	stw r0, 0(r3)
/* 801C51AC 001C20EC  90 03 00 04 */	stw r0, 4(r3)
/* 801C51B0 001C20F0  90 03 00 08 */	stw r0, 8(r3)
/* 801C51B4 001C20F4  90 03 00 0C */	stw r0, 0xc(r3)
/* 801C51B8 001C20F8  4E 80 00 20 */	blr 

.global addToMgr__Q24Game20PlatInstanceAttacherFPQ24Game8CreatureR4ID32P12PlatAttacherb
addToMgr__Q24Game20PlatInstanceAttacherFPQ24Game8CreatureR4ID32P12PlatAttacherb:
/* 801C51BC 001C20FC  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 801C51C0 001C2100  7C 08 02 A6 */	mflr r0
/* 801C51C4 001C2104  90 01 00 94 */	stw r0, 0x94(r1)
/* 801C51C8 001C2108  BE A1 00 64 */	stmw r21, 0x64(r1)
/* 801C51CC 001C210C  7C DB 33 78 */	mr r27, r6
/* 801C51D0 001C2110  7C 78 1B 78 */	mr r24, r3
/* 801C51D4 001C2114  7C 99 23 78 */	mr r25, r4
/* 801C51D8 001C2118  7C BA 2B 78 */	mr r26, r5
/* 801C51DC 001C211C  7C FC 3B 78 */	mr r28, r7
/* 801C51E0 001C2120  93 63 00 08 */	stw r27, 8(r3)
/* 801C51E4 001C2124  7F 63 DB 78 */	mr r3, r27
/* 801C51E8 001C2128  80 04 01 74 */	lwz r0, 0x174(r4)
/* 801C51EC 001C212C  90 18 00 0C */	stw r0, 0xc(r24)
/* 801C51F0 001C2130  4B F6 EA E5 */	bl getNumShapes__12PlatAttacherFv
/* 801C51F4 001C2134  90 78 00 00 */	stw r3, 0(r24)
/* 801C51F8 001C2138  80 18 00 00 */	lwz r0, 0(r24)
/* 801C51FC 001C213C  54 03 10 3A */	slwi r3, r0, 2
/* 801C5200 001C2140  4B E5 ED AD */	bl __nwa__FUl
/* 801C5204 001C2144  90 78 00 04 */	stw r3, 4(r24)
/* 801C5208 001C2148  3B C1 00 3C */	addi r30, r1, 0x3c
/* 801C520C 001C214C  3B A0 00 00 */	li r29, 0
/* 801C5210 001C2150  3B E0 00 00 */	li r31, 0
/* 801C5214 001C2154  48 00 01 38 */	b .L_801C534C
.L_801C5218:
/* 801C5218 001C2158  7F 63 DB 78 */	mr r3, r27
/* 801C521C 001C215C  7F A4 EB 78 */	mr r4, r29
/* 801C5220 001C2160  4B F6 EB 39 */	bl getPlatform__12PlatAttacherFi
/* 801C5224 001C2164  7C 77 1B 78 */	mr r23, r3
/* 801C5228 001C2168  7F 63 DB 78 */	mr r3, r27
/* 801C522C 001C216C  7F A4 EB 78 */	mr r4, r29
/* 801C5230 001C2170  4B F6 EA AD */	bl getJointIndex__12PlatAttacherFi
/* 801C5234 001C2174  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 801C5238 001C2178  80 78 00 0C */	lwz r3, 0xc(r24)
/* 801C523C 001C217C  1C 00 00 3C */	mulli r0, r0, 0x3c
/* 801C5240 001C2180  80 63 00 10 */	lwz r3, 0x10(r3)
/* 801C5244 001C2184  7C 63 02 14 */	add r3, r3, r0
/* 801C5248 001C2188  48 26 46 59 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801C524C 001C218C  7C 60 1B 78 */	mr r0, r3
/* 801C5250 001C2190  38 61 00 38 */	addi r3, r1, 0x38
/* 801C5254 001C2194  7C 16 03 78 */	mr r22, r0
/* 801C5258 001C2198  48 00 06 69 */	bl __ct__Q24Game18PlatAddInstanceArgFv
/* 801C525C 001C219C  93 21 00 38 */	stw r25, 0x38(r1)
/* 801C5260 001C21A0  7F C3 F3 78 */	mr r3, r30
/* 801C5264 001C21A4  7F 44 D3 78 */	mr r4, r26
/* 801C5268 001C21A8  38 A0 00 05 */	li r5, 5
/* 801C526C 001C21AC  4B EF C4 AD */	bl __copy
/* 801C5270 001C21B0  80 1A 00 08 */	lwz r0, 8(r26)
/* 801C5274 001C21B4  38 81 00 38 */	addi r4, r1, 0x38
/* 801C5278 001C21B8  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801C527C 001C21BC  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C5280 001C21C0  92 E1 00 48 */	stw r23, 0x48(r1)
/* 801C5284 001C21C4  92 C1 00 4C */	stw r22, 0x4c(r1)
/* 801C5288 001C21C8  9B 81 00 50 */	stb r28, 0x50(r1)
/* 801C528C 001C21CC  48 00 06 99 */	bl addInstance__Q24Game7PlatMgrFRQ24Game18PlatAddInstanceArg
/* 801C5290 001C21D0  80 98 00 04 */	lwz r4, 4(r24)
/* 801C5294 001C21D4  7C 64 F9 2E */	stwx r3, r4, r31
/* 801C5298 001C21D8  80 0D 92 CC */	lwz r0, platCellMgr__4Game@sda21(r13)
/* 801C529C 001C21DC  28 00 00 00 */	cmplwi r0, 0
/* 801C52A0 001C21E0  41 82 00 A4 */	beq .L_801C5344
/* 801C52A4 001C21E4  80 78 00 04 */	lwz r3, 4(r24)
/* 801C52A8 001C21E8  7E A3 F8 2E */	lwzx r21, r3, r31
/* 801C52AC 001C21EC  80 75 00 B8 */	lwz r3, 0xb8(r21)
/* 801C52B0 001C21F0  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 801C52B4 001C21F4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801C52B8 001C21F8  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 801C52BC 001C21FC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801C52C0 001C2200  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 801C52C4 001C2204  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801C52C8 001C2208  80 75 00 EC */	lwz r3, 0xec(r21)
/* 801C52CC 001C220C  4B F6 E4 21 */	bl getTriDivider__8PlatformFv
/* 801C52D0 001C2210  7C 77 1B 78 */	mr r23, r3
/* 801C52D4 001C2214  7E C3 B3 78 */	mr r3, r22
/* 801C52D8 001C2218  38 97 01 20 */	addi r4, r23, 0x120
/* 801C52DC 001C221C  38 A1 00 0C */	addi r5, r1, 0xc
/* 801C52E0 001C2220  4B F2 58 F9 */	bl PSMTXMultVec
/* 801C52E4 001C2224  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801C52E8 001C2228  38 81 00 28 */	addi r4, r1, 0x28
/* 801C52EC 001C222C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 801C52F0 001C2230  38 A1 00 08 */	addi r5, r1, 8
/* 801C52F4 001C2234  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801C52F8 001C2238  38 C1 00 18 */	addi r6, r1, 0x18
/* 801C52FC 001C223C  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 801C5300 001C2240  80 6D 92 CC */	lwz r3, platCellMgr__4Game@sda21(r13)
/* 801C5304 001C2244  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 801C5308 001C2248  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801C530C 001C224C  C0 17 01 2C */	lfs f0, 0x12c(r23)
/* 801C5310 001C2250  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801C5314 001C2254  4B F9 30 7D */	bl "calcExtent__Q24Game11CellPyramidFRQ23Sys6SphereRiR7Rect<i>"
/* 801C5318 001C2258  80 6D 92 CC */	lwz r3, platCellMgr__4Game@sda21(r13)
/* 801C531C 001C225C  7E A4 AB 78 */	mr r4, r21
/* 801C5320 001C2260  38 A1 00 28 */	addi r5, r1, 0x28
/* 801C5324 001C2264  4B F9 31 FD */	bl entry__Q24Game11CellPyramidFPQ24Game10CellObjectRQ23Sys6Sphere
/* 801C5328 001C2268  80 75 00 F4 */	lwz r3, 0xf4(r21)
/* 801C532C 001C226C  28 03 00 00 */	cmplwi r3, 0
/* 801C5330 001C2270  41 82 00 14 */	beq .L_801C5344
/* 801C5334 001C2274  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5338 001C2278  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 801C533C 001C227C  7D 89 03 A6 */	mtctr r12
/* 801C5340 001C2280  4E 80 04 21 */	bctrl 
.L_801C5344:
/* 801C5344 001C2284  3B FF 00 04 */	addi r31, r31, 4
/* 801C5348 001C2288  3B BD 00 01 */	addi r29, r29, 1
.L_801C534C:
/* 801C534C 001C228C  80 18 00 00 */	lwz r0, 0(r24)
/* 801C5350 001C2290  7C 1D 00 00 */	cmpw r29, r0
/* 801C5354 001C2294  41 80 FE C4 */	blt .L_801C5218
/* 801C5358 001C2298  BA A1 00 64 */	lmw r21, 0x64(r1)
/* 801C535C 001C229C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 801C5360 001C22A0  7C 08 03 A6 */	mtlr r0
/* 801C5364 001C22A4  38 21 00 90 */	addi r1, r1, 0x90
/* 801C5368 001C22A8  4E 80 00 20 */	blr 

.global setCollision__Q24Game20PlatInstanceAttacherFbUs
setCollision__Q24Game20PlatInstanceAttacherFbUs:
/* 801C536C 001C22AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C5370 001C22B0  7C 08 02 A6 */	mflr r0
/* 801C5374 001C22B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C5378 001C22B8  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801C537C 001C22BC  7C 7B 1B 78 */	mr r27, r3
/* 801C5380 001C22C0  54 BE 04 3E */	clrlwi r30, r5, 0x10
/* 801C5384 001C22C4  3B 80 00 00 */	li r28, 0
/* 801C5388 001C22C8  54 9F 06 3E */	clrlwi r31, r4, 0x18
/* 801C538C 001C22CC  3B A0 00 00 */	li r29, 0
/* 801C5390 001C22D0  48 00 00 50 */	b .L_801C53E0
.L_801C5394:
/* 801C5394 001C22D4  80 7B 00 08 */	lwz r3, 8(r27)
/* 801C5398 001C22D8  7F 84 E3 78 */	mr r4, r28
/* 801C539C 001C22DC  4B F6 E9 41 */	bl getJointIndex__12PlatAttacherFi
/* 801C53A0 001C22E0  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 801C53A4 001C22E4  7C 1E 00 40 */	cmplw r30, r0
/* 801C53A8 001C22E8  40 82 00 30 */	bne .L_801C53D8
/* 801C53AC 001C22EC  80 7B 00 04 */	lwz r3, 4(r27)
/* 801C53B0 001C22F0  28 1F 00 00 */	cmplwi r31, 0
/* 801C53B4 001C22F4  7C 63 E8 2E */	lwzx r3, r3, r29
/* 801C53B8 001C22F8  41 82 00 14 */	beq .L_801C53CC
/* 801C53BC 001C22FC  88 03 01 08 */	lbz r0, 0x108(r3)
/* 801C53C0 001C2300  60 00 00 01 */	ori r0, r0, 1
/* 801C53C4 001C2304  98 03 01 08 */	stb r0, 0x108(r3)
/* 801C53C8 001C2308  48 00 00 10 */	b .L_801C53D8
.L_801C53CC:
/* 801C53CC 001C230C  88 03 01 08 */	lbz r0, 0x108(r3)
/* 801C53D0 001C2310  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 801C53D4 001C2314  98 03 01 08 */	stb r0, 0x108(r3)
.L_801C53D8:
/* 801C53D8 001C2318  3B BD 00 04 */	addi r29, r29, 4
/* 801C53DC 001C231C  3B 9C 00 01 */	addi r28, r28, 1
.L_801C53E0:
/* 801C53E0 001C2320  80 1B 00 00 */	lwz r0, 0(r27)
/* 801C53E4 001C2324  7C 1C 00 00 */	cmpw r28, r0
/* 801C53E8 001C2328  41 80 FF AC */	blt .L_801C5394
/* 801C53EC 001C232C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801C53F0 001C2330  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C53F4 001C2334  7C 08 03 A6 */	mtlr r0
/* 801C53F8 001C2338  38 21 00 20 */	addi r1, r1, 0x20
/* 801C53FC 001C233C  4E 80 00 20 */	blr 

.global fixCollision__Q24Game20PlatInstanceAttacherFb
fixCollision__Q24Game20PlatInstanceAttacherFb:
/* 801C5400 001C2340  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C5404 001C2344  7C 08 02 A6 */	mflr r0
/* 801C5408 001C2348  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C540C 001C234C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C5410 001C2350  54 9F 06 3E */	clrlwi r31, r4, 0x18
/* 801C5414 001C2354  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801C5418 001C2358  3B C0 00 00 */	li r30, 0
/* 801C541C 001C235C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801C5420 001C2360  3B A0 00 00 */	li r29, 0
/* 801C5424 001C2364  93 81 00 10 */	stw r28, 0x10(r1)
/* 801C5428 001C2368  7C 7C 1B 78 */	mr r28, r3
/* 801C542C 001C236C  48 00 00 44 */	b .L_801C5470
.L_801C5430:
/* 801C5430 001C2370  80 7C 00 04 */	lwz r3, 4(r28)
/* 801C5434 001C2374  28 1F 00 00 */	cmplwi r31, 0
/* 801C5438 001C2378  7C 63 F0 2E */	lwzx r3, r3, r30
/* 801C543C 001C237C  41 82 00 20 */	beq .L_801C545C
/* 801C5440 001C2380  88 03 01 08 */	lbz r0, 0x108(r3)
/* 801C5444 001C2384  38 83 00 BC */	addi r4, r3, 0xbc
/* 801C5448 001C2388  60 00 00 02 */	ori r0, r0, 2
/* 801C544C 001C238C  98 03 01 08 */	stb r0, 0x108(r3)
/* 801C5450 001C2390  80 63 00 B8 */	lwz r3, 0xb8(r3)
/* 801C5454 001C2394  4B F2 4F C9 */	bl PSMTXInverse
/* 801C5458 001C2398  48 00 00 10 */	b .L_801C5468
.L_801C545C:
/* 801C545C 001C239C  88 03 01 08 */	lbz r0, 0x108(r3)
/* 801C5460 001C23A0  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 801C5464 001C23A4  98 03 01 08 */	stb r0, 0x108(r3)
.L_801C5468:
/* 801C5468 001C23A8  3B DE 00 04 */	addi r30, r30, 4
/* 801C546C 001C23AC  3B BD 00 01 */	addi r29, r29, 1
.L_801C5470:
/* 801C5470 001C23B0  80 1C 00 00 */	lwz r0, 0(r28)
/* 801C5474 001C23B4  7C 1D 00 00 */	cmpw r29, r0
/* 801C5478 001C23B8  41 80 FF B8 */	blt .L_801C5430
/* 801C547C 001C23BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C5480 001C23C0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C5484 001C23C4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801C5488 001C23C8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801C548C 001C23CC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801C5490 001C23D0  7C 08 03 A6 */	mtlr r0
/* 801C5494 001C23D4  38 21 00 20 */	addi r1, r1, 0x20
/* 801C5498 001C23D8  4E 80 00 20 */	blr 

.global setCode__Q24Game20PlatInstanceAttacherFR4ID32Us
setCode__Q24Game20PlatInstanceAttacherFR4ID32Us:
/* 801C549C 001C23DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C54A0 001C23E0  7C 08 02 A6 */	mflr r0
/* 801C54A4 001C23E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C54A8 001C23E8  BF 41 00 08 */	stmw r26, 8(r1)
/* 801C54AC 001C23EC  7C 7A 1B 78 */	mr r26, r3
/* 801C54B0 001C23F0  7C 9B 23 78 */	mr r27, r4
/* 801C54B4 001C23F4  54 BF 04 3E */	clrlwi r31, r5, 0x10
/* 801C54B8 001C23F8  3B 80 00 00 */	li r28, 0
/* 801C54BC 001C23FC  3B A0 00 00 */	li r29, 0
/* 801C54C0 001C2400  48 00 00 48 */	b .L_801C5508
.L_801C54C4:
/* 801C54C4 001C2404  80 7A 00 08 */	lwz r3, 8(r26)
/* 801C54C8 001C2408  7F 84 E3 78 */	mr r4, r28
/* 801C54CC 001C240C  4B F6 E8 11 */	bl getJointIndex__12PlatAttacherFi
/* 801C54D0 001C2410  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 801C54D4 001C2414  7C 1F 00 40 */	cmplw r31, r0
/* 801C54D8 001C2418  40 82 00 28 */	bne .L_801C5500
/* 801C54DC 001C241C  80 7A 00 04 */	lwz r3, 4(r26)
/* 801C54E0 001C2420  7F 64 DB 78 */	mr r4, r27
/* 801C54E4 001C2424  38 A0 00 05 */	li r5, 5
/* 801C54E8 001C2428  7C 63 E8 2E */	lwzx r3, r3, r29
/* 801C54EC 001C242C  3B C3 00 F8 */	addi r30, r3, 0xf8
/* 801C54F0 001C2430  7F C3 F3 78 */	mr r3, r30
/* 801C54F4 001C2434  4B EF C2 25 */	bl __copy
/* 801C54F8 001C2438  80 1B 00 08 */	lwz r0, 8(r27)
/* 801C54FC 001C243C  90 1E 00 08 */	stw r0, 8(r30)
.L_801C5500:
/* 801C5500 001C2440  3B BD 00 04 */	addi r29, r29, 4
/* 801C5504 001C2444  3B 9C 00 01 */	addi r28, r28, 1
.L_801C5508:
/* 801C5508 001C2448  80 1A 00 00 */	lwz r0, 0(r26)
/* 801C550C 001C244C  7C 1C 00 00 */	cmpw r28, r0
/* 801C5510 001C2450  41 80 FF B4 */	blt .L_801C54C4
/* 801C5514 001C2454  BB 41 00 08 */	lmw r26, 8(r1)
/* 801C5518 001C2458  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C551C 001C245C  7C 08 03 A6 */	mtlr r0
/* 801C5520 001C2460  38 21 00 20 */	addi r1, r1, 0x20
/* 801C5524 001C2464  4E 80 00 20 */	blr 

.global setShapeVisibility__Q24Game20PlatInstanceAttacherFv
setShapeVisibility__Q24Game20PlatInstanceAttacherFv:
/* 801C5528 001C2468  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C552C 001C246C  7C 08 02 A6 */	mflr r0
/* 801C5530 001C2470  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C5534 001C2474  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C5538 001C2478  3B E0 00 00 */	li r31, 0
/* 801C553C 001C247C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801C5540 001C2480  3B C0 00 00 */	li r30, 0
/* 801C5544 001C2484  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801C5548 001C2488  93 81 00 10 */	stw r28, 0x10(r1)
/* 801C554C 001C248C  7C 7C 1B 78 */	mr r28, r3
/* 801C5550 001C2490  48 00 00 6C */	b .L_801C55BC
.L_801C5554:
/* 801C5554 001C2494  80 BC 00 04 */	lwz r5, 4(r28)
/* 801C5558 001C2498  7F C4 F3 78 */	mr r4, r30
/* 801C555C 001C249C  80 7C 00 08 */	lwz r3, 8(r28)
/* 801C5560 001C24A0  7F A5 F8 2E */	lwzx r29, r5, r31
/* 801C5564 001C24A4  4B F6 E7 79 */	bl getJointIndex__12PlatAttacherFi
/* 801C5568 001C24A8  88 1D 01 08 */	lbz r0, 0x108(r29)
/* 801C556C 001C24AC  7C 64 1B 78 */	mr r4, r3
/* 801C5570 001C24B0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801C5574 001C24B4  41 82 00 24 */	beq .L_801C5598
/* 801C5578 001C24B8  80 7C 00 0C */	lwz r3, 0xc(r28)
/* 801C557C 001C24BC  54 85 04 3E */	clrlwi r5, r4, 0x10
/* 801C5580 001C24C0  38 80 00 01 */	li r4, 1
/* 801C5584 001C24C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5588 001C24C8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801C558C 001C24CC  7D 89 03 A6 */	mtctr r12
/* 801C5590 001C24D0  4E 80 04 21 */	bctrl 
/* 801C5594 001C24D4  48 00 00 20 */	b .L_801C55B4
.L_801C5598:
/* 801C5598 001C24D8  80 7C 00 0C */	lwz r3, 0xc(r28)
/* 801C559C 001C24DC  54 85 04 3E */	clrlwi r5, r4, 0x10
/* 801C55A0 001C24E0  38 80 00 00 */	li r4, 0
/* 801C55A4 001C24E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C55A8 001C24E8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801C55AC 001C24EC  7D 89 03 A6 */	mtctr r12
/* 801C55B0 001C24F0  4E 80 04 21 */	bctrl 
.L_801C55B4:
/* 801C55B4 001C24F4  3B FF 00 04 */	addi r31, r31, 4
/* 801C55B8 001C24F8  3B DE 00 01 */	addi r30, r30, 1
.L_801C55BC:
/* 801C55BC 001C24FC  80 1C 00 00 */	lwz r0, 0(r28)
/* 801C55C0 001C2500  7C 1E 00 00 */	cmpw r30, r0
/* 801C55C4 001C2504  41 80 FF 90 */	blt .L_801C5554
/* 801C55C8 001C2508  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C55CC 001C250C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C55D0 001C2510  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801C55D4 001C2514  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801C55D8 001C2518  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801C55DC 001C251C  7C 08 03 A6 */	mtlr r0
/* 801C55E0 001C2520  38 21 00 20 */	addi r1, r1, 0x20
/* 801C55E4 001C2524  4E 80 00 20 */	blr 

.global __ct__Q24Game7PlatMgrFv
__ct__Q24Game7PlatMgrFv:
/* 801C55E8 001C2528  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C55EC 001C252C  7C 08 02 A6 */	mflr r0
/* 801C55F0 001C2530  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C55F4 001C2534  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C55F8 001C2538  7C 7F 1B 78 */	mr r31, r3
/* 801C55FC 001C253C  93 C1 00 08 */	stw r30, 8(r1)
/* 801C5600 001C2540  48 24 BD 91 */	bl __ct__5CNodeFv
/* 801C5604 001C2544  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801C5608 001C2548  3C 60 80 4B */	lis r3, "__vt__32Container<Q24Game12PlatInstance>"@ha
/* 801C560C 001C254C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801C5610 001C2550  3C A0 80 4B */	lis r5, __vt__16GenericObjectMgr@ha
/* 801C5614 001C2554  90 1F 00 00 */	stw r0, 0(r31)
/* 801C5618 001C2558  38 03 64 E0 */	addi r0, r3, "__vt__32Container<Q24Game12PlatInstance>"@l
/* 801C561C 001C255C  3C 80 80 4B */	lis r4, "__vt__32ObjectMgr<Q24Game12PlatInstance>"@ha
/* 801C5620 001C2560  3C 60 80 4B */	lis r3, "__vt__36NodeObjectMgr<Q24Game12PlatInstance>"@ha
/* 801C5624 001C2564  90 1F 00 00 */	stw r0, 0(r31)
/* 801C5628 001C2568  38 00 00 00 */	li r0, 0
/* 801C562C 001C256C  38 C4 64 64 */	addi r6, r4, "__vt__32ObjectMgr<Q24Game12PlatInstance>"@l
/* 801C5630 001C2570  38 83 63 E4 */	addi r4, r3, "__vt__36NodeObjectMgr<Q24Game12PlatInstance>"@l
/* 801C5634 001C2574  98 1F 00 18 */	stb r0, 0x18(r31)
/* 801C5638 001C2578  38 05 B5 F0 */	addi r0, r5, __vt__16GenericObjectMgr@l
/* 801C563C 001C257C  3B DF 00 20 */	addi r30, r31, 0x20
/* 801C5640 001C2580  38 A6 00 2C */	addi r5, r6, 0x2c
/* 801C5644 001C2584  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801C5648 001C2588  38 04 00 2C */	addi r0, r4, 0x2c
/* 801C564C 001C258C  7F C3 F3 78 */	mr r3, r30
/* 801C5650 001C2590  90 DF 00 00 */	stw r6, 0(r31)
/* 801C5654 001C2594  90 BF 00 1C */	stw r5, 0x1c(r31)
/* 801C5658 001C2598  90 9F 00 00 */	stw r4, 0(r31)
/* 801C565C 001C259C  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801C5660 001C25A0  48 24 BD 31 */	bl __ct__5CNodeFv
/* 801C5664 001C25A4  3C 60 80 4B */	lis r3, "__vt__34TObjectNode<Q24Game12PlatInstance>"@ha
/* 801C5668 001C25A8  3C 80 80 4B */	lis r4, __vt__Q24Game7PlatMgr@ha
/* 801C566C 001C25AC  38 03 63 D4 */	addi r0, r3, "__vt__34TObjectNode<Q24Game12PlatInstance>"@l
/* 801C5670 001C25B0  7F E3 FB 78 */	mr r3, r31
/* 801C5674 001C25B4  90 1E 00 00 */	stw r0, 0(r30)
/* 801C5678 001C25B8  38 84 63 38 */	addi r4, r4, __vt__Q24Game7PlatMgr@l
/* 801C567C 001C25BC  38 04 00 2C */	addi r0, r4, 0x2c
/* 801C5680 001C25C0  90 9F 00 00 */	stw r4, 0(r31)
/* 801C5684 001C25C4  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801C5688 001C25C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C568C 001C25CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C5690 001C25D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C5694 001C25D4  7C 08 03 A6 */	mtlr r0
/* 801C5698 001C25D8  38 21 00 10 */	addi r1, r1, 0x10
/* 801C569C 001C25DC  4E 80 00 20 */	blr 

.global "__dt__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
"__dt__36NodeObjectMgr<Q24Game12PlatInstance>Fv":
/* 801C56A0 001C25E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C56A4 001C25E4  7C 08 02 A6 */	mflr r0
/* 801C56A8 001C25E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C56AC 001C25EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C56B0 001C25F0  7C 9F 23 78 */	mr r31, r4
/* 801C56B4 001C25F4  93 C1 00 08 */	stw r30, 8(r1)
/* 801C56B8 001C25F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C56BC 001C25FC  41 82 00 90 */	beq .L_801C574C
/* 801C56C0 001C2600  3C 60 80 4B */	lis r3, "__vt__36NodeObjectMgr<Q24Game12PlatInstance>"@ha
/* 801C56C4 001C2604  34 1E 00 20 */	addic. r0, r30, 0x20
/* 801C56C8 001C2608  38 63 63 E4 */	addi r3, r3, "__vt__36NodeObjectMgr<Q24Game12PlatInstance>"@l
/* 801C56CC 001C260C  90 7E 00 00 */	stw r3, 0(r30)
/* 801C56D0 001C2610  38 03 00 2C */	addi r0, r3, 0x2c
/* 801C56D4 001C2614  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801C56D8 001C2618  41 82 00 1C */	beq .L_801C56F4
/* 801C56DC 001C261C  3C 80 80 4B */	lis r4, "__vt__34TObjectNode<Q24Game12PlatInstance>"@ha
/* 801C56E0 001C2620  38 7E 00 20 */	addi r3, r30, 0x20
/* 801C56E4 001C2624  38 04 63 D4 */	addi r0, r4, "__vt__34TObjectNode<Q24Game12PlatInstance>"@l
/* 801C56E8 001C2628  38 80 00 00 */	li r4, 0
/* 801C56EC 001C262C  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801C56F0 001C2630  48 24 BE 99 */	bl __dt__5CNodeFv
.L_801C56F4:
/* 801C56F4 001C2634  28 1E 00 00 */	cmplwi r30, 0
/* 801C56F8 001C2638  41 82 00 44 */	beq .L_801C573C
/* 801C56FC 001C263C  3C 60 80 4B */	lis r3, "__vt__32ObjectMgr<Q24Game12PlatInstance>"@ha
/* 801C5700 001C2640  38 63 64 64 */	addi r3, r3, "__vt__32ObjectMgr<Q24Game12PlatInstance>"@l
/* 801C5704 001C2644  90 7E 00 00 */	stw r3, 0(r30)
/* 801C5708 001C2648  38 03 00 2C */	addi r0, r3, 0x2c
/* 801C570C 001C264C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801C5710 001C2650  41 82 00 2C */	beq .L_801C573C
/* 801C5714 001C2654  3C 60 80 4B */	lis r3, "__vt__32Container<Q24Game12PlatInstance>"@ha
/* 801C5718 001C2658  38 03 64 E0 */	addi r0, r3, "__vt__32Container<Q24Game12PlatInstance>"@l
/* 801C571C 001C265C  90 1E 00 00 */	stw r0, 0(r30)
/* 801C5720 001C2660  41 82 00 1C */	beq .L_801C573C
/* 801C5724 001C2664  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801C5728 001C2668  7F C3 F3 78 */	mr r3, r30
/* 801C572C 001C266C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801C5730 001C2670  38 80 00 00 */	li r4, 0
/* 801C5734 001C2674  90 1E 00 00 */	stw r0, 0(r30)
/* 801C5738 001C2678  48 24 BE 51 */	bl __dt__5CNodeFv
.L_801C573C:
/* 801C573C 001C267C  7F E0 07 35 */	extsh. r0, r31
/* 801C5740 001C2680  40 81 00 0C */	ble .L_801C574C
/* 801C5744 001C2684  7F C3 F3 78 */	mr r3, r30
/* 801C5748 001C2688  4B E5 E9 6D */	bl __dl__FPv
.L_801C574C:
/* 801C574C 001C268C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C5750 001C2690  7F C3 F3 78 */	mr r3, r30
/* 801C5754 001C2694  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C5758 001C2698  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C575C 001C269C  7C 08 03 A6 */	mtlr r0
/* 801C5760 001C26A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801C5764 001C26A4  4E 80 00 20 */	blr 

.global "__dt__34TObjectNode<Q24Game12PlatInstance>Fv"
"__dt__34TObjectNode<Q24Game12PlatInstance>Fv":
/* 801C5768 001C26A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C576C 001C26AC  7C 08 02 A6 */	mflr r0
/* 801C5770 001C26B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C5774 001C26B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C5778 001C26B8  7C 9F 23 78 */	mr r31, r4
/* 801C577C 001C26BC  93 C1 00 08 */	stw r30, 8(r1)
/* 801C5780 001C26C0  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C5784 001C26C4  41 82 00 28 */	beq .L_801C57AC
/* 801C5788 001C26C8  3C A0 80 4B */	lis r5, "__vt__34TObjectNode<Q24Game12PlatInstance>"@ha
/* 801C578C 001C26CC  38 80 00 00 */	li r4, 0
/* 801C5790 001C26D0  38 05 63 D4 */	addi r0, r5, "__vt__34TObjectNode<Q24Game12PlatInstance>"@l
/* 801C5794 001C26D4  90 1E 00 00 */	stw r0, 0(r30)
/* 801C5798 001C26D8  48 24 BD F1 */	bl __dt__5CNodeFv
/* 801C579C 001C26DC  7F E0 07 35 */	extsh. r0, r31
/* 801C57A0 001C26E0  40 81 00 0C */	ble .L_801C57AC
/* 801C57A4 001C26E4  7F C3 F3 78 */	mr r3, r30
/* 801C57A8 001C26E8  4B E5 E9 0D */	bl __dl__FPv
.L_801C57AC:
/* 801C57AC 001C26EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C57B0 001C26F0  7F C3 F3 78 */	mr r3, r30
/* 801C57B4 001C26F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C57B8 001C26F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C57BC 001C26FC  7C 08 03 A6 */	mtlr r0
/* 801C57C0 001C2700  38 21 00 10 */	addi r1, r1, 0x10
/* 801C57C4 001C2704  4E 80 00 20 */	blr 

.global "__dt__32ObjectMgr<Q24Game12PlatInstance>Fv"
"__dt__32ObjectMgr<Q24Game12PlatInstance>Fv":
/* 801C57C8 001C2708  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C57CC 001C270C  7C 08 02 A6 */	mflr r0
/* 801C57D0 001C2710  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C57D4 001C2714  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C57D8 001C2718  7C 9F 23 78 */	mr r31, r4
/* 801C57DC 001C271C  93 C1 00 08 */	stw r30, 8(r1)
/* 801C57E0 001C2720  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C57E4 001C2724  41 82 00 50 */	beq .L_801C5834
/* 801C57E8 001C2728  3C 80 80 4B */	lis r4, "__vt__32ObjectMgr<Q24Game12PlatInstance>"@ha
/* 801C57EC 001C272C  38 84 64 64 */	addi r4, r4, "__vt__32ObjectMgr<Q24Game12PlatInstance>"@l
/* 801C57F0 001C2730  90 9E 00 00 */	stw r4, 0(r30)
/* 801C57F4 001C2734  38 04 00 2C */	addi r0, r4, 0x2c
/* 801C57F8 001C2738  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801C57FC 001C273C  41 82 00 28 */	beq .L_801C5824
/* 801C5800 001C2740  3C 80 80 4B */	lis r4, "__vt__32Container<Q24Game12PlatInstance>"@ha
/* 801C5804 001C2744  38 04 64 E0 */	addi r0, r4, "__vt__32Container<Q24Game12PlatInstance>"@l
/* 801C5808 001C2748  90 1E 00 00 */	stw r0, 0(r30)
/* 801C580C 001C274C  41 82 00 18 */	beq .L_801C5824
/* 801C5810 001C2750  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801C5814 001C2754  38 80 00 00 */	li r4, 0
/* 801C5818 001C2758  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801C581C 001C275C  90 1E 00 00 */	stw r0, 0(r30)
/* 801C5820 001C2760  48 24 BD 69 */	bl __dt__5CNodeFv
.L_801C5824:
/* 801C5824 001C2764  7F E0 07 35 */	extsh. r0, r31
/* 801C5828 001C2768  40 81 00 0C */	ble .L_801C5834
/* 801C582C 001C276C  7F C3 F3 78 */	mr r3, r30
/* 801C5830 001C2770  4B E5 E8 85 */	bl __dl__FPv
.L_801C5834:
/* 801C5834 001C2774  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C5838 001C2778  7F C3 F3 78 */	mr r3, r30
/* 801C583C 001C277C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C5840 001C2780  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C5844 001C2784  7C 08 03 A6 */	mtlr r0
/* 801C5848 001C2788  38 21 00 10 */	addi r1, r1, 0x10
/* 801C584C 001C278C  4E 80 00 20 */	blr 

.global "__dt__32Container<Q24Game12PlatInstance>Fv"
"__dt__32Container<Q24Game12PlatInstance>Fv":
/* 801C5850 001C2790  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C5854 001C2794  7C 08 02 A6 */	mflr r0
/* 801C5858 001C2798  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C585C 001C279C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C5860 001C27A0  7C 9F 23 78 */	mr r31, r4
/* 801C5864 001C27A4  93 C1 00 08 */	stw r30, 8(r1)
/* 801C5868 001C27A8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C586C 001C27AC  41 82 00 38 */	beq .L_801C58A4
/* 801C5870 001C27B0  3C 80 80 4B */	lis r4, "__vt__32Container<Q24Game12PlatInstance>"@ha
/* 801C5874 001C27B4  38 04 64 E0 */	addi r0, r4, "__vt__32Container<Q24Game12PlatInstance>"@l
/* 801C5878 001C27B8  90 1E 00 00 */	stw r0, 0(r30)
/* 801C587C 001C27BC  41 82 00 18 */	beq .L_801C5894
/* 801C5880 001C27C0  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801C5884 001C27C4  38 80 00 00 */	li r4, 0
/* 801C5888 001C27C8  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801C588C 001C27CC  90 1E 00 00 */	stw r0, 0(r30)
/* 801C5890 001C27D0  48 24 BC F9 */	bl __dt__5CNodeFv
.L_801C5894:
/* 801C5894 001C27D4  7F E0 07 35 */	extsh. r0, r31
/* 801C5898 001C27D8  40 81 00 0C */	ble .L_801C58A4
/* 801C589C 001C27DC  7F C3 F3 78 */	mr r3, r30
/* 801C58A0 001C27E0  4B E5 E8 15 */	bl __dl__FPv
.L_801C58A4:
/* 801C58A4 001C27E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C58A8 001C27E8  7F C3 F3 78 */	mr r3, r30
/* 801C58AC 001C27EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C58B0 001C27F0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C58B4 001C27F4  7C 08 03 A6 */	mtlr r0
/* 801C58B8 001C27F8  38 21 00 10 */	addi r1, r1, 0x10
/* 801C58BC 001C27FC  4E 80 00 20 */	blr 

.global __ct__Q24Game18PlatAddInstanceArgFv
__ct__Q24Game18PlatAddInstanceArgFv:
/* 801C58C0 001C2800  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C58C4 001C2804  7C 08 02 A6 */	mflr r0
/* 801C58C8 001C2808  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C58CC 001C280C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C58D0 001C2810  7C 7F 1B 78 */	mr r31, r3
/* 801C58D4 001C2814  38 7F 00 04 */	addi r3, r31, 4
/* 801C58D8 001C2818  48 24 D9 99 */	bl __ct__4ID32Fv
/* 801C58DC 001C281C  38 00 00 00 */	li r0, 0
/* 801C58E0 001C2820  3C 80 6E 75 */	lis r4, 0x6E756C6C@ha
/* 801C58E4 001C2824  90 1F 00 00 */	stw r0, 0(r31)
/* 801C58E8 001C2828  38 7F 00 04 */	addi r3, r31, 4
/* 801C58EC 001C282C  38 84 6C 6C */	addi r4, r4, 0x6E756C6C@l
/* 801C58F0 001C2830  48 24 D9 E9 */	bl setID__4ID32FUl
/* 801C58F4 001C2834  38 00 00 00 */	li r0, 0
/* 801C58F8 001C2838  C0 02 B2 28 */	lfs f0, lbl_80519588@sda21(r2)
/* 801C58FC 001C283C  90 1F 00 10 */	stw r0, 0x10(r31)
/* 801C5900 001C2840  7F E3 FB 78 */	mr r3, r31
/* 801C5904 001C2844  90 1F 00 14 */	stw r0, 0x14(r31)
/* 801C5908 001C2848  98 1F 00 18 */	stb r0, 0x18(r31)
/* 801C590C 001C284C  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 801C5910 001C2850  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C5914 001C2854  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C5918 001C2858  7C 08 03 A6 */	mtlr r0
/* 801C591C 001C285C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C5920 001C2860  4E 80 00 20 */	blr 

.global addInstance__Q24Game7PlatMgrFRQ24Game18PlatAddInstanceArg
addInstance__Q24Game7PlatMgrFRQ24Game18PlatAddInstanceArg:
/* 801C5924 001C2864  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801C5928 001C2868  7C 08 02 A6 */	mflr r0
/* 801C592C 001C286C  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C5930 001C2870  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801C5934 001C2874  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801C5938 001C2878  7C 9E 23 78 */	mr r30, r4
/* 801C593C 001C287C  93 A1 00 34 */	stw r29, 0x34(r1)
/* 801C5940 001C2880  7C 7D 1B 78 */	mr r29, r3
/* 801C5944 001C2884  38 60 01 0C */	li r3, 0x10c
/* 801C5948 001C2888  93 81 00 30 */	stw r28, 0x30(r1)
/* 801C594C 001C288C  4B E5 E5 59 */	bl __nw__FUl
/* 801C5950 001C2890  7C 7F 1B 79 */	or. r31, r3, r3
/* 801C5954 001C2894  41 82 00 B8 */	beq .L_801C5A0C
/* 801C5958 001C2898  3C 80 80 4B */	lis r4, __vt__Q24Game15TPositionObject@ha
/* 801C595C 001C289C  38 7F 00 04 */	addi r3, r31, 4
/* 801C5960 001C28A0  38 04 02 A4 */	addi r0, r4, __vt__Q24Game15TPositionObject@l
/* 801C5964 001C28A4  90 1F 00 00 */	stw r0, 0(r31)
/* 801C5968 001C28A8  48 07 6E 11 */	bl __ct__Q210SweepPrune6ObjectFv
/* 801C596C 001C28AC  3C 60 80 4B */	lis r3, __vt__Q24Game10CellObject@ha
/* 801C5970 001C28B0  3C 80 80 14 */	lis r4, __ct__Q24Game7CellLegFv@ha
/* 801C5974 001C28B4  38 03 02 78 */	addi r0, r3, __vt__Q24Game10CellObject@l
/* 801C5978 001C28B8  38 A0 00 00 */	li r5, 0
/* 801C597C 001C28BC  90 1F 00 00 */	stw r0, 0(r31)
/* 801C5980 001C28C0  38 7F 00 54 */	addi r3, r31, 0x54
/* 801C5984 001C28C4  38 84 AF B0 */	addi r4, r4, __ct__Q24Game7CellLegFv@l
/* 801C5988 001C28C8  38 C0 00 14 */	li r6, 0x14
/* 801C598C 001C28CC  38 E0 00 04 */	li r7, 4
/* 801C5990 001C28D0  4B EF BE AD */	bl __construct_array
/* 801C5994 001C28D4  38 7F 00 A8 */	addi r3, r31, 0xa8
/* 801C5998 001C28D8  4B F9 14 81 */	bl __ct__Q24Game15CollisionBufferFv
/* 801C599C 001C28DC  38 00 00 01 */	li r0, 1
/* 801C59A0 001C28E0  3C 60 80 4B */	lis r3, __vt__Q24Game12PlatInstance@ha
/* 801C59A4 001C28E4  98 1F 00 64 */	stb r0, 0x64(r31)
/* 801C59A8 001C28E8  38 80 00 00 */	li r4, 0
/* 801C59AC 001C28EC  38 03 65 0C */	addi r0, r3, __vt__Q24Game12PlatInstance@l
/* 801C59B0 001C28F0  38 7F 00 F8 */	addi r3, r31, 0xf8
/* 801C59B4 001C28F4  98 9F 00 78 */	stb r4, 0x78(r31)
/* 801C59B8 001C28F8  98 9F 00 8C */	stb r4, 0x8c(r31)
/* 801C59BC 001C28FC  98 9F 00 A0 */	stb r4, 0xa0(r31)
/* 801C59C0 001C2900  93 FF 00 60 */	stw r31, 0x60(r31)
/* 801C59C4 001C2904  93 FF 00 74 */	stw r31, 0x74(r31)
/* 801C59C8 001C2908  93 FF 00 88 */	stw r31, 0x88(r31)
/* 801C59CC 001C290C  93 FF 00 9C */	stw r31, 0x9c(r31)
/* 801C59D0 001C2910  90 9F 00 A4 */	stw r4, 0xa4(r31)
/* 801C59D4 001C2914  90 1F 00 00 */	stw r0, 0(r31)
/* 801C59D8 001C2918  48 24 D8 99 */	bl __ct__4ID32Fv
/* 801C59DC 001C291C  38 00 00 00 */	li r0, 0
/* 801C59E0 001C2920  3C 80 6E 6F */	lis r4, 0x6E6F6E65@ha
/* 801C59E4 001C2924  90 1F 00 B8 */	stw r0, 0xb8(r31)
/* 801C59E8 001C2928  38 7F 00 F8 */	addi r3, r31, 0xf8
/* 801C59EC 001C292C  38 84 6E 65 */	addi r4, r4, 0x6E6F6E65@l
/* 801C59F0 001C2930  90 1F 00 EC */	stw r0, 0xec(r31)
/* 801C59F4 001C2934  90 1F 00 F4 */	stw r0, 0xf4(r31)
/* 801C59F8 001C2938  48 24 D8 E1 */	bl setID__4ID32FUl
/* 801C59FC 001C293C  38 60 00 00 */	li r3, 0
/* 801C5A00 001C2940  38 00 00 01 */	li r0, 1
/* 801C5A04 001C2944  90 7F 00 F0 */	stw r3, 0xf0(r31)
/* 801C5A08 001C2948  98 1F 01 08 */	stb r0, 0x108(r31)
.L_801C5A0C:
/* 801C5A0C 001C294C  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 801C5A10 001C2950  38 7F 00 F8 */	addi r3, r31, 0xf8
/* 801C5A14 001C2954  38 9E 00 04 */	addi r4, r30, 4
/* 801C5A18 001C2958  38 A0 00 05 */	li r5, 5
/* 801C5A1C 001C295C  90 1F 00 B8 */	stw r0, 0xb8(r31)
/* 801C5A20 001C2960  4B EF BC F9 */	bl __copy
/* 801C5A24 001C2964  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 801C5A28 001C2968  90 1F 01 00 */	stw r0, 0x100(r31)
/* 801C5A2C 001C296C  80 1E 00 00 */	lwz r0, 0(r30)
/* 801C5A30 001C2970  90 1F 00 F4 */	stw r0, 0xf4(r31)
/* 801C5A34 001C2974  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 801C5A38 001C2978  28 00 00 00 */	cmplwi r0, 0
/* 801C5A3C 001C297C  41 82 00 2C */	beq .L_801C5A68
/* 801C5A40 001C2980  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 801C5A44 001C2984  90 1F 00 EC */	stw r0, 0xec(r31)
/* 801C5A48 001C2988  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 801C5A4C 001C298C  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 801C5A50 001C2990  4B F6 DC E1 */	bl clone__8PlatformFR7Matrixf
/* 801C5A54 001C2994  90 7F 00 F0 */	stw r3, 0xf0(r31)
/* 801C5A58 001C2998  88 1F 01 08 */	lbz r0, 0x108(r31)
/* 801C5A5C 001C299C  60 00 00 80 */	ori r0, r0, 0x80
/* 801C5A60 001C29A0  98 1F 01 08 */	stb r0, 0x108(r31)
/* 801C5A64 001C29A4  48 00 00 0C */	b .L_801C5A70
.L_801C5A68:
/* 801C5A68 001C29A8  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 801C5A6C 001C29AC  90 1F 00 EC */	stw r0, 0xec(r31)
.L_801C5A70:
/* 801C5A70 001C29B0  38 60 00 1C */	li r3, 0x1c
/* 801C5A74 001C29B4  4B E5 E4 31 */	bl __nw__FUl
/* 801C5A78 001C29B8  7C 7C 1B 79 */	or. r28, r3, r3
/* 801C5A7C 001C29BC  41 82 00 14 */	beq .L_801C5A90
/* 801C5A80 001C29C0  48 24 B9 11 */	bl __ct__5CNodeFv
/* 801C5A84 001C29C4  3C 60 80 4B */	lis r3, "__vt__34TObjectNode<Q24Game12PlatInstance>"@ha
/* 801C5A88 001C29C8  38 03 63 D4 */	addi r0, r3, "__vt__34TObjectNode<Q24Game12PlatInstance>"@l
/* 801C5A8C 001C29CC  90 1C 00 00 */	stw r0, 0(r28)
.L_801C5A90:
/* 801C5A90 001C29D0  93 FC 00 18 */	stw r31, 0x18(r28)
/* 801C5A94 001C29D4  7F 84 E3 78 */	mr r4, r28
/* 801C5A98 001C29D8  38 7D 00 20 */	addi r3, r29, 0x20
/* 801C5A9C 001C29DC  48 24 B9 6D */	bl add__5CNodeFP5CNode
/* 801C5AA0 001C29E0  80 7C 00 18 */	lwz r3, 0x18(r28)
/* 801C5AA4 001C29E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5AA8 001C29E8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801C5AAC 001C29EC  7D 89 03 A6 */	mtctr r12
/* 801C5AB0 001C29F0  4E 80 04 21 */	bctrl 
/* 801C5AB4 001C29F4  80 0D 92 CC */	lwz r0, platCellMgr__4Game@sda21(r13)
/* 801C5AB8 001C29F8  28 00 00 00 */	cmplwi r0, 0
/* 801C5ABC 001C29FC  41 82 00 B4 */	beq .L_801C5B70
/* 801C5AC0 001C2A00  80 7F 00 B8 */	lwz r3, 0xb8(r31)
/* 801C5AC4 001C2A04  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 801C5AC8 001C2A08  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801C5ACC 001C2A0C  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 801C5AD0 001C2A10  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801C5AD4 001C2A14  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 801C5AD8 001C2A18  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801C5ADC 001C2A1C  80 7F 00 EC */	lwz r3, 0xec(r31)
/* 801C5AE0 001C2A20  4B F6 DC 0D */	bl getTriDivider__8PlatformFv
/* 801C5AE4 001C2A24  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 801C5AE8 001C2A28  C0 03 01 28 */	lfs f0, 0x128(r3)
/* 801C5AEC 001C2A2C  C0 61 00 20 */	lfs f3, 0x20(r1)
/* 801C5AF0 001C2A30  C0 43 01 24 */	lfs f2, 0x124(r3)
/* 801C5AF4 001C2A34  EC 81 00 2A */	fadds f4, f1, f0
/* 801C5AF8 001C2A38  C0 03 01 20 */	lfs f0, 0x120(r3)
/* 801C5AFC 001C2A3C  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 801C5B00 001C2A40  EC 43 10 2A */	fadds f2, f3, f2
/* 801C5B04 001C2A44  D0 81 00 24 */	stfs f4, 0x24(r1)
/* 801C5B08 001C2A48  EC 21 00 2A */	fadds f1, f1, f0
/* 801C5B0C 001C2A4C  C0 02 B2 28 */	lfs f0, lbl_80519588@sda21(r2)
/* 801C5B10 001C2A50  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 801C5B14 001C2A54  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801C5B18 001C2A58  C0 23 01 2C */	lfs f1, 0x12c(r3)
/* 801C5B1C 001C2A5C  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 801C5B20 001C2A60  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 801C5B24 001C2A64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801C5B28 001C2A68  40 81 00 08 */	ble .L_801C5B30
/* 801C5B2C 001C2A6C  D0 21 00 28 */	stfs f1, 0x28(r1)
.L_801C5B30:
/* 801C5B30 001C2A70  80 6D 92 CC */	lwz r3, platCellMgr__4Game@sda21(r13)
/* 801C5B34 001C2A74  38 81 00 1C */	addi r4, r1, 0x1c
/* 801C5B38 001C2A78  38 A1 00 08 */	addi r5, r1, 8
/* 801C5B3C 001C2A7C  38 C1 00 0C */	addi r6, r1, 0xc
/* 801C5B40 001C2A80  4B F9 28 51 */	bl "calcExtent__Q24Game11CellPyramidFRQ23Sys6SphereRiR7Rect<i>"
/* 801C5B44 001C2A84  80 6D 92 CC */	lwz r3, platCellMgr__4Game@sda21(r13)
/* 801C5B48 001C2A88  7F E4 FB 78 */	mr r4, r31
/* 801C5B4C 001C2A8C  38 A1 00 1C */	addi r5, r1, 0x1c
/* 801C5B50 001C2A90  4B F9 29 D1 */	bl entry__Q24Game11CellPyramidFPQ24Game10CellObjectRQ23Sys6Sphere
/* 801C5B54 001C2A94  80 7F 00 F4 */	lwz r3, 0xf4(r31)
/* 801C5B58 001C2A98  28 03 00 00 */	cmplwi r3, 0
/* 801C5B5C 001C2A9C  41 82 00 14 */	beq .L_801C5B70
/* 801C5B60 001C2AA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5B64 001C2AA4  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 801C5B68 001C2AA8  7D 89 03 A6 */	mtctr r12
/* 801C5B6C 001C2AAC  4E 80 04 21 */	bctrl 
.L_801C5B70:
/* 801C5B70 001C2AB0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801C5B74 001C2AB4  7F E3 FB 78 */	mr r3, r31
/* 801C5B78 001C2AB8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801C5B7C 001C2ABC  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 801C5B80 001C2AC0  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 801C5B84 001C2AC4  83 81 00 30 */	lwz r28, 0x30(r1)
/* 801C5B88 001C2AC8  7C 08 03 A6 */	mtlr r0
/* 801C5B8C 001C2ACC  38 21 00 40 */	addi r1, r1, 0x40
/* 801C5B90 001C2AD0  4E 80 00 20 */	blr 

.global constructor__Q24Game12PlatInstanceFv
constructor__Q24Game12PlatInstanceFv:
/* 801C5B94 001C2AD4  4E 80 00 20 */	blr 

.global delInstance__Q24Game7PlatMgrFPQ24Game12PlatInstance
delInstance__Q24Game7PlatMgrFPQ24Game12PlatInstance:
/* 801C5B98 001C2AD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C5B9C 001C2ADC  7C 08 02 A6 */	mflr r0
/* 801C5BA0 001C2AE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C5BA4 001C2AE4  48 00 0E 01 */	bl "delNode__36NodeObjectMgr<Q24Game12PlatInstance>FPQ24Game12PlatInstance"
/* 801C5BA8 001C2AE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C5BAC 001C2AEC  7C 08 03 A6 */	mtlr r0
/* 801C5BB0 001C2AF0  38 21 00 10 */	addi r1, r1, 0x10
/* 801C5BB4 001C2AF4  4E 80 00 20 */	blr 

.global traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof
traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof:
/* 801C5BB8 001C2AF8  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 801C5BBC 001C2AFC  7C 08 02 A6 */	mflr r0
/* 801C5BC0 001C2B00  90 01 00 94 */	stw r0, 0x94(r1)
/* 801C5BC4 001C2B04  DB E1 00 88 */	stfd f31, 0x88(r1)
/* 801C5BC8 001C2B08  FF E0 08 90 */	fmr f31, f1
/* 801C5BCC 001C2B0C  93 E1 00 84 */	stw r31, 0x84(r1)
/* 801C5BD0 001C2B10  7C 9F 23 78 */	mr r31, r4
/* 801C5BD4 001C2B14  88 0D 84 49 */	lbz r0, mUseCellMgr__Q24Game7PlatMgr@sda21(r13)
/* 801C5BD8 001C2B18  28 00 00 00 */	cmplwi r0, 0
/* 801C5BDC 001C2B1C  41 82 00 80 */	beq .L_801C5C5C
/* 801C5BE0 001C2B20  80 0D 92 CC */	lwz r0, platCellMgr__4Game@sda21(r13)
/* 801C5BE4 001C2B24  28 00 00 00 */	cmplwi r0, 0
/* 801C5BE8 001C2B28  41 82 00 74 */	beq .L_801C5C5C
/* 801C5BEC 001C2B2C  80 9F 00 00 */	lwz r4, 0(r31)
/* 801C5BF0 001C2B30  38 61 00 18 */	addi r3, r1, 0x18
/* 801C5BF4 001C2B34  48 06 87 AD */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 801C5BF8 001C2B38  80 AD 92 CC */	lwz r5, platCellMgr__4Game@sda21(r13)
/* 801C5BFC 001C2B3C  38 00 00 01 */	li r0, 1
/* 801C5C00 001C2B40  98 01 00 34 */	stb r0, 0x34(r1)
/* 801C5C04 001C2B44  38 61 00 38 */	addi r3, r1, 0x38
/* 801C5C08 001C2B48  38 81 00 18 */	addi r4, r1, 0x18
/* 801C5C0C 001C2B4C  90 A1 00 30 */	stw r5, 0x30(r1)
/* 801C5C10 001C2B50  48 06 87 D1 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 801C5C14 001C2B54  38 61 00 38 */	addi r3, r1, 0x38
/* 801C5C18 001C2B58  48 06 88 45 */	bl first__Q24Game12CellIteratorFv
/* 801C5C1C 001C2B5C  48 00 00 2C */	b .L_801C5C48
.L_801C5C20:
/* 801C5C20 001C2B60  38 61 00 38 */	addi r3, r1, 0x38
/* 801C5C24 001C2B64  48 06 89 3D */	bl getCellObject__Q24Game12CellIteratorFv
/* 801C5C28 001C2B68  88 03 01 08 */	lbz r0, 0x108(r3)
/* 801C5C2C 001C2B6C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801C5C30 001C2B70  41 82 00 10 */	beq .L_801C5C40
/* 801C5C34 001C2B74  FC 20 F8 90 */	fmr f1, f31
/* 801C5C38 001C2B78  7F E4 FB 78 */	mr r4, r31
/* 801C5C3C 001C2B7C  4B FF F2 85 */	bl traceMove__Q24Game12PlatInstanceFRQ24Game8MoveInfof
.L_801C5C40:
/* 801C5C40 001C2B80  38 61 00 38 */	addi r3, r1, 0x38
/* 801C5C44 001C2B84  48 06 88 BD */	bl next__Q24Game12CellIteratorFv
.L_801C5C48:
/* 801C5C48 001C2B88  38 61 00 38 */	addi r3, r1, 0x38
/* 801C5C4C 001C2B8C  48 06 88 E9 */	bl isDone__Q24Game12CellIteratorFv
/* 801C5C50 001C2B90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C5C54 001C2B94  41 82 FF CC */	beq .L_801C5C20
/* 801C5C58 001C2B98  48 00 01 EC */	b .L_801C5E44
.L_801C5C5C:
/* 801C5C5C 001C2B9C  38 00 00 00 */	li r0, 0
/* 801C5C60 001C2BA0  3C 80 80 4B */	lis r4, "__vt__31Iterator<Q24Game12PlatInstance>"@ha
/* 801C5C64 001C2BA4  38 84 63 BC */	addi r4, r4, "__vt__31Iterator<Q24Game12PlatInstance>"@l
/* 801C5C68 001C2BA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C5C6C 001C2BAC  28 00 00 00 */	cmplwi r0, 0
/* 801C5C70 001C2BB0  90 81 00 08 */	stw r4, 8(r1)
/* 801C5C74 001C2BB4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C5C78 001C2BB8  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C5C7C 001C2BBC  40 82 00 1C */	bne .L_801C5C98
/* 801C5C80 001C2BC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5C84 001C2BC4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C5C88 001C2BC8  7D 89 03 A6 */	mtctr r12
/* 801C5C8C 001C2BCC  4E 80 04 21 */	bctrl 
/* 801C5C90 001C2BD0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C5C94 001C2BD4  48 00 01 90 */	b .L_801C5E24
.L_801C5C98:
/* 801C5C98 001C2BD8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5C9C 001C2BDC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C5CA0 001C2BE0  7D 89 03 A6 */	mtctr r12
/* 801C5CA4 001C2BE4  4E 80 04 21 */	bctrl 
/* 801C5CA8 001C2BE8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C5CAC 001C2BEC  48 00 00 58 */	b .L_801C5D04
.L_801C5CB0:
/* 801C5CB0 001C2BF0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C5CB4 001C2BF4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C5CB8 001C2BF8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5CBC 001C2BFC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C5CC0 001C2C00  7D 89 03 A6 */	mtctr r12
/* 801C5CC4 001C2C04  4E 80 04 21 */	bctrl 
/* 801C5CC8 001C2C08  7C 64 1B 78 */	mr r4, r3
/* 801C5CCC 001C2C0C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C5CD0 001C2C10  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5CD4 001C2C14  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C5CD8 001C2C18  7D 89 03 A6 */	mtctr r12
/* 801C5CDC 001C2C1C  4E 80 04 21 */	bctrl 
/* 801C5CE0 001C2C20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C5CE4 001C2C24  40 82 01 40 */	bne .L_801C5E24
/* 801C5CE8 001C2C28  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C5CEC 001C2C2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C5CF0 001C2C30  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5CF4 001C2C34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C5CF8 001C2C38  7D 89 03 A6 */	mtctr r12
/* 801C5CFC 001C2C3C  4E 80 04 21 */	bctrl 
/* 801C5D00 001C2C40  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C5D04:
/* 801C5D04 001C2C44  81 81 00 08 */	lwz r12, 8(r1)
/* 801C5D08 001C2C48  38 61 00 08 */	addi r3, r1, 8
/* 801C5D0C 001C2C4C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C5D10 001C2C50  7D 89 03 A6 */	mtctr r12
/* 801C5D14 001C2C54  4E 80 04 21 */	bctrl 
/* 801C5D18 001C2C58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C5D1C 001C2C5C  41 82 FF 94 */	beq .L_801C5CB0
/* 801C5D20 001C2C60  48 00 01 04 */	b .L_801C5E24
.L_801C5D24:
/* 801C5D24 001C2C64  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C5D28 001C2C68  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5D2C 001C2C6C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C5D30 001C2C70  7D 89 03 A6 */	mtctr r12
/* 801C5D34 001C2C74  4E 80 04 21 */	bctrl 
/* 801C5D38 001C2C78  88 03 01 08 */	lbz r0, 0x108(r3)
/* 801C5D3C 001C2C7C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801C5D40 001C2C80  41 82 00 28 */	beq .L_801C5D68
/* 801C5D44 001C2C84  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C5D48 001C2C88  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C5D4C 001C2C8C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5D50 001C2C90  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C5D54 001C2C94  7D 89 03 A6 */	mtctr r12
/* 801C5D58 001C2C98  4E 80 04 21 */	bctrl 
/* 801C5D5C 001C2C9C  FC 20 F8 90 */	fmr f1, f31
/* 801C5D60 001C2CA0  7F E4 FB 78 */	mr r4, r31
/* 801C5D64 001C2CA4  4B FF F1 5D */	bl traceMove__Q24Game12PlatInstanceFRQ24Game8MoveInfof
.L_801C5D68:
/* 801C5D68 001C2CA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C5D6C 001C2CAC  28 00 00 00 */	cmplwi r0, 0
/* 801C5D70 001C2CB0  40 82 00 24 */	bne .L_801C5D94
/* 801C5D74 001C2CB4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C5D78 001C2CB8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C5D7C 001C2CBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5D80 001C2CC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C5D84 001C2CC4  7D 89 03 A6 */	mtctr r12
/* 801C5D88 001C2CC8  4E 80 04 21 */	bctrl 
/* 801C5D8C 001C2CCC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C5D90 001C2CD0  48 00 00 94 */	b .L_801C5E24
.L_801C5D94:
/* 801C5D94 001C2CD4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C5D98 001C2CD8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C5D9C 001C2CDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5DA0 001C2CE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C5DA4 001C2CE4  7D 89 03 A6 */	mtctr r12
/* 801C5DA8 001C2CE8  4E 80 04 21 */	bctrl 
/* 801C5DAC 001C2CEC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C5DB0 001C2CF0  48 00 00 58 */	b .L_801C5E08
.L_801C5DB4:
/* 801C5DB4 001C2CF4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C5DB8 001C2CF8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C5DBC 001C2CFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5DC0 001C2D00  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C5DC4 001C2D04  7D 89 03 A6 */	mtctr r12
/* 801C5DC8 001C2D08  4E 80 04 21 */	bctrl 
/* 801C5DCC 001C2D0C  7C 64 1B 78 */	mr r4, r3
/* 801C5DD0 001C2D10  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C5DD4 001C2D14  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5DD8 001C2D18  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C5DDC 001C2D1C  7D 89 03 A6 */	mtctr r12
/* 801C5DE0 001C2D20  4E 80 04 21 */	bctrl 
/* 801C5DE4 001C2D24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C5DE8 001C2D28  40 82 00 3C */	bne .L_801C5E24
/* 801C5DEC 001C2D2C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C5DF0 001C2D30  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C5DF4 001C2D34  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5DF8 001C2D38  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C5DFC 001C2D3C  7D 89 03 A6 */	mtctr r12
/* 801C5E00 001C2D40  4E 80 04 21 */	bctrl 
/* 801C5E04 001C2D44  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C5E08:
/* 801C5E08 001C2D48  81 81 00 08 */	lwz r12, 8(r1)
/* 801C5E0C 001C2D4C  38 61 00 08 */	addi r3, r1, 8
/* 801C5E10 001C2D50  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C5E14 001C2D54  7D 89 03 A6 */	mtctr r12
/* 801C5E18 001C2D58  4E 80 04 21 */	bctrl 
/* 801C5E1C 001C2D5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C5E20 001C2D60  41 82 FF 94 */	beq .L_801C5DB4
.L_801C5E24:
/* 801C5E24 001C2D64  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C5E28 001C2D68  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5E2C 001C2D6C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C5E30 001C2D70  7D 89 03 A6 */	mtctr r12
/* 801C5E34 001C2D74  4E 80 04 21 */	bctrl 
/* 801C5E38 001C2D78  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C5E3C 001C2D7C  7C 04 18 40 */	cmplw r4, r3
/* 801C5E40 001C2D80  40 82 FE E4 */	bne .L_801C5D24
.L_801C5E44:
/* 801C5E44 001C2D84  80 01 00 94 */	lwz r0, 0x94(r1)
/* 801C5E48 001C2D88  CB E1 00 88 */	lfd f31, 0x88(r1)
/* 801C5E4C 001C2D8C  83 E1 00 84 */	lwz r31, 0x84(r1)
/* 801C5E50 001C2D90  7C 08 03 A6 */	mtlr r0
/* 801C5E54 001C2D94  38 21 00 90 */	addi r1, r1, 0x90
/* 801C5E58 001C2D98  4E 80 00 20 */	blr 

.global "isDone__31Iterator<Q24Game12PlatInstance>Fv"
"isDone__31Iterator<Q24Game12PlatInstance>Fv":
/* 801C5E5C 001C2D9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C5E60 001C2DA0  7C 08 02 A6 */	mflr r0
/* 801C5E64 001C2DA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C5E68 001C2DA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C5E6C 001C2DAC  7C 7F 1B 78 */	mr r31, r3
/* 801C5E70 001C2DB0  80 63 00 08 */	lwz r3, 8(r3)
/* 801C5E74 001C2DB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5E78 001C2DB8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C5E7C 001C2DBC  7D 89 03 A6 */	mtctr r12
/* 801C5E80 001C2DC0  4E 80 04 21 */	bctrl 
/* 801C5E84 001C2DC4  80 1F 00 04 */	lwz r0, 4(r31)
/* 801C5E88 001C2DC8  7C 00 18 50 */	subf r0, r0, r3
/* 801C5E8C 001C2DCC  7C 00 00 34 */	cntlzw r0, r0
/* 801C5E90 001C2DD0  54 03 D9 7E */	srwi r3, r0, 5
/* 801C5E94 001C2DD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C5E98 001C2DD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C5E9C 001C2DDC  7C 08 03 A6 */	mtlr r0
/* 801C5EA0 001C2DE0  38 21 00 10 */	addi r1, r1, 0x10
/* 801C5EA4 001C2DE4  4E 80 00 20 */	blr 

.global getCurrTri__Q24Game7PlatMgrFRQ24Game11CurrTriInfo
getCurrTri__Q24Game7PlatMgrFRQ24Game11CurrTriInfo:
/* 801C5EA8 001C2DE8  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 801C5EAC 001C2DEC  7C 08 02 A6 */	mflr r0
/* 801C5EB0 001C2DF0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801C5EB4 001C2DF4  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 801C5EB8 001C2DF8  7C 9F 23 78 */	mr r31, r4
/* 801C5EBC 001C2DFC  88 0D 84 49 */	lbz r0, mUseCellMgr__Q24Game7PlatMgr@sda21(r13)
/* 801C5EC0 001C2E00  28 00 00 00 */	cmplwi r0, 0
/* 801C5EC4 001C2E04  41 82 00 9C */	beq .L_801C5F60
/* 801C5EC8 001C2E08  80 0D 92 CC */	lwz r0, platCellMgr__4Game@sda21(r13)
/* 801C5ECC 001C2E0C  28 00 00 00 */	cmplwi r0, 0
/* 801C5ED0 001C2E10  41 82 00 90 */	beq .L_801C5F60
/* 801C5ED4 001C2E14  C0 3F 00 00 */	lfs f1, 0(r31)
/* 801C5ED8 001C2E18  38 61 00 28 */	addi r3, r1, 0x28
/* 801C5EDC 001C2E1C  C0 02 B2 28 */	lfs f0, lbl_80519588@sda21(r2)
/* 801C5EE0 001C2E20  38 81 00 18 */	addi r4, r1, 0x18
/* 801C5EE4 001C2E24  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 801C5EE8 001C2E28  C0 3F 00 04 */	lfs f1, 4(r31)
/* 801C5EEC 001C2E2C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801C5EF0 001C2E30  C0 3F 00 08 */	lfs f1, 8(r31)
/* 801C5EF4 001C2E34  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 801C5EF8 001C2E38  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801C5EFC 001C2E3C  48 06 84 A5 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 801C5F00 001C2E40  80 AD 92 CC */	lwz r5, platCellMgr__4Game@sda21(r13)
/* 801C5F04 001C2E44  38 00 00 01 */	li r0, 1
/* 801C5F08 001C2E48  98 01 00 44 */	stb r0, 0x44(r1)
/* 801C5F0C 001C2E4C  38 61 00 48 */	addi r3, r1, 0x48
/* 801C5F10 001C2E50  38 81 00 28 */	addi r4, r1, 0x28
/* 801C5F14 001C2E54  90 A1 00 40 */	stw r5, 0x40(r1)
/* 801C5F18 001C2E58  48 06 84 C9 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 801C5F1C 001C2E5C  38 61 00 48 */	addi r3, r1, 0x48
/* 801C5F20 001C2E60  48 06 85 3D */	bl first__Q24Game12CellIteratorFv
/* 801C5F24 001C2E64  48 00 00 28 */	b .L_801C5F4C
.L_801C5F28:
/* 801C5F28 001C2E68  38 61 00 48 */	addi r3, r1, 0x48
/* 801C5F2C 001C2E6C  48 06 86 35 */	bl getCellObject__Q24Game12CellIteratorFv
/* 801C5F30 001C2E70  88 03 01 08 */	lbz r0, 0x108(r3)
/* 801C5F34 001C2E74  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801C5F38 001C2E78  41 82 00 0C */	beq .L_801C5F44
/* 801C5F3C 001C2E7C  7F E4 FB 78 */	mr r4, r31
/* 801C5F40 001C2E80  4B FF ED 2D */	bl getCurrTri__Q24Game12PlatInstanceFRQ24Game11CurrTriInfo
.L_801C5F44:
/* 801C5F44 001C2E84  38 61 00 48 */	addi r3, r1, 0x48
/* 801C5F48 001C2E88  48 06 85 B9 */	bl next__Q24Game12CellIteratorFv
.L_801C5F4C:
/* 801C5F4C 001C2E8C  38 61 00 48 */	addi r3, r1, 0x48
/* 801C5F50 001C2E90  48 06 85 E5 */	bl isDone__Q24Game12CellIteratorFv
/* 801C5F54 001C2E94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C5F58 001C2E98  41 82 FF D0 */	beq .L_801C5F28
/* 801C5F5C 001C2E9C  48 00 01 E8 */	b .L_801C6144
.L_801C5F60:
/* 801C5F60 001C2EA0  38 00 00 00 */	li r0, 0
/* 801C5F64 001C2EA4  3C 80 80 4B */	lis r4, "__vt__31Iterator<Q24Game12PlatInstance>"@ha
/* 801C5F68 001C2EA8  38 84 63 BC */	addi r4, r4, "__vt__31Iterator<Q24Game12PlatInstance>"@l
/* 801C5F6C 001C2EAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C5F70 001C2EB0  28 00 00 00 */	cmplwi r0, 0
/* 801C5F74 001C2EB4  90 81 00 08 */	stw r4, 8(r1)
/* 801C5F78 001C2EB8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C5F7C 001C2EBC  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C5F80 001C2EC0  40 82 00 1C */	bne .L_801C5F9C
/* 801C5F84 001C2EC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5F88 001C2EC8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C5F8C 001C2ECC  7D 89 03 A6 */	mtctr r12
/* 801C5F90 001C2ED0  4E 80 04 21 */	bctrl 
/* 801C5F94 001C2ED4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C5F98 001C2ED8  48 00 01 8C */	b .L_801C6124
.L_801C5F9C:
/* 801C5F9C 001C2EDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5FA0 001C2EE0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C5FA4 001C2EE4  7D 89 03 A6 */	mtctr r12
/* 801C5FA8 001C2EE8  4E 80 04 21 */	bctrl 
/* 801C5FAC 001C2EEC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C5FB0 001C2EF0  48 00 00 58 */	b .L_801C6008
.L_801C5FB4:
/* 801C5FB4 001C2EF4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C5FB8 001C2EF8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C5FBC 001C2EFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5FC0 001C2F00  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C5FC4 001C2F04  7D 89 03 A6 */	mtctr r12
/* 801C5FC8 001C2F08  4E 80 04 21 */	bctrl 
/* 801C5FCC 001C2F0C  7C 64 1B 78 */	mr r4, r3
/* 801C5FD0 001C2F10  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C5FD4 001C2F14  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5FD8 001C2F18  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C5FDC 001C2F1C  7D 89 03 A6 */	mtctr r12
/* 801C5FE0 001C2F20  4E 80 04 21 */	bctrl 
/* 801C5FE4 001C2F24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C5FE8 001C2F28  40 82 01 3C */	bne .L_801C6124
/* 801C5FEC 001C2F2C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C5FF0 001C2F30  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C5FF4 001C2F34  81 83 00 00 */	lwz r12, 0(r3)
/* 801C5FF8 001C2F38  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C5FFC 001C2F3C  7D 89 03 A6 */	mtctr r12
/* 801C6000 001C2F40  4E 80 04 21 */	bctrl 
/* 801C6004 001C2F44  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C6008:
/* 801C6008 001C2F48  81 81 00 08 */	lwz r12, 8(r1)
/* 801C600C 001C2F4C  38 61 00 08 */	addi r3, r1, 8
/* 801C6010 001C2F50  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C6014 001C2F54  7D 89 03 A6 */	mtctr r12
/* 801C6018 001C2F58  4E 80 04 21 */	bctrl 
/* 801C601C 001C2F5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6020 001C2F60  41 82 FF 94 */	beq .L_801C5FB4
/* 801C6024 001C2F64  48 00 01 00 */	b .L_801C6124
.L_801C6028:
/* 801C6028 001C2F68  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C602C 001C2F6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6030 001C2F70  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6034 001C2F74  7D 89 03 A6 */	mtctr r12
/* 801C6038 001C2F78  4E 80 04 21 */	bctrl 
/* 801C603C 001C2F7C  88 03 01 08 */	lbz r0, 0x108(r3)
/* 801C6040 001C2F80  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801C6044 001C2F84  41 82 00 24 */	beq .L_801C6068
/* 801C6048 001C2F88  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C604C 001C2F8C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6050 001C2F90  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6054 001C2F94  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6058 001C2F98  7D 89 03 A6 */	mtctr r12
/* 801C605C 001C2F9C  4E 80 04 21 */	bctrl 
/* 801C6060 001C2FA0  7F E4 FB 78 */	mr r4, r31
/* 801C6064 001C2FA4  4B FF EC 09 */	bl getCurrTri__Q24Game12PlatInstanceFRQ24Game11CurrTriInfo
.L_801C6068:
/* 801C6068 001C2FA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C606C 001C2FAC  28 00 00 00 */	cmplwi r0, 0
/* 801C6070 001C2FB0  40 82 00 24 */	bne .L_801C6094
/* 801C6074 001C2FB4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6078 001C2FB8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C607C 001C2FBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6080 001C2FC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6084 001C2FC4  7D 89 03 A6 */	mtctr r12
/* 801C6088 001C2FC8  4E 80 04 21 */	bctrl 
/* 801C608C 001C2FCC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C6090 001C2FD0  48 00 00 94 */	b .L_801C6124
.L_801C6094:
/* 801C6094 001C2FD4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6098 001C2FD8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C609C 001C2FDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C60A0 001C2FE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C60A4 001C2FE4  7D 89 03 A6 */	mtctr r12
/* 801C60A8 001C2FE8  4E 80 04 21 */	bctrl 
/* 801C60AC 001C2FEC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C60B0 001C2FF0  48 00 00 58 */	b .L_801C6108
.L_801C60B4:
/* 801C60B4 001C2FF4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C60B8 001C2FF8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C60BC 001C2FFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C60C0 001C3000  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C60C4 001C3004  7D 89 03 A6 */	mtctr r12
/* 801C60C8 001C3008  4E 80 04 21 */	bctrl 
/* 801C60CC 001C300C  7C 64 1B 78 */	mr r4, r3
/* 801C60D0 001C3010  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C60D4 001C3014  81 83 00 00 */	lwz r12, 0(r3)
/* 801C60D8 001C3018  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C60DC 001C301C  7D 89 03 A6 */	mtctr r12
/* 801C60E0 001C3020  4E 80 04 21 */	bctrl 
/* 801C60E4 001C3024  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C60E8 001C3028  40 82 00 3C */	bne .L_801C6124
/* 801C60EC 001C302C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C60F0 001C3030  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C60F4 001C3034  81 83 00 00 */	lwz r12, 0(r3)
/* 801C60F8 001C3038  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C60FC 001C303C  7D 89 03 A6 */	mtctr r12
/* 801C6100 001C3040  4E 80 04 21 */	bctrl 
/* 801C6104 001C3044  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C6108:
/* 801C6108 001C3048  81 81 00 08 */	lwz r12, 8(r1)
/* 801C610C 001C304C  38 61 00 08 */	addi r3, r1, 8
/* 801C6110 001C3050  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C6114 001C3054  7D 89 03 A6 */	mtctr r12
/* 801C6118 001C3058  4E 80 04 21 */	bctrl 
/* 801C611C 001C305C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6120 001C3060  41 82 FF 94 */	beq .L_801C60B4
.L_801C6124:
/* 801C6124 001C3064  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6128 001C3068  81 83 00 00 */	lwz r12, 0(r3)
/* 801C612C 001C306C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C6130 001C3070  7D 89 03 A6 */	mtctr r12
/* 801C6134 001C3074  4E 80 04 21 */	bctrl 
/* 801C6138 001C3078  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C613C 001C307C  7C 04 18 40 */	cmplw r4, r3
/* 801C6140 001C3080  40 82 FE E8 */	bne .L_801C6028
.L_801C6144:
/* 801C6144 001C3084  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 801C6148 001C3088  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 801C614C 001C308C  7C 08 03 A6 */	mtlr r0
/* 801C6150 001C3090  38 21 00 A0 */	addi r1, r1, 0xa0
/* 801C6154 001C3094  4E 80 00 20 */	blr 

.global findRayIntersection__Q24Game7PlatMgrFRQ23Sys16RayIntersectInfo
findRayIntersection__Q24Game7PlatMgrFRQ23Sys16RayIntersectInfo:
/* 801C6158 001C3098  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 801C615C 001C309C  7C 08 02 A6 */	mflr r0
/* 801C6160 001C30A0  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 801C6164 001C30A4  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 801C6168 001C30A8  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 801C616C 001C30AC  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 801C6170 001C30B0  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 801C6174 001C30B4  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 801C6178 001C30B8  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 801C617C 001C30BC  DB 81 00 90 */	stfd f28, 0x90(r1)
/* 801C6180 001C30C0  F3 81 00 98 */	psq_st f28, 152(r1), 0, qr0
/* 801C6184 001C30C4  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 801C6188 001C30C8  93 C1 00 88 */	stw r30, 0x88(r1)
/* 801C618C 001C30CC  93 A1 00 84 */	stw r29, 0x84(r1)
/* 801C6190 001C30D0  93 81 00 80 */	stw r28, 0x80(r1)
/* 801C6194 001C30D4  C0 44 00 04 */	lfs f2, 4(r4)
/* 801C6198 001C30D8  7C 9E 23 78 */	mr r30, r4
/* 801C619C 001C30DC  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 801C61A0 001C30E0  C0 84 00 00 */	lfs f4, 0(r4)
/* 801C61A4 001C30E4  EC A2 08 28 */	fsubs f5, f2, f1
/* 801C61A8 001C30E8  C0 64 00 0C */	lfs f3, 0xc(r4)
/* 801C61AC 001C30EC  C0 44 00 08 */	lfs f2, 8(r4)
/* 801C61B0 001C30F0  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 801C61B4 001C30F4  EC 64 18 28 */	fsubs f3, f4, f3
/* 801C61B8 001C30F8  EC 85 01 72 */	fmuls f4, f5, f5
/* 801C61BC 001C30FC  EC 42 08 28 */	fsubs f2, f2, f1
/* 801C61C0 001C3100  C0 02 B2 28 */	lfs f0, lbl_80519588@sda21(r2)
/* 801C61C4 001C3104  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 801C61C8 001C3108  EC 42 00 B2 */	fmuls f2, f2, f2
/* 801C61CC 001C310C  EC 22 08 2A */	fadds f1, f2, f1
/* 801C61D0 001C3110  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801C61D4 001C3114  38 00 00 00 */	li r0, 0
/* 801C61D8 001C3118  3C 80 80 4B */	lis r4, "__vt__31Iterator<Q24Game12PlatInstance>"@ha
/* 801C61DC 001C311C  38 84 63 BC */	addi r4, r4, "__vt__31Iterator<Q24Game12PlatInstance>"@l
/* 801C61E0 001C3120  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C61E4 001C3124  28 00 00 00 */	cmplwi r0, 0
/* 801C61E8 001C3128  C3 82 B2 2C */	lfs f28, lbl_8051958C@sda21(r2)
/* 801C61EC 001C312C  90 81 00 08 */	stw r4, 8(r1)
/* 801C61F0 001C3130  3B E0 00 00 */	li r31, 0
/* 801C61F4 001C3134  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C61F8 001C3138  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C61FC 001C313C  40 82 00 1C */	bne .L_801C6218
/* 801C6200 001C3140  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6204 001C3144  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C6208 001C3148  7D 89 03 A6 */	mtctr r12
/* 801C620C 001C314C  4E 80 04 21 */	bctrl 
/* 801C6210 001C3150  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C6214 001C3154  48 00 01 FC */	b .L_801C6410
.L_801C6218:
/* 801C6218 001C3158  81 83 00 00 */	lwz r12, 0(r3)
/* 801C621C 001C315C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C6220 001C3160  7D 89 03 A6 */	mtctr r12
/* 801C6224 001C3164  4E 80 04 21 */	bctrl 
/* 801C6228 001C3168  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C622C 001C316C  48 00 00 58 */	b .L_801C6284
.L_801C6230:
/* 801C6230 001C3170  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6234 001C3174  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6238 001C3178  81 83 00 00 */	lwz r12, 0(r3)
/* 801C623C 001C317C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6240 001C3180  7D 89 03 A6 */	mtctr r12
/* 801C6244 001C3184  4E 80 04 21 */	bctrl 
/* 801C6248 001C3188  7C 64 1B 78 */	mr r4, r3
/* 801C624C 001C318C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C6250 001C3190  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6254 001C3194  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C6258 001C3198  7D 89 03 A6 */	mtctr r12
/* 801C625C 001C319C  4E 80 04 21 */	bctrl 
/* 801C6260 001C31A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6264 001C31A4  40 82 01 AC */	bne .L_801C6410
/* 801C6268 001C31A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C626C 001C31AC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6270 001C31B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6274 001C31B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6278 001C31B8  7D 89 03 A6 */	mtctr r12
/* 801C627C 001C31BC  4E 80 04 21 */	bctrl 
/* 801C6280 001C31C0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C6284:
/* 801C6284 001C31C4  81 81 00 08 */	lwz r12, 8(r1)
/* 801C6288 001C31C8  38 61 00 08 */	addi r3, r1, 8
/* 801C628C 001C31CC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C6290 001C31D0  7D 89 03 A6 */	mtctr r12
/* 801C6294 001C31D4  4E 80 04 21 */	bctrl 
/* 801C6298 001C31D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C629C 001C31DC  41 82 FF 94 */	beq .L_801C6230
/* 801C62A0 001C31E0  48 00 01 70 */	b .L_801C6410
.L_801C62A4:
/* 801C62A4 001C31E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C62A8 001C31E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C62AC 001C31EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C62B0 001C31F0  7D 89 03 A6 */	mtctr r12
/* 801C62B4 001C31F4  4E 80 04 21 */	bctrl 
/* 801C62B8 001C31F8  88 03 01 08 */	lbz r0, 0x108(r3)
/* 801C62BC 001C31FC  7C 7D 1B 78 */	mr r29, r3
/* 801C62C0 001C3200  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801C62C4 001C3204  41 82 00 90 */	beq .L_801C6354
/* 801C62C8 001C3208  80 7D 00 EC */	lwz r3, 0xec(r29)
/* 801C62CC 001C320C  4B F6 D4 21 */	bl getTriDivider__8PlatformFv
/* 801C62D0 001C3210  7C 60 1B 78 */	mr r0, r3
/* 801C62D4 001C3214  80 7D 00 B8 */	lwz r3, 0xb8(r29)
/* 801C62D8 001C3218  7C 1C 03 78 */	mr r28, r0
/* 801C62DC 001C321C  38 81 00 48 */	addi r4, r1, 0x48
/* 801C62E0 001C3220  4B F2 3F ED */	bl PSMTXCopy
/* 801C62E4 001C3224  88 0D 84 48 */	lbz r0, useFixCollision__Q24Game12PlatInstance@sda21(r13)
/* 801C62E8 001C3228  28 00 00 00 */	cmplwi r0, 0
/* 801C62EC 001C322C  41 82 00 10 */	beq .L_801C62FC
/* 801C62F0 001C3230  88 1D 01 08 */	lbz r0, 0x108(r29)
/* 801C62F4 001C3234  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 801C62F8 001C3238  40 82 00 14 */	bne .L_801C630C
.L_801C62FC:
/* 801C62FC 001C323C  38 61 00 48 */	addi r3, r1, 0x48
/* 801C6300 001C3240  38 81 00 18 */	addi r4, r1, 0x18
/* 801C6304 001C3244  4B F2 41 19 */	bl PSMTXInverse
/* 801C6308 001C3248  48 00 00 10 */	b .L_801C6318
.L_801C630C:
/* 801C630C 001C324C  38 7D 00 BC */	addi r3, r29, 0xbc
/* 801C6310 001C3250  38 81 00 18 */	addi r4, r1, 0x18
/* 801C6314 001C3254  4B F2 3F B9 */	bl PSMTXCopy
.L_801C6318:
/* 801C6318 001C3258  7F 83 E3 78 */	mr r3, r28
/* 801C631C 001C325C  7F C4 F3 78 */	mr r4, r30
/* 801C6320 001C3260  38 A1 00 48 */	addi r5, r1, 0x48
/* 801C6324 001C3264  38 C1 00 18 */	addi r6, r1, 0x18
/* 801C6328 001C3268  48 25 87 31 */	bl findRayIntersection__Q23Sys7OBBTreeFRQ23Sys16RayIntersectInfoR7MatrixfR7Matrixf
/* 801C632C 001C326C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6330 001C3270  41 82 00 24 */	beq .L_801C6354
/* 801C6334 001C3274  C0 1E 00 40 */	lfs f0, 0x40(r30)
/* 801C6338 001C3278  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 801C633C 001C327C  40 80 00 18 */	bge .L_801C6354
/* 801C6340 001C3280  FF 80 00 90 */	fmr f28, f0
/* 801C6344 001C3284  C3 FE 00 34 */	lfs f31, 0x34(r30)
/* 801C6348 001C3288  C3 DE 00 38 */	lfs f30, 0x38(r30)
/* 801C634C 001C328C  3B E0 00 01 */	li r31, 1
/* 801C6350 001C3290  C3 BE 00 3C */	lfs f29, 0x3c(r30)
.L_801C6354:
/* 801C6354 001C3294  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C6358 001C3298  28 00 00 00 */	cmplwi r0, 0
/* 801C635C 001C329C  40 82 00 24 */	bne .L_801C6380
/* 801C6360 001C32A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6364 001C32A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6368 001C32A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C636C 001C32AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6370 001C32B0  7D 89 03 A6 */	mtctr r12
/* 801C6374 001C32B4  4E 80 04 21 */	bctrl 
/* 801C6378 001C32B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C637C 001C32BC  48 00 00 94 */	b .L_801C6410
.L_801C6380:
/* 801C6380 001C32C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6384 001C32C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6388 001C32C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C638C 001C32CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6390 001C32D0  7D 89 03 A6 */	mtctr r12
/* 801C6394 001C32D4  4E 80 04 21 */	bctrl 
/* 801C6398 001C32D8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C639C 001C32DC  48 00 00 58 */	b .L_801C63F4
.L_801C63A0:
/* 801C63A0 001C32E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C63A4 001C32E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C63A8 001C32E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C63AC 001C32EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C63B0 001C32F0  7D 89 03 A6 */	mtctr r12
/* 801C63B4 001C32F4  4E 80 04 21 */	bctrl 
/* 801C63B8 001C32F8  7C 64 1B 78 */	mr r4, r3
/* 801C63BC 001C32FC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C63C0 001C3300  81 83 00 00 */	lwz r12, 0(r3)
/* 801C63C4 001C3304  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C63C8 001C3308  7D 89 03 A6 */	mtctr r12
/* 801C63CC 001C330C  4E 80 04 21 */	bctrl 
/* 801C63D0 001C3310  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C63D4 001C3314  40 82 00 3C */	bne .L_801C6410
/* 801C63D8 001C3318  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C63DC 001C331C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C63E0 001C3320  81 83 00 00 */	lwz r12, 0(r3)
/* 801C63E4 001C3324  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C63E8 001C3328  7D 89 03 A6 */	mtctr r12
/* 801C63EC 001C332C  4E 80 04 21 */	bctrl 
/* 801C63F0 001C3330  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C63F4:
/* 801C63F4 001C3334  81 81 00 08 */	lwz r12, 8(r1)
/* 801C63F8 001C3338  38 61 00 08 */	addi r3, r1, 8
/* 801C63FC 001C333C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C6400 001C3340  7D 89 03 A6 */	mtctr r12
/* 801C6404 001C3344  4E 80 04 21 */	bctrl 
/* 801C6408 001C3348  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C640C 001C334C  41 82 FF 94 */	beq .L_801C63A0
.L_801C6410:
/* 801C6410 001C3350  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6414 001C3354  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6418 001C3358  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C641C 001C335C  7D 89 03 A6 */	mtctr r12
/* 801C6420 001C3360  4E 80 04 21 */	bctrl 
/* 801C6424 001C3364  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6428 001C3368  7C 04 18 40 */	cmplw r4, r3
/* 801C642C 001C336C  40 82 FE 78 */	bne .L_801C62A4
/* 801C6430 001C3370  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801C6434 001C3374  41 82 00 18 */	beq .L_801C644C
/* 801C6438 001C3378  D3 FE 00 34 */	stfs f31, 0x34(r30)
/* 801C643C 001C337C  38 60 00 01 */	li r3, 1
/* 801C6440 001C3380  D3 DE 00 38 */	stfs f30, 0x38(r30)
/* 801C6444 001C3384  D3 BE 00 3C */	stfs f29, 0x3c(r30)
/* 801C6448 001C3388  48 00 00 08 */	b .L_801C6450
.L_801C644C:
/* 801C644C 001C338C  38 60 00 00 */	li r3, 0
.L_801C6450:
/* 801C6450 001C3390  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 801C6454 001C3394  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 801C6458 001C3398  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 801C645C 001C339C  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 801C6460 001C33A0  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 801C6464 001C33A4  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 801C6468 001C33A8  E3 81 00 98 */	psq_l f28, 152(r1), 0, qr0
/* 801C646C 001C33AC  CB 81 00 90 */	lfd f28, 0x90(r1)
/* 801C6470 001C33B0  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 801C6474 001C33B4  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 801C6478 001C33B8  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 801C647C 001C33BC  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 801C6480 001C33C0  83 81 00 80 */	lwz r28, 0x80(r1)
/* 801C6484 001C33C4  7C 08 03 A6 */	mtlr r0
/* 801C6488 001C33C8  38 21 00 D0 */	addi r1, r1, 0xd0
/* 801C648C 001C33CC  4E 80 00 20 */	blr 

.global resetOnCount__Q24Game7PlatMgrFv
resetOnCount__Q24Game7PlatMgrFv:
/* 801C6490 001C33D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C6494 001C33D4  7C 08 02 A6 */	mflr r0
/* 801C6498 001C33D8  3C 80 80 4B */	lis r4, "__vt__31Iterator<Q24Game12PlatInstance>"@ha
/* 801C649C 001C33DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C64A0 001C33E0  38 00 00 00 */	li r0, 0
/* 801C64A4 001C33E4  38 84 63 BC */	addi r4, r4, "__vt__31Iterator<Q24Game12PlatInstance>"@l
/* 801C64A8 001C33E8  28 00 00 00 */	cmplwi r0, 0
/* 801C64AC 001C33EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C64B0 001C33F0  90 81 00 08 */	stw r4, 8(r1)
/* 801C64B4 001C33F4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C64B8 001C33F8  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C64BC 001C33FC  40 82 00 1C */	bne .L_801C64D8
/* 801C64C0 001C3400  81 83 00 00 */	lwz r12, 0(r3)
/* 801C64C4 001C3404  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C64C8 001C3408  7D 89 03 A6 */	mtctr r12
/* 801C64CC 001C340C  4E 80 04 21 */	bctrl 
/* 801C64D0 001C3410  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C64D4 001C3414  48 00 01 68 */	b .L_801C663C
.L_801C64D8:
/* 801C64D8 001C3418  81 83 00 00 */	lwz r12, 0(r3)
/* 801C64DC 001C341C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C64E0 001C3420  7D 89 03 A6 */	mtctr r12
/* 801C64E4 001C3424  4E 80 04 21 */	bctrl 
/* 801C64E8 001C3428  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C64EC 001C342C  48 00 00 58 */	b .L_801C6544
.L_801C64F0:
/* 801C64F0 001C3430  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C64F4 001C3434  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C64F8 001C3438  81 83 00 00 */	lwz r12, 0(r3)
/* 801C64FC 001C343C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6500 001C3440  7D 89 03 A6 */	mtctr r12
/* 801C6504 001C3444  4E 80 04 21 */	bctrl 
/* 801C6508 001C3448  7C 64 1B 78 */	mr r4, r3
/* 801C650C 001C344C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C6510 001C3450  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6514 001C3454  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C6518 001C3458  7D 89 03 A6 */	mtctr r12
/* 801C651C 001C345C  4E 80 04 21 */	bctrl 
/* 801C6520 001C3460  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6524 001C3464  40 82 01 18 */	bne .L_801C663C
/* 801C6528 001C3468  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C652C 001C346C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6530 001C3470  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6534 001C3474  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6538 001C3478  7D 89 03 A6 */	mtctr r12
/* 801C653C 001C347C  4E 80 04 21 */	bctrl 
/* 801C6540 001C3480  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C6544:
/* 801C6544 001C3484  81 81 00 08 */	lwz r12, 8(r1)
/* 801C6548 001C3488  38 61 00 08 */	addi r3, r1, 8
/* 801C654C 001C348C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C6550 001C3490  7D 89 03 A6 */	mtctr r12
/* 801C6554 001C3494  4E 80 04 21 */	bctrl 
/* 801C6558 001C3498  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C655C 001C349C  41 82 FF 94 */	beq .L_801C64F0
/* 801C6560 001C34A0  48 00 00 DC */	b .L_801C663C
.L_801C6564:
/* 801C6564 001C34A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6568 001C34A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C656C 001C34AC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6570 001C34B0  7D 89 03 A6 */	mtctr r12
/* 801C6574 001C34B4  4E 80 04 21 */	bctrl 
/* 801C6578 001C34B8  38 00 00 00 */	li r0, 0
/* 801C657C 001C34BC  90 03 01 04 */	stw r0, 0x104(r3)
/* 801C6580 001C34C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C6584 001C34C4  28 00 00 00 */	cmplwi r0, 0
/* 801C6588 001C34C8  40 82 00 24 */	bne .L_801C65AC
/* 801C658C 001C34CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6590 001C34D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6594 001C34D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6598 001C34D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C659C 001C34DC  7D 89 03 A6 */	mtctr r12
/* 801C65A0 001C34E0  4E 80 04 21 */	bctrl 
/* 801C65A4 001C34E4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C65A8 001C34E8  48 00 00 94 */	b .L_801C663C
.L_801C65AC:
/* 801C65AC 001C34EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C65B0 001C34F0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C65B4 001C34F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C65B8 001C34F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C65BC 001C34FC  7D 89 03 A6 */	mtctr r12
/* 801C65C0 001C3500  4E 80 04 21 */	bctrl 
/* 801C65C4 001C3504  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C65C8 001C3508  48 00 00 58 */	b .L_801C6620
.L_801C65CC:
/* 801C65CC 001C350C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C65D0 001C3510  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C65D4 001C3514  81 83 00 00 */	lwz r12, 0(r3)
/* 801C65D8 001C3518  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C65DC 001C351C  7D 89 03 A6 */	mtctr r12
/* 801C65E0 001C3520  4E 80 04 21 */	bctrl 
/* 801C65E4 001C3524  7C 64 1B 78 */	mr r4, r3
/* 801C65E8 001C3528  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C65EC 001C352C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C65F0 001C3530  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C65F4 001C3534  7D 89 03 A6 */	mtctr r12
/* 801C65F8 001C3538  4E 80 04 21 */	bctrl 
/* 801C65FC 001C353C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6600 001C3540  40 82 00 3C */	bne .L_801C663C
/* 801C6604 001C3544  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6608 001C3548  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C660C 001C354C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6610 001C3550  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6614 001C3554  7D 89 03 A6 */	mtctr r12
/* 801C6618 001C3558  4E 80 04 21 */	bctrl 
/* 801C661C 001C355C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C6620:
/* 801C6620 001C3560  81 81 00 08 */	lwz r12, 8(r1)
/* 801C6624 001C3564  38 61 00 08 */	addi r3, r1, 8
/* 801C6628 001C3568  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C662C 001C356C  7D 89 03 A6 */	mtctr r12
/* 801C6630 001C3570  4E 80 04 21 */	bctrl 
/* 801C6634 001C3574  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6638 001C3578  41 82 FF 94 */	beq .L_801C65CC
.L_801C663C:
/* 801C663C 001C357C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6640 001C3580  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6644 001C3584  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C6648 001C3588  7D 89 03 A6 */	mtctr r12
/* 801C664C 001C358C  4E 80 04 21 */	bctrl 
/* 801C6650 001C3590  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6654 001C3594  7C 04 18 40 */	cmplw r4, r3
/* 801C6658 001C3598  40 82 FF 0C */	bne .L_801C6564
/* 801C665C 001C359C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C6660 001C35A0  7C 08 03 A6 */	mtlr r0
/* 801C6664 001C35A4  38 21 00 20 */	addi r1, r1, 0x20
/* 801C6668 001C35A8  4E 80 00 20 */	blr 

.global doDirectDraw__Q24Game7PlatMgrFR8Graphics
doDirectDraw__Q24Game7PlatMgrFR8Graphics:
/* 801C666C 001C35AC  4E 80 00 20 */	blr 

.global __dt__Q24Game7PlatMgrFv
__dt__Q24Game7PlatMgrFv:
/* 801C6670 001C35B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C6674 001C35B4  7C 08 02 A6 */	mflr r0
/* 801C6678 001C35B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C667C 001C35BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C6680 001C35C0  7C 7F 1B 79 */	or. r31, r3, r3
/* 801C6684 001C35C4  93 C1 00 08 */	stw r30, 8(r1)
/* 801C6688 001C35C8  7C 9E 23 78 */	mr r30, r4
/* 801C668C 001C35CC  41 82 00 A8 */	beq .L_801C6734
/* 801C6690 001C35D0  3C 60 80 4B */	lis r3, __vt__Q24Game7PlatMgr@ha
/* 801C6694 001C35D4  38 63 63 38 */	addi r3, r3, __vt__Q24Game7PlatMgr@l
/* 801C6698 001C35D8  90 7F 00 00 */	stw r3, 0(r31)
/* 801C669C 001C35DC  38 03 00 2C */	addi r0, r3, 0x2c
/* 801C66A0 001C35E0  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801C66A4 001C35E4  41 82 00 80 */	beq .L_801C6724
/* 801C66A8 001C35E8  3C 60 80 4B */	lis r3, "__vt__36NodeObjectMgr<Q24Game12PlatInstance>"@ha
/* 801C66AC 001C35EC  34 1F 00 20 */	addic. r0, r31, 0x20
/* 801C66B0 001C35F0  38 63 63 E4 */	addi r3, r3, "__vt__36NodeObjectMgr<Q24Game12PlatInstance>"@l
/* 801C66B4 001C35F4  90 7F 00 00 */	stw r3, 0(r31)
/* 801C66B8 001C35F8  38 03 00 2C */	addi r0, r3, 0x2c
/* 801C66BC 001C35FC  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801C66C0 001C3600  41 82 00 1C */	beq .L_801C66DC
/* 801C66C4 001C3604  3C 80 80 4B */	lis r4, "__vt__34TObjectNode<Q24Game12PlatInstance>"@ha
/* 801C66C8 001C3608  38 7F 00 20 */	addi r3, r31, 0x20
/* 801C66CC 001C360C  38 04 63 D4 */	addi r0, r4, "__vt__34TObjectNode<Q24Game12PlatInstance>"@l
/* 801C66D0 001C3610  38 80 00 00 */	li r4, 0
/* 801C66D4 001C3614  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801C66D8 001C3618  48 24 AE B1 */	bl __dt__5CNodeFv
.L_801C66DC:
/* 801C66DC 001C361C  28 1F 00 00 */	cmplwi r31, 0
/* 801C66E0 001C3620  41 82 00 44 */	beq .L_801C6724
/* 801C66E4 001C3624  3C 60 80 4B */	lis r3, "__vt__32ObjectMgr<Q24Game12PlatInstance>"@ha
/* 801C66E8 001C3628  38 63 64 64 */	addi r3, r3, "__vt__32ObjectMgr<Q24Game12PlatInstance>"@l
/* 801C66EC 001C362C  90 7F 00 00 */	stw r3, 0(r31)
/* 801C66F0 001C3630  38 03 00 2C */	addi r0, r3, 0x2c
/* 801C66F4 001C3634  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801C66F8 001C3638  41 82 00 2C */	beq .L_801C6724
/* 801C66FC 001C363C  3C 60 80 4B */	lis r3, "__vt__32Container<Q24Game12PlatInstance>"@ha
/* 801C6700 001C3640  38 03 64 E0 */	addi r0, r3, "__vt__32Container<Q24Game12PlatInstance>"@l
/* 801C6704 001C3644  90 1F 00 00 */	stw r0, 0(r31)
/* 801C6708 001C3648  41 82 00 1C */	beq .L_801C6724
/* 801C670C 001C364C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801C6710 001C3650  7F E3 FB 78 */	mr r3, r31
/* 801C6714 001C3654  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801C6718 001C3658  38 80 00 00 */	li r4, 0
/* 801C671C 001C365C  90 1F 00 00 */	stw r0, 0(r31)
/* 801C6720 001C3660  48 24 AE 69 */	bl __dt__5CNodeFv
.L_801C6724:
/* 801C6724 001C3664  7F C0 07 35 */	extsh. r0, r30
/* 801C6728 001C3668  40 81 00 0C */	ble .L_801C6734
/* 801C672C 001C366C  7F E3 FB 78 */	mr r3, r31
/* 801C6730 001C3670  4B E5 D9 85 */	bl __dl__FPv
.L_801C6734:
/* 801C6734 001C3674  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C6738 001C3678  7F E3 FB 78 */	mr r3, r31
/* 801C673C 001C367C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C6740 001C3680  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C6744 001C3684  7C 08 03 A6 */	mtlr r0
/* 801C6748 001C3688  38 21 00 10 */	addi r1, r1, 0x10
/* 801C674C 001C368C  4E 80 00 20 */	blr 

.global "__ml__31Iterator<Q24Game12PlatInstance>Fv"
"__ml__31Iterator<Q24Game12PlatInstance>Fv":
/* 801C6750 001C3690  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C6754 001C3694  7C 08 02 A6 */	mflr r0
/* 801C6758 001C3698  7C 64 1B 78 */	mr r4, r3
/* 801C675C 001C369C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C6760 001C36A0  80 63 00 08 */	lwz r3, 8(r3)
/* 801C6764 001C36A4  80 84 00 04 */	lwz r4, 4(r4)
/* 801C6768 001C36A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C676C 001C36AC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6770 001C36B0  7D 89 03 A6 */	mtctr r12
/* 801C6774 001C36B4  4E 80 04 21 */	bctrl 
/* 801C6778 001C36B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C677C 001C36BC  7C 08 03 A6 */	mtlr r0
/* 801C6780 001C36C0  38 21 00 10 */	addi r1, r1, 0x10
/* 801C6784 001C36C4  4E 80 00 20 */	blr 

.global "next__31Iterator<Q24Game12PlatInstance>Fv"
"next__31Iterator<Q24Game12PlatInstance>Fv":
/* 801C6788 001C36C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C678C 001C36CC  7C 08 02 A6 */	mflr r0
/* 801C6790 001C36D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C6794 001C36D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C6798 001C36D8  7C 7F 1B 78 */	mr r31, r3
/* 801C679C 001C36DC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801C67A0 001C36E0  28 00 00 00 */	cmplwi r0, 0
/* 801C67A4 001C36E4  40 82 00 24 */	bne .L_801C67C8
/* 801C67A8 001C36E8  80 7F 00 08 */	lwz r3, 8(r31)
/* 801C67AC 001C36EC  80 9F 00 04 */	lwz r4, 4(r31)
/* 801C67B0 001C36F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C67B4 001C36F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C67B8 001C36F8  7D 89 03 A6 */	mtctr r12
/* 801C67BC 001C36FC  4E 80 04 21 */	bctrl 
/* 801C67C0 001C3700  90 7F 00 04 */	stw r3, 4(r31)
/* 801C67C4 001C3704  48 00 00 94 */	b .L_801C6858
.L_801C67C8:
/* 801C67C8 001C3708  80 7F 00 08 */	lwz r3, 8(r31)
/* 801C67CC 001C370C  80 9F 00 04 */	lwz r4, 4(r31)
/* 801C67D0 001C3710  81 83 00 00 */	lwz r12, 0(r3)
/* 801C67D4 001C3714  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C67D8 001C3718  7D 89 03 A6 */	mtctr r12
/* 801C67DC 001C371C  4E 80 04 21 */	bctrl 
/* 801C67E0 001C3720  90 7F 00 04 */	stw r3, 4(r31)
/* 801C67E4 001C3724  48 00 00 58 */	b .L_801C683C
.L_801C67E8:
/* 801C67E8 001C3728  80 7F 00 08 */	lwz r3, 8(r31)
/* 801C67EC 001C372C  80 9F 00 04 */	lwz r4, 4(r31)
/* 801C67F0 001C3730  81 83 00 00 */	lwz r12, 0(r3)
/* 801C67F4 001C3734  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C67F8 001C3738  7D 89 03 A6 */	mtctr r12
/* 801C67FC 001C373C  4E 80 04 21 */	bctrl 
/* 801C6800 001C3740  7C 64 1B 78 */	mr r4, r3
/* 801C6804 001C3744  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801C6808 001C3748  81 83 00 00 */	lwz r12, 0(r3)
/* 801C680C 001C374C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C6810 001C3750  7D 89 03 A6 */	mtctr r12
/* 801C6814 001C3754  4E 80 04 21 */	bctrl 
/* 801C6818 001C3758  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C681C 001C375C  40 82 00 3C */	bne .L_801C6858
/* 801C6820 001C3760  80 7F 00 08 */	lwz r3, 8(r31)
/* 801C6824 001C3764  80 9F 00 04 */	lwz r4, 4(r31)
/* 801C6828 001C3768  81 83 00 00 */	lwz r12, 0(r3)
/* 801C682C 001C376C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6830 001C3770  7D 89 03 A6 */	mtctr r12
/* 801C6834 001C3774  4E 80 04 21 */	bctrl 
/* 801C6838 001C3778  90 7F 00 04 */	stw r3, 4(r31)
.L_801C683C:
/* 801C683C 001C377C  7F E3 FB 78 */	mr r3, r31
/* 801C6840 001C3780  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C6844 001C3784  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C6848 001C3788  7D 89 03 A6 */	mtctr r12
/* 801C684C 001C378C  4E 80 04 21 */	bctrl 
/* 801C6850 001C3790  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6854 001C3794  41 82 FF 94 */	beq .L_801C67E8
.L_801C6858:
/* 801C6858 001C3798  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C685C 001C379C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C6860 001C37A0  7C 08 03 A6 */	mtlr r0
/* 801C6864 001C37A4  38 21 00 10 */	addi r1, r1, 0x10
/* 801C6868 001C37A8  4E 80 00 20 */	blr 

.global "first__31Iterator<Q24Game12PlatInstance>Fv"
"first__31Iterator<Q24Game12PlatInstance>Fv":
/* 801C686C 001C37AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C6870 001C37B0  7C 08 02 A6 */	mflr r0
/* 801C6874 001C37B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C6878 001C37B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C687C 001C37BC  7C 7F 1B 78 */	mr r31, r3
/* 801C6880 001C37C0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801C6884 001C37C4  28 00 00 00 */	cmplwi r0, 0
/* 801C6888 001C37C8  40 82 00 20 */	bne .L_801C68A8
/* 801C688C 001C37CC  80 7F 00 08 */	lwz r3, 8(r31)
/* 801C6890 001C37D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6894 001C37D4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C6898 001C37D8  7D 89 03 A6 */	mtctr r12
/* 801C689C 001C37DC  4E 80 04 21 */	bctrl 
/* 801C68A0 001C37E0  90 7F 00 04 */	stw r3, 4(r31)
/* 801C68A4 001C37E4  48 00 00 90 */	b .L_801C6934
.L_801C68A8:
/* 801C68A8 001C37E8  80 7F 00 08 */	lwz r3, 8(r31)
/* 801C68AC 001C37EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C68B0 001C37F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C68B4 001C37F4  7D 89 03 A6 */	mtctr r12
/* 801C68B8 001C37F8  4E 80 04 21 */	bctrl 
/* 801C68BC 001C37FC  90 7F 00 04 */	stw r3, 4(r31)
/* 801C68C0 001C3800  48 00 00 58 */	b .L_801C6918
.L_801C68C4:
/* 801C68C4 001C3804  80 7F 00 08 */	lwz r3, 8(r31)
/* 801C68C8 001C3808  80 9F 00 04 */	lwz r4, 4(r31)
/* 801C68CC 001C380C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C68D0 001C3810  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C68D4 001C3814  7D 89 03 A6 */	mtctr r12
/* 801C68D8 001C3818  4E 80 04 21 */	bctrl 
/* 801C68DC 001C381C  7C 64 1B 78 */	mr r4, r3
/* 801C68E0 001C3820  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801C68E4 001C3824  81 83 00 00 */	lwz r12, 0(r3)
/* 801C68E8 001C3828  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C68EC 001C382C  7D 89 03 A6 */	mtctr r12
/* 801C68F0 001C3830  4E 80 04 21 */	bctrl 
/* 801C68F4 001C3834  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C68F8 001C3838  40 82 00 3C */	bne .L_801C6934
/* 801C68FC 001C383C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801C6900 001C3840  80 9F 00 04 */	lwz r4, 4(r31)
/* 801C6904 001C3844  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6908 001C3848  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C690C 001C384C  7D 89 03 A6 */	mtctr r12
/* 801C6910 001C3850  4E 80 04 21 */	bctrl 
/* 801C6914 001C3854  90 7F 00 04 */	stw r3, 4(r31)
.L_801C6918:
/* 801C6918 001C3858  7F E3 FB 78 */	mr r3, r31
/* 801C691C 001C385C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C6920 001C3860  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C6924 001C3864  7D 89 03 A6 */	mtctr r12
/* 801C6928 001C3868  4E 80 04 21 */	bctrl 
/* 801C692C 001C386C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6930 001C3870  41 82 FF 94 */	beq .L_801C68C4
.L_801C6934:
/* 801C6934 001C3874  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C6938 001C3878  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C693C 001C387C  7C 08 03 A6 */	mtlr r0
/* 801C6940 001C3880  38 21 00 10 */	addi r1, r1, 0x10
/* 801C6944 001C3884  4E 80 00 20 */	blr 

.global checkCollision__Q24Game12PlatInstanceFPQ24Game10CellObject
checkCollision__Q24Game12PlatInstanceFPQ24Game10CellObject:
/* 801C6948 001C3888  4E 80 00 20 */	blr 

.global doAnimation__Q24Game12PlatInstanceFv
doAnimation__Q24Game12PlatInstanceFv:
/* 801C694C 001C388C  4E 80 00 20 */	blr 

.global doEntry__Q24Game12PlatInstanceFv
doEntry__Q24Game12PlatInstanceFv:
/* 801C6950 001C3890  4E 80 00 20 */	blr 

.global doSetView__Q24Game12PlatInstanceFi
doSetView__Q24Game12PlatInstanceFi:
/* 801C6954 001C3894  4E 80 00 20 */	blr 

.global doViewCalc__Q24Game12PlatInstanceFv
doViewCalc__Q24Game12PlatInstanceFv:
/* 801C6958 001C3898  4E 80 00 20 */	blr 

.global doSimulation__Q24Game12PlatInstanceFf
doSimulation__Q24Game12PlatInstanceFf:
/* 801C695C 001C389C  4E 80 00 20 */	blr 

.global doDirectDraw__Q24Game12PlatInstanceFR8Graphics
doDirectDraw__Q24Game12PlatInstanceFR8Graphics:
/* 801C6960 001C38A0  4E 80 00 20 */	blr 

.global getTypeName__Q24Game12PlatInstanceFv
getTypeName__Q24Game12PlatInstanceFv:
/* 801C6964 001C38A4  3C 60 80 48 */	lis r3, lbl_80480174@ha
/* 801C6968 001C38A8  38 63 01 74 */	addi r3, r3, lbl_80480174@l
/* 801C696C 001C38AC  4E 80 00 20 */	blr 

.global getObjType__Q24Game12PlatInstanceFv
getObjType__Q24Game12PlatInstanceFv:
/* 801C6970 001C38B0  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 801C6974 001C38B4  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 801C6978 001C38B8  4E 80 00 20 */	blr 

.global collisionUpdatable__Q24Game12PlatInstanceFv
collisionUpdatable__Q24Game12PlatInstanceFv:
/* 801C697C 001C38BC  38 60 00 00 */	li r3, 0
/* 801C6980 001C38C0  4E 80 00 20 */	blr 

.global "get__36NodeObjectMgr<Q24Game12PlatInstance>FPv"
"get__36NodeObjectMgr<Q24Game12PlatInstance>FPv":
/* 801C6984 001C38C4  80 64 00 18 */	lwz r3, 0x18(r4)
/* 801C6988 001C38C8  4E 80 00 20 */	blr 

.global "getNext__36NodeObjectMgr<Q24Game12PlatInstance>FPv"
"getNext__36NodeObjectMgr<Q24Game12PlatInstance>FPv":
/* 801C698C 001C38CC  80 64 00 04 */	lwz r3, 4(r4)
/* 801C6990 001C38D0  4E 80 00 20 */	blr 

.global "getStart__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
"getStart__36NodeObjectMgr<Q24Game12PlatInstance>Fv":
/* 801C6994 001C38D4  80 63 00 30 */	lwz r3, 0x30(r3)
/* 801C6998 001C38D8  4E 80 00 20 */	blr 

.global "getEnd__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
"getEnd__36NodeObjectMgr<Q24Game12PlatInstance>Fv":
/* 801C699C 001C38DC  38 60 00 00 */	li r3, 0
/* 801C69A0 001C38E0  4E 80 00 20 */	blr 

.global "delNode__36NodeObjectMgr<Q24Game12PlatInstance>FPQ24Game12PlatInstance"
"delNode__36NodeObjectMgr<Q24Game12PlatInstance>FPQ24Game12PlatInstance":
/* 801C69A4 001C38E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C69A8 001C38E8  7C 08 02 A6 */	mflr r0
/* 801C69AC 001C38EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C69B0 001C38F0  80 63 00 30 */	lwz r3, 0x30(r3)
/* 801C69B4 001C38F4  48 00 00 1C */	b .L_801C69D0
.L_801C69B8:
/* 801C69B8 001C38F8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 801C69BC 001C38FC  7C 00 20 40 */	cmplw r0, r4
/* 801C69C0 001C3900  40 82 00 0C */	bne .L_801C69CC
/* 801C69C4 001C3904  48 24 AC 0D */	bl del__5CNodeFv
/* 801C69C8 001C3908  48 00 00 10 */	b .L_801C69D8
.L_801C69CC:
/* 801C69CC 001C390C  80 63 00 04 */	lwz r3, 4(r3)
.L_801C69D0:
/* 801C69D0 001C3910  28 03 00 00 */	cmplwi r3, 0
/* 801C69D4 001C3914  40 82 FF E4 */	bne .L_801C69B8
.L_801C69D8:
/* 801C69D8 001C3918  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C69DC 001C391C  7C 08 03 A6 */	mtlr r0
/* 801C69E0 001C3920  38 21 00 10 */	addi r1, r1, 0x10
/* 801C69E4 001C3924  4E 80 00 20 */	blr 

.global "resetMgr__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
"resetMgr__36NodeObjectMgr<Q24Game12PlatInstance>Fv":
/* 801C69E8 001C3928  38 00 00 00 */	li r0, 0
/* 801C69EC 001C392C  90 03 00 30 */	stw r0, 0x30(r3)
/* 801C69F0 001C3930  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801C69F4 001C3934  90 03 00 28 */	stw r0, 0x28(r3)
/* 801C69F8 001C3938  90 03 00 24 */	stw r0, 0x24(r3)
/* 801C69FC 001C393C  4E 80 00 20 */	blr 

.global "doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
"doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv":
/* 801C6A00 001C3940  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C6A04 001C3944  7C 08 02 A6 */	mflr r0
/* 801C6A08 001C3948  3C 80 80 4B */	lis r4, "__vt__31Iterator<Q24Game12PlatInstance>"@ha
/* 801C6A0C 001C394C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C6A10 001C3950  38 00 00 00 */	li r0, 0
/* 801C6A14 001C3954  38 84 63 BC */	addi r4, r4, "__vt__31Iterator<Q24Game12PlatInstance>"@l
/* 801C6A18 001C3958  28 00 00 00 */	cmplwi r0, 0
/* 801C6A1C 001C395C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C6A20 001C3960  90 81 00 08 */	stw r4, 8(r1)
/* 801C6A24 001C3964  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C6A28 001C3968  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C6A2C 001C396C  40 82 00 1C */	bne .L_801C6A48
/* 801C6A30 001C3970  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6A34 001C3974  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C6A38 001C3978  7D 89 03 A6 */	mtctr r12
/* 801C6A3C 001C397C  4E 80 04 21 */	bctrl 
/* 801C6A40 001C3980  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C6A44 001C3984  48 00 01 70 */	b .L_801C6BB4
.L_801C6A48:
/* 801C6A48 001C3988  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6A4C 001C398C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C6A50 001C3990  7D 89 03 A6 */	mtctr r12
/* 801C6A54 001C3994  4E 80 04 21 */	bctrl 
/* 801C6A58 001C3998  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C6A5C 001C399C  48 00 00 58 */	b .L_801C6AB4
.L_801C6A60:
/* 801C6A60 001C39A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6A64 001C39A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6A68 001C39A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6A6C 001C39AC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6A70 001C39B0  7D 89 03 A6 */	mtctr r12
/* 801C6A74 001C39B4  4E 80 04 21 */	bctrl 
/* 801C6A78 001C39B8  7C 64 1B 78 */	mr r4, r3
/* 801C6A7C 001C39BC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C6A80 001C39C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6A84 001C39C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C6A88 001C39C8  7D 89 03 A6 */	mtctr r12
/* 801C6A8C 001C39CC  4E 80 04 21 */	bctrl 
/* 801C6A90 001C39D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6A94 001C39D4  40 82 01 20 */	bne .L_801C6BB4
/* 801C6A98 001C39D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6A9C 001C39DC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6AA0 001C39E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6AA4 001C39E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6AA8 001C39E8  7D 89 03 A6 */	mtctr r12
/* 801C6AAC 001C39EC  4E 80 04 21 */	bctrl 
/* 801C6AB0 001C39F0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C6AB4:
/* 801C6AB4 001C39F4  81 81 00 08 */	lwz r12, 8(r1)
/* 801C6AB8 001C39F8  38 61 00 08 */	addi r3, r1, 8
/* 801C6ABC 001C39FC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C6AC0 001C3A00  7D 89 03 A6 */	mtctr r12
/* 801C6AC4 001C3A04  4E 80 04 21 */	bctrl 
/* 801C6AC8 001C3A08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6ACC 001C3A0C  41 82 FF 94 */	beq .L_801C6A60
/* 801C6AD0 001C3A10  48 00 00 E4 */	b .L_801C6BB4
.L_801C6AD4:
/* 801C6AD4 001C3A14  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6AD8 001C3A18  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6ADC 001C3A1C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6AE0 001C3A20  7D 89 03 A6 */	mtctr r12
/* 801C6AE4 001C3A24  4E 80 04 21 */	bctrl 
/* 801C6AE8 001C3A28  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6AEC 001C3A2C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801C6AF0 001C3A30  7D 89 03 A6 */	mtctr r12
/* 801C6AF4 001C3A34  4E 80 04 21 */	bctrl 
/* 801C6AF8 001C3A38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C6AFC 001C3A3C  28 00 00 00 */	cmplwi r0, 0
/* 801C6B00 001C3A40  40 82 00 24 */	bne .L_801C6B24
/* 801C6B04 001C3A44  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6B08 001C3A48  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6B0C 001C3A4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6B10 001C3A50  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6B14 001C3A54  7D 89 03 A6 */	mtctr r12
/* 801C6B18 001C3A58  4E 80 04 21 */	bctrl 
/* 801C6B1C 001C3A5C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C6B20 001C3A60  48 00 00 94 */	b .L_801C6BB4
.L_801C6B24:
/* 801C6B24 001C3A64  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6B28 001C3A68  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6B2C 001C3A6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6B30 001C3A70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6B34 001C3A74  7D 89 03 A6 */	mtctr r12
/* 801C6B38 001C3A78  4E 80 04 21 */	bctrl 
/* 801C6B3C 001C3A7C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C6B40 001C3A80  48 00 00 58 */	b .L_801C6B98
.L_801C6B44:
/* 801C6B44 001C3A84  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6B48 001C3A88  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6B4C 001C3A8C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6B50 001C3A90  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6B54 001C3A94  7D 89 03 A6 */	mtctr r12
/* 801C6B58 001C3A98  4E 80 04 21 */	bctrl 
/* 801C6B5C 001C3A9C  7C 64 1B 78 */	mr r4, r3
/* 801C6B60 001C3AA0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C6B64 001C3AA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6B68 001C3AA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C6B6C 001C3AAC  7D 89 03 A6 */	mtctr r12
/* 801C6B70 001C3AB0  4E 80 04 21 */	bctrl 
/* 801C6B74 001C3AB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6B78 001C3AB8  40 82 00 3C */	bne .L_801C6BB4
/* 801C6B7C 001C3ABC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6B80 001C3AC0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6B84 001C3AC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6B88 001C3AC8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6B8C 001C3ACC  7D 89 03 A6 */	mtctr r12
/* 801C6B90 001C3AD0  4E 80 04 21 */	bctrl 
/* 801C6B94 001C3AD4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C6B98:
/* 801C6B98 001C3AD8  81 81 00 08 */	lwz r12, 8(r1)
/* 801C6B9C 001C3ADC  38 61 00 08 */	addi r3, r1, 8
/* 801C6BA0 001C3AE0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C6BA4 001C3AE4  7D 89 03 A6 */	mtctr r12
/* 801C6BA8 001C3AE8  4E 80 04 21 */	bctrl 
/* 801C6BAC 001C3AEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6BB0 001C3AF0  41 82 FF 94 */	beq .L_801C6B44
.L_801C6BB4:
/* 801C6BB4 001C3AF4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6BB8 001C3AF8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6BBC 001C3AFC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C6BC0 001C3B00  7D 89 03 A6 */	mtctr r12
/* 801C6BC4 001C3B04  4E 80 04 21 */	bctrl 
/* 801C6BC8 001C3B08  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6BCC 001C3B0C  7C 04 18 40 */	cmplw r4, r3
/* 801C6BD0 001C3B10  40 82 FF 04 */	bne .L_801C6AD4
/* 801C6BD4 001C3B14  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C6BD8 001C3B18  7C 08 03 A6 */	mtlr r0
/* 801C6BDC 001C3B1C  38 21 00 20 */	addi r1, r1, 0x20
/* 801C6BE0 001C3B20  4E 80 00 20 */	blr 

.global "doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"
"doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv":
/* 801C6BE4 001C3B24  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C6BE8 001C3B28  7C 08 02 A6 */	mflr r0
/* 801C6BEC 001C3B2C  3C 80 80 4B */	lis r4, "__vt__31Iterator<Q24Game12PlatInstance>"@ha
/* 801C6BF0 001C3B30  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C6BF4 001C3B34  38 00 00 00 */	li r0, 0
/* 801C6BF8 001C3B38  38 84 63 BC */	addi r4, r4, "__vt__31Iterator<Q24Game12PlatInstance>"@l
/* 801C6BFC 001C3B3C  28 00 00 00 */	cmplwi r0, 0
/* 801C6C00 001C3B40  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C6C04 001C3B44  90 81 00 08 */	stw r4, 8(r1)
/* 801C6C08 001C3B48  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C6C0C 001C3B4C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C6C10 001C3B50  40 82 00 1C */	bne .L_801C6C2C
/* 801C6C14 001C3B54  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6C18 001C3B58  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C6C1C 001C3B5C  7D 89 03 A6 */	mtctr r12
/* 801C6C20 001C3B60  4E 80 04 21 */	bctrl 
/* 801C6C24 001C3B64  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C6C28 001C3B68  48 00 01 70 */	b .L_801C6D98
.L_801C6C2C:
/* 801C6C2C 001C3B6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6C30 001C3B70  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C6C34 001C3B74  7D 89 03 A6 */	mtctr r12
/* 801C6C38 001C3B78  4E 80 04 21 */	bctrl 
/* 801C6C3C 001C3B7C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C6C40 001C3B80  48 00 00 58 */	b .L_801C6C98
.L_801C6C44:
/* 801C6C44 001C3B84  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6C48 001C3B88  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6C4C 001C3B8C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6C50 001C3B90  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6C54 001C3B94  7D 89 03 A6 */	mtctr r12
/* 801C6C58 001C3B98  4E 80 04 21 */	bctrl 
/* 801C6C5C 001C3B9C  7C 64 1B 78 */	mr r4, r3
/* 801C6C60 001C3BA0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C6C64 001C3BA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6C68 001C3BA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C6C6C 001C3BAC  7D 89 03 A6 */	mtctr r12
/* 801C6C70 001C3BB0  4E 80 04 21 */	bctrl 
/* 801C6C74 001C3BB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6C78 001C3BB8  40 82 01 20 */	bne .L_801C6D98
/* 801C6C7C 001C3BBC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6C80 001C3BC0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6C84 001C3BC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6C88 001C3BC8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6C8C 001C3BCC  7D 89 03 A6 */	mtctr r12
/* 801C6C90 001C3BD0  4E 80 04 21 */	bctrl 
/* 801C6C94 001C3BD4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C6C98:
/* 801C6C98 001C3BD8  81 81 00 08 */	lwz r12, 8(r1)
/* 801C6C9C 001C3BDC  38 61 00 08 */	addi r3, r1, 8
/* 801C6CA0 001C3BE0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C6CA4 001C3BE4  7D 89 03 A6 */	mtctr r12
/* 801C6CA8 001C3BE8  4E 80 04 21 */	bctrl 
/* 801C6CAC 001C3BEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6CB0 001C3BF0  41 82 FF 94 */	beq .L_801C6C44
/* 801C6CB4 001C3BF4  48 00 00 E4 */	b .L_801C6D98
.L_801C6CB8:
/* 801C6CB8 001C3BF8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6CBC 001C3BFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6CC0 001C3C00  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6CC4 001C3C04  7D 89 03 A6 */	mtctr r12
/* 801C6CC8 001C3C08  4E 80 04 21 */	bctrl 
/* 801C6CCC 001C3C0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6CD0 001C3C10  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 801C6CD4 001C3C14  7D 89 03 A6 */	mtctr r12
/* 801C6CD8 001C3C18  4E 80 04 21 */	bctrl 
/* 801C6CDC 001C3C1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C6CE0 001C3C20  28 00 00 00 */	cmplwi r0, 0
/* 801C6CE4 001C3C24  40 82 00 24 */	bne .L_801C6D08
/* 801C6CE8 001C3C28  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6CEC 001C3C2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6CF0 001C3C30  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6CF4 001C3C34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6CF8 001C3C38  7D 89 03 A6 */	mtctr r12
/* 801C6CFC 001C3C3C  4E 80 04 21 */	bctrl 
/* 801C6D00 001C3C40  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C6D04 001C3C44  48 00 00 94 */	b .L_801C6D98
.L_801C6D08:
/* 801C6D08 001C3C48  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6D0C 001C3C4C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6D10 001C3C50  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6D14 001C3C54  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6D18 001C3C58  7D 89 03 A6 */	mtctr r12
/* 801C6D1C 001C3C5C  4E 80 04 21 */	bctrl 
/* 801C6D20 001C3C60  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C6D24 001C3C64  48 00 00 58 */	b .L_801C6D7C
.L_801C6D28:
/* 801C6D28 001C3C68  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6D2C 001C3C6C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6D30 001C3C70  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6D34 001C3C74  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6D38 001C3C78  7D 89 03 A6 */	mtctr r12
/* 801C6D3C 001C3C7C  4E 80 04 21 */	bctrl 
/* 801C6D40 001C3C80  7C 64 1B 78 */	mr r4, r3
/* 801C6D44 001C3C84  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C6D48 001C3C88  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6D4C 001C3C8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C6D50 001C3C90  7D 89 03 A6 */	mtctr r12
/* 801C6D54 001C3C94  4E 80 04 21 */	bctrl 
/* 801C6D58 001C3C98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6D5C 001C3C9C  40 82 00 3C */	bne .L_801C6D98
/* 801C6D60 001C3CA0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6D64 001C3CA4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6D68 001C3CA8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6D6C 001C3CAC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6D70 001C3CB0  7D 89 03 A6 */	mtctr r12
/* 801C6D74 001C3CB4  4E 80 04 21 */	bctrl 
/* 801C6D78 001C3CB8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C6D7C:
/* 801C6D7C 001C3CBC  81 81 00 08 */	lwz r12, 8(r1)
/* 801C6D80 001C3CC0  38 61 00 08 */	addi r3, r1, 8
/* 801C6D84 001C3CC4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C6D88 001C3CC8  7D 89 03 A6 */	mtctr r12
/* 801C6D8C 001C3CCC  4E 80 04 21 */	bctrl 
/* 801C6D90 001C3CD0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6D94 001C3CD4  41 82 FF 94 */	beq .L_801C6D28
.L_801C6D98:
/* 801C6D98 001C3CD8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6D9C 001C3CDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6DA0 001C3CE0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C6DA4 001C3CE4  7D 89 03 A6 */	mtctr r12
/* 801C6DA8 001C3CE8  4E 80 04 21 */	bctrl 
/* 801C6DAC 001C3CEC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6DB0 001C3CF0  7C 04 18 40 */	cmplw r4, r3
/* 801C6DB4 001C3CF4  40 82 FF 04 */	bne .L_801C6CB8
/* 801C6DB8 001C3CF8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C6DBC 001C3CFC  7C 08 03 A6 */	mtlr r0
/* 801C6DC0 001C3D00  38 21 00 20 */	addi r1, r1, 0x20
/* 801C6DC4 001C3D04  4E 80 00 20 */	blr 

.global "doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"
"doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi":
/* 801C6DC8 001C3D08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C6DCC 001C3D0C  7C 08 02 A6 */	mflr r0
/* 801C6DD0 001C3D10  3C A0 80 4B */	lis r5, "__vt__31Iterator<Q24Game12PlatInstance>"@ha
/* 801C6DD4 001C3D14  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C6DD8 001C3D18  38 00 00 00 */	li r0, 0
/* 801C6DDC 001C3D1C  38 A5 63 BC */	addi r5, r5, "__vt__31Iterator<Q24Game12PlatInstance>"@l
/* 801C6DE0 001C3D20  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C6DE4 001C3D24  28 00 00 00 */	cmplwi r0, 0
/* 801C6DE8 001C3D28  7C 9F 23 78 */	mr r31, r4
/* 801C6DEC 001C3D2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C6DF0 001C3D30  90 A1 00 08 */	stw r5, 8(r1)
/* 801C6DF4 001C3D34  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C6DF8 001C3D38  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C6DFC 001C3D3C  40 82 00 1C */	bne .L_801C6E18
/* 801C6E00 001C3D40  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6E04 001C3D44  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C6E08 001C3D48  7D 89 03 A6 */	mtctr r12
/* 801C6E0C 001C3D4C  4E 80 04 21 */	bctrl 
/* 801C6E10 001C3D50  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C6E14 001C3D54  48 00 01 74 */	b .L_801C6F88
.L_801C6E18:
/* 801C6E18 001C3D58  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6E1C 001C3D5C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C6E20 001C3D60  7D 89 03 A6 */	mtctr r12
/* 801C6E24 001C3D64  4E 80 04 21 */	bctrl 
/* 801C6E28 001C3D68  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C6E2C 001C3D6C  48 00 00 58 */	b .L_801C6E84
.L_801C6E30:
/* 801C6E30 001C3D70  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6E34 001C3D74  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6E38 001C3D78  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6E3C 001C3D7C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6E40 001C3D80  7D 89 03 A6 */	mtctr r12
/* 801C6E44 001C3D84  4E 80 04 21 */	bctrl 
/* 801C6E48 001C3D88  7C 64 1B 78 */	mr r4, r3
/* 801C6E4C 001C3D8C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C6E50 001C3D90  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6E54 001C3D94  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C6E58 001C3D98  7D 89 03 A6 */	mtctr r12
/* 801C6E5C 001C3D9C  4E 80 04 21 */	bctrl 
/* 801C6E60 001C3DA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6E64 001C3DA4  40 82 01 24 */	bne .L_801C6F88
/* 801C6E68 001C3DA8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6E6C 001C3DAC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6E70 001C3DB0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6E74 001C3DB4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6E78 001C3DB8  7D 89 03 A6 */	mtctr r12
/* 801C6E7C 001C3DBC  4E 80 04 21 */	bctrl 
/* 801C6E80 001C3DC0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C6E84:
/* 801C6E84 001C3DC4  81 81 00 08 */	lwz r12, 8(r1)
/* 801C6E88 001C3DC8  38 61 00 08 */	addi r3, r1, 8
/* 801C6E8C 001C3DCC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C6E90 001C3DD0  7D 89 03 A6 */	mtctr r12
/* 801C6E94 001C3DD4  4E 80 04 21 */	bctrl 
/* 801C6E98 001C3DD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6E9C 001C3DDC  41 82 FF 94 */	beq .L_801C6E30
/* 801C6EA0 001C3DE0  48 00 00 E8 */	b .L_801C6F88
.L_801C6EA4:
/* 801C6EA4 001C3DE4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6EA8 001C3DE8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6EAC 001C3DEC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6EB0 001C3DF0  7D 89 03 A6 */	mtctr r12
/* 801C6EB4 001C3DF4  4E 80 04 21 */	bctrl 
/* 801C6EB8 001C3DF8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6EBC 001C3DFC  7F E4 FB 78 */	mr r4, r31
/* 801C6EC0 001C3E00  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 801C6EC4 001C3E04  7D 89 03 A6 */	mtctr r12
/* 801C6EC8 001C3E08  4E 80 04 21 */	bctrl 
/* 801C6ECC 001C3E0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C6ED0 001C3E10  28 00 00 00 */	cmplwi r0, 0
/* 801C6ED4 001C3E14  40 82 00 24 */	bne .L_801C6EF8
/* 801C6ED8 001C3E18  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6EDC 001C3E1C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6EE0 001C3E20  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6EE4 001C3E24  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6EE8 001C3E28  7D 89 03 A6 */	mtctr r12
/* 801C6EEC 001C3E2C  4E 80 04 21 */	bctrl 
/* 801C6EF0 001C3E30  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C6EF4 001C3E34  48 00 00 94 */	b .L_801C6F88
.L_801C6EF8:
/* 801C6EF8 001C3E38  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6EFC 001C3E3C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6F00 001C3E40  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6F04 001C3E44  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6F08 001C3E48  7D 89 03 A6 */	mtctr r12
/* 801C6F0C 001C3E4C  4E 80 04 21 */	bctrl 
/* 801C6F10 001C3E50  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C6F14 001C3E54  48 00 00 58 */	b .L_801C6F6C
.L_801C6F18:
/* 801C6F18 001C3E58  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6F1C 001C3E5C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6F20 001C3E60  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6F24 001C3E64  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C6F28 001C3E68  7D 89 03 A6 */	mtctr r12
/* 801C6F2C 001C3E6C  4E 80 04 21 */	bctrl 
/* 801C6F30 001C3E70  7C 64 1B 78 */	mr r4, r3
/* 801C6F34 001C3E74  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C6F38 001C3E78  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6F3C 001C3E7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C6F40 001C3E80  7D 89 03 A6 */	mtctr r12
/* 801C6F44 001C3E84  4E 80 04 21 */	bctrl 
/* 801C6F48 001C3E88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6F4C 001C3E8C  40 82 00 3C */	bne .L_801C6F88
/* 801C6F50 001C3E90  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6F54 001C3E94  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6F58 001C3E98  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6F5C 001C3E9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C6F60 001C3EA0  7D 89 03 A6 */	mtctr r12
/* 801C6F64 001C3EA4  4E 80 04 21 */	bctrl 
/* 801C6F68 001C3EA8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C6F6C:
/* 801C6F6C 001C3EAC  81 81 00 08 */	lwz r12, 8(r1)
/* 801C6F70 001C3EB0  38 61 00 08 */	addi r3, r1, 8
/* 801C6F74 001C3EB4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C6F78 001C3EB8  7D 89 03 A6 */	mtctr r12
/* 801C6F7C 001C3EBC  4E 80 04 21 */	bctrl 
/* 801C6F80 001C3EC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C6F84 001C3EC4  41 82 FF 94 */	beq .L_801C6F18
.L_801C6F88:
/* 801C6F88 001C3EC8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C6F8C 001C3ECC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6F90 001C3ED0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C6F94 001C3ED4  7D 89 03 A6 */	mtctr r12
/* 801C6F98 001C3ED8  4E 80 04 21 */	bctrl 
/* 801C6F9C 001C3EDC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C6FA0 001C3EE0  7C 04 18 40 */	cmplw r4, r3
/* 801C6FA4 001C3EE4  40 82 FF 00 */	bne .L_801C6EA4
/* 801C6FA8 001C3EE8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C6FAC 001C3EEC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C6FB0 001C3EF0  7C 08 03 A6 */	mtlr r0
/* 801C6FB4 001C3EF4  38 21 00 20 */	addi r1, r1, 0x20
/* 801C6FB8 001C3EF8  4E 80 00 20 */	blr 

.global "doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"
"doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv":
/* 801C6FBC 001C3EFC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C6FC0 001C3F00  7C 08 02 A6 */	mflr r0
/* 801C6FC4 001C3F04  3C 80 80 4B */	lis r4, "__vt__31Iterator<Q24Game12PlatInstance>"@ha
/* 801C6FC8 001C3F08  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C6FCC 001C3F0C  38 00 00 00 */	li r0, 0
/* 801C6FD0 001C3F10  38 84 63 BC */	addi r4, r4, "__vt__31Iterator<Q24Game12PlatInstance>"@l
/* 801C6FD4 001C3F14  28 00 00 00 */	cmplwi r0, 0
/* 801C6FD8 001C3F18  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C6FDC 001C3F1C  90 81 00 08 */	stw r4, 8(r1)
/* 801C6FE0 001C3F20  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C6FE4 001C3F24  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C6FE8 001C3F28  40 82 00 1C */	bne .L_801C7004
/* 801C6FEC 001C3F2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C6FF0 001C3F30  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C6FF4 001C3F34  7D 89 03 A6 */	mtctr r12
/* 801C6FF8 001C3F38  4E 80 04 21 */	bctrl 
/* 801C6FFC 001C3F3C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C7000 001C3F40  48 00 01 70 */	b .L_801C7170
.L_801C7004:
/* 801C7004 001C3F44  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7008 001C3F48  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C700C 001C3F4C  7D 89 03 A6 */	mtctr r12
/* 801C7010 001C3F50  4E 80 04 21 */	bctrl 
/* 801C7014 001C3F54  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C7018 001C3F58  48 00 00 58 */	b .L_801C7070
.L_801C701C:
/* 801C701C 001C3F5C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C7020 001C3F60  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C7024 001C3F64  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7028 001C3F68  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C702C 001C3F6C  7D 89 03 A6 */	mtctr r12
/* 801C7030 001C3F70  4E 80 04 21 */	bctrl 
/* 801C7034 001C3F74  7C 64 1B 78 */	mr r4, r3
/* 801C7038 001C3F78  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C703C 001C3F7C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7040 001C3F80  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C7044 001C3F84  7D 89 03 A6 */	mtctr r12
/* 801C7048 001C3F88  4E 80 04 21 */	bctrl 
/* 801C704C 001C3F8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C7050 001C3F90  40 82 01 20 */	bne .L_801C7170
/* 801C7054 001C3F94  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C7058 001C3F98  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C705C 001C3F9C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7060 001C3FA0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C7064 001C3FA4  7D 89 03 A6 */	mtctr r12
/* 801C7068 001C3FA8  4E 80 04 21 */	bctrl 
/* 801C706C 001C3FAC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C7070:
/* 801C7070 001C3FB0  81 81 00 08 */	lwz r12, 8(r1)
/* 801C7074 001C3FB4  38 61 00 08 */	addi r3, r1, 8
/* 801C7078 001C3FB8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C707C 001C3FBC  7D 89 03 A6 */	mtctr r12
/* 801C7080 001C3FC0  4E 80 04 21 */	bctrl 
/* 801C7084 001C3FC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C7088 001C3FC8  41 82 FF 94 */	beq .L_801C701C
/* 801C708C 001C3FCC  48 00 00 E4 */	b .L_801C7170
.L_801C7090:
/* 801C7090 001C3FD0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C7094 001C3FD4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7098 001C3FD8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C709C 001C3FDC  7D 89 03 A6 */	mtctr r12
/* 801C70A0 001C3FE0  4E 80 04 21 */	bctrl 
/* 801C70A4 001C3FE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C70A8 001C3FE8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801C70AC 001C3FEC  7D 89 03 A6 */	mtctr r12
/* 801C70B0 001C3FF0  4E 80 04 21 */	bctrl 
/* 801C70B4 001C3FF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C70B8 001C3FF8  28 00 00 00 */	cmplwi r0, 0
/* 801C70BC 001C3FFC  40 82 00 24 */	bne .L_801C70E0
/* 801C70C0 001C4000  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C70C4 001C4004  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C70C8 001C4008  81 83 00 00 */	lwz r12, 0(r3)
/* 801C70CC 001C400C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C70D0 001C4010  7D 89 03 A6 */	mtctr r12
/* 801C70D4 001C4014  4E 80 04 21 */	bctrl 
/* 801C70D8 001C4018  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C70DC 001C401C  48 00 00 94 */	b .L_801C7170
.L_801C70E0:
/* 801C70E0 001C4020  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C70E4 001C4024  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C70E8 001C4028  81 83 00 00 */	lwz r12, 0(r3)
/* 801C70EC 001C402C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C70F0 001C4030  7D 89 03 A6 */	mtctr r12
/* 801C70F4 001C4034  4E 80 04 21 */	bctrl 
/* 801C70F8 001C4038  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C70FC 001C403C  48 00 00 58 */	b .L_801C7154
.L_801C7100:
/* 801C7100 001C4040  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C7104 001C4044  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C7108 001C4048  81 83 00 00 */	lwz r12, 0(r3)
/* 801C710C 001C404C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C7110 001C4050  7D 89 03 A6 */	mtctr r12
/* 801C7114 001C4054  4E 80 04 21 */	bctrl 
/* 801C7118 001C4058  7C 64 1B 78 */	mr r4, r3
/* 801C711C 001C405C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C7120 001C4060  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7124 001C4064  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C7128 001C4068  7D 89 03 A6 */	mtctr r12
/* 801C712C 001C406C  4E 80 04 21 */	bctrl 
/* 801C7130 001C4070  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C7134 001C4074  40 82 00 3C */	bne .L_801C7170
/* 801C7138 001C4078  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C713C 001C407C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C7140 001C4080  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7144 001C4084  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C7148 001C4088  7D 89 03 A6 */	mtctr r12
/* 801C714C 001C408C  4E 80 04 21 */	bctrl 
/* 801C7150 001C4090  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C7154:
/* 801C7154 001C4094  81 81 00 08 */	lwz r12, 8(r1)
/* 801C7158 001C4098  38 61 00 08 */	addi r3, r1, 8
/* 801C715C 001C409C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C7160 001C40A0  7D 89 03 A6 */	mtctr r12
/* 801C7164 001C40A4  4E 80 04 21 */	bctrl 
/* 801C7168 001C40A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C716C 001C40AC  41 82 FF 94 */	beq .L_801C7100
.L_801C7170:
/* 801C7170 001C40B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C7174 001C40B4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7178 001C40B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C717C 001C40BC  7D 89 03 A6 */	mtctr r12
/* 801C7180 001C40C0  4E 80 04 21 */	bctrl 
/* 801C7184 001C40C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C7188 001C40C8  7C 04 18 40 */	cmplw r4, r3
/* 801C718C 001C40CC  40 82 FF 04 */	bne .L_801C7090
/* 801C7190 001C40D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C7194 001C40D4  7C 08 03 A6 */	mtlr r0
/* 801C7198 001C40D8  38 21 00 20 */	addi r1, r1, 0x20
/* 801C719C 001C40DC  4E 80 00 20 */	blr 

.global "doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"
"doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff":
/* 801C71A0 001C40E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C71A4 001C40E4  7C 08 02 A6 */	mflr r0
/* 801C71A8 001C40E8  3C 80 80 4B */	lis r4, "__vt__31Iterator<Q24Game12PlatInstance>"@ha
/* 801C71AC 001C40EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C71B0 001C40F0  38 00 00 00 */	li r0, 0
/* 801C71B4 001C40F4  38 84 63 BC */	addi r4, r4, "__vt__31Iterator<Q24Game12PlatInstance>"@l
/* 801C71B8 001C40F8  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801C71BC 001C40FC  FF E0 08 90 */	fmr f31, f1
/* 801C71C0 001C4100  28 00 00 00 */	cmplwi r0, 0
/* 801C71C4 001C4104  90 81 00 08 */	stw r4, 8(r1)
/* 801C71C8 001C4108  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C71CC 001C410C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C71D0 001C4110  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C71D4 001C4114  40 82 00 1C */	bne .L_801C71F0
/* 801C71D8 001C4118  81 83 00 00 */	lwz r12, 0(r3)
/* 801C71DC 001C411C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C71E0 001C4120  7D 89 03 A6 */	mtctr r12
/* 801C71E4 001C4124  4E 80 04 21 */	bctrl 
/* 801C71E8 001C4128  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C71EC 001C412C  48 00 01 74 */	b .L_801C7360
.L_801C71F0:
/* 801C71F0 001C4130  81 83 00 00 */	lwz r12, 0(r3)
/* 801C71F4 001C4134  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C71F8 001C4138  7D 89 03 A6 */	mtctr r12
/* 801C71FC 001C413C  4E 80 04 21 */	bctrl 
/* 801C7200 001C4140  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C7204 001C4144  48 00 00 58 */	b .L_801C725C
.L_801C7208:
/* 801C7208 001C4148  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C720C 001C414C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C7210 001C4150  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7214 001C4154  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C7218 001C4158  7D 89 03 A6 */	mtctr r12
/* 801C721C 001C415C  4E 80 04 21 */	bctrl 
/* 801C7220 001C4160  7C 64 1B 78 */	mr r4, r3
/* 801C7224 001C4164  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C7228 001C4168  81 83 00 00 */	lwz r12, 0(r3)
/* 801C722C 001C416C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C7230 001C4170  7D 89 03 A6 */	mtctr r12
/* 801C7234 001C4174  4E 80 04 21 */	bctrl 
/* 801C7238 001C4178  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C723C 001C417C  40 82 01 24 */	bne .L_801C7360
/* 801C7240 001C4180  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C7244 001C4184  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C7248 001C4188  81 83 00 00 */	lwz r12, 0(r3)
/* 801C724C 001C418C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C7250 001C4190  7D 89 03 A6 */	mtctr r12
/* 801C7254 001C4194  4E 80 04 21 */	bctrl 
/* 801C7258 001C4198  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C725C:
/* 801C725C 001C419C  81 81 00 08 */	lwz r12, 8(r1)
/* 801C7260 001C41A0  38 61 00 08 */	addi r3, r1, 8
/* 801C7264 001C41A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C7268 001C41A8  7D 89 03 A6 */	mtctr r12
/* 801C726C 001C41AC  4E 80 04 21 */	bctrl 
/* 801C7270 001C41B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C7274 001C41B4  41 82 FF 94 */	beq .L_801C7208
/* 801C7278 001C41B8  48 00 00 E8 */	b .L_801C7360
.L_801C727C:
/* 801C727C 001C41BC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C7280 001C41C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7284 001C41C4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C7288 001C41C8  7D 89 03 A6 */	mtctr r12
/* 801C728C 001C41CC  4E 80 04 21 */	bctrl 
/* 801C7290 001C41D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7294 001C41D4  FC 20 F8 90 */	fmr f1, f31
/* 801C7298 001C41D8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801C729C 001C41DC  7D 89 03 A6 */	mtctr r12
/* 801C72A0 001C41E0  4E 80 04 21 */	bctrl 
/* 801C72A4 001C41E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C72A8 001C41E8  28 00 00 00 */	cmplwi r0, 0
/* 801C72AC 001C41EC  40 82 00 24 */	bne .L_801C72D0
/* 801C72B0 001C41F0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C72B4 001C41F4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C72B8 001C41F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C72BC 001C41FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C72C0 001C4200  7D 89 03 A6 */	mtctr r12
/* 801C72C4 001C4204  4E 80 04 21 */	bctrl 
/* 801C72C8 001C4208  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C72CC 001C420C  48 00 00 94 */	b .L_801C7360
.L_801C72D0:
/* 801C72D0 001C4210  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C72D4 001C4214  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C72D8 001C4218  81 83 00 00 */	lwz r12, 0(r3)
/* 801C72DC 001C421C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C72E0 001C4220  7D 89 03 A6 */	mtctr r12
/* 801C72E4 001C4224  4E 80 04 21 */	bctrl 
/* 801C72E8 001C4228  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C72EC 001C422C  48 00 00 58 */	b .L_801C7344
.L_801C72F0:
/* 801C72F0 001C4230  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C72F4 001C4234  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C72F8 001C4238  81 83 00 00 */	lwz r12, 0(r3)
/* 801C72FC 001C423C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C7300 001C4240  7D 89 03 A6 */	mtctr r12
/* 801C7304 001C4244  4E 80 04 21 */	bctrl 
/* 801C7308 001C4248  7C 64 1B 78 */	mr r4, r3
/* 801C730C 001C424C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C7310 001C4250  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7314 001C4254  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C7318 001C4258  7D 89 03 A6 */	mtctr r12
/* 801C731C 001C425C  4E 80 04 21 */	bctrl 
/* 801C7320 001C4260  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C7324 001C4264  40 82 00 3C */	bne .L_801C7360
/* 801C7328 001C4268  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C732C 001C426C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C7330 001C4270  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7334 001C4274  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C7338 001C4278  7D 89 03 A6 */	mtctr r12
/* 801C733C 001C427C  4E 80 04 21 */	bctrl 
/* 801C7340 001C4280  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C7344:
/* 801C7344 001C4284  81 81 00 08 */	lwz r12, 8(r1)
/* 801C7348 001C4288  38 61 00 08 */	addi r3, r1, 8
/* 801C734C 001C428C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C7350 001C4290  7D 89 03 A6 */	mtctr r12
/* 801C7354 001C4294  4E 80 04 21 */	bctrl 
/* 801C7358 001C4298  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C735C 001C429C  41 82 FF 94 */	beq .L_801C72F0
.L_801C7360:
/* 801C7360 001C42A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C7364 001C42A4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7368 001C42A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C736C 001C42AC  7D 89 03 A6 */	mtctr r12
/* 801C7370 001C42B0  4E 80 04 21 */	bctrl 
/* 801C7374 001C42B4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C7378 001C42B8  7C 04 18 40 */	cmplw r4, r3
/* 801C737C 001C42BC  40 82 FF 00 */	bne .L_801C727C
/* 801C7380 001C42C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C7384 001C42C4  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801C7388 001C42C8  7C 08 03 A6 */	mtlr r0
/* 801C738C 001C42CC  38 21 00 20 */	addi r1, r1, 0x20
/* 801C7390 001C42D0  4E 80 00 20 */	blr 

.global "doDirectDraw__32ObjectMgr<Q24Game12PlatInstance>FR8Graphics"
"doDirectDraw__32ObjectMgr<Q24Game12PlatInstance>FR8Graphics":
/* 801C7394 001C42D4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C7398 001C42D8  7C 08 02 A6 */	mflr r0
/* 801C739C 001C42DC  3C A0 80 4B */	lis r5, "__vt__31Iterator<Q24Game12PlatInstance>"@ha
/* 801C73A0 001C42E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C73A4 001C42E4  38 00 00 00 */	li r0, 0
/* 801C73A8 001C42E8  38 A5 63 BC */	addi r5, r5, "__vt__31Iterator<Q24Game12PlatInstance>"@l
/* 801C73AC 001C42EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C73B0 001C42F0  28 00 00 00 */	cmplwi r0, 0
/* 801C73B4 001C42F4  7C 9F 23 78 */	mr r31, r4
/* 801C73B8 001C42F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C73BC 001C42FC  90 A1 00 08 */	stw r5, 8(r1)
/* 801C73C0 001C4300  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C73C4 001C4304  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C73C8 001C4308  40 82 00 1C */	bne .L_801C73E4
/* 801C73CC 001C430C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C73D0 001C4310  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C73D4 001C4314  7D 89 03 A6 */	mtctr r12
/* 801C73D8 001C4318  4E 80 04 21 */	bctrl 
/* 801C73DC 001C431C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C73E0 001C4320  48 00 01 74 */	b .L_801C7554
.L_801C73E4:
/* 801C73E4 001C4324  81 83 00 00 */	lwz r12, 0(r3)
/* 801C73E8 001C4328  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C73EC 001C432C  7D 89 03 A6 */	mtctr r12
/* 801C73F0 001C4330  4E 80 04 21 */	bctrl 
/* 801C73F4 001C4334  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C73F8 001C4338  48 00 00 58 */	b .L_801C7450
.L_801C73FC:
/* 801C73FC 001C433C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C7400 001C4340  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C7404 001C4344  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7408 001C4348  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C740C 001C434C  7D 89 03 A6 */	mtctr r12
/* 801C7410 001C4350  4E 80 04 21 */	bctrl 
/* 801C7414 001C4354  7C 64 1B 78 */	mr r4, r3
/* 801C7418 001C4358  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C741C 001C435C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7420 001C4360  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C7424 001C4364  7D 89 03 A6 */	mtctr r12
/* 801C7428 001C4368  4E 80 04 21 */	bctrl 
/* 801C742C 001C436C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C7430 001C4370  40 82 01 24 */	bne .L_801C7554
/* 801C7434 001C4374  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C7438 001C4378  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C743C 001C437C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7440 001C4380  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C7444 001C4384  7D 89 03 A6 */	mtctr r12
/* 801C7448 001C4388  4E 80 04 21 */	bctrl 
/* 801C744C 001C438C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C7450:
/* 801C7450 001C4390  81 81 00 08 */	lwz r12, 8(r1)
/* 801C7454 001C4394  38 61 00 08 */	addi r3, r1, 8
/* 801C7458 001C4398  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C745C 001C439C  7D 89 03 A6 */	mtctr r12
/* 801C7460 001C43A0  4E 80 04 21 */	bctrl 
/* 801C7464 001C43A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C7468 001C43A8  41 82 FF 94 */	beq .L_801C73FC
/* 801C746C 001C43AC  48 00 00 E8 */	b .L_801C7554
.L_801C7470:
/* 801C7470 001C43B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C7474 001C43B4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7478 001C43B8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C747C 001C43BC  7D 89 03 A6 */	mtctr r12
/* 801C7480 001C43C0  4E 80 04 21 */	bctrl 
/* 801C7484 001C43C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7488 001C43C8  7F E4 FB 78 */	mr r4, r31
/* 801C748C 001C43CC  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801C7490 001C43D0  7D 89 03 A6 */	mtctr r12
/* 801C7494 001C43D4  4E 80 04 21 */	bctrl 
/* 801C7498 001C43D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C749C 001C43DC  28 00 00 00 */	cmplwi r0, 0
/* 801C74A0 001C43E0  40 82 00 24 */	bne .L_801C74C4
/* 801C74A4 001C43E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C74A8 001C43E8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C74AC 001C43EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C74B0 001C43F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C74B4 001C43F4  7D 89 03 A6 */	mtctr r12
/* 801C74B8 001C43F8  4E 80 04 21 */	bctrl 
/* 801C74BC 001C43FC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C74C0 001C4400  48 00 00 94 */	b .L_801C7554
.L_801C74C4:
/* 801C74C4 001C4404  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C74C8 001C4408  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C74CC 001C440C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C74D0 001C4410  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C74D4 001C4414  7D 89 03 A6 */	mtctr r12
/* 801C74D8 001C4418  4E 80 04 21 */	bctrl 
/* 801C74DC 001C441C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801C74E0 001C4420  48 00 00 58 */	b .L_801C7538
.L_801C74E4:
/* 801C74E4 001C4424  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C74E8 001C4428  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C74EC 001C442C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C74F0 001C4430  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C74F4 001C4434  7D 89 03 A6 */	mtctr r12
/* 801C74F8 001C4438  4E 80 04 21 */	bctrl 
/* 801C74FC 001C443C  7C 64 1B 78 */	mr r4, r3
/* 801C7500 001C4440  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C7504 001C4444  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7508 001C4448  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C750C 001C444C  7D 89 03 A6 */	mtctr r12
/* 801C7510 001C4450  4E 80 04 21 */	bctrl 
/* 801C7514 001C4454  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C7518 001C4458  40 82 00 3C */	bne .L_801C7554
/* 801C751C 001C445C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C7520 001C4460  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C7524 001C4464  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7528 001C4468  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C752C 001C446C  7D 89 03 A6 */	mtctr r12
/* 801C7530 001C4470  4E 80 04 21 */	bctrl 
/* 801C7534 001C4474  90 61 00 0C */	stw r3, 0xc(r1)
.L_801C7538:
/* 801C7538 001C4478  81 81 00 08 */	lwz r12, 8(r1)
/* 801C753C 001C447C  38 61 00 08 */	addi r3, r1, 8
/* 801C7540 001C4480  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C7544 001C4484  7D 89 03 A6 */	mtctr r12
/* 801C7548 001C4488  4E 80 04 21 */	bctrl 
/* 801C754C 001C448C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C7550 001C4490  41 82 FF 94 */	beq .L_801C74E4
.L_801C7554:
/* 801C7554 001C4494  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801C7558 001C4498  81 83 00 00 */	lwz r12, 0(r3)
/* 801C755C 001C449C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C7560 001C44A0  7D 89 03 A6 */	mtctr r12
/* 801C7564 001C44A4  4E 80 04 21 */	bctrl 
/* 801C7568 001C44A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801C756C 001C44AC  7C 04 18 40 */	cmplw r4, r3
/* 801C7570 001C44B0  40 82 FF 00 */	bne .L_801C7470
/* 801C7574 001C44B4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C7578 001C44B8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C757C 001C44BC  7C 08 03 A6 */	mtlr r0
/* 801C7580 001C44C0  38 21 00 20 */	addi r1, r1, 0x20
/* 801C7584 001C44C4  4E 80 00 20 */	blr 

.global "getObject__32Container<Q24Game12PlatInstance>FPv"
"getObject__32Container<Q24Game12PlatInstance>FPv":
/* 801C7588 001C44C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C758C 001C44CC  7C 08 02 A6 */	mflr r0
/* 801C7590 001C44D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C7594 001C44D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C7598 001C44D8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C759C 001C44DC  7D 89 03 A6 */	mtctr r12
/* 801C75A0 001C44E0  4E 80 04 21 */	bctrl 
/* 801C75A4 001C44E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C75A8 001C44E8  7C 08 03 A6 */	mtlr r0
/* 801C75AC 001C44EC  38 21 00 10 */	addi r1, r1, 0x10
/* 801C75B0 001C44F0  4E 80 00 20 */	blr 

.global "getAt__32Container<Q24Game12PlatInstance>Fi"
"getAt__32Container<Q24Game12PlatInstance>Fi":
/* 801C75B4 001C44F4  38 60 00 00 */	li r3, 0
/* 801C75B8 001C44F8  4E 80 00 20 */	blr 

.global "getTo__32Container<Q24Game12PlatInstance>Fv"
"getTo__32Container<Q24Game12PlatInstance>Fv":
/* 801C75BC 001C44FC  38 60 00 00 */	li r3, 0
/* 801C75C0 001C4500  4E 80 00 20 */	blr 

.global "@28@doDirectDraw__32ObjectMgr<Q24Game12PlatInstance>FR8Graphics"
"@28@doDirectDraw__32ObjectMgr<Q24Game12PlatInstance>FR8Graphics":
/* 801C75C4 001C4504  38 63 FF E4 */	addi r3, r3, -28
/* 801C75C8 001C4508  4B FF FD CC */	b "doDirectDraw__32ObjectMgr<Q24Game12PlatInstance>FR8Graphics"

.global "@28@resetMgr__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
"@28@resetMgr__36NodeObjectMgr<Q24Game12PlatInstance>Fv":
/* 801C75CC 001C450C  38 63 FF E4 */	addi r3, r3, -28
/* 801C75D0 001C4510  4B FF F4 18 */	b "resetMgr__36NodeObjectMgr<Q24Game12PlatInstance>Fv"

.global "@28@doDirectDraw__Q24Game7PlatMgrFR8Graphics"
"@28@doDirectDraw__Q24Game7PlatMgrFR8Graphics":
/* 801C75D4 001C4514  38 63 FF E4 */	addi r3, r3, -28
/* 801C75D8 001C4518  4B FF F0 94 */	b doDirectDraw__Q24Game7PlatMgrFR8Graphics

.global "@28@doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"
"@28@doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff":
/* 801C75DC 001C451C  38 63 FF E4 */	addi r3, r3, -28
/* 801C75E0 001C4520  4B FF FB C0 */	b "doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"

.global "@28@doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"
"@28@doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv":
/* 801C75E4 001C4524  38 63 FF E4 */	addi r3, r3, -28
/* 801C75E8 001C4528  4B FF F9 D4 */	b "doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"

.global "@28@doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"
"@28@doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi":
/* 801C75EC 001C452C  38 63 FF E4 */	addi r3, r3, -28
/* 801C75F0 001C4530  4B FF F7 D8 */	b "doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"

.global "@28@doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"
"@28@doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv":
/* 801C75F4 001C4534  38 63 FF E4 */	addi r3, r3, -28
/* 801C75F8 001C4538  4B FF F5 EC */	b "doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"

.global "@28@doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
"@28@doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv":
/* 801C75FC 001C453C  38 63 FF E4 */	addi r3, r3, -28
/* 801C7600 001C4540  4B FF F4 00 */	b "doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
