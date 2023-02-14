.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_particleMgr_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80495BC8, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80495BC8
.balign 4
.obj lbl_80495BD4, local
	.asciz "particleMgr"
.endobj lbl_80495BD4
.balign 4
.obj lbl_80495BE0, local
	.asciz "ParticleMgr"
.endobj lbl_80495BE0
.balign 4
.obj lbl_80495BEC, local
	.asciz "particleMgr.cpp"
.endobj lbl_80495BEC
.balign 4
.obj lbl_80495BFC, local
	.asciz "P2Assert"
.endobj lbl_80495BFC
.balign 4
.obj lbl_80495C08, local
	.asciz "effect heap not allocated !\n"
.endobj lbl_80495C08
.balign 4
.obj lbl_80495C28, local
	.asciz "ParticleResource (%s) not found\n"
.endobj lbl_80495C28
.balign 4
.obj lbl_80495C4C, local
	.asciz "IP2_dummy"
.endobj lbl_80495C4C

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__11ParticleMgr, global
	.4byte 0
	.4byte 0
	.4byte __dt__11ParticleMgrFv
	.4byte getChildCount__5CNodeFv
	.4byte update__11ParticleMgrFv
	.4byte doAnimation__11ParticleMgrFv
	.4byte doEntry__11ParticleMgrFv
	.4byte doSetView__11ParticleMgrFi
	.4byte doViewCalc__11ParticleMgrFv
	.4byte draw__11ParticleMgrFP8ViewportUc
.endobj __vt__11ParticleMgr
.obj __vt__19ModelEffectDataRoot, weak
	.4byte 0
	.4byte 0
	.4byte __dt__19ModelEffectDataRootFv
	.4byte getChildCount__5CNodeFv
	.4byte loadResources__19ModelEffectDataRootFv
	.4byte getID__19ModelEffectDataRootFv
	.4byte onCreate__19ModelEffectDataRootFP20ModelEffectCreateArg
.endobj __vt__19ModelEffectDataRoot
.obj "__vt__26TObjectNode<11ModelEffect>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__26TObjectNode<11ModelEffect>Fv"
	.4byte getChildCount__5CNodeFv
.endobj "__vt__26TObjectNode<11ModelEffect>"
.obj "__vt__28NodeObjectMgr<11ModelEffect>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__28NodeObjectMgr<11ModelEffect>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__24Container<11ModelEffect>FPv"
	.4byte "getNext__28NodeObjectMgr<11ModelEffect>FPv"
	.4byte "getStart__28NodeObjectMgr<11ModelEffect>Fv"
	.4byte "getEnd__28NodeObjectMgr<11ModelEffect>Fv"
	.4byte "get__28NodeObjectMgr<11ModelEffect>FPv"
	.4byte "getAt__24Container<11ModelEffect>Fi"
	.4byte "getTo__24Container<11ModelEffect>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__24ObjectMgr<11ModelEffect>Fv"
	.4byte "@28@doEntry__24ObjectMgr<11ModelEffect>Fv"
	.4byte "@28@doSetView__24ObjectMgr<11ModelEffect>Fi"
	.4byte "@28@doViewCalc__24ObjectMgr<11ModelEffect>Fv"
	.4byte "@28@doSimulation__24ObjectMgr<11ModelEffect>Ff"
	.4byte "@28@doDirectDraw__24ObjectMgr<11ModelEffect>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__28NodeObjectMgr<11ModelEffect>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__24ObjectMgr<11ModelEffect>Fv"
	.4byte "doEntry__24ObjectMgr<11ModelEffect>Fv"
	.4byte "doSetView__24ObjectMgr<11ModelEffect>Fi"
	.4byte "doViewCalc__24ObjectMgr<11ModelEffect>Fv"
	.4byte "doSimulation__24ObjectMgr<11ModelEffect>Ff"
	.4byte "doDirectDraw__24ObjectMgr<11ModelEffect>FR8Graphics"
	.4byte "resetMgr__28NodeObjectMgr<11ModelEffect>Fv"
.endobj "__vt__28NodeObjectMgr<11ModelEffect>"
.obj "__vt__24ObjectMgr<11ModelEffect>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__24ObjectMgr<11ModelEffect>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__24Container<11ModelEffect>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__24Container<11ModelEffect>Fi"
	.4byte "getTo__24Container<11ModelEffect>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__24ObjectMgr<11ModelEffect>Fv"
	.4byte "@28@doEntry__24ObjectMgr<11ModelEffect>Fv"
	.4byte "@28@doSetView__24ObjectMgr<11ModelEffect>Fi"
	.4byte "@28@doViewCalc__24ObjectMgr<11ModelEffect>Fv"
	.4byte "@28@doSimulation__24ObjectMgr<11ModelEffect>Ff"
	.4byte "@28@doDirectDraw__24ObjectMgr<11ModelEffect>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__24ObjectMgr<11ModelEffect>Fv"
	.4byte "doEntry__24ObjectMgr<11ModelEffect>Fv"
	.4byte "doSetView__24ObjectMgr<11ModelEffect>Fi"
	.4byte "doViewCalc__24ObjectMgr<11ModelEffect>Fv"
	.4byte "doSimulation__24ObjectMgr<11ModelEffect>Ff"
	.4byte "doDirectDraw__24ObjectMgr<11ModelEffect>FR8Graphics"
.endobj "__vt__24ObjectMgr<11ModelEffect>"
.obj "__vt__24Container<11ModelEffect>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__24Container<11ModelEffect>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__24Container<11ModelEffect>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__24Container<11ModelEffect>Fi"
	.4byte "getTo__24Container<11ModelEffect>Fv"
.endobj "__vt__24Container<11ModelEffect>"
.obj "__vt__23Iterator<11ModelEffect>", weak
	.4byte 0
	.4byte 0
	.4byte "first__23Iterator<11ModelEffect>Fv"
	.4byte "next__23Iterator<11ModelEffect>Fv"
	.4byte "isDone__23Iterator<11ModelEffect>Fv"
	.4byte "__ml__23Iterator<11ModelEffect>Fv"
.endobj "__vt__23Iterator<11ModelEffect>"

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj mClipRadiusS__11ParticleMgr, global
	.float 10.0
.endobj mClipRadiusS__11ParticleMgr
.obj mClipRadiusM__11ParticleMgr, global
	.float 30.0
.endobj mClipRadiusM__11ParticleMgr
.obj mClipRadiusL__11ParticleMgr, global
	.float 100.0
.endobj mClipRadiusL__11ParticleMgr

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj particleMgr, global
	.skip 0x4
.endobj particleMgr
.obj disableCulling__11ParticleMgr, global
	.skip 0x1
.endobj disableCulling__11ParticleMgr

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051F6F0, local
	.float 0.5
.endobj lbl_8051F6F0
.obj lbl_8051F6F4, local
	.float -0.5
.endobj lbl_8051F6F4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn globalInstance__11ParticleMgrFv, global
/* 803BAF70 003B7EB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BAF74 003B7EB4  7C 08 02 A6 */	mflr r0
/* 803BAF78 003B7EB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BAF7C 003B7EBC  80 0D 9A 18 */	lwz r0, particleMgr@sda21(r13)
/* 803BAF80 003B7EC0  28 00 00 00 */	cmplwi r0, 0
/* 803BAF84 003B7EC4  40 82 00 20 */	bne .L_803BAFA4
/* 803BAF88 003B7EC8  38 60 00 AC */	li r3, 0xac
/* 803BAF8C 003B7ECC  4B C6 8F 19 */	bl __nw__FUl
/* 803BAF90 003B7ED0  7C 60 1B 79 */	or. r0, r3, r3
/* 803BAF94 003B7ED4  41 82 00 0C */	beq .L_803BAFA0
/* 803BAF98 003B7ED8  48 00 00 65 */	bl __ct__11ParticleMgrFv
/* 803BAF9C 003B7EDC  7C 60 1B 78 */	mr r0, r3
.L_803BAFA0:
/* 803BAFA0 003B7EE0  90 0D 9A 18 */	stw r0, particleMgr@sda21(r13)
.L_803BAFA4:
/* 803BAFA4 003B7EE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BAFA8 003B7EE8  7C 08 03 A6 */	mtlr r0
/* 803BAFAC 003B7EEC  38 21 00 10 */	addi r1, r1, 0x10
/* 803BAFB0 003B7EF0  4E 80 00 20 */	blr 
.endfn globalInstance__11ParticleMgrFv

.fn deleteInstance__11ParticleMgrFv, global
/* 803BAFB4 003B7EF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BAFB8 003B7EF8  7C 08 02 A6 */	mflr r0
/* 803BAFBC 003B7EFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BAFC0 003B7F00  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803BAFC4 003B7F04  28 03 00 00 */	cmplwi r3, 0
/* 803BAFC8 003B7F08  41 82 00 24 */	beq .L_803BAFEC
/* 803BAFCC 003B7F0C  41 82 00 18 */	beq .L_803BAFE4
/* 803BAFD0 003B7F10  81 83 00 00 */	lwz r12, 0(r3)
/* 803BAFD4 003B7F14  38 80 00 01 */	li r4, 1
/* 803BAFD8 003B7F18  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BAFDC 003B7F1C  7D 89 03 A6 */	mtctr r12
/* 803BAFE0 003B7F20  4E 80 04 21 */	bctrl 
.L_803BAFE4:
/* 803BAFE4 003B7F24  38 00 00 00 */	li r0, 0
/* 803BAFE8 003B7F28  90 0D 9A 18 */	stw r0, particleMgr@sda21(r13)
.L_803BAFEC:
/* 803BAFEC 003B7F2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BAFF0 003B7F30  7C 08 03 A6 */	mtlr r0
/* 803BAFF4 003B7F34  38 21 00 10 */	addi r1, r1, 0x10
/* 803BAFF8 003B7F38  4E 80 00 20 */	blr 
.endfn deleteInstance__11ParticleMgrFv

.fn __ct__11ParticleMgrFv, global
/* 803BAFFC 003B7F3C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BB000 003B7F40  7C 08 02 A6 */	mflr r0
/* 803BB004 003B7F44  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BB008 003B7F48  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803BB00C 003B7F4C  7C 7F 1B 78 */	mr r31, r3
/* 803BB010 003B7F50  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803BB014 003B7F54  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803BB018 003B7F58  48 05 63 79 */	bl __ct__5CNodeFv
/* 803BB01C 003B7F5C  3C 60 80 4E */	lis r3, __vt__11ParticleMgr@ha
/* 803BB020 003B7F60  3B DF 00 1C */	addi r30, r31, 0x1c
/* 803BB024 003B7F64  38 03 76 94 */	addi r0, r3, __vt__11ParticleMgr@l
/* 803BB028 003B7F68  90 1F 00 00 */	stw r0, 0(r31)
/* 803BB02C 003B7F6C  7F C3 F3 78 */	mr r3, r30
/* 803BB030 003B7F70  48 05 63 61 */	bl __ct__5CNodeFv
/* 803BB034 003B7F74  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 803BB038 003B7F78  3C 60 80 4E */	lis r3, "__vt__24Container<11ModelEffect>"@ha
/* 803BB03C 003B7F7C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 803BB040 003B7F80  3C A0 80 4B */	lis r5, __vt__16GenericObjectMgr@ha
/* 803BB044 003B7F84  90 1E 00 00 */	stw r0, 0(r30)
/* 803BB048 003B7F88  38 03 77 E4 */	addi r0, r3, "__vt__24Container<11ModelEffect>"@l
/* 803BB04C 003B7F8C  3C 80 80 4E */	lis r4, "__vt__24ObjectMgr<11ModelEffect>"@ha
/* 803BB050 003B7F90  3C 60 80 4E */	lis r3, "__vt__28NodeObjectMgr<11ModelEffect>"@ha
/* 803BB054 003B7F94  90 1E 00 00 */	stw r0, 0(r30)
/* 803BB058 003B7F98  38 00 00 00 */	li r0, 0
/* 803BB05C 003B7F9C  38 C4 77 68 */	addi r6, r4, "__vt__24ObjectMgr<11ModelEffect>"@l
/* 803BB060 003B7FA0  38 83 76 E8 */	addi r4, r3, "__vt__28NodeObjectMgr<11ModelEffect>"@l
/* 803BB064 003B7FA4  98 1E 00 18 */	stb r0, 0x18(r30)
/* 803BB068 003B7FA8  38 05 B5 F0 */	addi r0, r5, __vt__16GenericObjectMgr@l
/* 803BB06C 003B7FAC  3B BE 00 20 */	addi r29, r30, 0x20
/* 803BB070 003B7FB0  38 A6 00 2C */	addi r5, r6, 0x2c
/* 803BB074 003B7FB4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 803BB078 003B7FB8  38 04 00 2C */	addi r0, r4, 0x2c
/* 803BB07C 003B7FBC  7F A3 EB 78 */	mr r3, r29
/* 803BB080 003B7FC0  90 DE 00 00 */	stw r6, 0(r30)
/* 803BB084 003B7FC4  90 BE 00 1C */	stw r5, 0x1c(r30)
/* 803BB088 003B7FC8  90 9E 00 00 */	stw r4, 0(r30)
/* 803BB08C 003B7FCC  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 803BB090 003B7FD0  48 05 63 01 */	bl __ct__5CNodeFv
/* 803BB094 003B7FD4  3C 60 80 4E */	lis r3, "__vt__26TObjectNode<11ModelEffect>"@ha
/* 803BB098 003B7FD8  3B DF 00 60 */	addi r30, r31, 0x60
/* 803BB09C 003B7FDC  38 03 76 D8 */	addi r0, r3, "__vt__26TObjectNode<11ModelEffect>"@l
/* 803BB0A0 003B7FE0  90 1D 00 00 */	stw r0, 0(r29)
/* 803BB0A4 003B7FE4  7F C3 F3 78 */	mr r3, r30
/* 803BB0A8 003B7FE8  48 05 62 E9 */	bl __ct__5CNodeFv
/* 803BB0AC 003B7FEC  3C 60 80 4B */	lis r3, __vt__15ModelEffectData@ha
/* 803BB0B0 003B7FF0  3C 80 80 4E */	lis r4, __vt__19ModelEffectDataRoot@ha
/* 803BB0B4 003B7FF4  38 03 0C EC */	addi r0, r3, __vt__15ModelEffectData@l
/* 803BB0B8 003B7FF8  3C 60 80 49 */	lis r3, lbl_80495BE0@ha
/* 803BB0BC 003B7FFC  90 1E 00 00 */	stw r0, 0(r30)
/* 803BB0C0 003B8000  38 04 76 BC */	addi r0, r4, __vt__19ModelEffectDataRoot@l
/* 803BB0C4 003B8004  38 A3 5B E0 */	addi r5, r3, lbl_80495BE0@l
/* 803BB0C8 003B8008  38 80 00 00 */	li r4, 0
/* 803BB0CC 003B800C  90 1E 00 00 */	stw r0, 0(r30)
/* 803BB0D0 003B8010  38 00 00 C8 */	li r0, 0xc8
/* 803BB0D4 003B8014  7F E3 FB 78 */	mr r3, r31
/* 803BB0D8 003B8018  90 BF 00 14 */	stw r5, 0x14(r31)
/* 803BB0DC 003B801C  90 9F 00 A0 */	stw r4, 0xa0(r31)
/* 803BB0E0 003B8020  90 9F 00 98 */	stw r4, 0x98(r31)
/* 803BB0E4 003B8024  90 9F 00 9C */	stw r4, 0x9c(r31)
/* 803BB0E8 003B8028  90 9F 00 80 */	stw r4, 0x80(r31)
/* 803BB0EC 003B802C  90 1F 00 A8 */	stw r0, 0xa8(r31)
/* 803BB0F0 003B8030  90 9F 00 18 */	stw r4, 0x18(r31)
/* 803BB0F4 003B8034  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803BB0F8 003B8038  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803BB0FC 003B803C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803BB100 003B8040  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BB104 003B8044  7C 08 03 A6 */	mtlr r0
/* 803BB108 003B8048  38 21 00 20 */	addi r1, r1, 0x20
/* 803BB10C 003B804C  4E 80 00 20 */	blr 
.endfn __ct__11ParticleMgrFv

.fn __dt__19ModelEffectDataRootFv, weak
/* 803BB110 003B8050  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB114 003B8054  7C 08 02 A6 */	mflr r0
/* 803BB118 003B8058  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB11C 003B805C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BB120 003B8060  7C 9F 23 78 */	mr r31, r4
/* 803BB124 003B8064  93 C1 00 08 */	stw r30, 8(r1)
/* 803BB128 003B8068  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BB12C 003B806C  41 82 00 38 */	beq .L_803BB164
/* 803BB130 003B8070  3C 80 80 4E */	lis r4, __vt__19ModelEffectDataRoot@ha
/* 803BB134 003B8074  38 04 76 BC */	addi r0, r4, __vt__19ModelEffectDataRoot@l
/* 803BB138 003B8078  90 1E 00 00 */	stw r0, 0(r30)
/* 803BB13C 003B807C  41 82 00 18 */	beq .L_803BB154
/* 803BB140 003B8080  3C A0 80 4B */	lis r5, __vt__15ModelEffectData@ha
/* 803BB144 003B8084  38 80 00 00 */	li r4, 0
/* 803BB148 003B8088  38 05 0C EC */	addi r0, r5, __vt__15ModelEffectData@l
/* 803BB14C 003B808C  90 1E 00 00 */	stw r0, 0(r30)
/* 803BB150 003B8090  48 05 64 39 */	bl __dt__5CNodeFv
.L_803BB154:
/* 803BB154 003B8094  7F E0 07 35 */	extsh. r0, r31
/* 803BB158 003B8098  40 81 00 0C */	ble .L_803BB164
/* 803BB15C 003B809C  7F C3 F3 78 */	mr r3, r30
/* 803BB160 003B80A0  4B C6 8F 55 */	bl __dl__FPv
.L_803BB164:
/* 803BB164 003B80A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB168 003B80A8  7F C3 F3 78 */	mr r3, r30
/* 803BB16C 003B80AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BB170 003B80B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BB174 003B80B4  7C 08 03 A6 */	mtlr r0
/* 803BB178 003B80B8  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB17C 003B80BC  4E 80 00 20 */	blr 
.endfn __dt__19ModelEffectDataRootFv

.fn "__dt__28NodeObjectMgr<11ModelEffect>Fv", weak
/* 803BB180 003B80C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB184 003B80C4  7C 08 02 A6 */	mflr r0
/* 803BB188 003B80C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB18C 003B80CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BB190 003B80D0  7C 9F 23 78 */	mr r31, r4
/* 803BB194 003B80D4  93 C1 00 08 */	stw r30, 8(r1)
/* 803BB198 003B80D8  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BB19C 003B80DC  41 82 00 90 */	beq .L_803BB22C
/* 803BB1A0 003B80E0  3C 60 80 4E */	lis r3, "__vt__28NodeObjectMgr<11ModelEffect>"@ha
/* 803BB1A4 003B80E4  34 1E 00 20 */	addic. r0, r30, 0x20
/* 803BB1A8 003B80E8  38 63 76 E8 */	addi r3, r3, "__vt__28NodeObjectMgr<11ModelEffect>"@l
/* 803BB1AC 003B80EC  90 7E 00 00 */	stw r3, 0(r30)
/* 803BB1B0 003B80F0  38 03 00 2C */	addi r0, r3, 0x2c
/* 803BB1B4 003B80F4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 803BB1B8 003B80F8  41 82 00 1C */	beq .L_803BB1D4
/* 803BB1BC 003B80FC  3C 80 80 4E */	lis r4, "__vt__26TObjectNode<11ModelEffect>"@ha
/* 803BB1C0 003B8100  38 7E 00 20 */	addi r3, r30, 0x20
/* 803BB1C4 003B8104  38 04 76 D8 */	addi r0, r4, "__vt__26TObjectNode<11ModelEffect>"@l
/* 803BB1C8 003B8108  38 80 00 00 */	li r4, 0
/* 803BB1CC 003B810C  90 1E 00 20 */	stw r0, 0x20(r30)
/* 803BB1D0 003B8110  48 05 63 B9 */	bl __dt__5CNodeFv
.L_803BB1D4:
/* 803BB1D4 003B8114  28 1E 00 00 */	cmplwi r30, 0
/* 803BB1D8 003B8118  41 82 00 44 */	beq .L_803BB21C
/* 803BB1DC 003B811C  3C 60 80 4E */	lis r3, "__vt__24ObjectMgr<11ModelEffect>"@ha
/* 803BB1E0 003B8120  38 63 77 68 */	addi r3, r3, "__vt__24ObjectMgr<11ModelEffect>"@l
/* 803BB1E4 003B8124  90 7E 00 00 */	stw r3, 0(r30)
/* 803BB1E8 003B8128  38 03 00 2C */	addi r0, r3, 0x2c
/* 803BB1EC 003B812C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 803BB1F0 003B8130  41 82 00 2C */	beq .L_803BB21C
/* 803BB1F4 003B8134  3C 60 80 4E */	lis r3, "__vt__24Container<11ModelEffect>"@ha
/* 803BB1F8 003B8138  38 03 77 E4 */	addi r0, r3, "__vt__24Container<11ModelEffect>"@l
/* 803BB1FC 003B813C  90 1E 00 00 */	stw r0, 0(r30)
/* 803BB200 003B8140  41 82 00 1C */	beq .L_803BB21C
/* 803BB204 003B8144  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 803BB208 003B8148  7F C3 F3 78 */	mr r3, r30
/* 803BB20C 003B814C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 803BB210 003B8150  38 80 00 00 */	li r4, 0
/* 803BB214 003B8154  90 1E 00 00 */	stw r0, 0(r30)
/* 803BB218 003B8158  48 05 63 71 */	bl __dt__5CNodeFv
.L_803BB21C:
/* 803BB21C 003B815C  7F E0 07 35 */	extsh. r0, r31
/* 803BB220 003B8160  40 81 00 0C */	ble .L_803BB22C
/* 803BB224 003B8164  7F C3 F3 78 */	mr r3, r30
/* 803BB228 003B8168  4B C6 8E 8D */	bl __dl__FPv
.L_803BB22C:
/* 803BB22C 003B816C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB230 003B8170  7F C3 F3 78 */	mr r3, r30
/* 803BB234 003B8174  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BB238 003B8178  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BB23C 003B817C  7C 08 03 A6 */	mtlr r0
/* 803BB240 003B8180  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB244 003B8184  4E 80 00 20 */	blr 
.endfn "__dt__28NodeObjectMgr<11ModelEffect>Fv"

.fn "__dt__26TObjectNode<11ModelEffect>Fv", weak
/* 803BB248 003B8188  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB24C 003B818C  7C 08 02 A6 */	mflr r0
/* 803BB250 003B8190  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB254 003B8194  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BB258 003B8198  7C 9F 23 78 */	mr r31, r4
/* 803BB25C 003B819C  93 C1 00 08 */	stw r30, 8(r1)
/* 803BB260 003B81A0  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BB264 003B81A4  41 82 00 28 */	beq .L_803BB28C
/* 803BB268 003B81A8  3C A0 80 4E */	lis r5, "__vt__26TObjectNode<11ModelEffect>"@ha
/* 803BB26C 003B81AC  38 80 00 00 */	li r4, 0
/* 803BB270 003B81B0  38 05 76 D8 */	addi r0, r5, "__vt__26TObjectNode<11ModelEffect>"@l
/* 803BB274 003B81B4  90 1E 00 00 */	stw r0, 0(r30)
/* 803BB278 003B81B8  48 05 63 11 */	bl __dt__5CNodeFv
/* 803BB27C 003B81BC  7F E0 07 35 */	extsh. r0, r31
/* 803BB280 003B81C0  40 81 00 0C */	ble .L_803BB28C
/* 803BB284 003B81C4  7F C3 F3 78 */	mr r3, r30
/* 803BB288 003B81C8  4B C6 8E 2D */	bl __dl__FPv
.L_803BB28C:
/* 803BB28C 003B81CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB290 003B81D0  7F C3 F3 78 */	mr r3, r30
/* 803BB294 003B81D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BB298 003B81D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BB29C 003B81DC  7C 08 03 A6 */	mtlr r0
/* 803BB2A0 003B81E0  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB2A4 003B81E4  4E 80 00 20 */	blr 
.endfn "__dt__26TObjectNode<11ModelEffect>Fv"

.fn "__dt__24ObjectMgr<11ModelEffect>Fv", weak
/* 803BB2A8 003B81E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB2AC 003B81EC  7C 08 02 A6 */	mflr r0
/* 803BB2B0 003B81F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB2B4 003B81F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BB2B8 003B81F8  7C 9F 23 78 */	mr r31, r4
/* 803BB2BC 003B81FC  93 C1 00 08 */	stw r30, 8(r1)
/* 803BB2C0 003B8200  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BB2C4 003B8204  41 82 00 50 */	beq .L_803BB314
/* 803BB2C8 003B8208  3C 80 80 4E */	lis r4, "__vt__24ObjectMgr<11ModelEffect>"@ha
/* 803BB2CC 003B820C  38 84 77 68 */	addi r4, r4, "__vt__24ObjectMgr<11ModelEffect>"@l
/* 803BB2D0 003B8210  90 9E 00 00 */	stw r4, 0(r30)
/* 803BB2D4 003B8214  38 04 00 2C */	addi r0, r4, 0x2c
/* 803BB2D8 003B8218  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 803BB2DC 003B821C  41 82 00 28 */	beq .L_803BB304
/* 803BB2E0 003B8220  3C 80 80 4E */	lis r4, "__vt__24Container<11ModelEffect>"@ha
/* 803BB2E4 003B8224  38 04 77 E4 */	addi r0, r4, "__vt__24Container<11ModelEffect>"@l
/* 803BB2E8 003B8228  90 1E 00 00 */	stw r0, 0(r30)
/* 803BB2EC 003B822C  41 82 00 18 */	beq .L_803BB304
/* 803BB2F0 003B8230  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 803BB2F4 003B8234  38 80 00 00 */	li r4, 0
/* 803BB2F8 003B8238  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 803BB2FC 003B823C  90 1E 00 00 */	stw r0, 0(r30)
/* 803BB300 003B8240  48 05 62 89 */	bl __dt__5CNodeFv
.L_803BB304:
/* 803BB304 003B8244  7F E0 07 35 */	extsh. r0, r31
/* 803BB308 003B8248  40 81 00 0C */	ble .L_803BB314
/* 803BB30C 003B824C  7F C3 F3 78 */	mr r3, r30
/* 803BB310 003B8250  4B C6 8D A5 */	bl __dl__FPv
.L_803BB314:
/* 803BB314 003B8254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB318 003B8258  7F C3 F3 78 */	mr r3, r30
/* 803BB31C 003B825C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BB320 003B8260  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BB324 003B8264  7C 08 03 A6 */	mtlr r0
/* 803BB328 003B8268  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB32C 003B826C  4E 80 00 20 */	blr 
.endfn "__dt__24ObjectMgr<11ModelEffect>Fv"

.fn "__dt__24Container<11ModelEffect>Fv", weak
/* 803BB330 003B8270  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB334 003B8274  7C 08 02 A6 */	mflr r0
/* 803BB338 003B8278  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB33C 003B827C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BB340 003B8280  7C 9F 23 78 */	mr r31, r4
/* 803BB344 003B8284  93 C1 00 08 */	stw r30, 8(r1)
/* 803BB348 003B8288  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BB34C 003B828C  41 82 00 38 */	beq .L_803BB384
/* 803BB350 003B8290  3C 80 80 4E */	lis r4, "__vt__24Container<11ModelEffect>"@ha
/* 803BB354 003B8294  38 04 77 E4 */	addi r0, r4, "__vt__24Container<11ModelEffect>"@l
/* 803BB358 003B8298  90 1E 00 00 */	stw r0, 0(r30)
/* 803BB35C 003B829C  41 82 00 18 */	beq .L_803BB374
/* 803BB360 003B82A0  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 803BB364 003B82A4  38 80 00 00 */	li r4, 0
/* 803BB368 003B82A8  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 803BB36C 003B82AC  90 1E 00 00 */	stw r0, 0(r30)
/* 803BB370 003B82B0  48 05 62 19 */	bl __dt__5CNodeFv
.L_803BB374:
/* 803BB374 003B82B4  7F E0 07 35 */	extsh. r0, r31
/* 803BB378 003B82B8  40 81 00 0C */	ble .L_803BB384
/* 803BB37C 003B82BC  7F C3 F3 78 */	mr r3, r30
/* 803BB380 003B82C0  4B C6 8D 35 */	bl __dl__FPv
.L_803BB384:
/* 803BB384 003B82C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB388 003B82C8  7F C3 F3 78 */	mr r3, r30
/* 803BB38C 003B82CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BB390 003B82D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BB394 003B82D4  7C 08 03 A6 */	mtlr r0
/* 803BB398 003B82D8  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB39C 003B82DC  4E 80 00 20 */	blr 
.endfn "__dt__24Container<11ModelEffect>Fv"

.fn __dt__11ParticleMgrFv, global
/* 803BB3A0 003B82E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB3A4 003B82E4  7C 08 02 A6 */	mflr r0
/* 803BB3A8 003B82E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB3AC 003B82EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BB3B0 003B82F0  7C 9F 23 78 */	mr r31, r4
/* 803BB3B4 003B82F4  93 C1 00 08 */	stw r30, 8(r1)
/* 803BB3B8 003B82F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BB3BC 003B82FC  41 82 00 F4 */	beq .L_803BB4B0
/* 803BB3C0 003B8300  3C 80 80 4E */	lis r4, __vt__11ParticleMgr@ha
/* 803BB3C4 003B8304  38 60 00 00 */	li r3, 0
/* 803BB3C8 003B8308  38 84 76 94 */	addi r4, r4, __vt__11ParticleMgr@l
/* 803BB3CC 003B830C  34 1E 00 60 */	addic. r0, r30, 0x60
/* 803BB3D0 003B8310  90 9E 00 00 */	stw r4, 0(r30)
/* 803BB3D4 003B8314  90 7E 00 18 */	stw r3, 0x18(r30)
/* 803BB3D8 003B8318  90 7E 00 A0 */	stw r3, 0xa0(r30)
/* 803BB3DC 003B831C  41 82 00 30 */	beq .L_803BB40C
/* 803BB3E0 003B8320  3C 60 80 4E */	lis r3, __vt__19ModelEffectDataRoot@ha
/* 803BB3E4 003B8324  34 1E 00 60 */	addic. r0, r30, 0x60
/* 803BB3E8 003B8328  38 03 76 BC */	addi r0, r3, __vt__19ModelEffectDataRoot@l
/* 803BB3EC 003B832C  90 1E 00 60 */	stw r0, 0x60(r30)
/* 803BB3F0 003B8330  41 82 00 1C */	beq .L_803BB40C
/* 803BB3F4 003B8334  3C 80 80 4B */	lis r4, __vt__15ModelEffectData@ha
/* 803BB3F8 003B8338  38 7E 00 60 */	addi r3, r30, 0x60
/* 803BB3FC 003B833C  38 04 0C EC */	addi r0, r4, __vt__15ModelEffectData@l
/* 803BB400 003B8340  38 80 00 00 */	li r4, 0
/* 803BB404 003B8344  90 1E 00 60 */	stw r0, 0x60(r30)
/* 803BB408 003B8348  48 05 61 81 */	bl __dt__5CNodeFv
.L_803BB40C:
/* 803BB40C 003B834C  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 803BB410 003B8350  41 82 00 84 */	beq .L_803BB494
/* 803BB414 003B8354  3C 80 80 4E */	lis r4, "__vt__28NodeObjectMgr<11ModelEffect>"@ha
/* 803BB418 003B8358  34 7E 00 3C */	addic. r3, r30, 0x3c
/* 803BB41C 003B835C  38 84 76 E8 */	addi r4, r4, "__vt__28NodeObjectMgr<11ModelEffect>"@l
/* 803BB420 003B8360  90 9E 00 1C */	stw r4, 0x1c(r30)
/* 803BB424 003B8364  38 04 00 2C */	addi r0, r4, 0x2c
/* 803BB428 003B8368  90 1E 00 38 */	stw r0, 0x38(r30)
/* 803BB42C 003B836C  41 82 00 18 */	beq .L_803BB444
/* 803BB430 003B8370  3C 80 80 4E */	lis r4, "__vt__26TObjectNode<11ModelEffect>"@ha
/* 803BB434 003B8374  38 04 76 D8 */	addi r0, r4, "__vt__26TObjectNode<11ModelEffect>"@l
/* 803BB438 003B8378  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 803BB43C 003B837C  38 80 00 00 */	li r4, 0
/* 803BB440 003B8380  48 05 61 49 */	bl __dt__5CNodeFv
.L_803BB444:
/* 803BB444 003B8384  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 803BB448 003B8388  41 82 00 4C */	beq .L_803BB494
/* 803BB44C 003B838C  3C 60 80 4E */	lis r3, "__vt__24ObjectMgr<11ModelEffect>"@ha
/* 803BB450 003B8390  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 803BB454 003B8394  38 63 77 68 */	addi r3, r3, "__vt__24ObjectMgr<11ModelEffect>"@l
/* 803BB458 003B8398  90 7E 00 1C */	stw r3, 0x1c(r30)
/* 803BB45C 003B839C  38 03 00 2C */	addi r0, r3, 0x2c
/* 803BB460 003B83A0  90 1E 00 38 */	stw r0, 0x38(r30)
/* 803BB464 003B83A4  41 82 00 30 */	beq .L_803BB494
/* 803BB468 003B83A8  3C 60 80 4E */	lis r3, "__vt__24Container<11ModelEffect>"@ha
/* 803BB46C 003B83AC  34 1E 00 1C */	addic. r0, r30, 0x1c
/* 803BB470 003B83B0  38 03 77 E4 */	addi r0, r3, "__vt__24Container<11ModelEffect>"@l
/* 803BB474 003B83B4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 803BB478 003B83B8  41 82 00 1C */	beq .L_803BB494
/* 803BB47C 003B83BC  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 803BB480 003B83C0  38 7E 00 1C */	addi r3, r30, 0x1c
/* 803BB484 003B83C4  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 803BB488 003B83C8  38 80 00 00 */	li r4, 0
/* 803BB48C 003B83CC  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 803BB490 003B83D0  48 05 60 F9 */	bl __dt__5CNodeFv
.L_803BB494:
/* 803BB494 003B83D4  7F C3 F3 78 */	mr r3, r30
/* 803BB498 003B83D8  38 80 00 00 */	li r4, 0
/* 803BB49C 003B83DC  48 05 60 ED */	bl __dt__5CNodeFv
/* 803BB4A0 003B83E0  7F E0 07 35 */	extsh. r0, r31
/* 803BB4A4 003B83E4  40 81 00 0C */	ble .L_803BB4B0
/* 803BB4A8 003B83E8  7F C3 F3 78 */	mr r3, r30
/* 803BB4AC 003B83EC  4B C6 8C 09 */	bl __dl__FPv
.L_803BB4B0:
/* 803BB4B0 003B83F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB4B4 003B83F4  7F C3 F3 78 */	mr r3, r30
/* 803BB4B8 003B83F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BB4BC 003B83FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BB4C0 003B8400  7C 08 03 A6 */	mtlr r0
/* 803BB4C4 003B8404  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB4C8 003B8408  4E 80 00 20 */	blr 
.endfn __dt__11ParticleMgrFv

.fn createHeap__11ParticleMgrFUl, global
/* 803BB4CC 003B840C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB4D0 003B8410  7C 08 02 A6 */	mflr r0
/* 803BB4D4 003B8414  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB4D8 003B8418  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BB4DC 003B841C  7C 9F 23 78 */	mr r31, r4
/* 803BB4E0 003B8420  93 C1 00 08 */	stw r30, 8(r1)
/* 803BB4E4 003B8424  7C 7E 1B 78 */	mr r30, r3
/* 803BB4E8 003B8428  80 03 00 A0 */	lwz r0, 0xa0(r3)
/* 803BB4EC 003B842C  28 00 00 00 */	cmplwi r0, 0
/* 803BB4F0 003B8430  41 82 00 20 */	beq .L_803BB510
/* 803BB4F4 003B8434  3C 60 80 49 */	lis r3, lbl_80495BEC@ha
/* 803BB4F8 003B8438  3C A0 80 49 */	lis r5, lbl_80495BFC@ha
/* 803BB4FC 003B843C  38 63 5B EC */	addi r3, r3, lbl_80495BEC@l
/* 803BB500 003B8440  38 80 00 CA */	li r4, 0xca
/* 803BB504 003B8444  38 A5 5B FC */	addi r5, r5, lbl_80495BFC@l
/* 803BB508 003B8448  4C C6 31 82 */	crclr 6
/* 803BB50C 003B844C  4B C6 F1 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803BB510:
/* 803BB510 003B8450  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 803BB514 003B8454  7F E3 FB 78 */	mr r3, r31
/* 803BB518 003B8458  38 A0 00 01 */	li r5, 1
/* 803BB51C 003B845C  4B C6 98 55 */	bl create__12JKRSolidHeapFUlP7JKRHeapb
/* 803BB520 003B8460  90 7E 00 A0 */	stw r3, 0xa0(r30)
/* 803BB524 003B8464  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB528 003B8468  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BB52C 003B846C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BB530 003B8470  7C 08 03 A6 */	mtlr r0
/* 803BB534 003B8474  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB538 003B8478  4E 80 00 20 */	blr 
.endfn createHeap__11ParticleMgrFUl

.fn createMgr__11ParticleMgrFPcUlUlUl, global
/* 803BB53C 003B847C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803BB540 003B8480  7C 08 02 A6 */	mflr r0
/* 803BB544 003B8484  90 01 00 34 */	stw r0, 0x34(r1)
/* 803BB548 003B8488  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 803BB54C 003B848C  7C 7F 1B 78 */	mr r31, r3
/* 803BB550 003B8490  3C 60 80 49 */	lis r3, lbl_80495BC8@ha
/* 803BB554 003B8494  7C 99 23 78 */	mr r25, r4
/* 803BB558 003B8498  7C BA 2B 78 */	mr r26, r5
/* 803BB55C 003B849C  7C DB 33 78 */	mr r27, r6
/* 803BB560 003B84A0  3B C3 5B C8 */	addi r30, r3, lbl_80495BC8@l
/* 803BB564 003B84A4  80 1F 00 A0 */	lwz r0, 0xa0(r31)
/* 803BB568 003B84A8  28 00 00 00 */	cmplwi r0, 0
/* 803BB56C 003B84AC  40 82 00 18 */	bne .L_803BB584
/* 803BB570 003B84B0  38 7E 00 24 */	addi r3, r30, 0x24
/* 803BB574 003B84B4  38 BE 00 40 */	addi r5, r30, 0x40
/* 803BB578 003B84B8  38 80 00 D1 */	li r4, 0xd1
/* 803BB57C 003B84BC  4C C6 31 82 */	crclr 6
/* 803BB580 003B84C0  4B C6 F0 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803BB584:
/* 803BB584 003B84C4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BB588 003B84C8  38 9E 00 0C */	addi r4, r30, 0xc
/* 803BB58C 003B84CC  80 BF 00 A0 */	lwz r5, 0xa0(r31)
/* 803BB590 003B84D0  48 06 7D CD */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803BB594 003B84D4  83 AD 88 2C */	lwz r29, sCurrentHeap__7JKRHeap@sda21(r13)
/* 803BB598 003B84D8  80 7F 00 A0 */	lwz r3, 0xa0(r31)
/* 803BB59C 003B84DC  4B C6 80 09 */	bl becomeCurrentHeap__7JKRHeapFv
/* 803BB5A0 003B84E0  38 00 00 00 */	li r0, 0
/* 803BB5A4 003B84E4  7F 23 CB 78 */	mr r3, r25
/* 803BB5A8 003B84E8  90 01 00 08 */	stw r0, 8(r1)
/* 803BB5AC 003B84EC  38 80 00 00 */	li r4, 0
/* 803BB5B0 003B84F0  38 A0 00 00 */	li r5, 0
/* 803BB5B4 003B84F4  38 C0 00 00 */	li r6, 0
/* 803BB5B8 003B84F8  38 E0 00 00 */	li r7, 0
/* 803BB5BC 003B84FC  39 00 00 01 */	li r8, 1
/* 803BB5C0 003B8500  39 20 00 00 */	li r9, 0
/* 803BB5C4 003B8504  39 40 00 00 */	li r10, 0
/* 803BB5C8 003B8508  4B C6 3B C1 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 803BB5CC 003B850C  7C 7C 1B 79 */	or. r28, r3, r3
/* 803BB5D0 003B8510  40 82 00 1C */	bne .L_803BB5EC
/* 803BB5D4 003B8514  7F 26 CB 78 */	mr r6, r25
/* 803BB5D8 003B8518  38 7E 00 24 */	addi r3, r30, 0x24
/* 803BB5DC 003B851C  38 BE 00 60 */	addi r5, r30, 0x60
/* 803BB5E0 003B8520  38 80 00 DF */	li r4, 0xdf
/* 803BB5E4 003B8524  4C C6 31 82 */	crclr 6
/* 803BB5E8 003B8528  4B C6 F0 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803BB5EC:
/* 803BB5EC 003B852C  7F A3 EB 78 */	mr r3, r29
/* 803BB5F0 003B8530  4B C6 7F B5 */	bl becomeCurrentHeap__7JKRHeapFv
/* 803BB5F4 003B8534  80 9F 00 A0 */	lwz r4, 0xa0(r31)
/* 803BB5F8 003B8538  38 60 00 14 */	li r3, 0x14
/* 803BB5FC 003B853C  38 A0 00 00 */	li r5, 0
/* 803BB600 003B8540  4B C6 89 41 */	bl __nw__FUlP7JKRHeapi
/* 803BB604 003B8544  7C 60 1B 79 */	or. r0, r3, r3
/* 803BB608 003B8548  41 82 00 14 */	beq .L_803BB61C
/* 803BB60C 003B854C  80 BF 00 A0 */	lwz r5, 0xa0(r31)
/* 803BB610 003B8550  7F 84 E3 78 */	mr r4, r28
/* 803BB614 003B8554  4B CD CE BD */	bl __ct__18JPAResourceManagerFPCvP7JKRHeap
/* 803BB618 003B8558  7C 60 1B 78 */	mr r0, r3
.L_803BB61C:
/* 803BB61C 003B855C  90 1F 00 9C */	stw r0, 0x9c(r31)
/* 803BB620 003B8560  38 60 00 30 */	li r3, 0x30
/* 803BB624 003B8564  38 A0 00 00 */	li r5, 0
/* 803BB628 003B8568  80 9F 00 A0 */	lwz r4, 0xa0(r31)
/* 803BB62C 003B856C  4B C6 89 15 */	bl __nw__FUlP7JKRHeapi
/* 803BB630 003B8570  7C 60 1B 79 */	or. r0, r3, r3
/* 803BB634 003B8574  41 82 00 20 */	beq .L_803BB654
/* 803BB638 003B8578  80 DF 00 A0 */	lwz r6, 0xa0(r31)
/* 803BB63C 003B857C  7F 44 D3 78 */	mr r4, r26
/* 803BB640 003B8580  7F 65 DB 78 */	mr r5, r27
/* 803BB644 003B8584  38 E0 00 09 */	li r7, 9
/* 803BB648 003B8588  39 00 00 08 */	li r8, 8
/* 803BB64C 003B858C  4B CD 4E ED */	bl __ct__17JPAEmitterManagerFUlUlP7JKRHeapUcUc
/* 803BB650 003B8590  7C 60 1B 78 */	mr r0, r3
.L_803BB654:
/* 803BB654 003B8594  90 1F 00 98 */	stw r0, 0x98(r31)
/* 803BB658 003B8598  38 A0 00 00 */	li r5, 0
/* 803BB65C 003B859C  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 803BB660 003B85A0  80 9F 00 9C */	lwz r4, 0x9c(r31)
/* 803BB664 003B85A4  4B CD 57 09 */	bl entryResourceManager__17JPAEmitterManagerFP18JPAResourceManagerUc
/* 803BB668 003B85A8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BB66C 003B85AC  38 9E 00 0C */	addi r4, r30, 0xc
/* 803BB670 003B85B0  48 06 7C F5 */	bl heapStatusEnd__6SystemFPc
/* 803BB674 003B85B4  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 803BB678 003B85B8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803BB67C 003B85BC  7C 08 03 A6 */	mtlr r0
/* 803BB680 003B85C0  38 21 00 30 */	addi r1, r1, 0x30
/* 803BB684 003B85C4  4E 80 00 20 */	blr 
.endfn createMgr__11ParticleMgrFPcUlUlUl

.fn Instance_TPkEffectMgr__11ParticleMgrFv, global
/* 803BB688 003B85C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB68C 003B85CC  7C 08 02 A6 */	mflr r0
/* 803BB690 003B85D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB694 003B85D4  48 00 99 01 */	bl globalInstance__Q23efx12TPkEffectMgrFv
/* 803BB698 003B85D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB69C 003B85DC  7C 08 03 A6 */	mtlr r0
/* 803BB6A0 003B85E0  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB6A4 003B85E4  4E 80 00 20 */	blr 
.endfn Instance_TPkEffectMgr__11ParticleMgrFv

.fn deleteInstance_TPkEffectMgr__11ParticleMgrFv, global
/* 803BB6A8 003B85E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB6AC 003B85EC  7C 08 02 A6 */	mflr r0
/* 803BB6B0 003B85F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB6B4 003B85F4  48 00 99 05 */	bl deleteInstance__Q23efx12TPkEffectMgrFv
/* 803BB6B8 003B85F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB6BC 003B85FC  7C 08 03 A6 */	mtlr r0
/* 803BB6C0 003B8600  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB6C4 003B8604  4E 80 00 20 */	blr 
.endfn deleteInstance_TPkEffectMgr__11ParticleMgrFv

.fn beginEntryModelEffect__11ParticleMgrFv, global
/* 803BB6C8 003B8608  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB6CC 003B860C  7C 08 02 A6 */	mflr r0
/* 803BB6D0 003B8610  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB6D4 003B8614  80 0D 88 2C */	lwz r0, sCurrentHeap__7JKRHeap@sda21(r13)
/* 803BB6D8 003B8618  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 803BB6DC 003B861C  80 63 00 A0 */	lwz r3, 0xa0(r3)
/* 803BB6E0 003B8620  4B C6 7E C5 */	bl becomeCurrentHeap__7JKRHeapFv
/* 803BB6E4 003B8624  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB6E8 003B8628  7C 08 03 A6 */	mtlr r0
/* 803BB6EC 003B862C  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB6F0 003B8630  4E 80 00 20 */	blr 
.endfn beginEntryModelEffect__11ParticleMgrFv

.fn endEntryModelEffect__11ParticleMgrFv, global
/* 803BB6F4 003B8634  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB6F8 003B8638  7C 08 02 A6 */	mflr r0
/* 803BB6FC 003B863C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB700 003B8640  80 63 00 A4 */	lwz r3, 0xa4(r3)
/* 803BB704 003B8644  4B C6 7E A1 */	bl becomeCurrentHeap__7JKRHeapFv
/* 803BB708 003B8648  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB70C 003B864C  7C 08 03 A6 */	mtlr r0
/* 803BB710 003B8650  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB714 003B8654  4E 80 00 20 */	blr 
.endfn endEntryModelEffect__11ParticleMgrFv

.fn start__11ParticleMgrFv, global
/* 803BB718 003B8658  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB71C 003B865C  7C 08 02 A6 */	mflr r0
/* 803BB720 003B8660  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB724 003B8664  80 6D 9A 50 */	lwz r3, pkEffectMgr@sda21(r13)
/* 803BB728 003B8668  48 00 AE F9 */	bl startMgr__Q23efx12TPkEffectMgrFv
/* 803BB72C 003B866C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB730 003B8670  7C 08 03 A6 */	mtlr r0
/* 803BB734 003B8674  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB738 003B8678  4E 80 00 20 */	blr 
.endfn start__11ParticleMgrFv

.fn reset__11ParticleMgrFv, global
/* 803BB73C 003B867C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB740 003B8680  7C 08 02 A6 */	mflr r0
/* 803BB744 003B8684  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB748 003B8688  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BB74C 003B868C  7C 7F 1B 78 */	mr r31, r3
/* 803BB750 003B8690  80 0D 9A 50 */	lwz r0, pkEffectMgr@sda21(r13)
/* 803BB754 003B8694  28 00 00 00 */	cmplwi r0, 0
/* 803BB758 003B8698  41 82 00 0C */	beq .L_803BB764
/* 803BB75C 003B869C  7C 03 03 78 */	mr r3, r0
/* 803BB760 003B86A0  48 00 AF 59 */	bl exitMgr__Q23efx12TPkEffectMgrFv
.L_803BB764:
/* 803BB764 003B86A4  38 7F 00 1C */	addi r3, r31, 0x1c
/* 803BB768 003B86A8  81 9F 00 1C */	lwz r12, 0x1c(r31)
/* 803BB76C 003B86AC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 803BB770 003B86B0  7D 89 03 A6 */	mtctr r12
/* 803BB774 003B86B4  4E 80 04 21 */	bctrl 
/* 803BB778 003B86B8  38 00 00 00 */	li r0, 0
/* 803BB77C 003B86BC  90 1F 00 18 */	stw r0, 0x18(r31)
/* 803BB780 003B86C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB784 003B86C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BB788 003B86C8  7C 08 03 A6 */	mtlr r0
/* 803BB78C 003B86CC  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB790 003B86D0  4E 80 00 20 */	blr 
.endfn reset__11ParticleMgrFv

.fn killAll__11ParticleMgrFv, global
/* 803BB794 003B86D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB798 003B86D8  7C 08 02 A6 */	mflr r0
/* 803BB79C 003B86DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB7A0 003B86E0  80 63 00 98 */	lwz r3, 0x98(r3)
/* 803BB7A4 003B86E4  4B CD 54 A5 */	bl forceDeleteAllEmitter__17JPAEmitterManagerFv
/* 803BB7A8 003B86E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB7AC 003B86EC  7C 08 03 A6 */	mtlr r0
/* 803BB7B0 003B86F0  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB7B4 003B86F4  4E 80 00 20 */	blr 
.endfn killAll__11ParticleMgrFv

.fn update__11ParticleMgrFv, global
/* 803BB7B8 003B86F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB7BC 003B86FC  7C 08 02 A6 */	mflr r0
/* 803BB7C0 003B8700  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB7C4 003B8704  80 63 00 98 */	lwz r3, 0x98(r3)
/* 803BB7C8 003B8708  4B CD 51 D1 */	bl calc__17JPAEmitterManagerFv
/* 803BB7CC 003B870C  80 6D 9A 50 */	lwz r3, pkEffectMgr@sda21(r13)
/* 803BB7D0 003B8710  48 00 AF BD */	bl resetContextS__Q23efx12TPkEffectMgrFv
/* 803BB7D4 003B8714  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB7D8 003B8718  7C 08 03 A6 */	mtlr r0
/* 803BB7DC 003B871C  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB7E0 003B8720  4E 80 00 20 */	blr 
.endfn update__11ParticleMgrFv

.fn setXfb__11ParticleMgrFPC7ResTIMG, global
/* 803BB7E4 003B8724  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB7E8 003B8728  7C 08 02 A6 */	mflr r0
/* 803BB7EC 003B872C  3C A0 80 49 */	lis r5, lbl_80495C4C@ha
/* 803BB7F0 003B8730  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB7F4 003B8734  38 A5 5C 4C */	addi r5, r5, lbl_80495C4C@l
/* 803BB7F8 003B8738  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 803BB7FC 003B873C  4B CD CD 6D */	bl swapTexture__18JPAResourceManagerFPC7ResTIMGPCc
/* 803BB800 003B8740  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB804 003B8744  7C 08 03 A6 */	mtlr r0
/* 803BB808 003B8748  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB80C 003B874C  4E 80 00 20 */	blr 
.endfn setXfb__11ParticleMgrFPC7ResTIMG

.fn draw__11ParticleMgrFP8ViewportUc, global
/* 803BB810 003B8750  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 803BB814 003B8754  7C 08 02 A6 */	mflr r0
/* 803BB818 003B8758  90 01 00 94 */	stw r0, 0x94(r1)
/* 803BB81C 003B875C  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 803BB820 003B8760  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 803BB824 003B8764  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 803BB828 003B8768  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 803BB82C 003B876C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 803BB830 003B8770  93 C1 00 68 */	stw r30, 0x68(r1)
/* 803BB834 003B8774  80 C4 00 44 */	lwz r6, 0x44(r4)
/* 803BB838 003B8778  7C 7E 1B 78 */	mr r30, r3
/* 803BB83C 003B877C  7C 83 23 78 */	mr r3, r4
/* 803BB840 003B8780  7C BF 2B 78 */	mr r31, r5
/* 803BB844 003B8784  C3 C6 00 2C */	lfs f30, 0x2c(r6)
/* 803BB848 003B8788  38 80 00 01 */	li r4, 1
/* 803BB84C 003B878C  C3 E6 00 28 */	lfs f31, 0x28(r6)
/* 803BB850 003B8790  48 06 99 0D */	bl getMatrix__8ViewportFb
/* 803BB854 003B8794  38 81 00 08 */	addi r4, r1, 8
/* 803BB858 003B8798  4B D2 EA 75 */	bl PSMTXCopy
/* 803BB85C 003B879C  C0 62 13 90 */	lfs f3, lbl_8051F6F0@sda21(r2)
/* 803BB860 003B87A0  FC 20 F8 90 */	fmr f1, f31
/* 803BB864 003B87A4  FC 40 F0 90 */	fmr f2, f30
/* 803BB868 003B87A8  C0 82 13 94 */	lfs f4, lbl_8051F6F4@sda21(r2)
/* 803BB86C 003B87AC  FC A0 18 90 */	fmr f5, f3
/* 803BB870 003B87B0  38 61 00 38 */	addi r3, r1, 0x38
/* 803BB874 003B87B4  FC C0 18 90 */	fmr f6, f3
/* 803BB878 003B87B8  4B D2 F2 0D */	bl C_MTXLightPerspective
/* 803BB87C 003B87BC  80 7E 00 98 */	lwz r3, 0x98(r30)
/* 803BB880 003B87C0  7F E5 FB 78 */	mr r5, r31
/* 803BB884 003B87C4  38 81 00 08 */	addi r4, r1, 8
/* 803BB888 003B87C8  4B CD 51 C1 */	bl draw__17JPAEmitterManagerFPC11JPADrawInfoUc
/* 803BB88C 003B87CC  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 803BB890 003B87D0  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 803BB894 003B87D4  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 803BB898 003B87D8  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 803BB89C 003B87DC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 803BB8A0 003B87E0  80 01 00 94 */	lwz r0, 0x94(r1)
/* 803BB8A4 003B87E4  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 803BB8A8 003B87E8  7C 08 03 A6 */	mtlr r0
/* 803BB8AC 003B87EC  38 21 00 90 */	addi r1, r1, 0x90
/* 803BB8B0 003B87F0  4E 80 00 20 */	blr 
.endfn draw__11ParticleMgrFP8ViewportUc

.fn "create__11ParticleMgrFUsR10Vector3<f>Uc", global
/* 803BB8B4 003B87F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BB8B8 003B87F8  7C 08 02 A6 */	mflr r0
/* 803BB8BC 003B87FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BB8C0 003B8800  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803BB8C4 003B8804  7C DF 33 78 */	mr r31, r6
/* 803BB8C8 003B8808  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803BB8CC 003B880C  7C BE 2B 78 */	mr r30, r5
/* 803BB8D0 003B8810  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803BB8D4 003B8814  7C 9D 23 78 */	mr r29, r4
/* 803BB8D8 003B8818  93 81 00 10 */	stw r28, 0x10(r1)
/* 803BB8DC 003B881C  7C 7C 1B 78 */	mr r28, r3
/* 803BB8E0 003B8820  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 803BB8E4 003B8824  4B CD CD 61 */	bl getResUserWork__18JPAResourceManagerCFUs
/* 803BB8E8 003B8828  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 803BB8EC 003B882C  41 82 00 0C */	beq .L_803BB8F8
/* 803BB8F0 003B8830  38 C0 00 00 */	li r6, 0
/* 803BB8F4 003B8834  48 00 00 18 */	b .L_803BB90C
.L_803BB8F8:
/* 803BB8F8 003B8838  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 803BB8FC 003B883C  41 82 00 0C */	beq .L_803BB908
/* 803BB900 003B8840  38 C0 00 01 */	li r6, 1
/* 803BB904 003B8844  48 00 00 08 */	b .L_803BB90C
.L_803BB908:
/* 803BB908 003B8848  38 C0 00 02 */	li r6, 2
.L_803BB90C:
/* 803BB90C 003B884C  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 803BB910 003B8850  40 82 00 18 */	bne .L_803BB928
/* 803BB914 003B8854  80 1C 00 94 */	lwz r0, 0x94(r28)
/* 803BB918 003B8858  2C 00 00 02 */	cmpwi r0, 2
/* 803BB91C 003B885C  41 80 00 0C */	blt .L_803BB928
/* 803BB920 003B8860  38 60 00 00 */	li r3, 0
/* 803BB924 003B8864  48 00 00 38 */	b .L_803BB95C
.L_803BB928:
/* 803BB928 003B8868  80 7C 00 98 */	lwz r3, 0x98(r28)
/* 803BB92C 003B886C  7F C4 F3 78 */	mr r4, r30
/* 803BB930 003B8870  7F A5 EB 78 */	mr r5, r29
/* 803BB934 003B8874  7F E7 FB 78 */	mr r7, r31
/* 803BB938 003B8878  39 00 00 00 */	li r8, 0
/* 803BB93C 003B887C  39 20 00 00 */	li r9, 0
/* 803BB940 003B8880  4B CD 4F 7D */	bl "createSimpleEmitterID__17JPAEmitterManagerFRCQ29JGeometry8TVec3<f>UsUcUcP18JPAEmitterCallBackP19JPAParticleCallBack"
/* 803BB944 003B8884  7C 60 1B 78 */	mr r0, r3
/* 803BB948 003B8888  7F 83 E3 78 */	mr r3, r28
/* 803BB94C 003B888C  7C 1F 03 78 */	mr r31, r0
/* 803BB950 003B8890  7F E4 FB 78 */	mr r4, r31
/* 803BB954 003B8894  48 00 00 85 */	bl setGlobalColor__11ParticleMgrFP14JPABaseEmitter
/* 803BB958 003B8898  7F E3 FB 78 */	mr r3, r31
.L_803BB95C:
/* 803BB95C 003B889C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BB960 003B88A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803BB964 003B88A4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803BB968 003B88A8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803BB96C 003B88AC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803BB970 003B88B0  7C 08 03 A6 */	mtlr r0
/* 803BB974 003B88B4  38 21 00 20 */	addi r1, r1, 0x20
/* 803BB978 003B88B8  4E 80 00 20 */	blr 
.endfn "create__11ParticleMgrFUsR10Vector3<f>Uc"

.fn "createDemo__11ParticleMgrFUsR10Vector3<f>UcUc", global
/* 803BB97C 003B88BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BB980 003B88C0  7C 08 02 A6 */	mflr r0
/* 803BB984 003B88C4  39 00 00 00 */	li r8, 0
/* 803BB988 003B88C8  39 20 00 00 */	li r9, 0
/* 803BB98C 003B88CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BB990 003B88D0  7C 80 23 78 */	mr r0, r4
/* 803BB994 003B88D4  7C A4 2B 78 */	mr r4, r5
/* 803BB998 003B88D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BB99C 003B88DC  7C 7F 1B 78 */	mr r31, r3
/* 803BB9A0 003B88E0  7C 05 03 78 */	mr r5, r0
/* 803BB9A4 003B88E4  80 63 00 98 */	lwz r3, 0x98(r3)
/* 803BB9A8 003B88E8  4B CD 4F 15 */	bl "createSimpleEmitterID__17JPAEmitterManagerFRCQ29JGeometry8TVec3<f>UsUcUcP18JPAEmitterCallBackP19JPAParticleCallBack"
/* 803BB9AC 003B88EC  7C 60 1B 78 */	mr r0, r3
/* 803BB9B0 003B88F0  7F E3 FB 78 */	mr r3, r31
/* 803BB9B4 003B88F4  7C 1F 03 78 */	mr r31, r0
/* 803BB9B8 003B88F8  7F E4 FB 78 */	mr r4, r31
/* 803BB9BC 003B88FC  48 00 00 1D */	bl setGlobalColor__11ParticleMgrFP14JPABaseEmitter
/* 803BB9C0 003B8900  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BB9C4 003B8904  7F E3 FB 78 */	mr r3, r31
/* 803BB9C8 003B8908  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BB9CC 003B890C  7C 08 03 A6 */	mtlr r0
/* 803BB9D0 003B8910  38 21 00 10 */	addi r1, r1, 0x10
/* 803BB9D4 003B8914  4E 80 00 20 */	blr 
.endfn "createDemo__11ParticleMgrFUsR10Vector3<f>UcUc"

.fn setGlobalColor__11ParticleMgrFP14JPABaseEmitter, global
/* 803BB9D8 003B8918  28 04 00 00 */	cmplwi r4, 0
/* 803BB9DC 003B891C  4D 82 00 20 */	beqlr 
/* 803BB9E0 003B8920  80 A4 00 E8 */	lwz r5, 0xe8(r4)
/* 803BB9E4 003B8924  80 E3 00 18 */	lwz r7, 0x18(r3)
/* 803BB9E8 003B8928  80 65 00 2C */	lwz r3, 0x2c(r5)
/* 803BB9EC 003B892C  28 07 00 00 */	cmplwi r7, 0
/* 803BB9F0 003B8930  80 63 00 00 */	lwz r3, 0(r3)
/* 803BB9F4 003B8934  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803BB9F8 003B8938  4D 82 00 20 */	beqlr 
/* 803BB9FC 003B893C  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 803BBA00 003B8940  4D 82 00 20 */	beqlr 
/* 803BBA04 003B8944  80 A7 00 50 */	lwz r5, 0x50(r7)
/* 803BBA08 003B8948  88 07 00 30 */	lbz r0, 0x30(r7)
/* 803BBA0C 003B894C  88 65 00 34 */	lbz r3, 0x34(r5)
/* 803BBA10 003B8950  88 C7 00 31 */	lbz r6, 0x31(r7)
/* 803BBA14 003B8954  7C 03 02 14 */	add r0, r3, r0
/* 803BBA18 003B8958  88 67 00 32 */	lbz r3, 0x32(r7)
/* 803BBA1C 003B895C  54 07 08 3C */	slwi r7, r0, 1
/* 803BBA20 003B8960  88 05 00 35 */	lbz r0, 0x35(r5)
/* 803BBA24 003B8964  2C 07 00 FF */	cmpwi r7, 0xff
/* 803BBA28 003B8968  88 A5 00 36 */	lbz r5, 0x36(r5)
/* 803BBA2C 003B896C  40 81 00 08 */	ble .L_803BBA34
/* 803BBA30 003B8970  38 E0 00 FF */	li r7, 0xff
.L_803BBA34:
/* 803BBA34 003B8974  7C 00 32 14 */	add r0, r0, r6
/* 803BBA38 003B8978  54 E6 06 3E */	clrlwi r6, r7, 0x18
/* 803BBA3C 003B897C  54 07 08 3C */	slwi r7, r0, 1
/* 803BBA40 003B8980  2C 07 00 FF */	cmpwi r7, 0xff
/* 803BBA44 003B8984  40 81 00 08 */	ble .L_803BBA4C
/* 803BBA48 003B8988  38 E0 00 FF */	li r7, 0xff
.L_803BBA4C:
/* 803BBA4C 003B898C  7C 05 1A 14 */	add r0, r5, r3
/* 803BBA50 003B8990  54 E3 06 3E */	clrlwi r3, r7, 0x18
/* 803BBA54 003B8994  54 00 08 3C */	slwi r0, r0, 1
/* 803BBA58 003B8998  2C 00 00 FF */	cmpwi r0, 0xff
/* 803BBA5C 003B899C  40 81 00 08 */	ble .L_803BBA64
/* 803BBA60 003B89A0  38 00 00 FF */	li r0, 0xff
.L_803BBA64:
/* 803BBA64 003B89A4  98 C4 00 B8 */	stb r6, 0xb8(r4)
/* 803BBA68 003B89A8  98 64 00 B9 */	stb r3, 0xb9(r4)
/* 803BBA6C 003B89AC  98 04 00 BA */	stb r0, 0xba(r4)
/* 803BBA70 003B89B0  98 C4 00 BC */	stb r6, 0xbc(r4)
/* 803BBA74 003B89B4  98 64 00 BD */	stb r3, 0xbd(r4)
/* 803BBA78 003B89B8  98 04 00 BE */	stb r0, 0xbe(r4)
/* 803BBA7C 003B89BC  4E 80 00 20 */	blr 
.endfn setGlobalColor__11ParticleMgrFP14JPABaseEmitter

.fn forceKill__11ParticleMgrFP14JPABaseEmitter, global
/* 803BBA80 003B89C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BBA84 003B89C4  7C 08 02 A6 */	mflr r0
/* 803BBA88 003B89C8  28 04 00 00 */	cmplwi r4, 0
/* 803BBA8C 003B89CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BBA90 003B89D0  41 82 00 0C */	beq .L_803BBA9C
/* 803BBA94 003B89D4  80 63 00 98 */	lwz r3, 0x98(r3)
/* 803BBA98 003B89D8  4B CD 52 69 */	bl forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter
.L_803BBA9C:
/* 803BBA9C 003B89DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BBAA0 003B89E0  7C 08 03 A6 */	mtlr r0
/* 803BBAA4 003B89E4  38 21 00 10 */	addi r1, r1, 0x10
/* 803BBAA8 003B89E8  4E 80 00 20 */	blr 
.endfn forceKill__11ParticleMgrFP14JPABaseEmitter

.fn fade__11ParticleMgrFP14JPABaseEmitter, global
/* 803BBAAC 003B89EC  28 04 00 00 */	cmplwi r4, 0
/* 803BBAB0 003B89F0  4D 82 00 20 */	beqlr 
/* 803BBAB4 003B89F4  80 64 00 F4 */	lwz r3, 0xf4(r4)
/* 803BBAB8 003B89F8  38 00 00 01 */	li r0, 1
/* 803BBABC 003B89FC  60 63 00 01 */	ori r3, r3, 1
/* 803BBAC0 003B8A00  90 64 00 F4 */	stw r3, 0xf4(r4)
/* 803BBAC4 003B8A04  90 04 00 24 */	stw r0, 0x24(r4)
/* 803BBAC8 003B8A08  80 04 00 F4 */	lwz r0, 0xf4(r4)
/* 803BBACC 003B8A0C  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 803BBAD0 003B8A10  90 04 00 F4 */	stw r0, 0xf4(r4)
/* 803BBAD4 003B8A14  4E 80 00 20 */	blr 
.endfn fade__11ParticleMgrFP14JPABaseEmitter

.fn setDemoResourceManager__11ParticleMgrFP18JPAResourceManager, global
/* 803BBAD8 003B8A18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BBADC 003B8A1C  7C 08 02 A6 */	mflr r0
/* 803BBAE0 003B8A20  38 A0 00 07 */	li r5, 7
/* 803BBAE4 003B8A24  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BBAE8 003B8A28  80 63 00 98 */	lwz r3, 0x98(r3)
/* 803BBAEC 003B8A2C  4B CD 52 81 */	bl entryResourceManager__17JPAEmitterManagerFP18JPAResourceManagerUc
/* 803BBAF0 003B8A30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BBAF4 003B8A34  7C 08 03 A6 */	mtlr r0
/* 803BBAF8 003B8A38  38 21 00 10 */	addi r1, r1, 0x10
/* 803BBAFC 003B8A3C  4E 80 00 20 */	blr 
.endfn setDemoResourceManager__11ParticleMgrFP18JPAResourceManager

.fn clearDemoResourceManager__11ParticleMgrFv, global
/* 803BBB00 003B8A40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BBB04 003B8A44  7C 08 02 A6 */	mflr r0
/* 803BBB08 003B8A48  38 80 00 07 */	li r4, 7
/* 803BBB0C 003B8A4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BBB10 003B8A50  80 63 00 98 */	lwz r3, 0x98(r3)
/* 803BBB14 003B8A54  4B CD 52 69 */	bl clearResourceManager__17JPAEmitterManagerFUc
/* 803BBB18 003B8A58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BBB1C 003B8A5C  7C 08 03 A6 */	mtlr r0
/* 803BBB20 003B8A60  38 21 00 10 */	addi r1, r1, 0x10
/* 803BBB24 003B8A64  4E 80 00 20 */	blr 
.endfn clearDemoResourceManager__11ParticleMgrFv

.fn setViewport__11ParticleMgrFR8Graphics, global
/* 803BBB28 003B8A68  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BBB2C 003B8A6C  7C 08 02 A6 */	mflr r0
/* 803BBB30 003B8A70  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BBB34 003B8A74  38 00 00 00 */	li r0, 0
/* 803BBB38 003B8A78  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803BBB3C 003B8A7C  7C 9C 23 78 */	mr r28, r4
/* 803BBB40 003B8A80  7C 7B 1B 78 */	mr r27, r3
/* 803BBB44 003B8A84  83 E4 02 64 */	lwz r31, 0x264(r4)
/* 803BBB48 003B8A88  2C 1F 00 00 */	cmpwi r31, 0
/* 803BBB4C 003B8A8C  41 80 00 10 */	blt .L_803BBB5C
/* 803BBB50 003B8A90  2C 1F 00 04 */	cmpwi r31, 4
/* 803BBB54 003B8A94  40 80 00 08 */	bge .L_803BBB5C
/* 803BBB58 003B8A98  38 00 00 01 */	li r0, 1
.L_803BBB5C:
/* 803BBB5C 003B8A9C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803BBB60 003B8AA0  40 82 00 20 */	bne .L_803BBB80
/* 803BBB64 003B8AA4  3C 60 80 49 */	lis r3, lbl_80495BEC@ha
/* 803BBB68 003B8AA8  3C A0 80 49 */	lis r5, lbl_80495BFC@ha
/* 803BBB6C 003B8AAC  38 63 5B EC */	addi r3, r3, lbl_80495BEC@l
/* 803BBB70 003B8AB0  38 80 01 F8 */	li r4, 0x1f8
/* 803BBB74 003B8AB4  38 A5 5B FC */	addi r5, r5, lbl_80495BFC@l
/* 803BBB78 003B8AB8  4C C6 31 82 */	crclr 6
/* 803BBB7C 003B8ABC  4B C6 EA C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803BBB80:
/* 803BBB80 003B8AC0  93 FB 00 80 */	stw r31, 0x80(r27)
/* 803BBB84 003B8AC4  7F 7E DB 78 */	mr r30, r27
/* 803BBB88 003B8AC8  3B A0 00 00 */	li r29, 0
/* 803BBB8C 003B8ACC  48 00 00 1C */	b .L_803BBBA8
.L_803BBB90:
/* 803BBB90 003B8AD0  7F 83 E3 78 */	mr r3, r28
/* 803BBB94 003B8AD4  7F A4 EB 78 */	mr r4, r29
/* 803BBB98 003B8AD8  48 06 9A 59 */	bl getViewport__8GraphicsFi
/* 803BBB9C 003B8ADC  90 7E 00 84 */	stw r3, 0x84(r30)
/* 803BBBA0 003B8AE0  3B DE 00 04 */	addi r30, r30, 4
/* 803BBBA4 003B8AE4  3B BD 00 01 */	addi r29, r29, 1
.L_803BBBA8:
/* 803BBBA8 003B8AE8  7C 1D F8 00 */	cmpw r29, r31
/* 803BBBAC 003B8AEC  41 80 FF E4 */	blt .L_803BBB90
/* 803BBBB0 003B8AF0  7F 83 E3 78 */	mr r3, r28
/* 803BBBB4 003B8AF4  48 06 96 19 */	bl getNumActiveViewports__8GraphicsFv
/* 803BBBB8 003B8AF8  90 7B 00 94 */	stw r3, 0x94(r27)
/* 803BBBBC 003B8AFC  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803BBBC0 003B8B00  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BBBC4 003B8B04  7C 08 03 A6 */	mtlr r0
/* 803BBBC8 003B8B08  38 21 00 20 */	addi r1, r1, 0x20
/* 803BBBCC 003B8B0C  4E 80 00 20 */	blr 
.endfn setViewport__11ParticleMgrFR8Graphics

.fn "cullByResFlg__11ParticleMgrFR10Vector3<f>Us", global
/* 803BBBD0 003B8B10  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803BBBD4 003B8B14  7C 08 02 A6 */	mflr r0
/* 803BBBD8 003B8B18  90 01 00 34 */	stw r0, 0x34(r1)
/* 803BBBDC 003B8B1C  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 803BBBE0 003B8B20  7C 7B 1B 78 */	mr r27, r3
/* 803BBBE4 003B8B24  7C 9C 23 78 */	mr r28, r4
/* 803BBBE8 003B8B28  88 0D 9A 1C */	lbz r0, disableCulling__11ParticleMgr@sda21(r13)
/* 803BBBEC 003B8B2C  28 00 00 00 */	cmplwi r0, 0
/* 803BBBF0 003B8B30  41 82 00 0C */	beq .L_803BBBFC
/* 803BBBF4 003B8B34  38 60 00 00 */	li r3, 0
/* 803BBBF8 003B8B38  48 00 00 D8 */	b .L_803BBCD0
.L_803BBBFC:
/* 803BBBFC 003B8B3C  80 7B 00 9C */	lwz r3, 0x9c(r27)
/* 803BBC00 003B8B40  7C A4 2B 78 */	mr r4, r5
/* 803BBC04 003B8B44  4B CD CA 41 */	bl getResUserWork__18JPAResourceManagerCFUs
/* 803BBC08 003B8B48  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 803BBC0C 003B8B4C  41 82 00 1C */	beq .L_803BBC28
/* 803BBC10 003B8B50  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 803BBC14 003B8B54  41 82 00 0C */	beq .L_803BBC20
/* 803BBC18 003B8B58  C0 2D 86 60 */	lfs f1, mClipRadiusL__11ParticleMgr@sda21(r13)
/* 803BBC1C 003B8B5C  48 00 00 24 */	b .L_803BBC40
.L_803BBC20:
/* 803BBC20 003B8B60  C0 2D 86 5C */	lfs f1, mClipRadiusM__11ParticleMgr@sda21(r13)
/* 803BBC24 003B8B64  48 00 00 1C */	b .L_803BBC40
.L_803BBC28:
/* 803BBC28 003B8B68  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 803BBC2C 003B8B6C  41 82 00 0C */	beq .L_803BBC38
/* 803BBC30 003B8B70  C0 2D 86 58 */	lfs f1, mClipRadiusS__11ParticleMgr@sda21(r13)
/* 803BBC34 003B8B74  48 00 00 0C */	b .L_803BBC40
.L_803BBC38:
/* 803BBC38 003B8B78  38 60 00 00 */	li r3, 0
/* 803BBC3C 003B8B7C  48 00 00 94 */	b .L_803BBCD0
.L_803BBC40:
/* 803BBC40 003B8B80  C0 1C 00 00 */	lfs f0, 0(r28)
/* 803BBC44 003B8B84  88 0D 9A 1C */	lbz r0, disableCulling__11ParticleMgr@sda21(r13)
/* 803BBC48 003B8B88  D0 01 00 08 */	stfs f0, 8(r1)
/* 803BBC4C 003B8B8C  28 00 00 00 */	cmplwi r0, 0
/* 803BBC50 003B8B90  C0 1C 00 04 */	lfs f0, 4(r28)
/* 803BBC54 003B8B94  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803BBC58 003B8B98  C0 1C 00 08 */	lfs f0, 8(r28)
/* 803BBC5C 003B8B9C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803BBC60 003B8BA0  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 803BBC64 003B8BA4  41 82 00 0C */	beq .L_803BBC70
/* 803BBC68 003B8BA8  38 60 00 00 */	li r3, 0
/* 803BBC6C 003B8BAC  48 00 00 64 */	b .L_803BBCD0
.L_803BBC70:
/* 803BBC70 003B8BB0  3B C0 00 00 */	li r30, 0
/* 803BBC74 003B8BB4  7F 7C DB 78 */	mr r28, r27
/* 803BBC78 003B8BB8  7F DF F3 78 */	mr r31, r30
/* 803BBC7C 003B8BBC  48 00 00 3C */	b .L_803BBCB8
.L_803BBC80:
/* 803BBC80 003B8BC0  80 7C 00 84 */	lwz r3, 0x84(r28)
/* 803BBC84 003B8BC4  83 A3 00 44 */	lwz r29, 0x44(r3)
/* 803BBC88 003B8BC8  48 06 95 B9 */	bl viewable__8ViewportFv
/* 803BBC8C 003B8BCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BBC90 003B8BD0  41 82 00 20 */	beq .L_803BBCB0
/* 803BBC94 003B8BD4  7F A3 EB 78 */	mr r3, r29
/* 803BBC98 003B8BD8  38 81 00 08 */	addi r4, r1, 8
/* 803BBC9C 003B8BDC  48 05 E4 F5 */	bl isVisible__9CullPlaneFRQ23Sys6Sphere
/* 803BBCA0 003B8BE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BBCA4 003B8BE4  41 82 00 0C */	beq .L_803BBCB0
/* 803BBCA8 003B8BE8  3B C0 00 01 */	li r30, 1
/* 803BBCAC 003B8BEC  48 00 00 18 */	b .L_803BBCC4
.L_803BBCB0:
/* 803BBCB0 003B8BF0  3B 9C 00 04 */	addi r28, r28, 4
/* 803BBCB4 003B8BF4  3B FF 00 01 */	addi r31, r31, 1
.L_803BBCB8:
/* 803BBCB8 003B8BF8  80 1B 00 80 */	lwz r0, 0x80(r27)
/* 803BBCBC 003B8BFC  7C 1F 00 00 */	cmpw r31, r0
/* 803BBCC0 003B8C00  41 80 FF C0 */	blt .L_803BBC80
.L_803BBCC4:
/* 803BBCC4 003B8C04  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 803BBCC8 003B8C08  7C 00 00 34 */	cntlzw r0, r0
/* 803BBCCC 003B8C0C  54 03 D9 7E */	srwi r3, r0, 5
.L_803BBCD0:
/* 803BBCD0 003B8C10  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 803BBCD4 003B8C14  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803BBCD8 003B8C18  7C 08 03 A6 */	mtlr r0
/* 803BBCDC 003B8C1C  38 21 00 30 */	addi r1, r1, 0x30
/* 803BBCE0 003B8C20  4E 80 00 20 */	blr 
.endfn "cullByResFlg__11ParticleMgrFR10Vector3<f>Us"

.fn cullByResFlg__11ParticleMgrFP14JPABaseEmitter, global
/* 803BBCE4 003B8C24  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803BBCE8 003B8C28  7C 08 02 A6 */	mflr r0
/* 803BBCEC 003B8C2C  90 01 00 44 */	stw r0, 0x44(r1)
/* 803BBCF0 003B8C30  BF 41 00 28 */	stmw r26, 0x28(r1)
/* 803BBCF4 003B8C34  7C 7E 1B 78 */	mr r30, r3
/* 803BBCF8 003B8C38  7C 9F 23 78 */	mr r31, r4
/* 803BBCFC 003B8C3C  88 0D 9A 1C */	lbz r0, disableCulling__11ParticleMgr@sda21(r13)
/* 803BBD00 003B8C40  28 00 00 00 */	cmplwi r0, 0
/* 803BBD04 003B8C44  41 82 00 0C */	beq .L_803BBD10
/* 803BBD08 003B8C48  38 60 00 00 */	li r3, 0
/* 803BBD0C 003B8C4C  48 00 01 3C */	b .L_803BBE48
.L_803BBD10:
/* 803BBD10 003B8C50  80 7F 00 E8 */	lwz r3, 0xe8(r31)
/* 803BBD14 003B8C54  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 803BBD18 003B8C58  80 63 00 00 */	lwz r3, 0(r3)
/* 803BBD1C 003B8C5C  80 63 00 0C */	lwz r3, 0xc(r3)
/* 803BBD20 003B8C60  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 803BBD24 003B8C64  41 82 00 1C */	beq .L_803BBD40
/* 803BBD28 003B8C68  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 803BBD2C 003B8C6C  41 82 00 0C */	beq .L_803BBD38
/* 803BBD30 003B8C70  C0 6D 86 60 */	lfs f3, mClipRadiusL__11ParticleMgr@sda21(r13)
/* 803BBD34 003B8C74  48 00 00 24 */	b .L_803BBD58
.L_803BBD38:
/* 803BBD38 003B8C78  C0 6D 86 5C */	lfs f3, mClipRadiusM__11ParticleMgr@sda21(r13)
/* 803BBD3C 003B8C7C  48 00 00 1C */	b .L_803BBD58
.L_803BBD40:
/* 803BBD40 003B8C80  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 803BBD44 003B8C84  41 82 00 0C */	beq .L_803BBD50
/* 803BBD48 003B8C88  C0 6D 86 58 */	lfs f3, mClipRadiusS__11ParticleMgr@sda21(r13)
/* 803BBD4C 003B8C8C  48 00 00 0C */	b .L_803BBD58
.L_803BBD50:
/* 803BBD50 003B8C90  38 60 00 00 */	li r3, 0
/* 803BBD54 003B8C94  48 00 00 F4 */	b .L_803BBE48
.L_803BBD58:
/* 803BBD58 003B8C98  88 0D 9A 1C */	lbz r0, disableCulling__11ParticleMgr@sda21(r13)
/* 803BBD5C 003B8C9C  C0 5F 00 A4 */	lfs f2, 0xa4(r31)
/* 803BBD60 003B8CA0  C0 3F 00 A8 */	lfs f1, 0xa8(r31)
/* 803BBD64 003B8CA4  28 00 00 00 */	cmplwi r0, 0
/* 803BBD68 003B8CA8  C0 1F 00 AC */	lfs f0, 0xac(r31)
/* 803BBD6C 003B8CAC  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 803BBD70 003B8CB0  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 803BBD74 003B8CB4  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 803BBD78 003B8CB8  D0 41 00 08 */	stfs f2, 8(r1)
/* 803BBD7C 003B8CBC  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 803BBD80 003B8CC0  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803BBD84 003B8CC4  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 803BBD88 003B8CC8  41 82 00 0C */	beq .L_803BBD94
/* 803BBD8C 003B8CCC  38 00 00 00 */	li r0, 0
/* 803BBD90 003B8CD0  48 00 00 64 */	b .L_803BBDF4
.L_803BBD94:
/* 803BBD94 003B8CD4  3B 80 00 00 */	li r28, 0
/* 803BBD98 003B8CD8  7F DA F3 78 */	mr r26, r30
/* 803BBD9C 003B8CDC  7F 9D E3 78 */	mr r29, r28
/* 803BBDA0 003B8CE0  48 00 00 3C */	b .L_803BBDDC
.L_803BBDA4:
/* 803BBDA4 003B8CE4  80 7A 00 84 */	lwz r3, 0x84(r26)
/* 803BBDA8 003B8CE8  83 63 00 44 */	lwz r27, 0x44(r3)
/* 803BBDAC 003B8CEC  48 06 94 95 */	bl viewable__8ViewportFv
/* 803BBDB0 003B8CF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BBDB4 003B8CF4  41 82 00 20 */	beq .L_803BBDD4
/* 803BBDB8 003B8CF8  7F 63 DB 78 */	mr r3, r27
/* 803BBDBC 003B8CFC  38 81 00 08 */	addi r4, r1, 8
/* 803BBDC0 003B8D00  48 05 E3 D1 */	bl isVisible__9CullPlaneFRQ23Sys6Sphere
/* 803BBDC4 003B8D04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BBDC8 003B8D08  41 82 00 0C */	beq .L_803BBDD4
/* 803BBDCC 003B8D0C  3B 80 00 01 */	li r28, 1
/* 803BBDD0 003B8D10  48 00 00 18 */	b .L_803BBDE8
.L_803BBDD4:
/* 803BBDD4 003B8D14  3B 5A 00 04 */	addi r26, r26, 4
/* 803BBDD8 003B8D18  3B BD 00 01 */	addi r29, r29, 1
.L_803BBDDC:
/* 803BBDDC 003B8D1C  80 1E 00 80 */	lwz r0, 0x80(r30)
/* 803BBDE0 003B8D20  7C 1D 00 00 */	cmpw r29, r0
/* 803BBDE4 003B8D24  41 80 FF C0 */	blt .L_803BBDA4
.L_803BBDE8:
/* 803BBDE8 003B8D28  57 80 06 3E */	clrlwi r0, r28, 0x18
/* 803BBDEC 003B8D2C  7C 00 00 34 */	cntlzw r0, r0
/* 803BBDF0 003B8D30  54 00 D9 7E */	srwi r0, r0, 5
.L_803BBDF4:
/* 803BBDF4 003B8D34  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 803BBDF8 003B8D38  7C 03 00 34 */	cntlzw r3, r0
/* 803BBDFC 003B8D3C  54 60 DE 3F */	rlwinm. r0, r3, 0x1b, 0x18, 0x1f
/* 803BBE00 003B8D40  54 63 D9 7E */	srwi r3, r3, 5
/* 803BBE04 003B8D44  41 82 00 20 */	beq .L_803BBE24
/* 803BBE08 003B8D48  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 803BBE0C 003B8D4C  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 803BBE10 003B8D50  90 1F 00 F4 */	stw r0, 0xf4(r31)
/* 803BBE14 003B8D54  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 803BBE18 003B8D58  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 803BBE1C 003B8D5C  90 1F 00 F4 */	stw r0, 0xf4(r31)
/* 803BBE20 003B8D60  48 00 00 1C */	b .L_803BBE3C
.L_803BBE24:
/* 803BBE24 003B8D64  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 803BBE28 003B8D68  60 00 00 04 */	ori r0, r0, 4
/* 803BBE2C 003B8D6C  90 1F 00 F4 */	stw r0, 0xf4(r31)
/* 803BBE30 003B8D70  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 803BBE34 003B8D74  60 00 00 01 */	ori r0, r0, 1
/* 803BBE38 003B8D78  90 1F 00 F4 */	stw r0, 0xf4(r31)
.L_803BBE3C:
/* 803BBE3C 003B8D7C  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 803BBE40 003B8D80  7C 00 00 34 */	cntlzw r0, r0
/* 803BBE44 003B8D84  54 03 D9 7E */	srwi r3, r0, 5
.L_803BBE48:
/* 803BBE48 003B8D88  BB 41 00 28 */	lmw r26, 0x28(r1)
/* 803BBE4C 003B8D8C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803BBE50 003B8D90  7C 08 03 A6 */	mtlr r0
/* 803BBE54 003B8D94  38 21 00 40 */	addi r1, r1, 0x40
/* 803BBE58 003B8D98  4E 80 00 20 */	blr 
.endfn cullByResFlg__11ParticleMgrFP14JPABaseEmitter

.fn loadResources__19ModelEffectDataRootFv, weak
/* 803BBE5C 003B8D9C  4E 80 00 20 */	blr 
.endfn loadResources__19ModelEffectDataRootFv

.fn getID__19ModelEffectDataRootFv, weak
/* 803BBE60 003B8DA0  3C 80 52 4F */	lis r4, 0x524F4F54@ha
/* 803BBE64 003B8DA4  38 60 00 00 */	li r3, 0
/* 803BBE68 003B8DA8  38 84 4F 54 */	addi r4, r4, 0x524F4F54@l
/* 803BBE6C 003B8DAC  4E 80 00 20 */	blr 
.endfn getID__19ModelEffectDataRootFv

.fn onCreate__19ModelEffectDataRootFP20ModelEffectCreateArg, weak
/* 803BBE70 003B8DB0  38 60 00 00 */	li r3, 0
/* 803BBE74 003B8DB4  4E 80 00 20 */	blr 
.endfn onCreate__19ModelEffectDataRootFP20ModelEffectCreateArg

.fn "get__28NodeObjectMgr<11ModelEffect>FPv", weak
/* 803BBE78 003B8DB8  80 64 00 18 */	lwz r3, 0x18(r4)
/* 803BBE7C 003B8DBC  4E 80 00 20 */	blr 
.endfn "get__28NodeObjectMgr<11ModelEffect>FPv"

.fn "getNext__28NodeObjectMgr<11ModelEffect>FPv", weak
/* 803BBE80 003B8DC0  80 64 00 04 */	lwz r3, 4(r4)
/* 803BBE84 003B8DC4  4E 80 00 20 */	blr 
.endfn "getNext__28NodeObjectMgr<11ModelEffect>FPv"

.fn "getStart__28NodeObjectMgr<11ModelEffect>Fv", weak
/* 803BBE88 003B8DC8  80 63 00 30 */	lwz r3, 0x30(r3)
/* 803BBE8C 003B8DCC  4E 80 00 20 */	blr 
.endfn "getStart__28NodeObjectMgr<11ModelEffect>Fv"

.fn "getEnd__28NodeObjectMgr<11ModelEffect>Fv", weak
/* 803BBE90 003B8DD0  38 60 00 00 */	li r3, 0
/* 803BBE94 003B8DD4  4E 80 00 20 */	blr 
.endfn "getEnd__28NodeObjectMgr<11ModelEffect>Fv"

.fn "resetMgr__28NodeObjectMgr<11ModelEffect>Fv", weak
/* 803BBE98 003B8DD8  38 00 00 00 */	li r0, 0
/* 803BBE9C 003B8DDC  90 03 00 30 */	stw r0, 0x30(r3)
/* 803BBEA0 003B8DE0  90 03 00 2C */	stw r0, 0x2c(r3)
/* 803BBEA4 003B8DE4  90 03 00 28 */	stw r0, 0x28(r3)
/* 803BBEA8 003B8DE8  90 03 00 24 */	stw r0, 0x24(r3)
/* 803BBEAC 003B8DEC  4E 80 00 20 */	blr 
.endfn "resetMgr__28NodeObjectMgr<11ModelEffect>Fv"

.fn "getObject__24Container<11ModelEffect>FPv", weak
/* 803BBEB0 003B8DF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BBEB4 003B8DF4  7C 08 02 A6 */	mflr r0
/* 803BBEB8 003B8DF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BBEBC 003B8DFC  81 83 00 00 */	lwz r12, 0(r3)
/* 803BBEC0 003B8E00  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BBEC4 003B8E04  7D 89 03 A6 */	mtctr r12
/* 803BBEC8 003B8E08  4E 80 04 21 */	bctrl 
/* 803BBECC 003B8E0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BBED0 003B8E10  7C 08 03 A6 */	mtlr r0
/* 803BBED4 003B8E14  38 21 00 10 */	addi r1, r1, 0x10
/* 803BBED8 003B8E18  4E 80 00 20 */	blr 
.endfn "getObject__24Container<11ModelEffect>FPv"

.fn "getAt__24Container<11ModelEffect>Fi", weak
/* 803BBEDC 003B8E1C  38 60 00 00 */	li r3, 0
/* 803BBEE0 003B8E20  4E 80 00 20 */	blr 
.endfn "getAt__24Container<11ModelEffect>Fi"

.fn "getTo__24Container<11ModelEffect>Fv", weak
/* 803BBEE4 003B8E24  38 60 00 00 */	li r3, 0
/* 803BBEE8 003B8E28  4E 80 00 20 */	blr 
.endfn "getTo__24Container<11ModelEffect>Fv"

.fn "doDirectDraw__24ObjectMgr<11ModelEffect>FR8Graphics", weak
/* 803BBEEC 003B8E2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BBEF0 003B8E30  7C 08 02 A6 */	mflr r0
/* 803BBEF4 003B8E34  3C A0 80 4E */	lis r5, "__vt__23Iterator<11ModelEffect>"@ha
/* 803BBEF8 003B8E38  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BBEFC 003B8E3C  38 00 00 00 */	li r0, 0
/* 803BBF00 003B8E40  38 A5 78 10 */	addi r5, r5, "__vt__23Iterator<11ModelEffect>"@l
/* 803BBF04 003B8E44  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803BBF08 003B8E48  28 00 00 00 */	cmplwi r0, 0
/* 803BBF0C 003B8E4C  7C 9F 23 78 */	mr r31, r4
/* 803BBF10 003B8E50  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BBF14 003B8E54  90 A1 00 08 */	stw r5, 8(r1)
/* 803BBF18 003B8E58  90 01 00 0C */	stw r0, 0xc(r1)
/* 803BBF1C 003B8E5C  90 61 00 10 */	stw r3, 0x10(r1)
/* 803BBF20 003B8E60  40 82 00 1C */	bne .L_803BBF3C
/* 803BBF24 003B8E64  81 83 00 00 */	lwz r12, 0(r3)
/* 803BBF28 003B8E68  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BBF2C 003B8E6C  7D 89 03 A6 */	mtctr r12
/* 803BBF30 003B8E70  4E 80 04 21 */	bctrl 
/* 803BBF34 003B8E74  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BBF38 003B8E78  48 00 01 74 */	b .L_803BC0AC
.L_803BBF3C:
/* 803BBF3C 003B8E7C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BBF40 003B8E80  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BBF44 003B8E84  7D 89 03 A6 */	mtctr r12
/* 803BBF48 003B8E88  4E 80 04 21 */	bctrl 
/* 803BBF4C 003B8E8C  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BBF50 003B8E90  48 00 00 58 */	b .L_803BBFA8
.L_803BBF54:
/* 803BBF54 003B8E94  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BBF58 003B8E98  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BBF5C 003B8E9C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BBF60 003B8EA0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BBF64 003B8EA4  7D 89 03 A6 */	mtctr r12
/* 803BBF68 003B8EA8  4E 80 04 21 */	bctrl 
/* 803BBF6C 003B8EAC  7C 64 1B 78 */	mr r4, r3
/* 803BBF70 003B8EB0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 803BBF74 003B8EB4  81 83 00 00 */	lwz r12, 0(r3)
/* 803BBF78 003B8EB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BBF7C 003B8EBC  7D 89 03 A6 */	mtctr r12
/* 803BBF80 003B8EC0  4E 80 04 21 */	bctrl 
/* 803BBF84 003B8EC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BBF88 003B8EC8  40 82 01 24 */	bne .L_803BC0AC
/* 803BBF8C 003B8ECC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BBF90 003B8ED0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BBF94 003B8ED4  81 83 00 00 */	lwz r12, 0(r3)
/* 803BBF98 003B8ED8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BBF9C 003B8EDC  7D 89 03 A6 */	mtctr r12
/* 803BBFA0 003B8EE0  4E 80 04 21 */	bctrl 
/* 803BBFA4 003B8EE4  90 61 00 0C */	stw r3, 0xc(r1)
.L_803BBFA8:
/* 803BBFA8 003B8EE8  81 81 00 08 */	lwz r12, 8(r1)
/* 803BBFAC 003B8EEC  38 61 00 08 */	addi r3, r1, 8
/* 803BBFB0 003B8EF0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BBFB4 003B8EF4  7D 89 03 A6 */	mtctr r12
/* 803BBFB8 003B8EF8  4E 80 04 21 */	bctrl 
/* 803BBFBC 003B8EFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BBFC0 003B8F00  41 82 FF 94 */	beq .L_803BBF54
/* 803BBFC4 003B8F04  48 00 00 E8 */	b .L_803BC0AC
.L_803BBFC8:
/* 803BBFC8 003B8F08  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BBFCC 003B8F0C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BBFD0 003B8F10  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BBFD4 003B8F14  7D 89 03 A6 */	mtctr r12
/* 803BBFD8 003B8F18  4E 80 04 21 */	bctrl 
/* 803BBFDC 003B8F1C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BBFE0 003B8F20  7F E4 FB 78 */	mr r4, r31
/* 803BBFE4 003B8F24  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803BBFE8 003B8F28  7D 89 03 A6 */	mtctr r12
/* 803BBFEC 003B8F2C  4E 80 04 21 */	bctrl 
/* 803BBFF0 003B8F30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BBFF4 003B8F34  28 00 00 00 */	cmplwi r0, 0
/* 803BBFF8 003B8F38  40 82 00 24 */	bne .L_803BC01C
/* 803BBFFC 003B8F3C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC000 003B8F40  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC004 003B8F44  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC008 003B8F48  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC00C 003B8F4C  7D 89 03 A6 */	mtctr r12
/* 803BC010 003B8F50  4E 80 04 21 */	bctrl 
/* 803BC014 003B8F54  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC018 003B8F58  48 00 00 94 */	b .L_803BC0AC
.L_803BC01C:
/* 803BC01C 003B8F5C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC020 003B8F60  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC024 003B8F64  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC028 003B8F68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC02C 003B8F6C  7D 89 03 A6 */	mtctr r12
/* 803BC030 003B8F70  4E 80 04 21 */	bctrl 
/* 803BC034 003B8F74  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC038 003B8F78  48 00 00 58 */	b .L_803BC090
.L_803BC03C:
/* 803BC03C 003B8F7C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC040 003B8F80  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC044 003B8F84  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC048 003B8F88  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC04C 003B8F8C  7D 89 03 A6 */	mtctr r12
/* 803BC050 003B8F90  4E 80 04 21 */	bctrl 
/* 803BC054 003B8F94  7C 64 1B 78 */	mr r4, r3
/* 803BC058 003B8F98  80 61 00 14 */	lwz r3, 0x14(r1)
/* 803BC05C 003B8F9C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC060 003B8FA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BC064 003B8FA4  7D 89 03 A6 */	mtctr r12
/* 803BC068 003B8FA8  4E 80 04 21 */	bctrl 
/* 803BC06C 003B8FAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC070 003B8FB0  40 82 00 3C */	bne .L_803BC0AC
/* 803BC074 003B8FB4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC078 003B8FB8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC07C 003B8FBC  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC080 003B8FC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC084 003B8FC4  7D 89 03 A6 */	mtctr r12
/* 803BC088 003B8FC8  4E 80 04 21 */	bctrl 
/* 803BC08C 003B8FCC  90 61 00 0C */	stw r3, 0xc(r1)
.L_803BC090:
/* 803BC090 003B8FD0  81 81 00 08 */	lwz r12, 8(r1)
/* 803BC094 003B8FD4  38 61 00 08 */	addi r3, r1, 8
/* 803BC098 003B8FD8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BC09C 003B8FDC  7D 89 03 A6 */	mtctr r12
/* 803BC0A0 003B8FE0  4E 80 04 21 */	bctrl 
/* 803BC0A4 003B8FE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC0A8 003B8FE8  41 82 FF 94 */	beq .L_803BC03C
.L_803BC0AC:
/* 803BC0AC 003B8FEC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC0B0 003B8FF0  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC0B4 003B8FF4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803BC0B8 003B8FF8  7D 89 03 A6 */	mtctr r12
/* 803BC0BC 003B8FFC  4E 80 04 21 */	bctrl 
/* 803BC0C0 003B9000  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC0C4 003B9004  7C 04 18 40 */	cmplw r4, r3
/* 803BC0C8 003B9008  40 82 FF 00 */	bne .L_803BBFC8
/* 803BC0CC 003B900C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BC0D0 003B9010  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803BC0D4 003B9014  7C 08 03 A6 */	mtlr r0
/* 803BC0D8 003B9018  38 21 00 20 */	addi r1, r1, 0x20
/* 803BC0DC 003B901C  4E 80 00 20 */	blr 
.endfn "doDirectDraw__24ObjectMgr<11ModelEffect>FR8Graphics"

.fn "isDone__23Iterator<11ModelEffect>Fv", weak
/* 803BC0E0 003B9020  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BC0E4 003B9024  7C 08 02 A6 */	mflr r0
/* 803BC0E8 003B9028  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BC0EC 003B902C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BC0F0 003B9030  7C 7F 1B 78 */	mr r31, r3
/* 803BC0F4 003B9034  80 63 00 08 */	lwz r3, 8(r3)
/* 803BC0F8 003B9038  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC0FC 003B903C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803BC100 003B9040  7D 89 03 A6 */	mtctr r12
/* 803BC104 003B9044  4E 80 04 21 */	bctrl 
/* 803BC108 003B9048  80 1F 00 04 */	lwz r0, 4(r31)
/* 803BC10C 003B904C  7C 00 18 50 */	subf r0, r0, r3
/* 803BC110 003B9050  7C 00 00 34 */	cntlzw r0, r0
/* 803BC114 003B9054  54 03 D9 7E */	srwi r3, r0, 5
/* 803BC118 003B9058  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BC11C 003B905C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BC120 003B9060  7C 08 03 A6 */	mtlr r0
/* 803BC124 003B9064  38 21 00 10 */	addi r1, r1, 0x10
/* 803BC128 003B9068  4E 80 00 20 */	blr 
.endfn "isDone__23Iterator<11ModelEffect>Fv"

.fn "doSimulation__24ObjectMgr<11ModelEffect>Ff", weak
/* 803BC12C 003B906C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BC130 003B9070  7C 08 02 A6 */	mflr r0
/* 803BC134 003B9074  3C 80 80 4E */	lis r4, "__vt__23Iterator<11ModelEffect>"@ha
/* 803BC138 003B9078  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BC13C 003B907C  38 00 00 00 */	li r0, 0
/* 803BC140 003B9080  38 84 78 10 */	addi r4, r4, "__vt__23Iterator<11ModelEffect>"@l
/* 803BC144 003B9084  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 803BC148 003B9088  FF E0 08 90 */	fmr f31, f1
/* 803BC14C 003B908C  28 00 00 00 */	cmplwi r0, 0
/* 803BC150 003B9090  90 81 00 08 */	stw r4, 8(r1)
/* 803BC154 003B9094  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BC158 003B9098  90 01 00 0C */	stw r0, 0xc(r1)
/* 803BC15C 003B909C  90 61 00 10 */	stw r3, 0x10(r1)
/* 803BC160 003B90A0  40 82 00 1C */	bne .L_803BC17C
/* 803BC164 003B90A4  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC168 003B90A8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BC16C 003B90AC  7D 89 03 A6 */	mtctr r12
/* 803BC170 003B90B0  4E 80 04 21 */	bctrl 
/* 803BC174 003B90B4  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC178 003B90B8  48 00 01 74 */	b .L_803BC2EC
.L_803BC17C:
/* 803BC17C 003B90BC  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC180 003B90C0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BC184 003B90C4  7D 89 03 A6 */	mtctr r12
/* 803BC188 003B90C8  4E 80 04 21 */	bctrl 
/* 803BC18C 003B90CC  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC190 003B90D0  48 00 00 58 */	b .L_803BC1E8
.L_803BC194:
/* 803BC194 003B90D4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC198 003B90D8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC19C 003B90DC  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC1A0 003B90E0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC1A4 003B90E4  7D 89 03 A6 */	mtctr r12
/* 803BC1A8 003B90E8  4E 80 04 21 */	bctrl 
/* 803BC1AC 003B90EC  7C 64 1B 78 */	mr r4, r3
/* 803BC1B0 003B90F0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 803BC1B4 003B90F4  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC1B8 003B90F8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BC1BC 003B90FC  7D 89 03 A6 */	mtctr r12
/* 803BC1C0 003B9100  4E 80 04 21 */	bctrl 
/* 803BC1C4 003B9104  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC1C8 003B9108  40 82 01 24 */	bne .L_803BC2EC
/* 803BC1CC 003B910C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC1D0 003B9110  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC1D4 003B9114  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC1D8 003B9118  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC1DC 003B911C  7D 89 03 A6 */	mtctr r12
/* 803BC1E0 003B9120  4E 80 04 21 */	bctrl 
/* 803BC1E4 003B9124  90 61 00 0C */	stw r3, 0xc(r1)
.L_803BC1E8:
/* 803BC1E8 003B9128  81 81 00 08 */	lwz r12, 8(r1)
/* 803BC1EC 003B912C  38 61 00 08 */	addi r3, r1, 8
/* 803BC1F0 003B9130  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BC1F4 003B9134  7D 89 03 A6 */	mtctr r12
/* 803BC1F8 003B9138  4E 80 04 21 */	bctrl 
/* 803BC1FC 003B913C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC200 003B9140  41 82 FF 94 */	beq .L_803BC194
/* 803BC204 003B9144  48 00 00 E8 */	b .L_803BC2EC
.L_803BC208:
/* 803BC208 003B9148  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC20C 003B914C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC210 003B9150  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC214 003B9154  7D 89 03 A6 */	mtctr r12
/* 803BC218 003B9158  4E 80 04 21 */	bctrl 
/* 803BC21C 003B915C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC220 003B9160  FC 20 F8 90 */	fmr f1, f31
/* 803BC224 003B9164  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803BC228 003B9168  7D 89 03 A6 */	mtctr r12
/* 803BC22C 003B916C  4E 80 04 21 */	bctrl 
/* 803BC230 003B9170  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BC234 003B9174  28 00 00 00 */	cmplwi r0, 0
/* 803BC238 003B9178  40 82 00 24 */	bne .L_803BC25C
/* 803BC23C 003B917C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC240 003B9180  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC244 003B9184  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC248 003B9188  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC24C 003B918C  7D 89 03 A6 */	mtctr r12
/* 803BC250 003B9190  4E 80 04 21 */	bctrl 
/* 803BC254 003B9194  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC258 003B9198  48 00 00 94 */	b .L_803BC2EC
.L_803BC25C:
/* 803BC25C 003B919C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC260 003B91A0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC264 003B91A4  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC268 003B91A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC26C 003B91AC  7D 89 03 A6 */	mtctr r12
/* 803BC270 003B91B0  4E 80 04 21 */	bctrl 
/* 803BC274 003B91B4  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC278 003B91B8  48 00 00 58 */	b .L_803BC2D0
.L_803BC27C:
/* 803BC27C 003B91BC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC280 003B91C0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC284 003B91C4  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC288 003B91C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC28C 003B91CC  7D 89 03 A6 */	mtctr r12
/* 803BC290 003B91D0  4E 80 04 21 */	bctrl 
/* 803BC294 003B91D4  7C 64 1B 78 */	mr r4, r3
/* 803BC298 003B91D8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 803BC29C 003B91DC  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC2A0 003B91E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BC2A4 003B91E4  7D 89 03 A6 */	mtctr r12
/* 803BC2A8 003B91E8  4E 80 04 21 */	bctrl 
/* 803BC2AC 003B91EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC2B0 003B91F0  40 82 00 3C */	bne .L_803BC2EC
/* 803BC2B4 003B91F4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC2B8 003B91F8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC2BC 003B91FC  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC2C0 003B9200  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC2C4 003B9204  7D 89 03 A6 */	mtctr r12
/* 803BC2C8 003B9208  4E 80 04 21 */	bctrl 
/* 803BC2CC 003B920C  90 61 00 0C */	stw r3, 0xc(r1)
.L_803BC2D0:
/* 803BC2D0 003B9210  81 81 00 08 */	lwz r12, 8(r1)
/* 803BC2D4 003B9214  38 61 00 08 */	addi r3, r1, 8
/* 803BC2D8 003B9218  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BC2DC 003B921C  7D 89 03 A6 */	mtctr r12
/* 803BC2E0 003B9220  4E 80 04 21 */	bctrl 
/* 803BC2E4 003B9224  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC2E8 003B9228  41 82 FF 94 */	beq .L_803BC27C
.L_803BC2EC:
/* 803BC2EC 003B922C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC2F0 003B9230  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC2F4 003B9234  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803BC2F8 003B9238  7D 89 03 A6 */	mtctr r12
/* 803BC2FC 003B923C  4E 80 04 21 */	bctrl 
/* 803BC300 003B9240  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC304 003B9244  7C 04 18 40 */	cmplw r4, r3
/* 803BC308 003B9248  40 82 FF 00 */	bne .L_803BC208
/* 803BC30C 003B924C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BC310 003B9250  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 803BC314 003B9254  7C 08 03 A6 */	mtlr r0
/* 803BC318 003B9258  38 21 00 20 */	addi r1, r1, 0x20
/* 803BC31C 003B925C  4E 80 00 20 */	blr 
.endfn "doSimulation__24ObjectMgr<11ModelEffect>Ff"

.fn "doViewCalc__24ObjectMgr<11ModelEffect>Fv", weak
/* 803BC320 003B9260  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BC324 003B9264  7C 08 02 A6 */	mflr r0
/* 803BC328 003B9268  3C 80 80 4E */	lis r4, "__vt__23Iterator<11ModelEffect>"@ha
/* 803BC32C 003B926C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BC330 003B9270  38 00 00 00 */	li r0, 0
/* 803BC334 003B9274  38 84 78 10 */	addi r4, r4, "__vt__23Iterator<11ModelEffect>"@l
/* 803BC338 003B9278  28 00 00 00 */	cmplwi r0, 0
/* 803BC33C 003B927C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BC340 003B9280  90 81 00 08 */	stw r4, 8(r1)
/* 803BC344 003B9284  90 01 00 0C */	stw r0, 0xc(r1)
/* 803BC348 003B9288  90 61 00 10 */	stw r3, 0x10(r1)
/* 803BC34C 003B928C  40 82 00 1C */	bne .L_803BC368
/* 803BC350 003B9290  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC354 003B9294  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BC358 003B9298  7D 89 03 A6 */	mtctr r12
/* 803BC35C 003B929C  4E 80 04 21 */	bctrl 
/* 803BC360 003B92A0  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC364 003B92A4  48 00 01 70 */	b .L_803BC4D4
.L_803BC368:
/* 803BC368 003B92A8  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC36C 003B92AC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BC370 003B92B0  7D 89 03 A6 */	mtctr r12
/* 803BC374 003B92B4  4E 80 04 21 */	bctrl 
/* 803BC378 003B92B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC37C 003B92BC  48 00 00 58 */	b .L_803BC3D4
.L_803BC380:
/* 803BC380 003B92C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC384 003B92C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC388 003B92C8  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC38C 003B92CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC390 003B92D0  7D 89 03 A6 */	mtctr r12
/* 803BC394 003B92D4  4E 80 04 21 */	bctrl 
/* 803BC398 003B92D8  7C 64 1B 78 */	mr r4, r3
/* 803BC39C 003B92DC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 803BC3A0 003B92E0  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC3A4 003B92E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BC3A8 003B92E8  7D 89 03 A6 */	mtctr r12
/* 803BC3AC 003B92EC  4E 80 04 21 */	bctrl 
/* 803BC3B0 003B92F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC3B4 003B92F4  40 82 01 20 */	bne .L_803BC4D4
/* 803BC3B8 003B92F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC3BC 003B92FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC3C0 003B9300  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC3C4 003B9304  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC3C8 003B9308  7D 89 03 A6 */	mtctr r12
/* 803BC3CC 003B930C  4E 80 04 21 */	bctrl 
/* 803BC3D0 003B9310  90 61 00 0C */	stw r3, 0xc(r1)
.L_803BC3D4:
/* 803BC3D4 003B9314  81 81 00 08 */	lwz r12, 8(r1)
/* 803BC3D8 003B9318  38 61 00 08 */	addi r3, r1, 8
/* 803BC3DC 003B931C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BC3E0 003B9320  7D 89 03 A6 */	mtctr r12
/* 803BC3E4 003B9324  4E 80 04 21 */	bctrl 
/* 803BC3E8 003B9328  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC3EC 003B932C  41 82 FF 94 */	beq .L_803BC380
/* 803BC3F0 003B9330  48 00 00 E4 */	b .L_803BC4D4
.L_803BC3F4:
/* 803BC3F4 003B9334  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC3F8 003B9338  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC3FC 003B933C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC400 003B9340  7D 89 03 A6 */	mtctr r12
/* 803BC404 003B9344  4E 80 04 21 */	bctrl 
/* 803BC408 003B9348  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC40C 003B934C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BC410 003B9350  7D 89 03 A6 */	mtctr r12
/* 803BC414 003B9354  4E 80 04 21 */	bctrl 
/* 803BC418 003B9358  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BC41C 003B935C  28 00 00 00 */	cmplwi r0, 0
/* 803BC420 003B9360  40 82 00 24 */	bne .L_803BC444
/* 803BC424 003B9364  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC428 003B9368  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC42C 003B936C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC430 003B9370  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC434 003B9374  7D 89 03 A6 */	mtctr r12
/* 803BC438 003B9378  4E 80 04 21 */	bctrl 
/* 803BC43C 003B937C  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC440 003B9380  48 00 00 94 */	b .L_803BC4D4
.L_803BC444:
/* 803BC444 003B9384  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC448 003B9388  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC44C 003B938C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC450 003B9390  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC454 003B9394  7D 89 03 A6 */	mtctr r12
/* 803BC458 003B9398  4E 80 04 21 */	bctrl 
/* 803BC45C 003B939C  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC460 003B93A0  48 00 00 58 */	b .L_803BC4B8
.L_803BC464:
/* 803BC464 003B93A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC468 003B93A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC46C 003B93AC  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC470 003B93B0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC474 003B93B4  7D 89 03 A6 */	mtctr r12
/* 803BC478 003B93B8  4E 80 04 21 */	bctrl 
/* 803BC47C 003B93BC  7C 64 1B 78 */	mr r4, r3
/* 803BC480 003B93C0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 803BC484 003B93C4  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC488 003B93C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BC48C 003B93CC  7D 89 03 A6 */	mtctr r12
/* 803BC490 003B93D0  4E 80 04 21 */	bctrl 
/* 803BC494 003B93D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC498 003B93D8  40 82 00 3C */	bne .L_803BC4D4
/* 803BC49C 003B93DC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC4A0 003B93E0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC4A4 003B93E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC4A8 003B93E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC4AC 003B93EC  7D 89 03 A6 */	mtctr r12
/* 803BC4B0 003B93F0  4E 80 04 21 */	bctrl 
/* 803BC4B4 003B93F4  90 61 00 0C */	stw r3, 0xc(r1)
.L_803BC4B8:
/* 803BC4B8 003B93F8  81 81 00 08 */	lwz r12, 8(r1)
/* 803BC4BC 003B93FC  38 61 00 08 */	addi r3, r1, 8
/* 803BC4C0 003B9400  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BC4C4 003B9404  7D 89 03 A6 */	mtctr r12
/* 803BC4C8 003B9408  4E 80 04 21 */	bctrl 
/* 803BC4CC 003B940C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC4D0 003B9410  41 82 FF 94 */	beq .L_803BC464
.L_803BC4D4:
/* 803BC4D4 003B9414  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC4D8 003B9418  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC4DC 003B941C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803BC4E0 003B9420  7D 89 03 A6 */	mtctr r12
/* 803BC4E4 003B9424  4E 80 04 21 */	bctrl 
/* 803BC4E8 003B9428  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC4EC 003B942C  7C 04 18 40 */	cmplw r4, r3
/* 803BC4F0 003B9430  40 82 FF 04 */	bne .L_803BC3F4
/* 803BC4F4 003B9434  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BC4F8 003B9438  7C 08 03 A6 */	mtlr r0
/* 803BC4FC 003B943C  38 21 00 20 */	addi r1, r1, 0x20
/* 803BC500 003B9440  4E 80 00 20 */	blr 
.endfn "doViewCalc__24ObjectMgr<11ModelEffect>Fv"

.fn "doSetView__24ObjectMgr<11ModelEffect>Fi", weak
/* 803BC504 003B9444  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BC508 003B9448  7C 08 02 A6 */	mflr r0
/* 803BC50C 003B944C  3C A0 80 4E */	lis r5, "__vt__23Iterator<11ModelEffect>"@ha
/* 803BC510 003B9450  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BC514 003B9454  38 00 00 00 */	li r0, 0
/* 803BC518 003B9458  38 A5 78 10 */	addi r5, r5, "__vt__23Iterator<11ModelEffect>"@l
/* 803BC51C 003B945C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803BC520 003B9460  28 00 00 00 */	cmplwi r0, 0
/* 803BC524 003B9464  7C 9F 23 78 */	mr r31, r4
/* 803BC528 003B9468  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BC52C 003B946C  90 A1 00 08 */	stw r5, 8(r1)
/* 803BC530 003B9470  90 01 00 0C */	stw r0, 0xc(r1)
/* 803BC534 003B9474  90 61 00 10 */	stw r3, 0x10(r1)
/* 803BC538 003B9478  40 82 00 1C */	bne .L_803BC554
/* 803BC53C 003B947C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC540 003B9480  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BC544 003B9484  7D 89 03 A6 */	mtctr r12
/* 803BC548 003B9488  4E 80 04 21 */	bctrl 
/* 803BC54C 003B948C  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC550 003B9490  48 00 01 74 */	b .L_803BC6C4
.L_803BC554:
/* 803BC554 003B9494  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC558 003B9498  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BC55C 003B949C  7D 89 03 A6 */	mtctr r12
/* 803BC560 003B94A0  4E 80 04 21 */	bctrl 
/* 803BC564 003B94A4  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC568 003B94A8  48 00 00 58 */	b .L_803BC5C0
.L_803BC56C:
/* 803BC56C 003B94AC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC570 003B94B0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC574 003B94B4  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC578 003B94B8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC57C 003B94BC  7D 89 03 A6 */	mtctr r12
/* 803BC580 003B94C0  4E 80 04 21 */	bctrl 
/* 803BC584 003B94C4  7C 64 1B 78 */	mr r4, r3
/* 803BC588 003B94C8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 803BC58C 003B94CC  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC590 003B94D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BC594 003B94D4  7D 89 03 A6 */	mtctr r12
/* 803BC598 003B94D8  4E 80 04 21 */	bctrl 
/* 803BC59C 003B94DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC5A0 003B94E0  40 82 01 24 */	bne .L_803BC6C4
/* 803BC5A4 003B94E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC5A8 003B94E8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC5AC 003B94EC  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC5B0 003B94F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC5B4 003B94F4  7D 89 03 A6 */	mtctr r12
/* 803BC5B8 003B94F8  4E 80 04 21 */	bctrl 
/* 803BC5BC 003B94FC  90 61 00 0C */	stw r3, 0xc(r1)
.L_803BC5C0:
/* 803BC5C0 003B9500  81 81 00 08 */	lwz r12, 8(r1)
/* 803BC5C4 003B9504  38 61 00 08 */	addi r3, r1, 8
/* 803BC5C8 003B9508  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BC5CC 003B950C  7D 89 03 A6 */	mtctr r12
/* 803BC5D0 003B9510  4E 80 04 21 */	bctrl 
/* 803BC5D4 003B9514  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC5D8 003B9518  41 82 FF 94 */	beq .L_803BC56C
/* 803BC5DC 003B951C  48 00 00 E8 */	b .L_803BC6C4
.L_803BC5E0:
/* 803BC5E0 003B9520  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC5E4 003B9524  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC5E8 003B9528  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC5EC 003B952C  7D 89 03 A6 */	mtctr r12
/* 803BC5F0 003B9530  4E 80 04 21 */	bctrl 
/* 803BC5F4 003B9534  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC5F8 003B9538  7F E4 FB 78 */	mr r4, r31
/* 803BC5FC 003B953C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC600 003B9540  7D 89 03 A6 */	mtctr r12
/* 803BC604 003B9544  4E 80 04 21 */	bctrl 
/* 803BC608 003B9548  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BC60C 003B954C  28 00 00 00 */	cmplwi r0, 0
/* 803BC610 003B9550  40 82 00 24 */	bne .L_803BC634
/* 803BC614 003B9554  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC618 003B9558  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC61C 003B955C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC620 003B9560  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC624 003B9564  7D 89 03 A6 */	mtctr r12
/* 803BC628 003B9568  4E 80 04 21 */	bctrl 
/* 803BC62C 003B956C  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC630 003B9570  48 00 00 94 */	b .L_803BC6C4
.L_803BC634:
/* 803BC634 003B9574  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC638 003B9578  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC63C 003B957C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC640 003B9580  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC644 003B9584  7D 89 03 A6 */	mtctr r12
/* 803BC648 003B9588  4E 80 04 21 */	bctrl 
/* 803BC64C 003B958C  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC650 003B9590  48 00 00 58 */	b .L_803BC6A8
.L_803BC654:
/* 803BC654 003B9594  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC658 003B9598  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC65C 003B959C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC660 003B95A0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC664 003B95A4  7D 89 03 A6 */	mtctr r12
/* 803BC668 003B95A8  4E 80 04 21 */	bctrl 
/* 803BC66C 003B95AC  7C 64 1B 78 */	mr r4, r3
/* 803BC670 003B95B0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 803BC674 003B95B4  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC678 003B95B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BC67C 003B95BC  7D 89 03 A6 */	mtctr r12
/* 803BC680 003B95C0  4E 80 04 21 */	bctrl 
/* 803BC684 003B95C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC688 003B95C8  40 82 00 3C */	bne .L_803BC6C4
/* 803BC68C 003B95CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC690 003B95D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC694 003B95D4  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC698 003B95D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC69C 003B95DC  7D 89 03 A6 */	mtctr r12
/* 803BC6A0 003B95E0  4E 80 04 21 */	bctrl 
/* 803BC6A4 003B95E4  90 61 00 0C */	stw r3, 0xc(r1)
.L_803BC6A8:
/* 803BC6A8 003B95E8  81 81 00 08 */	lwz r12, 8(r1)
/* 803BC6AC 003B95EC  38 61 00 08 */	addi r3, r1, 8
/* 803BC6B0 003B95F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BC6B4 003B95F4  7D 89 03 A6 */	mtctr r12
/* 803BC6B8 003B95F8  4E 80 04 21 */	bctrl 
/* 803BC6BC 003B95FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC6C0 003B9600  41 82 FF 94 */	beq .L_803BC654
.L_803BC6C4:
/* 803BC6C4 003B9604  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC6C8 003B9608  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC6CC 003B960C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803BC6D0 003B9610  7D 89 03 A6 */	mtctr r12
/* 803BC6D4 003B9614  4E 80 04 21 */	bctrl 
/* 803BC6D8 003B9618  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC6DC 003B961C  7C 04 18 40 */	cmplw r4, r3
/* 803BC6E0 003B9620  40 82 FF 00 */	bne .L_803BC5E0
/* 803BC6E4 003B9624  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BC6E8 003B9628  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803BC6EC 003B962C  7C 08 03 A6 */	mtlr r0
/* 803BC6F0 003B9630  38 21 00 20 */	addi r1, r1, 0x20
/* 803BC6F4 003B9634  4E 80 00 20 */	blr 
.endfn "doSetView__24ObjectMgr<11ModelEffect>Fi"

.fn "doEntry__24ObjectMgr<11ModelEffect>Fv", weak
/* 803BC6F8 003B9638  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BC6FC 003B963C  7C 08 02 A6 */	mflr r0
/* 803BC700 003B9640  3C 80 80 4E */	lis r4, "__vt__23Iterator<11ModelEffect>"@ha
/* 803BC704 003B9644  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BC708 003B9648  38 00 00 00 */	li r0, 0
/* 803BC70C 003B964C  38 84 78 10 */	addi r4, r4, "__vt__23Iterator<11ModelEffect>"@l
/* 803BC710 003B9650  28 00 00 00 */	cmplwi r0, 0
/* 803BC714 003B9654  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BC718 003B9658  90 81 00 08 */	stw r4, 8(r1)
/* 803BC71C 003B965C  90 01 00 0C */	stw r0, 0xc(r1)
/* 803BC720 003B9660  90 61 00 10 */	stw r3, 0x10(r1)
/* 803BC724 003B9664  40 82 00 1C */	bne .L_803BC740
/* 803BC728 003B9668  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC72C 003B966C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BC730 003B9670  7D 89 03 A6 */	mtctr r12
/* 803BC734 003B9674  4E 80 04 21 */	bctrl 
/* 803BC738 003B9678  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC73C 003B967C  48 00 01 70 */	b .L_803BC8AC
.L_803BC740:
/* 803BC740 003B9680  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC744 003B9684  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BC748 003B9688  7D 89 03 A6 */	mtctr r12
/* 803BC74C 003B968C  4E 80 04 21 */	bctrl 
/* 803BC750 003B9690  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC754 003B9694  48 00 00 58 */	b .L_803BC7AC
.L_803BC758:
/* 803BC758 003B9698  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC75C 003B969C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC760 003B96A0  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC764 003B96A4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC768 003B96A8  7D 89 03 A6 */	mtctr r12
/* 803BC76C 003B96AC  4E 80 04 21 */	bctrl 
/* 803BC770 003B96B0  7C 64 1B 78 */	mr r4, r3
/* 803BC774 003B96B4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 803BC778 003B96B8  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC77C 003B96BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BC780 003B96C0  7D 89 03 A6 */	mtctr r12
/* 803BC784 003B96C4  4E 80 04 21 */	bctrl 
/* 803BC788 003B96C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC78C 003B96CC  40 82 01 20 */	bne .L_803BC8AC
/* 803BC790 003B96D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC794 003B96D4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC798 003B96D8  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC79C 003B96DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC7A0 003B96E0  7D 89 03 A6 */	mtctr r12
/* 803BC7A4 003B96E4  4E 80 04 21 */	bctrl 
/* 803BC7A8 003B96E8  90 61 00 0C */	stw r3, 0xc(r1)
.L_803BC7AC:
/* 803BC7AC 003B96EC  81 81 00 08 */	lwz r12, 8(r1)
/* 803BC7B0 003B96F0  38 61 00 08 */	addi r3, r1, 8
/* 803BC7B4 003B96F4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BC7B8 003B96F8  7D 89 03 A6 */	mtctr r12
/* 803BC7BC 003B96FC  4E 80 04 21 */	bctrl 
/* 803BC7C0 003B9700  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC7C4 003B9704  41 82 FF 94 */	beq .L_803BC758
/* 803BC7C8 003B9708  48 00 00 E4 */	b .L_803BC8AC
.L_803BC7CC:
/* 803BC7CC 003B970C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC7D0 003B9710  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC7D4 003B9714  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC7D8 003B9718  7D 89 03 A6 */	mtctr r12
/* 803BC7DC 003B971C  4E 80 04 21 */	bctrl 
/* 803BC7E0 003B9720  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC7E4 003B9724  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BC7E8 003B9728  7D 89 03 A6 */	mtctr r12
/* 803BC7EC 003B972C  4E 80 04 21 */	bctrl 
/* 803BC7F0 003B9730  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BC7F4 003B9734  28 00 00 00 */	cmplwi r0, 0
/* 803BC7F8 003B9738  40 82 00 24 */	bne .L_803BC81C
/* 803BC7FC 003B973C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC800 003B9740  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC804 003B9744  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC808 003B9748  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC80C 003B974C  7D 89 03 A6 */	mtctr r12
/* 803BC810 003B9750  4E 80 04 21 */	bctrl 
/* 803BC814 003B9754  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC818 003B9758  48 00 00 94 */	b .L_803BC8AC
.L_803BC81C:
/* 803BC81C 003B975C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC820 003B9760  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC824 003B9764  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC828 003B9768  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC82C 003B976C  7D 89 03 A6 */	mtctr r12
/* 803BC830 003B9770  4E 80 04 21 */	bctrl 
/* 803BC834 003B9774  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC838 003B9778  48 00 00 58 */	b .L_803BC890
.L_803BC83C:
/* 803BC83C 003B977C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC840 003B9780  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC844 003B9784  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC848 003B9788  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC84C 003B978C  7D 89 03 A6 */	mtctr r12
/* 803BC850 003B9790  4E 80 04 21 */	bctrl 
/* 803BC854 003B9794  7C 64 1B 78 */	mr r4, r3
/* 803BC858 003B9798  80 61 00 14 */	lwz r3, 0x14(r1)
/* 803BC85C 003B979C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC860 003B97A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BC864 003B97A4  7D 89 03 A6 */	mtctr r12
/* 803BC868 003B97A8  4E 80 04 21 */	bctrl 
/* 803BC86C 003B97AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC870 003B97B0  40 82 00 3C */	bne .L_803BC8AC
/* 803BC874 003B97B4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC878 003B97B8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC87C 003B97BC  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC880 003B97C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC884 003B97C4  7D 89 03 A6 */	mtctr r12
/* 803BC888 003B97C8  4E 80 04 21 */	bctrl 
/* 803BC88C 003B97CC  90 61 00 0C */	stw r3, 0xc(r1)
.L_803BC890:
/* 803BC890 003B97D0  81 81 00 08 */	lwz r12, 8(r1)
/* 803BC894 003B97D4  38 61 00 08 */	addi r3, r1, 8
/* 803BC898 003B97D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BC89C 003B97DC  7D 89 03 A6 */	mtctr r12
/* 803BC8A0 003B97E0  4E 80 04 21 */	bctrl 
/* 803BC8A4 003B97E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC8A8 003B97E8  41 82 FF 94 */	beq .L_803BC83C
.L_803BC8AC:
/* 803BC8AC 003B97EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC8B0 003B97F0  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC8B4 003B97F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803BC8B8 003B97F8  7D 89 03 A6 */	mtctr r12
/* 803BC8BC 003B97FC  4E 80 04 21 */	bctrl 
/* 803BC8C0 003B9800  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC8C4 003B9804  7C 04 18 40 */	cmplw r4, r3
/* 803BC8C8 003B9808  40 82 FF 04 */	bne .L_803BC7CC
/* 803BC8CC 003B980C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BC8D0 003B9810  7C 08 03 A6 */	mtlr r0
/* 803BC8D4 003B9814  38 21 00 20 */	addi r1, r1, 0x20
/* 803BC8D8 003B9818  4E 80 00 20 */	blr 
.endfn "doEntry__24ObjectMgr<11ModelEffect>Fv"

.fn "doAnimation__24ObjectMgr<11ModelEffect>Fv", weak
/* 803BC8DC 003B981C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BC8E0 003B9820  7C 08 02 A6 */	mflr r0
/* 803BC8E4 003B9824  3C 80 80 4E */	lis r4, "__vt__23Iterator<11ModelEffect>"@ha
/* 803BC8E8 003B9828  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BC8EC 003B982C  38 00 00 00 */	li r0, 0
/* 803BC8F0 003B9830  38 84 78 10 */	addi r4, r4, "__vt__23Iterator<11ModelEffect>"@l
/* 803BC8F4 003B9834  28 00 00 00 */	cmplwi r0, 0
/* 803BC8F8 003B9838  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BC8FC 003B983C  90 81 00 08 */	stw r4, 8(r1)
/* 803BC900 003B9840  90 01 00 0C */	stw r0, 0xc(r1)
/* 803BC904 003B9844  90 61 00 10 */	stw r3, 0x10(r1)
/* 803BC908 003B9848  40 82 00 1C */	bne .L_803BC924
/* 803BC90C 003B984C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC910 003B9850  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BC914 003B9854  7D 89 03 A6 */	mtctr r12
/* 803BC918 003B9858  4E 80 04 21 */	bctrl 
/* 803BC91C 003B985C  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC920 003B9860  48 00 01 70 */	b .L_803BCA90
.L_803BC924:
/* 803BC924 003B9864  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC928 003B9868  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BC92C 003B986C  7D 89 03 A6 */	mtctr r12
/* 803BC930 003B9870  4E 80 04 21 */	bctrl 
/* 803BC934 003B9874  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC938 003B9878  48 00 00 58 */	b .L_803BC990
.L_803BC93C:
/* 803BC93C 003B987C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC940 003B9880  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC944 003B9884  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC948 003B9888  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC94C 003B988C  7D 89 03 A6 */	mtctr r12
/* 803BC950 003B9890  4E 80 04 21 */	bctrl 
/* 803BC954 003B9894  7C 64 1B 78 */	mr r4, r3
/* 803BC958 003B9898  80 61 00 14 */	lwz r3, 0x14(r1)
/* 803BC95C 003B989C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC960 003B98A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BC964 003B98A4  7D 89 03 A6 */	mtctr r12
/* 803BC968 003B98A8  4E 80 04 21 */	bctrl 
/* 803BC96C 003B98AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC970 003B98B0  40 82 01 20 */	bne .L_803BCA90
/* 803BC974 003B98B4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC978 003B98B8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC97C 003B98BC  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC980 003B98C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC984 003B98C4  7D 89 03 A6 */	mtctr r12
/* 803BC988 003B98C8  4E 80 04 21 */	bctrl 
/* 803BC98C 003B98CC  90 61 00 0C */	stw r3, 0xc(r1)
.L_803BC990:
/* 803BC990 003B98D0  81 81 00 08 */	lwz r12, 8(r1)
/* 803BC994 003B98D4  38 61 00 08 */	addi r3, r1, 8
/* 803BC998 003B98D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BC99C 003B98DC  7D 89 03 A6 */	mtctr r12
/* 803BC9A0 003B98E0  4E 80 04 21 */	bctrl 
/* 803BC9A4 003B98E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BC9A8 003B98E8  41 82 FF 94 */	beq .L_803BC93C
/* 803BC9AC 003B98EC  48 00 00 E4 */	b .L_803BCA90
.L_803BC9B0:
/* 803BC9B0 003B98F0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC9B4 003B98F4  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC9B8 003B98F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BC9BC 003B98FC  7D 89 03 A6 */	mtctr r12
/* 803BC9C0 003B9900  4E 80 04 21 */	bctrl 
/* 803BC9C4 003B9904  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC9C8 003B9908  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803BC9CC 003B990C  7D 89 03 A6 */	mtctr r12
/* 803BC9D0 003B9910  4E 80 04 21 */	bctrl 
/* 803BC9D4 003B9914  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BC9D8 003B9918  28 00 00 00 */	cmplwi r0, 0
/* 803BC9DC 003B991C  40 82 00 24 */	bne .L_803BCA00
/* 803BC9E0 003B9920  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BC9E4 003B9924  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BC9E8 003B9928  81 83 00 00 */	lwz r12, 0(r3)
/* 803BC9EC 003B992C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BC9F0 003B9930  7D 89 03 A6 */	mtctr r12
/* 803BC9F4 003B9934  4E 80 04 21 */	bctrl 
/* 803BC9F8 003B9938  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BC9FC 003B993C  48 00 00 94 */	b .L_803BCA90
.L_803BCA00:
/* 803BCA00 003B9940  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BCA04 003B9944  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BCA08 003B9948  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCA0C 003B994C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BCA10 003B9950  7D 89 03 A6 */	mtctr r12
/* 803BCA14 003B9954  4E 80 04 21 */	bctrl 
/* 803BCA18 003B9958  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BCA1C 003B995C  48 00 00 58 */	b .L_803BCA74
.L_803BCA20:
/* 803BCA20 003B9960  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BCA24 003B9964  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BCA28 003B9968  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCA2C 003B996C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BCA30 003B9970  7D 89 03 A6 */	mtctr r12
/* 803BCA34 003B9974  4E 80 04 21 */	bctrl 
/* 803BCA38 003B9978  7C 64 1B 78 */	mr r4, r3
/* 803BCA3C 003B997C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 803BCA40 003B9980  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCA44 003B9984  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BCA48 003B9988  7D 89 03 A6 */	mtctr r12
/* 803BCA4C 003B998C  4E 80 04 21 */	bctrl 
/* 803BCA50 003B9990  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BCA54 003B9994  40 82 00 3C */	bne .L_803BCA90
/* 803BCA58 003B9998  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BCA5C 003B999C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BCA60 003B99A0  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCA64 003B99A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BCA68 003B99A8  7D 89 03 A6 */	mtctr r12
/* 803BCA6C 003B99AC  4E 80 04 21 */	bctrl 
/* 803BCA70 003B99B0  90 61 00 0C */	stw r3, 0xc(r1)
.L_803BCA74:
/* 803BCA74 003B99B4  81 81 00 08 */	lwz r12, 8(r1)
/* 803BCA78 003B99B8  38 61 00 08 */	addi r3, r1, 8
/* 803BCA7C 003B99BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BCA80 003B99C0  7D 89 03 A6 */	mtctr r12
/* 803BCA84 003B99C4  4E 80 04 21 */	bctrl 
/* 803BCA88 003B99C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BCA8C 003B99CC  41 82 FF 94 */	beq .L_803BCA20
.L_803BCA90:
/* 803BCA90 003B99D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 803BCA94 003B99D4  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCA98 003B99D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803BCA9C 003B99DC  7D 89 03 A6 */	mtctr r12
/* 803BCAA0 003B99E0  4E 80 04 21 */	bctrl 
/* 803BCAA4 003B99E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 803BCAA8 003B99E8  7C 04 18 40 */	cmplw r4, r3
/* 803BCAAC 003B99EC  40 82 FF 04 */	bne .L_803BC9B0
/* 803BCAB0 003B99F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BCAB4 003B99F4  7C 08 03 A6 */	mtlr r0
/* 803BCAB8 003B99F8  38 21 00 20 */	addi r1, r1, 0x20
/* 803BCABC 003B99FC  4E 80 00 20 */	blr 
.endfn "doAnimation__24ObjectMgr<11ModelEffect>Fv"

.fn "__ml__23Iterator<11ModelEffect>Fv", weak
/* 803BCAC0 003B9A00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BCAC4 003B9A04  7C 08 02 A6 */	mflr r0
/* 803BCAC8 003B9A08  7C 64 1B 78 */	mr r4, r3
/* 803BCACC 003B9A0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BCAD0 003B9A10  80 63 00 08 */	lwz r3, 8(r3)
/* 803BCAD4 003B9A14  80 84 00 04 */	lwz r4, 4(r4)
/* 803BCAD8 003B9A18  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCADC 003B9A1C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BCAE0 003B9A20  7D 89 03 A6 */	mtctr r12
/* 803BCAE4 003B9A24  4E 80 04 21 */	bctrl 
/* 803BCAE8 003B9A28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BCAEC 003B9A2C  7C 08 03 A6 */	mtlr r0
/* 803BCAF0 003B9A30  38 21 00 10 */	addi r1, r1, 0x10
/* 803BCAF4 003B9A34  4E 80 00 20 */	blr 
.endfn "__ml__23Iterator<11ModelEffect>Fv"

.fn "next__23Iterator<11ModelEffect>Fv", weak
/* 803BCAF8 003B9A38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BCAFC 003B9A3C  7C 08 02 A6 */	mflr r0
/* 803BCB00 003B9A40  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BCB04 003B9A44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BCB08 003B9A48  7C 7F 1B 78 */	mr r31, r3
/* 803BCB0C 003B9A4C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803BCB10 003B9A50  28 00 00 00 */	cmplwi r0, 0
/* 803BCB14 003B9A54  40 82 00 24 */	bne .L_803BCB38
/* 803BCB18 003B9A58  80 7F 00 08 */	lwz r3, 8(r31)
/* 803BCB1C 003B9A5C  80 9F 00 04 */	lwz r4, 4(r31)
/* 803BCB20 003B9A60  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCB24 003B9A64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BCB28 003B9A68  7D 89 03 A6 */	mtctr r12
/* 803BCB2C 003B9A6C  4E 80 04 21 */	bctrl 
/* 803BCB30 003B9A70  90 7F 00 04 */	stw r3, 4(r31)
/* 803BCB34 003B9A74  48 00 00 94 */	b .L_803BCBC8
.L_803BCB38:
/* 803BCB38 003B9A78  80 7F 00 08 */	lwz r3, 8(r31)
/* 803BCB3C 003B9A7C  80 9F 00 04 */	lwz r4, 4(r31)
/* 803BCB40 003B9A80  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCB44 003B9A84  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BCB48 003B9A88  7D 89 03 A6 */	mtctr r12
/* 803BCB4C 003B9A8C  4E 80 04 21 */	bctrl 
/* 803BCB50 003B9A90  90 7F 00 04 */	stw r3, 4(r31)
/* 803BCB54 003B9A94  48 00 00 58 */	b .L_803BCBAC
.L_803BCB58:
/* 803BCB58 003B9A98  80 7F 00 08 */	lwz r3, 8(r31)
/* 803BCB5C 003B9A9C  80 9F 00 04 */	lwz r4, 4(r31)
/* 803BCB60 003B9AA0  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCB64 003B9AA4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BCB68 003B9AA8  7D 89 03 A6 */	mtctr r12
/* 803BCB6C 003B9AAC  4E 80 04 21 */	bctrl 
/* 803BCB70 003B9AB0  7C 64 1B 78 */	mr r4, r3
/* 803BCB74 003B9AB4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803BCB78 003B9AB8  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCB7C 003B9ABC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BCB80 003B9AC0  7D 89 03 A6 */	mtctr r12
/* 803BCB84 003B9AC4  4E 80 04 21 */	bctrl 
/* 803BCB88 003B9AC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BCB8C 003B9ACC  40 82 00 3C */	bne .L_803BCBC8
/* 803BCB90 003B9AD0  80 7F 00 08 */	lwz r3, 8(r31)
/* 803BCB94 003B9AD4  80 9F 00 04 */	lwz r4, 4(r31)
/* 803BCB98 003B9AD8  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCB9C 003B9ADC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BCBA0 003B9AE0  7D 89 03 A6 */	mtctr r12
/* 803BCBA4 003B9AE4  4E 80 04 21 */	bctrl 
/* 803BCBA8 003B9AE8  90 7F 00 04 */	stw r3, 4(r31)
.L_803BCBAC:
/* 803BCBAC 003B9AEC  7F E3 FB 78 */	mr r3, r31
/* 803BCBB0 003B9AF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 803BCBB4 003B9AF4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BCBB8 003B9AF8  7D 89 03 A6 */	mtctr r12
/* 803BCBBC 003B9AFC  4E 80 04 21 */	bctrl 
/* 803BCBC0 003B9B00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BCBC4 003B9B04  41 82 FF 94 */	beq .L_803BCB58
.L_803BCBC8:
/* 803BCBC8 003B9B08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BCBCC 003B9B0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BCBD0 003B9B10  7C 08 03 A6 */	mtlr r0
/* 803BCBD4 003B9B14  38 21 00 10 */	addi r1, r1, 0x10
/* 803BCBD8 003B9B18  4E 80 00 20 */	blr 
.endfn "next__23Iterator<11ModelEffect>Fv"

.fn "first__23Iterator<11ModelEffect>Fv", weak
/* 803BCBDC 003B9B1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BCBE0 003B9B20  7C 08 02 A6 */	mflr r0
/* 803BCBE4 003B9B24  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BCBE8 003B9B28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BCBEC 003B9B2C  7C 7F 1B 78 */	mr r31, r3
/* 803BCBF0 003B9B30  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803BCBF4 003B9B34  28 00 00 00 */	cmplwi r0, 0
/* 803BCBF8 003B9B38  40 82 00 20 */	bne .L_803BCC18
/* 803BCBFC 003B9B3C  80 7F 00 08 */	lwz r3, 8(r31)
/* 803BCC00 003B9B40  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCC04 003B9B44  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BCC08 003B9B48  7D 89 03 A6 */	mtctr r12
/* 803BCC0C 003B9B4C  4E 80 04 21 */	bctrl 
/* 803BCC10 003B9B50  90 7F 00 04 */	stw r3, 4(r31)
/* 803BCC14 003B9B54  48 00 00 90 */	b .L_803BCCA4
.L_803BCC18:
/* 803BCC18 003B9B58  80 7F 00 08 */	lwz r3, 8(r31)
/* 803BCC1C 003B9B5C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCC20 003B9B60  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803BCC24 003B9B64  7D 89 03 A6 */	mtctr r12
/* 803BCC28 003B9B68  4E 80 04 21 */	bctrl 
/* 803BCC2C 003B9B6C  90 7F 00 04 */	stw r3, 4(r31)
/* 803BCC30 003B9B70  48 00 00 58 */	b .L_803BCC88
.L_803BCC34:
/* 803BCC34 003B9B74  80 7F 00 08 */	lwz r3, 8(r31)
/* 803BCC38 003B9B78  80 9F 00 04 */	lwz r4, 4(r31)
/* 803BCC3C 003B9B7C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCC40 003B9B80  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803BCC44 003B9B84  7D 89 03 A6 */	mtctr r12
/* 803BCC48 003B9B88  4E 80 04 21 */	bctrl 
/* 803BCC4C 003B9B8C  7C 64 1B 78 */	mr r4, r3
/* 803BCC50 003B9B90  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803BCC54 003B9B94  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCC58 003B9B98  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BCC5C 003B9B9C  7D 89 03 A6 */	mtctr r12
/* 803BCC60 003B9BA0  4E 80 04 21 */	bctrl 
/* 803BCC64 003B9BA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BCC68 003B9BA8  40 82 00 3C */	bne .L_803BCCA4
/* 803BCC6C 003B9BAC  80 7F 00 08 */	lwz r3, 8(r31)
/* 803BCC70 003B9BB0  80 9F 00 04 */	lwz r4, 4(r31)
/* 803BCC74 003B9BB4  81 83 00 00 */	lwz r12, 0(r3)
/* 803BCC78 003B9BB8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803BCC7C 003B9BBC  7D 89 03 A6 */	mtctr r12
/* 803BCC80 003B9BC0  4E 80 04 21 */	bctrl 
/* 803BCC84 003B9BC4  90 7F 00 04 */	stw r3, 4(r31)
.L_803BCC88:
/* 803BCC88 003B9BC8  7F E3 FB 78 */	mr r3, r31
/* 803BCC8C 003B9BCC  81 9F 00 00 */	lwz r12, 0(r31)
/* 803BCC90 003B9BD0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803BCC94 003B9BD4  7D 89 03 A6 */	mtctr r12
/* 803BCC98 003B9BD8  4E 80 04 21 */	bctrl 
/* 803BCC9C 003B9BDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BCCA0 003B9BE0  41 82 FF 94 */	beq .L_803BCC34
.L_803BCCA4:
/* 803BCCA4 003B9BE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BCCA8 003B9BE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BCCAC 003B9BEC  7C 08 03 A6 */	mtlr r0
/* 803BCCB0 003B9BF0  38 21 00 10 */	addi r1, r1, 0x10
/* 803BCCB4 003B9BF4  4E 80 00 20 */	blr 
.endfn "first__23Iterator<11ModelEffect>Fv"

.fn __sinit_particleMgr_cpp, local
/* 803BCCB8 003B9BF8  3C 80 80 51 */	lis r4, __float_nan@ha
/* 803BCCBC 003B9BFC  38 00 FF FF */	li r0, -1
/* 803BCCC0 003B9C00  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 803BCCC4 003B9C04  3C 60 80 4E */	lis r3, govNAN___Q24Game5P2JST@ha
/* 803BCCC8 003B9C08  90 0D 9A 10 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 803BCCCC 003B9C0C  D4 03 76 88 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 803BCCD0 003B9C10  D0 0D 9A 14 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 803BCCD4 003B9C14  D0 03 00 04 */	stfs f0, 4(r3)
/* 803BCCD8 003B9C18  D0 03 00 08 */	stfs f0, 8(r3)
/* 803BCCDC 003B9C1C  4E 80 00 20 */	blr 
.endfn __sinit_particleMgr_cpp

.fn "@28@resetMgr__28NodeObjectMgr<11ModelEffect>Fv", weak
/* 803BCCE0 003B9C20  38 63 FF E4 */	addi r3, r3, -28
/* 803BCCE4 003B9C24  4B FF F1 B4 */	b "resetMgr__28NodeObjectMgr<11ModelEffect>Fv"
.endfn "@28@resetMgr__28NodeObjectMgr<11ModelEffect>Fv"

.fn "@28@doDirectDraw__24ObjectMgr<11ModelEffect>FR8Graphics", weak
/* 803BCCE8 003B9C28  38 63 FF E4 */	addi r3, r3, -28
/* 803BCCEC 003B9C2C  4B FF F2 00 */	b "doDirectDraw__24ObjectMgr<11ModelEffect>FR8Graphics"
.endfn "@28@doDirectDraw__24ObjectMgr<11ModelEffect>FR8Graphics"

.fn "@28@doSimulation__24ObjectMgr<11ModelEffect>Ff", weak
/* 803BCCF0 003B9C30  38 63 FF E4 */	addi r3, r3, -28
/* 803BCCF4 003B9C34  4B FF F4 38 */	b "doSimulation__24ObjectMgr<11ModelEffect>Ff"
.endfn "@28@doSimulation__24ObjectMgr<11ModelEffect>Ff"

.fn "@28@doViewCalc__24ObjectMgr<11ModelEffect>Fv", weak
/* 803BCCF8 003B9C38  38 63 FF E4 */	addi r3, r3, -28
/* 803BCCFC 003B9C3C  4B FF F6 24 */	b "doViewCalc__24ObjectMgr<11ModelEffect>Fv"
.endfn "@28@doViewCalc__24ObjectMgr<11ModelEffect>Fv"

.fn "@28@doSetView__24ObjectMgr<11ModelEffect>Fi", weak
/* 803BCD00 003B9C40  38 63 FF E4 */	addi r3, r3, -28
/* 803BCD04 003B9C44  4B FF F8 00 */	b "doSetView__24ObjectMgr<11ModelEffect>Fi"
.endfn "@28@doSetView__24ObjectMgr<11ModelEffect>Fi"

.fn "@28@doEntry__24ObjectMgr<11ModelEffect>Fv", weak
/* 803BCD08 003B9C48  38 63 FF E4 */	addi r3, r3, -28
/* 803BCD0C 003B9C4C  4B FF F9 EC */	b "doEntry__24ObjectMgr<11ModelEffect>Fv"
.endfn "@28@doEntry__24ObjectMgr<11ModelEffect>Fv"

.fn "@28@doAnimation__24ObjectMgr<11ModelEffect>Fv", weak
/* 803BCD10 003B9C50  38 63 FF E4 */	addi r3, r3, -28
/* 803BCD14 003B9C54  4B FF FB C8 */	b "doAnimation__24ObjectMgr<11ModelEffect>Fv"
.endfn "@28@doAnimation__24ObjectMgr<11ModelEffect>Fv"
