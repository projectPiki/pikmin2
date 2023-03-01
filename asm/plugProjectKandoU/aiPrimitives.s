.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_aiPrimitives_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047F070, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8047F070
.balign 4
.obj lbl_8047F07C, local
	.asciz "aiPrimitives"
.endobj lbl_8047F07C
.balign 4
.obj lbl_8047F08C, local
	.asciz "ApproachPosActionArg"
.endobj lbl_8047F08C
.balign 4
.obj lbl_8047F0A4, local
	.asciz "aiPrimitives.cpp"
.endobj lbl_8047F0A4
.balign 4
.obj lbl_8047F0B8, local
	.asciz "P2Assert"
.endobj lbl_8047F0B8
.balign 4
.obj lbl_8047F0C4, local
	.asciz "ActionArg"
.endobj lbl_8047F0C4
.balign 4
.obj lbl_8047F0D0, local
	.asciz "GotoSlotArg"
.endobj lbl_8047F0D0
.balign 4
.obj lbl_8047F0DC, local
	.asciz "PathMoveArg"
.endobj lbl_8047F0DC
.balign 4
.obj lbl_8047F0E8, local
	.asciz "zannen !\n"
.endobj lbl_8047F0E8
.balign 4
.obj lbl_8047F0F4, local
	.asciz "start==0"
.endobj lbl_8047F0F4
.balign 4
.obj lbl_8047F100, local
	.asciz "newgoal == 0"
.endobj lbl_8047F100
.balign 4
.obj lbl_8047F110, local
	.asciz "%d->%d->...->%d"
.endobj lbl_8047F110
.balign 4
.obj lbl_8047F120, local
	.asciz "no handle %d\n"
.endobj lbl_8047F120
.balign 4
.obj lbl_8047F130, local
	.asciz "max is 0 [%s]\n"
.endobj lbl_8047F130
.balign 4
.obj lbl_8047F140, local
	.asciz "StickAttackActionArg"
.endobj lbl_8047F140
.balign 4
.obj lbl_8047F158, local
	.asciz "GatherActionArg"
.endobj lbl_8047F158

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj lbl_804B4AB4, local
	.4byte .L_8019C100
	.4byte .L_8019C42C
	.4byte .L_8019C338
	.4byte .L_8019C520
	.4byte .L_8019C244
	.4byte .L_8019C614
	.4byte .L_8019C694
	.4byte .L_8019C100
.endobj lbl_804B4AB4
.obj __vt__Q26PikiAI20ActFollowVectorField, global
	.4byte 0
	.4byte 0
	.4byte init__Q26PikiAI20ActFollowVectorFieldFPQ26PikiAI9ActionArg
	.4byte exec__Q26PikiAI20ActFollowVectorFieldFv
	.4byte cleanup__Q26PikiAI20ActFollowVectorFieldFv
	.4byte emotion_success__Q26PikiAI6ActionFv
	.4byte emotion_fail__Q26PikiAI6ActionFv
	.4byte applicable__Q26PikiAI6ActionFv
	.4byte getNextAIType__Q26PikiAI6ActionFv
	.4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte doDirectDraw__Q26PikiAI6ActionFR8Graphics
	.4byte "wallCallback__Q26PikiAI6ActionFR10Vector3<f>"
	.4byte getInfo__Q26PikiAI6ActionFPc
.endobj __vt__Q26PikiAI20ActFollowVectorField
.obj __vt__Q26PikiAI9ActGather, global
	.4byte 0
	.4byte 0
	.4byte init__Q26PikiAI9ActGatherFPQ26PikiAI9ActionArg
	.4byte exec__Q26PikiAI9ActGatherFv
	.4byte cleanup__Q26PikiAI9ActGatherFv
	.4byte emotion_success__Q26PikiAI6ActionFv
	.4byte emotion_fail__Q26PikiAI6ActionFv
	.4byte applicable__Q26PikiAI6ActionFv
	.4byte getNextAIType__Q26PikiAI6ActionFv
	.4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte doDirectDraw__Q26PikiAI6ActionFR8Graphics
	.4byte "wallCallback__Q26PikiAI6ActionFR10Vector3<f>"
	.4byte getInfo__Q26PikiAI6ActionFPc
.endobj __vt__Q26PikiAI9ActGather
.obj __vt__Q26PikiAI8ActClimb, global
	.4byte 0
	.4byte 0
	.4byte init__Q26PikiAI8ActClimbFPQ26PikiAI9ActionArg
	.4byte exec__Q26PikiAI8ActClimbFv
	.4byte cleanup__Q26PikiAI8ActClimbFv
	.4byte emotion_success__Q26PikiAI6ActionFv
	.4byte emotion_fail__Q26PikiAI6ActionFv
	.4byte applicable__Q26PikiAI6ActionFv
	.4byte getNextAIType__Q26PikiAI6ActionFv
	.4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte doDirectDraw__Q26PikiAI6ActionFR8Graphics
	.4byte "wallCallback__Q26PikiAI6ActionFR10Vector3<f>"
	.4byte getInfo__Q26PikiAI6ActionFPc
.endobj __vt__Q26PikiAI8ActClimb
.obj __vt__Q23efx10PikiDamage, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx10PikiDamage
.obj __vt__Q23efx11TPkAttackDP, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx11TPkAttackDP
.obj __vt__Q26PikiAI14ActStickAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q26PikiAI14ActStickAttackFPQ26PikiAI9ActionArg
	.4byte exec__Q26PikiAI14ActStickAttackFv
	.4byte cleanup__Q26PikiAI14ActStickAttackFv
	.4byte emotion_success__Q26PikiAI6ActionFv
	.4byte emotion_fail__Q26PikiAI6ActionFv
	.4byte applicable__Q26PikiAI6ActionFv
	.4byte getNextAIType__Q26PikiAI6ActionFv
	.4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte doDirectDraw__Q26PikiAI6ActionFR8Graphics
	.4byte "wallCallback__Q26PikiAI6ActionFR10Vector3<f>"
	.4byte getInfo__Q26PikiAI6ActionFPc
	.4byte onKeyEvent__Q26PikiAI14ActStickAttackFRCQ28SysShape8KeyEvent
	.4byte 0
	.4byte 0
	.4byte "@36@4@onKeyEvent__Q26PikiAI14ActStickAttackFRCQ28SysShape8KeyEvent"
.endobj __vt__Q26PikiAI14ActStickAttack
.obj __vt__Q26PikiAI11ActPathMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q26PikiAI11ActPathMoveFPQ26PikiAI9ActionArg
	.4byte exec__Q26PikiAI11ActPathMoveFv
	.4byte cleanup__Q26PikiAI11ActPathMoveFv
	.4byte emotion_success__Q26PikiAI6ActionFv
	.4byte emotion_fail__Q26PikiAI6ActionFv
	.4byte applicable__Q26PikiAI6ActionFv
	.4byte getNextAIType__Q26PikiAI6ActionFv
	.4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte doDirectDraw__Q26PikiAI6ActionFR8Graphics
	.4byte "wallCallback__Q26PikiAI6ActionFR10Vector3<f>"
	.4byte getInfo__Q26PikiAI6ActionFPc
.endobj __vt__Q26PikiAI11ActPathMove
.obj __vt__Q26PikiAI11ActGotoSlot, global
	.4byte 0
	.4byte 0
	.4byte init__Q26PikiAI11ActGotoSlotFPQ26PikiAI9ActionArg
	.4byte exec__Q26PikiAI11ActGotoSlotFv
	.4byte cleanup__Q26PikiAI11ActGotoSlotFv
	.4byte emotion_success__Q26PikiAI6ActionFv
	.4byte emotion_fail__Q26PikiAI6ActionFv
	.4byte applicable__Q26PikiAI6ActionFv
	.4byte getNextAIType__Q26PikiAI6ActionFv
	.4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte doDirectDraw__Q26PikiAI6ActionFR8Graphics
	.4byte "wallCallback__Q26PikiAI11ActGotoSlotFR10Vector3<f>"
	.4byte getInfo__Q26PikiAI6ActionFPc
.endobj __vt__Q26PikiAI11ActGotoSlot
.obj __vt__Q26PikiAI14ActApproachPos, global
	.4byte 0
	.4byte 0
	.4byte init__Q26PikiAI14ActApproachPosFPQ26PikiAI9ActionArg
	.4byte exec__Q26PikiAI14ActApproachPosFv
	.4byte cleanup__Q26PikiAI14ActApproachPosFv
	.4byte emotion_success__Q26PikiAI6ActionFv
	.4byte emotion_fail__Q26PikiAI6ActionFv
	.4byte applicable__Q26PikiAI6ActionFv
	.4byte getNextAIType__Q26PikiAI6ActionFv
	.4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte doDirectDraw__Q26PikiAI6ActionFR8Graphics
	.4byte "wallCallback__Q26PikiAI6ActionFR10Vector3<f>"
	.4byte getInfo__Q26PikiAI6ActionFPc
.endobj __vt__Q26PikiAI14ActApproachPos
.obj __vt__Q26PikiAI10ActGotoPos, global
	.4byte 0
	.4byte 0
	.4byte init__Q26PikiAI10ActGotoPosFPQ26PikiAI9ActionArg
	.4byte exec__Q26PikiAI10ActGotoPosFv
	.4byte cleanup__Q26PikiAI10ActGotoPosFv
	.4byte emotion_success__Q26PikiAI6ActionFv
	.4byte emotion_fail__Q26PikiAI6ActionFv
	.4byte applicable__Q26PikiAI6ActionFv
	.4byte getNextAIType__Q26PikiAI6ActionFv
	.4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
	.4byte collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent
	.4byte platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent
	.4byte doDirectDraw__Q26PikiAI6ActionFR8Graphics
	.4byte "wallCallback__Q26PikiAI6ActionFR10Vector3<f>"
	.4byte getInfo__Q26PikiAI6ActionFPc
.endobj __vt__Q26PikiAI10ActGotoPos

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80518F60, local
	.float 0.0
.endobj lbl_80518F60
.obj lbl_80518F64, local
	.float 1.0
.endobj lbl_80518F64
.obj lbl_80518F68, local
	.float 20.0
.endobj lbl_80518F68
.obj lbl_80518F6C, local
	.float -0.5
.endobj lbl_80518F6C
.obj lbl_80518F70, local
	.float 6.0
.endobj lbl_80518F70
.obj lbl_80518F74, local
	.float 0.01
.endobj lbl_80518F74
.obj lbl_80518F78, local
	.float 0.5
.endobj lbl_80518F78
.obj lbl_80518F7C, local # pi/10
	.float 0.31415927
.endobj lbl_80518F7C
.obj lbl_80518F80, local
	.float 10.0
.endobj lbl_80518F80
.obj lbl_80518F84, local
	.float 0.2
.endobj lbl_80518F84
.obj lbl_80518F88, local
	.float 3.0
.endobj lbl_80518F88
.obj lbl_80518F8C, local
	.float 40.0
.endobj lbl_80518F8C
.obj lbl_80518F90, local
	.float -1.0
.endobj lbl_80518F90
.obj lbl_80518F94, local # pi
	.float 3.1415927
.endobj lbl_80518F94
.obj lbl_80518F98, local
	.float 1023.5
.endobj lbl_80518F98
.obj lbl_80518F9C, local # pi/2
	.float 1.5707964
.endobj lbl_80518F9C
.obj lbl_80518FA0, local
	.float 100.0
.endobj lbl_80518FA0
.balign 8
.obj lbl_80518FA8, local
	.8byte 0x4330000080000000
.endobj lbl_80518FA8
.balign 4
.obj lbl_80518FB0, local
	.asciz "..."
.endobj lbl_80518FB0
.balign 4
.obj lbl_80518FB4, local
	.float 160.0
.endobj lbl_80518FB4
.obj lbl_80518FB8, local # tau
	.float 6.2831855
.endobj lbl_80518FB8
.obj lbl_80518FBC, local
	.float 325.9493
.endobj lbl_80518FBC
.obj lbl_80518FC0, local
	.float -325.9493
.endobj lbl_80518FC0
.obj lbl_80518FC4, local
	.float 700.0
.endobj lbl_80518FC4
.obj lbl_80518FC8, local
	.float 50.0
.endobj lbl_80518FC8
.obj lbl_80518FCC, local
	.float 0.3
.endobj lbl_80518FCC
.obj lbl_80518FD0, local
	.float 2.0
.endobj lbl_80518FD0
.obj lbl_80518FD4, local
	.float 130.0
.endobj lbl_80518FD4
.obj lbl_80518FD8, local
	.float 32768.0
.endobj lbl_80518FD8
.obj lbl_80518FDC, local
	.float 5.0
.endobj lbl_80518FDC
.obj lbl_80518FE0, local
	.float 0.6
.endobj lbl_80518FE0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q26PikiAI10ActGotoPosFPQ24Game4Piki, global
/* 801972DC 0019421C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801972E0 00194220  7C 08 02 A6 */	mflr r0
/* 801972E4 00194224  90 01 00 14 */	stw r0, 0x14(r1)
/* 801972E8 00194228  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801972EC 0019422C  7C 7F 1B 78 */	mr r31, r3
/* 801972F0 00194230  4B FF F7 29 */	bl __ct__Q26PikiAI6ActionFPQ24Game4Piki
/* 801972F4 00194234  3C 80 80 4B */	lis r4, __vt__Q26PikiAI10ActGotoPos@ha
/* 801972F8 00194238  7F E3 FB 78 */	mr r3, r31
/* 801972FC 0019423C  38 04 4C B0 */	addi r0, r4, __vt__Q26PikiAI10ActGotoPos@l
/* 80197300 00194240  90 1F 00 00 */	stw r0, 0(r31)
/* 80197304 00194244  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80197308 00194248  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019730C 0019424C  7C 08 03 A6 */	mtlr r0
/* 80197310 00194250  38 21 00 10 */	addi r1, r1, 0x10
/* 80197314 00194254  4E 80 00 20 */	blr 
.endfn __ct__Q26PikiAI10ActGotoPosFPQ24Game4Piki

.fn init__Q26PikiAI10ActGotoPosFPQ26PikiAI9ActionArg, global
/* 80197318 00194258  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019731C 0019425C  7C 08 02 A6 */	mflr r0
/* 80197320 00194260  38 A0 00 1E */	li r5, 0x1e
/* 80197324 00194264  38 C0 00 00 */	li r6, 0
/* 80197328 00194268  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019732C 0019426C  38 E0 00 00 */	li r7, 0
/* 80197330 00194270  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80197334 00194274  7C 9F 23 78 */	mr r31, r4
/* 80197338 00194278  38 80 00 1E */	li r4, 0x1e
/* 8019733C 0019427C  93 C1 00 08 */	stw r30, 8(r1)
/* 80197340 00194280  7C 7E 1B 78 */	mr r30, r3
/* 80197344 00194284  80 63 00 04 */	lwz r3, 4(r3)
/* 80197348 00194288  81 83 00 00 */	lwz r12, 0(r3)
/* 8019734C 0019428C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80197350 00194290  7D 89 03 A6 */	mtctr r12
/* 80197354 00194294  4E 80 04 21 */	bctrl 
/* 80197358 00194298  C0 1F 00 04 */	lfs f0, 4(r31)
/* 8019735C 0019429C  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 80197360 001942A0  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80197364 001942A4  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 80197368 001942A8  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 8019736C 001942AC  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 80197370 001942B0  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 80197374 001942B4  D0 1E 00 0C */	stfs f0, 0xc(r30)
/* 80197378 001942B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8019737C 001942BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80197380 001942C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80197384 001942C4  7C 08 03 A6 */	mtlr r0
/* 80197388 001942C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8019738C 001942CC  4E 80 00 20 */	blr 
.endfn init__Q26PikiAI10ActGotoPosFPQ26PikiAI9ActionArg

.fn exec__Q26PikiAI10ActGotoPosFv, global
/* 80197390 001942D0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80197394 001942D4  7C 08 02 A6 */	mflr r0
/* 80197398 001942D8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8019739C 001942DC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801973A0 001942E0  7C 7F 1B 78 */	mr r31, r3
/* 801973A4 001942E4  38 61 00 08 */	addi r3, r1, 8
/* 801973A8 001942E8  80 9F 00 04 */	lwz r4, 4(r31)
/* 801973AC 001942EC  81 84 00 00 */	lwz r12, 0(r4)
/* 801973B0 001942F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801973B4 001942F4  7D 89 03 A6 */	mtctr r12
/* 801973B8 001942F8  4E 80 04 21 */	bctrl 
/* 801973BC 001942FC  C0 7F 00 14 */	lfs f3, 0x14(r31)
/* 801973C0 00194300  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801973C4 00194304  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 801973C8 00194308  C0 01 00 08 */	lfs f0, 8(r1)
/* 801973CC 0019430C  EC 83 10 28 */	fsubs f4, f3, f2
/* 801973D0 00194310  C0 7F 00 18 */	lfs f3, 0x18(r31)
/* 801973D4 00194314  EC 41 00 28 */	fsubs f2, f1, f0
/* 801973D8 00194318  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801973DC 0019431C  EC A4 01 32 */	fmuls f5, f4, f4
/* 801973E0 00194320  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 801973E4 00194324  EC 63 00 28 */	fsubs f3, f3, f0
/* 801973E8 00194328  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 801973EC 0019432C  EC 02 00 B2 */	fmuls f0, f2, f2
/* 801973F0 00194330  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 801973F4 00194334  EC 83 00 F2 */	fmuls f4, f3, f3
/* 801973F8 00194338  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 801973FC 0019433C  EC 00 28 2A */	fadds f0, f0, f5
/* 80197400 00194340  EC 04 00 2A */	fadds f0, f4, f0
/* 80197404 00194344  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80197408 00194348  40 81 00 20 */	ble .L_80197428
/* 8019740C 0019434C  EC 02 28 BA */	fmadds f0, f2, f2, f5
/* 80197410 00194350  EC 84 00 2A */	fadds f4, f4, f0
/* 80197414 00194354  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 80197418 00194358  40 81 00 14 */	ble .L_8019742C
/* 8019741C 0019435C  FC 00 20 34 */	frsqrte f0, f4
/* 80197420 00194360  EC 80 01 32 */	fmuls f4, f0, f4
/* 80197424 00194364  48 00 00 08 */	b .L_8019742C
.L_80197428:
/* 80197428 00194368  FC 80 08 90 */	fmr f4, f1
.L_8019742C:
/* 8019742C 0019436C  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80197430 00194370  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80197434 00194374  40 81 00 34 */	ble .L_80197468
/* 80197438 00194378  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 8019743C 0019437C  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80197440 00194380  EC 60 20 24 */	fdivs f3, f0, f4
/* 80197444 00194384  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80197448 00194388  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8019744C 0019438C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80197450 00194390  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80197454 00194394  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80197458 00194398  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8019745C 0019439C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80197460 001943A0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80197464 001943A4  48 00 00 08 */	b .L_8019746C
.L_80197468:
/* 80197468 001943A8  FC 80 00 90 */	fmr f4, f0
.L_8019746C:
/* 8019746C 001943AC  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 80197470 001943B0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80197474 001943B4  4C 40 13 82 */	cror 2, 0, 2
/* 80197478 001943B8  40 82 00 0C */	bne .L_80197484
/* 8019747C 001943BC  38 60 00 00 */	li r3, 0
/* 80197480 001943C0  48 00 00 18 */	b .L_80197498
.L_80197484:
/* 80197484 001943C4  80 7F 00 04 */	lwz r3, 4(r31)
/* 80197488 001943C8  38 81 00 14 */	addi r4, r1, 0x14
/* 8019748C 001943CC  C0 22 AC 04 */	lfs f1, lbl_80518F64@sda21(r2)
/* 80197490 001943D0  4B FB 1B 89 */	bl "setSpeed__Q24Game4PikiFfR10Vector3<f>"
/* 80197494 001943D4  38 60 00 01 */	li r3, 1
.L_80197498:
/* 80197498 001943D8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8019749C 001943DC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801974A0 001943E0  7C 08 03 A6 */	mtlr r0
/* 801974A4 001943E4  38 21 00 30 */	addi r1, r1, 0x30
/* 801974A8 001943E8  4E 80 00 20 */	blr 
.endfn exec__Q26PikiAI10ActGotoPosFv

.fn cleanup__Q26PikiAI10ActGotoPosFv, global
/* 801974AC 001943EC  4E 80 00 20 */	blr 
.endfn cleanup__Q26PikiAI10ActGotoPosFv

.fn __ct__Q26PikiAI14ActApproachPosFPQ24Game4Piki, global
/* 801974B0 001943F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801974B4 001943F4  7C 08 02 A6 */	mflr r0
/* 801974B8 001943F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801974BC 001943FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801974C0 00194400  7C 7F 1B 78 */	mr r31, r3
/* 801974C4 00194404  4B FF F5 55 */	bl __ct__Q26PikiAI6ActionFPQ24Game4Piki
/* 801974C8 00194408  3C 80 80 4B */	lis r4, __vt__Q26PikiAI14ActApproachPos@ha
/* 801974CC 0019440C  7F E3 FB 78 */	mr r3, r31
/* 801974D0 00194410  38 04 4C 74 */	addi r0, r4, __vt__Q26PikiAI14ActApproachPos@l
/* 801974D4 00194414  90 1F 00 00 */	stw r0, 0(r31)
/* 801974D8 00194418  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801974DC 0019441C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801974E0 00194420  7C 08 03 A6 */	mtlr r0
/* 801974E4 00194424  38 21 00 10 */	addi r1, r1, 0x10
/* 801974E8 00194428  4E 80 00 20 */	blr 
.endfn __ct__Q26PikiAI14ActApproachPosFPQ24Game4Piki

.fn init__Q26PikiAI14ActApproachPosFPQ26PikiAI9ActionArg, global
/* 801974EC 0019442C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801974F0 00194430  7C 08 02 A6 */	mflr r0
/* 801974F4 00194434  90 01 00 24 */	stw r0, 0x24(r1)
/* 801974F8 00194438  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801974FC 0019443C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80197500 00194440  3B C0 00 00 */	li r30, 0
/* 80197504 00194444  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80197508 00194448  7C 9D 23 79 */	or. r29, r4, r4
/* 8019750C 0019444C  3C 80 80 48 */	lis r4, lbl_8047F070@ha
/* 80197510 00194450  93 81 00 10 */	stw r28, 0x10(r1)
/* 80197514 00194454  7C 7C 1B 78 */	mr r28, r3
/* 80197518 00194458  3B E4 F0 70 */	addi r31, r4, lbl_8047F070@l
/* 8019751C 0019445C  41 82 00 34 */	beq .L_80197550
/* 80197520 00194460  7F A3 EB 78 */	mr r3, r29
/* 80197524 00194464  81 9D 00 00 */	lwz r12, 0(r29)
/* 80197528 00194468  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019752C 0019446C  7D 89 03 A6 */	mtctr r12
/* 80197530 00194470  4E 80 04 21 */	bctrl 
/* 80197534 00194474  7C 64 1B 78 */	mr r4, r3
/* 80197538 00194478  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8019753C 0019447C  4B F3 31 85 */	bl strcmp
/* 80197540 00194480  7C 60 00 34 */	cntlzw r0, r3
/* 80197544 00194484  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 80197548 00194488  41 82 00 08 */	beq .L_80197550
/* 8019754C 0019448C  3B C0 00 01 */	li r30, 1
.L_80197550:
/* 80197550 00194490  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80197554 00194494  40 82 00 18 */	bne .L_8019756C
/* 80197558 00194498  38 7F 00 34 */	addi r3, r31, 0x34
/* 8019755C 0019449C  38 BF 00 48 */	addi r5, r31, 0x48
/* 80197560 001944A0  38 80 01 A8 */	li r4, 0x1a8
/* 80197564 001944A4  4C C6 31 82 */	crclr 6
/* 80197568 001944A8  4B E9 30 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8019756C:
/* 8019756C 001944AC  80 7C 00 04 */	lwz r3, 4(r28)
/* 80197570 001944B0  38 80 00 1E */	li r4, 0x1e
/* 80197574 001944B4  38 A0 00 1E */	li r5, 0x1e
/* 80197578 001944B8  38 C0 00 00 */	li r6, 0
/* 8019757C 001944BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80197580 001944C0  38 E0 00 00 */	li r7, 0
/* 80197584 001944C4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80197588 001944C8  7D 89 03 A6 */	mtctr r12
/* 8019758C 001944CC  4E 80 04 21 */	bctrl 
/* 80197590 001944D0  C0 3D 00 04 */	lfs f1, 4(r29)
/* 80197594 001944D4  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80197598 001944D8  D0 3C 00 10 */	stfs f1, 0x10(r28)
/* 8019759C 001944DC  C0 3D 00 08 */	lfs f1, 8(r29)
/* 801975A0 001944E0  D0 3C 00 14 */	stfs f1, 0x14(r28)
/* 801975A4 001944E4  C0 3D 00 0C */	lfs f1, 0xc(r29)
/* 801975A8 001944E8  D0 3C 00 18 */	stfs f1, 0x18(r28)
/* 801975AC 001944EC  C0 3D 00 10 */	lfs f1, 0x10(r29)
/* 801975B0 001944F0  D0 3C 00 0C */	stfs f1, 0xc(r28)
/* 801975B4 001944F4  88 1D 00 18 */	lbz r0, 0x18(r29)
/* 801975B8 001944F8  98 1C 00 24 */	stb r0, 0x24(r28)
/* 801975BC 001944FC  88 1D 00 19 */	lbz r0, 0x19(r29)
/* 801975C0 00194500  98 1C 00 25 */	stb r0, 0x25(r28)
/* 801975C4 00194504  C0 3D 00 14 */	lfs f1, 0x14(r29)
/* 801975C8 00194508  D0 3C 00 1C */	stfs f1, 0x1c(r28)
/* 801975CC 0019450C  D0 1C 00 20 */	stfs f0, 0x20(r28)
/* 801975D0 00194510  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801975D4 00194514  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801975D8 00194518  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801975DC 0019451C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801975E0 00194520  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801975E4 00194524  7C 08 03 A6 */	mtlr r0
/* 801975E8 00194528  38 21 00 20 */	addi r1, r1, 0x20
/* 801975EC 0019452C  4E 80 00 20 */	blr 
.endfn init__Q26PikiAI14ActApproachPosFPQ26PikiAI9ActionArg

.fn exec__Q26PikiAI14ActApproachPosFv, global
/* 801975F0 00194530  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801975F4 00194534  7C 08 02 A6 */	mflr r0
/* 801975F8 00194538  90 01 00 64 */	stw r0, 0x64(r1)
/* 801975FC 0019453C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80197600 00194540  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80197604 00194544  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80197608 00194548  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8019760C 0019454C  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 80197610 00194550  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 80197614 00194554  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80197618 00194558  7C 7F 1B 78 */	mr r31, r3
/* 8019761C 0019455C  38 61 00 08 */	addi r3, r1, 8
/* 80197620 00194560  80 9F 00 04 */	lwz r4, 4(r31)
/* 80197624 00194564  81 84 00 00 */	lwz r12, 0(r4)
/* 80197628 00194568  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019762C 0019456C  7D 89 03 A6 */	mtctr r12
/* 80197630 00194570  4E 80 04 21 */	bctrl 
/* 80197634 00194574  C0 7F 00 18 */	lfs f3, 0x18(r31)
/* 80197638 00194578  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8019763C 0019457C  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 80197640 00194580  C0 01 00 08 */	lfs f0, 8(r1)
/* 80197644 00194584  EC 83 10 28 */	fsubs f4, f3, f2
/* 80197648 00194588  C0 7F 00 14 */	lfs f3, 0x14(r31)
/* 8019764C 0019458C  EC 41 00 28 */	fsubs f2, f1, f0
/* 80197650 00194590  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80197654 00194594  EC A4 01 32 */	fmuls f5, f4, f4
/* 80197658 00194598  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019765C 0019459C  EC 23 08 28 */	fsubs f1, f3, f1
/* 80197660 001945A0  D0 81 00 1C */	stfs f4, 0x1c(r1)
/* 80197664 001945A4  EC 62 00 B2 */	fmuls f3, f2, f2
/* 80197668 001945A8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8019766C 001945AC  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80197670 001945B0  EC 23 28 2A */	fadds f1, f3, f5
/* 80197674 001945B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80197678 001945B8  40 81 00 1C */	ble .L_80197694
/* 8019767C 001945BC  EF C2 28 BA */	fmadds f30, f2, f2, f5
/* 80197680 001945C0  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80197684 001945C4  40 81 00 14 */	ble .L_80197698
/* 80197688 001945C8  FC 00 F0 34 */	frsqrte f0, f30
/* 8019768C 001945CC  EF C0 07 B2 */	fmuls f30, f0, f30
/* 80197690 001945D0  48 00 00 08 */	b .L_80197698
.L_80197694:
/* 80197694 001945D4  FF C0 00 90 */	fmr f30, f0
.L_80197698:
/* 80197698 001945D8  C3 A1 00 18 */	lfs f29, 0x18(r1)
/* 8019769C 001945DC  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 801976A0 001945E0  EC 9D 07 72 */	fmuls f4, f29, f29
/* 801976A4 001945E4  EC 03 20 2A */	fadds f0, f3, f4
/* 801976A8 001945E8  EC 05 00 2A */	fadds f0, f5, f0
/* 801976AC 001945EC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801976B0 001945F0  40 81 00 20 */	ble .L_801976D0
/* 801976B4 001945F4  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 801976B8 001945F8  EC 65 00 2A */	fadds f3, f5, f0
/* 801976BC 001945FC  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 801976C0 00194600  40 81 00 14 */	ble .L_801976D4
/* 801976C4 00194604  FC 00 18 34 */	frsqrte f0, f3
/* 801976C8 00194608  EC 60 00 F2 */	fmuls f3, f0, f3
/* 801976CC 0019460C  48 00 00 08 */	b .L_801976D4
.L_801976D0:
/* 801976D0 00194610  FC 60 08 90 */	fmr f3, f1
.L_801976D4:
/* 801976D4 00194614  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 801976D8 00194618  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801976DC 0019461C  40 81 00 30 */	ble .L_8019770C
/* 801976E0 00194620  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 801976E4 00194624  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 801976E8 00194628  EC 60 18 24 */	fdivs f3, f0, f3
/* 801976EC 0019462C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801976F0 00194630  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801976F4 00194634  EC 42 00 F2 */	fmuls f2, f2, f3
/* 801976F8 00194638  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801976FC 0019463C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80197700 00194640  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80197704 00194644  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80197708 00194648  D0 01 00 1C */	stfs f0, 0x1c(r1)
.L_8019770C:
/* 8019770C 0019464C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80197710 00194650  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80197714 00194654  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 80197718 00194658  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8019771C 0019465C  4B E9 D9 ED */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80197720 00194660  80 7F 00 04 */	lwz r3, 4(r31)
/* 80197724 00194664  FF E0 08 90 */	fmr f31, f1
/* 80197728 00194668  81 83 00 00 */	lwz r12, 0(r3)
/* 8019772C 0019466C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80197730 00194670  7D 89 03 A6 */	mtctr r12
/* 80197734 00194674  4E 80 04 21 */	bctrl 
/* 80197738 00194678  FC 40 08 90 */	fmr f2, f1
/* 8019773C 0019467C  FC 20 F8 90 */	fmr f1, f31
/* 80197740 00194680  48 27 A4 BD */	bl angDist__Fff
/* 80197744 00194684  C0 5F 00 1C */	lfs f2, 0x1c(r31)
/* 80197748 00194688  FF E0 08 90 */	fmr f31, f1
/* 8019774C 0019468C  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80197750 00194690  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80197754 00194694  40 81 00 34 */	ble .L_80197788
/* 80197758 00194698  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8019775C 0019469C  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80197760 001946A0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80197764 001946A4  EC 01 00 2A */	fadds f0, f1, f0
/* 80197768 001946A8  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8019776C 001946AC  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80197770 001946B0  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 80197774 001946B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80197778 001946B8  4C 41 13 82 */	cror 2, 1, 2
/* 8019777C 001946BC  40 82 00 0C */	bne .L_80197788
/* 80197780 001946C0  38 60 00 00 */	li r3, 0
/* 80197784 001946C4  48 00 01 68 */	b .L_801978EC
.L_80197788:
/* 80197788 001946C8  88 1F 00 25 */	lbz r0, 0x25(r31)
/* 8019778C 001946CC  28 00 00 00 */	cmplwi r0, 0
/* 80197790 001946D0  41 82 00 20 */	beq .L_801977B0
/* 80197794 001946D4  FC 20 EA 10 */	fabs f1, f29
/* 80197798 001946D8  C0 02 AC 08 */	lfs f0, lbl_80518F68@sda21(r2)
/* 8019779C 001946DC  FC 20 08 18 */	frsp f1, f1
/* 801977A0 001946E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801977A4 001946E4  40 81 00 0C */	ble .L_801977B0
/* 801977A8 001946E8  38 60 00 02 */	li r3, 2
/* 801977AC 001946EC  48 00 01 40 */	b .L_801978EC
.L_801977B0:
/* 801977B0 001946F0  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 801977B4 001946F4  FC 1E 08 40 */	fcmpo cr0, f30, f1
/* 801977B8 001946F8  40 80 00 34 */	bge .L_801977EC
/* 801977BC 001946FC  80 7F 00 04 */	lwz r3, 4(r31)
/* 801977C0 00194700  38 80 00 00 */	li r4, 0
/* 801977C4 00194704  81 83 00 00 */	lwz r12, 0(r3)
/* 801977C8 00194708  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 801977CC 0019470C  7D 89 03 A6 */	mtctr r12
/* 801977D0 00194710  4E 80 04 21 */	bctrl 
/* 801977D4 00194714  FC 40 F0 90 */	fmr f2, f30
/* 801977D8 00194718  80 7F 00 04 */	lwz r3, 4(r31)
/* 801977DC 0019471C  C0 22 AC 0C */	lfs f1, lbl_80518F6C@sda21(r2)
/* 801977E0 00194720  38 81 00 14 */	addi r4, r1, 0x14
/* 801977E4 00194724  4B FB 19 F5 */	bl "setSpeed__Q24Game4PikiFfR10Vector3<f>f"
/* 801977E8 00194728  48 00 01 00 */	b .L_801978E8
.L_801977EC:
/* 801977EC 0019472C  C0 02 AC 10 */	lfs f0, lbl_80518F70@sda21(r2)
/* 801977F0 00194730  EC 00 08 2A */	fadds f0, f0, f1
/* 801977F4 00194734  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 801977F8 00194738  40 81 00 70 */	ble .L_80197868
/* 801977FC 0019473C  80 7F 00 04 */	lwz r3, 4(r31)
/* 80197800 00194740  38 80 00 01 */	li r4, 1
/* 80197804 00194744  81 83 00 00 */	lwz r12, 0(r3)
/* 80197808 00194748  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 8019780C 0019474C  7D 89 03 A6 */	mtctr r12
/* 80197810 00194750  4E 80 04 21 */	bctrl 
/* 80197814 00194754  88 1F 00 24 */	lbz r0, 0x24(r31)
/* 80197818 00194758  28 00 00 00 */	cmplwi r0, 0
/* 8019781C 0019475C  41 82 00 38 */	beq .L_80197854
/* 80197820 00194760  C0 22 AC 14 */	lfs f1, lbl_80518F74@sda21(r2)
/* 80197824 00194764  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 80197828 00194768  EC 21 07 B2 */	fmuls f1, f1, f30
/* 8019782C 0019476C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80197830 00194770  40 81 00 08 */	ble .L_80197838
/* 80197834 00194774  FC 20 00 90 */	fmr f1, f0
.L_80197838:
/* 80197838 00194778  C0 02 AC 18 */	lfs f0, lbl_80518F78@sda21(r2)
/* 8019783C 0019477C  38 81 00 14 */	addi r4, r1, 0x14
/* 80197840 00194780  80 7F 00 04 */	lwz r3, 4(r31)
/* 80197844 00194784  EC 21 00 32 */	fmuls f1, f1, f0
/* 80197848 00194788  EC 20 08 2A */	fadds f1, f0, f1
/* 8019784C 0019478C  4B FB 17 CD */	bl "setSpeed__Q24Game4PikiFfR10Vector3<f>"
/* 80197850 00194790  48 00 00 98 */	b .L_801978E8
.L_80197854:
/* 80197854 00194794  80 7F 00 04 */	lwz r3, 4(r31)
/* 80197858 00194798  38 81 00 14 */	addi r4, r1, 0x14
/* 8019785C 0019479C  C0 22 AC 18 */	lfs f1, lbl_80518F78@sda21(r2)
/* 80197860 001947A0  4B FB 17 B9 */	bl "setSpeed__Q24Game4PikiFfR10Vector3<f>"
/* 80197864 001947A4  48 00 00 84 */	b .L_801978E8
.L_80197868:
/* 80197868 001947A8  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019786C 001947AC  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 80197870 001947B0  38 84 41 E4 */	addi r4, r4, "zero__10Vector3<f>"@l
/* 80197874 001947B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80197878 001947B8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8019787C 001947BC  7D 89 03 A6 */	mtctr r12
/* 80197880 001947C0  4E 80 04 21 */	bctrl 
/* 80197884 001947C4  FC 20 FA 10 */	fabs f1, f31
/* 80197888 001947C8  C0 02 AC 1C */	lfs f0, lbl_80518F7C@sda21(r2)
/* 8019788C 001947CC  FC 20 08 18 */	frsp f1, f1
/* 80197890 001947D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80197894 001947D4  40 80 00 38 */	bge .L_801978CC
/* 80197898 001947D8  88 1F 00 25 */	lbz r0, 0x25(r31)
/* 8019789C 001947DC  28 00 00 00 */	cmplwi r0, 0
/* 801978A0 001947E0  41 82 00 24 */	beq .L_801978C4
/* 801978A4 001947E4  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801978A8 001947E8  C0 02 AC 20 */	lfs f0, lbl_80518F80@sda21(r2)
/* 801978AC 001947EC  FC 20 0A 10 */	fabs f1, f1
/* 801978B0 001947F0  FC 20 08 18 */	frsp f1, f1
/* 801978B4 001947F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801978B8 001947F8  40 81 00 0C */	ble .L_801978C4
/* 801978BC 001947FC  38 60 00 01 */	li r3, 1
/* 801978C0 00194800  48 00 00 2C */	b .L_801978EC
.L_801978C4:
/* 801978C4 00194804  38 60 00 00 */	li r3, 0
/* 801978C8 00194808  48 00 00 24 */	b .L_801978EC
.L_801978CC:
/* 801978CC 0019480C  80 7F 00 04 */	lwz r3, 4(r31)
/* 801978D0 00194810  C0 22 AC 24 */	lfs f1, lbl_80518F84@sda21(r2)
/* 801978D4 00194814  C0 03 01 FC */	lfs f0, 0x1fc(r3)
/* 801978D8 00194818  EC 21 07 FA */	fmadds f1, f1, f31, f0
/* 801978DC 0019481C  48 27 A2 F5 */	bl roundAng__Ff
/* 801978E0 00194820  80 7F 00 04 */	lwz r3, 4(r31)
/* 801978E4 00194824  D0 23 01 FC */	stfs f1, 0x1fc(r3)
.L_801978E8:
/* 801978E8 00194828  38 60 00 01 */	li r3, 1
.L_801978EC:
/* 801978EC 0019482C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 801978F0 00194830  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 801978F4 00194834  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 801978F8 00194838  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 801978FC 0019483C  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 80197900 00194840  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 80197904 00194844  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80197908 00194848  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8019790C 0019484C  7C 08 03 A6 */	mtlr r0
/* 80197910 00194850  38 21 00 60 */	addi r1, r1, 0x60
/* 80197914 00194854  4E 80 00 20 */	blr 
.endfn exec__Q26PikiAI14ActApproachPosFv

.fn cleanup__Q26PikiAI14ActApproachPosFv, global
/* 80197918 00194858  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019791C 0019485C  7C 08 02 A6 */	mflr r0
/* 80197920 00194860  38 80 00 01 */	li r4, 1
/* 80197924 00194864  90 01 00 14 */	stw r0, 0x14(r1)
/* 80197928 00194868  80 63 00 04 */	lwz r3, 4(r3)
/* 8019792C 0019486C  81 83 00 00 */	lwz r12, 0(r3)
/* 80197930 00194870  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 80197934 00194874  7D 89 03 A6 */	mtctr r12
/* 80197938 00194878  4E 80 04 21 */	bctrl 
/* 8019793C 0019487C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80197940 00194880  7C 08 03 A6 */	mtlr r0
/* 80197944 00194884  38 21 00 10 */	addi r1, r1, 0x10
/* 80197948 00194888  4E 80 00 20 */	blr 
.endfn cleanup__Q26PikiAI14ActApproachPosFv

.fn __ct__Q26PikiAI11ActGotoSlotFPQ24Game4Piki, global
/* 8019794C 0019488C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80197950 00194890  7C 08 02 A6 */	mflr r0
/* 80197954 00194894  90 01 00 14 */	stw r0, 0x14(r1)
/* 80197958 00194898  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8019795C 0019489C  7C 7F 1B 78 */	mr r31, r3
/* 80197960 001948A0  4B FF F0 B9 */	bl __ct__Q26PikiAI6ActionFPQ24Game4Piki
/* 80197964 001948A4  3C 80 80 4B */	lis r4, __vt__Q26PikiAI11ActGotoSlot@ha
/* 80197968 001948A8  7F E3 FB 78 */	mr r3, r31
/* 8019796C 001948AC  38 04 4C 38 */	addi r0, r4, __vt__Q26PikiAI11ActGotoSlot@l
/* 80197970 001948B0  90 1F 00 00 */	stw r0, 0(r31)
/* 80197974 001948B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80197978 001948B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019797C 001948BC  7C 08 03 A6 */	mtlr r0
/* 80197980 001948C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80197984 001948C4  4E 80 00 20 */	blr 
.endfn __ct__Q26PikiAI11ActGotoSlotFPQ24Game4Piki

.fn init__Q26PikiAI11ActGotoSlotFPQ26PikiAI9ActionArg, global
/* 80197988 001948C8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8019798C 001948CC  7C 08 02 A6 */	mflr r0
/* 80197990 001948D0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80197994 001948D4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80197998 001948D8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8019799C 001948DC  3B C0 00 00 */	li r30, 0
/* 801979A0 001948E0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801979A4 001948E4  7C 9D 23 79 */	or. r29, r4, r4
/* 801979A8 001948E8  3C 80 80 48 */	lis r4, lbl_8047F070@ha
/* 801979AC 001948EC  93 81 00 20 */	stw r28, 0x20(r1)
/* 801979B0 001948F0  7C 7C 1B 78 */	mr r28, r3
/* 801979B4 001948F4  3B E4 F0 70 */	addi r31, r4, lbl_8047F070@l
/* 801979B8 001948F8  41 82 00 34 */	beq .L_801979EC
/* 801979BC 001948FC  7F A3 EB 78 */	mr r3, r29
/* 801979C0 00194900  81 9D 00 00 */	lwz r12, 0(r29)
/* 801979C4 00194904  81 8C 00 08 */	lwz r12, 8(r12)
/* 801979C8 00194908  7D 89 03 A6 */	mtctr r12
/* 801979CC 0019490C  4E 80 04 21 */	bctrl 
/* 801979D0 00194910  7C 64 1B 78 */	mr r4, r3
/* 801979D4 00194914  38 7F 00 60 */	addi r3, r31, 0x60
/* 801979D8 00194918  4B F3 2C E9 */	bl strcmp
/* 801979DC 0019491C  7C 60 00 34 */	cntlzw r0, r3
/* 801979E0 00194920  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 801979E4 00194924  41 82 00 08 */	beq .L_801979EC
/* 801979E8 00194928  3B C0 00 01 */	li r30, 1
.L_801979EC:
/* 801979EC 0019492C  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 801979F0 00194930  40 82 00 18 */	bne .L_80197A08
/* 801979F4 00194934  38 7F 00 34 */	addi r3, r31, 0x34
/* 801979F8 00194938  38 BF 00 48 */	addi r5, r31, 0x48
/* 801979FC 0019493C  38 80 02 11 */	li r4, 0x211
/* 80197A00 00194940  4C C6 31 82 */	crclr 6
/* 80197A04 00194944  4B E9 2C 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80197A08:
/* 80197A08 00194948  80 7C 00 04 */	lwz r3, 4(r28)
/* 80197A0C 0019494C  38 80 00 1E */	li r4, 0x1e
/* 80197A10 00194950  38 A0 00 1E */	li r5, 0x1e
/* 80197A14 00194954  38 C0 00 00 */	li r6, 0
/* 80197A18 00194958  81 83 00 00 */	lwz r12, 0(r3)
/* 80197A1C 0019495C  38 E0 00 00 */	li r7, 0
/* 80197A20 00194960  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80197A24 00194964  7D 89 03 A6 */	mtctr r12
/* 80197A28 00194968  4E 80 04 21 */	bctrl 
/* 80197A2C 0019496C  80 1D 00 04 */	lwz r0, 4(r29)
/* 80197A30 00194970  90 1C 00 0C */	stw r0, 0xc(r28)
/* 80197A34 00194974  88 1D 00 08 */	lbz r0, 8(r29)
/* 80197A38 00194978  28 00 00 01 */	cmplwi r0, 1
/* 80197A3C 0019497C  40 82 00 54 */	bne .L_80197A90
/* 80197A40 00194980  80 9C 00 04 */	lwz r4, 4(r28)
/* 80197A44 00194984  38 61 00 08 */	addi r3, r1, 8
/* 80197A48 00194988  81 84 00 00 */	lwz r12, 0(r4)
/* 80197A4C 0019498C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80197A50 00194990  7D 89 03 A6 */	mtctr r12
/* 80197A54 00194994  4E 80 04 21 */	bctrl 
/* 80197A58 00194998  C0 41 00 08 */	lfs f2, 8(r1)
/* 80197A5C 0019499C  38 81 00 14 */	addi r4, r1, 0x14
/* 80197A60 001949A0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80197A64 001949A4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80197A68 001949A8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80197A6C 001949AC  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80197A70 001949B0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80197A74 001949B4  80 7C 00 0C */	lwz r3, 0xc(r28)
/* 80197A78 001949B8  81 83 00 00 */	lwz r12, 0(r3)
/* 80197A7C 001949BC  81 8C 01 70 */	lwz r12, 0x170(r12)
/* 80197A80 001949C0  7D 89 03 A6 */	mtctr r12
/* 80197A84 001949C4  4E 80 04 21 */	bctrl 
/* 80197A88 001949C8  B0 7C 00 10 */	sth r3, 0x10(r28)
/* 80197A8C 001949CC  48 00 00 1C */	b .L_80197AA8
.L_80197A90:
/* 80197A90 001949D0  80 7C 00 0C */	lwz r3, 0xc(r28)
/* 80197A94 001949D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80197A98 001949D8  81 8C 01 74 */	lwz r12, 0x174(r12)
/* 80197A9C 001949DC  7D 89 03 A6 */	mtctr r12
/* 80197AA0 001949E0  4E 80 04 21 */	bctrl 
/* 80197AA4 001949E4  B0 7C 00 10 */	sth r3, 0x10(r28)
.L_80197AA8:
/* 80197AA8 001949E8  80 7C 00 0C */	lwz r3, 0xc(r28)
/* 80197AAC 001949EC  81 83 00 00 */	lwz r12, 0(r3)
/* 80197AB0 001949F0  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80197AB4 001949F4  7D 89 03 A6 */	mtctr r12
/* 80197AB8 001949F8  4E 80 04 21 */	bctrl 
/* 80197ABC 001949FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80197AC0 00194A00  41 82 00 24 */	beq .L_80197AE4
/* 80197AC4 00194A04  80 7C 00 0C */	lwz r3, 0xc(r28)
/* 80197AC8 00194A08  4B FD 2E 6D */	bl getTotalPikmins__Q24Game6PelletFv
/* 80197ACC 00194A0C  2C 03 00 00 */	cmpwi r3, 0
/* 80197AD0 00194A10  40 82 00 14 */	bne .L_80197AE4
/* 80197AD4 00194A14  38 60 00 00 */	li r3, 0
/* 80197AD8 00194A18  38 00 00 01 */	li r0, 1
/* 80197ADC 00194A1C  B0 7C 00 10 */	sth r3, 0x10(r28)
/* 80197AE0 00194A20  98 1C 00 1D */	stb r0, 0x1d(r28)
.L_80197AE4:
/* 80197AE4 00194A24  7F 83 E3 78 */	mr r3, r28
/* 80197AE8 00194A28  48 00 00 45 */	bl resetTimers__Q26PikiAI11ActGotoSlotFv
/* 80197AEC 00194A2C  38 00 00 00 */	li r0, 0
/* 80197AF0 00194A30  98 1C 00 1C */	stb r0, 0x1c(r28)
/* 80197AF4 00194A34  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80197AF8 00194A38  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80197AFC 00194A3C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80197B00 00194A40  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80197B04 00194A44  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80197B08 00194A48  7C 08 03 A6 */	mtlr r0
/* 80197B0C 00194A4C  38 21 00 30 */	addi r1, r1, 0x30
/* 80197B10 00194A50  4E 80 00 20 */	blr 
.endfn init__Q26PikiAI11ActGotoSlotFPQ26PikiAI9ActionArg

.fn "wallCallback__Q26PikiAI11ActGotoSlotFR10Vector3<f>", global
/* 80197B14 00194A54  88 83 00 1C */	lbz r4, 0x1c(r3)
/* 80197B18 00194A58  28 04 00 64 */	cmplwi r4, 0x64
/* 80197B1C 00194A5C  4C 80 00 20 */	bgelr 
/* 80197B20 00194A60  38 04 00 01 */	addi r0, r4, 1
/* 80197B24 00194A64  98 03 00 1C */	stb r0, 0x1c(r3)
/* 80197B28 00194A68  4E 80 00 20 */	blr 
.endfn "wallCallback__Q26PikiAI11ActGotoSlotFR10Vector3<f>"

.fn resetTimers__Q26PikiAI11ActGotoSlotFv, global
/* 80197B2C 00194A6C  38 00 00 00 */	li r0, 0
/* 80197B30 00194A70  C0 02 AC 28 */	lfs f0, lbl_80518F88@sda21(r2)
/* 80197B34 00194A74  90 03 00 14 */	stw r0, 0x14(r3)
/* 80197B38 00194A78  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80197B3C 00194A7C  4E 80 00 20 */	blr 
.endfn resetTimers__Q26PikiAI11ActGotoSlotFv

.fn exec__Q26PikiAI11ActGotoSlotFv, global
/* 80197B40 00194A80  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 80197B44 00194A84  7C 08 02 A6 */	mflr r0
/* 80197B48 00194A88  90 01 01 34 */	stw r0, 0x134(r1)
/* 80197B4C 00194A8C  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 80197B50 00194A90  F3 E1 01 28 */	psq_st f31, 296(r1), 0, qr0
/* 80197B54 00194A94  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 80197B58 00194A98  F3 C1 01 18 */	psq_st f30, 280(r1), 0, qr0
/* 80197B5C 00194A9C  DB A1 01 00 */	stfd f29, 0x100(r1)
/* 80197B60 00194AA0  F3 A1 01 08 */	psq_st f29, 264(r1), 0, qr0
/* 80197B64 00194AA4  DB 81 00 F0 */	stfd f28, 0xf0(r1)
/* 80197B68 00194AA8  F3 81 00 F8 */	psq_st f28, 248(r1), 0, qr0
/* 80197B6C 00194AAC  DB 61 00 E0 */	stfd f27, 0xe0(r1)
/* 80197B70 00194AB0  F3 61 00 E8 */	psq_st f27, 232(r1), 0, qr0
/* 80197B74 00194AB4  DB 41 00 D0 */	stfd f26, 0xd0(r1)
/* 80197B78 00194AB8  F3 41 00 D8 */	psq_st f26, 216(r1), 0, qr0
/* 80197B7C 00194ABC  DB 21 00 C0 */	stfd f25, 0xc0(r1)
/* 80197B80 00194AC0  F3 21 00 C8 */	psq_st f25, 200(r1), 0, qr0
/* 80197B84 00194AC4  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 80197B88 00194AC8  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 80197B8C 00194ACC  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 80197B90 00194AD0  7C 7F 1B 78 */	mr r31, r3
/* 80197B94 00194AD4  A8 03 00 10 */	lha r0, 0x10(r3)
/* 80197B98 00194AD8  2C 00 FF FF */	cmpwi r0, -1
/* 80197B9C 00194ADC  40 82 00 0C */	bne .L_80197BA8
/* 80197BA0 00194AE0  38 60 00 02 */	li r3, 2
/* 80197BA4 00194AE4  48 00 09 DC */	b .L_80198580
.L_80197BA8:
/* 80197BA8 00194AE8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80197BAC 00194AEC  81 83 00 00 */	lwz r12, 0(r3)
/* 80197BB0 00194AF0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80197BB4 00194AF4  7D 89 03 A6 */	mtctr r12
/* 80197BB8 00194AF8  4E 80 04 21 */	bctrl 
/* 80197BBC 00194AFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80197BC0 00194B00  40 82 00 0C */	bne .L_80197BCC
/* 80197BC4 00194B04  38 60 00 02 */	li r3, 2
/* 80197BC8 00194B08  48 00 09 B8 */	b .L_80198580
.L_80197BCC:
/* 80197BCC 00194B0C  88 1F 00 1D */	lbz r0, 0x1d(r31)
/* 80197BD0 00194B10  28 00 00 00 */	cmplwi r0, 0
/* 80197BD4 00194B14  41 82 05 44 */	beq .L_80198118
/* 80197BD8 00194B18  83 DF 00 0C */	lwz r30, 0xc(r31)
/* 80197BDC 00194B1C  3B A0 00 00 */	li r29, 0
/* 80197BE0 00194B20  7F C3 F3 78 */	mr r3, r30
/* 80197BE4 00194B24  4B FD 2D 51 */	bl getTotalPikmins__Q24Game6PelletFv
/* 80197BE8 00194B28  2C 03 00 00 */	cmpwi r3, 0
/* 80197BEC 00194B2C  41 82 00 08 */	beq .L_80197BF4
/* 80197BF0 00194B30  3B A0 00 01 */	li r29, 1
.L_80197BF4:
/* 80197BF4 00194B34  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80197BF8 00194B38  41 82 00 84 */	beq .L_80197C7C
/* 80197BFC 00194B3C  38 00 00 00 */	li r0, 0
/* 80197C00 00194B40  38 61 00 44 */	addi r3, r1, 0x44
/* 80197C04 00194B44  98 1F 00 1D */	stb r0, 0x1d(r31)
/* 80197C08 00194B48  80 9F 00 04 */	lwz r4, 4(r31)
/* 80197C0C 00194B4C  81 84 00 00 */	lwz r12, 0(r4)
/* 80197C10 00194B50  81 8C 00 08 */	lwz r12, 8(r12)
/* 80197C14 00194B54  7D 89 03 A6 */	mtctr r12
/* 80197C18 00194B58  4E 80 04 21 */	bctrl 
/* 80197C1C 00194B5C  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 80197C20 00194B60  38 81 00 A4 */	addi r4, r1, 0xa4
/* 80197C24 00194B64  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 80197C28 00194B68  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 80197C2C 00194B6C  D0 41 00 A4 */	stfs f2, 0xa4(r1)
/* 80197C30 00194B70  D0 21 00 A8 */	stfs f1, 0xa8(r1)
/* 80197C34 00194B74  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 80197C38 00194B78  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80197C3C 00194B7C  81 83 00 00 */	lwz r12, 0(r3)
/* 80197C40 00194B80  81 8C 01 70 */	lwz r12, 0x170(r12)
/* 80197C44 00194B84  7D 89 03 A6 */	mtctr r12
/* 80197C48 00194B88  4E 80 04 21 */	bctrl 
/* 80197C4C 00194B8C  B0 7F 00 10 */	sth r3, 0x10(r31)
/* 80197C50 00194B90  A8 1F 00 10 */	lha r0, 0x10(r31)
/* 80197C54 00194B94  2C 00 FF FF */	cmpwi r0, -1
/* 80197C58 00194B98  40 82 00 0C */	bne .L_80197C64
/* 80197C5C 00194B9C  38 60 00 02 */	li r3, 2
/* 80197C60 00194BA0  48 00 09 20 */	b .L_80198580
.L_80197C64:
/* 80197C64 00194BA4  38 00 00 00 */	li r0, 0
/* 80197C68 00194BA8  C0 02 AC 28 */	lfs f0, lbl_80518F88@sda21(r2)
/* 80197C6C 00194BAC  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80197C70 00194BB0  38 60 00 01 */	li r3, 1
/* 80197C74 00194BB4  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80197C78 00194BB8  48 00 09 08 */	b .L_80198580
.L_80197C7C:
/* 80197C7C 00194BBC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80197C80 00194BC0  38 A1 00 98 */	addi r5, r1, 0x98
/* 80197C84 00194BC4  A8 9F 00 10 */	lha r4, 0x10(r31)
/* 80197C88 00194BC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80197C8C 00194BCC  81 8C 01 80 */	lwz r12, 0x180(r12)
/* 80197C90 00194BD0  7D 89 03 A6 */	mtctr r12
/* 80197C94 00194BD4  4E 80 04 21 */	bctrl 
/* 80197C98 00194BD8  7F C4 F3 78 */	mr r4, r30
/* 80197C9C 00194BDC  38 61 00 38 */	addi r3, r1, 0x38
/* 80197CA0 00194BE0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80197CA4 00194BE4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80197CA8 00194BE8  7D 89 03 A6 */	mtctr r12
/* 80197CAC 00194BEC  4E 80 04 21 */	bctrl 
/* 80197CB0 00194BF0  C3 C1 00 38 */	lfs f30, 0x38(r1)
/* 80197CB4 00194BF4  7F C3 F3 78 */	mr r3, r30
/* 80197CB8 00194BF8  C3 A1 00 3C */	lfs f29, 0x3c(r1)
/* 80197CBC 00194BFC  C3 81 00 40 */	lfs f28, 0x40(r1)
/* 80197CC0 00194C00  4B FC ED 09 */	bl getPickRadius__Q24Game6PelletFv
/* 80197CC4 00194C04  80 9F 00 04 */	lwz r4, 4(r31)
/* 80197CC8 00194C08  FF E0 08 90 */	fmr f31, f1
/* 80197CCC 00194C0C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80197CD0 00194C10  81 84 00 00 */	lwz r12, 0(r4)
/* 80197CD4 00194C14  81 8C 00 08 */	lwz r12, 8(r12)
/* 80197CD8 00194C18  7D 89 03 A6 */	mtctr r12
/* 80197CDC 00194C1C  4E 80 04 21 */	bctrl 
/* 80197CE0 00194C20  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80197CE4 00194C24  C3 61 00 2C */	lfs f27, 0x2c(r1)
/* 80197CE8 00194C28  81 83 00 00 */	lwz r12, 0(r3)
/* 80197CEC 00194C2C  C3 41 00 30 */	lfs f26, 0x30(r1)
/* 80197CF0 00194C30  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80197CF4 00194C34  C3 21 00 34 */	lfs f25, 0x34(r1)
/* 80197CF8 00194C38  7D 89 03 A6 */	mtctr r12
/* 80197CFC 00194C3C  4E 80 04 21 */	bctrl 
/* 80197D00 00194C40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80197D04 00194C44  41 82 00 14 */	beq .L_80197D18
/* 80197D08 00194C48  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80197D0C 00194C4C  4B FC EC C9 */	bl getCylinderHeight__Q24Game6PelletFv
/* 80197D10 00194C50  C0 02 AC 18 */	lfs f0, lbl_80518F78@sda21(r2)
/* 80197D14 00194C54  EF A0 E8 7C */	fnmsubs f29, f0, f1, f29
.L_80197D18:
/* 80197D18 00194C58  EC 9E D8 28 */	fsubs f4, f30, f27
/* 80197D1C 00194C5C  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 80197D20 00194C60  EC 5C C8 28 */	fsubs f2, f28, f25
/* 80197D24 00194C64  EC 7D D0 28 */	fsubs f3, f29, f26
/* 80197D28 00194C68  EC 04 01 32 */	fmuls f0, f4, f4
/* 80197D2C 00194C6C  D0 81 00 8C */	stfs f4, 0x8c(r1)
/* 80197D30 00194C70  EC A1 00 72 */	fmuls f5, f1, f1
/* 80197D34 00194C74  D0 61 00 90 */	stfs f3, 0x90(r1)
/* 80197D38 00194C78  EC 62 00 B2 */	fmuls f3, f2, f2
/* 80197D3C 00194C7C  EC 00 28 2A */	fadds f0, f0, f5
/* 80197D40 00194C80  D0 41 00 94 */	stfs f2, 0x94(r1)
/* 80197D44 00194C84  D0 21 00 90 */	stfs f1, 0x90(r1)
/* 80197D48 00194C88  EC 03 00 2A */	fadds f0, f3, f0
/* 80197D4C 00194C8C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80197D50 00194C90  40 81 00 20 */	ble .L_80197D70
/* 80197D54 00194C94  EC 04 29 3A */	fmadds f0, f4, f4, f5
/* 80197D58 00194C98  EC 63 00 2A */	fadds f3, f3, f0
/* 80197D5C 00194C9C  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 80197D60 00194CA0  40 81 00 14 */	ble .L_80197D74
/* 80197D64 00194CA4  FC 00 18 34 */	frsqrte f0, f3
/* 80197D68 00194CA8  EC 60 00 F2 */	fmuls f3, f0, f3
/* 80197D6C 00194CAC  48 00 00 08 */	b .L_80197D74
.L_80197D70:
/* 80197D70 00194CB0  FC 60 08 90 */	fmr f3, f1
.L_80197D74:
/* 80197D74 00194CB4  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80197D78 00194CB8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80197D7C 00194CBC  40 81 00 30 */	ble .L_80197DAC
/* 80197D80 00194CC0  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 80197D84 00194CC4  C0 41 00 8C */	lfs f2, 0x8c(r1)
/* 80197D88 00194CC8  EC 60 18 24 */	fdivs f3, f0, f3
/* 80197D8C 00194CCC  C0 21 00 90 */	lfs f1, 0x90(r1)
/* 80197D90 00194CD0  C0 01 00 94 */	lfs f0, 0x94(r1)
/* 80197D94 00194CD4  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80197D98 00194CD8  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80197D9C 00194CDC  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80197DA0 00194CE0  D0 41 00 8C */	stfs f2, 0x8c(r1)
/* 80197DA4 00194CE4  D0 21 00 90 */	stfs f1, 0x90(r1)
/* 80197DA8 00194CE8  D0 01 00 94 */	stfs f0, 0x94(r1)
.L_80197DAC:
/* 80197DAC 00194CEC  C0 01 00 94 */	lfs f0, 0x94(r1)
/* 80197DB0 00194CF0  C0 61 00 8C */	lfs f3, 0x8c(r1)
/* 80197DB4 00194CF4  EC 20 07 F2 */	fmuls f1, f0, f31
/* 80197DB8 00194CF8  C0 41 00 90 */	lfs f2, 0x90(r1)
/* 80197DBC 00194CFC  EC 63 07 F2 */	fmuls f3, f3, f31
/* 80197DC0 00194D00  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80197DC4 00194D04  EC 42 07 F2 */	fmuls f2, f2, f31
/* 80197DC8 00194D08  EC 9C 08 28 */	fsubs f4, f28, f1
/* 80197DCC 00194D0C  EC 3E 18 28 */	fsubs f1, f30, f3
/* 80197DD0 00194D10  EC 5D 10 28 */	fsubs f2, f29, f2
/* 80197DD4 00194D14  EC 64 C8 28 */	fsubs f3, f4, f25
/* 80197DD8 00194D18  EC 21 D8 28 */	fsubs f1, f1, f27
/* 80197DDC 00194D1C  EC 42 D0 28 */	fsubs f2, f2, f26
/* 80197DE0 00194D20  EC 63 00 F2 */	fmuls f3, f3, f3
/* 80197DE4 00194D24  EF 21 18 7A */	fmadds f25, f1, f1, f3
/* 80197DE8 00194D28  FC 19 00 40 */	fcmpo cr0, f25, f0
/* 80197DEC 00194D2C  40 81 00 14 */	ble .L_80197E00
/* 80197DF0 00194D30  40 81 00 14 */	ble .L_80197E04
/* 80197DF4 00194D34  FC 00 C8 34 */	frsqrte f0, f25
/* 80197DF8 00194D38  EF 20 06 72 */	fmuls f25, f0, f25
/* 80197DFC 00194D3C  48 00 00 08 */	b .L_80197E04
.L_80197E00:
/* 80197E00 00194D40  FF 20 00 90 */	fmr f25, f0
.L_80197E04:
/* 80197E04 00194D44  C0 02 AC 10 */	lfs f0, lbl_80518F70@sda21(r2)
/* 80197E08 00194D48  FC 19 00 40 */	fcmpo cr0, f25, f0
/* 80197E0C 00194D4C  40 81 00 4C */	ble .L_80197E58
/* 80197E10 00194D50  80 7F 00 04 */	lwz r3, 4(r31)
/* 80197E14 00194D54  38 81 00 8C */	addi r4, r1, 0x8c
/* 80197E18 00194D58  C0 22 AC 04 */	lfs f1, lbl_80518F64@sda21(r2)
/* 80197E1C 00194D5C  4B FB 11 FD */	bl "setSpeed__Q24Game4PikiFfR10Vector3<f>"
/* 80197E20 00194D60  C0 02 AC 2C */	lfs f0, lbl_80518F8C@sda21(r2)
/* 80197E24 00194D64  FC 19 00 40 */	fcmpo cr0, f25, f0
/* 80197E28 00194D68  40 80 02 E8 */	bge .L_80198110
/* 80197E2C 00194D6C  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80197E30 00194D70  38 03 00 01 */	addi r0, r3, 1
/* 80197E34 00194D74  2C 00 00 3C */	cmpwi r0, 0x3c
/* 80197E38 00194D78  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80197E3C 00194D7C  41 80 02 D4 */	blt .L_80198110
/* 80197E40 00194D80  38 00 00 00 */	li r0, 0
/* 80197E44 00194D84  C0 02 AC 28 */	lfs f0, lbl_80518F88@sda21(r2)
/* 80197E48 00194D88  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80197E4C 00194D8C  38 60 00 02 */	li r3, 2
/* 80197E50 00194D90  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80197E54 00194D94  48 00 07 2C */	b .L_80198580
.L_80197E58:
/* 80197E58 00194D98  FC 20 12 10 */	fabs f1, f2
/* 80197E5C 00194D9C  C0 02 AC 08 */	lfs f0, lbl_80518F68@sda21(r2)
/* 80197E60 00194DA0  FC 20 08 18 */	frsp f1, f1
/* 80197E64 00194DA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80197E68 00194DA8  40 80 02 6C */	bge .L_801980D4
/* 80197E6C 00194DAC  7F C3 F3 78 */	mr r3, r30
/* 80197E70 00194DB0  38 A1 00 80 */	addi r5, r1, 0x80
/* 80197E74 00194DB4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80197E78 00194DB8  38 80 00 00 */	li r4, 0
/* 80197E7C 00194DBC  81 8C 01 80 */	lwz r12, 0x180(r12)
/* 80197E80 00194DC0  7D 89 03 A6 */	mtctr r12
/* 80197E84 00194DC4  4E 80 04 21 */	bctrl 
/* 80197E88 00194DC8  C0 21 00 84 */	lfs f1, 0x84(r1)
/* 80197E8C 00194DCC  C0 01 00 80 */	lfs f0, 0x80(r1)
/* 80197E90 00194DD0  EC 81 E8 28 */	fsubs f4, f1, f29
/* 80197E94 00194DD4  C0 61 00 88 */	lfs f3, 0x88(r1)
/* 80197E98 00194DD8  EC 40 F0 28 */	fsubs f2, f0, f30
/* 80197E9C 00194DDC  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 80197EA0 00194DE0  EC 63 E0 28 */	fsubs f3, f3, f28
/* 80197EA4 00194DE4  EC A4 01 32 */	fmuls f5, f4, f4
/* 80197EA8 00194DE8  EC 02 00 B2 */	fmuls f0, f2, f2
/* 80197EAC 00194DEC  D0 41 00 80 */	stfs f2, 0x80(r1)
/* 80197EB0 00194DF0  EC C3 00 F2 */	fmuls f6, f3, f3
/* 80197EB4 00194DF4  D0 81 00 84 */	stfs f4, 0x84(r1)
/* 80197EB8 00194DF8  EC 00 28 2A */	fadds f0, f0, f5
/* 80197EBC 00194DFC  D0 61 00 88 */	stfs f3, 0x88(r1)
/* 80197EC0 00194E00  EC 06 00 2A */	fadds f0, f6, f0
/* 80197EC4 00194E04  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80197EC8 00194E08  40 81 00 20 */	ble .L_80197EE8
/* 80197ECC 00194E0C  EC 02 28 BA */	fmadds f0, f2, f2, f5
/* 80197ED0 00194E10  EC 66 00 2A */	fadds f3, f6, f0
/* 80197ED4 00194E14  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 80197ED8 00194E18  40 81 00 14 */	ble .L_80197EEC
/* 80197EDC 00194E1C  FC 00 18 34 */	frsqrte f0, f3
/* 80197EE0 00194E20  EC 60 00 F2 */	fmuls f3, f0, f3
/* 80197EE4 00194E24  48 00 00 08 */	b .L_80197EEC
.L_80197EE8:
/* 80197EE8 00194E28  FC 60 08 90 */	fmr f3, f1
.L_80197EEC:
/* 80197EEC 00194E2C  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80197EF0 00194E30  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80197EF4 00194E34  40 81 00 30 */	ble .L_80197F24
/* 80197EF8 00194E38  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 80197EFC 00194E3C  C0 41 00 80 */	lfs f2, 0x80(r1)
/* 80197F00 00194E40  EC 60 18 24 */	fdivs f3, f0, f3
/* 80197F04 00194E44  C0 21 00 84 */	lfs f1, 0x84(r1)
/* 80197F08 00194E48  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 80197F0C 00194E4C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80197F10 00194E50  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80197F14 00194E54  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80197F18 00194E58  D0 41 00 80 */	stfs f2, 0x80(r1)
/* 80197F1C 00194E5C  D0 21 00 84 */	stfs f1, 0x84(r1)
/* 80197F20 00194E60  D0 01 00 88 */	stfs f0, 0x88(r1)
.L_80197F24:
/* 80197F24 00194E64  C0 C2 AC 30 */	lfs f6, lbl_80518F90@sda21(r2)
/* 80197F28 00194E68  C0 01 00 90 */	lfs f0, 0x90(r1)
/* 80197F2C 00194E6C  C0 21 00 8C */	lfs f1, 0x8c(r1)
/* 80197F30 00194E70  EC 80 01 B2 */	fmuls f4, f0, f6
/* 80197F34 00194E74  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 80197F38 00194E78  EC A1 01 B2 */	fmuls f5, f1, f6
/* 80197F3C 00194E7C  C0 41 00 94 */	lfs f2, 0x94(r1)
/* 80197F40 00194E80  C0 E1 00 80 */	lfs f7, 0x80(r1)
/* 80197F44 00194E84  EC 20 01 32 */	fmuls f1, f0, f4
/* 80197F48 00194E88  EC 62 01 B2 */	fmuls f3, f2, f6
/* 80197F4C 00194E8C  C1 01 00 88 */	lfs f8, 0x88(r1)
/* 80197F50 00194E90  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 80197F54 00194E94  EC 27 09 7A */	fmadds f1, f7, f5, f1
/* 80197F58 00194E98  D0 A1 00 8C */	stfs f5, 0x8c(r1)
/* 80197F5C 00194E9C  EC 47 00 F2 */	fmuls f2, f7, f3
/* 80197F60 00194EA0  D0 81 00 90 */	stfs f4, 0x90(r1)
/* 80197F64 00194EA4  EC 28 08 FA */	fmadds f1, f8, f3, f1
/* 80197F68 00194EA8  EC 48 11 78 */	fmsubs f2, f8, f5, f2
/* 80197F6C 00194EAC  D0 61 00 94 */	stfs f3, 0x94(r1)
/* 80197F70 00194EB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80197F74 00194EB4  FC 60 08 90 */	fmr f3, f1
/* 80197F78 00194EB8  4C 41 13 82 */	cror 2, 1, 2
/* 80197F7C 00194EBC  40 82 00 0C */	bne .L_80197F88
/* 80197F80 00194EC0  FC 60 00 90 */	fmr f3, f0
/* 80197F84 00194EC4  48 00 00 14 */	b .L_80197F98
.L_80197F88:
/* 80197F88 00194EC8  FC 01 30 40 */	fcmpo cr0, f1, f6
/* 80197F8C 00194ECC  4C 40 13 82 */	cror 2, 0, 2
/* 80197F90 00194ED0  40 82 00 08 */	bne .L_80197F98
/* 80197F94 00194ED4  FC 60 30 90 */	fmr f3, f6
.L_80197F98:
/* 80197F98 00194ED8  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 80197F9C 00194EDC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80197FA0 00194EE0  40 81 00 8C */	ble .L_8019802C
/* 80197FA4 00194EE4  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 80197FA8 00194EE8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80197FAC 00194EEC  4C 41 13 82 */	cror 2, 1, 2
/* 80197FB0 00194EF0  40 82 00 08 */	bne .L_80197FB8
/* 80197FB4 00194EF4  48 00 01 04 */	b .L_801980B8
.L_80197FB8:
/* 80197FB8 00194EF8  C0 02 AC 30 */	lfs f0, lbl_80518F90@sda21(r2)
/* 80197FBC 00194EFC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80197FC0 00194F00  4C 40 13 82 */	cror 2, 0, 2
/* 80197FC4 00194F04  40 82 00 0C */	bne .L_80197FD0
/* 80197FC8 00194F08  C0 22 AC 34 */	lfs f1, lbl_80518F94@sda21(r2)
/* 80197FCC 00194F0C  48 00 00 EC */	b .L_801980B8
.L_80197FD0:
/* 80197FD0 00194F10  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 80197FD4 00194F14  40 80 00 30 */	bge .L_80198004
/* 80197FD8 00194F18  FC 00 18 50 */	fneg f0, f3
/* 80197FDC 00194F1C  C0 22 AC 38 */	lfs f1, lbl_80518F98@sda21(r2)
/* 80197FE0 00194F20  EC 21 00 32 */	fmuls f1, f1, f0
/* 80197FE4 00194F24  4B F2 9B 69 */	bl __cvt_fp2unsigned
/* 80197FE8 00194F28  3C 80 80 51 */	lis r4, asinAcosTable___5JMath@ha
/* 80197FEC 00194F2C  54 60 10 3A */	slwi r0, r3, 2
/* 80197FF0 00194F30  38 64 E2 00 */	addi r3, r4, asinAcosTable___5JMath@l
/* 80197FF4 00194F34  C0 02 AC 3C */	lfs f0, lbl_80518F9C@sda21(r2)
/* 80197FF8 00194F38  7C 23 04 2E */	lfsx f1, r3, r0
/* 80197FFC 00194F3C  EC 21 00 2A */	fadds f1, f1, f0
/* 80198000 00194F40  48 00 00 B8 */	b .L_801980B8
.L_80198004:
/* 80198004 00194F44  C0 02 AC 38 */	lfs f0, lbl_80518F98@sda21(r2)
/* 80198008 00194F48  EC 20 00 F2 */	fmuls f1, f0, f3
/* 8019800C 00194F4C  4B F2 9B 41 */	bl __cvt_fp2unsigned
/* 80198010 00194F50  3C 80 80 51 */	lis r4, asinAcosTable___5JMath@ha
/* 80198014 00194F54  54 60 10 3A */	slwi r0, r3, 2
/* 80198018 00194F58  38 64 E2 00 */	addi r3, r4, asinAcosTable___5JMath@l
/* 8019801C 00194F5C  C0 02 AC 3C */	lfs f0, lbl_80518F9C@sda21(r2)
/* 80198020 00194F60  7C 23 04 2E */	lfsx f1, r3, r0
/* 80198024 00194F64  EC 20 08 28 */	fsubs f1, f0, f1
/* 80198028 00194F68  48 00 00 90 */	b .L_801980B8
.L_8019802C:
/* 8019802C 00194F6C  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 80198030 00194F70  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80198034 00194F74  4C 41 13 82 */	cror 2, 1, 2
/* 80198038 00194F78  40 82 00 08 */	bne .L_80198040
/* 8019803C 00194F7C  48 00 00 74 */	b .L_801980B0
.L_80198040:
/* 80198040 00194F80  C0 02 AC 30 */	lfs f0, lbl_80518F90@sda21(r2)
/* 80198044 00194F84  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80198048 00194F88  4C 40 13 82 */	cror 2, 0, 2
/* 8019804C 00194F8C  40 82 00 0C */	bne .L_80198058
/* 80198050 00194F90  C0 22 AC 34 */	lfs f1, lbl_80518F94@sda21(r2)
/* 80198054 00194F94  48 00 00 5C */	b .L_801980B0
.L_80198058:
/* 80198058 00194F98  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8019805C 00194F9C  40 80 00 30 */	bge .L_8019808C
/* 80198060 00194FA0  FC 00 18 50 */	fneg f0, f3
/* 80198064 00194FA4  C0 22 AC 38 */	lfs f1, lbl_80518F98@sda21(r2)
/* 80198068 00194FA8  EC 21 00 32 */	fmuls f1, f1, f0
/* 8019806C 00194FAC  4B F2 9A E1 */	bl __cvt_fp2unsigned
/* 80198070 00194FB0  3C 80 80 51 */	lis r4, asinAcosTable___5JMath@ha
/* 80198074 00194FB4  54 60 10 3A */	slwi r0, r3, 2
/* 80198078 00194FB8  38 64 E2 00 */	addi r3, r4, asinAcosTable___5JMath@l
/* 8019807C 00194FBC  C0 02 AC 3C */	lfs f0, lbl_80518F9C@sda21(r2)
/* 80198080 00194FC0  7C 23 04 2E */	lfsx f1, r3, r0
/* 80198084 00194FC4  EC 21 00 2A */	fadds f1, f1, f0
/* 80198088 00194FC8  48 00 00 28 */	b .L_801980B0
.L_8019808C:
/* 8019808C 00194FCC  C0 02 AC 38 */	lfs f0, lbl_80518F98@sda21(r2)
/* 80198090 00194FD0  EC 20 00 F2 */	fmuls f1, f0, f3
/* 80198094 00194FD4  4B F2 9A B9 */	bl __cvt_fp2unsigned
/* 80198098 00194FD8  3C 80 80 51 */	lis r4, asinAcosTable___5JMath@ha
/* 8019809C 00194FDC  54 60 10 3A */	slwi r0, r3, 2
/* 801980A0 00194FE0  38 64 E2 00 */	addi r3, r4, asinAcosTable___5JMath@l
/* 801980A4 00194FE4  C0 02 AC 3C */	lfs f0, lbl_80518F9C@sda21(r2)
/* 801980A8 00194FE8  7C 23 04 2E */	lfsx f1, r3, r0
/* 801980AC 00194FEC  EC 20 08 28 */	fsubs f1, f0, f1
.L_801980B0:
/* 801980B0 00194FF0  FC 20 08 50 */	fneg f1, f1
/* 801980B4 00194FF4  48 27 9B 1D */	bl roundAng__Ff
.L_801980B8:
/* 801980B8 00194FF8  D0 3E 03 E0 */	stfs f1, 0x3e0(r30)
/* 801980BC 00194FFC  80 7F 00 04 */	lwz r3, 4(r31)
/* 801980C0 00195000  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 801980C4 00195004  A8 BF 00 10 */	lha r5, 0x10(r31)
/* 801980C8 00195008  48 00 71 51 */	bl startStick__Q24Game8CreatureFPQ24Game8Creatures
/* 801980CC 0019500C  38 60 00 00 */	li r3, 0
/* 801980D0 00195010  48 00 04 B0 */	b .L_80198580
.L_801980D4:
/* 801980D4 00195014  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 801980D8 00195018  38 03 00 01 */	addi r0, r3, 1
/* 801980DC 0019501C  2C 00 00 3C */	cmpwi r0, 0x3c
/* 801980E0 00195020  90 1F 00 14 */	stw r0, 0x14(r31)
/* 801980E4 00195024  41 80 00 1C */	blt .L_80198100
/* 801980E8 00195028  38 00 00 00 */	li r0, 0
/* 801980EC 0019502C  C0 02 AC 28 */	lfs f0, lbl_80518F88@sda21(r2)
/* 801980F0 00195030  90 1F 00 14 */	stw r0, 0x14(r31)
/* 801980F4 00195034  38 60 00 02 */	li r3, 2
/* 801980F8 00195038  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 801980FC 0019503C  48 00 04 84 */	b .L_80198580
.L_80198100:
/* 80198100 00195040  80 7F 00 04 */	lwz r3, 4(r31)
/* 80198104 00195044  38 81 00 8C */	addi r4, r1, 0x8c
/* 80198108 00195048  C0 22 AC 24 */	lfs f1, lbl_80518F84@sda21(r2)
/* 8019810C 0019504C  4B FB 0F 0D */	bl "setSpeed__Q24Game4PikiFfR10Vector3<f>"
.L_80198110:
/* 80198110 00195050  38 60 00 01 */	li r3, 1
/* 80198114 00195054  48 00 04 6C */	b .L_80198580
.L_80198118:
/* 80198118 00195058  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8019811C 0019505C  38 A1 00 74 */	addi r5, r1, 0x74
/* 80198120 00195060  A8 9F 00 10 */	lha r4, 0x10(r31)
/* 80198124 00195064  81 83 00 00 */	lwz r12, 0(r3)
/* 80198128 00195068  81 8C 01 80 */	lwz r12, 0x180(r12)
/* 8019812C 0019506C  7D 89 03 A6 */	mtctr r12
/* 80198130 00195070  4E 80 04 21 */	bctrl 
/* 80198134 00195074  80 9F 00 04 */	lwz r4, 4(r31)
/* 80198138 00195078  38 61 00 20 */	addi r3, r1, 0x20
/* 8019813C 0019507C  81 84 00 00 */	lwz r12, 0(r4)
/* 80198140 00195080  81 8C 00 08 */	lwz r12, 8(r12)
/* 80198144 00195084  7D 89 03 A6 */	mtctr r12
/* 80198148 00195088  4E 80 04 21 */	bctrl 
/* 8019814C 0019508C  C0 A1 00 20 */	lfs f5, 0x20(r1)
/* 80198150 00195090  C0 61 00 28 */	lfs f3, 0x28(r1)
/* 80198154 00195094  C0 21 00 7C */	lfs f1, 0x7c(r1)
/* 80198158 00195098  C0 01 00 74 */	lfs f0, 0x74(r1)
/* 8019815C 0019509C  EC E1 18 28 */	fsubs f7, f1, f3
/* 80198160 001950A0  C0 81 00 24 */	lfs f4, 0x24(r1)
/* 80198164 001950A4  EC 40 28 28 */	fsubs f2, f0, f5
/* 80198168 001950A8  C0 21 00 78 */	lfs f1, 0x78(r1)
/* 8019816C 001950AC  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80198170 001950B0  EC C1 20 28 */	fsubs f6, f1, f4
/* 80198174 001950B4  ED 22 00 B2 */	fmuls f9, f2, f2
/* 80198178 001950B8  D0 A1 00 68 */	stfs f5, 0x68(r1)
/* 8019817C 001950BC  ED 07 01 F2 */	fmuls f8, f7, f7
/* 80198180 001950C0  FC A0 32 10 */	fabs f5, f6
/* 80198184 001950C4  D0 81 00 6C */	stfs f4, 0x6c(r1)
/* 80198188 001950C8  EC 29 40 2A */	fadds f1, f9, f8
/* 8019818C 001950CC  D0 61 00 70 */	stfs f3, 0x70(r1)
/* 80198190 001950D0  FC 80 28 18 */	frsp f4, f5
/* 80198194 001950D4  D0 41 00 5C */	stfs f2, 0x5c(r1)
/* 80198198 001950D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019819C 001950DC  D0 C1 00 60 */	stfs f6, 0x60(r1)
/* 801981A0 001950E0  D0 E1 00 64 */	stfs f7, 0x64(r1)
/* 801981A4 001950E4  40 81 00 1C */	ble .L_801981C0
/* 801981A8 001950E8  EF E2 40 BA */	fmadds f31, f2, f2, f8
/* 801981AC 001950EC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801981B0 001950F0  40 81 00 14 */	ble .L_801981C4
/* 801981B4 001950F4  FC 00 F8 34 */	frsqrte f0, f31
/* 801981B8 001950F8  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801981BC 001950FC  48 00 00 08 */	b .L_801981C4
.L_801981C0:
/* 801981C0 00195100  FF E0 00 90 */	fmr f31, f0
.L_801981C4:
/* 801981C4 00195104  C0 01 00 60 */	lfs f0, 0x60(r1)
/* 801981C8 00195108  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 801981CC 0019510C  EC 60 00 32 */	fmuls f3, f0, f0
/* 801981D0 00195110  EC 09 18 2A */	fadds f0, f9, f3
/* 801981D4 00195114  EC 08 00 2A */	fadds f0, f8, f0
/* 801981D8 00195118  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801981DC 0019511C  40 81 00 20 */	ble .L_801981FC
/* 801981E0 00195120  EC 02 18 BA */	fmadds f0, f2, f2, f3
/* 801981E4 00195124  EC 68 00 2A */	fadds f3, f8, f0
/* 801981E8 00195128  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 801981EC 0019512C  40 81 00 14 */	ble .L_80198200
/* 801981F0 00195130  FC 00 18 34 */	frsqrte f0, f3
/* 801981F4 00195134  EC 60 00 F2 */	fmuls f3, f0, f3
/* 801981F8 00195138  48 00 00 08 */	b .L_80198200
.L_801981FC:
/* 801981FC 0019513C  FC 60 08 90 */	fmr f3, f1
.L_80198200:
/* 80198200 00195140  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80198204 00195144  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80198208 00195148  40 81 00 30 */	ble .L_80198238
/* 8019820C 0019514C  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 80198210 00195150  C0 41 00 5C */	lfs f2, 0x5c(r1)
/* 80198214 00195154  EC 60 18 24 */	fdivs f3, f0, f3
/* 80198218 00195158  C0 21 00 60 */	lfs f1, 0x60(r1)
/* 8019821C 0019515C  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 80198220 00195160  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80198224 00195164  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80198228 00195168  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8019822C 0019516C  D0 41 00 5C */	stfs f2, 0x5c(r1)
/* 80198230 00195170  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 80198234 00195174  D0 01 00 64 */	stfs f0, 0x64(r1)
.L_80198238:
/* 80198238 00195178  C0 02 AC 40 */	lfs f0, lbl_80518FA0@sda21(r2)
/* 8019823C 0019517C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80198240 00195180  40 80 00 98 */	bge .L_801982D8
/* 80198244 00195184  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80198248 00195188  38 03 00 01 */	addi r0, r3, 1
/* 8019824C 0019518C  2C 00 00 3C */	cmpwi r0, 0x3c
/* 80198250 00195190  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80198254 00195194  41 80 00 84 */	blt .L_801982D8
/* 80198258 00195198  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8019825C 0019519C  38 81 00 68 */	addi r4, r1, 0x68
/* 80198260 001951A0  AB BF 00 10 */	lha r29, 0x10(r31)
/* 80198264 001951A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80198268 001951A8  81 8C 01 70 */	lwz r12, 0x170(r12)
/* 8019826C 001951AC  7D 89 03 A6 */	mtctr r12
/* 80198270 001951B0  4E 80 04 21 */	bctrl 
/* 80198274 001951B4  B0 7F 00 10 */	sth r3, 0x10(r31)
/* 80198278 001951B8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8019827C 001951BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80198280 001951C0  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80198284 001951C4  7D 89 03 A6 */	mtctr r12
/* 80198288 001951C8  4E 80 04 21 */	bctrl 
/* 8019828C 001951CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80198290 001951D0  41 82 00 0C */	beq .L_8019829C
/* 80198294 001951D4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80198298 001951D8  4B FC DB 99 */	bl sendClaim__Q24Game6PelletFv
.L_8019829C:
/* 8019829C 001951DC  A8 1F 00 10 */	lha r0, 0x10(r31)
/* 801982A0 001951E0  7C 1D 00 00 */	cmpw r29, r0
/* 801982A4 001951E4  40 82 00 0C */	bne .L_801982B0
/* 801982A8 001951E8  38 60 00 02 */	li r3, 2
/* 801982AC 001951EC  48 00 02 D4 */	b .L_80198580
.L_801982B0:
/* 801982B0 001951F0  2C 00 FF FF */	cmpwi r0, -1
/* 801982B4 001951F4  40 82 00 0C */	bne .L_801982C0
/* 801982B8 001951F8  38 60 00 02 */	li r3, 2
/* 801982BC 001951FC  48 00 02 C4 */	b .L_80198580
.L_801982C0:
/* 801982C0 00195200  38 00 00 00 */	li r0, 0
/* 801982C4 00195204  C0 02 AC 28 */	lfs f0, lbl_80518F88@sda21(r2)
/* 801982C8 00195208  90 1F 00 14 */	stw r0, 0x14(r31)
/* 801982CC 0019520C  38 60 00 01 */	li r3, 1
/* 801982D0 00195210  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 801982D4 00195214  48 00 02 AC */	b .L_80198580
.L_801982D8:
/* 801982D8 00195218  C0 02 AC 10 */	lfs f0, lbl_80518F70@sda21(r2)
/* 801982DC 0019521C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801982E0 00195220  40 81 00 1C */	ble .L_801982FC
/* 801982E4 00195224  80 7F 00 04 */	lwz r3, 4(r31)
/* 801982E8 00195228  38 81 00 5C */	addi r4, r1, 0x5c
/* 801982EC 0019522C  C0 22 AC 04 */	lfs f1, lbl_80518F64@sda21(r2)
/* 801982F0 00195230  4B FB 0D 29 */	bl "setSpeed__Q24Game4PikiFfR10Vector3<f>"
/* 801982F4 00195234  38 60 00 01 */	li r3, 1
/* 801982F8 00195238  48 00 02 88 */	b .L_80198580
.L_801982FC:
/* 801982FC 0019523C  40 80 00 AC */	bge .L_801983A8
/* 80198300 00195240  C0 02 AC 08 */	lfs f0, lbl_80518F68@sda21(r2)
/* 80198304 00195244  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80198308 00195248  40 80 00 A0 */	bge .L_801983A8
/* 8019830C 0019524C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80198310 00195250  A8 9F 00 10 */	lha r4, 0x10(r31)
/* 80198314 00195254  81 83 00 00 */	lwz r12, 0(r3)
/* 80198318 00195258  81 8C 01 68 */	lwz r12, 0x168(r12)
/* 8019831C 0019525C  7D 89 03 A6 */	mtctr r12
/* 80198320 00195260  4E 80 04 21 */	bctrl 
/* 80198324 00195264  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80198328 00195268  40 82 00 38 */	bne .L_80198360
/* 8019832C 0019526C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80198330 00195270  38 81 00 68 */	addi r4, r1, 0x68
/* 80198334 00195274  81 83 00 00 */	lwz r12, 0(r3)
/* 80198338 00195278  81 8C 01 70 */	lwz r12, 0x170(r12)
/* 8019833C 0019527C  7D 89 03 A6 */	mtctr r12
/* 80198340 00195280  4E 80 04 21 */	bctrl 
/* 80198344 00195284  B0 7F 00 10 */	sth r3, 0x10(r31)
/* 80198348 00195288  38 00 00 00 */	li r0, 0
/* 8019834C 0019528C  C0 02 AC 28 */	lfs f0, lbl_80518F88@sda21(r2)
/* 80198350 00195290  38 60 00 01 */	li r3, 1
/* 80198354 00195294  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80198358 00195298  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 8019835C 0019529C  48 00 02 24 */	b .L_80198580
.L_80198360:
/* 80198360 001952A0  80 7F 00 04 */	lwz r3, 4(r31)
/* 80198364 001952A4  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 80198368 001952A8  A8 BF 00 10 */	lha r5, 0x10(r31)
/* 8019836C 001952AC  48 00 6E AD */	bl startStick__Q24Game8CreatureFPQ24Game8Creatures
/* 80198370 001952B0  80 9F 00 04 */	lwz r4, 4(r31)
/* 80198374 001952B4  38 61 00 14 */	addi r3, r1, 0x14
/* 80198378 001952B8  81 84 00 00 */	lwz r12, 0(r4)
/* 8019837C 001952BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80198380 001952C0  7D 89 03 A6 */	mtctr r12
/* 80198384 001952C4  4E 80 04 21 */	bctrl 
/* 80198388 001952C8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8019838C 001952CC  38 60 00 00 */	li r3, 0
/* 80198390 001952D0  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80198394 001952D4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80198398 001952D8  D0 41 00 68 */	stfs f2, 0x68(r1)
/* 8019839C 001952DC  D0 21 00 6C */	stfs f1, 0x6c(r1)
/* 801983A0 001952E0  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 801983A4 001952E4  48 00 01 DC */	b .L_80198580
.L_801983A8:
/* 801983A8 001952E8  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 801983AC 001952EC  38 61 00 08 */	addi r3, r1, 8
/* 801983B0 001952F0  81 84 00 00 */	lwz r12, 0(r4)
/* 801983B4 001952F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801983B8 001952F8  7D 89 03 A6 */	mtctr r12
/* 801983BC 001952FC  4E 80 04 21 */	bctrl 
/* 801983C0 00195300  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801983C4 00195304  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 801983C8 00195308  C0 21 00 08 */	lfs f1, 8(r1)
/* 801983CC 0019530C  EC 82 00 28 */	fsubs f4, f2, f0
/* 801983D0 00195310  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 801983D4 00195314  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801983D8 00195318  EC 61 00 28 */	fsubs f3, f1, f0
/* 801983DC 0019531C  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 801983E0 00195320  EC A4 01 32 */	fmuls f5, f4, f4
/* 801983E4 00195324  EC 42 08 28 */	fsubs f2, f2, f1
/* 801983E8 00195328  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 801983EC 0019532C  EC C3 00 F2 */	fmuls f6, f3, f3
/* 801983F0 00195330  EC 26 28 2A */	fadds f1, f6, f5
/* 801983F4 00195334  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801983F8 00195338  40 81 00 1C */	ble .L_80198414
/* 801983FC 0019533C  EC 23 28 FA */	fmadds f1, f3, f3, f5
/* 80198400 00195340  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80198404 00195344  40 81 00 14 */	ble .L_80198418
/* 80198408 00195348  FC 00 08 34 */	frsqrte f0, f1
/* 8019840C 0019534C  EC 20 00 72 */	fmuls f1, f0, f1
/* 80198410 00195350  48 00 00 08 */	b .L_80198418
.L_80198414:
/* 80198414 00195354  FC 20 00 90 */	fmr f1, f0
.L_80198418:
/* 80198418 00195358  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 8019841C 0019535C  40 80 01 50 */	bge .L_8019856C
/* 80198420 00195360  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80198424 00195364  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 80198428 00195368  EC 06 10 2A */	fadds f0, f6, f2
/* 8019842C 0019536C  EC 05 00 2A */	fadds f0, f5, f0
/* 80198430 00195370  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80198434 00195374  40 81 00 20 */	ble .L_80198454
/* 80198438 00195378  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 8019843C 0019537C  EC 45 00 2A */	fadds f2, f5, f0
/* 80198440 00195380  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80198444 00195384  40 81 00 14 */	ble .L_80198458
/* 80198448 00195388  FC 00 10 34 */	frsqrte f0, f2
/* 8019844C 0019538C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80198450 00195390  48 00 00 08 */	b .L_80198458
.L_80198454:
/* 80198454 00195394  FC 40 08 90 */	fmr f2, f1
.L_80198458:
/* 80198458 00195398  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019845C 0019539C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80198460 001953A0  40 81 00 14 */	ble .L_80198474
/* 80198464 001953A4  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 80198468 001953A8  EC 00 10 24 */	fdivs f0, f0, f2
/* 8019846C 001953AC  EC 63 00 32 */	fmuls f3, f3, f0
/* 80198470 001953B0  EC 84 00 32 */	fmuls f4, f4, f0
.L_80198474:
/* 80198474 001953B4  FC 00 20 50 */	fneg f0, f4
/* 80198478 001953B8  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 8019847C 001953BC  FC 80 18 18 */	frsp f4, f3
/* 80198480 001953C0  D0 61 00 58 */	stfs f3, 0x58(r1)
/* 80198484 001953C4  EC 61 00 72 */	fmuls f3, f1, f1
/* 80198488 001953C8  FC 40 00 18 */	frsp f2, f0
/* 8019848C 001953CC  EC 84 01 32 */	fmuls f4, f4, f4
/* 80198490 001953D0  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 80198494 001953D4  EC 02 00 B2 */	fmuls f0, f2, f2
/* 80198498 001953D8  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 8019849C 001953DC  EC 00 18 2A */	fadds f0, f0, f3
/* 801984A0 001953E0  EC 04 00 2A */	fadds f0, f4, f0
/* 801984A4 001953E4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801984A8 001953E8  40 81 00 20 */	ble .L_801984C8
/* 801984AC 001953EC  EC 02 18 BA */	fmadds f0, f2, f2, f3
/* 801984B0 001953F0  EC 64 00 2A */	fadds f3, f4, f0
/* 801984B4 001953F4  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 801984B8 001953F8  40 81 00 14 */	ble .L_801984CC
/* 801984BC 001953FC  FC 00 18 34 */	frsqrte f0, f3
/* 801984C0 00195400  EC 60 00 F2 */	fmuls f3, f0, f3
/* 801984C4 00195404  48 00 00 08 */	b .L_801984CC
.L_801984C8:
/* 801984C8 00195408  FC 60 08 90 */	fmr f3, f1
.L_801984CC:
/* 801984CC 0019540C  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 801984D0 00195410  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801984D4 00195414  40 81 00 30 */	ble .L_80198504
/* 801984D8 00195418  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 801984DC 0019541C  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 801984E0 00195420  EC 60 18 24 */	fdivs f3, f0, f3
/* 801984E4 00195424  C0 21 00 54 */	lfs f1, 0x54(r1)
/* 801984E8 00195428  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 801984EC 0019542C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 801984F0 00195430  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801984F4 00195434  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801984F8 00195438  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 801984FC 0019543C  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80198500 00195440  D0 01 00 58 */	stfs f0, 0x58(r1)
.L_80198504:
/* 80198504 00195444  80 7F 00 04 */	lwz r3, 4(r31)
/* 80198508 00195448  38 81 00 50 */	addi r4, r1, 0x50
/* 8019850C 0019544C  C0 22 AC 24 */	lfs f1, lbl_80518F84@sda21(r2)
/* 80198510 00195450  4B FB 0B 09 */	bl "setSpeed__Q24Game4PikiFfR10Vector3<f>"
/* 80198514 00195454  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80198518 00195458  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 8019851C 0019545C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80198520 00195460  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80198524 00195464  EC 22 08 28 */	fsubs f1, f2, f1
/* 80198528 00195468  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 8019852C 0019546C  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 80198530 00195470  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80198534 00195474  40 80 00 30 */	bge .L_80198564
/* 80198538 00195478  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8019853C 0019547C  38 81 00 68 */	addi r4, r1, 0x68
/* 80198540 00195480  81 83 00 00 */	lwz r12, 0(r3)
/* 80198544 00195484  81 8C 01 70 */	lwz r12, 0x170(r12)
/* 80198548 00195488  7D 89 03 A6 */	mtctr r12
/* 8019854C 0019548C  4E 80 04 21 */	bctrl 
/* 80198550 00195490  B0 7F 00 10 */	sth r3, 0x10(r31)
/* 80198554 00195494  38 00 00 00 */	li r0, 0
/* 80198558 00195498  C0 02 AC 28 */	lfs f0, lbl_80518F88@sda21(r2)
/* 8019855C 0019549C  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80198560 001954A0  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_80198564:
/* 80198564 001954A4  38 60 00 01 */	li r3, 1
/* 80198568 001954A8  48 00 00 18 */	b .L_80198580
.L_8019856C:
/* 8019856C 001954AC  80 7F 00 04 */	lwz r3, 4(r31)
/* 80198570 001954B0  38 81 00 5C */	addi r4, r1, 0x5c
/* 80198574 001954B4  C0 22 AC 24 */	lfs f1, lbl_80518F84@sda21(r2)
/* 80198578 001954B8  4B FB 0A A1 */	bl "setSpeed__Q24Game4PikiFfR10Vector3<f>"
/* 8019857C 001954BC  38 60 00 01 */	li r3, 1
.L_80198580:
/* 80198580 001954C0  E3 E1 01 28 */	psq_l f31, 296(r1), 0, qr0
/* 80198584 001954C4  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 80198588 001954C8  E3 C1 01 18 */	psq_l f30, 280(r1), 0, qr0
/* 8019858C 001954CC  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 80198590 001954D0  E3 A1 01 08 */	psq_l f29, 264(r1), 0, qr0
/* 80198594 001954D4  CB A1 01 00 */	lfd f29, 0x100(r1)
/* 80198598 001954D8  E3 81 00 F8 */	psq_l f28, 248(r1), 0, qr0
/* 8019859C 001954DC  CB 81 00 F0 */	lfd f28, 0xf0(r1)
/* 801985A0 001954E0  E3 61 00 E8 */	psq_l f27, 232(r1), 0, qr0
/* 801985A4 001954E4  CB 61 00 E0 */	lfd f27, 0xe0(r1)
/* 801985A8 001954E8  E3 41 00 D8 */	psq_l f26, 216(r1), 0, qr0
/* 801985AC 001954EC  CB 41 00 D0 */	lfd f26, 0xd0(r1)
/* 801985B0 001954F0  E3 21 00 C8 */	psq_l f25, 200(r1), 0, qr0
/* 801985B4 001954F4  CB 21 00 C0 */	lfd f25, 0xc0(r1)
/* 801985B8 001954F8  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 801985BC 001954FC  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 801985C0 00195500  80 01 01 34 */	lwz r0, 0x134(r1)
/* 801985C4 00195504  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 801985C8 00195508  7C 08 03 A6 */	mtlr r0
/* 801985CC 0019550C  38 21 01 30 */	addi r1, r1, 0x130
/* 801985D0 00195510  4E 80 00 20 */	blr 
.endfn exec__Q26PikiAI11ActGotoSlotFv

.fn cleanup__Q26PikiAI11ActGotoSlotFv, global
/* 801985D4 00195514  4E 80 00 20 */	blr 
.endfn cleanup__Q26PikiAI11ActGotoSlotFv

.fn __ct__Q26PikiAI11ActPathMoveFPQ24Game4Piki, global
/* 801985D8 00195518  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801985DC 0019551C  7C 08 02 A6 */	mflr r0
/* 801985E0 00195520  90 01 00 14 */	stw r0, 0x14(r1)
/* 801985E4 00195524  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801985E8 00195528  7C 7F 1B 78 */	mr r31, r3
/* 801985EC 0019552C  4B FF E4 2D */	bl __ct__Q26PikiAI6ActionFPQ24Game4Piki
/* 801985F0 00195530  3C 60 80 4B */	lis r3, __vt__Q26PikiAI11ActPathMove@ha
/* 801985F4 00195534  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 801985F8 00195538  38 03 4B FC */	addi r0, r3, __vt__Q26PikiAI11ActPathMove@l
/* 801985FC 0019553C  38 A0 00 00 */	li r5, 0
/* 80198600 00195540  90 1F 00 00 */	stw r0, 0(r31)
/* 80198604 00195544  38 7F 00 74 */	addi r3, r31, 0x74
/* 80198608 00195548  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 8019860C 0019554C  38 C0 00 0C */	li r6, 0xc
/* 80198610 00195550  38 E0 00 04 */	li r7, 4
/* 80198614 00195554  4B F2 92 29 */	bl __construct_array
/* 80198618 00195558  38 60 00 0A */	li r3, 0xa
/* 8019861C 0019555C  4B E8 B8 89 */	bl __nw__FUl
/* 80198620 00195560  28 03 00 00 */	cmplwi r3, 0
/* 80198624 00195564  41 82 00 0C */	beq .L_80198630
/* 80198628 00195568  38 00 00 00 */	li r0, 0
/* 8019862C 0019556C  B0 03 00 08 */	sth r0, 8(r3)
.L_80198630:
/* 80198630 00195570  90 7F 00 0C */	stw r3, 0xc(r31)
/* 80198634 00195574  38 00 FF FF */	li r0, -1
/* 80198638 00195578  7F E3 FB 78 */	mr r3, r31
/* 8019863C 0019557C  B0 1F 00 1C */	sth r0, 0x1c(r31)
/* 80198640 00195580  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80198644 00195584  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80198648 00195588  7C 08 03 A6 */	mtlr r0
/* 8019864C 0019558C  38 21 00 10 */	addi r1, r1, 0x10
/* 80198650 00195590  4E 80 00 20 */	blr 
.endfn __ct__Q26PikiAI11ActPathMoveFPQ24Game4Piki

.fn init__Q26PikiAI11ActPathMoveFPQ26PikiAI9ActionArg, global
/* 80198654 00195594  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80198658 00195598  7C 08 02 A6 */	mflr r0
/* 8019865C 0019559C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80198660 001955A0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80198664 001955A4  7C 7F 1B 78 */	mr r31, r3
/* 80198668 001955A8  3C 60 80 48 */	lis r3, lbl_8047F070@ha
/* 8019866C 001955AC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80198670 001955B0  3B C3 F0 70 */	addi r30, r3, lbl_8047F070@l
/* 80198674 001955B4  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80198678 001955B8  3B A0 00 00 */	li r29, 0
/* 8019867C 001955BC  93 81 00 20 */	stw r28, 0x20(r1)
/* 80198680 001955C0  7C 9C 23 79 */	or. r28, r4, r4
/* 80198684 001955C4  9B BF 00 3D */	stb r29, 0x3d(r31)
/* 80198688 001955C8  41 82 00 34 */	beq .L_801986BC
/* 8019868C 001955CC  7F 83 E3 78 */	mr r3, r28
/* 80198690 001955D0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80198694 001955D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80198698 001955D8  7D 89 03 A6 */	mtctr r12
/* 8019869C 001955DC  4E 80 04 21 */	bctrl 
/* 801986A0 001955E0  7C 64 1B 78 */	mr r4, r3
/* 801986A4 001955E4  38 7E 00 6C */	addi r3, r30, 0x6c
/* 801986A8 001955E8  4B F3 20 19 */	bl strcmp
/* 801986AC 001955EC  7C 60 00 34 */	cntlzw r0, r3
/* 801986B0 001955F0  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 801986B4 001955F4  41 82 00 08 */	beq .L_801986BC
/* 801986B8 001955F8  3B A0 00 01 */	li r29, 1
.L_801986BC:
/* 801986BC 001955FC  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 801986C0 00195600  40 82 00 18 */	bne .L_801986D8
/* 801986C4 00195604  38 7E 00 34 */	addi r3, r30, 0x34
/* 801986C8 00195608  38 BE 00 48 */	addi r5, r30, 0x48
/* 801986CC 0019560C  38 80 03 16 */	li r4, 0x316
/* 801986D0 00195610  4C C6 31 82 */	crclr 6
/* 801986D4 00195614  4B E9 1F 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801986D8:
/* 801986D8 00195618  38 00 00 00 */	li r0, 0
/* 801986DC 0019561C  90 1F 00 34 */	stw r0, 0x34(r31)
/* 801986E0 00195620  80 1C 00 04 */	lwz r0, 4(r28)
/* 801986E4 00195624  90 1F 00 30 */	stw r0, 0x30(r31)
/* 801986E8 00195628  80 7C 00 18 */	lwz r3, 0x18(r28)
/* 801986EC 0019562C  7C 03 00 D0 */	neg r0, r3
/* 801986F0 00195630  7C 00 18 78 */	andc r0, r0, r3
/* 801986F4 00195634  54 00 0F FE */	srwi r0, r0, 0x1f
/* 801986F8 00195638  98 1F 00 3C */	stb r0, 0x3c(r31)
/* 801986FC 0019563C  88 1F 00 3C */	lbz r0, 0x3c(r31)
/* 80198700 00195640  28 00 00 00 */	cmplwi r0, 0
/* 80198704 00195644  41 82 00 28 */	beq .L_8019872C
/* 80198708 00195648  80 7C 00 18 */	lwz r3, 0x18(r28)
/* 8019870C 0019564C  3C 00 43 30 */	lis r0, 0x4330
/* 80198710 00195650  90 01 00 18 */	stw r0, 0x18(r1)
/* 80198714 00195654  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80198718 00195658  C8 22 AC 48 */	lfd f1, lbl_80518FA8@sda21(r2)
/* 8019871C 0019565C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80198720 00195660  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80198724 00195664  EC 00 08 28 */	fsubs f0, f0, f1
/* 80198728 00195668  D0 1F 00 38 */	stfs f0, 0x38(r31)
.L_8019872C:
/* 8019872C 0019566C  38 00 00 00 */	li r0, 0
/* 80198730 00195670  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80198734 00195674  90 1F 00 20 */	stw r0, 0x20(r31)
/* 80198738 00195678  7F E3 FB 78 */	mr r3, r31
/* 8019873C 0019567C  38 80 00 01 */	li r4, 1
/* 80198740 00195680  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 80198744 00195684  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 80198748 00195688  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
/* 8019874C 0019568C  48 00 00 C5 */	bl initPathfinding__Q26PikiAI11ActPathMoveFb
/* 80198750 00195690  38 00 00 01 */	li r0, 1
/* 80198754 00195694  38 61 00 08 */	addi r3, r1, 8
/* 80198758 00195698  98 1F 00 6C */	stb r0, 0x6c(r31)
/* 8019875C 0019569C  80 9F 00 30 */	lwz r4, 0x30(r31)
/* 80198760 001956A0  81 84 00 00 */	lwz r12, 0(r4)
/* 80198764 001956A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80198768 001956A8  7D 89 03 A6 */	mtctr r12
/* 8019876C 001956AC  4E 80 04 21 */	bctrl 
/* 80198770 001956B0  C0 01 00 08 */	lfs f0, 8(r1)
/* 80198774 001956B4  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80198778 001956B8  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8019877C 001956BC  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 80198780 001956C0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80198784 001956C4  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80198788 001956C8  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8019878C 001956CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80198790 001956D0  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80198794 001956D4  7D 89 03 A6 */	mtctr r12
/* 80198798 001956D8  4E 80 04 21 */	bctrl 
/* 8019879C 001956DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801987A0 001956E0  41 82 00 50 */	beq .L_801987F0
/* 801987A4 001956E4  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 801987A8 001956E8  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 801987AC 001956EC  38 84 41 E4 */	addi r4, r4, "zero__10Vector3<f>"@l
/* 801987B0 001956F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801987B4 001956F4  7C 7D 1B 78 */	mr r29, r3
/* 801987B8 001956F8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801987BC 001956FC  7D 89 03 A6 */	mtctr r12
/* 801987C0 00195700  4E 80 04 21 */	bctrl 
/* 801987C4 00195704  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 801987C8 00195708  7F A3 EB 78 */	mr r3, r29
/* 801987CC 0019570C  D0 1D 01 C8 */	stfs f0, 0x1c8(r29)
/* 801987D0 00195710  D0 1D 01 CC */	stfs f0, 0x1cc(r29)
/* 801987D4 00195714  D0 1D 01 D0 */	stfs f0, 0x1d0(r29)
/* 801987D8 00195718  4B FD 1C D1 */	bl getSpeicalSlot__Q24Game6PelletFv
/* 801987DC 0019571C  7C 60 07 34 */	extsh r0, r3
/* 801987E0 00195720  2C 00 FF FF */	cmpwi r0, -1
/* 801987E4 00195724  40 82 00 0C */	bne .L_801987F0
/* 801987E8 00195728  80 7D 03 34 */	lwz r3, 0x334(r29)
/* 801987EC 0019572C  48 09 C7 3D */	bl reset__Q24Game11PelletCarryFv
.L_801987F0:
/* 801987F0 00195730  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801987F4 00195734  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801987F8 00195738  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801987FC 0019573C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80198800 00195740  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80198804 00195744  7C 08 03 A6 */	mtlr r0
/* 80198808 00195748  38 21 00 30 */	addi r1, r1, 0x30
/* 8019880C 0019574C  4E 80 00 20 */	blr 
.endfn init__Q26PikiAI11ActPathMoveFPQ26PikiAI9ActionArg

.fn initPathfinding__Q26PikiAI11ActPathMoveFb, global
/* 80198810 00195750  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80198814 00195754  7C 08 02 A6 */	mflr r0
/* 80198818 00195758  90 01 00 84 */	stw r0, 0x84(r1)
/* 8019881C 0019575C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80198820 00195760  3C 80 80 48 */	lis r4, lbl_8047F070@ha
/* 80198824 00195764  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80198828 00195768  3B E4 F0 70 */	addi r31, r4, lbl_8047F070@l
/* 8019882C 0019576C  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80198830 00195770  7C 7E 1B 78 */	mr r30, r3
/* 80198834 00195774  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80198838 00195778  41 82 00 10 */	beq .L_80198848
/* 8019883C 0019577C  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80198840 00195780  38 00 00 00 */	li r0, 0
/* 80198844 00195784  B0 03 00 08 */	sth r0, 8(r3)
.L_80198848:
/* 80198848 00195788  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 8019884C 0019578C  81 83 00 00 */	lwz r12, 0(r3)
/* 80198850 00195790  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80198854 00195794  7D 89 03 A6 */	mtctr r12
/* 80198858 00195798  4E 80 04 21 */	bctrl 
/* 8019885C 0019579C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80198860 001957A0  41 82 00 50 */	beq .L_801988B0
/* 80198864 001957A4  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 80198868 001957A8  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 8019886C 001957AC  38 84 41 E4 */	addi r4, r4, "zero__10Vector3<f>"@l
/* 80198870 001957B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80198874 001957B4  7C 7D 1B 78 */	mr r29, r3
/* 80198878 001957B8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8019887C 001957BC  7D 89 03 A6 */	mtctr r12
/* 80198880 001957C0  4E 80 04 21 */	bctrl 
/* 80198884 001957C4  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80198888 001957C8  7F A3 EB 78 */	mr r3, r29
/* 8019888C 001957CC  D0 1D 01 C8 */	stfs f0, 0x1c8(r29)
/* 80198890 001957D0  D0 1D 01 CC */	stfs f0, 0x1cc(r29)
/* 80198894 001957D4  D0 1D 01 D0 */	stfs f0, 0x1d0(r29)
/* 80198898 001957D8  4B FD 1C 11 */	bl getSpeicalSlot__Q24Game6PelletFv
/* 8019889C 001957DC  7C 60 07 34 */	extsh r0, r3
/* 801988A0 001957E0  2C 00 FF FF */	cmpwi r0, -1
/* 801988A4 001957E4  40 82 00 0C */	bne .L_801988B0
/* 801988A8 001957E8  80 7D 03 34 */	lwz r3, 0x334(r29)
/* 801988AC 001957EC  48 09 C6 7D */	bl reset__Q24Game11PelletCarryFv
.L_801988B0:
/* 801988B0 001957F0  80 9E 00 30 */	lwz r4, 0x30(r30)
/* 801988B4 001957F4  38 61 00 1C */	addi r3, r1, 0x1c
/* 801988B8 001957F8  81 84 00 00 */	lwz r12, 0(r4)
/* 801988BC 001957FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801988C0 00195800  7D 89 03 A6 */	mtctr r12
/* 801988C4 00195804  4E 80 04 21 */	bctrl 
/* 801988C8 00195808  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 801988CC 0019580C  38 80 00 00 */	li r4, 0
/* 801988D0 00195810  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 801988D4 00195814  38 00 FF FF */	li r0, -1
/* 801988D8 00195818  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 801988DC 0019581C  90 81 00 60 */	stw r4, 0x60(r1)
/* 801988E0 00195820  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801988E4 00195824  90 81 00 5C */	stw r4, 0x5c(r1)
/* 801988E8 00195828  98 81 00 50 */	stb r4, 0x50(r1)
/* 801988EC 0019582C  B0 01 00 58 */	sth r0, 0x58(r1)
/* 801988F0 00195830  90 81 00 54 */	stw r4, 0x54(r1)
/* 801988F4 00195834  D0 61 00 44 */	stfs f3, 0x44(r1)
/* 801988F8 00195838  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 801988FC 0019583C  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 80198900 00195840  88 03 00 48 */	lbz r0, 0x48(r3)
/* 80198904 00195844  80 7E 00 04 */	lwz r3, 4(r30)
/* 80198908 00195848  28 00 00 00 */	cmplwi r0, 0
/* 8019890C 0019584C  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 80198910 00195850  A8 63 01 8C */	lha r3, 0x18c(r3)
/* 80198914 00195854  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 80198918 00195858  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8019891C 0019585C  41 82 00 48 */	beq .L_80198964
/* 80198920 00195860  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 80198924 00195864  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 80198928 00195868  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8019892C 0019586C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80198930 00195870  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80198934 00195874  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 80198938 00195878  81 83 00 00 */	lwz r12, 0(r3)
/* 8019893C 0019587C  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80198940 00195880  7D 89 03 A6 */	mtctr r12
/* 80198944 00195884  4E 80 04 21 */	bctrl 
/* 80198948 00195888  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019894C 0019588C  41 82 00 0C */	beq .L_80198958
/* 80198950 00195890  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 80198954 00195894  D0 01 00 34 */	stfs f0, 0x34(r1)
.L_80198958:
/* 80198958 00195898  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019895C 0019589C  38 81 00 28 */	addi r4, r1, 0x28
/* 80198960 001958A0  48 02 16 D5 */	bl findRoomIndex__Q24Game10RoomMapMgrFRQ23Sys6Sphere
.L_80198964:
/* 80198964 001958A4  B0 61 00 58 */	sth r3, 0x58(r1)
/* 80198968 001958A8  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 8019896C 001958AC  90 01 00 54 */	stw r0, 0x54(r1)
/* 80198970 001958B0  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 80198974 001958B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80198978 001958B8  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 8019897C 001958BC  7D 89 03 A6 */	mtctr r12
/* 80198980 001958C0  4E 80 04 21 */	bctrl 
/* 80198984 001958C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80198988 001958C8  41 82 00 0C */	beq .L_80198994
/* 8019898C 001958CC  38 00 00 01 */	li r0, 1
/* 80198990 001958D0  98 01 00 50 */	stb r0, 0x50(r1)
.L_80198994:
/* 80198994 001958D4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80198998 001958D8  38 81 00 44 */	addi r4, r1, 0x44
/* 8019899C 001958DC  3B A0 00 00 */	li r29, 0
/* 801989A0 001958E0  80 63 00 08 */	lwz r3, 8(r3)
/* 801989A4 001958E4  4B FD A9 C9 */	bl getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
/* 801989A8 001958E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801989AC 001958EC  41 82 00 24 */	beq .L_801989D0
/* 801989B0 001958F0  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 801989B4 001958F4  88 03 00 34 */	lbz r0, 0x34(r3)
/* 801989B8 001958F8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801989BC 001958FC  40 82 00 0C */	bne .L_801989C8
/* 801989C0 00195900  7C 7D 1B 78 */	mr r29, r3
/* 801989C4 00195904  48 00 00 60 */	b .L_80198A24
.L_801989C8:
/* 801989C8 00195908  83 A1 00 60 */	lwz r29, 0x60(r1)
/* 801989CC 0019590C  48 00 00 58 */	b .L_80198A24
.L_801989D0:
/* 801989D0 00195910  38 00 00 00 */	li r0, 0
/* 801989D4 00195914  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801989D8 00195918  90 01 00 54 */	stw r0, 0x54(r1)
/* 801989DC 0019591C  38 81 00 44 */	addi r4, r1, 0x44
/* 801989E0 00195920  80 63 00 08 */	lwz r3, 8(r3)
/* 801989E4 00195924  4B FD A9 89 */	bl getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
/* 801989E8 00195928  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801989EC 0019592C  41 82 00 24 */	beq .L_80198A10
/* 801989F0 00195930  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 801989F4 00195934  88 03 00 34 */	lbz r0, 0x34(r3)
/* 801989F8 00195938  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801989FC 0019593C  41 82 00 0C */	beq .L_80198A08
/* 80198A00 00195940  83 A1 00 60 */	lwz r29, 0x60(r1)
/* 80198A04 00195944  48 00 00 20 */	b .L_80198A24
.L_80198A08:
/* 80198A08 00195948  7C 7D 1B 78 */	mr r29, r3
/* 80198A0C 0019594C  48 00 00 18 */	b .L_80198A24
.L_80198A10:
/* 80198A10 00195950  38 7F 00 34 */	addi r3, r31, 0x34
/* 80198A14 00195954  38 BF 00 78 */	addi r5, r31, 0x78
/* 80198A18 00195958  38 80 03 9D */	li r4, 0x39d
/* 80198A1C 0019595C  4C C6 31 82 */	crclr 6
/* 80198A20 00195960  4B E9 1C 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80198A24:
/* 80198A24 00195964  28 1D 00 00 */	cmplwi r29, 0
/* 80198A28 00195968  40 82 00 18 */	bne .L_80198A40
/* 80198A2C 0019596C  38 7F 00 34 */	addi r3, r31, 0x34
/* 80198A30 00195970  38 BF 00 84 */	addi r5, r31, 0x84
/* 80198A34 00195974  38 80 03 A1 */	li r4, 0x3a1
/* 80198A38 00195978  4C C6 31 82 */	crclr 6
/* 80198A3C 0019597C  4B E9 1C 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80198A40:
/* 80198A40 00195980  A8 1D 00 36 */	lha r0, 0x36(r29)
/* 80198A44 00195984  7F C3 F3 78 */	mr r3, r30
/* 80198A48 00195988  B0 1E 00 1C */	sth r0, 0x1c(r30)
/* 80198A4C 0019598C  A8 1D 00 36 */	lha r0, 0x36(r29)
/* 80198A50 00195990  B0 1E 00 54 */	sth r0, 0x54(r30)
/* 80198A54 00195994  48 00 01 69 */	bl decideGoal__Q26PikiAI11ActPathMoveFv
/* 80198A58 00195998  7C 7D 1B 79 */	or. r29, r3, r3
/* 80198A5C 0019599C  40 82 00 18 */	bne .L_80198A74
/* 80198A60 001959A0  38 7F 00 34 */	addi r3, r31, 0x34
/* 80198A64 001959A4  38 BF 00 90 */	addi r5, r31, 0x90
/* 80198A68 001959A8  38 80 03 A9 */	li r4, 0x3a9
/* 80198A6C 001959AC  4C C6 31 82 */	crclr 6
/* 80198A70 001959B0  4B E9 1B D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80198A74:
/* 80198A74 001959B4  28 1D 00 00 */	cmplwi r29, 0
/* 80198A78 001959B8  41 82 00 2C */	beq .L_80198AA4
/* 80198A7C 001959BC  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 80198A80 001959C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80198A84 001959C4  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80198A88 001959C8  7D 89 03 A6 */	mtctr r12
/* 80198A8C 001959CC  4E 80 04 21 */	bctrl 
/* 80198A90 001959D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80198A94 001959D4  41 82 00 10 */	beq .L_80198AA4
/* 80198A98 001959D8  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 80198A9C 001959DC  A0 9D 02 2E */	lhz r4, 0x22e(r29)
/* 80198AA0 001959E0  4B FC F4 29 */	bl setCarryColor__Q24Game6PelletFi
.L_80198AA4:
/* 80198AA4 001959E4  80 1E 00 34 */	lwz r0, 0x34(r30)
/* 80198AA8 001959E8  7C 1D 00 40 */	cmplw r29, r0
/* 80198AAC 001959EC  41 82 00 F4 */	beq .L_80198BA0
/* 80198AB0 001959F0  80 BD 02 3C */	lwz r5, 0x23c(r29)
/* 80198AB4 001959F4  7F A4 EB 78 */	mr r4, r29
/* 80198AB8 001959F8  38 61 00 10 */	addi r3, r1, 0x10
/* 80198ABC 001959FC  A8 05 00 36 */	lha r0, 0x36(r5)
/* 80198AC0 00195A00  B0 1E 00 56 */	sth r0, 0x56(r30)
/* 80198AC4 00195A04  81 9D 00 00 */	lwz r12, 0(r29)
/* 80198AC8 00195A08  81 8C 01 98 */	lwz r12, 0x198(r12)
/* 80198ACC 00195A0C  7D 89 03 A6 */	mtctr r12
/* 80198AD0 00195A10  4E 80 04 21 */	bctrl 
/* 80198AD4 00195A14  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80198AD8 00195A18  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 80198ADC 00195A1C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80198AE0 00195A20  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 80198AE4 00195A24  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80198AE8 00195A28  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 80198AEC 00195A2C  93 BE 00 34 */	stw r29, 0x34(r30)
/* 80198AF0 00195A30  80 9E 00 20 */	lwz r4, 0x20(r30)
/* 80198AF4 00195A34  28 04 00 00 */	cmplwi r4, 0
/* 80198AF8 00195A38  41 82 00 0C */	beq .L_80198B04
/* 80198AFC 00195A3C  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80198B00 00195A40  48 00 AF 61 */	bl release__Q24Game10PathfinderFUl
.L_80198B04:
/* 80198B04 00195A44  38 00 00 00 */	li r0, 0
/* 80198B08 00195A48  7F C3 F3 78 */	mr r3, r30
/* 80198B0C 00195A4C  B0 1E 00 1E */	sth r0, 0x1e(r30)
/* 80198B10 00195A50  3B A0 00 01 */	li r29, 1
/* 80198B14 00195A54  48 00 0B 79 */	bl isAllBlue__Q26PikiAI11ActPathMoveFv
/* 80198B18 00195A58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80198B1C 00195A5C  41 82 00 0C */	beq .L_80198B28
/* 80198B20 00195A60  63 A0 00 02 */	ori r0, r29, 2
/* 80198B24 00195A64  54 1D 06 3E */	clrlwi r29, r0, 0x18
.L_80198B28:
/* 80198B28 00195A68  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80198B2C 00195A6C  63 A0 00 04 */	ori r0, r29, 4
/* 80198B30 00195A70  54 1D 06 3E */	clrlwi r29, r0, 0x18
/* 80198B34 00195A74  28 03 00 00 */	cmplwi r3, 0
/* 80198B38 00195A78  41 82 00 34 */	beq .L_80198B6C
/* 80198B3C 00195A7C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80198B40 00195A80  2C 00 00 01 */	cmpwi r0, 1
/* 80198B44 00195A84  40 82 00 28 */	bne .L_80198B6C
/* 80198B48 00195A88  80 7E 00 34 */	lwz r3, 0x34(r30)
/* 80198B4C 00195A8C  A0 03 02 2E */	lhz r0, 0x22e(r3)
/* 80198B50 00195A90  28 00 00 00 */	cmplwi r0, 0
/* 80198B54 00195A94  40 82 00 10 */	bne .L_80198B64
/* 80198B58 00195A98  63 A0 00 60 */	ori r0, r29, 0x60
/* 80198B5C 00195A9C  54 1D 06 3E */	clrlwi r29, r0, 0x18
/* 80198B60 00195AA0  48 00 00 0C */	b .L_80198B6C
.L_80198B64:
/* 80198B64 00195AA4  63 A0 00 50 */	ori r0, r29, 0x50
/* 80198B68 00195AA8  54 1D 06 3E */	clrlwi r29, r0, 0x18
.L_80198B6C:
/* 80198B6C 00195AAC  A8 BE 00 56 */	lha r5, 0x56(r30)
/* 80198B70 00195AB0  38 81 00 08 */	addi r4, r1, 8
/* 80198B74 00195AB4  A8 1E 00 54 */	lha r0, 0x54(r30)
/* 80198B78 00195AB8  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80198B7C 00195ABC  B0 01 00 08 */	sth r0, 8(r1)
/* 80198B80 00195AC0  B0 A1 00 0A */	sth r5, 0xa(r1)
/* 80198B84 00195AC4  9B A1 00 0C */	stb r29, 0xc(r1)
/* 80198B88 00195AC8  48 00 AC CD */	bl start__Q24Game10PathfinderFRQ24Game15PathfindRequest
/* 80198B8C 00195ACC  90 7E 00 20 */	stw r3, 0x20(r30)
/* 80198B90 00195AD0  38 00 00 00 */	li r0, 0
/* 80198B94 00195AD4  90 1E 00 50 */	stw r0, 0x50(r30)
/* 80198B98 00195AD8  90 1E 00 40 */	stw r0, 0x40(r30)
/* 80198B9C 00195ADC  90 1E 00 48 */	stw r0, 0x48(r30)
.L_80198BA0:
/* 80198BA0 00195AE0  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80198BA4 00195AE4  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80198BA8 00195AE8  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80198BAC 00195AEC  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80198BB0 00195AF0  7C 08 03 A6 */	mtlr r0
/* 80198BB4 00195AF4  38 21 00 80 */	addi r1, r1, 0x80
/* 80198BB8 00195AF8  4E 80 00 20 */	blr 
.endfn initPathfinding__Q26PikiAI11ActPathMoveFb

.fn decideGoal__Q26PikiAI11ActPathMoveFv, global
/* 80198BBC 00195AFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80198BC0 00195B00  7C 08 02 A6 */	mflr r0
/* 80198BC4 00195B04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80198BC8 00195B08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80198BCC 00195B0C  7C 7F 1B 78 */	mr r31, r3
/* 80198BD0 00195B10  80 63 00 30 */	lwz r3, 0x30(r3)
/* 80198BD4 00195B14  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 80198BD8 00195B18  28 00 04 01 */	cmplwi r0, 0x401
/* 80198BDC 00195B1C  41 82 00 20 */	beq .L_80198BFC
/* 80198BE0 00195B20  3C 60 80 48 */	lis r3, lbl_8047F0A4@ha
/* 80198BE4 00195B24  3C A0 80 48 */	lis r5, lbl_8047F0B8@ha
/* 80198BE8 00195B28  38 63 F0 A4 */	addi r3, r3, lbl_8047F0A4@l
/* 80198BEC 00195B2C  38 80 03 E6 */	li r4, 0x3e6
/* 80198BF0 00195B30  38 A5 F0 B8 */	addi r5, r5, lbl_8047F0B8@l
/* 80198BF4 00195B34  4C C6 31 82 */	crclr 6
/* 80198BF8 00195B38  4B E9 1A 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80198BFC:
/* 80198BFC 00195B3C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 80198C00 00195B40  4B FD 1B 29 */	bl getPelletGoal__Q24Game6PelletFv
/* 80198C04 00195B44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80198C08 00195B48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80198C0C 00195B4C  7C 08 03 A6 */	mtlr r0
/* 80198C10 00195B50  38 21 00 10 */	addi r1, r1, 0x10
/* 80198C14 00195B54  4E 80 00 20 */	blr 
.endfn decideGoal__Q26PikiAI11ActPathMoveFv

.fn exec__Q26PikiAI11ActPathMoveFv, global
/* 80198C18 00195B58  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80198C1C 00195B5C  7C 08 02 A6 */	mflr r0
/* 80198C20 00195B60  90 01 00 24 */	stw r0, 0x24(r1)
/* 80198C24 00195B64  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80198C28 00195B68  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80198C2C 00195B6C  7C 7E 1B 78 */	mr r30, r3
/* 80198C30 00195B70  88 03 00 6C */	lbz r0, 0x6c(r3)
/* 80198C34 00195B74  28 00 00 00 */	cmplwi r0, 0
/* 80198C38 00195B78  40 82 00 94 */	bne .L_80198CCC
/* 80198C3C 00195B7C  83 FE 00 30 */	lwz r31, 0x30(r30)
/* 80198C40 00195B80  7F E3 FB 78 */	mr r3, r31
/* 80198C44 00195B84  4B FD 1D 2D */	bl getTotalCarryPikmins__Q24Game6PelletFv
/* 80198C48 00195B88  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80198C4C 00195B8C  3C 00 43 30 */	lis r0, 0x4330
/* 80198C50 00195B90  90 61 00 0C */	stw r3, 0xc(r1)
/* 80198C54 00195B94  38 80 00 00 */	li r4, 0
/* 80198C58 00195B98  C8 22 AC 48 */	lfd f1, lbl_80518FA8@sda21(r2)
/* 80198C5C 00195B9C  90 01 00 08 */	stw r0, 8(r1)
/* 80198C60 00195BA0  80 7F 03 34 */	lwz r3, 0x334(r31)
/* 80198C64 00195BA4  C8 01 00 08 */	lfd f0, 8(r1)
/* 80198C68 00195BA8  EC 20 08 28 */	fsubs f1, f0, f1
/* 80198C6C 00195BAC  48 09 C3 69 */	bl pullable__Q24Game11PelletCarryFUsf
/* 80198C70 00195BB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80198C74 00195BB4  41 82 00 50 */	beq .L_80198CC4
/* 80198C78 00195BB8  7F E3 FB 78 */	mr r3, r31
/* 80198C7C 00195BBC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80198C80 00195BC0  81 8C 01 48 */	lwz r12, 0x148(r12)
/* 80198C84 00195BC4  7D 89 03 A6 */	mtctr r12
/* 80198C88 00195BC8  4E 80 04 21 */	bctrl 
/* 80198C8C 00195BCC  80 9E 00 20 */	lwz r4, 0x20(r30)
/* 80198C90 00195BD0  28 04 00 00 */	cmplwi r4, 0
/* 80198C94 00195BD4  41 82 00 14 */	beq .L_80198CA8
/* 80198C98 00195BD8  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80198C9C 00195BDC  48 00 AD C5 */	bl release__Q24Game10PathfinderFUl
/* 80198CA0 00195BE0  38 00 00 00 */	li r0, 0
/* 80198CA4 00195BE4  90 1E 00 20 */	stw r0, 0x20(r30)
.L_80198CA8:
/* 80198CA8 00195BE8  38 60 00 01 */	li r3, 1
/* 80198CAC 00195BEC  38 00 00 00 */	li r0, 0
/* 80198CB0 00195BF0  98 7E 00 6C */	stb r3, 0x6c(r30)
/* 80198CB4 00195BF4  7F C3 F3 78 */	mr r3, r30
/* 80198CB8 00195BF8  38 80 00 01 */	li r4, 1
/* 80198CBC 00195BFC  90 1E 00 34 */	stw r0, 0x34(r30)
/* 80198CC0 00195C00  4B FF FB 51 */	bl initPathfinding__Q26PikiAI11ActPathMoveFb
.L_80198CC4:
/* 80198CC4 00195C04  38 60 00 01 */	li r3, 1
/* 80198CC8 00195C08  48 00 00 54 */	b .L_80198D1C
.L_80198CCC:
/* 80198CCC 00195C0C  A0 1E 00 1E */	lhz r0, 0x1e(r30)
/* 80198CD0 00195C10  2C 00 00 02 */	cmpwi r0, 2
/* 80198CD4 00195C14  41 82 00 34 */	beq .L_80198D08
/* 80198CD8 00195C18  40 80 00 14 */	bge .L_80198CEC
/* 80198CDC 00195C1C  2C 00 00 00 */	cmpwi r0, 0
/* 80198CE0 00195C20  41 82 00 18 */	beq .L_80198CF8
/* 80198CE4 00195C24  40 80 00 1C */	bge .L_80198D00
/* 80198CE8 00195C28  48 00 00 30 */	b .L_80198D18
.L_80198CEC:
/* 80198CEC 00195C2C  2C 00 00 04 */	cmpwi r0, 4
/* 80198CF0 00195C30  40 80 00 28 */	bge .L_80198D18
/* 80198CF4 00195C34  48 00 00 1C */	b .L_80198D10
.L_80198CF8:
/* 80198CF8 00195C38  48 00 00 3D */	bl execPathfinding__Q26PikiAI11ActPathMoveFv
/* 80198CFC 00195C3C  48 00 00 20 */	b .L_80198D1C
.L_80198D00:
/* 80198D00 00195C40  48 00 0A D1 */	bl execMove__Q26PikiAI11ActPathMoveFv
/* 80198D04 00195C44  48 00 00 18 */	b .L_80198D1C
.L_80198D08:
/* 80198D08 00195C48  48 00 02 DD */	bl execMoveGoal__Q26PikiAI11ActPathMoveFv
/* 80198D0C 00195C4C  48 00 00 10 */	b .L_80198D1C
.L_80198D10:
/* 80198D10 00195C50  48 00 0F 79 */	bl execMoveGuru__Q26PikiAI11ActPathMoveFv
/* 80198D14 00195C54  48 00 00 08 */	b .L_80198D1C
.L_80198D18:
/* 80198D18 00195C58  38 60 00 01 */	li r3, 1
.L_80198D1C:
/* 80198D1C 00195C5C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80198D20 00195C60  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80198D24 00195C64  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80198D28 00195C68  7C 08 03 A6 */	mtlr r0
/* 80198D2C 00195C6C  38 21 00 20 */	addi r1, r1, 0x20
/* 80198D30 00195C70  4E 80 00 20 */	blr 
.endfn exec__Q26PikiAI11ActPathMoveFv

.fn execPathfinding__Q26PikiAI11ActPathMoveFv, global
/* 80198D34 00195C74  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 80198D38 00195C78  7C 08 02 A6 */	mflr r0
/* 80198D3C 00195C7C  90 01 01 34 */	stw r0, 0x134(r1)
/* 80198D40 00195C80  93 E1 01 2C */	stw r31, 0x12c(r1)
/* 80198D44 00195C84  93 C1 01 28 */	stw r30, 0x128(r1)
/* 80198D48 00195C88  7C 7E 1B 78 */	mr r30, r3
/* 80198D4C 00195C8C  3C 60 80 48 */	lis r3, lbl_8047F070@ha
/* 80198D50 00195C90  93 A1 01 24 */	stw r29, 0x124(r1)
/* 80198D54 00195C94  3B E3 F0 70 */	addi r31, r3, lbl_8047F070@l
/* 80198D58 00195C98  83 BE 00 30 */	lwz r29, 0x30(r30)
/* 80198D5C 00195C9C  28 1D 00 00 */	cmplwi r29, 0
/* 80198D60 00195CA0  41 82 00 3C */	beq .L_80198D9C
/* 80198D64 00195CA4  7F A3 EB 78 */	mr r3, r29
/* 80198D68 00195CA8  4B FD 1C 09 */	bl getTotalCarryPikmins__Q24Game6PelletFv
/* 80198D6C 00195CAC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80198D70 00195CB0  3C 00 43 30 */	lis r0, 0x4330
/* 80198D74 00195CB4  90 61 01 14 */	stw r3, 0x114(r1)
/* 80198D78 00195CB8  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 80198D7C 00195CBC  38 A3 41 E4 */	addi r5, r3, "zero__10Vector3<f>"@l
/* 80198D80 00195CC0  C8 22 AC 48 */	lfd f1, lbl_80518FA8@sda21(r2)
/* 80198D84 00195CC4  90 01 01 10 */	stw r0, 0x110(r1)
/* 80198D88 00195CC8  38 80 00 00 */	li r4, 0
/* 80198D8C 00195CCC  80 7D 03 34 */	lwz r3, 0x334(r29)
/* 80198D90 00195CD0  C8 01 01 10 */	lfd f0, 0x110(r1)
/* 80198D94 00195CD4  EC 20 08 28 */	fsubs f1, f0, f1
/* 80198D98 00195CD8  48 09 C1 B9 */	bl "pull__Q24Game11PelletCarryFUsR10Vector3<f>f"
.L_80198D9C:
/* 80198D9C 00195CDC  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 80198DA0 00195CE0  28 03 00 00 */	cmplwi r3, 0
/* 80198DA4 00195CE4  40 82 00 0C */	bne .L_80198DB0
/* 80198DA8 00195CE8  38 60 00 02 */	li r3, 2
/* 80198DAC 00195CEC  48 00 02 1C */	b .L_80198FC8
.L_80198DB0:
/* 80198DB0 00195CF0  3C 03 00 01 */	addis r0, r3, 1
/* 80198DB4 00195CF4  28 00 FF FF */	cmplwi r0, 0xffff
/* 80198DB8 00195CF8  40 82 00 0C */	bne .L_80198DC4
/* 80198DBC 00195CFC  38 60 00 02 */	li r3, 2
/* 80198DC0 00195D00  48 00 02 08 */	b .L_80198FC8
.L_80198DC4:
/* 80198DC4 00195D04  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80198DC8 00195D08  38 03 00 01 */	addi r0, r3, 1
/* 80198DCC 00195D0C  90 1E 00 40 */	stw r0, 0x40(r30)
/* 80198DD0 00195D10  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 80198DD4 00195D14  81 83 00 00 */	lwz r12, 0(r3)
/* 80198DD8 00195D18  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80198DDC 00195D1C  7D 89 03 A6 */	mtctr r12
/* 80198DE0 00195D20  4E 80 04 21 */	bctrl 
/* 80198DE4 00195D24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80198DE8 00195D28  41 82 00 6C */	beq .L_80198E54
/* 80198DEC 00195D2C  83 BE 00 30 */	lwz r29, 0x30(r30)
/* 80198DF0 00195D30  7F A3 EB 78 */	mr r3, r29
/* 80198DF4 00195D34  81 9D 00 00 */	lwz r12, 0(r29)
/* 80198DF8 00195D38  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80198DFC 00195D3C  7D 89 03 A6 */	mtctr r12
/* 80198E00 00195D40  4E 80 04 21 */	bctrl 
/* 80198E04 00195D44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80198E08 00195D48  41 82 00 4C */	beq .L_80198E54
/* 80198E0C 00195D4C  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 80198E10 00195D50  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 80198E14 00195D54  38 84 41 E4 */	addi r4, r4, "zero__10Vector3<f>"@l
/* 80198E18 00195D58  81 83 00 00 */	lwz r12, 0(r3)
/* 80198E1C 00195D5C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80198E20 00195D60  7D 89 03 A6 */	mtctr r12
/* 80198E24 00195D64  4E 80 04 21 */	bctrl 
/* 80198E28 00195D68  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80198E2C 00195D6C  7F A3 EB 78 */	mr r3, r29
/* 80198E30 00195D70  D0 1D 01 C8 */	stfs f0, 0x1c8(r29)
/* 80198E34 00195D74  D0 1D 01 CC */	stfs f0, 0x1cc(r29)
/* 80198E38 00195D78  D0 1D 01 D0 */	stfs f0, 0x1d0(r29)
/* 80198E3C 00195D7C  4B FD 16 6D */	bl getSpeicalSlot__Q24Game6PelletFv
/* 80198E40 00195D80  7C 60 07 34 */	extsh r0, r3
/* 80198E44 00195D84  2C 00 FF FF */	cmpwi r0, -1
/* 80198E48 00195D88  40 82 00 0C */	bne .L_80198E54
/* 80198E4C 00195D8C  80 7D 03 34 */	lwz r3, 0x334(r29)
/* 80198E50 00195D90  48 09 C0 D9 */	bl reset__Q24Game11PelletCarryFv
.L_80198E54:
/* 80198E54 00195D94  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80198E58 00195D98  80 9E 00 20 */	lwz r4, 0x20(r30)
/* 80198E5C 00195D9C  48 00 AC 75 */	bl check__Q24Game10PathfinderFUl
/* 80198E60 00195DA0  2C 03 00 02 */	cmpwi r3, 2
/* 80198E64 00195DA4  41 82 01 60 */	beq .L_80198FC4
/* 80198E68 00195DA8  40 80 00 14 */	bge .L_80198E7C
/* 80198E6C 00195DAC  2C 03 00 00 */	cmpwi r3, 0
/* 80198E70 00195DB0  41 82 00 18 */	beq .L_80198E88
/* 80198E74 00195DB4  40 80 00 94 */	bge .L_80198F08
/* 80198E78 00195DB8  48 00 01 4C */	b .L_80198FC4
.L_80198E7C:
/* 80198E7C 00195DBC  2C 03 00 04 */	cmpwi r3, 4
/* 80198E80 00195DC0  40 80 01 44 */	bge .L_80198FC4
/* 80198E84 00195DC4  48 00 01 28 */	b .L_80198FAC
.L_80198E88:
/* 80198E88 00195DC8  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80198E8C 00195DCC  38 BE 00 44 */	addi r5, r30, 0x44
/* 80198E90 00195DD0  80 9E 00 20 */	lwz r4, 0x20(r30)
/* 80198E94 00195DD4  48 00 AB 0D */	bl makepath__Q24Game10PathfinderFUlPPQ24Game8PathNode
/* 80198E98 00195DD8  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 80198E9C 00195DDC  38 00 00 01 */	li r0, 1
/* 80198EA0 00195DE0  7F C3 F3 78 */	mr r3, r30
/* 80198EA4 00195DE4  80 9E 00 44 */	lwz r4, 0x44(r30)
/* 80198EA8 00195DE8  90 9E 00 48 */	stw r4, 0x48(r30)
/* 80198EAC 00195DEC  B0 1E 00 1E */	sth r0, 0x1e(r30)
/* 80198EB0 00195DF0  48 00 19 FD */	bl crInit__Q26PikiAI11ActPathMoveFv
/* 80198EB4 00195DF4  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 80198EB8 00195DF8  38 E0 FF FF */	li r7, -1
/* 80198EBC 00195DFC  7C 64 1B 78 */	mr r4, r3
/* 80198EC0 00195E00  48 00 00 0C */	b .L_80198ECC
.L_80198EC4:
/* 80198EC4 00195E04  A8 E4 00 20 */	lha r7, 0x20(r4)
/* 80198EC8 00195E08  80 84 00 0C */	lwz r4, 0xc(r4)
.L_80198ECC:
/* 80198ECC 00195E0C  28 04 00 00 */	cmplwi r4, 0
/* 80198ED0 00195E10  40 82 FF F4 */	bne .L_80198EC4
/* 80198ED4 00195E14  80 83 00 0C */	lwz r4, 0xc(r3)
/* 80198ED8 00195E18  28 04 00 00 */	cmplwi r4, 0
/* 80198EDC 00195E1C  41 82 00 0C */	beq .L_80198EE8
/* 80198EE0 00195E20  A8 C4 00 20 */	lha r6, 0x20(r4)
/* 80198EE4 00195E24  48 00 00 08 */	b .L_80198EEC
.L_80198EE8:
/* 80198EE8 00195E28  38 C2 AC 50 */	addi r6, r2, lbl_80518FB0@sda21
.L_80198EEC:
/* 80198EEC 00195E2C  A8 A3 00 20 */	lha r5, 0x20(r3)
/* 80198EF0 00195E30  38 61 00 10 */	addi r3, r1, 0x10
/* 80198EF4 00195E34  38 9F 00 A0 */	addi r4, r31, 0xa0
/* 80198EF8 00195E38  4C C6 31 82 */	crclr 6
/* 80198EFC 00195E3C  4B F2 E5 3D */	bl sprintf
/* 80198F00 00195E40  38 60 00 01 */	li r3, 1
/* 80198F04 00195E44  48 00 00 C4 */	b .L_80198FC8
.L_80198F08:
/* 80198F08 00195E48  80 9E 00 20 */	lwz r4, 0x20(r30)
/* 80198F0C 00195E4C  28 04 00 00 */	cmplwi r4, 0
/* 80198F10 00195E50  41 82 00 0C */	beq .L_80198F1C
/* 80198F14 00195E54  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80198F18 00195E58  48 00 AB 49 */	bl release__Q24Game10PathfinderFUl
.L_80198F1C:
/* 80198F1C 00195E5C  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 80198F20 00195E60  38 00 00 00 */	li r0, 0
/* 80198F24 00195E64  38 C0 00 06 */	li r6, 6
/* 80198F28 00195E68  38 63 00 01 */	addi r3, r3, 1
/* 80198F2C 00195E6C  90 7E 00 50 */	stw r3, 0x50(r30)
/* 80198F30 00195E70  B0 1E 00 1E */	sth r0, 0x1e(r30)
/* 80198F34 00195E74  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80198F38 00195E78  28 03 00 00 */	cmplwi r3, 0
/* 80198F3C 00195E7C  41 82 00 18 */	beq .L_80198F54
/* 80198F40 00195E80  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80198F44 00195E84  2C 00 00 01 */	cmpwi r0, 1
/* 80198F48 00195E88  40 82 00 0C */	bne .L_80198F54
/* 80198F4C 00195E8C  60 C0 00 40 */	ori r0, r6, 0x40
/* 80198F50 00195E90  54 06 06 3E */	clrlwi r6, r0, 0x18
.L_80198F54:
/* 80198F54 00195E94  80 1E 00 50 */	lwz r0, 0x50(r30)
/* 80198F58 00195E98  2C 00 00 02 */	cmpwi r0, 2
/* 80198F5C 00195E9C  41 80 00 1C */	blt .L_80198F78
/* 80198F60 00195EA0  2C 00 00 03 */	cmpwi r0, 3
/* 80198F64 00195EA4  60 C0 00 40 */	ori r0, r6, 0x40
/* 80198F68 00195EA8  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 80198F6C 00195EAC  41 80 00 0C */	blt .L_80198F78
/* 80198F70 00195EB0  38 00 00 03 */	li r0, 3
/* 80198F74 00195EB4  90 1E 00 50 */	stw r0, 0x50(r30)
.L_80198F78:
/* 80198F78 00195EB8  A8 BE 00 56 */	lha r5, 0x56(r30)
/* 80198F7C 00195EBC  38 81 00 08 */	addi r4, r1, 8
/* 80198F80 00195EC0  A8 1E 00 54 */	lha r0, 0x54(r30)
/* 80198F84 00195EC4  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80198F88 00195EC8  B0 01 00 08 */	sth r0, 8(r1)
/* 80198F8C 00195ECC  B0 A1 00 0A */	sth r5, 0xa(r1)
/* 80198F90 00195ED0  98 C1 00 0C */	stb r6, 0xc(r1)
/* 80198F94 00195ED4  48 00 A8 C1 */	bl start__Q24Game10PathfinderFRQ24Game15PathfindRequest
/* 80198F98 00195ED8  90 7E 00 20 */	stw r3, 0x20(r30)
/* 80198F9C 00195EDC  38 00 00 00 */	li r0, 0
/* 80198FA0 00195EE0  38 60 00 01 */	li r3, 1
/* 80198FA4 00195EE4  90 1E 00 40 */	stw r0, 0x40(r30)
/* 80198FA8 00195EE8  48 00 00 20 */	b .L_80198FC8
.L_80198FAC:
/* 80198FAC 00195EEC  80 DE 00 20 */	lwz r6, 0x20(r30)
/* 80198FB0 00195EF0  38 7F 00 34 */	addi r3, r31, 0x34
/* 80198FB4 00195EF4  38 BF 00 B0 */	addi r5, r31, 0xb0
/* 80198FB8 00195EF8  38 80 04 B1 */	li r4, 0x4b1
/* 80198FBC 00195EFC  4C C6 31 82 */	crclr 6
/* 80198FC0 00195F00  4B E9 16 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80198FC4:
/* 80198FC4 00195F04  38 60 00 01 */	li r3, 1
.L_80198FC8:
/* 80198FC8 00195F08  80 01 01 34 */	lwz r0, 0x134(r1)
/* 80198FCC 00195F0C  83 E1 01 2C */	lwz r31, 0x12c(r1)
/* 80198FD0 00195F10  83 C1 01 28 */	lwz r30, 0x128(r1)
/* 80198FD4 00195F14  83 A1 01 24 */	lwz r29, 0x124(r1)
/* 80198FD8 00195F18  7C 08 03 A6 */	mtlr r0
/* 80198FDC 00195F1C  38 21 01 30 */	addi r1, r1, 0x130
/* 80198FE0 00195F20  4E 80 00 20 */	blr 
.endfn execPathfinding__Q26PikiAI11ActPathMoveFv

.fn execMoveGoal__Q26PikiAI11ActPathMoveFv, global
/* 80198FE4 00195F24  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 80198FE8 00195F28  7C 08 02 A6 */	mflr r0
/* 80198FEC 00195F2C  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80198FF0 00195F30  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 80198FF4 00195F34  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 80198FF8 00195F38  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 80198FFC 00195F3C  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 80199000 00195F40  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 80199004 00195F44  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 80199008 00195F48  BF 61 00 8C */	stmw r27, 0x8c(r1)
/* 8019900C 00195F4C  7C 7F 1B 78 */	mr r31, r3
/* 80199010 00195F50  3C 60 80 48 */	lis r3, lbl_8047F070@ha
/* 80199014 00195F54  80 9F 00 30 */	lwz r4, 0x30(r31)
/* 80199018 00195F58  3B 83 F0 70 */	addi r28, r3, lbl_8047F070@l
/* 8019901C 00195F5C  38 61 00 08 */	addi r3, r1, 8
/* 80199020 00195F60  81 84 00 00 */	lwz r12, 0(r4)
/* 80199024 00195F64  81 8C 00 08 */	lwz r12, 8(r12)
/* 80199028 00195F68  7D 89 03 A6 */	mtctr r12
/* 8019902C 00195F6C  4E 80 04 21 */	bctrl 
/* 80199030 00195F70  C0 7F 00 28 */	lfs f3, 0x28(r31)
/* 80199034 00195F74  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80199038 00195F78  C0 3F 00 24 */	lfs f1, 0x24(r31)
/* 8019903C 00195F7C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80199040 00195F80  EC 83 10 28 */	fsubs f4, f3, f2
/* 80199044 00195F84  C0 7F 00 2C */	lfs f3, 0x2c(r31)
/* 80199048 00195F88  EC 41 00 28 */	fsubs f2, f1, f0
/* 8019904C 00195F8C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80199050 00195F90  EC A4 01 32 */	fmuls f5, f4, f4
/* 80199054 00195F94  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 80199058 00195F98  EC 03 00 28 */	fsubs f0, f3, f0
/* 8019905C 00195F9C  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 80199060 00195FA0  EC 62 00 B2 */	fmuls f3, f2, f2
/* 80199064 00195FA4  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 80199068 00195FA8  EC 80 00 32 */	fmuls f4, f0, f0
/* 8019906C 00195FAC  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80199070 00195FB0  EC 03 28 2A */	fadds f0, f3, f5
/* 80199074 00195FB4  EC C3 20 2A */	fadds f6, f3, f4
/* 80199078 00195FB8  EC 04 00 2A */	fadds f0, f4, f0
/* 8019907C 00195FBC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80199080 00195FC0  40 81 00 20 */	ble .L_801990A0
/* 80199084 00195FC4  EC 02 28 BA */	fmadds f0, f2, f2, f5
/* 80199088 00195FC8  EC 84 00 2A */	fadds f4, f4, f0
/* 8019908C 00195FCC  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 80199090 00195FD0  40 81 00 14 */	ble .L_801990A4
/* 80199094 00195FD4  FC 00 20 34 */	frsqrte f0, f4
/* 80199098 00195FD8  EC 80 01 32 */	fmuls f4, f0, f4
/* 8019909C 00195FDC  48 00 00 08 */	b .L_801990A4
.L_801990A0:
/* 801990A0 00195FE0  FC 80 08 90 */	fmr f4, f1
.L_801990A4:
/* 801990A4 00195FE4  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 801990A8 00195FE8  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 801990AC 00195FEC  40 81 00 34 */	ble .L_801990E0
/* 801990B0 00195FF0  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 801990B4 00195FF4  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 801990B8 00195FF8  EC 60 20 24 */	fdivs f3, f0, f4
/* 801990BC 00195FFC  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 801990C0 00196000  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 801990C4 00196004  EC 42 00 F2 */	fmuls f2, f2, f3
/* 801990C8 00196008  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801990CC 0019600C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801990D0 00196010  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 801990D4 00196014  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801990D8 00196018  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 801990DC 0019601C  48 00 00 08 */	b .L_801990E4
.L_801990E0:
/* 801990E0 00196020  FC 80 00 90 */	fmr f4, f0
.L_801990E4:
/* 801990E4 00196024  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 801990E8 00196028  FC 00 20 00 */	fcmpu cr0, f0, f4
/* 801990EC 0019602C  40 82 00 10 */	bne .L_801990FC
/* 801990F0 00196030  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801990F4 00196034  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 801990F8 00196038  D0 01 00 3C */	stfs f0, 0x3c(r1)
.L_801990FC:
/* 801990FC 0019603C  C0 02 AC 40 */	lfs f0, lbl_80518FA0@sda21(r2)
/* 80199100 00196040  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 80199104 00196044  40 80 03 F0 */	bge .L_801994F4
/* 80199108 00196048  80 9F 00 30 */	lwz r4, 0x30(r31)
/* 8019910C 0019604C  38 61 00 5C */	addi r3, r1, 0x5c
/* 80199110 00196050  48 00 6B 4D */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 80199114 00196054  38 00 00 00 */	li r0, 0
/* 80199118 00196058  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 8019911C 0019605C  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80199120 00196060  38 61 00 5C */	addi r3, r1, 0x5c
/* 80199124 00196064  28 00 00 00 */	cmplwi r0, 0
/* 80199128 00196068  90 81 00 24 */	stw r4, 0x24(r1)
/* 8019912C 0019606C  90 01 00 30 */	stw r0, 0x30(r1)
/* 80199130 00196070  90 01 00 28 */	stw r0, 0x28(r1)
/* 80199134 00196074  90 61 00 2C */	stw r3, 0x2c(r1)
/* 80199138 00196078  40 82 00 1C */	bne .L_80199154
/* 8019913C 0019607C  81 83 00 00 */	lwz r12, 0(r3)
/* 80199140 00196080  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80199144 00196084  7D 89 03 A6 */	mtctr r12
/* 80199148 00196088  4E 80 04 21 */	bctrl 
/* 8019914C 0019608C  90 61 00 28 */	stw r3, 0x28(r1)
/* 80199150 00196090  48 00 01 68 */	b .L_801992B8
.L_80199154:
/* 80199154 00196094  81 83 00 00 */	lwz r12, 0(r3)
/* 80199158 00196098  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8019915C 0019609C  7D 89 03 A6 */	mtctr r12
/* 80199160 001960A0  4E 80 04 21 */	bctrl 
/* 80199164 001960A4  90 61 00 28 */	stw r3, 0x28(r1)
/* 80199168 001960A8  48 00 00 58 */	b .L_801991C0
.L_8019916C:
/* 8019916C 001960AC  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80199170 001960B0  80 81 00 28 */	lwz r4, 0x28(r1)
/* 80199174 001960B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80199178 001960B8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8019917C 001960BC  7D 89 03 A6 */	mtctr r12
/* 80199180 001960C0  4E 80 04 21 */	bctrl 
/* 80199184 001960C4  7C 64 1B 78 */	mr r4, r3
/* 80199188 001960C8  80 61 00 30 */	lwz r3, 0x30(r1)
/* 8019918C 001960CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80199190 001960D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80199194 001960D4  7D 89 03 A6 */	mtctr r12
/* 80199198 001960D8  4E 80 04 21 */	bctrl 
/* 8019919C 001960DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801991A0 001960E0  40 82 01 18 */	bne .L_801992B8
/* 801991A4 001960E4  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 801991A8 001960E8  80 81 00 28 */	lwz r4, 0x28(r1)
/* 801991AC 001960EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801991B0 001960F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801991B4 001960F4  7D 89 03 A6 */	mtctr r12
/* 801991B8 001960F8  4E 80 04 21 */	bctrl 
/* 801991BC 001960FC  90 61 00 28 */	stw r3, 0x28(r1)
.L_801991C0:
/* 801991C0 00196100  81 81 00 24 */	lwz r12, 0x24(r1)
/* 801991C4 00196104  38 61 00 24 */	addi r3, r1, 0x24
/* 801991C8 00196108  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801991CC 0019610C  7D 89 03 A6 */	mtctr r12
/* 801991D0 00196110  4E 80 04 21 */	bctrl 
/* 801991D4 00196114  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801991D8 00196118  41 82 FF 94 */	beq .L_8019916C
/* 801991DC 0019611C  48 00 00 DC */	b .L_801992B8
.L_801991E0:
/* 801991E0 00196120  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 801991E4 00196124  81 83 00 00 */	lwz r12, 0(r3)
/* 801991E8 00196128  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801991EC 0019612C  7D 89 03 A6 */	mtctr r12
/* 801991F0 00196130  4E 80 04 21 */	bctrl 
/* 801991F4 00196134  38 80 00 00 */	li r4, 0
/* 801991F8 00196138  4B FA 28 59 */	bl movie_begin__Q24Game8CreatureFb
/* 801991FC 0019613C  80 01 00 30 */	lwz r0, 0x30(r1)
/* 80199200 00196140  28 00 00 00 */	cmplwi r0, 0
/* 80199204 00196144  40 82 00 24 */	bne .L_80199228
/* 80199208 00196148  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8019920C 0019614C  80 81 00 28 */	lwz r4, 0x28(r1)
/* 80199210 00196150  81 83 00 00 */	lwz r12, 0(r3)
/* 80199214 00196154  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80199218 00196158  7D 89 03 A6 */	mtctr r12
/* 8019921C 0019615C  4E 80 04 21 */	bctrl 
/* 80199220 00196160  90 61 00 28 */	stw r3, 0x28(r1)
/* 80199224 00196164  48 00 00 94 */	b .L_801992B8
.L_80199228:
/* 80199228 00196168  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8019922C 0019616C  80 81 00 28 */	lwz r4, 0x28(r1)
/* 80199230 00196170  81 83 00 00 */	lwz r12, 0(r3)
/* 80199234 00196174  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80199238 00196178  7D 89 03 A6 */	mtctr r12
/* 8019923C 0019617C  4E 80 04 21 */	bctrl 
/* 80199240 00196180  90 61 00 28 */	stw r3, 0x28(r1)
/* 80199244 00196184  48 00 00 58 */	b .L_8019929C
.L_80199248:
/* 80199248 00196188  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8019924C 0019618C  80 81 00 28 */	lwz r4, 0x28(r1)
/* 80199250 00196190  81 83 00 00 */	lwz r12, 0(r3)
/* 80199254 00196194  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80199258 00196198  7D 89 03 A6 */	mtctr r12
/* 8019925C 0019619C  4E 80 04 21 */	bctrl 
/* 80199260 001961A0  7C 64 1B 78 */	mr r4, r3
/* 80199264 001961A4  80 61 00 30 */	lwz r3, 0x30(r1)
/* 80199268 001961A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8019926C 001961AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80199270 001961B0  7D 89 03 A6 */	mtctr r12
/* 80199274 001961B4  4E 80 04 21 */	bctrl 
/* 80199278 001961B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019927C 001961BC  40 82 00 3C */	bne .L_801992B8
/* 80199280 001961C0  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80199284 001961C4  80 81 00 28 */	lwz r4, 0x28(r1)
/* 80199288 001961C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8019928C 001961CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80199290 001961D0  7D 89 03 A6 */	mtctr r12
/* 80199294 001961D4  4E 80 04 21 */	bctrl 
/* 80199298 001961D8  90 61 00 28 */	stw r3, 0x28(r1)
.L_8019929C:
/* 8019929C 001961DC  81 81 00 24 */	lwz r12, 0x24(r1)
/* 801992A0 001961E0  38 61 00 24 */	addi r3, r1, 0x24
/* 801992A4 001961E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801992A8 001961E8  7D 89 03 A6 */	mtctr r12
/* 801992AC 001961EC  4E 80 04 21 */	bctrl 
/* 801992B0 001961F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801992B4 001961F4  41 82 FF 94 */	beq .L_80199248
.L_801992B8:
/* 801992B8 001961F8  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 801992BC 001961FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801992C0 00196200  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801992C4 00196204  7D 89 03 A6 */	mtctr r12
/* 801992C8 00196208  4E 80 04 21 */	bctrl 
/* 801992CC 0019620C  80 81 00 28 */	lwz r4, 0x28(r1)
/* 801992D0 00196210  7C 04 18 40 */	cmplw r4, r3
/* 801992D4 00196214  40 82 FF 0C */	bne .L_801991E0
/* 801992D8 00196218  38 61 00 5C */	addi r3, r1, 0x5c
/* 801992DC 0019621C  38 80 FF FF */	li r4, -1
/* 801992E0 00196220  48 00 6A 85 */	bl __dt__Q24Game8StickersFv
/* 801992E4 00196224  80 7F 00 04 */	lwz r3, 4(r31)
/* 801992E8 00196228  4B FA 3D D9 */	bl finishMotion__Q24Game8FakePikiFv
/* 801992EC 0019622C  80 7F 00 04 */	lwz r3, 4(r31)
/* 801992F0 00196230  48 00 61 35 */	bl endStick__Q24Game8CreatureFv
/* 801992F4 00196234  80 9F 00 30 */	lwz r4, 0x30(r31)
/* 801992F8 00196238  38 61 00 40 */	addi r3, r1, 0x40
/* 801992FC 0019623C  48 00 69 61 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 80199300 00196240  38 00 00 00 */	li r0, 0
/* 80199304 00196244  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80199308 00196248  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 8019930C 0019624C  38 61 00 40 */	addi r3, r1, 0x40
/* 80199310 00196250  28 00 00 00 */	cmplwi r0, 0
/* 80199314 00196254  90 81 00 14 */	stw r4, 0x14(r1)
/* 80199318 00196258  90 01 00 20 */	stw r0, 0x20(r1)
/* 8019931C 0019625C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80199320 00196260  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80199324 00196264  40 82 00 1C */	bne .L_80199340
/* 80199328 00196268  81 83 00 00 */	lwz r12, 0(r3)
/* 8019932C 0019626C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80199330 00196270  7D 89 03 A6 */	mtctr r12
/* 80199334 00196274  4E 80 04 21 */	bctrl 
/* 80199338 00196278  90 61 00 18 */	stw r3, 0x18(r1)
/* 8019933C 0019627C  48 00 01 84 */	b .L_801994C0
.L_80199340:
/* 80199340 00196280  81 83 00 00 */	lwz r12, 0(r3)
/* 80199344 00196284  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80199348 00196288  7D 89 03 A6 */	mtctr r12
/* 8019934C 0019628C  4E 80 04 21 */	bctrl 
/* 80199350 00196290  90 61 00 18 */	stw r3, 0x18(r1)
/* 80199354 00196294  48 00 00 58 */	b .L_801993AC
.L_80199358:
/* 80199358 00196298  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8019935C 0019629C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80199360 001962A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80199364 001962A4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80199368 001962A8  7D 89 03 A6 */	mtctr r12
/* 8019936C 001962AC  4E 80 04 21 */	bctrl 
/* 80199370 001962B0  7C 64 1B 78 */	mr r4, r3
/* 80199374 001962B4  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80199378 001962B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8019937C 001962BC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80199380 001962C0  7D 89 03 A6 */	mtctr r12
/* 80199384 001962C4  4E 80 04 21 */	bctrl 
/* 80199388 001962C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019938C 001962CC  40 82 01 34 */	bne .L_801994C0
/* 80199390 001962D0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80199394 001962D4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80199398 001962D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8019939C 001962DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801993A0 001962E0  7D 89 03 A6 */	mtctr r12
/* 801993A4 001962E4  4E 80 04 21 */	bctrl 
/* 801993A8 001962E8  90 61 00 18 */	stw r3, 0x18(r1)
.L_801993AC:
/* 801993AC 001962EC  81 81 00 14 */	lwz r12, 0x14(r1)
/* 801993B0 001962F0  38 61 00 14 */	addi r3, r1, 0x14
/* 801993B4 001962F4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801993B8 001962F8  7D 89 03 A6 */	mtctr r12
/* 801993BC 001962FC  4E 80 04 21 */	bctrl 
/* 801993C0 00196300  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801993C4 00196304  41 82 FF 94 */	beq .L_80199358
/* 801993C8 00196308  48 00 00 F8 */	b .L_801994C0
.L_801993CC:
/* 801993CC 0019630C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801993D0 00196310  81 83 00 00 */	lwz r12, 0(r3)
/* 801993D4 00196314  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801993D8 00196318  7D 89 03 A6 */	mtctr r12
/* 801993DC 0019631C  4E 80 04 21 */	bctrl 
/* 801993E0 00196320  81 83 00 00 */	lwz r12, 0(r3)
/* 801993E4 00196324  7C 7B 1B 78 */	mr r27, r3
/* 801993E8 00196328  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801993EC 0019632C  7D 89 03 A6 */	mtctr r12
/* 801993F0 00196330  4E 80 04 21 */	bctrl 
/* 801993F4 00196334  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801993F8 00196338  41 82 00 0C */	beq .L_80199404
/* 801993FC 0019633C  7F 63 DB 78 */	mr r3, r27
/* 80199400 00196340  48 00 60 25 */	bl endStick__Q24Game8CreatureFv
.L_80199404:
/* 80199404 00196344  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80199408 00196348  28 00 00 00 */	cmplwi r0, 0
/* 8019940C 0019634C  40 82 00 24 */	bne .L_80199430
/* 80199410 00196350  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80199414 00196354  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80199418 00196358  81 83 00 00 */	lwz r12, 0(r3)
/* 8019941C 0019635C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80199420 00196360  7D 89 03 A6 */	mtctr r12
/* 80199424 00196364  4E 80 04 21 */	bctrl 
/* 80199428 00196368  90 61 00 18 */	stw r3, 0x18(r1)
/* 8019942C 0019636C  48 00 00 94 */	b .L_801994C0
.L_80199430:
/* 80199430 00196370  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80199434 00196374  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80199438 00196378  81 83 00 00 */	lwz r12, 0(r3)
/* 8019943C 0019637C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80199440 00196380  7D 89 03 A6 */	mtctr r12
/* 80199444 00196384  4E 80 04 21 */	bctrl 
/* 80199448 00196388  90 61 00 18 */	stw r3, 0x18(r1)
/* 8019944C 0019638C  48 00 00 58 */	b .L_801994A4
.L_80199450:
/* 80199450 00196390  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80199454 00196394  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80199458 00196398  81 83 00 00 */	lwz r12, 0(r3)
/* 8019945C 0019639C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80199460 001963A0  7D 89 03 A6 */	mtctr r12
/* 80199464 001963A4  4E 80 04 21 */	bctrl 
/* 80199468 001963A8  7C 64 1B 78 */	mr r4, r3
/* 8019946C 001963AC  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80199470 001963B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80199474 001963B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80199478 001963B8  7D 89 03 A6 */	mtctr r12
/* 8019947C 001963BC  4E 80 04 21 */	bctrl 
/* 80199480 001963C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80199484 001963C4  40 82 00 3C */	bne .L_801994C0
/* 80199488 001963C8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8019948C 001963CC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80199490 001963D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80199494 001963D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80199498 001963D8  7D 89 03 A6 */	mtctr r12
/* 8019949C 001963DC  4E 80 04 21 */	bctrl 
/* 801994A0 001963E0  90 61 00 18 */	stw r3, 0x18(r1)
.L_801994A4:
/* 801994A4 001963E4  81 81 00 14 */	lwz r12, 0x14(r1)
/* 801994A8 001963E8  38 61 00 14 */	addi r3, r1, 0x14
/* 801994AC 001963EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801994B0 001963F0  7D 89 03 A6 */	mtctr r12
/* 801994B4 001963F4  4E 80 04 21 */	bctrl 
/* 801994B8 001963F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801994BC 001963FC  41 82 FF 94 */	beq .L_80199450
.L_801994C0:
/* 801994C0 00196400  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801994C4 00196404  81 83 00 00 */	lwz r12, 0(r3)
/* 801994C8 00196408  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801994CC 0019640C  7D 89 03 A6 */	mtctr r12
/* 801994D0 00196410  4E 80 04 21 */	bctrl 
/* 801994D4 00196414  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801994D8 00196418  7C 04 18 40 */	cmplw r4, r3
/* 801994DC 0019641C  40 82 FE F0 */	bne .L_801993CC
/* 801994E0 00196420  38 61 00 40 */	addi r3, r1, 0x40
/* 801994E4 00196424  38 80 FF FF */	li r4, -1
/* 801994E8 00196428  48 00 68 7D */	bl __dt__Q24Game8StickersFv
/* 801994EC 0019642C  38 60 00 00 */	li r3, 0
/* 801994F0 00196430  48 00 01 70 */	b .L_80199660
.L_801994F4:
/* 801994F4 00196434  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 801994F8 00196438  80 9F 00 04 */	lwz r4, 4(r31)
/* 801994FC 0019643C  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 80199500 00196440  80 64 00 C0 */	lwz r3, 0xc0(r4)
/* 80199504 00196444  28 00 04 01 */	cmplwi r0, 0x401
/* 80199508 00196448  C3 C3 11 00 */	lfs f30, 0x1100(r3)
/* 8019950C 0019644C  C3 E3 11 28 */	lfs f31, 0x1128(r3)
/* 80199510 00196450  41 82 00 18 */	beq .L_80199528
/* 80199514 00196454  38 7C 00 34 */	addi r3, r28, 0x34
/* 80199518 00196458  38 BC 00 48 */	addi r5, r28, 0x48
/* 8019951C 0019645C  38 80 04 BF */	li r4, 0x4bf
/* 80199520 00196460  4C C6 31 82 */	crclr 6
/* 80199524 00196464  4B E9 11 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80199528:
/* 80199528 00196468  83 7F 00 30 */	lwz r27, 0x30(r31)
/* 8019952C 0019646C  80 7B 03 58 */	lwz r3, 0x358(r27)
/* 80199530 00196470  28 03 00 00 */	cmplwi r3, 0
/* 80199534 00196474  41 82 00 30 */	beq .L_80199564
/* 80199538 00196478  80 63 00 08 */	lwz r3, 8(r3)
/* 8019953C 0019647C  81 83 00 00 */	lwz r12, 0(r3)
/* 80199540 00196480  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80199544 00196484  7D 89 03 A6 */	mtctr r12
/* 80199548 00196488  4E 80 04 21 */	bctrl 
/* 8019954C 0019648C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80199550 00196490  41 82 00 14 */	beq .L_80199564
/* 80199554 00196494  80 7F 00 04 */	lwz r3, 4(r31)
/* 80199558 00196498  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8019955C 0019649C  C0 83 02 C8 */	lfs f4, 0x2c8(r3)
/* 80199560 001964A0  48 00 00 C8 */	b .L_80199628
.L_80199564:
/* 80199564 001964A4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80199568 001964A8  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8019956C 001964AC  2C 00 00 01 */	cmpwi r0, 1
/* 80199570 001964B0  40 82 00 20 */	bne .L_80199590
/* 80199574 001964B4  88 1B 03 2C */	lbz r0, 0x32c(r27)
/* 80199578 001964B8  28 00 00 03 */	cmplwi r0, 3
/* 8019957C 001964BC  40 82 00 14 */	bne .L_80199590
/* 80199580 001964C0  80 7F 00 04 */	lwz r3, 4(r31)
/* 80199584 001964C4  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80199588 001964C8  C0 83 02 C8 */	lfs f4, 0x2c8(r3)
/* 8019958C 001964CC  48 00 00 9C */	b .L_80199628
.L_80199590:
/* 80199590 001964D0  80 9F 00 04 */	lwz r4, 4(r31)
/* 80199594 001964D4  7F 63 DB 78 */	mr r3, r27
/* 80199598 001964D8  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 8019959C 001964DC  C0 04 02 C8 */	lfs f0, 0x2c8(r4)
/* 801995A0 001964E0  EF C0 07 B2 */	fmuls f30, f0, f30
/* 801995A4 001964E4  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801995A8 001964E8  4B FC DF E9 */	bl getPelletConfigMin__Q24Game6PelletFv
/* 801995AC 001964EC  7C 7D 1B 78 */	mr r29, r3
/* 801995B0 001964F0  7F 63 DB 78 */	mr r3, r27
/* 801995B4 001964F4  4B FC DF FD */	bl getPelletConfigMax__Q24Game6PelletFv
/* 801995B8 001964F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801995BC 001964FC  C3 BB 04 18 */	lfs f29, 0x418(r27)
/* 801995C0 00196500  40 82 00 20 */	bne .L_801995E0
/* 801995C4 00196504  80 DB 03 5C */	lwz r6, 0x35c(r27)
/* 801995C8 00196508  38 7C 00 34 */	addi r3, r28, 0x34
/* 801995CC 0019650C  38 BC 00 C0 */	addi r5, r28, 0xc0
/* 801995D0 00196510  38 80 04 E0 */	li r4, 0x4e0
/* 801995D4 00196514  80 C6 00 40 */	lwz r6, 0x40(r6)
/* 801995D8 00196518  4C C6 31 82 */	crclr 6
/* 801995DC 0019651C  4B E9 10 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801995E0:
/* 801995E0 00196520  3C 60 43 30 */	lis r3, 0x4330
/* 801995E4 00196524  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 801995E8 00196528  90 01 00 7C */	stw r0, 0x7c(r1)
/* 801995EC 0019652C  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 801995F0 00196530  C0 22 AC 04 */	lfs f1, lbl_80518F64@sda21(r2)
/* 801995F4 00196534  EC 1E F8 28 */	fsubs f0, f30, f31
/* 801995F8 00196538  90 61 00 78 */	stw r3, 0x78(r1)
/* 801995FC 0019653C  C8 62 AC 48 */	lfd f3, lbl_80518FA8@sda21(r2)
/* 80199600 00196540  EC 81 E8 2A */	fadds f4, f1, f29
/* 80199604 00196544  C8 21 00 78 */	lfd f1, 0x78(r1)
/* 80199608 00196548  90 01 00 84 */	stw r0, 0x84(r1)
/* 8019960C 0019654C  EC 41 18 28 */	fsubs f2, f1, f3
/* 80199610 00196550  90 61 00 80 */	stw r3, 0x80(r1)
/* 80199614 00196554  C8 21 00 80 */	lfd f1, 0x80(r1)
/* 80199618 00196558  EC 44 10 28 */	fsubs f2, f4, f2
/* 8019961C 0019655C  EC 21 18 28 */	fsubs f1, f1, f3
/* 80199620 00196560  EC 22 08 24 */	fdivs f1, f2, f1
/* 80199624 00196564  EC 81 F8 3A */	fmadds f4, f1, f0, f31
.L_80199628:
/* 80199628 00196568  C0 62 AC 00 */	lfs f3, lbl_80518F60@sda21(r2)
/* 8019962C 0019656C  7F E3 FB 78 */	mr r3, r31
/* 80199630 00196570  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 80199634 00196574  38 81 00 34 */	addi r4, r1, 0x34
/* 80199638 00196578  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 8019963C 0019657C  EC 23 01 32 */	fmuls f1, f3, f4
/* 80199640 00196580  EC 42 01 32 */	fmuls f2, f2, f4
/* 80199644 00196584  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 80199648 00196588  EC 00 01 32 */	fmuls f0, f0, f4
/* 8019964C 0019658C  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80199650 00196590  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 80199654 00196594  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80199658 00196598  48 00 00 D1 */	bl "carry__Q26PikiAI11ActPathMoveFR10Vector3<f>"
/* 8019965C 0019659C  38 60 00 01 */	li r3, 1
.L_80199660:
/* 80199660 001965A0  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 80199664 001965A4  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 80199668 001965A8  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 8019966C 001965AC  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 80199670 001965B0  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 80199674 001965B4  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 80199678 001965B8  BB 61 00 8C */	lmw r27, 0x8c(r1)
/* 8019967C 001965BC  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 80199680 001965C0  7C 08 03 A6 */	mtlr r0
/* 80199684 001965C4  38 21 00 D0 */	addi r1, r1, 0xd0
/* 80199688 001965C8  4E 80 00 20 */	blr 
.endfn execMoveGoal__Q26PikiAI11ActPathMoveFv

.fn isAllBlue__Q26PikiAI11ActPathMoveFv, global
/* 8019968C 001965CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80199690 001965D0  7C 08 02 A6 */	mflr r0
/* 80199694 001965D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80199698 001965D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8019969C 001965DC  93 C1 00 08 */	stw r30, 8(r1)
/* 801996A0 001965E0  7C 7E 1B 78 */	mr r30, r3
/* 801996A4 001965E4  80 63 00 30 */	lwz r3, 0x30(r3)
/* 801996A8 001965E8  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 801996AC 001965EC  28 00 04 01 */	cmplwi r0, 0x401
/* 801996B0 001965F0  41 82 00 20 */	beq .L_801996D0
/* 801996B4 001965F4  3C 60 80 48 */	lis r3, lbl_8047F0A4@ha
/* 801996B8 001965F8  3C A0 80 48 */	lis r5, lbl_8047F0B8@ha
/* 801996BC 001965FC  38 63 F0 A4 */	addi r3, r3, lbl_8047F0A4@l
/* 801996C0 00196600  38 80 05 2D */	li r4, 0x52d
/* 801996C4 00196604  38 A5 F0 B8 */	addi r5, r5, lbl_8047F0B8@l
/* 801996C8 00196608  4C C6 31 82 */	crclr 6
/* 801996CC 0019660C  4B E9 0F 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801996D0:
/* 801996D0 00196610  83 DE 00 30 */	lwz r30, 0x30(r30)
/* 801996D4 00196614  38 80 00 05 */	li r4, 5
/* 801996D8 00196618  7F C3 F3 78 */	mr r3, r30
/* 801996DC 0019661C  4B FD 13 01 */	bl getPikmins__Q24Game6PelletFi
/* 801996E0 00196620  7C 7F 1B 78 */	mr r31, r3
/* 801996E4 00196624  7F C3 F3 78 */	mr r3, r30
/* 801996E8 00196628  38 80 00 00 */	li r4, 0
/* 801996EC 0019662C  4B FD 12 F1 */	bl getPikmins__Q24Game6PelletFi
/* 801996F0 00196630  7F E3 FA 14 */	add r31, r3, r31
/* 801996F4 00196634  7F C3 F3 78 */	mr r3, r30
/* 801996F8 00196638  4B FD 12 3D */	bl getTotalPikmins__Q24Game6PelletFv
/* 801996FC 0019663C  7C 03 F8 00 */	cmpw r3, r31
/* 80199700 00196640  40 82 00 0C */	bne .L_8019970C
/* 80199704 00196644  38 60 00 01 */	li r3, 1
/* 80199708 00196648  48 00 00 08 */	b .L_80199710
.L_8019970C:
/* 8019970C 0019664C  38 60 00 00 */	li r3, 0
.L_80199710:
/* 80199710 00196650  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80199714 00196654  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80199718 00196658  83 C1 00 08 */	lwz r30, 8(r1)
/* 8019971C 0019665C  7C 08 03 A6 */	mtlr r0
/* 80199720 00196660  38 21 00 10 */	addi r1, r1, 0x10
/* 80199724 00196664  4E 80 00 20 */	blr 
.endfn isAllBlue__Q26PikiAI11ActPathMoveFv

.fn "carry__Q26PikiAI11ActPathMoveFR10Vector3<f>", global
/* 80199728 00196668  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8019972C 0019666C  7C 08 02 A6 */	mflr r0
/* 80199730 00196670  90 01 00 24 */	stw r0, 0x24(r1)
/* 80199734 00196674  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80199738 00196678  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8019973C 0019667C  7C 9E 23 78 */	mr r30, r4
/* 80199740 00196680  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80199744 00196684  7C 7D 1B 78 */	mr r29, r3
/* 80199748 00196688  83 E3 00 30 */	lwz r31, 0x30(r3)
/* 8019974C 0019668C  7F E3 FB 78 */	mr r3, r31
/* 80199750 00196690  4B FD 12 21 */	bl getTotalCarryPikmins__Q24Game6PelletFv
/* 80199754 00196694  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80199758 00196698  3C 00 43 30 */	lis r0, 0x4330
/* 8019975C 0019669C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80199760 001966A0  7F C5 F3 78 */	mr r5, r30
/* 80199764 001966A4  C8 22 AC 48 */	lfd f1, lbl_80518FA8@sda21(r2)
/* 80199768 001966A8  38 80 00 00 */	li r4, 0
/* 8019976C 001966AC  90 01 00 08 */	stw r0, 8(r1)
/* 80199770 001966B0  80 7F 03 34 */	lwz r3, 0x334(r31)
/* 80199774 001966B4  C8 01 00 08 */	lfd f0, 8(r1)
/* 80199778 001966B8  EC 20 08 28 */	fsubs f1, f0, f1
/* 8019977C 001966BC  48 09 B7 D5 */	bl "pull__Q24Game11PelletCarryFUsR10Vector3<f>f"
/* 80199780 001966C0  88 1D 00 6C */	lbz r0, 0x6c(r29)
/* 80199784 001966C4  28 00 00 00 */	cmplwi r0, 0
/* 80199788 001966C8  41 82 00 2C */	beq .L_801997B4
/* 8019978C 001966CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80199790 001966D0  40 82 00 24 */	bne .L_801997B4
/* 80199794 001966D4  38 00 00 00 */	li r0, 0
/* 80199798 001966D8  7F E3 FB 78 */	mr r3, r31
/* 8019979C 001966DC  98 1D 00 6C */	stb r0, 0x6c(r29)
/* 801997A0 001966E0  38 80 00 00 */	li r4, 0
/* 801997A4 001966E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801997A8 001966E8  81 8C 01 4C */	lwz r12, 0x14c(r12)
/* 801997AC 001966EC  7D 89 03 A6 */	mtctr r12
/* 801997B0 001966F0  4E 80 04 21 */	bctrl 
.L_801997B4:
/* 801997B4 001966F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801997B8 001966F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801997BC 001966FC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801997C0 00196700  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801997C4 00196704  7C 08 03 A6 */	mtlr r0
/* 801997C8 00196708  38 21 00 20 */	addi r1, r1, 0x20
/* 801997CC 0019670C  4E 80 00 20 */	blr 
.endfn "carry__Q26PikiAI11ActPathMoveFR10Vector3<f>"

.fn execMove__Q26PikiAI11ActPathMoveFv, global
/* 801997D0 00196710  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801997D4 00196714  7C 08 02 A6 */	mflr r0
/* 801997D8 00196718  90 01 00 74 */	stw r0, 0x74(r1)
/* 801997DC 0019671C  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 801997E0 00196720  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 801997E4 00196724  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 801997E8 00196728  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 801997EC 0019672C  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 801997F0 00196730  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 801997F4 00196734  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 801997F8 00196738  7C 7F 1B 78 */	mr r31, r3
/* 801997FC 0019673C  3C 80 80 48 */	lis r4, lbl_8047F070@ha
/* 80199800 00196740  80 63 00 30 */	lwz r3, 0x30(r3)
/* 80199804 00196744  3B 84 F0 70 */	addi r28, r4, lbl_8047F070@l
/* 80199808 00196748  80 9F 00 04 */	lwz r4, 4(r31)
/* 8019980C 0019674C  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 80199810 00196750  80 64 00 C0 */	lwz r3, 0xc0(r4)
/* 80199814 00196754  28 00 04 01 */	cmplwi r0, 0x401
/* 80199818 00196758  C3 C3 11 00 */	lfs f30, 0x1100(r3)
/* 8019981C 0019675C  C3 E3 11 28 */	lfs f31, 0x1128(r3)
/* 80199820 00196760  41 82 00 18 */	beq .L_80199838
/* 80199824 00196764  38 7C 00 34 */	addi r3, r28, 0x34
/* 80199828 00196768  38 BC 00 48 */	addi r5, r28, 0x48
/* 8019982C 0019676C  38 80 04 BF */	li r4, 0x4bf
/* 80199830 00196770  4C C6 31 82 */	crclr 6
/* 80199834 00196774  4B E9 0E 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80199838:
/* 80199838 00196778  83 7F 00 30 */	lwz r27, 0x30(r31)
/* 8019983C 0019677C  80 7B 03 58 */	lwz r3, 0x358(r27)
/* 80199840 00196780  28 03 00 00 */	cmplwi r3, 0
/* 80199844 00196784  41 82 00 30 */	beq .L_80199874
/* 80199848 00196788  80 63 00 08 */	lwz r3, 8(r3)
/* 8019984C 0019678C  81 83 00 00 */	lwz r12, 0(r3)
/* 80199850 00196790  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80199854 00196794  7D 89 03 A6 */	mtctr r12
/* 80199858 00196798  4E 80 04 21 */	bctrl 
/* 8019985C 0019679C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80199860 001967A0  41 82 00 14 */	beq .L_80199874
/* 80199864 001967A4  80 7F 00 04 */	lwz r3, 4(r31)
/* 80199868 001967A8  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8019986C 001967AC  C3 E3 02 C8 */	lfs f31, 0x2c8(r3)
/* 80199870 001967B0  48 00 00 C8 */	b .L_80199938
.L_80199874:
/* 80199874 001967B4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80199878 001967B8  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8019987C 001967BC  2C 00 00 01 */	cmpwi r0, 1
/* 80199880 001967C0  40 82 00 20 */	bne .L_801998A0
/* 80199884 001967C4  88 1B 03 2C */	lbz r0, 0x32c(r27)
/* 80199888 001967C8  28 00 00 03 */	cmplwi r0, 3
/* 8019988C 001967CC  40 82 00 14 */	bne .L_801998A0
/* 80199890 001967D0  80 7F 00 04 */	lwz r3, 4(r31)
/* 80199894 001967D4  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80199898 001967D8  C3 E3 02 C8 */	lfs f31, 0x2c8(r3)
/* 8019989C 001967DC  48 00 00 9C */	b .L_80199938
.L_801998A0:
/* 801998A0 001967E0  80 9F 00 04 */	lwz r4, 4(r31)
/* 801998A4 001967E4  7F 63 DB 78 */	mr r3, r27
/* 801998A8 001967E8  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 801998AC 001967EC  C0 04 02 C8 */	lfs f0, 0x2c8(r4)
/* 801998B0 001967F0  EF C0 07 B2 */	fmuls f30, f0, f30
/* 801998B4 001967F4  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801998B8 001967F8  4B FC DC D9 */	bl getPelletConfigMin__Q24Game6PelletFv
/* 801998BC 001967FC  7C 7D 1B 78 */	mr r29, r3
/* 801998C0 00196800  7F 63 DB 78 */	mr r3, r27
/* 801998C4 00196804  4B FC DC ED */	bl getPelletConfigMax__Q24Game6PelletFv
/* 801998C8 00196808  7C 7E 1B 79 */	or. r30, r3, r3
/* 801998CC 0019680C  C3 BB 04 18 */	lfs f29, 0x418(r27)
/* 801998D0 00196810  40 82 00 20 */	bne .L_801998F0
/* 801998D4 00196814  80 DB 03 5C */	lwz r6, 0x35c(r27)
/* 801998D8 00196818  38 7C 00 34 */	addi r3, r28, 0x34
/* 801998DC 0019681C  38 BC 00 C0 */	addi r5, r28, 0xc0
/* 801998E0 00196820  38 80 04 E0 */	li r4, 0x4e0
/* 801998E4 00196824  80 C6 00 40 */	lwz r6, 0x40(r6)
/* 801998E8 00196828  4C C6 31 82 */	crclr 6
/* 801998EC 0019682C  4B E9 0D 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801998F0:
/* 801998F0 00196830  3C 60 43 30 */	lis r3, 0x4330
/* 801998F4 00196834  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 801998F8 00196838  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801998FC 0019683C  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 80199900 00196840  C0 22 AC 04 */	lfs f1, lbl_80518F64@sda21(r2)
/* 80199904 00196844  EC 1E F8 28 */	fsubs f0, f30, f31
/* 80199908 00196848  90 61 00 18 */	stw r3, 0x18(r1)
/* 8019990C 0019684C  C8 62 AC 48 */	lfd f3, lbl_80518FA8@sda21(r2)
/* 80199910 00196850  EC 81 E8 2A */	fadds f4, f1, f29
/* 80199914 00196854  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 80199918 00196858  90 01 00 24 */	stw r0, 0x24(r1)
/* 8019991C 0019685C  EC 41 18 28 */	fsubs f2, f1, f3
/* 80199920 00196860  90 61 00 20 */	stw r3, 0x20(r1)
/* 80199924 00196864  C8 21 00 20 */	lfd f1, 0x20(r1)
/* 80199928 00196868  EC 44 10 28 */	fsubs f2, f4, f2
/* 8019992C 0019686C  EC 21 18 28 */	fsubs f1, f1, f3
/* 80199930 00196870  EC 22 08 24 */	fdivs f1, f2, f1
/* 80199934 00196874  EF E1 F8 3A */	fmadds f31, f1, f0, f31
.L_80199938:
/* 80199938 00196878  7F E3 FB 78 */	mr r3, r31
/* 8019993C 0019687C  48 00 17 29 */	bl crMove__Q26PikiAI11ActPathMoveFv
/* 80199940 00196880  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 80199944 00196884  D0 3F 00 B4 */	stfs f1, 0xb4(r31)
/* 80199948 00196888  C0 7F 00 B0 */	lfs f3, 0xb0(r31)
/* 8019994C 0019688C  C0 5F 00 B4 */	lfs f2, 0xb4(r31)
/* 80199950 00196890  EC 03 00 F2 */	fmuls f0, f3, f3
/* 80199954 00196894  C0 9F 00 B8 */	lfs f4, 0xb8(r31)
/* 80199958 00196898  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8019995C 0019689C  EC 84 01 32 */	fmuls f4, f4, f4
/* 80199960 001968A0  EC 00 10 2A */	fadds f0, f0, f2
/* 80199964 001968A4  EC 04 00 2A */	fadds f0, f4, f0
/* 80199968 001968A8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8019996C 001968AC  40 81 00 20 */	ble .L_8019998C
/* 80199970 001968B0  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 80199974 001968B4  EC 44 00 2A */	fadds f2, f4, f0
/* 80199978 001968B8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8019997C 001968BC  40 81 00 14 */	ble .L_80199990
/* 80199980 001968C0  FC 00 10 34 */	frsqrte f0, f2
/* 80199984 001968C4  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80199988 001968C8  48 00 00 08 */	b .L_80199990
.L_8019998C:
/* 8019998C 001968CC  FC 40 08 90 */	fmr f2, f1
.L_80199990:
/* 80199990 001968D0  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80199994 001968D4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80199998 001968D8  40 81 00 30 */	ble .L_801999C8
/* 8019999C 001968DC  C0 22 AC 04 */	lfs f1, lbl_80518F64@sda21(r2)
/* 801999A0 001968E0  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 801999A4 001968E4  EC 21 10 24 */	fdivs f1, f1, f2
/* 801999A8 001968E8  EC 00 00 72 */	fmuls f0, f0, f1
/* 801999AC 001968EC  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 801999B0 001968F0  C0 1F 00 B4 */	lfs f0, 0xb4(r31)
/* 801999B4 001968F4  EC 00 00 72 */	fmuls f0, f0, f1
/* 801999B8 001968F8  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 801999BC 001968FC  C0 1F 00 B8 */	lfs f0, 0xb8(r31)
/* 801999C0 00196900  EC 00 00 72 */	fmuls f0, f0, f1
/* 801999C4 00196904  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
.L_801999C8:
/* 801999C8 00196908  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 801999CC 0019690C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801999D0 00196910  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 801999D4 00196914  C0 1F 00 B4 */	lfs f0, 0xb4(r31)
/* 801999D8 00196918  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801999DC 0019691C  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 801999E0 00196920  C0 1F 00 B8 */	lfs f0, 0xb8(r31)
/* 801999E4 00196924  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801999E8 00196928  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
/* 801999EC 0019692C  83 7F 00 30 */	lwz r27, 0x30(r31)
/* 801999F0 00196930  7F 63 DB 78 */	mr r3, r27
/* 801999F4 00196934  4B FD 0F 7D */	bl getTotalCarryPikmins__Q24Game6PelletFv
/* 801999F8 00196938  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801999FC 0019693C  3C 00 43 30 */	lis r0, 0x4330
/* 80199A00 00196940  90 61 00 24 */	stw r3, 0x24(r1)
/* 80199A04 00196944  38 BF 00 B0 */	addi r5, r31, 0xb0
/* 80199A08 00196948  C8 22 AC 48 */	lfd f1, lbl_80518FA8@sda21(r2)
/* 80199A0C 0019694C  38 80 00 00 */	li r4, 0
/* 80199A10 00196950  90 01 00 20 */	stw r0, 0x20(r1)
/* 80199A14 00196954  80 7B 03 34 */	lwz r3, 0x334(r27)
/* 80199A18 00196958  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80199A1C 0019695C  EC 20 08 28 */	fsubs f1, f0, f1
/* 80199A20 00196960  48 09 B5 31 */	bl "pull__Q24Game11PelletCarryFUsR10Vector3<f>f"
/* 80199A24 00196964  88 1F 00 6C */	lbz r0, 0x6c(r31)
/* 80199A28 00196968  28 00 00 00 */	cmplwi r0, 0
/* 80199A2C 0019696C  41 82 00 2C */	beq .L_80199A58
/* 80199A30 00196970  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80199A34 00196974  40 82 00 24 */	bne .L_80199A58
/* 80199A38 00196978  38 00 00 00 */	li r0, 0
/* 80199A3C 0019697C  7F 63 DB 78 */	mr r3, r27
/* 80199A40 00196980  98 1F 00 6C */	stb r0, 0x6c(r31)
/* 80199A44 00196984  38 80 00 00 */	li r4, 0
/* 80199A48 00196988  81 9B 00 00 */	lwz r12, 0(r27)
/* 80199A4C 0019698C  81 8C 01 4C */	lwz r12, 0x14c(r12)
/* 80199A50 00196990  7D 89 03 A6 */	mtctr r12
/* 80199A54 00196994  4E 80 04 21 */	bctrl 
.L_80199A58:
/* 80199A58 00196998  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 80199A5C 0019699C  81 83 00 00 */	lwz r12, 0(r3)
/* 80199A60 001969A0  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80199A64 001969A4  7D 89 03 A6 */	mtctr r12
/* 80199A68 001969A8  4E 80 04 21 */	bctrl 
/* 80199A6C 001969AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80199A70 001969B0  41 82 01 58 */	beq .L_80199BC8
/* 80199A74 001969B4  83 7F 00 30 */	lwz r27, 0x30(r31)
/* 80199A78 001969B8  38 61 00 08 */	addi r3, r1, 8
/* 80199A7C 001969BC  7F 64 DB 78 */	mr r4, r27
/* 80199A80 001969C0  81 9B 00 00 */	lwz r12, 0(r27)
/* 80199A84 001969C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80199A88 001969C8  7D 89 03 A6 */	mtctr r12
/* 80199A8C 001969CC  4E 80 04 21 */	bctrl 
/* 80199A90 001969D0  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 80199A94 001969D4  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 80199A98 001969D8  C0 A1 00 08 */	lfs f5, 8(r1)
/* 80199A9C 001969DC  EC 43 00 28 */	fsubs f2, f3, f0
/* 80199AA0 001969E0  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 80199AA4 001969E4  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 80199AA8 001969E8  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 80199AAC 001969EC  EC 25 08 28 */	fsubs f1, f5, f1
/* 80199AB0 001969F0  EC C2 00 B2 */	fmuls f6, f2, f2
/* 80199AB4 001969F4  EC 44 00 28 */	fsubs f2, f4, f0
/* 80199AB8 001969F8  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80199ABC 001969FC  EC 21 30 7A */	fmadds f1, f1, f1, f6
/* 80199AC0 00196A00  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80199AC4 00196A04  EF C2 08 2A */	fadds f30, f2, f1
/* 80199AC8 00196A08  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80199ACC 00196A0C  40 81 00 14 */	ble .L_80199AE0
/* 80199AD0 00196A10  40 81 00 14 */	ble .L_80199AE4
/* 80199AD4 00196A14  FC 00 F0 34 */	frsqrte f0, f30
/* 80199AD8 00196A18  EF C0 07 B2 */	fmuls f30, f0, f30
/* 80199ADC 00196A1C  48 00 00 08 */	b .L_80199AE4
.L_80199AE0:
/* 80199AE0 00196A20  FF C0 00 90 */	fmr f30, f0
.L_80199AE4:
/* 80199AE4 00196A24  D0 BF 00 10 */	stfs f5, 0x10(r31)
/* 80199AE8 00196A28  7F 63 DB 78 */	mr r3, r27
/* 80199AEC 00196A2C  D0 7F 00 14 */	stfs f3, 0x14(r31)
/* 80199AF0 00196A30  D0 9F 00 18 */	stfs f4, 0x18(r31)
/* 80199AF4 00196A34  4B FC C0 51 */	bl getWallTimer__Q24Game6PelletFv
/* 80199AF8 00196A38  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80199AFC 00196A3C  28 00 00 63 */	cmplwi r0, 0x63
/* 80199B00 00196A40  40 81 00 C8 */	ble .L_80199BC8
/* 80199B04 00196A44  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 80199B08 00196A48  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80199B0C 00196A4C  40 80 00 BC */	bge .L_80199BC8
/* 80199B10 00196A50  38 00 00 00 */	li r0, 0
/* 80199B14 00196A54  98 1B 03 BC */	stb r0, 0x3bc(r27)
/* 80199B18 00196A58  90 1F 00 34 */	stw r0, 0x34(r31)
/* 80199B1C 00196A5C  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 80199B20 00196A60  28 04 00 00 */	cmplwi r4, 0
/* 80199B24 00196A64  41 82 00 14 */	beq .L_80199B38
/* 80199B28 00196A68  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80199B2C 00196A6C  48 00 9F 35 */	bl release__Q24Game10PathfinderFUl
/* 80199B30 00196A70  38 00 00 00 */	li r0, 0
/* 80199B34 00196A74  90 1F 00 20 */	stw r0, 0x20(r31)
.L_80199B38:
/* 80199B38 00196A78  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80199B3C 00196A7C  38 00 00 00 */	li r0, 0
/* 80199B40 00196A80  B0 03 00 08 */	sth r0, 8(r3)
/* 80199B44 00196A84  A8 DF 00 1C */	lha r6, 0x1c(r31)
/* 80199B48 00196A88  80 BF 00 0C */	lwz r5, 0xc(r31)
/* 80199B4C 00196A8C  2C 06 FF FF */	cmpwi r6, -1
/* 80199B50 00196A90  41 82 00 28 */	beq .L_80199B78
/* 80199B54 00196A94  A8 85 00 08 */	lha r4, 8(r5)
/* 80199B58 00196A98  2C 04 00 04 */	cmpwi r4, 4
/* 80199B5C 00196A9C  40 80 00 1C */	bge .L_80199B78
/* 80199B60 00196AA0  38 64 00 01 */	addi r3, r4, 1
/* 80199B64 00196AA4  54 80 08 3C */	slwi r0, r4, 1
/* 80199B68 00196AA8  B0 65 00 08 */	sth r3, 8(r5)
/* 80199B6C 00196AAC  38 60 00 01 */	li r3, 1
/* 80199B70 00196AB0  7C C5 03 2E */	sthx r6, r5, r0
/* 80199B74 00196AB4  48 00 00 08 */	b .L_80199B7C
.L_80199B78:
/* 80199B78 00196AB8  38 60 00 00 */	li r3, 0
.L_80199B7C:
/* 80199B7C 00196ABC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80199B80 00196AC0  40 82 00 3C */	bne .L_80199BBC
/* 80199B84 00196AC4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80199B88 00196AC8  38 00 00 00 */	li r0, 0
/* 80199B8C 00196ACC  B0 03 00 08 */	sth r0, 8(r3)
/* 80199B90 00196AD0  A8 DF 00 1C */	lha r6, 0x1c(r31)
/* 80199B94 00196AD4  80 BF 00 0C */	lwz r5, 0xc(r31)
/* 80199B98 00196AD8  2C 06 FF FF */	cmpwi r6, -1
/* 80199B9C 00196ADC  41 82 00 20 */	beq .L_80199BBC
/* 80199BA0 00196AE0  A8 85 00 08 */	lha r4, 8(r5)
/* 80199BA4 00196AE4  2C 04 00 04 */	cmpwi r4, 4
/* 80199BA8 00196AE8  40 80 00 14 */	bge .L_80199BBC
/* 80199BAC 00196AEC  38 64 00 01 */	addi r3, r4, 1
/* 80199BB0 00196AF0  54 80 08 3C */	slwi r0, r4, 1
/* 80199BB4 00196AF4  B0 65 00 08 */	sth r3, 8(r5)
/* 80199BB8 00196AF8  7C C5 03 2E */	sthx r6, r5, r0
.L_80199BBC:
/* 80199BBC 00196AFC  7F E3 FB 78 */	mr r3, r31
/* 80199BC0 00196B00  38 80 00 00 */	li r4, 0
/* 80199BC4 00196B04  4B FF EC 4D */	bl initPathfinding__Q26PikiAI11ActPathMoveFb
.L_80199BC8:
/* 80199BC8 00196B08  38 60 00 01 */	li r3, 1
/* 80199BCC 00196B0C  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 80199BD0 00196B10  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80199BD4 00196B14  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 80199BD8 00196B18  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80199BDC 00196B1C  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 80199BE0 00196B20  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 80199BE4 00196B24  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 80199BE8 00196B28  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80199BEC 00196B2C  7C 08 03 A6 */	mtlr r0
/* 80199BF0 00196B30  38 21 00 70 */	addi r1, r1, 0x70
/* 80199BF4 00196B34  4E 80 00 20 */	blr 
.endfn execMove__Q26PikiAI11ActPathMoveFv

.fn cleanup__Q26PikiAI11ActPathMoveFv, global
/* 80199BF8 00196B38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80199BFC 00196B3C  7C 08 02 A6 */	mflr r0
/* 80199C00 00196B40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80199C04 00196B44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80199C08 00196B48  93 C1 00 08 */	stw r30, 8(r1)
/* 80199C0C 00196B4C  7C 7E 1B 78 */	mr r30, r3
/* 80199C10 00196B50  80 63 00 30 */	lwz r3, 0x30(r3)
/* 80199C14 00196B54  81 83 00 00 */	lwz r12, 0(r3)
/* 80199C18 00196B58  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80199C1C 00196B5C  7D 89 03 A6 */	mtctr r12
/* 80199C20 00196B60  4E 80 04 21 */	bctrl 
/* 80199C24 00196B64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80199C28 00196B68  41 82 00 2C */	beq .L_80199C54
/* 80199C2C 00196B6C  83 FE 00 30 */	lwz r31, 0x30(r30)
/* 80199C30 00196B70  7F E3 FB 78 */	mr r3, r31
/* 80199C34 00196B74  81 9F 00 00 */	lwz r12, 0(r31)
/* 80199C38 00196B78  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80199C3C 00196B7C  7D 89 03 A6 */	mtctr r12
/* 80199C40 00196B80  4E 80 04 21 */	bctrl 
/* 80199C44 00196B84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80199C48 00196B88  41 82 00 0C */	beq .L_80199C54
/* 80199C4C 00196B8C  80 7F 03 34 */	lwz r3, 0x334(r31)
/* 80199C50 00196B90  48 09 B2 D9 */	bl reset__Q24Game11PelletCarryFv
.L_80199C54:
/* 80199C54 00196B94  80 9E 00 20 */	lwz r4, 0x20(r30)
/* 80199C58 00196B98  28 04 00 00 */	cmplwi r4, 0
/* 80199C5C 00196B9C  41 82 00 0C */	beq .L_80199C68
/* 80199C60 00196BA0  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 80199C64 00196BA4  48 00 9D FD */	bl release__Q24Game10PathfinderFUl
.L_80199C68:
/* 80199C68 00196BA8  38 00 00 00 */	li r0, 0
/* 80199C6C 00196BAC  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80199C70 00196BB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80199C74 00196BB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80199C78 00196BB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80199C7C 00196BBC  7C 08 03 A6 */	mtlr r0
/* 80199C80 00196BC0  38 21 00 10 */	addi r1, r1, 0x10
/* 80199C84 00196BC4  4E 80 00 20 */	blr 
.endfn cleanup__Q26PikiAI11ActPathMoveFv

.fn execMoveGuru__Q26PikiAI11ActPathMoveFv, global
/* 80199C88 00196BC8  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80199C8C 00196BCC  7C 08 02 A6 */	mflr r0
/* 80199C90 00196BD0  90 01 00 84 */	stw r0, 0x84(r1)
/* 80199C94 00196BD4  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80199C98 00196BD8  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80199C9C 00196BDC  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80199CA0 00196BE0  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 80199CA4 00196BE4  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 80199CA8 00196BE8  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 80199CAC 00196BEC  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 80199CB0 00196BF0  80 83 00 64 */	lwz r4, 0x64(r3)
/* 80199CB4 00196BF4  3C A0 80 48 */	lis r5, lbl_8047F070@ha
/* 80199CB8 00196BF8  7C 7E 1B 78 */	mr r30, r3
/* 80199CBC 00196BFC  88 04 00 34 */	lbz r0, 0x34(r4)
/* 80199CC0 00196C00  3B E5 F0 70 */	addi r31, r5, lbl_8047F070@l
/* 80199CC4 00196C04  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80199CC8 00196C08  40 82 00 14 */	bne .L_80199CDC
/* 80199CCC 00196C0C  38 00 00 01 */	li r0, 1
/* 80199CD0 00196C10  38 60 00 01 */	li r3, 1
/* 80199CD4 00196C14  B0 1E 00 1E */	sth r0, 0x1e(r30)
/* 80199CD8 00196C18  48 00 04 6C */	b .L_8019A144
.L_80199CDC:
/* 80199CDC 00196C1C  80 9E 00 70 */	lwz r4, 0x70(r30)
/* 80199CE0 00196C20  2C 04 00 00 */	cmpwi r4, 0
/* 80199CE4 00196C24  41 80 00 BC */	blt .L_80199DA0
/* 80199CE8 00196C28  48 00 04 89 */	bl getWayPoint__Q26PikiAI11ActPathMoveFi
/* 80199CEC 00196C2C  80 9E 00 64 */	lwz r4, 0x64(r30)
/* 80199CF0 00196C30  C0 E3 00 50 */	lfs f7, 0x50(r3)
/* 80199CF4 00196C34  C0 04 00 50 */	lfs f0, 0x50(r4)
/* 80199CF8 00196C38  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 80199CFC 00196C3C  EC 80 38 28 */	fsubs f4, f0, f7
/* 80199D00 00196C40  C0 C3 00 54 */	lfs f6, 0x54(r3)
/* 80199D04 00196C44  C0 04 00 4C */	lfs f0, 0x4c(r4)
/* 80199D08 00196C48  C1 03 00 4C */	lfs f8, 0x4c(r3)
/* 80199D0C 00196C4C  EC A1 30 28 */	fsubs f5, f1, f6
/* 80199D10 00196C50  EC 24 01 32 */	fmuls f1, f4, f4
/* 80199D14 00196C54  EC 60 40 28 */	fsubs f3, f0, f8
/* 80199D18 00196C58  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80199D1C 00196C5C  EC 45 01 72 */	fmuls f2, f5, f5
/* 80199D20 00196C60  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 80199D24 00196C64  EC 42 08 2A */	fadds f2, f2, f1
/* 80199D28 00196C68  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80199D2C 00196C6C  40 81 00 14 */	ble .L_80199D40
/* 80199D30 00196C70  40 81 00 14 */	ble .L_80199D44
/* 80199D34 00196C74  FC 00 10 34 */	frsqrte f0, f2
/* 80199D38 00196C78  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80199D3C 00196C7C  48 00 00 08 */	b .L_80199D44
.L_80199D40:
/* 80199D40 00196C80  FC 40 00 90 */	fmr f2, f0
.L_80199D44:
/* 80199D44 00196C84  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80199D48 00196C88  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80199D4C 00196C8C  40 81 00 1C */	ble .L_80199D68
/* 80199D50 00196C90  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 80199D54 00196C94  EC 00 10 24 */	fdivs f0, f0, f2
/* 80199D58 00196C98  EC 63 00 32 */	fmuls f3, f3, f0
/* 80199D5C 00196C9C  EC 84 00 32 */	fmuls f4, f4, f0
/* 80199D60 00196CA0  EC A5 00 32 */	fmuls f5, f5, f0
/* 80199D64 00196CA4  48 00 00 08 */	b .L_80199D6C
.L_80199D68:
/* 80199D68 00196CA8  FC 40 00 90 */	fmr f2, f0
.L_80199D6C:
/* 80199D6C 00196CAC  C0 22 AC 54 */	lfs f1, lbl_80518FB4@sda21(r2)
/* 80199D70 00196CB0  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80199D74 00196CB4  ED 22 08 28 */	fsubs f9, f2, f1
/* 80199D78 00196CB8  FC 09 00 40 */	fcmpo cr0, f9, f0
/* 80199D7C 00196CBC  40 80 00 08 */	bge .L_80199D84
/* 80199D80 00196CC0  FD 20 00 90 */	fmr f9, f0
.L_80199D84:
/* 80199D84 00196CC4  EC 43 02 72 */	fmuls f2, f3, f9
/* 80199D88 00196CC8  EC 24 02 72 */	fmuls f1, f4, f9
/* 80199D8C 00196CCC  EC 05 02 72 */	fmuls f0, f5, f9
/* 80199D90 00196CD0  EC 88 10 2A */	fadds f4, f8, f2
/* 80199D94 00196CD4  EC A7 08 2A */	fadds f5, f7, f1
/* 80199D98 00196CD8  EC C6 00 2A */	fadds f6, f6, f0
/* 80199D9C 00196CDC  48 00 00 10 */	b .L_80199DAC
.L_80199DA0:
/* 80199DA0 00196CE0  C0 9E 00 58 */	lfs f4, 0x58(r30)
/* 80199DA4 00196CE4  C0 BE 00 5C */	lfs f5, 0x5c(r30)
/* 80199DA8 00196CE8  C0 DE 00 60 */	lfs f6, 0x60(r30)
.L_80199DAC:
/* 80199DAC 00196CEC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80199DB0 00196CF0  C0 62 AC 34 */	lfs f3, lbl_80518F94@sda21(r2)
/* 80199DB4 00196CF4  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 80199DB8 00196CF8  C0 3E 00 68 */	lfs f1, 0x68(r30)
/* 80199DBC 00196CFC  C0 02 AC 58 */	lfs f0, lbl_80518FB8@sda21(r2)
/* 80199DC0 00196D00  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 80199DC4 00196D04  D0 3E 00 68 */	stfs f1, 0x68(r30)
/* 80199DC8 00196D08  C0 3E 00 68 */	lfs f1, 0x68(r30)
/* 80199DCC 00196D0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80199DD0 00196D10  40 81 00 0C */	ble .L_80199DDC
/* 80199DD4 00196D14  EC 01 00 28 */	fsubs f0, f1, f0
/* 80199DD8 00196D18  D0 1E 00 68 */	stfs f0, 0x68(r30)
.L_80199DDC:
/* 80199DDC 00196D1C  C0 7E 00 68 */	lfs f3, 0x68(r30)
/* 80199DE0 00196D20  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80199DE4 00196D24  FC 20 18 90 */	fmr f1, f3
/* 80199DE8 00196D28  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80199DEC 00196D2C  40 80 00 08 */	bge .L_80199DF4
/* 80199DF0 00196D30  FC 20 18 50 */	fneg f1, f3
.L_80199DF4:
/* 80199DF4 00196D34  C0 42 AC 5C */	lfs f2, lbl_80518FBC@sda21(r2)
/* 80199DF8 00196D38  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80199DFC 00196D3C  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80199E00 00196D40  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80199E04 00196D44  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80199E08 00196D48  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80199E0C 00196D4C  FC 00 08 1E */	fctiwz f0, f1
/* 80199E10 00196D50  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80199E14 00196D54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80199E18 00196D58  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80199E1C 00196D5C  7C 64 02 14 */	add r3, r4, r0
/* 80199E20 00196D60  C0 23 00 04 */	lfs f1, 4(r3)
/* 80199E24 00196D64  40 80 00 28 */	bge .L_80199E4C
/* 80199E28 00196D68  C0 02 AC 60 */	lfs f0, lbl_80518FC0@sda21(r2)
/* 80199E2C 00196D6C  EC 03 00 32 */	fmuls f0, f3, f0
/* 80199E30 00196D70  FC 00 00 1E */	fctiwz f0, f0
/* 80199E34 00196D74  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80199E38 00196D78  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80199E3C 00196D7C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80199E40 00196D80  7C 04 04 2E */	lfsx f0, r4, r0
/* 80199E44 00196D84  FC 40 00 50 */	fneg f2, f0
/* 80199E48 00196D88  48 00 00 1C */	b .L_80199E64
.L_80199E4C:
/* 80199E4C 00196D8C  EC 03 00 B2 */	fmuls f0, f3, f2
/* 80199E50 00196D90  FC 00 00 1E */	fctiwz f0, f0
/* 80199E54 00196D94  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80199E58 00196D98  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80199E5C 00196D9C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80199E60 00196DA0  7C 44 04 2E */	lfsx f2, r4, r0
.L_80199E64:
/* 80199E64 00196DA4  C0 02 AC 20 */	lfs f0, lbl_80518F80@sda21(r2)
/* 80199E68 00196DA8  38 61 00 08 */	addi r3, r1, 8
/* 80199E6C 00196DAC  C0 62 AC 00 */	lfs f3, lbl_80518F60@sda21(r2)
/* 80199E70 00196DB0  EC 42 00 32 */	fmuls f2, f2, f0
/* 80199E74 00196DB4  EC 63 00 32 */	fmuls f3, f3, f0
/* 80199E78 00196DB8  EC 01 00 32 */	fmuls f0, f1, f0
/* 80199E7C 00196DBC  EC 42 20 2A */	fadds f2, f2, f4
/* 80199E80 00196DC0  EC 63 28 2A */	fadds f3, f3, f5
/* 80199E84 00196DC4  EC 00 30 2A */	fadds f0, f0, f6
/* 80199E88 00196DC8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80199E8C 00196DCC  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 80199E90 00196DD0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80199E94 00196DD4  80 9E 00 30 */	lwz r4, 0x30(r30)
/* 80199E98 00196DD8  81 84 00 00 */	lwz r12, 0(r4)
/* 80199E9C 00196DDC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80199EA0 00196DE0  7D 89 03 A6 */	mtctr r12
/* 80199EA4 00196DE4  4E 80 04 21 */	bctrl 
/* 80199EA8 00196DE8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80199EAC 00196DEC  C0 01 00 08 */	lfs f0, 8(r1)
/* 80199EB0 00196DF0  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 80199EB4 00196DF4  EC 42 00 28 */	fsubs f2, f2, f0
/* 80199EB8 00196DF8  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 80199EBC 00196DFC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80199EC0 00196E00  EC C1 00 72 */	fmuls f6, f1, f1
/* 80199EC4 00196E04  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 80199EC8 00196E08  EC A3 00 28 */	fsubs f5, f3, f0
/* 80199ECC 00196E0C  EC 02 00 B2 */	fmuls f0, f2, f2
/* 80199ED0 00196E10  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 80199ED4 00196E14  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80199ED8 00196E18  EC E5 01 72 */	fmuls f7, f5, f5
/* 80199EDC 00196E1C  EC 00 30 2A */	fadds f0, f0, f6
/* 80199EE0 00196E20  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 80199EE4 00196E24  EC 64 18 28 */	fsubs f3, f4, f3
/* 80199EE8 00196E28  EC 07 00 2A */	fadds f0, f7, f0
/* 80199EEC 00196E2C  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 80199EF0 00196E30  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80199EF4 00196E34  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80199EF8 00196E38  40 81 00 20 */	ble .L_80199F18
/* 80199EFC 00196E3C  EC 02 30 BA */	fmadds f0, f2, f2, f6
/* 80199F00 00196E40  EC 87 00 2A */	fadds f4, f7, f0
/* 80199F04 00196E44  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 80199F08 00196E48  40 81 00 14 */	ble .L_80199F1C
/* 80199F0C 00196E4C  FC 00 20 34 */	frsqrte f0, f4
/* 80199F10 00196E50  EC 80 01 32 */	fmuls f4, f0, f4
/* 80199F14 00196E54  48 00 00 08 */	b .L_80199F1C
.L_80199F18:
/* 80199F18 00196E58  FC 80 08 90 */	fmr f4, f1
.L_80199F1C:
/* 80199F1C 00196E5C  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80199F20 00196E60  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80199F24 00196E64  40 81 00 34 */	ble .L_80199F58
/* 80199F28 00196E68  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 80199F2C 00196E6C  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80199F30 00196E70  EC 60 20 24 */	fdivs f3, f0, f4
/* 80199F34 00196E74  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80199F38 00196E78  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80199F3C 00196E7C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80199F40 00196E80  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80199F44 00196E84  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80199F48 00196E88  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80199F4C 00196E8C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80199F50 00196E90  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80199F54 00196E94  48 00 00 08 */	b .L_80199F5C
.L_80199F58:
/* 80199F58 00196E98  FC 80 00 90 */	fmr f4, f0
.L_80199F5C:
/* 80199F5C 00196E9C  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 80199F60 00196EA0  FC 00 20 00 */	fcmpu cr0, f0, f4
/* 80199F64 00196EA4  40 82 00 10 */	bne .L_80199F74
/* 80199F68 00196EA8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80199F6C 00196EAC  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80199F70 00196EB0  D0 01 00 1C */	stfs f0, 0x1c(r1)
.L_80199F74:
/* 80199F74 00196EB4  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 80199F78 00196EB8  80 9E 00 04 */	lwz r4, 4(r30)
/* 80199F7C 00196EBC  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 80199F80 00196EC0  80 64 00 C0 */	lwz r3, 0xc0(r4)
/* 80199F84 00196EC4  28 00 04 01 */	cmplwi r0, 0x401
/* 80199F88 00196EC8  C3 C3 11 00 */	lfs f30, 0x1100(r3)
/* 80199F8C 00196ECC  C3 E3 11 28 */	lfs f31, 0x1128(r3)
/* 80199F90 00196ED0  41 82 00 18 */	beq .L_80199FA8
/* 80199F94 00196ED4  38 7F 00 34 */	addi r3, r31, 0x34
/* 80199F98 00196ED8  38 BF 00 48 */	addi r5, r31, 0x48
/* 80199F9C 00196EDC  38 80 04 BF */	li r4, 0x4bf
/* 80199FA0 00196EE0  4C C6 31 82 */	crclr 6
/* 80199FA4 00196EE4  4B E9 06 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80199FA8:
/* 80199FA8 00196EE8  83 7E 00 30 */	lwz r27, 0x30(r30)
/* 80199FAC 00196EEC  80 7B 03 58 */	lwz r3, 0x358(r27)
/* 80199FB0 00196EF0  28 03 00 00 */	cmplwi r3, 0
/* 80199FB4 00196EF4  41 82 00 30 */	beq .L_80199FE4
/* 80199FB8 00196EF8  80 63 00 08 */	lwz r3, 8(r3)
/* 80199FBC 00196EFC  81 83 00 00 */	lwz r12, 0(r3)
/* 80199FC0 00196F00  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80199FC4 00196F04  7D 89 03 A6 */	mtctr r12
/* 80199FC8 00196F08  4E 80 04 21 */	bctrl 
/* 80199FCC 00196F0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80199FD0 00196F10  41 82 00 14 */	beq .L_80199FE4
/* 80199FD4 00196F14  80 7E 00 04 */	lwz r3, 4(r30)
/* 80199FD8 00196F18  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80199FDC 00196F1C  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 80199FE0 00196F20  48 00 00 C8 */	b .L_8019A0A8
.L_80199FE4:
/* 80199FE4 00196F24  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80199FE8 00196F28  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80199FEC 00196F2C  2C 00 00 01 */	cmpwi r0, 1
/* 80199FF0 00196F30  40 82 00 20 */	bne .L_8019A010
/* 80199FF4 00196F34  88 1B 03 2C */	lbz r0, 0x32c(r27)
/* 80199FF8 00196F38  28 00 00 03 */	cmplwi r0, 3
/* 80199FFC 00196F3C  40 82 00 14 */	bne .L_8019A010
/* 8019A000 00196F40  80 7E 00 04 */	lwz r3, 4(r30)
/* 8019A004 00196F44  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8019A008 00196F48  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 8019A00C 00196F4C  48 00 00 9C */	b .L_8019A0A8
.L_8019A010:
/* 8019A010 00196F50  80 9E 00 04 */	lwz r4, 4(r30)
/* 8019A014 00196F54  7F 63 DB 78 */	mr r3, r27
/* 8019A018 00196F58  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 8019A01C 00196F5C  C0 04 02 C8 */	lfs f0, 0x2c8(r4)
/* 8019A020 00196F60  EF C0 07 B2 */	fmuls f30, f0, f30
/* 8019A024 00196F64  EF E0 07 F2 */	fmuls f31, f0, f31
/* 8019A028 00196F68  4B FC D5 69 */	bl getPelletConfigMin__Q24Game6PelletFv
/* 8019A02C 00196F6C  7C 7C 1B 78 */	mr r28, r3
/* 8019A030 00196F70  7F 63 DB 78 */	mr r3, r27
/* 8019A034 00196F74  4B FC D5 7D */	bl getPelletConfigMax__Q24Game6PelletFv
/* 8019A038 00196F78  7C 7D 1B 79 */	or. r29, r3, r3
/* 8019A03C 00196F7C  C3 BB 04 18 */	lfs f29, 0x418(r27)
/* 8019A040 00196F80  40 82 00 20 */	bne .L_8019A060
/* 8019A044 00196F84  80 DB 03 5C */	lwz r6, 0x35c(r27)
/* 8019A048 00196F88  38 7F 00 34 */	addi r3, r31, 0x34
/* 8019A04C 00196F8C  38 BF 00 C0 */	addi r5, r31, 0xc0
/* 8019A050 00196F90  38 80 04 E0 */	li r4, 0x4e0
/* 8019A054 00196F94  80 C6 00 40 */	lwz r6, 0x40(r6)
/* 8019A058 00196F98  4C C6 31 82 */	crclr 6
/* 8019A05C 00196F9C  4B E9 05 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8019A060:
/* 8019A060 00196FA0  3C 60 43 30 */	lis r3, 0x4330
/* 8019A064 00196FA4  6F 80 80 00 */	xoris r0, r28, 0x8000
/* 8019A068 00196FA8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8019A06C 00196FAC  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 8019A070 00196FB0  C0 22 AC 04 */	lfs f1, lbl_80518F64@sda21(r2)
/* 8019A074 00196FB4  EC 1E F8 28 */	fsubs f0, f30, f31
/* 8019A078 00196FB8  90 61 00 30 */	stw r3, 0x30(r1)
/* 8019A07C 00196FBC  C8 62 AC 48 */	lfd f3, lbl_80518FA8@sda21(r2)
/* 8019A080 00196FC0  EC 81 E8 2A */	fadds f4, f1, f29
/* 8019A084 00196FC4  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 8019A088 00196FC8  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8019A08C 00196FCC  EC 41 18 28 */	fsubs f2, f1, f3
/* 8019A090 00196FD0  90 61 00 28 */	stw r3, 0x28(r1)
/* 8019A094 00196FD4  C8 21 00 28 */	lfd f1, 0x28(r1)
/* 8019A098 00196FD8  EC 44 10 28 */	fsubs f2, f4, f2
/* 8019A09C 00196FDC  EC 21 18 28 */	fsubs f1, f1, f3
/* 8019A0A0 00196FE0  EC 22 08 24 */	fdivs f1, f2, f1
/* 8019A0A4 00196FE4  EC 21 F8 3A */	fmadds f1, f1, f0, f31
.L_8019A0A8:
/* 8019A0A8 00196FE8  C0 02 AC 18 */	lfs f0, lbl_80518F78@sda21(r2)
/* 8019A0AC 00196FEC  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8019A0B0 00196FF0  EC 61 00 32 */	fmuls f3, f1, f0
/* 8019A0B4 00196FF4  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8019A0B8 00196FF8  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8019A0BC 00196FFC  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8019A0C0 00197000  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8019A0C4 00197004  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8019A0C8 00197008  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8019A0CC 0019700C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8019A0D0 00197010  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8019A0D4 00197014  83 7E 00 30 */	lwz r27, 0x30(r30)
/* 8019A0D8 00197018  7F 63 DB 78 */	mr r3, r27
/* 8019A0DC 0019701C  4B FD 08 95 */	bl getTotalCarryPikmins__Q24Game6PelletFv
/* 8019A0E0 00197020  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8019A0E4 00197024  3C 00 43 30 */	lis r0, 0x4330
/* 8019A0E8 00197028  90 61 00 34 */	stw r3, 0x34(r1)
/* 8019A0EC 0019702C  38 A1 00 14 */	addi r5, r1, 0x14
/* 8019A0F0 00197030  C8 22 AC 48 */	lfd f1, lbl_80518FA8@sda21(r2)
/* 8019A0F4 00197034  38 80 00 00 */	li r4, 0
/* 8019A0F8 00197038  90 01 00 30 */	stw r0, 0x30(r1)
/* 8019A0FC 0019703C  80 7B 03 34 */	lwz r3, 0x334(r27)
/* 8019A100 00197040  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 8019A104 00197044  EC 20 08 28 */	fsubs f1, f0, f1
/* 8019A108 00197048  48 09 AE 49 */	bl "pull__Q24Game11PelletCarryFUsR10Vector3<f>f"
/* 8019A10C 0019704C  88 1E 00 6C */	lbz r0, 0x6c(r30)
/* 8019A110 00197050  28 00 00 00 */	cmplwi r0, 0
/* 8019A114 00197054  41 82 00 2C */	beq .L_8019A140
/* 8019A118 00197058  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019A11C 0019705C  40 82 00 24 */	bne .L_8019A140
/* 8019A120 00197060  38 00 00 00 */	li r0, 0
/* 8019A124 00197064  7F 63 DB 78 */	mr r3, r27
/* 8019A128 00197068  98 1E 00 6C */	stb r0, 0x6c(r30)
/* 8019A12C 0019706C  38 80 00 00 */	li r4, 0
/* 8019A130 00197070  81 9B 00 00 */	lwz r12, 0(r27)
/* 8019A134 00197074  81 8C 01 4C */	lwz r12, 0x14c(r12)
/* 8019A138 00197078  7D 89 03 A6 */	mtctr r12
/* 8019A13C 0019707C  4E 80 04 21 */	bctrl 
.L_8019A140:
/* 8019A140 00197080  38 60 00 01 */	li r3, 1
.L_8019A144:
/* 8019A144 00197084  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8019A148 00197088  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8019A14C 0019708C  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 8019A150 00197090  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 8019A154 00197094  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 8019A158 00197098  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 8019A15C 0019709C  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 8019A160 001970A0  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8019A164 001970A4  7C 08 03 A6 */	mtlr r0
/* 8019A168 001970A8  38 21 00 80 */	addi r1, r1, 0x80
/* 8019A16C 001970AC  4E 80 00 20 */	blr 
.endfn execMoveGuru__Q26PikiAI11ActPathMoveFv

.fn getWayPoint__Q26PikiAI11ActPathMoveFi, global
/* 8019A170 001970B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019A174 001970B4  7C 08 02 A6 */	mflr r0
/* 8019A178 001970B8  2C 04 00 00 */	cmpwi r4, 0
/* 8019A17C 001970BC  38 C0 00 00 */	li r6, 0
/* 8019A180 001970C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019A184 001970C4  80 A3 00 48 */	lwz r5, 0x48(r3)
/* 8019A188 001970C8  40 81 00 64 */	ble .L_8019A1EC
/* 8019A18C 001970CC  2C 04 00 08 */	cmpwi r4, 8
/* 8019A190 001970D0  38 64 FF F8 */	addi r3, r4, -8
/* 8019A194 001970D4  40 81 00 40 */	ble .L_8019A1D4
/* 8019A198 001970D8  38 03 00 07 */	addi r0, r3, 7
/* 8019A19C 001970DC  54 00 E8 FE */	srwi r0, r0, 3
/* 8019A1A0 001970E0  7C 09 03 A6 */	mtctr r0
/* 8019A1A4 001970E4  2C 03 00 00 */	cmpwi r3, 0
/* 8019A1A8 001970E8  40 81 00 2C */	ble .L_8019A1D4
.L_8019A1AC:
/* 8019A1AC 001970EC  80 65 00 0C */	lwz r3, 0xc(r5)
/* 8019A1B0 001970F0  38 C6 00 08 */	addi r6, r6, 8
/* 8019A1B4 001970F4  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8019A1B8 001970F8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8019A1BC 001970FC  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8019A1C0 00197100  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8019A1C4 00197104  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8019A1C8 00197108  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8019A1CC 0019710C  80 A3 00 0C */	lwz r5, 0xc(r3)
/* 8019A1D0 00197110  42 00 FF DC */	bdnz .L_8019A1AC
.L_8019A1D4:
/* 8019A1D4 00197114  7C 06 20 50 */	subf r0, r6, r4
/* 8019A1D8 00197118  7C 09 03 A6 */	mtctr r0
/* 8019A1DC 0019711C  7C 06 20 00 */	cmpw r6, r4
/* 8019A1E0 00197120  40 80 00 0C */	bge .L_8019A1EC
.L_8019A1E4:
/* 8019A1E4 00197124  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019A1E8 00197128  42 00 FF FC */	bdnz .L_8019A1E4
.L_8019A1EC:
/* 8019A1EC 0019712C  28 05 00 00 */	cmplwi r5, 0
/* 8019A1F0 00197130  41 82 00 24 */	beq .L_8019A214
/* 8019A1F4 00197134  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019A1F8 00197138  A8 85 00 20 */	lha r4, 0x20(r5)
/* 8019A1FC 0019713C  80 63 00 08 */	lwz r3, 8(r3)
/* 8019A200 00197140  81 83 00 00 */	lwz r12, 0(r3)
/* 8019A204 00197144  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019A208 00197148  7D 89 03 A6 */	mtctr r12
/* 8019A20C 0019714C  4E 80 04 21 */	bctrl 
/* 8019A210 00197150  48 00 00 08 */	b .L_8019A218
.L_8019A214:
/* 8019A214 00197154  38 60 00 00 */	li r3, 0
.L_8019A218:
/* 8019A218 00197158  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019A21C 0019715C  7C 08 03 A6 */	mtlr r0
/* 8019A220 00197160  38 21 00 10 */	addi r1, r1, 0x10
/* 8019A224 00197164  4E 80 00 20 */	blr 
.endfn getWayPoint__Q26PikiAI11ActPathMoveFi

.fn crGetPoint__Q26PikiAI11ActPathMoveFi, global
/* 8019A228 00197168  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019A22C 0019716C  7C 08 02 A6 */	mflr r0
/* 8019A230 00197170  2C 05 00 00 */	cmpwi r5, 0
/* 8019A234 00197174  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019A238 00197178  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8019A23C 0019717C  7C 7F 1B 78 */	mr r31, r3
/* 8019A240 00197180  93 C1 00 08 */	stw r30, 8(r1)
/* 8019A244 00197184  7C 9E 23 78 */	mr r30, r4
/* 8019A248 00197188  40 80 00 20 */	bge .L_8019A268
/* 8019A24C 0019718C  C0 1E 00 A4 */	lfs f0, 0xa4(r30)
/* 8019A250 00197190  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8019A254 00197194  C0 1E 00 A8 */	lfs f0, 0xa8(r30)
/* 8019A258 00197198  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8019A25C 0019719C  C0 1E 00 AC */	lfs f0, 0xac(r30)
/* 8019A260 001971A0  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8019A264 001971A4  48 00 01 38 */	b .L_8019A39C
.L_8019A268:
/* 8019A268 001971A8  80 1E 00 4C */	lwz r0, 0x4c(r30)
/* 8019A26C 001971AC  7C 05 00 00 */	cmpw r5, r0
/* 8019A270 001971B0  41 80 00 20 */	blt .L_8019A290
/* 8019A274 001971B4  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 8019A278 001971B8  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8019A27C 001971BC  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 8019A280 001971C0  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8019A284 001971C4  C0 1E 00 2C */	lfs f0, 0x2c(r30)
/* 8019A288 001971C8  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8019A28C 001971CC  48 00 01 10 */	b .L_8019A39C
.L_8019A290:
/* 8019A290 001971D0  2C 05 00 00 */	cmpwi r5, 0
/* 8019A294 001971D4  80 DE 00 48 */	lwz r6, 0x48(r30)
/* 8019A298 001971D8  38 60 00 00 */	li r3, 0
/* 8019A29C 001971DC  40 81 00 64 */	ble .L_8019A300
/* 8019A2A0 001971E0  2C 05 00 08 */	cmpwi r5, 8
/* 8019A2A4 001971E4  38 85 FF F8 */	addi r4, r5, -8
/* 8019A2A8 001971E8  40 81 00 40 */	ble .L_8019A2E8
/* 8019A2AC 001971EC  38 04 00 07 */	addi r0, r4, 7
/* 8019A2B0 001971F0  54 00 E8 FE */	srwi r0, r0, 3
/* 8019A2B4 001971F4  7C 09 03 A6 */	mtctr r0
/* 8019A2B8 001971F8  2C 04 00 00 */	cmpwi r4, 0
/* 8019A2BC 001971FC  40 81 00 2C */	ble .L_8019A2E8
.L_8019A2C0:
/* 8019A2C0 00197200  80 86 00 0C */	lwz r4, 0xc(r6)
/* 8019A2C4 00197204  38 63 00 08 */	addi r3, r3, 8
/* 8019A2C8 00197208  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019A2CC 0019720C  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019A2D0 00197210  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019A2D4 00197214  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019A2D8 00197218  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019A2DC 0019721C  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019A2E0 00197220  80 C4 00 0C */	lwz r6, 0xc(r4)
/* 8019A2E4 00197224  42 00 FF DC */	bdnz .L_8019A2C0
.L_8019A2E8:
/* 8019A2E8 00197228  7C 03 28 50 */	subf r0, r3, r5
/* 8019A2EC 0019722C  7C 09 03 A6 */	mtctr r0
/* 8019A2F0 00197230  7C 03 28 00 */	cmpw r3, r5
/* 8019A2F4 00197234  40 80 00 0C */	bge .L_8019A300
.L_8019A2F8:
/* 8019A2F8 00197238  80 C6 00 0C */	lwz r6, 0xc(r6)
/* 8019A2FC 0019723C  42 00 FF FC */	bdnz .L_8019A2F8
.L_8019A300:
/* 8019A300 00197240  28 06 00 00 */	cmplwi r6, 0
/* 8019A304 00197244  41 82 00 24 */	beq .L_8019A328
/* 8019A308 00197248  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019A30C 0019724C  A8 86 00 20 */	lha r4, 0x20(r6)
/* 8019A310 00197250  80 63 00 08 */	lwz r3, 8(r3)
/* 8019A314 00197254  81 83 00 00 */	lwz r12, 0(r3)
/* 8019A318 00197258  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019A31C 0019725C  7D 89 03 A6 */	mtctr r12
/* 8019A320 00197260  4E 80 04 21 */	bctrl 
/* 8019A324 00197264  48 00 00 08 */	b .L_8019A32C
.L_8019A328:
/* 8019A328 00197268  38 60 00 00 */	li r3, 0
.L_8019A32C:
/* 8019A32C 0019726C  28 03 00 00 */	cmplwi r3, 0
/* 8019A330 00197270  40 82 00 24 */	bne .L_8019A354
/* 8019A334 00197274  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 8019A338 00197278  C4 03 41 E4 */	lfsu f0, "zero__10Vector3<f>"@l(r3)
/* 8019A33C 0019727C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8019A340 00197280  C0 03 00 04 */	lfs f0, 4(r3)
/* 8019A344 00197284  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8019A348 00197288  C0 03 00 08 */	lfs f0, 8(r3)
/* 8019A34C 0019728C  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8019A350 00197290  48 00 00 4C */	b .L_8019A39C
.L_8019A354:
/* 8019A354 00197294  C0 A3 00 50 */	lfs f5, 0x50(r3)
/* 8019A358 00197298  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 8019A35C 0019729C  C0 83 00 4C */	lfs f4, 0x4c(r3)
/* 8019A360 001972A0  EC 65 00 28 */	fsubs f3, f5, f0
/* 8019A364 001972A4  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 8019A368 001972A8  C0 C3 00 54 */	lfs f6, 0x54(r3)
/* 8019A36C 001972AC  C0 3E 00 2C */	lfs f1, 0x2c(r30)
/* 8019A370 001972B0  EC 44 00 28 */	fsubs f2, f4, f0
/* 8019A374 001972B4  EC E3 00 F2 */	fmuls f7, f3, f3
/* 8019A378 001972B8  EC 66 08 28 */	fsubs f3, f6, f1
/* 8019A37C 001972BC  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019A380 001972C0  EC 22 38 BA */	fmadds f1, f2, f2, f7
/* 8019A384 001972C4  EC 43 00 F2 */	fmuls f2, f3, f3
/* 8019A388 001972C8  EC 22 08 2A */	fadds f1, f2, f1
/* 8019A38C 001972CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019A390 001972D0  D0 9F 00 00 */	stfs f4, 0(r31)
/* 8019A394 001972D4  D0 BF 00 04 */	stfs f5, 4(r31)
/* 8019A398 001972D8  D0 DF 00 08 */	stfs f6, 8(r31)
.L_8019A39C:
/* 8019A39C 001972DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019A3A0 001972E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8019A3A4 001972E4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8019A3A8 001972E8  7C 08 03 A6 */	mtlr r0
/* 8019A3AC 001972EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8019A3B0 001972F0  4E 80 00 20 */	blr 
.endfn crGetPoint__Q26PikiAI11ActPathMoveFi

.fn contextCheck__Q26PikiAI11ActPathMoveFi, global
/* 8019A3B4 001972F4  94 21 FF 00 */	stwu r1, -0x100(r1)
/* 8019A3B8 001972F8  7C 08 02 A6 */	mflr r0
/* 8019A3BC 001972FC  90 01 01 04 */	stw r0, 0x104(r1)
/* 8019A3C0 00197300  DB E1 00 F0 */	stfd f31, 0xf0(r1)
/* 8019A3C4 00197304  F3 E1 00 F8 */	psq_st f31, 248(r1), 0, qr0
/* 8019A3C8 00197308  DB C1 00 E0 */	stfd f30, 0xe0(r1)
/* 8019A3CC 0019730C  F3 C1 00 E8 */	psq_st f30, 232(r1), 0, qr0
/* 8019A3D0 00197310  DB A1 00 D0 */	stfd f29, 0xd0(r1)
/* 8019A3D4 00197314  F3 A1 00 D8 */	psq_st f29, 216(r1), 0, qr0
/* 8019A3D8 00197318  DB 81 00 C0 */	stfd f28, 0xc0(r1)
/* 8019A3DC 0019731C  F3 81 00 C8 */	psq_st f28, 200(r1), 0, qr0
/* 8019A3E0 00197320  DB 61 00 B0 */	stfd f27, 0xb0(r1)
/* 8019A3E4 00197324  F3 61 00 B8 */	psq_st f27, 184(r1), 0, qr0
/* 8019A3E8 00197328  DB 41 00 A0 */	stfd f26, 0xa0(r1)
/* 8019A3EC 0019732C  F3 41 00 A8 */	psq_st f26, 168(r1), 0, qr0
/* 8019A3F0 00197330  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 8019A3F4 00197334  93 C1 00 98 */	stw r30, 0x98(r1)
/* 8019A3F8 00197338  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8019A3FC 0019733C  7C 7E 1B 78 */	mr r30, r3
/* 8019A400 00197340  7C 9F 23 78 */	mr r31, r4
/* 8019A404 00197344  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8019A408 00197348  2C 00 00 01 */	cmpwi r0, 1
/* 8019A40C 0019734C  40 82 01 30 */	bne .L_8019A53C
/* 8019A410 00197350  34 DF 00 01 */	addic. r6, r31, 1
/* 8019A414 00197354  41 80 01 28 */	blt .L_8019A53C
/* 8019A418 00197358  80 1E 00 4C */	lwz r0, 0x4c(r30)
/* 8019A41C 0019735C  7C 06 00 00 */	cmpw r6, r0
/* 8019A420 00197360  40 80 01 1C */	bge .L_8019A53C
/* 8019A424 00197364  2C 06 00 00 */	cmpwi r6, 0
/* 8019A428 00197368  80 BE 00 48 */	lwz r5, 0x48(r30)
/* 8019A42C 0019736C  38 60 00 00 */	li r3, 0
/* 8019A430 00197370  40 81 00 64 */	ble .L_8019A494
/* 8019A434 00197374  2C 06 00 08 */	cmpwi r6, 8
/* 8019A438 00197378  38 86 FF F8 */	addi r4, r6, -8
/* 8019A43C 0019737C  40 81 00 40 */	ble .L_8019A47C
/* 8019A440 00197380  38 04 00 07 */	addi r0, r4, 7
/* 8019A444 00197384  54 00 E8 FE */	srwi r0, r0, 3
/* 8019A448 00197388  7C 09 03 A6 */	mtctr r0
/* 8019A44C 0019738C  2C 04 00 00 */	cmpwi r4, 0
/* 8019A450 00197390  40 81 00 2C */	ble .L_8019A47C
.L_8019A454:
/* 8019A454 00197394  80 85 00 0C */	lwz r4, 0xc(r5)
/* 8019A458 00197398  38 63 00 08 */	addi r3, r3, 8
/* 8019A45C 0019739C  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019A460 001973A0  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019A464 001973A4  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019A468 001973A8  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019A46C 001973AC  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019A470 001973B0  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019A474 001973B4  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 8019A478 001973B8  42 00 FF DC */	bdnz .L_8019A454
.L_8019A47C:
/* 8019A47C 001973BC  7C 03 30 50 */	subf r0, r3, r6
/* 8019A480 001973C0  7C 09 03 A6 */	mtctr r0
/* 8019A484 001973C4  7C 03 30 00 */	cmpw r3, r6
/* 8019A488 001973C8  40 80 00 0C */	bge .L_8019A494
.L_8019A48C:
/* 8019A48C 001973CC  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019A490 001973D0  42 00 FF FC */	bdnz .L_8019A48C
.L_8019A494:
/* 8019A494 001973D4  28 05 00 00 */	cmplwi r5, 0
/* 8019A498 001973D8  41 82 00 24 */	beq .L_8019A4BC
/* 8019A49C 001973DC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019A4A0 001973E0  A8 85 00 20 */	lha r4, 0x20(r5)
/* 8019A4A4 001973E4  80 63 00 08 */	lwz r3, 8(r3)
/* 8019A4A8 001973E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8019A4AC 001973EC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019A4B0 001973F0  7D 89 03 A6 */	mtctr r12
/* 8019A4B4 001973F4  4E 80 04 21 */	bctrl 
/* 8019A4B8 001973F8  48 00 00 08 */	b .L_8019A4C0
.L_8019A4BC:
/* 8019A4BC 001973FC  38 60 00 00 */	li r3, 0
.L_8019A4C0:
/* 8019A4C0 00197400  80 9E 00 34 */	lwz r4, 0x34(r30)
/* 8019A4C4 00197404  A0 04 02 2E */	lhz r0, 0x22e(r4)
/* 8019A4C8 00197408  28 00 00 00 */	cmplwi r0, 0
/* 8019A4CC 0019740C  40 82 00 3C */	bne .L_8019A508
/* 8019A4D0 00197410  88 03 00 34 */	lbz r0, 0x34(r3)
/* 8019A4D4 00197414  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8019A4D8 00197418  41 82 00 24 */	beq .L_8019A4FC
/* 8019A4DC 0019741C  88 7E 00 3D */	lbz r3, 0x3d(r30)
/* 8019A4E0 00197420  38 03 00 01 */	addi r0, r3, 1
/* 8019A4E4 00197424  98 1E 00 3D */	stb r0, 0x3d(r30)
/* 8019A4E8 00197428  88 1E 00 3D */	lbz r0, 0x3d(r30)
/* 8019A4EC 0019742C  28 00 00 02 */	cmplwi r0, 2
/* 8019A4F0 00197430  40 80 00 4C */	bge .L_8019A53C
/* 8019A4F4 00197434  38 60 00 00 */	li r3, 0
/* 8019A4F8 00197438  48 00 02 38 */	b .L_8019A730
.L_8019A4FC:
/* 8019A4FC 0019743C  38 00 00 00 */	li r0, 0
/* 8019A500 00197440  98 1E 00 3D */	stb r0, 0x3d(r30)
/* 8019A504 00197444  48 00 00 38 */	b .L_8019A53C
.L_8019A508:
/* 8019A508 00197448  88 03 00 34 */	lbz r0, 0x34(r3)
/* 8019A50C 0019744C  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8019A510 00197450  41 82 00 24 */	beq .L_8019A534
/* 8019A514 00197454  88 7E 00 3D */	lbz r3, 0x3d(r30)
/* 8019A518 00197458  38 03 00 01 */	addi r0, r3, 1
/* 8019A51C 0019745C  98 1E 00 3D */	stb r0, 0x3d(r30)
/* 8019A520 00197460  88 1E 00 3D */	lbz r0, 0x3d(r30)
/* 8019A524 00197464  28 00 00 02 */	cmplwi r0, 2
/* 8019A528 00197468  40 80 00 14 */	bge .L_8019A53C
/* 8019A52C 0019746C  38 60 00 00 */	li r3, 0
/* 8019A530 00197470  48 00 02 00 */	b .L_8019A730
.L_8019A534:
/* 8019A534 00197474  38 00 00 00 */	li r0, 0
/* 8019A538 00197478  98 1E 00 3D */	stb r0, 0x3d(r30)
.L_8019A53C:
/* 8019A53C 0019747C  80 9E 00 30 */	lwz r4, 0x30(r30)
/* 8019A540 00197480  38 61 00 30 */	addi r3, r1, 0x30
/* 8019A544 00197484  81 84 00 00 */	lwz r12, 0(r4)
/* 8019A548 00197488  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019A54C 0019748C  7D 89 03 A6 */	mtctr r12
/* 8019A550 00197490  4E 80 04 21 */	bctrl 
/* 8019A554 00197494  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 8019A558 00197498  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 8019A55C 0019749C  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8019A560 001974A0  D0 41 00 68 */	stfs f2, 0x68(r1)
/* 8019A564 001974A4  D0 21 00 6C */	stfs f1, 0x6c(r1)
/* 8019A568 001974A8  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 8019A56C 001974AC  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 8019A570 001974B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8019A574 001974B4  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8019A578 001974B8  7D 89 03 A6 */	mtctr r12
/* 8019A57C 001974BC  4E 80 04 21 */	bctrl 
/* 8019A580 001974C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019A584 001974C4  41 82 00 14 */	beq .L_8019A598
/* 8019A588 001974C8  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 8019A58C 001974CC  4B FC C4 31 */	bl getBottomRadius__Q24Game6PelletFv
/* 8019A590 001974D0  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 8019A594 001974D4  48 00 00 1C */	b .L_8019A5B0
.L_8019A598:
/* 8019A598 001974D8  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 8019A59C 001974DC  38 81 00 68 */	addi r4, r1, 0x68
/* 8019A5A0 001974E0  81 83 00 00 */	lwz r12, 0(r3)
/* 8019A5A4 001974E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8019A5A8 001974E8  7D 89 03 A6 */	mtctr r12
/* 8019A5AC 001974EC  4E 80 04 21 */	bctrl 
.L_8019A5B0:
/* 8019A5B0 001974F0  2C 1F 00 00 */	cmpwi r31, 0
/* 8019A5B4 001974F4  40 80 00 80 */	bge .L_8019A634
/* 8019A5B8 001974F8  7F C4 F3 78 */	mr r4, r30
/* 8019A5BC 001974FC  7F E5 FB 78 */	mr r5, r31
/* 8019A5C0 00197500  38 61 00 24 */	addi r3, r1, 0x24
/* 8019A5C4 00197504  4B FF FC 65 */	bl crGetPoint__Q26PikiAI11ActPathMoveFi
/* 8019A5C8 00197508  C3 C1 00 24 */	lfs f30, 0x24(r1)
/* 8019A5CC 0019750C  7F C3 F3 78 */	mr r3, r30
/* 8019A5D0 00197510  C3 E1 00 2C */	lfs f31, 0x2c(r1)
/* 8019A5D4 00197514  7F E4 FB 78 */	mr r4, r31
/* 8019A5D8 00197518  48 00 01 A1 */	bl crGetRadius__Q26PikiAI11ActPathMoveFi
/* 8019A5DC 0019751C  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 8019A5E0 00197520  C0 21 00 68 */	lfs f1, 0x68(r1)
/* 8019A5E4 00197524  EC 5F 00 28 */	fsubs f2, f31, f0
/* 8019A5E8 00197528  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019A5EC 0019752C  EC 3E 08 28 */	fsubs f1, f30, f1
/* 8019A5F0 00197530  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8019A5F4 00197534  EC 21 08 2A */	fadds f1, f1, f1
/* 8019A5F8 00197538  EC 21 10 2A */	fadds f1, f1, f2
/* 8019A5FC 0019753C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019A600 00197540  40 81 00 14 */	ble .L_8019A614
/* 8019A604 00197544  40 81 00 14 */	ble .L_8019A618
/* 8019A608 00197548  FC 00 08 34 */	frsqrte f0, f1
/* 8019A60C 0019754C  EC 20 00 72 */	fmuls f1, f0, f1
/* 8019A610 00197550  48 00 00 08 */	b .L_8019A618
.L_8019A614:
/* 8019A614 00197554  FC 20 00 90 */	fmr f1, f0
.L_8019A618:
/* 8019A618 00197558  C0 02 AC 64 */	lfs f0, lbl_80518FC4@sda21(r2)
/* 8019A61C 0019755C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019A620 00197560  40 81 00 0C */	ble .L_8019A62C
/* 8019A624 00197564  38 60 00 00 */	li r3, 0
/* 8019A628 00197568  48 00 01 08 */	b .L_8019A730
.L_8019A62C:
/* 8019A62C 0019756C  38 60 00 01 */	li r3, 1
/* 8019A630 00197570  48 00 01 00 */	b .L_8019A730
.L_8019A634:
/* 8019A634 00197574  7F C4 F3 78 */	mr r4, r30
/* 8019A638 00197578  7F E5 FB 78 */	mr r5, r31
/* 8019A63C 0019757C  38 61 00 18 */	addi r3, r1, 0x18
/* 8019A640 00197580  4B FF FB E9 */	bl crGetPoint__Q26PikiAI11ActPathMoveFi
/* 8019A644 00197584  C3 A1 00 18 */	lfs f29, 0x18(r1)
/* 8019A648 00197588  7F C4 F3 78 */	mr r4, r30
/* 8019A64C 0019758C  C3 81 00 20 */	lfs f28, 0x20(r1)
/* 8019A650 00197590  38 61 00 0C */	addi r3, r1, 0xc
/* 8019A654 00197594  38 BF 00 01 */	addi r5, r31, 1
/* 8019A658 00197598  4B FF FB D1 */	bl crGetPoint__Q26PikiAI11ActPathMoveFi
/* 8019A65C 0019759C  C3 61 00 0C */	lfs f27, 0xc(r1)
/* 8019A660 001975A0  7F C3 F3 78 */	mr r3, r30
/* 8019A664 001975A4  C3 41 00 14 */	lfs f26, 0x14(r1)
/* 8019A668 001975A8  7F E4 FB 78 */	mr r4, r31
/* 8019A66C 001975AC  48 00 01 0D */	bl crGetRadius__Q26PikiAI11ActPathMoveFi
/* 8019A670 001975B0  FF C0 08 90 */	fmr f30, f1
/* 8019A674 001975B4  7F C3 F3 78 */	mr r3, r30
/* 8019A678 001975B8  38 9F 00 01 */	addi r4, r31, 1
/* 8019A67C 001975BC  48 00 00 FD */	bl crGetRadius__Q26PikiAI11ActPathMoveFi
/* 8019A680 001975C0  FF E0 08 90 */	fmr f31, f1
/* 8019A684 001975C4  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019A688 001975C8  D3 A1 00 78 */	stfs f29, 0x78(r1)
/* 8019A68C 001975CC  38 61 00 78 */	addi r3, r1, 0x78
/* 8019A690 001975D0  38 81 00 68 */	addi r4, r1, 0x68
/* 8019A694 001975D4  38 A1 00 5C */	addi r5, r1, 0x5c
/* 8019A698 001975D8  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 8019A69C 001975DC  38 C1 00 08 */	addi r6, r1, 8
/* 8019A6A0 001975E0  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 8019A6A4 001975E4  D3 81 00 80 */	stfs f28, 0x80(r1)
/* 8019A6A8 001975E8  D3 61 00 84 */	stfs f27, 0x84(r1)
/* 8019A6AC 001975EC  D0 01 00 88 */	stfs f0, 0x88(r1)
/* 8019A6B0 001975F0  D3 41 00 8C */	stfs f26, 0x8c(r1)
/* 8019A6B4 001975F4  D3 C1 00 90 */	stfs f30, 0x90(r1)
/* 8019A6B8 001975F8  D3 E1 00 94 */	stfs f31, 0x94(r1)
/* 8019A6BC 001975FC  48 27 B4 9D */	bl "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
/* 8019A6C0 00197600  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019A6C4 00197604  41 82 00 0C */	beq .L_8019A6D0
/* 8019A6C8 00197608  38 60 00 01 */	li r3, 1
/* 8019A6CC 0019760C  48 00 00 64 */	b .L_8019A730
.L_8019A6D0:
/* 8019A6D0 00197610  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019A6D4 00197614  38 61 00 4C */	addi r3, r1, 0x4c
/* 8019A6D8 00197618  D3 A1 00 4C */	stfs f29, 0x4c(r1)
/* 8019A6DC 0019761C  38 81 00 68 */	addi r4, r1, 0x68
/* 8019A6E0 00197620  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 8019A6E4 00197624  D3 81 00 54 */	stfs f28, 0x54(r1)
/* 8019A6E8 00197628  D3 C1 00 58 */	stfs f30, 0x58(r1)
/* 8019A6EC 0019762C  48 27 B8 29 */	bl intersect__Q23Sys6SphereFRQ23Sys6Sphere
/* 8019A6F0 00197630  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019A6F4 00197634  41 82 00 0C */	beq .L_8019A700
/* 8019A6F8 00197638  38 60 00 01 */	li r3, 1
/* 8019A6FC 0019763C  48 00 00 34 */	b .L_8019A730
.L_8019A700:
/* 8019A700 00197640  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019A704 00197644  38 61 00 3C */	addi r3, r1, 0x3c
/* 8019A708 00197648  D3 61 00 3C */	stfs f27, 0x3c(r1)
/* 8019A70C 0019764C  38 81 00 68 */	addi r4, r1, 0x68
/* 8019A710 00197650  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8019A714 00197654  D3 41 00 44 */	stfs f26, 0x44(r1)
/* 8019A718 00197658  D3 E1 00 48 */	stfs f31, 0x48(r1)
/* 8019A71C 0019765C  48 27 B7 F9 */	bl intersect__Q23Sys6SphereFRQ23Sys6Sphere
/* 8019A720 00197660  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8019A724 00197664  7C 03 00 D0 */	neg r0, r3
/* 8019A728 00197668  7C 00 1B 78 */	or r0, r0, r3
/* 8019A72C 0019766C  54 03 0F FE */	srwi r3, r0, 0x1f
.L_8019A730:
/* 8019A730 00197670  E3 E1 00 F8 */	psq_l f31, 248(r1), 0, qr0
/* 8019A734 00197674  CB E1 00 F0 */	lfd f31, 0xf0(r1)
/* 8019A738 00197678  E3 C1 00 E8 */	psq_l f30, 232(r1), 0, qr0
/* 8019A73C 0019767C  CB C1 00 E0 */	lfd f30, 0xe0(r1)
/* 8019A740 00197680  E3 A1 00 D8 */	psq_l f29, 216(r1), 0, qr0
/* 8019A744 00197684  CB A1 00 D0 */	lfd f29, 0xd0(r1)
/* 8019A748 00197688  E3 81 00 C8 */	psq_l f28, 200(r1), 0, qr0
/* 8019A74C 0019768C  CB 81 00 C0 */	lfd f28, 0xc0(r1)
/* 8019A750 00197690  E3 61 00 B8 */	psq_l f27, 184(r1), 0, qr0
/* 8019A754 00197694  CB 61 00 B0 */	lfd f27, 0xb0(r1)
/* 8019A758 00197698  E3 41 00 A8 */	psq_l f26, 168(r1), 0, qr0
/* 8019A75C 0019769C  CB 41 00 A0 */	lfd f26, 0xa0(r1)
/* 8019A760 001976A0  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 8019A764 001976A4  80 01 01 04 */	lwz r0, 0x104(r1)
/* 8019A768 001976A8  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 8019A76C 001976AC  7C 08 03 A6 */	mtlr r0
/* 8019A770 001976B0  38 21 01 00 */	addi r1, r1, 0x100
/* 8019A774 001976B4  4E 80 00 20 */	blr 
.endfn contextCheck__Q26PikiAI11ActPathMoveFi

.fn crGetRadius__Q26PikiAI11ActPathMoveFi, global
/* 8019A778 001976B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8019A77C 001976BC  7C 08 02 A6 */	mflr r0
/* 8019A780 001976C0  2C 04 00 00 */	cmpwi r4, 0
/* 8019A784 001976C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8019A788 001976C8  40 80 00 50 */	bge .L_8019A7D8
/* 8019A78C 001976CC  80 63 00 30 */	lwz r3, 0x30(r3)
/* 8019A790 001976D0  38 81 00 08 */	addi r4, r1, 8
/* 8019A794 001976D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8019A798 001976D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8019A79C 001976DC  7D 89 03 A6 */	mtctr r12
/* 8019A7A0 001976E0  4E 80 04 21 */	bctrl 
/* 8019A7A4 001976E4  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8019A7A8 001976E8  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019A7AC 001976EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019A7B0 001976F0  41 81 00 20 */	bgt .L_8019A7D0
/* 8019A7B4 001976F4  3C 60 80 48 */	lis r3, lbl_8047F0A4@ha
/* 8019A7B8 001976F8  3C A0 80 48 */	lis r5, lbl_8047F0B8@ha
/* 8019A7BC 001976FC  38 63 F0 A4 */	addi r3, r3, lbl_8047F0A4@l
/* 8019A7C0 00197700  38 80 07 42 */	li r4, 0x742
/* 8019A7C4 00197704  38 A5 F0 B8 */	addi r5, r5, lbl_8047F0B8@l
/* 8019A7C8 00197708  4C C6 31 82 */	crclr 6
/* 8019A7CC 0019770C  4B E8 FE 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8019A7D0:
/* 8019A7D0 00197710  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8019A7D4 00197714  48 00 00 C8 */	b .L_8019A89C
.L_8019A7D8:
/* 8019A7D8 00197718  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8019A7DC 0019771C  7C 04 00 00 */	cmpw r4, r0
/* 8019A7E0 00197720  41 80 00 0C */	blt .L_8019A7EC
/* 8019A7E4 00197724  C0 22 AC 68 */	lfs f1, lbl_80518FC8@sda21(r2)
/* 8019A7E8 00197728  48 00 00 B4 */	b .L_8019A89C
.L_8019A7EC:
/* 8019A7EC 0019772C  2C 04 00 00 */	cmpwi r4, 0
/* 8019A7F0 00197730  80 C3 00 48 */	lwz r6, 0x48(r3)
/* 8019A7F4 00197734  38 60 00 00 */	li r3, 0
/* 8019A7F8 00197738  40 81 00 64 */	ble .L_8019A85C
/* 8019A7FC 0019773C  2C 04 00 08 */	cmpwi r4, 8
/* 8019A800 00197740  38 A4 FF F8 */	addi r5, r4, -8
/* 8019A804 00197744  40 81 00 40 */	ble .L_8019A844
/* 8019A808 00197748  38 05 00 07 */	addi r0, r5, 7
/* 8019A80C 0019774C  54 00 E8 FE */	srwi r0, r0, 3
/* 8019A810 00197750  7C 09 03 A6 */	mtctr r0
/* 8019A814 00197754  2C 05 00 00 */	cmpwi r5, 0
/* 8019A818 00197758  40 81 00 2C */	ble .L_8019A844
.L_8019A81C:
/* 8019A81C 0019775C  80 A6 00 0C */	lwz r5, 0xc(r6)
/* 8019A820 00197760  38 63 00 08 */	addi r3, r3, 8
/* 8019A824 00197764  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019A828 00197768  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019A82C 0019776C  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019A830 00197770  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019A834 00197774  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019A838 00197778  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019A83C 0019777C  80 C5 00 0C */	lwz r6, 0xc(r5)
/* 8019A840 00197780  42 00 FF DC */	bdnz .L_8019A81C
.L_8019A844:
/* 8019A844 00197784  7C 03 20 50 */	subf r0, r3, r4
/* 8019A848 00197788  7C 09 03 A6 */	mtctr r0
/* 8019A84C 0019778C  7C 03 20 00 */	cmpw r3, r4
/* 8019A850 00197790  40 80 00 0C */	bge .L_8019A85C
.L_8019A854:
/* 8019A854 00197794  80 C6 00 0C */	lwz r6, 0xc(r6)
/* 8019A858 00197798  42 00 FF FC */	bdnz .L_8019A854
.L_8019A85C:
/* 8019A85C 0019779C  28 06 00 00 */	cmplwi r6, 0
/* 8019A860 001977A0  41 82 00 24 */	beq .L_8019A884
/* 8019A864 001977A4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019A868 001977A8  A8 86 00 20 */	lha r4, 0x20(r6)
/* 8019A86C 001977AC  80 63 00 08 */	lwz r3, 8(r3)
/* 8019A870 001977B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8019A874 001977B4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019A878 001977B8  7D 89 03 A6 */	mtctr r12
/* 8019A87C 001977BC  4E 80 04 21 */	bctrl 
/* 8019A880 001977C0  48 00 00 08 */	b .L_8019A888
.L_8019A884:
/* 8019A884 001977C4  38 60 00 00 */	li r3, 0
.L_8019A888:
/* 8019A888 001977C8  28 03 00 00 */	cmplwi r3, 0
/* 8019A88C 001977CC  40 82 00 0C */	bne .L_8019A898
/* 8019A890 001977D0  C0 22 AC 68 */	lfs f1, lbl_80518FC8@sda21(r2)
/* 8019A894 001977D4  48 00 00 08 */	b .L_8019A89C
.L_8019A898:
/* 8019A898 001977D8  C0 23 00 58 */	lfs f1, 0x58(r3)
.L_8019A89C:
/* 8019A89C 001977DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8019A8A0 001977E0  7C 08 03 A6 */	mtlr r0
/* 8019A8A4 001977E4  38 21 00 20 */	addi r1, r1, 0x20
/* 8019A8A8 001977E8  4E 80 00 20 */	blr 
.endfn crGetRadius__Q26PikiAI11ActPathMoveFi

.fn crInit__Q26PikiAI11ActPathMoveFv, global
/* 8019A8AC 001977EC  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 8019A8B0 001977F0  7C 08 02 A6 */	mflr r0
/* 8019A8B4 001977F4  90 01 01 84 */	stw r0, 0x184(r1)
/* 8019A8B8 001977F8  DB E1 01 70 */	stfd f31, 0x170(r1)
/* 8019A8BC 001977FC  F3 E1 01 78 */	psq_st f31, 376(r1), 0, qr0
/* 8019A8C0 00197800  DB C1 01 60 */	stfd f30, 0x160(r1)
/* 8019A8C4 00197804  F3 C1 01 68 */	psq_st f30, 360(r1), 0, qr0
/* 8019A8C8 00197808  DB A1 01 50 */	stfd f29, 0x150(r1)
/* 8019A8CC 0019780C  F3 A1 01 58 */	psq_st f29, 344(r1), 0, qr0
/* 8019A8D0 00197810  DB 81 01 40 */	stfd f28, 0x140(r1)
/* 8019A8D4 00197814  F3 81 01 48 */	psq_st f28, 328(r1), 0, qr0
/* 8019A8D8 00197818  DB 61 01 30 */	stfd f27, 0x130(r1)
/* 8019A8DC 0019781C  F3 61 01 38 */	psq_st f27, 312(r1), 0, qr0
/* 8019A8E0 00197820  DB 41 01 20 */	stfd f26, 0x120(r1)
/* 8019A8E4 00197824  F3 41 01 28 */	psq_st f26, 296(r1), 0, qr0
/* 8019A8E8 00197828  DB 21 01 10 */	stfd f25, 0x110(r1)
/* 8019A8EC 0019782C  F3 21 01 18 */	psq_st f25, 280(r1), 0, qr0
/* 8019A8F0 00197830  DB 01 01 00 */	stfd f24, 0x100(r1)
/* 8019A8F4 00197834  F3 01 01 08 */	psq_st f24, 264(r1), 0, qr0
/* 8019A8F8 00197838  DA E1 00 F0 */	stfd f23, 0xf0(r1)
/* 8019A8FC 0019783C  F2 E1 00 F8 */	psq_st f23, 248(r1), 0, qr0
/* 8019A900 00197840  DA C1 00 E0 */	stfd f22, 0xe0(r1)
/* 8019A904 00197844  F2 C1 00 E8 */	psq_st f22, 232(r1), 0, qr0
/* 8019A908 00197848  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 8019A90C 0019784C  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 8019A910 00197850  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 8019A914 00197854  7C 7E 1B 78 */	mr r30, r3
/* 8019A918 00197858  38 00 FF FF */	li r0, -1
/* 8019A91C 0019785C  90 03 00 70 */	stw r0, 0x70(r3)
/* 8019A920 00197860  38 61 00 80 */	addi r3, r1, 0x80
/* 8019A924 00197864  80 9E 00 30 */	lwz r4, 0x30(r30)
/* 8019A928 00197868  81 84 00 00 */	lwz r12, 0(r4)
/* 8019A92C 0019786C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019A930 00197870  7D 89 03 A6 */	mtctr r12
/* 8019A934 00197874  4E 80 04 21 */	bctrl 
/* 8019A938 00197878  C0 01 00 80 */	lfs f0, 0x80(r1)
/* 8019A93C 0019787C  7F C4 F3 78 */	mr r4, r30
/* 8019A940 00197880  38 61 00 74 */	addi r3, r1, 0x74
/* 8019A944 00197884  D0 1E 00 A4 */	stfs f0, 0xa4(r30)
/* 8019A948 00197888  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 8019A94C 0019788C  D0 1E 00 A8 */	stfs f0, 0xa8(r30)
/* 8019A950 00197890  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 8019A954 00197894  D0 1E 00 AC */	stfs f0, 0xac(r30)
/* 8019A958 00197898  80 BE 00 70 */	lwz r5, 0x70(r30)
/* 8019A95C 0019789C  38 A5 00 01 */	addi r5, r5, 1
/* 8019A960 001978A0  4B FF F8 C9 */	bl crGetPoint__Q26PikiAI11ActPathMoveFi
/* 8019A964 001978A4  80 BE 00 70 */	lwz r5, 0x70(r30)
/* 8019A968 001978A8  7F C4 F3 78 */	mr r4, r30
/* 8019A96C 001978AC  C2 E1 00 74 */	lfs f23, 0x74(r1)
/* 8019A970 001978B0  38 61 00 68 */	addi r3, r1, 0x68
/* 8019A974 001978B4  C3 01 00 78 */	lfs f24, 0x78(r1)
/* 8019A978 001978B8  38 A5 00 02 */	addi r5, r5, 2
/* 8019A97C 001978BC  C3 21 00 7C */	lfs f25, 0x7c(r1)
/* 8019A980 001978C0  4B FF F8 A9 */	bl crGetPoint__Q26PikiAI11ActPathMoveFi
/* 8019A984 001978C4  C3 81 00 68 */	lfs f28, 0x68(r1)
/* 8019A988 001978C8  3B E0 00 00 */	li r31, 0
/* 8019A98C 001978CC  C3 41 00 6C */	lfs f26, 0x6c(r1)
/* 8019A990 001978D0  FC 17 E0 00 */	fcmpu cr0, f23, f28
/* 8019A994 001978D4  C3 61 00 70 */	lfs f27, 0x70(r1)
/* 8019A998 001978D8  40 82 00 18 */	bne .L_8019A9B0
/* 8019A99C 001978DC  FC 18 D0 00 */	fcmpu cr0, f24, f26
/* 8019A9A0 001978E0  40 82 00 10 */	bne .L_8019A9B0
/* 8019A9A4 001978E4  FC 19 D8 00 */	fcmpu cr0, f25, f27
/* 8019A9A8 001978E8  40 82 00 08 */	bne .L_8019A9B0
/* 8019A9AC 001978EC  3B E0 00 01 */	li r31, 1
.L_8019A9B0:
/* 8019A9B0 001978F0  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8019A9B4 001978F4  40 82 02 5C */	bne .L_8019AC10
/* 8019A9B8 001978F8  80 7E 00 70 */	lwz r3, 0x70(r30)
/* 8019A9BC 001978FC  34 63 00 02 */	addic. r3, r3, 2
/* 8019A9C0 00197900  40 80 00 50 */	bge .L_8019AA10
/* 8019A9C4 00197904  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 8019A9C8 00197908  38 81 00 1C */	addi r4, r1, 0x1c
/* 8019A9CC 0019790C  81 83 00 00 */	lwz r12, 0(r3)
/* 8019A9D0 00197910  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8019A9D4 00197914  7D 89 03 A6 */	mtctr r12
/* 8019A9D8 00197918  4E 80 04 21 */	bctrl 
/* 8019A9DC 0019791C  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8019A9E0 00197920  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019A9E4 00197924  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019A9E8 00197928  41 81 00 20 */	bgt .L_8019AA08
/* 8019A9EC 0019792C  3C 60 80 48 */	lis r3, lbl_8047F0A4@ha
/* 8019A9F0 00197930  3C A0 80 48 */	lis r5, lbl_8047F0B8@ha
/* 8019A9F4 00197934  38 63 F0 A4 */	addi r3, r3, lbl_8047F0A4@l
/* 8019A9F8 00197938  38 80 07 42 */	li r4, 0x742
/* 8019A9FC 0019793C  38 A5 F0 B8 */	addi r5, r5, lbl_8047F0B8@l
/* 8019AA00 00197940  4C C6 31 82 */	crclr 6
/* 8019AA04 00197944  4B E8 FC 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8019AA08:
/* 8019AA08 00197948  C2 C1 00 28 */	lfs f22, 0x28(r1)
/* 8019AA0C 0019794C  48 00 00 C8 */	b .L_8019AAD4
.L_8019AA10:
/* 8019AA10 00197950  80 1E 00 4C */	lwz r0, 0x4c(r30)
/* 8019AA14 00197954  7C 03 00 00 */	cmpw r3, r0
/* 8019AA18 00197958  41 80 00 0C */	blt .L_8019AA24
/* 8019AA1C 0019795C  C2 C2 AC 68 */	lfs f22, lbl_80518FC8@sda21(r2)
/* 8019AA20 00197960  48 00 00 B4 */	b .L_8019AAD4
.L_8019AA24:
/* 8019AA24 00197964  2C 03 00 00 */	cmpwi r3, 0
/* 8019AA28 00197968  80 DE 00 48 */	lwz r6, 0x48(r30)
/* 8019AA2C 0019796C  38 80 00 00 */	li r4, 0
/* 8019AA30 00197970  40 81 00 64 */	ble .L_8019AA94
/* 8019AA34 00197974  2C 03 00 08 */	cmpwi r3, 8
/* 8019AA38 00197978  38 A3 FF F8 */	addi r5, r3, -8
/* 8019AA3C 0019797C  40 81 00 40 */	ble .L_8019AA7C
/* 8019AA40 00197980  38 05 00 07 */	addi r0, r5, 7
/* 8019AA44 00197984  54 00 E8 FE */	srwi r0, r0, 3
/* 8019AA48 00197988  7C 09 03 A6 */	mtctr r0
/* 8019AA4C 0019798C  2C 05 00 00 */	cmpwi r5, 0
/* 8019AA50 00197990  40 81 00 2C */	ble .L_8019AA7C
.L_8019AA54:
/* 8019AA54 00197994  80 A6 00 0C */	lwz r5, 0xc(r6)
/* 8019AA58 00197998  38 84 00 08 */	addi r4, r4, 8
/* 8019AA5C 0019799C  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019AA60 001979A0  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019AA64 001979A4  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019AA68 001979A8  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019AA6C 001979AC  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019AA70 001979B0  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019AA74 001979B4  80 C5 00 0C */	lwz r6, 0xc(r5)
/* 8019AA78 001979B8  42 00 FF DC */	bdnz .L_8019AA54
.L_8019AA7C:
/* 8019AA7C 001979BC  7C 04 18 50 */	subf r0, r4, r3
/* 8019AA80 001979C0  7C 09 03 A6 */	mtctr r0
/* 8019AA84 001979C4  7C 04 18 00 */	cmpw r4, r3
/* 8019AA88 001979C8  40 80 00 0C */	bge .L_8019AA94
.L_8019AA8C:
/* 8019AA8C 001979CC  80 C6 00 0C */	lwz r6, 0xc(r6)
/* 8019AA90 001979D0  42 00 FF FC */	bdnz .L_8019AA8C
.L_8019AA94:
/* 8019AA94 001979D4  28 06 00 00 */	cmplwi r6, 0
/* 8019AA98 001979D8  41 82 00 24 */	beq .L_8019AABC
/* 8019AA9C 001979DC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019AAA0 001979E0  A8 86 00 20 */	lha r4, 0x20(r6)
/* 8019AAA4 001979E4  80 63 00 08 */	lwz r3, 8(r3)
/* 8019AAA8 001979E8  81 83 00 00 */	lwz r12, 0(r3)
/* 8019AAAC 001979EC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019AAB0 001979F0  7D 89 03 A6 */	mtctr r12
/* 8019AAB4 001979F4  4E 80 04 21 */	bctrl 
/* 8019AAB8 001979F8  48 00 00 08 */	b .L_8019AAC0
.L_8019AABC:
/* 8019AABC 001979FC  38 60 00 00 */	li r3, 0
.L_8019AAC0:
/* 8019AAC0 00197A00  28 03 00 00 */	cmplwi r3, 0
/* 8019AAC4 00197A04  40 82 00 0C */	bne .L_8019AAD0
/* 8019AAC8 00197A08  C2 C2 AC 68 */	lfs f22, lbl_80518FC8@sda21(r2)
/* 8019AACC 00197A0C  48 00 00 08 */	b .L_8019AAD4
.L_8019AAD0:
/* 8019AAD0 00197A10  C2 C3 00 58 */	lfs f22, 0x58(r3)
.L_8019AAD4:
/* 8019AAD4 00197A14  80 7E 00 70 */	lwz r3, 0x70(r30)
/* 8019AAD8 00197A18  34 63 00 01 */	addic. r3, r3, 1
/* 8019AADC 00197A1C  40 80 00 50 */	bge .L_8019AB2C
/* 8019AAE0 00197A20  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 8019AAE4 00197A24  38 81 00 0C */	addi r4, r1, 0xc
/* 8019AAE8 00197A28  81 83 00 00 */	lwz r12, 0(r3)
/* 8019AAEC 00197A2C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8019AAF0 00197A30  7D 89 03 A6 */	mtctr r12
/* 8019AAF4 00197A34  4E 80 04 21 */	bctrl 
/* 8019AAF8 00197A38  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8019AAFC 00197A3C  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019AB00 00197A40  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019AB04 00197A44  41 81 00 20 */	bgt .L_8019AB24
/* 8019AB08 00197A48  3C 60 80 48 */	lis r3, lbl_8047F0A4@ha
/* 8019AB0C 00197A4C  3C A0 80 48 */	lis r5, lbl_8047F0B8@ha
/* 8019AB10 00197A50  38 63 F0 A4 */	addi r3, r3, lbl_8047F0A4@l
/* 8019AB14 00197A54  38 80 07 42 */	li r4, 0x742
/* 8019AB18 00197A58  38 A5 F0 B8 */	addi r5, r5, lbl_8047F0B8@l
/* 8019AB1C 00197A5C  4C C6 31 82 */	crclr 6
/* 8019AB20 00197A60  4B E8 FB 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8019AB24:
/* 8019AB24 00197A64  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8019AB28 00197A68  48 00 00 C8 */	b .L_8019ABF0
.L_8019AB2C:
/* 8019AB2C 00197A6C  80 1E 00 4C */	lwz r0, 0x4c(r30)
/* 8019AB30 00197A70  7C 03 00 00 */	cmpw r3, r0
/* 8019AB34 00197A74  41 80 00 0C */	blt .L_8019AB40
/* 8019AB38 00197A78  C0 02 AC 68 */	lfs f0, lbl_80518FC8@sda21(r2)
/* 8019AB3C 00197A7C  48 00 00 B4 */	b .L_8019ABF0
.L_8019AB40:
/* 8019AB40 00197A80  2C 03 00 00 */	cmpwi r3, 0
/* 8019AB44 00197A84  80 DE 00 48 */	lwz r6, 0x48(r30)
/* 8019AB48 00197A88  38 80 00 00 */	li r4, 0
/* 8019AB4C 00197A8C  40 81 00 64 */	ble .L_8019ABB0
/* 8019AB50 00197A90  2C 03 00 08 */	cmpwi r3, 8
/* 8019AB54 00197A94  38 A3 FF F8 */	addi r5, r3, -8
/* 8019AB58 00197A98  40 81 00 40 */	ble .L_8019AB98
/* 8019AB5C 00197A9C  38 05 00 07 */	addi r0, r5, 7
/* 8019AB60 00197AA0  54 00 E8 FE */	srwi r0, r0, 3
/* 8019AB64 00197AA4  7C 09 03 A6 */	mtctr r0
/* 8019AB68 00197AA8  2C 05 00 00 */	cmpwi r5, 0
/* 8019AB6C 00197AAC  40 81 00 2C */	ble .L_8019AB98
.L_8019AB70:
/* 8019AB70 00197AB0  80 A6 00 0C */	lwz r5, 0xc(r6)
/* 8019AB74 00197AB4  38 84 00 08 */	addi r4, r4, 8
/* 8019AB78 00197AB8  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019AB7C 00197ABC  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019AB80 00197AC0  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019AB84 00197AC4  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019AB88 00197AC8  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019AB8C 00197ACC  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019AB90 00197AD0  80 C5 00 0C */	lwz r6, 0xc(r5)
/* 8019AB94 00197AD4  42 00 FF DC */	bdnz .L_8019AB70
.L_8019AB98:
/* 8019AB98 00197AD8  7C 04 18 50 */	subf r0, r4, r3
/* 8019AB9C 00197ADC  7C 09 03 A6 */	mtctr r0
/* 8019ABA0 00197AE0  7C 04 18 00 */	cmpw r4, r3
/* 8019ABA4 00197AE4  40 80 00 0C */	bge .L_8019ABB0
.L_8019ABA8:
/* 8019ABA8 00197AE8  80 C6 00 0C */	lwz r6, 0xc(r6)
/* 8019ABAC 00197AEC  42 00 FF FC */	bdnz .L_8019ABA8
.L_8019ABB0:
/* 8019ABB0 00197AF0  28 06 00 00 */	cmplwi r6, 0
/* 8019ABB4 00197AF4  41 82 00 24 */	beq .L_8019ABD8
/* 8019ABB8 00197AF8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019ABBC 00197AFC  A8 86 00 20 */	lha r4, 0x20(r6)
/* 8019ABC0 00197B00  80 63 00 08 */	lwz r3, 8(r3)
/* 8019ABC4 00197B04  81 83 00 00 */	lwz r12, 0(r3)
/* 8019ABC8 00197B08  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019ABCC 00197B0C  7D 89 03 A6 */	mtctr r12
/* 8019ABD0 00197B10  4E 80 04 21 */	bctrl 
/* 8019ABD4 00197B14  48 00 00 08 */	b .L_8019ABDC
.L_8019ABD8:
/* 8019ABD8 00197B18  38 60 00 00 */	li r3, 0
.L_8019ABDC:
/* 8019ABDC 00197B1C  28 03 00 00 */	cmplwi r3, 0
/* 8019ABE0 00197B20  40 82 00 0C */	bne .L_8019ABEC
/* 8019ABE4 00197B24  C0 02 AC 68 */	lfs f0, lbl_80518FC8@sda21(r2)
/* 8019ABE8 00197B28  48 00 00 08 */	b .L_8019ABF0
.L_8019ABEC:
/* 8019ABEC 00197B2C  C0 03 00 58 */	lfs f0, 0x58(r3)
.L_8019ABF0:
/* 8019ABF0 00197B30  D2 E1 00 A8 */	stfs f23, 0xa8(r1)
/* 8019ABF4 00197B34  D3 01 00 AC */	stfs f24, 0xac(r1)
/* 8019ABF8 00197B38  D3 21 00 B0 */	stfs f25, 0xb0(r1)
/* 8019ABFC 00197B3C  D3 81 00 B4 */	stfs f28, 0xb4(r1)
/* 8019AC00 00197B40  D3 41 00 B8 */	stfs f26, 0xb8(r1)
/* 8019AC04 00197B44  D3 61 00 BC */	stfs f27, 0xbc(r1)
/* 8019AC08 00197B48  D0 01 00 C0 */	stfs f0, 0xc0(r1)
/* 8019AC0C 00197B4C  D2 C1 00 C4 */	stfs f22, 0xc4(r1)
.L_8019AC10:
/* 8019AC10 00197B50  C0 3E 00 A4 */	lfs f1, 0xa4(r30)
/* 8019AC14 00197B54  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8019AC18 00197B58  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019AC1C 00197B5C  D0 21 00 8C */	stfs f1, 0x8c(r1)
/* 8019AC20 00197B60  C0 3E 00 A8 */	lfs f1, 0xa8(r30)
/* 8019AC24 00197B64  D0 21 00 90 */	stfs f1, 0x90(r1)
/* 8019AC28 00197B68  C0 3E 00 AC */	lfs f1, 0xac(r30)
/* 8019AC2C 00197B6C  D0 21 00 94 */	stfs f1, 0x94(r1)
/* 8019AC30 00197B70  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 8019AC34 00197B74  40 82 01 AC */	bne .L_8019ADE0
/* 8019AC38 00197B78  38 61 00 A8 */	addi r3, r1, 0xa8
/* 8019AC3C 00197B7C  38 81 00 8C */	addi r4, r1, 0x8c
/* 8019AC40 00197B80  38 A1 00 9C */	addi r5, r1, 0x9c
/* 8019AC44 00197B84  38 C1 00 08 */	addi r6, r1, 8
/* 8019AC48 00197B88  48 27 AF 11 */	bl "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
/* 8019AC4C 00197B8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019AC50 00197B90  41 82 01 90 */	beq .L_8019ADE0
/* 8019AC54 00197B94  80 7E 00 70 */	lwz r3, 0x70(r30)
/* 8019AC58 00197B98  34 63 00 02 */	addic. r3, r3, 2
/* 8019AC5C 00197B9C  41 80 00 10 */	blt .L_8019AC6C
/* 8019AC60 00197BA0  80 1E 00 4C */	lwz r0, 0x4c(r30)
/* 8019AC64 00197BA4  7C 03 00 00 */	cmpw r3, r0
/* 8019AC68 00197BA8  41 80 00 0C */	blt .L_8019AC74
.L_8019AC6C:
/* 8019AC6C 00197BAC  38 00 00 01 */	li r0, 1
/* 8019AC70 00197BB0  48 00 00 BC */	b .L_8019AD2C
.L_8019AC74:
/* 8019AC74 00197BB4  2C 03 00 00 */	cmpwi r3, 0
/* 8019AC78 00197BB8  80 DE 00 48 */	lwz r6, 0x48(r30)
/* 8019AC7C 00197BBC  38 80 00 00 */	li r4, 0
/* 8019AC80 00197BC0  40 81 00 64 */	ble .L_8019ACE4
/* 8019AC84 00197BC4  2C 03 00 08 */	cmpwi r3, 8
/* 8019AC88 00197BC8  38 A3 FF F8 */	addi r5, r3, -8
/* 8019AC8C 00197BCC  40 81 00 40 */	ble .L_8019ACCC
/* 8019AC90 00197BD0  38 05 00 07 */	addi r0, r5, 7
/* 8019AC94 00197BD4  54 00 E8 FE */	srwi r0, r0, 3
/* 8019AC98 00197BD8  7C 09 03 A6 */	mtctr r0
/* 8019AC9C 00197BDC  2C 05 00 00 */	cmpwi r5, 0
/* 8019ACA0 00197BE0  40 81 00 2C */	ble .L_8019ACCC
.L_8019ACA4:
/* 8019ACA4 00197BE4  80 A6 00 0C */	lwz r5, 0xc(r6)
/* 8019ACA8 00197BE8  38 84 00 08 */	addi r4, r4, 8
/* 8019ACAC 00197BEC  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019ACB0 00197BF0  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019ACB4 00197BF4  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019ACB8 00197BF8  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019ACBC 00197BFC  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019ACC0 00197C00  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019ACC4 00197C04  80 C5 00 0C */	lwz r6, 0xc(r5)
/* 8019ACC8 00197C08  42 00 FF DC */	bdnz .L_8019ACA4
.L_8019ACCC:
/* 8019ACCC 00197C0C  7C 04 18 50 */	subf r0, r4, r3
/* 8019ACD0 00197C10  7C 09 03 A6 */	mtctr r0
/* 8019ACD4 00197C14  7C 04 18 00 */	cmpw r4, r3
/* 8019ACD8 00197C18  40 80 00 0C */	bge .L_8019ACE4
.L_8019ACDC:
/* 8019ACDC 00197C1C  80 C6 00 0C */	lwz r6, 0xc(r6)
/* 8019ACE0 00197C20  42 00 FF FC */	bdnz .L_8019ACDC
.L_8019ACE4:
/* 8019ACE4 00197C24  28 06 00 00 */	cmplwi r6, 0
/* 8019ACE8 00197C28  41 82 00 24 */	beq .L_8019AD0C
/* 8019ACEC 00197C2C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019ACF0 00197C30  A8 86 00 20 */	lha r4, 0x20(r6)
/* 8019ACF4 00197C34  80 63 00 08 */	lwz r3, 8(r3)
/* 8019ACF8 00197C38  81 83 00 00 */	lwz r12, 0(r3)
/* 8019ACFC 00197C3C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019AD00 00197C40  7D 89 03 A6 */	mtctr r12
/* 8019AD04 00197C44  4E 80 04 21 */	bctrl 
/* 8019AD08 00197C48  48 00 00 08 */	b .L_8019AD10
.L_8019AD0C:
/* 8019AD0C 00197C4C  38 60 00 00 */	li r3, 0
.L_8019AD10:
/* 8019AD10 00197C50  28 03 00 00 */	cmplwi r3, 0
/* 8019AD14 00197C54  40 82 00 0C */	bne .L_8019AD20
/* 8019AD18 00197C58  38 00 00 01 */	li r0, 1
/* 8019AD1C 00197C5C  48 00 00 10 */	b .L_8019AD2C
.L_8019AD20:
/* 8019AD20 00197C60  88 03 00 34 */	lbz r0, 0x34(r3)
/* 8019AD24 00197C64  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 8019AD28 00197C68  68 00 00 01 */	xori r0, r0, 1
.L_8019AD2C:
/* 8019AD2C 00197C6C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8019AD30 00197C70  41 82 00 B0 */	beq .L_8019ADE0
/* 8019AD34 00197C74  38 00 00 00 */	li r0, 0
/* 8019AD38 00197C78  7F C4 F3 78 */	mr r4, r30
/* 8019AD3C 00197C7C  90 1E 00 70 */	stw r0, 0x70(r30)
/* 8019AD40 00197C80  38 61 00 5C */	addi r3, r1, 0x5c
/* 8019AD44 00197C84  38 A0 FF FF */	li r5, -1
/* 8019AD48 00197C88  4B FF F4 E1 */	bl crGetPoint__Q26PikiAI11ActPathMoveFi
/* 8019AD4C 00197C8C  C0 01 00 5C */	lfs f0, 0x5c(r1)
/* 8019AD50 00197C90  7F C4 F3 78 */	mr r4, r30
/* 8019AD54 00197C94  38 61 00 50 */	addi r3, r1, 0x50
/* 8019AD58 00197C98  38 A0 FF FF */	li r5, -1
/* 8019AD5C 00197C9C  D0 1E 00 74 */	stfs f0, 0x74(r30)
/* 8019AD60 00197CA0  C0 01 00 60 */	lfs f0, 0x60(r1)
/* 8019AD64 00197CA4  D0 1E 00 78 */	stfs f0, 0x78(r30)
/* 8019AD68 00197CA8  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 8019AD6C 00197CAC  D0 1E 00 7C */	stfs f0, 0x7c(r30)
/* 8019AD70 00197CB0  4B FF F4 B9 */	bl crGetPoint__Q26PikiAI11ActPathMoveFi
/* 8019AD74 00197CB4  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 8019AD78 00197CB8  7F C4 F3 78 */	mr r4, r30
/* 8019AD7C 00197CBC  38 61 00 44 */	addi r3, r1, 0x44
/* 8019AD80 00197CC0  38 A0 00 01 */	li r5, 1
/* 8019AD84 00197CC4  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 8019AD88 00197CC8  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 8019AD8C 00197CCC  D0 1E 00 84 */	stfs f0, 0x84(r30)
/* 8019AD90 00197CD0  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 8019AD94 00197CD4  D0 1E 00 88 */	stfs f0, 0x88(r30)
/* 8019AD98 00197CD8  4B FF F4 91 */	bl crGetPoint__Q26PikiAI11ActPathMoveFi
/* 8019AD9C 00197CDC  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 8019ADA0 00197CE0  7F C4 F3 78 */	mr r4, r30
/* 8019ADA4 00197CE4  38 61 00 38 */	addi r3, r1, 0x38
/* 8019ADA8 00197CE8  38 A0 00 02 */	li r5, 2
/* 8019ADAC 00197CEC  D0 1E 00 8C */	stfs f0, 0x8c(r30)
/* 8019ADB0 00197CF0  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 8019ADB4 00197CF4  D0 1E 00 90 */	stfs f0, 0x90(r30)
/* 8019ADB8 00197CF8  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 8019ADBC 00197CFC  D0 1E 00 94 */	stfs f0, 0x94(r30)
/* 8019ADC0 00197D00  4B FF F4 69 */	bl crGetPoint__Q26PikiAI11ActPathMoveFi
/* 8019ADC4 00197D04  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8019ADC8 00197D08  D0 1E 00 98 */	stfs f0, 0x98(r30)
/* 8019ADCC 00197D0C  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 8019ADD0 00197D10  D0 1E 00 9C */	stfs f0, 0x9c(r30)
/* 8019ADD4 00197D14  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8019ADD8 00197D18  D0 1E 00 A0 */	stfs f0, 0xa0(r30)
/* 8019ADDC 00197D1C  48 00 01 9C */	b .L_8019AF78
.L_8019ADE0:
/* 8019ADE0 00197D20  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019ADE4 00197D24  3B A0 00 00 */	li r29, 0
/* 8019ADE8 00197D28  80 9E 00 44 */	lwz r4, 0x44(r30)
/* 8019ADEC 00197D2C  80 63 00 08 */	lwz r3, 8(r3)
/* 8019ADF0 00197D30  A8 84 00 20 */	lha r4, 0x20(r4)
/* 8019ADF4 00197D34  81 83 00 00 */	lwz r12, 0(r3)
/* 8019ADF8 00197D38  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019ADFC 00197D3C  7D 89 03 A6 */	mtctr r12
/* 8019AE00 00197D40  4E 80 04 21 */	bctrl 
/* 8019AE04 00197D44  80 9E 00 44 */	lwz r4, 0x44(r30)
/* 8019AE08 00197D48  7C 7F 1B 78 */	mr r31, r3
/* 8019AE0C 00197D4C  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019AE10 00197D50  28 04 00 00 */	cmplwi r4, 0
/* 8019AE14 00197D54  41 82 00 24 */	beq .L_8019AE38
/* 8019AE18 00197D58  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019AE1C 00197D5C  A8 84 00 20 */	lha r4, 0x20(r4)
/* 8019AE20 00197D60  80 63 00 08 */	lwz r3, 8(r3)
/* 8019AE24 00197D64  81 83 00 00 */	lwz r12, 0(r3)
/* 8019AE28 00197D68  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019AE2C 00197D6C  7D 89 03 A6 */	mtctr r12
/* 8019AE30 00197D70  4E 80 04 21 */	bctrl 
/* 8019AE34 00197D74  7C 7D 1B 78 */	mr r29, r3
.L_8019AE38:
/* 8019AE38 00197D78  28 1F 00 00 */	cmplwi r31, 0
/* 8019AE3C 00197D7C  41 82 01 34 */	beq .L_8019AF70
/* 8019AE40 00197D80  28 1D 00 00 */	cmplwi r29, 0
/* 8019AE44 00197D84  41 82 01 2C */	beq .L_8019AF70
/* 8019AE48 00197D88  C2 FF 00 50 */	lfs f23, 0x50(r31)
/* 8019AE4C 00197D8C  C3 BD 00 50 */	lfs f29, 0x50(r29)
/* 8019AE50 00197D90  C3 1F 00 4C */	lfs f24, 0x4c(r31)
/* 8019AE54 00197D94  EF 5D B8 28 */	fsubs f26, f29, f23
/* 8019AE58 00197D98  C3 DD 00 4C */	lfs f30, 0x4c(r29)
/* 8019AE5C 00197D9C  C2 DF 00 54 */	lfs f22, 0x54(r31)
/* 8019AE60 00197DA0  C3 9D 00 54 */	lfs f28, 0x54(r29)
/* 8019AE64 00197DA4  EF 7E C0 28 */	fsubs f27, f30, f24
/* 8019AE68 00197DA8  EC 3A 06 B2 */	fmuls f1, f26, f26
/* 8019AE6C 00197DAC  EF 3C B0 28 */	fsubs f25, f28, f22
/* 8019AE70 00197DB0  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019AE74 00197DB4  EC 3B 0E FA */	fmadds f1, f27, f27, f1
/* 8019AE78 00197DB8  EC 59 06 72 */	fmuls f2, f25, f25
/* 8019AE7C 00197DBC  EF E2 08 2A */	fadds f31, f2, f1
/* 8019AE80 00197DC0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8019AE84 00197DC4  40 81 00 14 */	ble .L_8019AE98
/* 8019AE88 00197DC8  40 81 00 14 */	ble .L_8019AE9C
/* 8019AE8C 00197DCC  FC 00 F8 34 */	frsqrte f0, f31
/* 8019AE90 00197DD0  EF E0 07 F2 */	fmuls f31, f0, f31
/* 8019AE94 00197DD4  48 00 00 08 */	b .L_8019AE9C
.L_8019AE98:
/* 8019AE98 00197DD8  FF E0 00 90 */	fmr f31, f0
.L_8019AE9C:
/* 8019AE9C 00197DDC  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019AEA0 00197DE0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8019AEA4 00197DE4  40 81 00 1C */	ble .L_8019AEC0
/* 8019AEA8 00197DE8  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 8019AEAC 00197DEC  EC 00 F8 24 */	fdivs f0, f0, f31
/* 8019AEB0 00197DF0  EF 7B 00 32 */	fmuls f27, f27, f0
/* 8019AEB4 00197DF4  EF 5A 00 32 */	fmuls f26, f26, f0
/* 8019AEB8 00197DF8  EF 39 00 32 */	fmuls f25, f25, f0
/* 8019AEBC 00197DFC  48 00 00 08 */	b .L_8019AEC4
.L_8019AEC0:
/* 8019AEC0 00197E00  FF E0 00 90 */	fmr f31, f0
.L_8019AEC4:
/* 8019AEC4 00197E04  80 9E 00 30 */	lwz r4, 0x30(r30)
/* 8019AEC8 00197E08  38 61 00 2C */	addi r3, r1, 0x2c
/* 8019AECC 00197E0C  81 84 00 00 */	lwz r12, 0(r4)
/* 8019AED0 00197E10  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019AED4 00197E14  7D 89 03 A6 */	mtctr r12
/* 8019AED8 00197E18  4E 80 04 21 */	bctrl 
/* 8019AEDC 00197E1C  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 8019AEE0 00197E20  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 8019AEE4 00197E24  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8019AEE8 00197E28  EC 81 B0 28 */	fsubs f4, f1, f22
/* 8019AEEC 00197E2C  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 8019AEF0 00197E30  EC 62 B8 28 */	fsubs f3, f2, f23
/* 8019AEF4 00197E34  EC 40 C0 28 */	fsubs f2, f0, f24
/* 8019AEF8 00197E38  FC 01 F8 00 */	fcmpu cr0, f1, f31
/* 8019AEFC 00197E3C  40 82 00 08 */	bne .L_8019AF04
/* 8019AF00 00197E40  48 00 00 58 */	b .L_8019AF58
.L_8019AF04:
/* 8019AF04 00197E44  EC 1A 00 F2 */	fmuls f0, f26, f3
/* 8019AF08 00197E48  EC 1B 00 BA */	fmadds f0, f27, f2, f0
/* 8019AF0C 00197E4C  EC 19 01 3A */	fmadds f0, f25, f4, f0
/* 8019AF10 00197E50  EC 40 F8 24 */	fdivs f2, f0, f31
/* 8019AF14 00197E54  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8019AF18 00197E58  40 80 00 08 */	bge .L_8019AF20
/* 8019AF1C 00197E5C  48 00 00 3C */	b .L_8019AF58
.L_8019AF20:
/* 8019AF20 00197E60  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 8019AF24 00197E64  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8019AF28 00197E68  40 81 00 14 */	ble .L_8019AF3C
/* 8019AF2C 00197E6C  FF 00 F0 90 */	fmr f24, f30
/* 8019AF30 00197E70  FE E0 E8 90 */	fmr f23, f29
/* 8019AF34 00197E74  FE C0 E0 90 */	fmr f22, f28
/* 8019AF38 00197E78  48 00 00 20 */	b .L_8019AF58
.L_8019AF3C:
/* 8019AF3C 00197E7C  EC 02 07 F2 */	fmuls f0, f2, f31
/* 8019AF40 00197E80  EC 59 00 32 */	fmuls f2, f25, f0
/* 8019AF44 00197E84  EC 3B 00 32 */	fmuls f1, f27, f0
/* 8019AF48 00197E88  EC 1A 00 32 */	fmuls f0, f26, f0
/* 8019AF4C 00197E8C  EE C2 B0 2A */	fadds f22, f2, f22
/* 8019AF50 00197E90  EF 01 C0 2A */	fadds f24, f1, f24
/* 8019AF54 00197E94  EE E0 B8 2A */	fadds f23, f0, f23
.L_8019AF58:
/* 8019AF58 00197E98  7F C3 F3 78 */	mr r3, r30
/* 8019AF5C 00197E9C  48 00 00 89 */	bl crMakeRefs__Q26PikiAI11ActPathMoveFv
/* 8019AF60 00197EA0  D3 1E 00 8C */	stfs f24, 0x8c(r30)
/* 8019AF64 00197EA4  D2 FE 00 90 */	stfs f23, 0x90(r30)
/* 8019AF68 00197EA8  D2 DE 00 94 */	stfs f22, 0x94(r30)
/* 8019AF6C 00197EAC  48 00 00 0C */	b .L_8019AF78
.L_8019AF70:
/* 8019AF70 00197EB0  7F C3 F3 78 */	mr r3, r30
/* 8019AF74 00197EB4  48 00 00 71 */	bl crMakeRefs__Q26PikiAI11ActPathMoveFv
.L_8019AF78:
/* 8019AF78 00197EB8  E3 E1 01 78 */	psq_l f31, 376(r1), 0, qr0
/* 8019AF7C 00197EBC  CB E1 01 70 */	lfd f31, 0x170(r1)
/* 8019AF80 00197EC0  E3 C1 01 68 */	psq_l f30, 360(r1), 0, qr0
/* 8019AF84 00197EC4  CB C1 01 60 */	lfd f30, 0x160(r1)
/* 8019AF88 00197EC8  E3 A1 01 58 */	psq_l f29, 344(r1), 0, qr0
/* 8019AF8C 00197ECC  CB A1 01 50 */	lfd f29, 0x150(r1)
/* 8019AF90 00197ED0  E3 81 01 48 */	psq_l f28, 328(r1), 0, qr0
/* 8019AF94 00197ED4  CB 81 01 40 */	lfd f28, 0x140(r1)
/* 8019AF98 00197ED8  E3 61 01 38 */	psq_l f27, 312(r1), 0, qr0
/* 8019AF9C 00197EDC  CB 61 01 30 */	lfd f27, 0x130(r1)
/* 8019AFA0 00197EE0  E3 41 01 28 */	psq_l f26, 296(r1), 0, qr0
/* 8019AFA4 00197EE4  CB 41 01 20 */	lfd f26, 0x120(r1)
/* 8019AFA8 00197EE8  E3 21 01 18 */	psq_l f25, 280(r1), 0, qr0
/* 8019AFAC 00197EEC  CB 21 01 10 */	lfd f25, 0x110(r1)
/* 8019AFB0 00197EF0  E3 01 01 08 */	psq_l f24, 264(r1), 0, qr0
/* 8019AFB4 00197EF4  CB 01 01 00 */	lfd f24, 0x100(r1)
/* 8019AFB8 00197EF8  E2 E1 00 F8 */	psq_l f23, 248(r1), 0, qr0
/* 8019AFBC 00197EFC  CA E1 00 F0 */	lfd f23, 0xf0(r1)
/* 8019AFC0 00197F00  E2 C1 00 E8 */	psq_l f22, 232(r1), 0, qr0
/* 8019AFC4 00197F04  CA C1 00 E0 */	lfd f22, 0xe0(r1)
/* 8019AFC8 00197F08  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 8019AFCC 00197F0C  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 8019AFD0 00197F10  80 01 01 84 */	lwz r0, 0x184(r1)
/* 8019AFD4 00197F14  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 8019AFD8 00197F18  7C 08 03 A6 */	mtlr r0
/* 8019AFDC 00197F1C  38 21 01 80 */	addi r1, r1, 0x180
/* 8019AFE0 00197F20  4E 80 00 20 */	blr 
.endfn crInit__Q26PikiAI11ActPathMoveFv

.fn crMakeRefs__Q26PikiAI11ActPathMoveFv, global
/* 8019AFE4 00197F24  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8019AFE8 00197F28  7C 08 02 A6 */	mflr r0
/* 8019AFEC 00197F2C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8019AFF0 00197F30  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8019AFF4 00197F34  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8019AFF8 00197F38  3B C0 00 00 */	li r30, 0
/* 8019AFFC 00197F3C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8019B000 00197F40  7C 7D 1B 78 */	mr r29, r3
/* 8019B004 00197F44  7F BF EB 78 */	mr r31, r29
.L_8019B008:
/* 8019B008 00197F48  80 1D 00 70 */	lwz r0, 0x70(r29)
/* 8019B00C 00197F4C  38 BE FF FF */	addi r5, r30, -1
/* 8019B010 00197F50  7F A4 EB 78 */	mr r4, r29
/* 8019B014 00197F54  38 61 00 08 */	addi r3, r1, 8
/* 8019B018 00197F58  7C A0 2A 14 */	add r5, r0, r5
/* 8019B01C 00197F5C  4B FF F2 0D */	bl crGetPoint__Q26PikiAI11ActPathMoveFi
/* 8019B020 00197F60  C0 01 00 08 */	lfs f0, 8(r1)
/* 8019B024 00197F64  3B DE 00 01 */	addi r30, r30, 1
/* 8019B028 00197F68  2C 1E 00 04 */	cmpwi r30, 4
/* 8019B02C 00197F6C  D0 1F 00 74 */	stfs f0, 0x74(r31)
/* 8019B030 00197F70  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8019B034 00197F74  D0 1F 00 78 */	stfs f0, 0x78(r31)
/* 8019B038 00197F78  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8019B03C 00197F7C  D0 1F 00 7C */	stfs f0, 0x7c(r31)
/* 8019B040 00197F80  3B FF 00 0C */	addi r31, r31, 0xc
/* 8019B044 00197F84  41 80 FF C4 */	blt .L_8019B008
/* 8019B048 00197F88  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8019B04C 00197F8C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8019B050 00197F90  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8019B054 00197F94  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8019B058 00197F98  7C 08 03 A6 */	mtlr r0
/* 8019B05C 00197F9C  38 21 00 30 */	addi r1, r1, 0x30
/* 8019B060 00197FA0  4E 80 00 20 */	blr 
.endfn crMakeRefs__Q26PikiAI11ActPathMoveFv

.fn crMove__Q26PikiAI11ActPathMoveFv, global
/* 8019B064 00197FA4  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 8019B068 00197FA8  7C 08 02 A6 */	mflr r0
/* 8019B06C 00197FAC  90 01 01 34 */	stw r0, 0x134(r1)
/* 8019B070 00197FB0  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 8019B074 00197FB4  F3 E1 01 28 */	psq_st f31, 296(r1), 0, qr0
/* 8019B078 00197FB8  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 8019B07C 00197FBC  F3 C1 01 18 */	psq_st f30, 280(r1), 0, qr0
/* 8019B080 00197FC0  DB A1 01 00 */	stfd f29, 0x100(r1)
/* 8019B084 00197FC4  F3 A1 01 08 */	psq_st f29, 264(r1), 0, qr0
/* 8019B088 00197FC8  DB 81 00 F0 */	stfd f28, 0xf0(r1)
/* 8019B08C 00197FCC  F3 81 00 F8 */	psq_st f28, 248(r1), 0, qr0
/* 8019B090 00197FD0  DB 61 00 E0 */	stfd f27, 0xe0(r1)
/* 8019B094 00197FD4  F3 61 00 E8 */	psq_st f27, 232(r1), 0, qr0
/* 8019B098 00197FD8  DB 41 00 D0 */	stfd f26, 0xd0(r1)
/* 8019B09C 00197FDC  F3 41 00 D8 */	psq_st f26, 216(r1), 0, qr0
/* 8019B0A0 00197FE0  DB 21 00 C0 */	stfd f25, 0xc0(r1)
/* 8019B0A4 00197FE4  F3 21 00 C8 */	psq_st f25, 200(r1), 0, qr0
/* 8019B0A8 00197FE8  DB 01 00 B0 */	stfd f24, 0xb0(r1)
/* 8019B0AC 00197FEC  F3 01 00 B8 */	psq_st f24, 184(r1), 0, qr0
/* 8019B0B0 00197FF0  DA E1 00 A0 */	stfd f23, 0xa0(r1)
/* 8019B0B4 00197FF4  F2 E1 00 A8 */	psq_st f23, 168(r1), 0, qr0
/* 8019B0B8 00197FF8  DA C1 00 90 */	stfd f22, 0x90(r1)
/* 8019B0BC 00197FFC  F2 C1 00 98 */	psq_st f22, 152(r1), 0, qr0
/* 8019B0C0 00198000  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 8019B0C4 00198004  7C 7F 1B 78 */	mr r31, r3
/* 8019B0C8 00198008  38 61 00 7C */	addi r3, r1, 0x7c
/* 8019B0CC 0019800C  80 BF 00 70 */	lwz r5, 0x70(r31)
/* 8019B0D0 00198010  7F E4 FB 78 */	mr r4, r31
/* 8019B0D4 00198014  4B FF F1 55 */	bl crGetPoint__Q26PikiAI11ActPathMoveFi
/* 8019B0D8 00198018  80 1F 00 70 */	lwz r0, 0x70(r31)
/* 8019B0DC 0019801C  C3 81 00 7C */	lfs f28, 0x7c(r1)
/* 8019B0E0 00198020  2C 00 FF FF */	cmpwi r0, -1
/* 8019B0E4 00198024  C3 61 00 80 */	lfs f27, 0x80(r1)
/* 8019B0E8 00198028  C3 41 00 84 */	lfs f26, 0x84(r1)
/* 8019B0EC 0019802C  C3 FF 00 8C */	lfs f31, 0x8c(r31)
/* 8019B0F0 00198030  C3 BF 00 90 */	lfs f29, 0x90(r31)
/* 8019B0F4 00198034  C2 DF 00 94 */	lfs f22, 0x94(r31)
/* 8019B0F8 00198038  40 82 00 70 */	bne .L_8019B168
/* 8019B0FC 0019803C  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8019B100 00198040  2C 00 00 01 */	cmpwi r0, 1
/* 8019B104 00198044  41 81 00 0C */	bgt .L_8019B110
/* 8019B108 00198048  38 00 00 01 */	li r0, 1
/* 8019B10C 0019804C  48 00 00 54 */	b .L_8019B160
.L_8019B110:
/* 8019B110 00198050  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8019B114 00198054  80 83 00 0C */	lwz r4, 0xc(r3)
/* 8019B118 00198058  28 04 00 00 */	cmplwi r4, 0
/* 8019B11C 0019805C  41 82 00 24 */	beq .L_8019B140
/* 8019B120 00198060  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019B124 00198064  A8 84 00 20 */	lha r4, 0x20(r4)
/* 8019B128 00198068  80 63 00 08 */	lwz r3, 8(r3)
/* 8019B12C 0019806C  81 83 00 00 */	lwz r12, 0(r3)
/* 8019B130 00198070  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019B134 00198074  7D 89 03 A6 */	mtctr r12
/* 8019B138 00198078  4E 80 04 21 */	bctrl 
/* 8019B13C 0019807C  48 00 00 08 */	b .L_8019B144
.L_8019B140:
/* 8019B140 00198080  38 60 00 00 */	li r3, 0
.L_8019B144:
/* 8019B144 00198084  28 03 00 00 */	cmplwi r3, 0
/* 8019B148 00198088  40 82 00 0C */	bne .L_8019B154
/* 8019B14C 0019808C  38 00 00 01 */	li r0, 1
/* 8019B150 00198090  48 00 00 10 */	b .L_8019B160
.L_8019B154:
/* 8019B154 00198094  88 03 00 34 */	lbz r0, 0x34(r3)
/* 8019B158 00198098  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 8019B15C 0019809C  68 00 00 01 */	xori r0, r0, 1
.L_8019B160:
/* 8019B160 001980A0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8019B164 001980A4  41 82 00 EC */	beq .L_8019B250
.L_8019B168:
/* 8019B168 001980A8  80 7F 00 70 */	lwz r3, 0x70(r31)
/* 8019B16C 001980AC  2C 03 FF FF */	cmpwi r3, -1
/* 8019B170 001980B0  41 82 02 08 */	beq .L_8019B378
/* 8019B174 001980B4  34 63 00 01 */	addic. r3, r3, 1
/* 8019B178 001980B8  41 80 00 10 */	blt .L_8019B188
/* 8019B17C 001980BC  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8019B180 001980C0  7C 03 00 00 */	cmpw r3, r0
/* 8019B184 001980C4  41 80 00 0C */	blt .L_8019B190
.L_8019B188:
/* 8019B188 001980C8  38 00 00 01 */	li r0, 1
/* 8019B18C 001980CC  48 00 00 BC */	b .L_8019B248
.L_8019B190:
/* 8019B190 001980D0  2C 03 00 00 */	cmpwi r3, 0
/* 8019B194 001980D4  80 DF 00 48 */	lwz r6, 0x48(r31)
/* 8019B198 001980D8  38 80 00 00 */	li r4, 0
/* 8019B19C 001980DC  40 81 00 64 */	ble .L_8019B200
/* 8019B1A0 001980E0  2C 03 00 08 */	cmpwi r3, 8
/* 8019B1A4 001980E4  38 A3 FF F8 */	addi r5, r3, -8
/* 8019B1A8 001980E8  40 81 00 40 */	ble .L_8019B1E8
/* 8019B1AC 001980EC  38 05 00 07 */	addi r0, r5, 7
/* 8019B1B0 001980F0  54 00 E8 FE */	srwi r0, r0, 3
/* 8019B1B4 001980F4  7C 09 03 A6 */	mtctr r0
/* 8019B1B8 001980F8  2C 05 00 00 */	cmpwi r5, 0
/* 8019B1BC 001980FC  40 81 00 2C */	ble .L_8019B1E8
.L_8019B1C0:
/* 8019B1C0 00198100  80 A6 00 0C */	lwz r5, 0xc(r6)
/* 8019B1C4 00198104  38 84 00 08 */	addi r4, r4, 8
/* 8019B1C8 00198108  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B1CC 0019810C  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B1D0 00198110  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B1D4 00198114  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B1D8 00198118  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B1DC 0019811C  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B1E0 00198120  80 C5 00 0C */	lwz r6, 0xc(r5)
/* 8019B1E4 00198124  42 00 FF DC */	bdnz .L_8019B1C0
.L_8019B1E8:
/* 8019B1E8 00198128  7C 04 18 50 */	subf r0, r4, r3
/* 8019B1EC 0019812C  7C 09 03 A6 */	mtctr r0
/* 8019B1F0 00198130  7C 04 18 00 */	cmpw r4, r3
/* 8019B1F4 00198134  40 80 00 0C */	bge .L_8019B200
.L_8019B1F8:
/* 8019B1F8 00198138  80 C6 00 0C */	lwz r6, 0xc(r6)
/* 8019B1FC 0019813C  42 00 FF FC */	bdnz .L_8019B1F8
.L_8019B200:
/* 8019B200 00198140  28 06 00 00 */	cmplwi r6, 0
/* 8019B204 00198144  41 82 00 24 */	beq .L_8019B228
/* 8019B208 00198148  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019B20C 0019814C  A8 86 00 20 */	lha r4, 0x20(r6)
/* 8019B210 00198150  80 63 00 08 */	lwz r3, 8(r3)
/* 8019B214 00198154  81 83 00 00 */	lwz r12, 0(r3)
/* 8019B218 00198158  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019B21C 0019815C  7D 89 03 A6 */	mtctr r12
/* 8019B220 00198160  4E 80 04 21 */	bctrl 
/* 8019B224 00198164  48 00 00 08 */	b .L_8019B22C
.L_8019B228:
/* 8019B228 00198168  38 60 00 00 */	li r3, 0
.L_8019B22C:
/* 8019B22C 0019816C  28 03 00 00 */	cmplwi r3, 0
/* 8019B230 00198170  40 82 00 0C */	bne .L_8019B23C
/* 8019B234 00198174  38 00 00 01 */	li r0, 1
/* 8019B238 00198178  48 00 00 10 */	b .L_8019B248
.L_8019B23C:
/* 8019B23C 0019817C  88 03 00 34 */	lbz r0, 0x34(r3)
/* 8019B240 00198180  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 8019B244 00198184  68 00 00 01 */	xori r0, r0, 1
.L_8019B248:
/* 8019B248 00198188  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8019B24C 0019818C  40 82 01 2C */	bne .L_8019B378
.L_8019B250:
/* 8019B250 00198190  80 7F 00 70 */	lwz r3, 0x70(r31)
/* 8019B254 00198194  2C 03 FF FF */	cmpwi r3, -1
/* 8019B258 00198198  40 82 00 40 */	bne .L_8019B298
/* 8019B25C 0019819C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8019B260 001981A0  80 83 00 0C */	lwz r4, 0xc(r3)
/* 8019B264 001981A4  28 04 00 00 */	cmplwi r4, 0
/* 8019B268 001981A8  41 82 00 24 */	beq .L_8019B28C
/* 8019B26C 001981AC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019B270 001981B0  A8 84 00 20 */	lha r4, 0x20(r4)
/* 8019B274 001981B4  80 63 00 08 */	lwz r3, 8(r3)
/* 8019B278 001981B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8019B27C 001981BC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019B280 001981C0  7D 89 03 A6 */	mtctr r12
/* 8019B284 001981C4  4E 80 04 21 */	bctrl 
/* 8019B288 001981C8  48 00 00 08 */	b .L_8019B290
.L_8019B28C:
/* 8019B28C 001981CC  38 60 00 00 */	li r3, 0
.L_8019B290:
/* 8019B290 001981D0  90 7F 00 64 */	stw r3, 0x64(r31)
/* 8019B294 001981D4  48 00 00 A4 */	b .L_8019B338
.L_8019B298:
/* 8019B298 001981D8  34 A3 00 01 */	addic. r5, r3, 1
/* 8019B29C 001981DC  80 DF 00 48 */	lwz r6, 0x48(r31)
/* 8019B2A0 001981E0  38 60 00 00 */	li r3, 0
/* 8019B2A4 001981E4  40 81 00 64 */	ble .L_8019B308
/* 8019B2A8 001981E8  2C 05 00 08 */	cmpwi r5, 8
/* 8019B2AC 001981EC  38 85 FF F8 */	addi r4, r5, -8
/* 8019B2B0 001981F0  40 81 00 40 */	ble .L_8019B2F0
/* 8019B2B4 001981F4  38 04 00 07 */	addi r0, r4, 7
/* 8019B2B8 001981F8  54 00 E8 FE */	srwi r0, r0, 3
/* 8019B2BC 001981FC  7C 09 03 A6 */	mtctr r0
/* 8019B2C0 00198200  2C 04 00 00 */	cmpwi r4, 0
/* 8019B2C4 00198204  40 81 00 2C */	ble .L_8019B2F0
.L_8019B2C8:
/* 8019B2C8 00198208  80 86 00 0C */	lwz r4, 0xc(r6)
/* 8019B2CC 0019820C  38 63 00 08 */	addi r3, r3, 8
/* 8019B2D0 00198210  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019B2D4 00198214  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019B2D8 00198218  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019B2DC 0019821C  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019B2E0 00198220  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019B2E4 00198224  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8019B2E8 00198228  80 C4 00 0C */	lwz r6, 0xc(r4)
/* 8019B2EC 0019822C  42 00 FF DC */	bdnz .L_8019B2C8
.L_8019B2F0:
/* 8019B2F0 00198230  7C 03 28 50 */	subf r0, r3, r5
/* 8019B2F4 00198234  7C 09 03 A6 */	mtctr r0
/* 8019B2F8 00198238  7C 03 28 00 */	cmpw r3, r5
/* 8019B2FC 0019823C  40 80 00 0C */	bge .L_8019B308
.L_8019B300:
/* 8019B300 00198240  80 C6 00 0C */	lwz r6, 0xc(r6)
/* 8019B304 00198244  42 00 FF FC */	bdnz .L_8019B300
.L_8019B308:
/* 8019B308 00198248  28 06 00 00 */	cmplwi r6, 0
/* 8019B30C 0019824C  41 82 00 24 */	beq .L_8019B330
/* 8019B310 00198250  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019B314 00198254  A8 86 00 20 */	lha r4, 0x20(r6)
/* 8019B318 00198258  80 63 00 08 */	lwz r3, 8(r3)
/* 8019B31C 0019825C  81 83 00 00 */	lwz r12, 0(r3)
/* 8019B320 00198260  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019B324 00198264  7D 89 03 A6 */	mtctr r12
/* 8019B328 00198268  4E 80 04 21 */	bctrl 
/* 8019B32C 0019826C  48 00 00 08 */	b .L_8019B334
.L_8019B330:
/* 8019B330 00198270  38 60 00 00 */	li r3, 0
.L_8019B334:
/* 8019B334 00198274  90 7F 00 64 */	stw r3, 0x64(r31)
.L_8019B338:
/* 8019B338 00198278  38 00 00 03 */	li r0, 3
/* 8019B33C 0019827C  38 61 00 70 */	addi r3, r1, 0x70
/* 8019B340 00198280  B0 1F 00 1E */	sth r0, 0x1e(r31)
/* 8019B344 00198284  80 9F 00 30 */	lwz r4, 0x30(r31)
/* 8019B348 00198288  81 84 00 00 */	lwz r12, 0(r4)
/* 8019B34C 0019828C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019B350 00198290  7D 89 03 A6 */	mtctr r12
/* 8019B354 00198294  4E 80 04 21 */	bctrl 
/* 8019B358 00198298  C0 21 00 70 */	lfs f1, 0x70(r1)
/* 8019B35C 0019829C  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019B360 001982A0  D0 3F 00 58 */	stfs f1, 0x58(r31)
/* 8019B364 001982A4  C0 21 00 74 */	lfs f1, 0x74(r1)
/* 8019B368 001982A8  D0 3F 00 5C */	stfs f1, 0x5c(r31)
/* 8019B36C 001982AC  C0 21 00 78 */	lfs f1, 0x78(r1)
/* 8019B370 001982B0  D0 3F 00 60 */	stfs f1, 0x60(r31)
/* 8019B374 001982B4  D0 1F 00 68 */	stfs f0, 0x68(r31)
.L_8019B378:
/* 8019B378 001982B8  80 9F 00 30 */	lwz r4, 0x30(r31)
/* 8019B37C 001982BC  38 61 00 64 */	addi r3, r1, 0x64
/* 8019B380 001982C0  81 84 00 00 */	lwz r12, 0(r4)
/* 8019B384 001982C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019B388 001982C8  7D 89 03 A6 */	mtctr r12
/* 8019B38C 001982CC  4E 80 04 21 */	bctrl 
/* 8019B390 001982D0  C2 E1 00 64 */	lfs f23, 0x64(r1)
/* 8019B394 001982D4  FC 20 F8 90 */	fmr f1, f31
/* 8019B398 001982D8  C3 01 00 6C */	lfs f24, 0x6c(r1)
/* 8019B39C 001982DC  FC 40 B0 90 */	fmr f2, f22
/* 8019B3A0 001982E0  FC 60 B8 90 */	fmr f3, f23
/* 8019B3A4 001982E4  C3 21 00 68 */	lfs f25, 0x68(r1)
/* 8019B3A8 001982E8  FC 80 C0 90 */	fmr f4, f24
/* 8019B3AC 001982EC  48 27 64 71 */	bl qdist2__Fffff
/* 8019B3B0 001982F0  C0 02 AC 10 */	lfs f0, lbl_80518F70@sda21(r2)
/* 8019B3B4 001982F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019B3B8 001982F8  40 80 01 98 */	bge .L_8019B550
/* 8019B3BC 001982FC  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8019B3C0 00198300  80 9F 00 70 */	lwz r4, 0x70(r31)
/* 8019B3C4 00198304  38 03 FF FE */	addi r0, r3, -2
/* 8019B3C8 00198308  7C 04 00 00 */	cmpw r4, r0
/* 8019B3CC 0019830C  41 80 00 C0 */	blt .L_8019B48C
/* 8019B3D0 00198310  38 00 00 02 */	li r0, 2
/* 8019B3D4 00198314  C0 22 AC 04 */	lfs f1, lbl_80518F64@sda21(r2)
/* 8019B3D8 00198318  B0 1F 00 1E */	sth r0, 0x1e(r31)
/* 8019B3DC 0019831C  38 61 00 58 */	addi r3, r1, 0x58
/* 8019B3E0 00198320  38 9F 00 74 */	addi r4, r31, 0x74
/* 8019B3E4 00198324  48 27 64 75 */	bl "CRSplineTangent__FfP10Vector3<f>"
/* 8019B3E8 00198328  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 8019B3EC 0019832C  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 8019B3F0 00198330  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 8019B3F4 00198334  C0 01 00 5C */	lfs f0, 0x5c(r1)
/* 8019B3F8 00198338  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 8019B3FC 0019833C  C0 01 00 60 */	lfs f0, 0x60(r1)
/* 8019B400 00198340  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
/* 8019B404 00198344  C0 7F 00 B0 */	lfs f3, 0xb0(r31)
/* 8019B408 00198348  C0 5F 00 B4 */	lfs f2, 0xb4(r31)
/* 8019B40C 0019834C  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8019B410 00198350  C0 9F 00 B8 */	lfs f4, 0xb8(r31)
/* 8019B414 00198354  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8019B418 00198358  EC 84 01 32 */	fmuls f4, f4, f4
/* 8019B41C 0019835C  EC 00 10 2A */	fadds f0, f0, f2
/* 8019B420 00198360  EC 04 00 2A */	fadds f0, f4, f0
/* 8019B424 00198364  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8019B428 00198368  40 81 00 20 */	ble .L_8019B448
/* 8019B42C 0019836C  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 8019B430 00198370  EC 44 00 2A */	fadds f2, f4, f0
/* 8019B434 00198374  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8019B438 00198378  40 81 00 14 */	ble .L_8019B44C
/* 8019B43C 0019837C  FC 00 10 34 */	frsqrte f0, f2
/* 8019B440 00198380  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8019B444 00198384  48 00 00 08 */	b .L_8019B44C
.L_8019B448:
/* 8019B448 00198388  FC 40 08 90 */	fmr f2, f1
.L_8019B44C:
/* 8019B44C 0019838C  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019B450 00198390  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8019B454 00198394  40 81 00 30 */	ble .L_8019B484
/* 8019B458 00198398  C0 22 AC 04 */	lfs f1, lbl_80518F64@sda21(r2)
/* 8019B45C 0019839C  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 8019B460 001983A0  EC 21 10 24 */	fdivs f1, f1, f2
/* 8019B464 001983A4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019B468 001983A8  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 8019B46C 001983AC  C0 1F 00 B4 */	lfs f0, 0xb4(r31)
/* 8019B470 001983B0  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019B474 001983B4  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 8019B478 001983B8  C0 1F 00 B8 */	lfs f0, 0xb8(r31)
/* 8019B47C 001983BC  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019B480 001983C0  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
.L_8019B484:
/* 8019B484 001983C4  38 60 00 01 */	li r3, 1
/* 8019B488 001983C8  48 00 07 CC */	b .L_8019BC54
.L_8019B48C:
/* 8019B48C 001983CC  38 04 00 01 */	addi r0, r4, 1
/* 8019B490 001983D0  7F E3 FB 78 */	mr r3, r31
/* 8019B494 001983D4  90 1F 00 70 */	stw r0, 0x70(r31)
/* 8019B498 001983D8  4B FF FB 4D */	bl crMakeRefs__Q26PikiAI11ActPathMoveFv
/* 8019B49C 001983DC  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 8019B4A0 001983E0  38 61 00 4C */	addi r3, r1, 0x4c
/* 8019B4A4 001983E4  38 9F 00 74 */	addi r4, r31, 0x74
/* 8019B4A8 001983E8  48 27 63 B1 */	bl "CRSplineTangent__FfP10Vector3<f>"
/* 8019B4AC 001983EC  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 8019B4B0 001983F0  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 8019B4B4 001983F4  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 8019B4B8 001983F8  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 8019B4BC 001983FC  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 8019B4C0 00198400  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 8019B4C4 00198404  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
/* 8019B4C8 00198408  C0 7F 00 B0 */	lfs f3, 0xb0(r31)
/* 8019B4CC 0019840C  C0 5F 00 B4 */	lfs f2, 0xb4(r31)
/* 8019B4D0 00198410  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8019B4D4 00198414  C0 9F 00 B8 */	lfs f4, 0xb8(r31)
/* 8019B4D8 00198418  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8019B4DC 0019841C  EC 84 01 32 */	fmuls f4, f4, f4
/* 8019B4E0 00198420  EC 00 10 2A */	fadds f0, f0, f2
/* 8019B4E4 00198424  EC 04 00 2A */	fadds f0, f4, f0
/* 8019B4E8 00198428  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8019B4EC 0019842C  40 81 00 20 */	ble .L_8019B50C
/* 8019B4F0 00198430  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 8019B4F4 00198434  EC 44 00 2A */	fadds f2, f4, f0
/* 8019B4F8 00198438  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8019B4FC 0019843C  40 81 00 14 */	ble .L_8019B510
/* 8019B500 00198440  FC 00 10 34 */	frsqrte f0, f2
/* 8019B504 00198444  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8019B508 00198448  48 00 00 08 */	b .L_8019B510
.L_8019B50C:
/* 8019B50C 0019844C  FC 40 08 90 */	fmr f2, f1
.L_8019B510:
/* 8019B510 00198450  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019B514 00198454  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8019B518 00198458  40 81 00 30 */	ble .L_8019B548
/* 8019B51C 0019845C  C0 22 AC 04 */	lfs f1, lbl_80518F64@sda21(r2)
/* 8019B520 00198460  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 8019B524 00198464  EC 21 10 24 */	fdivs f1, f1, f2
/* 8019B528 00198468  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019B52C 0019846C  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 8019B530 00198470  C0 1F 00 B4 */	lfs f0, 0xb4(r31)
/* 8019B534 00198474  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019B538 00198478  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 8019B53C 0019847C  C0 1F 00 B8 */	lfs f0, 0xb8(r31)
/* 8019B540 00198480  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019B544 00198484  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
.L_8019B548:
/* 8019B548 00198488  38 60 00 01 */	li r3, 1
/* 8019B54C 0019848C  48 00 07 08 */	b .L_8019BC54
.L_8019B550:
/* 8019B550 00198490  80 9F 00 70 */	lwz r4, 0x70(r31)
/* 8019B554 00198494  7F E3 FB 78 */	mr r3, r31
/* 8019B558 00198498  4B FF EE 5D */	bl contextCheck__Q26PikiAI11ActPathMoveFi
/* 8019B55C 0019849C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019B560 001984A0  40 82 00 4C */	bne .L_8019B5AC
/* 8019B564 001984A4  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019B568 001984A8  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 8019B56C 001984AC  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 8019B570 001984B0  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
/* 8019B574 001984B4  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 8019B578 001984B8  28 04 00 00 */	cmplwi r4, 0
/* 8019B57C 001984BC  41 82 00 14 */	beq .L_8019B590
/* 8019B580 001984C0  80 6D 93 80 */	lwz r3, testPathfinder__4Game@sda21(r13)
/* 8019B584 001984C4  48 00 84 DD */	bl release__Q24Game10PathfinderFUl
/* 8019B588 001984C8  38 00 00 00 */	li r0, 0
/* 8019B58C 001984CC  90 1F 00 20 */	stw r0, 0x20(r31)
.L_8019B590:
/* 8019B590 001984D0  38 00 00 00 */	li r0, 0
/* 8019B594 001984D4  7F E3 FB 78 */	mr r3, r31
/* 8019B598 001984D8  90 1F 00 34 */	stw r0, 0x34(r31)
/* 8019B59C 001984DC  38 80 00 01 */	li r4, 1
/* 8019B5A0 001984E0  4B FF D2 71 */	bl initPathfinding__Q26PikiAI11ActPathMoveFb
/* 8019B5A4 001984E4  38 60 00 00 */	li r3, 0
/* 8019B5A8 001984E8  48 00 06 AC */	b .L_8019BC54
.L_8019B5AC:
/* 8019B5AC 001984EC  EF DD D8 28 */	fsubs f30, f29, f27
/* 8019B5B0 001984F0  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019B5B4 001984F4  EF B6 D0 28 */	fsubs f29, f22, f26
/* 8019B5B8 001984F8  EF FF E0 28 */	fsubs f31, f31, f28
/* 8019B5BC 001984FC  EC 3E 07 B2 */	fmuls f1, f30, f30
/* 8019B5C0 00198500  EC 5D 07 72 */	fmuls f2, f29, f29
/* 8019B5C4 00198504  EC 3F 0F FA */	fmadds f1, f31, f31, f1
/* 8019B5C8 00198508  EC 62 08 2A */	fadds f3, f2, f1
/* 8019B5CC 0019850C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8019B5D0 00198510  40 81 00 14 */	ble .L_8019B5E4
/* 8019B5D4 00198514  40 81 00 14 */	ble .L_8019B5E8
/* 8019B5D8 00198518  FC 00 18 34 */	frsqrte f0, f3
/* 8019B5DC 0019851C  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8019B5E0 00198520  48 00 00 08 */	b .L_8019B5E8
.L_8019B5E4:
/* 8019B5E4 00198524  FC 60 00 90 */	fmr f3, f0
.L_8019B5E8:
/* 8019B5E8 00198528  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019B5EC 0019852C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8019B5F0 00198530  40 81 00 1C */	ble .L_8019B60C
/* 8019B5F4 00198534  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 8019B5F8 00198538  EC 00 18 24 */	fdivs f0, f0, f3
/* 8019B5FC 0019853C  EF FF 00 32 */	fmuls f31, f31, f0
/* 8019B600 00198540  EF DE 00 32 */	fmuls f30, f30, f0
/* 8019B604 00198544  EF BD 00 32 */	fmuls f29, f29, f0
/* 8019B608 00198548  48 00 00 08 */	b .L_8019B610
.L_8019B60C:
/* 8019B60C 0019854C  FC 60 00 90 */	fmr f3, f0
.L_8019B610:
/* 8019B610 00198550  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019B614 00198554  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8019B618 00198558  40 81 00 24 */	ble .L_8019B63C
/* 8019B61C 0019855C  EC 19 D8 28 */	fsubs f0, f25, f27
/* 8019B620 00198560  EC 37 E0 28 */	fsubs f1, f23, f28
/* 8019B624 00198564  EC 58 D0 28 */	fsubs f2, f24, f26
/* 8019B628 00198568  EC 1E 00 32 */	fmuls f0, f30, f0
/* 8019B62C 0019856C  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 8019B630 00198570  EC 1D 00 BA */	fmadds f0, f29, f2, f0
/* 8019B634 00198574  EF 60 18 24 */	fdivs f27, f0, f3
/* 8019B638 00198578  48 00 00 08 */	b .L_8019B640
.L_8019B63C:
/* 8019B63C 0019857C  C3 62 AC 04 */	lfs f27, lbl_80518F64@sda21(r2)
.L_8019B640:
/* 8019B640 00198580  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019B644 00198584  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 8019B648 00198588  40 80 00 08 */	bge .L_8019B650
/* 8019B64C 0019858C  FF 60 00 90 */	fmr f27, f0
.L_8019B650:
/* 8019B650 00198590  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 8019B654 00198594  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 8019B658 00198598  40 81 00 08 */	ble .L_8019B660
/* 8019B65C 0019859C  FF 60 00 90 */	fmr f27, f0
.L_8019B660:
/* 8019B660 001985A0  EC 1B 00 F2 */	fmuls f0, f27, f3
/* 8019B664 001985A4  C3 22 AC 00 */	lfs f25, lbl_80518F60@sda21(r2)
/* 8019B668 001985A8  EC 3D 00 32 */	fmuls f1, f29, f0
/* 8019B66C 001985AC  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8019B670 001985B0  EC 21 D0 2A */	fadds f1, f1, f26
/* 8019B674 001985B4  EC 00 E0 2A */	fadds f0, f0, f28
/* 8019B678 001985B8  EF 01 C0 28 */	fsubs f24, f1, f24
/* 8019B67C 001985BC  EE E0 B8 28 */	fsubs f23, f0, f23
/* 8019B680 001985C0  EC 38 06 32 */	fmuls f1, f24, f24
/* 8019B684 001985C4  EC 17 CD FA */	fmadds f0, f23, f23, f25
/* 8019B688 001985C8  EF 81 00 2A */	fadds f28, f1, f0
/* 8019B68C 001985CC  FC 1C C8 40 */	fcmpo cr0, f28, f25
/* 8019B690 001985D0  40 81 00 14 */	ble .L_8019B6A4
/* 8019B694 001985D4  40 81 00 14 */	ble .L_8019B6A8
/* 8019B698 001985D8  FC 00 E0 34 */	frsqrte f0, f28
/* 8019B69C 001985DC  EF 80 07 32 */	fmuls f28, f0, f28
/* 8019B6A0 001985E0  48 00 00 08 */	b .L_8019B6A8
.L_8019B6A4:
/* 8019B6A4 001985E4  FF 80 C8 90 */	fmr f28, f25
.L_8019B6A8:
/* 8019B6A8 001985E8  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019B6AC 001985EC  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 8019B6B0 001985F0  40 81 00 1C */	ble .L_8019B6CC
/* 8019B6B4 001985F4  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 8019B6B8 001985F8  EC 00 E0 24 */	fdivs f0, f0, f28
/* 8019B6BC 001985FC  EE F7 00 32 */	fmuls f23, f23, f0
/* 8019B6C0 00198600  EF 39 00 32 */	fmuls f25, f25, f0
/* 8019B6C4 00198604  EF 18 00 32 */	fmuls f24, f24, f0
/* 8019B6C8 00198608  48 00 00 08 */	b .L_8019B6D0
.L_8019B6CC:
/* 8019B6CC 0019860C  FF 80 00 90 */	fmr f28, f0
.L_8019B6D0:
/* 8019B6D0 00198610  80 7F 00 70 */	lwz r3, 0x70(r31)
/* 8019B6D4 00198614  2C 03 00 00 */	cmpwi r3, 0
/* 8019B6D8 00198618  40 80 00 50 */	bge .L_8019B728
/* 8019B6DC 0019861C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8019B6E0 00198620  38 81 00 18 */	addi r4, r1, 0x18
/* 8019B6E4 00198624  81 83 00 00 */	lwz r12, 0(r3)
/* 8019B6E8 00198628  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8019B6EC 0019862C  7D 89 03 A6 */	mtctr r12
/* 8019B6F0 00198630  4E 80 04 21 */	bctrl 
/* 8019B6F4 00198634  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8019B6F8 00198638  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019B6FC 0019863C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019B700 00198640  41 81 00 20 */	bgt .L_8019B720
/* 8019B704 00198644  3C 60 80 48 */	lis r3, lbl_8047F0A4@ha
/* 8019B708 00198648  3C A0 80 48 */	lis r5, lbl_8047F0B8@ha
/* 8019B70C 0019864C  38 63 F0 A4 */	addi r3, r3, lbl_8047F0A4@l
/* 8019B710 00198650  38 80 07 42 */	li r4, 0x742
/* 8019B714 00198654  38 A5 F0 B8 */	addi r5, r5, lbl_8047F0B8@l
/* 8019B718 00198658  4C C6 31 82 */	crclr 6
/* 8019B71C 0019865C  4B E8 EF 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8019B720:
/* 8019B720 00198660  C3 41 00 24 */	lfs f26, 0x24(r1)
/* 8019B724 00198664  48 00 00 C8 */	b .L_8019B7EC
.L_8019B728:
/* 8019B728 00198668  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8019B72C 0019866C  7C 03 00 00 */	cmpw r3, r0
/* 8019B730 00198670  41 80 00 0C */	blt .L_8019B73C
/* 8019B734 00198674  C3 42 AC 68 */	lfs f26, lbl_80518FC8@sda21(r2)
/* 8019B738 00198678  48 00 00 B4 */	b .L_8019B7EC
.L_8019B73C:
/* 8019B73C 0019867C  2C 03 00 00 */	cmpwi r3, 0
/* 8019B740 00198680  80 DF 00 48 */	lwz r6, 0x48(r31)
/* 8019B744 00198684  38 80 00 00 */	li r4, 0
/* 8019B748 00198688  40 81 00 64 */	ble .L_8019B7AC
/* 8019B74C 0019868C  2C 03 00 08 */	cmpwi r3, 8
/* 8019B750 00198690  38 A3 FF F8 */	addi r5, r3, -8
/* 8019B754 00198694  40 81 00 40 */	ble .L_8019B794
/* 8019B758 00198698  38 05 00 07 */	addi r0, r5, 7
/* 8019B75C 0019869C  54 00 E8 FE */	srwi r0, r0, 3
/* 8019B760 001986A0  7C 09 03 A6 */	mtctr r0
/* 8019B764 001986A4  2C 05 00 00 */	cmpwi r5, 0
/* 8019B768 001986A8  40 81 00 2C */	ble .L_8019B794
.L_8019B76C:
/* 8019B76C 001986AC  80 A6 00 0C */	lwz r5, 0xc(r6)
/* 8019B770 001986B0  38 84 00 08 */	addi r4, r4, 8
/* 8019B774 001986B4  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B778 001986B8  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B77C 001986BC  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B780 001986C0  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B784 001986C4  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B788 001986C8  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B78C 001986CC  80 C5 00 0C */	lwz r6, 0xc(r5)
/* 8019B790 001986D0  42 00 FF DC */	bdnz .L_8019B76C
.L_8019B794:
/* 8019B794 001986D4  7C 04 18 50 */	subf r0, r4, r3
/* 8019B798 001986D8  7C 09 03 A6 */	mtctr r0
/* 8019B79C 001986DC  7C 04 18 00 */	cmpw r4, r3
/* 8019B7A0 001986E0  40 80 00 0C */	bge .L_8019B7AC
.L_8019B7A4:
/* 8019B7A4 001986E4  80 C6 00 0C */	lwz r6, 0xc(r6)
/* 8019B7A8 001986E8  42 00 FF FC */	bdnz .L_8019B7A4
.L_8019B7AC:
/* 8019B7AC 001986EC  28 06 00 00 */	cmplwi r6, 0
/* 8019B7B0 001986F0  41 82 00 24 */	beq .L_8019B7D4
/* 8019B7B4 001986F4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019B7B8 001986F8  A8 86 00 20 */	lha r4, 0x20(r6)
/* 8019B7BC 001986FC  80 63 00 08 */	lwz r3, 8(r3)
/* 8019B7C0 00198700  81 83 00 00 */	lwz r12, 0(r3)
/* 8019B7C4 00198704  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019B7C8 00198708  7D 89 03 A6 */	mtctr r12
/* 8019B7CC 0019870C  4E 80 04 21 */	bctrl 
/* 8019B7D0 00198710  48 00 00 08 */	b .L_8019B7D8
.L_8019B7D4:
/* 8019B7D4 00198714  38 60 00 00 */	li r3, 0
.L_8019B7D8:
/* 8019B7D8 00198718  28 03 00 00 */	cmplwi r3, 0
/* 8019B7DC 0019871C  40 82 00 0C */	bne .L_8019B7E8
/* 8019B7E0 00198720  C3 42 AC 68 */	lfs f26, lbl_80518FC8@sda21(r2)
/* 8019B7E4 00198724  48 00 00 08 */	b .L_8019B7EC
.L_8019B7E8:
/* 8019B7E8 00198728  C3 43 00 58 */	lfs f26, 0x58(r3)
.L_8019B7EC:
/* 8019B7EC 0019872C  80 7F 00 70 */	lwz r3, 0x70(r31)
/* 8019B7F0 00198730  34 63 00 01 */	addic. r3, r3, 1
/* 8019B7F4 00198734  40 80 00 50 */	bge .L_8019B844
/* 8019B7F8 00198738  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8019B7FC 0019873C  38 81 00 08 */	addi r4, r1, 8
/* 8019B800 00198740  81 83 00 00 */	lwz r12, 0(r3)
/* 8019B804 00198744  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8019B808 00198748  7D 89 03 A6 */	mtctr r12
/* 8019B80C 0019874C  4E 80 04 21 */	bctrl 
/* 8019B810 00198750  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8019B814 00198754  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019B818 00198758  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019B81C 0019875C  41 81 00 20 */	bgt .L_8019B83C
/* 8019B820 00198760  3C 60 80 48 */	lis r3, lbl_8047F0A4@ha
/* 8019B824 00198764  3C A0 80 48 */	lis r5, lbl_8047F0B8@ha
/* 8019B828 00198768  38 63 F0 A4 */	addi r3, r3, lbl_8047F0A4@l
/* 8019B82C 0019876C  38 80 07 42 */	li r4, 0x742
/* 8019B830 00198770  38 A5 F0 B8 */	addi r5, r5, lbl_8047F0B8@l
/* 8019B834 00198774  4C C6 31 82 */	crclr 6
/* 8019B838 00198778  4B E8 EE 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8019B83C:
/* 8019B83C 0019877C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8019B840 00198780  48 00 00 C8 */	b .L_8019B908
.L_8019B844:
/* 8019B844 00198784  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8019B848 00198788  7C 03 00 00 */	cmpw r3, r0
/* 8019B84C 0019878C  41 80 00 0C */	blt .L_8019B858
/* 8019B850 00198790  C0 02 AC 68 */	lfs f0, lbl_80518FC8@sda21(r2)
/* 8019B854 00198794  48 00 00 B4 */	b .L_8019B908
.L_8019B858:
/* 8019B858 00198798  2C 03 00 00 */	cmpwi r3, 0
/* 8019B85C 0019879C  80 DF 00 48 */	lwz r6, 0x48(r31)
/* 8019B860 001987A0  38 80 00 00 */	li r4, 0
/* 8019B864 001987A4  40 81 00 64 */	ble .L_8019B8C8
/* 8019B868 001987A8  2C 03 00 08 */	cmpwi r3, 8
/* 8019B86C 001987AC  38 A3 FF F8 */	addi r5, r3, -8
/* 8019B870 001987B0  40 81 00 40 */	ble .L_8019B8B0
/* 8019B874 001987B4  38 05 00 07 */	addi r0, r5, 7
/* 8019B878 001987B8  54 00 E8 FE */	srwi r0, r0, 3
/* 8019B87C 001987BC  7C 09 03 A6 */	mtctr r0
/* 8019B880 001987C0  2C 05 00 00 */	cmpwi r5, 0
/* 8019B884 001987C4  40 81 00 2C */	ble .L_8019B8B0
.L_8019B888:
/* 8019B888 001987C8  80 A6 00 0C */	lwz r5, 0xc(r6)
/* 8019B88C 001987CC  38 84 00 08 */	addi r4, r4, 8
/* 8019B890 001987D0  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B894 001987D4  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B898 001987D8  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B89C 001987DC  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B8A0 001987E0  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B8A4 001987E4  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8019B8A8 001987E8  80 C5 00 0C */	lwz r6, 0xc(r5)
/* 8019B8AC 001987EC  42 00 FF DC */	bdnz .L_8019B888
.L_8019B8B0:
/* 8019B8B0 001987F0  7C 04 18 50 */	subf r0, r4, r3
/* 8019B8B4 001987F4  7C 09 03 A6 */	mtctr r0
/* 8019B8B8 001987F8  7C 04 18 00 */	cmpw r4, r3
/* 8019B8BC 001987FC  40 80 00 0C */	bge .L_8019B8C8
.L_8019B8C0:
/* 8019B8C0 00198800  80 C6 00 0C */	lwz r6, 0xc(r6)
/* 8019B8C4 00198804  42 00 FF FC */	bdnz .L_8019B8C0
.L_8019B8C8:
/* 8019B8C8 00198808  28 06 00 00 */	cmplwi r6, 0
/* 8019B8CC 0019880C  41 82 00 24 */	beq .L_8019B8F0
/* 8019B8D0 00198810  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019B8D4 00198814  A8 86 00 20 */	lha r4, 0x20(r6)
/* 8019B8D8 00198818  80 63 00 08 */	lwz r3, 8(r3)
/* 8019B8DC 0019881C  81 83 00 00 */	lwz r12, 0(r3)
/* 8019B8E0 00198820  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8019B8E4 00198824  7D 89 03 A6 */	mtctr r12
/* 8019B8E8 00198828  4E 80 04 21 */	bctrl 
/* 8019B8EC 0019882C  48 00 00 08 */	b .L_8019B8F4
.L_8019B8F0:
/* 8019B8F0 00198830  38 60 00 00 */	li r3, 0
.L_8019B8F4:
/* 8019B8F4 00198834  28 03 00 00 */	cmplwi r3, 0
/* 8019B8F8 00198838  40 82 00 0C */	bne .L_8019B904
/* 8019B8FC 0019883C  C0 02 AC 68 */	lfs f0, lbl_80518FC8@sda21(r2)
/* 8019B900 00198840  48 00 00 08 */	b .L_8019B908
.L_8019B904:
/* 8019B904 00198844  C0 03 00 58 */	lfs f0, 0x58(r3)
.L_8019B908:
/* 8019B908 00198848  C0 62 AC 04 */	lfs f3, lbl_80518F64@sda21(r2)
/* 8019B90C 0019884C  EC 3B 00 32 */	fmuls f1, f27, f0
/* 8019B910 00198850  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019B914 00198854  EC 43 D8 28 */	fsubs f2, f3, f27
/* 8019B918 00198858  EC 42 0E BA */	fmadds f2, f2, f26, f1
/* 8019B91C 0019885C  FC 00 10 00 */	fcmpu cr0, f0, f2
/* 8019B920 00198860  40 82 00 08 */	bne .L_8019B928
/* 8019B924 00198864  FC 40 18 90 */	fmr f2, f3
.L_8019B928:
/* 8019B928 00198868  FC 20 E2 10 */	fabs f1, f28
/* 8019B92C 0019886C  C0 02 AC 6C */	lfs f0, lbl_80518FCC@sda21(r2)
/* 8019B930 00198870  FC 20 08 18 */	frsp f1, f1
/* 8019B934 00198874  EF 41 10 24 */	fdivs f26, f1, f2
/* 8019B938 00198878  FC 1A 00 40 */	fcmpo cr0, f26, f0
/* 8019B93C 0019887C  40 80 00 08 */	bge .L_8019B944
/* 8019B940 00198880  C3 42 AC 00 */	lfs f26, lbl_80518F60@sda21(r2)
.L_8019B944:
/* 8019B944 00198884  C0 02 AC 70 */	lfs f0, lbl_80518FD0@sda21(r2)
/* 8019B948 00198888  FC 1A 00 40 */	fcmpo cr0, f26, f0
/* 8019B94C 0019888C  40 81 00 20 */	ble .L_8019B96C
/* 8019B950 00198890  FC 20 E2 10 */	fabs f1, f28
/* 8019B954 00198894  C0 02 AC 74 */	lfs f0, lbl_80518FD4@sda21(r2)
/* 8019B958 00198898  FC 20 08 18 */	frsp f1, f1
/* 8019B95C 0019889C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019B960 001988A0  40 81 00 0C */	ble .L_8019B96C
/* 8019B964 001988A4  38 60 00 01 */	li r3, 1
/* 8019B968 001988A8  48 00 02 EC */	b .L_8019BC54
.L_8019B96C:
/* 8019B96C 001988AC  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 8019B970 001988B0  FC 1A 00 40 */	fcmpo cr0, f26, f0
/* 8019B974 001988B4  40 81 00 0C */	ble .L_8019B980
/* 8019B978 001988B8  FF 40 00 90 */	fmr f26, f0
/* 8019B97C 001988BC  48 00 00 14 */	b .L_8019B990
.L_8019B980:
/* 8019B980 001988C0  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019B984 001988C4  FC 1A 00 40 */	fcmpo cr0, f26, f0
/* 8019B988 001988C8  40 80 00 08 */	bge .L_8019B990
/* 8019B98C 001988CC  FF 40 00 90 */	fmr f26, f0
.L_8019B990:
/* 8019B990 001988D0  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 8019B994 001988D4  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 8019B998 001988D8  4C 41 13 82 */	cror 2, 1, 2
/* 8019B99C 001988DC  40 82 01 98 */	bne .L_8019BB34
/* 8019B9A0 001988E0  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8019B9A4 001988E4  80 9F 00 70 */	lwz r4, 0x70(r31)
/* 8019B9A8 001988E8  38 03 FF FE */	addi r0, r3, -2
/* 8019B9AC 001988EC  7C 04 00 00 */	cmpw r4, r0
/* 8019B9B0 001988F0  41 80 00 C0 */	blt .L_8019BA70
/* 8019B9B4 001988F4  38 00 00 02 */	li r0, 2
/* 8019B9B8 001988F8  FC 20 D8 90 */	fmr f1, f27
/* 8019B9BC 001988FC  B0 1F 00 1E */	sth r0, 0x1e(r31)
/* 8019B9C0 00198900  38 61 00 40 */	addi r3, r1, 0x40
/* 8019B9C4 00198904  38 9F 00 74 */	addi r4, r31, 0x74
/* 8019B9C8 00198908  48 27 5E 91 */	bl "CRSplineTangent__FfP10Vector3<f>"
/* 8019B9CC 0019890C  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8019B9D0 00198910  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 8019B9D4 00198914  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 8019B9D8 00198918  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 8019B9DC 0019891C  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 8019B9E0 00198920  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 8019B9E4 00198924  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
/* 8019B9E8 00198928  C0 7F 00 B0 */	lfs f3, 0xb0(r31)
/* 8019B9EC 0019892C  C0 5F 00 B4 */	lfs f2, 0xb4(r31)
/* 8019B9F0 00198930  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8019B9F4 00198934  C0 9F 00 B8 */	lfs f4, 0xb8(r31)
/* 8019B9F8 00198938  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8019B9FC 0019893C  EC 84 01 32 */	fmuls f4, f4, f4
/* 8019BA00 00198940  EC 00 10 2A */	fadds f0, f0, f2
/* 8019BA04 00198944  EC 04 00 2A */	fadds f0, f4, f0
/* 8019BA08 00198948  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8019BA0C 0019894C  40 81 00 20 */	ble .L_8019BA2C
/* 8019BA10 00198950  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 8019BA14 00198954  EC 44 00 2A */	fadds f2, f4, f0
/* 8019BA18 00198958  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8019BA1C 0019895C  40 81 00 14 */	ble .L_8019BA30
/* 8019BA20 00198960  FC 00 10 34 */	frsqrte f0, f2
/* 8019BA24 00198964  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8019BA28 00198968  48 00 00 08 */	b .L_8019BA30
.L_8019BA2C:
/* 8019BA2C 0019896C  FC 40 08 90 */	fmr f2, f1
.L_8019BA30:
/* 8019BA30 00198970  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019BA34 00198974  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8019BA38 00198978  40 81 00 30 */	ble .L_8019BA68
/* 8019BA3C 0019897C  C0 22 AC 04 */	lfs f1, lbl_80518F64@sda21(r2)
/* 8019BA40 00198980  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 8019BA44 00198984  EC 21 10 24 */	fdivs f1, f1, f2
/* 8019BA48 00198988  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019BA4C 0019898C  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 8019BA50 00198990  C0 1F 00 B4 */	lfs f0, 0xb4(r31)
/* 8019BA54 00198994  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019BA58 00198998  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 8019BA5C 0019899C  C0 1F 00 B8 */	lfs f0, 0xb8(r31)
/* 8019BA60 001989A0  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019BA64 001989A4  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
.L_8019BA68:
/* 8019BA68 001989A8  38 60 00 01 */	li r3, 1
/* 8019BA6C 001989AC  48 00 01 E8 */	b .L_8019BC54
.L_8019BA70:
/* 8019BA70 001989B0  38 04 00 01 */	addi r0, r4, 1
/* 8019BA74 001989B4  7F E3 FB 78 */	mr r3, r31
/* 8019BA78 001989B8  90 1F 00 70 */	stw r0, 0x70(r31)
/* 8019BA7C 001989BC  4B FF F5 69 */	bl crMakeRefs__Q26PikiAI11ActPathMoveFv
/* 8019BA80 001989C0  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 8019BA84 001989C4  38 61 00 34 */	addi r3, r1, 0x34
/* 8019BA88 001989C8  38 9F 00 74 */	addi r4, r31, 0x74
/* 8019BA8C 001989CC  48 27 5D CD */	bl "CRSplineTangent__FfP10Vector3<f>"
/* 8019BA90 001989D0  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8019BA94 001989D4  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 8019BA98 001989D8  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 8019BA9C 001989DC  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8019BAA0 001989E0  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 8019BAA4 001989E4  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 8019BAA8 001989E8  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
/* 8019BAAC 001989EC  C0 7F 00 B0 */	lfs f3, 0xb0(r31)
/* 8019BAB0 001989F0  C0 5F 00 B4 */	lfs f2, 0xb4(r31)
/* 8019BAB4 001989F4  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8019BAB8 001989F8  C0 9F 00 B8 */	lfs f4, 0xb8(r31)
/* 8019BABC 001989FC  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8019BAC0 00198A00  EC 84 01 32 */	fmuls f4, f4, f4
/* 8019BAC4 00198A04  EC 00 10 2A */	fadds f0, f0, f2
/* 8019BAC8 00198A08  EC 04 00 2A */	fadds f0, f4, f0
/* 8019BACC 00198A0C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8019BAD0 00198A10  40 81 00 20 */	ble .L_8019BAF0
/* 8019BAD4 00198A14  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 8019BAD8 00198A18  EC 44 00 2A */	fadds f2, f4, f0
/* 8019BADC 00198A1C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8019BAE0 00198A20  40 81 00 14 */	ble .L_8019BAF4
/* 8019BAE4 00198A24  FC 00 10 34 */	frsqrte f0, f2
/* 8019BAE8 00198A28  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8019BAEC 00198A2C  48 00 00 08 */	b .L_8019BAF4
.L_8019BAF0:
/* 8019BAF0 00198A30  FC 40 08 90 */	fmr f2, f1
.L_8019BAF4:
/* 8019BAF4 00198A34  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019BAF8 00198A38  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8019BAFC 00198A3C  40 81 00 30 */	ble .L_8019BB2C
/* 8019BB00 00198A40  C0 22 AC 04 */	lfs f1, lbl_80518F64@sda21(r2)
/* 8019BB04 00198A44  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 8019BB08 00198A48  EC 21 10 24 */	fdivs f1, f1, f2
/* 8019BB0C 00198A4C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019BB10 00198A50  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 8019BB14 00198A54  C0 1F 00 B4 */	lfs f0, 0xb4(r31)
/* 8019BB18 00198A58  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019BB1C 00198A5C  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 8019BB20 00198A60  C0 1F 00 B8 */	lfs f0, 0xb8(r31)
/* 8019BB24 00198A64  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019BB28 00198A68  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
.L_8019BB2C:
/* 8019BB2C 00198A6C  38 60 00 01 */	li r3, 1
/* 8019BB30 00198A70  48 00 01 24 */	b .L_8019BC54
.L_8019BB34:
/* 8019BB34 00198A74  FC 20 D8 90 */	fmr f1, f27
/* 8019BB38 00198A78  38 61 00 28 */	addi r3, r1, 0x28
/* 8019BB3C 00198A7C  38 9F 00 74 */	addi r4, r31, 0x74
/* 8019BB40 00198A80  48 27 5D 19 */	bl "CRSplineTangent__FfP10Vector3<f>"
/* 8019BB44 00198A84  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8019BB48 00198A88  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 8019BB4C 00198A8C  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 8019BB50 00198A90  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8019BB54 00198A94  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 8019BB58 00198A98  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8019BB5C 00198A9C  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
/* 8019BB60 00198AA0  C0 7F 00 B0 */	lfs f3, 0xb0(r31)
/* 8019BB64 00198AA4  C0 5F 00 B4 */	lfs f2, 0xb4(r31)
/* 8019BB68 00198AA8  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8019BB6C 00198AAC  C0 9F 00 B8 */	lfs f4, 0xb8(r31)
/* 8019BB70 00198AB0  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8019BB74 00198AB4  EC 84 01 32 */	fmuls f4, f4, f4
/* 8019BB78 00198AB8  EC 00 10 2A */	fadds f0, f0, f2
/* 8019BB7C 00198ABC  EC 04 00 2A */	fadds f0, f4, f0
/* 8019BB80 00198AC0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8019BB84 00198AC4  40 81 00 20 */	ble .L_8019BBA4
/* 8019BB88 00198AC8  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 8019BB8C 00198ACC  EC 44 00 2A */	fadds f2, f4, f0
/* 8019BB90 00198AD0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8019BB94 00198AD4  40 81 00 14 */	ble .L_8019BBA8
/* 8019BB98 00198AD8  FC 00 10 34 */	frsqrte f0, f2
/* 8019BB9C 00198ADC  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8019BBA0 00198AE0  48 00 00 08 */	b .L_8019BBA8
.L_8019BBA4:
/* 8019BBA4 00198AE4  FC 40 08 90 */	fmr f2, f1
.L_8019BBA8:
/* 8019BBA8 00198AE8  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019BBAC 00198AEC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8019BBB0 00198AF0  40 81 00 30 */	ble .L_8019BBE0
/* 8019BBB4 00198AF4  C0 22 AC 04 */	lfs f1, lbl_80518F64@sda21(r2)
/* 8019BBB8 00198AF8  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 8019BBBC 00198AFC  EC 21 10 24 */	fdivs f1, f1, f2
/* 8019BBC0 00198B00  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019BBC4 00198B04  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 8019BBC8 00198B08  C0 1F 00 B4 */	lfs f0, 0xb4(r31)
/* 8019BBCC 00198B0C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019BBD0 00198B10  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 8019BBD4 00198B14  C0 1F 00 B8 */	lfs f0, 0xb8(r31)
/* 8019BBD8 00198B18  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019BBDC 00198B1C  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
.L_8019BBE0:
/* 8019BBE0 00198B20  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 8019BBE4 00198B24  EC 57 06 B2 */	fmuls f2, f23, f26
/* 8019BBE8 00198B28  C0 7F 00 B0 */	lfs f3, 0xb0(r31)
/* 8019BBEC 00198B2C  EC 99 06 B2 */	fmuls f4, f25, f26
/* 8019BBF0 00198B30  EC E0 D0 28 */	fsubs f7, f0, f26
/* 8019BBF4 00198B34  C0 BF 00 B4 */	lfs f5, 0xb4(r31)
/* 8019BBF8 00198B38  C0 DF 00 B8 */	lfs f6, 0xb8(r31)
/* 8019BBFC 00198B3C  EC 38 06 B2 */	fmuls f1, f24, f26
/* 8019BC00 00198B40  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019BC04 00198B44  EC 63 01 F2 */	fmuls f3, f3, f7
/* 8019BC08 00198B48  EC A5 01 F2 */	fmuls f5, f5, f7
/* 8019BC0C 00198B4C  EC C6 01 F2 */	fmuls f6, f6, f7
/* 8019BC10 00198B50  EC 43 10 2A */	fadds f2, f3, f2
/* 8019BC14 00198B54  EC 65 20 2A */	fadds f3, f5, f4
/* 8019BC18 00198B58  EC 26 08 2A */	fadds f1, f6, f1
/* 8019BC1C 00198B5C  D0 5F 00 B0 */	stfs f2, 0xb0(r31)
/* 8019BC20 00198B60  D0 7F 00 B4 */	stfs f3, 0xb4(r31)
/* 8019BC24 00198B64  D0 3F 00 B8 */	stfs f1, 0xb8(r31)
/* 8019BC28 00198B68  C0 3F 00 B8 */	lfs f1, 0xb8(r31)
/* 8019BC2C 00198B6C  C0 5F 00 B0 */	lfs f2, 0xb0(r31)
/* 8019BC30 00198B70  EC 21 07 72 */	fmuls f1, f1, f29
/* 8019BC34 00198B74  EC 22 0F FA */	fmadds f1, f2, f31, f1
/* 8019BC38 00198B78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019BC3C 00198B7C  4C 40 13 82 */	cror 2, 0, 2
/* 8019BC40 00198B80  40 82 00 10 */	bne .L_8019BC50
/* 8019BC44 00198B84  D3 FF 00 B0 */	stfs f31, 0xb0(r31)
/* 8019BC48 00198B88  D3 DF 00 B4 */	stfs f30, 0xb4(r31)
/* 8019BC4C 00198B8C  D3 BF 00 B8 */	stfs f29, 0xb8(r31)
.L_8019BC50:
/* 8019BC50 00198B90  38 60 00 01 */	li r3, 1
.L_8019BC54:
/* 8019BC54 00198B94  E3 E1 01 28 */	psq_l f31, 296(r1), 0, qr0
/* 8019BC58 00198B98  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 8019BC5C 00198B9C  E3 C1 01 18 */	psq_l f30, 280(r1), 0, qr0
/* 8019BC60 00198BA0  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 8019BC64 00198BA4  E3 A1 01 08 */	psq_l f29, 264(r1), 0, qr0
/* 8019BC68 00198BA8  CB A1 01 00 */	lfd f29, 0x100(r1)
/* 8019BC6C 00198BAC  E3 81 00 F8 */	psq_l f28, 248(r1), 0, qr0
/* 8019BC70 00198BB0  CB 81 00 F0 */	lfd f28, 0xf0(r1)
/* 8019BC74 00198BB4  E3 61 00 E8 */	psq_l f27, 232(r1), 0, qr0
/* 8019BC78 00198BB8  CB 61 00 E0 */	lfd f27, 0xe0(r1)
/* 8019BC7C 00198BBC  E3 41 00 D8 */	psq_l f26, 216(r1), 0, qr0
/* 8019BC80 00198BC0  CB 41 00 D0 */	lfd f26, 0xd0(r1)
/* 8019BC84 00198BC4  E3 21 00 C8 */	psq_l f25, 200(r1), 0, qr0
/* 8019BC88 00198BC8  CB 21 00 C0 */	lfd f25, 0xc0(r1)
/* 8019BC8C 00198BCC  E3 01 00 B8 */	psq_l f24, 184(r1), 0, qr0
/* 8019BC90 00198BD0  CB 01 00 B0 */	lfd f24, 0xb0(r1)
/* 8019BC94 00198BD4  E2 E1 00 A8 */	psq_l f23, 168(r1), 0, qr0
/* 8019BC98 00198BD8  CA E1 00 A0 */	lfd f23, 0xa0(r1)
/* 8019BC9C 00198BDC  E2 C1 00 98 */	psq_l f22, 152(r1), 0, qr0
/* 8019BCA0 00198BE0  CA C1 00 90 */	lfd f22, 0x90(r1)
/* 8019BCA4 00198BE4  80 01 01 34 */	lwz r0, 0x134(r1)
/* 8019BCA8 00198BE8  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 8019BCAC 00198BEC  7C 08 03 A6 */	mtlr r0
/* 8019BCB0 00198BF0  38 21 01 30 */	addi r1, r1, 0x130
/* 8019BCB4 00198BF4  4E 80 00 20 */	blr 
.endfn crMove__Q26PikiAI11ActPathMoveFv

.fn __ct__Q26PikiAI14ActStickAttackFPQ24Game4Piki, global
/* 8019BCB8 00198BF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019BCBC 00198BFC  7C 08 02 A6 */	mflr r0
/* 8019BCC0 00198C00  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019BCC4 00198C04  7C 80 07 35 */	extsh. r0, r4
/* 8019BCC8 00198C08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8019BCCC 00198C0C  7C 7F 1B 78 */	mr r31, r3
/* 8019BCD0 00198C10  41 82 00 18 */	beq .L_8019BCE8
/* 8019BCD4 00198C14  38 1F 00 24 */	addi r0, r31, 0x24
/* 8019BCD8 00198C18  3C 60 80 4B */	lis r3, __vt__Q28SysShape14MotionListener@ha
/* 8019BCDC 00198C1C  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8019BCE0 00198C20  38 03 A6 6C */	addi r0, r3, __vt__Q28SysShape14MotionListener@l
/* 8019BCE4 00198C24  90 1F 00 24 */	stw r0, 0x24(r31)
.L_8019BCE8:
/* 8019BCE8 00198C28  7F E3 FB 78 */	mr r3, r31
/* 8019BCEC 00198C2C  7C A4 2B 78 */	mr r4, r5
/* 8019BCF0 00198C30  4B FF AD 29 */	bl __ct__Q26PikiAI6ActionFPQ24Game4Piki
/* 8019BCF4 00198C34  3C 60 80 4B */	lis r3, __vt__Q26PikiAI14ActStickAttack@ha
/* 8019BCF8 00198C38  38 1F 00 24 */	addi r0, r31, 0x24
/* 8019BCFC 00198C3C  38 83 4B B0 */	addi r4, r3, __vt__Q26PikiAI14ActStickAttack@l
/* 8019BD00 00198C40  7F E3 FB 78 */	mr r3, r31
/* 8019BD04 00198C44  90 9F 00 00 */	stw r4, 0(r31)
/* 8019BD08 00198C48  38 A4 00 40 */	addi r5, r4, 0x40
/* 8019BD0C 00198C4C  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 8019BD10 00198C50  90 A4 00 00 */	stw r5, 0(r4)
/* 8019BD14 00198C54  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 8019BD18 00198C58  7C 04 00 50 */	subf r0, r4, r0
/* 8019BD1C 00198C5C  90 04 00 04 */	stw r0, 4(r4)
/* 8019BD20 00198C60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8019BD24 00198C64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019BD28 00198C68  7C 08 03 A6 */	mtlr r0
/* 8019BD2C 00198C6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8019BD30 00198C70  4E 80 00 20 */	blr 
.endfn __ct__Q26PikiAI14ActStickAttackFPQ24Game4Piki

.fn init__Q26PikiAI14ActStickAttackFPQ26PikiAI9ActionArg, global
/* 8019BD34 00198C74  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8019BD38 00198C78  7C 08 02 A6 */	mflr r0
/* 8019BD3C 00198C7C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8019BD40 00198C80  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8019BD44 00198C84  7C 7F 1B 78 */	mr r31, r3
/* 8019BD48 00198C88  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8019BD4C 00198C8C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8019BD50 00198C90  3B A0 00 00 */	li r29, 0
/* 8019BD54 00198C94  93 81 00 10 */	stw r28, 0x10(r1)
/* 8019BD58 00198C98  7C 9C 23 79 */	or. r28, r4, r4
/* 8019BD5C 00198C9C  3C 80 80 48 */	lis r4, lbl_8047F070@ha
/* 8019BD60 00198CA0  3B C4 F0 70 */	addi r30, r4, lbl_8047F070@l
/* 8019BD64 00198CA4  41 82 00 34 */	beq .L_8019BD98
/* 8019BD68 00198CA8  7F 83 E3 78 */	mr r3, r28
/* 8019BD6C 00198CAC  81 9C 00 00 */	lwz r12, 0(r28)
/* 8019BD70 00198CB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019BD74 00198CB4  7D 89 03 A6 */	mtctr r12
/* 8019BD78 00198CB8  4E 80 04 21 */	bctrl 
/* 8019BD7C 00198CBC  7C 64 1B 78 */	mr r4, r3
/* 8019BD80 00198CC0  38 7E 00 D0 */	addi r3, r30, 0xd0
/* 8019BD84 00198CC4  4B F2 E9 3D */	bl strcmp
/* 8019BD88 00198CC8  7C 60 00 34 */	cntlzw r0, r3
/* 8019BD8C 00198CCC  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 8019BD90 00198CD0  41 82 00 08 */	beq .L_8019BD98
/* 8019BD94 00198CD4  3B A0 00 01 */	li r29, 1
.L_8019BD98:
/* 8019BD98 00198CD8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8019BD9C 00198CDC  40 82 00 18 */	bne .L_8019BDB4
/* 8019BDA0 00198CE0  38 7E 00 34 */	addi r3, r30, 0x34
/* 8019BDA4 00198CE4  38 BE 00 48 */	addi r5, r30, 0x48
/* 8019BDA8 00198CE8  38 80 09 1B */	li r4, 0x91b
/* 8019BDAC 00198CEC  4C C6 31 82 */	crclr 6
/* 8019BDB0 00198CF0  4B E8 E8 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8019BDB4:
/* 8019BDB4 00198CF4  80 7C 00 08 */	lwz r3, 8(r28)
/* 8019BDB8 00198CF8  38 00 00 1B */	li r0, 0x1b
/* 8019BDBC 00198CFC  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8019BDC0 00198D00  C0 1C 00 04 */	lfs f0, 4(r28)
/* 8019BDC4 00198D04  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 8019BDC8 00198D08  88 7C 00 10 */	lbz r3, 0x10(r28)
/* 8019BDCC 00198D0C  98 7F 00 1D */	stb r3, 0x1d(r31)
/* 8019BDD0 00198D10  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8019BDD4 00198D14  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019BDD8 00198D18  48 00 37 9D */	bl isStickTo__Q24Game8CreatureFv
/* 8019BDDC 00198D1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019BDE0 00198D20  41 82 00 40 */	beq .L_8019BE20
/* 8019BDE4 00198D24  28 1F 00 00 */	cmplwi r31, 0
/* 8019BDE8 00198D28  7F E6 FB 78 */	mr r6, r31
/* 8019BDEC 00198D2C  41 82 00 08 */	beq .L_8019BDF4
/* 8019BDF0 00198D30  80 DF 00 0C */	lwz r6, 0xc(r31)
.L_8019BDF4:
/* 8019BDF4 00198D34  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019BDF8 00198D38  38 80 00 1B */	li r4, 0x1b
/* 8019BDFC 00198D3C  38 A0 00 1B */	li r5, 0x1b
/* 8019BE00 00198D40  38 E0 00 00 */	li r7, 0
/* 8019BE04 00198D44  81 83 00 00 */	lwz r12, 0(r3)
/* 8019BE08 00198D48  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8019BE0C 00198D4C  7D 89 03 A6 */	mtctr r12
/* 8019BE10 00198D50  4E 80 04 21 */	bctrl 
/* 8019BE14 00198D54  38 00 00 01 */	li r0, 1
/* 8019BE18 00198D58  98 1F 00 19 */	stb r0, 0x19(r31)
/* 8019BE1C 00198D5C  48 00 00 84 */	b .L_8019BEA0
.L_8019BE20:
/* 8019BE20 00198D60  80 9C 00 0C */	lwz r4, 0xc(r28)
/* 8019BE24 00198D64  2C 04 FF FF */	cmpwi r4, -1
/* 8019BE28 00198D68  40 82 00 40 */	bne .L_8019BE68
/* 8019BE2C 00198D6C  28 1F 00 00 */	cmplwi r31, 0
/* 8019BE30 00198D70  7F E6 FB 78 */	mr r6, r31
/* 8019BE34 00198D74  41 82 00 08 */	beq .L_8019BE3C
/* 8019BE38 00198D78  80 DF 00 0C */	lwz r6, 0xc(r31)
.L_8019BE3C:
/* 8019BE3C 00198D7C  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019BE40 00198D80  38 80 00 1B */	li r4, 0x1b
/* 8019BE44 00198D84  38 A0 00 1B */	li r5, 0x1b
/* 8019BE48 00198D88  38 E0 00 00 */	li r7, 0
/* 8019BE4C 00198D8C  81 83 00 00 */	lwz r12, 0(r3)
/* 8019BE50 00198D90  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8019BE54 00198D94  7D 89 03 A6 */	mtctr r12
/* 8019BE58 00198D98  4E 80 04 21 */	bctrl 
/* 8019BE5C 00198D9C  38 00 00 00 */	li r0, 0
/* 8019BE60 00198DA0  98 1F 00 19 */	stb r0, 0x19(r31)
/* 8019BE64 00198DA4  48 00 00 3C */	b .L_8019BEA0
.L_8019BE68:
/* 8019BE68 00198DA8  28 1F 00 00 */	cmplwi r31, 0
/* 8019BE6C 00198DAC  90 9F 00 20 */	stw r4, 0x20(r31)
/* 8019BE70 00198DB0  7F E6 FB 78 */	mr r6, r31
/* 8019BE74 00198DB4  41 82 00 08 */	beq .L_8019BE7C
/* 8019BE78 00198DB8  80 DF 00 0C */	lwz r6, 0xc(r31)
.L_8019BE7C:
/* 8019BE7C 00198DBC  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019BE80 00198DC0  7C 85 23 78 */	mr r5, r4
/* 8019BE84 00198DC4  38 E0 00 00 */	li r7, 0
/* 8019BE88 00198DC8  81 83 00 00 */	lwz r12, 0(r3)
/* 8019BE8C 00198DCC  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8019BE90 00198DD0  7D 89 03 A6 */	mtctr r12
/* 8019BE94 00198DD4  4E 80 04 21 */	bctrl 
/* 8019BE98 00198DD8  38 00 00 00 */	li r0, 0
/* 8019BE9C 00198DDC  98 1F 00 19 */	stb r0, 0x19(r31)
.L_8019BEA0:
/* 8019BEA0 00198DE0  38 00 00 00 */	li r0, 0
/* 8019BEA4 00198DE4  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019BEA8 00198DE8  98 1F 00 18 */	stb r0, 0x18(r31)
/* 8019BEAC 00198DEC  98 1F 00 1A */	stb r0, 0x1a(r31)
/* 8019BEB0 00198DF0  98 1F 00 1B */	stb r0, 0x1b(r31)
/* 8019BEB4 00198DF4  98 1F 00 1C */	stb r0, 0x1c(r31)
/* 8019BEB8 00198DF8  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019BEBC 00198DFC  D0 03 01 E4 */	stfs f0, 0x1e4(r3)
/* 8019BEC0 00198E00  D0 03 01 E8 */	stfs f0, 0x1e8(r3)
/* 8019BEC4 00198E04  D0 03 01 EC */	stfs f0, 0x1ec(r3)
/* 8019BEC8 00198E08  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019BECC 00198E0C  4B FA E1 15 */	bl doped__Q24Game4PikiFv
/* 8019BED0 00198E10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019BED4 00198E14  41 82 00 1C */	beq .L_8019BEF0
/* 8019BED8 00198E18  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019BEDC 00198E1C  38 A0 28 52 */	li r5, 0x2852
/* 8019BEE0 00198E20  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8019BEE4 00198E24  38 C0 00 01 */	li r6, 1
/* 8019BEE8 00198E28  4B FA CA 6D */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
/* 8019BEEC 00198E2C  48 00 00 18 */	b .L_8019BF04
.L_8019BEF0:
/* 8019BEF0 00198E30  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019BEF4 00198E34  38 A0 28 06 */	li r5, 0x2806
/* 8019BEF8 00198E38  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8019BEFC 00198E3C  38 C0 00 01 */	li r6, 1
/* 8019BF00 00198E40  4B FA CA 55 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
.L_8019BF04:
/* 8019BF04 00198E44  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8019BF08 00198E48  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8019BF0C 00198E4C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8019BF10 00198E50  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8019BF14 00198E54  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8019BF18 00198E58  7C 08 03 A6 */	mtlr r0
/* 8019BF1C 00198E5C  38 21 00 20 */	addi r1, r1, 0x20
/* 8019BF20 00198E60  4E 80 00 20 */	blr 
.endfn init__Q26PikiAI14ActStickAttackFPQ26PikiAI9ActionArg

.fn exec__Q26PikiAI14ActStickAttackFv, global
/* 8019BF24 00198E64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8019BF28 00198E68  7C 08 02 A6 */	mflr r0
/* 8019BF2C 00198E6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8019BF30 00198E70  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8019BF34 00198E74  7C 7F 1B 78 */	mr r31, r3
/* 8019BF38 00198E78  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8019BF3C 00198E7C  81 83 00 00 */	lwz r12, 0(r3)
/* 8019BF40 00198E80  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8019BF44 00198E84  7D 89 03 A6 */	mtctr r12
/* 8019BF48 00198E88  4E 80 04 21 */	bctrl 
/* 8019BF4C 00198E8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019BF50 00198E90  40 82 00 14 */	bne .L_8019BF64
/* 8019BF54 00198E94  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019BF58 00198E98  48 00 34 CD */	bl endStick__Q24Game8CreatureFv
/* 8019BF5C 00198E9C  38 60 00 00 */	li r3, 0
/* 8019BF60 00198EA0  48 00 01 14 */	b .L_8019C074
.L_8019BF64:
/* 8019BF64 00198EA4  88 1F 00 1A */	lbz r0, 0x1a(r31)
/* 8019BF68 00198EA8  28 00 00 00 */	cmplwi r0, 0
/* 8019BF6C 00198EAC  41 82 00 0C */	beq .L_8019BF78
/* 8019BF70 00198EB0  38 60 00 02 */	li r3, 2
/* 8019BF74 00198EB4  48 00 01 00 */	b .L_8019C074
.L_8019BF78:
/* 8019BF78 00198EB8  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019BF7C 00198EBC  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 8019BF80 00198EC0  4B FA 0F AD */	bl assertMotion__Q24Game8FakePikiFi
/* 8019BF84 00198EC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019BF88 00198EC8  40 82 00 0C */	bne .L_8019BF94
/* 8019BF8C 00198ECC  38 60 00 02 */	li r3, 2
/* 8019BF90 00198ED0  48 00 00 E4 */	b .L_8019C074
.L_8019BF94:
/* 8019BF94 00198ED4  88 1F 00 19 */	lbz r0, 0x19(r31)
/* 8019BF98 00198ED8  28 00 00 00 */	cmplwi r0, 0
/* 8019BF9C 00198EDC  41 82 00 1C */	beq .L_8019BFB8
/* 8019BFA0 00198EE0  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019BFA4 00198EE4  48 00 35 D1 */	bl isStickTo__Q24Game8CreatureFv
/* 8019BFA8 00198EE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019BFAC 00198EEC  40 82 00 0C */	bne .L_8019BFB8
/* 8019BFB0 00198EF0  38 60 00 02 */	li r3, 2
/* 8019BFB4 00198EF4  48 00 00 C0 */	b .L_8019C074
.L_8019BFB8:
/* 8019BFB8 00198EF8  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 8019BFBC 00198EFC  28 00 00 00 */	cmplwi r0, 0
/* 8019BFC0 00198F00  41 82 00 B0 */	beq .L_8019C070
/* 8019BFC4 00198F04  88 1F 00 1B */	lbz r0, 0x1b(r31)
/* 8019BFC8 00198F08  28 00 00 00 */	cmplwi r0, 0
/* 8019BFCC 00198F0C  40 82 00 A4 */	bne .L_8019C070
/* 8019BFD0 00198F10  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019BFD4 00198F14  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 8019BFD8 00198F18  3C 80 80 4B */	lis r4, __vt__Q24Game14InteractAttack@ha
/* 8019BFDC 00198F1C  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 8019BFE0 00198F20  80 C3 00 F8 */	lwz r6, 0xf8(r3)
/* 8019BFE4 00198F24  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 8019BFE8 00198F28  38 04 4D E0 */	addi r0, r4, __vt__Q24Game14InteractAttack@l
/* 8019BFEC 00198F2C  90 A1 00 08 */	stw r5, 8(r1)
/* 8019BFF0 00198F30  90 61 00 0C */	stw r3, 0xc(r1)
/* 8019BFF4 00198F34  90 01 00 08 */	stw r0, 8(r1)
/* 8019BFF8 00198F38  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8019BFFC 00198F3C  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8019C000 00198F40  81 83 00 00 */	lwz r12, 0(r3)
/* 8019C004 00198F44  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 8019C008 00198F48  7D 89 03 A6 */	mtctr r12
/* 8019C00C 00198F4C  4E 80 04 21 */	bctrl 
/* 8019C010 00198F50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019C014 00198F54  41 82 00 0C */	beq .L_8019C020
/* 8019C018 00198F58  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019C01C 00198F5C  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_8019C020:
/* 8019C020 00198F60  38 00 00 01 */	li r0, 1
/* 8019C024 00198F64  38 81 00 08 */	addi r4, r1, 8
/* 8019C028 00198F68  98 1F 00 1B */	stb r0, 0x1b(r31)
/* 8019C02C 00198F6C  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8019C030 00198F70  81 83 00 00 */	lwz r12, 0(r3)
/* 8019C034 00198F74  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8019C038 00198F78  7D 89 03 A6 */	mtctr r12
/* 8019C03C 00198F7C  4E 80 04 21 */	bctrl 
/* 8019C040 00198F80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019C044 00198F84  41 82 00 10 */	beq .L_8019C054
/* 8019C048 00198F88  38 00 00 01 */	li r0, 1
/* 8019C04C 00198F8C  98 1F 00 1C */	stb r0, 0x1c(r31)
/* 8019C050 00198F90  48 00 00 20 */	b .L_8019C070
.L_8019C054:
/* 8019C054 00198F94  38 00 00 00 */	li r0, 0
/* 8019C058 00198F98  38 A0 28 07 */	li r5, 0x2807
/* 8019C05C 00198F9C  98 1F 00 1C */	stb r0, 0x1c(r31)
/* 8019C060 00198FA0  38 C0 00 01 */	li r6, 1
/* 8019C064 00198FA4  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C068 00198FA8  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8019C06C 00198FAC  4B FA C8 E9 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
.L_8019C070:
/* 8019C070 00198FB0  38 60 00 01 */	li r3, 1
.L_8019C074:
/* 8019C074 00198FB4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8019C078 00198FB8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8019C07C 00198FBC  7C 08 03 A6 */	mtlr r0
/* 8019C080 00198FC0  38 21 00 20 */	addi r1, r1, 0x20
/* 8019C084 00198FC4  4E 80 00 20 */	blr 
.endfn exec__Q26PikiAI14ActStickAttackFv

.fn createEfx__Q26PikiAI14ActStickAttackFv, global
/* 8019C088 00198FC8  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8019C08C 00198FCC  7C 08 02 A6 */	mflr r0
/* 8019C090 00198FD0  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8019C094 00198FD4  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8019C098 00198FD8  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 8019C09C 00198FDC  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 8019C0A0 00198FE0  93 C1 00 98 */	stw r30, 0x98(r1)
/* 8019C0A4 00198FE4  7C 7F 1B 78 */	mr r31, r3
/* 8019C0A8 00198FE8  88 03 00 1C */	lbz r0, 0x1c(r3)
/* 8019C0AC 00198FEC  28 00 00 00 */	cmplwi r0, 0
/* 8019C0B0 00198FF0  40 82 00 2C */	bne .L_8019C0DC
/* 8019C0B4 00198FF4  80 9F 00 04 */	lwz r4, 4(r31)
/* 8019C0B8 00198FF8  38 61 00 7C */	addi r3, r1, 0x7c
/* 8019C0BC 00198FFC  C0 24 02 60 */	lfs f1, 0x260(r4)
/* 8019C0C0 00199000  C0 44 02 64 */	lfs f2, 0x264(r4)
/* 8019C0C4 00199004  C0 04 02 5C */	lfs f0, 0x25c(r4)
/* 8019C0C8 00199008  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 8019C0CC 0019900C  D0 21 00 80 */	stfs f1, 0x80(r1)
/* 8019C0D0 00199010  D0 41 00 84 */	stfs f2, 0x84(r1)
/* 8019C0D4 00199014  48 21 B8 B5 */	bl "createSimpleInattack__3efxFR10Vector3<f>"
/* 8019C0D8 00199018  48 00 05 E0 */	b .L_8019C6B8
.L_8019C0DC:
/* 8019C0DC 0019901C  88 9F 00 1D */	lbz r4, 0x1d(r31)
/* 8019C0E0 00199020  28 04 00 07 */	cmplwi r4, 7
/* 8019C0E4 00199024  41 81 05 D4 */	bgt .L_8019C6B8
/* 8019C0E8 00199028  3C 60 80 4B */	lis r3, lbl_804B4AB4@ha
/* 8019C0EC 0019902C  54 80 10 3A */	slwi r0, r4, 2
/* 8019C0F0 00199030  38 63 4A B4 */	addi r3, r3, lbl_804B4AB4@l
/* 8019C0F4 00199034  7C 03 00 2E */	lwzx r0, r3, r0
/* 8019C0F8 00199038  7C 09 03 A6 */	mtctr r0
/* 8019C0FC 0019903C  4E 80 04 20 */	bctr 
.L_8019C100:
/* 8019C100 00199040  28 04 00 07 */	cmplwi r4, 7
/* 8019C104 00199044  41 82 01 28 */	beq .L_8019C22C
/* 8019C108 00199048  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C10C 0019904C  4B FA DE D5 */	bl doped__Q24Game4PikiFv
/* 8019C110 00199050  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019C114 00199054  41 82 00 90 */	beq .L_8019C1A4
/* 8019C118 00199058  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8019C11C 0019905C  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 8019C120 00199060  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 8019C124 00199064  3C 60 80 4B */	lis r3, __vt__Q23efx11TPkAttackDP@ha
/* 8019C128 00199068  90 01 00 70 */	stw r0, 0x70(r1)
/* 8019C12C 0019906C  38 84 6A 78 */	addi r4, r4, __vt__Q23efx8TSimple1@l
/* 8019C130 00199070  38 00 01 49 */	li r0, 0x149
/* 8019C134 00199074  38 E0 00 00 */	li r7, 0
/* 8019C138 00199078  90 81 00 70 */	stw r4, 0x70(r1)
/* 8019C13C 0019907C  38 C3 4B 9C */	addi r6, r3, __vt__Q23efx11TPkAttackDP@l
/* 8019C140 00199080  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 8019C144 00199084  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8019C148 00199088  B0 01 00 74 */	sth r0, 0x74(r1)
/* 8019C14C 0019908C  38 A3 41 E4 */	addi r5, r3, "zero__10Vector3<f>"@l
/* 8019C150 00199090  C0 45 00 00 */	lfs f2, 0(r5)
/* 8019C154 00199094  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 8019C158 00199098  90 E1 00 78 */	stw r7, 0x78(r1)
/* 8019C15C 0019909C  38 61 00 70 */	addi r3, r1, 0x70
/* 8019C160 001990A0  C0 25 00 04 */	lfs f1, 4(r5)
/* 8019C164 001990A4  38 81 00 60 */	addi r4, r1, 0x60
/* 8019C168 001990A8  90 C1 00 70 */	stw r6, 0x70(r1)
/* 8019C16C 001990AC  C0 05 00 08 */	lfs f0, 8(r5)
/* 8019C170 001990B0  80 BF 00 04 */	lwz r5, 4(r31)
/* 8019C174 001990B4  C0 65 02 5C */	lfs f3, 0x25c(r5)
/* 8019C178 001990B8  C0 85 02 60 */	lfs f4, 0x260(r5)
/* 8019C17C 001990BC  C0 A5 02 64 */	lfs f5, 0x264(r5)
/* 8019C180 001990C0  D0 41 00 64 */	stfs f2, 0x64(r1)
/* 8019C184 001990C4  D0 21 00 68 */	stfs f1, 0x68(r1)
/* 8019C188 001990C8  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 8019C18C 001990CC  90 01 00 60 */	stw r0, 0x60(r1)
/* 8019C190 001990D0  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 8019C194 001990D4  D0 81 00 68 */	stfs f4, 0x68(r1)
/* 8019C198 001990D8  D0 A1 00 6C */	stfs f5, 0x6c(r1)
/* 8019C19C 001990DC  48 21 2D E9 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 8019C1A0 001990E0  48 00 00 8C */	b .L_8019C22C
.L_8019C1A4:
/* 8019C1A4 001990E4  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 8019C1A8 001990E8  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 8019C1AC 001990EC  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 8019C1B0 001990F0  3C 60 80 4B */	lis r3, __vt__Q23efx10PikiDamage@ha
/* 8019C1B4 001990F4  90 01 00 54 */	stw r0, 0x54(r1)
/* 8019C1B8 001990F8  38 84 6A 78 */	addi r4, r4, __vt__Q23efx8TSimple1@l
/* 8019C1BC 001990FC  38 00 01 48 */	li r0, 0x148
/* 8019C1C0 00199100  38 E0 00 00 */	li r7, 0
/* 8019C1C4 00199104  90 81 00 54 */	stw r4, 0x54(r1)
/* 8019C1C8 00199108  38 C3 4B 88 */	addi r6, r3, __vt__Q23efx10PikiDamage@l
/* 8019C1CC 0019910C  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 8019C1D0 00199110  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8019C1D4 00199114  B0 01 00 58 */	sth r0, 0x58(r1)
/* 8019C1D8 00199118  38 A3 41 E4 */	addi r5, r3, "zero__10Vector3<f>"@l
/* 8019C1DC 0019911C  C0 45 00 00 */	lfs f2, 0(r5)
/* 8019C1E0 00199120  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 8019C1E4 00199124  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 8019C1E8 00199128  38 61 00 54 */	addi r3, r1, 0x54
/* 8019C1EC 0019912C  C0 25 00 04 */	lfs f1, 4(r5)
/* 8019C1F0 00199130  38 81 00 44 */	addi r4, r1, 0x44
/* 8019C1F4 00199134  90 C1 00 54 */	stw r6, 0x54(r1)
/* 8019C1F8 00199138  C0 05 00 08 */	lfs f0, 8(r5)
/* 8019C1FC 0019913C  80 BF 00 04 */	lwz r5, 4(r31)
/* 8019C200 00199140  C0 65 02 5C */	lfs f3, 0x25c(r5)
/* 8019C204 00199144  C0 85 02 60 */	lfs f4, 0x260(r5)
/* 8019C208 00199148  C0 A5 02 64 */	lfs f5, 0x264(r5)
/* 8019C20C 0019914C  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 8019C210 00199150  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 8019C214 00199154  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 8019C218 00199158  90 01 00 44 */	stw r0, 0x44(r1)
/* 8019C21C 0019915C  D0 61 00 48 */	stfs f3, 0x48(r1)
/* 8019C220 00199160  D0 81 00 4C */	stfs f4, 0x4c(r1)
/* 8019C224 00199164  D0 A1 00 50 */	stfs f5, 0x50(r1)
/* 8019C228 00199168  48 21 2D 5D */	bl create__Q23efx8TSimple1FPQ23efx3Arg
.L_8019C22C:
/* 8019C22C 0019916C  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C230 00199170  38 A0 28 08 */	li r5, 0x2808
/* 8019C234 00199174  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8019C238 00199178  38 C0 00 01 */	li r6, 1
/* 8019C23C 0019917C  4B FA C7 19 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
/* 8019C240 00199180  48 00 04 78 */	b .L_8019C6B8
.L_8019C244:
/* 8019C244 00199184  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C248 00199188  88 0D 84 6B */	lbz r0, sMabikiEfx__Q24Game12BaseHIOParms@sda21(r13)
/* 8019C24C 0019918C  C0 23 02 60 */	lfs f1, 0x260(r3)
/* 8019C250 00199190  C0 43 02 64 */	lfs f2, 0x264(r3)
/* 8019C254 00199194  28 00 00 00 */	cmplwi r0, 0
/* 8019C258 00199198  C0 03 02 5C */	lfs f0, 0x25c(r3)
/* 8019C25C 0019919C  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8019C260 001991A0  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 8019C264 001991A4  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 8019C268 001991A8  41 82 00 C4 */	beq .L_8019C32C
/* 8019C26C 001991AC  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8019C270 001991B0  81 83 00 00 */	lwz r12, 0(r3)
/* 8019C274 001991B4  81 8C 01 50 */	lwz r12, 0x150(r12)
/* 8019C278 001991B8  7D 89 03 A6 */	mtctr r12
/* 8019C27C 001991BC  4E 80 04 21 */	bctrl 
/* 8019C280 001991C0  28 03 00 00 */	cmplwi r3, 0
/* 8019C284 001991C4  41 82 00 A8 */	beq .L_8019C32C
/* 8019C288 001991C8  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8019C28C 001991CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8019C290 001991D0  81 8C 01 50 */	lwz r12, 0x150(r12)
/* 8019C294 001991D4  7D 89 03 A6 */	mtctr r12
/* 8019C298 001991D8  4E 80 04 21 */	bctrl 
/* 8019C29C 001991DC  7C 7E 1B 78 */	mr r30, r3
/* 8019C2A0 001991E0  3C 00 43 30 */	lis r0, 0x4330
/* 8019C2A4 001991E4  80 63 00 00 */	lwz r3, 0(r3)
/* 8019C2A8 001991E8  90 01 00 88 */	stw r0, 0x88(r1)
/* 8019C2AC 001991EC  20 03 00 64 */	subfic r0, r3, 0x64
/* 8019C2B0 001991F0  C8 42 AC 48 */	lfd f2, lbl_80518FA8@sda21(r2)
/* 8019C2B4 001991F4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8019C2B8 001991F8  C0 02 AC 40 */	lfs f0, lbl_80518FA0@sda21(r2)
/* 8019C2BC 001991FC  90 01 00 8C */	stw r0, 0x8c(r1)
/* 8019C2C0 00199200  C8 21 00 88 */	lfd f1, 0x88(r1)
/* 8019C2C4 00199204  EC 21 10 28 */	fsubs f1, f1, f2
/* 8019C2C8 00199208  EF E1 00 24 */	fdivs f31, f1, f0
/* 8019C2CC 0019920C  4B F2 D2 D5 */	bl rand
/* 8019C2D0 00199210  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8019C2D4 00199214  3C 00 43 30 */	lis r0, 0x4330
/* 8019C2D8 00199218  90 61 00 94 */	stw r3, 0x94(r1)
/* 8019C2DC 0019921C  C8 42 AC 48 */	lfd f2, lbl_80518FA8@sda21(r2)
/* 8019C2E0 00199220  90 01 00 90 */	stw r0, 0x90(r1)
/* 8019C2E4 00199224  C0 02 AC 78 */	lfs f0, lbl_80518FD8@sda21(r2)
/* 8019C2E8 00199228  C8 21 00 90 */	lfd f1, 0x90(r1)
/* 8019C2EC 0019922C  EC 21 10 28 */	fsubs f1, f1, f2
/* 8019C2F0 00199230  EC 01 00 24 */	fdivs f0, f1, f0
/* 8019C2F4 00199234  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8019C2F8 00199238  4C 40 13 82 */	cror 2, 0, 2
/* 8019C2FC 0019923C  40 82 03 BC */	bne .L_8019C6B8
/* 8019C300 00199240  38 61 00 38 */	addi r3, r1, 0x38
/* 8019C304 00199244  48 21 B7 ED */	bl "createSimpleBridgeAttack__3efxFR10Vector3<f>"
/* 8019C308 00199248  80 7E 00 04 */	lwz r3, 4(r30)
/* 8019C30C 0019924C  38 A0 28 27 */	li r5, 0x2827
/* 8019C310 00199250  38 C0 00 02 */	li r6, 2
/* 8019C314 00199254  38 03 00 01 */	addi r0, r3, 1
/* 8019C318 00199258  90 1E 00 04 */	stw r0, 4(r30)
/* 8019C31C 0019925C  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C320 00199260  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8019C324 00199264  4B FA C6 A1 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
/* 8019C328 00199268  48 00 03 90 */	b .L_8019C6B8
.L_8019C32C:
/* 8019C32C 0019926C  38 61 00 38 */	addi r3, r1, 0x38
/* 8019C330 00199270  48 21 B7 C1 */	bl "createSimpleBridgeAttack__3efxFR10Vector3<f>"
/* 8019C334 00199274  48 00 03 84 */	b .L_8019C6B8
.L_8019C338:
/* 8019C338 00199278  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C33C 0019927C  88 0D 84 6B */	lbz r0, sMabikiEfx__Q24Game12BaseHIOParms@sda21(r13)
/* 8019C340 00199280  C0 23 02 60 */	lfs f1, 0x260(r3)
/* 8019C344 00199284  C0 43 02 64 */	lfs f2, 0x264(r3)
/* 8019C348 00199288  28 00 00 00 */	cmplwi r0, 0
/* 8019C34C 0019928C  C0 03 02 5C */	lfs f0, 0x25c(r3)
/* 8019C350 00199290  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8019C354 00199294  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8019C358 00199298  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 8019C35C 0019929C  41 82 00 C4 */	beq .L_8019C420
/* 8019C360 001992A0  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8019C364 001992A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8019C368 001992A8  81 8C 01 50 */	lwz r12, 0x150(r12)
/* 8019C36C 001992AC  7D 89 03 A6 */	mtctr r12
/* 8019C370 001992B0  4E 80 04 21 */	bctrl 
/* 8019C374 001992B4  28 03 00 00 */	cmplwi r3, 0
/* 8019C378 001992B8  41 82 00 A8 */	beq .L_8019C420
/* 8019C37C 001992BC  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8019C380 001992C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8019C384 001992C4  81 8C 01 50 */	lwz r12, 0x150(r12)
/* 8019C388 001992C8  7D 89 03 A6 */	mtctr r12
/* 8019C38C 001992CC  4E 80 04 21 */	bctrl 
/* 8019C390 001992D0  7C 7E 1B 78 */	mr r30, r3
/* 8019C394 001992D4  3C 00 43 30 */	lis r0, 0x4330
/* 8019C398 001992D8  80 63 00 00 */	lwz r3, 0(r3)
/* 8019C39C 001992DC  90 01 00 90 */	stw r0, 0x90(r1)
/* 8019C3A0 001992E0  20 03 00 64 */	subfic r0, r3, 0x64
/* 8019C3A4 001992E4  C8 42 AC 48 */	lfd f2, lbl_80518FA8@sda21(r2)
/* 8019C3A8 001992E8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8019C3AC 001992EC  C0 02 AC 40 */	lfs f0, lbl_80518FA0@sda21(r2)
/* 8019C3B0 001992F0  90 01 00 94 */	stw r0, 0x94(r1)
/* 8019C3B4 001992F4  C8 21 00 90 */	lfd f1, 0x90(r1)
/* 8019C3B8 001992F8  EC 21 10 28 */	fsubs f1, f1, f2
/* 8019C3BC 001992FC  EF E1 00 24 */	fdivs f31, f1, f0
/* 8019C3C0 00199300  4B F2 D1 E1 */	bl rand
/* 8019C3C4 00199304  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8019C3C8 00199308  3C 00 43 30 */	lis r0, 0x4330
/* 8019C3CC 0019930C  90 61 00 8C */	stw r3, 0x8c(r1)
/* 8019C3D0 00199310  C8 42 AC 48 */	lfd f2, lbl_80518FA8@sda21(r2)
/* 8019C3D4 00199314  90 01 00 88 */	stw r0, 0x88(r1)
/* 8019C3D8 00199318  C0 02 AC 78 */	lfs f0, lbl_80518FD8@sda21(r2)
/* 8019C3DC 0019931C  C8 21 00 88 */	lfd f1, 0x88(r1)
/* 8019C3E0 00199320  EC 21 10 28 */	fsubs f1, f1, f2
/* 8019C3E4 00199324  EC 01 00 24 */	fdivs f0, f1, f0
/* 8019C3E8 00199328  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8019C3EC 0019932C  4C 40 13 82 */	cror 2, 0, 2
/* 8019C3F0 00199330  40 82 02 C8 */	bne .L_8019C6B8
/* 8019C3F4 00199334  38 61 00 2C */	addi r3, r1, 0x2c
/* 8019C3F8 00199338  48 21 B6 6D */	bl "createSimpleGate2Attack__3efxFR10Vector3<f>"
/* 8019C3FC 0019933C  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C400 00199340  38 A0 28 24 */	li r5, 0x2824
/* 8019C404 00199344  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8019C408 00199348  38 C0 00 02 */	li r6, 2
/* 8019C40C 0019934C  4B FA C5 B9 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
/* 8019C410 00199350  80 7E 00 04 */	lwz r3, 4(r30)
/* 8019C414 00199354  38 03 00 01 */	addi r0, r3, 1
/* 8019C418 00199358  90 1E 00 04 */	stw r0, 4(r30)
/* 8019C41C 0019935C  48 00 02 9C */	b .L_8019C6B8
.L_8019C420:
/* 8019C420 00199360  38 61 00 2C */	addi r3, r1, 0x2c
/* 8019C424 00199364  48 21 B6 41 */	bl "createSimpleGate2Attack__3efxFR10Vector3<f>"
/* 8019C428 00199368  48 00 02 90 */	b .L_8019C6B8
.L_8019C42C:
/* 8019C42C 0019936C  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C430 00199370  88 0D 84 6B */	lbz r0, sMabikiEfx__Q24Game12BaseHIOParms@sda21(r13)
/* 8019C434 00199374  C0 23 02 60 */	lfs f1, 0x260(r3)
/* 8019C438 00199378  C0 43 02 64 */	lfs f2, 0x264(r3)
/* 8019C43C 0019937C  28 00 00 00 */	cmplwi r0, 0
/* 8019C440 00199380  C0 03 02 5C */	lfs f0, 0x25c(r3)
/* 8019C444 00199384  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8019C448 00199388  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8019C44C 0019938C  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 8019C450 00199390  41 82 00 C4 */	beq .L_8019C514
/* 8019C454 00199394  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8019C458 00199398  81 83 00 00 */	lwz r12, 0(r3)
/* 8019C45C 0019939C  81 8C 01 50 */	lwz r12, 0x150(r12)
/* 8019C460 001993A0  7D 89 03 A6 */	mtctr r12
/* 8019C464 001993A4  4E 80 04 21 */	bctrl 
/* 8019C468 001993A8  28 03 00 00 */	cmplwi r3, 0
/* 8019C46C 001993AC  41 82 00 A8 */	beq .L_8019C514
/* 8019C470 001993B0  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8019C474 001993B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8019C478 001993B8  81 8C 01 50 */	lwz r12, 0x150(r12)
/* 8019C47C 001993BC  7D 89 03 A6 */	mtctr r12
/* 8019C480 001993C0  4E 80 04 21 */	bctrl 
/* 8019C484 001993C4  7C 7E 1B 78 */	mr r30, r3
/* 8019C488 001993C8  3C 00 43 30 */	lis r0, 0x4330
/* 8019C48C 001993CC  80 63 00 00 */	lwz r3, 0(r3)
/* 8019C490 001993D0  90 01 00 90 */	stw r0, 0x90(r1)
/* 8019C494 001993D4  20 03 00 64 */	subfic r0, r3, 0x64
/* 8019C498 001993D8  C8 42 AC 48 */	lfd f2, lbl_80518FA8@sda21(r2)
/* 8019C49C 001993DC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8019C4A0 001993E0  C0 02 AC 40 */	lfs f0, lbl_80518FA0@sda21(r2)
/* 8019C4A4 001993E4  90 01 00 94 */	stw r0, 0x94(r1)
/* 8019C4A8 001993E8  C8 21 00 90 */	lfd f1, 0x90(r1)
/* 8019C4AC 001993EC  EC 21 10 28 */	fsubs f1, f1, f2
/* 8019C4B0 001993F0  EF E1 00 24 */	fdivs f31, f1, f0
/* 8019C4B4 001993F4  4B F2 D0 ED */	bl rand
/* 8019C4B8 001993F8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8019C4BC 001993FC  3C 00 43 30 */	lis r0, 0x4330
/* 8019C4C0 00199400  90 61 00 8C */	stw r3, 0x8c(r1)
/* 8019C4C4 00199404  C8 42 AC 48 */	lfd f2, lbl_80518FA8@sda21(r2)
/* 8019C4C8 00199408  90 01 00 88 */	stw r0, 0x88(r1)
/* 8019C4CC 0019940C  C0 02 AC 78 */	lfs f0, lbl_80518FD8@sda21(r2)
/* 8019C4D0 00199410  C8 21 00 88 */	lfd f1, 0x88(r1)
/* 8019C4D4 00199414  EC 21 10 28 */	fsubs f1, f1, f2
/* 8019C4D8 00199418  EC 01 00 24 */	fdivs f0, f1, f0
/* 8019C4DC 0019941C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8019C4E0 00199420  4C 40 13 82 */	cror 2, 0, 2
/* 8019C4E4 00199424  40 82 01 D4 */	bne .L_8019C6B8
/* 8019C4E8 00199428  38 61 00 20 */	addi r3, r1, 0x20
/* 8019C4EC 0019942C  48 21 B2 35 */	bl "createSimpleGate1Attack__3efxFR10Vector3<f>"
/* 8019C4F0 00199430  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C4F4 00199434  38 A0 28 25 */	li r5, 0x2825
/* 8019C4F8 00199438  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8019C4FC 0019943C  38 C0 00 02 */	li r6, 2
/* 8019C500 00199440  4B FA C4 C5 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
/* 8019C504 00199444  80 7E 00 04 */	lwz r3, 4(r30)
/* 8019C508 00199448  38 03 00 01 */	addi r0, r3, 1
/* 8019C50C 0019944C  90 1E 00 04 */	stw r0, 4(r30)
/* 8019C510 00199450  48 00 01 A8 */	b .L_8019C6B8
.L_8019C514:
/* 8019C514 00199454  38 61 00 20 */	addi r3, r1, 0x20
/* 8019C518 00199458  48 21 B2 09 */	bl "createSimpleGate1Attack__3efxFR10Vector3<f>"
/* 8019C51C 0019945C  48 00 01 9C */	b .L_8019C6B8
.L_8019C520:
/* 8019C520 00199460  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C524 00199464  88 0D 84 6B */	lbz r0, sMabikiEfx__Q24Game12BaseHIOParms@sda21(r13)
/* 8019C528 00199468  C0 23 02 60 */	lfs f1, 0x260(r3)
/* 8019C52C 0019946C  C0 43 02 64 */	lfs f2, 0x264(r3)
/* 8019C530 00199470  28 00 00 00 */	cmplwi r0, 0
/* 8019C534 00199474  C0 03 02 5C */	lfs f0, 0x25c(r3)
/* 8019C538 00199478  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8019C53C 0019947C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8019C540 00199480  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 8019C544 00199484  41 82 00 C4 */	beq .L_8019C608
/* 8019C548 00199488  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8019C54C 0019948C  81 83 00 00 */	lwz r12, 0(r3)
/* 8019C550 00199490  81 8C 01 50 */	lwz r12, 0x150(r12)
/* 8019C554 00199494  7D 89 03 A6 */	mtctr r12
/* 8019C558 00199498  4E 80 04 21 */	bctrl 
/* 8019C55C 0019949C  28 03 00 00 */	cmplwi r3, 0
/* 8019C560 001994A0  41 82 00 A8 */	beq .L_8019C608
/* 8019C564 001994A4  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8019C568 001994A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8019C56C 001994AC  81 8C 01 50 */	lwz r12, 0x150(r12)
/* 8019C570 001994B0  7D 89 03 A6 */	mtctr r12
/* 8019C574 001994B4  4E 80 04 21 */	bctrl 
/* 8019C578 001994B8  7C 7E 1B 78 */	mr r30, r3
/* 8019C57C 001994BC  3C 00 43 30 */	lis r0, 0x4330
/* 8019C580 001994C0  80 63 00 00 */	lwz r3, 0(r3)
/* 8019C584 001994C4  90 01 00 90 */	stw r0, 0x90(r1)
/* 8019C588 001994C8  20 03 00 64 */	subfic r0, r3, 0x64
/* 8019C58C 001994CC  C8 42 AC 48 */	lfd f2, lbl_80518FA8@sda21(r2)
/* 8019C590 001994D0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8019C594 001994D4  C0 02 AC 40 */	lfs f0, lbl_80518FA0@sda21(r2)
/* 8019C598 001994D8  90 01 00 94 */	stw r0, 0x94(r1)
/* 8019C59C 001994DC  C8 21 00 90 */	lfd f1, 0x90(r1)
/* 8019C5A0 001994E0  EC 21 10 28 */	fsubs f1, f1, f2
/* 8019C5A4 001994E4  EF E1 00 24 */	fdivs f31, f1, f0
/* 8019C5A8 001994E8  4B F2 CF F9 */	bl rand
/* 8019C5AC 001994EC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8019C5B0 001994F0  3C 00 43 30 */	lis r0, 0x4330
/* 8019C5B4 001994F4  90 61 00 8C */	stw r3, 0x8c(r1)
/* 8019C5B8 001994F8  C8 42 AC 48 */	lfd f2, lbl_80518FA8@sda21(r2)
/* 8019C5BC 001994FC  90 01 00 88 */	stw r0, 0x88(r1)
/* 8019C5C0 00199500  C0 02 AC 78 */	lfs f0, lbl_80518FD8@sda21(r2)
/* 8019C5C4 00199504  C8 21 00 88 */	lfd f1, 0x88(r1)
/* 8019C5C8 00199508  EC 21 10 28 */	fsubs f1, f1, f2
/* 8019C5CC 0019950C  EC 01 00 24 */	fdivs f0, f1, f0
/* 8019C5D0 00199510  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8019C5D4 00199514  4C 40 13 82 */	cror 2, 0, 2
/* 8019C5D8 00199518  40 82 00 E0 */	bne .L_8019C6B8
/* 8019C5DC 0019951C  38 61 00 14 */	addi r3, r1, 0x14
/* 8019C5E0 00199520  48 21 B7 55 */	bl "createSimpleGate3Attack__3efxFR10Vector3<f>"
/* 8019C5E4 00199524  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C5E8 00199528  38 A0 28 4D */	li r5, 0x284d
/* 8019C5EC 0019952C  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8019C5F0 00199530  38 C0 00 02 */	li r6, 2
/* 8019C5F4 00199534  4B FA C3 D1 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
/* 8019C5F8 00199538  80 7E 00 04 */	lwz r3, 4(r30)
/* 8019C5FC 0019953C  38 03 00 01 */	addi r0, r3, 1
/* 8019C600 00199540  90 1E 00 04 */	stw r0, 4(r30)
/* 8019C604 00199544  48 00 00 B4 */	b .L_8019C6B8
.L_8019C608:
/* 8019C608 00199548  38 61 00 14 */	addi r3, r1, 0x14
/* 8019C60C 0019954C  48 21 B7 29 */	bl "createSimpleGate3Attack__3efxFR10Vector3<f>"
/* 8019C610 00199550  48 00 00 A8 */	b .L_8019C6B8
.L_8019C614:
/* 8019C614 00199554  80 9F 00 04 */	lwz r4, 4(r31)
/* 8019C618 00199558  38 61 00 08 */	addi r3, r1, 8
/* 8019C61C 0019955C  C0 24 02 60 */	lfs f1, 0x260(r4)
/* 8019C620 00199560  C0 44 02 64 */	lfs f2, 0x264(r4)
/* 8019C624 00199564  C0 04 02 5C */	lfs f0, 0x25c(r4)
/* 8019C628 00199568  D0 01 00 08 */	stfs f0, 8(r1)
/* 8019C62C 0019956C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8019C630 00199570  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8019C634 00199574  48 21 B6 25 */	bl "createSimpleStoneAttack__3efxFR10Vector3<f>"
/* 8019C638 00199578  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8019C63C 0019957C  A0 04 01 28 */	lhz r0, 0x128(r4)
/* 8019C640 00199580  28 00 04 10 */	cmplwi r0, 0x410
/* 8019C644 00199584  40 82 00 18 */	bne .L_8019C65C
/* 8019C648 00199588  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C64C 0019958C  38 A0 28 26 */	li r5, 0x2826
/* 8019C650 00199590  38 C0 00 02 */	li r6, 2
/* 8019C654 00199594  4B FA C3 71 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
/* 8019C658 00199598  48 00 00 60 */	b .L_8019C6B8
.L_8019C65C:
/* 8019C65C 0019959C  28 00 04 12 */	cmplwi r0, 0x412
/* 8019C660 001995A0  40 82 00 18 */	bne .L_8019C678
/* 8019C664 001995A4  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C668 001995A8  38 A0 38 02 */	li r5, 0x3802
/* 8019C66C 001995AC  38 C0 00 01 */	li r6, 1
/* 8019C670 001995B0  4B FA C2 E5 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlb
/* 8019C674 001995B4  48 00 00 44 */	b .L_8019C6B8
.L_8019C678:
/* 8019C678 001995B8  28 00 04 0C */	cmplwi r0, 0x40c
/* 8019C67C 001995BC  40 82 00 3C */	bne .L_8019C6B8
/* 8019C680 001995C0  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C684 001995C4  38 A0 28 23 */	li r5, 0x2823
/* 8019C688 001995C8  38 C0 00 02 */	li r6, 2
/* 8019C68C 001995CC  4B FA C3 39 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
/* 8019C690 001995D0  48 00 00 28 */	b .L_8019C6B8
.L_8019C694:
/* 8019C694 001995D4  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C698 001995D8  80 63 02 58 */	lwz r3, 0x258(r3)
/* 8019C69C 001995DC  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8019C6A0 001995E0  48 21 B6 39 */	bl "createSimpleDig__3efxFR10Vector3<f>"
/* 8019C6A4 001995E4  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C6A8 001995E8  38 A0 28 4F */	li r5, 0x284f
/* 8019C6AC 001995EC  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8019C6B0 001995F0  38 C0 00 01 */	li r6, 1
/* 8019C6B4 001995F4  4B FA C3 11 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
.L_8019C6B8:
/* 8019C6B8 001995F8  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 8019C6BC 001995FC  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8019C6C0 00199600  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 8019C6C4 00199604  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 8019C6C8 00199608  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 8019C6CC 0019960C  7C 08 03 A6 */	mtlr r0
/* 8019C6D0 00199610  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8019C6D4 00199614  4E 80 00 20 */	blr 
.endfn createEfx__Q26PikiAI14ActStickAttackFv

.fn onKeyEvent__Q26PikiAI14ActStickAttackFRCQ28SysShape8KeyEvent, global
/* 8019C6D8 00199618  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019C6DC 0019961C  7C 08 02 A6 */	mflr r0
/* 8019C6E0 00199620  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019C6E4 00199624  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 8019C6E8 00199628  2C 00 00 64 */	cmpwi r0, 0x64
/* 8019C6EC 0019962C  41 82 00 58 */	beq .L_8019C744
/* 8019C6F0 00199630  40 80 00 20 */	bge .L_8019C710
/* 8019C6F4 00199634  2C 00 00 02 */	cmpwi r0, 2
/* 8019C6F8 00199638  41 82 00 24 */	beq .L_8019C71C
/* 8019C6FC 0019963C  40 80 00 08 */	bge .L_8019C704
/* 8019C700 00199640  48 00 00 48 */	b .L_8019C748
.L_8019C704:
/* 8019C704 00199644  2C 00 00 04 */	cmpwi r0, 4
/* 8019C708 00199648  40 80 00 40 */	bge .L_8019C748
/* 8019C70C 0019964C  48 00 00 1C */	b .L_8019C728
.L_8019C710:
/* 8019C710 00199650  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 8019C714 00199654  41 82 00 24 */	beq .L_8019C738
/* 8019C718 00199658  48 00 00 30 */	b .L_8019C748
.L_8019C71C:
/* 8019C71C 0019965C  38 00 00 01 */	li r0, 1
/* 8019C720 00199660  98 03 00 18 */	stb r0, 0x18(r3)
/* 8019C724 00199664  48 00 00 24 */	b .L_8019C748
.L_8019C728:
/* 8019C728 00199668  38 00 00 00 */	li r0, 0
/* 8019C72C 0019966C  98 03 00 18 */	stb r0, 0x18(r3)
/* 8019C730 00199670  98 03 00 1B */	stb r0, 0x1b(r3)
/* 8019C734 00199674  48 00 00 14 */	b .L_8019C748
.L_8019C738:
/* 8019C738 00199678  38 00 00 01 */	li r0, 1
/* 8019C73C 0019967C  98 03 00 1A */	stb r0, 0x1a(r3)
/* 8019C740 00199680  48 00 00 08 */	b .L_8019C748
.L_8019C744:
/* 8019C744 00199684  4B FF F9 45 */	bl createEfx__Q26PikiAI14ActStickAttackFv
.L_8019C748:
/* 8019C748 00199688  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019C74C 0019968C  7C 08 03 A6 */	mtlr r0
/* 8019C750 00199690  38 21 00 10 */	addi r1, r1, 0x10
/* 8019C754 00199694  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q26PikiAI14ActStickAttackFRCQ28SysShape8KeyEvent

.fn cleanup__Q26PikiAI14ActStickAttackFv, global
/* 8019C758 00199698  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019C75C 0019969C  7C 08 02 A6 */	mflr r0
/* 8019C760 001996A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019C764 001996A4  80 63 00 04 */	lwz r3, 4(r3)
/* 8019C768 001996A8  48 00 2C BD */	bl endStick__Q24Game8CreatureFv
/* 8019C76C 001996AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019C770 001996B0  7C 08 03 A6 */	mtlr r0
/* 8019C774 001996B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8019C778 001996B8  4E 80 00 20 */	blr 
.endfn cleanup__Q26PikiAI14ActStickAttackFv

.fn __ct__Q26PikiAI8ActClimbFPQ24Game4Piki, global
/* 8019C77C 001996BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019C780 001996C0  7C 08 02 A6 */	mflr r0
/* 8019C784 001996C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019C788 001996C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8019C78C 001996CC  7C 7F 1B 78 */	mr r31, r3
/* 8019C790 001996D0  4B FF A2 89 */	bl __ct__Q26PikiAI6ActionFPQ24Game4Piki
/* 8019C794 001996D4  3C 80 80 4B */	lis r4, __vt__Q26PikiAI8ActClimb@ha
/* 8019C798 001996D8  7F E3 FB 78 */	mr r3, r31
/* 8019C79C 001996DC  38 04 4B 4C */	addi r0, r4, __vt__Q26PikiAI8ActClimb@l
/* 8019C7A0 001996E0  90 1F 00 00 */	stw r0, 0(r31)
/* 8019C7A4 001996E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8019C7A8 001996E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019C7AC 001996EC  7C 08 03 A6 */	mtlr r0
/* 8019C7B0 001996F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8019C7B4 001996F4  4E 80 00 20 */	blr 
.endfn __ct__Q26PikiAI8ActClimbFPQ24Game4Piki

.fn init__Q26PikiAI8ActClimbFPQ26PikiAI9ActionArg, global
/* 8019C7B8 001996F8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8019C7BC 001996FC  7C 08 02 A6 */	mflr r0
/* 8019C7C0 00199700  38 A0 00 14 */	li r5, 0x14
/* 8019C7C4 00199704  38 C0 00 00 */	li r6, 0
/* 8019C7C8 00199708  90 01 00 34 */	stw r0, 0x34(r1)
/* 8019C7CC 0019970C  38 E0 00 00 */	li r7, 0
/* 8019C7D0 00199710  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8019C7D4 00199714  7C 9F 23 78 */	mr r31, r4
/* 8019C7D8 00199718  38 80 00 14 */	li r4, 0x14
/* 8019C7DC 0019971C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8019C7E0 00199720  7C 7E 1B 78 */	mr r30, r3
/* 8019C7E4 00199724  80 63 00 04 */	lwz r3, 4(r3)
/* 8019C7E8 00199728  81 83 00 00 */	lwz r12, 0(r3)
/* 8019C7EC 0019972C  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8019C7F0 00199730  7D 89 03 A6 */	mtctr r12
/* 8019C7F4 00199734  4E 80 04 21 */	bctrl 
/* 8019C7F8 00199738  80 1F 00 04 */	lwz r0, 4(r31)
/* 8019C7FC 0019973C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8019C800 00199740  C0 1F 00 08 */	lfs f0, 8(r31)
/* 8019C804 00199744  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8019C808 00199748  88 1F 00 0C */	lbz r0, 0xc(r31)
/* 8019C80C 0019974C  98 1E 00 20 */	stb r0, 0x20(r30)
/* 8019C810 00199750  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 8019C814 00199754  88 03 00 58 */	lbz r0, 0x58(r3)
/* 8019C818 00199758  28 00 00 01 */	cmplwi r0, 1
/* 8019C81C 0019975C  41 82 00 20 */	beq .L_8019C83C
/* 8019C820 00199760  3C 60 80 48 */	lis r3, lbl_8047F0A4@ha
/* 8019C824 00199764  3C A0 80 48 */	lis r5, lbl_8047F0B8@ha
/* 8019C828 00199768  38 63 F0 A4 */	addi r3, r3, lbl_8047F0A4@l
/* 8019C82C 0019976C  38 80 0A 31 */	li r4, 0xa31
/* 8019C830 00199770  38 A5 F0 B8 */	addi r5, r5, lbl_8047F0B8@l
/* 8019C834 00199774  4C C6 31 82 */	crclr 6
/* 8019C838 00199778  4B E8 DE 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8019C83C:
/* 8019C83C 0019977C  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 8019C840 00199780  38 81 00 08 */	addi r4, r1, 8
/* 8019C844 00199784  4B F9 BA 35 */	bl getTube__8CollPartFRQ23Sys4Tube
/* 8019C848 00199788  38 61 00 08 */	addi r3, r1, 8
/* 8019C84C 0019978C  38 9E 00 14 */	addi r4, r30, 0x14
/* 8019C850 00199790  48 27 92 55 */	bl "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
/* 8019C854 00199794  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 8019C858 00199798  FC 00 00 50 */	fneg f0, f0
/* 8019C85C 0019979C  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8019C860 001997A0  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 8019C864 001997A4  FC 00 00 50 */	fneg f0, f0
/* 8019C868 001997A8  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 8019C86C 001997AC  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8019C870 001997B0  FC 00 00 50 */	fneg f0, f0
/* 8019C874 001997B4  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8019C878 001997B8  C0 7E 00 10 */	lfs f3, 0x10(r30)
/* 8019C87C 001997BC  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 8019C880 001997C0  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 8019C884 001997C4  C0 5E 00 1C */	lfs f2, 0x1c(r30)
/* 8019C888 001997C8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8019C88C 001997CC  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8019C890 001997D0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8019C894 001997D4  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8019C898 001997D8  D0 3E 00 18 */	stfs f1, 0x18(r30)
/* 8019C89C 001997DC  D0 5E 00 1C */	stfs f2, 0x1c(r30)
/* 8019C8A0 001997E0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8019C8A4 001997E4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8019C8A8 001997E8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8019C8AC 001997EC  7C 08 03 A6 */	mtlr r0
/* 8019C8B0 001997F0  38 21 00 30 */	addi r1, r1, 0x30
/* 8019C8B4 001997F4  4E 80 00 20 */	blr 
.endfn init__Q26PikiAI8ActClimbFPQ26PikiAI9ActionArg

.fn exec__Q26PikiAI8ActClimbFv, global
/* 8019C8B8 001997F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019C8BC 001997FC  7C 08 02 A6 */	mflr r0
/* 8019C8C0 00199800  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019C8C4 00199804  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8019C8C8 00199808  7C 7F 1B 78 */	mr r31, r3
/* 8019C8CC 0019980C  80 63 00 04 */	lwz r3, 4(r3)
/* 8019C8D0 00199810  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 8019C8D4 00199814  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 8019C8D8 00199818  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 8019C8DC 0019981C  D0 03 02 04 */	stfs f0, 0x204(r3)
/* 8019C8E0 00199820  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 8019C8E4 00199824  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 8019C8E8 00199828  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 8019C8EC 0019982C  28 00 00 00 */	cmplwi r0, 0
/* 8019C8F0 00199830  40 82 00 30 */	bne .L_8019C920
/* 8019C8F4 00199834  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C8F8 00199838  C0 22 AC 30 */	lfs f1, lbl_80518F90@sda21(r2)
/* 8019C8FC 0019983C  C0 03 02 00 */	lfs f0, 0x200(r3)
/* 8019C900 00199840  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019C904 00199844  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 8019C908 00199848  C0 03 02 04 */	lfs f0, 0x204(r3)
/* 8019C90C 0019984C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019C910 00199850  D0 03 02 04 */	stfs f0, 0x204(r3)
/* 8019C914 00199854  C0 03 02 08 */	lfs f0, 0x208(r3)
/* 8019C918 00199858  EC 00 00 72 */	fmuls f0, f0, f1
/* 8019C91C 0019985C  D0 03 02 08 */	stfs f0, 0x208(r3)
.L_8019C920:
/* 8019C920 00199860  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C924 00199864  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8019C928 00199868  81 83 00 00 */	lwz r12, 0(r3)
/* 8019C92C 0019986C  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 8019C930 00199870  81 8C 01 D0 */	lwz r12, 0x1d0(r12)
/* 8019C934 00199874  7D 89 03 A6 */	mtctr r12
/* 8019C938 00199878  4E 80 04 21 */	bctrl 
/* 8019C93C 0019987C  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 8019C940 00199880  28 00 00 00 */	cmplwi r0, 0
/* 8019C944 00199884  41 82 00 20 */	beq .L_8019C964
/* 8019C948 00199888  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C94C 0019988C  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019C950 00199890  C0 23 01 08 */	lfs f1, 0x108(r3)
/* 8019C954 00199894  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019C958 00199898  40 80 00 2C */	bge .L_8019C984
/* 8019C95C 0019989C  38 60 00 00 */	li r3, 0
/* 8019C960 001998A0  48 00 00 28 */	b .L_8019C988
.L_8019C964:
/* 8019C964 001998A4  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019C968 001998A8  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 8019C96C 001998AC  C0 23 01 08 */	lfs f1, 0x108(r3)
/* 8019C970 001998B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019C974 001998B4  4C 41 13 82 */	cror 2, 1, 2
/* 8019C978 001998B8  40 82 00 0C */	bne .L_8019C984
/* 8019C97C 001998BC  38 60 00 00 */	li r3, 0
/* 8019C980 001998C0  48 00 00 08 */	b .L_8019C988
.L_8019C984:
/* 8019C984 001998C4  38 60 00 01 */	li r3, 1
.L_8019C988:
/* 8019C988 001998C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019C98C 001998CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8019C990 001998D0  7C 08 03 A6 */	mtlr r0
/* 8019C994 001998D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8019C998 001998D8  4E 80 00 20 */	blr 
.endfn exec__Q26PikiAI8ActClimbFv

.fn cleanup__Q26PikiAI8ActClimbFv, global
/* 8019C99C 001998DC  4E 80 00 20 */	blr 
.endfn cleanup__Q26PikiAI8ActClimbFv

.fn __ct__Q26PikiAI9ActGatherFPQ24Game4Piki, global
/* 8019C9A0 001998E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019C9A4 001998E4  7C 08 02 A6 */	mflr r0
/* 8019C9A8 001998E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019C9AC 001998EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8019C9B0 001998F0  7C 7F 1B 78 */	mr r31, r3
/* 8019C9B4 001998F4  4B FF A0 65 */	bl __ct__Q26PikiAI6ActionFPQ24Game4Piki
/* 8019C9B8 001998F8  3C 80 80 4B */	lis r4, __vt__Q26PikiAI9ActGather@ha
/* 8019C9BC 001998FC  7F E3 FB 78 */	mr r3, r31
/* 8019C9C0 00199900  38 04 4B 10 */	addi r0, r4, __vt__Q26PikiAI9ActGather@l
/* 8019C9C4 00199904  90 1F 00 00 */	stw r0, 0(r31)
/* 8019C9C8 00199908  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8019C9CC 0019990C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019C9D0 00199910  7C 08 03 A6 */	mtlr r0
/* 8019C9D4 00199914  38 21 00 10 */	addi r1, r1, 0x10
/* 8019C9D8 00199918  4E 80 00 20 */	blr 
.endfn __ct__Q26PikiAI9ActGatherFPQ24Game4Piki

.fn init__Q26PikiAI9ActGatherFPQ26PikiAI9ActionArg, global
/* 8019C9DC 0019991C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8019C9E0 00199920  7C 08 02 A6 */	mflr r0
/* 8019C9E4 00199924  90 01 00 24 */	stw r0, 0x24(r1)
/* 8019C9E8 00199928  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8019C9EC 0019992C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8019C9F0 00199930  7C 9E 23 78 */	mr r30, r4
/* 8019C9F4 00199934  3C 80 80 48 */	lis r4, lbl_8047F070@ha
/* 8019C9F8 00199938  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8019C9FC 0019993C  7C 7D 1B 78 */	mr r29, r3
/* 8019CA00 00199940  7F C3 F3 78 */	mr r3, r30
/* 8019CA04 00199944  3B E4 F0 70 */	addi r31, r4, lbl_8047F070@l
/* 8019CA08 00199948  81 9E 00 00 */	lwz r12, 0(r30)
/* 8019CA0C 0019994C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019CA10 00199950  7D 89 03 A6 */	mtctr r12
/* 8019CA14 00199954  4E 80 04 21 */	bctrl 
/* 8019CA18 00199958  7C 64 1B 78 */	mr r4, r3
/* 8019CA1C 0019995C  38 7F 00 E8 */	addi r3, r31, 0xe8
/* 8019CA20 00199960  4B F2 DC A1 */	bl strcmp
/* 8019CA24 00199964  7C 60 00 34 */	cntlzw r0, r3
/* 8019CA28 00199968  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 8019CA2C 0019996C  40 82 00 18 */	bne .L_8019CA44
/* 8019CA30 00199970  38 7F 00 34 */	addi r3, r31, 0x34
/* 8019CA34 00199974  38 BF 00 48 */	addi r5, r31, 0x48
/* 8019CA38 00199978  38 80 0A 6D */	li r4, 0xa6d
/* 8019CA3C 0019997C  4C C6 31 82 */	crclr 6
/* 8019CA40 00199980  4B E8 DC 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8019CA44:
/* 8019CA44 00199984  C0 1E 00 04 */	lfs f0, 4(r30)
/* 8019CA48 00199988  38 80 00 1E */	li r4, 0x1e
/* 8019CA4C 0019998C  38 A0 00 1E */	li r5, 0x1e
/* 8019CA50 00199990  38 C0 00 00 */	li r6, 0
/* 8019CA54 00199994  D0 1D 00 0C */	stfs f0, 0xc(r29)
/* 8019CA58 00199998  38 E0 00 00 */	li r7, 0
/* 8019CA5C 0019999C  C0 1E 00 08 */	lfs f0, 8(r30)
/* 8019CA60 001999A0  D0 1D 00 10 */	stfs f0, 0x10(r29)
/* 8019CA64 001999A4  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 8019CA68 001999A8  D0 1D 00 14 */	stfs f0, 0x14(r29)
/* 8019CA6C 001999AC  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 8019CA70 001999B0  D0 1D 00 18 */	stfs f0, 0x18(r29)
/* 8019CA74 001999B4  80 7D 00 04 */	lwz r3, 4(r29)
/* 8019CA78 001999B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8019CA7C 001999BC  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8019CA80 001999C0  7D 89 03 A6 */	mtctr r12
/* 8019CA84 001999C4  4E 80 04 21 */	bctrl 
/* 8019CA88 001999C8  C0 22 AC 7C */	lfs f1, lbl_80518FDC@sda21(r2)
/* 8019CA8C 001999CC  C0 02 AC 80 */	lfs f0, lbl_80518FE0@sda21(r2)
/* 8019CA90 001999D0  D0 3D 00 1C */	stfs f1, 0x1c(r29)
/* 8019CA94 001999D4  C0 3D 00 18 */	lfs f1, 0x18(r29)
/* 8019CA98 001999D8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8019CA9C 001999DC  D0 1D 00 18 */	stfs f0, 0x18(r29)
/* 8019CAA0 001999E0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8019CAA4 001999E4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8019CAA8 001999E8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8019CAAC 001999EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8019CAB0 001999F0  7C 08 03 A6 */	mtlr r0
/* 8019CAB4 001999F4  38 21 00 20 */	addi r1, r1, 0x20
/* 8019CAB8 001999F8  4E 80 00 20 */	blr 
.endfn init__Q26PikiAI9ActGatherFPQ26PikiAI9ActionArg

.fn exec__Q26PikiAI9ActGatherFv, global
/* 8019CABC 001999FC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8019CAC0 00199A00  7C 08 02 A6 */	mflr r0
/* 8019CAC4 00199A04  90 01 00 34 */	stw r0, 0x34(r1)
/* 8019CAC8 00199A08  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8019CACC 00199A0C  7C 7F 1B 78 */	mr r31, r3
/* 8019CAD0 00199A10  38 61 00 08 */	addi r3, r1, 8
/* 8019CAD4 00199A14  80 9F 00 04 */	lwz r4, 4(r31)
/* 8019CAD8 00199A18  81 84 00 00 */	lwz r12, 0(r4)
/* 8019CADC 00199A1C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019CAE0 00199A20  7D 89 03 A6 */	mtctr r12
/* 8019CAE4 00199A24  4E 80 04 21 */	bctrl 
/* 8019CAE8 00199A28  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 8019CAEC 00199A2C  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8019CAF0 00199A30  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 8019CAF4 00199A34  C0 01 00 08 */	lfs f0, 8(r1)
/* 8019CAF8 00199A38  EC 83 10 28 */	fsubs f4, f3, f2
/* 8019CAFC 00199A3C  C0 7F 00 14 */	lfs f3, 0x14(r31)
/* 8019CB00 00199A40  EC 41 00 28 */	fsubs f2, f1, f0
/* 8019CB04 00199A44  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8019CB08 00199A48  EC A4 01 32 */	fmuls f5, f4, f4
/* 8019CB0C 00199A4C  C0 22 AC 00 */	lfs f1, lbl_80518F60@sda21(r2)
/* 8019CB10 00199A50  EC 63 00 28 */	fsubs f3, f3, f0
/* 8019CB14 00199A54  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8019CB18 00199A58  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8019CB1C 00199A5C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8019CB20 00199A60  EC 83 00 F2 */	fmuls f4, f3, f3
/* 8019CB24 00199A64  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8019CB28 00199A68  EC 00 28 2A */	fadds f0, f0, f5
/* 8019CB2C 00199A6C  EC 04 00 2A */	fadds f0, f4, f0
/* 8019CB30 00199A70  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8019CB34 00199A74  40 81 00 20 */	ble .L_8019CB54
/* 8019CB38 00199A78  EC 02 28 BA */	fmadds f0, f2, f2, f5
/* 8019CB3C 00199A7C  EC 84 00 2A */	fadds f4, f4, f0
/* 8019CB40 00199A80  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 8019CB44 00199A84  40 81 00 14 */	ble .L_8019CB58
/* 8019CB48 00199A88  FC 00 20 34 */	frsqrte f0, f4
/* 8019CB4C 00199A8C  EC 80 01 32 */	fmuls f4, f0, f4
/* 8019CB50 00199A90  48 00 00 08 */	b .L_8019CB58
.L_8019CB54:
/* 8019CB54 00199A94  FC 80 08 90 */	fmr f4, f1
.L_8019CB58:
/* 8019CB58 00199A98  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019CB5C 00199A9C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8019CB60 00199AA0  40 81 00 34 */	ble .L_8019CB94
/* 8019CB64 00199AA4  C0 02 AC 04 */	lfs f0, lbl_80518F64@sda21(r2)
/* 8019CB68 00199AA8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8019CB6C 00199AAC  EC 60 20 24 */	fdivs f3, f0, f4
/* 8019CB70 00199AB0  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8019CB74 00199AB4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8019CB78 00199AB8  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8019CB7C 00199ABC  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8019CB80 00199AC0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8019CB84 00199AC4  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8019CB88 00199AC8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8019CB8C 00199ACC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8019CB90 00199AD0  48 00 00 08 */	b .L_8019CB98
.L_8019CB94:
/* 8019CB94 00199AD4  FC 80 00 90 */	fmr f4, f0
.L_8019CB98:
/* 8019CB98 00199AD8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8019CB9C 00199ADC  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 8019CBA0 00199AE0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8019CBA4 00199AE4  EC 01 00 28 */	fsubs f0, f1, f0
/* 8019CBA8 00199AE8  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8019CBAC 00199AEC  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 8019CBB0 00199AF0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8019CBB4 00199AF4  41 80 00 18 */	blt .L_8019CBCC
/* 8019CBB8 00199AF8  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 8019CBBC 00199AFC  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019CBC0 00199B00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019CBC4 00199B04  4C 40 13 82 */	cror 2, 0, 2
/* 8019CBC8 00199B08  40 82 00 20 */	bne .L_8019CBE8
.L_8019CBCC:
/* 8019CBCC 00199B0C  80 9F 00 04 */	lwz r4, 4(r31)
/* 8019CBD0 00199B10  38 60 00 00 */	li r3, 0
/* 8019CBD4 00199B14  C0 02 AC 00 */	lfs f0, lbl_80518F60@sda21(r2)
/* 8019CBD8 00199B18  D0 04 01 E4 */	stfs f0, 0x1e4(r4)
/* 8019CBDC 00199B1C  D0 04 01 E8 */	stfs f0, 0x1e8(r4)
/* 8019CBE0 00199B20  D0 04 01 EC */	stfs f0, 0x1ec(r4)
/* 8019CBE4 00199B24  48 00 00 18 */	b .L_8019CBFC
.L_8019CBE8:
/* 8019CBE8 00199B28  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019CBEC 00199B2C  38 81 00 14 */	addi r4, r1, 0x14
/* 8019CBF0 00199B30  C0 22 AC 80 */	lfs f1, lbl_80518FE0@sda21(r2)
/* 8019CBF4 00199B34  4B FA C4 25 */	bl "setSpeed__Q24Game4PikiFfR10Vector3<f>"
/* 8019CBF8 00199B38  38 60 00 01 */	li r3, 1
.L_8019CBFC:
/* 8019CBFC 00199B3C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8019CC00 00199B40  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8019CC04 00199B44  7C 08 03 A6 */	mtlr r0
/* 8019CC08 00199B48  38 21 00 30 */	addi r1, r1, 0x30
/* 8019CC0C 00199B4C  4E 80 00 20 */	blr 
.endfn exec__Q26PikiAI9ActGatherFv

.fn cleanup__Q26PikiAI9ActGatherFv, global
/* 8019CC10 00199B50  4E 80 00 20 */	blr 
.endfn cleanup__Q26PikiAI9ActGatherFv

.fn __ct__Q26PikiAI20ActFollowVectorFieldFPQ24Game4Piki, global
/* 8019CC14 00199B54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019CC18 00199B58  7C 08 02 A6 */	mflr r0
/* 8019CC1C 00199B5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019CC20 00199B60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8019CC24 00199B64  7C 7F 1B 78 */	mr r31, r3
/* 8019CC28 00199B68  4B FF 9D F1 */	bl __ct__Q26PikiAI6ActionFPQ24Game4Piki
/* 8019CC2C 00199B6C  3C 80 80 4B */	lis r4, __vt__Q26PikiAI20ActFollowVectorField@ha
/* 8019CC30 00199B70  7F E3 FB 78 */	mr r3, r31
/* 8019CC34 00199B74  38 04 4A D4 */	addi r0, r4, __vt__Q26PikiAI20ActFollowVectorField@l
/* 8019CC38 00199B78  90 1F 00 00 */	stw r0, 0(r31)
/* 8019CC3C 00199B7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8019CC40 00199B80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019CC44 00199B84  7C 08 03 A6 */	mtlr r0
/* 8019CC48 00199B88  38 21 00 10 */	addi r1, r1, 0x10
/* 8019CC4C 00199B8C  4E 80 00 20 */	blr 
.endfn __ct__Q26PikiAI20ActFollowVectorFieldFPQ24Game4Piki

.fn init__Q26PikiAI20ActFollowVectorFieldFPQ26PikiAI9ActionArg, global
/* 8019CC50 00199B90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019CC54 00199B94  7C 08 02 A6 */	mflr r0
/* 8019CC58 00199B98  38 A0 00 1E */	li r5, 0x1e
/* 8019CC5C 00199B9C  38 C0 00 00 */	li r6, 0
/* 8019CC60 00199BA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019CC64 00199BA4  38 E0 00 00 */	li r7, 0
/* 8019CC68 00199BA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8019CC6C 00199BAC  7C 9F 23 78 */	mr r31, r4
/* 8019CC70 00199BB0  38 80 00 1E */	li r4, 0x1e
/* 8019CC74 00199BB4  93 C1 00 08 */	stw r30, 8(r1)
/* 8019CC78 00199BB8  7C 7E 1B 78 */	mr r30, r3
/* 8019CC7C 00199BBC  80 63 00 04 */	lwz r3, 4(r3)
/* 8019CC80 00199BC0  81 83 00 00 */	lwz r12, 0(r3)
/* 8019CC84 00199BC4  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8019CC88 00199BC8  7D 89 03 A6 */	mtctr r12
/* 8019CC8C 00199BCC  4E 80 04 21 */	bctrl 
/* 8019CC90 00199BD0  80 1F 00 04 */	lwz r0, 4(r31)
/* 8019CC94 00199BD4  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8019CC98 00199BD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019CC9C 00199BDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8019CCA0 00199BE0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8019CCA4 00199BE4  7C 08 03 A6 */	mtlr r0
/* 8019CCA8 00199BE8  38 21 00 10 */	addi r1, r1, 0x10
/* 8019CCAC 00199BEC  4E 80 00 20 */	blr 
.endfn init__Q26PikiAI20ActFollowVectorFieldFPQ26PikiAI9ActionArg

.fn exec__Q26PikiAI20ActFollowVectorFieldFv, global
/* 8019CCB0 00199BF0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8019CCB4 00199BF4  7C 08 02 A6 */	mflr r0
/* 8019CCB8 00199BF8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8019CCBC 00199BFC  38 81 00 14 */	addi r4, r1, 0x14
/* 8019CCC0 00199C00  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8019CCC4 00199C04  7C 7F 1B 78 */	mr r31, r3
/* 8019CCC8 00199C08  80 63 00 04 */	lwz r3, 4(r3)
/* 8019CCCC 00199C0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8019CCD0 00199C10  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8019CCD4 00199C14  7D 89 03 A6 */	mtctr r12
/* 8019CCD8 00199C18  4E 80 04 21 */	bctrl 
/* 8019CCDC 00199C1C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8019CCE0 00199C20  38 81 00 14 */	addi r4, r1, 0x14
/* 8019CCE4 00199C24  38 A1 00 08 */	addi r5, r1, 8
/* 8019CCE8 00199C28  81 83 00 00 */	lwz r12, 0(r3)
/* 8019CCEC 00199C2C  81 8C 02 04 */	lwz r12, 0x204(r12)
/* 8019CCF0 00199C30  7D 89 03 A6 */	mtctr r12
/* 8019CCF4 00199C34  4E 80 04 21 */	bctrl 
/* 8019CCF8 00199C38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019CCFC 00199C3C  40 82 00 0C */	bne .L_8019CD08
/* 8019CD00 00199C40  38 60 00 02 */	li r3, 2
/* 8019CD04 00199C44  48 00 00 18 */	b .L_8019CD1C
.L_8019CD08:
/* 8019CD08 00199C48  80 7F 00 04 */	lwz r3, 4(r31)
/* 8019CD0C 00199C4C  38 81 00 08 */	addi r4, r1, 8
/* 8019CD10 00199C50  C0 22 AC 04 */	lfs f1, lbl_80518F64@sda21(r2)
/* 8019CD14 00199C54  4B FA C3 05 */	bl "setSpeed__Q24Game4PikiFfR10Vector3<f>"
/* 8019CD18 00199C58  38 60 00 01 */	li r3, 1
.L_8019CD1C:
/* 8019CD1C 00199C5C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8019CD20 00199C60  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8019CD24 00199C64  7C 08 03 A6 */	mtlr r0
/* 8019CD28 00199C68  38 21 00 30 */	addi r1, r1, 0x30
/* 8019CD2C 00199C6C  4E 80 00 20 */	blr 
.endfn exec__Q26PikiAI20ActFollowVectorFieldFv

.fn cleanup__Q26PikiAI20ActFollowVectorFieldFv, global
/* 8019CD30 00199C70  4E 80 00 20 */	blr 
.endfn cleanup__Q26PikiAI20ActFollowVectorFieldFv

.fn __sinit_aiPrimitives_cpp, local
/* 8019CD34 00199C74  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8019CD38 00199C78  38 00 FF FF */	li r0, -1
/* 8019CD3C 00199C7C  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8019CD40 00199C80  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8019CD44 00199C84  90 0D 93 60 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8019CD48 00199C88  D4 03 4A A8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8019CD4C 00199C8C  D0 0D 93 64 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8019CD50 00199C90  D0 03 00 04 */	stfs f0, 4(r3)
/* 8019CD54 00199C94  D0 03 00 08 */	stfs f0, 8(r3)
/* 8019CD58 00199C98  4E 80 00 20 */	blr 
.endfn __sinit_aiPrimitives_cpp

.fn "@36@4@onKeyEvent__Q26PikiAI14ActStickAttackFRCQ28SysShape8KeyEvent", weak
/* 8019CD5C 00199C9C  39 60 00 04 */	li r11, 4
/* 8019CD60 00199CA0  7D 63 58 2E */	lwzx r11, r3, r11
/* 8019CD64 00199CA4  7C 63 5A 14 */	add r3, r3, r11
/* 8019CD68 00199CA8  38 63 FF DC */	addi r3, r3, -36
/* 8019CD6C 00199CAC  4B FF F9 6C */	b onKeyEvent__Q26PikiAI14ActStickAttackFRCQ28SysShape8KeyEvent
.endfn "@36@4@onKeyEvent__Q26PikiAI14ActStickAttackFRCQ28SysShape8KeyEvent"
