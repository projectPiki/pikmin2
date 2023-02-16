.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_fakePiki_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047C708, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8047C708
.balign 4
.obj lbl_8047C714, local
	.asciz "fakePiki"
.endobj lbl_8047C714
.balign 4
.obj lbl_8047C720, local
	.asciz "fakePiki.cpp"
.endobj lbl_8047C720
.balign 4
.obj lbl_8047C730, local
	.asciz "P2Assert"
.endobj lbl_8047C730
.balign 4
.obj lbl_8047C73C, local
	.asciz "damedayo!\n"
.endobj lbl_8047C73C
.balign 4
.obj lbl_8047C748, local
	.asciz "zama--------n\n"
.endobj lbl_8047C748
.balign 4
.obj lbl_8047C758, local
	.asciz "calc-coll"
.endobj lbl_8047C758
.balign 4
.obj lbl_8047C764, local
	.asciz "no recover onyon\n"
.endobj lbl_8047C764
.balign 4
.obj lbl_8047C778, local
	.asciz "Creature"
.endobj lbl_8047C778

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q24Game8FakePiki, global
	.4byte 0
	.4byte 0
	.4byte getPosition__Q24Game8FakePikiFv
	.4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
	.4byte getBoundingSphere__Q24Game8FakePikiFRQ23Sys6Sphere
	.4byte collisionUpdatable__Q24Game8CreatureFv
	.4byte isPiki__Q24Game8CreatureFv
	.4byte isNavi__Q24Game8CreatureFv
	.4byte deferPikiCollision__Q24Game10CellObjectFv
	.4byte getTypeName__Q24Game8CreatureFv
	.4byte getObjType__Q24Game8CreatureFv
	.4byte constructor__Q24Game8CreatureFv
	.4byte onInit__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game8FakePikiFv
	.4byte doEntry__Q24Game8FakePikiFv
	.4byte doSetView__Q24Game8CreatureFi
	.4byte doViewCalc__Q24Game8CreatureFv
	.4byte doSimulation__Q24Game8FakePikiFf
	.4byte doDirectDraw__Q24Game8CreatureFR8Graphics
	.4byte getBodyRadius__Q24Game8CreatureFv
	.4byte getCellRadius__Q24Game8CreatureFv
	.4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte getFaceDir__Q24Game8FakePikiFv
	.4byte "setVelocity__Q24Game8FakePikiFR10Vector3<f>"
	.4byte getVelocity__Q24Game8FakePikiFv
	.4byte "onSetPosition__Q24Game8FakePikiFR10Vector3<f>"
	.4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
	.4byte updateTrMatrix__Q24Game8FakePikiFv
	.4byte isTeki__Q24Game8CreatureFv
	.4byte isPellet__Q24Game8CreatureFv
	.4byte inWaterCallback__Q24Game8FakePikiFPQ24Game8WaterBox
	.4byte outWaterCallback__Q24Game8FakePikiFv
	.4byte inWater__Q24Game8FakePikiFv
	.4byte getFlockMgr__Q24Game8CreatureFv
	.4byte onStartCapture__Q24Game8CreatureFv
	.4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
	.4byte onEndCapture__Q24Game8CreatureFv
	.4byte isAtari__Q24Game8CreatureFv
	.4byte setAtari__Q24Game8CreatureFb
	.4byte isAlive__Q24Game8CreatureFv
	.4byte setAlive__Q24Game8CreatureFb
	.4byte isCollisionFlick__Q24Game8CreatureFv
	.4byte setCollisionFlick__Q24Game8CreatureFb
	.4byte isMovieActor__Q24Game8CreatureFv
	.4byte isMovieExtra__Q24Game8CreatureFv
	.4byte isMovieMotion__Q24Game8CreatureFv
	.4byte setMovieMotion__Q24Game8CreatureFb
	.4byte isBuried__Q24Game8CreatureFv
	.4byte isFlying__Q24Game8CreatureFv
	.4byte isUnderground__Q24Game8CreatureFv
	.4byte isLivingThing__Q24Game8CreatureFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game8CreatureFRQ24Game9CollEvent
	.4byte platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
	.4byte getJAIObject__Q24Game8CreatureFv
	.4byte getPSCreature__Q24Game8CreatureFv
	.4byte getSound_AILOD__Q24Game8CreatureFv
	.4byte getSound_PosPtr__Q24Game8FakePikiFv
	.4byte sound_culling__Q24Game8CreatureFv
	.4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
	.4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
	.4byte on_movie_begin__Q24Game8CreatureFb
	.4byte on_movie_end__Q24Game8CreatureFb
	.4byte movieStartAnimation__Q24Game8CreatureFUl
	.4byte movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
	.4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
	.4byte "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
	.4byte movieSetFaceDir__Q24Game8FakePikiFf
	.4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
	.4byte getShadowParam__Q24Game8CreatureFRQ24Game11ShadowParam
	.4byte needShadow__Q24Game8CreatureFv
	.4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
	.4byte getLODSphere__Q24Game8CreatureFRQ23Sys6Sphere
	.4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
	.4byte startPick__Q24Game8CreatureFv
	.4byte endPick__Q24Game8CreatureFb
	.4byte getMabiki__Q24Game8CreatureFv
	.4byte getFootmarks__Q24Game8CreatureFv
	.4byte onStickStart__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEnd__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte isSlotFree__Q24Game8CreatureFs
	.4byte getFreeStickSlot__Q24Game8CreatureFv
	.4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
	.4byte getRandomFreeStickSlot__Q24Game8CreatureFv
	.4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
	.4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
	.4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
	.4byte "getVelocityAt__Q24Game8FakePikiFR10Vector3<f>R10Vector3<f>"
	.4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
	.4byte getSuckPos__Q24Game8CreatureFv
	.4byte getGoalPos__Q24Game8CreatureFv
	.4byte isSuckReady__Q24Game8CreatureFv
	.4byte isSuckArriveWait__Q24Game8CreatureFv
	.4byte stimulate__Q24Game8CreatureFRQ24Game11Interaction
	.4byte getCreatureName__Q24Game8CreatureFv
	.4byte getCreatureID__Q24Game8CreatureFv
	.4byte 0
	.4byte 0
	.4byte "@376@onKeyEvent__Q24Game8FakePikiFRCQ28SysShape8KeyEvent"
	.4byte getDownfloorMass__Q24Game8FakePikiFv
	.4byte isPikmin__Q24Game8FakePikiFv
	.4byte doColorChange__Q24Game8FakePikiFv
	.4byte doDebugDL__Q24Game8FakePikiFv
	.4byte update__Q24Game8FakePikiFv
	.4byte move__Q24Game8FakePikiFf
	.4byte useMoveRotation__Q24Game8FakePikiFv
	.4byte setMoveRotation__Q24Game8FakePikiFb
	.4byte useUpdateTrMatrix__Q24Game8FakePikiFv
	.4byte setUpdateTrMatrix__Q24Game8FakePikiFb
	.4byte useMoveVelocity__Q24Game8FakePikiFv
	.4byte setMoveVelocity__Q24Game8FakePikiFb
	.4byte useMapCollision__Q24Game8FakePikiFv
	.4byte setMapCollision__Q24Game8FakePikiFb
	.4byte isZikatu__Q24Game8FakePikiFv
	.4byte setZikatu__Q24Game8FakePikiFb
	.4byte wasZikatu__Q24Game8FakePikiFv
	.4byte getMapCollisionRadius__Q24Game8FakePikiFv
	.4byte "wallCallback__Q24Game8FakePikiFR10Vector3<f>"
	.4byte startMotion__Q24Game8FakePikiFiiPQ28SysShape14MotionListenerPQ28SysShape14MotionListener
	.4byte onKeyEvent__Q24Game8FakePikiFRCQ28SysShape8KeyEvent
	.4byte updateLookCreature__Q24Game8FakePikiFv
	.4byte do_updateLookCreature__Q24Game8FakePikiFv
	.4byte onSetPosition__Q24Game8FakePikiFv
	.4byte isWalking__Q24Game8FakePikiFv
.endobj __vt__Q24Game8FakePiki

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj kAngleSpeed__Q23efx7TCursor, global
	.float 0.05235988
.endobj kAngleSpeed__Q23efx7TCursor

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj sCurrNeckTheta__Q24Game8FakePiki, global
	.skip 0x4
.endobj sCurrNeckTheta__Q24Game8FakePiki
.obj sCurrNeckPhi__Q24Game8FakePiki, global
	.skip 0x4
.endobj sCurrNeckPhi__Q24Game8FakePiki

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_805182B0, local
	.float 8.5
.endobj lbl_805182B0
.obj lbl_805182B4, local
	.float 0.0
.endobj lbl_805182B4
.obj lbl_805182B8, local
	.float 30.0
.endobj lbl_805182B8
.obj lbl_805182BC, local
	.float 10.0
.endobj lbl_805182BC
.obj lbl_805182C0, local
	.float 0.01
.endobj lbl_805182C0
.obj lbl_805182C4, local
	.float 60.0
.endobj lbl_805182C4
.obj lbl_805182C8, local
	.float -325.9493
.endobj lbl_805182C8
.obj lbl_805182CC, local
	.float 325.9493
.endobj lbl_805182CC
.obj lbl_805182D0, local
	.float 0.2
.endobj lbl_805182D0
.obj lbl_805182D4, local
	.float 0.1
.endobj lbl_805182D4
.obj lbl_805182D8, local # pi
	.float 3.1415927
.endobj lbl_805182D8
.obj lbl_805182DC, local # tau
	.float 6.2831855
.endobj lbl_805182DC
.obj lbl_805182E0, local
	.float -1.0
.endobj lbl_805182E0
.obj lbl_805182E4, local
	.float 0.15707964
.endobj lbl_805182E4
.obj lbl_805182E8, local
	.float 0.05
.endobj lbl_805182E8
.obj lbl_805182EC, local # pi/10
	.float 0.31415927
.endobj lbl_805182EC
.obj lbl_805182F0, local # -pi/10
	.float -0.31415927
.endobj lbl_805182F0
.obj lbl_805182F4, local
	.float 2.0943952
.endobj lbl_805182F4
.obj lbl_805182F8, local
	.float 4.1887903
.endobj lbl_805182F8
.obj lbl_805182FC, local
	.float 1.0471976
.endobj lbl_805182FC
.obj lbl_80518300, local
	.float 5.2359877
.endobj lbl_80518300
.obj lbl_80518304, local
	.float 1.0
.endobj lbl_80518304
.obj lbl_80518308, local
	.float 2.5
.endobj lbl_80518308
.obj lbl_8051830C, local
	.float 4.0
.endobj lbl_8051830C
.obj lbl_80518310, local
	.float 0.8
.endobj lbl_80518310
.obj lbl_80518314, local
	.float 0.6
.endobj lbl_80518314
.obj lbl_80518318, local
	.float 0.033333335
.endobj lbl_80518318
.obj lbl_8051831C, local
	.float -0.025000002
.endobj lbl_8051831C
.obj lbl_80518320, local
	.float 100.0
.endobj lbl_80518320
.obj lbl_80518324, local
	.float 32768.0
.endobj lbl_80518324
.balign 8
.obj lbl_80518328, local
	.8byte 0x4330000080000000
.endobj lbl_80518328
.balign 4
.obj lbl_80518330, local
	.asciz "doa1"
.endobj lbl_80518330
.balign 4
.obj lbl_80518338, local
	.float 0.009
.endobj lbl_80518338
.obj lbl_8051833C, local
	.float 2.0
.endobj lbl_8051833C
.obj lbl_80518340, local
	.float 150.0
.endobj lbl_80518340
.obj lbl_80518344, local
	.float 1.1
.endobj lbl_80518344

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q24Game8FakePikiFv, global
/* 8013CC68 00139BA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013CC6C 00139BAC  7C 08 02 A6 */	mflr r0
/* 8013CC70 00139BB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013CC74 00139BB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013CC78 00139BB8  7C 7F 1B 78 */	mr r31, r3
/* 8013CC7C 00139BBC  4B FF E2 09 */	bl __ct__Q24Game8CreatureFv
/* 8013CC80 00139BC0  3C 80 80 4B */	lis r4, __vt__Q28SysShape14MotionListener@ha
/* 8013CC84 00139BC4  3C 60 80 4B */	lis r3, __vt__Q24Game8FakePiki@ha
/* 8013CC88 00139BC8  38 84 A6 6C */	addi r4, r4, __vt__Q28SysShape14MotionListener@l
/* 8013CC8C 00139BCC  38 00 00 00 */	li r0, 0
/* 8013CC90 00139BD0  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8013CC94 00139BD4  38 A3 02 BC */	addi r5, r3, __vt__Q24Game8FakePiki@l
/* 8013CC98 00139BD8  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 8013CC9C 00139BDC  38 7F 01 AC */	addi r3, r31, 0x1ac
/* 8013CCA0 00139BE0  90 BF 00 00 */	stw r5, 0(r31)
/* 8013CCA4 00139BE4  90 9F 01 78 */	stw r4, 0x178(r31)
/* 8013CCA8 00139BE8  98 1F 01 7C */	stb r0, 0x17c(r31)
/* 8013CCAC 00139BEC  98 1F 01 7D */	stb r0, 0x17d(r31)
/* 8013CCB0 00139BF0  98 1F 01 7E */	stb r0, 0x17e(r31)
/* 8013CCB4 00139BF4  98 1F 01 7F */	stb r0, 0x17f(r31)
/* 8013CCB8 00139BF8  4B FF 69 95 */	bl __ct__12PikiAnimatorFv
/* 8013CCBC 00139BFC  38 00 00 00 */	li r0, 0
/* 8013CCC0 00139C00  90 1F 01 88 */	stw r0, 0x188(r31)
/* 8013CCC4 00139C04  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8013CCC8 00139C08  28 03 00 00 */	cmplwi r3, 0
/* 8013CCCC 00139C0C  41 82 00 0C */	beq .L_8013CCD8
/* 8013CCD0 00139C10  7F E4 FB 78 */	mr r4, r31
/* 8013CCD4 00139C14  48 10 4E 4D */	bl createShadow__Q24Game9ShadowMgrFPQ24Game8Creature
.L_8013CCD8:
/* 8013CCD8 00139C18  38 00 00 00 */	li r0, 0
/* 8013CCDC 00139C1C  C0 02 9F 50 */	lfs f0, lbl_805182B0@sda21(r2)
/* 8013CCE0 00139C20  90 1F 01 74 */	stw r0, 0x174(r31)
/* 8013CCE4 00139C24  38 00 FF FF */	li r0, -1
/* 8013CCE8 00139C28  C0 22 9F 54 */	lfs f1, lbl_805182B4@sda21(r2)
/* 8013CCEC 00139C2C  38 60 00 08 */	li r3, 8
/* 8013CCF0 00139C30  D0 1F 02 24 */	stfs f0, 0x224(r31)
/* 8013CCF4 00139C34  C0 02 9F 58 */	lfs f0, lbl_805182B8@sda21(r2)
/* 8013CCF8 00139C38  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8013CCFC 00139C3C  D0 3F 02 0C */	stfs f1, 0x20c(r31)
/* 8013CD00 00139C40  D0 3F 02 10 */	stfs f1, 0x210(r31)
/* 8013CD04 00139C44  D0 3F 02 14 */	stfs f1, 0x214(r31)
/* 8013CD08 00139C48  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 8013CD0C 00139C4C  D0 3F 02 04 */	stfs f1, 0x204(r31)
/* 8013CD10 00139C50  D0 3F 02 08 */	stfs f1, 0x208(r31)
/* 8013CD14 00139C54  D0 3F 01 E4 */	stfs f1, 0x1e4(r31)
/* 8013CD18 00139C58  D0 3F 01 E8 */	stfs f1, 0x1e8(r31)
/* 8013CD1C 00139C5C  D0 3F 01 EC */	stfs f1, 0x1ec(r31)
/* 8013CD20 00139C60  D0 3F 01 F0 */	stfs f1, 0x1f0(r31)
/* 8013CD24 00139C64  D0 3F 01 F4 */	stfs f1, 0x1f4(r31)
/* 8013CD28 00139C68  D0 3F 01 F8 */	stfs f1, 0x1f8(r31)
/* 8013CD2C 00139C6C  90 1F 02 28 */	stw r0, 0x228(r31)
/* 8013CD30 00139C70  D0 1F 02 34 */	stfs f0, 0x234(r31)
/* 8013CD34 00139C74  4B EE 71 71 */	bl __nw__FUl
/* 8013CD38 00139C78  7C 60 1B 79 */	or. r0, r3, r3
/* 8013CD3C 00139C7C  41 82 00 0C */	beq .L_8013CD48
/* 8013CD40 00139C80  4B FF 73 1D */	bl __ct__8CollTreeFv
/* 8013CD44 00139C84  7C 60 1B 78 */	mr r0, r3
.L_8013CD48:
/* 8013CD48 00139C88  90 1F 01 14 */	stw r0, 0x114(r31)
/* 8013CD4C 00139C8C  38 00 00 00 */	li r0, 0
/* 8013CD50 00139C90  7F E4 FB 78 */	mr r4, r31
/* 8013CD54 00139C94  38 7F 00 A8 */	addi r3, r31, 0xa8
/* 8013CD58 00139C98  90 1F 01 90 */	stw r0, 0x190(r31)
/* 8013CD5C 00139C9C  38 A0 00 08 */	li r5, 8
/* 8013CD60 00139CA0  48 01 A0 D1 */	bl alloc__Q24Game15CollisionBufferFPQ24Game10CellObjecti
/* 8013CD64 00139CA4  38 00 00 00 */	li r0, 0
/* 8013CD68 00139CA8  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013CD6C 00139CAC  90 1F 01 A0 */	stw r0, 0x1a0(r31)
/* 8013CD70 00139CB0  7F E3 FB 78 */	mr r3, r31
/* 8013CD74 00139CB4  90 1F 01 A8 */	stw r0, 0x1a8(r31)
/* 8013CD78 00139CB8  D0 1F 01 9C */	stfs f0, 0x19c(r31)
/* 8013CD7C 00139CBC  D0 1F 01 98 */	stfs f0, 0x198(r31)
/* 8013CD80 00139CC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013CD84 00139CC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013CD88 00139CC8  7C 08 03 A6 */	mtlr r0
/* 8013CD8C 00139CCC  38 21 00 10 */	addi r1, r1, 0x10
/* 8013CD90 00139CD0  4E 80 00 20 */	blr 
.endfn __ct__Q24Game8FakePikiFv

.fn initFakePiki__Q24Game8FakePikiFv, global
/* 8013CD94 00139CD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013CD98 00139CD8  7C 08 02 A6 */	mflr r0
/* 8013CD9C 00139CDC  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013CDA0 00139CE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013CDA4 00139CE4  38 00 00 00 */	li r0, 0
/* 8013CDA8 00139CE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013CDAC 00139CEC  7C 7F 1B 78 */	mr r31, r3
/* 8013CDB0 00139CF0  90 03 01 88 */	stw r0, 0x188(r3)
/* 8013CDB4 00139CF4  90 03 01 90 */	stw r0, 0x190(r3)
/* 8013CDB8 00139CF8  D0 03 01 FC */	stfs f0, 0x1fc(r3)
/* 8013CDBC 00139CFC  D0 03 02 0C */	stfs f0, 0x20c(r3)
/* 8013CDC0 00139D00  D0 03 02 10 */	stfs f0, 0x210(r3)
/* 8013CDC4 00139D04  D0 03 02 14 */	stfs f0, 0x214(r3)
/* 8013CDC8 00139D08  D0 03 01 E4 */	stfs f0, 0x1e4(r3)
/* 8013CDCC 00139D0C  D0 03 01 E8 */	stfs f0, 0x1e8(r3)
/* 8013CDD0 00139D10  D0 03 01 EC */	stfs f0, 0x1ec(r3)
/* 8013CDD4 00139D14  D0 03 01 F0 */	stfs f0, 0x1f0(r3)
/* 8013CDD8 00139D18  D0 03 01 F4 */	stfs f0, 0x1f4(r3)
/* 8013CDDC 00139D1C  D0 03 01 F8 */	stfs f0, 0x1f8(r3)
/* 8013CDE0 00139D20  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 8013CDE4 00139D24  D0 03 02 04 */	stfs f0, 0x204(r3)
/* 8013CDE8 00139D28  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 8013CDEC 00139D2C  90 03 02 48 */	stw r0, 0x248(r3)
/* 8013CDF0 00139D30  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8013CDF4 00139D34  28 03 00 00 */	cmplwi r3, 0
/* 8013CDF8 00139D38  41 82 00 0C */	beq .L_8013CE04
/* 8013CDFC 00139D3C  7F E4 FB 78 */	mr r4, r31
/* 8013CE00 00139D40  48 10 4E AD */	bl addShadow__Q24Game9ShadowMgrFPQ24Game8Creature
.L_8013CE04:
/* 8013CE04 00139D44  38 00 00 00 */	li r0, 0
/* 8013CE08 00139D48  7F E3 FB 78 */	mr r3, r31
/* 8013CE0C 00139D4C  98 1F 01 7C */	stb r0, 0x17c(r31)
/* 8013CE10 00139D50  98 1F 01 7D */	stb r0, 0x17d(r31)
/* 8013CE14 00139D54  98 1F 01 7E */	stb r0, 0x17e(r31)
/* 8013CE18 00139D58  98 1F 01 7F */	stb r0, 0x17f(r31)
/* 8013CE1C 00139D5C  48 00 25 3D */	bl initCaptureStomach__Q24Game8FakePikiFv
/* 8013CE20 00139D60  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013CE24 00139D64  38 60 FF FF */	li r3, -1
/* 8013CE28 00139D68  38 00 00 00 */	li r0, 0
/* 8013CE2C 00139D6C  D0 1F 01 80 */	stfs f0, 0x180(r31)
/* 8013CE30 00139D70  B0 7F 01 8C */	sth r3, 0x18c(r31)
/* 8013CE34 00139D74  90 1F 01 84 */	stw r0, 0x184(r31)
/* 8013CE38 00139D78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013CE3C 00139D7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013CE40 00139D80  7C 08 03 A6 */	mtlr r0
/* 8013CE44 00139D84  38 21 00 10 */	addi r1, r1, 0x10
/* 8013CE48 00139D88  4E 80 00 20 */	blr 
.endfn initFakePiki__Q24Game8FakePikiFv

.fn killFakePiki__Q24Game8FakePikiFv, global
/* 8013CE4C 00139D8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013CE50 00139D90  7C 08 02 A6 */	mflr r0
/* 8013CE54 00139D94  7C 64 1B 78 */	mr r4, r3
/* 8013CE58 00139D98  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013CE5C 00139D9C  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8013CE60 00139DA0  48 10 4E 91 */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 8013CE64 00139DA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013CE68 00139DA8  7C 08 03 A6 */	mtlr r0
/* 8013CE6C 00139DAC  38 21 00 10 */	addi r1, r1, 0x10
/* 8013CE70 00139DB0  4E 80 00 20 */	blr 
.endfn killFakePiki__Q24Game8FakePikiFv

.fn initAnimator__Q24Game8FakePikiFv, global
/* 8013CE74 00139DB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013CE78 00139DB8  7C 08 02 A6 */	mflr r0
/* 8013CE7C 00139DBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013CE80 00139DC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013CE84 00139DC4  7C 7F 1B 78 */	mr r31, r3
/* 8013CE88 00139DC8  38 7F 01 AC */	addi r3, r31, 0x1ac
/* 8013CE8C 00139DCC  80 8D 92 E4 */	lwz r4, animMgr__Q24Game7NaviMgr@sda21(r13)
/* 8013CE90 00139DD0  4B FF 68 0D */	bl setAnimMgr__12PikiAnimatorFPQ28SysShape7AnimMgr
/* 8013CE94 00139DD4  7F E3 FB 78 */	mr r3, r31
/* 8013CE98 00139DD8  38 80 00 1F */	li r4, 0x1f
/* 8013CE9C 00139DDC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013CEA0 00139DE0  38 A0 00 1F */	li r5, 0x1f
/* 8013CEA4 00139DE4  38 C0 00 00 */	li r6, 0
/* 8013CEA8 00139DE8  38 E0 00 00 */	li r7, 0
/* 8013CEAC 00139DEC  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 8013CEB0 00139DF0  7D 89 03 A6 */	mtctr r12
/* 8013CEB4 00139DF4  4E 80 04 21 */	bctrl 
/* 8013CEB8 00139DF8  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 8013CEBC 00139DFC  38 7F 01 AC */	addi r3, r31, 0x1ac
/* 8013CEC0 00139E00  48 2E BE F9 */	bl assertValid__Q28SysShape8AnimatorFPQ28SysShape5Model
/* 8013CEC4 00139E04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013CEC8 00139E08  40 82 00 20 */	bne .L_8013CEE8
/* 8013CECC 00139E0C  3C 60 80 48 */	lis r3, lbl_8047C720@ha
/* 8013CED0 00139E10  3C A0 80 48 */	lis r5, lbl_8047C730@ha
/* 8013CED4 00139E14  38 63 C7 20 */	addi r3, r3, lbl_8047C720@l
/* 8013CED8 00139E18  38 80 01 CA */	li r4, 0x1ca
/* 8013CEDC 00139E1C  38 A5 C7 30 */	addi r5, r5, lbl_8047C730@l
/* 8013CEE0 00139E20  4C C6 31 82 */	crclr 6
/* 8013CEE4 00139E24  4B EE D7 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8013CEE8:
/* 8013CEE8 00139E28  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 8013CEEC 00139E2C  38 7F 01 C8 */	addi r3, r31, 0x1c8
/* 8013CEF0 00139E30  48 2E BE C9 */	bl assertValid__Q28SysShape8AnimatorFPQ28SysShape5Model
/* 8013CEF4 00139E34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013CEF8 00139E38  40 82 00 20 */	bne .L_8013CF18
/* 8013CEFC 00139E3C  3C 60 80 48 */	lis r3, lbl_8047C720@ha
/* 8013CF00 00139E40  3C A0 80 48 */	lis r5, lbl_8047C730@ha
/* 8013CF04 00139E44  38 63 C7 20 */	addi r3, r3, lbl_8047C720@l
/* 8013CF08 00139E48  38 80 01 CB */	li r4, 0x1cb
/* 8013CF0C 00139E4C  38 A5 C7 30 */	addi r5, r5, lbl_8047C730@l
/* 8013CF10 00139E50  4C C6 31 82 */	crclr 6
/* 8013CF14 00139E54  4B EE D7 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8013CF18:
/* 8013CF18 00139E58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013CF1C 00139E5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013CF20 00139E60  7C 08 03 A6 */	mtlr r0
/* 8013CF24 00139E64  38 21 00 10 */	addi r1, r1, 0x10
/* 8013CF28 00139E68  4E 80 00 20 */	blr 
.endfn initAnimator__Q24Game8FakePikiFv

.fn assertMotion__Q24Game8FakePikiFi, global
/* 8013CF2C 00139E6C  80 63 01 B8 */	lwz r3, 0x1b8(r3)
/* 8013CF30 00139E70  28 03 00 00 */	cmplwi r3, 0
/* 8013CF34 00139E74  41 82 00 0C */	beq .L_8013CF40
/* 8013CF38 00139E78  A8 03 00 20 */	lha r0, 0x20(r3)
/* 8013CF3C 00139E7C  48 00 00 08 */	b .L_8013CF44
.L_8013CF40:
/* 8013CF40 00139E80  38 00 FF FF */	li r0, -1
.L_8013CF44:
/* 8013CF44 00139E84  7C 00 20 50 */	subf r0, r0, r4
/* 8013CF48 00139E88  7C 00 00 34 */	cntlzw r0, r0
/* 8013CF4C 00139E8C  54 03 D9 7E */	srwi r3, r0, 5
/* 8013CF50 00139E90  4E 80 00 20 */	blr 
.endfn assertMotion__Q24Game8FakePikiFi

.fn enableMotionBlend__Q24Game8FakePikiFv, global
/* 8013CF54 00139E94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013CF58 00139E98  7C 08 02 A6 */	mflr r0
/* 8013CF5C 00139E9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013CF60 00139EA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013CF64 00139EA4  7C 7F 1B 78 */	mr r31, r3
/* 8013CF68 00139EA8  80 63 01 D4 */	lwz r3, 0x1d4(r3)
/* 8013CF6C 00139EAC  28 03 00 00 */	cmplwi r3, 0
/* 8013CF70 00139EB0  41 82 00 0C */	beq .L_8013CF7C
/* 8013CF74 00139EB4  A8 03 00 20 */	lha r0, 0x20(r3)
/* 8013CF78 00139EB8  48 00 00 08 */	b .L_8013CF80
.L_8013CF7C:
/* 8013CF7C 00139EBC  38 00 FF FF */	li r0, -1
.L_8013CF80:
/* 8013CF80 00139EC0  28 1F 00 00 */	cmplwi r31, 0
/* 8013CF84 00139EC4  90 1F 02 28 */	stw r0, 0x228(r31)
/* 8013CF88 00139EC8  7F E5 FB 78 */	mr r5, r31
/* 8013CF8C 00139ECC  41 82 00 08 */	beq .L_8013CF94
/* 8013CF90 00139ED0  38 BF 01 78 */	addi r5, r31, 0x178
.L_8013CF94:
/* 8013CF94 00139ED4  38 7F 01 C8 */	addi r3, r31, 0x1c8
/* 8013CF98 00139ED8  38 80 00 1C */	li r4, 0x1c
/* 8013CF9C 00139EDC  48 2E BC ED */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8013CFA0 00139EE0  C0 22 9F 5C */	lfs f1, lbl_805182BC@sda21(r2)
/* 8013CFA4 00139EE4  38 7F 01 C8 */	addi r3, r31, 0x1c8
/* 8013CFA8 00139EE8  48 2E BE 19 */	bl setCurrFrame__Q28SysShape8AnimatorFf
/* 8013CFAC 00139EEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013CFB0 00139EF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013CFB4 00139EF4  7C 08 03 A6 */	mtlr r0
/* 8013CFB8 00139EF8  38 21 00 10 */	addi r1, r1, 0x10
/* 8013CFBC 00139EFC  4E 80 00 20 */	blr 
.endfn enableMotionBlend__Q24Game8FakePikiFv

.fn startMotion__Q24Game8FakePikiFiiPQ28SysShape14MotionListenerPQ28SysShape14MotionListener, global
/* 8013CFC0 00139F00  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013CFC4 00139F04  7C 08 02 A6 */	mflr r0
/* 8013CFC8 00139F08  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013CFCC 00139F0C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013CFD0 00139F10  7C FF 3B 78 */	mr r31, r7
/* 8013CFD4 00139F14  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013CFD8 00139F18  7C BE 2B 78 */	mr r30, r5
/* 8013CFDC 00139F1C  7C C5 33 78 */	mr r5, r6
/* 8013CFE0 00139F20  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013CFE4 00139F24  7C 9D 23 78 */	mr r29, r4
/* 8013CFE8 00139F28  93 81 00 10 */	stw r28, 0x10(r1)
/* 8013CFEC 00139F2C  7C 7C 1B 78 */	mr r28, r3
/* 8013CFF0 00139F30  38 7C 01 AC */	addi r3, r28, 0x1ac
/* 8013CFF4 00139F34  48 2E BC 95 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8013CFF8 00139F38  7F C4 F3 78 */	mr r4, r30
/* 8013CFFC 00139F3C  7F E5 FB 78 */	mr r5, r31
/* 8013D000 00139F40  38 7C 01 C8 */	addi r3, r28, 0x1c8
/* 8013D004 00139F44  48 2E BC 85 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8013D008 00139F48  80 9C 01 74 */	lwz r4, 0x174(r28)
/* 8013D00C 00139F4C  38 7C 01 AC */	addi r3, r28, 0x1ac
/* 8013D010 00139F50  48 2E BD A9 */	bl assertValid__Q28SysShape8AnimatorFPQ28SysShape5Model
/* 8013D014 00139F54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013D018 00139F58  40 82 00 20 */	bne .L_8013D038
/* 8013D01C 00139F5C  3C 60 80 48 */	lis r3, lbl_8047C720@ha
/* 8013D020 00139F60  3C A0 80 48 */	lis r5, lbl_8047C730@ha
/* 8013D024 00139F64  38 63 C7 20 */	addi r3, r3, lbl_8047C720@l
/* 8013D028 00139F68  38 80 01 E1 */	li r4, 0x1e1
/* 8013D02C 00139F6C  38 A5 C7 30 */	addi r5, r5, lbl_8047C730@l
/* 8013D030 00139F70  4C C6 31 82 */	crclr 6
/* 8013D034 00139F74  4B EE D6 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8013D038:
/* 8013D038 00139F78  80 9C 01 74 */	lwz r4, 0x174(r28)
/* 8013D03C 00139F7C  38 7C 01 C8 */	addi r3, r28, 0x1c8
/* 8013D040 00139F80  48 2E BD 79 */	bl assertValid__Q28SysShape8AnimatorFPQ28SysShape5Model
/* 8013D044 00139F84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013D048 00139F88  40 82 00 20 */	bne .L_8013D068
/* 8013D04C 00139F8C  3C 60 80 48 */	lis r3, lbl_8047C720@ha
/* 8013D050 00139F90  3C A0 80 48 */	lis r5, lbl_8047C730@ha
/* 8013D054 00139F94  38 63 C7 20 */	addi r3, r3, lbl_8047C720@l
/* 8013D058 00139F98  38 80 01 E2 */	li r4, 0x1e2
/* 8013D05C 00139F9C  38 A5 C7 30 */	addi r5, r5, lbl_8047C730@l
/* 8013D060 00139FA0  4C C6 31 82 */	crclr 6
/* 8013D064 00139FA4  4B EE D5 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8013D068:
/* 8013D068 00139FA8  38 00 FF FF */	li r0, -1
/* 8013D06C 00139FAC  2C 1D 00 20 */	cmpwi r29, 0x20
/* 8013D070 00139FB0  90 1C 02 28 */	stw r0, 0x228(r28)
/* 8013D074 00139FB4  40 80 00 1C */	bge .L_8013D090
/* 8013D078 00139FB8  2C 1D 00 15 */	cmpwi r29, 0x15
/* 8013D07C 00139FBC  41 82 00 24 */	beq .L_8013D0A0
/* 8013D080 00139FC0  41 80 00 18 */	blt .L_8013D098
/* 8013D084 00139FC4  2C 1D 00 1C */	cmpwi r29, 0x1c
/* 8013D088 00139FC8  40 80 00 18 */	bge .L_8013D0A0
/* 8013D08C 00139FCC  48 00 00 0C */	b .L_8013D098
.L_8013D090:
/* 8013D090 00139FD0  2C 1D 00 38 */	cmpwi r29, 0x38
/* 8013D094 00139FD4  41 82 00 0C */	beq .L_8013D0A0
.L_8013D098:
/* 8013D098 00139FD8  7F 83 E3 78 */	mr r3, r28
/* 8013D09C 00139FDC  48 00 07 89 */	bl finishLook__Q24Game8FakePikiFv
.L_8013D0A0:
/* 8013D0A0 00139FE0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013D0A4 00139FE4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013D0A8 00139FE8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013D0AC 00139FEC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013D0B0 00139FF0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8013D0B4 00139FF4  7C 08 03 A6 */	mtlr r0
/* 8013D0B8 00139FF8  38 21 00 20 */	addi r1, r1, 0x20
/* 8013D0BC 00139FFC  4E 80 00 20 */	blr 
.endfn startMotion__Q24Game8FakePikiFiiPQ28SysShape14MotionListenerPQ28SysShape14MotionListener

.fn finishMotion__Q24Game8FakePikiFv, global
/* 8013D0C0 0013A000  88 03 01 C4 */	lbz r0, 0x1c4(r3)
/* 8013D0C4 0013A004  60 00 00 02 */	ori r0, r0, 2
/* 8013D0C8 0013A008  98 03 01 C4 */	stb r0, 0x1c4(r3)
/* 8013D0CC 0013A00C  88 03 01 E0 */	lbz r0, 0x1e0(r3)
/* 8013D0D0 0013A010  60 00 00 02 */	ori r0, r0, 2
/* 8013D0D4 0013A014  98 03 01 E0 */	stb r0, 0x1e0(r3)
/* 8013D0D8 0013A018  4E 80 00 20 */	blr 
.endfn finishMotion__Q24Game8FakePikiFv

.fn movieSetFaceDir__Q24Game8FakePikiFf, global
/* 8013D0DC 0013A01C  D0 23 01 FC */	stfs f1, 0x1fc(r3)
/* 8013D0E0 0013A020  4E 80 00 20 */	blr 
.endfn movieSetFaceDir__Q24Game8FakePikiFf

.fn setDoAnimCallback__Q24Game8FakePikiFP9IDelegate, global
/* 8013D0E4 0013A024  90 83 01 88 */	stw r4, 0x188(r3)
/* 8013D0E8 0013A028  4E 80 00 20 */	blr 
.endfn setDoAnimCallback__Q24Game8FakePikiFP9IDelegate

.fn clearDoAnimCallback__Q24Game8FakePikiFv, global
/* 8013D0EC 0013A02C  38 00 00 00 */	li r0, 0
/* 8013D0F0 0013A030  90 03 01 88 */	stw r0, 0x188(r3)
/* 8013D0F4 0013A034  4E 80 00 20 */	blr 
.endfn clearDoAnimCallback__Q24Game8FakePikiFv

.fn updateWalkAnimation__Q24Game8FakePikiFv, global
/* 8013D0F8 0013A038  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8013D0FC 0013A03C  7C 08 02 A6 */	mflr r0
/* 8013D100 0013A040  90 01 00 54 */	stw r0, 0x54(r1)
/* 8013D104 0013A044  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8013D108 0013A048  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8013D10C 0013A04C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8013D110 0013A050  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 8013D114 0013A054  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 8013D118 0013A058  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 8013D11C 0013A05C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013D120 0013A060  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013D124 0013A064  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013D128 0013A068  93 81 00 10 */	stw r28, 0x10(r1)
/* 8013D12C 0013A06C  7C 7F 1B 78 */	mr r31, r3
/* 8013D130 0013A070  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8013D134 0013A074  C0 7F 02 14 */	lfs f3, 0x214(r31)
/* 8013D138 0013A078  C0 3F 02 40 */	lfs f1, 0x240(r31)
/* 8013D13C 0013A07C  C0 5F 02 0C */	lfs f2, 0x20c(r31)
/* 8013D140 0013A080  C0 1F 02 38 */	lfs f0, 0x238(r31)
/* 8013D144 0013A084  EC 63 08 28 */	fsubs f3, f3, f1
/* 8013D148 0013A088  C0 22 9F 54 */	lfs f1, lbl_805182B4@sda21(r2)
/* 8013D14C 0013A08C  EC 02 00 28 */	fsubs f0, f2, f0
/* 8013D150 0013A090  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 8013D154 0013A094  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8013D158 0013A098  EC 00 08 3A */	fmadds f0, f0, f0, f1
/* 8013D15C 0013A09C  EC 03 00 2A */	fadds f0, f3, f0
/* 8013D160 0013A0A0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8013D164 0013A0A4  40 81 00 14 */	ble .L_8013D178
/* 8013D168 0013A0A8  40 81 00 14 */	ble .L_8013D17C
/* 8013D16C 0013A0AC  FC 20 00 34 */	frsqrte f1, f0
/* 8013D170 0013A0B0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013D174 0013A0B4  48 00 00 08 */	b .L_8013D17C
.L_8013D178:
/* 8013D178 0013A0B8  FC 00 08 90 */	fmr f0, f1
.L_8013D17C:
/* 8013D17C 0013A0BC  EF A0 10 24 */	fdivs f29, f0, f2
/* 8013D180 0013A0C0  80 7F 01 D4 */	lwz r3, 0x1d4(r31)
/* 8013D184 0013A0C4  28 03 00 00 */	cmplwi r3, 0
/* 8013D188 0013A0C8  41 82 00 0C */	beq .L_8013D194
/* 8013D18C 0013A0CC  AB C3 00 20 */	lha r30, 0x20(r3)
/* 8013D190 0013A0D0  48 00 00 08 */	b .L_8013D198
.L_8013D194:
/* 8013D194 0013A0D4  3B C0 FF FF */	li r30, -1
.L_8013D198:
/* 8013D198 0013A0D8  80 7F 01 B8 */	lwz r3, 0x1b8(r31)
/* 8013D19C 0013A0DC  38 80 00 00 */	li r4, 0
/* 8013D1A0 0013A0E0  28 03 00 00 */	cmplwi r3, 0
/* 8013D1A4 0013A0E4  41 82 00 0C */	beq .L_8013D1B0
/* 8013D1A8 0013A0E8  A8 03 00 20 */	lha r0, 0x20(r3)
/* 8013D1AC 0013A0EC  48 00 00 08 */	b .L_8013D1B4
.L_8013D1B0:
/* 8013D1B0 0013A0F0  38 00 FF FF */	li r0, -1
.L_8013D1B4:
/* 8013D1B4 0013A0F4  2C 00 00 17 */	cmpwi r0, 0x17
/* 8013D1B8 0013A0F8  40 82 00 08 */	bne .L_8013D1C0
/* 8013D1BC 0013A0FC  38 80 00 01 */	li r4, 1
.L_8013D1C0:
/* 8013D1C0 0013A100  2C 1E 00 1F */	cmpwi r30, 0x1f
/* 8013D1C4 0013A104  41 82 00 30 */	beq .L_8013D1F4
/* 8013D1C8 0013A108  2C 1E 00 1E */	cmpwi r30, 0x1e
/* 8013D1CC 0013A10C  41 82 00 28 */	beq .L_8013D1F4
/* 8013D1D0 0013A110  2C 1E 00 01 */	cmpwi r30, 1
/* 8013D1D4 0013A114  41 82 00 20 */	beq .L_8013D1F4
/* 8013D1D8 0013A118  2C 1E 00 1D */	cmpwi r30, 0x1d
/* 8013D1DC 0013A11C  41 82 00 18 */	beq .L_8013D1F4
/* 8013D1E0 0013A120  2C 1E 00 1C */	cmpwi r30, 0x1c
/* 8013D1E4 0013A124  41 82 00 10 */	beq .L_8013D1F4
/* 8013D1E8 0013A128  C0 02 9F 58 */	lfs f0, lbl_805182B8@sda21(r2)
/* 8013D1EC 0013A12C  D0 1F 02 34 */	stfs f0, 0x234(r31)
/* 8013D1F0 0013A130  48 00 02 8C */	b .L_8013D47C
.L_8013D1F4:
/* 8013D1F4 0013A134  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8013D1F8 0013A138  41 82 00 20 */	beq .L_8013D218
/* 8013D1FC 0013A13C  3C 60 80 48 */	lis r3, lbl_8047C720@ha
/* 8013D200 0013A140  3C A0 80 48 */	lis r5, lbl_8047C73C@ha
/* 8013D204 0013A144  38 63 C7 20 */	addi r3, r3, lbl_8047C720@l
/* 8013D208 0013A148  38 80 02 52 */	li r4, 0x252
/* 8013D20C 0013A14C  38 A5 C7 3C */	addi r5, r5, lbl_8047C73C@l
/* 8013D210 0013A150  4C C6 31 82 */	crclr 6
/* 8013D214 0013A154  4B EE D4 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8013D218:
/* 8013D218 0013A158  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 8013D21C 0013A15C  3B 80 00 00 */	li r28, 0
/* 8013D220 0013A160  C0 1F 02 44 */	lfs f0, 0x244(r31)
/* 8013D224 0013A164  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8013D228 0013A168  EC 21 00 28 */	fsubs f1, f1, f0
/* 8013D22C 0013A16C  C0 03 01 00 */	lfs f0, 0x100(r3)
/* 8013D230 0013A170  FC 20 0A 10 */	fabs f1, f1
/* 8013D234 0013A174  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8013D238 0013A178  FC 20 08 18 */	frsp f1, f1
/* 8013D23C 0013A17C  40 80 00 24 */	bge .L_8013D260
/* 8013D240 0013A180  C0 02 9F 60 */	lfs f0, lbl_805182C0@sda21(r2)
/* 8013D244 0013A184  3B A0 00 1F */	li r29, 0x1f
/* 8013D248 0013A188  C3 A2 9F 58 */	lfs f29, lbl_805182B8@sda21(r2)
/* 8013D24C 0013A18C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013D250 0013A190  40 81 00 9C */	ble .L_8013D2EC
/* 8013D254 0013A194  C3 A2 9F 64 */	lfs f29, lbl_805182C4@sda21(r2)
/* 8013D258 0013A198  3B A0 00 01 */	li r29, 1
/* 8013D25C 0013A19C  48 00 00 90 */	b .L_8013D2EC
.L_8013D260:
/* 8013D260 0013A1A0  C0 23 01 28 */	lfs f1, 0x128(r3)
/* 8013D264 0013A1A4  FC 1D 08 40 */	fcmpo cr0, f29, f1
/* 8013D268 0013A1A8  40 80 00 10 */	bge .L_8013D278
/* 8013D26C 0013A1AC  C3 A2 9F 58 */	lfs f29, lbl_805182B8@sda21(r2)
/* 8013D270 0013A1B0  3B A0 00 01 */	li r29, 1
/* 8013D274 0013A1B4  48 00 00 78 */	b .L_8013D2EC
.L_8013D278:
/* 8013D278 0013A1B8  C0 43 01 50 */	lfs f2, 0x150(r3)
/* 8013D27C 0013A1BC  FC 1D 10 40 */	fcmpo cr0, f29, f2
/* 8013D280 0013A1C0  40 80 00 2C */	bge .L_8013D2AC
/* 8013D284 0013A1C4  EC 7D 08 28 */	fsubs f3, f29, f1
/* 8013D288 0013A1C8  C0 03 01 C8 */	lfs f0, 0x1c8(r3)
/* 8013D28C 0013A1CC  EC 42 08 28 */	fsubs f2, f2, f1
/* 8013D290 0013A1D0  C0 23 01 A0 */	lfs f1, 0x1a0(r3)
/* 8013D294 0013A1D4  7F FC FB 78 */	mr r28, r31
/* 8013D298 0013A1D8  3B A0 00 1E */	li r29, 0x1e
/* 8013D29C 0013A1DC  EC 43 10 24 */	fdivs f2, f3, f2
/* 8013D2A0 0013A1E0  EC 00 08 28 */	fsubs f0, f0, f1
/* 8013D2A4 0013A1E4  EF A2 08 3A */	fmadds f29, f2, f0, f1
/* 8013D2A8 0013A1E8  48 00 00 44 */	b .L_8013D2EC
.L_8013D2AC:
/* 8013D2AC 0013A1EC  C0 23 01 78 */	lfs f1, 0x178(r3)
/* 8013D2B0 0013A1F0  FC 1D 08 40 */	fcmpo cr0, f29, f1
/* 8013D2B4 0013A1F4  40 80 00 2C */	bge .L_8013D2E0
/* 8013D2B8 0013A1F8  EC 7D 10 28 */	fsubs f3, f29, f2
/* 8013D2BC 0013A1FC  C0 03 02 18 */	lfs f0, 0x218(r3)
/* 8013D2C0 0013A200  EC 41 10 28 */	fsubs f2, f1, f2
/* 8013D2C4 0013A204  C0 23 01 F0 */	lfs f1, 0x1f0(r3)
/* 8013D2C8 0013A208  7F FC FB 78 */	mr r28, r31
/* 8013D2CC 0013A20C  3B A0 00 1D */	li r29, 0x1d
/* 8013D2D0 0013A210  EC 43 10 24 */	fdivs f2, f3, f2
/* 8013D2D4 0013A214  EC 00 08 28 */	fsubs f0, f0, f1
/* 8013D2D8 0013A218  EF A2 08 3A */	fmadds f29, f2, f0, f1
/* 8013D2DC 0013A21C  48 00 00 10 */	b .L_8013D2EC
.L_8013D2E0:
/* 8013D2E0 0013A220  C3 A3 02 40 */	lfs f29, 0x240(r3)
/* 8013D2E4 0013A224  7F FC FB 78 */	mr r28, r31
/* 8013D2E8 0013A228  3B A0 00 1C */	li r29, 0x1c
.L_8013D2EC:
/* 8013D2EC 0013A22C  7F E3 FB 78 */	mr r3, r31
/* 8013D2F0 0013A230  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013D2F4 0013A234  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013D2F8 0013A238  7D 89 03 A6 */	mtctr r12
/* 8013D2FC 0013A23C  4E 80 04 21 */	bctrl 
/* 8013D300 0013A240  7C 1D F0 00 */	cmpw r29, r30
/* 8013D304 0013A244  41 82 00 68 */	beq .L_8013D36C
/* 8013D308 0013A248  2C 1E 00 1F */	cmpwi r30, 0x1f
/* 8013D30C 0013A24C  40 82 00 14 */	bne .L_8013D320
/* 8013D310 0013A250  2C 1D 00 01 */	cmpwi r29, 1
/* 8013D314 0013A254  41 82 00 0C */	beq .L_8013D320
/* 8013D318 0013A258  38 00 00 04 */	li r0, 4
/* 8013D31C 0013A25C  90 1F 02 30 */	stw r0, 0x230(r31)
.L_8013D320:
/* 8013D320 0013A260  2C 1E 00 01 */	cmpwi r30, 1
/* 8013D324 0013A264  41 82 00 14 */	beq .L_8013D338
/* 8013D328 0013A268  2C 1D 00 1F */	cmpwi r29, 0x1f
/* 8013D32C 0013A26C  40 82 00 0C */	bne .L_8013D338
/* 8013D330 0013A270  38 00 00 04 */	li r0, 4
/* 8013D334 0013A274  90 1F 02 30 */	stw r0, 0x230(r31)
.L_8013D338:
/* 8013D338 0013A278  80 1F 02 2C */	lwz r0, 0x22c(r31)
/* 8013D33C 0013A27C  7C 1D 00 00 */	cmpw r29, r0
/* 8013D340 0013A280  41 82 00 14 */	beq .L_8013D354
/* 8013D344 0013A284  38 00 00 00 */	li r0, 0
/* 8013D348 0013A288  90 1F 02 30 */	stw r0, 0x230(r31)
/* 8013D34C 0013A28C  93 BF 02 2C */	stw r29, 0x22c(r31)
/* 8013D350 0013A290  48 00 00 10 */	b .L_8013D360
.L_8013D354:
/* 8013D354 0013A294  80 7F 02 30 */	lwz r3, 0x230(r31)
/* 8013D358 0013A298  38 03 00 01 */	addi r0, r3, 1
/* 8013D35C 0013A29C  90 1F 02 30 */	stw r0, 0x230(r31)
.L_8013D360:
/* 8013D360 0013A2A0  80 1F 02 30 */	lwz r0, 0x230(r31)
/* 8013D364 0013A2A4  2C 00 00 04 */	cmpwi r0, 4
/* 8013D368 0013A2A8  41 80 01 14 */	blt .L_8013D47C
.L_8013D36C:
/* 8013D36C 0013A2AC  7C 1E E8 00 */	cmpw r30, r29
/* 8013D370 0013A2B0  41 82 01 08 */	beq .L_8013D478
/* 8013D374 0013A2B4  2C 1E 00 1F */	cmpwi r30, 0x1f
/* 8013D378 0013A2B8  41 82 00 1C */	beq .L_8013D394
/* 8013D37C 0013A2BC  2C 1E 00 01 */	cmpwi r30, 1
/* 8013D380 0013A2C0  41 82 00 14 */	beq .L_8013D394
/* 8013D384 0013A2C4  2C 1D 00 1F */	cmpwi r29, 0x1f
/* 8013D388 0013A2C8  41 82 00 0C */	beq .L_8013D394
/* 8013D38C 0013A2CC  2C 1D 00 01 */	cmpwi r29, 1
/* 8013D390 0013A2D0  40 82 00 60 */	bne .L_8013D3F0
.L_8013D394:
/* 8013D394 0013A2D4  80 1F 02 28 */	lwz r0, 0x228(r31)
/* 8013D398 0013A2D8  2C 00 FF FF */	cmpwi r0, -1
/* 8013D39C 0013A2DC  40 82 00 34 */	bne .L_8013D3D0
/* 8013D3A0 0013A2E0  7F A4 EB 78 */	mr r4, r29
/* 8013D3A4 0013A2E4  38 7F 01 AC */	addi r3, r31, 0x1ac
/* 8013D3A8 0013A2E8  38 A0 00 00 */	li r5, 0
/* 8013D3AC 0013A2EC  48 2E B8 DD */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8013D3B0 0013A2F0  28 1C 00 00 */	cmplwi r28, 0
/* 8013D3B4 0013A2F4  7F 85 E3 78 */	mr r5, r28
/* 8013D3B8 0013A2F8  41 82 00 08 */	beq .L_8013D3C0
/* 8013D3BC 0013A2FC  38 BC 01 78 */	addi r5, r28, 0x178
.L_8013D3C0:
/* 8013D3C0 0013A300  7F A4 EB 78 */	mr r4, r29
/* 8013D3C4 0013A304  38 7F 01 C8 */	addi r3, r31, 0x1c8
/* 8013D3C8 0013A308  48 2E B8 C1 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8013D3CC 0013A30C  48 00 00 AC */	b .L_8013D478
.L_8013D3D0:
/* 8013D3D0 0013A310  28 1C 00 00 */	cmplwi r28, 0
/* 8013D3D4 0013A314  7F 85 E3 78 */	mr r5, r28
/* 8013D3D8 0013A318  41 82 00 08 */	beq .L_8013D3E0
/* 8013D3DC 0013A31C  38 BC 01 78 */	addi r5, r28, 0x178
.L_8013D3E0:
/* 8013D3E0 0013A320  7F A4 EB 78 */	mr r4, r29
/* 8013D3E4 0013A324  38 7F 01 C8 */	addi r3, r31, 0x1c8
/* 8013D3E8 0013A328  48 2E B8 A1 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8013D3EC 0013A32C  48 00 00 8C */	b .L_8013D478
.L_8013D3F0:
/* 8013D3F0 0013A330  80 1F 02 28 */	lwz r0, 0x228(r31)
/* 8013D3F4 0013A334  2C 00 FF FF */	cmpwi r0, -1
/* 8013D3F8 0013A338  40 82 00 54 */	bne .L_8013D44C
/* 8013D3FC 0013A33C  28 1C 00 00 */	cmplwi r28, 0
/* 8013D400 0013A340  C3 FF 01 D0 */	lfs f31, 0x1d0(r31)
/* 8013D404 0013A344  C3 DF 01 B4 */	lfs f30, 0x1b4(r31)
/* 8013D408 0013A348  7F 85 E3 78 */	mr r5, r28
/* 8013D40C 0013A34C  41 82 00 08 */	beq .L_8013D414
/* 8013D410 0013A350  38 BC 01 78 */	addi r5, r28, 0x178
.L_8013D414:
/* 8013D414 0013A354  7F A4 EB 78 */	mr r4, r29
/* 8013D418 0013A358  38 7F 01 C8 */	addi r3, r31, 0x1c8
/* 8013D41C 0013A35C  48 2E B8 6D */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8013D420 0013A360  FC 20 F8 90 */	fmr f1, f31
/* 8013D424 0013A364  38 7F 01 C8 */	addi r3, r31, 0x1c8
/* 8013D428 0013A368  48 2E B9 99 */	bl setCurrFrame__Q28SysShape8AnimatorFf
/* 8013D42C 0013A36C  7F A4 EB 78 */	mr r4, r29
/* 8013D430 0013A370  38 7F 01 AC */	addi r3, r31, 0x1ac
/* 8013D434 0013A374  38 A0 00 00 */	li r5, 0
/* 8013D438 0013A378  48 2E B8 51 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8013D43C 0013A37C  FC 20 F0 90 */	fmr f1, f30
/* 8013D440 0013A380  38 7F 01 AC */	addi r3, r31, 0x1ac
/* 8013D444 0013A384  48 2E B9 7D */	bl setCurrFrame__Q28SysShape8AnimatorFf
/* 8013D448 0013A388  48 00 00 30 */	b .L_8013D478
.L_8013D44C:
/* 8013D44C 0013A38C  28 1C 00 00 */	cmplwi r28, 0
/* 8013D450 0013A390  C3 DF 01 D0 */	lfs f30, 0x1d0(r31)
/* 8013D454 0013A394  7F 85 E3 78 */	mr r5, r28
/* 8013D458 0013A398  41 82 00 08 */	beq .L_8013D460
/* 8013D45C 0013A39C  38 BC 01 78 */	addi r5, r28, 0x178
.L_8013D460:
/* 8013D460 0013A3A0  7F A4 EB 78 */	mr r4, r29
/* 8013D464 0013A3A4  38 7F 01 C8 */	addi r3, r31, 0x1c8
/* 8013D468 0013A3A8  48 2E B8 21 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8013D46C 0013A3AC  FC 20 F0 90 */	fmr f1, f30
/* 8013D470 0013A3B0  38 7F 01 C8 */	addi r3, r31, 0x1c8
/* 8013D474 0013A3B4  48 2E B9 4D */	bl setCurrFrame__Q28SysShape8AnimatorFf
.L_8013D478:
/* 8013D478 0013A3B8  D3 BF 02 34 */	stfs f29, 0x234(r31)
.L_8013D47C:
/* 8013D47C 0013A3BC  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8013D480 0013A3C0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8013D484 0013A3C4  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 8013D488 0013A3C8  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8013D48C 0013A3CC  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 8013D490 0013A3D0  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 8013D494 0013A3D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013D498 0013A3D8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013D49C 0013A3DC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013D4A0 0013A3E0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8013D4A4 0013A3E4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8013D4A8 0013A3E8  7C 08 03 A6 */	mtlr r0
/* 8013D4AC 0013A3EC  38 21 00 50 */	addi r1, r1, 0x50
/* 8013D4B0 0013A3F0  4E 80 00 20 */	blr 
.endfn updateWalkAnimation__Q24Game8FakePikiFv

.fn sNeckCallback__Q24Game8FakePikiFP8J3DJointi, global
/* 8013D4B4 0013A3F4  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8013D4B8 0013A3F8  7C 08 02 A6 */	mflr r0
/* 8013D4BC 0013A3FC  2C 04 00 00 */	cmpwi r4, 0
/* 8013D4C0 0013A400  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8013D4C4 0013A404  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 8013D4C8 0013A408  40 82 02 10 */	bne .L_8013D6D8
/* 8013D4CC 0013A40C  80 8D 93 EC */	lwz r4, mInstance__Q24Game18OptimiseController@sda21(r13)
/* 8013D4D0 0013A410  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 8013D4D4 0013A414  28 00 00 00 */	cmplwi r0, 0
/* 8013D4D8 0013A418  41 82 02 00 */	beq .L_8013D6D8
/* 8013D4DC 0013A41C  C0 4D 92 8C */	lfs f2, sCurrNeckPhi__Q24Game8FakePiki@sda21(r13)
/* 8013D4E0 0013A420  A0 03 00 14 */	lhz r0, 0x14(r3)
/* 8013D4E4 0013A424  FC 20 10 50 */	fneg f1, f2
/* 8013D4E8 0013A428  80 6D 89 88 */	lwz r3, mMtxBuffer__10J3DMtxCalc@sda21(r13)
/* 8013D4EC 0013A42C  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013D4F0 0013A430  1C 00 00 30 */	mulli r0, r0, 0x30
/* 8013D4F4 0013A434  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8013D4F8 0013A438  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013D4FC 0013A43C  C0 6D 92 88 */	lfs f3, sCurrNeckTheta__Q24Game8FakePiki@sda21(r13)
/* 8013D500 0013A440  7F E3 02 14 */	add r31, r3, r0
/* 8013D504 0013A444  40 80 00 30 */	bge .L_8013D534
/* 8013D508 0013A448  C0 02 9F 68 */	lfs f0, lbl_805182C8@sda21(r2)
/* 8013D50C 0013A44C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8013D510 0013A450  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8013D514 0013A454  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013D518 0013A458  FC 00 00 1E */	fctiwz f0, f0
/* 8013D51C 0013A45C  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 8013D520 0013A460  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 8013D524 0013A464  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8013D528 0013A468  7C 03 04 2E */	lfsx f0, r3, r0
/* 8013D52C 0013A46C  FC C0 00 50 */	fneg f6, f0
/* 8013D530 0013A470  48 00 00 28 */	b .L_8013D558
.L_8013D534:
/* 8013D534 0013A474  C0 02 9F 6C */	lfs f0, lbl_805182CC@sda21(r2)
/* 8013D538 0013A478  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8013D53C 0013A47C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8013D540 0013A480  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013D544 0013A484  FC 00 00 1E */	fctiwz f0, f0
/* 8013D548 0013A488  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 8013D54C 0013A48C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8013D550 0013A490  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8013D554 0013A494  7C C3 04 2E */	lfsx f6, r3, r0
.L_8013D558:
/* 8013D558 0013A498  FC 20 10 50 */	fneg f1, f2
/* 8013D55C 0013A49C  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013D560 0013A4A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013D564 0013A4A4  40 80 00 08 */	bge .L_8013D56C
/* 8013D568 0013A4A8  FC 20 08 50 */	fneg f1, f1
.L_8013D56C:
/* 8013D56C 0013A4AC  C0 42 9F 6C */	lfs f2, lbl_805182CC@sda21(r2)
/* 8013D570 0013A4B0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8013D574 0013A4B4  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013D578 0013A4B8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8013D57C 0013A4BC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8013D580 0013A4C0  38 C3 00 04 */	addi r6, r3, 4
/* 8013D584 0013A4C4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8013D588 0013A4C8  FC 00 08 1E */	fctiwz f0, f1
/* 8013D58C 0013A4CC  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 8013D590 0013A4D0  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 8013D594 0013A4D4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8013D598 0013A4D8  7C E6 04 2E */	lfsx f7, r6, r0
/* 8013D59C 0013A4DC  40 80 00 28 */	bge .L_8013D5C4
/* 8013D5A0 0013A4E0  C0 02 9F 68 */	lfs f0, lbl_805182C8@sda21(r2)
/* 8013D5A4 0013A4E4  EC 03 00 32 */	fmuls f0, f3, f0
/* 8013D5A8 0013A4E8  FC 00 00 1E */	fctiwz f0, f0
/* 8013D5AC 0013A4EC  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 8013D5B0 0013A4F0  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8013D5B4 0013A4F4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8013D5B8 0013A4F8  7C 03 04 2E */	lfsx f0, r3, r0
/* 8013D5BC 0013A4FC  FD 00 00 50 */	fneg f8, f0
/* 8013D5C0 0013A500  48 00 00 1C */	b .L_8013D5DC
.L_8013D5C4:
/* 8013D5C4 0013A504  EC 03 00 B2 */	fmuls f0, f3, f2
/* 8013D5C8 0013A508  FC 00 00 1E */	fctiwz f0, f0
/* 8013D5CC 0013A50C  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 8013D5D0 0013A510  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 8013D5D4 0013A514  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8013D5D8 0013A518  7D 03 04 2E */	lfsx f8, r3, r0
.L_8013D5DC:
/* 8013D5DC 0013A51C  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013D5E0 0013A520  FC 20 18 90 */	fmr f1, f3
/* 8013D5E4 0013A524  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8013D5E8 0013A528  40 80 00 08 */	bge .L_8013D5F0
/* 8013D5EC 0013A52C  FC 20 18 50 */	fneg f1, f3
.L_8013D5F0:
/* 8013D5F0 0013A530  C0 02 9F 6C */	lfs f0, lbl_805182CC@sda21(r2)
/* 8013D5F4 0013A534  FC 80 30 50 */	fneg f4, f6
/* 8013D5F8 0013A538  C0 62 9F 54 */	lfs f3, lbl_805182B4@sda21(r2)
/* 8013D5FC 0013A53C  FC 40 40 50 */	fneg f2, f8
/* 8013D600 0013A540  EC A1 00 32 */	fmuls f5, f1, f0
/* 8013D604 0013A544  D0 E1 00 38 */	stfs f7, 0x38(r1)
/* 8013D608 0013A548  EC 28 01 B2 */	fmuls f1, f8, f6
/* 8013D60C 0013A54C  D0 81 00 3C */	stfs f4, 0x3c(r1)
/* 8013D610 0013A550  EC 08 01 F2 */	fmuls f0, f8, f7
/* 8013D614 0013A554  FC 80 28 1E */	fctiwz f4, f5
/* 8013D618 0013A558  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 8013D61C 0013A55C  7F E5 FB 78 */	mr r5, r31
/* 8013D620 0013A560  38 61 00 08 */	addi r3, r1, 8
/* 8013D624 0013A564  38 81 00 38 */	addi r4, r1, 0x38
/* 8013D628 0013A568  D8 81 00 90 */	stfd f4, 0x90(r1)
/* 8013D62C 0013A56C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8013D630 0013A570  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 8013D634 0013A574  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8013D638 0013A578  7C 86 04 2E */	lfsx f4, r6, r0
/* 8013D63C 0013A57C  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 8013D640 0013A580  EC 44 01 B2 */	fmuls f2, f4, f6
/* 8013D644 0013A584  EC 24 01 F2 */	fmuls f1, f4, f7
/* 8013D648 0013A588  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 8013D64C 0013A58C  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 8013D650 0013A590  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 8013D654 0013A594  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 8013D658 0013A598  D0 61 00 44 */	stfs f3, 0x44(r1)
/* 8013D65C 0013A59C  D0 61 00 54 */	stfs f3, 0x54(r1)
/* 8013D660 0013A5A0  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 8013D664 0013A5A4  80 DF 00 00 */	lwz r6, 0(r31)
/* 8013D668 0013A5A8  80 1F 00 04 */	lwz r0, 4(r31)
/* 8013D66C 0013A5AC  90 C1 00 08 */	stw r6, 8(r1)
/* 8013D670 0013A5B0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D674 0013A5B4  80 DF 00 08 */	lwz r6, 8(r31)
/* 8013D678 0013A5B8  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8013D67C 0013A5BC  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8013D680 0013A5C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013D684 0013A5C4  80 DF 00 10 */	lwz r6, 0x10(r31)
/* 8013D688 0013A5C8  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 8013D68C 0013A5CC  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8013D690 0013A5D0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8013D694 0013A5D4  80 DF 00 18 */	lwz r6, 0x18(r31)
/* 8013D698 0013A5D8  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8013D69C 0013A5DC  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8013D6A0 0013A5E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013D6A4 0013A5E4  80 DF 00 20 */	lwz r6, 0x20(r31)
/* 8013D6A8 0013A5E8  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 8013D6AC 0013A5EC  90 C1 00 28 */	stw r6, 0x28(r1)
/* 8013D6B0 0013A5F0  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8013D6B4 0013A5F4  80 DF 00 28 */	lwz r6, 0x28(r31)
/* 8013D6B8 0013A5F8  80 1F 00 2C */	lwz r0, 0x2c(r31)
/* 8013D6BC 0013A5FC  90 C1 00 30 */	stw r6, 0x30(r1)
/* 8013D6C0 0013A600  90 01 00 34 */	stw r0, 0x34(r1)
/* 8013D6C4 0013A604  4B FA CC 3D */	bl PSMTXConcat
/* 8013D6C8 0013A608  3C 80 80 51 */	lis r4, mCurrentMtx__6J3DSys@ha
/* 8013D6CC 0013A60C  7F E3 FB 78 */	mr r3, r31
/* 8013D6D0 0013A610  38 84 F3 D4 */	addi r4, r4, mCurrentMtx__6J3DSys@l
/* 8013D6D4 0013A614  4B FA CB F9 */	bl PSMTXCopy
.L_8013D6D8:
/* 8013D6D8 0013A618  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8013D6DC 0013A61C  38 60 00 00 */	li r3, 0
/* 8013D6E0 0013A620  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 8013D6E4 0013A624  7C 08 03 A6 */	mtlr r0
/* 8013D6E8 0013A628  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8013D6EC 0013A62C  4E 80 00 20 */	blr 
.endfn sNeckCallback__Q24Game8FakePikiFP8J3DJointi

.fn startLookCreature__Q24Game8FakePikiFPQ24Game8Creature, global
/* 8013D6F0 0013A630  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013D6F4 0013A634  7C 08 02 A6 */	mflr r0
/* 8013D6F8 0013A638  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013D6FC 0013A63C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013D700 0013A640  7C 9F 23 78 */	mr r31, r4
/* 8013D704 0013A644  93 C1 00 08 */	stw r30, 8(r1)
/* 8013D708 0013A648  7C 7E 1B 78 */	mr r30, r3
/* 8013D70C 0013A64C  80 63 01 B8 */	lwz r3, 0x1b8(r3)
/* 8013D710 0013A650  28 03 00 00 */	cmplwi r3, 0
/* 8013D714 0013A654  41 82 00 0C */	beq .L_8013D720
/* 8013D718 0013A658  A8 03 00 20 */	lha r0, 0x20(r3)
/* 8013D71C 0013A65C  48 00 00 08 */	b .L_8013D724
.L_8013D720:
/* 8013D720 0013A660  38 00 FF FF */	li r0, -1
.L_8013D724:
/* 8013D724 0013A664  2C 00 00 20 */	cmpwi r0, 0x20
/* 8013D728 0013A668  40 80 00 1C */	bge .L_8013D744
/* 8013D72C 0013A66C  2C 00 00 15 */	cmpwi r0, 0x15
/* 8013D730 0013A670  41 82 00 28 */	beq .L_8013D758
/* 8013D734 0013A674  41 80 00 18 */	blt .L_8013D74C
/* 8013D738 0013A678  2C 00 00 1C */	cmpwi r0, 0x1c
/* 8013D73C 0013A67C  40 80 00 1C */	bge .L_8013D758
/* 8013D740 0013A680  48 00 00 0C */	b .L_8013D74C
.L_8013D744:
/* 8013D744 0013A684  2C 00 00 38 */	cmpwi r0, 0x38
/* 8013D748 0013A688  41 82 00 10 */	beq .L_8013D758
.L_8013D74C:
/* 8013D74C 0013A68C  7F C3 F3 78 */	mr r3, r30
/* 8013D750 0013A690  48 00 00 D5 */	bl finishLook__Q24Game8FakePikiFv
/* 8013D754 0013A694  48 00 00 44 */	b .L_8013D798
.L_8013D758:
/* 8013D758 0013A698  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8013D75C 0013A69C  28 03 00 00 */	cmplwi r3, 0
/* 8013D760 0013A6A0  41 82 00 28 */	beq .L_8013D788
/* 8013D764 0013A6A4  4B FF 93 B9 */	bl getRandomCollPart__8CollTreeFv
/* 8013D768 0013A6A8  28 03 00 00 */	cmplwi r3, 0
/* 8013D76C 0013A6AC  41 82 00 1C */	beq .L_8013D788
/* 8013D770 0013A6B0  93 FE 01 A8 */	stw r31, 0x1a8(r30)
/* 8013D774 0013A6B4  38 63 00 4C */	addi r3, r3, 0x4c
/* 8013D778 0013A6B8  38 00 00 00 */	li r0, 0
/* 8013D77C 0013A6BC  90 7E 01 A0 */	stw r3, 0x1a0(r30)
/* 8013D780 0013A6C0  98 1E 01 A4 */	stb r0, 0x1a4(r30)
/* 8013D784 0013A6C4  48 00 00 14 */	b .L_8013D798
.L_8013D788:
/* 8013D788 0013A6C8  38 00 00 00 */	li r0, 0
/* 8013D78C 0013A6CC  7F C3 F3 78 */	mr r3, r30
/* 8013D790 0013A6D0  90 1E 01 A8 */	stw r0, 0x1a8(r30)
/* 8013D794 0013A6D4  48 00 00 91 */	bl finishLook__Q24Game8FakePikiFv
.L_8013D798:
/* 8013D798 0013A6D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013D79C 0013A6DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013D7A0 0013A6E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013D7A4 0013A6E4  7C 08 03 A6 */	mtlr r0
/* 8013D7A8 0013A6E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8013D7AC 0013A6EC  4E 80 00 20 */	blr 
.endfn startLookCreature__Q24Game8FakePikiFPQ24Game8Creature

.fn updateLookCreature__Q24Game8FakePikiFv, global
/* 8013D7B0 0013A6F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013D7B4 0013A6F4  7C 08 02 A6 */	mflr r0
/* 8013D7B8 0013A6F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013D7BC 0013A6FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013D7C0 0013A700  7C 7F 1B 78 */	mr r31, r3
/* 8013D7C4 0013A704  80 63 01 A8 */	lwz r3, 0x1a8(r3)
/* 8013D7C8 0013A708  28 03 00 00 */	cmplwi r3, 0
/* 8013D7CC 0013A70C  41 82 00 2C */	beq .L_8013D7F8
/* 8013D7D0 0013A710  81 83 00 00 */	lwz r12, 0(r3)
/* 8013D7D4 0013A714  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8013D7D8 0013A718  7D 89 03 A6 */	mtctr r12
/* 8013D7DC 0013A71C  4E 80 04 21 */	bctrl 
/* 8013D7E0 0013A720  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013D7E4 0013A724  40 82 00 14 */	bne .L_8013D7F8
/* 8013D7E8 0013A728  38 00 00 00 */	li r0, 0
/* 8013D7EC 0013A72C  7F E3 FB 78 */	mr r3, r31
/* 8013D7F0 0013A730  90 1F 01 A8 */	stw r0, 0x1a8(r31)
/* 8013D7F4 0013A734  48 00 00 31 */	bl finishLook__Q24Game8FakePikiFv
.L_8013D7F8:
/* 8013D7F8 0013A738  7F E3 FB 78 */	mr r3, r31
/* 8013D7FC 0013A73C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013D800 0013A740  81 8C 02 14 */	lwz r12, 0x214(r12)
/* 8013D804 0013A744  7D 89 03 A6 */	mtctr r12
/* 8013D808 0013A748  4E 80 04 21 */	bctrl 
/* 8013D80C 0013A74C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013D810 0013A750  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013D814 0013A754  7C 08 03 A6 */	mtlr r0
/* 8013D818 0013A758  38 21 00 10 */	addi r1, r1, 0x10
/* 8013D81C 0013A75C  4E 80 00 20 */	blr 
.endfn updateLookCreature__Q24Game8FakePikiFv

.fn do_updateLookCreature__Q24Game8FakePikiFv, global
/* 8013D820 0013A760  4E 80 00 20 */	blr 
.endfn do_updateLookCreature__Q24Game8FakePikiFv

.fn finishLook__Q24Game8FakePikiFv, global
/* 8013D824 0013A764  38 80 00 00 */	li r4, 0
/* 8013D828 0013A768  38 00 00 0A */	li r0, 0xa
/* 8013D82C 0013A76C  90 83 01 A0 */	stw r4, 0x1a0(r3)
/* 8013D830 0013A770  98 03 01 A4 */	stb r0, 0x1a4(r3)
/* 8013D834 0013A774  90 83 01 A8 */	stw r4, 0x1a8(r3)
/* 8013D838 0013A778  4E 80 00 20 */	blr 
.endfn finishLook__Q24Game8FakePikiFv

.fn updateLook__Q24Game8FakePikiFv, global
/* 8013D83C 0013A77C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8013D840 0013A780  7C 08 02 A6 */	mflr r0
/* 8013D844 0013A784  90 01 00 54 */	stw r0, 0x54(r1)
/* 8013D848 0013A788  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8013D84C 0013A78C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8013D850 0013A790  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8013D854 0013A794  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 8013D858 0013A798  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 8013D85C 0013A79C  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 8013D860 0013A7A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013D864 0013A7A4  7C 7F 1B 78 */	mr r31, r3
/* 8013D868 0013A7A8  80 03 01 A0 */	lwz r0, 0x1a0(r3)
/* 8013D86C 0013A7AC  28 00 00 00 */	cmplwi r0, 0
/* 8013D870 0013A7B0  41 82 00 9C */	beq .L_8013D90C
/* 8013D874 0013A7B4  7F E4 FB 78 */	mr r4, r31
/* 8013D878 0013A7B8  38 61 00 08 */	addi r3, r1, 8
/* 8013D87C 0013A7BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013D880 0013A7C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013D884 0013A7C4  7D 89 03 A6 */	mtctr r12
/* 8013D888 0013A7C8  4E 80 04 21 */	bctrl 
/* 8013D88C 0013A7CC  80 9F 01 A0 */	lwz r4, 0x1a0(r31)
/* 8013D890 0013A7D0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8013D894 0013A7D4  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8013D898 0013A7D8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8013D89C 0013A7DC  C0 64 00 08 */	lfs f3, 8(r4)
/* 8013D8A0 0013A7E0  C0 24 00 00 */	lfs f1, 0(r4)
/* 8013D8A4 0013A7E4  EF A3 10 28 */	fsubs f29, f3, f2
/* 8013D8A8 0013A7E8  C0 01 00 08 */	lfs f0, 8(r1)
/* 8013D8AC 0013A7EC  C0 64 00 04 */	lfs f3, 4(r4)
/* 8013D8B0 0013A7F0  EF E1 00 28 */	fsubs f31, f1, f0
/* 8013D8B4 0013A7F4  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8013D8B8 0013A7F8  FC 40 E8 90 */	fmr f2, f29
/* 8013D8BC 0013A7FC  EF C3 00 28 */	fsubs f30, f3, f0
/* 8013D8C0 0013A800  FC 20 F8 90 */	fmr f1, f31
/* 8013D8C4 0013A804  4B EF 78 45 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8013D8C8 0013A808  EC 5D 07 72 */	fmuls f2, f29, f29
/* 8013D8CC 0013A80C  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013D8D0 0013A810  FF A0 08 90 */	fmr f29, f1
/* 8013D8D4 0013A814  EC 5F 17 FA */	fmadds f2, f31, f31, f2
/* 8013D8D8 0013A818  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013D8DC 0013A81C  40 81 00 14 */	ble .L_8013D8F0
/* 8013D8E0 0013A820  40 81 00 14 */	ble .L_8013D8F4
/* 8013D8E4 0013A824  FC 00 10 34 */	frsqrte f0, f2
/* 8013D8E8 0013A828  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8013D8EC 0013A82C  48 00 00 08 */	b .L_8013D8F4
.L_8013D8F0:
/* 8013D8F0 0013A830  FC 40 00 90 */	fmr f2, f0
.L_8013D8F4:
/* 8013D8F4 0013A834  FC 20 F0 90 */	fmr f1, f30
/* 8013D8F8 0013A838  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8013D8FC 0013A83C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8013D900 0013A840  4B EF 78 09 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8013D904 0013A844  FF E0 08 90 */	fmr f31, f1
/* 8013D908 0013A848  48 00 00 8C */	b .L_8013D994
.L_8013D90C:
/* 8013D90C 0013A84C  C0 22 9F 54 */	lfs f1, lbl_805182B4@sda21(r2)
/* 8013D910 0013A850  C0 5F 01 98 */	lfs f2, 0x198(r31)
/* 8013D914 0013A854  48 2D 42 E9 */	bl angDist__Fff
/* 8013D918 0013A858  C0 42 9F 70 */	lfs f2, lbl_805182D0@sda21(r2)
/* 8013D91C 0013A85C  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8013D920 0013A860  EC 21 00 BA */	fmadds f1, f1, f2, f0
/* 8013D924 0013A864  48 2D 42 AD */	bl roundAng__Ff
/* 8013D928 0013A868  D0 3F 01 98 */	stfs f1, 0x198(r31)
/* 8013D92C 0013A86C  C0 22 9F 54 */	lfs f1, lbl_805182B4@sda21(r2)
/* 8013D930 0013A870  C0 5F 01 9C */	lfs f2, 0x19c(r31)
/* 8013D934 0013A874  48 2D 42 C9 */	bl angDist__Fff
/* 8013D938 0013A878  C0 42 9F 70 */	lfs f2, lbl_805182D0@sda21(r2)
/* 8013D93C 0013A87C  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8013D940 0013A880  EC 21 00 BA */	fmadds f1, f1, f2, f0
/* 8013D944 0013A884  48 2D 42 8D */	bl roundAng__Ff
/* 8013D948 0013A888  D0 3F 01 9C */	stfs f1, 0x19c(r31)
/* 8013D94C 0013A88C  C0 22 9F 74 */	lfs f1, lbl_805182D4@sda21(r2)
/* 8013D950 0013A890  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8013D954 0013A894  FC 00 02 10 */	fabs f0, f0
/* 8013D958 0013A898  FC 00 00 18 */	frsp f0, f0
/* 8013D95C 0013A89C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8013D960 0013A8A0  40 80 02 48 */	bge .L_8013DBA8
/* 8013D964 0013A8A4  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8013D968 0013A8A8  FC 00 02 10 */	fabs f0, f0
/* 8013D96C 0013A8AC  FC 00 00 18 */	frsp f0, f0
/* 8013D970 0013A8B0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8013D974 0013A8B4  40 80 02 34 */	bge .L_8013DBA8
/* 8013D978 0013A8B8  38 00 00 00 */	li r0, 0
/* 8013D97C 0013A8BC  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013D980 0013A8C0  90 1F 01 A0 */	stw r0, 0x1a0(r31)
/* 8013D984 0013A8C4  D0 1F 01 9C */	stfs f0, 0x19c(r31)
/* 8013D988 0013A8C8  D0 1F 01 98 */	stfs f0, 0x198(r31)
/* 8013D98C 0013A8CC  98 1F 01 A4 */	stb r0, 0x1a4(r31)
/* 8013D990 0013A8D0  48 00 02 18 */	b .L_8013DBA8
.L_8013D994:
/* 8013D994 0013A8D4  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 8013D998 0013A8D8  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8013D99C 0013A8DC  EC 21 00 2A */	fadds f1, f1, f0
/* 8013D9A0 0013A8E0  48 2D 42 31 */	bl roundAng__Ff
/* 8013D9A4 0013A8E4  FC 40 08 90 */	fmr f2, f1
/* 8013D9A8 0013A8E8  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8013D9AC 0013A8EC  EC 3D 00 28 */	fsubs f1, f29, f0
/* 8013D9B0 0013A8F0  FF C0 10 90 */	fmr f30, f2
/* 8013D9B4 0013A8F4  48 2D 42 1D */	bl roundAng__Ff
/* 8013D9B8 0013A8F8  C0 02 9F 78 */	lfs f0, lbl_805182D8@sda21(r2)
/* 8013D9BC 0013A8FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013D9C0 0013A900  40 80 00 30 */	bge .L_8013D9F0
/* 8013D9C4 0013A904  C0 5F 01 98 */	lfs f2, 0x198(r31)
/* 8013D9C8 0013A908  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013D9CC 0013A90C  40 81 00 14 */	ble .L_8013D9E0
/* 8013D9D0 0013A910  EC 02 08 28 */	fsubs f0, f2, f1
/* 8013D9D4 0013A914  C0 22 9F 7C */	lfs f1, lbl_805182DC@sda21(r2)
/* 8013D9D8 0013A918  EC 21 00 28 */	fsubs f1, f1, f0
/* 8013D9DC 0013A91C  48 00 00 48 */	b .L_8013DA24
.L_8013D9E0:
/* 8013D9E0 0013A920  FC 20 E8 90 */	fmr f1, f29
/* 8013D9E4 0013A924  FC 40 F0 90 */	fmr f2, f30
/* 8013D9E8 0013A928  48 2D 42 15 */	bl angDist__Fff
/* 8013D9EC 0013A92C  48 00 00 38 */	b .L_8013DA24
.L_8013D9F0:
/* 8013D9F0 0013A930  C0 5F 01 98 */	lfs f2, 0x198(r31)
/* 8013D9F4 0013A934  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013D9F8 0013A938  4C 40 13 82 */	cror 2, 0, 2
/* 8013D9FC 0013A93C  40 82 00 1C */	bne .L_8013DA18
/* 8013DA00 0013A940  EC 22 08 28 */	fsubs f1, f2, f1
/* 8013DA04 0013A944  C0 42 9F 7C */	lfs f2, lbl_805182DC@sda21(r2)
/* 8013DA08 0013A948  C0 02 9F 80 */	lfs f0, lbl_805182E0@sda21(r2)
/* 8013DA0C 0013A94C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8013DA10 0013A950  EC 21 00 32 */	fmuls f1, f1, f0
/* 8013DA14 0013A954  48 00 00 10 */	b .L_8013DA24
.L_8013DA18:
/* 8013DA18 0013A958  FC 20 E8 90 */	fmr f1, f29
/* 8013DA1C 0013A95C  FC 40 F0 90 */	fmr f2, f30
/* 8013DA20 0013A960  48 2D 41 DD */	bl angDist__Fff
.L_8013DA24:
/* 8013DA24 0013A964  FC 40 0A 10 */	fabs f2, f1
/* 8013DA28 0013A968  C0 02 9F 84 */	lfs f0, lbl_805182E4@sda21(r2)
/* 8013DA2C 0013A96C  FC 40 10 18 */	frsp f2, f2
/* 8013DA30 0013A970  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013DA34 0013A974  40 80 00 08 */	bge .L_8013DA3C
/* 8013DA38 0013A978  C0 22 9F 54 */	lfs f1, lbl_805182B4@sda21(r2)
.L_8013DA3C:
/* 8013DA3C 0013A97C  C0 02 9F 88 */	lfs f0, lbl_805182E8@sda21(r2)
/* 8013DA40 0013A980  C0 42 9F 8C */	lfs f2, lbl_805182EC@sda21(r2)
/* 8013DA44 0013A984  EC 21 00 32 */	fmuls f1, f1, f0
/* 8013DA48 0013A988  FC 00 0A 10 */	fabs f0, f1
/* 8013DA4C 0013A98C  FC 00 00 18 */	frsp f0, f0
/* 8013DA50 0013A990  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8013DA54 0013A994  40 81 00 1C */	ble .L_8013DA70
/* 8013DA58 0013A998  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013DA5C 0013A99C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013DA60 0013A9A0  40 81 00 0C */	ble .L_8013DA6C
/* 8013DA64 0013A9A4  FC 20 10 90 */	fmr f1, f2
/* 8013DA68 0013A9A8  48 00 00 08 */	b .L_8013DA70
.L_8013DA6C:
/* 8013DA6C 0013A9AC  C0 22 9F 90 */	lfs f1, lbl_805182F0@sda21(r2)
.L_8013DA70:
/* 8013DA70 0013A9B0  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8013DA74 0013A9B4  EC 20 08 2A */	fadds f1, f0, f1
/* 8013DA78 0013A9B8  48 2D 41 59 */	bl roundAng__Ff
/* 8013DA7C 0013A9BC  D0 3F 01 98 */	stfs f1, 0x198(r31)
/* 8013DA80 0013A9C0  C0 22 9F 94 */	lfs f1, lbl_805182F4@sda21(r2)
/* 8013DA84 0013A9C4  C0 5F 01 98 */	lfs f2, 0x198(r31)
/* 8013DA88 0013A9C8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8013DA8C 0013A9CC  40 81 00 18 */	ble .L_8013DAA4
/* 8013DA90 0013A9D0  C0 02 9F 78 */	lfs f0, lbl_805182D8@sda21(r2)
/* 8013DA94 0013A9D4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013DA98 0013A9D8  40 80 00 0C */	bge .L_8013DAA4
/* 8013DA9C 0013A9DC  D0 3F 01 98 */	stfs f1, 0x198(r31)
/* 8013DAA0 0013A9E0  48 00 00 24 */	b .L_8013DAC4
.L_8013DAA4:
/* 8013DAA4 0013A9E4  C0 22 9F 98 */	lfs f1, lbl_805182F8@sda21(r2)
/* 8013DAA8 0013A9E8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8013DAAC 0013A9EC  40 80 00 18 */	bge .L_8013DAC4
/* 8013DAB0 0013A9F0  C0 02 9F 78 */	lfs f0, lbl_805182D8@sda21(r2)
/* 8013DAB4 0013A9F4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013DAB8 0013A9F8  4C 41 13 82 */	cror 2, 1, 2
/* 8013DABC 0013A9FC  40 82 00 08 */	bne .L_8013DAC4
/* 8013DAC0 0013AA00  D0 3F 01 98 */	stfs f1, 0x198(r31)
.L_8013DAC4:
/* 8013DAC4 0013AA04  FC 20 F8 90 */	fmr f1, f31
/* 8013DAC8 0013AA08  C0 5F 01 9C */	lfs f2, 0x19c(r31)
/* 8013DACC 0013AA0C  48 2D 41 31 */	bl angDist__Fff
/* 8013DAD0 0013AA10  FC 40 0A 10 */	fabs f2, f1
/* 8013DAD4 0013AA14  C0 02 9F 84 */	lfs f0, lbl_805182E4@sda21(r2)
/* 8013DAD8 0013AA18  FC 40 10 18 */	frsp f2, f2
/* 8013DADC 0013AA1C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013DAE0 0013AA20  40 80 00 08 */	bge .L_8013DAE8
/* 8013DAE4 0013AA24  C0 22 9F 54 */	lfs f1, lbl_805182B4@sda21(r2)
.L_8013DAE8:
/* 8013DAE8 0013AA28  C0 02 9F 88 */	lfs f0, lbl_805182E8@sda21(r2)
/* 8013DAEC 0013AA2C  C0 42 9F 8C */	lfs f2, lbl_805182EC@sda21(r2)
/* 8013DAF0 0013AA30  EC 21 00 32 */	fmuls f1, f1, f0
/* 8013DAF4 0013AA34  FC 00 0A 10 */	fabs f0, f1
/* 8013DAF8 0013AA38  FC 00 00 18 */	frsp f0, f0
/* 8013DAFC 0013AA3C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8013DB00 0013AA40  40 81 00 1C */	ble .L_8013DB1C
/* 8013DB04 0013AA44  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013DB08 0013AA48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013DB0C 0013AA4C  40 81 00 0C */	ble .L_8013DB18
/* 8013DB10 0013AA50  FC 20 10 90 */	fmr f1, f2
/* 8013DB14 0013AA54  48 00 00 08 */	b .L_8013DB1C
.L_8013DB18:
/* 8013DB18 0013AA58  C0 22 9F 90 */	lfs f1, lbl_805182F0@sda21(r2)
.L_8013DB1C:
/* 8013DB1C 0013AA5C  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8013DB20 0013AA60  EC 20 08 2A */	fadds f1, f0, f1
/* 8013DB24 0013AA64  48 2D 40 AD */	bl roundAng__Ff
/* 8013DB28 0013AA68  D0 3F 01 9C */	stfs f1, 0x19c(r31)
/* 8013DB2C 0013AA6C  C0 22 9F 9C */	lfs f1, lbl_805182FC@sda21(r2)
/* 8013DB30 0013AA70  C0 5F 01 9C */	lfs f2, 0x19c(r31)
/* 8013DB34 0013AA74  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8013DB38 0013AA78  40 81 00 18 */	ble .L_8013DB50
/* 8013DB3C 0013AA7C  C0 02 9F 78 */	lfs f0, lbl_805182D8@sda21(r2)
/* 8013DB40 0013AA80  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013DB44 0013AA84  40 80 00 0C */	bge .L_8013DB50
/* 8013DB48 0013AA88  D0 3F 01 9C */	stfs f1, 0x19c(r31)
/* 8013DB4C 0013AA8C  48 00 00 24 */	b .L_8013DB70
.L_8013DB50:
/* 8013DB50 0013AA90  C0 22 9F A0 */	lfs f1, lbl_80518300@sda21(r2)
/* 8013DB54 0013AA94  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8013DB58 0013AA98  40 80 00 18 */	bge .L_8013DB70
/* 8013DB5C 0013AA9C  C0 02 9F 78 */	lfs f0, lbl_805182D8@sda21(r2)
/* 8013DB60 0013AAA0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013DB64 0013AAA4  4C 41 13 82 */	cror 2, 1, 2
/* 8013DB68 0013AAA8  40 82 00 08 */	bne .L_8013DB70
/* 8013DB6C 0013AAAC  D0 3F 01 9C */	stfs f1, 0x19c(r31)
.L_8013DB70:
/* 8013DB70 0013AAB0  88 7F 01 A4 */	lbz r3, 0x1a4(r31)
/* 8013DB74 0013AAB4  28 03 00 00 */	cmplwi r3, 0
/* 8013DB78 0013AAB8  41 82 00 30 */	beq .L_8013DBA8
/* 8013DB7C 0013AABC  38 03 FF FF */	addi r0, r3, -1
/* 8013DB80 0013AAC0  98 1F 01 A4 */	stb r0, 0x1a4(r31)
/* 8013DB84 0013AAC4  88 1F 01 A4 */	lbz r0, 0x1a4(r31)
/* 8013DB88 0013AAC8  28 00 00 00 */	cmplwi r0, 0
/* 8013DB8C 0013AACC  40 82 00 1C */	bne .L_8013DBA8
/* 8013DB90 0013AAD0  38 00 00 00 */	li r0, 0
/* 8013DB94 0013AAD4  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013DB98 0013AAD8  90 1F 01 A0 */	stw r0, 0x1a0(r31)
/* 8013DB9C 0013AADC  D0 1F 01 9C */	stfs f0, 0x19c(r31)
/* 8013DBA0 0013AAE0  D0 1F 01 98 */	stfs f0, 0x198(r31)
/* 8013DBA4 0013AAE4  98 1F 01 A4 */	stb r0, 0x1a4(r31)
.L_8013DBA8:
/* 8013DBA8 0013AAE8  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8013DBAC 0013AAEC  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8013DBB0 0013AAF0  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 8013DBB4 0013AAF4  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8013DBB8 0013AAF8  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 8013DBBC 0013AAFC  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 8013DBC0 0013AB00  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8013DBC4 0013AB04  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013DBC8 0013AB08  7C 08 03 A6 */	mtlr r0
/* 8013DBCC 0013AB0C  38 21 00 50 */	addi r1, r1, 0x50
/* 8013DBD0 0013AB10  4E 80 00 20 */	blr 
.endfn updateLook__Q24Game8FakePikiFv

.fn "turnTo__Q24Game8FakePikiFR10Vector3<f>", global
/* 8013DBD4 0013AB14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013DBD8 0013AB18  7C 08 02 A6 */	mflr r0
/* 8013DBDC 0013AB1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013DBE0 0013AB20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013DBE4 0013AB24  7C 7F 1B 78 */	mr r31, r3
/* 8013DBE8 0013AB28  C0 24 00 08 */	lfs f1, 8(r4)
/* 8013DBEC 0013AB2C  C0 03 02 14 */	lfs f0, 0x214(r3)
/* 8013DBF0 0013AB30  C0 64 00 00 */	lfs f3, 0(r4)
/* 8013DBF4 0013AB34  EC 41 00 28 */	fsubs f2, f1, f0
/* 8013DBF8 0013AB38  C0 23 02 0C */	lfs f1, 0x20c(r3)
/* 8013DBFC 0013AB3C  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013DC00 0013AB40  EC 23 08 28 */	fsubs f1, f3, f1
/* 8013DC04 0013AB44  FC 00 10 00 */	fcmpu cr0, f0, f2
/* 8013DC08 0013AB48  41 82 00 18 */	beq .L_8013DC20
/* 8013DC0C 0013AB4C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8013DC10 0013AB50  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8013DC14 0013AB54  4B EF 74 F5 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8013DC18 0013AB58  48 2D 3F B9 */	bl roundAng__Ff
/* 8013DC1C 0013AB5C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
.L_8013DC20:
/* 8013DC20 0013AB60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013DC24 0013AB64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013DC28 0013AB68  7C 08 03 A6 */	mtlr r0
/* 8013DC2C 0013AB6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8013DC30 0013AB70  4E 80 00 20 */	blr 
.endfn "turnTo__Q24Game8FakePikiFR10Vector3<f>"

.fn moveVelocity__Q24Game8FakePikiFv, global
/* 8013DC34 0013AB74  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8013DC38 0013AB78  7C 08 02 A6 */	mflr r0
/* 8013DC3C 0013AB7C  90 01 00 84 */	stw r0, 0x84(r1)
/* 8013DC40 0013AB80  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8013DC44 0013AB84  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 8013DC48 0013AB88  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 8013DC4C 0013AB8C  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 8013DC50 0013AB90  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 8013DC54 0013AB94  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 8013DC58 0013AB98  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 8013DC5C 0013AB9C  F3 81 00 48 */	psq_st f28, 72(r1), 0, qr0
/* 8013DC60 0013ABA0  DB 61 00 30 */	stfd f27, 0x30(r1)
/* 8013DC64 0013ABA4  F3 61 00 38 */	psq_st f27, 56(r1), 0, qr0
/* 8013DC68 0013ABA8  DB 41 00 20 */	stfd f26, 0x20(r1)
/* 8013DC6C 0013ABAC  F3 41 00 28 */	psq_st f26, 40(r1), 0, qr0
/* 8013DC70 0013ABB0  DB 21 00 10 */	stfd f25, 0x10(r1)
/* 8013DC74 0013ABB4  F3 21 00 18 */	psq_st f25, 24(r1), 0, qr0
/* 8013DC78 0013ABB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013DC7C 0013ABBC  7C 7F 1B 78 */	mr r31, r3
/* 8013DC80 0013ABC0  C3 C2 9F 54 */	lfs f30, lbl_805182B4@sda21(r2)
/* 8013DC84 0013ABC4  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 8013DC88 0013ABC8  FF A0 F0 90 */	fmr f29, f30
/* 8013DC8C 0013ABCC  C3 7F 01 E4 */	lfs f27, 0x1e4(r31)
/* 8013DC90 0013ABD0  FF 80 F0 90 */	fmr f28, f30
/* 8013DC94 0013ABD4  28 03 00 00 */	cmplwi r3, 0
/* 8013DC98 0013ABD8  C3 5F 01 E8 */	lfs f26, 0x1e8(r31)
/* 8013DC9C 0013ABDC  C3 3F 01 EC */	lfs f25, 0x1ec(r31)
/* 8013DCA0 0013ABE0  41 82 02 5C */	beq .L_8013DEFC
/* 8013DCA4 0013ABE4  EC 1A 06 B2 */	fmuls f0, f26, f26
/* 8013DCA8 0013ABE8  EC 39 06 72 */	fmuls f1, f25, f25
/* 8013DCAC 0013ABEC  EC 1B 06 FA */	fmadds f0, f27, f27, f0
/* 8013DCB0 0013ABF0  EF E1 00 2A */	fadds f31, f1, f0
/* 8013DCB4 0013ABF4  FC 1F F0 40 */	fcmpo cr0, f31, f30
/* 8013DCB8 0013ABF8  40 81 00 14 */	ble .L_8013DCCC
/* 8013DCBC 0013ABFC  40 81 00 14 */	ble .L_8013DCD0
/* 8013DCC0 0013AC00  FC 00 F8 34 */	frsqrte f0, f31
/* 8013DCC4 0013AC04  EF E0 07 F2 */	fmuls f31, f0, f31
/* 8013DCC8 0013AC08  48 00 00 08 */	b .L_8013DCD0
.L_8013DCCC:
/* 8013DCCC 0013AC0C  FF E0 F0 90 */	fmr f31, f30
.L_8013DCD0:
/* 8013DCD0 0013AC10  C0 5F 00 D0 */	lfs f2, 0xd0(r31)
/* 8013DCD4 0013AC14  C0 7F 00 CC */	lfs f3, 0xcc(r31)
/* 8013DCD8 0013AC18  EC 3A 00 B2 */	fmuls f1, f26, f2
/* 8013DCDC 0013AC1C  C0 9F 00 D4 */	lfs f4, 0xd4(r31)
/* 8013DCE0 0013AC20  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013DCE4 0013AC24  EC 3B 08 FA */	fmadds f1, f27, f3, f1
/* 8013DCE8 0013AC28  EC 39 09 3A */	fmadds f1, f25, f4, f1
/* 8013DCEC 0013AC2C  EC 42 00 72 */	fmuls f2, f2, f1
/* 8013DCF0 0013AC30  EC 63 00 72 */	fmuls f3, f3, f1
/* 8013DCF4 0013AC34  EC 24 00 72 */	fmuls f1, f4, f1
/* 8013DCF8 0013AC38  EC 9A 10 28 */	fsubs f4, f26, f2
/* 8013DCFC 0013AC3C  EC 5B 18 28 */	fsubs f2, f27, f3
/* 8013DD00 0013AC40  EC 79 08 28 */	fsubs f3, f25, f1
/* 8013DD04 0013AC44  EC 24 01 32 */	fmuls f1, f4, f4
/* 8013DD08 0013AC48  EC A3 00 F2 */	fmuls f5, f3, f3
/* 8013DD0C 0013AC4C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8013DD10 0013AC50  EC 25 08 2A */	fadds f1, f5, f1
/* 8013DD14 0013AC54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013DD18 0013AC58  40 81 00 14 */	ble .L_8013DD2C
/* 8013DD1C 0013AC5C  40 81 00 14 */	ble .L_8013DD30
/* 8013DD20 0013AC60  FC 00 08 34 */	frsqrte f0, f1
/* 8013DD24 0013AC64  EC 20 00 72 */	fmuls f1, f0, f1
/* 8013DD28 0013AC68  48 00 00 08 */	b .L_8013DD30
.L_8013DD2C:
/* 8013DD2C 0013AC6C  FC 20 00 90 */	fmr f1, f0
.L_8013DD30:
/* 8013DD30 0013AC70  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013DD34 0013AC74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013DD38 0013AC78  40 81 00 18 */	ble .L_8013DD50
/* 8013DD3C 0013AC7C  C0 02 9F A4 */	lfs f0, lbl_80518304@sda21(r2)
/* 8013DD40 0013AC80  EC 00 08 24 */	fdivs f0, f0, f1
/* 8013DD44 0013AC84  EC 42 00 32 */	fmuls f2, f2, f0
/* 8013DD48 0013AC88  EC 84 00 32 */	fmuls f4, f4, f0
/* 8013DD4C 0013AC8C  EC 63 00 32 */	fmuls f3, f3, f0
.L_8013DD50:
/* 8013DD50 0013AC90  EF 62 07 F2 */	fmuls f27, f2, f31
/* 8013DD54 0013AC94  38 63 00 5C */	addi r3, r3, 0x5c
/* 8013DD58 0013AC98  EF 44 07 F2 */	fmuls f26, f4, f31
/* 8013DD5C 0013AC9C  EF 23 07 F2 */	fmuls f25, f3, f31
/* 8013DD60 0013ACA0  48 2D E6 E1 */	bl getSlipCode__Q27MapCode4CodeFv
/* 8013DD64 0013ACA4  2C 03 00 00 */	cmpwi r3, 0
/* 8013DD68 0013ACA8  40 82 00 7C */	bne .L_8013DDE4
/* 8013DD6C 0013ACAC  C0 02 9F 74 */	lfs f0, lbl_805182D4@sda21(r2)
/* 8013DD70 0013ACB0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8013DD74 0013ACB4  40 80 01 88 */	bge .L_8013DEFC
/* 8013DD78 0013ACB8  80 8D 93 F0 */	lwz r4, _aiConstants__4Game@sda21(r13)
/* 8013DD7C 0013ACBC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8013DD80 0013ACC0  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 8013DD84 0013ACC4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8013DD88 0013ACC8  C0 FF 00 D0 */	lfs f7, 0xd0(r31)
/* 8013DD8C 0013ACCC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013DD90 0013ACD0  C0 82 9F 54 */	lfs f4, lbl_805182B4@sda21(r2)
/* 8013DD94 0013ACD4  C0 3F 00 CC */	lfs f1, 0xcc(r31)
/* 8013DD98 0013ACD8  C0 DF 00 D4 */	lfs f6, 0xd4(r31)
/* 8013DD9C 0013ACDC  FC A0 00 50 */	fneg f5, f0
/* 8013DDA0 0013ACE0  C0 42 9F A4 */	lfs f2, lbl_80518304@sda21(r2)
/* 8013DDA4 0013ACE4  EC 05 01 F2 */	fmuls f0, f5, f7
/* 8013DDA8 0013ACE8  EC 04 00 7A */	fmadds f0, f4, f1, f0
/* 8013DDAC 0013ACEC  EC 04 01 BA */	fmadds f0, f4, f6, f0
/* 8013DDB0 0013ACF0  EC 61 00 32 */	fmuls f3, f1, f0
/* 8013DDB4 0013ACF4  EC 27 00 32 */	fmuls f1, f7, f0
/* 8013DDB8 0013ACF8  EC 06 00 32 */	fmuls f0, f6, f0
/* 8013DDBC 0013ACFC  EC 64 18 28 */	fsubs f3, f4, f3
/* 8013DDC0 0013AD00  EC 25 08 28 */	fsubs f1, f5, f1
/* 8013DDC4 0013AD04  EC 04 00 28 */	fsubs f0, f4, f0
/* 8013DDC8 0013AD08  FC 60 18 50 */	fneg f3, f3
/* 8013DDCC 0013AD0C  FC 20 08 50 */	fneg f1, f1
/* 8013DDD0 0013AD10  FC 00 00 50 */	fneg f0, f0
/* 8013DDD4 0013AD14  EF C3 00 B2 */	fmuls f30, f3, f2
/* 8013DDD8 0013AD18  EF A1 00 B2 */	fmuls f29, f1, f2
/* 8013DDDC 0013AD1C  EF 80 00 B2 */	fmuls f28, f0, f2
/* 8013DDE0 0013AD20  48 00 01 1C */	b .L_8013DEFC
.L_8013DDE4:
/* 8013DDE4 0013AD24  80 AD 93 F0 */	lwz r5, _aiConstants__4Game@sda21(r13)
/* 8013DDE8 0013AD28  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8013DDEC 0013AD2C  C0 25 00 28 */	lfs f1, 0x28(r5)
/* 8013DDF0 0013AD30  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8013DDF4 0013AD34  C0 5F 00 D0 */	lfs f2, 0xd0(r31)
/* 8013DDF8 0013AD38  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013DDFC 0013AD3C  C0 62 9F 54 */	lfs f3, lbl_805182B4@sda21(r2)
/* 8013DE00 0013AD40  C0 DF 00 CC */	lfs f6, 0xcc(r31)
/* 8013DE04 0013AD44  C0 BF 00 D4 */	lfs f5, 0xd4(r31)
/* 8013DE08 0013AD48  FC 80 00 50 */	fneg f4, f0
/* 8013DE0C 0013AD4C  EC 04 00 B2 */	fmuls f0, f4, f2
/* 8013DE10 0013AD50  EC 03 01 BA */	fmadds f0, f3, f6, f0
/* 8013DE14 0013AD54  EC 03 01 7A */	fmadds f0, f3, f5, f0
/* 8013DE18 0013AD58  EC 22 00 32 */	fmuls f1, f2, f0
/* 8013DE1C 0013AD5C  EC 46 00 32 */	fmuls f2, f6, f0
/* 8013DE20 0013AD60  EC 05 00 32 */	fmuls f0, f5, f0
/* 8013DE24 0013AD64  EF 84 08 28 */	fsubs f28, f4, f1
/* 8013DE28 0013AD68  EF C3 10 28 */	fsubs f30, f3, f2
/* 8013DE2C 0013AD6C  EF A3 00 28 */	fsubs f29, f3, f0
/* 8013DE30 0013AD70  EC 1C 07 32 */	fmuls f0, f28, f28
/* 8013DE34 0013AD74  EC 3D 07 72 */	fmuls f1, f29, f29
/* 8013DE38 0013AD78  EC 1E 07 BA */	fmadds f0, f30, f30, f0
/* 8013DE3C 0013AD7C  EC 21 00 2A */	fadds f1, f1, f0
/* 8013DE40 0013AD80  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 8013DE44 0013AD84  40 81 00 14 */	ble .L_8013DE58
/* 8013DE48 0013AD88  40 81 00 14 */	ble .L_8013DE5C
/* 8013DE4C 0013AD8C  FC 00 08 34 */	frsqrte f0, f1
/* 8013DE50 0013AD90  EC 20 00 72 */	fmuls f1, f0, f1
/* 8013DE54 0013AD94  48 00 00 08 */	b .L_8013DE5C
.L_8013DE58:
/* 8013DE58 0013AD98  FC 20 18 90 */	fmr f1, f3
.L_8013DE5C:
/* 8013DE5C 0013AD9C  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013DE60 0013ADA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013DE64 0013ADA4  40 81 00 18 */	ble .L_8013DE7C
/* 8013DE68 0013ADA8  C0 02 9F A4 */	lfs f0, lbl_80518304@sda21(r2)
/* 8013DE6C 0013ADAC  EC 00 08 24 */	fdivs f0, f0, f1
/* 8013DE70 0013ADB0  EF DE 00 32 */	fmuls f30, f30, f0
/* 8013DE74 0013ADB4  EF 9C 00 32 */	fmuls f28, f28, f0
/* 8013DE78 0013ADB8  EF BD 00 32 */	fmuls f29, f29, f0
.L_8013DE7C:
/* 8013DE7C 0013ADBC  2C 03 00 02 */	cmpwi r3, 2
/* 8013DE80 0013ADC0  40 82 00 44 */	bne .L_8013DEC4
/* 8013DE84 0013ADC4  7F E3 FB 78 */	mr r3, r31
/* 8013DE88 0013ADC8  C3 E2 9F A8 */	lfs f31, lbl_80518308@sda21(r2)
/* 8013DE8C 0013ADCC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013DE90 0013ADD0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013DE94 0013ADD4  7D 89 03 A6 */	mtctr r12
/* 8013DE98 0013ADD8  4E 80 04 21 */	bctrl 
/* 8013DE9C 0013ADDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013DEA0 0013ADE0  41 82 00 28 */	beq .L_8013DEC8
/* 8013DEA4 0013ADE4  7F E3 FB 78 */	mr r3, r31
/* 8013DEA8 0013ADE8  48 00 35 FD */	bl getOlimarData__Q24Game4NaviFv
/* 8013DEAC 0013ADEC  38 80 00 07 */	li r4, 7
/* 8013DEB0 0013ADF0  48 0A 81 21 */	bl hasItem__Q24Game10OlimarDataFi
/* 8013DEB4 0013ADF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013DEB8 0013ADF8  41 82 00 10 */	beq .L_8013DEC8
/* 8013DEBC 0013ADFC  C3 E2 9F AC */	lfs f31, lbl_8051830C@sda21(r2)
/* 8013DEC0 0013AE00  48 00 00 08 */	b .L_8013DEC8
.L_8013DEC4:
/* 8013DEC4 0013AE04  C3 E2 9F A4 */	lfs f31, lbl_80518304@sda21(r2)
.L_8013DEC8:
/* 8013DEC8 0013AE08  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 8013DECC 0013AE0C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8013DED0 0013AE10  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 8013DED4 0013AE14  C0 64 00 54 */	lfs f3, 0x54(r4)
/* 8013DED8 0013AE18  EC 5E 00 32 */	fmuls f2, f30, f0
/* 8013DEDC 0013AE1C  EC 3C 00 32 */	fmuls f1, f28, f0
/* 8013DEE0 0013AE20  EC 1D 00 32 */	fmuls f0, f29, f0
/* 8013DEE4 0013AE24  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8013DEE8 0013AE28  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8013DEEC 0013AE2C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8013DEF0 0013AE30  EF C2 07 F2 */	fmuls f30, f2, f31
/* 8013DEF4 0013AE34  EF A1 07 F2 */	fmuls f29, f1, f31
/* 8013DEF8 0013AE38  EF 80 07 F2 */	fmuls f28, f0, f31
.L_8013DEFC:
/* 8013DEFC 0013AE3C  C0 1F 01 F4 */	lfs f0, 0x1f4(r31)
/* 8013DF00 0013AE40  C0 5F 01 F8 */	lfs f2, 0x1f8(r31)
/* 8013DF04 0013AE44  EC 3A 00 2A */	fadds f1, f26, f0
/* 8013DF08 0013AE48  C1 1F 02 04 */	lfs f8, 0x204(r31)
/* 8013DF0C 0013AE4C  C0 1F 01 F0 */	lfs f0, 0x1f0(r31)
/* 8013DF10 0013AE50  EC 59 10 2A */	fadds f2, f25, f2
/* 8013DF14 0013AE54  C0 FF 02 08 */	lfs f7, 0x208(r31)
/* 8013DF18 0013AE58  EC 61 40 28 */	fsubs f3, f1, f8
/* 8013DF1C 0013AE5C  EC 3B 00 2A */	fadds f1, f27, f0
/* 8013DF20 0013AE60  C1 3F 02 00 */	lfs f9, 0x200(r31)
/* 8013DF24 0013AE64  EC 82 38 28 */	fsubs f4, f2, f7
/* 8013DF28 0013AE68  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013DF2C 0013AE6C  EC A3 00 F2 */	fmuls f5, f3, f3
/* 8013DF30 0013AE70  EC 41 48 28 */	fsubs f2, f1, f9
/* 8013DF34 0013AE74  EC C4 01 32 */	fmuls f6, f4, f4
/* 8013DF38 0013AE78  EC 22 28 BA */	fmadds f1, f2, f2, f5
/* 8013DF3C 0013AE7C  EC 26 08 2A */	fadds f1, f6, f1
/* 8013DF40 0013AE80  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013DF44 0013AE84  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8013DF48 0013AE88  C0 02 9F 74 */	lfs f0, lbl_805182D4@sda21(r2)
/* 8013DF4C 0013AE8C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8013DF50 0013AE90  EC 01 00 24 */	fdivs f0, f1, f0
/* 8013DF54 0013AE94  EC 42 00 32 */	fmuls f2, f2, f0
/* 8013DF58 0013AE98  EC 23 00 32 */	fmuls f1, f3, f0
/* 8013DF5C 0013AE9C  EC 04 00 32 */	fmuls f0, f4, f0
/* 8013DF60 0013AEA0  EC 49 10 2A */	fadds f2, f9, f2
/* 8013DF64 0013AEA4  EC 28 08 2A */	fadds f1, f8, f1
/* 8013DF68 0013AEA8  EC 07 00 2A */	fadds f0, f7, f0
/* 8013DF6C 0013AEAC  D0 5F 02 00 */	stfs f2, 0x200(r31)
/* 8013DF70 0013AEB0  D0 3F 02 04 */	stfs f1, 0x204(r31)
/* 8013DF74 0013AEB4  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8013DF78 0013AEB8  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 8013DF7C 0013AEBC  C0 3F 02 04 */	lfs f1, 0x204(r31)
/* 8013DF80 0013AEC0  EC 00 F0 2A */	fadds f0, f0, f30
/* 8013DF84 0013AEC4  C0 5F 02 08 */	lfs f2, 0x208(r31)
/* 8013DF88 0013AEC8  EC 21 E8 2A */	fadds f1, f1, f29
/* 8013DF8C 0013AECC  EC 42 E0 2A */	fadds f2, f2, f28
/* 8013DF90 0013AED0  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8013DF94 0013AED4  D0 3F 02 04 */	stfs f1, 0x204(r31)
/* 8013DF98 0013AED8  D0 5F 02 08 */	stfs f2, 0x208(r31)
/* 8013DF9C 0013AEDC  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8013DFA0 0013AEE0  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8013DFA4 0013AEE4  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 8013DFA8 0013AEE8  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 8013DFAC 0013AEEC  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 8013DFB0 0013AEF0  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 8013DFB4 0013AEF4  E3 81 00 48 */	psq_l f28, 72(r1), 0, qr0
/* 8013DFB8 0013AEF8  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 8013DFBC 0013AEFC  E3 61 00 38 */	psq_l f27, 56(r1), 0, qr0
/* 8013DFC0 0013AF00  CB 61 00 30 */	lfd f27, 0x30(r1)
/* 8013DFC4 0013AF04  E3 41 00 28 */	psq_l f26, 40(r1), 0, qr0
/* 8013DFC8 0013AF08  CB 41 00 20 */	lfd f26, 0x20(r1)
/* 8013DFCC 0013AF0C  E3 21 00 18 */	psq_l f25, 24(r1), 0, qr0
/* 8013DFD0 0013AF10  CB 21 00 10 */	lfd f25, 0x10(r1)
/* 8013DFD4 0013AF14  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8013DFD8 0013AF18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013DFDC 0013AF1C  7C 08 03 A6 */	mtlr r0
/* 8013DFE0 0013AF20  38 21 00 80 */	addi r1, r1, 0x80
/* 8013DFE4 0013AF24  4E 80 00 20 */	blr 
.endfn moveVelocity__Q24Game8FakePikiFv

.fn moveRotation__Q24Game8FakePikiFv, global
/* 8013DFE8 0013AF28  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013DFEC 0013AF2C  7C 08 02 A6 */	mflr r0
/* 8013DFF0 0013AF30  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013DFF4 0013AF34  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8013DFF8 0013AF38  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8013DFFC 0013AF3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013E000 0013AF40  81 83 00 00 */	lwz r12, 0(r3)
/* 8013E004 0013AF44  7C 7F 1B 78 */	mr r31, r3
/* 8013E008 0013AF48  81 8C 01 D4 */	lwz r12, 0x1d4(r12)
/* 8013E00C 0013AF4C  7D 89 03 A6 */	mtctr r12
/* 8013E010 0013AF50  4E 80 04 21 */	bctrl 
/* 8013E014 0013AF54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013E018 0013AF58  41 82 00 68 */	beq .L_8013E080
/* 8013E01C 0013AF5C  C0 3F 01 E4 */	lfs f1, 0x1e4(r31)
/* 8013E020 0013AF60  C0 5F 01 EC */	lfs f2, 0x1ec(r31)
/* 8013E024 0013AF64  EC 81 00 72 */	fmuls f4, f1, f1
/* 8013E028 0013AF68  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8013E02C 0013AF6C  EC 62 00 B2 */	fmuls f3, f2, f2
/* 8013E030 0013AF70  C0 02 9F A4 */	lfs f0, lbl_80518304@sda21(r2)
/* 8013E034 0013AF74  C3 E3 00 54 */	lfs f31, 0x54(r3)
/* 8013E038 0013AF78  EC 64 18 2A */	fadds f3, f4, f3
/* 8013E03C 0013AF7C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8013E040 0013AF80  40 81 00 40 */	ble .L_8013E080
/* 8013E044 0013AF84  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8013E048 0013AF88  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8013E04C 0013AF8C  4B EF 70 BD */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8013E050 0013AF90  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 8013E054 0013AF94  48 2D 3B A9 */	bl angDist__Fff
/* 8013E058 0013AF98  C0 02 9F B0 */	lfs f0, lbl_80518310@sda21(r2)
/* 8013E05C 0013AF9C  C0 42 9F 5C */	lfs f2, lbl_805182BC@sda21(r2)
/* 8013E060 0013AFA0  EC 20 00 72 */	fmuls f1, f0, f1
/* 8013E064 0013AFA4  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8013E068 0013AFA8  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8013E06C 0013AFAC  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8013E070 0013AFB0  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 8013E074 0013AFB4  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 8013E078 0013AFB8  48 2D 3B 59 */	bl roundAng__Ff
/* 8013E07C 0013AFBC  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
.L_8013E080:
/* 8013E080 0013AFC0  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8013E084 0013AFC4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013E088 0013AFC8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8013E08C 0013AFCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013E090 0013AFD0  7C 08 03 A6 */	mtlr r0
/* 8013E094 0013AFD4  38 21 00 20 */	addi r1, r1, 0x20
/* 8013E098 0013AFD8  4E 80 00 20 */	blr 
.endfn moveRotation__Q24Game8FakePikiFv

.fn useMoveRotation__Q24Game8FakePikiFv, weak
/* 8013E09C 0013AFDC  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013E0A0 0013AFE0  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 8013E0A4 0013AFE4  7C 00 00 34 */	cntlzw r0, r0
/* 8013E0A8 0013AFE8  54 03 D9 7E */	srwi r3, r0, 5
/* 8013E0AC 0013AFEC  4E 80 00 20 */	blr 
.endfn useMoveRotation__Q24Game8FakePikiFv

.fn move__Q24Game8FakePikiFf, global
/* 8013E0B0 0013AFF0  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 8013E0B4 0013AFF4  7C 08 02 A6 */	mflr r0
/* 8013E0B8 0013AFF8  90 01 01 34 */	stw r0, 0x134(r1)
/* 8013E0BC 0013AFFC  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 8013E0C0 0013B000  F3 E1 01 28 */	psq_st f31, 296(r1), 0, qr0
/* 8013E0C4 0013B004  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 8013E0C8 0013B008  F3 C1 01 18 */	psq_st f30, 280(r1), 0, qr0
/* 8013E0CC 0013B00C  DB A1 01 00 */	stfd f29, 0x100(r1)
/* 8013E0D0 0013B010  F3 A1 01 08 */	psq_st f29, 264(r1), 0, qr0
/* 8013E0D4 0013B014  DB 81 00 F0 */	stfd f28, 0xf0(r1)
/* 8013E0D8 0013B018  F3 81 00 F8 */	psq_st f28, 248(r1), 0, qr0
/* 8013E0DC 0013B01C  93 E1 00 EC */	stw r31, 0xec(r1)
/* 8013E0E0 0013B020  93 C1 00 E8 */	stw r30, 0xe8(r1)
/* 8013E0E4 0013B024  93 A1 00 E4 */	stw r29, 0xe4(r1)
/* 8013E0E8 0013B028  93 81 00 E0 */	stw r28, 0xe0(r1)
/* 8013E0EC 0013B02C  81 83 00 00 */	lwz r12, 0(r3)
/* 8013E0F0 0013B030  FF 80 08 90 */	fmr f28, f1
/* 8013E0F4 0013B034  7C 7F 1B 78 */	mr r31, r3
/* 8013E0F8 0013B038  81 8C 02 00 */	lwz r12, 0x200(r12)
/* 8013E0FC 0013B03C  7D 89 03 A6 */	mtctr r12
/* 8013E100 0013B040  4E 80 04 21 */	bctrl 
/* 8013E104 0013B044  FF E0 08 90 */	fmr f31, f1
/* 8013E108 0013B048  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 8013E10C 0013B04C  C0 3F 02 10 */	lfs f1, 0x210(r31)
/* 8013E110 0013B050  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8013E114 0013B054  C0 1F 02 0C */	lfs f0, 0x20c(r31)
/* 8013E118 0013B058  EC 21 F8 2A */	fadds f1, f1, f31
/* 8013E11C 0013B05C  C0 5F 02 14 */	lfs f2, 0x214(r31)
/* 8013E120 0013B060  41 82 00 30 */	beq .L_8013E150
/* 8013E124 0013B064  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8013E128 0013B068  28 03 00 00 */	cmplwi r3, 0
/* 8013E12C 0013B06C  41 82 00 24 */	beq .L_8013E150
/* 8013E130 0013B070  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8013E134 0013B074  38 63 00 3C */	addi r3, r3, 0x3c
/* 8013E138 0013B078  48 2E B7 69 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8013E13C 0013B07C  C3 C3 00 0C */	lfs f30, 0xc(r3)
/* 8013E140 0013B080  C3 A3 00 2C */	lfs f29, 0x2c(r3)
/* 8013E144 0013B084  FC 00 F0 90 */	fmr f0, f30
/* 8013E148 0013B088  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8013E14C 0013B08C  FC 40 E8 90 */	fmr f2, f29
.L_8013E150:
/* 8013E150 0013B090  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8013E154 0013B094  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8013E158 0013B098  C0 A2 9F 54 */	lfs f5, lbl_805182B4@sda21(r2)
/* 8013E15C 0013B09C  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8013E160 0013B0A0  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8013E164 0013B0A4  38 A0 00 00 */	li r5, 0
/* 8013E168 0013B0A8  C0 02 9F B4 */	lfs f0, lbl_80518314@sda21(r2)
/* 8013E16C 0013B0AC  38 E1 00 24 */	addi r7, r1, 0x24
/* 8013E170 0013B0B0  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8013E174 0013B0B4  38 C1 00 18 */	addi r6, r1, 0x18
/* 8013E178 0013B0B8  38 00 FF FF */	li r0, -1
/* 8013E17C 0013B0BC  7F E3 FB 78 */	mr r3, r31
/* 8013E180 0013B0C0  D3 E1 00 30 */	stfs f31, 0x30(r1)
/* 8013E184 0013B0C4  C0 FF 01 80 */	lfs f7, 0x180(r31)
/* 8013E188 0013B0C8  D0 BF 01 20 */	stfs f5, 0x120(r31)
/* 8013E18C 0013B0CC  C0 7F 02 08 */	lfs f3, 0x208(r31)
/* 8013E190 0013B0D0  C0 5F 01 24 */	lfs f2, 0x124(r31)
/* 8013E194 0013B0D4  C0 9F 02 04 */	lfs f4, 0x204(r31)
/* 8013E198 0013B0D8  C0 3F 01 20 */	lfs f1, 0x120(r31)
/* 8013E19C 0013B0DC  EC C3 10 2A */	fadds f6, f3, f2
/* 8013E1A0 0013B0E0  C0 7F 02 00 */	lfs f3, 0x200(r31)
/* 8013E1A4 0013B0E4  C0 5F 01 1C */	lfs f2, 0x11c(r31)
/* 8013E1A8 0013B0E8  EC 84 08 2A */	fadds f4, f4, f1
/* 8013E1AC 0013B0EC  C0 24 08 00 */	lfs f1, 0x800(r4)
/* 8013E1B0 0013B0F0  EC 43 10 2A */	fadds f2, f3, f2
/* 8013E1B4 0013B0F4  90 A1 00 48 */	stw r5, 0x48(r1)
/* 8013E1B8 0013B0F8  D0 81 00 1C */	stfs f4, 0x1c(r1)
/* 8013E1BC 0013B0FC  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8013E1C0 0013B100  D0 C1 00 20 */	stfs f6, 0x20(r1)
/* 8013E1C4 0013B104  90 E1 00 34 */	stw r7, 0x34(r1)
/* 8013E1C8 0013B108  90 C1 00 38 */	stw r6, 0x38(r1)
/* 8013E1CC 0013B10C  D0 E1 00 3C */	stfs f7, 0x3c(r1)
/* 8013E1D0 0013B110  D0 A1 00 40 */	stfs f5, 0x40(r1)
/* 8013E1D4 0013B114  90 A1 00 44 */	stw r5, 0x44(r1)
/* 8013E1D8 0013B118  90 A1 00 78 */	stw r5, 0x78(r1)
/* 8013E1DC 0013B11C  98 A1 00 A8 */	stb r5, 0xa8(r1)
/* 8013E1E0 0013B120  98 A1 00 4D */	stb r5, 0x4d(r1)
/* 8013E1E4 0013B124  98 A1 00 4C */	stb r5, 0x4c(r1)
/* 8013E1E8 0013B128  90 A1 00 7C */	stw r5, 0x7c(r1)
/* 8013E1EC 0013B12C  98 A1 00 C4 */	stb r5, 0xc4(r1)
/* 8013E1F0 0013B130  90 A1 00 C8 */	stw r5, 0xc8(r1)
/* 8013E1F4 0013B134  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 8013E1F8 0013B138  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 8013E1FC 0013B13C  90 01 00 CC */	stw r0, 0xcc(r1)
/* 8013E200 0013B140  90 A1 00 80 */	stw r5, 0x80(r1)
/* 8013E204 0013B144  98 A1 00 4E */	stb r5, 0x4e(r1)
/* 8013E208 0013B148  93 E1 00 48 */	stw r31, 0x48(r1)
/* 8013E20C 0013B14C  90 BF 02 48 */	stw r5, 0x248(r31)
/* 8013E210 0013B150  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013E214 0013B154  81 8C 01 EC */	lwz r12, 0x1ec(r12)
/* 8013E218 0013B158  7D 89 03 A6 */	mtctr r12
/* 8013E21C 0013B15C  4E 80 04 21 */	bctrl 
/* 8013E220 0013B160  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013E224 0013B164  41 82 00 E8 */	beq .L_8013E30C
/* 8013E228 0013B168  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8013E22C 0013B16C  FC 20 E0 90 */	fmr f1, f28
/* 8013E230 0013B170  38 81 00 34 */	addi r4, r1, 0x34
/* 8013E234 0013B174  81 83 00 04 */	lwz r12, 4(r3)
/* 8013E238 0013B178  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8013E23C 0013B17C  7D 89 03 A6 */	mtctr r12
/* 8013E240 0013B180  4E 80 04 21 */	bctrl 
/* 8013E244 0013B184  90 7F 02 4C */	stw r3, 0x24c(r31)
/* 8013E248 0013B188  38 1F 02 00 */	addi r0, r31, 0x200
/* 8013E24C 0013B18C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8013E250 0013B190  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8013E254 0013B194  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8013E258 0013B198  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 8013E25C 0013B19C  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8013E260 0013B1A0  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8013E264 0013B1A4  80 81 00 CC */	lwz r4, 0xcc(r1)
/* 8013E268 0013B1A8  90 01 00 38 */	stw r0, 0x38(r1)
/* 8013E26C 0013B1AC  2C 04 FF FF */	cmpwi r4, -1
/* 8013E270 0013B1B0  41 82 00 E4 */	beq .L_8013E354
/* 8013E274 0013B1B4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8013E278 0013B1B8  80 03 00 08 */	lwz r0, 8(r3)
/* 8013E27C 0013B1BC  28 00 00 00 */	cmplwi r0, 0
/* 8013E280 0013B1C0  41 82 00 D4 */	beq .L_8013E354
/* 8013E284 0013B1C4  B0 9F 01 8C */	sth r4, 0x18c(r31)
/* 8013E288 0013B1C8  80 01 00 CC */	lwz r0, 0xcc(r1)
/* 8013E28C 0013B1CC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8013E290 0013B1D0  7C 04 07 34 */	extsh r4, r0
/* 8013E294 0013B1D4  48 07 9A F5 */	bl getMapRoom__Q24Game10RoomMapMgrFs
/* 8013E298 0013B1D8  7C 7E 1B 78 */	mr r30, r3
/* 8013E29C 0013B1DC  88 03 00 BC */	lbz r0, 0xbc(r3)
/* 8013E2A0 0013B1E0  28 00 00 00 */	cmplwi r0, 0
/* 8013E2A4 0013B1E4  40 82 00 20 */	bne .L_8013E2C4
/* 8013E2A8 0013B1E8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8013E2AC 0013B1EC  80 01 00 CC */	lwz r0, 0xcc(r1)
/* 8013E2B0 0013B1F0  80 63 00 08 */	lwz r3, 8(r3)
/* 8013E2B4 0013B1F4  7C 04 07 34 */	extsh r4, r0
/* 8013E2B8 0013B1F8  48 03 5A B1 */	bl openRoom__Q24Game8RouteMgrFs
/* 8013E2BC 0013B1FC  38 00 00 01 */	li r0, 1
/* 8013E2C0 0013B200  98 1E 00 BC */	stb r0, 0xbc(r30)
.L_8013E2C4:
/* 8013E2C4 0013B204  7F E3 FB 78 */	mr r3, r31
/* 8013E2C8 0013B208  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013E2CC 0013B20C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013E2D0 0013B210  7D 89 03 A6 */	mtctr r12
/* 8013E2D4 0013B214  4E 80 04 21 */	bctrl 
/* 8013E2D8 0013B218  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013E2DC 0013B21C  41 82 00 78 */	beq .L_8013E354
/* 8013E2E0 0013B220  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8013E2E4 0013B224  38 00 00 00 */	li r0, 0
/* 8013E2E8 0013B228  80 63 00 44 */	lwz r3, 0x44(r3)
/* 8013E2EC 0013B22C  2C 03 00 01 */	cmpwi r3, 1
/* 8013E2F0 0013B230  41 82 00 0C */	beq .L_8013E2FC
/* 8013E2F4 0013B234  2C 03 00 03 */	cmpwi r3, 3
/* 8013E2F8 0013B238  40 82 00 08 */	bne .L_8013E300
.L_8013E2FC:
/* 8013E2FC 0013B23C  38 00 00 01 */	li r0, 1
.L_8013E300:
/* 8013E300 0013B240  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8013E304 0013B244  41 82 00 50 */	beq .L_8013E354
/* 8013E308 0013B248  48 00 00 4C */	b .L_8013E354
.L_8013E30C:
/* 8013E30C 0013B24C  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 8013E310 0013B250  38 00 00 00 */	li r0, 0
/* 8013E314 0013B254  80 61 00 34 */	lwz r3, 0x34(r1)
/* 8013E318 0013B258  C0 5F 02 04 */	lfs f2, 0x204(r31)
/* 8013E31C 0013B25C  EC 00 07 32 */	fmuls f0, f0, f28
/* 8013E320 0013B260  C0 23 00 00 */	lfs f1, 0(r3)
/* 8013E324 0013B264  C0 9F 02 08 */	lfs f4, 0x208(r31)
/* 8013E328 0013B268  EC 42 07 32 */	fmuls f2, f2, f28
/* 8013E32C 0013B26C  C0 63 00 04 */	lfs f3, 4(r3)
/* 8013E330 0013B270  EC 01 00 2A */	fadds f0, f1, f0
/* 8013E334 0013B274  C0 A3 00 08 */	lfs f5, 8(r3)
/* 8013E338 0013B278  EC 24 07 32 */	fmuls f1, f4, f28
/* 8013E33C 0013B27C  EC 43 10 2A */	fadds f2, f3, f2
/* 8013E340 0013B280  D0 03 00 00 */	stfs f0, 0(r3)
/* 8013E344 0013B284  EC 05 08 2A */	fadds f0, f5, f1
/* 8013E348 0013B288  D0 43 00 04 */	stfs f2, 4(r3)
/* 8013E34C 0013B28C  D0 03 00 08 */	stfs f0, 8(r3)
/* 8013E350 0013B290  90 01 00 78 */	stw r0, 0x78(r1)
.L_8013E354:
/* 8013E354 0013B294  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 8013E358 0013B298  28 00 00 00 */	cmplwi r0, 0
/* 8013E35C 0013B29C  40 82 00 24 */	bne .L_8013E380
/* 8013E360 0013B2A0  80 81 00 78 */	lwz r4, 0x78(r1)
/* 8013E364 0013B2A4  28 04 00 00 */	cmplwi r4, 0
/* 8013E368 0013B2A8  41 82 00 18 */	beq .L_8013E380
/* 8013E36C 0013B2AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013E370 0013B2B0  7F E3 FB 78 */	mr r3, r31
/* 8013E374 0013B2B4  81 8C 00 E8 */	lwz r12, 0xe8(r12)
/* 8013E378 0013B2B8  7D 89 03 A6 */	mtctr r12
/* 8013E37C 0013B2BC  4E 80 04 21 */	bctrl 
.L_8013E380:
/* 8013E380 0013B2C0  80 01 00 78 */	lwz r0, 0x78(r1)
/* 8013E384 0013B2C4  90 1F 00 C8 */	stw r0, 0xc8(r31)
/* 8013E388 0013B2C8  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 8013E38C 0013B2CC  D0 1F 00 CC */	stfs f0, 0xcc(r31)
/* 8013E390 0013B2D0  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 8013E394 0013B2D4  D0 1F 00 D0 */	stfs f0, 0xd0(r31)
/* 8013E398 0013B2D8  C0 01 00 8C */	lfs f0, 0x8c(r1)
/* 8013E39C 0013B2DC  D0 1F 00 D4 */	stfs f0, 0xd4(r31)
/* 8013E3A0 0013B2E0  80 1F 01 84 */	lwz r0, 0x184(r31)
/* 8013E3A4 0013B2E4  28 00 00 00 */	cmplwi r0, 0
/* 8013E3A8 0013B2E8  40 82 00 28 */	bne .L_8013E3D0
/* 8013E3AC 0013B2EC  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 8013E3B0 0013B2F0  28 00 00 00 */	cmplwi r0, 0
/* 8013E3B4 0013B2F4  41 82 00 1C */	beq .L_8013E3D0
/* 8013E3B8 0013B2F8  7F E3 FB 78 */	mr r3, r31
/* 8013E3BC 0013B2FC  38 81 00 90 */	addi r4, r1, 0x90
/* 8013E3C0 0013B300  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013E3C4 0013B304  81 8C 02 04 */	lwz r12, 0x204(r12)
/* 8013E3C8 0013B308  7D 89 03 A6 */	mtctr r12
/* 8013E3CC 0013B30C  4E 80 04 21 */	bctrl 
.L_8013E3D0:
/* 8013E3D0 0013B310  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 8013E3D4 0013B314  28 03 00 00 */	cmplwi r3, 0
/* 8013E3D8 0013B318  41 82 00 10 */	beq .L_8013E3E8
/* 8013E3DC 0013B31C  FC 20 E0 90 */	fmr f1, f28
/* 8013E3E0 0013B320  38 81 00 34 */	addi r4, r1, 0x34
/* 8013E3E4 0013B324  48 08 77 D5 */	bl traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof
.L_8013E3E8:
/* 8013E3E8 0013B328  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 8013E3EC 0013B32C  28 00 00 00 */	cmplwi r0, 0
/* 8013E3F0 0013B330  40 82 00 44 */	bne .L_8013E434
/* 8013E3F4 0013B334  80 81 00 78 */	lwz r4, 0x78(r1)
/* 8013E3F8 0013B338  28 04 00 00 */	cmplwi r4, 0
/* 8013E3FC 0013B33C  41 82 00 38 */	beq .L_8013E434
/* 8013E400 0013B340  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013E404 0013B344  7F E3 FB 78 */	mr r3, r31
/* 8013E408 0013B348  81 8C 00 E8 */	lwz r12, 0xe8(r12)
/* 8013E40C 0013B34C  7D 89 03 A6 */	mtctr r12
/* 8013E410 0013B350  4E 80 04 21 */	bctrl 
/* 8013E414 0013B354  80 01 00 78 */	lwz r0, 0x78(r1)
/* 8013E418 0013B358  90 1F 00 C8 */	stw r0, 0xc8(r31)
/* 8013E41C 0013B35C  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 8013E420 0013B360  D0 1F 00 CC */	stfs f0, 0xcc(r31)
/* 8013E424 0013B364  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 8013E428 0013B368  D0 1F 00 D0 */	stfs f0, 0xd0(r31)
/* 8013E42C 0013B36C  C0 01 00 8C */	lfs f0, 0x8c(r1)
/* 8013E430 0013B370  D0 1F 00 D4 */	stfs f0, 0xd4(r31)
.L_8013E434:
/* 8013E434 0013B374  80 1F 01 84 */	lwz r0, 0x184(r31)
/* 8013E438 0013B378  28 00 00 00 */	cmplwi r0, 0
/* 8013E43C 0013B37C  40 82 00 28 */	bne .L_8013E464
/* 8013E440 0013B380  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 8013E444 0013B384  28 00 00 00 */	cmplwi r0, 0
/* 8013E448 0013B388  41 82 00 1C */	beq .L_8013E464
/* 8013E44C 0013B38C  7F E3 FB 78 */	mr r3, r31
/* 8013E450 0013B390  38 81 00 90 */	addi r4, r1, 0x90
/* 8013E454 0013B394  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013E458 0013B398  81 8C 02 04 */	lwz r12, 0x204(r12)
/* 8013E45C 0013B39C  7D 89 03 A6 */	mtctr r12
/* 8013E460 0013B3A0  4E 80 04 21 */	bctrl 
.L_8013E464:
/* 8013E464 0013B3A4  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8013E468 0013B3A8  28 03 00 00 */	cmplwi r3, 0
/* 8013E46C 0013B3AC  41 82 00 18 */	beq .L_8013E484
/* 8013E470 0013B3B0  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 8013E474 0013B3B4  C0 02 9F B4 */	lfs f0, lbl_80518314@sda21(r2)
/* 8013E478 0013B3B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013E47C 0013B3BC  40 81 00 08 */	ble .L_8013E484
/* 8013E480 0013B3C0  90 7F 02 48 */	stw r3, 0x248(r31)
.L_8013E484:
/* 8013E484 0013B3C4  80 1F 01 7C */	lwz r0, 0x17c(r31)
/* 8013E488 0013B3C8  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8013E48C 0013B3CC  41 82 00 58 */	beq .L_8013E4E4
/* 8013E490 0013B3D0  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8013E494 0013B3D4  C0 61 00 2C */	lfs f3, 0x2c(r1)
/* 8013E498 0013B3D8  EC 20 F0 28 */	fsubs f1, f0, f30
/* 8013E49C 0013B3DC  C0 5F 02 0C */	lfs f2, 0x20c(r31)
/* 8013E4A0 0013B3E0  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013E4A4 0013B3E4  EC 63 E8 28 */	fsubs f3, f3, f29
/* 8013E4A8 0013B3E8  EC 22 08 2A */	fadds f1, f2, f1
/* 8013E4AC 0013B3EC  D0 3F 02 0C */	stfs f1, 0x20c(r31)
/* 8013E4B0 0013B3F0  C0 3F 02 10 */	lfs f1, 0x210(r31)
/* 8013E4B4 0013B3F4  EC 01 00 2A */	fadds f0, f1, f0
/* 8013E4B8 0013B3F8  D0 1F 02 10 */	stfs f0, 0x210(r31)
/* 8013E4BC 0013B3FC  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 8013E4C0 0013B400  EC 00 18 2A */	fadds f0, f0, f3
/* 8013E4C4 0013B404  D0 1F 02 14 */	stfs f0, 0x214(r31)
/* 8013E4C8 0013B408  C0 1F 02 0C */	lfs f0, 0x20c(r31)
/* 8013E4CC 0013B40C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8013E4D0 0013B410  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 8013E4D4 0013B414  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8013E4D8 0013B418  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 8013E4DC 0013B41C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8013E4E0 0013B420  48 00 00 28 */	b .L_8013E508
.L_8013E4E4:
/* 8013E4E4 0013B424  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8013E4E8 0013B428  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 8013E4EC 0013B42C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8013E4F0 0013B430  D0 1F 02 10 */	stfs f0, 0x210(r31)
/* 8013E4F4 0013B434  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8013E4F8 0013B438  D0 1F 02 14 */	stfs f0, 0x214(r31)
/* 8013E4FC 0013B43C  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 8013E500 0013B440  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8013E504 0013B444  D0 1F 02 10 */	stfs f0, 0x210(r31)
.L_8013E508:
/* 8013E508 0013B448  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8013E50C 0013B44C  81 83 00 04 */	lwz r12, 4(r3)
/* 8013E510 0013B450  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013E514 0013B454  7D 89 03 A6 */	mtctr r12
/* 8013E518 0013B458  4E 80 04 21 */	bctrl 
/* 8013E51C 0013B45C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013E520 0013B460  41 82 00 68 */	beq .L_8013E588
/* 8013E524 0013B464  C0 1F 02 0C */	lfs f0, 0x20c(r31)
/* 8013E528 0013B468  38 81 00 08 */	addi r4, r1, 8
/* 8013E52C 0013B46C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8013E530 0013B470  D0 01 00 08 */	stfs f0, 8(r1)
/* 8013E534 0013B474  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 8013E538 0013B478  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8013E53C 0013B47C  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 8013E540 0013B480  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8013E544 0013B484  D3 E1 00 14 */	stfs f31, 0x14(r1)
/* 8013E548 0013B488  81 83 00 04 */	lwz r12, 4(r3)
/* 8013E54C 0013B48C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8013E550 0013B490  7D 89 03 A6 */	mtctr r12
/* 8013E554 0013B494  4E 80 04 21 */	bctrl 
/* 8013E558 0013B498  C0 01 00 08 */	lfs f0, 8(r1)
/* 8013E55C 0013B49C  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 8013E560 0013B4A0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8013E564 0013B4A4  D0 1F 02 10 */	stfs f0, 0x210(r31)
/* 8013E568 0013B4A8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8013E56C 0013B4AC  D0 1F 02 14 */	stfs f0, 0x214(r31)
/* 8013E570 0013B4B0  C0 1F 02 0C */	lfs f0, 0x20c(r31)
/* 8013E574 0013B4B4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8013E578 0013B4B8  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 8013E57C 0013B4BC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8013E580 0013B4C0  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 8013E584 0013B4C4  D0 01 00 2C */	stfs f0, 0x2c(r1)
.L_8013E588:
/* 8013E588 0013B4C8  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8013E58C 0013B4CC  D0 1F 02 18 */	stfs f0, 0x218(r31)
/* 8013E590 0013B4D0  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8013E594 0013B4D4  D0 1F 02 1C */	stfs f0, 0x21c(r31)
/* 8013E598 0013B4D8  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8013E59C 0013B4DC  D0 1F 02 20 */	stfs f0, 0x220(r31)
/* 8013E5A0 0013B4E0  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8013E5A4 0013B4E4  D0 1F 02 24 */	stfs f0, 0x224(r31)
/* 8013E5A8 0013B4E8  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 8013E5AC 0013B4EC  28 00 00 00 */	cmplwi r0, 0
/* 8013E5B0 0013B4F0  41 82 01 64 */	beq .L_8013E714
/* 8013E5B4 0013B4F4  7F E3 FB 78 */	mr r3, r31
/* 8013E5B8 0013B4F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013E5BC 0013B4FC  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 8013E5C0 0013B500  7D 89 03 A6 */	mtctr r12
/* 8013E5C4 0013B504  4E 80 04 21 */	bctrl 
/* 8013E5C8 0013B508  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013E5CC 0013B50C  40 82 01 48 */	bne .L_8013E714
/* 8013E5D0 0013B510  C0 3F 02 3C */	lfs f1, 0x23c(r31)
/* 8013E5D4 0013B514  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 8013E5D8 0013B518  C0 7F 02 38 */	lfs f3, 0x238(r31)
/* 8013E5DC 0013B51C  EC 81 00 28 */	fsubs f4, f1, f0
/* 8013E5E0 0013B520  C0 5F 02 0C */	lfs f2, 0x20c(r31)
/* 8013E5E4 0013B524  C0 3F 02 40 */	lfs f1, 0x240(r31)
/* 8013E5E8 0013B528  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 8013E5EC 0013B52C  EC 63 10 28 */	fsubs f3, f3, f2
/* 8013E5F0 0013B530  EC 84 01 32 */	fmuls f4, f4, f4
/* 8013E5F4 0013B534  EC 41 00 28 */	fsubs f2, f1, f0
/* 8013E5F8 0013B538  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013E5FC 0013B53C  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 8013E600 0013B540  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8013E604 0013B544  EC 22 08 2A */	fadds f1, f2, f1
/* 8013E608 0013B548  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013E60C 0013B54C  40 81 00 14 */	ble .L_8013E620
/* 8013E610 0013B550  40 81 00 14 */	ble .L_8013E624
/* 8013E614 0013B554  FC 00 08 34 */	frsqrte f0, f1
/* 8013E618 0013B558  EC 20 00 72 */	fmuls f1, f0, f1
/* 8013E61C 0013B55C  48 00 00 08 */	b .L_8013E624
.L_8013E620:
/* 8013E620 0013B560  FC 20 00 90 */	fmr f1, f0
.L_8013E624:
/* 8013E624 0013B564  C0 02 9F A4 */	lfs f0, lbl_80518304@sda21(r2)
/* 8013E628 0013B568  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013E62C 0013B56C  40 81 00 E8 */	ble .L_8013E714
/* 8013E630 0013B570  7F E3 FB 78 */	mr r3, r31
/* 8013E634 0013B574  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013E638 0013B578  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013E63C 0013B57C  7D 89 03 A6 */	mtctr r12
/* 8013E640 0013B580  4E 80 04 21 */	bctrl 
/* 8013E644 0013B584  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013E648 0013B588  41 82 00 0C */	beq .L_8013E654
/* 8013E64C 0013B58C  C3 82 9F B8 */	lfs f28, lbl_80518318@sda21(r2)
/* 8013E650 0013B590  48 00 00 6C */	b .L_8013E6BC
.L_8013E654:
/* 8013E654 0013B594  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 8013E658 0013B598  3B A0 00 00 */	li r29, 0
/* 8013E65C 0013B59C  3B 83 22 EC */	addi r28, r3, formationPikis__Q24Game8GameStat@l
/* 8013E660 0013B5A0  7F BE EB 78 */	mr r30, r29
.L_8013E664:
/* 8013E664 0013B5A4  7F 83 E3 78 */	mr r3, r28
/* 8013E668 0013B5A8  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013E66C 0013B5AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013E670 0013B5B0  7D 89 03 A6 */	mtctr r12
/* 8013E674 0013B5B4  4E 80 04 21 */	bctrl 
/* 8013E678 0013B5B8  3B DE 00 01 */	addi r30, r30, 1
/* 8013E67C 0013B5BC  7F BD 1A 14 */	add r29, r29, r3
/* 8013E680 0013B5C0  2C 1E 00 07 */	cmpwi r30, 7
/* 8013E684 0013B5C4  3B 9C 00 20 */	addi r28, r28, 0x20
/* 8013E688 0013B5C8  41 80 FF DC */	blt .L_8013E664
/* 8013E68C 0013B5CC  6F A3 80 00 */	xoris r3, r29, 0x8000
/* 8013E690 0013B5D0  3C 00 43 30 */	lis r0, 0x4330
/* 8013E694 0013B5D4  90 61 00 D4 */	stw r3, 0xd4(r1)
/* 8013E698 0013B5D8  C8 42 9F C8 */	lfd f2, lbl_80518328@sda21(r2)
/* 8013E69C 0013B5DC  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 8013E6A0 0013B5E0  C0 22 9F C0 */	lfs f1, lbl_80518320@sda21(r2)
/* 8013E6A4 0013B5E4  C8 01 00 D0 */	lfd f0, 0xd0(r1)
/* 8013E6A8 0013B5E8  C0 62 9F BC */	lfs f3, lbl_8051831C@sda21(r2)
/* 8013E6AC 0013B5EC  EC 40 10 28 */	fsubs f2, f0, f2
/* 8013E6B0 0013B5F0  C0 02 9F B8 */	lfs f0, lbl_80518318@sda21(r2)
/* 8013E6B4 0013B5F4  EC 22 08 24 */	fdivs f1, f2, f1
/* 8013E6B8 0013B5F8  EF 83 00 7A */	fmadds f28, f3, f1, f0
.L_8013E6BC:
/* 8013E6BC 0013B5FC  4B F8 AE E5 */	bl rand
/* 8013E6C0 0013B600  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8013E6C4 0013B604  3C 00 43 30 */	lis r0, 0x4330
/* 8013E6C8 0013B608  90 61 00 D4 */	stw r3, 0xd4(r1)
/* 8013E6CC 0013B60C  C8 42 9F C8 */	lfd f2, lbl_80518328@sda21(r2)
/* 8013E6D0 0013B610  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 8013E6D4 0013B614  C0 02 9F C4 */	lfs f0, lbl_80518324@sda21(r2)
/* 8013E6D8 0013B618  C8 21 00 D0 */	lfd f1, 0xd0(r1)
/* 8013E6DC 0013B61C  EC 21 10 28 */	fsubs f1, f1, f2
/* 8013E6E0 0013B620  EC 01 00 24 */	fdivs f0, f1, f0
/* 8013E6E4 0013B624  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 8013E6E8 0013B628  4C 40 13 82 */	cror 2, 0, 2
/* 8013E6EC 0013B62C  40 82 00 28 */	bne .L_8013E714
/* 8013E6F0 0013B630  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8013E6F4 0013B634  88 03 00 5C */	lbz r0, 0x5c(r3)
/* 8013E6F8 0013B638  28 00 00 08 */	cmplwi r0, 8
/* 8013E6FC 0013B63C  40 82 00 10 */	bne .L_8013E70C
/* 8013E700 0013B640  38 7F 02 0C */	addi r3, r31, 0x20c
/* 8013E704 0013B644  48 27 96 8D */	bl "createSimpleWalkwater__3efxFR10Vector3<f>"
/* 8013E708 0013B648  48 00 00 0C */	b .L_8013E714
.L_8013E70C:
/* 8013E70C 0013B64C  38 7F 02 0C */	addi r3, r31, 0x20c
/* 8013E710 0013B650  48 27 94 61 */	bl "createSimpleWalksmoke__3efxFR10Vector3<f>"
.L_8013E714:
/* 8013E714 0013B654  E3 E1 01 28 */	psq_l f31, 296(r1), 0, qr0
/* 8013E718 0013B658  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 8013E71C 0013B65C  E3 C1 01 18 */	psq_l f30, 280(r1), 0, qr0
/* 8013E720 0013B660  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 8013E724 0013B664  E3 A1 01 08 */	psq_l f29, 264(r1), 0, qr0
/* 8013E728 0013B668  CB A1 01 00 */	lfd f29, 0x100(r1)
/* 8013E72C 0013B66C  E3 81 00 F8 */	psq_l f28, 248(r1), 0, qr0
/* 8013E730 0013B670  CB 81 00 F0 */	lfd f28, 0xf0(r1)
/* 8013E734 0013B674  83 E1 00 EC */	lwz r31, 0xec(r1)
/* 8013E738 0013B678  83 C1 00 E8 */	lwz r30, 0xe8(r1)
/* 8013E73C 0013B67C  83 A1 00 E4 */	lwz r29, 0xe4(r1)
/* 8013E740 0013B680  80 01 01 34 */	lwz r0, 0x134(r1)
/* 8013E744 0013B684  83 81 00 E0 */	lwz r28, 0xe0(r1)
/* 8013E748 0013B688  7C 08 03 A6 */	mtlr r0
/* 8013E74C 0013B68C  38 21 01 30 */	addi r1, r1, 0x130
/* 8013E750 0013B690  4E 80 00 20 */	blr 
.endfn move__Q24Game8FakePikiFf

.fn __opi__Q34Game8GameStat11PikiCounterFv, weak
/* 8013E754 0013B694  80 A3 00 04 */	lwz r5, 4(r3)
/* 8013E758 0013B698  80 83 00 08 */	lwz r4, 8(r3)
/* 8013E75C 0013B69C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8013E760 0013B6A0  7C A5 22 14 */	add r5, r5, r4
/* 8013E764 0013B6A4  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8013E768 0013B6A8  7C A5 02 14 */	add r5, r5, r0
/* 8013E76C 0013B6AC  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8013E770 0013B6B0  7C A5 22 14 */	add r5, r5, r4
/* 8013E774 0013B6B4  80 83 00 18 */	lwz r4, 0x18(r3)
/* 8013E778 0013B6B8  7C A5 02 14 */	add r5, r5, r0
/* 8013E77C 0013B6BC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8013E780 0013B6C0  7C A5 22 14 */	add r5, r5, r4
/* 8013E784 0013B6C4  7C A5 02 14 */	add r5, r5, r0
/* 8013E788 0013B6C8  7C A3 2B 78 */	mr r3, r5
/* 8013E78C 0013B6CC  4E 80 00 20 */	blr 
.endfn __opi__Q34Game8GameStat11PikiCounterFv

.fn inWater__Q24Game8FakePikiFv, weak
/* 8013E790 0013B6D0  80 63 01 90 */	lwz r3, 0x190(r3)
/* 8013E794 0013B6D4  7C 03 00 D0 */	neg r0, r3
/* 8013E798 0013B6D8  7C 00 1B 78 */	or r0, r0, r3
/* 8013E79C 0013B6DC  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8013E7A0 0013B6E0  4E 80 00 20 */	blr 
.endfn inWater__Q24Game8FakePikiFv

.fn "wallCallback__Q24Game8FakePikiFR10Vector3<f>", weak
/* 8013E7A4 0013B6E4  4E 80 00 20 */	blr 
.endfn "wallCallback__Q24Game8FakePikiFR10Vector3<f>"

.fn useMapCollision__Q24Game8FakePikiFv, weak
/* 8013E7A8 0013B6E8  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013E7AC 0013B6EC  54 00 07 38 */	rlwinm r0, r0, 0, 0x1c, 0x1c
/* 8013E7B0 0013B6F0  7C 00 00 34 */	cntlzw r0, r0
/* 8013E7B4 0013B6F4  54 03 D9 7E */	srwi r3, r0, 5
/* 8013E7B8 0013B6F8  4E 80 00 20 */	blr 
.endfn useMapCollision__Q24Game8FakePikiFv

.fn getMapCollisionRadius__Q24Game8FakePikiFv, weak
/* 8013E7BC 0013B6FC  C0 22 9F 50 */	lfs f1, lbl_805182B0@sda21(r2)
/* 8013E7C0 0013B700  4E 80 00 20 */	blr 
.endfn getMapCollisionRadius__Q24Game8FakePikiFv

.fn doEntry__Q24Game8FakePikiFv, global
/* 8013E7C4 0013B704  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013E7C8 0013B708  7C 08 02 A6 */	mflr r0
/* 8013E7CC 0013B70C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013E7D0 0013B710  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013E7D4 0013B714  7C 7F 1B 78 */	mr r31, r3
/* 8013E7D8 0013B718  81 83 00 00 */	lwz r12, 0(r3)
/* 8013E7DC 0013B71C  81 8C 01 C4 */	lwz r12, 0x1c4(r12)
/* 8013E7E0 0013B720  7D 89 03 A6 */	mtctr r12
/* 8013E7E4 0013B724  4E 80 04 21 */	bctrl 
/* 8013E7E8 0013B728  88 1F 00 D8 */	lbz r0, 0xd8(r31)
/* 8013E7EC 0013B72C  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8013E7F0 0013B730  41 82 00 1C */	beq .L_8013E80C
/* 8013E7F4 0013B734  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8013E7F8 0013B738  81 83 00 00 */	lwz r12, 0(r3)
/* 8013E7FC 0013B73C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013E800 0013B740  7D 89 03 A6 */	mtctr r12
/* 8013E804 0013B744  4E 80 04 21 */	bctrl 
/* 8013E808 0013B748  48 00 00 4C */	b .L_8013E854
.L_8013E80C:
/* 8013E80C 0013B74C  88 0D 84 68 */	lbz r0, sEntryOpt__Q24Game12BaseHIOParms@sda21(r13)
/* 8013E810 0013B750  28 00 00 00 */	cmplwi r0, 0
/* 8013E814 0013B754  41 82 00 2C */	beq .L_8013E840
/* 8013E818 0013B758  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8013E81C 0013B75C  38 60 00 00 */	li r3, 0
/* 8013E820 0013B760  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8013E824 0013B764  2C 00 00 01 */	cmpwi r0, 1
/* 8013E828 0013B768  41 82 00 0C */	beq .L_8013E834
/* 8013E82C 0013B76C  2C 00 00 03 */	cmpwi r0, 3
/* 8013E830 0013B770  40 82 00 08 */	bne .L_8013E838
.L_8013E834:
/* 8013E834 0013B774  38 60 00 01 */	li r3, 1
.L_8013E838:
/* 8013E838 0013B778  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013E83C 0013B77C  41 82 00 30 */	beq .L_8013E86C
.L_8013E840:
/* 8013E840 0013B780  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8013E844 0013B784  81 83 00 00 */	lwz r12, 0(r3)
/* 8013E848 0013B788  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8013E84C 0013B78C  7D 89 03 A6 */	mtctr r12
/* 8013E850 0013B790  4E 80 04 21 */	bctrl 
.L_8013E854:
/* 8013E854 0013B794  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8013E858 0013B798  80 63 00 08 */	lwz r3, 8(r3)
/* 8013E85C 0013B79C  81 83 00 00 */	lwz r12, 0(r3)
/* 8013E860 0013B7A0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8013E864 0013B7A4  7D 89 03 A6 */	mtctr r12
/* 8013E868 0013B7A8  4E 80 04 21 */	bctrl 
.L_8013E86C:
/* 8013E86C 0013B7AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013E870 0013B7B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013E874 0013B7B4  7C 08 03 A6 */	mtlr r0
/* 8013E878 0013B7B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8013E87C 0013B7BC  4E 80 00 20 */	blr 
.endfn doEntry__Q24Game8FakePikiFv

.fn doColorChange__Q24Game8FakePikiFv, weak
/* 8013E880 0013B7C0  4E 80 00 20 */	blr 
.endfn doColorChange__Q24Game8FakePikiFv

.fn doAnimation__Q24Game8FakePikiFv, global
/* 8013E884 0013B7C4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8013E888 0013B7C8  7C 08 02 A6 */	mflr r0
/* 8013E88C 0013B7CC  90 01 00 64 */	stw r0, 0x64(r1)
/* 8013E890 0013B7D0  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8013E894 0013B7D4  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8013E898 0013B7D8  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8013E89C 0013B7DC  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8013E8A0 0013B7E0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8013E8A4 0013B7E4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8013E8A8 0013B7E8  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8013E8AC 0013B7EC  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8013E8B0 0013B7F0  7C 7E 1B 78 */	mr r30, r3
/* 8013E8B4 0013B7F4  3C C0 80 48 */	lis r6, lbl_8047C708@ha
/* 8013E8B8 0013B7F8  38 82 9F D0 */	addi r4, r2, lbl_80518330@sda21
/* 8013E8BC 0013B7FC  80 65 00 28 */	lwz r3, 0x28(r5)
/* 8013E8C0 0013B800  3B E6 C7 08 */	addi r31, r6, lbl_8047C708@l
/* 8013E8C4 0013B804  38 A0 00 01 */	li r5, 1
/* 8013E8C8 0013B808  48 2E C2 31 */	bl _start__9SysTimersFPcb
/* 8013E8CC 0013B80C  38 61 00 18 */	addi r3, r1, 0x18
/* 8013E8D0 0013B810  48 09 8F 39 */	bl __ct__Q24Game9AILODParmFv
/* 8013E8D4 0013B814  C0 22 9F 60 */	lfs f1, lbl_805182C0@sda21(r2)
/* 8013E8D8 0013B818  7F C3 F3 78 */	mr r3, r30
/* 8013E8DC 0013B81C  C0 02 9F D8 */	lfs f0, lbl_80518338@sda21(r2)
/* 8013E8E0 0013B820  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8013E8E4 0013B824  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8013E8E8 0013B828  4B FF D4 81 */	bl updateCell__Q24Game8CreatureFv
/* 8013E8EC 0013B82C  7F C3 F3 78 */	mr r3, r30
/* 8013E8F0 0013B830  38 81 00 18 */	addi r4, r1, 0x18
/* 8013E8F4 0013B834  48 09 8F 49 */	bl updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
/* 8013E8F8 0013B838  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8013E8FC 0013B83C  38 82 9F D0 */	addi r4, r2, lbl_80518330@sda21
/* 8013E900 0013B840  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8013E904 0013B844  48 2E C1 F9 */	bl _stop__9SysTimersFPc
/* 8013E908 0013B848  7F C3 F3 78 */	mr r3, r30
/* 8013E90C 0013B84C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8013E910 0013B850  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013E914 0013B854  C3 E4 00 54 */	lfs f31, 0x54(r4)
/* 8013E918 0013B858  81 8C 00 C0 */	lwz r12, 0xc0(r12)
/* 8013E91C 0013B85C  7D 89 03 A6 */	mtctr r12
/* 8013E920 0013B860  4E 80 04 21 */	bctrl 
/* 8013E924 0013B864  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013E928 0013B868  41 82 00 0C */	beq .L_8013E934
/* 8013E92C 0013B86C  C0 02 9F 58 */	lfs f0, lbl_805182B8@sda21(r2)
/* 8013E930 0013B870  D0 1E 02 34 */	stfs f0, 0x234(r30)
.L_8013E934:
/* 8013E934 0013B874  7F C3 F3 78 */	mr r3, r30
/* 8013E938 0013B878  C0 1E 02 34 */	lfs f0, 0x234(r30)
/* 8013E93C 0013B87C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013E940 0013B880  EF C0 07 F2 */	fmuls f30, f0, f31
/* 8013E944 0013B884  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8013E948 0013B888  7D 89 03 A6 */	mtctr r12
/* 8013E94C 0013B88C  4E 80 04 21 */	bctrl 
/* 8013E950 0013B890  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013E954 0013B894  41 82 00 1C */	beq .L_8013E970
/* 8013E958 0013B898  7F C3 F3 78 */	mr r3, r30
/* 8013E95C 0013B89C  48 00 B6 85 */	bl doped__Q24Game4PikiFv
/* 8013E960 0013B8A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013E964 0013B8A4  41 82 00 0C */	beq .L_8013E970
/* 8013E968 0013B8A8  C0 02 9F DC */	lfs f0, lbl_8051833C@sda21(r2)
/* 8013E96C 0013B8AC  EF DE 00 32 */	fmuls f30, f30, f0
.L_8013E970:
/* 8013E970 0013B8B0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8013E974 0013B8B4  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 8013E978 0013B8B8  28 00 00 00 */	cmplwi r0, 0
/* 8013E97C 0013B8BC  40 82 00 3C */	bne .L_8013E9B8
/* 8013E980 0013B8C0  38 7E 01 AC */	addi r3, r30, 0x1ac
/* 8013E984 0013B8C4  FC 20 F0 90 */	fmr f1, f30
/* 8013E988 0013B8C8  81 9E 01 AC */	lwz r12, 0x1ac(r30)
/* 8013E98C 0013B8CC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8013E990 0013B8D0  7D 89 03 A6 */	mtctr r12
/* 8013E994 0013B8D4  4E 80 04 21 */	bctrl 
/* 8013E998 0013B8D8  38 00 00 00 */	li r0, 0
/* 8013E99C 0013B8DC  38 7E 01 C8 */	addi r3, r30, 0x1c8
/* 8013E9A0 0013B8E0  98 0D 9B 28 */	stb r0, verbose__Q28SysShape8Animator@sda21(r13)
/* 8013E9A4 0013B8E4  FC 20 F0 90 */	fmr f1, f30
/* 8013E9A8 0013B8E8  81 9E 01 C8 */	lwz r12, 0x1c8(r30)
/* 8013E9AC 0013B8EC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8013E9B0 0013B8F0  7D 89 03 A6 */	mtctr r12
/* 8013E9B4 0013B8F4  4E 80 04 21 */	bctrl 
.L_8013E9B8:
/* 8013E9B8 0013B8F8  7F C3 F3 78 */	mr r3, r30
/* 8013E9BC 0013B8FC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013E9C0 0013B900  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8013E9C4 0013B904  7D 89 03 A6 */	mtctr r12
/* 8013E9C8 0013B908  4E 80 04 21 */	bctrl 
/* 8013E9CC 0013B90C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013E9D0 0013B910  41 82 00 80 */	beq .L_8013EA50
/* 8013E9D4 0013B914  88 1E 00 D8 */	lbz r0, 0xd8(r30)
/* 8013E9D8 0013B918  54 00 07 BE */	clrlwi r0, r0, 0x1e
/* 8013E9DC 0013B91C  2C 00 00 01 */	cmpwi r0, 1
/* 8013E9E0 0013B920  41 80 00 70 */	blt .L_8013EA50
/* 8013E9E4 0013B924  80 1E 01 74 */	lwz r0, 0x174(r30)
/* 8013E9E8 0013B928  28 00 00 00 */	cmplwi r0, 0
/* 8013E9EC 0013B92C  40 82 00 2C */	bne .L_8013EA18
/* 8013E9F0 0013B930  7F C3 F3 78 */	mr r3, r30
/* 8013E9F4 0013B934  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013E9F8 0013B938  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8013E9FC 0013B93C  7D 89 03 A6 */	mtctr r12
/* 8013EA00 0013B940  4E 80 04 21 */	bctrl 
/* 8013EA04 0013B944  38 7F 00 18 */	addi r3, r31, 0x18
/* 8013EA08 0013B948  38 BF 00 40 */	addi r5, r31, 0x40
/* 8013EA0C 0013B94C  38 80 06 9E */	li r4, 0x69e
/* 8013EA10 0013B950  4C C6 31 82 */	crclr 6
/* 8013EA14 0013B954  4B EE BC 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8013EA18:
/* 8013EA18 0013B958  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8013EA1C 0013B95C  38 00 00 00 */	li r0, 0
/* 8013EA20 0013B960  80 63 00 08 */	lwz r3, 8(r3)
/* 8013EA24 0013B964  80 63 00 04 */	lwz r3, 4(r3)
/* 8013EA28 0013B968  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8013EA2C 0013B96C  80 63 00 00 */	lwz r3, 0(r3)
/* 8013EA30 0013B970  90 03 00 54 */	stw r0, 0x54(r3)
/* 8013EA34 0013B974  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8013EA38 0013B978  80 63 00 08 */	lwz r3, 8(r3)
/* 8013EA3C 0013B97C  80 63 00 04 */	lwz r3, 4(r3)
/* 8013EA40 0013B980  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8013EA44 0013B984  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8013EA48 0013B988  90 03 00 54 */	stw r0, 0x54(r3)
/* 8013EA4C 0013B98C  48 00 00 5C */	b .L_8013EAA8
.L_8013EA50:
/* 8013EA50 0013B990  38 7E 01 C8 */	addi r3, r30, 0x1c8
/* 8013EA54 0013B994  83 BE 01 74 */	lwz r29, 0x174(r30)
/* 8013EA58 0013B998  81 9E 01 C8 */	lwz r12, 0x1c8(r30)
/* 8013EA5C 0013B99C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013EA60 0013B9A0  7D 89 03 A6 */	mtctr r12
/* 8013EA64 0013B9A4  4E 80 04 21 */	bctrl 
/* 8013EA68 0013B9A8  80 9D 00 08 */	lwz r4, 8(r29)
/* 8013EA6C 0013B9AC  80 84 00 04 */	lwz r4, 4(r4)
/* 8013EA70 0013B9B0  80 84 00 28 */	lwz r4, 0x28(r4)
/* 8013EA74 0013B9B4  80 84 00 00 */	lwz r4, 0(r4)
/* 8013EA78 0013B9B8  90 64 00 54 */	stw r3, 0x54(r4)
/* 8013EA7C 0013B9BC  38 7E 01 AC */	addi r3, r30, 0x1ac
/* 8013EA80 0013B9C0  81 9E 01 AC */	lwz r12, 0x1ac(r30)
/* 8013EA84 0013B9C4  83 BE 01 74 */	lwz r29, 0x174(r30)
/* 8013EA88 0013B9C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013EA8C 0013B9CC  7D 89 03 A6 */	mtctr r12
/* 8013EA90 0013B9D0  4E 80 04 21 */	bctrl 
/* 8013EA94 0013B9D4  80 9D 00 08 */	lwz r4, 8(r29)
/* 8013EA98 0013B9D8  80 84 00 04 */	lwz r4, 4(r4)
/* 8013EA9C 0013B9DC  80 84 00 28 */	lwz r4, 0x28(r4)
/* 8013EAA0 0013B9E0  80 84 00 10 */	lwz r4, 0x10(r4)
/* 8013EAA4 0013B9E4  90 64 00 54 */	stw r3, 0x54(r4)
.L_8013EAA8:
/* 8013EAA8 0013B9E8  38 00 00 00 */	li r0, 0
/* 8013EAAC 0013B9EC  7F C3 F3 78 */	mr r3, r30
/* 8013EAB0 0013B9F0  98 0D 9B 28 */	stb r0, verbose__Q28SysShape8Animator@sda21(r13)
/* 8013EAB4 0013B9F4  C0 1E 02 0C */	lfs f0, 0x20c(r30)
/* 8013EAB8 0013B9F8  D0 1E 02 38 */	stfs f0, 0x238(r30)
/* 8013EABC 0013B9FC  C0 1E 02 10 */	lfs f0, 0x210(r30)
/* 8013EAC0 0013BA00  D0 1E 02 3C */	stfs f0, 0x23c(r30)
/* 8013EAC4 0013BA04  C0 1E 02 14 */	lfs f0, 0x214(r30)
/* 8013EAC8 0013BA08  D0 1E 02 40 */	stfs f0, 0x240(r30)
/* 8013EACC 0013BA0C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013EAD0 0013BA10  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 8013EAD4 0013BA14  7D 89 03 A6 */	mtctr r12
/* 8013EAD8 0013BA18  4E 80 04 21 */	bctrl 
/* 8013EADC 0013BA1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013EAE0 0013BA20  40 82 00 20 */	bne .L_8013EB00
/* 8013EAE4 0013BA24  7F C3 F3 78 */	mr r3, r30
/* 8013EAE8 0013BA28  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013EAEC 0013BA2C  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8013EAF0 0013BA30  7D 89 03 A6 */	mtctr r12
/* 8013EAF4 0013BA34  4E 80 04 21 */	bctrl 
/* 8013EAF8 0013BA38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013EAFC 0013BA3C  40 82 00 C0 */	bne .L_8013EBBC
.L_8013EB00:
/* 8013EB00 0013BA40  80 1E 02 48 */	lwz r0, 0x248(r30)
/* 8013EB04 0013BA44  28 00 00 00 */	cmplwi r0, 0
/* 8013EB08 0013BA48  41 82 00 B4 */	beq .L_8013EBBC
/* 8013EB0C 0013BA4C  7F C3 F3 78 */	mr r3, r30
/* 8013EB10 0013BA50  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013EB14 0013BA54  81 8C 01 E4 */	lwz r12, 0x1e4(r12)
/* 8013EB18 0013BA58  7D 89 03 A6 */	mtctr r12
/* 8013EB1C 0013BA5C  4E 80 04 21 */	bctrl 
/* 8013EB20 0013BA60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013EB24 0013BA64  40 82 00 10 */	bne .L_8013EB34
/* 8013EB28 0013BA68  80 1E 00 C8 */	lwz r0, 0xc8(r30)
/* 8013EB2C 0013BA6C  28 00 00 00 */	cmplwi r0, 0
/* 8013EB30 0013BA70  40 82 00 0C */	bne .L_8013EB3C
.L_8013EB34:
/* 8013EB34 0013BA74  7F C3 F3 78 */	mr r3, r30
/* 8013EB38 0013BA78  4B FF F0 FD */	bl moveVelocity__Q24Game8FakePikiFv
.L_8013EB3C:
/* 8013EB3C 0013BA7C  7F C3 F3 78 */	mr r3, r30
/* 8013EB40 0013BA80  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013EB44 0013BA84  81 8C 01 D4 */	lwz r12, 0x1d4(r12)
/* 8013EB48 0013BA88  7D 89 03 A6 */	mtctr r12
/* 8013EB4C 0013BA8C  4E 80 04 21 */	bctrl 
/* 8013EB50 0013BA90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013EB54 0013BA94  41 82 00 68 */	beq .L_8013EBBC
/* 8013EB58 0013BA98  C0 3E 01 E4 */	lfs f1, 0x1e4(r30)
/* 8013EB5C 0013BA9C  C0 5E 01 EC */	lfs f2, 0x1ec(r30)
/* 8013EB60 0013BAA0  EC 81 00 72 */	fmuls f4, f1, f1
/* 8013EB64 0013BAA4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8013EB68 0013BAA8  EC 62 00 B2 */	fmuls f3, f2, f2
/* 8013EB6C 0013BAAC  C0 02 9F A4 */	lfs f0, lbl_80518304@sda21(r2)
/* 8013EB70 0013BAB0  C3 C3 00 54 */	lfs f30, 0x54(r3)
/* 8013EB74 0013BAB4  EC 64 18 2A */	fadds f3, f4, f3
/* 8013EB78 0013BAB8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8013EB7C 0013BABC  40 81 00 40 */	ble .L_8013EBBC
/* 8013EB80 0013BAC0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8013EB84 0013BAC4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8013EB88 0013BAC8  4B EF 65 81 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8013EB8C 0013BACC  C0 5E 01 FC */	lfs f2, 0x1fc(r30)
/* 8013EB90 0013BAD0  48 2D 30 6D */	bl angDist__Fff
/* 8013EB94 0013BAD4  C0 02 9F B0 */	lfs f0, lbl_80518310@sda21(r2)
/* 8013EB98 0013BAD8  C0 42 9F 5C */	lfs f2, lbl_805182BC@sda21(r2)
/* 8013EB9C 0013BADC  EC 20 00 72 */	fmuls f1, f0, f1
/* 8013EBA0 0013BAE0  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 8013EBA4 0013BAE4  EC 3E 00 72 */	fmuls f1, f30, f1
/* 8013EBA8 0013BAE8  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8013EBAC 0013BAEC  D0 1E 01 FC */	stfs f0, 0x1fc(r30)
/* 8013EBB0 0013BAF0  C0 3E 01 FC */	lfs f1, 0x1fc(r30)
/* 8013EBB4 0013BAF4  48 2D 30 1D */	bl roundAng__Ff
/* 8013EBB8 0013BAF8  D0 3E 01 FC */	stfs f1, 0x1fc(r30)
.L_8013EBBC:
/* 8013EBBC 0013BAFC  7F C3 F3 78 */	mr r3, r30
/* 8013EBC0 0013BB00  38 81 00 08 */	addi r4, r1, 8
/* 8013EBC4 0013BB04  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013EBC8 0013BB08  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8013EBCC 0013BB0C  7D 89 03 A6 */	mtctr r12
/* 8013EBD0 0013BB10  4E 80 04 21 */	bctrl 
/* 8013EBD4 0013BB14  80 9E 01 90 */	lwz r4, 0x190(r30)
/* 8013EBD8 0013BB18  7F C3 F3 78 */	mr r3, r30
/* 8013EBDC 0013BB1C  38 A1 00 08 */	addi r5, r1, 8
/* 8013EBE0 0013BB20  4B FF CF 5D */	bl checkWater__Q24Game8CreatureFPQ24Game8WaterBoxRQ23Sys6Sphere
/* 8013EBE4 0013BB24  90 7E 01 90 */	stw r3, 0x190(r30)
/* 8013EBE8 0013BB28  80 0D 93 08 */	lwz r0, mapMgr__4Game@sda21(r13)
/* 8013EBEC 0013BB2C  28 00 00 00 */	cmplwi r0, 0
/* 8013EBF0 0013BB30  41 82 00 18 */	beq .L_8013EC08
/* 8013EBF4 0013BB34  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 8013EBF8 0013BB38  C0 1E 02 04 */	lfs f0, 0x204(r30)
/* 8013EBFC 0013BB3C  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 8013EC00 0013BB40  EC 1F 00 7C */	fnmsubs f0, f31, f1, f0
/* 8013EC04 0013BB44  D0 1E 02 04 */	stfs f0, 0x204(r30)
.L_8013EC08:
/* 8013EC08 0013BB48  7F C3 F3 78 */	mr r3, r30
/* 8013EC0C 0013BB4C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013EC10 0013BB50  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 8013EC14 0013BB54  7D 89 03 A6 */	mtctr r12
/* 8013EC18 0013BB58  4E 80 04 21 */	bctrl 
/* 8013EC1C 0013BB5C  7F C3 F3 78 */	mr r3, r30
/* 8013EC20 0013BB60  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013EC24 0013BB64  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013EC28 0013BB68  7D 89 03 A6 */	mtctr r12
/* 8013EC2C 0013BB6C  4E 80 04 21 */	bctrl 
/* 8013EC30 0013BB70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013EC34 0013BB74  41 82 00 34 */	beq .L_8013EC68
/* 8013EC38 0013BB78  80 7E 02 50 */	lwz r3, 0x250(r30)
/* 8013EC3C 0013BB7C  80 03 00 04 */	lwz r0, 4(r3)
/* 8013EC40 0013BB80  28 00 00 00 */	cmplwi r0, 0
/* 8013EC44 0013BB84  41 82 00 24 */	beq .L_8013EC68
/* 8013EC48 0013BB88  38 9E 01 38 */	addi r4, r30, 0x138
/* 8013EC4C 0013BB8C  48 02 71 55 */	bl viewMakeMatrix__Q24Game10PelletViewFR7Matrixf
/* 8013EC50 0013BB90  C0 3E 01 54 */	lfs f1, 0x154(r30)
/* 8013EC54 0013BB94  C0 5E 01 64 */	lfs f2, 0x164(r30)
/* 8013EC58 0013BB98  C0 1E 01 44 */	lfs f0, 0x144(r30)
/* 8013EC5C 0013BB9C  D0 1E 02 0C */	stfs f0, 0x20c(r30)
/* 8013EC60 0013BBA0  D0 3E 02 10 */	stfs f1, 0x210(r30)
/* 8013EC64 0013BBA4  D0 5E 02 14 */	stfs f2, 0x214(r30)
.L_8013EC68:
/* 8013EC68 0013BBA8  80 9E 01 74 */	lwz r4, 0x174(r30)
/* 8013EC6C 0013BBAC  38 7E 01 38 */	addi r3, r30, 0x138
/* 8013EC70 0013BBB0  80 84 00 08 */	lwz r4, 8(r4)
/* 8013EC74 0013BBB4  38 84 00 24 */	addi r4, r4, 0x24
/* 8013EC78 0013BBB8  4B FA B6 55 */	bl PSMTXCopy
/* 8013EC7C 0013BBBC  C0 1E 01 98 */	lfs f0, 0x198(r30)
/* 8013EC80 0013BBC0  38 9F 00 50 */	addi r4, r31, 0x50
/* 8013EC84 0013BBC4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8013EC88 0013BBC8  38 A0 00 01 */	li r5, 1
/* 8013EC8C 0013BBCC  D0 0D 92 88 */	stfs f0, sCurrNeckTheta__Q24Game8FakePiki@sda21(r13)
/* 8013EC90 0013BBD0  C0 1E 01 9C */	lfs f0, 0x19c(r30)
/* 8013EC94 0013BBD4  D0 0D 92 8C */	stfs f0, sCurrNeckPhi__Q24Game8FakePiki@sda21(r13)
/* 8013EC98 0013BBD8  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8013EC9C 0013BBDC  48 2E BE 5D */	bl _start__9SysTimersFPcb
/* 8013ECA0 0013BBE0  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8013ECA4 0013BBE4  80 63 00 08 */	lwz r3, 8(r3)
/* 8013ECA8 0013BBE8  81 83 00 00 */	lwz r12, 0(r3)
/* 8013ECAC 0013BBEC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8013ECB0 0013BBF0  7D 89 03 A6 */	mtctr r12
/* 8013ECB4 0013BBF4  4E 80 04 21 */	bctrl 
/* 8013ECB8 0013BBF8  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8013ECBC 0013BBFC  4B FF 6D E1 */	bl update__8CollTreeFv
/* 8013ECC0 0013BC00  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8013ECC4 0013BC04  38 9F 00 50 */	addi r4, r31, 0x50
/* 8013ECC8 0013BC08  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8013ECCC 0013BC0C  48 2E BE 31 */	bl _stop__9SysTimersFPc
/* 8013ECD0 0013BC10  80 7E 01 88 */	lwz r3, 0x188(r30)
/* 8013ECD4 0013BC14  28 03 00 00 */	cmplwi r3, 0
/* 8013ECD8 0013BC18  41 82 00 14 */	beq .L_8013ECEC
/* 8013ECDC 0013BC1C  81 83 00 00 */	lwz r12, 0(r3)
/* 8013ECE0 0013BC20  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013ECE4 0013BC24  7D 89 03 A6 */	mtctr r12
/* 8013ECE8 0013BC28  4E 80 04 21 */	bctrl 
.L_8013ECEC:
/* 8013ECEC 0013BC2C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8013ECF0 0013BC30  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8013ECF4 0013BC34  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8013ECF8 0013BC38  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8013ECFC 0013BC3C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8013ED00 0013BC40  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8013ED04 0013BC44  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8013ED08 0013BC48  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8013ED0C 0013BC4C  7C 08 03 A6 */	mtlr r0
/* 8013ED10 0013BC50  38 21 00 60 */	addi r1, r1, 0x60
/* 8013ED14 0013BC54  4E 80 00 20 */	blr 
.endfn doAnimation__Q24Game8FakePikiFv

.fn getBoundingSphere__Q24Game8FakePikiFRQ23Sys6Sphere, weak
/* 8013ED18 0013BC58  C0 03 02 18 */	lfs f0, 0x218(r3)
/* 8013ED1C 0013BC5C  D0 04 00 00 */	stfs f0, 0(r4)
/* 8013ED20 0013BC60  C0 03 02 1C */	lfs f0, 0x21c(r3)
/* 8013ED24 0013BC64  D0 04 00 04 */	stfs f0, 4(r4)
/* 8013ED28 0013BC68  C0 03 02 20 */	lfs f0, 0x220(r3)
/* 8013ED2C 0013BC6C  D0 04 00 08 */	stfs f0, 8(r4)
/* 8013ED30 0013BC70  C0 03 02 24 */	lfs f0, 0x224(r3)
/* 8013ED34 0013BC74  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 8013ED38 0013BC78  4E 80 00 20 */	blr 
.endfn getBoundingSphere__Q24Game8FakePikiFRQ23Sys6Sphere

.fn useMoveVelocity__Q24Game8FakePikiFv, weak
/* 8013ED3C 0013BC7C  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013ED40 0013BC80  54 00 07 7A */	rlwinm r0, r0, 0, 0x1d, 0x1d
/* 8013ED44 0013BC84  7C 00 00 34 */	cntlzw r0, r0
/* 8013ED48 0013BC88  54 03 D9 7E */	srwi r3, r0, 5
/* 8013ED4C 0013BC8C  4E 80 00 20 */	blr 
.endfn useMoveVelocity__Q24Game8FakePikiFv

.fn updateTrMatrix__Q24Game8FakePikiFv, global
/* 8013ED50 0013BC90  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013ED54 0013BC94  7C 08 02 A6 */	mflr r0
/* 8013ED58 0013BC98  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013ED5C 0013BC9C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013ED60 0013BCA0  7C 7F 1B 78 */	mr r31, r3
/* 8013ED64 0013BCA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8013ED68 0013BCA8  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 8013ED6C 0013BCAC  7D 89 03 A6 */	mtctr r12
/* 8013ED70 0013BCB0  4E 80 04 21 */	bctrl 
/* 8013ED74 0013BCB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013ED78 0013BCB8  41 82 00 3C */	beq .L_8013EDB4
/* 8013ED7C 0013BCBC  7F E3 FB 78 */	mr r3, r31
/* 8013ED80 0013BCC0  48 06 07 F5 */	bl isStickTo__Q24Game8CreatureFv
/* 8013ED84 0013BCC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013ED88 0013BCC8  40 82 00 2C */	bne .L_8013EDB4
/* 8013ED8C 0013BCCC  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 8013ED90 0013BCD0  38 7F 01 38 */	addi r3, r31, 0x138
/* 8013ED94 0013BCD4  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013ED98 0013BCD8  38 9F 01 68 */	addi r4, r31, 0x168
/* 8013ED9C 0013BCDC  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8013EDA0 0013BCE0  38 A1 00 08 */	addi r5, r1, 8
/* 8013EDA4 0013BCE4  38 DF 02 0C */	addi r6, r31, 0x20c
/* 8013EDA8 0013BCE8  D0 01 00 08 */	stfs f0, 8(r1)
/* 8013EDAC 0013BCEC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8013EDB0 0013BCF0  48 2E 95 29 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
.L_8013EDB4:
/* 8013EDB4 0013BCF4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013EDB8 0013BCF8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013EDBC 0013BCFC  7C 08 03 A6 */	mtlr r0
/* 8013EDC0 0013BD00  38 21 00 20 */	addi r1, r1, 0x20
/* 8013EDC4 0013BD04  4E 80 00 20 */	blr 
.endfn updateTrMatrix__Q24Game8FakePikiFv

.fn useUpdateTrMatrix__Q24Game8FakePikiFv, weak
/* 8013EDC8 0013BD08  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013EDCC 0013BD0C  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8013EDD0 0013BD10  7C 00 00 34 */	cntlzw r0, r0
/* 8013EDD4 0013BD14  54 03 D9 7E */	srwi r3, r0, 5
/* 8013EDD8 0013BD18  4E 80 00 20 */	blr 
.endfn useUpdateTrMatrix__Q24Game8FakePikiFv

.fn doSimulation__Q24Game8FakePikiFf, global
/* 8013EDDC 0013BD1C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8013EDE0 0013BD20  7C 08 02 A6 */	mflr r0
/* 8013EDE4 0013BD24  90 01 00 64 */	stw r0, 0x64(r1)
/* 8013EDE8 0013BD28  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8013EDEC 0013BD2C  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8013EDF0 0013BD30  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8013EDF4 0013BD34  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8013EDF8 0013BD38  81 83 00 00 */	lwz r12, 0(r3)
/* 8013EDFC 0013BD3C  FF E0 08 90 */	fmr f31, f1
/* 8013EE00 0013BD40  7C 7F 1B 78 */	mr r31, r3
/* 8013EE04 0013BD44  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 8013EE08 0013BD48  7D 89 03 A6 */	mtctr r12
/* 8013EE0C 0013BD4C  4E 80 04 21 */	bctrl 
/* 8013EE10 0013BD50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013EE14 0013BD54  40 82 01 04 */	bne .L_8013EF18
/* 8013EE18 0013BD58  7F E3 FB 78 */	mr r3, r31
/* 8013EE1C 0013BD5C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013EE20 0013BD60  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8013EE24 0013BD64  7D 89 03 A6 */	mtctr r12
/* 8013EE28 0013BD68  4E 80 04 21 */	bctrl 
/* 8013EE2C 0013BD6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013EE30 0013BD70  41 82 00 4C */	beq .L_8013EE7C
/* 8013EE34 0013BD74  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8013EE38 0013BD78  88 03 00 39 */	lbz r0, 0x39(r3)
/* 8013EE3C 0013BD7C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8013EE40 0013BD80  41 82 00 A0 */	beq .L_8013EEE0
/* 8013EE44 0013BD84  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013EE48 0013BD88  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8013EE4C 0013BD8C  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 8013EE50 0013BD90  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8013EE54 0013BD94  D0 1F 01 1C */	stfs f0, 0x11c(r31)
/* 8013EE58 0013BD98  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 8013EE5C 0013BD9C  D0 1F 01 24 */	stfs f0, 0x124(r31)
/* 8013EE60 0013BDA0  C0 1F 02 0C */	lfs f0, 0x20c(r31)
/* 8013EE64 0013BDA4  D0 1F 02 18 */	stfs f0, 0x218(r31)
/* 8013EE68 0013BDA8  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 8013EE6C 0013BDAC  D0 1F 02 1C */	stfs f0, 0x21c(r31)
/* 8013EE70 0013BDB0  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 8013EE74 0013BDB4  D0 1F 02 20 */	stfs f0, 0x220(r31)
/* 8013EE78 0013BDB8  48 00 04 A4 */	b .L_8013F31C
.L_8013EE7C:
/* 8013EE7C 0013BDBC  7F E3 FB 78 */	mr r3, r31
/* 8013EE80 0013BDC0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013EE84 0013BDC4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013EE88 0013BDC8  7D 89 03 A6 */	mtctr r12
/* 8013EE8C 0013BDCC  4E 80 04 21 */	bctrl 
/* 8013EE90 0013BDD0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013EE94 0013BDD4  41 82 00 4C */	beq .L_8013EEE0
/* 8013EE98 0013BDD8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8013EE9C 0013BDDC  88 03 00 5C */	lbz r0, 0x5c(r3)
/* 8013EEA0 0013BDE0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8013EEA4 0013BDE4  41 82 00 3C */	beq .L_8013EEE0
/* 8013EEA8 0013BDE8  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013EEAC 0013BDEC  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8013EEB0 0013BDF0  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 8013EEB4 0013BDF4  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8013EEB8 0013BDF8  D0 1F 01 1C */	stfs f0, 0x11c(r31)
/* 8013EEBC 0013BDFC  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 8013EEC0 0013BE00  D0 1F 01 24 */	stfs f0, 0x124(r31)
/* 8013EEC4 0013BE04  C0 1F 02 0C */	lfs f0, 0x20c(r31)
/* 8013EEC8 0013BE08  D0 1F 02 18 */	stfs f0, 0x218(r31)
/* 8013EECC 0013BE0C  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 8013EED0 0013BE10  D0 1F 02 1C */	stfs f0, 0x21c(r31)
/* 8013EED4 0013BE14  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 8013EED8 0013BE18  D0 1F 02 20 */	stfs f0, 0x220(r31)
/* 8013EEDC 0013BE1C  48 00 04 40 */	b .L_8013F31C
.L_8013EEE0:
/* 8013EEE0 0013BE20  7F E3 FB 78 */	mr r3, r31
/* 8013EEE4 0013BE24  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013EEE8 0013BE28  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8013EEEC 0013BE2C  7D 89 03 A6 */	mtctr r12
/* 8013EEF0 0013BE30  4E 80 04 21 */	bctrl 
/* 8013EEF4 0013BE34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013EEF8 0013BE38  41 82 00 20 */	beq .L_8013EF18
/* 8013EEFC 0013BE3C  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013EF00 0013BE40  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8013EF04 0013BE44  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 8013EF08 0013BE48  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8013EF0C 0013BE4C  D0 1F 01 1C */	stfs f0, 0x11c(r31)
/* 8013EF10 0013BE50  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 8013EF14 0013BE54  D0 1F 01 24 */	stfs f0, 0x124(r31)
.L_8013EF18:
/* 8013EF18 0013BE58  80 1F 01 94 */	lwz r0, 0x194(r31)
/* 8013EF1C 0013BE5C  28 00 00 00 */	cmplwi r0, 0
/* 8013EF20 0013BE60  41 82 00 6C */	beq .L_8013EF8C
/* 8013EF24 0013BE64  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 8013EF28 0013BE68  7F E3 FB 78 */	mr r3, r31
/* 8013EF2C 0013BE6C  C0 5F 02 04 */	lfs f2, 0x204(r31)
/* 8013EF30 0013BE70  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8013EF34 0013BE74  C0 3F 02 0C */	lfs f1, 0x20c(r31)
/* 8013EF38 0013BE78  C0 9F 02 08 */	lfs f4, 0x208(r31)
/* 8013EF3C 0013BE7C  EC 42 07 F2 */	fmuls f2, f2, f31
/* 8013EF40 0013BE80  C0 7F 02 10 */	lfs f3, 0x210(r31)
/* 8013EF44 0013BE84  EC 01 00 2A */	fadds f0, f1, f0
/* 8013EF48 0013BE88  C0 BF 02 14 */	lfs f5, 0x214(r31)
/* 8013EF4C 0013BE8C  EC 24 07 F2 */	fmuls f1, f4, f31
/* 8013EF50 0013BE90  EC 43 10 2A */	fadds f2, f3, f2
/* 8013EF54 0013BE94  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 8013EF58 0013BE98  EC 05 08 2A */	fadds f0, f5, f1
/* 8013EF5C 0013BE9C  D0 5F 02 10 */	stfs f2, 0x210(r31)
/* 8013EF60 0013BEA0  D0 1F 02 14 */	stfs f0, 0x214(r31)
/* 8013EF64 0013BEA4  48 00 04 15 */	bl updateStomach__Q24Game8FakePikiFv
/* 8013EF68 0013BEA8  7F E3 FB 78 */	mr r3, r31
/* 8013EF6C 0013BEAC  4B FF CD FD */	bl updateCell__Q24Game8CreatureFv
/* 8013EF70 0013BEB0  C0 1F 02 0C */	lfs f0, 0x20c(r31)
/* 8013EF74 0013BEB4  D0 1F 02 18 */	stfs f0, 0x218(r31)
/* 8013EF78 0013BEB8  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 8013EF7C 0013BEBC  D0 1F 02 1C */	stfs f0, 0x21c(r31)
/* 8013EF80 0013BEC0  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 8013EF84 0013BEC4  D0 1F 02 20 */	stfs f0, 0x220(r31)
/* 8013EF88 0013BEC8  48 00 03 94 */	b .L_8013F31C
.L_8013EF8C:
/* 8013EF8C 0013BECC  7F E3 FB 78 */	mr r3, r31
/* 8013EF90 0013BED0  48 06 05 E5 */	bl isStickTo__Q24Game8CreatureFv
/* 8013EF94 0013BED4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013EF98 0013BED8  41 82 00 BC */	beq .L_8013F054
/* 8013EF9C 0013BEDC  C0 9F 01 FC */	lfs f4, 0x1fc(r31)
/* 8013EFA0 0013BEE0  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013EFA4 0013BEE4  FC 20 20 90 */	fmr f1, f4
/* 8013EFA8 0013BEE8  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8013EFAC 0013BEEC  40 80 00 08 */	bge .L_8013EFB4
/* 8013EFB0 0013BEF0  FC 20 20 50 */	fneg f1, f4
.L_8013EFB4:
/* 8013EFB4 0013BEF4  C0 42 9F 6C */	lfs f2, lbl_805182CC@sda21(r2)
/* 8013EFB8 0013BEF8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8013EFBC 0013BEFC  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013EFC0 0013BF00  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8013EFC4 0013BF04  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8013EFC8 0013BF08  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8013EFCC 0013BF0C  FC 00 08 1E */	fctiwz f0, f1
/* 8013EFD0 0013BF10  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8013EFD4 0013BF14  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8013EFD8 0013BF18  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8013EFDC 0013BF1C  7C 64 02 14 */	add r3, r4, r0
/* 8013EFE0 0013BF20  C0 63 00 04 */	lfs f3, 4(r3)
/* 8013EFE4 0013BF24  40 80 00 28 */	bge .L_8013F00C
/* 8013EFE8 0013BF28  C0 02 9F 68 */	lfs f0, lbl_805182C8@sda21(r2)
/* 8013EFEC 0013BF2C  EC 04 00 32 */	fmuls f0, f4, f0
/* 8013EFF0 0013BF30  FC 00 00 1E */	fctiwz f0, f0
/* 8013EFF4 0013BF34  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8013EFF8 0013BF38  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8013EFFC 0013BF3C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8013F000 0013BF40  7C 04 04 2E */	lfsx f0, r4, r0
/* 8013F004 0013BF44  FC 20 00 50 */	fneg f1, f0
/* 8013F008 0013BF48  48 00 00 1C */	b .L_8013F024
.L_8013F00C:
/* 8013F00C 0013BF4C  EC 04 00 B2 */	fmuls f0, f4, f2
/* 8013F010 0013BF50  FC 00 00 1E */	fctiwz f0, f0
/* 8013F014 0013BF54  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8013F018 0013BF58  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8013F01C 0013BF5C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8013F020 0013BF60  7C 24 04 2E */	lfsx f1, r4, r0
.L_8013F024:
/* 8013F024 0013BF64  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013F028 0013BF68  7F E3 FB 78 */	mr r3, r31
/* 8013F02C 0013BF6C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8013F030 0013BF70  38 81 00 24 */	addi r4, r1, 0x24
/* 8013F034 0013BF74  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8013F038 0013BF78  D0 61 00 2C */	stfs f3, 0x2c(r1)
/* 8013F03C 0013BF7C  48 06 05 AD */	bl "updateStick__Q24Game8CreatureFR10Vector3<f>"
/* 8013F040 0013BF80  7F E3 FB 78 */	mr r3, r31
/* 8013F044 0013BF84  4B FF CD 25 */	bl updateCell__Q24Game8CreatureFv
/* 8013F048 0013BF88  C0 02 9F 58 */	lfs f0, lbl_805182B8@sda21(r2)
/* 8013F04C 0013BF8C  D0 1F 02 34 */	stfs f0, 0x234(r31)
/* 8013F050 0013BF90  48 00 00 5C */	b .L_8013F0AC
.L_8013F054:
/* 8013F054 0013BF94  7F E3 FB 78 */	mr r3, r31
/* 8013F058 0013BF98  FC 20 F8 90 */	fmr f1, f31
/* 8013F05C 0013BF9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013F060 0013BFA0  81 8C 01 D0 */	lwz r12, 0x1d0(r12)
/* 8013F064 0013BFA4  7D 89 03 A6 */	mtctr r12
/* 8013F068 0013BFA8  4E 80 04 21 */	bctrl 
/* 8013F06C 0013BFAC  7F E3 FB 78 */	mr r3, r31
/* 8013F070 0013BFB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013F074 0013BFB4  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 8013F078 0013BFB8  7D 89 03 A6 */	mtctr r12
/* 8013F07C 0013BFBC  4E 80 04 21 */	bctrl 
/* 8013F080 0013BFC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013F084 0013BFC4  40 82 00 20 */	bne .L_8013F0A4
/* 8013F088 0013BFC8  7F E3 FB 78 */	mr r3, r31
/* 8013F08C 0013BFCC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013F090 0013BFD0  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8013F094 0013BFD4  7D 89 03 A6 */	mtctr r12
/* 8013F098 0013BFD8  4E 80 04 21 */	bctrl 
/* 8013F09C 0013BFDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013F0A0 0013BFE0  40 82 00 0C */	bne .L_8013F0AC
.L_8013F0A4:
/* 8013F0A4 0013BFE4  7F E3 FB 78 */	mr r3, r31
/* 8013F0A8 0013BFE8  4B FF E0 51 */	bl updateWalkAnimation__Q24Game8FakePikiFv
.L_8013F0AC:
/* 8013F0AC 0013BFEC  C0 5F 02 00 */	lfs f2, 0x200(r31)
/* 8013F0B0 0013BFF0  C0 3F 02 04 */	lfs f1, 0x204(r31)
/* 8013F0B4 0013BFF4  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8013F0B8 0013BFF8  C0 7F 02 08 */	lfs f3, 0x208(r31)
/* 8013F0BC 0013BFFC  EC 81 00 72 */	fmuls f4, f1, f1
/* 8013F0C0 0013C000  C0 22 9F 54 */	lfs f1, lbl_805182B4@sda21(r2)
/* 8013F0C4 0013C004  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8013F0C8 0013C008  EC 00 20 2A */	fadds f0, f0, f4
/* 8013F0CC 0013C00C  EC 03 00 2A */	fadds f0, f3, f0
/* 8013F0D0 0013C010  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8013F0D4 0013C014  40 81 00 20 */	ble .L_8013F0F4
/* 8013F0D8 0013C018  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 8013F0DC 0013C01C  EC 83 00 2A */	fadds f4, f3, f0
/* 8013F0E0 0013C020  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 8013F0E4 0013C024  40 81 00 14 */	ble .L_8013F0F8
/* 8013F0E8 0013C028  FC 00 20 34 */	frsqrte f0, f4
/* 8013F0EC 0013C02C  EC 80 01 32 */	fmuls f4, f0, f4
/* 8013F0F0 0013C030  48 00 00 08 */	b .L_8013F0F8
.L_8013F0F4:
/* 8013F0F4 0013C034  FC 80 08 90 */	fmr f4, f1
.L_8013F0F8:
/* 8013F0F8 0013C038  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013F0FC 0013C03C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8013F100 0013C040  40 81 00 34 */	ble .L_8013F134
/* 8013F104 0013C044  C0 22 9F A4 */	lfs f1, lbl_80518304@sda21(r2)
/* 8013F108 0013C048  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 8013F10C 0013C04C  EC 21 20 24 */	fdivs f1, f1, f4
/* 8013F110 0013C050  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013F114 0013C054  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8013F118 0013C058  C0 1F 02 04 */	lfs f0, 0x204(r31)
/* 8013F11C 0013C05C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013F120 0013C060  D0 1F 02 04 */	stfs f0, 0x204(r31)
/* 8013F124 0013C064  C0 1F 02 08 */	lfs f0, 0x208(r31)
/* 8013F128 0013C068  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013F12C 0013C06C  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 8013F130 0013C070  48 00 00 08 */	b .L_8013F138
.L_8013F134:
/* 8013F134 0013C074  FC 80 00 90 */	fmr f4, f0
.L_8013F138:
/* 8013F138 0013C078  C0 5F 01 1C */	lfs f2, 0x11c(r31)
/* 8013F13C 0013C07C  C0 3F 01 20 */	lfs f1, 0x120(r31)
/* 8013F140 0013C080  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8013F144 0013C084  C0 7F 01 24 */	lfs f3, 0x124(r31)
/* 8013F148 0013C088  EC A1 00 72 */	fmuls f5, f1, f1
/* 8013F14C 0013C08C  C0 22 9F 54 */	lfs f1, lbl_805182B4@sda21(r2)
/* 8013F150 0013C090  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8013F154 0013C094  EC 00 28 2A */	fadds f0, f0, f5
/* 8013F158 0013C098  EC 03 00 2A */	fadds f0, f3, f0
/* 8013F15C 0013C09C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8013F160 0013C0A0  40 81 00 20 */	ble .L_8013F180
/* 8013F164 0013C0A4  EC 02 28 BA */	fmadds f0, f2, f2, f5
/* 8013F168 0013C0A8  EC 03 00 2A */	fadds f0, f3, f0
/* 8013F16C 0013C0AC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8013F170 0013C0B0  40 81 00 14 */	ble .L_8013F184
/* 8013F174 0013C0B4  FC 20 00 34 */	frsqrte f1, f0
/* 8013F178 0013C0B8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013F17C 0013C0BC  48 00 00 08 */	b .L_8013F184
.L_8013F180:
/* 8013F180 0013C0C0  FC 00 08 90 */	fmr f0, f1
.L_8013F184:
/* 8013F184 0013C0C4  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8013F188 0013C0C8  40 81 00 40 */	ble .L_8013F1C8
/* 8013F18C 0013C0CC  EC 84 00 28 */	fsubs f4, f4, f0
/* 8013F190 0013C0D0  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 8013F194 0013C0D4  C0 5F 02 04 */	lfs f2, 0x204(r31)
/* 8013F198 0013C0D8  C0 7F 02 08 */	lfs f3, 0x208(r31)
/* 8013F19C 0013C0DC  EC 20 01 32 */	fmuls f1, f0, f4
/* 8013F1A0 0013C0E0  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013F1A4 0013C0E4  EC 42 01 32 */	fmuls f2, f2, f4
/* 8013F1A8 0013C0E8  EC 63 01 32 */	fmuls f3, f3, f4
/* 8013F1AC 0013C0EC  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 8013F1B0 0013C0F0  D0 5F 02 04 */	stfs f2, 0x204(r31)
/* 8013F1B4 0013C0F4  D0 7F 02 08 */	stfs f3, 0x208(r31)
/* 8013F1B8 0013C0F8  D0 1F 01 1C */	stfs f0, 0x11c(r31)
/* 8013F1BC 0013C0FC  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 8013F1C0 0013C100  D0 1F 01 24 */	stfs f0, 0x124(r31)
/* 8013F1C4 0013C104  48 00 00 38 */	b .L_8013F1FC
.L_8013F1C8:
/* 8013F1C8 0013C108  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 8013F1CC 0013C10C  C0 5F 02 04 */	lfs f2, 0x204(r31)
/* 8013F1D0 0013C110  EC 20 01 32 */	fmuls f1, f0, f4
/* 8013F1D4 0013C114  C0 7F 02 08 */	lfs f3, 0x208(r31)
/* 8013F1D8 0013C118  EC 42 01 32 */	fmuls f2, f2, f4
/* 8013F1DC 0013C11C  C0 02 9F 54 */	lfs f0, lbl_805182B4@sda21(r2)
/* 8013F1E0 0013C120  EC 63 01 32 */	fmuls f3, f3, f4
/* 8013F1E4 0013C124  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 8013F1E8 0013C128  D0 5F 02 04 */	stfs f2, 0x204(r31)
/* 8013F1EC 0013C12C  D0 7F 02 08 */	stfs f3, 0x208(r31)
/* 8013F1F0 0013C130  D0 1F 01 1C */	stfs f0, 0x11c(r31)
/* 8013F1F4 0013C134  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 8013F1F8 0013C138  D0 1F 01 24 */	stfs f0, 0x124(r31)
.L_8013F1FC:
/* 8013F1FC 0013C13C  C0 1F 02 0C */	lfs f0, 0x20c(r31)
/* 8013F200 0013C140  38 00 00 01 */	li r0, 1
/* 8013F204 0013C144  7F E3 FB 78 */	mr r3, r31
/* 8013F208 0013C148  38 81 00 08 */	addi r4, r1, 8
/* 8013F20C 0013C14C  D0 1F 02 18 */	stfs f0, 0x218(r31)
/* 8013F210 0013C150  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 8013F214 0013C154  D0 1F 02 1C */	stfs f0, 0x21c(r31)
/* 8013F218 0013C158  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 8013F21C 0013C15C  D0 1F 02 20 */	stfs f0, 0x220(r31)
/* 8013F220 0013C160  98 01 00 08 */	stb r0, 8(r1)
/* 8013F224 0013C164  4B FF CA 01 */	bl checkHell__Q24Game8CreatureFRQ34Game8Creature12CheckHellArg
/* 8013F228 0013C168  2C 03 00 01 */	cmpwi r3, 1
/* 8013F22C 0013C16C  40 82 00 F0 */	bne .L_8013F31C
/* 8013F230 0013C170  7F E3 FB 78 */	mr r3, r31
/* 8013F234 0013C174  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013F238 0013C178  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8013F23C 0013C17C  7D 89 03 A6 */	mtctr r12
/* 8013F240 0013C180  4E 80 04 21 */	bctrl 
/* 8013F244 0013C184  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013F248 0013C188  41 82 00 18 */	beq .L_8013F260
/* 8013F24C 0013C18C  7F E3 FB 78 */	mr r3, r31
/* 8013F250 0013C190  38 80 28 37 */	li r4, 0x2837
/* 8013F254 0013C194  38 A0 00 01 */	li r5, 1
/* 8013F258 0013C198  48 00 96 75 */	bl startSound__Q24Game4PikiFUlb
/* 8013F25C 0013C19C  48 00 00 C0 */	b .L_8013F31C
.L_8013F260:
/* 8013F260 0013C1A0  7F E3 FB 78 */	mr r3, r31
/* 8013F264 0013C1A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013F268 0013C1A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013F26C 0013C1AC  7D 89 03 A6 */	mtctr r12
/* 8013F270 0013C1B0  4E 80 04 21 */	bctrl 
/* 8013F274 0013C1B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013F278 0013C1B8  41 82 00 A4 */	beq .L_8013F31C
/* 8013F27C 0013C1BC  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8013F280 0013C1C0  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 8013F284 0013C1C4  28 00 00 00 */	cmplwi r0, 0
/* 8013F288 0013C1C8  7C 1E 03 78 */	mr r30, r0
/* 8013F28C 0013C1CC  40 82 00 08 */	bne .L_8013F294
/* 8013F290 0013C1D0  83 C3 00 AC */	lwz r30, 0xac(r3)
.L_8013F294:
/* 8013F294 0013C1D4  28 1E 00 00 */	cmplwi r30, 0
/* 8013F298 0013C1D8  40 82 00 14 */	bne .L_8013F2AC
/* 8013F29C 0013C1DC  A0 1F 02 DC */	lhz r0, 0x2dc(r31)
/* 8013F2A0 0013C1E0  20 80 00 01 */	subfic r4, r0, 1
/* 8013F2A4 0013C1E4  48 03 C7 F9 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8013F2A8 0013C1E8  7C 7E 1B 78 */	mr r30, r3
.L_8013F2AC:
/* 8013F2AC 0013C1EC  28 1E 00 00 */	cmplwi r30, 0
/* 8013F2B0 0013C1F0  40 82 00 20 */	bne .L_8013F2D0
/* 8013F2B4 0013C1F4  3C 60 80 48 */	lis r3, lbl_8047C720@ha
/* 8013F2B8 0013C1F8  3C A0 80 48 */	lis r5, lbl_8047C764@ha
/* 8013F2BC 0013C1FC  38 63 C7 20 */	addi r3, r3, lbl_8047C720@l
/* 8013F2C0 0013C200  38 80 07 89 */	li r4, 0x789
/* 8013F2C4 0013C204  38 A5 C7 64 */	addi r5, r5, lbl_8047C764@l
/* 8013F2C8 0013C208  4C C6 31 82 */	crclr 6
/* 8013F2CC 0013C20C  4B EE B3 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8013F2D0:
/* 8013F2D0 0013C210  7F C4 F3 78 */	mr r4, r30
/* 8013F2D4 0013C214  38 61 00 0C */	addi r3, r1, 0xc
/* 8013F2D8 0013C218  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013F2DC 0013C21C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013F2E0 0013C220  7D 89 03 A6 */	mtctr r12
/* 8013F2E4 0013C224  4E 80 04 21 */	bctrl 
/* 8013F2E8 0013C228  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8013F2EC 0013C22C  7F E3 FB 78 */	mr r3, r31
/* 8013F2F0 0013C230  C0 02 9F E0 */	lfs f0, lbl_80518340@sda21(r2)
/* 8013F2F4 0013C234  38 81 00 18 */	addi r4, r1, 0x18
/* 8013F2F8 0013C238  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 8013F2FC 0013C23C  38 A0 00 00 */	li r5, 0
/* 8013F300 0013C240  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8013F304 0013C244  EC 02 00 2A */	fadds f0, f2, f0
/* 8013F308 0013C248  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 8013F30C 0013C24C  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 8013F310 0013C250  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8013F314 0013C254  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8013F318 0013C258  4B FF BE 91 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
.L_8013F31C:
/* 8013F31C 0013C25C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8013F320 0013C260  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8013F324 0013C264  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8013F328 0013C268  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8013F32C 0013C26C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8013F330 0013C270  7C 08 03 A6 */	mtlr r0
/* 8013F334 0013C274  38 21 00 60 */	addi r1, r1, 0x60
/* 8013F338 0013C278  4E 80 00 20 */	blr 
.endfn doSimulation__Q24Game8FakePikiFf

.fn getPosition__Q24Game8BaseItemFv, weak
/* 8013F33C 0013C27C  C0 04 01 9C */	lfs f0, 0x19c(r4)
/* 8013F340 0013C280  D0 03 00 00 */	stfs f0, 0(r3)
/* 8013F344 0013C284  C0 04 01 A0 */	lfs f0, 0x1a0(r4)
/* 8013F348 0013C288  D0 03 00 04 */	stfs f0, 4(r3)
/* 8013F34C 0013C28C  C0 04 01 A4 */	lfs f0, 0x1a4(r4)
/* 8013F350 0013C290  D0 03 00 08 */	stfs f0, 8(r3)
/* 8013F354 0013C294  4E 80 00 20 */	blr 
.endfn getPosition__Q24Game8BaseItemFv

.fn initCaptureStomach__Q24Game8FakePikiFv, global
/* 8013F358 0013C298  38 00 00 00 */	li r0, 0
/* 8013F35C 0013C29C  90 03 01 94 */	stw r0, 0x194(r3)
/* 8013F360 0013C2A0  4E 80 00 20 */	blr 
.endfn initCaptureStomach__Q24Game8FakePikiFv

.fn startCaptureStomach__Q24Game8FakePikiFP8CollPart, global
/* 8013F364 0013C2A4  90 83 01 94 */	stw r4, 0x194(r3)
/* 8013F368 0013C2A8  4E 80 00 20 */	blr 
.endfn startCaptureStomach__Q24Game8FakePikiFP8CollPart

.fn endCaptureStomach__Q24Game8FakePikiFv, global
/* 8013F36C 0013C2AC  38 00 00 00 */	li r0, 0
/* 8013F370 0013C2B0  90 03 01 94 */	stw r0, 0x194(r3)
/* 8013F374 0013C2B4  4E 80 00 20 */	blr 
.endfn endCaptureStomach__Q24Game8FakePikiFv

.fn updateStomach__Q24Game8FakePikiFv, global
/* 8013F378 0013C2B8  80 83 01 94 */	lwz r4, 0x194(r3)
/* 8013F37C 0013C2BC  28 04 00 00 */	cmplwi r4, 0
/* 8013F380 0013C2C0  4D 82 00 20 */	beqlr 
/* 8013F384 0013C2C4  C0 23 02 10 */	lfs f1, 0x210(r3)
/* 8013F388 0013C2C8  C0 04 00 50 */	lfs f0, 0x50(r4)
/* 8013F38C 0013C2CC  C0 43 02 14 */	lfs f2, 0x214(r3)
/* 8013F390 0013C2D0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8013F394 0013C2D4  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 8013F398 0013C2D8  C0 63 02 0C */	lfs f3, 0x20c(r3)
/* 8013F39C 0013C2DC  EC 22 08 28 */	fsubs f1, f2, f1
/* 8013F3A0 0013C2E0  C0 44 00 4C */	lfs f2, 0x4c(r4)
/* 8013F3A4 0013C2E4  EC 80 00 32 */	fmuls f4, f0, f0
/* 8013F3A8 0013C2E8  ED 23 10 28 */	fsubs f9, f3, f2
/* 8013F3AC 0013C2EC  C0 42 9F 54 */	lfs f2, lbl_805182B4@sda21(r2)
/* 8013F3B0 0013C2F0  EC A1 00 72 */	fmuls f5, f1, f1
/* 8013F3B4 0013C2F4  EC 69 22 7A */	fmadds f3, f9, f9, f4
/* 8013F3B8 0013C2F8  EC 85 18 2A */	fadds f4, f5, f3
/* 8013F3BC 0013C2FC  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 8013F3C0 0013C300  40 81 00 14 */	ble .L_8013F3D4
/* 8013F3C4 0013C304  40 81 00 14 */	ble .L_8013F3D8
/* 8013F3C8 0013C308  FC 40 20 34 */	frsqrte f2, f4
/* 8013F3CC 0013C30C  EC 82 01 32 */	fmuls f4, f2, f4
/* 8013F3D0 0013C310  48 00 00 08 */	b .L_8013F3D8
.L_8013F3D4:
/* 8013F3D4 0013C314  FC 80 10 90 */	fmr f4, f2
.L_8013F3D8:
/* 8013F3D8 0013C318  C0 42 9F 54 */	lfs f2, lbl_805182B4@sda21(r2)
/* 8013F3DC 0013C31C  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 8013F3E0 0013C320  40 81 00 1C */	ble .L_8013F3FC
/* 8013F3E4 0013C324  C0 42 9F A4 */	lfs f2, lbl_80518304@sda21(r2)
/* 8013F3E8 0013C328  EC 42 20 24 */	fdivs f2, f2, f4
/* 8013F3EC 0013C32C  ED 29 00 B2 */	fmuls f9, f9, f2
/* 8013F3F0 0013C330  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8013F3F4 0013C334  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8013F3F8 0013C338  48 00 00 08 */	b .L_8013F400
.L_8013F3FC:
/* 8013F3FC 0013C33C  FC 80 10 90 */	fmr f4, f2
.L_8013F400:
/* 8013F400 0013C340  C0 64 00 1C */	lfs f3, 0x1c(r4)
/* 8013F404 0013C344  C0 42 9F 50 */	lfs f2, lbl_805182B0@sda21(r2)
/* 8013F408 0013C348  EC E3 10 28 */	fsubs f7, f3, f2
/* 8013F40C 0013C34C  FC 04 38 40 */	fcmpo cr0, f4, f7
/* 8013F410 0013C350  4C 81 00 20 */	blelr 
/* 8013F414 0013C354  EC 49 01 F2 */	fmuls f2, f9, f7
/* 8013F418 0013C358  C0 64 00 4C */	lfs f3, 0x4c(r4)
/* 8013F41C 0013C35C  EC A0 01 F2 */	fmuls f5, f0, f7
/* 8013F420 0013C360  C0 C4 00 50 */	lfs f6, 0x50(r4)
/* 8013F424 0013C364  EC E1 01 F2 */	fmuls f7, f1, f7
/* 8013F428 0013C368  C1 04 00 54 */	lfs f8, 0x54(r4)
/* 8013F42C 0013C36C  EC 63 10 2A */	fadds f3, f3, f2
/* 8013F430 0013C370  C0 82 9F E4 */	lfs f4, lbl_80518344@sda21(r2)
/* 8013F434 0013C374  EC A6 28 2A */	fadds f5, f6, f5
/* 8013F438 0013C378  C0 42 9F 54 */	lfs f2, lbl_805182B4@sda21(r2)
/* 8013F43C 0013C37C  EC C8 38 2A */	fadds f6, f8, f7
/* 8013F440 0013C380  D0 63 02 0C */	stfs f3, 0x20c(r3)
/* 8013F444 0013C384  D0 A3 02 10 */	stfs f5, 0x210(r3)
/* 8013F448 0013C388  D0 C3 02 14 */	stfs f6, 0x214(r3)
/* 8013F44C 0013C38C  C0 E3 02 04 */	lfs f7, 0x204(r3)
/* 8013F450 0013C390  C1 03 02 00 */	lfs f8, 0x200(r3)
/* 8013F454 0013C394  EC 67 00 32 */	fmuls f3, f7, f0
/* 8013F458 0013C398  C0 C3 02 08 */	lfs f6, 0x208(r3)
/* 8013F45C 0013C39C  EC 68 1A 7A */	fmadds f3, f8, f9, f3
/* 8013F460 0013C3A0  EC 66 18 7A */	fmadds f3, f6, f1, f3
/* 8013F464 0013C3A4  EC A4 00 F2 */	fmuls f5, f4, f3
/* 8013F468 0013C3A8  EC 89 01 72 */	fmuls f4, f9, f5
/* 8013F46C 0013C3AC  EC 60 01 72 */	fmuls f3, f0, f5
/* 8013F470 0013C3B0  EC 01 01 72 */	fmuls f0, f1, f5
/* 8013F474 0013C3B4  EC 88 20 28 */	fsubs f4, f8, f4
/* 8013F478 0013C3B8  EC 27 18 28 */	fsubs f1, f7, f3
/* 8013F47C 0013C3BC  EC 06 00 28 */	fsubs f0, f6, f0
/* 8013F480 0013C3C0  D0 83 02 00 */	stfs f4, 0x200(r3)
/* 8013F484 0013C3C4  D0 23 02 04 */	stfs f1, 0x204(r3)
/* 8013F488 0013C3C8  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 8013F48C 0013C3CC  80 83 01 94 */	lwz r4, 0x194(r3)
/* 8013F490 0013C3D0  C0 23 02 10 */	lfs f1, 0x210(r3)
/* 8013F494 0013C3D4  C0 04 00 50 */	lfs f0, 0x50(r4)
/* 8013F498 0013C3D8  C0 83 02 0C */	lfs f4, 0x20c(r3)
/* 8013F49C 0013C3DC  EC A1 00 28 */	fsubs f5, f1, f0
/* 8013F4A0 0013C3E0  C0 64 00 4C */	lfs f3, 0x4c(r4)
/* 8013F4A4 0013C3E4  C0 23 02 14 */	lfs f1, 0x214(r3)
/* 8013F4A8 0013C3E8  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8013F4AC 0013C3EC  EC 64 18 28 */	fsubs f3, f4, f3
/* 8013F4B0 0013C3F0  EC 85 01 72 */	fmuls f4, f5, f5
/* 8013F4B4 0013C3F4  EC 21 00 28 */	fsubs f1, f1, f0
/* 8013F4B8 0013C3F8  EC 03 20 FA */	fmadds f0, f3, f3, f4
/* 8013F4BC 0013C3FC  EC 21 00 72 */	fmuls f1, f1, f1
/* 8013F4C0 0013C400  EC 01 00 2A */	fadds f0, f1, f0
/* 8013F4C4 0013C404  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8013F4C8 0013C408  4C 81 00 20 */	blelr 
/* 8013F4CC 0013C40C  4E 80 00 20 */	blr 
.endfn updateStomach__Q24Game8FakePikiFv

.fn debugShapeDL__Q24Game8FakePikiFPc, global
/* 8013F4D0 0013C410  38 60 00 01 */	li r3, 1
/* 8013F4D4 0013C414  4E 80 00 20 */	blr 
.endfn debugShapeDL__Q24Game8FakePikiFPc

.fn getDownfloorMass__Q24Game8FakePikiFv, weak
/* 8013F4D8 0013C418  38 60 00 00 */	li r3, 0
/* 8013F4DC 0013C41C  4E 80 00 20 */	blr 
.endfn getDownfloorMass__Q24Game8FakePikiFv

.fn isPikmin__Q24Game8FakePikiFv, weak
/* 8013F4E0 0013C420  38 60 00 01 */	li r3, 1
/* 8013F4E4 0013C424  4E 80 00 20 */	blr 
.endfn isPikmin__Q24Game8FakePikiFv

.fn doDebugDL__Q24Game8FakePikiFv, weak
/* 8013F4E8 0013C428  4E 80 00 20 */	blr 
.endfn doDebugDL__Q24Game8FakePikiFv

.fn update__Q24Game8FakePikiFv, weak
/* 8013F4EC 0013C42C  4E 80 00 20 */	blr 
.endfn update__Q24Game8FakePikiFv

.fn setMoveRotation__Q24Game8FakePikiFb, weak
/* 8013F4F0 0013C430  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8013F4F4 0013C434  40 82 00 14 */	bne .L_8013F508
/* 8013F4F8 0013C438  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013F4FC 0013C43C  60 00 00 01 */	ori r0, r0, 1
/* 8013F500 0013C440  90 03 01 7C */	stw r0, 0x17c(r3)
/* 8013F504 0013C444  4E 80 00 20 */	blr 
.L_8013F508:
/* 8013F508 0013C448  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013F50C 0013C44C  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 8013F510 0013C450  90 03 01 7C */	stw r0, 0x17c(r3)
/* 8013F514 0013C454  4E 80 00 20 */	blr 
.endfn setMoveRotation__Q24Game8FakePikiFb

.fn setUpdateTrMatrix__Q24Game8FakePikiFb, weak
/* 8013F518 0013C458  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8013F51C 0013C45C  40 82 00 14 */	bne .L_8013F530
/* 8013F520 0013C460  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013F524 0013C464  60 00 00 02 */	ori r0, r0, 2
/* 8013F528 0013C468  90 03 01 7C */	stw r0, 0x17c(r3)
/* 8013F52C 0013C46C  4E 80 00 20 */	blr 
.L_8013F530:
/* 8013F530 0013C470  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013F534 0013C474  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 8013F538 0013C478  90 03 01 7C */	stw r0, 0x17c(r3)
/* 8013F53C 0013C47C  4E 80 00 20 */	blr 
.endfn setUpdateTrMatrix__Q24Game8FakePikiFb

.fn setMoveVelocity__Q24Game8FakePikiFb, weak
/* 8013F540 0013C480  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8013F544 0013C484  40 82 00 14 */	bne .L_8013F558
/* 8013F548 0013C488  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013F54C 0013C48C  60 00 00 04 */	ori r0, r0, 4
/* 8013F550 0013C490  90 03 01 7C */	stw r0, 0x17c(r3)
/* 8013F554 0013C494  4E 80 00 20 */	blr 
.L_8013F558:
/* 8013F558 0013C498  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013F55C 0013C49C  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 8013F560 0013C4A0  90 03 01 7C */	stw r0, 0x17c(r3)
/* 8013F564 0013C4A4  4E 80 00 20 */	blr 
.endfn setMoveVelocity__Q24Game8FakePikiFb

.fn setMapCollision__Q24Game8FakePikiFb, weak
/* 8013F568 0013C4A8  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8013F56C 0013C4AC  40 82 00 14 */	bne .L_8013F580
/* 8013F570 0013C4B0  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013F574 0013C4B4  60 00 00 08 */	ori r0, r0, 8
/* 8013F578 0013C4B8  90 03 01 7C */	stw r0, 0x17c(r3)
/* 8013F57C 0013C4BC  4E 80 00 20 */	blr 
.L_8013F580:
/* 8013F580 0013C4C0  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013F584 0013C4C4  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 8013F588 0013C4C8  90 03 01 7C */	stw r0, 0x17c(r3)
/* 8013F58C 0013C4CC  4E 80 00 20 */	blr 
.endfn setMapCollision__Q24Game8FakePikiFb

.fn isZikatu__Q24Game8FakePikiFv, weak
/* 8013F590 0013C4D0  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013F594 0013C4D4  54 03 DF FE */	rlwinm r3, r0, 0x1b, 0x1f, 0x1f
/* 8013F598 0013C4D8  4E 80 00 20 */	blr 
.endfn isZikatu__Q24Game8FakePikiFv

.fn setZikatu__Q24Game8FakePikiFb, weak
/* 8013F59C 0013C4DC  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8013F5A0 0013C4E0  41 82 00 14 */	beq .L_8013F5B4
/* 8013F5A4 0013C4E4  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013F5A8 0013C4E8  60 00 00 20 */	ori r0, r0, 0x20
/* 8013F5AC 0013C4EC  90 03 01 7C */	stw r0, 0x17c(r3)
/* 8013F5B0 0013C4F0  48 00 00 10 */	b .L_8013F5C0
.L_8013F5B4:
/* 8013F5B4 0013C4F4  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013F5B8 0013C4F8  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 8013F5BC 0013C4FC  90 03 01 7C */	stw r0, 0x17c(r3)
.L_8013F5C0:
/* 8013F5C0 0013C500  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8013F5C4 0013C504  4D 82 00 20 */	beqlr 
/* 8013F5C8 0013C508  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013F5CC 0013C50C  60 00 00 80 */	ori r0, r0, 0x80
/* 8013F5D0 0013C510  90 03 01 7C */	stw r0, 0x17c(r3)
/* 8013F5D4 0013C514  4E 80 00 20 */	blr 
.endfn setZikatu__Q24Game8FakePikiFb

.fn wasZikatu__Q24Game8FakePikiFv, weak
/* 8013F5D8 0013C518  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8013F5DC 0013C51C  54 03 CF FE */	rlwinm r3, r0, 0x19, 0x1f, 0x1f
/* 8013F5E0 0013C520  4E 80 00 20 */	blr 
.endfn wasZikatu__Q24Game8FakePikiFv

.fn inWaterCallback__Q24Game8FakePikiFPQ24Game8WaterBox, weak
/* 8013F5E4 0013C524  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q24Game8FakePikiFPQ24Game8WaterBox

.fn outWaterCallback__Q24Game8FakePikiFv, weak
/* 8013F5E8 0013C528  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q24Game8FakePikiFv

.fn onSetPosition__Q24Game8FakePikiFv, weak
/* 8013F5EC 0013C52C  4E 80 00 20 */	blr 
.endfn onSetPosition__Q24Game8FakePikiFv

.fn "onSetPosition__Q24Game8FakePikiFR10Vector3<f>", weak
/* 8013F5F0 0013C530  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013F5F4 0013C534  7C 08 02 A6 */	mflr r0
/* 8013F5F8 0013C538  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013F5FC 0013C53C  C0 04 00 00 */	lfs f0, 0(r4)
/* 8013F600 0013C540  D0 03 02 0C */	stfs f0, 0x20c(r3)
/* 8013F604 0013C544  C0 04 00 04 */	lfs f0, 4(r4)
/* 8013F608 0013C548  D0 03 02 10 */	stfs f0, 0x210(r3)
/* 8013F60C 0013C54C  C0 04 00 08 */	lfs f0, 8(r4)
/* 8013F610 0013C550  D0 03 02 14 */	stfs f0, 0x214(r3)
/* 8013F614 0013C554  81 83 00 00 */	lwz r12, 0(r3)
/* 8013F618 0013C558  81 8C 02 18 */	lwz r12, 0x218(r12)
/* 8013F61C 0013C55C  7D 89 03 A6 */	mtctr r12
/* 8013F620 0013C560  4E 80 04 21 */	bctrl 
/* 8013F624 0013C564  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013F628 0013C568  7C 08 03 A6 */	mtlr r0
/* 8013F62C 0013C56C  38 21 00 10 */	addi r1, r1, 0x10
/* 8013F630 0013C570  4E 80 00 20 */	blr 
.endfn "onSetPosition__Q24Game8FakePikiFR10Vector3<f>"

.fn getFaceDir__Q24Game8FakePikiFv, weak
/* 8013F634 0013C574  C0 23 01 FC */	lfs f1, 0x1fc(r3)
/* 8013F638 0013C578  4E 80 00 20 */	blr 
.endfn getFaceDir__Q24Game8FakePikiFv

.fn getVelocity__Q24Game8FakePikiFv, weak
/* 8013F63C 0013C57C  C0 04 02 00 */	lfs f0, 0x200(r4)
/* 8013F640 0013C580  D0 03 00 00 */	stfs f0, 0(r3)
/* 8013F644 0013C584  C0 04 02 04 */	lfs f0, 0x204(r4)
/* 8013F648 0013C588  D0 03 00 04 */	stfs f0, 4(r3)
/* 8013F64C 0013C58C  C0 04 02 08 */	lfs f0, 0x208(r4)
/* 8013F650 0013C590  D0 03 00 08 */	stfs f0, 8(r3)
/* 8013F654 0013C594  4E 80 00 20 */	blr 
.endfn getVelocity__Q24Game8FakePikiFv

.fn "setVelocity__Q24Game8FakePikiFR10Vector3<f>", weak
/* 8013F658 0013C598  C0 04 00 00 */	lfs f0, 0(r4)
/* 8013F65C 0013C59C  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 8013F660 0013C5A0  C0 04 00 04 */	lfs f0, 4(r4)
/* 8013F664 0013C5A4  D0 03 02 04 */	stfs f0, 0x204(r3)
/* 8013F668 0013C5A8  C0 04 00 08 */	lfs f0, 8(r4)
/* 8013F66C 0013C5AC  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 8013F670 0013C5B0  4E 80 00 20 */	blr 
.endfn "setVelocity__Q24Game8FakePikiFR10Vector3<f>"

.fn "getVelocityAt__Q24Game8FakePikiFR10Vector3<f>R10Vector3<f>", weak
/* 8013F674 0013C5B4  C0 03 02 00 */	lfs f0, 0x200(r3)
/* 8013F678 0013C5B8  D0 05 00 00 */	stfs f0, 0(r5)
/* 8013F67C 0013C5BC  C0 03 02 04 */	lfs f0, 0x204(r3)
/* 8013F680 0013C5C0  D0 05 00 04 */	stfs f0, 4(r5)
/* 8013F684 0013C5C4  C0 03 02 08 */	lfs f0, 0x208(r3)
/* 8013F688 0013C5C8  D0 05 00 08 */	stfs f0, 8(r5)
/* 8013F68C 0013C5CC  4E 80 00 20 */	blr 
.endfn "getVelocityAt__Q24Game8FakePikiFR10Vector3<f>R10Vector3<f>"

.fn getSound_PosPtr__Q24Game8FakePikiFv, weak
/* 8013F690 0013C5D0  38 63 02 0C */	addi r3, r3, 0x20c
/* 8013F694 0013C5D4  4E 80 00 20 */	blr 
.endfn getSound_PosPtr__Q24Game8FakePikiFv

.fn isWalking__Q24Game8FakePikiFv, weak
/* 8013F698 0013C5D8  38 60 00 00 */	li r3, 0
/* 8013F69C 0013C5DC  4E 80 00 20 */	blr 
.endfn isWalking__Q24Game8FakePikiFv

.fn onKeyEvent__Q24Game8FakePikiFRCQ28SysShape8KeyEvent, weak
/* 8013F6A0 0013C5E0  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game8FakePikiFRCQ28SysShape8KeyEvent

.fn __sinit_fakePiki_cpp, local
/* 8013F6A4 0013C5E4  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8013F6A8 0013C5E8  38 00 FF FF */	li r0, -1
/* 8013F6AC 0013C5EC  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8013F6B0 0013C5F0  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8013F6B4 0013C5F4  90 0D 92 80 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8013F6B8 0013C5F8  D4 03 02 B0 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8013F6BC 0013C5FC  D0 0D 92 84 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8013F6C0 0013C600  D0 03 00 04 */	stfs f0, 4(r3)
/* 8013F6C4 0013C604  D0 03 00 08 */	stfs f0, 8(r3)
/* 8013F6C8 0013C608  4E 80 00 20 */	blr 
.endfn __sinit_fakePiki_cpp

.fn "@376@onKeyEvent__Q24Game8FakePikiFRCQ28SysShape8KeyEvent", weak
/* 8013F6CC 0013C60C  38 63 FE 88 */	addi r3, r3, -376
/* 8013F6D0 0013C610  4B FF FF D0 */	b onKeyEvent__Q24Game8FakePikiFRCQ28SysShape8KeyEvent
.endfn "@376@onKeyEvent__Q24Game8FakePikiFRCQ28SysShape8KeyEvent"
