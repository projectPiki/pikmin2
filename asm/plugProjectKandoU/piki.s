.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_piki_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047C880, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8047C880
.balign 4
.obj lbl_8047C88C, local
	.asciz "TPkEffect"
.endobj lbl_8047C88C
.balign 4
.obj lbl_8047C898, local
	.asciz "happajnt3"
.endobj lbl_8047C898
.balign 4
.obj lbl_8047C8A4, local
	.asciz "happajnt1"
.endobj lbl_8047C8A4
.balign 4
.obj lbl_8047C8B0, local
	.asciz "piki.cpp"
.endobj lbl_8047C8B0
.balign 4
.obj lbl_8047C8BC, local
	.asciz "happajnt3 not found!\n"
.endobj lbl_8047C8BC
.balign 4
.obj lbl_8047C8D4, local
	.asciz "happajnt1 not found!\n"
.endobj lbl_8047C8D4
.balign 4
.obj lbl_8047C8EC, local
	.asciz "piki onInit"
.endobj lbl_8047C8EC
.balign 4
.obj lbl_8047C8F8, local
	.asciz "** PIKI ONINIT**"
.endobj lbl_8047C8F8
.balign 4
.obj lbl_8047C90C, local
	.asciz "P2Assert"
.endobj lbl_8047C90C
.balign 4
.obj lbl_8047C918, local
	.asciz "g1A_red_doping"
.endobj lbl_8047C918
.balign 4
.obj lbl_8047C928, local
	.asciz "CreatureActionArg"
.endobj lbl_8047C928
.balign 4
.obj lbl_8047C93C, local
	.asciz "ActionArg"
.endobj lbl_8047C93C

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q24Game4Piki, global
	.4byte 0
	.4byte 0
	.4byte getPosition__Q24Game8FakePikiFv
	.4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
	.4byte getBoundingSphere__Q24Game8FakePikiFRQ23Sys6Sphere
	.4byte collisionUpdatable__Q24Game8CreatureFv
	.4byte isPiki__Q24Game8CreatureFv
	.4byte isNavi__Q24Game8CreatureFv
	.4byte deferPikiCollision__Q24Game4PikiFv
	.4byte getTypeName__Q24Game8CreatureFv
	.4byte getObjType__Q24Game8CreatureFv
	.4byte constructor__Q24Game8CreatureFv
	.4byte onInit__Q24Game4PikiFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game4PikiFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game4PikiFv
	.4byte doEntry__Q24Game8FakePikiFv
	.4byte doSetView__Q24Game8CreatureFi
	.4byte doViewCalc__Q24Game8CreatureFv
	.4byte doSimulation__Q24Game8FakePikiFf
	.4byte doDirectDraw__Q24Game4PikiFR8Graphics
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
	.4byte inWaterCallback__Q24Game4PikiFPQ24Game8WaterBox
	.4byte outWaterCallback__Q24Game4PikiFv
	.4byte inWater__Q24Game8FakePikiFv
	.4byte getFlockMgr__Q24Game8CreatureFv
	.4byte onStartCapture__Q24Game8CreatureFv
	.4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
	.4byte onEndCapture__Q24Game8CreatureFv
	.4byte isAtari__Q24Game8CreatureFv
	.4byte setAtari__Q24Game8CreatureFb
	.4byte isAlive__Q24Game4PikiFv
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
	.4byte bounceCallback__Q24Game4PikiFPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game4PikiFRQ24Game9CollEvent
	.4byte platCallback__Q24Game4PikiFRQ24Game9PlatEvent
	.4byte getJAIObject__Q24Game4PikiFv
	.4byte getPSCreature__Q24Game4PikiFv
	.4byte getSound_AILOD__Q24Game8CreatureFv
	.4byte getSound_PosPtr__Q24Game8FakePikiFv
	.4byte sound_culling__Q24Game8CreatureFv
	.4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
	.4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
	.4byte on_movie_begin__Q24Game4PikiFb
	.4byte on_movie_end__Q24Game4PikiFb
	.4byte movieStartAnimation__Q24Game4PikiFUl
	.4byte movieStartDemoAnimation__Q24Game4PikiFPQ28SysShape8AnimInfo
	.4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
	.4byte "movieSetTranslation__Q24Game4PikiFR10Vector3<f>f"
	.4byte movieSetFaceDir__Q24Game8FakePikiFf
	.4byte "movieGotoPosition__Q24Game4PikiFR10Vector3<f>"
	.4byte movieUserCommand__Q24Game4PikiFUlPQ24Game11MoviePlayer
	.4byte getShadowParam__Q24Game4PikiFRQ24Game11ShadowParam
	.4byte needShadow__Q24Game8CreatureFv
	.4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
	.4byte getLODSphere__Q24Game4PikiFRQ23Sys6Sphere
	.4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
	.4byte startPick__Q24Game8CreatureFv
	.4byte endPick__Q24Game8CreatureFb
	.4byte getMabiki__Q24Game8CreatureFv
	.4byte getFootmarks__Q24Game8CreatureFv
	.4byte onStickStart__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEnd__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickStartSelf__Q24Game4PikiFPQ24Game8Creature
	.4byte onStickEndSelf__Q24Game4PikiFPQ24Game8Creature
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
	.4byte ignoreAtari__Q24Game4PikiFPQ24Game8Creature
	.4byte getSuckPos__Q24Game8CreatureFv
	.4byte getGoalPos__Q24Game8CreatureFv
	.4byte isSuckReady__Q24Game8CreatureFv
	.4byte isSuckArriveWait__Q24Game8CreatureFv
	.4byte stimulate__Q24Game4PikiFRQ24Game11Interaction
	.4byte getCreatureName__Q24Game4PikiFv
	.4byte getCreatureID__Q24Game4PikiFv
	.4byte 0
	.4byte 0
	.4byte "@376@onKeyEvent__Q24Game4PikiFRCQ28SysShape8KeyEvent"
	.4byte getDownfloorMass__Q24Game4PikiFv
	.4byte isPikmin__Q24Game4PikiFv
	.4byte doColorChange__Q24Game4PikiFv
	.4byte doDebugDL__Q24Game4PikiFv
	.4byte update__Q24Game4PikiFv
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
	.4byte "wallCallback__Q24Game4PikiFR10Vector3<f>"
	.4byte startMotion__Q24Game4PikiFiiPQ28SysShape14MotionListenerPQ28SysShape14MotionListener
	.4byte onKeyEvent__Q24Game4PikiFRCQ28SysShape8KeyEvent
	.4byte updateLookCreature__Q24Game8FakePikiFv
	.4byte do_updateLookCreature__Q24Game4PikiFv
	.4byte onSetPosition__Q24Game4PikiFv
	.4byte isWalking__Q24Game4PikiFv
.endobj __vt__Q24Game4Piki
.obj __vt__Q23efx12TPkBlackDown, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx12TPkBlackDownFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx12TPkBlackDownFv
.endobj __vt__Q23efx12TPkBlackDown
.obj __vt__Q23efx7TPkMoeA, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx7TPkMoeAFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx7TPkMoeAFv
.endobj __vt__Q23efx7TPkMoeA
.obj "__vt__Q24Game26StateMachine<Q24Game4Piki>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "start__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
	.4byte "exec__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4Piki"
	.4byte "transit__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
.endobj "__vt__Q24Game26StateMachine<Q24Game4Piki>"

.section .bss  # 0x804EFC20 - 0x8051467C
# piki.cpp
.comm pikiColors__Q24Game4Piki, 0x40, 4
.comm pikiColorsCursor__Q24Game4Piki, 0x20, 4

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
.obj lbl_80518410, local
	.float 4.0
.endobj lbl_80518410
.balign 4
.obj lbl_80518414, local
	.asciz "PSPiki"
.endobj lbl_80518414
.balign 4
.obj lbl_8051841C, local
	.float 0.0
.endobj lbl_8051841C
.obj lbl_80518420, local
	.float 20.0
.endobj lbl_80518420
.obj lbl_80518424, local # used for Piki LOD Sphere Radius
	.float 15.0
.endobj lbl_80518424
.balign 4
.obj lbl_80518428, local
	.asciz "pu-1"
.endobj lbl_80518428
.balign 4
.obj lbl_80518430, local
	.asciz "pu-4"
.endobj lbl_80518430
.balign 4
.obj lbl_80518438, local
	.float 0.1
.endobj lbl_80518438
.obj lbl_8051843C, local
	.float 100.0
.endobj lbl_8051843C
.obj lbl_80518440, local
	.float 1.0
.endobj lbl_80518440
.obj lbl_80518444, local
	.float 128000.0
.endobj lbl_80518444
.obj lbl_80518448, local
	.float -128000.0
.endobj lbl_80518448
.obj lbl_8051844C, local
	.float 0.5
.endobj lbl_8051844C
.obj lbl_80518450, local
	.float 10.0
.endobj lbl_80518450
.obj lbl_80518454, local
	.float 2.0
.endobj lbl_80518454
.obj lbl_80518458, local
	.float 5.0
.endobj lbl_80518458
.obj lbl_8051845C, local
	.float 32768.0
.endobj lbl_8051845C
.obj lbl_80518460, local
	.float 0.2
.endobj lbl_80518460
.balign 8
.obj lbl_80518468, local
	.8byte 0x4330000080000000
.endobj lbl_80518468
.obj lbl_80518470, local
	.float 1.2
.endobj lbl_80518470
.obj lbl_80518474, local
	.float 0.8
.endobj lbl_80518474
.obj lbl_80518478, local
	.float 7.0
.endobj lbl_80518478
.balign 4
.obj lbl_8051847C, local
	.asciz "headjnt"
.endobj lbl_8051847C
.balign 4
.obj lbl_80518484, local
	.float 200.0
.endobj lbl_80518484
.obj lbl_80518488, local
	.float 3.0
.endobj lbl_80518488
.balign 4
.obj lbl_8051848C, local
	.asciz "pikmin"
.endobj lbl_8051848C

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q24Game4PikiFv, global
/* 801476DC 0014461C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801476E0 00144620  7C 08 02 A6 */	mflr r0
/* 801476E4 00144624  90 01 00 14 */	stw r0, 0x14(r1)
/* 801476E8 00144628  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801476EC 0014462C  7C 7F 1B 78 */	mr r31, r3
/* 801476F0 00144630  93 C1 00 08 */	stw r30, 8(r1)
/* 801476F4 00144634  4B FF 55 75 */	bl __ct__Q24Game8FakePikiFv
/* 801476F8 00144638  3C 80 80 4B */	lis r4, __vt__Q24Game4Piki@ha
/* 801476FC 0014463C  38 7F 02 98 */	addi r3, r31, 0x298
/* 80147700 00144640  38 84 09 9C */	addi r4, r4, __vt__Q24Game4Piki@l
/* 80147704 00144644  90 9F 00 00 */	stw r4, 0(r31)
/* 80147708 00144648  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 8014770C 0014464C  90 1F 01 78 */	stw r0, 0x178(r31)
/* 80147710 00144650  48 04 EF 61 */	bl __ct__Q24Game13UpdateContextFv
/* 80147714 00144654  38 60 00 20 */	li r3, 0x20
/* 80147718 00144658  4B ED C7 8D */	bl __nw__FUl
/* 8014771C 0014465C  28 03 00 00 */	cmplwi r3, 0
/* 80147720 00144660  41 82 00 24 */	beq .L_80147744
/* 80147724 00144664  3C A0 80 4B */	lis r5, "__vt__Q24Game26StateMachine<Q24Game4Piki>"@ha
/* 80147728 00144668  3C 80 80 4B */	lis r4, __vt__Q24Game7PikiFSM@ha
/* 8014772C 0014466C  38 05 0C 54 */	addi r0, r5, "__vt__Q24Game26StateMachine<Q24Game4Piki>"@l
/* 80147730 00144670  38 A0 FF FF */	li r5, -1
/* 80147734 00144674  90 03 00 00 */	stw r0, 0(r3)
/* 80147738 00144678  38 04 47 44 */	addi r0, r4, __vt__Q24Game7PikiFSM@l
/* 8014773C 0014467C  90 A3 00 18 */	stw r5, 0x18(r3)
/* 80147740 00144680  90 03 00 00 */	stw r0, 0(r3)
.L_80147744:
/* 80147744 00144684  90 7F 02 8C */	stw r3, 0x28c(r31)
/* 80147748 00144688  7F E4 FB 78 */	mr r4, r31
/* 8014774C 0014468C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80147750 00144690  81 83 00 00 */	lwz r12, 0(r3)
/* 80147754 00144694  81 8C 00 08 */	lwz r12, 8(r12)
/* 80147758 00144698  7D 89 03 A6 */	mtctr r12
/* 8014775C 0014469C  4E 80 04 21 */	bctrl 
/* 80147760 001446A0  C0 02 A0 B0 */	lfs f0, lbl_80518410@sda21(r2)
/* 80147764 001446A4  38 60 00 10 */	li r3, 0x10
/* 80147768 001446A8  D0 1F 02 24 */	stfs f0, 0x224(r31)
/* 8014776C 001446AC  4B ED C7 39 */	bl __nw__FUl
/* 80147770 001446B0  7C 60 1B 79 */	or. r0, r3, r3
/* 80147774 001446B4  41 82 00 10 */	beq .L_80147784
/* 80147778 001446B8  7F E4 FB 78 */	mr r4, r31
/* 8014777C 001446BC  48 04 F2 E9 */	bl __ct__Q26PikiAI5BrainFPQ24Game4Piki
/* 80147780 001446C0  7C 60 1B 78 */	mr r0, r3
.L_80147784:
/* 80147784 001446C4  90 1F 02 94 */	stw r0, 0x294(r31)
/* 80147788 001446C8  38 DF 02 18 */	addi r6, r31, 0x218
/* 8014778C 001446CC  38 80 00 00 */	li r4, 0
/* 80147790 001446D0  38 A0 00 00 */	li r5, 0
/* 80147794 001446D4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80147798 001446D8  38 E0 00 00 */	li r7, 0
/* 8014779C 001446DC  4B FE C9 15 */	bl createSingleSphere__8CollTreeFPQ28SysShape9MtxObjectiRQ23Sys6SphereP11CollPartMgr
/* 801477A0 001446E0  38 00 00 00 */	li r0, 0
/* 801477A4 001446E4  3C 60 80 48 */	lis r3, lbl_8047C88C@ha
/* 801477A8 001446E8  B0 1F 01 28 */	sth r0, 0x128(r31)
/* 801477AC 001446EC  38 83 C8 8C */	addi r4, r3, lbl_8047C88C@l
/* 801477B0 001446F0  38 A0 00 00 */	li r5, 0
/* 801477B4 001446F4  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 801477B8 001446F8  90 1F 02 90 */	stw r0, 0x290(r31)
/* 801477BC 001446FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801477C0 00144700  48 2D BB 9D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801477C4 00144704  38 60 01 A8 */	li r3, 0x1a8
/* 801477C8 00144708  4B ED C6 DD */	bl __nw__FUl
/* 801477CC 0014470C  7C 60 1B 79 */	or. r0, r3, r3
/* 801477D0 00144710  41 82 00 0C */	beq .L_801477DC
/* 801477D4 00144714  48 00 00 AD */	bl __ct__Q23efx9TPkEffectFv
/* 801477D8 00144718  7C 60 1B 78 */	mr r0, r3
.L_801477DC:
/* 801477DC 0014471C  90 1F 02 58 */	stw r0, 0x258(r31)
/* 801477E0 00144720  38 60 00 24 */	li r3, 0x24
/* 801477E4 00144724  4B ED C6 C1 */	bl __nw__FUl
/* 801477E8 00144728  7C 7E 1B 79 */	or. r30, r3, r3
/* 801477EC 0014472C  41 82 00 28 */	beq .L_80147814
/* 801477F0 00144730  48 2C 9B A1 */	bl __ct__5CNodeFv
/* 801477F4 00144734  3C 60 80 4B */	lis r3, __vt__Q23efx7Context@ha
/* 801477F8 00144738  38 00 00 00 */	li r0, 0
/* 801477FC 0014473C  38 63 08 B8 */	addi r3, r3, __vt__Q23efx7Context@l
/* 80147800 00144740  90 7E 00 00 */	stw r3, 0(r30)
/* 80147804 00144744  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80147808 00144748  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8014780C 0014474C  90 1E 00 08 */	stw r0, 8(r30)
/* 80147810 00144750  90 1E 00 04 */	stw r0, 4(r30)
.L_80147814:
/* 80147814 00144754  93 DF 02 7C */	stw r30, 0x27c(r31)
/* 80147818 00144758  3C 60 80 48 */	lis r3, lbl_8047C88C@ha
/* 8014781C 0014475C  38 83 C8 8C */	addi r4, r3, lbl_8047C88C@l
/* 80147820 00144760  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80147824 00144764  48 2D BB 41 */	bl heapStatusEnd__6SystemFPc
/* 80147828 00144768  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014782C 0014476C  38 82 A0 B4 */	addi r4, r2, lbl_80518414@sda21
/* 80147830 00144770  38 A0 00 00 */	li r5, 0
/* 80147834 00144774  48 2D BB 29 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80147838 00144778  38 60 00 78 */	li r3, 0x78
/* 8014783C 0014477C  4B ED C6 69 */	bl __nw__FUl
/* 80147840 00144780  7C 60 1B 79 */	or. r0, r3, r3
/* 80147844 00144784  41 82 00 10 */	beq .L_80147854
/* 80147848 00144788  7F E4 FB 78 */	mr r4, r31
/* 8014784C 0014478C  48 31 AA 55 */	bl __ct__Q23PSM4PikiFPQ24Game4Piki
/* 80147850 00144790  7C 60 1B 78 */	mr r0, r3
.L_80147854:
/* 80147854 00144794  90 1F 02 50 */	stw r0, 0x250(r31)
/* 80147858 00144798  38 82 A0 B4 */	addi r4, r2, lbl_80518414@sda21
/* 8014785C 0014479C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80147860 001447A0  48 2D BB 05 */	bl heapStatusEnd__6SystemFPc
/* 80147864 001447A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147868 001447A8  7F E3 FB 78 */	mr r3, r31
/* 8014786C 001447AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147870 001447B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80147874 001447B4  7C 08 03 A6 */	mtlr r0
/* 80147878 001447B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8014787C 001447BC  4E 80 00 20 */	blr 
.endfn __ct__Q24Game4PikiFv

.fn __ct__Q23efx9TPkEffectFv, weak
/* 80147880 001447C0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80147884 001447C4  7C 08 02 A6 */	mflr r0
/* 80147888 001447C8  39 20 FF FF */	li r9, -1
/* 8014788C 001447CC  3C E0 80 4B */	lis r7, __vt__Q23efx5TBase@ha
/* 80147890 001447D0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80147894 001447D4  38 00 00 00 */	li r0, 0
/* 80147898 001447D8  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 8014789C 001447DC  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 801478A0 001447E0  BE 41 00 08 */	stmw r18, 8(r1)
/* 801478A4 001447E4  3A E4 68 A8 */	addi r23, r4, __vt__Q23efx9TChaseMtx@l
/* 801478A8 001447E8  3A 87 A7 F8 */	addi r20, r7, __vt__Q23efx5TBase@l
/* 801478AC 001447EC  3A A6 E2 7C */	addi r21, r6, __vt__18JPAEmitterCallBack@l
/* 801478B0 001447F0  3C 80 80 4B */	lis r4, __vt__Q23efx7TPkMoeA@ha
/* 801478B4 001447F4  7C 7F 1B 78 */	mr r31, r3
/* 801478B8 001447F8  3B C4 0C 08 */	addi r30, r4, __vt__Q23efx7TPkMoeA@l
/* 801478BC 001447FC  3A C0 02 B2 */	li r22, 0x2b2
/* 801478C0 00144800  3C 80 80 14 */	lis r4, __ct__Q23efx15ContextChasePosFv@ha
/* 801478C4 00144804  3B 17 00 14 */	addi r24, r23, 0x14
/* 801478C8 00144808  3B 20 01 74 */	li r25, 0x174
/* 801478CC 0014480C  3B A0 01 6F */	li r29, 0x16f
/* 801478D0 00144810  39 9E 00 14 */	addi r12, r30, 0x14
/* 801478D4 00144814  39 60 01 4A */	li r11, 0x14a
/* 801478D8 00144818  38 84 00 5C */	addi r4, r4, __ct__Q23efx15ContextChasePosFv@l
/* 801478DC 0014481C  38 C0 00 1C */	li r6, 0x1c
/* 801478E0 00144820  38 E0 00 01 */	li r7, 1
/* 801478E4 00144824  98 03 00 00 */	stb r0, 0(r3)
/* 801478E8 00144828  3C 60 80 4E */	lis r3, __vt__Q23efx5TSync@ha
/* 801478EC 0014482C  39 03 69 8C */	addi r8, r3, __vt__Q23efx5TSync@l
/* 801478F0 00144830  98 1F 00 01 */	stb r0, 1(r31)
/* 801478F4 00144834  3C 60 80 4E */	lis r3, __vt__Q23efx11TPkNageBlur@ha
/* 801478F8 00144838  3B 43 73 18 */	addi r26, r3, __vt__Q23efx11TPkNageBlur@l
/* 801478FC 0014483C  3A 68 00 14 */	addi r19, r8, 0x14
/* 80147900 00144840  98 1F 00 02 */	stb r0, 2(r31)
/* 80147904 00144844  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 80147908 00144848  3B 83 69 40 */	addi r28, r3, __vt__Q23efx9TChasePos@l
/* 8014790C 0014484C  3B 7A 00 14 */	addi r27, r26, 0x14
/* 80147910 00144850  98 1F 00 03 */	stb r0, 3(r31)
/* 80147914 00144854  3C 60 80 4B */	lis r3, __vt__Q23efx12TPkBlackDown@ha
/* 80147918 00144858  39 43 0B BC */	addi r10, r3, __vt__Q23efx12TPkBlackDown@l
/* 8014791C 0014485C  3A 5C 00 14 */	addi r18, r28, 0x14
/* 80147920 00144860  98 1F 00 04 */	stb r0, 4(r31)
/* 80147924 00144864  3C 60 80 14 */	lis r3, __dt__Q23efx15ContextChasePosFv@ha
/* 80147928 00144868  38 A3 FF FC */	addi r5, r3, __dt__Q23efx15ContextChasePosFv@l
/* 8014792C 0014486C  98 1F 00 05 */	stb r0, 5(r31)
/* 80147930 00144870  38 7F 00 70 */	addi r3, r31, 0x70
/* 80147934 00144874  98 1F 00 06 */	stb r0, 6(r31)
/* 80147938 00144878  98 1F 00 07 */	stb r0, 7(r31)
/* 8014793C 0014487C  91 3F 00 08 */	stw r9, 8(r31)
/* 80147940 00144880  39 2A 00 14 */	addi r9, r10, 0x14
/* 80147944 00144884  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80147948 00144888  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8014794C 0014488C  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80147950 00144890  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80147954 00144894  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 80147958 00144898  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8014795C 0014489C  90 1F 00 24 */	stw r0, 0x24(r31)
/* 80147960 001448A0  92 9F 00 34 */	stw r20, 0x34(r31)
/* 80147964 001448A4  92 BF 00 38 */	stw r21, 0x38(r31)
/* 80147968 001448A8  91 1F 00 34 */	stw r8, 0x34(r31)
/* 8014796C 001448AC  92 7F 00 38 */	stw r19, 0x38(r31)
/* 80147970 001448B0  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 80147974 001448B4  B2 DF 00 40 */	sth r22, 0x40(r31)
/* 80147978 001448B8  98 1F 00 42 */	stb r0, 0x42(r31)
/* 8014797C 001448BC  92 FF 00 34 */	stw r23, 0x34(r31)
/* 80147980 001448C0  93 1F 00 38 */	stw r24, 0x38(r31)
/* 80147984 001448C4  90 1F 00 44 */	stw r0, 0x44(r31)
/* 80147988 001448C8  B3 3F 00 40 */	sth r25, 0x40(r31)
/* 8014798C 001448CC  93 5F 00 34 */	stw r26, 0x34(r31)
/* 80147990 001448D0  93 7F 00 38 */	stw r27, 0x38(r31)
/* 80147994 001448D4  92 9F 00 48 */	stw r20, 0x48(r31)
/* 80147998 001448D8  92 BF 00 4C */	stw r21, 0x4c(r31)
/* 8014799C 001448DC  91 1F 00 48 */	stw r8, 0x48(r31)
/* 801479A0 001448E0  92 7F 00 4C */	stw r19, 0x4c(r31)
/* 801479A4 001448E4  90 1F 00 50 */	stw r0, 0x50(r31)
/* 801479A8 001448E8  B2 DF 00 54 */	sth r22, 0x54(r31)
/* 801479AC 001448EC  98 1F 00 56 */	stb r0, 0x56(r31)
/* 801479B0 001448F0  93 9F 00 48 */	stw r28, 0x48(r31)
/* 801479B4 001448F4  92 5F 00 4C */	stw r18, 0x4c(r31)
/* 801479B8 001448F8  90 1F 00 58 */	stw r0, 0x58(r31)
/* 801479BC 001448FC  B3 BF 00 54 */	sth r29, 0x54(r31)
/* 801479C0 00144900  93 DF 00 48 */	stw r30, 0x48(r31)
/* 801479C4 00144904  91 9F 00 4C */	stw r12, 0x4c(r31)
/* 801479C8 00144908  92 9F 00 5C */	stw r20, 0x5c(r31)
/* 801479CC 0014490C  92 BF 00 60 */	stw r21, 0x60(r31)
/* 801479D0 00144910  91 1F 00 5C */	stw r8, 0x5c(r31)
/* 801479D4 00144914  92 7F 00 60 */	stw r19, 0x60(r31)
/* 801479D8 00144918  90 1F 00 64 */	stw r0, 0x64(r31)
/* 801479DC 0014491C  B2 DF 00 68 */	sth r22, 0x68(r31)
/* 801479E0 00144920  98 1F 00 6A */	stb r0, 0x6a(r31)
/* 801479E4 00144924  93 9F 00 5C */	stw r28, 0x5c(r31)
/* 801479E8 00144928  92 5F 00 60 */	stw r18, 0x60(r31)
/* 801479EC 0014492C  90 1F 00 6C */	stw r0, 0x6c(r31)
/* 801479F0 00144930  B1 7F 00 68 */	sth r11, 0x68(r31)
/* 801479F4 00144934  91 5F 00 5C */	stw r10, 0x5c(r31)
/* 801479F8 00144938  91 3F 00 60 */	stw r9, 0x60(r31)
/* 801479FC 0014493C  4B F7 9E 41 */	bl __construct_array
/* 80147A00 00144940  3C 60 80 14 */	lis r3, __ct__Q23efx15ContextChasePosFv@ha
/* 80147A04 00144944  3C A0 80 14 */	lis r5, __dt__Q23efx15ContextChasePosFv@ha
/* 80147A08 00144948  38 83 00 5C */	addi r4, r3, __ct__Q23efx15ContextChasePosFv@l
/* 80147A0C 0014494C  38 C0 00 1C */	li r6, 0x1c
/* 80147A10 00144950  38 7F 00 90 */	addi r3, r31, 0x90
/* 80147A14 00144954  38 A5 FF FC */	addi r5, r5, __dt__Q23efx15ContextChasePosFv@l
/* 80147A18 00144958  38 E0 00 01 */	li r7, 1
/* 80147A1C 0014495C  4B F7 9E 21 */	bl __construct_array
/* 80147A20 00144960  3C 60 80 14 */	lis r3, __ct__Q23efx15ContextChasePosFv@ha
/* 80147A24 00144964  3C A0 80 14 */	lis r5, __dt__Q23efx15ContextChasePosFv@ha
/* 80147A28 00144968  38 83 00 5C */	addi r4, r3, __ct__Q23efx15ContextChasePosFv@l
/* 80147A2C 0014496C  38 C0 00 1C */	li r6, 0x1c
/* 80147A30 00144970  38 7F 00 AC */	addi r3, r31, 0xac
/* 80147A34 00144974  38 A5 FF FC */	addi r5, r5, __dt__Q23efx15ContextChasePosFv@l
/* 80147A38 00144978  38 E0 00 01 */	li r7, 1
/* 80147A3C 0014497C  4B F7 9E 01 */	bl __construct_array
/* 80147A40 00144980  3C 60 80 14 */	lis r3, __ct__Q23efx15ContextChasePosFv@ha
/* 80147A44 00144984  3C A0 80 14 */	lis r5, __dt__Q23efx15ContextChasePosFv@ha
/* 80147A48 00144988  38 83 00 5C */	addi r4, r3, __ct__Q23efx15ContextChasePosFv@l
/* 80147A4C 0014498C  38 C0 00 1C */	li r6, 0x1c
/* 80147A50 00144990  38 7F 00 C8 */	addi r3, r31, 0xc8
/* 80147A54 00144994  38 A5 FF FC */	addi r5, r5, __dt__Q23efx15ContextChasePosFv@l
/* 80147A58 00144998  38 E0 00 02 */	li r7, 2
/* 80147A5C 0014499C  4B F7 9D E1 */	bl __construct_array
/* 80147A60 001449A0  3C 60 80 14 */	lis r3, __ct__Q23efx15ContextChasePosFv@ha
/* 80147A64 001449A4  3C A0 80 14 */	lis r5, __dt__Q23efx15ContextChasePosFv@ha
/* 80147A68 001449A8  38 83 00 5C */	addi r4, r3, __ct__Q23efx15ContextChasePosFv@l
/* 80147A6C 001449AC  38 C0 00 1C */	li r6, 0x1c
/* 80147A70 001449B0  38 7F 01 00 */	addi r3, r31, 0x100
/* 80147A74 001449B4  38 A5 FF FC */	addi r5, r5, __dt__Q23efx15ContextChasePosFv@l
/* 80147A78 001449B8  38 E0 00 01 */	li r7, 1
/* 80147A7C 001449BC  4B F7 9D C1 */	bl __construct_array
/* 80147A80 001449C0  3C 60 80 14 */	lis r3, __ct__Q23efx15ContextChasePosFv@ha
/* 80147A84 001449C4  3C A0 80 14 */	lis r5, __dt__Q23efx15ContextChasePosFv@ha
/* 80147A88 001449C8  38 83 00 5C */	addi r4, r3, __ct__Q23efx15ContextChasePosFv@l
/* 80147A8C 001449CC  38 C0 00 1C */	li r6, 0x1c
/* 80147A90 001449D0  38 7F 01 1C */	addi r3, r31, 0x11c
/* 80147A94 001449D4  38 A5 FF FC */	addi r5, r5, __dt__Q23efx15ContextChasePosFv@l
/* 80147A98 001449D8  38 E0 00 02 */	li r7, 2
/* 80147A9C 001449DC  4B F7 9D A1 */	bl __construct_array
/* 80147AA0 001449E0  3C 60 80 14 */	lis r3, __ct__Q23efx15ContextChasePosFv@ha
/* 80147AA4 001449E4  3C A0 80 14 */	lis r5, __dt__Q23efx15ContextChasePosFv@ha
/* 80147AA8 001449E8  38 83 00 5C */	addi r4, r3, __ct__Q23efx15ContextChasePosFv@l
/* 80147AAC 001449EC  38 C0 00 1C */	li r6, 0x1c
/* 80147AB0 001449F0  38 7F 01 54 */	addi r3, r31, 0x154
/* 80147AB4 001449F4  38 A5 FF FC */	addi r5, r5, __dt__Q23efx15ContextChasePosFv@l
/* 80147AB8 001449F8  38 E0 00 01 */	li r7, 1
/* 80147ABC 001449FC  4B F7 9D 81 */	bl __construct_array
/* 80147AC0 00144A00  3C 60 80 14 */	lis r3, __ct__Q23efx15ContextChasePosFv@ha
/* 80147AC4 00144A04  3C A0 80 14 */	lis r5, __dt__Q23efx15ContextChasePosFv@ha
/* 80147AC8 00144A08  38 83 00 5C */	addi r4, r3, __ct__Q23efx15ContextChasePosFv@l
/* 80147ACC 00144A0C  38 C0 00 1C */	li r6, 0x1c
/* 80147AD0 00144A10  38 7F 01 70 */	addi r3, r31, 0x170
/* 80147AD4 00144A14  38 A5 FF FC */	addi r5, r5, __dt__Q23efx15ContextChasePosFv@l
/* 80147AD8 00144A18  38 E0 00 01 */	li r7, 1
/* 80147ADC 00144A1C  4B F7 9D 61 */	bl __construct_array
/* 80147AE0 00144A20  3C 60 80 14 */	lis r3, __ct__Q23efx15ContextChasePosFv@ha
/* 80147AE4 00144A24  3C A0 80 14 */	lis r5, __dt__Q23efx15ContextChasePosFv@ha
/* 80147AE8 00144A28  38 83 00 5C */	addi r4, r3, __ct__Q23efx15ContextChasePosFv@l
/* 80147AEC 00144A2C  38 C0 00 1C */	li r6, 0x1c
/* 80147AF0 00144A30  38 7F 01 8C */	addi r3, r31, 0x18c
/* 80147AF4 00144A34  38 A5 FF FC */	addi r5, r5, __dt__Q23efx15ContextChasePosFv@l
/* 80147AF8 00144A38  38 E0 00 01 */	li r7, 1
/* 80147AFC 00144A3C  4B F7 9D 41 */	bl __construct_array
/* 80147B00 00144A40  38 00 00 00 */	li r0, 0
/* 80147B04 00144A44  7F E3 FB 78 */	mr r3, r31
/* 80147B08 00144A48  98 1F 00 00 */	stb r0, 0(r31)
/* 80147B0C 00144A4C  98 1F 00 01 */	stb r0, 1(r31)
/* 80147B10 00144A50  98 1F 00 02 */	stb r0, 2(r31)
/* 80147B14 00144A54  98 1F 00 03 */	stb r0, 3(r31)
/* 80147B18 00144A58  98 1F 00 04 */	stb r0, 4(r31)
/* 80147B1C 00144A5C  98 1F 00 05 */	stb r0, 5(r31)
/* 80147B20 00144A60  98 1F 00 06 */	stb r0, 6(r31)
/* 80147B24 00144A64  98 1F 00 07 */	stb r0, 7(r31)
/* 80147B28 00144A68  BA 41 00 08 */	lmw r18, 8(r1)
/* 80147B2C 00144A6C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80147B30 00144A70  7C 08 03 A6 */	mtlr r0
/* 80147B34 00144A74  38 21 00 40 */	addi r1, r1, 0x40
/* 80147B38 00144A78  4E 80 00 20 */	blr 
.endfn __ct__Q23efx9TPkEffectFv

.fn __dt__Q23efx12TPkBlackDownFv, weak
/* 80147B3C 00144A7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147B40 00144A80  7C 08 02 A6 */	mflr r0
/* 80147B44 00144A84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147B48 00144A88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80147B4C 00144A8C  7C 9F 23 78 */	mr r31, r4
/* 80147B50 00144A90  93 C1 00 08 */	stw r30, 8(r1)
/* 80147B54 00144A94  7C 7E 1B 79 */	or. r30, r3, r3
/* 80147B58 00144A98  41 82 00 64 */	beq .L_80147BBC
/* 80147B5C 00144A9C  3C 60 80 4B */	lis r3, __vt__Q23efx12TPkBlackDown@ha
/* 80147B60 00144AA0  38 63 0B BC */	addi r3, r3, __vt__Q23efx12TPkBlackDown@l
/* 80147B64 00144AA4  90 7E 00 00 */	stw r3, 0(r30)
/* 80147B68 00144AA8  38 03 00 14 */	addi r0, r3, 0x14
/* 80147B6C 00144AAC  90 1E 00 04 */	stw r0, 4(r30)
/* 80147B70 00144AB0  41 82 00 3C */	beq .L_80147BAC
/* 80147B74 00144AB4  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 80147B78 00144AB8  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 80147B7C 00144ABC  90 7E 00 00 */	stw r3, 0(r30)
/* 80147B80 00144AC0  38 03 00 14 */	addi r0, r3, 0x14
/* 80147B84 00144AC4  90 1E 00 04 */	stw r0, 4(r30)
/* 80147B88 00144AC8  41 82 00 24 */	beq .L_80147BAC
/* 80147B8C 00144ACC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80147B90 00144AD0  38 7E 00 04 */	addi r3, r30, 4
/* 80147B94 00144AD4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80147B98 00144AD8  38 80 00 00 */	li r4, 0
/* 80147B9C 00144ADC  90 BE 00 00 */	stw r5, 0(r30)
/* 80147BA0 00144AE0  38 05 00 14 */	addi r0, r5, 0x14
/* 80147BA4 00144AE4  90 1E 00 04 */	stw r0, 4(r30)
/* 80147BA8 00144AE8  4B F4 80 F5 */	bl __dt__18JPAEmitterCallBackFv
.L_80147BAC:
/* 80147BAC 00144AEC  7F E0 07 35 */	extsh. r0, r31
/* 80147BB0 00144AF0  40 81 00 0C */	ble .L_80147BBC
/* 80147BB4 00144AF4  7F C3 F3 78 */	mr r3, r30
/* 80147BB8 00144AF8  4B ED C4 FD */	bl __dl__FPv
.L_80147BBC:
/* 80147BBC 00144AFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147BC0 00144B00  7F C3 F3 78 */	mr r3, r30
/* 80147BC4 00144B04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147BC8 00144B08  83 C1 00 08 */	lwz r30, 8(r1)
/* 80147BCC 00144B0C  7C 08 03 A6 */	mtlr r0
/* 80147BD0 00144B10  38 21 00 10 */	addi r1, r1, 0x10
/* 80147BD4 00144B14  4E 80 00 20 */	blr 
.endfn __dt__Q23efx12TPkBlackDownFv

.fn __dt__Q23efx7TPkMoeAFv, weak
/* 80147BD8 00144B18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147BDC 00144B1C  7C 08 02 A6 */	mflr r0
/* 80147BE0 00144B20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147BE4 00144B24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80147BE8 00144B28  7C 9F 23 78 */	mr r31, r4
/* 80147BEC 00144B2C  93 C1 00 08 */	stw r30, 8(r1)
/* 80147BF0 00144B30  7C 7E 1B 79 */	or. r30, r3, r3
/* 80147BF4 00144B34  41 82 00 64 */	beq .L_80147C58
/* 80147BF8 00144B38  3C 60 80 4B */	lis r3, __vt__Q23efx7TPkMoeA@ha
/* 80147BFC 00144B3C  38 63 0C 08 */	addi r3, r3, __vt__Q23efx7TPkMoeA@l
/* 80147C00 00144B40  90 7E 00 00 */	stw r3, 0(r30)
/* 80147C04 00144B44  38 03 00 14 */	addi r0, r3, 0x14
/* 80147C08 00144B48  90 1E 00 04 */	stw r0, 4(r30)
/* 80147C0C 00144B4C  41 82 00 3C */	beq .L_80147C48
/* 80147C10 00144B50  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 80147C14 00144B54  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 80147C18 00144B58  90 7E 00 00 */	stw r3, 0(r30)
/* 80147C1C 00144B5C  38 03 00 14 */	addi r0, r3, 0x14
/* 80147C20 00144B60  90 1E 00 04 */	stw r0, 4(r30)
/* 80147C24 00144B64  41 82 00 24 */	beq .L_80147C48
/* 80147C28 00144B68  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80147C2C 00144B6C  38 7E 00 04 */	addi r3, r30, 4
/* 80147C30 00144B70  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80147C34 00144B74  38 80 00 00 */	li r4, 0
/* 80147C38 00144B78  90 BE 00 00 */	stw r5, 0(r30)
/* 80147C3C 00144B7C  38 05 00 14 */	addi r0, r5, 0x14
/* 80147C40 00144B80  90 1E 00 04 */	stw r0, 4(r30)
/* 80147C44 00144B84  4B F4 80 59 */	bl __dt__18JPAEmitterCallBackFv
.L_80147C48:
/* 80147C48 00144B88  7F E0 07 35 */	extsh. r0, r31
/* 80147C4C 00144B8C  40 81 00 0C */	ble .L_80147C58
/* 80147C50 00144B90  7F C3 F3 78 */	mr r3, r30
/* 80147C54 00144B94  4B ED C4 61 */	bl __dl__FPv
.L_80147C58:
/* 80147C58 00144B98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147C5C 00144B9C  7F C3 F3 78 */	mr r3, r30
/* 80147C60 00144BA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147C64 00144BA4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80147C68 00144BA8  7C 08 03 A6 */	mtlr r0
/* 80147C6C 00144BAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80147C70 00144BB0  4E 80 00 20 */	blr 
.endfn __dt__Q23efx7TPkMoeAFv

.fn __dt__Q23efx11TPkNageBlurFv, weak
/* 80147C74 00144BB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147C78 00144BB8  7C 08 02 A6 */	mflr r0
/* 80147C7C 00144BBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147C80 00144BC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80147C84 00144BC4  7C 9F 23 78 */	mr r31, r4
/* 80147C88 00144BC8  93 C1 00 08 */	stw r30, 8(r1)
/* 80147C8C 00144BCC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80147C90 00144BD0  41 82 00 64 */	beq .L_80147CF4
/* 80147C94 00144BD4  3C 60 80 4E */	lis r3, __vt__Q23efx11TPkNageBlur@ha
/* 80147C98 00144BD8  38 63 73 18 */	addi r3, r3, __vt__Q23efx11TPkNageBlur@l
/* 80147C9C 00144BDC  90 7E 00 00 */	stw r3, 0(r30)
/* 80147CA0 00144BE0  38 03 00 14 */	addi r0, r3, 0x14
/* 80147CA4 00144BE4  90 1E 00 04 */	stw r0, 4(r30)
/* 80147CA8 00144BE8  41 82 00 3C */	beq .L_80147CE4
/* 80147CAC 00144BEC  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 80147CB0 00144BF0  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 80147CB4 00144BF4  90 7E 00 00 */	stw r3, 0(r30)
/* 80147CB8 00144BF8  38 03 00 14 */	addi r0, r3, 0x14
/* 80147CBC 00144BFC  90 1E 00 04 */	stw r0, 4(r30)
/* 80147CC0 00144C00  41 82 00 24 */	beq .L_80147CE4
/* 80147CC4 00144C04  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80147CC8 00144C08  38 7E 00 04 */	addi r3, r30, 4
/* 80147CCC 00144C0C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80147CD0 00144C10  38 80 00 00 */	li r4, 0
/* 80147CD4 00144C14  90 BE 00 00 */	stw r5, 0(r30)
/* 80147CD8 00144C18  38 05 00 14 */	addi r0, r5, 0x14
/* 80147CDC 00144C1C  90 1E 00 04 */	stw r0, 4(r30)
/* 80147CE0 00144C20  4B F4 7F BD */	bl __dt__18JPAEmitterCallBackFv
.L_80147CE4:
/* 80147CE4 00144C24  7F E0 07 35 */	extsh. r0, r31
/* 80147CE8 00144C28  40 81 00 0C */	ble .L_80147CF4
/* 80147CEC 00144C2C  7F C3 F3 78 */	mr r3, r30
/* 80147CF0 00144C30  4B ED C3 C5 */	bl __dl__FPv
.L_80147CF4:
/* 80147CF4 00144C34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147CF8 00144C38  7F C3 F3 78 */	mr r3, r30
/* 80147CFC 00144C3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147D00 00144C40  83 C1 00 08 */	lwz r30, 8(r1)
/* 80147D04 00144C44  7C 08 03 A6 */	mtlr r0
/* 80147D08 00144C48  38 21 00 10 */	addi r1, r1, 0x10
/* 80147D0C 00144C4C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx11TPkNageBlurFv

.fn isWalking__Q24Game4PikiFv, global
/* 80147D10 00144C50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147D14 00144C54  7C 08 02 A6 */	mflr r0
/* 80147D18 00144C58  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147D1C 00144C5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80147D20 00144C60  7C 7F 1B 78 */	mr r31, r3
/* 80147D24 00144C64  48 00 01 25 */	bl getCurrActionID__Q24Game4PikiFv
/* 80147D28 00144C68  2C 03 00 00 */	cmpwi r3, 0
/* 80147D2C 00144C6C  40 82 00 80 */	bne .L_80147DAC
/* 80147D30 00144C70  7F E3 FB 78 */	mr r3, r31
/* 80147D34 00144C74  48 00 00 E1 */	bl getCurrAction__Q24Game4PikiFv
/* 80147D38 00144C78  28 03 00 00 */	cmplwi r3, 0
/* 80147D3C 00144C7C  41 82 00 70 */	beq .L_80147DAC
/* 80147D40 00144C80  A0 03 00 28 */	lhz r0, 0x28(r3)
/* 80147D44 00144C84  28 00 00 01 */	cmplwi r0, 1
/* 80147D48 00144C88  40 82 00 64 */	bne .L_80147DAC
/* 80147D4C 00144C8C  C0 5F 01 E4 */	lfs f2, 0x1e4(r31)
/* 80147D50 00144C90  C0 3F 01 E8 */	lfs f1, 0x1e8(r31)
/* 80147D54 00144C94  EC 02 00 B2 */	fmuls f0, f2, f2
/* 80147D58 00144C98  C0 7F 01 EC */	lfs f3, 0x1ec(r31)
/* 80147D5C 00144C9C  EC 81 00 72 */	fmuls f4, f1, f1
/* 80147D60 00144CA0  C0 22 A0 BC */	lfs f1, lbl_8051841C@sda21(r2)
/* 80147D64 00144CA4  EC 63 00 F2 */	fmuls f3, f3, f3
/* 80147D68 00144CA8  EC 00 20 2A */	fadds f0, f0, f4
/* 80147D6C 00144CAC  EC 03 00 2A */	fadds f0, f3, f0
/* 80147D70 00144CB0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80147D74 00144CB4  40 81 00 20 */	ble .L_80147D94
/* 80147D78 00144CB8  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 80147D7C 00144CBC  EC 43 00 2A */	fadds f2, f3, f0
/* 80147D80 00144CC0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80147D84 00144CC4  40 81 00 14 */	ble .L_80147D98
/* 80147D88 00144CC8  FC 00 10 34 */	frsqrte f0, f2
/* 80147D8C 00144CCC  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80147D90 00144CD0  48 00 00 08 */	b .L_80147D98
.L_80147D94:
/* 80147D94 00144CD4  FC 40 08 90 */	fmr f2, f1
.L_80147D98:
/* 80147D98 00144CD8  C0 02 A0 C0 */	lfs f0, lbl_80518420@sda21(r2)
/* 80147D9C 00144CDC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80147DA0 00144CE0  40 81 00 0C */	ble .L_80147DAC
/* 80147DA4 00144CE4  38 60 00 01 */	li r3, 1
/* 80147DA8 00144CE8  48 00 00 08 */	b .L_80147DB0
.L_80147DAC:
/* 80147DAC 00144CEC  38 60 00 00 */	li r3, 0
.L_80147DB0:
/* 80147DB0 00144CF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147DB4 00144CF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147DB8 00144CF8  7C 08 03 A6 */	mtlr r0
/* 80147DBC 00144CFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80147DC0 00144D00  4E 80 00 20 */	blr 
.endfn isWalking__Q24Game4PikiFv

.fn getFormationSlotID__Q24Game4PikiFv, global
/* 80147DC4 00144D04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147DC8 00144D08  7C 08 02 A6 */	mflr r0
/* 80147DCC 00144D0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147DD0 00144D10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80147DD4 00144D14  7C 7F 1B 78 */	mr r31, r3
/* 80147DD8 00144D18  48 00 00 71 */	bl getCurrActionID__Q24Game4PikiFv
/* 80147DDC 00144D1C  2C 03 00 00 */	cmpwi r3, 0
/* 80147DE0 00144D20  40 82 00 1C */	bne .L_80147DFC
/* 80147DE4 00144D24  7F E3 FB 78 */	mr r3, r31
/* 80147DE8 00144D28  48 00 00 2D */	bl getCurrAction__Q24Game4PikiFv
/* 80147DEC 00144D2C  28 03 00 00 */	cmplwi r3, 0
/* 80147DF0 00144D30  41 82 00 0C */	beq .L_80147DFC
/* 80147DF4 00144D34  80 63 00 34 */	lwz r3, 0x34(r3)
/* 80147DF8 00144D38  48 00 00 08 */	b .L_80147E00
.L_80147DFC:
/* 80147DFC 00144D3C  38 60 FF FF */	li r3, -1
.L_80147E00:
/* 80147E00 00144D40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147E04 00144D44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80147E08 00144D48  7C 08 03 A6 */	mtlr r0
/* 80147E0C 00144D4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80147E10 00144D50  4E 80 00 20 */	blr 
.endfn getFormationSlotID__Q24Game4PikiFv

.fn getCurrAction__Q24Game4PikiFv, global
/* 80147E14 00144D54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80147E18 00144D58  7C 08 02 A6 */	mflr r0
/* 80147E1C 00144D5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80147E20 00144D60  80 63 02 94 */	lwz r3, 0x294(r3)
/* 80147E24 00144D64  48 04 EE DD */	bl getCurrAction__Q26PikiAI5BrainFv
/* 80147E28 00144D68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80147E2C 00144D6C  7C 08 03 A6 */	mtlr r0
/* 80147E30 00144D70  38 21 00 10 */	addi r1, r1, 0x10
/* 80147E34 00144D74  4E 80 00 20 */	blr 
.endfn getCurrAction__Q24Game4PikiFv

.fn clearCurrAction__Q24Game4PikiFv, global
/* 80147E38 00144D78  80 63 02 94 */	lwz r3, 0x294(r3)
/* 80147E3C 00144D7C  38 00 FF FF */	li r0, -1
/* 80147E40 00144D80  90 03 00 08 */	stw r0, 8(r3)
/* 80147E44 00144D84  4E 80 00 20 */	blr 
.endfn clearCurrAction__Q24Game4PikiFv

.fn getCurrActionID__Q24Game4PikiFv, global
/* 80147E48 00144D88  80 63 02 94 */	lwz r3, 0x294(r3)
/* 80147E4C 00144D8C  80 63 00 08 */	lwz r3, 8(r3)
/* 80147E50 00144D90  4E 80 00 20 */	blr 
.endfn getCurrActionID__Q24Game4PikiFv

.fn onInit__Q24Game4PikiFPQ24Game15CreatureInitArg, global
/* 80147E54 00144D94  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80147E58 00144D98  7C 08 02 A6 */	mflr r0
/* 80147E5C 00144D9C  3C A0 80 48 */	lis r5, lbl_8047C880@ha
/* 80147E60 00144DA0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80147E64 00144DA4  38 00 FF FF */	li r0, -1
/* 80147E68 00144DA8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80147E6C 00144DAC  3B E5 C8 80 */	addi r31, r5, lbl_8047C880@l
/* 80147E70 00144DB0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80147E74 00144DB4  7C 9E 23 78 */	mr r30, r4
/* 80147E78 00144DB8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80147E7C 00144DBC  7C 7D 1B 78 */	mr r29, r3
/* 80147E80 00144DC0  B0 03 02 A4 */	sth r0, 0x2a4(r3)
/* 80147E84 00144DC4  38 00 00 00 */	li r0, 0
/* 80147E88 00144DC8  90 03 02 C4 */	stw r0, 0x2c4(r3)
/* 80147E8C 00144DCC  48 00 21 6D */	bl initColor__Q24Game4PikiFv
/* 80147E90 00144DD0  7F A3 EB 78 */	mr r3, r29
/* 80147E94 00144DD4  4B FF 4F 01 */	bl initFakePiki__Q24Game8FakePikiFv
/* 80147E98 00144DD8  7F A3 EB 78 */	mr r3, r29
/* 80147E9C 00144DDC  38 80 00 01 */	li r4, 1
/* 80147EA0 00144DE0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80147EA4 00144DE4  81 8C 01 E8 */	lwz r12, 0x1e8(r12)
/* 80147EA8 00144DE8  7D 89 03 A6 */	mtctr r12
/* 80147EAC 00144DEC  4E 80 04 21 */	bctrl 
/* 80147EB0 00144DF0  7F A3 EB 78 */	mr r3, r29
/* 80147EB4 00144DF4  38 80 00 01 */	li r4, 1
/* 80147EB8 00144DF8  81 9D 00 00 */	lwz r12, 0(r29)
/* 80147EBC 00144DFC  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 80147EC0 00144E00  7D 89 03 A6 */	mtctr r12
/* 80147EC4 00144E04  4E 80 04 21 */	bctrl 
/* 80147EC8 00144E08  7F A3 EB 78 */	mr r3, r29
/* 80147ECC 00144E0C  38 80 00 01 */	li r4, 1
/* 80147ED0 00144E10  81 9D 00 00 */	lwz r12, 0(r29)
/* 80147ED4 00144E14  81 8C 01 E0 */	lwz r12, 0x1e0(r12)
/* 80147ED8 00144E18  7D 89 03 A6 */	mtctr r12
/* 80147EDC 00144E1C  4E 80 04 21 */	bctrl 
/* 80147EE0 00144E20  7F A3 EB 78 */	mr r3, r29
/* 80147EE4 00144E24  38 80 00 00 */	li r4, 0
/* 80147EE8 00144E28  48 00 15 E5 */	bl setGasInvincible__Q24Game4PikiFUc
/* 80147EEC 00144E2C  38 00 00 00 */	li r0, 0
/* 80147EF0 00144E30  7F A4 EB 78 */	mr r4, r29
/* 80147EF4 00144E34  98 1D 02 B8 */	stb r0, 0x2b8(r29)
/* 80147EF8 00144E38  98 1D 02 B9 */	stb r0, 0x2b9(r29)
/* 80147EFC 00144E3C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80147F00 00144E40  48 01 68 39 */	bl setupPiki__Q24Game7PikiMgrFPQ24Game4Piki
/* 80147F04 00144E44  7F A3 EB 78 */	mr r3, r29
/* 80147F08 00144E48  4B FF 4F 6D */	bl initAnimator__Q24Game8FakePikiFv
/* 80147F0C 00144E4C  80 7D 02 58 */	lwz r3, 0x258(r29)
/* 80147F10 00144E50  48 27 07 A1 */	bl init__Q23efx9TPkEffectFv
/* 80147F14 00144E54  80 7D 02 58 */	lwz r3, 0x258(r29)
/* 80147F18 00144E58  38 BD 02 5C */	addi r5, r29, 0x25c
/* 80147F1C 00144E5C  38 9D 02 6C */	addi r4, r29, 0x26c
/* 80147F20 00144E60  38 00 FF FF */	li r0, -1
/* 80147F24 00144E64  90 A3 00 0C */	stw r5, 0xc(r3)
/* 80147F28 00144E68  80 7D 02 58 */	lwz r3, 0x258(r29)
/* 80147F2C 00144E6C  90 83 00 14 */	stw r4, 0x14(r3)
/* 80147F30 00144E70  80 7D 02 58 */	lwz r3, 0x258(r29)
/* 80147F34 00144E74  90 03 00 08 */	stw r0, 8(r3)
/* 80147F38 00144E78  80 7D 01 14 */	lwz r3, 0x114(r29)
/* 80147F3C 00144E7C  80 9D 01 74 */	lwz r4, 0x174(r29)
/* 80147F40 00144E80  4B FE DB 89 */	bl attachModel__8CollTreeFPQ28SysShape9MtxObject
/* 80147F44 00144E84  28 1E 00 00 */	cmplwi r30, 0
/* 80147F48 00144E88  41 82 00 58 */	beq .L_80147FA0
/* 80147F4C 00144E8C  80 1E 00 08 */	lwz r0, 8(r30)
/* 80147F50 00144E90  28 00 00 00 */	cmplwi r0, 0
/* 80147F54 00144E94  41 82 00 4C */	beq .L_80147FA0
/* 80147F58 00144E98  3C 80 80 4B */	lis r4, __vt__Q26PikiAI9ActionArg@ha
/* 80147F5C 00144E9C  3C 60 80 4B */	lis r3, __vt__Q26PikiAI17CreatureActionArg@ha
/* 80147F60 00144EA0  38 84 05 30 */	addi r4, r4, __vt__Q26PikiAI9ActionArg@l
/* 80147F64 00144EA4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80147F68 00144EA8  38 03 05 24 */	addi r0, r3, __vt__Q26PikiAI17CreatureActionArg@l
/* 80147F6C 00144EAC  38 A1 00 08 */	addi r5, r1, 8
/* 80147F70 00144EB0  90 81 00 08 */	stw r4, 8(r1)
/* 80147F74 00144EB4  38 80 00 0B */	li r4, 0xb
/* 80147F78 00144EB8  90 01 00 08 */	stw r0, 8(r1)
/* 80147F7C 00144EBC  80 7D 02 94 */	lwz r3, 0x294(r29)
/* 80147F80 00144EC0  48 04 F0 15 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 80147F84 00144EC4  7F A3 EB 78 */	mr r3, r29
/* 80147F88 00144EC8  38 80 00 05 */	li r4, 5
/* 80147F8C 00144ECC  48 00 26 35 */	bl changeShape__Q24Game4PikiFi
/* 80147F90 00144ED0  80 1D 01 7C */	lwz r0, 0x17c(r29)
/* 80147F94 00144ED4  60 00 01 00 */	ori r0, r0, 0x100
/* 80147F98 00144ED8  90 1D 01 7C */	stw r0, 0x17c(r29)
/* 80147F9C 00144EDC  48 00 00 24 */	b .L_80147FC0
.L_80147FA0:
/* 80147FA0 00144EE0  80 7D 02 94 */	lwz r3, 0x294(r29)
/* 80147FA4 00144EE4  38 80 00 01 */	li r4, 1
/* 80147FA8 00144EE8  38 A0 00 00 */	li r5, 0
/* 80147FAC 00144EEC  48 04 EF E9 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 80147FB0 00144EF0  3C 60 80 51 */	lis r3, alivePikis__Q24Game8GameStat@ha
/* 80147FB4 00144EF4  7F A4 EB 78 */	mr r4, r29
/* 80147FB8 00144EF8  38 63 25 EC */	addi r3, r3, alivePikis__Q24Game8GameStat@l
/* 80147FBC 00144EFC  48 08 90 D9 */	bl inc__Q34Game8GameStat11PikiCounterFPQ24Game4Piki
.L_80147FC0:
/* 80147FC0 00144F00  28 1E 00 00 */	cmplwi r30, 0
/* 80147FC4 00144F04  41 82 00 10 */	beq .L_80147FD4
/* 80147FC8 00144F08  80 BE 00 04 */	lwz r5, 4(r30)
/* 80147FCC 00144F0C  2C 05 FF FF */	cmpwi r5, -1
/* 80147FD0 00144F10  40 82 00 28 */	bne .L_80147FF8
.L_80147FD4:
/* 80147FD4 00144F14  80 7D 02 8C */	lwz r3, 0x28c(r29)
/* 80147FD8 00144F18  7F A4 EB 78 */	mr r4, r29
/* 80147FDC 00144F1C  38 A0 00 00 */	li r5, 0
/* 80147FE0 00144F20  38 C0 00 00 */	li r6, 0
/* 80147FE4 00144F24  81 83 00 00 */	lwz r12, 0(r3)
/* 80147FE8 00144F28  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80147FEC 00144F2C  7D 89 03 A6 */	mtctr r12
/* 80147FF0 00144F30  4E 80 04 21 */	bctrl 
/* 80147FF4 00144F34  48 00 00 20 */	b .L_80148014
.L_80147FF8:
/* 80147FF8 00144F38  80 7D 02 8C */	lwz r3, 0x28c(r29)
/* 80147FFC 00144F3C  7F A4 EB 78 */	mr r4, r29
/* 80148000 00144F40  38 C0 00 00 */	li r6, 0
/* 80148004 00144F44  81 83 00 00 */	lwz r12, 0(r3)
/* 80148008 00144F48  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8014800C 00144F4C  7D 89 03 A6 */	mtctr r12
/* 80148010 00144F50  4E 80 04 21 */	bctrl 
.L_80148014:
/* 80148014 00144F54  80 8D 92 F4 */	lwz r4, pikiMgr__4Game@sda21(r13)
/* 80148018 00144F58  38 7D 02 98 */	addi r3, r29, 0x298
/* 8014801C 00144F5C  80 84 00 78 */	lwz r4, 0x78(r4)
/* 80148020 00144F60  48 04 E6 C5 */	bl init__Q24Game13UpdateContextFPQ24Game9UpdateMgr
/* 80148024 00144F64  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 80148028 00144F68  38 9F 00 18 */	addi r4, r31, 0x18
/* 8014802C 00144F6C  48 2F 6F B9 */	bl getJoint__Q28SysShape5ModelFPc
/* 80148030 00144F70  90 7D 02 68 */	stw r3, 0x268(r29)
/* 80148034 00144F74  38 9F 00 24 */	addi r4, r31, 0x24
/* 80148038 00144F78  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 8014803C 00144F7C  48 2F 6F A9 */	bl getJoint__Q28SysShape5ModelFPc
/* 80148040 00144F80  90 7D 02 78 */	stw r3, 0x278(r29)
/* 80148044 00144F84  80 1D 02 68 */	lwz r0, 0x268(r29)
/* 80148048 00144F88  28 00 00 00 */	cmplwi r0, 0
/* 8014804C 00144F8C  40 82 00 18 */	bne .L_80148064
/* 80148050 00144F90  38 7F 00 30 */	addi r3, r31, 0x30
/* 80148054 00144F94  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80148058 00144F98  38 80 02 B4 */	li r4, 0x2b4
/* 8014805C 00144F9C  4C C6 31 82 */	crclr 6
/* 80148060 00144FA0  4B EE 25 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80148064:
/* 80148064 00144FA4  80 1D 02 78 */	lwz r0, 0x278(r29)
/* 80148068 00144FA8  28 00 00 00 */	cmplwi r0, 0
/* 8014806C 00144FAC  40 82 00 18 */	bne .L_80148084
/* 80148070 00144FB0  38 7F 00 30 */	addi r3, r31, 0x30
/* 80148074 00144FB4  38 BF 00 54 */	addi r5, r31, 0x54
/* 80148078 00144FB8  38 80 02 B7 */	li r4, 0x2b7
/* 8014807C 00144FBC  4C C6 31 82 */	crclr 6
/* 80148080 00144FC0  4B EE 25 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80148084:
/* 80148084 00144FC4  7F A3 EB 78 */	mr r3, r29
/* 80148088 00144FC8  38 9F 00 6C */	addi r4, r31, 0x6c
/* 8014808C 00144FCC  4B FF 74 45 */	bl debugShapeDL__Q24Game8FakePikiFPc
/* 80148090 00144FD0  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80148094 00144FD4  38 9F 00 78 */	addi r4, r31, 0x78
/* 80148098 00144FD8  48 01 71 69 */	bl debugShapeDL__Q24Game7PikiMgrFPc
/* 8014809C 00144FDC  C0 02 A0 BC */	lfs f0, lbl_8051841C@sda21(r2)
/* 801480A0 00144FE0  38 00 FF FF */	li r0, -1
/* 801480A4 00144FE4  7F A3 EB 78 */	mr r3, r29
/* 801480A8 00144FE8  38 80 00 00 */	li r4, 0
/* 801480AC 00144FEC  D0 1D 02 88 */	stfs f0, 0x288(r29)
/* 801480B0 00144FF0  B0 1D 02 84 */	sth r0, 0x284(r29)
/* 801480B4 00144FF4  48 00 1C 71 */	bl setDopeEffect__Q24Game4PikiFb
/* 801480B8 00144FF8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801480BC 00144FFC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801480C0 00145000  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801480C4 00145004  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801480C8 00145008  7C 08 03 A6 */	mtlr r0
/* 801480CC 0014500C  38 21 00 20 */	addi r1, r1, 0x20
/* 801480D0 00145010  4E 80 00 20 */	blr 
.endfn onInit__Q24Game4PikiFPQ24Game15CreatureInitArg

.fn "start__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg", weak
/* 801480D4 00145014  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801480D8 00145018  7C 08 02 A6 */	mflr r0
/* 801480DC 0014501C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801480E0 00145020  38 00 00 00 */	li r0, 0
/* 801480E4 00145024  90 04 02 90 */	stw r0, 0x290(r4)
/* 801480E8 00145028  81 83 00 00 */	lwz r12, 0(r3)
/* 801480EC 0014502C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801480F0 00145030  7D 89 03 A6 */	mtctr r12
/* 801480F4 00145034  4E 80 04 21 */	bctrl 
/* 801480F8 00145038  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801480FC 0014503C  7C 08 03 A6 */	mtlr r0
/* 80148100 00145040  38 21 00 10 */	addi r1, r1, 0x10
/* 80148104 00145044  4E 80 00 20 */	blr 
.endfn "start__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"

.fn onKill__Q24Game4PikiFPQ24Game15CreatureKillArg, global
/* 80148108 00145048  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014810C 0014504C  7C 08 02 A6 */	mflr r0
/* 80148110 00145050  90 01 00 34 */	stw r0, 0x34(r1)
/* 80148114 00145054  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80148118 00145058  7C 7F 1B 78 */	mr r31, r3
/* 8014811C 0014505C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80148120 00145060  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80148124 00145064  7C 9D 23 78 */	mr r29, r4
/* 80148128 00145068  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8014812C 0014506C  80 05 00 44 */	lwz r0, 0x44(r5)
/* 80148130 00145070  2C 00 00 01 */	cmpwi r0, 1
/* 80148134 00145074  40 82 00 30 */	bne .L_80148164
/* 80148138 00145078  28 1D 00 00 */	cmplwi r29, 0
/* 8014813C 0014507C  41 82 00 28 */	beq .L_80148164
/* 80148140 00145080  80 1D 00 04 */	lwz r0, 4(r29)
/* 80148144 00145084  54 00 00 01 */	rlwinm. r0, r0, 0, 0, 0
/* 80148148 00145088  41 82 00 1C */	beq .L_80148164
/* 8014814C 0014508C  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80148150 00145090  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80148154 00145094  48 03 39 49 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 80148158 00145098  28 03 00 00 */	cmplwi r3, 0
/* 8014815C 0014509C  41 82 00 08 */	beq .L_80148164
/* 80148160 001450A0  48 03 00 2D */	bl vsChargePikmin__Q24Game5OnyonFv
.L_80148164:
/* 80148164 001450A4  7F E3 FB 78 */	mr r3, r31
/* 80148168 001450A8  48 00 1C 41 */	bl clearDope__Q24Game4PikiFv
/* 8014816C 001450AC  83 DF 02 58 */	lwz r30, 0x258(r31)
/* 80148170 001450B0  38 00 00 00 */	li r0, 0
/* 80148174 001450B4  98 1E 00 00 */	stb r0, 0(r30)
/* 80148178 001450B8  7F C3 F3 78 */	mr r3, r30
/* 8014817C 001450BC  98 1E 00 01 */	stb r0, 1(r30)
/* 80148180 001450C0  98 1E 00 02 */	stb r0, 2(r30)
/* 80148184 001450C4  98 1E 00 03 */	stb r0, 3(r30)
/* 80148188 001450C8  98 1E 00 04 */	stb r0, 4(r30)
/* 8014818C 001450CC  98 1E 00 05 */	stb r0, 5(r30)
/* 80148190 001450D0  98 1E 00 06 */	stb r0, 6(r30)
/* 80148194 001450D4  98 1E 00 07 */	stb r0, 7(r30)
/* 80148198 001450D8  48 27 06 F5 */	bl killKourin___Q23efx9TPkEffectFv
/* 8014819C 001450DC  7F C3 F3 78 */	mr r3, r30
/* 801481A0 001450E0  48 27 07 71 */	bl killDoping___Q23efx9TPkEffectFv
/* 801481A4 001450E4  7F C3 F3 78 */	mr r3, r30
/* 801481A8 001450E8  48 27 08 85 */	bl killNage___Q23efx9TPkEffectFv
/* 801481AC 001450EC  7F C3 F3 78 */	mr r3, r30
/* 801481B0 001450F0  48 27 09 3D */	bl killMoe___Q23efx9TPkEffectFv
/* 801481B4 001450F4  7F C3 F3 78 */	mr r3, r30
/* 801481B8 001450F8  48 27 09 D9 */	bl killChudoku___Q23efx9TPkEffectFv
/* 801481BC 001450FC  7F C3 F3 78 */	mr r3, r30
/* 801481C0 00145100  48 27 0A 55 */	bl killMoeSmoke___Q23efx9TPkEffectFv
/* 801481C4 00145104  7F C3 F3 78 */	mr r3, r30
/* 801481C8 00145108  48 27 0A E1 */	bl killBlackDown___Q23efx9TPkEffectFv
/* 801481CC 0014510C  7F C3 F3 78 */	mr r3, r30
/* 801481D0 00145110  48 27 0B 65 */	bl killWater___Q23efx9TPkEffectFv
/* 801481D4 00145114  7F C3 F3 78 */	mr r3, r30
/* 801481D8 00145118  48 27 0B E1 */	bl killHamonA___Q23efx9TPkEffectFv
/* 801481DC 0014511C  7F C3 F3 78 */	mr r3, r30
/* 801481E0 00145120  48 27 0C 5D */	bl killHamonB___Q23efx9TPkEffectFv
/* 801481E4 00145124  28 1D 00 00 */	cmplwi r29, 0
/* 801481E8 00145128  41 82 00 10 */	beq .L_801481F8
/* 801481EC 0014512C  80 1D 00 04 */	lwz r0, 4(r29)
/* 801481F0 00145130  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801481F4 00145134  40 82 01 C4 */	bne .L_801483B8
.L_801481F8:
/* 801481F8 00145138  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801481FC 0014513C  28 03 00 00 */	cmplwi r3, 0
/* 80148200 00145140  41 82 00 78 */	beq .L_80148278
/* 80148204 00145144  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80148208 00145148  38 00 00 00 */	li r0, 0
/* 8014820C 0014514C  2C 03 00 02 */	cmpwi r3, 2
/* 80148210 00145150  41 82 00 0C */	beq .L_8014821C
/* 80148214 00145154  2C 03 00 03 */	cmpwi r3, 3
/* 80148218 00145158  40 82 00 08 */	bne .L_80148220
.L_8014821C:
/* 8014821C 0014515C  38 00 00 01 */	li r0, 1
.L_80148220:
/* 80148220 00145160  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80148224 00145164  41 82 00 54 */	beq .L_80148278
/* 80148228 00145168  7F E3 FB 78 */	mr r3, r31
/* 8014822C 0014516C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80148230 00145170  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 80148234 00145174  7D 89 03 A6 */	mtctr r12
/* 80148238 00145178  4E 80 04 21 */	bctrl 
/* 8014823C 0014517C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80148240 00145180  41 82 00 38 */	beq .L_80148278
/* 80148244 00145184  3C 60 80 4B */	lis r3, __vt__Q24Game11GameMessage@ha
/* 80148248 00145188  3C 80 80 4B */	lis r4, __vt__Q24Game23GameMessageVsPikminDead@ha
/* 8014824C 0014518C  38 03 05 90 */	addi r0, r3, __vt__Q24Game11GameMessage@l
/* 80148250 00145190  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80148254 00145194  90 01 00 08 */	stw r0, 8(r1)
/* 80148258 00145198  38 04 61 1C */	addi r0, r4, __vt__Q24Game23GameMessageVsPikminDead@l
/* 8014825C 0014519C  38 81 00 08 */	addi r4, r1, 8
/* 80148260 001451A0  90 01 00 08 */	stw r0, 8(r1)
/* 80148264 001451A4  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80148268 001451A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014826C 001451AC  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80148270 001451B0  7D 89 03 A6 */	mtctr r12
/* 80148274 001451B4  4E 80 04 21 */	bctrl 
.L_80148278:
/* 80148278 001451B8  7F E4 FB 78 */	mr r4, r31
/* 8014827C 001451BC  38 61 00 0C */	addi r3, r1, 0xc
/* 80148280 001451C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80148284 001451C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80148288 001451C8  7D 89 03 A6 */	mtctr r12
/* 8014828C 001451CC  4E 80 04 21 */	bctrl 
/* 80148290 001451D0  83 DF 02 58 */	lwz r30, 0x258(r31)
/* 80148294 001451D4  38 00 00 00 */	li r0, 0
/* 80148298 001451D8  98 1E 00 00 */	stb r0, 0(r30)
/* 8014829C 001451DC  7F C3 F3 78 */	mr r3, r30
/* 801482A0 001451E0  98 1E 00 01 */	stb r0, 1(r30)
/* 801482A4 001451E4  98 1E 00 02 */	stb r0, 2(r30)
/* 801482A8 001451E8  98 1E 00 03 */	stb r0, 3(r30)
/* 801482AC 001451EC  98 1E 00 04 */	stb r0, 4(r30)
/* 801482B0 001451F0  98 1E 00 05 */	stb r0, 5(r30)
/* 801482B4 001451F4  98 1E 00 06 */	stb r0, 6(r30)
/* 801482B8 001451F8  98 1E 00 07 */	stb r0, 7(r30)
/* 801482BC 001451FC  48 27 05 D1 */	bl killKourin___Q23efx9TPkEffectFv
/* 801482C0 00145200  7F C3 F3 78 */	mr r3, r30
/* 801482C4 00145204  48 27 06 4D */	bl killDoping___Q23efx9TPkEffectFv
/* 801482C8 00145208  7F C3 F3 78 */	mr r3, r30
/* 801482CC 0014520C  48 27 07 61 */	bl killNage___Q23efx9TPkEffectFv
/* 801482D0 00145210  7F C3 F3 78 */	mr r3, r30
/* 801482D4 00145214  48 27 08 19 */	bl killMoe___Q23efx9TPkEffectFv
/* 801482D8 00145218  7F C3 F3 78 */	mr r3, r30
/* 801482DC 0014521C  48 27 08 B5 */	bl killChudoku___Q23efx9TPkEffectFv
/* 801482E0 00145220  7F C3 F3 78 */	mr r3, r30
/* 801482E4 00145224  48 27 09 31 */	bl killMoeSmoke___Q23efx9TPkEffectFv
/* 801482E8 00145228  7F C3 F3 78 */	mr r3, r30
/* 801482EC 0014522C  48 27 09 BD */	bl killBlackDown___Q23efx9TPkEffectFv
/* 801482F0 00145230  7F C3 F3 78 */	mr r3, r30
/* 801482F4 00145234  48 27 0A 41 */	bl killWater___Q23efx9TPkEffectFv
/* 801482F8 00145238  7F C3 F3 78 */	mr r3, r30
/* 801482FC 0014523C  48 27 0A BD */	bl killHamonA___Q23efx9TPkEffectFv
/* 80148300 00145240  7F C3 F3 78 */	mr r3, r30
/* 80148304 00145244  48 27 0B 39 */	bl killHamonB___Q23efx9TPkEffectFv
/* 80148308 00145248  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8014830C 0014524C  80 9E 00 08 */	lwz r4, 8(r30)
/* 80148310 00145250  48 26 F1 B5 */	bl "createSimpleDead__3efxFR10Vector3<f>l"
/* 80148314 00145254  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80148318 00145258  38 80 28 10 */	li r4, 0x2810
/* 8014831C 0014525C  38 A0 00 5A */	li r5, 0x5a
/* 80148320 00145260  38 C0 00 00 */	li r6, 0
/* 80148324 00145264  48 31 A2 5D */	bl startFreePikiSound__Q23PSM4PikiFUlUlUl
/* 80148328 00145268  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014832C 0014526C  28 03 00 00 */	cmplwi r3, 0
/* 80148330 00145270  41 82 00 88 */	beq .L_801483B8
/* 80148334 00145274  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80148338 00145278  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8014833C 0014527C  40 82 00 7C */	bne .L_801483B8
/* 80148340 00145280  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 80148344 00145284  2C 00 00 05 */	cmpwi r0, 5
/* 80148348 00145288  40 80 00 44 */	bge .L_8014838C
/* 8014834C 0014528C  7F E3 FB 78 */	mr r3, r31
/* 80148350 00145290  81 9F 00 00 */	lwz r12, 0(r31)
/* 80148354 00145294  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80148358 00145298  7D 89 03 A6 */	mtctr r12
/* 8014835C 0014529C  4E 80 04 21 */	bctrl 
/* 80148360 001452A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80148364 001452A4  40 82 00 28 */	bne .L_8014838C
/* 80148368 001452A8  7F E3 FB 78 */	mr r3, r31
/* 8014836C 001452AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80148370 001452B0  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 80148374 001452B4  7D 89 03 A6 */	mtctr r12
/* 80148378 001452B8  4E 80 04 21 */	bctrl 
/* 8014837C 001452BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80148380 001452C0  40 82 00 0C */	bne .L_8014838C
/* 80148384 001452C4  38 60 00 07 */	li r3, 7
/* 80148388 001452C8  48 0E 83 91 */	bl inc__Q24Game8DeathMgrFi
.L_8014838C:
/* 8014838C 001452CC  A8 9F 02 A4 */	lha r4, 0x2a4(r31)
/* 80148390 001452D0  2C 04 FF FF */	cmpwi r4, -1
/* 80148394 001452D4  41 82 00 24 */	beq .L_801483B8
/* 80148398 001452D8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8014839C 001452DC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801483A0 001452E0  2C 00 00 00 */	cmpwi r0, 0
/* 801483A4 001452E4  40 82 00 14 */	bne .L_801483B8
/* 801483A8 001452E8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801483AC 001452EC  38 63 00 40 */	addi r3, r3, 0x40
/* 801483B0 001452F0  48 0E B7 15 */	bl getTekiInfo__Q34Game8TekiStat3MgrFi
/* 801483B4 001452F4  48 0E B4 9D */	bl incKillPikmin__Q34Game8TekiStat4InfoFv
.L_801483B8:
/* 801483B8 001452F8  7F E3 FB 78 */	mr r3, r31
/* 801483BC 001452FC  3B C0 00 00 */	li r30, 0
/* 801483C0 00145300  81 9F 00 00 */	lwz r12, 0(r31)
/* 801483C4 00145304  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801483C8 00145308  7D 89 03 A6 */	mtctr r12
/* 801483CC 0014530C  4E 80 04 21 */	bctrl 
/* 801483D0 00145310  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801483D4 00145314  40 82 00 14 */	bne .L_801483E8
/* 801483D8 00145318  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 801483DC 0014531C  2C 00 00 05 */	cmpwi r0, 5
/* 801483E0 00145320  40 82 00 08 */	bne .L_801483E8
/* 801483E4 00145324  3B C0 00 01 */	li r30, 1
.L_801483E8:
/* 801483E8 00145328  7F E3 FB 78 */	mr r3, r31
/* 801483EC 0014532C  4B FF 4A 61 */	bl killFakePiki__Q24Game8FakePikiFv
/* 801483F0 00145330  7F E3 FB 78 */	mr r3, r31
/* 801483F4 00145334  38 80 00 00 */	li r4, 0
/* 801483F8 00145338  48 00 18 CD */	bl setFreeLightEffect__Q24Game4PikiFb
/* 801483FC 0014533C  7F E3 FB 78 */	mr r3, r31
/* 80148400 00145340  38 80 00 00 */	li r4, 0
/* 80148404 00145344  48 00 19 21 */	bl setDopeEffect__Q24Game4PikiFb
/* 80148408 00145348  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 8014840C 0014534C  48 04 E8 F5 */	bl getCurrAction__Q26PikiAI5BrainFv
/* 80148410 00145350  28 03 00 00 */	cmplwi r3, 0
/* 80148414 00145354  41 82 00 1C */	beq .L_80148430
/* 80148418 00145358  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 8014841C 0014535C  48 04 E8 E5 */	bl getCurrAction__Q26PikiAI5BrainFv
/* 80148420 00145360  81 83 00 00 */	lwz r12, 0(r3)
/* 80148424 00145364  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80148428 00145368  7D 89 03 A6 */	mtctr r12
/* 8014842C 0014536C  4E 80 04 21 */	bctrl 
.L_80148430:
/* 80148430 00145370  80 9F 02 94 */	lwz r4, 0x294(r31)
/* 80148434 00145374  38 00 FF FF */	li r0, -1
/* 80148438 00145378  38 7F 02 98 */	addi r3, r31, 0x298
/* 8014843C 0014537C  90 04 00 08 */	stw r0, 8(r4)
/* 80148440 00145380  48 04 E2 E1 */	bl exit__Q24Game13UpdateContextFv
/* 80148444 00145384  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80148448 00145388  40 82 00 14 */	bne .L_8014845C
/* 8014844C 0014538C  3C 60 80 51 */	lis r3, alivePikis__Q24Game8GameStat@ha
/* 80148450 00145390  7F E4 FB 78 */	mr r4, r31
/* 80148454 00145394  38 63 25 EC */	addi r3, r3, alivePikis__Q24Game8GameStat@l
/* 80148458 00145398  48 08 8C C1 */	bl dec__Q34Game8GameStat11PikiCounterFPQ24Game4Piki
.L_8014845C:
/* 8014845C 0014539C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80148460 001453A0  7F E4 FB 78 */	mr r4, r31
/* 80148464 001453A4  48 00 26 7D */	bl "kill__27MonoObjectMgr<Q24Game4Piki>FPQ24Game4Piki"
/* 80148468 001453A8  38 00 00 00 */	li r0, 0
/* 8014846C 001453AC  7F E3 FB 78 */	mr r3, r31
/* 80148470 001453B0  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 80148474 001453B4  48 0D 61 81 */	bl exit__Q25Radar3MgrFPQ24Game15TPositionObject
/* 80148478 001453B8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014847C 001453BC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80148480 001453C0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80148484 001453C4  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80148488 001453C8  7C 08 03 A6 */	mtlr r0
/* 8014848C 001453CC  38 21 00 30 */	addi r1, r1, 0x30
/* 80148490 001453D0  4E 80 00 20 */	blr 
.endfn onKill__Q24Game4PikiFPQ24Game15CreatureKillArg

.fn cleanup__Q26PikiAI6ActionFv, weak
/* 80148494 001453D4  4E 80 00 20 */	blr 
.endfn cleanup__Q26PikiAI6ActionFv

.fn onSetPosition__Q24Game4PikiFv, global
/* 80148498 001453D8  C0 03 02 0C */	lfs f0, 0x20c(r3)
/* 8014849C 001453DC  D0 03 02 18 */	stfs f0, 0x218(r3)
/* 801484A0 001453E0  C0 03 02 10 */	lfs f0, 0x210(r3)
/* 801484A4 001453E4  D0 03 02 1C */	stfs f0, 0x21c(r3)
/* 801484A8 001453E8  C0 03 02 14 */	lfs f0, 0x214(r3)
/* 801484AC 001453EC  D0 03 02 20 */	stfs f0, 0x220(r3)
/* 801484B0 001453F0  4E 80 00 20 */	blr 
.endfn onSetPosition__Q24Game4PikiFv

.fn getLODSphere__Q24Game4PikiFRQ23Sys6Sphere, global
/* 801484B4 001453F4  C0 23 02 0C */	lfs f1, 0x20c(r3)
/* 801484B8 001453F8  C0 02 A0 C4 */	lfs f0, lbl_80518424@sda21(r2)
/* 801484BC 001453FC  D0 24 00 00 */	stfs f1, 0(r4)
/* 801484C0 00145400  C0 23 02 10 */	lfs f1, 0x210(r3)
/* 801484C4 00145404  D0 24 00 04 */	stfs f1, 4(r4)
/* 801484C8 00145408  C0 23 02 14 */	lfs f1, 0x214(r3)
/* 801484CC 0014540C  D0 24 00 08 */	stfs f1, 8(r4)
/* 801484D0 00145410  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 801484D4 00145414  4E 80 00 20 */	blr 
.endfn getLODSphere__Q24Game4PikiFRQ23Sys6Sphere

.fn update__Q24Game4PikiFv, global
/* 801484D8 00145418  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801484DC 0014541C  7C 08 02 A6 */	mflr r0
/* 801484E0 00145420  38 82 A0 C8 */	addi r4, r2, lbl_80518428@sda21
/* 801484E4 00145424  38 A0 00 01 */	li r5, 1
/* 801484E8 00145428  90 01 00 14 */	stw r0, 0x14(r1)
/* 801484EC 0014542C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801484F0 00145430  93 C1 00 08 */	stw r30, 8(r1)
/* 801484F4 00145434  7C 7E 1B 78 */	mr r30, r3
/* 801484F8 00145438  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 801484FC 0014543C  80 66 00 28 */	lwz r3, 0x28(r6)
/* 80148500 00145440  48 2E 25 F9 */	bl _start__9SysTimersFPcb
/* 80148504 00145444  80 7E 02 50 */	lwz r3, 0x250(r30)
/* 80148508 00145448  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8014850C 0014544C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80148510 00145450  7D 89 03 A6 */	mtctr r12
/* 80148514 00145454  4E 80 04 21 */	bctrl 
/* 80148518 00145458  7F C3 F3 78 */	mr r3, r30
/* 8014851C 0014545C  48 00 0F B9 */	bl updateGasInvincible__Q24Game4PikiFv
/* 80148520 00145460  7F C3 F3 78 */	mr r3, r30
/* 80148524 00145464  4B FF 53 19 */	bl updateLook__Q24Game8FakePikiFv
/* 80148528 00145468  7F C3 F3 78 */	mr r3, r30
/* 8014852C 0014546C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80148530 00145470  81 8C 02 10 */	lwz r12, 0x210(r12)
/* 80148534 00145474  7D 89 03 A6 */	mtctr r12
/* 80148538 00145478  4E 80 04 21 */	bctrl 
/* 8014853C 0014547C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80148540 00145480  38 82 A0 D0 */	addi r4, r2, lbl_80518430@sda21
/* 80148544 00145484  38 A0 00 01 */	li r5, 1
/* 80148548 00145488  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8014854C 0014548C  48 2E 25 AD */	bl _start__9SysTimersFPcb
/* 80148550 00145490  7F C3 F3 78 */	mr r3, r30
/* 80148554 00145494  81 9E 00 00 */	lwz r12, 0(r30)
/* 80148558 00145498  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8014855C 0014549C  7D 89 03 A6 */	mtctr r12
/* 80148560 001454A0  4E 80 04 21 */	bctrl 
/* 80148564 001454A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80148568 001454A8  41 82 00 20 */	beq .L_80148588
/* 8014856C 001454AC  7F C3 F3 78 */	mr r3, r30
/* 80148570 001454B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80148574 001454B4  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 80148578 001454B8  7D 89 03 A6 */	mtctr r12
/* 8014857C 001454BC  4E 80 04 21 */	bctrl 
/* 80148580 001454C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80148584 001454C4  41 82 00 1C */	beq .L_801485A0
.L_80148588:
/* 80148588 001454C8  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 8014858C 001454CC  7F C4 F3 78 */	mr r4, r30
/* 80148590 001454D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80148594 001454D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80148598 001454D8  7D 89 03 A6 */	mtctr r12
/* 8014859C 001454DC  4E 80 04 21 */	bctrl 
.L_801485A0:
/* 801485A0 001454E0  7F C3 F3 78 */	mr r3, r30
/* 801485A4 001454E4  81 9E 00 00 */	lwz r12, 0(r30)
/* 801485A8 001454E8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801485AC 001454EC  7D 89 03 A6 */	mtctr r12
/* 801485B0 001454F0  4E 80 04 21 */	bctrl 
/* 801485B4 001454F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801485B8 001454F8  41 82 01 18 */	beq .L_801486D0
/* 801485BC 001454FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801485C0 00145500  38 82 A0 D0 */	addi r4, r2, lbl_80518430@sda21
/* 801485C4 00145504  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801485C8 00145508  48 2E 25 35 */	bl _stop__9SysTimersFPc
/* 801485CC 0014550C  80 7E 02 58 */	lwz r3, 0x258(r30)
/* 801485D0 00145510  48 27 01 1D */	bl update__Q23efx9TPkEffectFv
/* 801485D4 00145514  80 7E 02 7C */	lwz r3, 0x27c(r30)
/* 801485D8 00145518  38 82 A0 C8 */	addi r4, r2, lbl_80518428@sda21
/* 801485DC 0014551C  C0 1E 02 5C */	lfs f0, 0x25c(r30)
/* 801485E0 00145520  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 801485E4 00145524  C0 1E 02 60 */	lfs f0, 0x260(r30)
/* 801485E8 00145528  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 801485EC 0014552C  C0 1E 02 64 */	lfs f0, 0x264(r30)
/* 801485F0 00145530  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 801485F4 00145534  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801485F8 00145538  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801485FC 0014553C  48 2E 25 01 */	bl _stop__9SysTimersFPc
/* 80148600 00145540  7F C3 F3 78 */	mr r3, r30
/* 80148604 00145544  81 9E 00 00 */	lwz r12, 0(r30)
/* 80148608 00145548  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8014860C 0014554C  7D 89 03 A6 */	mtctr r12
/* 80148610 00145550  4E 80 04 21 */	bctrl 
/* 80148614 00145554  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80148618 00145558  41 82 00 B8 */	beq .L_801486D0
/* 8014861C 0014555C  80 1E 01 90 */	lwz r0, 0x190(r30)
/* 80148620 00145560  28 00 00 00 */	cmplwi r0, 0
/* 80148624 00145564  41 82 00 AC */	beq .L_801486D0
/* 80148628 00145568  7F C3 F3 78 */	mr r3, r30
/* 8014862C 0014556C  48 00 09 09 */	bl getStateID__Q24Game4PikiFv
/* 80148630 00145570  2C 03 00 05 */	cmpwi r3, 5
/* 80148634 00145574  8B FE 02 B8 */	lbz r31, 0x2b8(r30)
/* 80148638 00145578  41 82 00 98 */	beq .L_801486D0
/* 8014863C 0014557C  2C 03 00 0A */	cmpwi r3, 0xa
/* 80148640 00145580  41 82 00 90 */	beq .L_801486D0
/* 80148644 00145584  80 7E 02 90 */	lwz r3, 0x290(r30)
/* 80148648 00145588  81 83 00 00 */	lwz r12, 0(r3)
/* 8014864C 0014558C  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80148650 00145590  7D 89 03 A6 */	mtctr r12
/* 80148654 00145594  4E 80 04 21 */	bctrl 
/* 80148658 00145598  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014865C 0014559C  40 82 00 74 */	bne .L_801486D0
/* 80148660 001455A0  2C 1F 00 00 */	cmpwi r31, 0
/* 80148664 001455A4  41 82 00 6C */	beq .L_801486D0
/* 80148668 001455A8  2C 1F 00 05 */	cmpwi r31, 5
/* 8014866C 001455AC  41 82 00 64 */	beq .L_801486D0
/* 80148670 001455B0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80148674 001455B4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80148678 001455B8  2C 00 00 00 */	cmpwi r0, 0
/* 8014867C 001455BC  40 82 00 54 */	bne .L_801486D0
/* 80148680 001455C0  C0 3E 02 04 */	lfs f1, 0x204(r30)
/* 80148684 001455C4  C0 02 A0 D8 */	lfs f0, lbl_80518438@sda21(r2)
/* 80148688 001455C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014868C 001455CC  4C 40 13 82 */	cror 2, 0, 2
/* 80148690 001455D0  40 82 00 40 */	bne .L_801486D0
/* 80148694 001455D4  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 80148698 001455D8  7F C4 F3 78 */	mr r4, r30
/* 8014869C 001455DC  38 A0 00 0A */	li r5, 0xa
/* 801486A0 001455E0  38 C0 00 00 */	li r6, 0
/* 801486A4 001455E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801486A8 001455E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801486AC 001455EC  7D 89 03 A6 */	mtctr r12
/* 801486B0 001455F0  4E 80 04 21 */	bctrl 
/* 801486B4 001455F4  80 7E 01 90 */	lwz r3, 0x190(r30)
/* 801486B8 001455F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801486BC 001455FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801486C0 00145600  7D 89 03 A6 */	mtctr r12
/* 801486C4 00145604  4E 80 04 21 */	bctrl 
/* 801486C8 00145608  80 9E 02 58 */	lwz r4, 0x258(r30)
/* 801486CC 0014560C  90 64 00 20 */	stw r3, 0x20(r4)
.L_801486D0:
/* 801486D0 00145610  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801486D4 00145614  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801486D8 00145618  83 C1 00 08 */	lwz r30, 8(r1)
/* 801486DC 0014561C  7C 08 03 A6 */	mtlr r0
/* 801486E0 00145620  38 21 00 10 */	addi r1, r1, 0x10
/* 801486E4 00145624  4E 80 00 20 */	blr 
.endfn update__Q24Game4PikiFv

.fn dead__Q24Game9PikiStateFv, weak
/* 801486E8 00145628  38 60 00 00 */	li r3, 0
/* 801486EC 0014562C  4E 80 00 20 */	blr 
.endfn dead__Q24Game9PikiStateFv

.fn isAlive__Q24Game4PikiFv, global
/* 801486F0 00145630  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801486F4 00145634  7C 08 02 A6 */	mflr r0
/* 801486F8 00145638  90 01 00 14 */	stw r0, 0x14(r1)
/* 801486FC 0014563C  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80148700 00145640  54 00 FF FF */	rlwinm. r0, r0, 0x1f, 0x1f, 0x1f
/* 80148704 00145644  41 82 00 30 */	beq .L_80148734
/* 80148708 00145648  80 63 02 90 */	lwz r3, 0x290(r3)
/* 8014870C 0014564C  28 03 00 00 */	cmplwi r3, 0
/* 80148710 00145650  41 82 00 24 */	beq .L_80148734
/* 80148714 00145654  81 83 00 00 */	lwz r12, 0(r3)
/* 80148718 00145658  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8014871C 0014565C  7D 89 03 A6 */	mtctr r12
/* 80148720 00145660  4E 80 04 21 */	bctrl 
/* 80148724 00145664  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80148728 00145668  7C 00 00 34 */	cntlzw r0, r0
/* 8014872C 0014566C  54 03 D9 7E */	srwi r3, r0, 5
/* 80148730 00145670  48 00 00 08 */	b .L_80148738
.L_80148734:
/* 80148734 00145674  7C 03 03 78 */	mr r3, r0
.L_80148738:
/* 80148738 00145678  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014873C 0014567C  7C 08 03 A6 */	mtlr r0
/* 80148740 00145680  38 21 00 10 */	addi r1, r1, 0x10
/* 80148744 00145684  4E 80 00 20 */	blr 
.endfn isAlive__Q24Game4PikiFv

.fn on_movie_begin__Q24Game4PikiFb, global
/* 80148748 00145688  4E 80 00 20 */	blr 
.endfn on_movie_begin__Q24Game4PikiFb

.fn on_movie_end__Q24Game4PikiFb, global
/* 8014874C 0014568C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80148750 00145690  7C 08 02 A6 */	mflr r0
/* 80148754 00145694  90 01 00 14 */	stw r0, 0x14(r1)
/* 80148758 00145698  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8014875C 0014569C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80148760 001456A0  7C 7F 1B 78 */	mr r31, r3
/* 80148764 001456A4  41 82 00 38 */	beq .L_8014879C
/* 80148768 001456A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014876C 001456AC  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 80148770 001456B0  7D 89 03 A6 */	mtctr r12
/* 80148774 001456B4  4E 80 04 21 */	bctrl 
/* 80148778 001456B8  7F E3 FB 78 */	mr r3, r31
/* 8014877C 001456BC  38 80 00 1F */	li r4, 0x1f
/* 80148780 001456C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80148784 001456C4  38 A0 00 1F */	li r5, 0x1f
/* 80148788 001456C8  38 C0 00 00 */	li r6, 0
/* 8014878C 001456CC  38 E0 00 00 */	li r7, 0
/* 80148790 001456D0  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 80148794 001456D4  7D 89 03 A6 */	mtctr r12
/* 80148798 001456D8  4E 80 04 21 */	bctrl 
.L_8014879C:
/* 8014879C 001456DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801487A0 001456E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801487A4 001456E4  7C 08 03 A6 */	mtlr r0
/* 801487A8 001456E8  38 21 00 10 */	addi r1, r1, 0x10
/* 801487AC 001456EC  4E 80 00 20 */	blr 
.endfn on_movie_end__Q24Game4PikiFb

.fn getCreatureID__Q24Game4PikiFv, weak
/* 801487B0 001456F0  80 63 02 C0 */	lwz r3, 0x2c0(r3)
/* 801487B4 001456F4  4E 80 00 20 */	blr 
.endfn getCreatureID__Q24Game4PikiFv

.fn movieUserCommand__Q24Game4PikiFUlPQ24Game11MoviePlayer, global
/* 801487B8 001456F8  4E 80 00 20 */	blr 
.endfn movieUserCommand__Q24Game4PikiFUlPQ24Game11MoviePlayer

.fn movieStartAnimation__Q24Game4PikiFUl, global
/* 801487BC 001456FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801487C0 00145700  7C 08 02 A6 */	mflr r0
/* 801487C4 00145704  7C 85 23 78 */	mr r5, r4
/* 801487C8 00145708  38 C0 00 00 */	li r6, 0
/* 801487CC 0014570C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801487D0 00145710  38 E0 00 00 */	li r7, 0
/* 801487D4 00145714  81 83 00 00 */	lwz r12, 0(r3)
/* 801487D8 00145718  81 8C 02 08 */	lwz r12, 0x208(r12)
/* 801487DC 0014571C  7D 89 03 A6 */	mtctr r12
/* 801487E0 00145720  4E 80 04 21 */	bctrl 
/* 801487E4 00145724  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801487E8 00145728  7C 08 03 A6 */	mtlr r0
/* 801487EC 0014572C  38 21 00 10 */	addi r1, r1, 0x10
/* 801487F0 00145730  4E 80 00 20 */	blr 
.endfn movieStartAnimation__Q24Game4PikiFUl

.fn movieStartDemoAnimation__Q24Game4PikiFPQ28SysShape8AnimInfo, global
/* 801487F4 00145734  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801487F8 00145738  7C 08 02 A6 */	mflr r0
/* 801487FC 0014573C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80148800 00145740  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80148804 00145744  7C 9F 23 78 */	mr r31, r4
/* 80148808 00145748  93 C1 00 08 */	stw r30, 8(r1)
/* 8014880C 0014574C  7C 7E 1B 78 */	mr r30, r3
/* 80148810 00145750  38 7E 01 C8 */	addi r3, r30, 0x1c8
/* 80148814 00145754  48 2E 05 3D */	bl startExAnim__Q28SysShape8AnimatorFPQ28SysShape8AnimInfo
/* 80148818 00145758  7F E4 FB 78 */	mr r4, r31
/* 8014881C 0014575C  38 7E 01 AC */	addi r3, r30, 0x1ac
/* 80148820 00145760  48 2E 05 31 */	bl startExAnim__Q28SysShape8AnimatorFPQ28SysShape8AnimInfo
/* 80148824 00145764  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80148828 00145768  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014882C 0014576C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80148830 00145770  7C 08 03 A6 */	mtlr r0
/* 80148834 00145774  38 21 00 10 */	addi r1, r1, 0x10
/* 80148838 00145778  4E 80 00 20 */	blr 
.endfn movieStartDemoAnimation__Q24Game4PikiFPQ28SysShape8AnimInfo

.fn "movieSetTranslation__Q24Game4PikiFR10Vector3<f>f", global
/* 8014883C 0014577C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80148840 00145780  7C 08 02 A6 */	mflr r0
/* 80148844 00145784  90 01 00 24 */	stw r0, 0x24(r1)
/* 80148848 00145788  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8014884C 0014578C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80148850 00145790  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80148854 00145794  C0 02 A0 BC */	lfs f0, lbl_8051841C@sda21(r2)
/* 80148858 00145798  7C 7F 1B 78 */	mr r31, r3
/* 8014885C 0014579C  FF E0 08 90 */	fmr f31, f1
/* 80148860 001457A0  38 A0 00 00 */	li r5, 0
/* 80148864 001457A4  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 80148868 001457A8  D0 03 02 04 */	stfs f0, 0x204(r3)
/* 8014886C 001457AC  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 80148870 001457B0  D0 03 01 E4 */	stfs f0, 0x1e4(r3)
/* 80148874 001457B4  D0 03 01 E8 */	stfs f0, 0x1e8(r3)
/* 80148878 001457B8  D0 03 01 EC */	stfs f0, 0x1ec(r3)
/* 8014887C 001457BC  D0 03 01 1C */	stfs f0, 0x11c(r3)
/* 80148880 001457C0  D0 03 01 20 */	stfs f0, 0x120(r3)
/* 80148884 001457C4  D0 03 01 24 */	stfs f0, 0x124(r3)
/* 80148888 001457C8  C0 03 02 0C */	lfs f0, 0x20c(r3)
/* 8014888C 001457CC  D0 03 02 38 */	stfs f0, 0x238(r3)
/* 80148890 001457D0  C0 03 02 10 */	lfs f0, 0x210(r3)
/* 80148894 001457D4  D0 03 02 3C */	stfs f0, 0x23c(r3)
/* 80148898 001457D8  C0 03 02 14 */	lfs f0, 0x214(r3)
/* 8014889C 001457DC  D0 03 02 40 */	stfs f0, 0x240(r3)
/* 801488A0 001457E0  4B FF 29 09 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801488A4 001457E4  D3 FF 01 FC */	stfs f31, 0x1fc(r31)
/* 801488A8 001457E8  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 801488AC 001457EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801488B0 001457F0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801488B4 001457F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801488B8 001457F8  7C 08 03 A6 */	mtlr r0
/* 801488BC 001457FC  38 21 00 20 */	addi r1, r1, 0x20
/* 801488C0 00145800  4E 80 00 20 */	blr 
.endfn "movieSetTranslation__Q24Game4PikiFR10Vector3<f>f"

.fn "movieGotoPosition__Q24Game4PikiFR10Vector3<f>", global
/* 801488C4 00145804  38 60 00 00 */	li r3, 0
/* 801488C8 00145808  4E 80 00 20 */	blr 
.endfn "movieGotoPosition__Q24Game4PikiFR10Vector3<f>"

.fn startSound__Q24Game4PikiFUlb, global
/* 801488CC 0014580C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801488D0 00145810  7C 08 02 A6 */	mflr r0
/* 801488D4 00145814  90 01 00 14 */	stw r0, 0x14(r1)
/* 801488D8 00145818  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 801488DC 0014581C  41 82 00 10 */	beq .L_801488EC
/* 801488E0 00145820  38 A0 00 00 */	li r5, 0
/* 801488E4 00145824  48 00 00 29 */	bl startSound__Q24Game4PikiFUlQ36PSGame5SeMgr7SetSeId
/* 801488E8 00145828  48 00 00 14 */	b .L_801488FC
.L_801488EC:
/* 801488EC 0014582C  80 63 02 50 */	lwz r3, 0x250(r3)
/* 801488F0 00145830  38 A0 00 5A */	li r5, 0x5a
/* 801488F4 00145834  38 C0 00 00 */	li r6, 0
/* 801488F8 00145838  48 31 9C 89 */	bl startFreePikiSound__Q23PSM4PikiFUlUlUl
.L_801488FC:
/* 801488FC 0014583C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80148900 00145840  7C 08 03 A6 */	mtlr r0
/* 80148904 00145844  38 21 00 10 */	addi r1, r1, 0x10
/* 80148908 00145848  4E 80 00 20 */	blr 
.endfn startSound__Q24Game4PikiFUlb

.fn startSound__Q24Game4PikiFUlQ36PSGame5SeMgr7SetSeId, global
/* 8014890C 0014584C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80148910 00145850  7C 08 02 A6 */	mflr r0
/* 80148914 00145854  2C 05 00 08 */	cmpwi r5, 8
/* 80148918 00145858  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014891C 0014585C  40 80 00 18 */	bge .L_80148934
/* 80148920 00145860  80 63 02 50 */	lwz r3, 0x250(r3)
/* 80148924 00145864  38 C0 00 5A */	li r6, 0x5a
/* 80148928 00145868  38 E0 00 00 */	li r7, 0
/* 8014892C 0014586C  48 31 9E BD */	bl startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
/* 80148930 00145870  48 00 00 14 */	b .L_80148944
.L_80148934:
/* 80148934 00145874  80 63 02 50 */	lwz r3, 0x250(r3)
/* 80148938 00145878  38 A0 00 5A */	li r5, 0x5a
/* 8014893C 0014587C  38 C0 00 00 */	li r6, 0
/* 80148940 00145880  48 31 9C 41 */	bl startFreePikiSound__Q23PSM4PikiFUlUlUl
.L_80148944:
/* 80148944 00145884  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80148948 00145888  7C 08 03 A6 */	mtlr r0
/* 8014894C 0014588C  38 21 00 10 */	addi r1, r1, 0x10
/* 80148950 00145890  4E 80 00 20 */	blr 
.endfn startSound__Q24Game4PikiFUlQ36PSGame5SeMgr7SetSeId

.fn startSound__Q24Game4PikiFPQ24Game8CreatureUlb, global
/* 80148954 00145894  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80148958 00145898  7C 08 02 A6 */	mflr r0
/* 8014895C 0014589C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80148960 001458A0  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 80148964 001458A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80148968 001458A8  7C BF 2B 78 */	mr r31, r5
/* 8014896C 001458AC  93 C1 00 08 */	stw r30, 8(r1)
/* 80148970 001458B0  7C 7E 1B 78 */	mr r30, r3
/* 80148974 001458B4  41 82 00 10 */	beq .L_80148984
/* 80148978 001458B8  38 C0 00 00 */	li r6, 0
/* 8014897C 001458BC  48 00 00 49 */	bl startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
/* 80148980 001458C0  48 00 00 2C */	b .L_801489AC
.L_80148984:
/* 80148984 001458C4  7C 83 23 78 */	mr r3, r4
/* 80148988 001458C8  81 84 00 00 */	lwz r12, 0(r4)
/* 8014898C 001458CC  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 80148990 001458D0  7D 89 03 A6 */	mtctr r12
/* 80148994 001458D4  4E 80 04 21 */	bctrl 
/* 80148998 001458D8  7C 64 1B 78 */	mr r4, r3
/* 8014899C 001458DC  80 7E 02 50 */	lwz r3, 0x250(r30)
/* 801489A0 001458E0  7F E5 FB 78 */	mr r5, r31
/* 801489A4 001458E4  38 C0 00 00 */	li r6, 0
/* 801489A8 001458E8  48 31 9D 1D */	bl startPikiSound__Q23PSM4PikiFPQ27JAInter6ObjectUlUl
.L_801489AC:
/* 801489AC 001458EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801489B0 001458F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801489B4 001458F4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801489B8 001458F8  7C 08 03 A6 */	mtlr r0
/* 801489BC 001458FC  38 21 00 10 */	addi r1, r1, 0x10
/* 801489C0 00145900  4E 80 00 20 */	blr 
.endfn startSound__Q24Game4PikiFPQ24Game8CreatureUlb

.fn startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId, global
/* 801489C4 00145904  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801489C8 00145908  7C 08 02 A6 */	mflr r0
/* 801489CC 0014590C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801489D0 00145910  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801489D4 00145914  7C DF 33 78 */	mr r31, r6
/* 801489D8 00145918  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801489DC 0014591C  7C BE 2B 78 */	mr r30, r5
/* 801489E0 00145920  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801489E4 00145924  7C 9D 23 79 */	or. r29, r4, r4
/* 801489E8 00145928  93 81 00 10 */	stw r28, 0x10(r1)
/* 801489EC 0014592C  7C 7C 1B 78 */	mr r28, r3
/* 801489F0 00145930  41 82 00 80 */	beq .L_80148A70
/* 801489F4 00145934  7F A3 EB 78 */	mr r3, r29
/* 801489F8 00145938  81 9D 00 00 */	lwz r12, 0(r29)
/* 801489FC 0014593C  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 80148A00 00145940  7D 89 03 A6 */	mtctr r12
/* 80148A04 00145944  4E 80 04 21 */	bctrl 
/* 80148A08 00145948  28 03 00 00 */	cmplwi r3, 0
/* 80148A0C 0014594C  41 82 00 64 */	beq .L_80148A70
/* 80148A10 00145950  2C 1F 00 08 */	cmpwi r31, 8
/* 80148A14 00145954  40 80 00 34 */	bge .L_80148A48
/* 80148A18 00145958  7F A3 EB 78 */	mr r3, r29
/* 80148A1C 0014595C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80148A20 00145960  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 80148A24 00145964  7D 89 03 A6 */	mtctr r12
/* 80148A28 00145968  4E 80 04 21 */	bctrl 
/* 80148A2C 0014596C  7C 64 1B 78 */	mr r4, r3
/* 80148A30 00145970  80 7C 02 50 */	lwz r3, 0x250(r28)
/* 80148A34 00145974  7F C5 F3 78 */	mr r5, r30
/* 80148A38 00145978  7F E6 FB 78 */	mr r6, r31
/* 80148A3C 0014597C  38 E0 00 00 */	li r7, 0
/* 80148A40 00145980  48 31 9C F5 */	bl startPikiSetSound__Q23PSM4PikiFPQ27JAInter6ObjectUlQ36PSGame5SeMgr7SetSeIdUl
/* 80148A44 00145984  48 00 00 2C */	b .L_80148A70
.L_80148A48:
/* 80148A48 00145988  7F A3 EB 78 */	mr r3, r29
/* 80148A4C 0014598C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80148A50 00145990  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 80148A54 00145994  7D 89 03 A6 */	mtctr r12
/* 80148A58 00145998  4E 80 04 21 */	bctrl 
/* 80148A5C 0014599C  7C 64 1B 78 */	mr r4, r3
/* 80148A60 001459A0  80 7C 02 50 */	lwz r3, 0x250(r28)
/* 80148A64 001459A4  7F C5 F3 78 */	mr r5, r30
/* 80148A68 001459A8  38 C0 00 00 */	li r6, 0
/* 80148A6C 001459AC  48 31 9C 59 */	bl startPikiSound__Q23PSM4PikiFPQ27JAInter6ObjectUlUl
.L_80148A70:
/* 80148A70 001459B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80148A74 001459B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80148A78 001459B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80148A7C 001459BC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80148A80 001459C0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80148A84 001459C4  7C 08 03 A6 */	mtlr r0
/* 80148A88 001459C8  38 21 00 20 */	addi r1, r1, 0x20
/* 80148A8C 001459CC  4E 80 00 20 */	blr 
.endfn startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId

.fn getJAIObject__Q24Game4PikiFv, global
/* 80148A90 001459D0  80 63 02 50 */	lwz r3, 0x250(r3)
/* 80148A94 001459D4  28 03 00 00 */	cmplwi r3, 0
/* 80148A98 001459D8  4D 82 00 20 */	beqlr 
/* 80148A9C 001459DC  38 63 00 30 */	addi r3, r3, 0x30
/* 80148AA0 001459E0  4E 80 00 20 */	blr 
.endfn getJAIObject__Q24Game4PikiFv

.fn getPSCreature__Q24Game4PikiFv, global
/* 80148AA4 001459E4  80 63 02 50 */	lwz r3, 0x250(r3)
/* 80148AA8 001459E8  4E 80 00 20 */	blr 
.endfn getPSCreature__Q24Game4PikiFv

.fn canVsBattle__Q24Game4PikiFv, global
/* 80148AAC 001459EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80148AB0 001459F0  7C 08 02 A6 */	mflr r0
/* 80148AB4 001459F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80148AB8 001459F8  80 63 02 90 */	lwz r3, 0x290(r3)
/* 80148ABC 001459FC  81 83 00 00 */	lwz r12, 0(r3)
/* 80148AC0 00145A00  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 80148AC4 00145A04  7D 89 03 A6 */	mtctr r12
/* 80148AC8 00145A08  4E 80 04 21 */	bctrl 
/* 80148ACC 00145A0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80148AD0 00145A10  7C 08 03 A6 */	mtlr r0
/* 80148AD4 00145A14  38 21 00 10 */	addi r1, r1, 0x10
/* 80148AD8 00145A18  4E 80 00 20 */	blr 
.endfn canVsBattle__Q24Game4PikiFv

.fn battleOK__Q24Game9PikiStateFv, weak
/* 80148ADC 00145A1C  38 60 00 00 */	li r3, 0
/* 80148AE0 00145A20  4E 80 00 20 */	blr 
.endfn battleOK__Q24Game9PikiStateFv

.fn getVsBattlePiki__Q24Game4PikiFv, global
/* 80148AE4 00145A24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80148AE8 00145A28  7C 08 02 A6 */	mflr r0
/* 80148AEC 00145A2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80148AF0 00145A30  80 63 02 94 */	lwz r3, 0x294(r3)
/* 80148AF4 00145A34  80 03 00 08 */	lwz r0, 8(r3)
/* 80148AF8 00145A38  2C 00 00 0D */	cmpwi r0, 0xd
/* 80148AFC 00145A3C  40 82 00 10 */	bne .L_80148B0C
/* 80148B00 00145A40  48 04 E2 01 */	bl getCurrAction__Q26PikiAI5BrainFv
/* 80148B04 00145A44  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80148B08 00145A48  48 00 00 08 */	b .L_80148B10
.L_80148B0C:
/* 80148B0C 00145A4C  38 60 00 00 */	li r3, 0
.L_80148B10:
/* 80148B10 00145A50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80148B14 00145A54  7C 08 03 A6 */	mtlr r0
/* 80148B18 00145A58  38 21 00 10 */	addi r1, r1, 0x10
/* 80148B1C 00145A5C  4E 80 00 20 */	blr 
.endfn getVsBattlePiki__Q24Game4PikiFv

.fn attachRadar__Q24Game4PikiFb, global
/* 80148B20 00145A60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80148B24 00145A64  7C 08 02 A6 */	mflr r0
/* 80148B28 00145A68  90 01 00 14 */	stw r0, 0x14(r1)
/* 80148B2C 00145A6C  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 80148B30 00145A70  2C 00 00 03 */	cmpwi r0, 3
/* 80148B34 00145A74  41 82 00 70 */	beq .L_80148BA4
/* 80148B38 00145A78  40 80 00 1C */	bge .L_80148B54
/* 80148B3C 00145A7C  2C 00 00 01 */	cmpwi r0, 1
/* 80148B40 00145A80  41 82 00 34 */	beq .L_80148B74
/* 80148B44 00145A84  40 80 00 40 */	bge .L_80148B84
/* 80148B48 00145A88  2C 00 00 00 */	cmpwi r0, 0
/* 80148B4C 00145A8C  40 80 00 18 */	bge .L_80148B64
/* 80148B50 00145A90  48 00 00 70 */	b .L_80148BC0
.L_80148B54:
/* 80148B54 00145A94  2C 00 00 05 */	cmpwi r0, 5
/* 80148B58 00145A98  41 82 00 5C */	beq .L_80148BB4
/* 80148B5C 00145A9C  40 80 00 64 */	bge .L_80148BC0
/* 80148B60 00145AA0  48 00 00 34 */	b .L_80148B94
.L_80148B64:
/* 80148B64 00145AA4  38 80 00 04 */	li r4, 4
/* 80148B68 00145AA8  38 A0 00 00 */	li r5, 0
/* 80148B6C 00145AAC  48 0D 5A 19 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
/* 80148B70 00145AB0  48 00 00 50 */	b .L_80148BC0
.L_80148B74:
/* 80148B74 00145AB4  38 80 00 03 */	li r4, 3
/* 80148B78 00145AB8  38 A0 00 00 */	li r5, 0
/* 80148B7C 00145ABC  48 0D 5A 09 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
/* 80148B80 00145AC0  48 00 00 40 */	b .L_80148BC0
.L_80148B84:
/* 80148B84 00145AC4  38 80 00 05 */	li r4, 5
/* 80148B88 00145AC8  38 A0 00 00 */	li r5, 0
/* 80148B8C 00145ACC  48 0D 59 F9 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
/* 80148B90 00145AD0  48 00 00 30 */	b .L_80148BC0
.L_80148B94:
/* 80148B94 00145AD4  38 80 00 07 */	li r4, 7
/* 80148B98 00145AD8  38 A0 00 00 */	li r5, 0
/* 80148B9C 00145ADC  48 0D 59 E9 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
/* 80148BA0 00145AE0  48 00 00 20 */	b .L_80148BC0
.L_80148BA4:
/* 80148BA4 00145AE4  38 80 00 06 */	li r4, 6
/* 80148BA8 00145AE8  38 A0 00 00 */	li r5, 0
/* 80148BAC 00145AEC  48 0D 59 D9 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
/* 80148BB0 00145AF0  48 00 00 10 */	b .L_80148BC0
.L_80148BB4:
/* 80148BB4 00145AF4  38 80 00 08 */	li r4, 8
/* 80148BB8 00145AF8  38 A0 00 00 */	li r5, 0
/* 80148BBC 00145AFC  48 0D 59 C9 */	bl entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
.L_80148BC0:
/* 80148BC0 00145B00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80148BC4 00145B04  7C 08 03 A6 */	mtlr r0
/* 80148BC8 00145B08  38 21 00 10 */	addi r1, r1, 0x10
/* 80148BCC 00145B0C  4E 80 00 20 */	blr 
.endfn attachRadar__Q24Game4PikiFb

.fn inWaterCallback__Q24Game4PikiFPQ24Game8WaterBox, global
/* 80148BD0 00145B10  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80148BD4 00145B14  7C 08 02 A6 */	mflr r0
/* 80148BD8 00145B18  90 01 00 24 */	stw r0, 0x24(r1)
/* 80148BDC 00145B1C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80148BE0 00145B20  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80148BE4 00145B24  7C 9E 23 78 */	mr r30, r4
/* 80148BE8 00145B28  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80148BEC 00145B2C  7C 7D 1B 78 */	mr r29, r3
/* 80148BF0 00145B30  48 00 03 45 */	bl getStateID__Q24Game4PikiFv
/* 80148BF4 00145B34  2C 03 00 05 */	cmpwi r3, 5
/* 80148BF8 00145B38  8B FD 02 B8 */	lbz r31, 0x2b8(r29)
/* 80148BFC 00145B3C  41 82 00 84 */	beq .L_80148C80
/* 80148C00 00145B40  2C 03 00 0A */	cmpwi r3, 0xa
/* 80148C04 00145B44  41 82 00 7C */	beq .L_80148C80
/* 80148C08 00145B48  80 7D 02 90 */	lwz r3, 0x290(r29)
/* 80148C0C 00145B4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80148C10 00145B50  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80148C14 00145B54  7D 89 03 A6 */	mtctr r12
/* 80148C18 00145B58  4E 80 04 21 */	bctrl 
/* 80148C1C 00145B5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80148C20 00145B60  40 82 00 60 */	bne .L_80148C80
/* 80148C24 00145B64  2C 1F 00 00 */	cmpwi r31, 0
/* 80148C28 00145B68  41 82 00 58 */	beq .L_80148C80
/* 80148C2C 00145B6C  2C 1F 00 05 */	cmpwi r31, 5
/* 80148C30 00145B70  41 82 00 50 */	beq .L_80148C80
/* 80148C34 00145B74  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80148C38 00145B78  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80148C3C 00145B7C  2C 00 00 00 */	cmpwi r0, 0
/* 80148C40 00145B80  40 82 00 BC */	bne .L_80148CFC
/* 80148C44 00145B84  C0 3D 02 04 */	lfs f1, 0x204(r29)
/* 80148C48 00145B88  C0 02 A0 D8 */	lfs f0, lbl_80518438@sda21(r2)
/* 80148C4C 00145B8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80148C50 00145B90  4C 40 13 82 */	cror 2, 0, 2
/* 80148C54 00145B94  40 82 00 A8 */	bne .L_80148CFC
/* 80148C58 00145B98  80 7D 02 8C */	lwz r3, 0x28c(r29)
/* 80148C5C 00145B9C  7F A4 EB 78 */	mr r4, r29
/* 80148C60 00145BA0  38 A0 00 0A */	li r5, 0xa
/* 80148C64 00145BA4  38 C0 00 00 */	li r6, 0
/* 80148C68 00145BA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80148C6C 00145BAC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80148C70 00145BB0  7D 89 03 A6 */	mtctr r12
/* 80148C74 00145BB4  4E 80 04 21 */	bctrl 
/* 80148C78 00145BB8  48 00 00 08 */	b .L_80148C80
/* 80148C7C 00145BBC  48 00 00 80 */	b .L_80148CFC
.L_80148C80:
/* 80148C80 00145BC0  7F C3 F3 78 */	mr r3, r30
/* 80148C84 00145BC4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80148C88 00145BC8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80148C8C 00145BCC  7D 89 03 A6 */	mtctr r12
/* 80148C90 00145BD0  4E 80 04 21 */	bctrl 
/* 80148C94 00145BD4  80 9D 02 58 */	lwz r4, 0x258(r29)
/* 80148C98 00145BD8  90 64 00 20 */	stw r3, 0x20(r4)
/* 80148C9C 00145BDC  7F A3 EB 78 */	mr r3, r29
/* 80148CA0 00145BE0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80148CA4 00145BE4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80148CA8 00145BE8  7D 89 03 A6 */	mtctr r12
/* 80148CAC 00145BEC  4E 80 04 21 */	bctrl 
/* 80148CB0 00145BF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80148CB4 00145BF4  41 82 00 48 */	beq .L_80148CFC
/* 80148CB8 00145BF8  83 FD 02 58 */	lwz r31, 0x258(r29)
/* 80148CBC 00145BFC  80 9F 00 00 */	lwz r4, 0(r31)
/* 80148CC0 00145C00  7F E3 FB 78 */	mr r3, r31
/* 80148CC4 00145C04  60 80 00 20 */	ori r0, r4, 0x20
/* 80148CC8 00145C08  54 9E DF FE */	rlwinm r30, r4, 0x1b, 0x1f, 0x1f
/* 80148CCC 00145C0C  90 1F 00 00 */	stw r0, 0(r31)
/* 80148CD0 00145C10  48 26 FA 89 */	bl updateHamon___Q23efx9TPkEffectFv
/* 80148CD4 00145C14  28 1E 00 00 */	cmplwi r30, 0
/* 80148CD8 00145C18  40 82 00 0C */	bne .L_80148CE4
/* 80148CDC 00145C1C  38 7F 00 28 */	addi r3, r31, 0x28
/* 80148CE0 00145C20  48 26 EB B5 */	bl "createSimpleDive__3efxFR10Vector3<f>"
.L_80148CE4:
/* 80148CE4 00145C24  80 7D 02 50 */	lwz r3, 0x250(r29)
/* 80148CE8 00145C28  38 80 28 11 */	li r4, 0x2811
/* 80148CEC 00145C2C  38 A0 00 06 */	li r5, 6
/* 80148CF0 00145C30  38 C0 00 5A */	li r6, 0x5a
/* 80148CF4 00145C34  38 E0 00 00 */	li r7, 0
/* 80148CF8 00145C38  48 31 9A F1 */	bl startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
.L_80148CFC:
/* 80148CFC 00145C3C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80148D00 00145C40  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80148D04 00145C44  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80148D08 00145C48  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80148D0C 00145C4C  7C 08 03 A6 */	mtlr r0
/* 80148D10 00145C50  38 21 00 20 */	addi r1, r1, 0x20
/* 80148D14 00145C54  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q24Game4PikiFPQ24Game8WaterBox

.fn outWaterCallback__Q24Game4PikiFv, global
/* 80148D18 00145C58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80148D1C 00145C5C  7C 08 02 A6 */	mflr r0
/* 80148D20 00145C60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80148D24 00145C64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80148D28 00145C68  7C 7F 1B 78 */	mr r31, r3
/* 80148D2C 00145C6C  80 63 02 90 */	lwz r3, 0x290(r3)
/* 80148D30 00145C70  28 03 00 00 */	cmplwi r3, 0
/* 80148D34 00145C74  41 82 00 18 */	beq .L_80148D4C
/* 80148D38 00145C78  81 83 00 00 */	lwz r12, 0(r3)
/* 80148D3C 00145C7C  7F E4 FB 78 */	mr r4, r31
/* 80148D40 00145C80  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80148D44 00145C84  7D 89 03 A6 */	mtctr r12
/* 80148D48 00145C88  4E 80 04 21 */	bctrl 
.L_80148D4C:
/* 80148D4C 00145C8C  83 FF 02 58 */	lwz r31, 0x258(r31)
/* 80148D50 00145C90  80 1F 00 00 */	lwz r0, 0(r31)
/* 80148D54 00145C94  7F E3 FB 78 */	mr r3, r31
/* 80148D58 00145C98  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80148D5C 00145C9C  90 1F 00 00 */	stw r0, 0(r31)
/* 80148D60 00145CA0  48 27 00 59 */	bl killHamonA___Q23efx9TPkEffectFv
/* 80148D64 00145CA4  7F E3 FB 78 */	mr r3, r31
/* 80148D68 00145CA8  48 27 00 D5 */	bl killHamonB___Q23efx9TPkEffectFv
/* 80148D6C 00145CAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80148D70 00145CB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80148D74 00145CB4  7C 08 03 A6 */	mtlr r0
/* 80148D78 00145CB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80148D7C 00145CBC  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q24Game4PikiFv

.fn outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki, weak
/* 80148D80 00145CC0  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki

.fn might_bury__Q24Game4PikiFv, global
/* 80148D84 00145CC4  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80148D88 00145CC8  7C 08 02 A6 */	mflr r0
/* 80148D8C 00145CCC  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80148D90 00145CD0  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 80148D94 00145CD4  7C 7F 1B 78 */	mr r31, r3
/* 80148D98 00145CD8  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80148D9C 00145CDC  28 03 00 00 */	cmplwi r3, 0
/* 80148DA0 00145CE0  41 82 00 1C */	beq .L_80148DBC
/* 80148DA4 00145CE4  38 63 00 5C */	addi r3, r3, 0x5c
/* 80148DA8 00145CE8  48 2D 36 A5 */	bl isBald__Q27MapCode4CodeFv
/* 80148DAC 00145CEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80148DB0 00145CF0  41 82 00 0C */	beq .L_80148DBC
/* 80148DB4 00145CF4  38 60 00 00 */	li r3, 0
/* 80148DB8 00145CF8  48 00 01 0C */	b .L_80148EC4
.L_80148DBC:
/* 80148DBC 00145CFC  C0 3F 02 0C */	lfs f1, 0x20c(r31)
/* 80148DC0 00145D00  38 61 00 24 */	addi r3, r1, 0x24
/* 80148DC4 00145D04  C0 02 A0 DC */	lfs f0, lbl_8051843C@sda21(r2)
/* 80148DC8 00145D08  38 81 00 14 */	addi r4, r1, 0x14
/* 80148DCC 00145D0C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 80148DD0 00145D10  C0 3F 02 10 */	lfs f1, 0x210(r31)
/* 80148DD4 00145D14  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80148DD8 00145D18  C0 3F 02 14 */	lfs f1, 0x214(r31)
/* 80148DDC 00145D1C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80148DE0 00145D20  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80148DE4 00145D24  48 0E 55 BD */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 80148DE8 00145D28  38 61 00 44 */	addi r3, r1, 0x44
/* 80148DEC 00145D2C  38 81 00 24 */	addi r4, r1, 0x24
/* 80148DF0 00145D30  48 0E 55 F1 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 80148DF4 00145D34  38 61 00 44 */	addi r3, r1, 0x44
/* 80148DF8 00145D38  48 0E 56 65 */	bl first__Q24Game12CellIteratorFv
/* 80148DFC 00145D3C  48 00 00 B4 */	b .L_80148EB0
.L_80148E00:
/* 80148E00 00145D40  38 61 00 44 */	addi r3, r1, 0x44
/* 80148E04 00145D44  48 0E 57 41 */	bl __ml__Q24Game12CellIteratorFv
/* 80148E08 00145D48  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 80148E0C 00145D4C  28 00 04 0A */	cmplwi r0, 0x40a
/* 80148E10 00145D50  41 82 00 14 */	beq .L_80148E24
/* 80148E14 00145D54  28 00 04 0C */	cmplwi r0, 0x40c
/* 80148E18 00145D58  41 82 00 0C */	beq .L_80148E24
/* 80148E1C 00145D5C  28 00 04 05 */	cmplwi r0, 0x405
/* 80148E20 00145D60  40 82 00 88 */	bne .L_80148EA8
.L_80148E24:
/* 80148E24 00145D64  7C 64 1B 78 */	mr r4, r3
/* 80148E28 00145D68  38 61 00 08 */	addi r3, r1, 8
/* 80148E2C 00145D6C  81 84 00 00 */	lwz r12, 0(r4)
/* 80148E30 00145D70  81 8C 00 08 */	lwz r12, 8(r12)
/* 80148E34 00145D74  7D 89 03 A6 */	mtctr r12
/* 80148E38 00145D78  4E 80 04 21 */	bctrl 
/* 80148E3C 00145D7C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80148E40 00145D80  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 80148E44 00145D84  C0 61 00 08 */	lfs f3, 8(r1)
/* 80148E48 00145D88  EC 81 00 28 */	fsubs f4, f1, f0
/* 80148E4C 00145D8C  C0 5F 02 0C */	lfs f2, 0x20c(r31)
/* 80148E50 00145D90  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80148E54 00145D94  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 80148E58 00145D98  EC 63 10 28 */	fsubs f3, f3, f2
/* 80148E5C 00145D9C  EC 84 01 32 */	fmuls f4, f4, f4
/* 80148E60 00145DA0  EC 41 00 28 */	fsubs f2, f1, f0
/* 80148E64 00145DA4  C0 02 A0 BC */	lfs f0, lbl_8051841C@sda21(r2)
/* 80148E68 00145DA8  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 80148E6C 00145DAC  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80148E70 00145DB0  EC 22 08 2A */	fadds f1, f2, f1
/* 80148E74 00145DB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80148E78 00145DB8  40 81 00 14 */	ble .L_80148E8C
/* 80148E7C 00145DBC  40 81 00 14 */	ble .L_80148E90
/* 80148E80 00145DC0  FC 00 08 34 */	frsqrte f0, f1
/* 80148E84 00145DC4  EC 20 00 72 */	fmuls f1, f0, f1
/* 80148E88 00145DC8  48 00 00 08 */	b .L_80148E90
.L_80148E8C:
/* 80148E8C 00145DCC  FC 20 00 90 */	fmr f1, f0
.L_80148E90:
/* 80148E90 00145DD0  C0 02 A0 DC */	lfs f0, lbl_8051843C@sda21(r2)
/* 80148E94 00145DD4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80148E98 00145DD8  4C 40 13 82 */	cror 2, 0, 2
/* 80148E9C 00145DDC  40 82 00 0C */	bne .L_80148EA8
/* 80148EA0 00145DE0  38 60 00 00 */	li r3, 0
/* 80148EA4 00145DE4  48 00 00 20 */	b .L_80148EC4
.L_80148EA8:
/* 80148EA8 00145DE8  38 61 00 44 */	addi r3, r1, 0x44
/* 80148EAC 00145DEC  48 0E 56 55 */	bl next__Q24Game12CellIteratorFv
.L_80148EB0:
/* 80148EB0 00145DF0  38 61 00 44 */	addi r3, r1, 0x44
/* 80148EB4 00145DF4  48 0E 56 81 */	bl isDone__Q24Game12CellIteratorFv
/* 80148EB8 00145DF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80148EBC 00145DFC  41 82 FF 44 */	beq .L_80148E00
/* 80148EC0 00145E00  38 60 00 01 */	li r3, 1
.L_80148EC4:
/* 80148EC4 00145E04  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80148EC8 00145E08  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 80148ECC 00145E0C  7C 08 03 A6 */	mtlr r0
/* 80148ED0 00145E10  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80148ED4 00145E14  4E 80 00 20 */	blr 
.endfn might_bury__Q24Game4PikiFv

.fn surviveDayEnd__Q24Game4PikiFv, global
/* 80148ED8 00145E18  80 63 02 94 */	lwz r3, 0x294(r3)
/* 80148EDC 00145E1C  80 03 00 08 */	lwz r0, 8(r3)
/* 80148EE0 00145E20  7C 00 00 34 */	cntlzw r0, r0
/* 80148EE4 00145E24  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 80148EE8 00145E28  4E 80 00 20 */	blr 
.endfn surviveDayEnd__Q24Game4PikiFv

.fn onKeyEvent__Q24Game4PikiFRCQ28SysShape8KeyEvent, global
/* 80148EEC 00145E2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80148EF0 00145E30  7C 08 02 A6 */	mflr r0
/* 80148EF4 00145E34  7C 66 1B 78 */	mr r6, r3
/* 80148EF8 00145E38  7C 85 23 78 */	mr r5, r4
/* 80148EFC 00145E3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80148F00 00145E40  80 63 02 90 */	lwz r3, 0x290(r3)
/* 80148F04 00145E44  28 03 00 00 */	cmplwi r3, 0
/* 80148F08 00145E48  41 82 00 18 */	beq .L_80148F20
/* 80148F0C 00145E4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80148F10 00145E50  7C C4 33 78 */	mr r4, r6
/* 80148F14 00145E54  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80148F18 00145E58  7D 89 03 A6 */	mtctr r12
/* 80148F1C 00145E5C  4E 80 04 21 */	bctrl 
.L_80148F20:
/* 80148F20 00145E60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80148F24 00145E64  7C 08 03 A6 */	mtlr r0
/* 80148F28 00145E68  38 21 00 10 */	addi r1, r1, 0x10
/* 80148F2C 00145E6C  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game4PikiFRCQ28SysShape8KeyEvent

.fn onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent, weak
/* 80148F30 00145E70  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent

.fn getStateID__Q24Game4PikiFv, global
/* 80148F34 00145E74  80 63 02 90 */	lwz r3, 0x290(r3)
/* 80148F38 00145E78  28 03 00 00 */	cmplwi r3, 0
/* 80148F3C 00145E7C  41 82 00 0C */	beq .L_80148F48
/* 80148F40 00145E80  80 63 00 04 */	lwz r3, 4(r3)
/* 80148F44 00145E84  4E 80 00 20 */	blr 
.L_80148F48:
/* 80148F48 00145E88  38 60 FF FF */	li r3, -1
/* 80148F4C 00145E8C  4E 80 00 20 */	blr 
.endfn getStateID__Q24Game4PikiFv

.fn getSpeed__Q24Game4PikiFf, global
/* 80148F50 00145E90  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80148F54 00145E94  7C 08 02 A6 */	mflr r0
/* 80148F58 00145E98  90 01 00 24 */	stw r0, 0x24(r1)
/* 80148F5C 00145E9C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80148F60 00145EA0  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80148F64 00145EA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80148F68 00145EA8  7C 7F 1B 78 */	mr r31, r3
/* 80148F6C 00145EAC  FF E0 08 90 */	fmr f31, f1
/* 80148F70 00145EB0  48 00 10 71 */	bl doped__Q24Game4PikiFv
/* 80148F74 00145EB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80148F78 00145EB8  41 82 00 14 */	beq .L_80148F8C
/* 80148F7C 00145EBC  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80148F80 00145EC0  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80148F84 00145EC4  C0 23 11 A0 */	lfs f1, 0x11a0(r3)
/* 80148F88 00145EC8  48 00 00 74 */	b .L_80148FFC
.L_80148F8C:
/* 80148F8C 00145ECC  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80148F90 00145ED0  88 1F 02 B9 */	lbz r0, 0x2b9(r31)
/* 80148F94 00145ED4  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80148F98 00145ED8  C0 22 A0 E0 */	lfs f1, lbl_80518440@sda21(r2)
/* 80148F9C 00145EDC  28 00 00 02 */	cmplwi r0, 2
/* 80148FA0 00145EE0  C0 03 02 C8 */	lfs f0, 0x2c8(r3)
/* 80148FA4 00145EE4  EC 41 00 32 */	fmuls f2, f1, f0
/* 80148FA8 00145EE8  40 82 00 0C */	bne .L_80148FB4
/* 80148FAC 00145EEC  C0 43 02 F0 */	lfs f2, 0x2f0(r3)
/* 80148FB0 00145EF0  48 00 00 10 */	b .L_80148FC0
.L_80148FB4:
/* 80148FB4 00145EF4  28 00 00 01 */	cmplwi r0, 1
/* 80148FB8 00145EF8  40 82 00 08 */	bne .L_80148FC0
/* 80148FBC 00145EFC  C0 43 03 18 */	lfs f2, 0x318(r3)
.L_80148FC0:
/* 80148FC0 00145F00  C0 22 A0 E0 */	lfs f1, lbl_80518440@sda21(r2)
/* 80148FC4 00145F04  C0 03 02 A0 */	lfs f0, 0x2a0(r3)
/* 80148FC8 00145F08  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 80148FCC 00145F0C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80148FD0 00145F10  2C 00 00 04 */	cmpwi r0, 4
/* 80148FD4 00145F14  EC 02 08 28 */	fsubs f0, f2, f1
/* 80148FD8 00145F18  EC 3F 08 3A */	fmadds f1, f31, f0, f1
/* 80148FDC 00145F1C  40 82 00 10 */	bne .L_80148FEC
/* 80148FE0 00145F20  C0 03 10 10 */	lfs f0, 0x1010(r3)
/* 80148FE4 00145F24  EC 21 00 32 */	fmuls f1, f1, f0
/* 80148FE8 00145F28  48 00 00 14 */	b .L_80148FFC
.L_80148FEC:
/* 80148FEC 00145F2C  2C 00 00 03 */	cmpwi r0, 3
/* 80148FF0 00145F30  40 82 00 0C */	bne .L_80148FFC
/* 80148FF4 00145F34  C0 03 10 38 */	lfs f0, 0x1038(r3)
/* 80148FF8 00145F38  EC 21 00 32 */	fmuls f1, f1, f0
.L_80148FFC:
/* 80148FFC 00145F3C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80149000 00145F40  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80149004 00145F44  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80149008 00145F48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014900C 00145F4C  7C 08 03 A6 */	mtlr r0
/* 80149010 00145F50  38 21 00 20 */	addi r1, r1, 0x20
/* 80149014 00145F54  4E 80 00 20 */	blr 
.endfn getSpeed__Q24Game4PikiFf

.fn "setSpeed__Q24Game4PikiFfR10Vector3<f>", global
/* 80149018 00145F58  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014901C 00145F5C  7C 08 02 A6 */	mflr r0
/* 80149020 00145F60  90 01 00 24 */	stw r0, 0x24(r1)
/* 80149024 00145F64  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80149028 00145F68  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8014902C 00145F6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80149030 00145F70  93 C1 00 08 */	stw r30, 8(r1)
/* 80149034 00145F74  FF E0 08 90 */	fmr f31, f1
/* 80149038 00145F78  C0 02 A0 BC */	lfs f0, lbl_8051841C@sda21(r2)
/* 8014903C 00145F7C  7C 7E 1B 78 */	mr r30, r3
/* 80149040 00145F80  7C 9F 23 78 */	mr r31, r4
/* 80149044 00145F84  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80149048 00145F88  40 80 00 C0 */	bge .L_80149108
/* 8014904C 00145F8C  48 00 0F 95 */	bl doped__Q24Game4PikiFv
/* 80149050 00145F90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80149054 00145F94  41 82 00 14 */	beq .L_80149068
/* 80149058 00145F98  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8014905C 00145F9C  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80149060 00145FA0  C0 23 11 A0 */	lfs f1, 0x11a0(r3)
/* 80149064 00145FA4  48 00 00 78 */	b .L_801490DC
.L_80149068:
/* 80149068 00145FA8  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8014906C 00145FAC  88 1E 02 B9 */	lbz r0, 0x2b9(r30)
/* 80149070 00145FB0  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80149074 00145FB4  C0 22 A0 E0 */	lfs f1, lbl_80518440@sda21(r2)
/* 80149078 00145FB8  28 00 00 02 */	cmplwi r0, 2
/* 8014907C 00145FBC  C0 03 02 C8 */	lfs f0, 0x2c8(r3)
/* 80149080 00145FC0  EC 61 00 32 */	fmuls f3, f1, f0
/* 80149084 00145FC4  40 82 00 0C */	bne .L_80149090
/* 80149088 00145FC8  C0 63 02 F0 */	lfs f3, 0x2f0(r3)
/* 8014908C 00145FCC  48 00 00 10 */	b .L_8014909C
.L_80149090:
/* 80149090 00145FD0  28 00 00 01 */	cmplwi r0, 1
/* 80149094 00145FD4  40 82 00 08 */	bne .L_8014909C
/* 80149098 00145FD8  C0 63 03 18 */	lfs f3, 0x318(r3)
.L_8014909C:
/* 8014909C 00145FDC  C0 42 A0 E0 */	lfs f2, lbl_80518440@sda21(r2)
/* 801490A0 00145FE0  FC 20 F8 50 */	fneg f1, f31
/* 801490A4 00145FE4  C0 03 02 A0 */	lfs f0, 0x2a0(r3)
/* 801490A8 00145FE8  88 1E 02 B8 */	lbz r0, 0x2b8(r30)
/* 801490AC 00145FEC  EC 42 00 32 */	fmuls f2, f2, f0
/* 801490B0 00145FF0  2C 00 00 04 */	cmpwi r0, 4
/* 801490B4 00145FF4  EC 03 10 28 */	fsubs f0, f3, f2
/* 801490B8 00145FF8  EC 21 10 3A */	fmadds f1, f1, f0, f2
/* 801490BC 00145FFC  40 82 00 10 */	bne .L_801490CC
/* 801490C0 00146000  C0 03 10 10 */	lfs f0, 0x1010(r3)
/* 801490C4 00146004  EC 21 00 32 */	fmuls f1, f1, f0
/* 801490C8 00146008  48 00 00 14 */	b .L_801490DC
.L_801490CC:
/* 801490CC 0014600C  2C 00 00 03 */	cmpwi r0, 3
/* 801490D0 00146010  40 82 00 0C */	bne .L_801490DC
/* 801490D4 00146014  C0 03 10 38 */	lfs f0, 0x1038(r3)
/* 801490D8 00146018  EC 21 00 32 */	fmuls f1, f1, f0
.L_801490DC:
/* 801490DC 0014601C  FC 60 08 50 */	fneg f3, f1
/* 801490E0 00146020  C0 1F 00 00 */	lfs f0, 0(r31)
/* 801490E4 00146024  C0 3F 00 04 */	lfs f1, 4(r31)
/* 801490E8 00146028  C0 5F 00 08 */	lfs f2, 8(r31)
/* 801490EC 0014602C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801490F0 00146030  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801490F4 00146034  EC 42 00 F2 */	fmuls f2, f2, f3
/* 801490F8 00146038  D0 1E 01 E4 */	stfs f0, 0x1e4(r30)
/* 801490FC 0014603C  D0 3E 01 E8 */	stfs f1, 0x1e8(r30)
/* 80149100 00146040  D0 5E 01 EC */	stfs f2, 0x1ec(r30)
/* 80149104 00146044  48 00 00 B4 */	b .L_801491B8
.L_80149108:
/* 80149108 00146048  48 00 0E D9 */	bl doped__Q24Game4PikiFv
/* 8014910C 0014604C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80149110 00146050  41 82 00 14 */	beq .L_80149124
/* 80149114 00146054  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80149118 00146058  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 8014911C 0014605C  C0 63 11 A0 */	lfs f3, 0x11a0(r3)
/* 80149120 00146060  48 00 00 74 */	b .L_80149194
.L_80149124:
/* 80149124 00146064  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80149128 00146068  88 1E 02 B9 */	lbz r0, 0x2b9(r30)
/* 8014912C 0014606C  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80149130 00146070  C0 22 A0 E0 */	lfs f1, lbl_80518440@sda21(r2)
/* 80149134 00146074  28 00 00 02 */	cmplwi r0, 2
/* 80149138 00146078  C0 03 02 C8 */	lfs f0, 0x2c8(r3)
/* 8014913C 0014607C  EC 41 00 32 */	fmuls f2, f1, f0
/* 80149140 00146080  40 82 00 0C */	bne .L_8014914C
/* 80149144 00146084  C0 43 02 F0 */	lfs f2, 0x2f0(r3)
/* 80149148 00146088  48 00 00 10 */	b .L_80149158
.L_8014914C:
/* 8014914C 0014608C  28 00 00 01 */	cmplwi r0, 1
/* 80149150 00146090  40 82 00 08 */	bne .L_80149158
/* 80149154 00146094  C0 43 03 18 */	lfs f2, 0x318(r3)
.L_80149158:
/* 80149158 00146098  C0 22 A0 E0 */	lfs f1, lbl_80518440@sda21(r2)
/* 8014915C 0014609C  C0 03 02 A0 */	lfs f0, 0x2a0(r3)
/* 80149160 001460A0  88 1E 02 B8 */	lbz r0, 0x2b8(r30)
/* 80149164 001460A4  EC 21 00 32 */	fmuls f1, f1, f0
/* 80149168 001460A8  2C 00 00 04 */	cmpwi r0, 4
/* 8014916C 001460AC  EC 02 08 28 */	fsubs f0, f2, f1
/* 80149170 001460B0  EC 7F 08 3A */	fmadds f3, f31, f0, f1
/* 80149174 001460B4  40 82 00 10 */	bne .L_80149184
/* 80149178 001460B8  C0 03 10 10 */	lfs f0, 0x1010(r3)
/* 8014917C 001460BC  EC 63 00 32 */	fmuls f3, f3, f0
/* 80149180 001460C0  48 00 00 14 */	b .L_80149194
.L_80149184:
/* 80149184 001460C4  2C 00 00 03 */	cmpwi r0, 3
/* 80149188 001460C8  40 82 00 0C */	bne .L_80149194
/* 8014918C 001460CC  C0 03 10 38 */	lfs f0, 0x1038(r3)
/* 80149190 001460D0  EC 63 00 32 */	fmuls f3, f3, f0
.L_80149194:
/* 80149194 001460D4  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80149198 001460D8  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8014919C 001460DC  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801491A0 001460E0  C0 5F 00 08 */	lfs f2, 8(r31)
/* 801491A4 001460E4  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801491A8 001460E8  EC 42 00 F2 */	fmuls f2, f2, f3
/* 801491AC 001460EC  D0 1E 01 E4 */	stfs f0, 0x1e4(r30)
/* 801491B0 001460F0  D0 3E 01 E8 */	stfs f1, 0x1e8(r30)
/* 801491B4 001460F4  D0 5E 01 EC */	stfs f2, 0x1ec(r30)
.L_801491B8:
/* 801491B8 001460F8  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 801491BC 001460FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801491C0 00146100  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801491C4 00146104  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801491C8 00146108  83 C1 00 08 */	lwz r30, 8(r1)
/* 801491CC 0014610C  7C 08 03 A6 */	mtlr r0
/* 801491D0 00146110  38 21 00 20 */	addi r1, r1, 0x20
/* 801491D4 00146114  4E 80 00 20 */	blr 
.endfn "setSpeed__Q24Game4PikiFfR10Vector3<f>"

.fn "setSpeed__Q24Game4PikiFfR10Vector3<f>f", global
/* 801491D8 00146118  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801491DC 0014611C  7C 08 02 A6 */	mflr r0
/* 801491E0 00146120  90 01 00 34 */	stw r0, 0x34(r1)
/* 801491E4 00146124  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801491E8 00146128  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 801491EC 0014612C  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 801491F0 00146130  F3 C1 00 18 */	psq_st f30, 24(r1), 0, qr0
/* 801491F4 00146134  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801491F8 00146138  93 C1 00 08 */	stw r30, 8(r1)
/* 801491FC 0014613C  FF C0 08 90 */	fmr f30, f1
/* 80149200 00146140  C0 02 A0 BC */	lfs f0, lbl_8051841C@sda21(r2)
/* 80149204 00146144  FF E0 10 90 */	fmr f31, f2
/* 80149208 00146148  7C 7E 1B 78 */	mr r30, r3
/* 8014920C 0014614C  7C 9F 23 78 */	mr r31, r4
/* 80149210 00146150  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80149214 00146154  40 80 00 DC */	bge .L_801492F0
/* 80149218 00146158  48 00 0D C9 */	bl doped__Q24Game4PikiFv
/* 8014921C 0014615C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80149220 00146160  41 82 00 14 */	beq .L_80149234
/* 80149224 00146164  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80149228 00146168  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 8014922C 0014616C  C0 23 11 A0 */	lfs f1, 0x11a0(r3)
/* 80149230 00146170  48 00 00 78 */	b .L_801492A8
.L_80149234:
/* 80149234 00146174  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80149238 00146178  88 1E 02 B9 */	lbz r0, 0x2b9(r30)
/* 8014923C 0014617C  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80149240 00146180  C0 22 A0 E0 */	lfs f1, lbl_80518440@sda21(r2)
/* 80149244 00146184  28 00 00 02 */	cmplwi r0, 2
/* 80149248 00146188  C0 03 02 C8 */	lfs f0, 0x2c8(r3)
/* 8014924C 0014618C  EC 61 00 32 */	fmuls f3, f1, f0
/* 80149250 00146190  40 82 00 0C */	bne .L_8014925C
/* 80149254 00146194  C0 63 02 F0 */	lfs f3, 0x2f0(r3)
/* 80149258 00146198  48 00 00 10 */	b .L_80149268
.L_8014925C:
/* 8014925C 0014619C  28 00 00 01 */	cmplwi r0, 1
/* 80149260 001461A0  40 82 00 08 */	bne .L_80149268
/* 80149264 001461A4  C0 63 03 18 */	lfs f3, 0x318(r3)
.L_80149268:
/* 80149268 001461A8  C0 42 A0 E0 */	lfs f2, lbl_80518440@sda21(r2)
/* 8014926C 001461AC  FC 20 F0 50 */	fneg f1, f30
/* 80149270 001461B0  C0 03 02 A0 */	lfs f0, 0x2a0(r3)
/* 80149274 001461B4  88 1E 02 B8 */	lbz r0, 0x2b8(r30)
/* 80149278 001461B8  EC 42 00 32 */	fmuls f2, f2, f0
/* 8014927C 001461BC  2C 00 00 04 */	cmpwi r0, 4
/* 80149280 001461C0  EC 03 10 28 */	fsubs f0, f3, f2
/* 80149284 001461C4  EC 21 10 3A */	fmadds f1, f1, f0, f2
/* 80149288 001461C8  40 82 00 10 */	bne .L_80149298
/* 8014928C 001461CC  C0 03 10 10 */	lfs f0, 0x1010(r3)
/* 80149290 001461D0  EC 21 00 32 */	fmuls f1, f1, f0
/* 80149294 001461D4  48 00 00 14 */	b .L_801492A8
.L_80149298:
/* 80149298 001461D8  2C 00 00 03 */	cmpwi r0, 3
/* 8014929C 001461DC  40 82 00 0C */	bne .L_801492A8
/* 801492A0 001461E0  C0 03 10 38 */	lfs f0, 0x1038(r3)
/* 801492A4 001461E4  EC 21 00 32 */	fmuls f1, f1, f0
.L_801492A8:
/* 801492A8 001461E8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801492AC 001461EC  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 801492B0 001461F0  EC 01 00 B2 */	fmuls f0, f1, f2
/* 801492B4 001461F4  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 801492B8 001461F8  40 80 00 08 */	bge .L_801492C0
/* 801492BC 001461FC  48 00 00 08 */	b .L_801492C4
.L_801492C0:
/* 801492C0 00146200  EC 3F 10 24 */	fdivs f1, f31, f2
.L_801492C4:
/* 801492C4 00146204  FC 60 08 50 */	fneg f3, f1
/* 801492C8 00146208  C0 1F 00 00 */	lfs f0, 0(r31)
/* 801492CC 0014620C  C0 3F 00 04 */	lfs f1, 4(r31)
/* 801492D0 00146210  C0 5F 00 08 */	lfs f2, 8(r31)
/* 801492D4 00146214  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801492D8 00146218  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801492DC 0014621C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 801492E0 00146220  D0 1E 01 E4 */	stfs f0, 0x1e4(r30)
/* 801492E4 00146224  D0 3E 01 E8 */	stfs f1, 0x1e8(r30)
/* 801492E8 00146228  D0 5E 01 EC */	stfs f2, 0x1ec(r30)
/* 801492EC 0014622C  48 00 00 D0 */	b .L_801493BC
.L_801492F0:
/* 801492F0 00146230  48 00 0C F1 */	bl doped__Q24Game4PikiFv
/* 801492F4 00146234  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801492F8 00146238  41 82 00 14 */	beq .L_8014930C
/* 801492FC 0014623C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80149300 00146240  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80149304 00146244  C0 63 11 A0 */	lfs f3, 0x11a0(r3)
/* 80149308 00146248  48 00 00 74 */	b .L_8014937C
.L_8014930C:
/* 8014930C 0014624C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80149310 00146250  88 1E 02 B9 */	lbz r0, 0x2b9(r30)
/* 80149314 00146254  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80149318 00146258  C0 22 A0 E0 */	lfs f1, lbl_80518440@sda21(r2)
/* 8014931C 0014625C  28 00 00 02 */	cmplwi r0, 2
/* 80149320 00146260  C0 03 02 C8 */	lfs f0, 0x2c8(r3)
/* 80149324 00146264  EC 41 00 32 */	fmuls f2, f1, f0
/* 80149328 00146268  40 82 00 0C */	bne .L_80149334
/* 8014932C 0014626C  C0 43 02 F0 */	lfs f2, 0x2f0(r3)
/* 80149330 00146270  48 00 00 10 */	b .L_80149340
.L_80149334:
/* 80149334 00146274  28 00 00 01 */	cmplwi r0, 1
/* 80149338 00146278  40 82 00 08 */	bne .L_80149340
/* 8014933C 0014627C  C0 43 03 18 */	lfs f2, 0x318(r3)
.L_80149340:
/* 80149340 00146280  C0 22 A0 E0 */	lfs f1, lbl_80518440@sda21(r2)
/* 80149344 00146284  C0 03 02 A0 */	lfs f0, 0x2a0(r3)
/* 80149348 00146288  88 1E 02 B8 */	lbz r0, 0x2b8(r30)
/* 8014934C 0014628C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80149350 00146290  2C 00 00 04 */	cmpwi r0, 4
/* 80149354 00146294  EC 02 08 28 */	fsubs f0, f2, f1
/* 80149358 00146298  EC 7E 08 3A */	fmadds f3, f30, f0, f1
/* 8014935C 0014629C  40 82 00 10 */	bne .L_8014936C
/* 80149360 001462A0  C0 03 10 10 */	lfs f0, 0x1010(r3)
/* 80149364 001462A4  EC 63 00 32 */	fmuls f3, f3, f0
/* 80149368 001462A8  48 00 00 14 */	b .L_8014937C
.L_8014936C:
/* 8014936C 001462AC  2C 00 00 03 */	cmpwi r0, 3
/* 80149370 001462B0  40 82 00 0C */	bne .L_8014937C
/* 80149374 001462B4  C0 03 10 38 */	lfs f0, 0x1038(r3)
/* 80149378 001462B8  EC 63 00 32 */	fmuls f3, f3, f0
.L_8014937C:
/* 8014937C 001462BC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80149380 001462C0  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80149384 001462C4  EC 03 00 72 */	fmuls f0, f3, f1
/* 80149388 001462C8  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8014938C 001462CC  40 80 00 08 */	bge .L_80149394
/* 80149390 001462D0  48 00 00 08 */	b .L_80149398
.L_80149394:
/* 80149394 001462D4  EC 7F 08 24 */	fdivs f3, f31, f1
.L_80149398:
/* 80149398 001462D8  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8014939C 001462DC  C0 3F 00 04 */	lfs f1, 4(r31)
/* 801493A0 001462E0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801493A4 001462E4  C0 5F 00 08 */	lfs f2, 8(r31)
/* 801493A8 001462E8  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801493AC 001462EC  EC 42 00 F2 */	fmuls f2, f2, f3
/* 801493B0 001462F0  D0 1E 01 E4 */	stfs f0, 0x1e4(r30)
/* 801493B4 001462F4  D0 3E 01 E8 */	stfs f1, 0x1e8(r30)
/* 801493B8 001462F8  D0 5E 01 EC */	stfs f2, 0x1ec(r30)
.L_801493BC:
/* 801493BC 001462FC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 801493C0 00146300  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801493C4 00146304  E3 C1 00 18 */	psq_l f30, 24(r1), 0, qr0
/* 801493C8 00146308  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 801493CC 0014630C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801493D0 00146310  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801493D4 00146314  83 C1 00 08 */	lwz r30, 8(r1)
/* 801493D8 00146318  7C 08 03 A6 */	mtlr r0
/* 801493DC 0014631C  38 21 00 30 */	addi r1, r1, 0x30
/* 801493E0 00146320  4E 80 00 20 */	blr 
.endfn "setSpeed__Q24Game4PikiFfR10Vector3<f>f"

.fn isPikmin__Q24Game4PikiFv, global
/* 801493E4 00146324  88 0D 84 6D */	lbz r0, sTekiChappyFlag__Q24Game12BaseHIOParms@sda21(r13)
/* 801493E8 00146328  28 00 00 00 */	cmplwi r0, 0
/* 801493EC 0014632C  41 82 00 18 */	beq .L_80149404
/* 801493F0 00146330  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 801493F4 00146334  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 801493F8 00146338  41 82 00 0C */	beq .L_80149404
/* 801493FC 0014633C  38 60 00 00 */	li r3, 0
/* 80149400 00146340  4E 80 00 20 */	blr 
.L_80149404:
/* 80149404 00146344  80 63 02 94 */	lwz r3, 0x294(r3)
/* 80149408 00146348  80 03 00 08 */	lwz r0, 8(r3)
/* 8014940C 0014634C  2C 00 00 0B */	cmpwi r0, 0xb
/* 80149410 00146350  40 82 00 0C */	bne .L_8014941C
/* 80149414 00146354  38 60 00 00 */	li r3, 0
/* 80149418 00146358  4E 80 00 20 */	blr 
.L_8014941C:
/* 8014941C 0014635C  38 60 00 01 */	li r3, 1
/* 80149420 00146360  4E 80 00 20 */	blr 
.endfn isPikmin__Q24Game4PikiFv

.fn isThrowable__Q24Game4PikiFv, global
/* 80149424 00146364  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80149428 00146368  7C 08 02 A6 */	mflr r0
/* 8014942C 0014636C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80149430 00146370  80 63 02 90 */	lwz r3, 0x290(r3)
/* 80149434 00146374  28 03 00 00 */	cmplwi r3, 0
/* 80149438 00146378  41 82 00 24 */	beq .L_8014945C
/* 8014943C 0014637C  81 83 00 00 */	lwz r12, 0(r3)
/* 80149440 00146380  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80149444 00146384  7D 89 03 A6 */	mtctr r12
/* 80149448 00146388  4E 80 04 21 */	bctrl 
/* 8014944C 0014638C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80149450 00146390  41 82 00 0C */	beq .L_8014945C
/* 80149454 00146394  38 60 00 01 */	li r3, 1
/* 80149458 00146398  48 00 00 08 */	b .L_80149460
.L_8014945C:
/* 8014945C 0014639C  38 60 00 00 */	li r3, 0
.L_80149460:
/* 80149460 001463A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80149464 001463A4  7C 08 03 A6 */	mtlr r0
/* 80149468 001463A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8014946C 001463AC  4E 80 00 20 */	blr 
.endfn isThrowable__Q24Game4PikiFv

.fn throwable__Q24Game9PikiStateFv, weak
/* 80149470 001463B0  38 60 00 00 */	li r3, 0
/* 80149474 001463B4  4E 80 00 20 */	blr 
.endfn throwable__Q24Game9PikiStateFv

.fn getDownfloorMass__Q24Game4PikiFv, global
/* 80149478 001463B8  80 83 02 90 */	lwz r4, 0x290(r3)
/* 8014947C 001463BC  28 04 00 00 */	cmplwi r4, 0
/* 80149480 001463C0  41 82 00 0C */	beq .L_8014948C
/* 80149484 001463C4  80 04 00 04 */	lwz r0, 4(r4)
/* 80149488 001463C8  48 00 00 08 */	b .L_80149490
.L_8014948C:
/* 8014948C 001463CC  38 00 FF FF */	li r0, -1
.L_80149490:
/* 80149490 001463D0  2C 00 00 04 */	cmpwi r0, 4
/* 80149494 001463D4  40 82 00 0C */	bne .L_801494A0
/* 80149498 001463D8  38 60 00 00 */	li r3, 0
/* 8014949C 001463DC  4E 80 00 20 */	blr 
.L_801494A0:
/* 801494A0 001463E0  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 801494A4 001463E4  38 60 00 01 */	li r3, 1
/* 801494A8 001463E8  2C 00 00 03 */	cmpwi r0, 3
/* 801494AC 001463EC  4C 82 00 20 */	bnelr 
/* 801494B0 001463F0  38 60 00 0A */	li r3, 0xa
/* 801494B4 001463F4  4E 80 00 20 */	blr 
.endfn getDownfloorMass__Q24Game4PikiFv

.fn gasInvicible__Q24Game4PikiFv, global
/* 801494B8 001463F8  88 63 02 A6 */	lbz r3, 0x2a6(r3)
/* 801494BC 001463FC  7C 03 00 D0 */	neg r0, r3
/* 801494C0 00146400  7C 00 1B 78 */	or r0, r0, r3
/* 801494C4 00146404  54 03 0F FE */	srwi r3, r0, 0x1f
/* 801494C8 00146408  4E 80 00 20 */	blr 
.endfn gasInvicible__Q24Game4PikiFv

.fn setGasInvincible__Q24Game4PikiFUc, global
/* 801494CC 0014640C  98 83 02 A6 */	stb r4, 0x2a6(r3)
/* 801494D0 00146410  4E 80 00 20 */	blr 
.endfn setGasInvincible__Q24Game4PikiFUc

.fn updateGasInvincible__Q24Game4PikiFv, global
/* 801494D4 00146414  88 83 02 A6 */	lbz r4, 0x2a6(r3)
/* 801494D8 00146418  28 04 00 00 */	cmplwi r4, 0
/* 801494DC 0014641C  4D 82 00 20 */	beqlr 
/* 801494E0 00146420  38 04 FF FF */	addi r0, r4, -1
/* 801494E4 00146424  98 03 02 A6 */	stb r0, 0x2a6(r3)
/* 801494E8 00146428  4E 80 00 20 */	blr 
.endfn updateGasInvincible__Q24Game4PikiFv

.fn getAttackDamage__Q24Game4PikiFv, global
/* 801494EC 0014642C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801494F0 00146430  7C 08 02 A6 */	mflr r0
/* 801494F4 00146434  90 01 00 14 */	stw r0, 0x14(r1)
/* 801494F8 00146438  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801494FC 0014643C  7C 7F 1B 78 */	mr r31, r3
/* 80149500 00146440  48 00 0A E1 */	bl doped__Q24Game4PikiFv
/* 80149504 00146444  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80149508 00146448  41 82 00 14 */	beq .L_8014951C
/* 8014950C 0014644C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80149510 00146450  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80149514 00146454  C0 23 11 78 */	lfs f1, 0x1178(r3)
/* 80149518 00146458  48 00 00 B8 */	b .L_801495D0
.L_8014951C:
/* 8014951C 0014645C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80149520 00146460  28 03 00 00 */	cmplwi r3, 0
/* 80149524 00146464  41 82 00 20 */	beq .L_80149544
/* 80149528 00146468  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8014952C 0014646C  2C 00 00 01 */	cmpwi r0, 1
/* 80149530 00146470  40 82 00 14 */	bne .L_80149544
/* 80149534 00146474  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80149538 00146478  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 8014953C 0014647C  C0 23 04 08 */	lfs f1, 0x408(r3)
/* 80149540 00146480  48 00 00 90 */	b .L_801495D0
.L_80149544:
/* 80149544 00146484  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 80149548 00146488  2C 00 00 02 */	cmpwi r0, 2
/* 8014954C 0014648C  41 82 00 48 */	beq .L_80149594
/* 80149550 00146490  40 80 00 14 */	bge .L_80149564
/* 80149554 00146494  2C 00 00 00 */	cmpwi r0, 0
/* 80149558 00146498  41 82 00 2C */	beq .L_80149584
/* 8014955C 0014649C  40 80 00 18 */	bge .L_80149574
/* 80149560 001464A0  48 00 00 64 */	b .L_801495C4
.L_80149564:
/* 80149564 001464A4  2C 00 00 04 */	cmpwi r0, 4
/* 80149568 001464A8  41 82 00 4C */	beq .L_801495B4
/* 8014956C 001464AC  40 80 00 58 */	bge .L_801495C4
/* 80149570 001464B0  48 00 00 34 */	b .L_801495A4
.L_80149574:
/* 80149574 001464B4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80149578 001464B8  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 8014957C 001464BC  C0 23 04 08 */	lfs f1, 0x408(r3)
/* 80149580 001464C0  48 00 00 50 */	b .L_801495D0
.L_80149584:
/* 80149584 001464C4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80149588 001464C8  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 8014958C 001464CC  C0 23 03 E0 */	lfs f1, 0x3e0(r3)
/* 80149590 001464D0  48 00 00 40 */	b .L_801495D0
.L_80149594:
/* 80149594 001464D4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80149598 001464D8  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 8014959C 001464DC  C0 23 04 30 */	lfs f1, 0x430(r3)
/* 801495A0 001464E0  48 00 00 30 */	b .L_801495D0
.L_801495A4:
/* 801495A4 001464E4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 801495A8 001464E8  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 801495AC 001464EC  C0 23 04 58 */	lfs f1, 0x458(r3)
/* 801495B0 001464F0  48 00 00 20 */	b .L_801495D0
.L_801495B4:
/* 801495B4 001464F4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 801495B8 001464F8  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 801495BC 001464FC  C0 23 04 80 */	lfs f1, 0x480(r3)
/* 801495C0 00146500  48 00 00 10 */	b .L_801495D0
.L_801495C4:
/* 801495C4 00146504  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 801495C8 00146508  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 801495CC 0014650C  C0 23 03 E0 */	lfs f1, 0x3e0(r3)
.L_801495D0:
/* 801495D0 00146510  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801495D4 00146514  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801495D8 00146518  7C 08 03 A6 */	mtlr r0
/* 801495DC 0014651C  38 21 00 10 */	addi r1, r1, 0x10
/* 801495E0 00146520  4E 80 00 20 */	blr 
.endfn getAttackDamage__Q24Game4PikiFv

.fn getThrowHeight__Q24Game4PikiFv, global
/* 801495E4 00146524  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801495E8 00146528  7C 08 02 A6 */	mflr r0
/* 801495EC 0014652C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801495F0 00146530  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801495F4 00146534  7C 7F 1B 78 */	mr r31, r3
/* 801495F8 00146538  80 03 02 C4 */	lwz r0, 0x2c4(r3)
/* 801495FC 0014653C  28 00 00 00 */	cmplwi r0, 0
/* 80149600 00146540  40 82 00 0C */	bne .L_8014960C
/* 80149604 00146544  C0 22 A0 BC */	lfs f1, lbl_8051841C@sda21(r2)
/* 80149608 00146548  48 00 00 88 */	b .L_80149690
.L_8014960C:
/* 8014960C 0014654C  40 82 00 20 */	bne .L_8014962C
/* 80149610 00146550  3C 60 80 48 */	lis r3, lbl_8047C8B0@ha
/* 80149614 00146554  3C A0 80 48 */	lis r5, lbl_8047C90C@ha
/* 80149618 00146558  38 63 C8 B0 */	addi r3, r3, lbl_8047C8B0@l
/* 8014961C 0014655C  38 80 05 7B */	li r4, 0x57b
/* 80149620 00146560  38 A5 C9 0C */	addi r5, r5, lbl_8047C90C@l
/* 80149624 00146564  4C C6 31 82 */	crclr 6
/* 80149628 00146568  4B EE 10 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014962C:
/* 8014962C 0014656C  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 80149630 00146570  2C 00 00 03 */	cmpwi r0, 3
/* 80149634 00146574  41 82 00 30 */	beq .L_80149664
/* 80149638 00146578  40 80 00 10 */	bge .L_80149648
/* 8014963C 0014657C  2C 00 00 02 */	cmpwi r0, 2
/* 80149640 00146580  40 80 00 14 */	bge .L_80149654
/* 80149644 00146584  48 00 00 40 */	b .L_80149684
.L_80149648:
/* 80149648 00146588  2C 00 00 05 */	cmpwi r0, 5
/* 8014964C 0014658C  40 80 00 38 */	bge .L_80149684
/* 80149650 00146590  48 00 00 24 */	b .L_80149674
.L_80149654:
/* 80149654 00146594  80 7F 02 C4 */	lwz r3, 0x2c4(r31)
/* 80149658 00146598  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8014965C 0014659C  C0 23 05 C0 */	lfs f1, 0x5c0(r3)
/* 80149660 001465A0  48 00 00 30 */	b .L_80149690
.L_80149664:
/* 80149664 001465A4  80 7F 02 C4 */	lwz r3, 0x2c4(r31)
/* 80149668 001465A8  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8014966C 001465AC  C0 23 05 E8 */	lfs f1, 0x5e8(r3)
/* 80149670 001465B0  48 00 00 20 */	b .L_80149690
.L_80149674:
/* 80149674 001465B4  80 7F 02 C4 */	lwz r3, 0x2c4(r31)
/* 80149678 001465B8  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8014967C 001465BC  C0 23 06 10 */	lfs f1, 0x610(r3)
/* 80149680 001465C0  48 00 00 10 */	b .L_80149690
.L_80149684:
/* 80149684 001465C4  80 7F 02 C4 */	lwz r3, 0x2c4(r31)
/* 80149688 001465C8  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 8014968C 001465CC  C0 23 05 98 */	lfs f1, 0x598(r3)
.L_80149690:
/* 80149690 001465D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80149694 001465D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80149698 001465D8  7C 08 03 A6 */	mtlr r0
/* 8014969C 001465DC  38 21 00 10 */	addi r1, r1, 0x10
/* 801496A0 001465E0  4E 80 00 20 */	blr 
.endfn getThrowHeight__Q24Game4PikiFv

.fn getPelletCarryPower__Q24Game4PikiFv, global
/* 801496A4 001465E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801496A8 001465E8  7C 08 02 A6 */	mflr r0
/* 801496AC 001465EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801496B0 001465F0  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 801496B4 001465F4  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 801496B8 001465F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801496BC 001465FC  7C 7F 1B 78 */	mr r31, r3
/* 801496C0 00146600  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 801496C4 00146604  2C 00 00 04 */	cmpwi r0, 4
/* 801496C8 00146608  41 82 00 14 */	beq .L_801496DC
/* 801496CC 0014660C  40 80 00 30 */	bge .L_801496FC
/* 801496D0 00146610  2C 00 00 03 */	cmpwi r0, 3
/* 801496D4 00146614  40 80 00 18 */	bge .L_801496EC
/* 801496D8 00146618  48 00 00 24 */	b .L_801496FC
.L_801496DC:
/* 801496DC 0014661C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 801496E0 00146620  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 801496E4 00146624  C3 E3 10 88 */	lfs f31, 0x1088(r3)
/* 801496E8 00146628  48 00 00 18 */	b .L_80149700
.L_801496EC:
/* 801496EC 0014662C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 801496F0 00146630  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 801496F4 00146634  C3 E3 10 60 */	lfs f31, 0x1060(r3)
/* 801496F8 00146638  48 00 00 08 */	b .L_80149700
.L_801496FC:
/* 801496FC 0014663C  C3 E2 A0 E0 */	lfs f31, lbl_80518440@sda21(r2)
.L_80149700:
/* 80149700 00146640  7F E3 FB 78 */	mr r3, r31
/* 80149704 00146644  48 00 08 DD */	bl doped__Q24Game4PikiFv
/* 80149708 00146648  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014970C 0014664C  40 82 00 10 */	bne .L_8014971C
/* 80149710 00146650  88 1F 02 B9 */	lbz r0, 0x2b9(r31)
/* 80149714 00146654  2C 00 00 02 */	cmpwi r0, 2
/* 80149718 00146658  40 82 00 18 */	bne .L_80149730
.L_8014971C:
/* 8014971C 0014665C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80149720 00146660  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80149724 00146664  C0 03 10 D8 */	lfs f0, 0x10d8(r3)
/* 80149728 00146668  EF FF 00 2A */	fadds f31, f31, f0
/* 8014972C 0014666C  48 00 00 1C */	b .L_80149748
.L_80149730:
/* 80149730 00146670  2C 00 00 01 */	cmpwi r0, 1
/* 80149734 00146674  40 82 00 14 */	bne .L_80149748
/* 80149738 00146678  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8014973C 0014667C  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80149740 00146680  C0 03 10 B0 */	lfs f0, 0x10b0(r3)
/* 80149744 00146684  EF FF 00 2A */	fadds f31, f31, f0
.L_80149748:
/* 80149748 00146688  FC 20 F8 90 */	fmr f1, f31
/* 8014974C 0014668C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80149750 00146690  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80149754 00146694  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80149758 00146698  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014975C 0014669C  7C 08 03 A6 */	mtlr r0
/* 80149760 001466A0  38 21 00 20 */	addi r1, r1, 0x20
/* 80149764 001466A4  4E 80 00 20 */	blr 
.endfn getPelletCarryPower__Q24Game4PikiFv

.fn onStickStartSelf__Q24Game4PikiFPQ24Game8Creature, global
/* 80149768 001466A8  4E 80 00 20 */	blr 
.endfn onStickStartSelf__Q24Game4PikiFPQ24Game8Creature

.fn onStickEndSelf__Q24Game4PikiFPQ24Game8Creature, global
/* 8014976C 001466AC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80149770 001466B0  7C 08 02 A6 */	mflr r0
/* 80149774 001466B4  90 01 00 64 */	stw r0, 0x64(r1)
/* 80149778 001466B8  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8014977C 001466BC  7C 7F 1B 78 */	mr r31, r3
/* 80149780 001466C0  38 61 00 08 */	addi r3, r1, 8
/* 80149784 001466C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80149788 001466C8  7F E4 FB 78 */	mr r4, r31
/* 8014978C 001466CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80149790 001466D0  7D 89 03 A6 */	mtctr r12
/* 80149794 001466D4  4E 80 04 21 */	bctrl 
/* 80149798 001466D8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8014979C 001466DC  C0 C1 00 08 */	lfs f6, 8(r1)
/* 801497A0 001466E0  C0 A1 00 0C */	lfs f5, 0xc(r1)
/* 801497A4 001466E4  28 03 00 00 */	cmplwi r3, 0
/* 801497A8 001466E8  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 801497AC 001466EC  D0 C1 00 14 */	stfs f6, 0x14(r1)
/* 801497B0 001466F0  D0 A1 00 18 */	stfs f5, 0x18(r1)
/* 801497B4 001466F4  D0 81 00 1C */	stfs f4, 0x1c(r1)
/* 801497B8 001466F8  41 82 00 88 */	beq .L_80149840
/* 801497BC 001466FC  38 00 00 01 */	li r0, 1
/* 801497C0 00146700  38 A0 00 00 */	li r5, 0
/* 801497C4 00146704  C0 22 A0 BC */	lfs f1, lbl_8051841C@sda21(r2)
/* 801497C8 00146708  38 81 00 20 */	addi r4, r1, 0x20
/* 801497CC 0014670C  98 01 00 2C */	stb r0, 0x2c(r1)
/* 801497D0 00146710  C0 62 A0 E4 */	lfs f3, lbl_80518444@sda21(r2)
/* 801497D4 00146714  C0 42 A0 E8 */	lfs f2, lbl_80518448@sda21(r2)
/* 801497D8 00146718  C0 02 A0 E0 */	lfs f0, lbl_80518440@sda21(r2)
/* 801497DC 0014671C  90 A1 00 34 */	stw r5, 0x34(r1)
/* 801497E0 00146720  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 801497E4 00146724  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 801497E8 00146728  90 A1 00 30 */	stw r5, 0x30(r1)
/* 801497EC 0014672C  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 801497F0 00146730  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 801497F4 00146734  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 801497F8 00146738  98 A1 00 2D */	stb r5, 0x2d(r1)
/* 801497FC 0014673C  D0 C1 00 20 */	stfs f6, 0x20(r1)
/* 80149800 00146740  D0 A1 00 24 */	stfs f5, 0x24(r1)
/* 80149804 00146744  D0 81 00 28 */	stfs f4, 0x28(r1)
/* 80149808 00146748  98 01 00 2C */	stb r0, 0x2c(r1)
/* 8014980C 0014674C  81 83 00 04 */	lwz r12, 4(r3)
/* 80149810 00146750  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80149814 00146754  7D 89 03 A6 */	mtctr r12
/* 80149818 00146758  4E 80 04 21 */	bctrl 
/* 8014981C 0014675C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80149820 00146760  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80149824 00146764  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80149828 00146768  40 80 00 18 */	bge .L_80149840
/* 8014982C 0014676C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80149830 00146770  7F E3 FB 78 */	mr r3, r31
/* 80149834 00146774  38 81 00 14 */	addi r4, r1, 0x14
/* 80149838 00146778  38 A0 00 00 */	li r5, 0
/* 8014983C 0014677C  4B FF 19 6D */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
.L_80149840:
/* 80149840 00146780  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80149844 00146784  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80149848 00146788  7C 08 03 A6 */	mtlr r0
/* 8014984C 0014678C  38 21 00 60 */	addi r1, r1, 0x60
/* 80149850 00146790  4E 80 00 20 */	blr 
.endfn onStickEndSelf__Q24Game4PikiFPQ24Game8Creature

.fn stimulate__Q24Game4PikiFRQ24Game11Interaction, global
/* 80149854 00146794  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80149858 00146798  7C 08 02 A6 */	mflr r0
/* 8014985C 0014679C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80149860 001467A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80149864 001467A4  7C 9F 23 78 */	mr r31, r4
/* 80149868 001467A8  93 C1 00 08 */	stw r30, 8(r1)
/* 8014986C 001467AC  7C 7E 1B 78 */	mr r30, r3
/* 80149870 001467B0  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 80149874 001467B4  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80149878 001467B8  40 82 00 0C */	bne .L_80149884
/* 8014987C 001467BC  38 60 00 00 */	li r3, 0
/* 80149880 001467C0  48 00 00 44 */	b .L_801498C4
.L_80149884:
/* 80149884 001467C4  7F E3 FB 78 */	mr r3, r31
/* 80149888 001467C8  7F C4 F3 78 */	mr r4, r30
/* 8014988C 001467CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80149890 001467D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80149894 001467D4  7D 89 03 A6 */	mtctr r12
/* 80149898 001467D8  4E 80 04 21 */	bctrl 
/* 8014989C 001467DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801498A0 001467E0  41 82 00 20 */	beq .L_801498C0
/* 801498A4 001467E4  7F E3 FB 78 */	mr r3, r31
/* 801498A8 001467E8  7F C4 F3 78 */	mr r4, r30
/* 801498AC 001467EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801498B0 001467F0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801498B4 001467F4  7D 89 03 A6 */	mtctr r12
/* 801498B8 001467F8  4E 80 04 21 */	bctrl 
/* 801498BC 001467FC  48 00 00 08 */	b .L_801498C4
.L_801498C0:
/* 801498C0 00146800  38 60 00 00 */	li r3, 0
.L_801498C4:
/* 801498C4 00146804  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801498C8 00146808  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801498CC 0014680C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801498D0 00146810  7C 08 03 A6 */	mtlr r0
/* 801498D4 00146814  38 21 00 10 */	addi r1, r1, 0x10
/* 801498D8 00146818  4E 80 00 20 */	blr 
.endfn stimulate__Q24Game4PikiFRQ24Game11Interaction

.fn bounceCallback__Q24Game4PikiFPQ23Sys8Triangle, global
/* 801498DC 0014681C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801498E0 00146820  7C 08 02 A6 */	mflr r0
/* 801498E4 00146824  90 01 00 14 */	stw r0, 0x14(r1)
/* 801498E8 00146828  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801498EC 0014682C  7C 9F 23 78 */	mr r31, r4
/* 801498F0 00146830  93 C1 00 08 */	stw r30, 8(r1)
/* 801498F4 00146834  7C 7E 1B 78 */	mr r30, r3
/* 801498F8 00146838  80 63 02 90 */	lwz r3, 0x290(r3)
/* 801498FC 0014683C  28 03 00 00 */	cmplwi r3, 0
/* 80149900 00146840  41 82 00 1C */	beq .L_8014991C
/* 80149904 00146844  81 83 00 00 */	lwz r12, 0(r3)
/* 80149908 00146848  7F C4 F3 78 */	mr r4, r30
/* 8014990C 0014684C  7F E5 FB 78 */	mr r5, r31
/* 80149910 00146850  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80149914 00146854  7D 89 03 A6 */	mtctr r12
/* 80149918 00146858  4E 80 04 21 */	bctrl 
.L_8014991C:
/* 8014991C 0014685C  80 7E 02 90 */	lwz r3, 0x290(r30)
/* 80149920 00146860  81 83 00 00 */	lwz r12, 0(r3)
/* 80149924 00146864  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80149928 00146868  7D 89 03 A6 */	mtctr r12
/* 8014992C 0014686C  4E 80 04 21 */	bctrl 
/* 80149930 00146870  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80149934 00146874  41 82 00 34 */	beq .L_80149968
/* 80149938 00146878  80 7E 02 94 */	lwz r3, 0x294(r30)
/* 8014993C 0014687C  48 04 D3 C5 */	bl getCurrAction__Q26PikiAI5BrainFv
/* 80149940 00146880  28 03 00 00 */	cmplwi r3, 0
/* 80149944 00146884  41 82 00 24 */	beq .L_80149968
/* 80149948 00146888  80 7E 02 94 */	lwz r3, 0x294(r30)
/* 8014994C 0014688C  48 04 D3 B5 */	bl getCurrAction__Q26PikiAI5BrainFv
/* 80149950 00146890  81 83 00 00 */	lwz r12, 0(r3)
/* 80149954 00146894  7F C4 F3 78 */	mr r4, r30
/* 80149958 00146898  7F E5 FB 78 */	mr r5, r31
/* 8014995C 0014689C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80149960 001468A0  7D 89 03 A6 */	mtctr r12
/* 80149964 001468A4  4E 80 04 21 */	bctrl 
.L_80149968:
/* 80149968 001468A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014996C 001468AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80149970 001468B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80149974 001468B4  7C 08 03 A6 */	mtlr r0
/* 80149978 001468B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8014997C 001468BC  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game4PikiFPQ23Sys8Triangle

.fn bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle, weak
/* 80149980 001468C0  4E 80 00 20 */	blr 
.endfn bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle

.fn aiActive__Q24Game9PikiStateFv, weak
/* 80149984 001468C4  38 60 00 00 */	li r3, 0
/* 80149988 001468C8  4E 80 00 20 */	blr 
.endfn aiActive__Q24Game9PikiStateFv

.fn bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle, weak
/* 8014998C 001468CC  4E 80 00 20 */	blr 
.endfn bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle

.fn "wallCallback__Q24Game4PikiFR10Vector3<f>", global
/* 80149990 001468D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80149994 001468D4  7C 08 02 A6 */	mflr r0
/* 80149998 001468D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014999C 001468DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801499A0 001468E0  7C 9F 23 78 */	mr r31, r4
/* 801499A4 001468E4  93 C1 00 08 */	stw r30, 8(r1)
/* 801499A8 001468E8  7C 7E 1B 78 */	mr r30, r3
/* 801499AC 001468EC  80 63 02 90 */	lwz r3, 0x290(r3)
/* 801499B0 001468F0  28 03 00 00 */	cmplwi r3, 0
/* 801499B4 001468F4  41 82 00 1C */	beq .L_801499D0
/* 801499B8 001468F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801499BC 001468FC  7F C4 F3 78 */	mr r4, r30
/* 801499C0 00146900  7F E5 FB 78 */	mr r5, r31
/* 801499C4 00146904  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801499C8 00146908  7D 89 03 A6 */	mtctr r12
/* 801499CC 0014690C  4E 80 04 21 */	bctrl 
.L_801499D0:
/* 801499D0 00146910  80 7E 02 90 */	lwz r3, 0x290(r30)
/* 801499D4 00146914  81 83 00 00 */	lwz r12, 0(r3)
/* 801499D8 00146918  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 801499DC 0014691C  7D 89 03 A6 */	mtctr r12
/* 801499E0 00146920  4E 80 04 21 */	bctrl 
/* 801499E4 00146924  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801499E8 00146928  41 82 00 30 */	beq .L_80149A18
/* 801499EC 0014692C  80 7E 02 94 */	lwz r3, 0x294(r30)
/* 801499F0 00146930  48 04 D3 11 */	bl getCurrAction__Q26PikiAI5BrainFv
/* 801499F4 00146934  28 03 00 00 */	cmplwi r3, 0
/* 801499F8 00146938  41 82 00 20 */	beq .L_80149A18
/* 801499FC 0014693C  80 7E 02 94 */	lwz r3, 0x294(r30)
/* 80149A00 00146940  48 04 D3 01 */	bl getCurrAction__Q26PikiAI5BrainFv
/* 80149A04 00146944  81 83 00 00 */	lwz r12, 0(r3)
/* 80149A08 00146948  7F E4 FB 78 */	mr r4, r31
/* 80149A0C 0014694C  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80149A10 00146950  7D 89 03 A6 */	mtctr r12
/* 80149A14 00146954  4E 80 04 21 */	bctrl 
.L_80149A18:
/* 80149A18 00146958  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80149A1C 0014695C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80149A20 00146960  83 C1 00 08 */	lwz r30, 8(r1)
/* 80149A24 00146964  7C 08 03 A6 */	mtlr r0
/* 80149A28 00146968  38 21 00 10 */	addi r1, r1, 0x10
/* 80149A2C 0014696C  4E 80 00 20 */	blr 
.endfn "wallCallback__Q24Game4PikiFR10Vector3<f>"

.fn "wallCallback__Q26PikiAI6ActionFR10Vector3<f>", weak
/* 80149A30 00146970  4E 80 00 20 */	blr 
.endfn "wallCallback__Q26PikiAI6ActionFR10Vector3<f>"

.fn "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>", weak
/* 80149A34 00146974  4E 80 00 20 */	blr 
.endfn "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"

.fn collisionCallback__Q24Game4PikiFRQ24Game9CollEvent, global
/* 80149A38 00146978  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80149A3C 0014697C  7C 08 02 A6 */	mflr r0
/* 80149A40 00146980  90 01 00 14 */	stw r0, 0x14(r1)
/* 80149A44 00146984  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80149A48 00146988  7C 9F 23 78 */	mr r31, r4
/* 80149A4C 0014698C  93 C1 00 08 */	stw r30, 8(r1)
/* 80149A50 00146990  7C 7E 1B 78 */	mr r30, r3
/* 80149A54 00146994  80 63 02 90 */	lwz r3, 0x290(r3)
/* 80149A58 00146998  28 03 00 00 */	cmplwi r3, 0
/* 80149A5C 0014699C  41 82 00 1C */	beq .L_80149A78
/* 80149A60 001469A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80149A64 001469A4  7F C4 F3 78 */	mr r4, r30
/* 80149A68 001469A8  7F E5 FB 78 */	mr r5, r31
/* 80149A6C 001469AC  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80149A70 001469B0  7D 89 03 A6 */	mtctr r12
/* 80149A74 001469B4  4E 80 04 21 */	bctrl 
.L_80149A78:
/* 80149A78 001469B8  80 7E 02 90 */	lwz r3, 0x290(r30)
/* 80149A7C 001469BC  28 03 00 00 */	cmplwi r3, 0
/* 80149A80 001469C0  41 82 00 4C */	beq .L_80149ACC
/* 80149A84 001469C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80149A88 001469C8  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80149A8C 001469CC  7D 89 03 A6 */	mtctr r12
/* 80149A90 001469D0  4E 80 04 21 */	bctrl 
/* 80149A94 001469D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80149A98 001469D8  41 82 00 34 */	beq .L_80149ACC
/* 80149A9C 001469DC  80 7E 02 94 */	lwz r3, 0x294(r30)
/* 80149AA0 001469E0  48 04 D2 61 */	bl getCurrAction__Q26PikiAI5BrainFv
/* 80149AA4 001469E4  28 03 00 00 */	cmplwi r3, 0
/* 80149AA8 001469E8  41 82 00 24 */	beq .L_80149ACC
/* 80149AAC 001469EC  80 7E 02 94 */	lwz r3, 0x294(r30)
/* 80149AB0 001469F0  48 04 D2 51 */	bl getCurrAction__Q26PikiAI5BrainFv
/* 80149AB4 001469F4  81 83 00 00 */	lwz r12, 0(r3)
/* 80149AB8 001469F8  7F C4 F3 78 */	mr r4, r30
/* 80149ABC 001469FC  7F E5 FB 78 */	mr r5, r31
/* 80149AC0 00146A00  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80149AC4 00146A04  7D 89 03 A6 */	mtctr r12
/* 80149AC8 00146A08  4E 80 04 21 */	bctrl 
.L_80149ACC:
/* 80149ACC 00146A0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80149AD0 00146A10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80149AD4 00146A14  83 C1 00 08 */	lwz r30, 8(r1)
/* 80149AD8 00146A18  7C 08 03 A6 */	mtlr r0
/* 80149ADC 00146A1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80149AE0 00146A20  4E 80 00 20 */	blr 
.endfn collisionCallback__Q24Game4PikiFRQ24Game9CollEvent

.fn collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent, weak
/* 80149AE4 00146A24  4E 80 00 20 */	blr 
.endfn collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent

.fn collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent, weak
/* 80149AE8 00146A28  4E 80 00 20 */	blr 
.endfn collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent

.fn platCallback__Q24Game4PikiFRQ24Game9PlatEvent, global
/* 80149AEC 00146A2C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80149AF0 00146A30  7C 08 02 A6 */	mflr r0
/* 80149AF4 00146A34  90 01 00 34 */	stw r0, 0x34(r1)
/* 80149AF8 00146A38  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80149AFC 00146A3C  7C 7F 1B 78 */	mr r31, r3
/* 80149B00 00146A40  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80149B04 00146A44  7C 9E 23 78 */	mr r30, r4
/* 80149B08 00146A48  80 63 02 90 */	lwz r3, 0x290(r3)
/* 80149B0C 00146A4C  28 03 00 00 */	cmplwi r3, 0
/* 80149B10 00146A50  41 82 00 1C */	beq .L_80149B2C
/* 80149B14 00146A54  81 83 00 00 */	lwz r12, 0(r3)
/* 80149B18 00146A58  7F E4 FB 78 */	mr r4, r31
/* 80149B1C 00146A5C  7F C5 F3 78 */	mr r5, r30
/* 80149B20 00146A60  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80149B24 00146A64  7D 89 03 A6 */	mtctr r12
/* 80149B28 00146A68  4E 80 04 21 */	bctrl 
.L_80149B2C:
/* 80149B2C 00146A6C  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 80149B30 00146A70  81 83 00 00 */	lwz r12, 0(r3)
/* 80149B34 00146A74  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80149B38 00146A78  7D 89 03 A6 */	mtctr r12
/* 80149B3C 00146A7C  4E 80 04 21 */	bctrl 
/* 80149B40 00146A80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80149B44 00146A84  41 82 00 34 */	beq .L_80149B78
/* 80149B48 00146A88  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 80149B4C 00146A8C  48 04 D1 B5 */	bl getCurrAction__Q26PikiAI5BrainFv
/* 80149B50 00146A90  28 03 00 00 */	cmplwi r3, 0
/* 80149B54 00146A94  41 82 00 24 */	beq .L_80149B78
/* 80149B58 00146A98  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 80149B5C 00146A9C  48 04 D1 A5 */	bl getCurrAction__Q26PikiAI5BrainFv
/* 80149B60 00146AA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80149B64 00146AA4  7F E4 FB 78 */	mr r4, r31
/* 80149B68 00146AA8  7F C5 F3 78 */	mr r5, r30
/* 80149B6C 00146AAC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80149B70 00146AB0  7D 89 03 A6 */	mtctr r12
/* 80149B74 00146AB4  4E 80 04 21 */	bctrl 
.L_80149B78:
/* 80149B78 00146AB8  7F E3 FB 78 */	mr r3, r31
/* 80149B7C 00146ABC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80149B80 00146AC0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80149B84 00146AC4  7D 89 03 A6 */	mtctr r12
/* 80149B88 00146AC8  4E 80 04 21 */	bctrl 
/* 80149B8C 00146ACC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80149B90 00146AD0  41 82 00 BC */	beq .L_80149C4C
/* 80149B94 00146AD4  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 80149B98 00146AD8  81 83 00 00 */	lwz r12, 0(r3)
/* 80149B9C 00146ADC  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80149BA0 00146AE0  7D 89 03 A6 */	mtctr r12
/* 80149BA4 00146AE4  4E 80 04 21 */	bctrl 
/* 80149BA8 00146AE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80149BAC 00146AEC  40 82 00 A0 */	bne .L_80149C4C
/* 80149BB0 00146AF0  80 DE 00 00 */	lwz r6, 0(r30)
/* 80149BB4 00146AF4  3C 60 65 6C */	lis r3, 0x656C6563@ha
/* 80149BB8 00146AF8  38 83 65 63 */	addi r4, r3, 0x656C6563@l
/* 80149BBC 00146AFC  38 A0 00 2A */	li r5, 0x2a
/* 80149BC0 00146B00  38 66 00 F8 */	addi r3, r6, 0xf8
/* 80149BC4 00146B04  48 2C 97 39 */	bl match__4ID32FUlc
/* 80149BC8 00146B08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80149BCC 00146B0C  41 82 00 80 */	beq .L_80149C4C
/* 80149BD0 00146B10  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 80149BD4 00146B14  2C 00 00 02 */	cmpwi r0, 2
/* 80149BD8 00146B18  41 82 00 74 */	beq .L_80149C4C
/* 80149BDC 00146B1C  38 00 FF FF */	li r0, -1
/* 80149BE0 00146B20  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 80149BE4 00146B24  B0 1F 02 A4 */	sth r0, 0x2a4(r31)
/* 80149BE8 00146B28  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 80149BEC 00146B2C  3C A0 80 4B */	lis r5, __vt__Q24Game12InteractWind@ha
/* 80149BF0 00146B30  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 80149BF4 00146B34  90 01 00 08 */	stw r0, 8(r1)
/* 80149BF8 00146B38  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 80149BFC 00146B3C  38 A5 49 74 */	addi r5, r5, __vt__Q24Game12InteractWind@l
/* 80149C00 00146B40  C0 62 A0 BC */	lfs f3, lbl_8051841C@sda21(r2)
/* 80149C04 00146B44  C0 44 00 00 */	lfs f2, 0(r4)
/* 80149C08 00146B48  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractDenki@ha
/* 80149C0C 00146B4C  C0 24 00 04 */	lfs f1, 4(r4)
/* 80149C10 00146B50  38 03 49 08 */	addi r0, r3, __vt__Q24Game13InteractDenki@l
/* 80149C14 00146B54  90 A1 00 08 */	stw r5, 8(r1)
/* 80149C18 00146B58  7F E3 FB 78 */	mr r3, r31
/* 80149C1C 00146B5C  C0 04 00 08 */	lfs f0, 8(r4)
/* 80149C20 00146B60  38 81 00 08 */	addi r4, r1, 8
/* 80149C24 00146B64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80149C28 00146B68  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 80149C2C 00146B6C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80149C30 00146B70  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80149C34 00146B74  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80149C38 00146B78  90 01 00 08 */	stw r0, 8(r1)
/* 80149C3C 00146B7C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80149C40 00146B80  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80149C44 00146B84  7D 89 03 A6 */	mtctr r12
/* 80149C48 00146B88  4E 80 04 21 */	bctrl 
.L_80149C4C:
/* 80149C4C 00146B8C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80149C50 00146B90  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80149C54 00146B94  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80149C58 00146B98  7C 08 03 A6 */	mtlr r0
/* 80149C5C 00146B9C  38 21 00 30 */	addi r1, r1, 0x30
/* 80149C60 00146BA0  4E 80 00 20 */	blr 
.endfn platCallback__Q24Game4PikiFRQ24Game9PlatEvent

.fn platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent, weak
/* 80149C64 00146BA4  4E 80 00 20 */	blr 
.endfn platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent

.fn platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent, weak
/* 80149C68 00146BA8  4E 80 00 20 */	blr 
.endfn platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent

.fn ignoreAtari__Q24Game4PikiFPQ24Game8Creature, global
/* 80149C6C 00146BAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80149C70 00146BB0  7C 08 02 A6 */	mflr r0
/* 80149C74 00146BB4  7C 66 1B 78 */	mr r6, r3
/* 80149C78 00146BB8  7C 85 23 78 */	mr r5, r4
/* 80149C7C 00146BBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80149C80 00146BC0  38 00 00 00 */	li r0, 0
/* 80149C84 00146BC4  80 63 02 90 */	lwz r3, 0x290(r3)
/* 80149C88 00146BC8  28 03 00 00 */	cmplwi r3, 0
/* 80149C8C 00146BCC  41 82 00 1C */	beq .L_80149CA8
/* 80149C90 00146BD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80149C94 00146BD4  7C C4 33 78 */	mr r4, r6
/* 80149C98 00146BD8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80149C9C 00146BDC  7D 89 03 A6 */	mtctr r12
/* 80149CA0 00146BE0  4E 80 04 21 */	bctrl 
/* 80149CA4 00146BE4  7C 60 1B 78 */	mr r0, r3
.L_80149CA8:
/* 80149CA8 00146BE8  7C 03 03 78 */	mr r3, r0
/* 80149CAC 00146BEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80149CB0 00146BF0  7C 08 03 A6 */	mtlr r0
/* 80149CB4 00146BF4  38 21 00 10 */	addi r1, r1, 0x10
/* 80149CB8 00146BF8  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q24Game4PikiFPQ24Game8Creature

.fn ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature, weak
/* 80149CBC 00146BFC  38 60 00 00 */	li r3, 0
/* 80149CC0 00146C00  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature

.fn setFreeLightEffect__Q24Game4PikiFb, global
/* 80149CC4 00146C04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80149CC8 00146C08  7C 08 02 A6 */	mflr r0
/* 80149CCC 00146C0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80149CD0 00146C10  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80149CD4 00146C14  41 82 00 2C */	beq .L_80149D00
/* 80149CD8 00146C18  80 63 02 58 */	lwz r3, 0x258(r3)
/* 80149CDC 00146C1C  80 03 00 00 */	lwz r0, 0(r3)
/* 80149CE0 00146C20  60 00 00 01 */	ori r0, r0, 1
/* 80149CE4 00146C24  90 03 00 00 */	stw r0, 0(r3)
/* 80149CE8 00146C28  80 03 00 00 */	lwz r0, 0(r3)
/* 80149CEC 00146C2C  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80149CF0 00146C30  40 82 00 24 */	bne .L_80149D14
/* 80149CF4 00146C34  80 83 00 0C */	lwz r4, 0xc(r3)
/* 80149CF8 00146C38  48 26 EB 31 */	bl "createKourin___Q23efx9TPkEffectFP10Vector3<f>"
/* 80149CFC 00146C3C  48 00 00 18 */	b .L_80149D14
.L_80149D00:
/* 80149D00 00146C40  80 63 02 58 */	lwz r3, 0x258(r3)
/* 80149D04 00146C44  80 03 00 00 */	lwz r0, 0(r3)
/* 80149D08 00146C48  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 80149D0C 00146C4C  90 03 00 00 */	stw r0, 0(r3)
/* 80149D10 00146C50  48 26 EB 7D */	bl killKourin___Q23efx9TPkEffectFv
.L_80149D14:
/* 80149D14 00146C54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80149D18 00146C58  7C 08 03 A6 */	mtlr r0
/* 80149D1C 00146C5C  38 21 00 10 */	addi r1, r1, 0x10
/* 80149D20 00146C60  4E 80 00 20 */	blr 
.endfn setFreeLightEffect__Q24Game4PikiFb

.fn setDopeEffect__Q24Game4PikiFb, global
/* 80149D24 00146C64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80149D28 00146C68  7C 08 02 A6 */	mflr r0
/* 80149D2C 00146C6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80149D30 00146C70  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80149D34 00146C74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80149D38 00146C78  41 82 00 2C */	beq .L_80149D64
/* 80149D3C 00146C7C  83 E3 02 58 */	lwz r31, 0x258(r3)
/* 80149D40 00146C80  80 1F 00 00 */	lwz r0, 0(r31)
/* 80149D44 00146C84  7F E3 FB 78 */	mr r3, r31
/* 80149D48 00146C88  60 00 00 02 */	ori r0, r0, 2
/* 80149D4C 00146C8C  90 1F 00 00 */	stw r0, 0(r31)
/* 80149D50 00146C90  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 80149D54 00146C94  48 26 EB 5D */	bl "createDoping___Q23efx9TPkEffectFP10Vector3<f>"
/* 80149D58 00146C98  7F E3 FB 78 */	mr r3, r31
/* 80149D5C 00146C9C  48 26 EB 31 */	bl killKourin___Q23efx9TPkEffectFv
/* 80149D60 00146CA0  48 00 00 34 */	b .L_80149D94
.L_80149D64:
/* 80149D64 00146CA4  83 E3 02 58 */	lwz r31, 0x258(r3)
/* 80149D68 00146CA8  80 1F 00 00 */	lwz r0, 0(r31)
/* 80149D6C 00146CAC  7F E3 FB 78 */	mr r3, r31
/* 80149D70 00146CB0  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80149D74 00146CB4  90 1F 00 00 */	stw r0, 0(r31)
/* 80149D78 00146CB8  48 26 EB 99 */	bl killDoping___Q23efx9TPkEffectFv
/* 80149D7C 00146CBC  80 1F 00 00 */	lwz r0, 0(r31)
/* 80149D80 00146CC0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80149D84 00146CC4  41 82 00 10 */	beq .L_80149D94
/* 80149D88 00146CC8  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 80149D8C 00146CCC  7F E3 FB 78 */	mr r3, r31
/* 80149D90 00146CD0  48 26 EA 99 */	bl "createKourin___Q23efx9TPkEffectFP10Vector3<f>"
.L_80149D94:
/* 80149D94 00146CD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80149D98 00146CD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80149D9C 00146CDC  7C 08 03 A6 */	mtlr r0
/* 80149DA0 00146CE0  38 21 00 10 */	addi r1, r1, 0x10
/* 80149DA4 00146CE4  4E 80 00 20 */	blr 
.endfn setDopeEffect__Q24Game4PikiFb

.fn clearDope__Q24Game4PikiFv, global
/* 80149DA8 00146CE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80149DAC 00146CEC  7C 08 02 A6 */	mflr r0
/* 80149DB0 00146CF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80149DB4 00146CF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80149DB8 00146CF8  A8 03 02 84 */	lha r0, 0x284(r3)
/* 80149DBC 00146CFC  2C 00 FF FF */	cmpwi r0, -1
/* 80149DC0 00146D00  41 82 00 24 */	beq .L_80149DE4
/* 80149DC4 00146D04  38 00 FF FF */	li r0, -1
/* 80149DC8 00146D08  B0 03 02 84 */	sth r0, 0x284(r3)
/* 80149DCC 00146D0C  80 AD 92 F4 */	lwz r5, pikiMgr__4Game@sda21(r13)
/* 80149DD0 00146D10  80 85 00 30 */	lwz r4, 0x30(r5)
/* 80149DD4 00146D14  2C 04 00 00 */	cmpwi r4, 0
/* 80149DD8 00146D18  40 81 00 0C */	ble .L_80149DE4
/* 80149DDC 00146D1C  38 04 FF FF */	addi r0, r4, -1
/* 80149DE0 00146D20  90 05 00 30 */	stw r0, 0x30(r5)
.L_80149DE4:
/* 80149DE4 00146D24  C0 02 A0 BC */	lfs f0, lbl_8051841C@sda21(r2)
/* 80149DE8 00146D28  D0 03 02 88 */	stfs f0, 0x288(r3)
/* 80149DEC 00146D2C  83 E3 02 58 */	lwz r31, 0x258(r3)
/* 80149DF0 00146D30  80 1F 00 00 */	lwz r0, 0(r31)
/* 80149DF4 00146D34  7F E3 FB 78 */	mr r3, r31
/* 80149DF8 00146D38  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80149DFC 00146D3C  90 1F 00 00 */	stw r0, 0(r31)
/* 80149E00 00146D40  48 26 EB 11 */	bl killDoping___Q23efx9TPkEffectFv
/* 80149E04 00146D44  80 1F 00 00 */	lwz r0, 0(r31)
/* 80149E08 00146D48  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80149E0C 00146D4C  41 82 00 10 */	beq .L_80149E1C
/* 80149E10 00146D50  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 80149E14 00146D54  7F E3 FB 78 */	mr r3, r31
/* 80149E18 00146D58  48 26 EA 11 */	bl "createKourin___Q23efx9TPkEffectFP10Vector3<f>"
.L_80149E1C:
/* 80149E1C 00146D5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80149E20 00146D60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80149E24 00146D64  7C 08 03 A6 */	mtlr r0
/* 80149E28 00146D68  38 21 00 10 */	addi r1, r1, 0x10
/* 80149E2C 00146D6C  4E 80 00 20 */	blr 
.endfn clearDope__Q24Game4PikiFv

.fn extendDopeTime__Q24Game4PikiFv, global
/* 80149E30 00146D70  80 8D 92 F4 */	lwz r4, pikiMgr__4Game@sda21(r13)
/* 80149E34 00146D74  80 84 00 6C */	lwz r4, 0x6c(r4)
/* 80149E38 00146D78  C0 04 11 50 */	lfs f0, 0x1150(r4)
/* 80149E3C 00146D7C  D0 03 02 88 */	stfs f0, 0x288(r3)
/* 80149E40 00146D80  4E 80 00 20 */	blr 
.endfn extendDopeTime__Q24Game4PikiFv

.fn startDope__Q24Game4PikiFi, global
/* 80149E44 00146D84  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80149E48 00146D88  7C 08 02 A6 */	mflr r0
/* 80149E4C 00146D8C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80149E50 00146D90  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80149E54 00146D94  7C 7F 1B 78 */	mr r31, r3
/* 80149E58 00146D98  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80149E5C 00146D9C  A8 03 02 84 */	lha r0, 0x284(r3)
/* 80149E60 00146DA0  2C 00 FF FF */	cmpwi r0, -1
/* 80149E64 00146DA4  40 82 01 60 */	bne .L_80149FC4
/* 80149E68 00146DA8  80 AD 92 F4 */	lwz r5, pikiMgr__4Game@sda21(r13)
/* 80149E6C 00146DAC  80 65 00 30 */	lwz r3, 0x30(r5)
/* 80149E70 00146DB0  38 03 00 01 */	addi r0, r3, 1
/* 80149E74 00146DB4  90 05 00 30 */	stw r0, 0x30(r5)
/* 80149E78 00146DB8  B0 9F 02 84 */	sth r4, 0x284(r31)
/* 80149E7C 00146DBC  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80149E80 00146DC0  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80149E84 00146DC4  C0 03 11 50 */	lfs f0, 0x1150(r3)
/* 80149E88 00146DC8  D0 1F 02 88 */	stfs f0, 0x288(r31)
/* 80149E8C 00146DCC  83 DF 02 58 */	lwz r30, 0x258(r31)
/* 80149E90 00146DD0  80 1E 00 00 */	lwz r0, 0(r30)
/* 80149E94 00146DD4  7F C3 F3 78 */	mr r3, r30
/* 80149E98 00146DD8  60 00 00 02 */	ori r0, r0, 2
/* 80149E9C 00146DDC  90 1E 00 00 */	stw r0, 0(r30)
/* 80149EA0 00146DE0  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 80149EA4 00146DE4  48 26 EA 0D */	bl "createDoping___Q23efx9TPkEffectFP10Vector3<f>"
/* 80149EA8 00146DE8  7F C3 F3 78 */	mr r3, r30
/* 80149EAC 00146DEC  48 26 E9 E1 */	bl killKourin___Q23efx9TPkEffectFv
/* 80149EB0 00146DF0  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80149EB4 00146DF4  38 80 28 51 */	li r4, 0x2851
/* 80149EB8 00146DF8  38 A0 00 00 */	li r5, 0
/* 80149EBC 00146DFC  38 C0 00 5A */	li r6, 0x5a
/* 80149EC0 00146E00  38 E0 00 00 */	li r7, 0
/* 80149EC4 00146E04  48 31 89 25 */	bl startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
/* 80149EC8 00146E08  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80149ECC 00146E0C  38 80 28 55 */	li r4, 0x2855
/* 80149ED0 00146E10  38 A0 00 00 */	li r5, 0
/* 80149ED4 00146E14  38 C0 00 5A */	li r6, 0x5a
/* 80149ED8 00146E18  38 E0 00 00 */	li r7, 0
/* 80149EDC 00146E1C  48 31 89 0D */	bl startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
/* 80149EE0 00146E20  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80149EE4 00146E24  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80149EE8 00146E28  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80149EEC 00146E2C  41 82 00 D0 */	beq .L_80149FBC
/* 80149EF0 00146E30  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80149EF4 00146E34  38 80 00 0A */	li r4, 0xa
/* 80149EF8 00146E38  48 09 D4 E9 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80149EFC 00146E3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80149F00 00146E40  40 82 00 BC */	bne .L_80149FBC
/* 80149F04 00146E44  80 0D 9B 54 */	lwz r0, moviePlayer__4Game@sda21(r13)
/* 80149F08 00146E48  28 00 00 00 */	cmplwi r0, 0
/* 80149F0C 00146E4C  41 82 00 A4 */	beq .L_80149FB0
/* 80149F10 00146E50  C0 02 A0 BC */	lfs f0, lbl_8051841C@sda21(r2)
/* 80149F14 00146E54  3C 60 80 48 */	lis r3, lbl_8047C918@ha
/* 80149F18 00146E58  38 00 00 00 */	li r0, 0
/* 80149F1C 00146E5C  7F E4 FB 78 */	mr r4, r31
/* 80149F20 00146E60  38 A3 C9 18 */	addi r5, r3, lbl_8047C918@l
/* 80149F24 00146E64  90 01 00 18 */	stw r0, 0x18(r1)
/* 80149F28 00146E68  38 61 00 08 */	addi r3, r1, 8
/* 80149F2C 00146E6C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80149F30 00146E70  90 01 00 20 */	stw r0, 0x20(r1)
/* 80149F34 00146E74  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80149F38 00146E78  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80149F3C 00146E7C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80149F40 00146E80  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80149F44 00146E84  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80149F48 00146E88  90 01 00 24 */	stw r0, 0x24(r1)
/* 80149F4C 00146E8C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80149F50 00146E90  90 01 00 40 */	stw r0, 0x40(r1)
/* 80149F54 00146E94  90 01 00 28 */	stw r0, 0x28(r1)
/* 80149F58 00146E98  90 01 00 44 */	stw r0, 0x44(r1)
/* 80149F5C 00146E9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80149F60 00146EA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80149F64 00146EA4  7D 89 03 A6 */	mtctr r12
/* 80149F68 00146EA8  4E 80 04 21 */	bctrl 
/* 80149F6C 00146EAC  C0 41 00 08 */	lfs f2, 8(r1)
/* 80149F70 00146EB0  7F E3 FB 78 */	mr r3, r31
/* 80149F74 00146EB4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80149F78 00146EB8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80149F7C 00146EBC  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80149F80 00146EC0  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80149F84 00146EC4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80149F88 00146EC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80149F8C 00146ECC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80149F90 00146ED0  7D 89 03 A6 */	mtctr r12
/* 80149F94 00146ED4  4E 80 04 21 */	bctrl 
/* 80149F98 00146ED8  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80149F9C 00146EDC  38 81 00 14 */	addi r4, r1, 0x14
/* 80149FA0 00146EE0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80149FA4 00146EE4  93 E3 01 94 */	stw r31, 0x194(r3)
/* 80149FA8 00146EE8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80149FAC 00146EEC  48 2E 2A 25 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
.L_80149FB0:
/* 80149FB0 00146EF0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80149FB4 00146EF4  38 80 00 0A */	li r4, 0xa
/* 80149FB8 00146EF8  48 09 D3 ED */	bl setDemoFlag__Q24Game8PlayDataFi
.L_80149FBC:
/* 80149FBC 00146EFC  38 60 00 01 */	li r3, 1
/* 80149FC0 00146F00  48 00 00 08 */	b .L_80149FC8
.L_80149FC4:
/* 80149FC4 00146F04  38 60 00 00 */	li r3, 0
.L_80149FC8:
/* 80149FC8 00146F08  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80149FCC 00146F0C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80149FD0 00146F10  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80149FD4 00146F14  7C 08 03 A6 */	mtlr r0
/* 80149FD8 00146F18  38 21 00 50 */	addi r1, r1, 0x50
/* 80149FDC 00146F1C  4E 80 00 20 */	blr 
.endfn startDope__Q24Game4PikiFi

.fn doped__Q24Game4PikiFv, global
/* 80149FE0 00146F20  A8 83 02 84 */	lha r4, 0x284(r3)
/* 80149FE4 00146F24  20 64 FF FF */	subfic r3, r4, -1
/* 80149FE8 00146F28  38 04 00 01 */	addi r0, r4, 1
/* 80149FEC 00146F2C  7C 60 03 78 */	or r0, r3, r0
/* 80149FF0 00146F30  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80149FF4 00146F34  4E 80 00 20 */	blr 
.endfn doped__Q24Game4PikiFv

.fn initColor__Q24Game4PikiFv, global
/* 80149FF8 00146F38  C0 02 A0 E0 */	lfs f0, lbl_80518440@sda21(r2)
/* 80149FFC 00146F3C  3C 80 80 51 */	lis r4, pikiColors__Q24Game4Piki@ha
/* 8014A000 00146F40  38 04 22 8C */	addi r0, r4, pikiColors__Q24Game4Piki@l
/* 8014A004 00146F44  D0 03 02 B4 */	stfs f0, 0x2b4(r3)
/* 8014A008 00146F48  88 83 02 B8 */	lbz r4, 0x2b8(r3)
/* 8014A00C 00146F4C  54 84 10 3A */	slwi r4, r4, 2
/* 8014A010 00146F50  7C 80 22 14 */	add r4, r0, r4
/* 8014A014 00146F54  88 04 00 00 */	lbz r0, 0(r4)
/* 8014A018 00146F58  98 03 02 A7 */	stb r0, 0x2a7(r3)
/* 8014A01C 00146F5C  88 04 00 01 */	lbz r0, 1(r4)
/* 8014A020 00146F60  98 03 02 A8 */	stb r0, 0x2a8(r3)
/* 8014A024 00146F64  88 04 00 02 */	lbz r0, 2(r4)
/* 8014A028 00146F68  98 03 02 A9 */	stb r0, 0x2a9(r3)
/* 8014A02C 00146F6C  88 04 00 03 */	lbz r0, 3(r4)
/* 8014A030 00146F70  98 03 02 AA */	stb r0, 0x2aa(r3)
/* 8014A034 00146F74  4E 80 00 20 */	blr 
.endfn initColor__Q24Game4PikiFv

.fn setPastel__Q24Game4PikiFb, global
/* 8014A038 00146F78  C0 02 A0 BC */	lfs f0, lbl_8051841C@sda21(r2)
/* 8014A03C 00146F7C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8014A040 00146F80  3C 80 80 51 */	lis r4, pikiColors__Q24Game4Piki@ha
/* 8014A044 00146F84  D0 03 02 B4 */	stfs f0, 0x2b4(r3)
/* 8014A048 00146F88  38 04 22 8C */	addi r0, r4, pikiColors__Q24Game4Piki@l
/* 8014A04C 00146F8C  88 83 02 B8 */	lbz r4, 0x2b8(r3)
/* 8014A050 00146F90  54 84 10 3A */	slwi r4, r4, 2
/* 8014A054 00146F94  7C A0 22 14 */	add r5, r0, r4
/* 8014A058 00146F98  40 82 00 48 */	bne .L_8014A0A0
/* 8014A05C 00146F9C  88 05 00 00 */	lbz r0, 0(r5)
/* 8014A060 00146FA0  98 03 02 AF */	stb r0, 0x2af(r3)
/* 8014A064 00146FA4  88 05 00 01 */	lbz r0, 1(r5)
/* 8014A068 00146FA8  98 03 02 B0 */	stb r0, 0x2b0(r3)
/* 8014A06C 00146FAC  88 05 00 02 */	lbz r0, 2(r5)
/* 8014A070 00146FB0  98 03 02 B1 */	stb r0, 0x2b1(r3)
/* 8014A074 00146FB4  88 05 00 03 */	lbz r0, 3(r5)
/* 8014A078 00146FB8  98 03 02 B2 */	stb r0, 0x2b2(r3)
/* 8014A07C 00146FBC  88 03 02 A7 */	lbz r0, 0x2a7(r3)
/* 8014A080 00146FC0  98 03 02 AB */	stb r0, 0x2ab(r3)
/* 8014A084 00146FC4  88 03 02 A8 */	lbz r0, 0x2a8(r3)
/* 8014A088 00146FC8  98 03 02 AC */	stb r0, 0x2ac(r3)
/* 8014A08C 00146FCC  88 03 02 A9 */	lbz r0, 0x2a9(r3)
/* 8014A090 00146FD0  98 03 02 AD */	stb r0, 0x2ad(r3)
/* 8014A094 00146FD4  88 03 02 AA */	lbz r0, 0x2aa(r3)
/* 8014A098 00146FD8  98 03 02 AE */	stb r0, 0x2ae(r3)
/* 8014A09C 00146FDC  4E 80 00 20 */	blr 
.L_8014A0A0:
/* 8014A0A0 00146FE0  88 85 00 00 */	lbz r4, 0(r5)
/* 8014A0A4 00146FE4  38 00 00 FF */	li r0, 0xff
/* 8014A0A8 00146FE8  98 83 02 AF */	stb r4, 0x2af(r3)
/* 8014A0AC 00146FEC  88 85 00 01 */	lbz r4, 1(r5)
/* 8014A0B0 00146FF0  98 83 02 B0 */	stb r4, 0x2b0(r3)
/* 8014A0B4 00146FF4  88 85 00 02 */	lbz r4, 2(r5)
/* 8014A0B8 00146FF8  98 83 02 B1 */	stb r4, 0x2b1(r3)
/* 8014A0BC 00146FFC  88 85 00 03 */	lbz r4, 3(r5)
/* 8014A0C0 00147000  98 83 02 B2 */	stb r4, 0x2b2(r3)
/* 8014A0C4 00147004  88 85 00 00 */	lbz r4, 0(r5)
/* 8014A0C8 00147008  38 84 00 A0 */	addi r4, r4, 0xa0
/* 8014A0CC 0014700C  2C 04 00 FF */	cmpwi r4, 0xff
/* 8014A0D0 00147010  40 80 00 08 */	bge .L_8014A0D8
/* 8014A0D4 00147014  7C 80 23 78 */	mr r0, r4
.L_8014A0D8:
/* 8014A0D8 00147018  98 03 02 AF */	stb r0, 0x2af(r3)
/* 8014A0DC 0014701C  38 00 00 FF */	li r0, 0xff
/* 8014A0E0 00147020  88 85 00 01 */	lbz r4, 1(r5)
/* 8014A0E4 00147024  38 84 00 A0 */	addi r4, r4, 0xa0
/* 8014A0E8 00147028  2C 04 00 FF */	cmpwi r4, 0xff
/* 8014A0EC 0014702C  40 80 00 08 */	bge .L_8014A0F4
/* 8014A0F0 00147030  7C 80 23 78 */	mr r0, r4
.L_8014A0F4:
/* 8014A0F4 00147034  98 03 02 B0 */	stb r0, 0x2b0(r3)
/* 8014A0F8 00147038  38 00 00 FF */	li r0, 0xff
/* 8014A0FC 0014703C  88 85 00 02 */	lbz r4, 2(r5)
/* 8014A100 00147040  38 84 00 A0 */	addi r4, r4, 0xa0
/* 8014A104 00147044  2C 04 00 FF */	cmpwi r4, 0xff
/* 8014A108 00147048  40 80 00 08 */	bge .L_8014A110
/* 8014A10C 0014704C  7C 80 23 78 */	mr r0, r4
.L_8014A110:
/* 8014A110 00147050  98 03 02 B1 */	stb r0, 0x2b1(r3)
/* 8014A114 00147054  88 03 02 A7 */	lbz r0, 0x2a7(r3)
/* 8014A118 00147058  98 03 02 AB */	stb r0, 0x2ab(r3)
/* 8014A11C 0014705C  88 03 02 A8 */	lbz r0, 0x2a8(r3)
/* 8014A120 00147060  98 03 02 AC */	stb r0, 0x2ac(r3)
/* 8014A124 00147064  88 03 02 A9 */	lbz r0, 0x2a9(r3)
/* 8014A128 00147068  98 03 02 AD */	stb r0, 0x2ad(r3)
/* 8014A12C 0014706C  88 03 02 AA */	lbz r0, 0x2aa(r3)
/* 8014A130 00147070  98 03 02 AE */	stb r0, 0x2ae(r3)
/* 8014A134 00147074  4E 80 00 20 */	blr 
.endfn setPastel__Q24Game4PikiFb

.fn getShadowParam__Q24Game4PikiFRQ24Game11ShadowParam, global
/* 8014A138 00147078  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014A13C 0014707C  7C 08 02 A6 */	mflr r0
/* 8014A140 00147080  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014A144 00147084  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014A148 00147088  7C 9F 23 78 */	mr r31, r4
/* 8014A14C 0014708C  80 83 02 90 */	lwz r4, 0x290(r3)
/* 8014A150 00147090  28 04 00 00 */	cmplwi r4, 0
/* 8014A154 00147094  41 82 00 0C */	beq .L_8014A160
/* 8014A158 00147098  80 04 00 04 */	lwz r0, 4(r4)
/* 8014A15C 0014709C  48 00 00 08 */	b .L_8014A164
.L_8014A160:
/* 8014A160 001470A0  38 00 FF FF */	li r0, -1
.L_8014A164:
/* 8014A164 001470A4  2C 00 00 0C */	cmpwi r0, 0xc
/* 8014A168 001470A8  40 82 00 28 */	bne .L_8014A190
/* 8014A16C 001470AC  80 63 01 14 */	lwz r3, 0x114(r3)
/* 8014A170 001470B0  80 63 00 00 */	lwz r3, 0(r3)
/* 8014A174 001470B4  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 8014A178 001470B8  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8014A17C 001470BC  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 8014A180 001470C0  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8014A184 001470C4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8014A188 001470C8  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8014A18C 001470CC  48 00 00 34 */	b .L_8014A1C0
.L_8014A190:
/* 8014A190 001470D0  7C 64 1B 78 */	mr r4, r3
/* 8014A194 001470D4  38 61 00 08 */	addi r3, r1, 8
/* 8014A198 001470D8  81 84 00 00 */	lwz r12, 0(r4)
/* 8014A19C 001470DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014A1A0 001470E0  7D 89 03 A6 */	mtctr r12
/* 8014A1A4 001470E4  4E 80 04 21 */	bctrl 
/* 8014A1A8 001470E8  C0 01 00 08 */	lfs f0, 8(r1)
/* 8014A1AC 001470EC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8014A1B0 001470F0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8014A1B4 001470F4  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8014A1B8 001470F8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8014A1BC 001470FC  D0 1F 00 08 */	stfs f0, 8(r31)
.L_8014A1C0:
/* 8014A1C0 00147100  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8014A1C4 00147104  C0 02 A0 EC */	lfs f0, lbl_8051844C@sda21(r2)
/* 8014A1C8 00147108  C0 62 A0 F0 */	lfs f3, lbl_80518450@sda21(r2)
/* 8014A1CC 0014710C  EC 81 00 2A */	fadds f4, f1, f0
/* 8014A1D0 00147110  C0 42 A0 F4 */	lfs f2, lbl_80518454@sda21(r2)
/* 8014A1D4 00147114  C0 22 A0 BC */	lfs f1, lbl_8051841C@sda21(r2)
/* 8014A1D8 00147118  C0 02 A0 E0 */	lfs f0, lbl_80518440@sda21(r2)
/* 8014A1DC 0014711C  D0 9F 00 04 */	stfs f4, 4(r31)
/* 8014A1E0 00147120  D0 7F 00 18 */	stfs f3, 0x18(r31)
/* 8014A1E4 00147124  D0 5F 00 1C */	stfs f2, 0x1c(r31)
/* 8014A1E8 00147128  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 8014A1EC 0014712C  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8014A1F0 00147130  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 8014A1F4 00147134  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014A1F8 00147138  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014A1FC 0014713C  7C 08 03 A6 */	mtlr r0
/* 8014A200 00147140  38 21 00 20 */	addi r1, r1, 0x20
/* 8014A204 00147144  4E 80 00 20 */	blr 
.endfn getShadowParam__Q24Game4PikiFRQ24Game11ShadowParam

.fn isMyPikmin__Q24Game4PikiFPQ24Game8Creature, global
/* 8014A208 00147148  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014A20C 0014714C  7C 08 02 A6 */	mflr r0
/* 8014A210 00147150  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014A214 00147154  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014A218 00147158  93 C1 00 08 */	stw r30, 8(r1)
/* 8014A21C 0014715C  7C 9E 23 78 */	mr r30, r4
/* 8014A220 00147160  80 63 02 94 */	lwz r3, 0x294(r3)
/* 8014A224 00147164  80 03 00 08 */	lwz r0, 8(r3)
/* 8014A228 00147168  2C 00 00 0B */	cmpwi r0, 0xb
/* 8014A22C 0014716C  40 82 00 40 */	bne .L_8014A26C
/* 8014A230 00147170  48 04 CA D1 */	bl getCurrAction__Q26PikiAI5BrainFv
/* 8014A234 00147174  7C 7F 1B 79 */	or. r31, r3, r3
/* 8014A238 00147178  40 82 00 20 */	bne .L_8014A258
/* 8014A23C 0014717C  3C 60 80 48 */	lis r3, lbl_8047C8B0@ha
/* 8014A240 00147180  3C A0 80 48 */	lis r5, lbl_8047C90C@ha
/* 8014A244 00147184  38 63 C8 B0 */	addi r3, r3, lbl_8047C8B0@l
/* 8014A248 00147188  38 80 06 B6 */	li r4, 0x6b6
/* 8014A24C 0014718C  38 A5 C9 0C */	addi r5, r5, lbl_8047C90C@l
/* 8014A250 00147190  4C C6 31 82 */	crclr 6
/* 8014A254 00147194  4B EE 03 ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_8014A258:
/* 8014A258 00147198  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 8014A25C 0014719C  7C 00 F0 50 */	subf r0, r0, r30
/* 8014A260 001471A0  7C 00 00 34 */	cntlzw r0, r0
/* 8014A264 001471A4  54 03 D9 7E */	srwi r3, r0, 5
/* 8014A268 001471A8  48 00 00 08 */	b .L_8014A270
.L_8014A26C:
/* 8014A26C 001471AC  38 60 00 00 */	li r3, 0
.L_8014A270:
/* 8014A270 001471B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014A274 001471B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014A278 001471B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8014A27C 001471BC  7C 08 03 A6 */	mtlr r0
/* 8014A280 001471C0  38 21 00 10 */	addi r1, r1, 0x10
/* 8014A284 001471C4  4E 80 00 20 */	blr 
.endfn isMyPikmin__Q24Game4PikiFPQ24Game8Creature

.fn isTekiFollowAI__Q24Game4PikiFv, global
/* 8014A288 001471C8  80 63 02 94 */	lwz r3, 0x294(r3)
/* 8014A28C 001471CC  80 03 00 08 */	lwz r0, 8(r3)
/* 8014A290 001471D0  20 00 00 0B */	subfic r0, r0, 0xb
/* 8014A294 001471D4  7C 00 00 34 */	cntlzw r0, r0
/* 8014A298 001471D8  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 8014A29C 001471DC  4E 80 00 20 */	blr 
.endfn isTekiFollowAI__Q24Game4PikiFv

.fn doColorChange__Q24Game4PikiFv, global
/* 8014A2A0 001471E0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014A2A4 001471E4  7C 08 02 A6 */	mflr r0
/* 8014A2A8 001471E8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014A2AC 001471EC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8014A2B0 001471F0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8014A2B4 001471F4  7C 7E 1B 78 */	mr r30, r3
/* 8014A2B8 001471F8  83 E3 02 78 */	lwz r31, 0x278(r3)
/* 8014A2BC 001471FC  80 63 02 68 */	lwz r3, 0x268(r3)
/* 8014A2C0 00147200  48 2D F5 E1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8014A2C4 00147204  88 1E 00 D8 */	lbz r0, 0xd8(r30)
/* 8014A2C8 00147208  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8014A2CC 0014720C  40 82 00 50 */	bne .L_8014A31C
/* 8014A2D0 00147210  7F C4 F3 78 */	mr r4, r30
/* 8014A2D4 00147214  38 61 00 14 */	addi r3, r1, 0x14
/* 8014A2D8 00147218  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014A2DC 0014721C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014A2E0 00147220  7D 89 03 A6 */	mtctr r12
/* 8014A2E4 00147224  4E 80 04 21 */	bctrl 
/* 8014A2E8 00147228  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8014A2EC 0014722C  D0 1E 02 5C */	stfs f0, 0x25c(r30)
/* 8014A2F0 00147230  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8014A2F4 00147234  D0 1E 02 60 */	stfs f0, 0x260(r30)
/* 8014A2F8 00147238  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8014A2FC 0014723C  D0 1E 02 64 */	stfs f0, 0x264(r30)
/* 8014A300 00147240  C0 1E 02 5C */	lfs f0, 0x25c(r30)
/* 8014A304 00147244  D0 1E 02 6C */	stfs f0, 0x26c(r30)
/* 8014A308 00147248  C0 1E 02 60 */	lfs f0, 0x260(r30)
/* 8014A30C 0014724C  D0 1E 02 70 */	stfs f0, 0x270(r30)
/* 8014A310 00147250  C0 1E 02 64 */	lfs f0, 0x264(r30)
/* 8014A314 00147254  D0 1E 02 74 */	stfs f0, 0x274(r30)
/* 8014A318 00147258  48 00 00 5C */	b .L_8014A374
.L_8014A31C:
/* 8014A31C 0014725C  C0 22 A0 F8 */	lfs f1, lbl_80518458@sda21(r2)
/* 8014A320 00147260  38 9E 02 5C */	addi r4, r30, 0x25c
/* 8014A324 00147264  C0 02 A0 BC */	lfs f0, lbl_8051841C@sda21(r2)
/* 8014A328 00147268  38 A1 00 08 */	addi r5, r1, 8
/* 8014A32C 0014726C  D0 3E 02 5C */	stfs f1, 0x25c(r30)
/* 8014A330 00147270  D0 1E 02 60 */	stfs f0, 0x260(r30)
/* 8014A334 00147274  D0 1E 02 64 */	stfs f0, 0x264(r30)
/* 8014A338 00147278  4B FA 08 A1 */	bl PSMTXMultVec
/* 8014A33C 0014727C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8014A340 00147280  7F E3 FB 78 */	mr r3, r31
/* 8014A344 00147284  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8014A348 00147288  C0 01 00 08 */	lfs f0, 8(r1)
/* 8014A34C 0014728C  D0 1E 02 5C */	stfs f0, 0x25c(r30)
/* 8014A350 00147290  D0 3E 02 60 */	stfs f1, 0x260(r30)
/* 8014A354 00147294  D0 5E 02 64 */	stfs f2, 0x264(r30)
/* 8014A358 00147298  48 2D F5 49 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8014A35C 0014729C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8014A360 001472A0  D0 1E 02 6C */	stfs f0, 0x26c(r30)
/* 8014A364 001472A4  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 8014A368 001472A8  D0 1E 02 70 */	stfs f0, 0x270(r30)
/* 8014A36C 001472AC  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 8014A370 001472B0  D0 1E 02 74 */	stfs f0, 0x274(r30)
.L_8014A374:
/* 8014A374 001472B4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014A378 001472B8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014A37C 001472BC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8014A380 001472C0  7C 08 03 A6 */	mtlr r0
/* 8014A384 001472C4  38 21 00 30 */	addi r1, r1, 0x30
/* 8014A388 001472C8  4E 80 00 20 */	blr 
.endfn doColorChange__Q24Game4PikiFv

.fn doDebugDL__Q24Game4PikiFv, global
/* 8014A38C 001472CC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8014A390 001472D0  38 A0 00 00 */	li r5, 0
/* 8014A394 001472D4  80 63 00 08 */	lwz r3, 8(r3)
/* 8014A398 001472D8  80 83 00 04 */	lwz r4, 4(r3)
/* 8014A39C 001472DC  48 00 00 08 */	b .L_8014A3A4
.L_8014A3A0:
/* 8014A3A0 001472E0  38 A5 00 01 */	addi r5, r5, 1
.L_8014A3A4:
/* 8014A3A4 001472E4  A0 04 00 7C */	lhz r0, 0x7c(r4)
/* 8014A3A8 001472E8  54 A3 04 3E */	clrlwi r3, r5, 0x10
/* 8014A3AC 001472EC  7C 03 00 40 */	cmplw r3, r0
/* 8014A3B0 001472F0  41 80 FF F0 */	blt .L_8014A3A0
/* 8014A3B4 001472F4  4E 80 00 20 */	blr 
.endfn doDebugDL__Q24Game4PikiFv

.fn startMotion__Q24Game4PikiFiiPQ28SysShape14MotionListenerPQ28SysShape14MotionListener, global
/* 8014A3B8 001472F8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014A3BC 001472FC  7C 08 02 A6 */	mflr r0
/* 8014A3C0 00147300  90 01 00 34 */	stw r0, 0x34(r1)
/* 8014A3C4 00147304  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8014A3C8 00147308  7C 9C 23 78 */	mr r28, r4
/* 8014A3CC 0014730C  2C 1C 00 33 */	cmpwi r28, 0x33
/* 8014A3D0 00147310  7C 7B 1B 78 */	mr r27, r3
/* 8014A3D4 00147314  7C BD 2B 78 */	mr r29, r5
/* 8014A3D8 00147318  7C DE 33 78 */	mr r30, r6
/* 8014A3DC 0014731C  7C FF 3B 78 */	mr r31, r7
/* 8014A3E0 00147320  41 82 00 70 */	beq .L_8014A450
/* 8014A3E4 00147324  40 80 00 10 */	bge .L_8014A3F4
/* 8014A3E8 00147328  2C 1C 00 32 */	cmpwi r28, 0x32
/* 8014A3EC 0014732C  40 80 00 14 */	bge .L_8014A400
/* 8014A3F0 00147330  48 00 00 94 */	b .L_8014A484
.L_8014A3F4:
/* 8014A3F4 00147334  2C 1C 00 35 */	cmpwi r28, 0x35
/* 8014A3F8 00147338  40 80 00 8C */	bge .L_8014A484
/* 8014A3FC 0014733C  48 00 00 70 */	b .L_8014A46C
.L_8014A400:
/* 8014A400 00147340  4B F7 F1 A1 */	bl rand
/* 8014A404 00147344  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8014A408 00147348  3C 00 43 30 */	lis r0, 0x4330
/* 8014A40C 0014734C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8014A410 00147350  C8 62 A1 08 */	lfd f3, lbl_80518468@sda21(r2)
/* 8014A414 00147354  90 01 00 08 */	stw r0, 8(r1)
/* 8014A418 00147358  C0 22 A0 FC */	lfs f1, lbl_8051845C@sda21(r2)
/* 8014A41C 0014735C  C8 41 00 08 */	lfd f2, 8(r1)
/* 8014A420 00147360  C0 02 A1 00 */	lfs f0, lbl_80518460@sda21(r2)
/* 8014A424 00147364  EC 42 18 28 */	fsubs f2, f2, f3
/* 8014A428 00147368  EC 22 08 24 */	fdivs f1, f2, f1
/* 8014A42C 0014736C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014A430 00147370  40 80 00 54 */	bge .L_8014A484
/* 8014A434 00147374  80 7B 02 50 */	lwz r3, 0x250(r27)
/* 8014A438 00147378  38 80 28 39 */	li r4, 0x2839
/* 8014A43C 0014737C  38 A0 00 00 */	li r5, 0
/* 8014A440 00147380  38 C0 00 5A */	li r6, 0x5a
/* 8014A444 00147384  38 E0 00 00 */	li r7, 0
/* 8014A448 00147388  48 31 83 A1 */	bl startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
/* 8014A44C 0014738C  48 00 00 38 */	b .L_8014A484
.L_8014A450:
/* 8014A450 00147390  80 7B 02 50 */	lwz r3, 0x250(r27)
/* 8014A454 00147394  38 80 28 3A */	li r4, 0x283a
/* 8014A458 00147398  38 A0 00 00 */	li r5, 0
/* 8014A45C 0014739C  38 C0 00 5A */	li r6, 0x5a
/* 8014A460 001473A0  38 E0 00 00 */	li r7, 0
/* 8014A464 001473A4  48 31 83 85 */	bl startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
/* 8014A468 001473A8  48 00 00 1C */	b .L_8014A484
.L_8014A46C:
/* 8014A46C 001473AC  80 7B 02 50 */	lwz r3, 0x250(r27)
/* 8014A470 001473B0  38 80 28 3B */	li r4, 0x283b
/* 8014A474 001473B4  38 A0 00 00 */	li r5, 0
/* 8014A478 001473B8  38 C0 00 5A */	li r6, 0x5a
/* 8014A47C 001473BC  38 E0 00 00 */	li r7, 0
/* 8014A480 001473C0  48 31 83 69 */	bl startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
.L_8014A484:
/* 8014A484 001473C4  7F 63 DB 78 */	mr r3, r27
/* 8014A488 001473C8  7F 84 E3 78 */	mr r4, r28
/* 8014A48C 001473CC  7F A5 EB 78 */	mr r5, r29
/* 8014A490 001473D0  7F C6 F3 78 */	mr r6, r30
/* 8014A494 001473D4  7F E7 FB 78 */	mr r7, r31
/* 8014A498 001473D8  4B FF 2B 29 */	bl startMotion__Q24Game8FakePikiFiiPQ28SysShape14MotionListenerPQ28SysShape14MotionListener
/* 8014A49C 001473DC  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8014A4A0 001473E0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8014A4A4 001473E4  7C 08 03 A6 */	mtlr r0
/* 8014A4A8 001473E8  38 21 00 30 */	addi r1, r1, 0x30
/* 8014A4AC 001473EC  4E 80 00 20 */	blr 
.endfn startMotion__Q24Game4PikiFiiPQ28SysShape14MotionListenerPQ28SysShape14MotionListener

.fn doAnimation__Q24Game4PikiFv, global
/* 8014A4B0 001473F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014A4B4 001473F4  7C 08 02 A6 */	mflr r0
/* 8014A4B8 001473F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014A4BC 001473FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8014A4C0 00147400  7C 7F 1B 78 */	mr r31, r3
/* 8014A4C4 00147404  4B FF 43 C1 */	bl doAnimation__Q24Game8FakePikiFv
/* 8014A4C8 00147408  A8 1F 02 84 */	lha r0, 0x284(r31)
/* 8014A4CC 0014740C  2C 00 FF FF */	cmpwi r0, -1
/* 8014A4D0 00147410  41 82 00 B0 */	beq .L_8014A580
/* 8014A4D4 00147414  C0 5F 02 88 */	lfs f2, 0x288(r31)
/* 8014A4D8 00147418  C0 22 A0 BC */	lfs f1, lbl_8051841C@sda21(r2)
/* 8014A4DC 0014741C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8014A4E0 00147420  40 81 00 A0 */	ble .L_8014A580
/* 8014A4E4 00147424  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014A4E8 00147428  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8014A4EC 0014742C  EC 02 00 28 */	fsubs f0, f2, f0
/* 8014A4F0 00147430  D0 1F 02 88 */	stfs f0, 0x288(r31)
/* 8014A4F4 00147434  C0 1F 02 88 */	lfs f0, 0x288(r31)
/* 8014A4F8 00147438  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8014A4FC 0014743C  4C 40 13 82 */	cror 2, 0, 2
/* 8014A500 00147440  40 82 00 80 */	bne .L_8014A580
/* 8014A504 00147444  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 8014A508 00147448  38 80 28 53 */	li r4, 0x2853
/* 8014A50C 0014744C  38 A0 00 00 */	li r5, 0
/* 8014A510 00147450  38 C0 00 5A */	li r6, 0x5a
/* 8014A514 00147454  38 E0 00 00 */	li r7, 0
/* 8014A518 00147458  48 31 82 D1 */	bl startFreePikiSetSound__Q23PSM4PikiFUlQ36PSGame5SeMgr7SetSeIdUlUl
/* 8014A51C 0014745C  A8 1F 02 84 */	lha r0, 0x284(r31)
/* 8014A520 00147460  2C 00 FF FF */	cmpwi r0, -1
/* 8014A524 00147464  41 82 00 24 */	beq .L_8014A548
/* 8014A528 00147468  38 00 FF FF */	li r0, -1
/* 8014A52C 0014746C  B0 1F 02 84 */	sth r0, 0x284(r31)
/* 8014A530 00147470  80 8D 92 F4 */	lwz r4, pikiMgr__4Game@sda21(r13)
/* 8014A534 00147474  80 64 00 30 */	lwz r3, 0x30(r4)
/* 8014A538 00147478  2C 03 00 00 */	cmpwi r3, 0
/* 8014A53C 0014747C  40 81 00 0C */	ble .L_8014A548
/* 8014A540 00147480  38 03 FF FF */	addi r0, r3, -1
/* 8014A544 00147484  90 04 00 30 */	stw r0, 0x30(r4)
.L_8014A548:
/* 8014A548 00147488  C0 02 A0 BC */	lfs f0, lbl_8051841C@sda21(r2)
/* 8014A54C 0014748C  D0 1F 02 88 */	stfs f0, 0x288(r31)
/* 8014A550 00147490  83 FF 02 58 */	lwz r31, 0x258(r31)
/* 8014A554 00147494  80 1F 00 00 */	lwz r0, 0(r31)
/* 8014A558 00147498  7F E3 FB 78 */	mr r3, r31
/* 8014A55C 0014749C  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 8014A560 001474A0  90 1F 00 00 */	stw r0, 0(r31)
/* 8014A564 001474A4  48 26 E3 AD */	bl killDoping___Q23efx9TPkEffectFv
/* 8014A568 001474A8  80 1F 00 00 */	lwz r0, 0(r31)
/* 8014A56C 001474AC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8014A570 001474B0  41 82 00 10 */	beq .L_8014A580
/* 8014A574 001474B4  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 8014A578 001474B8  7F E3 FB 78 */	mr r3, r31
/* 8014A57C 001474BC  48 26 E2 AD */	bl "createKourin___Q23efx9TPkEffectFP10Vector3<f>"
.L_8014A580:
/* 8014A580 001474C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014A584 001474C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8014A588 001474C8  7C 08 03 A6 */	mtlr r0
/* 8014A58C 001474CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8014A590 001474D0  4E 80 00 20 */	blr 
.endfn doAnimation__Q24Game4PikiFv

.fn doDirectDraw__Q24Game4PikiFR8Graphics, global
/* 8014A594 001474D4  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q24Game4PikiFR8Graphics

.fn getBaseScale__Q24Game4PikiFv, global
/* 8014A598 001474D8  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 8014A59C 001474DC  C0 22 A0 E0 */	lfs f1, lbl_80518440@sda21(r2)
/* 8014A5A0 001474E0  28 00 00 03 */	cmplwi r0, 3
/* 8014A5A4 001474E4  40 82 00 0C */	bne .L_8014A5B0
/* 8014A5A8 001474E8  C0 22 A1 10 */	lfs f1, lbl_80518470@sda21(r2)
/* 8014A5AC 001474EC  4E 80 00 20 */	blr 
.L_8014A5B0:
/* 8014A5B0 001474F0  28 00 00 04 */	cmplwi r0, 4
/* 8014A5B4 001474F4  4C 82 00 20 */	bnelr 
/* 8014A5B8 001474F8  C0 22 A1 14 */	lfs f1, lbl_80518474@sda21(r2)
/* 8014A5BC 001474FC  4E 80 00 20 */	blr 
.endfn getBaseScale__Q24Game4PikiFv

.fn changeShape__Q24Game4PikiFi, global
/* 8014A5C0 00147500  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014A5C4 00147504  7C 08 02 A6 */	mflr r0
/* 8014A5C8 00147508  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014A5CC 0014750C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014A5D0 00147510  7C 9F 23 78 */	mr r31, r4
/* 8014A5D4 00147514  2C 1F 00 05 */	cmpwi r31, 5
/* 8014A5D8 00147518  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014A5DC 0014751C  7C 7E 1B 78 */	mr r30, r3
/* 8014A5E0 00147520  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014A5E4 00147524  8B A3 02 B8 */	lbz r29, 0x2b8(r3)
/* 8014A5E8 00147528  41 82 00 10 */	beq .L_8014A5F8
/* 8014A5EC 0014752C  C0 02 A0 B0 */	lfs f0, lbl_80518410@sda21(r2)
/* 8014A5F0 00147530  D0 1E 02 24 */	stfs f0, 0x224(r30)
/* 8014A5F4 00147534  48 00 00 0C */	b .L_8014A600
.L_8014A5F8:
/* 8014A5F8 00147538  C0 02 A1 18 */	lfs f0, lbl_80518478@sda21(r2)
/* 8014A5FC 0014753C  D0 1E 02 24 */	stfs f0, 0x224(r30)
.L_8014A600:
/* 8014A600 00147540  9B FE 02 B8 */	stb r31, 0x2b8(r30)
/* 8014A604 00147544  7F C4 F3 78 */	mr r4, r30
/* 8014A608 00147548  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8014A60C 0014754C  48 01 41 2D */	bl setupPiki__Q24Game7PikiMgrFPQ24Game4Piki
/* 8014A610 00147550  88 1E 02 B8 */	lbz r0, 0x2b8(r30)
/* 8014A614 00147554  C0 22 A0 E0 */	lfs f1, lbl_80518440@sda21(r2)
/* 8014A618 00147558  28 00 00 03 */	cmplwi r0, 3
/* 8014A61C 0014755C  40 82 00 0C */	bne .L_8014A628
/* 8014A620 00147560  C0 22 A1 10 */	lfs f1, lbl_80518470@sda21(r2)
/* 8014A624 00147564  48 00 00 10 */	b .L_8014A634
.L_8014A628:
/* 8014A628 00147568  28 00 00 04 */	cmplwi r0, 4
/* 8014A62C 0014756C  40 82 00 08 */	bne .L_8014A634
/* 8014A630 00147570  C0 22 A1 14 */	lfs f1, lbl_80518474@sda21(r2)
.L_8014A634:
/* 8014A634 00147574  D0 3E 01 68 */	stfs f1, 0x168(r30)
/* 8014A638 00147578  3C 60 80 51 */	lis r3, pikiColors__Q24Game4Piki@ha
/* 8014A63C 0014757C  C0 02 A0 E0 */	lfs f0, lbl_80518440@sda21(r2)
/* 8014A640 00147580  38 03 22 8C */	addi r0, r3, pikiColors__Q24Game4Piki@l
/* 8014A644 00147584  D0 3E 01 6C */	stfs f1, 0x16c(r30)
/* 8014A648 00147588  2C 1F 00 05 */	cmpwi r31, 5
/* 8014A64C 0014758C  D0 3E 01 70 */	stfs f1, 0x170(r30)
/* 8014A650 00147590  D0 1E 02 B4 */	stfs f0, 0x2b4(r30)
/* 8014A654 00147594  88 7E 02 B8 */	lbz r3, 0x2b8(r30)
/* 8014A658 00147598  54 63 10 3A */	slwi r3, r3, 2
/* 8014A65C 0014759C  7C 60 1A 14 */	add r3, r0, r3
/* 8014A660 001475A0  88 03 00 00 */	lbz r0, 0(r3)
/* 8014A664 001475A4  98 1E 02 A7 */	stb r0, 0x2a7(r30)
/* 8014A668 001475A8  88 03 00 01 */	lbz r0, 1(r3)
/* 8014A66C 001475AC  98 1E 02 A8 */	stb r0, 0x2a8(r30)
/* 8014A670 001475B0  88 03 00 02 */	lbz r0, 2(r3)
/* 8014A674 001475B4  98 1E 02 A9 */	stb r0, 0x2a9(r30)
/* 8014A678 001475B8  88 03 00 03 */	lbz r0, 3(r3)
/* 8014A67C 001475BC  98 1E 02 AA */	stb r0, 0x2aa(r30)
/* 8014A680 001475C0  40 82 00 20 */	bne .L_8014A6A0
/* 8014A684 001475C4  7F C3 F3 78 */	mr r3, r30
/* 8014A688 001475C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014A68C 001475CC  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 8014A690 001475D0  7D 89 03 A6 */	mtctr r12
/* 8014A694 001475D4  4E 80 04 21 */	bctrl 
/* 8014A698 001475D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014A69C 001475DC  41 82 00 24 */	beq .L_8014A6C0
.L_8014A6A0:
/* 8014A6A0 001475E0  3C 60 80 51 */	lis r3, alivePikis__Q24Game8GameStat@ha
/* 8014A6A4 001475E4  7F A4 EB 78 */	mr r4, r29
/* 8014A6A8 001475E8  38 63 25 EC */	addi r3, r3, alivePikis__Q24Game8GameStat@l
/* 8014A6AC 001475EC  48 08 6B 71 */	bl dec__Q34Game8GameStat11PikiCounterFi
/* 8014A6B0 001475F0  3C 60 80 51 */	lis r3, alivePikis__Q24Game8GameStat@ha
/* 8014A6B4 001475F4  7F C4 F3 78 */	mr r4, r30
/* 8014A6B8 001475F8  38 63 25 EC */	addi r3, r3, alivePikis__Q24Game8GameStat@l
/* 8014A6BC 001475FC  48 08 69 D9 */	bl inc__Q34Game8GameStat11PikiCounterFPQ24Game4Piki
.L_8014A6C0:
/* 8014A6C0 00147600  3C 60 80 51 */	lis r3, alivePikis__Q24Game8GameStat@ha
/* 8014A6C4 00147604  85 83 25 EC */	lwzu r12, alivePikis__Q24Game8GameStat@l(r3)
/* 8014A6C8 00147608  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014A6CC 0014760C  7D 89 03 A6 */	mtctr r12
/* 8014A6D0 00147610  4E 80 04 21 */	bctrl 
/* 8014A6D4 00147614  80 DE 02 58 */	lwz r6, 0x258(r30)
/* 8014A6D8 00147618  3C 60 80 48 */	lis r3, lbl_8047C898@ha
/* 8014A6DC 0014761C  38 83 C8 98 */	addi r4, r3, lbl_8047C898@l
/* 8014A6E0 00147620  38 BE 02 0C */	addi r5, r30, 0x20c
/* 8014A6E4 00147624  93 E6 00 08 */	stw r31, 8(r6)
/* 8014A6E8 00147628  38 1E 01 38 */	addi r0, r30, 0x138
/* 8014A6EC 0014762C  80 7E 02 58 */	lwz r3, 0x258(r30)
/* 8014A6F0 00147630  90 A3 00 10 */	stw r5, 0x10(r3)
/* 8014A6F4 00147634  80 7E 02 58 */	lwz r3, 0x258(r30)
/* 8014A6F8 00147638  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8014A6FC 0014763C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8014A700 00147640  48 2F 48 E5 */	bl getJoint__Q28SysShape5ModelFPc
/* 8014A704 00147644  90 7E 02 68 */	stw r3, 0x268(r30)
/* 8014A708 00147648  3C 60 80 48 */	lis r3, lbl_8047C8A4@ha
/* 8014A70C 0014764C  38 83 C8 A4 */	addi r4, r3, lbl_8047C8A4@l
/* 8014A710 00147650  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8014A714 00147654  48 2F 48 D1 */	bl getJoint__Q28SysShape5ModelFPc
/* 8014A718 00147658  90 7E 02 78 */	stw r3, 0x278(r30)
/* 8014A71C 0014765C  3C 60 80 48 */	lis r3, lbl_8047C898@ha
/* 8014A720 00147660  38 83 C8 98 */	addi r4, r3, lbl_8047C898@l
/* 8014A724 00147664  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8014A728 00147668  48 2F 48 BD */	bl getJoint__Q28SysShape5ModelFPc
/* 8014A72C 0014766C  48 2D F1 75 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8014A730 00147670  80 BE 02 58 */	lwz r5, 0x258(r30)
/* 8014A734 00147674  38 82 A1 1C */	addi r4, r2, lbl_8051847C@sda21
/* 8014A738 00147678  90 65 00 18 */	stw r3, 0x18(r5)
/* 8014A73C 0014767C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8014A740 00147680  48 2F 48 A5 */	bl getJoint__Q28SysShape5ModelFPc
/* 8014A744 00147684  3C 80 80 14 */	lis r4, sNeckCallback__Q24Game8FakePikiFP8J3DJointi@ha
/* 8014A748 00147688  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8014A74C 0014768C  38 04 D4 B4 */	addi r0, r4, sNeckCallback__Q24Game8FakePikiFP8J3DJointi@l
/* 8014A750 00147690  90 03 00 04 */	stw r0, 4(r3)
/* 8014A754 00147694  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014A758 00147698  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014A75C 0014769C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014A760 001476A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014A764 001476A4  7C 08 03 A6 */	mtlr r0
/* 8014A768 001476A8  38 21 00 20 */	addi r1, r1, 0x20
/* 8014A76C 001476AC  4E 80 00 20 */	blr 
.endfn changeShape__Q24Game4PikiFi

.fn changeHappa__Q24Game4PikiFi, global
/* 8014A770 001476B0  98 83 02 B9 */	stb r4, 0x2b9(r3)
/* 8014A774 001476B4  4E 80 00 20 */	blr 
.endfn changeHappa__Q24Game4PikiFi

.fn do_updateLookCreature__Q24Game4PikiFv, global
/* 8014A778 001476B8  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8014A77C 001476BC  7C 08 02 A6 */	mflr r0
/* 8014A780 001476C0  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8014A784 001476C4  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 8014A788 001476C8  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 8014A78C 001476CC  93 E1 00 AC */	stw r31, 0xac(r1)
/* 8014A790 001476D0  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 8014A794 001476D4  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 8014A798 001476D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8014A79C 001476DC  7C 7F 1B 78 */	mr r31, r3
/* 8014A7A0 001476E0  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 8014A7A4 001476E4  7D 89 03 A6 */	mtctr r12
/* 8014A7A8 001476E8  4E 80 04 21 */	bctrl 
/* 8014A7AC 001476EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014A7B0 001476F0  41 82 00 3C */	beq .L_8014A7EC
/* 8014A7B4 001476F4  7F E3 FB 78 */	mr r3, r31
/* 8014A7B8 001476F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8014A7BC 001476FC  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 8014A7C0 00147700  7D 89 03 A6 */	mtctr r12
/* 8014A7C4 00147704  4E 80 04 21 */	bctrl 
/* 8014A7C8 00147708  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014A7CC 0014770C  40 82 00 20 */	bne .L_8014A7EC
/* 8014A7D0 00147710  38 00 00 00 */	li r0, 0
/* 8014A7D4 00147714  C0 02 A0 BC */	lfs f0, lbl_8051841C@sda21(r2)
/* 8014A7D8 00147718  90 1F 01 A0 */	stw r0, 0x1a0(r31)
/* 8014A7DC 0014771C  D0 1F 01 9C */	stfs f0, 0x19c(r31)
/* 8014A7E0 00147720  D0 1F 01 98 */	stfs f0, 0x198(r31)
/* 8014A7E4 00147724  98 1F 01 A4 */	stb r0, 0x1a4(r31)
/* 8014A7E8 00147728  48 00 02 B0 */	b .L_8014AA98
.L_8014A7EC:
/* 8014A7EC 0014772C  80 6D 93 EC */	lwz r3, mInstance__Q24Game18OptimiseController@sda21(r13)
/* 8014A7F0 00147730  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8014A7F4 00147734  28 00 00 00 */	cmplwi r0, 0
/* 8014A7F8 00147738  41 82 02 A0 */	beq .L_8014AA98
/* 8014A7FC 0014773C  80 1F 01 A8 */	lwz r0, 0x1a8(r31)
/* 8014A800 00147740  28 00 00 00 */	cmplwi r0, 0
/* 8014A804 00147744  41 82 00 AC */	beq .L_8014A8B0
/* 8014A808 00147748  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8014A80C 0014774C  C0 5F 02 54 */	lfs f2, 0x254(r31)
/* 8014A810 00147750  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8014A814 00147754  C0 02 A0 BC */	lfs f0, lbl_8051841C@sda21(r2)
/* 8014A818 00147758  EC 22 08 28 */	fsubs f1, f2, f1
/* 8014A81C 0014775C  D0 3F 02 54 */	stfs f1, 0x254(r31)
/* 8014A820 00147760  C0 3F 02 54 */	lfs f1, 0x254(r31)
/* 8014A824 00147764  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014A828 00147768  40 81 00 88 */	ble .L_8014A8B0
/* 8014A82C 0014776C  80 9F 01 A8 */	lwz r4, 0x1a8(r31)
/* 8014A830 00147770  38 61 00 08 */	addi r3, r1, 8
/* 8014A834 00147774  81 84 00 00 */	lwz r12, 0(r4)
/* 8014A838 00147778  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014A83C 0014777C  7D 89 03 A6 */	mtctr r12
/* 8014A840 00147780  4E 80 04 21 */	bctrl 
/* 8014A844 00147784  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8014A848 00147788  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 8014A84C 0014778C  C0 61 00 08 */	lfs f3, 8(r1)
/* 8014A850 00147790  EC 81 00 28 */	fsubs f4, f1, f0
/* 8014A854 00147794  C0 5F 02 0C */	lfs f2, 0x20c(r31)
/* 8014A858 00147798  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8014A85C 0014779C  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 8014A860 001477A0  EC 63 10 28 */	fsubs f3, f3, f2
/* 8014A864 001477A4  EC 84 01 32 */	fmuls f4, f4, f4
/* 8014A868 001477A8  EC 41 00 28 */	fsubs f2, f1, f0
/* 8014A86C 001477AC  C0 02 A0 BC */	lfs f0, lbl_8051841C@sda21(r2)
/* 8014A870 001477B0  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 8014A874 001477B4  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8014A878 001477B8  EC 22 08 2A */	fadds f1, f2, f1
/* 8014A87C 001477BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014A880 001477C0  40 81 00 14 */	ble .L_8014A894
/* 8014A884 001477C4  40 81 00 14 */	ble .L_8014A898
/* 8014A888 001477C8  FC 00 08 34 */	frsqrte f0, f1
/* 8014A88C 001477CC  EC 20 00 72 */	fmuls f1, f0, f1
/* 8014A890 001477D0  48 00 00 08 */	b .L_8014A898
.L_8014A894:
/* 8014A894 001477D4  FC 20 00 90 */	fmr f1, f0
.L_8014A898:
/* 8014A898 001477D8  C0 02 A1 24 */	lfs f0, lbl_80518484@sda21(r2)
/* 8014A89C 001477DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014A8A0 001477E0  40 81 01 F8 */	ble .L_8014AA98
/* 8014A8A4 001477E4  7F E3 FB 78 */	mr r3, r31
/* 8014A8A8 001477E8  4B FF 2F 7D */	bl finishLook__Q24Game8FakePikiFv
/* 8014A8AC 001477EC  48 00 01 EC */	b .L_8014AA98
.L_8014A8B0:
/* 8014A8B0 001477F0  38 7F 02 98 */	addi r3, r31, 0x298
/* 8014A8B4 001477F4  48 04 BD D5 */	bl updatable__Q24Game13UpdateContextFv
/* 8014A8B8 001477F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014A8BC 001477FC  41 82 01 DC */	beq .L_8014AA98
/* 8014A8C0 00147800  80 7F 01 B8 */	lwz r3, 0x1b8(r31)
/* 8014A8C4 00147804  28 03 00 00 */	cmplwi r3, 0
/* 8014A8C8 00147808  41 82 00 0C */	beq .L_8014A8D4
/* 8014A8CC 0014780C  A8 03 00 20 */	lha r0, 0x20(r3)
/* 8014A8D0 00147810  48 00 00 08 */	b .L_8014A8D8
.L_8014A8D4:
/* 8014A8D4 00147814  38 00 FF FF */	li r0, -1
.L_8014A8D8:
/* 8014A8D8 00147818  2C 00 00 20 */	cmpwi r0, 0x20
/* 8014A8DC 0014781C  40 80 00 1C */	bge .L_8014A8F8
/* 8014A8E0 00147820  2C 00 00 15 */	cmpwi r0, 0x15
/* 8014A8E4 00147824  41 82 00 28 */	beq .L_8014A90C
/* 8014A8E8 00147828  41 80 00 18 */	blt .L_8014A900
/* 8014A8EC 0014782C  2C 00 00 1C */	cmpwi r0, 0x1c
/* 8014A8F0 00147830  40 80 00 1C */	bge .L_8014A90C
/* 8014A8F4 00147834  48 00 00 0C */	b .L_8014A900
.L_8014A8F8:
/* 8014A8F8 00147838  2C 00 00 38 */	cmpwi r0, 0x38
/* 8014A8FC 0014783C  41 82 00 10 */	beq .L_8014A90C
.L_8014A900:
/* 8014A900 00147840  7F E3 FB 78 */	mr r3, r31
/* 8014A904 00147844  4B FF 2F 21 */	bl finishLook__Q24Game8FakePikiFv
/* 8014A908 00147848  48 00 01 90 */	b .L_8014AA98
.L_8014A90C:
/* 8014A90C 0014784C  C0 3F 02 0C */	lfs f1, 0x20c(r31)
/* 8014A910 00147850  38 61 00 24 */	addi r3, r1, 0x24
/* 8014A914 00147854  C0 02 A1 24 */	lfs f0, lbl_80518484@sda21(r2)
/* 8014A918 00147858  38 81 00 14 */	addi r4, r1, 0x14
/* 8014A91C 0014785C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8014A920 00147860  C0 3F 02 10 */	lfs f1, 0x210(r31)
/* 8014A924 00147864  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8014A928 00147868  C0 3F 02 14 */	lfs f1, 0x214(r31)
/* 8014A92C 0014786C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8014A930 00147870  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8014A934 00147874  48 0E 3A 6D */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 8014A938 00147878  38 00 00 01 */	li r0, 1
/* 8014A93C 0014787C  38 61 00 44 */	addi r3, r1, 0x44
/* 8014A940 00147880  90 01 00 38 */	stw r0, 0x38(r1)
/* 8014A944 00147884  38 81 00 24 */	addi r4, r1, 0x24
/* 8014A948 00147888  48 0E 3A 99 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 8014A94C 0014788C  38 61 00 44 */	addi r3, r1, 0x44
/* 8014A950 00147890  3B C0 00 00 */	li r30, 0
/* 8014A954 00147894  48 0E 3B 09 */	bl first__Q24Game12CellIteratorFv
/* 8014A958 00147898  48 00 00 30 */	b .L_8014A988
.L_8014A95C:
/* 8014A95C 0014789C  38 61 00 44 */	addi r3, r1, 0x44
/* 8014A960 001478A0  48 0E 3B E5 */	bl __ml__Q24Game12CellIteratorFv
/* 8014A964 001478A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8014A968 001478A8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014A96C 001478AC  7D 89 03 A6 */	mtctr r12
/* 8014A970 001478B0  4E 80 04 21 */	bctrl 
/* 8014A974 001478B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014A978 001478B8  40 82 00 08 */	bne .L_8014A980
/* 8014A97C 001478BC  3B DE 00 01 */	addi r30, r30, 1
.L_8014A980:
/* 8014A980 001478C0  38 61 00 44 */	addi r3, r1, 0x44
/* 8014A984 001478C4  48 0E 3B 7D */	bl next__Q24Game12CellIteratorFv
.L_8014A988:
/* 8014A988 001478C8  38 61 00 44 */	addi r3, r1, 0x44
/* 8014A98C 001478CC  48 0E 3B A9 */	bl isDone__Q24Game12CellIteratorFv
/* 8014A990 001478D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014A994 001478D4  41 82 FF C8 */	beq .L_8014A95C
/* 8014A998 001478D8  2C 1E 00 00 */	cmpwi r30, 0
/* 8014A99C 001478DC  3B A0 00 00 */	li r29, 0
/* 8014A9A0 001478E0  40 81 00 F8 */	ble .L_8014AA98
/* 8014A9A4 001478E4  6F C3 80 00 */	xoris r3, r30, 0x8000
/* 8014A9A8 001478E8  3C 00 43 30 */	lis r0, 0x4330
/* 8014A9AC 001478EC  90 61 00 94 */	stw r3, 0x94(r1)
/* 8014A9B0 001478F0  38 61 00 44 */	addi r3, r1, 0x44
/* 8014A9B4 001478F4  C8 22 A1 08 */	lfd f1, lbl_80518468@sda21(r2)
/* 8014A9B8 001478F8  90 01 00 90 */	stw r0, 0x90(r1)
/* 8014A9BC 001478FC  C8 01 00 90 */	lfd f0, 0x90(r1)
/* 8014A9C0 00147900  EF E0 08 28 */	fsubs f31, f0, f1
/* 8014A9C4 00147904  48 0E 3A 99 */	bl first__Q24Game12CellIteratorFv
/* 8014A9C8 00147908  48 00 00 78 */	b .L_8014AA40
.L_8014A9CC:
/* 8014A9CC 0014790C  38 61 00 44 */	addi r3, r1, 0x44
/* 8014A9D0 00147910  48 0E 3B 75 */	bl __ml__Q24Game12CellIteratorFv
/* 8014A9D4 00147914  81 83 00 00 */	lwz r12, 0(r3)
/* 8014A9D8 00147918  7C 7E 1B 78 */	mr r30, r3
/* 8014A9DC 0014791C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8014A9E0 00147920  7D 89 03 A6 */	mtctr r12
/* 8014A9E4 00147924  4E 80 04 21 */	bctrl 
/* 8014A9E8 00147928  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014A9EC 0014792C  40 82 00 4C */	bne .L_8014AA38
/* 8014A9F0 00147930  4B F7 EB B1 */	bl rand
/* 8014A9F4 00147934  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8014A9F8 00147938  3C 00 43 30 */	lis r0, 0x4330
/* 8014A9FC 0014793C  90 61 00 94 */	stw r3, 0x94(r1)
/* 8014AA00 00147940  C0 22 A0 E0 */	lfs f1, lbl_80518440@sda21(r2)
/* 8014AA04 00147944  90 01 00 90 */	stw r0, 0x90(r1)
/* 8014AA08 00147948  C8 82 A1 08 */	lfd f4, lbl_80518468@sda21(r2)
/* 8014AA0C 0014794C  EC 01 F8 24 */	fdivs f0, f1, f31
/* 8014AA10 00147950  C8 61 00 90 */	lfd f3, 0x90(r1)
/* 8014AA14 00147954  C0 42 A0 FC */	lfs f2, lbl_8051845C@sda21(r2)
/* 8014AA18 00147958  EC 63 20 28 */	fsubs f3, f3, f4
/* 8014AA1C 0014795C  EC 43 10 24 */	fdivs f2, f3, f2
/* 8014AA20 00147960  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8014AA24 00147964  4C 40 13 82 */	cror 2, 0, 2
/* 8014AA28 00147968  40 82 00 0C */	bne .L_8014AA34
/* 8014AA2C 0014796C  7F DD F3 78 */	mr r29, r30
/* 8014AA30 00147970  48 00 00 20 */	b .L_8014AA50
.L_8014AA34:
/* 8014AA34 00147974  EF FF 08 28 */	fsubs f31, f31, f1
.L_8014AA38:
/* 8014AA38 00147978  38 61 00 44 */	addi r3, r1, 0x44
/* 8014AA3C 0014797C  48 0E 3A C5 */	bl next__Q24Game12CellIteratorFv
.L_8014AA40:
/* 8014AA40 00147980  38 61 00 44 */	addi r3, r1, 0x44
/* 8014AA44 00147984  48 0E 3A F1 */	bl isDone__Q24Game12CellIteratorFv
/* 8014AA48 00147988  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8014AA4C 0014798C  41 82 FF 80 */	beq .L_8014A9CC
.L_8014AA50:
/* 8014AA50 00147990  28 1D 00 00 */	cmplwi r29, 0
/* 8014AA54 00147994  41 82 00 44 */	beq .L_8014AA98
/* 8014AA58 00147998  7F E3 FB 78 */	mr r3, r31
/* 8014AA5C 0014799C  7F A4 EB 78 */	mr r4, r29
/* 8014AA60 001479A0  4B FF 2C 91 */	bl startLookCreature__Q24Game8FakePikiFPQ24Game8Creature
/* 8014AA64 001479A4  4B F7 EB 3D */	bl rand
/* 8014AA68 001479A8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8014AA6C 001479AC  3C 00 43 30 */	lis r0, 0x4330
/* 8014AA70 001479B0  90 61 00 94 */	stw r3, 0x94(r1)
/* 8014AA74 001479B4  C8 62 A1 08 */	lfd f3, lbl_80518468@sda21(r2)
/* 8014AA78 001479B8  90 01 00 90 */	stw r0, 0x90(r1)
/* 8014AA7C 001479BC  C0 22 A0 FC */	lfs f1, lbl_8051845C@sda21(r2)
/* 8014AA80 001479C0  C8 41 00 90 */	lfd f2, 0x90(r1)
/* 8014AA84 001479C4  C0 02 A1 28 */	lfs f0, lbl_80518488@sda21(r2)
/* 8014AA88 001479C8  EC 42 18 28 */	fsubs f2, f2, f3
/* 8014AA8C 001479CC  EC 22 08 24 */	fdivs f1, f2, f1
/* 8014AA90 001479D0  EC 00 00 7A */	fmadds f0, f0, f1, f0
/* 8014AA94 001479D4  D0 1F 02 54 */	stfs f0, 0x254(r31)
.L_8014AA98:
/* 8014AA98 001479D8  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 8014AA9C 001479DC  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8014AAA0 001479E0  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 8014AAA4 001479E4  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 8014AAA8 001479E8  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 8014AAAC 001479EC  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 8014AAB0 001479F0  7C 08 03 A6 */	mtlr r0
/* 8014AAB4 001479F4  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8014AAB8 001479F8  4E 80 00 20 */	blr 
.endfn do_updateLookCreature__Q24Game4PikiFv

.fn setTekiKillID__Q24Game4PikiFi, global
/* 8014AABC 001479FC  2C 04 00 62 */	cmpwi r4, 0x62
/* 8014AAC0 00147A00  40 82 00 08 */	bne .L_8014AAC8
/* 8014AAC4 00147A04  38 80 00 63 */	li r4, 0x63
.L_8014AAC8:
/* 8014AAC8 00147A08  B0 83 02 A4 */	sth r4, 0x2a4(r3)
/* 8014AACC 00147A0C  4E 80 00 20 */	blr 
.endfn setTekiKillID__Q24Game4PikiFi

.fn deferPikiCollision__Q24Game4PikiFv, weak
/* 8014AAD0 00147A10  38 60 00 01 */	li r3, 1
/* 8014AAD4 00147A14  4E 80 00 20 */	blr 
.endfn deferPikiCollision__Q24Game4PikiFv

.fn getCreatureName__Q24Game4PikiFv, weak
/* 8014AAD8 00147A18  38 62 A1 2C */	addi r3, r2, lbl_8051848C@sda21
/* 8014AADC 00147A1C  4E 80 00 20 */	blr 
.endfn getCreatureName__Q24Game4PikiFv

.fn "kill__27MonoObjectMgr<Q24Game4Piki>FPQ24Game4Piki", weak
/* 8014AAE0 00147A20  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8014AAE4 00147A24  38 C0 00 00 */	li r6, 0
/* 8014AAE8 00147A28  38 A0 00 00 */	li r5, 0
/* 8014AAEC 00147A2C  7C 09 03 A6 */	mtctr r0
/* 8014AAF0 00147A30  2C 00 00 00 */	cmpwi r0, 0
/* 8014AAF4 00147A34  4C 81 00 20 */	blelr 
.L_8014AAF8:
/* 8014AAF8 00147A38  80 03 00 28 */	lwz r0, 0x28(r3)
/* 8014AAFC 00147A3C  7C 00 2A 14 */	add r0, r0, r5
/* 8014AB00 00147A40  7C 00 20 40 */	cmplw r0, r4
/* 8014AB04 00147A44  40 82 00 20 */	bne .L_8014AB24
/* 8014AB08 00147A48  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 8014AB0C 00147A4C  38 00 00 01 */	li r0, 1
/* 8014AB10 00147A50  7C 04 31 AE */	stbx r0, r4, r6
/* 8014AB14 00147A54  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8014AB18 00147A58  38 04 FF FF */	addi r0, r4, -1
/* 8014AB1C 00147A5C  90 03 00 20 */	stw r0, 0x20(r3)
/* 8014AB20 00147A60  4E 80 00 20 */	blr 
.L_8014AB24:
/* 8014AB24 00147A64  38 A5 02 C8 */	addi r5, r5, 0x2c8
/* 8014AB28 00147A68  38 C6 00 01 */	addi r6, r6, 1
/* 8014AB2C 00147A6C  42 00 FF CC */	bdnz .L_8014AAF8
/* 8014AB30 00147A70  4E 80 00 20 */	blr 
.endfn "kill__27MonoObjectMgr<Q24Game4Piki>FPQ24Game4Piki"

.fn "init__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4Piki", weak
/* 8014AB34 00147A74  4E 80 00 20 */	blr 
.endfn "init__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4Piki"

.fn "transit__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg", weak
/* 8014AB38 00147A78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014AB3C 00147A7C  7C 08 02 A6 */	mflr r0
/* 8014AB40 00147A80  90 01 00 24 */	stw r0, 0x24(r1)
/* 8014AB44 00147A84  54 A0 10 3A */	slwi r0, r5, 2
/* 8014AB48 00147A88  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8014AB4C 00147A8C  7C 7B 1B 78 */	mr r27, r3
/* 8014AB50 00147A90  7C 9C 23 78 */	mr r28, r4
/* 8014AB54 00147A94  7C DD 33 78 */	mr r29, r6
/* 8014AB58 00147A98  83 C4 02 90 */	lwz r30, 0x290(r4)
/* 8014AB5C 00147A9C  80 63 00 14 */	lwz r3, 0x14(r3)
/* 8014AB60 00147AA0  28 1E 00 00 */	cmplwi r30, 0
/* 8014AB64 00147AA4  7F E3 00 2E */	lwzx r31, r3, r0
/* 8014AB68 00147AA8  41 82 00 20 */	beq .L_8014AB88
/* 8014AB6C 00147AAC  7F C3 F3 78 */	mr r3, r30
/* 8014AB70 00147AB0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8014AB74 00147AB4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8014AB78 00147AB8  7D 89 03 A6 */	mtctr r12
/* 8014AB7C 00147ABC  4E 80 04 21 */	bctrl 
/* 8014AB80 00147AC0  80 1E 00 04 */	lwz r0, 4(r30)
/* 8014AB84 00147AC4  90 1B 00 18 */	stw r0, 0x18(r27)
.L_8014AB88:
/* 8014AB88 00147AC8  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 8014AB8C 00147ACC  7C 1F 00 00 */	cmpw r31, r0
/* 8014AB90 00147AD0  41 80 00 08 */	blt .L_8014AB98
.L_8014AB94:
/* 8014AB94 00147AD4  48 00 00 00 */	b .L_8014AB94
.L_8014AB98:
/* 8014AB98 00147AD8  80 7B 00 04 */	lwz r3, 4(r27)
/* 8014AB9C 00147ADC  57 E0 10 3A */	slwi r0, r31, 2
/* 8014ABA0 00147AE0  7F 84 E3 78 */	mr r4, r28
/* 8014ABA4 00147AE4  7F A5 EB 78 */	mr r5, r29
/* 8014ABA8 00147AE8  7C 63 00 2E */	lwzx r3, r3, r0
/* 8014ABAC 00147AEC  90 7C 02 90 */	stw r3, 0x290(r28)
/* 8014ABB0 00147AF0  81 83 00 00 */	lwz r12, 0(r3)
/* 8014ABB4 00147AF4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8014ABB8 00147AF8  7D 89 03 A6 */	mtctr r12
/* 8014ABBC 00147AFC  4E 80 04 21 */	bctrl 
/* 8014ABC0 00147B00  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8014ABC4 00147B04  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8014ABC8 00147B08  7C 08 03 A6 */	mtlr r0
/* 8014ABCC 00147B0C  38 21 00 20 */	addi r1, r1, 0x20
/* 8014ABD0 00147B10  4E 80 00 20 */	blr 
.endfn "transit__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"

.fn "init__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiPQ24Game8StateArg", weak
/* 8014ABD4 00147B14  4E 80 00 20 */	blr 
.endfn "init__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiPQ24Game8StateArg"

.fn "cleanup__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki", weak
/* 8014ABD8 00147B18  4E 80 00 20 */	blr 
.endfn "cleanup__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"

.fn "exec__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4Piki", weak
/* 8014ABDC 00147B1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014ABE0 00147B20  7C 08 02 A6 */	mflr r0
/* 8014ABE4 00147B24  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014ABE8 00147B28  80 64 02 90 */	lwz r3, 0x290(r4)
/* 8014ABEC 00147B2C  28 03 00 00 */	cmplwi r3, 0
/* 8014ABF0 00147B30  41 82 00 14 */	beq .L_8014AC04
/* 8014ABF4 00147B34  81 83 00 00 */	lwz r12, 0(r3)
/* 8014ABF8 00147B38  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8014ABFC 00147B3C  7D 89 03 A6 */	mtctr r12
/* 8014AC00 00147B40  4E 80 04 21 */	bctrl 
.L_8014AC04:
/* 8014AC04 00147B44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014AC08 00147B48  7C 08 03 A6 */	mtlr r0
/* 8014AC0C 00147B4C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014AC10 00147B50  4E 80 00 20 */	blr 
.endfn "exec__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4Piki"

.fn "exec__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki", weak
/* 8014AC14 00147B54  4E 80 00 20 */	blr 
.endfn "exec__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"

.fn __sinit_piki_cpp, local
/* 8014AC18 00147B58  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8014AC1C 00147B5C  3C 60 80 51 */	lis r3, __float_nan@ha
/* 8014AC20 00147B60  3C A0 80 4B */	lis r5, govNAN___Q24Game5P2JST@ha
/* 8014AC24 00147B64  3C 80 80 51 */	lis r4, pikiColors__Q24Game4Piki@ha
/* 8014AC28 00147B68  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014AC2C 00147B6C  3B E4 22 8C */	addi r31, r4, pikiColors__Q24Game4Piki@l
/* 8014AC30 00147B70  39 60 00 FF */	li r11, 0xff
/* 8014AC34 00147B74  39 80 00 32 */	li r12, 0x32
/* 8014AC38 00147B78  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8014AC3C 00147B7C  3B C0 00 00 */	li r30, 0
/* 8014AC40 00147B80  39 40 00 1E */	li r10, 0x1e
/* 8014AC44 00147B84  39 20 00 D2 */	li r9, 0xd2
/* 8014AC48 00147B88  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014AC4C 00147B8C  3B A5 09 90 */	addi r29, r5, govNAN___Q24Game5P2JST@l
/* 8014AC50 00147B90  38 C0 00 E6 */	li r6, 0xe6
/* 8014AC54 00147B94  38 A0 00 8C */	li r5, 0x8c
/* 8014AC58 00147B98  93 81 00 10 */	stw r28, 0x10(r1)
/* 8014AC5C 00147B9C  39 00 00 1C */	li r8, 0x1c
/* 8014AC60 00147BA0  38 E0 00 34 */	li r7, 0x34
/* 8014AC64 00147BA4  3B 80 FF FF */	li r28, -1
/* 8014AC68 00147BA8  C0 03 48 B0 */	lfs f0, __float_nan@l(r3)
/* 8014AC6C 00147BAC  3C 60 80 51 */	lis r3, pikiColorsCursor__Q24Game4Piki@ha
/* 8014AC70 00147BB0  38 83 22 CC */	addi r4, r3, pikiColorsCursor__Q24Game4Piki@l
/* 8014AC74 00147BB4  38 00 00 FA */	li r0, 0xfa
/* 8014AC78 00147BB8  38 60 00 78 */	li r3, 0x78
/* 8014AC7C 00147BBC  9B DF 00 00 */	stb r30, 0(r31)
/* 8014AC80 00147BC0  99 9F 00 01 */	stb r12, 1(r31)
/* 8014AC84 00147BC4  99 7F 00 02 */	stb r11, 2(r31)
/* 8014AC88 00147BC8  99 7F 00 03 */	stb r11, 3(r31)
/* 8014AC8C 00147BCC  99 7F 00 04 */	stb r11, 4(r31)
/* 8014AC90 00147BD0  99 5F 00 05 */	stb r10, 5(r31)
/* 8014AC94 00147BD4  9B DF 00 06 */	stb r30, 6(r31)
/* 8014AC98 00147BD8  99 7F 00 07 */	stb r11, 7(r31)
/* 8014AC9C 00147BDC  99 7F 00 08 */	stb r11, 8(r31)
/* 8014ACA0 00147BE0  99 3F 00 09 */	stb r9, 9(r31)
/* 8014ACA4 00147BE4  9B DF 00 0A */	stb r30, 0xa(r31)
/* 8014ACA8 00147BE8  99 7F 00 0B */	stb r11, 0xb(r31)
/* 8014ACAC 00147BEC  99 1F 00 0C */	stb r8, 0xc(r31)
/* 8014ACB0 00147BF0  9B DF 00 0D */	stb r30, 0xd(r31)
/* 8014ACB4 00147BF4  98 FF 00 0E */	stb r7, 0xe(r31)
/* 8014ACB8 00147BF8  99 7F 00 0F */	stb r11, 0xf(r31)
/* 8014ACBC 00147BFC  99 7F 00 10 */	stb r11, 0x10(r31)
/* 8014ACC0 00147C00  98 DF 00 11 */	stb r6, 0x11(r31)
/* 8014ACC4 00147C04  99 7F 00 12 */	stb r11, 0x12(r31)
/* 8014ACC8 00147C08  99 7F 00 13 */	stb r11, 0x13(r31)
/* 8014ACCC 00147C0C  99 7F 00 14 */	stb r11, 0x14(r31)
/* 8014ACD0 00147C10  98 BF 00 15 */	stb r5, 0x15(r31)
/* 8014ACD4 00147C14  9B DF 00 16 */	stb r30, 0x16(r31)
/* 8014ACD8 00147C18  99 7F 00 17 */	stb r11, 0x17(r31)
/* 8014ACDC 00147C1C  99 7F 00 18 */	stb r11, 0x18(r31)
/* 8014ACE0 00147C20  99 7F 00 19 */	stb r11, 0x19(r31)
/* 8014ACE4 00147C24  99 7F 00 1A */	stb r11, 0x1a(r31)
/* 8014ACE8 00147C28  9B DF 00 1B */	stb r30, 0x1b(r31)
/* 8014ACEC 00147C2C  9B C4 00 00 */	stb r30, 0(r4)
/* 8014ACF0 00147C30  99 84 00 01 */	stb r12, 1(r4)
/* 8014ACF4 00147C34  99 64 00 02 */	stb r11, 2(r4)
/* 8014ACF8 00147C38  99 64 00 03 */	stb r11, 3(r4)
/* 8014ACFC 00147C3C  99 64 00 04 */	stb r11, 4(r4)
/* 8014AD00 00147C40  99 44 00 05 */	stb r10, 5(r4)
/* 8014AD04 00147C44  9B C4 00 06 */	stb r30, 6(r4)
/* 8014AD08 00147C48  99 64 00 07 */	stb r11, 7(r4)
/* 8014AD0C 00147C4C  99 64 00 08 */	stb r11, 8(r4)
/* 8014AD10 00147C50  99 24 00 09 */	stb r9, 9(r4)
/* 8014AD14 00147C54  9B C4 00 0A */	stb r30, 0xa(r4)
/* 8014AD18 00147C58  99 64 00 0B */	stb r11, 0xb(r4)
/* 8014AD1C 00147C5C  98 64 00 0C */	stb r3, 0xc(r4)
/* 8014AD20 00147C60  9B C4 00 0D */	stb r30, 0xd(r4)
/* 8014AD24 00147C64  98 04 00 0E */	stb r0, 0xe(r4)
/* 8014AD28 00147C68  99 64 00 0F */	stb r11, 0xf(r4)
/* 8014AD2C 00147C6C  99 64 00 10 */	stb r11, 0x10(r4)
/* 8014AD30 00147C70  98 C4 00 11 */	stb r6, 0x11(r4)
/* 8014AD34 00147C74  99 64 00 12 */	stb r11, 0x12(r4)
/* 8014AD38 00147C78  99 64 00 13 */	stb r11, 0x13(r4)
/* 8014AD3C 00147C7C  99 64 00 14 */	stb r11, 0x14(r4)
/* 8014AD40 00147C80  98 A4 00 15 */	stb r5, 0x15(r4)
/* 8014AD44 00147C84  9B C4 00 16 */	stb r30, 0x16(r4)
/* 8014AD48 00147C88  99 64 00 17 */	stb r11, 0x17(r4)
/* 8014AD4C 00147C8C  99 64 00 18 */	stb r11, 0x18(r4)
/* 8014AD50 00147C90  99 64 00 19 */	stb r11, 0x19(r4)
/* 8014AD54 00147C94  99 64 00 1A */	stb r11, 0x1a(r4)
/* 8014AD58 00147C98  9B C4 00 1B */	stb r30, 0x1b(r4)
/* 8014AD5C 00147C9C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014AD60 00147CA0  93 8D 92 A0 */	stw r28, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8014AD64 00147CA4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014AD68 00147CA8  D0 0D 92 A4 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8014AD6C 00147CAC  D0 1D 00 00 */	stfs f0, 0(r29)
/* 8014AD70 00147CB0  D0 1D 00 04 */	stfs f0, 4(r29)
/* 8014AD74 00147CB4  D0 1D 00 08 */	stfs f0, 8(r29)
/* 8014AD78 00147CB8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014AD7C 00147CBC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8014AD80 00147CC0  38 21 00 20 */	addi r1, r1, 0x20
/* 8014AD84 00147CC4  4E 80 00 20 */	blr 
.endfn __sinit_piki_cpp

.fn "@4@__dt__Q23efx7TPkMoeAFv", weak
/* 8014AD88 00147CC8  38 63 FF FC */	addi r3, r3, -4
/* 8014AD8C 00147CCC  4B FF CE 4C */	b __dt__Q23efx7TPkMoeAFv
.endfn "@4@__dt__Q23efx7TPkMoeAFv"

.fn "@4@__dt__Q23efx12TPkBlackDownFv", weak
/* 8014AD90 00147CD0  38 63 FF FC */	addi r3, r3, -4
/* 8014AD94 00147CD4  4B FF CD A8 */	b __dt__Q23efx12TPkBlackDownFv
.endfn "@4@__dt__Q23efx12TPkBlackDownFv"

.fn "@376@onKeyEvent__Q24Game4PikiFRCQ28SysShape8KeyEvent", weak
/* 8014AD98 00147CD8  38 63 FE 88 */	addi r3, r3, -376
/* 8014AD9C 00147CDC  4B FF E1 50 */	b onKeyEvent__Q24Game4PikiFRCQ28SysShape8KeyEvent
.endfn "@376@onKeyEvent__Q24Game4PikiFRCQ28SysShape8KeyEvent"
