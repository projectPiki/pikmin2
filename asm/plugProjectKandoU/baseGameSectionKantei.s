.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_baseGameSectionKantei_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__Q34Game15BaseGameSection10ZoomCamera
__vt__Q34Game15BaseGameSection10ZoomCamera:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game15BaseGameSection10ZoomCameraFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__17Container<5Plane>FPv"
	.4byte "getNext__22ArrayContainer<5Plane>FPv"
	.4byte "getStart__22ArrayContainer<5Plane>Fv"
	.4byte "getEnd__22ArrayContainer<5Plane>Fv"
	.4byte "get__22ArrayContainer<5Plane>FPv"
	.4byte "getAt__22ArrayContainer<5Plane>Fi"
	.4byte "getTo__22ArrayContainer<5Plane>Fv"
	.4byte writeObject__9CullPlaneFR6StreamR5Plane
	.4byte readObject__9CullPlaneFR6StreamR5Plane
	.4byte "write__22ArrayContainer<5Plane>FR6Stream"
	.4byte "read__22ArrayContainer<5Plane>FR6Stream"
	.4byte "alloc__22ArrayContainer<5Plane>Fi"
	.4byte "addOne__22ArrayContainer<5Plane>FR5Plane"
	.4byte "setArray__22ArrayContainer<5Plane>FP5Planei"
	.4byte getViewMatrix__6CameraFb
	.4byte getPosition__6CameraFv
	.4byte updatePlanes__6CameraFv
	.4byte updateScreenConstants__6CameraFv
	.4byte getLookAtPosition___12LookAtCameraFv
	.4byte getTargetDistance__6CameraFv
	.4byte getPositionPtr__6CameraFv
	.4byte on_getPositionPtr__12LookAtCameraFv
	.4byte getSoundPositionPtr__6CameraFv
	.4byte getSoundMatrixPtr__6CameraFv
	.4byte isSpecialCamera__6CameraFv
	.4byte updateMatrix__12LookAtCameraFv
	.4byte doUpdate__Q34Game15BaseGameSection10ZoomCameraFv
	.4byte startVibration__12LookAtCameraFi
.global __vt__Q32og6Screen21DispMemberSpecialItem
__vt__Q32og6Screen21DispMemberSpecialItem:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen21DispMemberSpecialItemFv
	.4byte getOwnerID__Q32og6Screen21DispMemberSpecialItemFv
	.4byte getMemberID__Q32og6Screen21DispMemberSpecialItemFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q32og6Screen16DispMemberKantei
__vt__Q32og6Screen16DispMemberKantei:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen16DispMemberKanteiFv
	.4byte getOwnerID__Q32og6Screen16DispMemberKanteiFv
	.4byte getMemberID__Q32og6Screen16DispMemberKanteiFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.global asArrayOtakara__4Game
asArrayOtakara__4Game:
	.4byte 0xFFFFFFFF
	.float 1.0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 4
gfNAN___Q24Game5P2JST:
	.skip 4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051A578:
	.float 0.0
lbl_8051A57C:
	.float 1.5
lbl_8051A580:
	.float 20.0
lbl_8051A584:
	.float 0.5
.balign 8
lbl_8051A588:
	.4byte 0x43300000
	.4byte 0x00000000
lbl_8051A590:
	.float 1.5707964 # half of pi
lbl_8051A594:
	.float 1.0
lbl_8051A598:
	.float -1.0
lbl_8051A59C:
	.float -1.5707964 # negative half-pi
lbl_8051A5A0:
	.float 1023.5
lbl_8051A5A4:
	.float 0.75
lbl_8051A5A8:
	.float -325.9493
lbl_8051A5AC:
	.float 325.9493
lbl_8051A5B0:
	.float 0.2
lbl_8051A5B4:
	.float 0.12566371
lbl_8051A5B8:
	.float 6.2831855 #tau
lbl_8051A5BC:
	.float 0.06283186 #tau/100
lbl_8051A5C0:
	.float 0.5340708
lbl_8051A5C4:
	.float 2.0
lbl_8051A5C8:
	.float 6.0
lbl_8051A5CC:
	.float 10.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global drawOtakaraWindow__Q24Game15BaseGameSectionFR8Graphics
drawOtakaraWindow__Q24Game15BaseGameSectionFR8Graphics:
/* 8023B534 00238474  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023B538 00238478  7C 08 02 A6 */	mflr r0
/* 8023B53C 0023847C  3C A0 80 51 */	lis r5, j3dSys@ha
/* 8023B540 00238480  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023B544 00238484  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8023B548 00238488  7C 9F 23 78 */	mr r31, r4
/* 8023B54C 0023848C  93 C1 00 08 */	stw r30, 8(r1)
/* 8023B550 00238490  7C 7E 1B 78 */	mr r30, r3
/* 8023B554 00238494  38 65 F2 30 */	addi r3, r5, j3dSys@l
/* 8023B558 00238498  4B E2 2E 6D */	bl reinitGX__6J3DSysFv
/* 8023B55C 0023849C  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8023B560 002384A0  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 8023B564 002384A4  4B E2 26 A9 */	bl drawInit__6J3DSysFv
/* 8023B568 002384A8  7F C3 F3 78 */	mr r3, r30
/* 8023B56C 002384AC  7F E4 FB 78 */	mr r4, r31
/* 8023B570 002384B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8023B574 002384B4  81 8C 01 1C */	lwz r12, 0x11c(r12)
/* 8023B578 002384B8  7D 89 03 A6 */	mtctr r12
/* 8023B57C 002384BC  4E 80 04 21 */	bctrl 
/* 8023B580 002384C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023B584 002384C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8023B588 002384C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8023B58C 002384CC  7C 08 03 A6 */	mtlr r0
/* 8023B590 002384D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8023B594 002384D4  4E 80 00 20 */	blr 

.if version == 1
.global setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature:
/* 8023B598 002384D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023B59C 002384DC  7C 08 02 A6 */	mflr r0
/* 8023B5A0 002384E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023B5A4 002384E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8023B5A8 002384E8  7C 9F 23 79 */	or. r31, r4, r4
/* 8023B5AC 002384EC  93 C1 00 08 */	stw r30, 8(r1)
/* 8023B5B0 002384F0  7C 7E 1B 78 */	mr r30, r3
/* 8023B5B4 002384F4  41 82 00 5C */	beq .L_8023B610
/* 8023B5B8 002384F8  80 7E 01 3C */	lwz r3, 0x15c(r30)
/* 8023B5BC 002384FC  28 03 00 00 */	cmplwi r3, 0
/* 8023B5C0 00238500  41 82 00 50 */	beq .L_8023B610
/* 8023B5C4 00238504  81 83 00 00 */	lwz r12, 0(r3)
/* 8023B5C8 00238508  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 8023B5CC 0023850C  7D 89 03 A6 */	mtctr r12
/* 8023B5D0 00238510  4E 80 04 21 */	bctrl 
/* 8023B5D4 00238514  80 7E 01 3C */	lwz r3, 0x15c(r30)
/* 8023B5D8 00238518  81 83 00 00 */	lwz r12, 0(r3)
/* 8023B5DC 0023851C  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8023B5E0 00238520  7D 89 03 A6 */	mtctr r12
/* 8023B5E4 00238524  4E 80 04 21 */	bctrl 
/* 8023B5E8 00238528  7F E3 FB 78 */	mr r3, r31
/* 8023B5EC 0023852C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023B5F0 00238530  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 8023B5F4 00238534  7D 89 03 A6 */	mtctr r12
/* 8023B5F8 00238538  4E 80 04 21 */	bctrl 
/* 8023B5FC 0023853C  7F E3 FB 78 */	mr r3, r31
/* 8023B600 00238540  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023B604 00238544  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8023B608 00238548  7D 89 03 A6 */	mtctr r12
/* 8023B60C 0023854C  4E 80 04 21 */	bctrl 
.L_8023B610:
/* 8023B610 00238550  93 FE 01 3C */	stw r31, 0x15c(r30)
/* 8023B614 00238554  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023B618 00238558  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8023B61C 0023855C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8023B620 00238560  7C 08 03 A6 */	mtlr r0
/* 8023B624 00238564  38 21 00 10 */	addi r1, r1, 0x10
/* 8023B628 00238568  4E 80 00 20 */	blr 
.else
.global setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature:
/* 8023B598 002384D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023B59C 002384DC  7C 08 02 A6 */	mflr r0
/* 8023B5A0 002384E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023B5A4 002384E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8023B5A8 002384E8  7C 9F 23 79 */	or. r31, r4, r4
/* 8023B5AC 002384EC  93 C1 00 08 */	stw r30, 8(r1)
/* 8023B5B0 002384F0  7C 7E 1B 78 */	mr r30, r3
/* 8023B5B4 002384F4  41 82 00 5C */	beq .L_8023B610
/* 8023B5B8 002384F8  80 7E 01 3C */	lwz r3, 0x13c(r30)
/* 8023B5BC 002384FC  28 03 00 00 */	cmplwi r3, 0
/* 8023B5C0 00238500  41 82 00 50 */	beq .L_8023B610
/* 8023B5C4 00238504  81 83 00 00 */	lwz r12, 0(r3)
/* 8023B5C8 00238508  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 8023B5CC 0023850C  7D 89 03 A6 */	mtctr r12
/* 8023B5D0 00238510  4E 80 04 21 */	bctrl 
/* 8023B5D4 00238514  80 7E 01 3C */	lwz r3, 0x13c(r30)
/* 8023B5D8 00238518  81 83 00 00 */	lwz r12, 0(r3)
/* 8023B5DC 0023851C  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8023B5E0 00238520  7D 89 03 A6 */	mtctr r12
/* 8023B5E4 00238524  4E 80 04 21 */	bctrl 
/* 8023B5E8 00238528  7F E3 FB 78 */	mr r3, r31
/* 8023B5EC 0023852C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023B5F0 00238530  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 8023B5F4 00238534  7D 89 03 A6 */	mtctr r12
/* 8023B5F8 00238538  4E 80 04 21 */	bctrl 
/* 8023B5FC 0023853C  7F E3 FB 78 */	mr r3, r31
/* 8023B600 00238540  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023B604 00238544  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8023B608 00238548  7D 89 03 A6 */	mtctr r12
/* 8023B60C 0023854C  4E 80 04 21 */	bctrl 
.L_8023B610:
/* 8023B610 00238550  93 FE 01 3C */	stw r31, 0x13c(r30)
/* 8023B614 00238554  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023B618 00238558  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8023B61C 0023855C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8023B620 00238560  7C 08 03 A6 */	mtlr r0
/* 8023B624 00238564  38 21 00 10 */	addi r1, r1, 0x10
/* 8023B628 00238568  4E 80 00 20 */	blr 
.endif

.if version == 1
.global startZoomWindow__Q24Game15BaseGameSectionFv
startZoomWindow__Q24Game15BaseGameSectionFv:
/* 8023B62C 0023856C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8023B630 00238570  7C 08 02 A6 */	mflr r0
/* 8023B634 00238574  90 01 00 54 */	stw r0, 0x54(r1)
/* 8023B638 00238578  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8023B63C 0023857C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8023B640 00238580  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8023B644 00238584  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8023B648 00238588  7C 7E 1B 78 */	mr r30, r3
/* 8023B64C 0023858C  38 00 00 01 */	li r0, 1
/* 8023B650 00238590  90 03 01 34 */	stw r0, 0x154(r3)
/* 8023B654 00238594  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023B658 00238598  D0 03 01 40 */	stfs f0, 0x160(r3)
/* 8023B65C 0023859C  80 63 01 3C */	lwz r3, 0x15c(r3)
/* 8023B660 002385A0  83 E3 01 74 */	lwz r31, 0x174(r3)
/* 8023B664 002385A4  7F E3 FB 78 */	mr r3, r31
/* 8023B668 002385A8  48 20 2F 6D */	bl getRoughBoundingRadius__Q28SysShape5ModelFv
/* 8023B66C 002385AC  FF E0 08 90 */	fmr f31, f1
/* 8023B670 002385B0  7F E4 FB 78 */	mr r4, r31
/* 8023B674 002385B4  38 61 00 08 */	addi r3, r1, 8
/* 8023B678 002385B8  48 20 30 B9 */	bl getRoughCenter__Q28SysShape5ModelFv
/* 8023B67C 002385BC  80 7E 01 3C */	lwz r3, 0x15c(r30)
/* 8023B680 002385C0  C0 41 00 08 */	lfs f2, 8(r1)
/* 8023B684 002385C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8023B688 002385C8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8023B68C 002385CC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8023B690 002385D0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8023B694 002385D4  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8023B698 002385D8  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8023B69C 002385DC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8023B6A0 002385E0  7D 89 03 A6 */	mtctr r12
/* 8023B6A4 002385E4  4E 80 04 21 */	bctrl 
/* 8023B6A8 002385E8  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8023B6AC 002385EC  28 00 04 06 */	cmplwi r0, 0x406
/* 8023B6B0 002385F0  40 82 00 0C */	bne .L_8023B6BC
/* 8023B6B4 002385F4  C0 02 C2 1C */	lfs f0, lbl_8051A57C@sda21(r2)
/* 8023B6B8 002385F8  EF FF 00 32 */	fmuls f31, f31, f0
.L_8023B6BC:
/* 8023B6BC 002385FC  80 7E 01 3C */	lwz r3, 0x15c(r30)
/* 8023B6C0 00238600  81 83 00 00 */	lwz r12, 0(r3)
/* 8023B6C4 00238604  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8023B6C8 00238608  7D 89 03 A6 */	mtctr r12
/* 8023B6CC 0023860C  4E 80 04 21 */	bctrl 
/* 8023B6D0 00238610  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8023B6D4 00238614  28 00 04 01 */	cmplwi r0, 0x401
/* 8023B6D8 00238618  40 82 00 88 */	bne .L_8023B760
/* 8023B6DC 0023861C  83 FE 01 3C */	lwz r31, 0x15c(r30)
/* 8023B6E0 00238620  7F E3 FB 78 */	mr r3, r31
/* 8023B6E4 00238624  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023B6E8 00238628  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8023B6EC 0023862C  7D 89 03 A6 */	mtctr r12
/* 8023B6F0 00238630  4E 80 04 21 */	bctrl 
/* 8023B6F4 00238634  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8023B6F8 00238638  28 00 00 03 */	cmplwi r0, 3
/* 8023B6FC 0023863C  40 82 00 50 */	bne .L_8023B74C
/* 8023B700 00238640  7F E3 FB 78 */	mr r3, r31
/* 8023B704 00238644  4B F2 B2 DD */	bl getConfigIndex__Q24Game6PelletFv
/* 8023B708 00238648  38 A0 00 00 */	li r5, 0
/* 8023B70C 0023864C  38 8D 84 70 */	addi r4, r13, asArrayOtakara__4Game@sda21
/* 8023B710 00238650  48 00 00 2C */	b .L_8023B73C
.L_8023B714:
/* 8023B714 00238654  7C 03 00 00 */	cmpw r3, r0
/* 8023B718 00238658  40 82 00 1C */	bne .L_8023B734
/* 8023B71C 0023865C  54 A0 18 38 */	slwi r0, r5, 3
/* 8023B720 00238660  38 6D 84 70 */	addi r3, r13, asArrayOtakara__4Game@sda21
/* 8023B724 00238664  7C 63 02 14 */	add r3, r3, r0
/* 8023B728 00238668  C0 03 00 04 */	lfs f0, 4(r3)
/* 8023B72C 0023866C  EF FF 00 24 */	fdivs f31, f31, f0
/* 8023B730 00238670  48 00 00 30 */	b .L_8023B760
.L_8023B734:
/* 8023B734 00238674  38 84 00 08 */	addi r4, r4, 8
/* 8023B738 00238678  38 A5 00 01 */	addi r5, r5, 1
.L_8023B73C:
/* 8023B73C 0023867C  80 04 00 00 */	lwz r0, 0(r4)
/* 8023B740 00238680  2C 00 FF FF */	cmpwi r0, -1
/* 8023B744 00238684  40 82 FF D0 */	bne .L_8023B714
/* 8023B748 00238688  48 00 00 18 */	b .L_8023B760
.L_8023B74C:
/* 8023B74C 0023868C  7F E3 FB 78 */	mr r3, r31
/* 8023B750 00238690  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023B754 00238694  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8023B758 00238698  7D 89 03 A6 */	mtctr r12
/* 8023B75C 0023869C  4E 80 04 21 */	bctrl 
.L_8023B760:
/* 8023B760 002386A0  FC 40 F8 90 */	fmr f2, f31
/* 8023B764 002386A4  80 7E 01 4C */	lwz r3, 0x16c(r30)
/* 8023B768 002386A8  C0 22 C2 20 */	lfs f1, lbl_8051A580@sda21(r2)
/* 8023B76C 002386AC  48 1D F7 8D */	bl calcProperDistance__6CameraFff
/* 8023B770 002386B0  C0 A1 00 20 */	lfs f5, 0x20(r1)
/* 8023B774 002386B4  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 8023B778 002386B8  EC 05 01 72 */	fmuls f0, f5, f5
/* 8023B77C 002386BC  C0 61 00 28 */	lfs f3, 0x28(r1)
/* 8023B780 002386C0  EC 82 00 B2 */	fmuls f4, f2, f2
/* 8023B784 002386C4  C0 42 C2 18 */	lfs f2, lbl_8051A578@sda21(r2)
/* 8023B788 002386C8  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8023B78C 002386CC  EC 00 20 2A */	fadds f0, f0, f4
/* 8023B790 002386D0  EC 03 00 2A */	fadds f0, f3, f0
/* 8023B794 002386D4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8023B798 002386D8  40 81 00 20 */	ble .L_8023B7B8
/* 8023B79C 002386DC  EC 05 21 7A */	fmadds f0, f5, f5, f4
/* 8023B7A0 002386E0  EC 03 00 2A */	fadds f0, f3, f0
/* 8023B7A4 002386E4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8023B7A8 002386E8  40 81 00 14 */	ble .L_8023B7BC
/* 8023B7AC 002386EC  FC 40 00 34 */	frsqrte f2, f0
/* 8023B7B0 002386F0  EC 02 00 32 */	fmuls f0, f2, f0
/* 8023B7B4 002386F4  48 00 00 08 */	b .L_8023B7BC
.L_8023B7B8:
/* 8023B7B8 002386F8  FC 00 10 90 */	fmr f0, f2
.L_8023B7BC:
/* 8023B7BC 002386FC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8023B7C0 00238700  C0 62 C2 18 */	lfs f3, lbl_8051A578@sda21(r2)
/* 8023B7C4 00238704  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8023B7C8 00238708  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8023B7CC 0023870C  C0 03 08 00 */	lfs f0, 0x800(r3)
/* 8023B7D0 00238710  38 81 00 14 */	addi r4, r1, 0x14
/* 8023B7D4 00238714  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 8023B7D8 00238718  EC 41 00 32 */	fmuls f2, f1, f0
/* 8023B7DC 0023871C  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8023B7E0 00238720  80 7E 01 4C */	lwz r3, 0x16c(r30)
/* 8023B7E4 00238724  80 BE 01 0C */	lwz r5, 0x12c(r30)
/* 8023B7E8 00238728  48 00 03 49 */	bl "init__Q34Game15BaseGameSection10ZoomCameraFffR10Vector3<f>P10Controller"
/* 8023B7EC 0023872C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8023B7F0 00238730  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8023B7F4 00238734  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8023B7F8 00238738  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8023B7FC 0023873C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8023B800 00238740  7C 08 03 A6 */	mtlr r0
/* 8023B804 00238744  38 21 00 50 */	addi r1, r1, 0x50
/* 8023B808 00238748  4E 80 00 20 */	blr 
.else
.global startZoomWindow__Q24Game15BaseGameSectionFv
startZoomWindow__Q24Game15BaseGameSectionFv:
/* 8023B62C 0023856C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8023B630 00238570  7C 08 02 A6 */	mflr r0
/* 8023B634 00238574  90 01 00 54 */	stw r0, 0x54(r1)
/* 8023B638 00238578  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8023B63C 0023857C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8023B640 00238580  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8023B644 00238584  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8023B648 00238588  7C 7E 1B 78 */	mr r30, r3
/* 8023B64C 0023858C  38 00 00 01 */	li r0, 1
/* 8023B650 00238590  90 03 01 34 */	stw r0, 0x134(r3)
/* 8023B654 00238594  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023B658 00238598  D0 03 01 40 */	stfs f0, 0x140(r3)
/* 8023B65C 0023859C  80 63 01 3C */	lwz r3, 0x13c(r3)
/* 8023B660 002385A0  83 E3 01 74 */	lwz r31, 0x174(r3)
/* 8023B664 002385A4  7F E3 FB 78 */	mr r3, r31
/* 8023B668 002385A8  48 20 2F 6D */	bl getRoughBoundingRadius__Q28SysShape5ModelFv
/* 8023B66C 002385AC  FF E0 08 90 */	fmr f31, f1
/* 8023B670 002385B0  7F E4 FB 78 */	mr r4, r31
/* 8023B674 002385B4  38 61 00 08 */	addi r3, r1, 8
/* 8023B678 002385B8  48 20 30 B9 */	bl getRoughCenter__Q28SysShape5ModelFv
/* 8023B67C 002385BC  80 7E 01 3C */	lwz r3, 0x13c(r30)
/* 8023B680 002385C0  C0 41 00 08 */	lfs f2, 8(r1)
/* 8023B684 002385C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8023B688 002385C8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8023B68C 002385CC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8023B690 002385D0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8023B694 002385D4  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8023B698 002385D8  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8023B69C 002385DC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8023B6A0 002385E0  7D 89 03 A6 */	mtctr r12
/* 8023B6A4 002385E4  4E 80 04 21 */	bctrl 
/* 8023B6A8 002385E8  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8023B6AC 002385EC  28 00 04 06 */	cmplwi r0, 0x406
/* 8023B6B0 002385F0  40 82 00 0C */	bne .L_8023B6BC
/* 8023B6B4 002385F4  C0 02 C2 1C */	lfs f0, lbl_8051A57C@sda21(r2)
/* 8023B6B8 002385F8  EF FF 00 32 */	fmuls f31, f31, f0
.L_8023B6BC:
/* 8023B6BC 002385FC  80 7E 01 3C */	lwz r3, 0x13c(r30)
/* 8023B6C0 00238600  81 83 00 00 */	lwz r12, 0(r3)
/* 8023B6C4 00238604  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8023B6C8 00238608  7D 89 03 A6 */	mtctr r12
/* 8023B6CC 0023860C  4E 80 04 21 */	bctrl 
/* 8023B6D0 00238610  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 8023B6D4 00238614  28 00 04 01 */	cmplwi r0, 0x401
/* 8023B6D8 00238618  40 82 00 88 */	bne .L_8023B760
/* 8023B6DC 0023861C  83 FE 01 3C */	lwz r31, 0x13c(r30)
/* 8023B6E0 00238620  7F E3 FB 78 */	mr r3, r31
/* 8023B6E4 00238624  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023B6E8 00238628  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8023B6EC 0023862C  7D 89 03 A6 */	mtctr r12
/* 8023B6F0 00238630  4E 80 04 21 */	bctrl 
/* 8023B6F4 00238634  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8023B6F8 00238638  28 00 00 03 */	cmplwi r0, 3
/* 8023B6FC 0023863C  40 82 00 50 */	bne .L_8023B74C
/* 8023B700 00238640  7F E3 FB 78 */	mr r3, r31
/* 8023B704 00238644  4B F2 B2 DD */	bl getConfigIndex__Q24Game6PelletFv
/* 8023B708 00238648  38 A0 00 00 */	li r5, 0
/* 8023B70C 0023864C  38 8D 84 70 */	addi r4, r13, asArrayOtakara__4Game@sda21
/* 8023B710 00238650  48 00 00 2C */	b .L_8023B73C
.L_8023B714:
/* 8023B714 00238654  7C 03 00 00 */	cmpw r3, r0
/* 8023B718 00238658  40 82 00 1C */	bne .L_8023B734
/* 8023B71C 0023865C  54 A0 18 38 */	slwi r0, r5, 3
/* 8023B720 00238660  38 6D 84 70 */	addi r3, r13, asArrayOtakara__4Game@sda21
/* 8023B724 00238664  7C 63 02 14 */	add r3, r3, r0
/* 8023B728 00238668  C0 03 00 04 */	lfs f0, 4(r3)
/* 8023B72C 0023866C  EF FF 00 24 */	fdivs f31, f31, f0
/* 8023B730 00238670  48 00 00 30 */	b .L_8023B760
.L_8023B734:
/* 8023B734 00238674  38 84 00 08 */	addi r4, r4, 8
/* 8023B738 00238678  38 A5 00 01 */	addi r5, r5, 1
.L_8023B73C:
/* 8023B73C 0023867C  80 04 00 00 */	lwz r0, 0(r4)
/* 8023B740 00238680  2C 00 FF FF */	cmpwi r0, -1
/* 8023B744 00238684  40 82 FF D0 */	bne .L_8023B714
/* 8023B748 00238688  48 00 00 18 */	b .L_8023B760
.L_8023B74C:
/* 8023B74C 0023868C  7F E3 FB 78 */	mr r3, r31
/* 8023B750 00238690  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023B754 00238694  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8023B758 00238698  7D 89 03 A6 */	mtctr r12
/* 8023B75C 0023869C  4E 80 04 21 */	bctrl 
.L_8023B760:
/* 8023B760 002386A0  FC 40 F8 90 */	fmr f2, f31
/* 8023B764 002386A4  80 7E 01 4C */	lwz r3, 0x14c(r30)
/* 8023B768 002386A8  C0 22 C2 20 */	lfs f1, lbl_8051A580@sda21(r2)
/* 8023B76C 002386AC  48 1D F7 8D */	bl calcProperDistance__6CameraFff
/* 8023B770 002386B0  C0 A1 00 20 */	lfs f5, 0x20(r1)
/* 8023B774 002386B4  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 8023B778 002386B8  EC 05 01 72 */	fmuls f0, f5, f5
/* 8023B77C 002386BC  C0 61 00 28 */	lfs f3, 0x28(r1)
/* 8023B780 002386C0  EC 82 00 B2 */	fmuls f4, f2, f2
/* 8023B784 002386C4  C0 42 C2 18 */	lfs f2, lbl_8051A578@sda21(r2)
/* 8023B788 002386C8  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8023B78C 002386CC  EC 00 20 2A */	fadds f0, f0, f4
/* 8023B790 002386D0  EC 03 00 2A */	fadds f0, f3, f0
/* 8023B794 002386D4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8023B798 002386D8  40 81 00 20 */	ble .L_8023B7B8
/* 8023B79C 002386DC  EC 05 21 7A */	fmadds f0, f5, f5, f4
/* 8023B7A0 002386E0  EC 03 00 2A */	fadds f0, f3, f0
/* 8023B7A4 002386E4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8023B7A8 002386E8  40 81 00 14 */	ble .L_8023B7BC
/* 8023B7AC 002386EC  FC 40 00 34 */	frsqrte f2, f0
/* 8023B7B0 002386F0  EC 02 00 32 */	fmuls f0, f2, f0
/* 8023B7B4 002386F4  48 00 00 08 */	b .L_8023B7BC
.L_8023B7B8:
/* 8023B7B8 002386F8  FC 00 10 90 */	fmr f0, f2
.L_8023B7BC:
/* 8023B7BC 002386FC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8023B7C0 00238700  C0 62 C2 18 */	lfs f3, lbl_8051A578@sda21(r2)
/* 8023B7C4 00238704  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8023B7C8 00238708  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8023B7CC 0023870C  C0 03 08 00 */	lfs f0, 0x800(r3)
/* 8023B7D0 00238710  38 81 00 14 */	addi r4, r1, 0x14
/* 8023B7D4 00238714  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 8023B7D8 00238718  EC 41 00 32 */	fmuls f2, f1, f0
/* 8023B7DC 0023871C  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8023B7E0 00238720  80 7E 01 4C */	lwz r3, 0x14c(r30)
/* 8023B7E4 00238724  80 BE 01 0C */	lwz r5, 0x10c(r30)
/* 8023B7E8 00238728  48 00 03 49 */	bl "init__Q34Game15BaseGameSection10ZoomCameraFffR10Vector3<f>P10Controller"
/* 8023B7EC 0023872C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8023B7F0 00238730  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8023B7F4 00238734  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8023B7F8 00238738  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8023B7FC 0023873C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8023B800 00238740  7C 08 03 A6 */	mtlr r0
/* 8023B804 00238744  38 21 00 50 */	addi r1, r1, 0x50
/* 8023B808 00238748  4E 80 00 20 */	blr 
.endif

.if version == 1
.global startKantei2D__Q24Game15BaseGameSectionFv
startKantei2D__Q24Game15BaseGameSectionFv:
/* 8023B80C 0023874C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8023B810 00238750  7C 08 02 A6 */	mflr r0
/* 8023B814 00238754  90 01 00 84 */	stw r0, 0x84(r1)
/* 8023B818 00238758  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8023B81C 0023875C  93 C1 00 78 */	stw r30, 0x78(r1)
/* 8023B820 00238760  7C 7E 1B 78 */	mr r30, r3
/* 8023B824 00238764  93 A1 00 74 */	stw r29, 0x74(r1)
/* 8023B828 00238768  93 81 00 70 */	stw r28, 0x70(r1)
/* 8023B82C 0023876C  80 63 01 3C */	lwz r3, 0x15c(r3)
/* 8023B830 00238770  81 83 00 00 */	lwz r12, 0(r3)
/* 8023B834 00238774  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8023B838 00238778  7D 89 03 A6 */	mtctr r12
/* 8023B83C 0023877C  4E 80 04 21 */	bctrl 
/* 8023B840 00238780  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8023B844 00238784  41 82 01 B4 */	beq .L_8023B9F8
/* 8023B848 00238788  83 FE 01 3C */	lwz r31, 0x15c(r30)
/* 8023B84C 0023878C  7F E3 FB 78 */	mr r3, r31
/* 8023B850 00238790  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023B854 00238794  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8023B858 00238798  7D 89 03 A6 */	mtctr r12
/* 8023B85C 0023879C  4E 80 04 21 */	bctrl 
/* 8023B860 002387A0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8023B864 002387A4  28 00 00 03 */	cmplwi r0, 3
/* 8023B868 002387A8  41 82 00 24 */	beq .L_8023B88C
/* 8023B86C 002387AC  7F E3 FB 78 */	mr r3, r31
/* 8023B870 002387B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023B874 002387B4  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8023B878 002387B8  7D 89 03 A6 */	mtctr r12
/* 8023B87C 002387BC  4E 80 04 21 */	bctrl 
/* 8023B880 002387C0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8023B884 002387C4  28 00 00 04 */	cmplwi r0, 4
/* 8023B888 002387C8  40 82 01 20 */	bne .L_8023B9A8
.L_8023B88C:
/* 8023B88C 002387CC  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8023B890 002387D0  39 20 00 00 */	li r9, 0
/* 8023B894 002387D4  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8023B898 002387D8  38 E0 00 7B */	li r7, 0x7b
/* 8023B89C 002387DC  3C 60 80 4C */	lis r3, __vt__Q32og6Screen16DispMemberKantei@ha
/* 8023B8A0 002387E0  90 01 00 30 */	stw r0, 0x30(r1)
/* 8023B8A4 002387E4  39 03 17 2C */	addi r8, r3, __vt__Q32og6Screen16DispMemberKantei@l
/* 8023B8A8 002387E8  38 80 13 88 */	li r4, 0x1388
/* 8023B8AC 002387EC  38 60 15 B3 */	li r3, 0x15b3
/* 8023B8B0 002387F0  38 00 00 01 */	li r0, 1
/* 8023B8B4 002387F4  91 21 00 34 */	stw r9, 0x34(r1)
/* 8023B8B8 002387F8  38 A1 00 0C */	addi r5, r1, 0xc
/* 8023B8BC 002387FC  81 4D 94 90 */	lwz r10, playData__4Game@sda21(r13)
/* 8023B8C0 00238800  38 C1 00 08 */	addi r6, r1, 8
/* 8023B8C4 00238804  91 01 00 30 */	stw r8, 0x30(r1)
/* 8023B8C8 00238808  90 E1 00 38 */	stw r7, 0x38(r1)
/* 8023B8CC 0023880C  90 81 00 3C */	stw r4, 0x3c(r1)
/* 8023B8D0 00238810  91 21 00 64 */	stw r9, 0x64(r1)
/* 8023B8D4 00238814  91 21 00 40 */	stw r9, 0x40(r1)
/* 8023B8D8 00238818  91 21 00 4C */	stw r9, 0x4c(r1)
/* 8023B8DC 0023881C  91 21 00 48 */	stw r9, 0x48(r1)
/* 8023B8E0 00238820  91 21 00 50 */	stw r9, 0x50(r1)
/* 8023B8E4 00238824  90 61 00 54 */	stw r3, 0x54(r1)
/* 8023B8E8 00238828  99 21 00 58 */	stb r9, 0x58(r1)
/* 8023B8EC 0023882C  91 21 00 5C */	stw r9, 0x5c(r1)
/* 8023B8F0 00238830  99 21 00 59 */	stb r9, 0x59(r1)
/* 8023B8F4 00238834  99 21 00 60 */	stb r9, 0x60(r1)
/* 8023B8F8 00238838  99 21 00 68 */	stb r9, 0x68(r1)
/* 8023B8FC 0023883C  98 01 00 69 */	stb r0, 0x69(r1)
/* 8023B900 00238840  80 9F 03 5C */	lwz r4, 0x35c(r31)
/* 8023B904 00238844  83 AA 00 E8 */	lwz r29, 0xe8(r10)
/* 8023B908 00238848  83 8A 00 EC */	lwz r28, 0xec(r10)
/* 8023B90C 0023884C  80 04 01 70 */	lwz r0, 0x170(r4)
/* 8023B910 00238850  90 01 00 38 */	stw r0, 0x38(r1)
/* 8023B914 00238854  80 1E 01 48 */	lwz r0, 0x168(r30)
/* 8023B918 00238858  90 01 00 40 */	stw r0, 0x40(r1)
/* 8023B91C 0023885C  80 64 02 30 */	lwz r3, 0x230(r4)
/* 8023B920 00238860  80 84 02 34 */	lwz r4, 0x234(r4)
/* 8023B924 00238864  90 81 00 4C */	stw r4, 0x4c(r1)
/* 8023B928 00238868  90 61 00 48 */	stw r3, 0x48(r1)
/* 8023B92C 0023886C  48 20 1A 01 */	bl convertU64ToMessageID__5P2JMEFUxPUlPUl
/* 8023B930 00238870  7C 1D E2 14 */	add r0, r29, r28
/* 8023B934 00238874  93 81 00 54 */	stw r28, 0x54(r1)
/* 8023B938 00238878  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8023B93C 0023887C  80 7F 03 5C */	lwz r3, 0x35c(r31)
/* 8023B940 00238880  A0 63 02 54 */	lhz r3, 0x254(r3)
/* 8023B944 00238884  38 63 FF FF */	addi r3, r3, -1
/* 8023B948 00238888  4B FE C8 BD */	bl getOffsetFromDictionaryNo__Q34Game10PelletList3MgrFi
/* 8023B94C 0023888C  90 61 00 50 */	stw r3, 0x50(r1)
/* 8023B950 00238890  38 60 00 00 */	li r3, 0
/* 8023B954 00238894  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8023B958 00238898  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8023B95C 0023889C  2C 00 00 01 */	cmpwi r0, 1
/* 8023B960 002388A0  41 82 00 0C */	beq .L_8023B96C
/* 8023B964 002388A4  2C 00 00 03 */	cmpwi r0, 3
/* 8023B968 002388A8  40 82 00 08 */	bne .L_8023B970
.L_8023B96C:
/* 8023B96C 002388AC  38 60 00 01 */	li r3, 1
.L_8023B970:
/* 8023B970 002388B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8023B974 002388B4  41 82 00 10 */	beq .L_8023B984
/* 8023B978 002388B8  80 1E 01 10 */	lwz r0, 0x130(r30)
/* 8023B97C 002388BC  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8023B980 002388C0  48 00 00 0C */	b .L_8023B98C
.L_8023B984:
/* 8023B984 002388C4  38 00 00 00 */	li r0, 0
/* 8023B988 002388C8  90 01 00 5C */	stw r0, 0x5c(r1)
.L_8023B98C:
/* 8023B98C 002388CC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023B990 002388D0  80 9E 01 0C */	lwz r4, 0x12c(r30)
/* 8023B994 002388D4  48 1C 06 E5 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 8023B998 002388D8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023B99C 002388DC  38 81 00 30 */	addi r4, r1, 0x30
/* 8023B9A0 002388E0  48 1C 19 01 */	bl open_Kantei__Q26Screen9Game2DMgrFRQ32og6Screen16DispMemberKantei
/* 8023B9A4 002388E4  48 00 00 A0 */	b .L_8023BA44
.L_8023B9A8:
/* 8023B9A8 002388E8  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8023B9AC 002388EC  38 A0 00 00 */	li r5, 0
/* 8023B9B0 002388F0  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8023B9B4 002388F4  3C 60 80 4C */	lis r3, __vt__Q32og6Screen21DispMemberSpecialItem@ha
/* 8023B9B8 002388F8  90 01 00 20 */	stw r0, 0x20(r1)
/* 8023B9BC 002388FC  38 83 17 14 */	addi r4, r3, __vt__Q32og6Screen21DispMemberSpecialItem@l
/* 8023B9C0 00238900  38 00 00 01 */	li r0, 1
/* 8023B9C4 00238904  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023B9C8 00238908  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8023B9CC 0023890C  90 81 00 20 */	stw r4, 0x20(r1)
/* 8023B9D0 00238910  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8023B9D4 00238914  98 01 00 2C */	stb r0, 0x2c(r1)
/* 8023B9D8 00238918  80 1E 01 48 */	lwz r0, 0x168(r30)
/* 8023B9DC 0023891C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8023B9E0 00238920  80 9E 01 0C */	lwz r4, 0x12c(r30)
/* 8023B9E4 00238924  48 1C 06 95 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 8023B9E8 00238928  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023B9EC 0023892C  38 81 00 20 */	addi r4, r1, 0x20
/* 8023B9F0 00238930  48 1C 1A CD */	bl open_SpecialItem__Q26Screen9Game2DMgrFRQ32og6Screen21DispMemberSpecialItem
/* 8023B9F4 00238934  48 00 00 50 */	b .L_8023BA44
.L_8023B9F8:
/* 8023B9F8 00238938  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8023B9FC 0023893C  38 A0 00 00 */	li r5, 0
/* 8023BA00 00238940  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8023BA04 00238944  3C 60 80 4C */	lis r3, __vt__Q32og6Screen21DispMemberSpecialItem@ha
/* 8023BA08 00238948  90 01 00 10 */	stw r0, 0x10(r1)
/* 8023BA0C 0023894C  38 83 17 14 */	addi r4, r3, __vt__Q32og6Screen21DispMemberSpecialItem@l
/* 8023BA10 00238950  38 00 00 01 */	li r0, 1
/* 8023BA14 00238954  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023BA18 00238958  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8023BA1C 0023895C  90 81 00 10 */	stw r4, 0x10(r1)
/* 8023BA20 00238960  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8023BA24 00238964  98 01 00 1C */	stb r0, 0x1c(r1)
/* 8023BA28 00238968  80 1E 01 48 */	lwz r0, 0x168(r30)
/* 8023BA2C 0023896C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8023BA30 00238970  80 9E 01 0C */	lwz r4, 0x12c(r30)
/* 8023BA34 00238974  48 1C 06 45 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 8023BA38 00238978  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023BA3C 0023897C  38 81 00 10 */	addi r4, r1, 0x10
/* 8023BA40 00238980  48 1C 1A 7D */	bl open_SpecialItem__Q26Screen9Game2DMgrFRQ32og6Screen21DispMemberSpecialItem
.L_8023BA44:
/* 8023BA44 00238984  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8023BA48 00238988  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8023BA4C 0023898C  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8023BA50 00238990  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 8023BA54 00238994  83 81 00 70 */	lwz r28, 0x70(r1)
/* 8023BA58 00238998  7C 08 03 A6 */	mtlr r0
/* 8023BA5C 0023899C  38 21 00 80 */	addi r1, r1, 0x80
/* 8023BA60 002389A0  4E 80 00 20 */	blr 
.else
.global startKantei2D__Q24Game15BaseGameSectionFv
startKantei2D__Q24Game15BaseGameSectionFv:
/* 8023B80C 0023874C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8023B810 00238750  7C 08 02 A6 */	mflr r0
/* 8023B814 00238754  90 01 00 84 */	stw r0, 0x84(r1)
/* 8023B818 00238758  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8023B81C 0023875C  93 C1 00 78 */	stw r30, 0x78(r1)
/* 8023B820 00238760  7C 7E 1B 78 */	mr r30, r3
/* 8023B824 00238764  93 A1 00 74 */	stw r29, 0x74(r1)
/* 8023B828 00238768  93 81 00 70 */	stw r28, 0x70(r1)
/* 8023B82C 0023876C  80 63 01 3C */	lwz r3, 0x13c(r3)
/* 8023B830 00238770  81 83 00 00 */	lwz r12, 0(r3)
/* 8023B834 00238774  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8023B838 00238778  7D 89 03 A6 */	mtctr r12
/* 8023B83C 0023877C  4E 80 04 21 */	bctrl 
/* 8023B840 00238780  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8023B844 00238784  41 82 01 B4 */	beq .L_8023B9F8
/* 8023B848 00238788  83 FE 01 3C */	lwz r31, 0x13c(r30)
/* 8023B84C 0023878C  7F E3 FB 78 */	mr r3, r31
/* 8023B850 00238790  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023B854 00238794  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8023B858 00238798  7D 89 03 A6 */	mtctr r12
/* 8023B85C 0023879C  4E 80 04 21 */	bctrl 
/* 8023B860 002387A0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8023B864 002387A4  28 00 00 03 */	cmplwi r0, 3
/* 8023B868 002387A8  41 82 00 24 */	beq .L_8023B88C
/* 8023B86C 002387AC  7F E3 FB 78 */	mr r3, r31
/* 8023B870 002387B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023B874 002387B4  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8023B878 002387B8  7D 89 03 A6 */	mtctr r12
/* 8023B87C 002387BC  4E 80 04 21 */	bctrl 
/* 8023B880 002387C0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8023B884 002387C4  28 00 00 04 */	cmplwi r0, 4
/* 8023B888 002387C8  40 82 01 20 */	bne .L_8023B9A8
.L_8023B88C:
/* 8023B88C 002387CC  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8023B890 002387D0  39 20 00 00 */	li r9, 0
/* 8023B894 002387D4  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8023B898 002387D8  38 E0 00 7B */	li r7, 0x7b
/* 8023B89C 002387DC  3C 60 80 4C */	lis r3, __vt__Q32og6Screen16DispMemberKantei@ha
/* 8023B8A0 002387E0  90 01 00 30 */	stw r0, 0x30(r1)
/* 8023B8A4 002387E4  39 03 17 2C */	addi r8, r3, __vt__Q32og6Screen16DispMemberKantei@l
/* 8023B8A8 002387E8  38 80 13 88 */	li r4, 0x1388
/* 8023B8AC 002387EC  38 60 15 B3 */	li r3, 0x15b3
/* 8023B8B0 002387F0  38 00 00 01 */	li r0, 1
/* 8023B8B4 002387F4  91 21 00 34 */	stw r9, 0x34(r1)
/* 8023B8B8 002387F8  38 A1 00 0C */	addi r5, r1, 0xc
/* 8023B8BC 002387FC  81 4D 94 90 */	lwz r10, playData__4Game@sda21(r13)
/* 8023B8C0 00238800  38 C1 00 08 */	addi r6, r1, 8
/* 8023B8C4 00238804  91 01 00 30 */	stw r8, 0x30(r1)
/* 8023B8C8 00238808  90 E1 00 38 */	stw r7, 0x38(r1)
/* 8023B8CC 0023880C  90 81 00 3C */	stw r4, 0x3c(r1)
/* 8023B8D0 00238810  91 21 00 64 */	stw r9, 0x64(r1)
/* 8023B8D4 00238814  91 21 00 40 */	stw r9, 0x40(r1)
/* 8023B8D8 00238818  91 21 00 4C */	stw r9, 0x4c(r1)
/* 8023B8DC 0023881C  91 21 00 48 */	stw r9, 0x48(r1)
/* 8023B8E0 00238820  91 21 00 50 */	stw r9, 0x50(r1)
/* 8023B8E4 00238824  90 61 00 54 */	stw r3, 0x54(r1)
/* 8023B8E8 00238828  99 21 00 58 */	stb r9, 0x58(r1)
/* 8023B8EC 0023882C  91 21 00 5C */	stw r9, 0x5c(r1)
/* 8023B8F0 00238830  99 21 00 59 */	stb r9, 0x59(r1)
/* 8023B8F4 00238834  99 21 00 60 */	stb r9, 0x60(r1)
/* 8023B8F8 00238838  99 21 00 68 */	stb r9, 0x68(r1)
/* 8023B8FC 0023883C  98 01 00 69 */	stb r0, 0x69(r1)
/* 8023B900 00238840  80 9F 03 5C */	lwz r4, 0x35c(r31)
/* 8023B904 00238844  83 AA 00 E8 */	lwz r29, 0xe8(r10)
/* 8023B908 00238848  83 8A 00 EC */	lwz r28, 0xec(r10)
/* 8023B90C 0023884C  80 04 01 70 */	lwz r0, 0x170(r4)
/* 8023B910 00238850  90 01 00 38 */	stw r0, 0x38(r1)
/* 8023B914 00238854  80 1E 01 48 */	lwz r0, 0x148(r30)
/* 8023B918 00238858  90 01 00 40 */	stw r0, 0x40(r1)
/* 8023B91C 0023885C  80 64 02 30 */	lwz r3, 0x230(r4)
/* 8023B920 00238860  80 84 02 34 */	lwz r4, 0x234(r4)
/* 8023B924 00238864  90 81 00 4C */	stw r4, 0x4c(r1)
/* 8023B928 00238868  90 61 00 48 */	stw r3, 0x48(r1)
/* 8023B92C 0023886C  48 20 1A 01 */	bl convertU64ToMessageID__5P2JMEFUxPUlPUl
/* 8023B930 00238870  7C 1D E2 14 */	add r0, r29, r28
/* 8023B934 00238874  93 81 00 54 */	stw r28, 0x54(r1)
/* 8023B938 00238878  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8023B93C 0023887C  80 7F 03 5C */	lwz r3, 0x35c(r31)
/* 8023B940 00238880  A0 63 02 54 */	lhz r3, 0x254(r3)
/* 8023B944 00238884  38 63 FF FF */	addi r3, r3, -1
/* 8023B948 00238888  4B FE C8 BD */	bl getOffsetFromDictionaryNo__Q34Game10PelletList3MgrFi
/* 8023B94C 0023888C  90 61 00 50 */	stw r3, 0x50(r1)
/* 8023B950 00238890  38 60 00 00 */	li r3, 0
/* 8023B954 00238894  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8023B958 00238898  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8023B95C 0023889C  2C 00 00 01 */	cmpwi r0, 1
/* 8023B960 002388A0  41 82 00 0C */	beq .L_8023B96C
/* 8023B964 002388A4  2C 00 00 03 */	cmpwi r0, 3
/* 8023B968 002388A8  40 82 00 08 */	bne .L_8023B970
.L_8023B96C:
/* 8023B96C 002388AC  38 60 00 01 */	li r3, 1
.L_8023B970:
/* 8023B970 002388B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8023B974 002388B4  41 82 00 10 */	beq .L_8023B984
/* 8023B978 002388B8  80 1E 01 10 */	lwz r0, 0x110(r30)
/* 8023B97C 002388BC  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8023B980 002388C0  48 00 00 0C */	b .L_8023B98C
.L_8023B984:
/* 8023B984 002388C4  38 00 00 00 */	li r0, 0
/* 8023B988 002388C8  90 01 00 5C */	stw r0, 0x5c(r1)
.L_8023B98C:
/* 8023B98C 002388CC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023B990 002388D0  80 9E 01 0C */	lwz r4, 0x10c(r30)
/* 8023B994 002388D4  48 1C 06 E5 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 8023B998 002388D8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023B99C 002388DC  38 81 00 30 */	addi r4, r1, 0x30
/* 8023B9A0 002388E0  48 1C 19 01 */	bl open_Kantei__Q26Screen9Game2DMgrFRQ32og6Screen16DispMemberKantei
/* 8023B9A4 002388E4  48 00 00 A0 */	b .L_8023BA44
.L_8023B9A8:
/* 8023B9A8 002388E8  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8023B9AC 002388EC  38 A0 00 00 */	li r5, 0
/* 8023B9B0 002388F0  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8023B9B4 002388F4  3C 60 80 4C */	lis r3, __vt__Q32og6Screen21DispMemberSpecialItem@ha
/* 8023B9B8 002388F8  90 01 00 20 */	stw r0, 0x20(r1)
/* 8023B9BC 002388FC  38 83 17 14 */	addi r4, r3, __vt__Q32og6Screen21DispMemberSpecialItem@l
/* 8023B9C0 00238900  38 00 00 01 */	li r0, 1
/* 8023B9C4 00238904  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023B9C8 00238908  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8023B9CC 0023890C  90 81 00 20 */	stw r4, 0x20(r1)
/* 8023B9D0 00238910  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8023B9D4 00238914  98 01 00 2C */	stb r0, 0x2c(r1)
/* 8023B9D8 00238918  80 1E 01 48 */	lwz r0, 0x148(r30)
/* 8023B9DC 0023891C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8023B9E0 00238920  80 9E 01 0C */	lwz r4, 0x10c(r30)
/* 8023B9E4 00238924  48 1C 06 95 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 8023B9E8 00238928  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023B9EC 0023892C  38 81 00 20 */	addi r4, r1, 0x20
/* 8023B9F0 00238930  48 1C 1A CD */	bl open_SpecialItem__Q26Screen9Game2DMgrFRQ32og6Screen21DispMemberSpecialItem
/* 8023B9F4 00238934  48 00 00 50 */	b .L_8023BA44
.L_8023B9F8:
/* 8023B9F8 00238938  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8023B9FC 0023893C  38 A0 00 00 */	li r5, 0
/* 8023BA00 00238940  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8023BA04 00238944  3C 60 80 4C */	lis r3, __vt__Q32og6Screen21DispMemberSpecialItem@ha
/* 8023BA08 00238948  90 01 00 10 */	stw r0, 0x10(r1)
/* 8023BA0C 0023894C  38 83 17 14 */	addi r4, r3, __vt__Q32og6Screen21DispMemberSpecialItem@l
/* 8023BA10 00238950  38 00 00 01 */	li r0, 1
/* 8023BA14 00238954  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023BA18 00238958  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8023BA1C 0023895C  90 81 00 10 */	stw r4, 0x10(r1)
/* 8023BA20 00238960  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8023BA24 00238964  98 01 00 1C */	stb r0, 0x1c(r1)
/* 8023BA28 00238968  80 1E 01 48 */	lwz r0, 0x148(r30)
/* 8023BA2C 0023896C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8023BA30 00238970  80 9E 01 0C */	lwz r4, 0x10c(r30)
/* 8023BA34 00238974  48 1C 06 45 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 8023BA38 00238978  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023BA3C 0023897C  38 81 00 10 */	addi r4, r1, 0x10
/* 8023BA40 00238980  48 1C 1A 7D */	bl open_SpecialItem__Q26Screen9Game2DMgrFRQ32og6Screen21DispMemberSpecialItem
.L_8023BA44:
/* 8023BA44 00238984  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8023BA48 00238988  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8023BA4C 0023898C  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8023BA50 00238990  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 8023BA54 00238994  83 81 00 70 */	lwz r28, 0x70(r1)
/* 8023BA58 00238998  7C 08 03 A6 */	mtlr r0
/* 8023BA5C 0023899C  38 21 00 80 */	addi r1, r1, 0x80
/* 8023BA60 002389A0  4E 80 00 20 */	blr 
.endif

.if version == 1
.global "onKanteiDone__Q24Game15BaseGameSectionFR7Rect<f>"
"onKanteiDone__Q24Game15BaseGameSectionFR7Rect<f>":
/* 8023BA64 002389A4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8023BA68 002389A8  7C 08 02 A6 */	mflr r0
/* 8023BA6C 002389AC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8023BA70 002389B0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8023BA74 002389B4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8023BA78 002389B8  7C 7E 1B 78 */	mr r30, r3
/* 8023BA7C 002389BC  C0 64 00 04 */	lfs f3, 4(r4)
/* 8023BA80 002389C0  C0 44 00 0C */	lfs f2, 0xc(r4)
/* 8023BA84 002389C4  C0 24 00 00 */	lfs f1, 0(r4)
/* 8023BA88 002389C8  C0 04 00 08 */	lfs f0, 8(r4)
/* 8023BA8C 002389CC  EC 63 10 2A */	fadds f3, f3, f2
/* 8023BA90 002389D0  C0 42 C2 24 */	lfs f2, lbl_8051A584@sda21(r2)
/* 8023BA94 002389D4  EC 01 00 2A */	fadds f0, f1, f0
/* 8023BA98 002389D8  EC 23 00 B2 */	fmuls f1, f3, f2
/* 8023BA9C 002389DC  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8023BAA0 002389E0  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8023BAA4 002389E4  D0 01 00 08 */	stfs f0, 8(r1)
/* 8023BAA8 002389E8  4B FF FB 85 */	bl startZoomWindow__Q24Game15BaseGameSectionFv
/* 8023BAAC 002389EC  48 1E 77 79 */	bl getRenderModeObj__6SystemFv
/* 8023BAB0 002389F0  A3 E3 00 04 */	lhz r31, 4(r3)
/* 8023BAB4 002389F4  48 1E 77 71 */	bl getRenderModeObj__6SystemFv
/* 8023BAB8 002389F8  A0 63 00 06 */	lhz r3, 6(r3)
/* 8023BABC 002389FC  3C 00 43 30 */	lis r0, 0x4330
/* 8023BAC0 00238A00  C0 42 C2 18 */	lfs f2, lbl_8051A578@sda21(r2)
/* 8023BAC4 00238A04  38 81 00 10 */	addi r4, r1, 0x10
/* 8023BAC8 00238A08  90 61 00 24 */	stw r3, 0x24(r1)
/* 8023BACC 00238A0C  C8 62 C2 28 */	lfd f3, lbl_8051A588@sda21(r2)
/* 8023BAD0 00238A10  90 01 00 20 */	stw r0, 0x20(r1)
/* 8023BAD4 00238A14  C0 22 C2 24 */	lfs f1, lbl_8051A584@sda21(r2)
/* 8023BAD8 00238A18  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8023BADC 00238A1C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8023BAE0 00238A20  EC 80 18 28 */	fsubs f4, f0, f3
/* 8023BAE4 00238A24  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8023BAE8 00238A28  90 01 00 28 */	stw r0, 0x28(r1)
/* 8023BAEC 00238A2C  EC A1 01 3C */	fnmsubs f5, f1, f4, f0
/* 8023BAF0 00238A30  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 8023BAF4 00238A34  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8023BAF8 00238A38  EC 20 18 28 */	fsubs f1, f0, f3
/* 8023BAFC 00238A3C  EC 05 20 2A */	fadds f0, f5, f4
/* 8023BB00 00238A40  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 8023BB04 00238A44  EC 22 08 2A */	fadds f1, f2, f1
/* 8023BB08 00238A48  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8023BB0C 00238A4C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8023BB10 00238A50  80 7E 01 38 */	lwz r3, 0x158(r30)
/* 8023BB14 00238A54  48 1E 98 6D */	bl "setRect__8ViewportFR7Rect<f>"
/* 8023BB18 00238A58  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8023BB1C 00238A5C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8023BB20 00238A60  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8023BB24 00238A64  7C 08 03 A6 */	mtlr r0
/* 8023BB28 00238A68  38 21 00 40 */	addi r1, r1, 0x40
/* 8023BB2C 00238A6C  4E 80 00 20 */	blr 
.else
.global "onKanteiDone__Q24Game15BaseGameSectionFR7Rect<f>"
"onKanteiDone__Q24Game15BaseGameSectionFR7Rect<f>":
/* 8023BA64 002389A4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8023BA68 002389A8  7C 08 02 A6 */	mflr r0
/* 8023BA6C 002389AC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8023BA70 002389B0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8023BA74 002389B4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8023BA78 002389B8  7C 7E 1B 78 */	mr r30, r3
/* 8023BA7C 002389BC  C0 64 00 04 */	lfs f3, 4(r4)
/* 8023BA80 002389C0  C0 44 00 0C */	lfs f2, 0xc(r4)
/* 8023BA84 002389C4  C0 24 00 00 */	lfs f1, 0(r4)
/* 8023BA88 002389C8  C0 04 00 08 */	lfs f0, 8(r4)
/* 8023BA8C 002389CC  EC 63 10 2A */	fadds f3, f3, f2
/* 8023BA90 002389D0  C0 42 C2 24 */	lfs f2, lbl_8051A584@sda21(r2)
/* 8023BA94 002389D4  EC 01 00 2A */	fadds f0, f1, f0
/* 8023BA98 002389D8  EC 23 00 B2 */	fmuls f1, f3, f2
/* 8023BA9C 002389DC  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8023BAA0 002389E0  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8023BAA4 002389E4  D0 01 00 08 */	stfs f0, 8(r1)
/* 8023BAA8 002389E8  4B FF FB 85 */	bl startZoomWindow__Q24Game15BaseGameSectionFv
/* 8023BAAC 002389EC  48 1E 77 79 */	bl getRenderModeObj__6SystemFv
/* 8023BAB0 002389F0  A3 E3 00 04 */	lhz r31, 4(r3)
/* 8023BAB4 002389F4  48 1E 77 71 */	bl getRenderModeObj__6SystemFv
/* 8023BAB8 002389F8  A0 63 00 06 */	lhz r3, 6(r3)
/* 8023BABC 002389FC  3C 00 43 30 */	lis r0, 0x4330
/* 8023BAC0 00238A00  C0 42 C2 18 */	lfs f2, lbl_8051A578@sda21(r2)
/* 8023BAC4 00238A04  38 81 00 10 */	addi r4, r1, 0x10
/* 8023BAC8 00238A08  90 61 00 24 */	stw r3, 0x24(r1)
/* 8023BACC 00238A0C  C8 62 C2 28 */	lfd f3, lbl_8051A588@sda21(r2)
/* 8023BAD0 00238A10  90 01 00 20 */	stw r0, 0x20(r1)
/* 8023BAD4 00238A14  C0 22 C2 24 */	lfs f1, lbl_8051A584@sda21(r2)
/* 8023BAD8 00238A18  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8023BADC 00238A1C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8023BAE0 00238A20  EC 80 18 28 */	fsubs f4, f0, f3
/* 8023BAE4 00238A24  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8023BAE8 00238A28  90 01 00 28 */	stw r0, 0x28(r1)
/* 8023BAEC 00238A2C  EC A1 01 3C */	fnmsubs f5, f1, f4, f0
/* 8023BAF0 00238A30  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 8023BAF4 00238A34  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8023BAF8 00238A38  EC 20 18 28 */	fsubs f1, f0, f3
/* 8023BAFC 00238A3C  EC 05 20 2A */	fadds f0, f5, f4
/* 8023BB00 00238A40  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 8023BB04 00238A44  EC 22 08 2A */	fadds f1, f2, f1
/* 8023BB08 00238A48  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8023BB0C 00238A4C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8023BB10 00238A50  80 7E 01 38 */	lwz r3, 0x138(r30)
/* 8023BB14 00238A54  48 1E 98 6D */	bl "setRect__8ViewportFR7Rect<f>"
/* 8023BB18 00238A58  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8023BB1C 00238A5C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8023BB20 00238A60  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8023BB24 00238A64  7C 08 03 A6 */	mtlr r0
/* 8023BB28 00238A68  38 21 00 40 */	addi r1, r1, 0x40
/* 8023BB2C 00238A6C  4E 80 00 20 */	blr 
.endif

.global "init__Q34Game15BaseGameSection10ZoomCameraFffR10Vector3<f>P10Controller"
"init__Q34Game15BaseGameSection10ZoomCameraFffR10Vector3<f>P10Controller":
/* 8023BB30 00238A70  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8023BB34 00238A74  7C 08 02 A6 */	mflr r0
/* 8023BB38 00238A78  90 01 00 24 */	stw r0, 0x24(r1)
/* 8023BB3C 00238A7C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8023BB40 00238A80  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8023BB44 00238A84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8023BB48 00238A88  93 C1 00 08 */	stw r30, 8(r1)
/* 8023BB4C 00238A8C  FF E0 08 90 */	fmr f31, f1
/* 8023BB50 00238A90  7C 7E 1B 78 */	mr r30, r3
/* 8023BB54 00238A94  C0 02 C2 34 */	lfs f0, lbl_8051A594@sda21(r2)
/* 8023BB58 00238A98  7C 9F 23 78 */	mr r31, r4
/* 8023BB5C 00238A9C  90 A3 01 AC */	stw r5, 0x1ac(r3)
/* 8023BB60 00238AA0  EC 42 F8 24 */	fdivs f2, f2, f31
/* 8023BB64 00238AA4  C0 22 C2 30 */	lfs f1, lbl_8051A590@sda21(r2)
/* 8023BB68 00238AA8  D0 23 01 98 */	stfs f1, 0x198(r3)
/* 8023BB6C 00238AAC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8023BB70 00238AB0  4C 41 13 82 */	cror 2, 1, 2
/* 8023BB74 00238AB4  40 82 00 08 */	bne .L_8023BB7C
/* 8023BB78 00238AB8  48 00 00 6C */	b .L_8023BBE4
.L_8023BB7C:
/* 8023BB7C 00238ABC  C0 02 C2 38 */	lfs f0, lbl_8051A598@sda21(r2)
/* 8023BB80 00238AC0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8023BB84 00238AC4  4C 40 13 82 */	cror 2, 0, 2
/* 8023BB88 00238AC8  40 82 00 0C */	bne .L_8023BB94
/* 8023BB8C 00238ACC  C0 22 C2 3C */	lfs f1, lbl_8051A59C@sda21(r2)
/* 8023BB90 00238AD0  48 00 00 54 */	b .L_8023BBE4
.L_8023BB94:
/* 8023BB94 00238AD4  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023BB98 00238AD8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8023BB9C 00238ADC  40 80 00 2C */	bge .L_8023BBC8
/* 8023BBA0 00238AE0  FC 00 10 50 */	fneg f0, f2
/* 8023BBA4 00238AE4  C0 22 C2 40 */	lfs f1, lbl_8051A5A0@sda21(r2)
/* 8023BBA8 00238AE8  EC 21 00 32 */	fmuls f1, f1, f0
/* 8023BBAC 00238AEC  4B E8 5F A1 */	bl __cvt_fp2unsigned
/* 8023BBB0 00238AF0  3C 80 80 51 */	lis r4, asinAcosTable___5JMath@ha
/* 8023BBB4 00238AF4  54 60 10 3A */	slwi r0, r3, 2
/* 8023BBB8 00238AF8  38 64 E2 00 */	addi r3, r4, asinAcosTable___5JMath@l
/* 8023BBBC 00238AFC  7C 03 04 2E */	lfsx f0, r3, r0
/* 8023BBC0 00238B00  FC 20 00 50 */	fneg f1, f0
/* 8023BBC4 00238B04  48 00 00 20 */	b .L_8023BBE4
.L_8023BBC8:
/* 8023BBC8 00238B08  C0 02 C2 40 */	lfs f0, lbl_8051A5A0@sda21(r2)
/* 8023BBCC 00238B0C  EC 20 00 B2 */	fmuls f1, f0, f2
/* 8023BBD0 00238B10  4B E8 5F 7D */	bl __cvt_fp2unsigned
/* 8023BBD4 00238B14  3C 80 80 51 */	lis r4, asinAcosTable___5JMath@ha
/* 8023BBD8 00238B18  54 60 10 3A */	slwi r0, r3, 2
/* 8023BBDC 00238B1C  38 64 E2 00 */	addi r3, r4, asinAcosTable___5JMath@l
/* 8023BBE0 00238B20  7C 23 04 2E */	lfsx f1, r3, r0
.L_8023BBE4:
/* 8023BBE4 00238B24  D0 3E 01 9C */	stfs f1, 0x19c(r30)
/* 8023BBE8 00238B28  7F C3 F3 78 */	mr r3, r30
/* 8023BBEC 00238B2C  C0 02 C2 44 */	lfs f0, lbl_8051A5A4@sda21(r2)
/* 8023BBF0 00238B30  D0 3E 01 A8 */	stfs f1, 0x1a8(r30)
/* 8023BBF4 00238B34  D3 FE 01 A0 */	stfs f31, 0x1a0(r30)
/* 8023BBF8 00238B38  D3 FE 01 A4 */	stfs f31, 0x1a4(r30)
/* 8023BBFC 00238B3C  C0 3E 01 A0 */	lfs f1, 0x1a0(r30)
/* 8023BC00 00238B40  EC 01 00 32 */	fmuls f0, f1, f0
/* 8023BC04 00238B44  D0 1E 01 A0 */	stfs f0, 0x1a0(r30)
/* 8023BC08 00238B48  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8023BC0C 00238B4C  D0 1E 01 80 */	stfs f0, 0x180(r30)
/* 8023BC10 00238B50  C0 1F 00 04 */	lfs f0, 4(r31)
/* 8023BC14 00238B54  D0 1E 01 84 */	stfs f0, 0x184(r30)
/* 8023BC18 00238B58  C0 1F 00 08 */	lfs f0, 8(r31)
/* 8023BC1C 00238B5C  D0 1E 01 88 */	stfs f0, 0x188(r30)
/* 8023BC20 00238B60  48 00 00 25 */	bl makeLookAt__Q34Game15BaseGameSection10ZoomCameraFv
/* 8023BC24 00238B64  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8023BC28 00238B68  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8023BC2C 00238B6C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8023BC30 00238B70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8023BC34 00238B74  83 C1 00 08 */	lwz r30, 8(r1)
/* 8023BC38 00238B78  7C 08 03 A6 */	mtlr r0
/* 8023BC3C 00238B7C  38 21 00 20 */	addi r1, r1, 0x20
/* 8023BC40 00238B80  4E 80 00 20 */	blr 

.global makeLookAt__Q34Game15BaseGameSection10ZoomCameraFv
makeLookAt__Q34Game15BaseGameSection10ZoomCameraFv:
/* 8023BC44 00238B84  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8023BC48 00238B88  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023BC4C 00238B8C  C0 63 01 9C */	lfs f3, 0x19c(r3)
/* 8023BC50 00238B90  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8023BC54 00238B94  40 80 00 30 */	bge .L_8023BC84
/* 8023BC58 00238B98  C0 02 C2 48 */	lfs f0, lbl_8051A5A8@sda21(r2)
/* 8023BC5C 00238B9C  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 8023BC60 00238BA0  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 8023BC64 00238BA4  EC 03 00 32 */	fmuls f0, f3, f0
/* 8023BC68 00238BA8  FC 00 00 1E */	fctiwz f0, f0
/* 8023BC6C 00238BAC  D8 01 00 08 */	stfd f0, 8(r1)
/* 8023BC70 00238BB0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8023BC74 00238BB4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8023BC78 00238BB8  7C 04 04 2E */	lfsx f0, r4, r0
/* 8023BC7C 00238BBC  FC 20 00 50 */	fneg f1, f0
/* 8023BC80 00238BC0  48 00 00 28 */	b .L_8023BCA8
.L_8023BC84:
/* 8023BC84 00238BC4  C0 02 C2 4C */	lfs f0, lbl_8051A5AC@sda21(r2)
/* 8023BC88 00238BC8  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 8023BC8C 00238BCC  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 8023BC90 00238BD0  EC 03 00 32 */	fmuls f0, f3, f0
/* 8023BC94 00238BD4  FC 00 00 1E */	fctiwz f0, f0
/* 8023BC98 00238BD8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8023BC9C 00238BDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023BCA0 00238BE0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8023BCA4 00238BE4  7C 24 04 2E */	lfsx f1, r4, r0
.L_8023BCA8:
/* 8023BCA8 00238BE8  C0 83 01 A0 */	lfs f4, 0x1a0(r3)
/* 8023BCAC 00238BEC  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023BCB0 00238BF0  EC E4 00 72 */	fmuls f7, f4, f1
/* 8023BCB4 00238BF4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8023BCB8 00238BF8  40 80 00 08 */	bge .L_8023BCC0
/* 8023BCBC 00238BFC  FC 60 18 50 */	fneg f3, f3
.L_8023BCC0:
/* 8023BCC0 00238C00  C0 42 C2 4C */	lfs f2, lbl_8051A5AC@sda21(r2)
/* 8023BCC4 00238C04  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 8023BCC8 00238C08  38 A4 71 A0 */	addi r5, r4, sincosTable___5JMath@l
/* 8023BCCC 00238C0C  C0 C3 01 98 */	lfs f6, 0x198(r3)
/* 8023BCD0 00238C10  EC 23 00 B2 */	fmuls f1, f3, f2
/* 8023BCD4 00238C14  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023BCD8 00238C18  38 85 00 04 */	addi r4, r5, 4
/* 8023BCDC 00238C1C  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 8023BCE0 00238C20  FC 00 08 1E */	fctiwz f0, f1
/* 8023BCE4 00238C24  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8023BCE8 00238C28  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8023BCEC 00238C2C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8023BCF0 00238C30  7C 04 04 2E */	lfsx f0, r4, r0
/* 8023BCF4 00238C34  ED 04 00 32 */	fmuls f8, f4, f0
/* 8023BCF8 00238C38  40 80 00 28 */	bge .L_8023BD20
/* 8023BCFC 00238C3C  C0 02 C2 48 */	lfs f0, lbl_8051A5A8@sda21(r2)
/* 8023BD00 00238C40  EC 06 00 32 */	fmuls f0, f6, f0
/* 8023BD04 00238C44  FC 00 00 1E */	fctiwz f0, f0
/* 8023BD08 00238C48  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8023BD0C 00238C4C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8023BD10 00238C50  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8023BD14 00238C54  7C 05 04 2E */	lfsx f0, r5, r0
/* 8023BD18 00238C58  FC 20 00 50 */	fneg f1, f0
/* 8023BD1C 00238C5C  48 00 00 1C */	b .L_8023BD38
.L_8023BD20:
/* 8023BD20 00238C60  EC 06 00 B2 */	fmuls f0, f6, f2
/* 8023BD24 00238C64  FC 00 00 1E */	fctiwz f0, f0
/* 8023BD28 00238C68  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8023BD2C 00238C6C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8023BD30 00238C70  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8023BD34 00238C74  7C 25 04 2E */	lfsx f1, r5, r0
.L_8023BD38:
/* 8023BD38 00238C78  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023BD3C 00238C7C  EC A7 00 72 */	fmuls f5, f7, f1
/* 8023BD40 00238C80  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 8023BD44 00238C84  40 80 00 08 */	bge .L_8023BD4C
/* 8023BD48 00238C88  FC C0 30 50 */	fneg f6, f6
.L_8023BD4C:
/* 8023BD4C 00238C8C  C0 42 C2 4C */	lfs f2, lbl_8051A5AC@sda21(r2)
/* 8023BD50 00238C90  C0 83 01 88 */	lfs f4, 0x188(r3)
/* 8023BD54 00238C94  EC 26 00 B2 */	fmuls f1, f6, f2
/* 8023BD58 00238C98  C0 03 01 84 */	lfs f0, 0x184(r3)
/* 8023BD5C 00238C9C  C0 63 01 80 */	lfs f3, 0x180(r3)
/* 8023BD60 00238CA0  EC 84 28 2A */	fadds f4, f4, f5
/* 8023BD64 00238CA4  EC C0 40 2A */	fadds f6, f0, f8
/* 8023BD68 00238CA8  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023BD6C 00238CAC  FC 20 08 1E */	fctiwz f1, f1
/* 8023BD70 00238CB0  D8 21 00 30 */	stfd f1, 0x30(r1)
/* 8023BD74 00238CB4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8023BD78 00238CB8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8023BD7C 00238CBC  7C 24 04 2E */	lfsx f1, r4, r0
/* 8023BD80 00238CC0  EC 27 00 72 */	fmuls f1, f7, f1
/* 8023BD84 00238CC4  EC 23 08 2A */	fadds f1, f3, f1
/* 8023BD88 00238CC8  D0 23 01 74 */	stfs f1, 0x174(r3)
/* 8023BD8C 00238CCC  D0 C3 01 78 */	stfs f6, 0x178(r3)
/* 8023BD90 00238CD0  D0 83 01 7C */	stfs f4, 0x17c(r3)
/* 8023BD94 00238CD4  C0 C3 01 98 */	lfs f6, 0x198(r3)
/* 8023BD98 00238CD8  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 8023BD9C 00238CDC  40 80 00 30 */	bge .L_8023BDCC
/* 8023BDA0 00238CE0  C0 02 C2 48 */	lfs f0, lbl_8051A5A8@sda21(r2)
/* 8023BDA4 00238CE4  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 8023BDA8 00238CE8  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 8023BDAC 00238CEC  EC 06 00 32 */	fmuls f0, f6, f0
/* 8023BDB0 00238CF0  FC 00 00 1E */	fctiwz f0, f0
/* 8023BDB4 00238CF4  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8023BDB8 00238CF8  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8023BDBC 00238CFC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8023BDC0 00238D00  7C 05 04 2E */	lfsx f0, r5, r0
/* 8023BDC4 00238D04  FC 20 00 50 */	fneg f1, f0
/* 8023BDC8 00238D08  48 00 00 24 */	b .L_8023BDEC
.L_8023BDCC:
/* 8023BDCC 00238D0C  EC 06 00 B2 */	fmuls f0, f6, f2
/* 8023BDD0 00238D10  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 8023BDD4 00238D14  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 8023BDD8 00238D18  FC 00 00 1E */	fctiwz f0, f0
/* 8023BDDC 00238D1C  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8023BDE0 00238D20  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8023BDE4 00238D24  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8023BDE8 00238D28  7C 25 04 2E */	lfsx f1, r5, r0
.L_8023BDEC:
/* 8023BDEC 00238D2C  C0 A3 01 9C */	lfs f5, 0x19c(r3)
/* 8023BDF0 00238D30  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023BDF4 00238D34  FC 80 28 90 */	fmr f4, f5
/* 8023BDF8 00238D38  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8023BDFC 00238D3C  40 80 00 08 */	bge .L_8023BE04
/* 8023BE00 00238D40  FC 80 28 50 */	fneg f4, f5
.L_8023BE04:
/* 8023BE04 00238D44  C0 42 C2 4C */	lfs f2, lbl_8051A5AC@sda21(r2)
/* 8023BE08 00238D48  FC 60 08 50 */	fneg f3, f1
/* 8023BE0C 00238D4C  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023BE10 00238D50  EC 24 00 B2 */	fmuls f1, f4, f2
/* 8023BE14 00238D54  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8023BE18 00238D58  FC 00 08 1E */	fctiwz f0, f1
/* 8023BE1C 00238D5C  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 8023BE20 00238D60  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8023BE24 00238D64  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8023BE28 00238D68  7C 04 04 2E */	lfsx f0, r4, r0
/* 8023BE2C 00238D6C  EC 63 00 32 */	fmuls f3, f3, f0
/* 8023BE30 00238D70  40 80 00 30 */	bge .L_8023BE60
/* 8023BE34 00238D74  C0 02 C2 48 */	lfs f0, lbl_8051A5A8@sda21(r2)
/* 8023BE38 00238D78  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 8023BE3C 00238D7C  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 8023BE40 00238D80  EC 05 00 32 */	fmuls f0, f5, f0
/* 8023BE44 00238D84  FC 00 00 1E */	fctiwz f0, f0
/* 8023BE48 00238D88  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8023BE4C 00238D8C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8023BE50 00238D90  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8023BE54 00238D94  7C 05 04 2E */	lfsx f0, r5, r0
/* 8023BE58 00238D98  FC 40 00 50 */	fneg f2, f0
/* 8023BE5C 00238D9C  48 00 00 24 */	b .L_8023BE80
.L_8023BE60:
/* 8023BE60 00238DA0  EC 05 00 B2 */	fmuls f0, f5, f2
/* 8023BE64 00238DA4  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 8023BE68 00238DA8  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 8023BE6C 00238DAC  FC 00 00 1E */	fctiwz f0, f0
/* 8023BE70 00238DB0  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 8023BE74 00238DB4  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8023BE78 00238DB8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8023BE7C 00238DBC  7C 45 04 2E */	lfsx f2, r5, r0
.L_8023BE80:
/* 8023BE80 00238DC0  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023BE84 00238DC4  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 8023BE88 00238DC8  40 80 00 08 */	bge .L_8023BE90
/* 8023BE8C 00238DCC  FC C0 30 50 */	fneg f6, f6
.L_8023BE90:
/* 8023BE90 00238DD0  C0 22 C2 4C */	lfs f1, lbl_8051A5AC@sda21(r2)
/* 8023BE94 00238DD4  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023BE98 00238DD8  EC 26 00 72 */	fmuls f1, f6, f1
/* 8023BE9C 00238DDC  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8023BEA0 00238DE0  FC 00 08 1E */	fctiwz f0, f1
/* 8023BEA4 00238DE4  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 8023BEA8 00238DE8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8023BEAC 00238DEC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8023BEB0 00238DF0  7C 24 04 2E */	lfsx f1, r4, r0
/* 8023BEB4 00238DF4  40 80 00 08 */	bge .L_8023BEBC
/* 8023BEB8 00238DF8  FC A0 28 50 */	fneg f5, f5
.L_8023BEBC:
/* 8023BEBC 00238DFC  C0 02 C2 4C */	lfs f0, lbl_8051A5AC@sda21(r2)
/* 8023BEC0 00238E00  FC 20 08 50 */	fneg f1, f1
/* 8023BEC4 00238E04  EC 05 00 32 */	fmuls f0, f5, f0
/* 8023BEC8 00238E08  FC 00 00 1E */	fctiwz f0, f0
/* 8023BECC 00238E0C  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 8023BED0 00238E10  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 8023BED4 00238E14  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8023BED8 00238E18  7C 04 04 2E */	lfsx f0, r4, r0
/* 8023BEDC 00238E1C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8023BEE0 00238E20  D0 03 01 8C */	stfs f0, 0x18c(r3)
/* 8023BEE4 00238E24  D0 43 01 90 */	stfs f2, 0x190(r3)
/* 8023BEE8 00238E28  D0 63 01 94 */	stfs f3, 0x194(r3)
/* 8023BEEC 00238E2C  38 21 00 70 */	addi r1, r1, 0x70
/* 8023BEF0 00238E30  4E 80 00 20 */	blr 

.global doUpdate__Q34Game15BaseGameSection10ZoomCameraFv
doUpdate__Q34Game15BaseGameSection10ZoomCameraFv:
/* 8023BEF4 00238E34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023BEF8 00238E38  7C 08 02 A6 */	mflr r0
/* 8023BEFC 00238E3C  C0 02 C2 50 */	lfs f0, lbl_8051A5B0@sda21(r2)
/* 8023BF00 00238E40  38 80 00 00 */	li r4, 0
/* 8023BF04 00238E44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023BF08 00238E48  38 A0 00 00 */	li r5, 0
/* 8023BF0C 00238E4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8023BF10 00238E50  7C 7F 1B 78 */	mr r31, r3
/* 8023BF14 00238E54  80 63 01 AC */	lwz r3, 0x1ac(r3)
/* 8023BF18 00238E58  C0 23 00 48 */	lfs f1, 0x48(r3)
/* 8023BF1C 00238E5C  FC 40 0A 10 */	fabs f2, f1
/* 8023BF20 00238E60  FC 60 08 90 */	fmr f3, f1
/* 8023BF24 00238E64  FC 20 10 18 */	frsp f1, f2
/* 8023BF28 00238E68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8023BF2C 00238E6C  40 80 00 08 */	bge .L_8023BF34
/* 8023BF30 00238E70  C0 62 C2 18 */	lfs f3, lbl_8051A578@sda21(r2)
.L_8023BF34:
/* 8023BF34 00238E74  FC 20 10 18 */	frsp f1, f2
/* 8023BF38 00238E78  C0 02 C2 50 */	lfs f0, lbl_8051A5B0@sda21(r2)
/* 8023BF3C 00238E7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8023BF40 00238E80  7C 00 00 26 */	mfcr r0
/* 8023BF44 00238E84  54 00 0F FF */	rlwinm. r0, r0, 1, 0x1f, 0x1f
/* 8023BF48 00238E88  40 82 00 08 */	bne .L_8023BF50
/* 8023BF4C 00238E8C  38 80 00 01 */	li r4, 1
.L_8023BF50:
/* 8023BF50 00238E90  C0 42 C2 54 */	lfs f2, lbl_8051A5B4@sda21(r2)
/* 8023BF54 00238E94  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8023BF58 00238E98  C0 22 C2 58 */	lfs f1, lbl_8051A5B8@sda21(r2)
/* 8023BF5C 00238E9C  EC 02 00 FC */	fnmsubs f0, f2, f3, f0
/* 8023BF60 00238EA0  D0 1F 01 98 */	stfs f0, 0x198(r31)
/* 8023BF64 00238EA4  C0 5F 01 98 */	lfs f2, 0x198(r31)
/* 8023BF68 00238EA8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8023BF6C 00238EAC  4C 41 13 82 */	cror 2, 1, 2
/* 8023BF70 00238EB0  40 82 00 10 */	bne .L_8023BF80
/* 8023BF74 00238EB4  EC 02 08 28 */	fsubs f0, f2, f1
/* 8023BF78 00238EB8  D0 1F 01 98 */	stfs f0, 0x198(r31)
/* 8023BF7C 00238EBC  48 00 00 18 */	b .L_8023BF94
.L_8023BF80:
/* 8023BF80 00238EC0  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023BF84 00238EC4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8023BF88 00238EC8  40 80 00 0C */	bge .L_8023BF94
/* 8023BF8C 00238ECC  EC 02 08 2A */	fadds f0, f2, f1
/* 8023BF90 00238ED0  D0 1F 01 98 */	stfs f0, 0x198(r31)
.L_8023BF94:
/* 8023BF94 00238ED4  80 7F 01 AC */	lwz r3, 0x1ac(r31)
/* 8023BF98 00238ED8  C0 02 C2 50 */	lfs f0, lbl_8051A5B0@sda21(r2)
/* 8023BF9C 00238EDC  C0 23 00 4C */	lfs f1, 0x4c(r3)
/* 8023BFA0 00238EE0  FC 40 0A 10 */	fabs f2, f1
/* 8023BFA4 00238EE4  FC 60 08 90 */	fmr f3, f1
/* 8023BFA8 00238EE8  FC 20 10 18 */	frsp f1, f2
/* 8023BFAC 00238EEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8023BFB0 00238EF0  40 80 00 08 */	bge .L_8023BFB8
/* 8023BFB4 00238EF4  C0 62 C2 18 */	lfs f3, lbl_8051A578@sda21(r2)
.L_8023BFB8:
/* 8023BFB8 00238EF8  FC 20 10 18 */	frsp f1, f2
/* 8023BFBC 00238EFC  C0 02 C2 50 */	lfs f0, lbl_8051A5B0@sda21(r2)
/* 8023BFC0 00238F00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8023BFC4 00238F04  7C 00 00 26 */	mfcr r0
/* 8023BFC8 00238F08  54 00 0F FF */	rlwinm. r0, r0, 1, 0x1f, 0x1f
/* 8023BFCC 00238F0C  40 82 00 08 */	bne .L_8023BFD4
/* 8023BFD0 00238F10  38 A0 00 01 */	li r5, 1
.L_8023BFD4:
/* 8023BFD4 00238F14  C0 42 C2 5C */	lfs f2, lbl_8051A5BC@sda21(r2)
/* 8023BFD8 00238F18  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 8023BFDC 00238F1C  C0 02 C2 60 */	lfs f0, lbl_8051A5C0@sda21(r2)
/* 8023BFE0 00238F20  EC 22 08 FC */	fnmsubs f1, f2, f3, f1
/* 8023BFE4 00238F24  D0 3F 01 9C */	stfs f1, 0x19c(r31)
/* 8023BFE8 00238F28  C0 3F 01 A8 */	lfs f1, 0x1a8(r31)
/* 8023BFEC 00238F2C  C0 5F 01 9C */	lfs f2, 0x19c(r31)
/* 8023BFF0 00238F30  EC 61 00 28 */	fsubs f3, f1, f0
/* 8023BFF4 00238F34  EC 00 08 2A */	fadds f0, f0, f1
/* 8023BFF8 00238F38  FC 02 18 40 */	fcmpo cr0, f2, f3
/* 8023BFFC 00238F3C  40 80 00 10 */	bge .L_8023C00C
/* 8023C000 00238F40  D0 7F 01 9C */	stfs f3, 0x19c(r31)
/* 8023C004 00238F44  38 A0 00 00 */	li r5, 0
/* 8023C008 00238F48  48 00 00 14 */	b .L_8023C01C
.L_8023C00C:
/* 8023C00C 00238F4C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8023C010 00238F50  40 81 00 0C */	ble .L_8023C01C
/* 8023C014 00238F54  D0 1F 01 9C */	stfs f0, 0x19c(r31)
/* 8023C018 00238F58  38 A0 00 00 */	li r5, 0
.L_8023C01C:
/* 8023C01C 00238F5C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8023C020 00238F60  40 82 00 0C */	bne .L_8023C02C
/* 8023C024 00238F64  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8023C028 00238F68  41 82 00 14 */	beq .L_8023C03C
.L_8023C02C:
/* 8023C02C 00238F6C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8023C030 00238F70  38 80 10 84 */	li r4, 0x1084
/* 8023C034 00238F74  38 A0 00 00 */	li r5, 0
/* 8023C038 00238F78  48 0F C5 F9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_8023C03C:
/* 8023C03C 00238F7C  7F E3 FB 78 */	mr r3, r31
/* 8023C040 00238F80  4B FF FC 05 */	bl makeLookAt__Q34Game15BaseGameSection10ZoomCameraFv
/* 8023C044 00238F84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023C048 00238F88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8023C04C 00238F8C  7C 08 03 A6 */	mtlr r0
/* 8023C050 00238F90  38 21 00 10 */	addi r1, r1, 0x10
/* 8023C054 00238F94  4E 80 00 20 */	blr 

.if version == 1
.global do_drawOtakaraWindow__Q24Game15BaseGameSectionFR8Graphics
do_drawOtakaraWindow__Q24Game15BaseGameSectionFR8Graphics:
/* 8023C058 00238F98  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 8023C05C 00238F9C  7C 08 02 A6 */	mflr r0
/* 8023C060 00238FA0  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 8023C064 00238FA4  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 8023C068 00238FA8  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 8023C06C 00238FAC  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 8023C070 00238FB0  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 8023C074 00238FB4  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 8023C078 00238FB8  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8023C07C 00238FBC  7C 7E 1B 78 */	mr r30, r3
/* 8023C080 00238FC0  7C 9F 23 78 */	mr r31, r4
/* 8023C084 00238FC4  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8023C088 00238FC8  2C 00 00 04 */	cmpwi r0, 4
/* 8023C08C 00238FCC  41 82 03 B8 */	beq .L_8023C444
/* 8023C090 00238FD0  80 7E 01 3C */	lwz r3, 0x15c(r30)
/* 8023C094 00238FD4  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8023C098 00238FD8  28 03 00 00 */	cmplwi r3, 0
/* 8023C09C 00238FDC  C3 E4 00 54 */	lfs f31, 0x54(r4)
/* 8023C0A0 00238FE0  41 82 00 9C */	beq .L_8023C13C
/* 8023C0A4 00238FE4  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C0A8 00238FE8  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8023C0AC 00238FEC  7D 89 03 A6 */	mtctr r12
/* 8023C0B0 00238FF0  4E 80 04 21 */	bctrl 
/* 8023C0B4 00238FF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8023C0B8 00238FF8  41 82 00 84 */	beq .L_8023C13C
/* 8023C0BC 00238FFC  83 BE 01 3C */	lwz r29, 0x15c(r30)
/* 8023C0C0 00239000  7F A3 EB 78 */	mr r3, r29
/* 8023C0C4 00239004  81 9D 00 00 */	lwz r12, 0(r29)
/* 8023C0C8 00239008  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8023C0CC 0023900C  7D 89 03 A6 */	mtctr r12
/* 8023C0D0 00239010  4E 80 04 21 */	bctrl 
/* 8023C0D4 00239014  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8023C0D8 00239018  28 00 00 03 */	cmplwi r0, 3
/* 8023C0DC 0023901C  41 82 00 24 */	beq .L_8023C100
/* 8023C0E0 00239020  7F A3 EB 78 */	mr r3, r29
/* 8023C0E4 00239024  81 9D 00 00 */	lwz r12, 0(r29)
/* 8023C0E8 00239028  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8023C0EC 0023902C  7D 89 03 A6 */	mtctr r12
/* 8023C0F0 00239030  4E 80 04 21 */	bctrl 
/* 8023C0F4 00239034  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8023C0F8 00239038  28 00 00 04 */	cmplwi r0, 4
/* 8023C0FC 0023903C  40 82 00 40 */	bne .L_8023C13C
.L_8023C100:
/* 8023C100 00239040  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023C104 00239044  48 1C 13 45 */	bl update_Kantei__Q26Screen9Game2DMgrFv
/* 8023C108 00239048  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8023C10C 0023904C  40 82 00 30 */	bne .L_8023C13C
/* 8023C110 00239050  80 1E 01 34 */	lwz r0, 0x154(r30)
/* 8023C114 00239054  2C 00 00 02 */	cmpwi r0, 2
/* 8023C118 00239058  40 82 00 24 */	bne .L_8023C13C
/* 8023C11C 0023905C  38 00 00 04 */	li r0, 4
/* 8023C120 00239060  90 1E 01 34 */	stw r0, 0x154(r30)
/* 8023C124 00239064  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8023C128 00239068  28 03 00 00 */	cmplwi r3, 0
/* 8023C12C 0023906C  41 82 00 10 */	beq .L_8023C13C
/* 8023C130 00239070  38 80 00 01 */	li r4, 1
/* 8023C134 00239074  38 A0 00 00 */	li r5, 0
/* 8023C138 00239078  48 1F 22 51 */	bl unsuspend__Q24Game11MoviePlayerFlb
.L_8023C13C:
/* 8023C13C 0023907C  80 1E 01 34 */	lwz r0, 0x154(r30)
/* 8023C140 00239080  2C 00 00 02 */	cmpwi r0, 2
/* 8023C144 00239084  41 82 00 A0 */	beq .L_8023C1E4
/* 8023C148 00239088  40 80 00 14 */	bge .L_8023C15C
/* 8023C14C 0023908C  2C 00 00 00 */	cmpwi r0, 0
/* 8023C150 00239090  41 82 02 F4 */	beq .L_8023C444
/* 8023C154 00239094  40 80 00 18 */	bge .L_8023C16C
/* 8023C158 00239098  48 00 00 8C */	b .L_8023C1E4
.L_8023C15C:
/* 8023C15C 0023909C  2C 00 00 04 */	cmpwi r0, 4
/* 8023C160 002390A0  40 80 00 84 */	bge .L_8023C1E4
/* 8023C164 002390A4  48 00 00 44 */	b .L_8023C1A8
/* 8023C168 002390A8  48 00 02 DC */	b .L_8023C444
.L_8023C16C:
/* 8023C16C 002390AC  C0 42 C2 64 */	lfs f2, lbl_8051A5C4@sda21(r2)
/* 8023C170 002390B0  C0 3E 01 40 */	lfs f1, 0x160(r30)
/* 8023C174 002390B4  C0 02 C2 34 */	lfs f0, lbl_8051A594@sda21(r2)
/* 8023C178 002390B8  EC 22 0F FA */	fmadds f1, f2, f31, f1
/* 8023C17C 002390BC  D0 3E 01 40 */	stfs f1, 0x160(r30)
/* 8023C180 002390C0  C0 3E 01 40 */	lfs f1, 0x160(r30)
/* 8023C184 002390C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8023C188 002390C8  4C 41 13 82 */	cror 2, 1, 2
/* 8023C18C 002390CC  40 82 00 58 */	bne .L_8023C1E4
/* 8023C190 002390D0  D0 1E 01 40 */	stfs f0, 0x160(r30)
/* 8023C194 002390D4  38 00 00 02 */	li r0, 2
/* 8023C198 002390D8  C0 02 C2 68 */	lfs f0, lbl_8051A5C8@sda21(r2)
/* 8023C19C 002390DC  90 1E 01 34 */	stw r0, 0x154(r30)
/* 8023C1A0 002390E0  D0 1E 01 44 */	stfs f0, 0x164(r30)
/* 8023C1A4 002390E4  48 00 00 40 */	b .L_8023C1E4
.L_8023C1A8:
/* 8023C1A8 002390E8  C0 42 C2 6C */	lfs f2, lbl_8051A5CC@sda21(r2)
/* 8023C1AC 002390EC  38 00 00 00 */	li r0, 0
/* 8023C1B0 002390F0  C0 3E 01 40 */	lfs f1, 0x160(r30)
/* 8023C1B4 002390F4  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023C1B8 002390F8  EC 22 0F FC */	fnmsubs f1, f2, f31, f1
/* 8023C1BC 002390FC  D0 3E 01 40 */	stfs f1, 0x160(r30)
/* 8023C1C0 00239100  D0 1E 01 40 */	stfs f0, 0x160(r30)
/* 8023C1C4 00239104  D0 1E 01 40 */	stfs f0, 0x160(r30)
/* 8023C1C8 00239108  90 1E 01 34 */	stw r0, 0x154(r30)
/* 8023C1CC 0023910C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8023C1D0 00239110  28 03 00 00 */	cmplwi r3, 0
/* 8023C1D4 00239114  41 82 00 10 */	beq .L_8023C1E4
/* 8023C1D8 00239118  38 80 00 01 */	li r4, 1
/* 8023C1DC 0023911C  38 A0 00 00 */	li r5, 0
/* 8023C1E0 00239120  48 1F 21 A9 */	bl unsuspend__Q24Game11MoviePlayerFlb
.L_8023C1E4:
/* 8023C1E4 00239124  80 7E 00 F8 */	lwz r3, 0x118(r30)
/* 8023C1E8 00239128  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C1EC 0023912C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8023C1F0 00239130  7D 89 03 A6 */	mtctr r12
/* 8023C1F4 00239134  4E 80 04 21 */	bctrl 
/* 8023C1F8 00239138  38 61 00 84 */	addi r3, r1, 0x84
/* 8023C1FC 0023913C  4B EA E0 A5 */	bl PSMTXIdentity
/* 8023C200 00239140  80 7E 00 F8 */	lwz r3, 0x118(r30)
/* 8023C204 00239144  38 81 00 84 */	addi r4, r1, 0x84
/* 8023C208 00239148  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C20C 0023914C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8023C210 00239150  7D 89 03 A6 */	mtctr r12
/* 8023C214 00239154  4E 80 04 21 */	bctrl 
/* 8023C218 00239158  80 7E 01 4C */	lwz r3, 0x16c(r30)
/* 8023C21C 0023915C  48 1D EB 99 */	bl update__6CameraFv
/* 8023C220 00239160  48 1E 70 05 */	bl getRenderModeObj__6SystemFv
/* 8023C224 00239164  A3 A3 00 06 */	lhz r29, 6(r3)
/* 8023C228 00239168  48 1E 6F FD */	bl getRenderModeObj__6SystemFv
/* 8023C22C 0023916C  A0 83 00 04 */	lhz r4, 4(r3)
/* 8023C230 00239170  3C 00 43 30 */	lis r0, 0x4330
/* 8023C234 00239174  C0 62 C2 18 */	lfs f3, lbl_8051A578@sda21(r2)
/* 8023C238 00239178  7F E3 FB 78 */	mr r3, r31
/* 8023C23C 0023917C  90 81 00 BC */	stw r4, 0xbc(r1)
/* 8023C240 00239180  38 81 00 14 */	addi r4, r1, 0x14
/* 8023C244 00239184  C8 42 C2 28 */	lfd f2, lbl_8051A588@sda21(r2)
/* 8023C248 00239188  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 8023C24C 0023918C  C8 01 00 B8 */	lfd f0, 0xb8(r1)
/* 8023C250 00239190  93 A1 00 C4 */	stw r29, 0xc4(r1)
/* 8023C254 00239194  EC 20 10 28 */	fsubs f1, f0, f2
/* 8023C258 00239198  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 8023C25C 0023919C  C8 01 00 C0 */	lfd f0, 0xc0(r1)
/* 8023C260 002391A0  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 8023C264 002391A4  EC 00 10 28 */	fsubs f0, f0, f2
/* 8023C268 002391A8  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 8023C26C 002391AC  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8023C270 002391B0  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8023C274 002391B4  48 1E A6 51 */	bl "clearZBuffer__8GraphicsFR7Rect<f>"
/* 8023C278 002391B8  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8023C27C 002391BC  38 81 00 54 */	addi r4, r1, 0x54
/* 8023C280 002391C0  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 8023C284 002391C4  4B EA E0 49 */	bl PSMTXCopy
/* 8023C288 002391C8  80 1E 01 3C */	lwz r0, 0x15c(r30)
/* 8023C28C 002391CC  83 BE 01 38 */	lwz r29, 0x158(r30)
/* 8023C290 002391D0  28 00 00 00 */	cmplwi r0, 0
/* 8023C294 002391D4  41 82 01 44 */	beq .L_8023C3D8
/* 8023C298 002391D8  7F A3 EB 78 */	mr r3, r29
/* 8023C29C 002391DC  38 80 00 00 */	li r4, 0
/* 8023C2A0 002391E0  48 1E 92 79 */	bl setJ3DViewMtx__8ViewportFb
/* 8023C2A4 002391E4  83 FE 01 4C */	lwz r31, 0x16c(r30)
/* 8023C2A8 002391E8  7F E3 FB 78 */	mr r3, r31
/* 8023C2AC 002391EC  48 1D EA 99 */	bl setProjection__6CameraFv
/* 8023C2B0 002391F0  7F E3 FB 78 */	mr r3, r31
/* 8023C2B4 002391F4  38 80 00 00 */	li r4, 0
/* 8023C2B8 002391F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023C2BC 002391FC  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8023C2C0 00239200  7D 89 03 A6 */	mtctr r12
/* 8023C2C4 00239204  4E 80 04 21 */	bctrl 
/* 8023C2C8 00239208  3C 80 80 51 */	lis r4, j3dSys@ha
/* 8023C2CC 0023920C  38 84 F2 30 */	addi r4, r4, j3dSys@l
/* 8023C2D0 00239210  4B EA DF FD */	bl PSMTXCopy
/* 8023C2D4 00239214  80 7E 01 3C */	lwz r3, 0x15c(r30)
/* 8023C2D8 00239218  88 03 00 D8 */	lbz r0, 0xd8(r3)
/* 8023C2DC 0023921C  60 00 00 34 */	ori r0, r0, 0x34
/* 8023C2E0 00239220  98 03 00 D8 */	stb r0, 0xd8(r3)
/* 8023C2E4 00239224  80 7E 01 3C */	lwz r3, 0x15c(r30)
/* 8023C2E8 00239228  38 63 01 38 */	addi r3, r3, 0x138
/* 8023C2EC 0023922C  4B EA DF B5 */	bl PSMTXIdentity
/* 8023C2F0 00239230  C0 1E 01 40 */	lfs f0, 0x160(r30)
/* 8023C2F4 00239234  38 61 00 24 */	addi r3, r1, 0x24
/* 8023C2F8 00239238  EC 00 00 32 */	fmuls f0, f0, f0
/* 8023C2FC 0023923C  D0 01 00 08 */	stfs f0, 8(r1)
/* 8023C300 00239240  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8023C304 00239244  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8023C308 00239248  4B EA DF 99 */	bl PSMTXIdentity
/* 8023C30C 0023924C  80 9E 01 3C */	lwz r4, 0x15c(r30)
/* 8023C310 00239250  38 61 00 24 */	addi r3, r1, 0x24
/* 8023C314 00239254  80 84 01 74 */	lwz r4, 0x174(r4)
/* 8023C318 00239258  80 84 00 08 */	lwz r4, 8(r4)
/* 8023C31C 0023925C  38 84 00 24 */	addi r4, r4, 0x24
/* 8023C320 00239260  4B EA DF AD */	bl PSMTXCopy
/* 8023C324 00239264  80 7E 01 3C */	lwz r3, 0x15c(r30)
/* 8023C328 00239268  38 80 00 00 */	li r4, 0
/* 8023C32C 0023926C  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C330 00239270  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8023C334 00239274  7D 89 03 A6 */	mtctr r12
/* 8023C338 00239278  4E 80 04 21 */	bctrl 
/* 8023C33C 0023927C  80 7E 01 3C */	lwz r3, 0x15c(r30)
/* 8023C340 00239280  C0 41 00 08 */	lfs f2, 8(r1)
/* 8023C344 00239284  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8023C348 00239288  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8023C34C 0023928C  80 63 00 08 */	lwz r3, 8(r3)
/* 8023C350 00239290  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8023C354 00239294  D0 43 00 18 */	stfs f2, 0x18(r3)
/* 8023C358 00239298  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 8023C35C 0023929C  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8023C360 002392A0  80 7E 01 3C */	lwz r3, 0x15c(r30)
/* 8023C364 002392A4  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8023C368 002392A8  80 63 00 08 */	lwz r3, 8(r3)
/* 8023C36C 002392AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C370 002392B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8023C374 002392B4  7D 89 03 A6 */	mtctr r12
/* 8023C378 002392B8  4E 80 04 21 */	bctrl 
/* 8023C37C 002392BC  48 20 2C D1 */	bl setViewCalcModeInd__Q28SysShape5ModelFv
/* 8023C380 002392C0  80 7E 01 3C */	lwz r3, 0x15c(r30)
/* 8023C384 002392C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C388 002392C8  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8023C38C 002392CC  7D 89 03 A6 */	mtctr r12
/* 8023C390 002392D0  4E 80 04 21 */	bctrl 
/* 8023C394 002392D4  48 20 2C AD */	bl setViewCalcModeImm__Q28SysShape5ModelFv
/* 8023C398 002392D8  80 7E 01 3C */	lwz r3, 0x15c(r30)
/* 8023C39C 002392DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C3A0 002392E0  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8023C3A4 002392E4  7D 89 03 A6 */	mtctr r12
/* 8023C3A8 002392E8  4E 80 04 21 */	bctrl 
/* 8023C3AC 002392EC  7F C3 F3 78 */	mr r3, r30
/* 8023C3B0 002392F0  38 80 00 05 */	li r4, 5
/* 8023C3B4 002392F4  4B F1 50 A9 */	bl setDrawBuffer__Q24Game15BaseGameSectionFi
/* 8023C3B8 002392F8  80 7E 01 3C */	lwz r3, 0x15c(r30)
/* 8023C3BC 002392FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C3C0 00239300  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8023C3C4 00239304  7D 89 03 A6 */	mtctr r12
/* 8023C3C8 00239308  4E 80 04 21 */	bctrl 
/* 8023C3CC 0023930C  7F C3 F3 78 */	mr r3, r30
/* 8023C3D0 00239310  38 80 00 00 */	li r4, 0
/* 8023C3D4 00239314  4B F1 50 89 */	bl setDrawBuffer__Q24Game15BaseGameSectionFi
.L_8023C3D8:
/* 8023C3D8 00239318  7F A3 EB 78 */	mr r3, r29
/* 8023C3DC 0023931C  48 1E 90 69 */	bl setViewport__8ViewportFv
/* 8023C3E0 00239320  7F A3 EB 78 */	mr r3, r29
/* 8023C3E4 00239324  48 1E 8D BD */	bl setProjection__8ViewportFv
/* 8023C3E8 00239328  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8023C3EC 0023932C  38 80 00 05 */	li r4, 5
/* 8023C3F0 00239330  48 21 96 D5 */	bl get__Q23Sys11DrawBuffersFi
/* 8023C3F4 00239334  48 21 94 A5 */	bl draw__Q23Sys10DrawBufferFv
/* 8023C3F8 00239338  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8023C3FC 0023933C  38 80 00 05 */	li r4, 5
/* 8023C400 00239340  48 21 96 C5 */	bl get__Q23Sys11DrawBuffersFi
/* 8023C404 00239344  48 21 94 95 */	bl draw__Q23Sys10DrawBufferFv
/* 8023C408 00239348  80 7E 01 2C */	lwz r3, 0x14c(r30)
/* 8023C40C 0023934C  38 80 00 05 */	li r4, 5
/* 8023C410 00239350  48 21 96 B5 */	bl get__Q23Sys11DrawBuffersFi
/* 8023C414 00239354  48 21 95 0D */	bl frameInit__Q23Sys10DrawBufferFv
/* 8023C418 00239358  80 7E 01 30 */	lwz r3, 0x150(r30)
/* 8023C41C 0023935C  38 80 00 05 */	li r4, 5
/* 8023C420 00239360  48 21 96 A5 */	bl get__Q23Sys11DrawBuffersFi
/* 8023C424 00239364  48 21 94 FD */	bl frameInit__Q23Sys10DrawBufferFv
/* 8023C428 00239368  3C 80 80 51 */	lis r4, j3dSys@ha
/* 8023C42C 0023936C  38 61 00 54 */	addi r3, r1, 0x54
/* 8023C430 00239370  38 84 F2 30 */	addi r4, r4, j3dSys@l
/* 8023C434 00239374  4B EA DE 99 */	bl PSMTXCopy
/* 8023C438 00239378  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8023C43C 0023937C  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 8023C440 00239380  4B E2 1F 85 */	bl reinitGX__6J3DSysFv
.L_8023C444:
/* 8023C444 00239384  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 8023C448 00239388  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 8023C44C 0023938C  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 8023C450 00239390  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 8023C454 00239394  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 8023C458 00239398  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 8023C45C 0023939C  7C 08 03 A6 */	mtlr r0
/* 8023C460 002393A0  38 21 00 F0 */	addi r1, r1, 0xf0
/* 8023C464 002393A4  4E 80 00 20 */	blr 
.else
.global do_drawOtakaraWindow__Q24Game15BaseGameSectionFR8Graphics
do_drawOtakaraWindow__Q24Game15BaseGameSectionFR8Graphics:
/* 8023C058 00238F98  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 8023C05C 00238F9C  7C 08 02 A6 */	mflr r0
/* 8023C060 00238FA0  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 8023C064 00238FA4  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 8023C068 00238FA8  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 8023C06C 00238FAC  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 8023C070 00238FB0  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 8023C074 00238FB4  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 8023C078 00238FB8  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8023C07C 00238FBC  7C 7E 1B 78 */	mr r30, r3
/* 8023C080 00238FC0  7C 9F 23 78 */	mr r31, r4
/* 8023C084 00238FC4  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8023C088 00238FC8  2C 00 00 04 */	cmpwi r0, 4
/* 8023C08C 00238FCC  41 82 03 B8 */	beq .L_8023C444
/* 8023C090 00238FD0  80 7E 01 3C */	lwz r3, 0x13c(r30)
/* 8023C094 00238FD4  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8023C098 00238FD8  28 03 00 00 */	cmplwi r3, 0
/* 8023C09C 00238FDC  C3 E4 00 54 */	lfs f31, 0x54(r4)
/* 8023C0A0 00238FE0  41 82 00 9C */	beq .L_8023C13C
/* 8023C0A4 00238FE4  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C0A8 00238FE8  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8023C0AC 00238FEC  7D 89 03 A6 */	mtctr r12
/* 8023C0B0 00238FF0  4E 80 04 21 */	bctrl 
/* 8023C0B4 00238FF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8023C0B8 00238FF8  41 82 00 84 */	beq .L_8023C13C
/* 8023C0BC 00238FFC  83 BE 01 3C */	lwz r29, 0x13c(r30)
/* 8023C0C0 00239000  7F A3 EB 78 */	mr r3, r29
/* 8023C0C4 00239004  81 9D 00 00 */	lwz r12, 0(r29)
/* 8023C0C8 00239008  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8023C0CC 0023900C  7D 89 03 A6 */	mtctr r12
/* 8023C0D0 00239010  4E 80 04 21 */	bctrl 
/* 8023C0D4 00239014  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8023C0D8 00239018  28 00 00 03 */	cmplwi r0, 3
/* 8023C0DC 0023901C  41 82 00 24 */	beq .L_8023C100
/* 8023C0E0 00239020  7F A3 EB 78 */	mr r3, r29
/* 8023C0E4 00239024  81 9D 00 00 */	lwz r12, 0(r29)
/* 8023C0E8 00239028  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8023C0EC 0023902C  7D 89 03 A6 */	mtctr r12
/* 8023C0F0 00239030  4E 80 04 21 */	bctrl 
/* 8023C0F4 00239034  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8023C0F8 00239038  28 00 00 04 */	cmplwi r0, 4
/* 8023C0FC 0023903C  40 82 00 40 */	bne .L_8023C13C
.L_8023C100:
/* 8023C100 00239040  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8023C104 00239044  48 1C 13 45 */	bl update_Kantei__Q26Screen9Game2DMgrFv
/* 8023C108 00239048  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8023C10C 0023904C  40 82 00 30 */	bne .L_8023C13C
/* 8023C110 00239050  80 1E 01 34 */	lwz r0, 0x134(r30)
/* 8023C114 00239054  2C 00 00 02 */	cmpwi r0, 2
/* 8023C118 00239058  40 82 00 24 */	bne .L_8023C13C
/* 8023C11C 0023905C  38 00 00 04 */	li r0, 4
/* 8023C120 00239060  90 1E 01 34 */	stw r0, 0x134(r30)
/* 8023C124 00239064  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8023C128 00239068  28 03 00 00 */	cmplwi r3, 0
/* 8023C12C 0023906C  41 82 00 10 */	beq .L_8023C13C
/* 8023C130 00239070  38 80 00 01 */	li r4, 1
/* 8023C134 00239074  38 A0 00 00 */	li r5, 0
/* 8023C138 00239078  48 1F 22 51 */	bl unsuspend__Q24Game11MoviePlayerFlb
.L_8023C13C:
/* 8023C13C 0023907C  80 1E 01 34 */	lwz r0, 0x134(r30)
/* 8023C140 00239080  2C 00 00 02 */	cmpwi r0, 2
/* 8023C144 00239084  41 82 00 A0 */	beq .L_8023C1E4
/* 8023C148 00239088  40 80 00 14 */	bge .L_8023C15C
/* 8023C14C 0023908C  2C 00 00 00 */	cmpwi r0, 0
/* 8023C150 00239090  41 82 02 F4 */	beq .L_8023C444
/* 8023C154 00239094  40 80 00 18 */	bge .L_8023C16C
/* 8023C158 00239098  48 00 00 8C */	b .L_8023C1E4
.L_8023C15C:
/* 8023C15C 0023909C  2C 00 00 04 */	cmpwi r0, 4
/* 8023C160 002390A0  40 80 00 84 */	bge .L_8023C1E4
/* 8023C164 002390A4  48 00 00 44 */	b .L_8023C1A8
/* 8023C168 002390A8  48 00 02 DC */	b .L_8023C444
.L_8023C16C:
/* 8023C16C 002390AC  C0 42 C2 64 */	lfs f2, lbl_8051A5C4@sda21(r2)
/* 8023C170 002390B0  C0 3E 01 40 */	lfs f1, 0x140(r30)
/* 8023C174 002390B4  C0 02 C2 34 */	lfs f0, lbl_8051A594@sda21(r2)
/* 8023C178 002390B8  EC 22 0F FA */	fmadds f1, f2, f31, f1
/* 8023C17C 002390BC  D0 3E 01 40 */	stfs f1, 0x140(r30)
/* 8023C180 002390C0  C0 3E 01 40 */	lfs f1, 0x140(r30)
/* 8023C184 002390C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8023C188 002390C8  4C 41 13 82 */	cror 2, 1, 2
/* 8023C18C 002390CC  40 82 00 58 */	bne .L_8023C1E4
/* 8023C190 002390D0  D0 1E 01 40 */	stfs f0, 0x140(r30)
/* 8023C194 002390D4  38 00 00 02 */	li r0, 2
/* 8023C198 002390D8  C0 02 C2 68 */	lfs f0, lbl_8051A5C8@sda21(r2)
/* 8023C19C 002390DC  90 1E 01 34 */	stw r0, 0x134(r30)
/* 8023C1A0 002390E0  D0 1E 01 44 */	stfs f0, 0x144(r30)
/* 8023C1A4 002390E4  48 00 00 40 */	b .L_8023C1E4
.L_8023C1A8:
/* 8023C1A8 002390E8  C0 42 C2 6C */	lfs f2, lbl_8051A5CC@sda21(r2)
/* 8023C1AC 002390EC  38 00 00 00 */	li r0, 0
/* 8023C1B0 002390F0  C0 3E 01 40 */	lfs f1, 0x140(r30)
/* 8023C1B4 002390F4  C0 02 C2 18 */	lfs f0, lbl_8051A578@sda21(r2)
/* 8023C1B8 002390F8  EC 22 0F FC */	fnmsubs f1, f2, f31, f1
/* 8023C1BC 002390FC  D0 3E 01 40 */	stfs f1, 0x140(r30)
/* 8023C1C0 00239100  D0 1E 01 40 */	stfs f0, 0x140(r30)
/* 8023C1C4 00239104  D0 1E 01 40 */	stfs f0, 0x140(r30)
/* 8023C1C8 00239108  90 1E 01 34 */	stw r0, 0x134(r30)
/* 8023C1CC 0023910C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8023C1D0 00239110  28 03 00 00 */	cmplwi r3, 0
/* 8023C1D4 00239114  41 82 00 10 */	beq .L_8023C1E4
/* 8023C1D8 00239118  38 80 00 01 */	li r4, 1
/* 8023C1DC 0023911C  38 A0 00 00 */	li r5, 0
/* 8023C1E0 00239120  48 1F 21 A9 */	bl unsuspend__Q24Game11MoviePlayerFlb
.L_8023C1E4:
/* 8023C1E4 00239124  80 7E 00 F8 */	lwz r3, 0xf8(r30)
/* 8023C1E8 00239128  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C1EC 0023912C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8023C1F0 00239130  7D 89 03 A6 */	mtctr r12
/* 8023C1F4 00239134  4E 80 04 21 */	bctrl 
/* 8023C1F8 00239138  38 61 00 84 */	addi r3, r1, 0x84
/* 8023C1FC 0023913C  4B EA E0 A5 */	bl PSMTXIdentity
/* 8023C200 00239140  80 7E 00 F8 */	lwz r3, 0xf8(r30)
/* 8023C204 00239144  38 81 00 84 */	addi r4, r1, 0x84
/* 8023C208 00239148  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C20C 0023914C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8023C210 00239150  7D 89 03 A6 */	mtctr r12
/* 8023C214 00239154  4E 80 04 21 */	bctrl 
/* 8023C218 00239158  80 7E 01 4C */	lwz r3, 0x14c(r30)
/* 8023C21C 0023915C  48 1D EB 99 */	bl update__6CameraFv
/* 8023C220 00239160  48 1E 70 05 */	bl getRenderModeObj__6SystemFv
/* 8023C224 00239164  A3 A3 00 06 */	lhz r29, 6(r3)
/* 8023C228 00239168  48 1E 6F FD */	bl getRenderModeObj__6SystemFv
/* 8023C22C 0023916C  A0 83 00 04 */	lhz r4, 4(r3)
/* 8023C230 00239170  3C 00 43 30 */	lis r0, 0x4330
/* 8023C234 00239174  C0 62 C2 18 */	lfs f3, lbl_8051A578@sda21(r2)
/* 8023C238 00239178  7F E3 FB 78 */	mr r3, r31
/* 8023C23C 0023917C  90 81 00 BC */	stw r4, 0xbc(r1)
/* 8023C240 00239180  38 81 00 14 */	addi r4, r1, 0x14
/* 8023C244 00239184  C8 42 C2 28 */	lfd f2, lbl_8051A588@sda21(r2)
/* 8023C248 00239188  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 8023C24C 0023918C  C8 01 00 B8 */	lfd f0, 0xb8(r1)
/* 8023C250 00239190  93 A1 00 C4 */	stw r29, 0xc4(r1)
/* 8023C254 00239194  EC 20 10 28 */	fsubs f1, f0, f2
/* 8023C258 00239198  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 8023C25C 0023919C  C8 01 00 C0 */	lfd f0, 0xc0(r1)
/* 8023C260 002391A0  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 8023C264 002391A4  EC 00 10 28 */	fsubs f0, f0, f2
/* 8023C268 002391A8  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 8023C26C 002391AC  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8023C270 002391B0  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8023C274 002391B4  48 1E A6 51 */	bl "clearZBuffer__8GraphicsFR7Rect<f>"
/* 8023C278 002391B8  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8023C27C 002391BC  38 81 00 54 */	addi r4, r1, 0x54
/* 8023C280 002391C0  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 8023C284 002391C4  4B EA E0 49 */	bl PSMTXCopy
/* 8023C288 002391C8  80 1E 01 3C */	lwz r0, 0x13c(r30)
/* 8023C28C 002391CC  83 BE 01 38 */	lwz r29, 0x138(r30)
/* 8023C290 002391D0  28 00 00 00 */	cmplwi r0, 0
/* 8023C294 002391D4  41 82 01 44 */	beq .L_8023C3D8
/* 8023C298 002391D8  7F A3 EB 78 */	mr r3, r29
/* 8023C29C 002391DC  38 80 00 00 */	li r4, 0
/* 8023C2A0 002391E0  48 1E 92 79 */	bl setJ3DViewMtx__8ViewportFb
/* 8023C2A4 002391E4  83 FE 01 4C */	lwz r31, 0x14c(r30)
/* 8023C2A8 002391E8  7F E3 FB 78 */	mr r3, r31
/* 8023C2AC 002391EC  48 1D EA 99 */	bl setProjection__6CameraFv
/* 8023C2B0 002391F0  7F E3 FB 78 */	mr r3, r31
/* 8023C2B4 002391F4  38 80 00 00 */	li r4, 0
/* 8023C2B8 002391F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8023C2BC 002391FC  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8023C2C0 00239200  7D 89 03 A6 */	mtctr r12
/* 8023C2C4 00239204  4E 80 04 21 */	bctrl 
/* 8023C2C8 00239208  3C 80 80 51 */	lis r4, j3dSys@ha
/* 8023C2CC 0023920C  38 84 F2 30 */	addi r4, r4, j3dSys@l
/* 8023C2D0 00239210  4B EA DF FD */	bl PSMTXCopy
/* 8023C2D4 00239214  80 7E 01 3C */	lwz r3, 0x13c(r30)
/* 8023C2D8 00239218  88 03 00 D8 */	lbz r0, 0xd8(r3)
/* 8023C2DC 0023921C  60 00 00 34 */	ori r0, r0, 0x34
/* 8023C2E0 00239220  98 03 00 D8 */	stb r0, 0xd8(r3)
/* 8023C2E4 00239224  80 7E 01 3C */	lwz r3, 0x13c(r30)
/* 8023C2E8 00239228  38 63 01 38 */	addi r3, r3, 0x138
/* 8023C2EC 0023922C  4B EA DF B5 */	bl PSMTXIdentity
/* 8023C2F0 00239230  C0 1E 01 40 */	lfs f0, 0x140(r30)
/* 8023C2F4 00239234  38 61 00 24 */	addi r3, r1, 0x24
/* 8023C2F8 00239238  EC 00 00 32 */	fmuls f0, f0, f0
/* 8023C2FC 0023923C  D0 01 00 08 */	stfs f0, 8(r1)
/* 8023C300 00239240  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8023C304 00239244  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8023C308 00239248  4B EA DF 99 */	bl PSMTXIdentity
/* 8023C30C 0023924C  80 9E 01 3C */	lwz r4, 0x13c(r30)
/* 8023C310 00239250  38 61 00 24 */	addi r3, r1, 0x24
/* 8023C314 00239254  80 84 01 74 */	lwz r4, 0x174(r4)
/* 8023C318 00239258  80 84 00 08 */	lwz r4, 8(r4)
/* 8023C31C 0023925C  38 84 00 24 */	addi r4, r4, 0x24
/* 8023C320 00239260  4B EA DF AD */	bl PSMTXCopy
/* 8023C324 00239264  80 7E 01 3C */	lwz r3, 0x13c(r30)
/* 8023C328 00239268  38 80 00 00 */	li r4, 0
/* 8023C32C 0023926C  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C330 00239270  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8023C334 00239274  7D 89 03 A6 */	mtctr r12
/* 8023C338 00239278  4E 80 04 21 */	bctrl 
/* 8023C33C 0023927C  80 7E 01 3C */	lwz r3, 0x13c(r30)
/* 8023C340 00239280  C0 41 00 08 */	lfs f2, 8(r1)
/* 8023C344 00239284  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8023C348 00239288  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8023C34C 0023928C  80 63 00 08 */	lwz r3, 8(r3)
/* 8023C350 00239290  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8023C354 00239294  D0 43 00 18 */	stfs f2, 0x18(r3)
/* 8023C358 00239298  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 8023C35C 0023929C  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8023C360 002392A0  80 7E 01 3C */	lwz r3, 0x13c(r30)
/* 8023C364 002392A4  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8023C368 002392A8  80 63 00 08 */	lwz r3, 8(r3)
/* 8023C36C 002392AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C370 002392B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8023C374 002392B4  7D 89 03 A6 */	mtctr r12
/* 8023C378 002392B8  4E 80 04 21 */	bctrl 
/* 8023C37C 002392BC  48 20 2C D1 */	bl setViewCalcModeInd__Q28SysShape5ModelFv
/* 8023C380 002392C0  80 7E 01 3C */	lwz r3, 0x13c(r30)
/* 8023C384 002392C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C388 002392C8  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8023C38C 002392CC  7D 89 03 A6 */	mtctr r12
/* 8023C390 002392D0  4E 80 04 21 */	bctrl 
/* 8023C394 002392D4  48 20 2C AD */	bl setViewCalcModeImm__Q28SysShape5ModelFv
/* 8023C398 002392D8  80 7E 01 3C */	lwz r3, 0x13c(r30)
/* 8023C39C 002392DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C3A0 002392E0  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8023C3A4 002392E4  7D 89 03 A6 */	mtctr r12
/* 8023C3A8 002392E8  4E 80 04 21 */	bctrl 
/* 8023C3AC 002392EC  7F C3 F3 78 */	mr r3, r30
/* 8023C3B0 002392F0  38 80 00 05 */	li r4, 5
/* 8023C3B4 002392F4  4B F1 50 A9 */	bl setDrawBuffer__Q24Game15BaseGameSectionFi
/* 8023C3B8 002392F8  80 7E 01 3C */	lwz r3, 0x13c(r30)
/* 8023C3BC 002392FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8023C3C0 00239300  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8023C3C4 00239304  7D 89 03 A6 */	mtctr r12
/* 8023C3C8 00239308  4E 80 04 21 */	bctrl 
/* 8023C3CC 0023930C  7F C3 F3 78 */	mr r3, r30
/* 8023C3D0 00239310  38 80 00 00 */	li r4, 0
/* 8023C3D4 00239314  4B F1 50 89 */	bl setDrawBuffer__Q24Game15BaseGameSectionFi
.L_8023C3D8:
/* 8023C3D8 00239318  7F A3 EB 78 */	mr r3, r29
/* 8023C3DC 0023931C  48 1E 90 69 */	bl setViewport__8ViewportFv
/* 8023C3E0 00239320  7F A3 EB 78 */	mr r3, r29
/* 8023C3E4 00239324  48 1E 8D BD */	bl setProjection__8ViewportFv
/* 8023C3E8 00239328  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8023C3EC 0023932C  38 80 00 05 */	li r4, 5
/* 8023C3F0 00239330  48 21 96 D5 */	bl get__Q23Sys11DrawBuffersFi
/* 8023C3F4 00239334  48 21 94 A5 */	bl draw__Q23Sys10DrawBufferFv
/* 8023C3F8 00239338  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8023C3FC 0023933C  38 80 00 05 */	li r4, 5
/* 8023C400 00239340  48 21 96 C5 */	bl get__Q23Sys11DrawBuffersFi
/* 8023C404 00239344  48 21 94 95 */	bl draw__Q23Sys10DrawBufferFv
/* 8023C408 00239348  80 7E 01 2C */	lwz r3, 0x12c(r30)
/* 8023C40C 0023934C  38 80 00 05 */	li r4, 5
/* 8023C410 00239350  48 21 96 B5 */	bl get__Q23Sys11DrawBuffersFi
/* 8023C414 00239354  48 21 95 0D */	bl frameInit__Q23Sys10DrawBufferFv
/* 8023C418 00239358  80 7E 01 30 */	lwz r3, 0x130(r30)
/* 8023C41C 0023935C  38 80 00 05 */	li r4, 5
/* 8023C420 00239360  48 21 96 A5 */	bl get__Q23Sys11DrawBuffersFi
/* 8023C424 00239364  48 21 94 FD */	bl frameInit__Q23Sys10DrawBufferFv
/* 8023C428 00239368  3C 80 80 51 */	lis r4, j3dSys@ha
/* 8023C42C 0023936C  38 61 00 54 */	addi r3, r1, 0x54
/* 8023C430 00239370  38 84 F2 30 */	addi r4, r4, j3dSys@l
/* 8023C434 00239374  4B EA DE 99 */	bl PSMTXCopy
/* 8023C438 00239378  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8023C43C 0023937C  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 8023C440 00239380  4B E2 1F 85 */	bl reinitGX__6J3DSysFv
.L_8023C444:
/* 8023C444 00239384  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 8023C448 00239388  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 8023C44C 0023938C  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 8023C450 00239390  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 8023C454 00239394  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 8023C458 00239398  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 8023C45C 0023939C  7C 08 03 A6 */	mtlr r0
/* 8023C460 002393A0  38 21 00 F0 */	addi r1, r1, 0xf0
/* 8023C464 002393A4  4E 80 00 20 */	blr 
.endif

.global __dt__Q34Game15BaseGameSection10ZoomCameraFv # weak function
__dt__Q34Game15BaseGameSection10ZoomCameraFv:
/* 8023C468 002393A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023C46C 002393AC  7C 08 02 A6 */	mflr r0
/* 8023C470 002393B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023C474 002393B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8023C478 002393B8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8023C47C 002393BC  93 C1 00 08 */	stw r30, 8(r1)
/* 8023C480 002393C0  7C 9E 23 78 */	mr r30, r4
/* 8023C484 002393C4  41 82 00 98 */	beq .L_8023C51C
/* 8023C488 002393C8  3C 80 80 4C */	lis r4, __vt__Q34Game15BaseGameSection10ZoomCamera@ha
/* 8023C48C 002393CC  38 04 16 94 */	addi r0, r4, __vt__Q34Game15BaseGameSection10ZoomCamera@l
/* 8023C490 002393D0  90 1F 00 00 */	stw r0, 0(r31)
/* 8023C494 002393D4  41 82 00 78 */	beq .L_8023C50C
/* 8023C498 002393D8  3C 80 80 4F */	lis r4, __vt__12LookAtCamera@ha
/* 8023C49C 002393DC  38 04 B7 A0 */	addi r0, r4, __vt__12LookAtCamera@l
/* 8023C4A0 002393E0  90 1F 00 00 */	stw r0, 0(r31)
/* 8023C4A4 002393E4  41 82 00 68 */	beq .L_8023C50C
/* 8023C4A8 002393E8  3C 80 80 4F */	lis r4, __vt__6Camera@ha
/* 8023C4AC 002393EC  38 04 B8 20 */	addi r0, r4, __vt__6Camera@l
/* 8023C4B0 002393F0  90 1F 00 00 */	stw r0, 0(r31)
/* 8023C4B4 002393F4  41 82 00 58 */	beq .L_8023C50C
/* 8023C4B8 002393F8  3C 80 80 4F */	lis r4, __vt__11CullFrustum@ha
/* 8023C4BC 002393FC  38 04 B8 9C */	addi r0, r4, __vt__11CullFrustum@l
/* 8023C4C0 00239400  90 1F 00 00 */	stw r0, 0(r31)
/* 8023C4C4 00239404  41 82 00 48 */	beq .L_8023C50C
/* 8023C4C8 00239408  3C 80 80 4B */	lis r4, __vt__9CullPlane@ha
/* 8023C4CC 0023940C  38 04 0E 94 */	addi r0, r4, __vt__9CullPlane@l
/* 8023C4D0 00239410  90 1F 00 00 */	stw r0, 0(r31)
/* 8023C4D4 00239414  41 82 00 38 */	beq .L_8023C50C
/* 8023C4D8 00239418  3C 80 80 4B */	lis r4, "__vt__22ArrayContainer<5Plane>"@ha
/* 8023C4DC 0023941C  38 04 0E 4C */	addi r0, r4, "__vt__22ArrayContainer<5Plane>"@l
/* 8023C4E0 00239420  90 1F 00 00 */	stw r0, 0(r31)
/* 8023C4E4 00239424  41 82 00 28 */	beq .L_8023C50C
/* 8023C4E8 00239428  3C 80 80 4B */	lis r4, "__vt__17Container<5Plane>"@ha
/* 8023C4EC 0023942C  38 04 0E 20 */	addi r0, r4, "__vt__17Container<5Plane>"@l
/* 8023C4F0 00239430  90 1F 00 00 */	stw r0, 0(r31)
/* 8023C4F4 00239434  41 82 00 18 */	beq .L_8023C50C
/* 8023C4F8 00239438  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 8023C4FC 0023943C  38 80 00 00 */	li r4, 0
/* 8023C500 00239440  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 8023C504 00239444  90 1F 00 00 */	stw r0, 0(r31)
/* 8023C508 00239448  48 1D 50 81 */	bl __dt__5CNodeFv
.L_8023C50C:
/* 8023C50C 0023944C  7F C0 07 35 */	extsh. r0, r30
/* 8023C510 00239450  40 81 00 0C */	ble .L_8023C51C
/* 8023C514 00239454  7F E3 FB 78 */	mr r3, r31
/* 8023C518 00239458  4B DE 7B 9D */	bl __dl__FPv
.L_8023C51C:
/* 8023C51C 0023945C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023C520 00239460  7F E3 FB 78 */	mr r3, r31
/* 8023C524 00239464  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8023C528 00239468  83 C1 00 08 */	lwz r30, 8(r1)
/* 8023C52C 0023946C  7C 08 03 A6 */	mtlr r0
/* 8023C530 00239470  38 21 00 10 */	addi r1, r1, 0x10
/* 8023C534 00239474  4E 80 00 20 */	blr 

.global startVibration__12LookAtCameraFi
startVibration__12LookAtCameraFi:
/* 8023C538 00239478  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen21DispMemberSpecialItemFv
getSize__Q32og6Screen21DispMemberSpecialItemFv:
/* 8023C53C 0023947C  38 60 00 10 */	li r3, 0x10
/* 8023C540 00239480  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen21DispMemberSpecialItemFv
getOwnerID__Q32og6Screen21DispMemberSpecialItemFv:
/* 8023C544 00239484  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8023C548 00239488  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8023C54C 0023948C  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen21DispMemberSpecialItemFv
getMemberID__Q32og6Screen21DispMemberSpecialItemFv:
/* 8023C550 00239490  3C 80 49 54 */	lis r4, 0x4954454D@ha
/* 8023C554 00239494  3C 60 00 53 */	lis r3, 0x0053505F@ha
/* 8023C558 00239498  38 84 45 4D */	addi r4, r4, 0x4954454D@l
/* 8023C55C 0023949C  38 63 50 5F */	addi r3, r3, 0x0053505F@l
/* 8023C560 002394A0  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen16DispMemberKanteiFv
getSize__Q32og6Screen16DispMemberKanteiFv:
/* 8023C564 002394A4  38 60 00 40 */	li r3, 0x40
/* 8023C568 002394A8  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen16DispMemberKanteiFv
getOwnerID__Q32og6Screen16DispMemberKanteiFv:
/* 8023C56C 002394AC  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8023C570 002394B0  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8023C574 002394B4  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen16DispMemberKanteiFv # weak function
getMemberID__Q32og6Screen16DispMemberKanteiFv:
/* 8023C578 002394B8  3C 80 4E 54 */	lis r4, 0x4E544549@ha
/* 8023C57C 002394BC  38 60 4B 41 */	li r3, 0x4b41
/* 8023C580 002394C0  38 84 45 49 */	addi r4, r4, 0x4E544549@l
/* 8023C584 002394C4  4E 80 00 20 */	blr 

__sinit_baseGameSectionKantei_cpp: # static initializer
/* 8023C588 002394C8  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8023C58C 002394CC  38 00 FF FF */	li r0, -1
/* 8023C590 002394D0  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8023C594 002394D4  3C 60 80 4C */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8023C598 002394D8  90 0D 96 48 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8023C59C 002394DC  D4 03 16 88 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8023C5A0 002394E0  D0 0D 96 4C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8023C5A4 002394E4  D0 03 00 04 */	stfs f0, 4(r3)
/* 8023C5A8 002394E8  D0 03 00 08 */	stfs f0, 8(r3)
/* 8023C5AC 002394EC  4E 80 00 20 */	blr 
