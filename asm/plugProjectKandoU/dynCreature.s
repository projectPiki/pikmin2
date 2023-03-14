.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047F630, local
	.asciz "dynCreature.cpp"
.endobj lbl_8047F630
.balign 4
.obj lbl_8047F640, local
	.asciz "p is null n is %d\n"
.endobj lbl_8047F640
.balign 4
.obj lbl_8047F654, local
	.asciz "simulate error\n"
.endobj lbl_8047F654

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj lbl_804B5218, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte "tracemoveCallback__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"
.endobj lbl_804B5218
.obj __vt__Q24Game11DynCreature, global
	.4byte 0
	.4byte 0
	.4byte getPosition__Q24Game11DynCreatureFv
	.4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
	.4byte 0
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
	.4byte doAnimation__Q24Game8CreatureFv
	.4byte doEntry__Q24Game8CreatureFv
	.4byte doSetView__Q24Game8CreatureFi
	.4byte doViewCalc__Q24Game8CreatureFv
	.4byte doSimulation__Q24Game8CreatureFf
	.4byte doDirectDraw__Q24Game8CreatureFR8Graphics
	.4byte getBodyRadius__Q24Game8CreatureFv
	.4byte getCellRadius__Q24Game8CreatureFv
	.4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte 0
	.4byte "setVelocity__Q24Game11DynCreatureFR10Vector3<f>"
	.4byte getVelocity__Q24Game11DynCreatureFv
	.4byte "onSetPosition__Q24Game11DynCreatureFR10Vector3<f>"
	.4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
	.4byte 0
	.4byte isTeki__Q24Game8CreatureFv
	.4byte isPellet__Q24Game8CreatureFv
	.4byte inWaterCallback__Q24Game8CreatureFPQ24Game8WaterBox
	.4byte outWaterCallback__Q24Game8CreatureFv
	.4byte inWater__Q24Game8CreatureFv
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
	.4byte getSound_PosPtr__Q24Game8CreatureFv
	.4byte sound_culling__Q24Game8CreatureFv
	.4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
	.4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
	.4byte on_movie_begin__Q24Game8CreatureFb
	.4byte on_movie_end__Q24Game8CreatureFb
	.4byte movieStartAnimation__Q24Game8CreatureFUl
	.4byte movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
	.4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
	.4byte "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
	.4byte movieSetFaceDir__Q24Game8CreatureFf
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
	.4byte "getVelocityAt__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"
	.4byte "getAngularEffect__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"
	.4byte "applyImpulse__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"
	.4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
	.4byte getSuckPos__Q24Game8CreatureFv
	.4byte getGoalPos__Q24Game8CreatureFv
	.4byte isSuckReady__Q24Game8CreatureFv
	.4byte isSuckArriveWait__Q24Game8CreatureFv
	.4byte stimulate__Q24Game8CreatureFRQ24Game11Interaction
	.4byte getCreatureName__Q24Game8CreatureFv
	.4byte getCreatureID__Q24Game8CreatureFv
	.4byte onSetPosition__Q24Game11DynCreatureFv
.endobj __vt__Q24Game11DynCreature
.obj "__vt__59Delegate2<Q24Game11DynCreature,R10Vector3<f>,R10Vector3<f>>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__59Delegate2<Q24Game11DynCreature,R10Vector3<f>,R10Vector3<f>>FR10Vector3<f>R10Vector3<f>"
.endobj "__vt__59Delegate2<Q24Game11DynCreature,R10Vector3<f>,R10Vector3<f>>"
.obj "__vt__39IDelegate2<R10Vector3<f>,R10Vector3<f>>", weak
	.4byte 0
	.4byte 0
	.4byte 0
.endobj "__vt__39IDelegate2<R10Vector3<f>,R10Vector3<f>>"
.obj __vt__Q24Game14DynParticleMgr, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game14DynParticleMgrFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__31Container<Q24Game11DynParticle>FPv"
	.4byte "getNext__35MonoObjectMgr<Q24Game11DynParticle>FPv"
	.4byte "getStart__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "getEnd__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "get__35MonoObjectMgr<Q24Game11DynParticle>FPv"
	.4byte "getAt__35MonoObjectMgr<Q24Game11DynParticle>Fi"
	.4byte "getTo__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "@28@doEntry__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "@28@doSetView__35MonoObjectMgr<Q24Game11DynParticle>Fi"
	.4byte "@28@doViewCalc__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "@28@doSimulation__35MonoObjectMgr<Q24Game11DynParticle>Ff"
	.4byte "@28@doDirectDraw__35MonoObjectMgr<Q24Game11DynParticle>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__Q24Game14DynParticleMgrFv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "doEntry__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "doSetView__35MonoObjectMgr<Q24Game11DynParticle>Fi"
	.4byte "doViewCalc__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "doSimulation__35MonoObjectMgr<Q24Game11DynParticle>Ff"
	.4byte "doDirectDraw__35MonoObjectMgr<Q24Game11DynParticle>FR8Graphics"
	.4byte "birth__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte resetMgr__Q24Game14DynParticleMgrFv
	.4byte "clearMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "onAlloc__35MonoObjectMgr<Q24Game11DynParticle>Fv"
.endobj __vt__Q24Game14DynParticleMgr
.obj "__vt__31Container<Q24Game11DynParticle>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__31Container<Q24Game11DynParticle>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__31Container<Q24Game11DynParticle>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__31Container<Q24Game11DynParticle>Fi"
	.4byte "getTo__31Container<Q24Game11DynParticle>Fv"
.endobj "__vt__31Container<Q24Game11DynParticle>"
.obj "__vt__31ObjectMgr<Q24Game11DynParticle>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__31ObjectMgr<Q24Game11DynParticle>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__31Container<Q24Game11DynParticle>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__31Container<Q24Game11DynParticle>Fi"
	.4byte "getTo__31Container<Q24Game11DynParticle>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__31ObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "@28@doEntry__31ObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "@28@doSetView__31ObjectMgr<Q24Game11DynParticle>Fi"
	.4byte "@28@doViewCalc__31ObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "@28@doSimulation__31ObjectMgr<Q24Game11DynParticle>Ff"
	.4byte "@28@doDirectDraw__31ObjectMgr<Q24Game11DynParticle>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__31ObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "doEntry__31ObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "doSetView__31ObjectMgr<Q24Game11DynParticle>Fi"
	.4byte "doViewCalc__31ObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "doSimulation__31ObjectMgr<Q24Game11DynParticle>Ff"
	.4byte "doDirectDraw__31ObjectMgr<Q24Game11DynParticle>FR8Graphics"
.endobj "__vt__31ObjectMgr<Q24Game11DynParticle>"
.obj "__vt__35MonoObjectMgr<Q24Game11DynParticle>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__31Container<Q24Game11DynParticle>FPv"
	.4byte "getNext__35MonoObjectMgr<Q24Game11DynParticle>FPv"
	.4byte "getStart__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "getEnd__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "get__35MonoObjectMgr<Q24Game11DynParticle>FPv"
	.4byte "getAt__35MonoObjectMgr<Q24Game11DynParticle>Fi"
	.4byte "getTo__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "@28@doEntry__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "@28@doSetView__35MonoObjectMgr<Q24Game11DynParticle>Fi"
	.4byte "@28@doViewCalc__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "@28@doSimulation__35MonoObjectMgr<Q24Game11DynParticle>Ff"
	.4byte "@28@doDirectDraw__35MonoObjectMgr<Q24Game11DynParticle>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "doEntry__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "doSetView__35MonoObjectMgr<Q24Game11DynParticle>Fi"
	.4byte "doViewCalc__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "doSimulation__35MonoObjectMgr<Q24Game11DynParticle>Ff"
	.4byte "doDirectDraw__35MonoObjectMgr<Q24Game11DynParticle>FR8Graphics"
	.4byte "birth__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "resetMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "clearMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv"
	.4byte "onAlloc__35MonoObjectMgr<Q24Game11DynParticle>Fv"
.endobj "__vt__35MonoObjectMgr<Q24Game11DynParticle>"
.obj __vt__Q24Game11DynParticle, weak
	.4byte 0
	.4byte 0
	.4byte constructor__Q24Game11DynParticleFv
	.4byte doAnimation__Q24Game11DynParticleFv
	.4byte doEntry__Q24Game11DynParticleFv
	.4byte doSetView__Q24Game11DynParticleFUl
	.4byte doViewCalc__Q24Game11DynParticleFv
	.4byte doSimulation__Q24Game11DynParticleFf
	.4byte doDirectDraw__Q24Game11DynParticleFR8Graphics
.endobj __vt__Q24Game11DynParticle
.obj "__vt__30Iterator<Q24Game11DynParticle>", weak
	.4byte 0
	.4byte 0
	.4byte "first__30Iterator<Q24Game11DynParticle>Fv"
	.4byte "next__30Iterator<Q24Game11DynParticle>Fv"
	.4byte "isDone__30Iterator<Q24Game11DynParticle>Fv"
	.4byte "__ml__30Iterator<Q24Game11DynParticle>Fv"
.endobj "__vt__30Iterator<Q24Game11DynParticle>"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj dynParticleMgr__4Game, global
	.skip 0x4
.endobj dynParticleMgr__4Game

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80519238, local
	.float 0.0
.endobj lbl_80519238
.obj lbl_8051923C, local
	.float 1.0
.endobj lbl_8051923C
.balign 8
.obj lbl_80519240, local
	.8byte 0x4330000080000000
.endobj lbl_80519240
.obj lbl_80519248, local
	.float -128000.0
.endobj lbl_80519248
.obj lbl_8051924C, local
	.float 128000.0
.endobj lbl_8051924C
.obj lbl_80519250, local
	.float 50.0
.endobj lbl_80519250
.obj lbl_80519254, local
	.float 0.6
.endobj lbl_80519254

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q24Game14DynParticleMgrFi, global
/* 801A7F3C 001A4E7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A7F40 001A4E80  7C 08 02 A6 */	mflr r0
/* 801A7F44 001A4E84  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A7F48 001A4E88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A7F4C 001A4E8C  7C 9F 23 78 */	mr r31, r4
/* 801A7F50 001A4E90  93 C1 00 08 */	stw r30, 8(r1)
/* 801A7F54 001A4E94  7C 7E 1B 78 */	mr r30, r3
/* 801A7F58 001A4E98  48 00 24 89 */	bl "__ct__35MonoObjectMgr<Q24Game11DynParticle>Fv"
/* 801A7F5C 001A4E9C  3C 80 80 4B */	lis r4, __vt__Q24Game14DynParticleMgr@ha
/* 801A7F60 001A4EA0  7F C3 F3 78 */	mr r3, r30
/* 801A7F64 001A4EA4  38 A4 53 F0 */	addi r5, r4, __vt__Q24Game14DynParticleMgr@l
/* 801A7F68 001A4EA8  7F E4 FB 78 */	mr r4, r31
/* 801A7F6C 001A4EAC  90 BE 00 00 */	stw r5, 0(r30)
/* 801A7F70 001A4EB0  38 05 00 2C */	addi r0, r5, 0x2c
/* 801A7F74 001A4EB4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801A7F78 001A4EB8  48 00 22 A9 */	bl "alloc__35MonoObjectMgr<Q24Game11DynParticle>Fi"
/* 801A7F7C 001A4EBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A7F80 001A4EC0  7F C3 F3 78 */	mr r3, r30
/* 801A7F84 001A4EC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A7F88 001A4EC8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801A7F8C 001A4ECC  7C 08 03 A6 */	mtlr r0
/* 801A7F90 001A4ED0  38 21 00 10 */	addi r1, r1, 0x10
/* 801A7F94 001A4ED4  4E 80 00 20 */	blr 
.endfn __ct__Q24Game14DynParticleMgrFi

.fn "__dt__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A7F98 001A4ED8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A7F9C 001A4EDC  7C 08 02 A6 */	mflr r0
/* 801A7FA0 001A4EE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A7FA4 001A4EE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A7FA8 001A4EE8  7C 9F 23 78 */	mr r31, r4
/* 801A7FAC 001A4EEC  93 C1 00 08 */	stw r30, 8(r1)
/* 801A7FB0 001A4EF0  7C 7E 1B 79 */	or. r30, r3, r3
/* 801A7FB4 001A4EF4  41 82 00 68 */	beq .L_801A801C
/* 801A7FB8 001A4EF8  3C 80 80 4B */	lis r4, "__vt__35MonoObjectMgr<Q24Game11DynParticle>"@ha
/* 801A7FBC 001A4EFC  38 84 55 24 */	addi r4, r4, "__vt__35MonoObjectMgr<Q24Game11DynParticle>"@l
/* 801A7FC0 001A4F00  90 9E 00 00 */	stw r4, 0(r30)
/* 801A7FC4 001A4F04  38 04 00 2C */	addi r0, r4, 0x2c
/* 801A7FC8 001A4F08  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801A7FCC 001A4F0C  41 82 00 40 */	beq .L_801A800C
/* 801A7FD0 001A4F10  3C 80 80 4B */	lis r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@ha
/* 801A7FD4 001A4F14  38 84 54 A8 */	addi r4, r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@l
/* 801A7FD8 001A4F18  90 9E 00 00 */	stw r4, 0(r30)
/* 801A7FDC 001A4F1C  38 04 00 2C */	addi r0, r4, 0x2c
/* 801A7FE0 001A4F20  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801A7FE4 001A4F24  41 82 00 28 */	beq .L_801A800C
/* 801A7FE8 001A4F28  3C 80 80 4B */	lis r4, "__vt__31Container<Q24Game11DynParticle>"@ha
/* 801A7FEC 001A4F2C  38 04 54 7C */	addi r0, r4, "__vt__31Container<Q24Game11DynParticle>"@l
/* 801A7FF0 001A4F30  90 1E 00 00 */	stw r0, 0(r30)
/* 801A7FF4 001A4F34  41 82 00 18 */	beq .L_801A800C
/* 801A7FF8 001A4F38  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801A7FFC 001A4F3C  38 80 00 00 */	li r4, 0
/* 801A8000 001A4F40  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801A8004 001A4F44  90 1E 00 00 */	stw r0, 0(r30)
/* 801A8008 001A4F48  48 26 95 81 */	bl __dt__5CNodeFv
.L_801A800C:
/* 801A800C 001A4F4C  7F E0 07 35 */	extsh. r0, r31
/* 801A8010 001A4F50  40 81 00 0C */	ble .L_801A801C
/* 801A8014 001A4F54  7F C3 F3 78 */	mr r3, r30
/* 801A8018 001A4F58  4B E7 C0 9D */	bl __dl__FPv
.L_801A801C:
/* 801A801C 001A4F5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A8020 001A4F60  7F C3 F3 78 */	mr r3, r30
/* 801A8024 001A4F64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A8028 001A4F68  83 C1 00 08 */	lwz r30, 8(r1)
/* 801A802C 001A4F6C  7C 08 03 A6 */	mtlr r0
/* 801A8030 001A4F70  38 21 00 10 */	addi r1, r1, 0x10
/* 801A8034 001A4F74  4E 80 00 20 */	blr 
.endfn "__dt__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn resetMgr__Q24Game14DynParticleMgrFv, global
/* 801A8038 001A4F78  38 C0 00 00 */	li r6, 0
/* 801A803C 001A4F7C  38 A0 00 01 */	li r5, 1
/* 801A8040 001A4F80  48 00 00 10 */	b .L_801A8050
.L_801A8044:
/* 801A8044 001A4F84  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801A8048 001A4F88  7C A4 31 AE */	stbx r5, r4, r6
/* 801A804C 001A4F8C  38 C6 00 01 */	addi r6, r6, 1
.L_801A8050:
/* 801A8050 001A4F90  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801A8054 001A4F94  7C 06 00 00 */	cmpw r6, r0
/* 801A8058 001A4F98  41 80 FF EC */	blt .L_801A8044
/* 801A805C 001A4F9C  38 00 00 00 */	li r0, 0
/* 801A8060 001A4FA0  90 03 00 20 */	stw r0, 0x20(r3)
/* 801A8064 001A4FA4  4E 80 00 20 */	blr 
.endfn resetMgr__Q24Game14DynParticleMgrFv

.fn getAt__Q24Game11DynParticleFi, global
/* 801A8068 001A4FA8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A806C 001A4FAC  7C 08 02 A6 */	mflr r0
/* 801A8070 001A4FB0  3C C0 80 48 */	lis r6, lbl_8047F630@ha
/* 801A8074 001A4FB4  3C A0 80 48 */	lis r5, lbl_8047F640@ha
/* 801A8078 001A4FB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A807C 001A4FBC  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801A8080 001A4FC0  7C 9B 23 78 */	mr r27, r4
/* 801A8084 001A4FC4  7C 7D 1B 78 */	mr r29, r3
/* 801A8088 001A4FC8  3B C6 F6 30 */	addi r30, r6, lbl_8047F630@l
/* 801A808C 001A4FCC  3B E5 F6 40 */	addi r31, r5, lbl_8047F640@l
/* 801A8090 001A4FD0  3B 80 00 00 */	li r28, 0
/* 801A8094 001A4FD4  48 00 00 2C */	b .L_801A80C0
.L_801A8098:
/* 801A8098 001A4FD8  28 1D 00 00 */	cmplwi r29, 0
/* 801A809C 001A4FDC  40 82 00 1C */	bne .L_801A80B8
/* 801A80A0 001A4FE0  7F C3 F3 78 */	mr r3, r30
/* 801A80A4 001A4FE4  7F E5 FB 78 */	mr r5, r31
/* 801A80A8 001A4FE8  7F 66 DB 78 */	mr r6, r27
/* 801A80AC 001A4FEC  38 80 00 86 */	li r4, 0x86
/* 801A80B0 001A4FF0  4C C6 31 82 */	crclr 6
/* 801A80B4 001A4FF4  4B E8 25 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A80B8:
/* 801A80B8 001A4FF8  83 BD 00 1C */	lwz r29, 0x1c(r29)
/* 801A80BC 001A4FFC  3B 9C 00 01 */	addi r28, r28, 1
.L_801A80C0:
/* 801A80C0 001A5000  7C 1C D8 00 */	cmpw r28, r27
/* 801A80C4 001A5004  41 80 FF D4 */	blt .L_801A8098
/* 801A80C8 001A5008  7F A3 EB 78 */	mr r3, r29
/* 801A80CC 001A500C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801A80D0 001A5010  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A80D4 001A5014  7C 08 03 A6 */	mtlr r0
/* 801A80D8 001A5018  38 21 00 20 */	addi r1, r1, 0x20
/* 801A80DC 001A501C  4E 80 00 20 */	blr 
.endfn getAt__Q24Game11DynParticleFi

.fn __ct__Q24Game11DynCreatureFv, global
/* 801A80E0 001A5020  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A80E4 001A5024  7C 08 02 A6 */	mflr r0
/* 801A80E8 001A5028  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A80EC 001A502C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A80F0 001A5030  7C 7F 1B 78 */	mr r31, r3
/* 801A80F4 001A5034  4B F9 2D 91 */	bl __ct__Q24Game8CreatureFv
/* 801A80F8 001A5038  3C 80 80 4B */	lis r4, __vt__Q24Game11DynCreature@ha
/* 801A80FC 001A503C  38 7F 01 7C */	addi r3, r31, 0x17c
/* 801A8100 001A5040  38 04 52 24 */	addi r0, r4, __vt__Q24Game11DynCreature@l
/* 801A8104 001A5044  90 1F 00 00 */	stw r0, 0(r31)
/* 801A8108 001A5048  4B F9 1F 49 */	bl __ct__Q24Game5RigidFv
/* 801A810C 001A504C  38 00 00 00 */	li r0, 0
/* 801A8110 001A5050  C0 02 AE D8 */	lfs f0, lbl_80519238@sda21(r2)
/* 801A8114 001A5054  90 1F 03 0C */	stw r0, 0x30c(r31)
/* 801A8118 001A5058  7F E3 FB 78 */	mr r3, r31
/* 801A811C 001A505C  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801A8120 001A5060  D0 1F 02 F4 */	stfs f0, 0x2f4(r31)
/* 801A8124 001A5064  D0 1F 02 F8 */	stfs f0, 0x2f8(r31)
/* 801A8128 001A5068  D0 1F 02 FC */	stfs f0, 0x2fc(r31)
/* 801A812C 001A506C  D0 1F 03 00 */	stfs f0, 0x300(r31)
/* 801A8130 001A5070  D0 1F 03 04 */	stfs f0, 0x304(r31)
/* 801A8134 001A5074  D0 1F 03 08 */	stfs f0, 0x308(r31)
/* 801A8138 001A5078  98 1F 03 10 */	stb r0, 0x310(r31)
/* 801A813C 001A507C  98 1F 03 11 */	stb r0, 0x311(r31)
/* 801A8140 001A5080  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A8144 001A5084  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A8148 001A5088  7C 08 03 A6 */	mtlr r0
/* 801A814C 001A508C  38 21 00 10 */	addi r1, r1, 0x10
/* 801A8150 001A5090  4E 80 00 20 */	blr 
.endfn __ct__Q24Game11DynCreatureFv

.fn createParticles__Q24Game11DynCreatureFi, global
/* 801A8154 001A5094  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A8158 001A5098  7C 08 02 A6 */	mflr r0
/* 801A815C 001A509C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A8160 001A50A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801A8164 001A50A4  3B E0 00 00 */	li r31, 0
/* 801A8168 001A50A8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801A816C 001A50AC  3B C0 00 00 */	li r30, 0
/* 801A8170 001A50B0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801A8174 001A50B4  7C 9D 23 78 */	mr r29, r4
/* 801A8178 001A50B8  93 81 00 10 */	stw r28, 0x10(r1)
/* 801A817C 001A50BC  7C 7C 1B 78 */	mr r28, r3
/* 801A8180 001A50C0  93 E3 01 78 */	stw r31, 0x178(r3)
/* 801A8184 001A50C4  48 00 00 54 */	b .L_801A81D8
.L_801A8188:
/* 801A8188 001A50C8  80 6D 93 90 */	lwz r3, dynParticleMgr__4Game@sda21(r13)
/* 801A818C 001A50CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A8190 001A50D0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801A8194 001A50D4  7D 89 03 A6 */	mtctr r12
/* 801A8198 001A50D8  4E 80 04 21 */	bctrl 
/* 801A819C 001A50DC  28 03 00 00 */	cmplwi r3, 0
/* 801A81A0 001A50E0  40 82 00 14 */	bne .L_801A81B4
/* 801A81A4 001A50E4  7F 83 E3 78 */	mr r3, r28
/* 801A81A8 001A50E8  48 00 00 5D */	bl releaseParticles__Q24Game11DynCreatureFv
/* 801A81AC 001A50EC  38 60 00 00 */	li r3, 0
/* 801A81B0 001A50F0  48 00 00 34 */	b .L_801A81E4
.L_801A81B4:
/* 801A81B4 001A50F4  93 E3 00 1C */	stw r31, 0x1c(r3)
/* 801A81B8 001A50F8  80 1C 01 78 */	lwz r0, 0x178(r28)
/* 801A81BC 001A50FC  28 00 00 00 */	cmplwi r0, 0
/* 801A81C0 001A5100  41 82 00 10 */	beq .L_801A81D0
/* 801A81C4 001A5104  90 03 00 1C */	stw r0, 0x1c(r3)
/* 801A81C8 001A5108  90 7C 01 78 */	stw r3, 0x178(r28)
/* 801A81CC 001A510C  48 00 00 08 */	b .L_801A81D4
.L_801A81D0:
/* 801A81D0 001A5110  90 7C 01 78 */	stw r3, 0x178(r28)
.L_801A81D4:
/* 801A81D4 001A5114  3B DE 00 01 */	addi r30, r30, 1
.L_801A81D8:
/* 801A81D8 001A5118  7C 1E E8 00 */	cmpw r30, r29
/* 801A81DC 001A511C  41 80 FF AC */	blt .L_801A8188
/* 801A81E0 001A5120  38 60 00 01 */	li r3, 1
.L_801A81E4:
/* 801A81E4 001A5124  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A81E8 001A5128  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801A81EC 001A512C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801A81F0 001A5130  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801A81F4 001A5134  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801A81F8 001A5138  7C 08 03 A6 */	mtlr r0
/* 801A81FC 001A513C  38 21 00 20 */	addi r1, r1, 0x20
/* 801A8200 001A5140  4E 80 00 20 */	blr 
.endfn createParticles__Q24Game11DynCreatureFi

.fn releaseParticles__Q24Game11DynCreatureFv, global
/* 801A8204 001A5144  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A8208 001A5148  7C 08 02 A6 */	mflr r0
/* 801A820C 001A514C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A8210 001A5150  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801A8214 001A5154  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801A8218 001A5158  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801A821C 001A515C  7C 7D 1B 78 */	mr r29, r3
/* 801A8220 001A5160  83 C3 01 78 */	lwz r30, 0x178(r3)
/* 801A8224 001A5164  28 1E 00 00 */	cmplwi r30, 0
/* 801A8228 001A5168  41 82 00 34 */	beq .L_801A825C
/* 801A822C 001A516C  3B E0 00 00 */	li r31, 0
/* 801A8230 001A5170  48 00 00 1C */	b .L_801A824C
.L_801A8234:
/* 801A8234 001A5174  80 6D 93 90 */	lwz r3, dynParticleMgr__4Game@sda21(r13)
/* 801A8238 001A5178  7F C4 F3 78 */	mr r4, r30
/* 801A823C 001A517C  48 00 0E E1 */	bl "kill__35MonoObjectMgr<Q24Game11DynParticle>FPQ24Game11DynParticle"
/* 801A8240 001A5180  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 801A8244 001A5184  93 FE 00 1C */	stw r31, 0x1c(r30)
/* 801A8248 001A5188  7C 1E 03 78 */	mr r30, r0
.L_801A824C:
/* 801A824C 001A518C  28 1E 00 00 */	cmplwi r30, 0
/* 801A8250 001A5190  40 82 FF E4 */	bne .L_801A8234
/* 801A8254 001A5194  38 00 00 00 */	li r0, 0
/* 801A8258 001A5198  90 1D 01 78 */	stw r0, 0x178(r29)
.L_801A825C:
/* 801A825C 001A519C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A8260 001A51A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801A8264 001A51A4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801A8268 001A51A8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801A826C 001A51AC  7C 08 03 A6 */	mtlr r0
/* 801A8270 001A51B0  38 21 00 20 */	addi r1, r1, 0x20
/* 801A8274 001A51B4  4E 80 00 20 */	blr 
.endfn releaseParticles__Q24Game11DynCreatureFv

.fn updateParticlePositions__Q24Game11DynCreatureFv, global
/* 801A8278 001A51B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A827C 001A51BC  7C 08 02 A6 */	mflr r0
/* 801A8280 001A51C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A8284 001A51C4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801A8288 001A51C8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801A828C 001A51CC  7C 7E 1B 78 */	mr r30, r3
/* 801A8290 001A51D0  83 E3 01 78 */	lwz r31, 0x178(r3)
/* 801A8294 001A51D4  48 00 00 30 */	b .L_801A82C4
.L_801A8298:
/* 801A8298 001A51D8  7F E4 FB 78 */	mr r4, r31
/* 801A829C 001A51DC  38 7E 01 38 */	addi r3, r30, 0x138
/* 801A82A0 001A51E0  38 A1 00 08 */	addi r5, r1, 8
/* 801A82A4 001A51E4  4B F4 29 35 */	bl PSMTXMultVec
/* 801A82A8 001A51E8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801A82AC 001A51EC  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801A82B0 001A51F0  C0 01 00 08 */	lfs f0, 8(r1)
/* 801A82B4 001A51F4  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 801A82B8 001A51F8  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 801A82BC 001A51FC  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 801A82C0 001A5200  83 FF 00 1C */	lwz r31, 0x1c(r31)
.L_801A82C4:
/* 801A82C4 001A5204  28 1F 00 00 */	cmplwi r31, 0
/* 801A82C8 001A5208  40 82 FF D0 */	bne .L_801A8298
/* 801A82CC 001A520C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A82D0 001A5210  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801A82D4 001A5214  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801A82D8 001A5218  7C 08 03 A6 */	mtlr r0
/* 801A82DC 001A521C  38 21 00 20 */	addi r1, r1, 0x20
/* 801A82E0 001A5220  4E 80 00 20 */	blr 
.endfn updateParticlePositions__Q24Game11DynCreatureFv

.fn computeForces__Q24Game11DynCreatureFf, global
/* 801A82E4 001A5224  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A82E8 001A5228  80 CD 92 68 */	lwz r6, mInstance__13DynamicsParms@sda21(r13)
/* 801A82EC 001A522C  88 06 00 3C */	lbz r0, 0x3c(r6)
/* 801A82F0 001A5230  28 00 00 00 */	cmplwi r0, 0
/* 801A82F4 001A5234  41 82 02 BC */	beq .L_801A85B0
/* 801A82F8 001A5238  80 A3 01 78 */	lwz r5, 0x178(r3)
/* 801A82FC 001A523C  48 00 02 A8 */	b .L_801A85A4
.L_801A8300:
/* 801A8300 001A5240  88 05 00 2C */	lbz r0, 0x2c(r5)
/* 801A8304 001A5244  28 00 00 00 */	cmplwi r0, 0
/* 801A8308 001A5248  41 82 02 98 */	beq .L_801A85A0
/* 801A830C 001A524C  C0 25 00 14 */	lfs f1, 0x14(r5)
/* 801A8310 001A5250  C0 03 03 08 */	lfs f0, 0x308(r3)
/* 801A8314 001A5254  C0 A3 01 D4 */	lfs f5, 0x1d4(r3)
/* 801A8318 001A5258  ED 21 00 28 */	fsubs f9, f1, f0
/* 801A831C 001A525C  C0 65 00 0C */	lfs f3, 0xc(r5)
/* 801A8320 001A5260  C0 23 03 00 */	lfs f1, 0x300(r3)
/* 801A8324 001A5264  C0 45 00 10 */	lfs f2, 0x10(r5)
/* 801A8328 001A5268  C0 03 03 04 */	lfs f0, 0x304(r3)
/* 801A832C 001A526C  EC C3 08 28 */	fsubs f6, f3, f1
/* 801A8330 001A5270  EC 25 02 72 */	fmuls f1, f5, f9
/* 801A8334 001A5274  C0 83 01 DC */	lfs f4, 0x1dc(r3)
/* 801A8338 001A5278  ED 02 00 28 */	fsubs f8, f2, f0
/* 801A833C 001A527C  C0 E3 01 D8 */	lfs f7, 0x1d8(r3)
/* 801A8340 001A5280  C0 03 01 C0 */	lfs f0, 0x1c0(r3)
/* 801A8344 001A5284  EC 64 09 B8 */	fmsubs f3, f4, f6, f1
/* 801A8348 001A5288  EC 44 02 32 */	fmuls f2, f4, f8
/* 801A834C 001A528C  C0 23 01 BC */	lfs f1, 0x1bc(r3)
/* 801A8350 001A5290  EC 87 01 B2 */	fmuls f4, f7, f6
/* 801A8354 001A5294  C0 C5 00 24 */	lfs f6, 0x24(r5)
/* 801A8358 001A5298  EC 03 00 2A */	fadds f0, f3, f0
/* 801A835C 001A529C  EC 67 12 78 */	fmsubs f3, f7, f9, f2
/* 801A8360 001A52A0  EC A5 22 38 */	fmsubs f5, f5, f8, f4
/* 801A8364 001A52A4  C0 83 01 C4 */	lfs f4, 0x1c4(r3)
/* 801A8368 001A52A8  EC 40 01 B2 */	fmuls f2, f0, f6
/* 801A836C 001A52AC  C0 E5 00 20 */	lfs f7, 0x20(r5)
/* 801A8370 001A52B0  ED 03 08 2A */	fadds f8, f3, f1
/* 801A8374 001A52B4  EC 25 20 2A */	fadds f1, f5, f4
/* 801A8378 001A52B8  C0 A5 00 28 */	lfs f5, 0x28(r5)
/* 801A837C 001A52BC  EC 48 11 FA */	fmadds f2, f8, f7, f2
/* 801A8380 001A52C0  C0 63 01 CC */	lfs f3, 0x1cc(r3)
/* 801A8384 001A52C4  C0 83 01 C8 */	lfs f4, 0x1c8(r3)
/* 801A8388 001A52C8  EC 63 01 B2 */	fmuls f3, f3, f6
/* 801A838C 001A52CC  C1 83 01 D0 */	lfs f12, 0x1d0(r3)
/* 801A8390 001A52D0  ED A1 11 7A */	fmadds f13, f1, f5, f2
/* 801A8394 001A52D4  C1 22 AE D8 */	lfs f9, lbl_80519238@sda21(r2)
/* 801A8398 001A52D8  ED 64 19 FA */	fmadds f11, f4, f7, f3
/* 801A839C 001A52DC  EC 46 03 72 */	fmuls f2, f6, f13
/* 801A83A0 001A52E0  ED 47 03 72 */	fmuls f10, f7, f13
/* 801A83A4 001A52E4  EC 85 03 72 */	fmuls f4, f5, f13
/* 801A83A8 001A52E8  EC 60 10 28 */	fsubs f3, f0, f2
/* 801A83AC 001A52EC  EC 48 50 28 */	fsubs f2, f8, f10
/* 801A83B0 001A52F0  EC 81 20 28 */	fsubs f4, f1, f4
/* 801A83B4 001A52F4  ED 43 00 F2 */	fmuls f10, f3, f3
/* 801A83B8 001A52F8  ED 8C 59 7A */	fmadds f12, f12, f5, f11
/* 801A83BC 001A52FC  ED 64 01 32 */	fmuls f11, f4, f4
/* 801A83C0 001A5300  ED 42 50 BA */	fmadds f10, f2, f2, f10
/* 801A83C4 001A5304  ED 4B 50 2A */	fadds f10, f11, f10
/* 801A83C8 001A5308  FC 0A 48 40 */	fcmpo cr0, f10, f9
/* 801A83CC 001A530C  40 81 00 14 */	ble .L_801A83E0
/* 801A83D0 001A5310  40 81 00 14 */	ble .L_801A83E4
/* 801A83D4 001A5314  FD 20 50 34 */	frsqrte f9, f10
/* 801A83D8 001A5318  ED 49 02 B2 */	fmuls f10, f9, f10
/* 801A83DC 001A531C  48 00 00 08 */	b .L_801A83E4
.L_801A83E0:
/* 801A83E0 001A5320  FD 40 48 90 */	fmr f10, f9
.L_801A83E4:
/* 801A83E4 001A5324  C1 22 AE D8 */	lfs f9, lbl_80519238@sda21(r2)
/* 801A83E8 001A5328  FC 0A 48 40 */	fcmpo cr0, f10, f9
/* 801A83EC 001A532C  40 81 00 18 */	ble .L_801A8404
/* 801A83F0 001A5330  C1 22 AE DC */	lfs f9, lbl_8051923C@sda21(r2)
/* 801A83F4 001A5334  ED 29 50 24 */	fdivs f9, f9, f10
/* 801A83F8 001A5338  EC 42 02 72 */	fmuls f2, f2, f9
/* 801A83FC 001A533C  EC 63 02 72 */	fmuls f3, f3, f9
/* 801A8400 001A5340  EC 84 02 72 */	fmuls f4, f4, f9
.L_801A8404:
/* 801A8404 001A5344  ED 47 03 32 */	fmuls f10, f7, f12
/* 801A8408 001A5348  C1 63 01 C8 */	lfs f11, 0x1c8(r3)
/* 801A840C 001A534C  EC E3 00 32 */	fmuls f7, f3, f0
/* 801A8410 001A5350  ED 26 03 32 */	fmuls f9, f6, f12
/* 801A8414 001A5354  ED 4B 50 2A */	fadds f10, f11, f10
/* 801A8418 001A5358  EC C2 3A 3A */	fmadds f6, f2, f8, f7
/* 801A841C 001A535C  EC E5 03 32 */	fmuls f7, f5, f12
/* 801A8420 001A5360  D1 43 01 C8 */	stfs f10, 0x1c8(r3)
/* 801A8424 001A5364  EC A4 30 7A */	fmadds f5, f4, f1, f6
/* 801A8428 001A5368  C0 C3 01 CC */	lfs f6, 0x1cc(r3)
/* 801A842C 001A536C  EC C6 48 2A */	fadds f6, f6, f9
/* 801A8430 001A5370  FC A0 2A 10 */	fabs f5, f5
/* 801A8434 001A5374  D0 C3 01 CC */	stfs f6, 0x1cc(r3)
/* 801A8438 001A5378  FC A0 28 18 */	frsp f5, f5
/* 801A843C 001A537C  C0 C3 01 D0 */	lfs f6, 0x1d0(r3)
/* 801A8440 001A5380  EC C6 38 2A */	fadds f6, f6, f7
/* 801A8444 001A5384  D0 C3 01 D0 */	stfs f6, 0x1d0(r3)
/* 801A8448 001A5388  80 8D 92 68 */	lwz r4, mInstance__13DynamicsParms@sda21(r13)
/* 801A844C 001A538C  C0 C4 00 80 */	lfs f6, 0x80(r4)
/* 801A8450 001A5390  FC 05 30 40 */	fcmpo cr0, f5, f6
/* 801A8454 001A5394  40 80 00 90 */	bge .L_801A84E4
/* 801A8458 001A5398  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801A845C 001A539C  C0 02 AE D8 */	lfs f0, lbl_80519238@sda21(r2)
/* 801A8460 001A53A0  EC A4 01 32 */	fmuls f5, f4, f4
/* 801A8464 001A53A4  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 801A8468 001A53A8  EC 25 08 2A */	fadds f1, f5, f1
/* 801A846C 001A53AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A8470 001A53B0  40 81 00 14 */	ble .L_801A8484
/* 801A8474 001A53B4  40 81 00 14 */	ble .L_801A8488
/* 801A8478 001A53B8  FC 00 08 34 */	frsqrte f0, f1
/* 801A847C 001A53BC  EC 20 00 72 */	fmuls f1, f0, f1
/* 801A8480 001A53C0  48 00 00 08 */	b .L_801A8488
.L_801A8484:
/* 801A8484 001A53C4  FC 20 00 90 */	fmr f1, f0
.L_801A8488:
/* 801A8488 001A53C8  C0 02 AE D8 */	lfs f0, lbl_80519238@sda21(r2)
/* 801A848C 001A53CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A8490 001A53D0  40 81 00 18 */	ble .L_801A84A8
/* 801A8494 001A53D4  C0 02 AE DC */	lfs f0, lbl_8051923C@sda21(r2)
/* 801A8498 001A53D8  EC 00 08 24 */	fdivs f0, f0, f1
/* 801A849C 001A53DC  EC 42 00 32 */	fmuls f2, f2, f0
/* 801A84A0 001A53E0  EC 63 00 32 */	fmuls f3, f3, f0
/* 801A84A4 001A53E4  EC 84 00 32 */	fmuls f4, f4, f0
.L_801A84A8:
/* 801A84A8 001A53E8  80 8D 92 68 */	lwz r4, mInstance__13DynamicsParms@sda21(r13)
/* 801A84AC 001A53EC  C0 03 01 C8 */	lfs f0, 0x1c8(r3)
/* 801A84B0 001A53F0  C0 24 00 58 */	lfs f1, 0x58(r4)
/* 801A84B4 001A53F4  EC 42 00 72 */	fmuls f2, f2, f1
/* 801A84B8 001A53F8  EC 63 00 72 */	fmuls f3, f3, f1
/* 801A84BC 001A53FC  EC 24 00 72 */	fmuls f1, f4, f1
/* 801A84C0 001A5400  EC 00 10 28 */	fsubs f0, f0, f2
/* 801A84C4 001A5404  D0 03 01 C8 */	stfs f0, 0x1c8(r3)
/* 801A84C8 001A5408  C0 03 01 CC */	lfs f0, 0x1cc(r3)
/* 801A84CC 001A540C  EC 00 18 28 */	fsubs f0, f0, f3
/* 801A84D0 001A5410  D0 03 01 CC */	stfs f0, 0x1cc(r3)
/* 801A84D4 001A5414  C0 03 01 D0 */	lfs f0, 0x1d0(r3)
/* 801A84D8 001A5418  EC 00 08 28 */	fsubs f0, f0, f1
/* 801A84DC 001A541C  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 801A84E0 001A5420  48 00 00 C0 */	b .L_801A85A0
.L_801A84E4:
/* 801A84E4 001A5424  C0 85 00 24 */	lfs f4, 0x24(r5)
/* 801A84E8 001A5428  C0 A5 00 20 */	lfs f5, 0x20(r5)
/* 801A84EC 001A542C  EC 60 01 32 */	fmuls f3, f0, f4
/* 801A84F0 001A5430  C0 C5 00 28 */	lfs f6, 0x28(r5)
/* 801A84F4 001A5434  C0 42 AE D8 */	lfs f2, lbl_80519238@sda21(r2)
/* 801A84F8 001A5438  EC 68 19 7A */	fmadds f3, f8, f5, f3
/* 801A84FC 001A543C  EC 61 19 BA */	fmadds f3, f1, f6, f3
/* 801A8500 001A5440  EC 84 00 F2 */	fmuls f4, f4, f3
/* 801A8504 001A5444  EC A5 00 F2 */	fmuls f5, f5, f3
/* 801A8508 001A5448  EC 66 00 F2 */	fmuls f3, f6, f3
/* 801A850C 001A544C  EC C0 20 28 */	fsubs f6, f0, f4
/* 801A8510 001A5450  EC 88 28 28 */	fsubs f4, f8, f5
/* 801A8514 001A5454  EC A1 18 28 */	fsubs f5, f1, f3
/* 801A8518 001A5458  EC 06 01 B2 */	fmuls f0, f6, f6
/* 801A851C 001A545C  EC 25 01 72 */	fmuls f1, f5, f5
/* 801A8520 001A5460  EC 04 01 3A */	fmadds f0, f4, f4, f0
/* 801A8524 001A5464  EC 21 00 2A */	fadds f1, f1, f0
/* 801A8528 001A5468  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 801A852C 001A546C  40 81 00 14 */	ble .L_801A8540
/* 801A8530 001A5470  40 81 00 14 */	ble .L_801A8544
/* 801A8534 001A5474  FC 00 08 34 */	frsqrte f0, f1
/* 801A8538 001A5478  EC 20 00 72 */	fmuls f1, f0, f1
/* 801A853C 001A547C  48 00 00 08 */	b .L_801A8544
.L_801A8540:
/* 801A8540 001A5480  FC 20 10 90 */	fmr f1, f2
.L_801A8544:
/* 801A8544 001A5484  C0 02 AE D8 */	lfs f0, lbl_80519238@sda21(r2)
/* 801A8548 001A5488  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A854C 001A548C  40 81 00 18 */	ble .L_801A8564
/* 801A8550 001A5490  C0 02 AE DC */	lfs f0, lbl_8051923C@sda21(r2)
/* 801A8554 001A5494  EC 00 08 24 */	fdivs f0, f0, f1
/* 801A8558 001A5498  EC 84 00 32 */	fmuls f4, f4, f0
/* 801A855C 001A549C  EC C6 00 32 */	fmuls f6, f6, f0
/* 801A8560 001A54A0  EC A5 00 32 */	fmuls f5, f5, f0
.L_801A8564:
/* 801A8564 001A54A4  80 8D 92 68 */	lwz r4, mInstance__13DynamicsParms@sda21(r13)
/* 801A8568 001A54A8  C0 43 01 C8 */	lfs f2, 0x1c8(r3)
/* 801A856C 001A54AC  C0 04 01 68 */	lfs f0, 0x168(r4)
/* 801A8570 001A54B0  FC 60 00 50 */	fneg f3, f0
/* 801A8574 001A54B4  EC 24 00 F2 */	fmuls f1, f4, f3
/* 801A8578 001A54B8  EC 06 00 F2 */	fmuls f0, f6, f3
/* 801A857C 001A54BC  EC 65 00 F2 */	fmuls f3, f5, f3
/* 801A8580 001A54C0  EC 22 08 2A */	fadds f1, f2, f1
/* 801A8584 001A54C4  D0 23 01 C8 */	stfs f1, 0x1c8(r3)
/* 801A8588 001A54C8  C0 23 01 CC */	lfs f1, 0x1cc(r3)
/* 801A858C 001A54CC  EC 01 00 2A */	fadds f0, f1, f0
/* 801A8590 001A54D0  D0 03 01 CC */	stfs f0, 0x1cc(r3)
/* 801A8594 001A54D4  C0 03 01 D0 */	lfs f0, 0x1d0(r3)
/* 801A8598 001A54D8  EC 00 18 2A */	fadds f0, f0, f3
/* 801A859C 001A54DC  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
.L_801A85A0:
/* 801A85A0 001A54E0  80 A5 00 1C */	lwz r5, 0x1c(r5)
.L_801A85A4:
/* 801A85A4 001A54E4  28 05 00 00 */	cmplwi r5, 0
/* 801A85A8 001A54E8  40 82 FD 58 */	bne .L_801A8300
/* 801A85AC 001A54EC  48 00 02 24 */	b .L_801A87D0
.L_801A85B0:
/* 801A85B0 001A54F0  80 E3 01 78 */	lwz r7, 0x178(r3)
/* 801A85B4 001A54F4  38 80 00 00 */	li r4, 0
/* 801A85B8 001A54F8  39 00 00 00 */	li r8, 0
/* 801A85BC 001A54FC  7C E5 3B 78 */	mr r5, r7
/* 801A85C0 001A5500  48 00 00 1C */	b .L_801A85DC
.L_801A85C4:
/* 801A85C4 001A5504  88 05 00 2C */	lbz r0, 0x2c(r5)
/* 801A85C8 001A5508  28 00 00 00 */	cmplwi r0, 0
/* 801A85CC 001A550C  41 82 00 08 */	beq .L_801A85D4
/* 801A85D0 001A5510  38 84 00 01 */	addi r4, r4, 1
.L_801A85D4:
/* 801A85D4 001A5514  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 801A85D8 001A5518  39 08 00 01 */	addi r8, r8, 1
.L_801A85DC:
/* 801A85DC 001A551C  28 05 00 00 */	cmplwi r5, 0
/* 801A85E0 001A5520  40 82 FF E4 */	bne .L_801A85C4
/* 801A85E4 001A5524  2C 04 00 00 */	cmpwi r4, 0
/* 801A85E8 001A5528  41 82 01 E8 */	beq .L_801A87D0
/* 801A85EC 001A552C  88 06 01 14 */	lbz r0, 0x114(r6)
/* 801A85F0 001A5530  28 00 00 00 */	cmplwi r0, 0
/* 801A85F4 001A5534  41 82 01 DC */	beq .L_801A87D0
/* 801A85F8 001A5538  3C A0 43 30 */	lis r5, 0x4330
/* 801A85FC 001A553C  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 801A8600 001A5540  6D 04 80 00 */	xoris r4, r8, 0x8000
/* 801A8604 001A5544  90 01 00 0C */	stw r0, 0xc(r1)
/* 801A8608 001A5548  88 06 01 4C */	lbz r0, 0x14c(r6)
/* 801A860C 001A554C  90 A1 00 08 */	stw r5, 8(r1)
/* 801A8610 001A5550  C8 62 AE E0 */	lfd f3, lbl_80519240@sda21(r2)
/* 801A8614 001A5554  28 00 00 00 */	cmplwi r0, 0
/* 801A8618 001A5558  C8 01 00 08 */	lfd f0, 8(r1)
/* 801A861C 001A555C  90 81 00 14 */	stw r4, 0x14(r1)
/* 801A8620 001A5560  EC 40 18 28 */	fsubs f2, f0, f3
/* 801A8624 001A5564  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801A8628 001A5568  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801A862C 001A556C  EC 00 18 28 */	fsubs f0, f0, f3
/* 801A8630 001A5570  EC 42 00 24 */	fdivs f2, f2, f0
/* 801A8634 001A5574  41 82 00 08 */	beq .L_801A863C
/* 801A8638 001A5578  C0 26 01 68 */	lfs f1, 0x168(r6)
.L_801A863C:
/* 801A863C 001A557C  FC 00 08 50 */	fneg f0, f1
/* 801A8640 001A5580  7C E5 3B 78 */	mr r5, r7
/* 801A8644 001A5584  EC 60 00 B2 */	fmuls f3, f0, f2
/* 801A8648 001A5588  48 00 01 80 */	b .L_801A87C8
.L_801A864C:
/* 801A864C 001A558C  88 05 00 2C */	lbz r0, 0x2c(r5)
/* 801A8650 001A5590  28 00 00 00 */	cmplwi r0, 0
/* 801A8654 001A5594  41 82 01 70 */	beq .L_801A87C4
/* 801A8658 001A5598  C0 25 00 14 */	lfs f1, 0x14(r5)
/* 801A865C 001A559C  C0 03 03 08 */	lfs f0, 0x308(r3)
/* 801A8660 001A55A0  80 8D 92 68 */	lwz r4, mInstance__13DynamicsParms@sda21(r13)
/* 801A8664 001A55A4  EC 41 00 28 */	fsubs f2, f1, f0
/* 801A8668 001A55A8  C1 43 01 D4 */	lfs f10, 0x1d4(r3)
/* 801A866C 001A55AC  C0 C5 00 0C */	lfs f6, 0xc(r5)
/* 801A8670 001A55B0  C0 03 03 00 */	lfs f0, 0x300(r3)
/* 801A8674 001A55B4  C0 A5 00 10 */	lfs f5, 0x10(r5)
/* 801A8678 001A55B8  EC 8A 00 B2 */	fmuls f4, f10, f2
/* 801A867C 001A55BC  C0 23 03 04 */	lfs f1, 0x304(r3)
/* 801A8680 001A55C0  EC 06 00 28 */	fsubs f0, f6, f0
/* 801A8684 001A55C4  C1 23 01 DC */	lfs f9, 0x1dc(r3)
/* 801A8688 001A55C8  EC 25 08 28 */	fsubs f1, f5, f1
/* 801A868C 001A55CC  C1 63 01 D8 */	lfs f11, 0x1d8(r3)
/* 801A8690 001A55D0  EC E9 20 38 */	fmsubs f7, f9, f0, f4
/* 801A8694 001A55D4  C0 C3 01 C0 */	lfs f6, 0x1c0(r3)
/* 801A8698 001A55D8  ED 0B 00 32 */	fmuls f8, f11, f0
/* 801A869C 001A55DC  88 04 01 30 */	lbz r0, 0x130(r4)
/* 801A86A0 001A55E0  EC 89 00 72 */	fmuls f4, f9, f1
/* 801A86A4 001A55E4  C0 A3 01 BC */	lfs f5, 0x1bc(r3)
/* 801A86A8 001A55E8  ED 27 30 2A */	fadds f9, f7, f6
/* 801A86AC 001A55EC  C1 85 00 24 */	lfs f12, 0x24(r5)
/* 801A86B0 001A55F0  ED 0A 40 78 */	fmsubs f8, f10, f1, f8
/* 801A86B4 001A55F4  C0 E3 01 C4 */	lfs f7, 0x1c4(r3)
/* 801A86B8 001A55F8  EC CB 20 B8 */	fmsubs f6, f11, f2, f4
/* 801A86BC 001A55FC  C1 65 00 20 */	lfs f11, 0x20(r5)
/* 801A86C0 001A5600  EC 89 03 32 */	fmuls f4, f9, f12
/* 801A86C4 001A5604  C1 45 00 28 */	lfs f10, 0x28(r5)
/* 801A86C8 001A5608  EC E8 38 2A */	fadds f7, f8, f7
/* 801A86CC 001A560C  28 00 00 00 */	cmplwi r0, 0
/* 801A86D0 001A5610  ED 06 28 2A */	fadds f8, f6, f5
/* 801A86D4 001A5614  EC 88 22 FA */	fmadds f4, f8, f11, f4
/* 801A86D8 001A5618  EC 87 22 BA */	fmadds f4, f7, f10, f4
/* 801A86DC 001A561C  EC CB 01 32 */	fmuls f6, f11, f4
/* 801A86E0 001A5620  EC AC 01 32 */	fmuls f5, f12, f4
/* 801A86E4 001A5624  EC 8A 01 32 */	fmuls f4, f10, f4
/* 801A86E8 001A5628  EC C8 30 28 */	fsubs f6, f8, f6
/* 801A86EC 001A562C  ED 09 28 28 */	fsubs f8, f9, f5
/* 801A86F0 001A5630  EC E7 20 28 */	fsubs f7, f7, f4
/* 801A86F4 001A5634  41 82 00 54 */	beq .L_801A8748
/* 801A86F8 001A5638  EC A8 02 32 */	fmuls f5, f8, f8
/* 801A86FC 001A563C  C0 82 AE D8 */	lfs f4, lbl_80519238@sda21(r2)
/* 801A8700 001A5640  ED 27 01 F2 */	fmuls f9, f7, f7
/* 801A8704 001A5644  EC A6 29 BA */	fmadds f5, f6, f6, f5
/* 801A8708 001A5648  EC A9 28 2A */	fadds f5, f9, f5
/* 801A870C 001A564C  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 801A8710 001A5650  40 81 00 14 */	ble .L_801A8724
/* 801A8714 001A5654  40 81 00 14 */	ble .L_801A8728
/* 801A8718 001A5658  FC 80 28 34 */	frsqrte f4, f5
/* 801A871C 001A565C  EC A4 01 72 */	fmuls f5, f4, f5
/* 801A8720 001A5660  48 00 00 08 */	b .L_801A8728
.L_801A8724:
/* 801A8724 001A5664  FC A0 20 90 */	fmr f5, f4
.L_801A8728:
/* 801A8728 001A5668  C0 82 AE D8 */	lfs f4, lbl_80519238@sda21(r2)
/* 801A872C 001A566C  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 801A8730 001A5670  40 81 00 18 */	ble .L_801A8748
/* 801A8734 001A5674  C0 82 AE DC */	lfs f4, lbl_8051923C@sda21(r2)
/* 801A8738 001A5678  EC 84 28 24 */	fdivs f4, f4, f5
/* 801A873C 001A567C  EC C6 01 32 */	fmuls f6, f6, f4
/* 801A8740 001A5680  ED 08 01 32 */	fmuls f8, f8, f4
/* 801A8744 001A5684  EC E7 01 32 */	fmuls f7, f7, f4
.L_801A8748:
/* 801A8748 001A5688  ED 46 00 F2 */	fmuls f10, f6, f3
/* 801A874C 001A568C  C0 83 01 C8 */	lfs f4, 0x1c8(r3)
/* 801A8750 001A5690  ED 68 00 F2 */	fmuls f11, f8, f3
/* 801A8754 001A5694  C0 A3 01 CC */	lfs f5, 0x1cc(r3)
/* 801A8758 001A5698  ED 87 00 F2 */	fmuls f12, f7, f3
/* 801A875C 001A569C  C0 C3 01 D0 */	lfs f6, 0x1d0(r3)
/* 801A8760 001A56A0  EC 84 50 2A */	fadds f4, f4, f10
/* 801A8764 001A56A4  EC A5 58 2A */	fadds f5, f5, f11
/* 801A8768 001A56A8  EC C6 60 2A */	fadds f6, f6, f12
/* 801A876C 001A56AC  D0 83 01 C8 */	stfs f4, 0x1c8(r3)
/* 801A8770 001A56B0  D0 A3 01 CC */	stfs f5, 0x1cc(r3)
/* 801A8774 001A56B4  D0 C3 01 D0 */	stfs f6, 0x1d0(r3)
/* 801A8778 001A56B8  80 8D 92 68 */	lwz r4, mInstance__13DynamicsParms@sda21(r13)
/* 801A877C 001A56BC  88 04 01 90 */	lbz r0, 0x190(r4)
/* 801A8780 001A56C0  28 00 00 00 */	cmplwi r0, 0
/* 801A8784 001A56C4  40 82 00 40 */	bne .L_801A87C4
/* 801A8788 001A56C8  EC 82 02 F2 */	fmuls f4, f2, f11
/* 801A878C 001A56CC  C0 A3 01 EC */	lfs f5, 0x1ec(r3)
/* 801A8790 001A56D0  EC C0 03 32 */	fmuls f6, f0, f12
/* 801A8794 001A56D4  C0 E3 01 F0 */	lfs f7, 0x1f0(r3)
/* 801A8798 001A56D8  ED 01 02 B2 */	fmuls f8, f1, f10
/* 801A879C 001A56DC  C1 23 01 F4 */	lfs f9, 0x1f4(r3)
/* 801A87A0 001A56E0  EC 21 23 38 */	fmsubs f1, f1, f12, f4
/* 801A87A4 001A56E4  EC 42 32 B8 */	fmsubs f2, f2, f10, f6
/* 801A87A8 001A56E8  EC 80 42 F8 */	fmsubs f4, f0, f11, f8
/* 801A87AC 001A56EC  EC 05 08 2A */	fadds f0, f5, f1
/* 801A87B0 001A56F0  EC 27 10 2A */	fadds f1, f7, f2
/* 801A87B4 001A56F4  EC 49 20 2A */	fadds f2, f9, f4
/* 801A87B8 001A56F8  D0 03 01 EC */	stfs f0, 0x1ec(r3)
/* 801A87BC 001A56FC  D0 23 01 F0 */	stfs f1, 0x1f0(r3)
/* 801A87C0 001A5700  D0 43 01 F4 */	stfs f2, 0x1f4(r3)
.L_801A87C4:
/* 801A87C4 001A5704  80 A5 00 1C */	lwz r5, 0x1c(r5)
.L_801A87C8:
/* 801A87C8 001A5708  28 05 00 00 */	cmplwi r5, 0
/* 801A87CC 001A570C  40 82 FE 80 */	bne .L_801A864C
.L_801A87D0:
/* 801A87D0 001A5710  38 21 00 20 */	addi r1, r1, 0x20
/* 801A87D4 001A5714  4E 80 00 20 */	blr 
.endfn computeForces__Q24Game11DynCreatureFf

.fn "tracemoveCallback__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>", global
/* 801A87D8 001A5718  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A87DC 001A571C  7C 08 02 A6 */	mflr r0
/* 801A87E0 001A5720  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A87E4 001A5724  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A87E8 001A5728  7C BF 2B 78 */	mr r31, r5
/* 801A87EC 001A572C  7C 85 23 78 */	mr r5, r4
/* 801A87F0 001A5730  38 80 00 00 */	li r4, 0
/* 801A87F4 001A5734  93 C1 00 08 */	stw r30, 8(r1)
/* 801A87F8 001A5738  7C 7E 1B 78 */	mr r30, r3
/* 801A87FC 001A573C  38 7E 01 7C */	addi r3, r30, 0x17c
/* 801A8800 001A5740  80 CD 92 68 */	lwz r6, mInstance__13DynamicsParms@sda21(r13)
/* 801A8804 001A5744  C0 26 00 EC */	lfs f1, 0xec(r6)
/* 801A8808 001A5748  7F E6 FB 78 */	mr r6, r31
/* 801A880C 001A574C  4B F9 23 69 */	bl "resolveCollision__Q24Game5RigidFiR10Vector3<f>R10Vector3<f>f"
/* 801A8810 001A5750  80 1E 03 0C */	lwz r0, 0x30c(r30)
/* 801A8814 001A5754  28 00 00 00 */	cmplwi r0, 0
/* 801A8818 001A5758  41 82 00 5C */	beq .L_801A8874
/* 801A881C 001A575C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A8820 001A5760  41 82 00 54 */	beq .L_801A8874
/* 801A8824 001A5764  88 1E 03 10 */	lbz r0, 0x310(r30)
/* 801A8828 001A5768  28 00 00 00 */	cmplwi r0, 0
/* 801A882C 001A576C  40 82 00 1C */	bne .L_801A8848
/* 801A8830 001A5770  7F C3 F3 78 */	mr r3, r30
/* 801A8834 001A5774  38 80 00 00 */	li r4, 0
/* 801A8838 001A5778  81 9E 00 00 */	lwz r12, 0(r30)
/* 801A883C 001A577C  81 8C 00 E8 */	lwz r12, 0xe8(r12)
/* 801A8840 001A5780  7D 89 03 A6 */	mtctr r12
/* 801A8844 001A5784  4E 80 04 21 */	bctrl 
.L_801A8848:
/* 801A8848 001A5788  38 00 00 01 */	li r0, 1
/* 801A884C 001A578C  98 1E 03 11 */	stb r0, 0x311(r30)
/* 801A8850 001A5790  80 7E 03 0C */	lwz r3, 0x30c(r30)
/* 801A8854 001A5794  98 03 00 2C */	stb r0, 0x2c(r3)
/* 801A8858 001A5798  80 7E 03 0C */	lwz r3, 0x30c(r30)
/* 801A885C 001A579C  C0 1F 00 00 */	lfs f0, 0(r31)
/* 801A8860 001A57A0  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 801A8864 001A57A4  C0 1F 00 04 */	lfs f0, 4(r31)
/* 801A8868 001A57A8  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801A886C 001A57AC  C0 1F 00 08 */	lfs f0, 8(r31)
/* 801A8870 001A57B0  D0 03 00 28 */	stfs f0, 0x28(r3)
.L_801A8874:
/* 801A8874 001A57B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A8878 001A57B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A887C 001A57BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801A8880 001A57C0  7C 08 03 A6 */	mtlr r0
/* 801A8884 001A57C4  38 21 00 10 */	addi r1, r1, 0x10
/* 801A8888 001A57C8  4E 80 00 20 */	blr 
.endfn "tracemoveCallback__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"

.fn simulate__Q24Game11DynCreatureFf, global
/* 801A888C 001A57CC  94 21 FE 70 */	stwu r1, -0x190(r1)
/* 801A8890 001A57D0  7C 08 02 A6 */	mflr r0
/* 801A8894 001A57D4  90 01 01 94 */	stw r0, 0x194(r1)
/* 801A8898 001A57D8  DB E1 01 80 */	stfd f31, 0x180(r1)
/* 801A889C 001A57DC  F3 E1 01 88 */	psq_st f31, 392(r1), 0, qr0
/* 801A88A0 001A57E0  DB C1 01 70 */	stfd f30, 0x170(r1)
/* 801A88A4 001A57E4  F3 C1 01 78 */	psq_st f30, 376(r1), 0, qr0
/* 801A88A8 001A57E8  DB A1 01 60 */	stfd f29, 0x160(r1)
/* 801A88AC 001A57EC  F3 A1 01 68 */	psq_st f29, 360(r1), 0, qr0
/* 801A88B0 001A57F0  DB 81 01 50 */	stfd f28, 0x150(r1)
/* 801A88B4 001A57F4  F3 81 01 58 */	psq_st f28, 344(r1), 0, qr0
/* 801A88B8 001A57F8  DB 61 01 40 */	stfd f27, 0x140(r1)
/* 801A88BC 001A57FC  F3 61 01 48 */	psq_st f27, 328(r1), 0, qr0
/* 801A88C0 001A5800  DB 41 01 30 */	stfd f26, 0x130(r1)
/* 801A88C4 001A5804  F3 41 01 38 */	psq_st f26, 312(r1), 0, qr0
/* 801A88C8 001A5808  DB 21 01 20 */	stfd f25, 0x120(r1)
/* 801A88CC 001A580C  F3 21 01 28 */	psq_st f25, 296(r1), 0, qr0
/* 801A88D0 001A5810  BF 41 01 08 */	stmw r26, 0x108(r1)
/* 801A88D4 001A5814  7C 7A 1B 78 */	mr r26, r3
/* 801A88D8 001A5818  3C A0 80 4B */	lis r5, lbl_804B5218@ha
/* 801A88DC 001A581C  88 C3 03 11 */	lbz r6, 0x311(r3)
/* 801A88E0 001A5820  3C 80 80 4B */	lis r4, "__vt__39IDelegate2<R10Vector3<f>,R10Vector3<f>>"@ha
/* 801A88E4 001A5824  3C 60 80 4B */	lis r3, "__vt__59Delegate2<Q24Game11DynCreature,R10Vector3<f>,R10Vector3<f>>"@ha
/* 801A88E8 001A5828  38 00 00 00 */	li r0, 0
/* 801A88EC 001A582C  98 DA 03 10 */	stb r6, 0x310(r26)
/* 801A88F0 001A5830  38 E5 52 18 */	addi r7, r5, lbl_804B5218@l
/* 801A88F4 001A5834  38 C4 53 E4 */	addi r6, r4, "__vt__39IDelegate2<R10Vector3<f>,R10Vector3<f>>"@l
/* 801A88F8 001A5838  FF 60 08 90 */	fmr f27, f1
/* 801A88FC 001A583C  98 1A 03 11 */	stb r0, 0x311(r26)
/* 801A8900 001A5840  38 03 53 D8 */	addi r0, r3, "__vt__59Delegate2<Q24Game11DynCreature,R10Vector3<f>,R10Vector3<f>>"@l
/* 801A8904 001A5844  38 7A 01 38 */	addi r3, r26, 0x138
/* 801A8908 001A5848  38 9A 02 F4 */	addi r4, r26, 0x2f4
/* 801A890C 001A584C  81 27 00 00 */	lwz r9, 0(r7)
/* 801A8910 001A5850  81 07 00 04 */	lwz r8, 4(r7)
/* 801A8914 001A5854  38 A1 00 14 */	addi r5, r1, 0x14
/* 801A8918 001A5858  80 E7 00 08 */	lwz r7, 8(r7)
/* 801A891C 001A585C  90 C1 00 50 */	stw r6, 0x50(r1)
/* 801A8920 001A5860  91 21 00 44 */	stw r9, 0x44(r1)
/* 801A8924 001A5864  91 01 00 48 */	stw r8, 0x48(r1)
/* 801A8928 001A5868  90 E1 00 4C */	stw r7, 0x4c(r1)
/* 801A892C 001A586C  90 01 00 50 */	stw r0, 0x50(r1)
/* 801A8930 001A5870  93 41 00 54 */	stw r26, 0x54(r1)
/* 801A8934 001A5874  91 21 00 58 */	stw r9, 0x58(r1)
/* 801A8938 001A5878  91 01 00 5C */	stw r8, 0x5c(r1)
/* 801A893C 001A587C  90 E1 00 60 */	stw r7, 0x60(r1)
/* 801A8940 001A5880  4B F4 22 99 */	bl PSMTXMultVec
/* 801A8944 001A5884  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 801A8948 001A5888  FC 20 D8 90 */	fmr f1, f27
/* 801A894C 001A588C  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 801A8950 001A5890  38 7A 01 7C */	addi r3, r26, 0x17c
/* 801A8954 001A5894  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801A8958 001A5898  38 80 00 00 */	li r4, 0
/* 801A895C 001A589C  D0 1A 03 00 */	stfs f0, 0x300(r26)
/* 801A8960 001A58A0  D0 5A 03 04 */	stfs f2, 0x304(r26)
/* 801A8964 001A58A4  D0 7A 03 08 */	stfs f3, 0x308(r26)
/* 801A8968 001A58A8  4B F9 1B 95 */	bl integrate__Q24Game5RigidFfi
/* 801A896C 001A58AC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801A8970 001A58B0  83 7A 01 78 */	lwz r27, 0x178(r26)
/* 801A8974 001A58B4  C3 A2 AE D8 */	lfs f29, lbl_80519238@sda21(r2)
/* 801A8978 001A58B8  3B 83 71 A0 */	addi r28, r3, sincosTable___5JMath@l
/* 801A897C 001A58BC  C3 C2 AE F0 */	lfs f30, lbl_80519250@sda21(r2)
/* 801A8980 001A58C0  3B A1 00 20 */	addi r29, r1, 0x20
/* 801A8984 001A58C4  C3 E2 AE E8 */	lfs f31, lbl_80519248@sda21(r2)
/* 801A8988 001A58C8  3B C1 00 30 */	addi r30, r1, 0x30
/* 801A898C 001A58CC  C3 22 AE DC */	lfs f25, lbl_8051923C@sda21(r2)
/* 801A8990 001A58D0  3B E1 00 50 */	addi r31, r1, 0x50
/* 801A8994 001A58D4  C3 42 AE F4 */	lfs f26, lbl_80519254@sda21(r2)
/* 801A8998 001A58D8  48 00 03 48 */	b .L_801A8CE0
.L_801A899C:
/* 801A899C 001A58DC  7F 64 DB 78 */	mr r4, r27
/* 801A89A0 001A58E0  38 7A 01 38 */	addi r3, r26, 0x138
/* 801A89A4 001A58E4  38 A1 00 08 */	addi r5, r1, 8
/* 801A89A8 001A58E8  4B F4 22 31 */	bl PSMTXMultVec
/* 801A89AC 001A58EC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801A89B0 001A58F0  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801A89B4 001A58F4  C0 01 00 08 */	lfs f0, 8(r1)
/* 801A89B8 001A58F8  D0 1B 00 0C */	stfs f0, 0xc(r27)
/* 801A89BC 001A58FC  D0 3B 00 10 */	stfs f1, 0x10(r27)
/* 801A89C0 001A5900  D0 5B 00 14 */	stfs f2, 0x14(r27)
/* 801A89C4 001A5904  C0 DA 01 D4 */	lfs f6, 0x1d4(r26)
/* 801A89C8 001A5908  D0 C1 00 30 */	stfs f6, 0x30(r1)
/* 801A89CC 001A590C  C0 BA 01 D8 */	lfs f5, 0x1d8(r26)
/* 801A89D0 001A5910  D0 A1 00 34 */	stfs f5, 0x34(r1)
/* 801A89D4 001A5914  C0 9A 01 DC */	lfs f4, 0x1dc(r26)
/* 801A89D8 001A5918  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 801A89DC 001A591C  C0 5B 00 0C */	lfs f2, 0xc(r27)
/* 801A89E0 001A5920  C0 1A 03 00 */	lfs f0, 0x300(r26)
/* 801A89E4 001A5924  C0 7B 00 10 */	lfs f3, 0x10(r27)
/* 801A89E8 001A5928  C0 3A 03 04 */	lfs f1, 0x304(r26)
/* 801A89EC 001A592C  EC E2 00 28 */	fsubs f7, f2, f0
/* 801A89F0 001A5930  C0 5B 00 14 */	lfs f2, 0x14(r27)
/* 801A89F4 001A5934  C0 1A 03 08 */	lfs f0, 0x308(r26)
/* 801A89F8 001A5938  EC 63 08 28 */	fsubs f3, f3, f1
/* 801A89FC 001A593C  EC 25 01 F2 */	fmuls f1, f5, f7
/* 801A8A00 001A5940  EC 42 00 28 */	fsubs f2, f2, f0
/* 801A8A04 001A5944  EC 04 00 F2 */	fmuls f0, f4, f3
/* 801A8A08 001A5948  ED 06 08 F8 */	fmsubs f8, f6, f3, f1
/* 801A8A0C 001A594C  EC 26 00 B2 */	fmuls f1, f6, f2
/* 801A8A10 001A5950  EC 65 00 B8 */	fmsubs f3, f5, f2, f0
/* 801A8A14 001A5954  D1 01 00 38 */	stfs f8, 0x38(r1)
/* 801A8A18 001A5958  EC 44 09 F8 */	fmsubs f2, f4, f7, f1
/* 801A8A1C 001A595C  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 801A8A20 001A5960  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 801A8A24 001A5964  C0 3A 01 C0 */	lfs f1, 0x1c0(r26)
/* 801A8A28 001A5968  C0 1A 01 BC */	lfs f0, 0x1bc(r26)
/* 801A8A2C 001A596C  EC 82 08 2A */	fadds f4, f2, f1
/* 801A8A30 001A5970  C0 5A 01 C4 */	lfs f2, 0x1c4(r26)
/* 801A8A34 001A5974  EC 23 00 2A */	fadds f1, f3, f0
/* 801A8A38 001A5978  EC 48 10 2A */	fadds f2, f8, f2
/* 801A8A3C 001A597C  EC 64 01 32 */	fmuls f3, f4, f4
/* 801A8A40 001A5980  D0 81 00 34 */	stfs f4, 0x34(r1)
/* 801A8A44 001A5984  EC 01 00 72 */	fmuls f0, f1, f1
/* 801A8A48 001A5988  EC 82 00 B2 */	fmuls f4, f2, f2
/* 801A8A4C 001A598C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 801A8A50 001A5990  EC 00 18 2A */	fadds f0, f0, f3
/* 801A8A54 001A5994  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 801A8A58 001A5998  C3 9B 00 18 */	lfs f28, 0x18(r27)
/* 801A8A5C 001A599C  EC 04 00 2A */	fadds f0, f4, f0
/* 801A8A60 001A59A0  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 801A8A64 001A59A4  40 81 00 20 */	ble .L_801A8A84
/* 801A8A68 001A59A8  EC 01 18 7A */	fmadds f0, f1, f1, f3
/* 801A8A6C 001A59AC  EC 04 00 2A */	fadds f0, f4, f0
/* 801A8A70 001A59B0  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 801A8A74 001A59B4  40 81 00 14 */	ble .L_801A8A88
/* 801A8A78 001A59B8  FC 20 00 34 */	frsqrte f1, f0
/* 801A8A7C 001A59BC  EC 01 00 32 */	fmuls f0, f1, f0
/* 801A8A80 001A59C0  48 00 00 08 */	b .L_801A8A88
.L_801A8A84:
/* 801A8A84 001A59C4  FC 00 E8 90 */	fmr f0, f29
.L_801A8A88:
/* 801A8A88 001A59C8  EC 1B 00 32 */	fmuls f0, f27, f0
/* 801A8A8C 001A59CC  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 801A8A90 001A59D0  40 81 00 08 */	ble .L_801A8A98
/* 801A8A94 001A59D4  FC 00 F0 90 */	fmr f0, f30
.L_801A8A98:
/* 801A8A98 001A59D8  C0 3B 00 00 */	lfs f1, 0(r27)
/* 801A8A9C 001A59DC  EF 9C 00 2A */	fadds f28, f28, f0
/* 801A8AA0 001A59E0  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 801A8AA4 001A59E4  41 80 00 10 */	blt .L_801A8AB4
/* 801A8AA8 001A59E8  C0 02 AE EC */	lfs f0, lbl_8051924C@sda21(r2)
/* 801A8AAC 001A59EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A8AB0 001A59F0  40 81 00 0C */	ble .L_801A8ABC
.L_801A8AB4:
/* 801A8AB4 001A59F4  38 00 00 00 */	li r0, 0
/* 801A8AB8 001A59F8  48 00 00 08 */	b .L_801A8AC0
.L_801A8ABC:
/* 801A8ABC 001A59FC  38 00 00 01 */	li r0, 1
.L_801A8AC0:
/* 801A8AC0 001A5A00  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 801A8AC4 001A5A04  7C 03 00 34 */	cntlzw r3, r0
/* 801A8AC8 001A5A08  54 60 DE 3F */	rlwinm. r0, r3, 0x1b, 0x18, 0x1f
/* 801A8ACC 001A5A0C  54 63 D9 7E */	srwi r3, r3, 5
/* 801A8AD0 001A5A10  40 82 00 38 */	bne .L_801A8B08
/* 801A8AD4 001A5A14  C0 3B 00 04 */	lfs f1, 4(r27)
/* 801A8AD8 001A5A18  C0 02 AE E8 */	lfs f0, lbl_80519248@sda21(r2)
/* 801A8ADC 001A5A1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A8AE0 001A5A20  41 80 00 10 */	blt .L_801A8AF0
/* 801A8AE4 001A5A24  C0 02 AE EC */	lfs f0, lbl_8051924C@sda21(r2)
/* 801A8AE8 001A5A28  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A8AEC 001A5A2C  40 81 00 0C */	ble .L_801A8AF8
.L_801A8AF0:
/* 801A8AF0 001A5A30  38 00 00 00 */	li r0, 0
/* 801A8AF4 001A5A34  48 00 00 08 */	b .L_801A8AFC
.L_801A8AF8:
/* 801A8AF8 001A5A38  38 00 00 01 */	li r0, 1
.L_801A8AFC:
/* 801A8AFC 001A5A3C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 801A8B00 001A5A40  7C 00 00 34 */	cntlzw r0, r0
/* 801A8B04 001A5A44  54 03 D9 7E */	srwi r3, r0, 5
.L_801A8B08:
/* 801A8B08 001A5A48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A8B0C 001A5A4C  40 82 00 38 */	bne .L_801A8B44
/* 801A8B10 001A5A50  C0 3B 00 08 */	lfs f1, 8(r27)
/* 801A8B14 001A5A54  C0 02 AE E8 */	lfs f0, lbl_80519248@sda21(r2)
/* 801A8B18 001A5A58  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A8B1C 001A5A5C  41 80 00 10 */	blt .L_801A8B2C
/* 801A8B20 001A5A60  C0 02 AE EC */	lfs f0, lbl_8051924C@sda21(r2)
/* 801A8B24 001A5A64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A8B28 001A5A68  40 81 00 0C */	ble .L_801A8B34
.L_801A8B2C:
/* 801A8B2C 001A5A6C  38 00 00 00 */	li r0, 0
/* 801A8B30 001A5A70  48 00 00 08 */	b .L_801A8B38
.L_801A8B34:
/* 801A8B34 001A5A74  38 00 00 01 */	li r0, 1
.L_801A8B38:
/* 801A8B38 001A5A78  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 801A8B3C 001A5A7C  7C 00 00 34 */	cntlzw r0, r0
/* 801A8B40 001A5A80  54 03 D9 7E */	srwi r3, r0, 5
.L_801A8B44:
/* 801A8B44 001A5A84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A8B48 001A5A88  40 82 00 B8 */	bne .L_801A8C00
/* 801A8B4C 001A5A8C  C0 3B 00 0C */	lfs f1, 0xc(r27)
/* 801A8B50 001A5A90  C0 02 AE E8 */	lfs f0, lbl_80519248@sda21(r2)
/* 801A8B54 001A5A94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A8B58 001A5A98  41 80 00 10 */	blt .L_801A8B68
/* 801A8B5C 001A5A9C  C0 02 AE EC */	lfs f0, lbl_8051924C@sda21(r2)
/* 801A8B60 001A5AA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A8B64 001A5AA4  40 81 00 0C */	ble .L_801A8B70
.L_801A8B68:
/* 801A8B68 001A5AA8  38 00 00 00 */	li r0, 0
/* 801A8B6C 001A5AAC  48 00 00 08 */	b .L_801A8B74
.L_801A8B70:
/* 801A8B70 001A5AB0  38 00 00 01 */	li r0, 1
.L_801A8B74:
/* 801A8B74 001A5AB4  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 801A8B78 001A5AB8  7C 03 00 34 */	cntlzw r3, r0
/* 801A8B7C 001A5ABC  54 60 DE 3F */	rlwinm. r0, r3, 0x1b, 0x18, 0x1f
/* 801A8B80 001A5AC0  54 63 D9 7E */	srwi r3, r3, 5
/* 801A8B84 001A5AC4  40 82 00 38 */	bne .L_801A8BBC
/* 801A8B88 001A5AC8  C0 3B 00 10 */	lfs f1, 0x10(r27)
/* 801A8B8C 001A5ACC  C0 02 AE E8 */	lfs f0, lbl_80519248@sda21(r2)
/* 801A8B90 001A5AD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A8B94 001A5AD4  41 80 00 10 */	blt .L_801A8BA4
/* 801A8B98 001A5AD8  C0 02 AE EC */	lfs f0, lbl_8051924C@sda21(r2)
/* 801A8B9C 001A5ADC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A8BA0 001A5AE0  40 81 00 0C */	ble .L_801A8BAC
.L_801A8BA4:
/* 801A8BA4 001A5AE4  38 00 00 00 */	li r0, 0
/* 801A8BA8 001A5AE8  48 00 00 08 */	b .L_801A8BB0
.L_801A8BAC:
/* 801A8BAC 001A5AEC  38 00 00 01 */	li r0, 1
.L_801A8BB0:
/* 801A8BB0 001A5AF0  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 801A8BB4 001A5AF4  7C 00 00 34 */	cntlzw r0, r0
/* 801A8BB8 001A5AF8  54 03 D9 7E */	srwi r3, r0, 5
.L_801A8BBC:
/* 801A8BBC 001A5AFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A8BC0 001A5B00  40 82 00 38 */	bne .L_801A8BF8
/* 801A8BC4 001A5B04  C0 3B 00 14 */	lfs f1, 0x14(r27)
/* 801A8BC8 001A5B08  C0 02 AE E8 */	lfs f0, lbl_80519248@sda21(r2)
/* 801A8BCC 001A5B0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A8BD0 001A5B10  41 80 00 10 */	blt .L_801A8BE0
/* 801A8BD4 001A5B14  C0 02 AE EC */	lfs f0, lbl_8051924C@sda21(r2)
/* 801A8BD8 001A5B18  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801A8BDC 001A5B1C  40 81 00 0C */	ble .L_801A8BE8
.L_801A8BE0:
/* 801A8BE0 001A5B20  38 00 00 00 */	li r0, 0
/* 801A8BE4 001A5B24  48 00 00 08 */	b .L_801A8BEC
.L_801A8BE8:
/* 801A8BE8 001A5B28  38 00 00 01 */	li r0, 1
.L_801A8BEC:
/* 801A8BEC 001A5B2C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 801A8BF0 001A5B30  7C 00 00 34 */	cntlzw r0, r0
/* 801A8BF4 001A5B34  54 03 D9 7E */	srwi r3, r0, 5
.L_801A8BF8:
/* 801A8BF8 001A5B38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A8BFC 001A5B3C  41 82 00 20 */	beq .L_801A8C1C
.L_801A8C00:
/* 801A8C00 001A5B40  3C 60 80 48 */	lis r3, lbl_8047F630@ha
/* 801A8C04 001A5B44  3C A0 80 48 */	lis r5, lbl_8047F654@ha
/* 801A8C08 001A5B48  38 63 F6 30 */	addi r3, r3, lbl_8047F630@l
/* 801A8C0C 001A5B4C  38 80 01 F1 */	li r4, 0x1f1
/* 801A8C10 001A5B50  38 A5 F6 54 */	addi r5, r5, lbl_8047F654@l
/* 801A8C14 001A5B54  4C C6 31 82 */	crclr 6
/* 801A8C18 001A5B58  4B E8 1A 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801A8C1C:
/* 801A8C1C 001A5B5C  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 801A8C20 001A5B60  38 C0 00 00 */	li r6, 0
/* 801A8C24 001A5B64  38 A0 FF FF */	li r5, -1
/* 801A8C28 001A5B68  38 00 00 01 */	li r0, 1
/* 801A8C2C 001A5B6C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801A8C30 001A5B70  FC 20 D8 90 */	fmr f1, f27
/* 801A8C34 001A5B74  38 81 00 64 */	addi r4, r1, 0x64
/* 801A8C38 001A5B78  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 801A8C3C 001A5B7C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801A8C40 001A5B80  C0 1B 00 14 */	lfs f0, 0x14(r27)
/* 801A8C44 001A5B84  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801A8C48 001A5B88  D3 81 00 2C */	stfs f28, 0x2c(r1)
/* 801A8C4C 001A5B8C  93 7A 03 0C */	stw r27, 0x30c(r26)
/* 801A8C50 001A5B90  80 7A 03 0C */	lwz r3, 0x30c(r26)
/* 801A8C54 001A5B94  98 C3 00 2C */	stb r6, 0x2c(r3)
/* 801A8C58 001A5B98  98 C1 00 7D */	stb r6, 0x7d(r1)
/* 801A8C5C 001A5B9C  C0 1C 08 00 */	lfs f0, 0x800(r28)
/* 801A8C60 001A5BA0  93 A1 00 64 */	stw r29, 0x64(r1)
/* 801A8C64 001A5BA4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801A8C68 001A5BA8  93 C1 00 68 */	stw r30, 0x68(r1)
/* 801A8C6C 001A5BAC  D3 21 00 6C */	stfs f25, 0x6c(r1)
/* 801A8C70 001A5BB0  D3 A1 00 70 */	stfs f29, 0x70(r1)
/* 801A8C74 001A5BB4  93 E1 00 74 */	stw r31, 0x74(r1)
/* 801A8C78 001A5BB8  90 C1 00 A8 */	stw r6, 0xa8(r1)
/* 801A8C7C 001A5BBC  98 C1 00 D8 */	stb r6, 0xd8(r1)
/* 801A8C80 001A5BC0  98 C1 00 7C */	stb r6, 0x7c(r1)
/* 801A8C84 001A5BC4  90 C1 00 AC */	stw r6, 0xac(r1)
/* 801A8C88 001A5BC8  90 C1 00 78 */	stw r6, 0x78(r1)
/* 801A8C8C 001A5BCC  98 C1 00 F4 */	stb r6, 0xf4(r1)
/* 801A8C90 001A5BD0  90 C1 00 F8 */	stw r6, 0xf8(r1)
/* 801A8C94 001A5BD4  D0 01 00 90 */	stfs f0, 0x90(r1)
/* 801A8C98 001A5BD8  D3 41 00 94 */	stfs f26, 0x94(r1)
/* 801A8C9C 001A5BDC  90 A1 00 FC */	stw r5, 0xfc(r1)
/* 801A8CA0 001A5BE0  90 C1 00 B0 */	stw r6, 0xb0(r1)
/* 801A8CA4 001A5BE4  98 C1 00 7E */	stb r6, 0x7e(r1)
/* 801A8CA8 001A5BE8  98 01 00 7D */	stb r0, 0x7d(r1)
/* 801A8CAC 001A5BEC  81 83 00 04 */	lwz r12, 4(r3)
/* 801A8CB0 001A5BF0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801A8CB4 001A5BF4  7D 89 03 A6 */	mtctr r12
/* 801A8CB8 001A5BF8  4E 80 04 21 */	bctrl 
/* 801A8CBC 001A5BFC  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801A8CC0 001A5C00  38 00 00 00 */	li r0, 0
/* 801A8CC4 001A5C04  98 01 00 7D */	stb r0, 0x7d(r1)
/* 801A8CC8 001A5C08  28 03 00 00 */	cmplwi r3, 0
/* 801A8CCC 001A5C0C  41 82 00 10 */	beq .L_801A8CDC
/* 801A8CD0 001A5C10  FC 20 D8 90 */	fmr f1, f27
/* 801A8CD4 001A5C14  38 81 00 64 */	addi r4, r1, 0x64
/* 801A8CD8 001A5C18  48 01 CE E1 */	bl traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof
.L_801A8CDC:
/* 801A8CDC 001A5C1C  83 7B 00 1C */	lwz r27, 0x1c(r27)
.L_801A8CE0:
/* 801A8CE0 001A5C20  28 1B 00 00 */	cmplwi r27, 0
/* 801A8CE4 001A5C24  40 82 FC B8 */	bne .L_801A899C
/* 801A8CE8 001A5C28  E3 E1 01 88 */	psq_l f31, 392(r1), 0, qr0
/* 801A8CEC 001A5C2C  CB E1 01 80 */	lfd f31, 0x180(r1)
/* 801A8CF0 001A5C30  E3 C1 01 78 */	psq_l f30, 376(r1), 0, qr0
/* 801A8CF4 001A5C34  CB C1 01 70 */	lfd f30, 0x170(r1)
/* 801A8CF8 001A5C38  E3 A1 01 68 */	psq_l f29, 360(r1), 0, qr0
/* 801A8CFC 001A5C3C  CB A1 01 60 */	lfd f29, 0x160(r1)
/* 801A8D00 001A5C40  E3 81 01 58 */	psq_l f28, 344(r1), 0, qr0
/* 801A8D04 001A5C44  CB 81 01 50 */	lfd f28, 0x150(r1)
/* 801A8D08 001A5C48  E3 61 01 48 */	psq_l f27, 328(r1), 0, qr0
/* 801A8D0C 001A5C4C  CB 61 01 40 */	lfd f27, 0x140(r1)
/* 801A8D10 001A5C50  E3 41 01 38 */	psq_l f26, 312(r1), 0, qr0
/* 801A8D14 001A5C54  CB 41 01 30 */	lfd f26, 0x130(r1)
/* 801A8D18 001A5C58  E3 21 01 28 */	psq_l f25, 296(r1), 0, qr0
/* 801A8D1C 001A5C5C  CB 21 01 20 */	lfd f25, 0x120(r1)
/* 801A8D20 001A5C60  BB 41 01 08 */	lmw r26, 0x108(r1)
/* 801A8D24 001A5C64  80 01 01 94 */	lwz r0, 0x194(r1)
/* 801A8D28 001A5C68  7C 08 03 A6 */	mtlr r0
/* 801A8D2C 001A5C6C  38 21 01 90 */	addi r1, r1, 0x190
/* 801A8D30 001A5C70  4E 80 00 20 */	blr 
.endfn simulate__Q24Game11DynCreatureFf

.fn getPosition__Q24Game11DynCreatureFv, global
/* 801A8D34 001A5C74  C0 04 01 B0 */	lfs f0, 0x1b0(r4)
/* 801A8D38 001A5C78  D0 03 00 00 */	stfs f0, 0(r3)
/* 801A8D3C 001A5C7C  C0 04 01 B4 */	lfs f0, 0x1b4(r4)
/* 801A8D40 001A5C80  D0 03 00 04 */	stfs f0, 4(r3)
/* 801A8D44 001A5C84  C0 04 01 B8 */	lfs f0, 0x1b8(r4)
/* 801A8D48 001A5C88  D0 03 00 08 */	stfs f0, 8(r3)
/* 801A8D4C 001A5C8C  4E 80 00 20 */	blr 
.endfn getPosition__Q24Game11DynCreatureFv

.fn "onSetPosition__Q24Game11DynCreatureFR10Vector3<f>", global
/* 801A8D50 001A5C90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A8D54 001A5C94  7C 08 02 A6 */	mflr r0
/* 801A8D58 001A5C98  3C A0 80 51 */	lis r5, "zero__10Vector3<f>"@ha
/* 801A8D5C 001A5C9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A8D60 001A5CA0  38 A5 41 E4 */	addi r5, r5, "zero__10Vector3<f>"@l
/* 801A8D64 001A5CA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A8D68 001A5CA8  7C 7F 1B 78 */	mr r31, r3
/* 801A8D6C 001A5CAC  38 7F 01 7C */	addi r3, r31, 0x17c
/* 801A8D70 001A5CB0  4B F9 13 69 */	bl "initPosition__Q24Game5RigidFR10Vector3<f>R10Vector3<f>"
/* 801A8D74 001A5CB4  80 9F 01 80 */	lwz r4, 0x180(r31)
/* 801A8D78 001A5CB8  7F E3 FB 78 */	mr r3, r31
/* 801A8D7C 001A5CBC  80 1F 01 84 */	lwz r0, 0x184(r31)
/* 801A8D80 001A5CC0  90 9F 01 38 */	stw r4, 0x138(r31)
/* 801A8D84 001A5CC4  90 1F 01 3C */	stw r0, 0x13c(r31)
/* 801A8D88 001A5CC8  80 9F 01 88 */	lwz r4, 0x188(r31)
/* 801A8D8C 001A5CCC  80 1F 01 8C */	lwz r0, 0x18c(r31)
/* 801A8D90 001A5CD0  90 9F 01 40 */	stw r4, 0x140(r31)
/* 801A8D94 001A5CD4  90 1F 01 44 */	stw r0, 0x144(r31)
/* 801A8D98 001A5CD8  80 9F 01 90 */	lwz r4, 0x190(r31)
/* 801A8D9C 001A5CDC  80 1F 01 94 */	lwz r0, 0x194(r31)
/* 801A8DA0 001A5CE0  90 9F 01 48 */	stw r4, 0x148(r31)
/* 801A8DA4 001A5CE4  90 1F 01 4C */	stw r0, 0x14c(r31)
/* 801A8DA8 001A5CE8  80 9F 01 98 */	lwz r4, 0x198(r31)
/* 801A8DAC 001A5CEC  80 1F 01 9C */	lwz r0, 0x19c(r31)
/* 801A8DB0 001A5CF0  90 9F 01 50 */	stw r4, 0x150(r31)
/* 801A8DB4 001A5CF4  90 1F 01 54 */	stw r0, 0x154(r31)
/* 801A8DB8 001A5CF8  80 9F 01 A0 */	lwz r4, 0x1a0(r31)
/* 801A8DBC 001A5CFC  80 1F 01 A4 */	lwz r0, 0x1a4(r31)
/* 801A8DC0 001A5D00  90 9F 01 58 */	stw r4, 0x158(r31)
/* 801A8DC4 001A5D04  90 1F 01 5C */	stw r0, 0x15c(r31)
/* 801A8DC8 001A5D08  80 9F 01 A8 */	lwz r4, 0x1a8(r31)
/* 801A8DCC 001A5D0C  80 1F 01 AC */	lwz r0, 0x1ac(r31)
/* 801A8DD0 001A5D10  90 9F 01 60 */	stw r4, 0x160(r31)
/* 801A8DD4 001A5D14  90 1F 01 64 */	stw r0, 0x164(r31)
/* 801A8DD8 001A5D18  81 9F 00 00 */	lwz r12, 0(r31)
/* 801A8DDC 001A5D1C  81 8C 01 B0 */	lwz r12, 0x1b0(r12)
/* 801A8DE0 001A5D20  7D 89 03 A6 */	mtctr r12
/* 801A8DE4 001A5D24  4E 80 04 21 */	bctrl 
/* 801A8DE8 001A5D28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A8DEC 001A5D2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A8DF0 001A5D30  7C 08 03 A6 */	mtlr r0
/* 801A8DF4 001A5D34  38 21 00 10 */	addi r1, r1, 0x10
/* 801A8DF8 001A5D38  4E 80 00 20 */	blr 
.endfn "onSetPosition__Q24Game11DynCreatureFR10Vector3<f>"

.fn onSetPosition__Q24Game11DynCreatureFv, weak
/* 801A8DFC 001A5D3C  4E 80 00 20 */	blr 
.endfn onSetPosition__Q24Game11DynCreatureFv

.fn getVelocity__Q24Game11DynCreatureFv, global
/* 801A8E00 001A5D40  C0 04 01 BC */	lfs f0, 0x1bc(r4)
/* 801A8E04 001A5D44  D0 03 00 00 */	stfs f0, 0(r3)
/* 801A8E08 001A5D48  C0 04 01 C0 */	lfs f0, 0x1c0(r4)
/* 801A8E0C 001A5D4C  D0 03 00 04 */	stfs f0, 4(r3)
/* 801A8E10 001A5D50  C0 04 01 C4 */	lfs f0, 0x1c4(r4)
/* 801A8E14 001A5D54  D0 03 00 08 */	stfs f0, 8(r3)
/* 801A8E18 001A5D58  4E 80 00 20 */	blr 
.endfn getVelocity__Q24Game11DynCreatureFv

.fn "setVelocity__Q24Game11DynCreatureFR10Vector3<f>", global
/* 801A8E1C 001A5D5C  C0 04 00 00 */	lfs f0, 0(r4)
/* 801A8E20 001A5D60  D0 03 01 BC */	stfs f0, 0x1bc(r3)
/* 801A8E24 001A5D64  C0 04 00 04 */	lfs f0, 4(r4)
/* 801A8E28 001A5D68  D0 03 01 C0 */	stfs f0, 0x1c0(r3)
/* 801A8E2C 001A5D6C  C0 04 00 08 */	lfs f0, 8(r4)
/* 801A8E30 001A5D70  D0 03 01 C4 */	stfs f0, 0x1c4(r3)
/* 801A8E34 001A5D74  4E 80 00 20 */	blr 
.endfn "setVelocity__Q24Game11DynCreatureFR10Vector3<f>"

.fn "getVelocityAt__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>", global
/* 801A8E38 001A5D78  C0 03 01 BC */	lfs f0, 0x1bc(r3)
/* 801A8E3C 001A5D7C  D0 05 00 00 */	stfs f0, 0(r5)
/* 801A8E40 001A5D80  C0 03 01 C0 */	lfs f0, 0x1c0(r3)
/* 801A8E44 001A5D84  D0 05 00 04 */	stfs f0, 4(r5)
/* 801A8E48 001A5D88  C0 03 01 C4 */	lfs f0, 0x1c4(r3)
/* 801A8E4C 001A5D8C  D0 05 00 08 */	stfs f0, 8(r5)
/* 801A8E50 001A5D90  C0 24 00 04 */	lfs f1, 4(r4)
/* 801A8E54 001A5D94  C0 03 01 B4 */	lfs f0, 0x1b4(r3)
/* 801A8E58 001A5D98  C0 64 00 08 */	lfs f3, 8(r4)
/* 801A8E5C 001A5D9C  C0 43 01 B8 */	lfs f2, 0x1b8(r3)
/* 801A8E60 001A5DA0  EC E1 00 28 */	fsubs f7, f1, f0
/* 801A8E64 001A5DA4  C1 43 01 DC */	lfs f10, 0x1dc(r3)
/* 801A8E68 001A5DA8  EC 83 10 28 */	fsubs f4, f3, f2
/* 801A8E6C 001A5DAC  C1 03 01 D4 */	lfs f8, 0x1d4(r3)
/* 801A8E70 001A5DB0  C0 44 00 00 */	lfs f2, 0(r4)
/* 801A8E74 001A5DB4  EC 0A 01 F2 */	fmuls f0, f10, f7
/* 801A8E78 001A5DB8  C0 23 01 B0 */	lfs f1, 0x1b0(r3)
/* 801A8E7C 001A5DBC  C1 23 01 D8 */	lfs f9, 0x1d8(r3)
/* 801A8E80 001A5DC0  EC C2 08 28 */	fsubs f6, f2, f1
/* 801A8E84 001A5DC4  C0 25 00 00 */	lfs f1, 0(r5)
/* 801A8E88 001A5DC8  EC 48 01 32 */	fmuls f2, f8, f4
/* 801A8E8C 001A5DCC  C0 65 00 04 */	lfs f3, 4(r5)
/* 801A8E90 001A5DD0  EC 09 01 38 */	fmsubs f0, f9, f4, f0
/* 801A8E94 001A5DD4  C0 A5 00 08 */	lfs f5, 8(r5)
/* 801A8E98 001A5DD8  EC 89 01 B2 */	fmuls f4, f9, f6
/* 801A8E9C 001A5DDC  EC 4A 11 B8 */	fmsubs f2, f10, f6, f2
/* 801A8EA0 001A5DE0  EC 01 00 2A */	fadds f0, f1, f0
/* 801A8EA4 001A5DE4  EC 28 21 F8 */	fmsubs f1, f8, f7, f4
/* 801A8EA8 001A5DE8  EC 43 10 2A */	fadds f2, f3, f2
/* 801A8EAC 001A5DEC  D0 05 00 00 */	stfs f0, 0(r5)
/* 801A8EB0 001A5DF0  EC 05 08 2A */	fadds f0, f5, f1
/* 801A8EB4 001A5DF4  D0 45 00 04 */	stfs f2, 4(r5)
/* 801A8EB8 001A5DF8  D0 05 00 08 */	stfs f0, 8(r5)
/* 801A8EBC 001A5DFC  4E 80 00 20 */	blr 
.endfn "getVelocityAt__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"

.fn "getAngularEffect__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>", global
/* 801A8EC0 001A5E00  C0 22 AE D8 */	lfs f1, lbl_80519238@sda21(r2)
/* 801A8EC4 001A5E04  4E 80 00 20 */	blr 
.endfn "getAngularEffect__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"

.fn "applyImpulse__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>", global
/* 801A8EC8 001A5E08  C0 C3 01 18 */	lfs f6, 0x118(r3)
/* 801A8ECC 001A5E0C  C0 05 00 00 */	lfs f0, 0(r5)
/* 801A8ED0 001A5E10  C0 45 00 04 */	lfs f2, 4(r5)
/* 801A8ED4 001A5E14  EC 00 01 B2 */	fmuls f0, f0, f6
/* 801A8ED8 001A5E18  C0 23 01 BC */	lfs f1, 0x1bc(r3)
/* 801A8EDC 001A5E1C  C0 85 00 08 */	lfs f4, 8(r5)
/* 801A8EE0 001A5E20  EC 42 01 B2 */	fmuls f2, f2, f6
/* 801A8EE4 001A5E24  C0 63 01 C0 */	lfs f3, 0x1c0(r3)
/* 801A8EE8 001A5E28  EC 01 00 2A */	fadds f0, f1, f0
/* 801A8EEC 001A5E2C  C0 A3 01 C4 */	lfs f5, 0x1c4(r3)
/* 801A8EF0 001A5E30  EC 24 01 B2 */	fmuls f1, f4, f6
/* 801A8EF4 001A5E34  EC 43 10 2A */	fadds f2, f3, f2
/* 801A8EF8 001A5E38  D0 03 01 BC */	stfs f0, 0x1bc(r3)
/* 801A8EFC 001A5E3C  EC 05 08 2A */	fadds f0, f5, f1
/* 801A8F00 001A5E40  D0 43 01 C0 */	stfs f2, 0x1c0(r3)
/* 801A8F04 001A5E44  D0 03 01 C4 */	stfs f0, 0x1c4(r3)
/* 801A8F08 001A5E48  4E 80 00 20 */	blr 
.endfn "applyImpulse__Q24Game11DynCreatureFR10Vector3<f>R10Vector3<f>"

.fn __dt__Q24Game14DynParticleMgrFv, weak
/* 801A8F0C 001A5E4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A8F10 001A5E50  7C 08 02 A6 */	mflr r0
/* 801A8F14 001A5E54  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A8F18 001A5E58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A8F1C 001A5E5C  7C 9F 23 78 */	mr r31, r4
/* 801A8F20 001A5E60  93 C1 00 08 */	stw r30, 8(r1)
/* 801A8F24 001A5E64  7C 7E 1B 79 */	or. r30, r3, r3
/* 801A8F28 001A5E68  41 82 00 80 */	beq .L_801A8FA8
/* 801A8F2C 001A5E6C  3C 80 80 4B */	lis r4, __vt__Q24Game14DynParticleMgr@ha
/* 801A8F30 001A5E70  38 84 53 F0 */	addi r4, r4, __vt__Q24Game14DynParticleMgr@l
/* 801A8F34 001A5E74  90 9E 00 00 */	stw r4, 0(r30)
/* 801A8F38 001A5E78  38 04 00 2C */	addi r0, r4, 0x2c
/* 801A8F3C 001A5E7C  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801A8F40 001A5E80  41 82 00 58 */	beq .L_801A8F98
/* 801A8F44 001A5E84  3C 80 80 4B */	lis r4, "__vt__35MonoObjectMgr<Q24Game11DynParticle>"@ha
/* 801A8F48 001A5E88  38 84 55 24 */	addi r4, r4, "__vt__35MonoObjectMgr<Q24Game11DynParticle>"@l
/* 801A8F4C 001A5E8C  90 9E 00 00 */	stw r4, 0(r30)
/* 801A8F50 001A5E90  38 04 00 2C */	addi r0, r4, 0x2c
/* 801A8F54 001A5E94  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801A8F58 001A5E98  41 82 00 40 */	beq .L_801A8F98
/* 801A8F5C 001A5E9C  3C 80 80 4B */	lis r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@ha
/* 801A8F60 001A5EA0  38 84 54 A8 */	addi r4, r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@l
/* 801A8F64 001A5EA4  90 9E 00 00 */	stw r4, 0(r30)
/* 801A8F68 001A5EA8  38 04 00 2C */	addi r0, r4, 0x2c
/* 801A8F6C 001A5EAC  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801A8F70 001A5EB0  41 82 00 28 */	beq .L_801A8F98
/* 801A8F74 001A5EB4  3C 80 80 4B */	lis r4, "__vt__31Container<Q24Game11DynParticle>"@ha
/* 801A8F78 001A5EB8  38 04 54 7C */	addi r0, r4, "__vt__31Container<Q24Game11DynParticle>"@l
/* 801A8F7C 001A5EBC  90 1E 00 00 */	stw r0, 0(r30)
/* 801A8F80 001A5EC0  41 82 00 18 */	beq .L_801A8F98
/* 801A8F84 001A5EC4  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801A8F88 001A5EC8  38 80 00 00 */	li r4, 0
/* 801A8F8C 001A5ECC  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801A8F90 001A5ED0  90 1E 00 00 */	stw r0, 0(r30)
/* 801A8F94 001A5ED4  48 26 85 F5 */	bl __dt__5CNodeFv
.L_801A8F98:
/* 801A8F98 001A5ED8  7F E0 07 35 */	extsh. r0, r31
/* 801A8F9C 001A5EDC  40 81 00 0C */	ble .L_801A8FA8
/* 801A8FA0 001A5EE0  7F C3 F3 78 */	mr r3, r30
/* 801A8FA4 001A5EE4  4B E7 B1 11 */	bl __dl__FPv
.L_801A8FA8:
/* 801A8FA8 001A5EE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A8FAC 001A5EEC  7F C3 F3 78 */	mr r3, r30
/* 801A8FB0 001A5EF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A8FB4 001A5EF4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801A8FB8 001A5EF8  7C 08 03 A6 */	mtlr r0
/* 801A8FBC 001A5EFC  38 21 00 10 */	addi r1, r1, 0x10
/* 801A8FC0 001A5F00  4E 80 00 20 */	blr 
.endfn __dt__Q24Game14DynParticleMgrFv

.fn "__dt__31Container<Q24Game11DynParticle>Fv", weak
/* 801A8FC4 001A5F04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A8FC8 001A5F08  7C 08 02 A6 */	mflr r0
/* 801A8FCC 001A5F0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A8FD0 001A5F10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A8FD4 001A5F14  7C 9F 23 78 */	mr r31, r4
/* 801A8FD8 001A5F18  93 C1 00 08 */	stw r30, 8(r1)
/* 801A8FDC 001A5F1C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801A8FE0 001A5F20  41 82 00 38 */	beq .L_801A9018
/* 801A8FE4 001A5F24  3C 80 80 4B */	lis r4, "__vt__31Container<Q24Game11DynParticle>"@ha
/* 801A8FE8 001A5F28  38 04 54 7C */	addi r0, r4, "__vt__31Container<Q24Game11DynParticle>"@l
/* 801A8FEC 001A5F2C  90 1E 00 00 */	stw r0, 0(r30)
/* 801A8FF0 001A5F30  41 82 00 18 */	beq .L_801A9008
/* 801A8FF4 001A5F34  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801A8FF8 001A5F38  38 80 00 00 */	li r4, 0
/* 801A8FFC 001A5F3C  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801A9000 001A5F40  90 1E 00 00 */	stw r0, 0(r30)
/* 801A9004 001A5F44  48 26 85 85 */	bl __dt__5CNodeFv
.L_801A9008:
/* 801A9008 001A5F48  7F E0 07 35 */	extsh. r0, r31
/* 801A900C 001A5F4C  40 81 00 0C */	ble .L_801A9018
/* 801A9010 001A5F50  7F C3 F3 78 */	mr r3, r30
/* 801A9014 001A5F54  4B E7 B0 A1 */	bl __dl__FPv
.L_801A9018:
/* 801A9018 001A5F58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A901C 001A5F5C  7F C3 F3 78 */	mr r3, r30
/* 801A9020 001A5F60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A9024 001A5F64  83 C1 00 08 */	lwz r30, 8(r1)
/* 801A9028 001A5F68  7C 08 03 A6 */	mtlr r0
/* 801A902C 001A5F6C  38 21 00 10 */	addi r1, r1, 0x10
/* 801A9030 001A5F70  4E 80 00 20 */	blr 
.endfn "__dt__31Container<Q24Game11DynParticle>Fv"

.fn "__dt__31ObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A9034 001A5F74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A9038 001A5F78  7C 08 02 A6 */	mflr r0
/* 801A903C 001A5F7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A9040 001A5F80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A9044 001A5F84  7C 9F 23 78 */	mr r31, r4
/* 801A9048 001A5F88  93 C1 00 08 */	stw r30, 8(r1)
/* 801A904C 001A5F8C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801A9050 001A5F90  41 82 00 50 */	beq .L_801A90A0
/* 801A9054 001A5F94  3C 80 80 4B */	lis r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@ha
/* 801A9058 001A5F98  38 84 54 A8 */	addi r4, r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@l
/* 801A905C 001A5F9C  90 9E 00 00 */	stw r4, 0(r30)
/* 801A9060 001A5FA0  38 04 00 2C */	addi r0, r4, 0x2c
/* 801A9064 001A5FA4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801A9068 001A5FA8  41 82 00 28 */	beq .L_801A9090
/* 801A906C 001A5FAC  3C 80 80 4B */	lis r4, "__vt__31Container<Q24Game11DynParticle>"@ha
/* 801A9070 001A5FB0  38 04 54 7C */	addi r0, r4, "__vt__31Container<Q24Game11DynParticle>"@l
/* 801A9074 001A5FB4  90 1E 00 00 */	stw r0, 0(r30)
/* 801A9078 001A5FB8  41 82 00 18 */	beq .L_801A9090
/* 801A907C 001A5FBC  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801A9080 001A5FC0  38 80 00 00 */	li r4, 0
/* 801A9084 001A5FC4  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801A9088 001A5FC8  90 1E 00 00 */	stw r0, 0(r30)
/* 801A908C 001A5FCC  48 26 84 FD */	bl __dt__5CNodeFv
.L_801A9090:
/* 801A9090 001A5FD0  7F E0 07 35 */	extsh. r0, r31
/* 801A9094 001A5FD4  40 81 00 0C */	ble .L_801A90A0
/* 801A9098 001A5FD8  7F C3 F3 78 */	mr r3, r30
/* 801A909C 001A5FDC  4B E7 B0 19 */	bl __dl__FPv
.L_801A90A0:
/* 801A90A0 001A5FE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A90A4 001A5FE4  7F C3 F3 78 */	mr r3, r30
/* 801A90A8 001A5FE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A90AC 001A5FEC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801A90B0 001A5FF0  7C 08 03 A6 */	mtlr r0
/* 801A90B4 001A5FF4  38 21 00 10 */	addi r1, r1, 0x10
/* 801A90B8 001A5FF8  4E 80 00 20 */	blr 
.endfn "__dt__31ObjectMgr<Q24Game11DynParticle>Fv"

.fn "birth__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A90BC 001A5FFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A90C0 001A6000  7C 08 02 A6 */	mflr r0
/* 801A90C4 001A6004  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A90C8 001A6008  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A90CC 001A600C  7C 7F 1B 78 */	mr r31, r3
/* 801A90D0 001A6010  48 00 04 AD */	bl "getEmptyIndex__35MonoObjectMgr<Q24Game11DynParticle>Fv"
/* 801A90D4 001A6014  2C 03 FF FF */	cmpwi r3, -1
/* 801A90D8 001A6018  41 82 00 2C */	beq .L_801A9104
/* 801A90DC 001A601C  80 DF 00 28 */	lwz r6, 0x28(r31)
/* 801A90E0 001A6020  38 00 00 00 */	li r0, 0
/* 801A90E4 001A6024  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 801A90E8 001A6028  1C A3 00 34 */	mulli r5, r3, 0x34
/* 801A90EC 001A602C  7C 04 19 AE */	stbx r0, r4, r3
/* 801A90F0 001A6030  7C 66 2A 14 */	add r3, r6, r5
/* 801A90F4 001A6034  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 801A90F8 001A6038  38 04 00 01 */	addi r0, r4, 1
/* 801A90FC 001A603C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801A9100 001A6040  48 00 00 08 */	b .L_801A9108
.L_801A9104:
/* 801A9104 001A6044  38 60 00 00 */	li r3, 0
.L_801A9108:
/* 801A9108 001A6048  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A910C 001A604C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A9110 001A6050  7C 08 03 A6 */	mtlr r0
/* 801A9114 001A6054  38 21 00 10 */	addi r1, r1, 0x10
/* 801A9118 001A6058  4E 80 00 20 */	blr 
.endfn "birth__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "kill__35MonoObjectMgr<Q24Game11DynParticle>FPQ24Game11DynParticle", weak
/* 801A911C 001A605C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801A9120 001A6060  38 C0 00 00 */	li r6, 0
/* 801A9124 001A6064  38 A0 00 00 */	li r5, 0
/* 801A9128 001A6068  7C 09 03 A6 */	mtctr r0
/* 801A912C 001A606C  2C 00 00 00 */	cmpwi r0, 0
/* 801A9130 001A6070  4C 81 00 20 */	blelr 
.L_801A9134:
/* 801A9134 001A6074  80 03 00 28 */	lwz r0, 0x28(r3)
/* 801A9138 001A6078  7C 00 2A 14 */	add r0, r0, r5
/* 801A913C 001A607C  7C 00 20 40 */	cmplw r0, r4
/* 801A9140 001A6080  40 82 00 20 */	bne .L_801A9160
/* 801A9144 001A6084  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801A9148 001A6088  38 00 00 01 */	li r0, 1
/* 801A914C 001A608C  7C 04 31 AE */	stbx r0, r4, r6
/* 801A9150 001A6090  80 83 00 20 */	lwz r4, 0x20(r3)
/* 801A9154 001A6094  38 04 FF FF */	addi r0, r4, -1
/* 801A9158 001A6098  90 03 00 20 */	stw r0, 0x20(r3)
/* 801A915C 001A609C  4E 80 00 20 */	blr 
.L_801A9160:
/* 801A9160 001A60A0  38 A5 00 34 */	addi r5, r5, 0x34
/* 801A9164 001A60A4  38 C6 00 01 */	addi r6, r6, 1
/* 801A9168 001A60A8  42 00 FF CC */	bdnz .L_801A9134
/* 801A916C 001A60AC  4E 80 00 20 */	blr 
.endfn "kill__35MonoObjectMgr<Q24Game11DynParticle>FPQ24Game11DynParticle"

.fn "getNext__35MonoObjectMgr<Q24Game11DynParticle>FPv", weak
/* 801A9170 001A60B0  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 801A9174 001A60B4  38 C4 00 01 */	addi r6, r4, 1
/* 801A9178 001A60B8  7C 06 28 50 */	subf r0, r6, r5
/* 801A917C 001A60BC  7C 09 03 A6 */	mtctr r0
/* 801A9180 001A60C0  7C 06 28 00 */	cmpw r6, r5
/* 801A9184 001A60C4  40 80 00 24 */	bge .L_801A91A8
.L_801A9188:
/* 801A9188 001A60C8  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801A918C 001A60CC  7C 04 30 AE */	lbzx r0, r4, r6
/* 801A9190 001A60D0  28 00 00 00 */	cmplwi r0, 0
/* 801A9194 001A60D4  40 82 00 0C */	bne .L_801A91A0
/* 801A9198 001A60D8  7C C3 33 78 */	mr r3, r6
/* 801A919C 001A60DC  4E 80 00 20 */	blr 
.L_801A91A0:
/* 801A91A0 001A60E0  38 C6 00 01 */	addi r6, r6, 1
/* 801A91A4 001A60E4  42 00 FF E4 */	bdnz .L_801A9188
.L_801A91A8:
/* 801A91A8 001A60E8  7C A3 2B 78 */	mr r3, r5
/* 801A91AC 001A60EC  4E 80 00 20 */	blr 
.endfn "getNext__35MonoObjectMgr<Q24Game11DynParticle>FPv"

.fn "getStart__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A91B0 001A60F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A91B4 001A60F4  7C 08 02 A6 */	mflr r0
/* 801A91B8 001A60F8  38 80 FF FF */	li r4, -1
/* 801A91BC 001A60FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A91C0 001A6100  81 83 00 00 */	lwz r12, 0(r3)
/* 801A91C4 001A6104  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A91C8 001A6108  7D 89 03 A6 */	mtctr r12
/* 801A91CC 001A610C  4E 80 04 21 */	bctrl 
/* 801A91D0 001A6110  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A91D4 001A6114  7C 08 03 A6 */	mtlr r0
/* 801A91D8 001A6118  38 21 00 10 */	addi r1, r1, 0x10
/* 801A91DC 001A611C  4E 80 00 20 */	blr 
.endfn "getStart__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "getEnd__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A91E0 001A6120  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801A91E4 001A6124  4E 80 00 20 */	blr 
.endfn "getEnd__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "getAt__35MonoObjectMgr<Q24Game11DynParticle>Fi", weak
/* 801A91E8 001A6128  1C 04 00 34 */	mulli r0, r4, 0x34
/* 801A91EC 001A612C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801A91F0 001A6130  7C 63 02 14 */	add r3, r3, r0
/* 801A91F4 001A6134  4E 80 00 20 */	blr 
.endfn "getAt__35MonoObjectMgr<Q24Game11DynParticle>Fi"

.fn "getTo__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A91F8 001A6138  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801A91FC 001A613C  4E 80 00 20 */	blr 
.endfn "getTo__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "doAnimation__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A9200 001A6140  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A9204 001A6144  7C 08 02 A6 */	mflr r0
/* 801A9208 001A6148  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A920C 001A614C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801A9210 001A6150  3B E0 00 00 */	li r31, 0
/* 801A9214 001A6154  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801A9218 001A6158  3B C0 00 00 */	li r30, 0
/* 801A921C 001A615C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801A9220 001A6160  7C 7D 1B 78 */	mr r29, r3
/* 801A9224 001A6164  48 00 00 34 */	b .L_801A9258
.L_801A9228:
/* 801A9228 001A6168  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801A922C 001A616C  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801A9230 001A6170  28 00 00 00 */	cmplwi r0, 0
/* 801A9234 001A6174  40 82 00 1C */	bne .L_801A9250
/* 801A9238 001A6178  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801A923C 001A617C  7C 60 FA 14 */	add r3, r0, r31
/* 801A9240 001A6180  81 83 00 30 */	lwz r12, 0x30(r3)
/* 801A9244 001A6184  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801A9248 001A6188  7D 89 03 A6 */	mtctr r12
/* 801A924C 001A618C  4E 80 04 21 */	bctrl 
.L_801A9250:
/* 801A9250 001A6190  3B FF 00 34 */	addi r31, r31, 0x34
/* 801A9254 001A6194  3B DE 00 01 */	addi r30, r30, 1
.L_801A9258:
/* 801A9258 001A6198  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801A925C 001A619C  7C 1E 00 00 */	cmpw r30, r0
/* 801A9260 001A61A0  41 80 FF C8 */	blt .L_801A9228
/* 801A9264 001A61A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A9268 001A61A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801A926C 001A61AC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801A9270 001A61B0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801A9274 001A61B4  7C 08 03 A6 */	mtlr r0
/* 801A9278 001A61B8  38 21 00 20 */	addi r1, r1, 0x20
/* 801A927C 001A61BC  4E 80 00 20 */	blr 
.endfn "doAnimation__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "doEntry__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A9280 001A61C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A9284 001A61C4  7C 08 02 A6 */	mflr r0
/* 801A9288 001A61C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A928C 001A61CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801A9290 001A61D0  3B E0 00 00 */	li r31, 0
/* 801A9294 001A61D4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801A9298 001A61D8  3B C0 00 00 */	li r30, 0
/* 801A929C 001A61DC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801A92A0 001A61E0  7C 7D 1B 78 */	mr r29, r3
/* 801A92A4 001A61E4  48 00 00 34 */	b .L_801A92D8
.L_801A92A8:
/* 801A92A8 001A61E8  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801A92AC 001A61EC  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801A92B0 001A61F0  28 00 00 00 */	cmplwi r0, 0
/* 801A92B4 001A61F4  40 82 00 1C */	bne .L_801A92D0
/* 801A92B8 001A61F8  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801A92BC 001A61FC  7C 60 FA 14 */	add r3, r0, r31
/* 801A92C0 001A6200  81 83 00 30 */	lwz r12, 0x30(r3)
/* 801A92C4 001A6204  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A92C8 001A6208  7D 89 03 A6 */	mtctr r12
/* 801A92CC 001A620C  4E 80 04 21 */	bctrl 
.L_801A92D0:
/* 801A92D0 001A6210  3B FF 00 34 */	addi r31, r31, 0x34
/* 801A92D4 001A6214  3B DE 00 01 */	addi r30, r30, 1
.L_801A92D8:
/* 801A92D8 001A6218  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801A92DC 001A621C  7C 1E 00 00 */	cmpw r30, r0
/* 801A92E0 001A6220  41 80 FF C8 */	blt .L_801A92A8
/* 801A92E4 001A6224  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A92E8 001A6228  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801A92EC 001A622C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801A92F0 001A6230  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801A92F4 001A6234  7C 08 03 A6 */	mtlr r0
/* 801A92F8 001A6238  38 21 00 20 */	addi r1, r1, 0x20
/* 801A92FC 001A623C  4E 80 00 20 */	blr 
.endfn "doEntry__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "doSetView__35MonoObjectMgr<Q24Game11DynParticle>Fi", weak
/* 801A9300 001A6240  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A9304 001A6244  7C 08 02 A6 */	mflr r0
/* 801A9308 001A6248  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A930C 001A624C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801A9310 001A6250  3B E0 00 00 */	li r31, 0
/* 801A9314 001A6254  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801A9318 001A6258  7C 9E 23 78 */	mr r30, r4
/* 801A931C 001A625C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801A9320 001A6260  3B A0 00 00 */	li r29, 0
/* 801A9324 001A6264  93 81 00 10 */	stw r28, 0x10(r1)
/* 801A9328 001A6268  7C 7C 1B 78 */	mr r28, r3
/* 801A932C 001A626C  48 00 00 38 */	b .L_801A9364
.L_801A9330:
/* 801A9330 001A6270  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 801A9334 001A6274  7C 03 E8 AE */	lbzx r0, r3, r29
/* 801A9338 001A6278  28 00 00 00 */	cmplwi r0, 0
/* 801A933C 001A627C  40 82 00 20 */	bne .L_801A935C
/* 801A9340 001A6280  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 801A9344 001A6284  7F C4 F3 78 */	mr r4, r30
/* 801A9348 001A6288  7C 60 FA 14 */	add r3, r0, r31
/* 801A934C 001A628C  81 83 00 30 */	lwz r12, 0x30(r3)
/* 801A9350 001A6290  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9354 001A6294  7D 89 03 A6 */	mtctr r12
/* 801A9358 001A6298  4E 80 04 21 */	bctrl 
.L_801A935C:
/* 801A935C 001A629C  3B FF 00 34 */	addi r31, r31, 0x34
/* 801A9360 001A62A0  3B BD 00 01 */	addi r29, r29, 1
.L_801A9364:
/* 801A9364 001A62A4  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 801A9368 001A62A8  7C 1D 00 00 */	cmpw r29, r0
/* 801A936C 001A62AC  41 80 FF C4 */	blt .L_801A9330
/* 801A9370 001A62B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A9374 001A62B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801A9378 001A62B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801A937C 001A62BC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801A9380 001A62C0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801A9384 001A62C4  7C 08 03 A6 */	mtlr r0
/* 801A9388 001A62C8  38 21 00 20 */	addi r1, r1, 0x20
/* 801A938C 001A62CC  4E 80 00 20 */	blr 
.endfn "doSetView__35MonoObjectMgr<Q24Game11DynParticle>Fi"

.fn "doViewCalc__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A9390 001A62D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A9394 001A62D4  7C 08 02 A6 */	mflr r0
/* 801A9398 001A62D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A939C 001A62DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801A93A0 001A62E0  3B E0 00 00 */	li r31, 0
/* 801A93A4 001A62E4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801A93A8 001A62E8  3B C0 00 00 */	li r30, 0
/* 801A93AC 001A62EC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801A93B0 001A62F0  7C 7D 1B 78 */	mr r29, r3
/* 801A93B4 001A62F4  48 00 00 34 */	b .L_801A93E8
.L_801A93B8:
/* 801A93B8 001A62F8  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801A93BC 001A62FC  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801A93C0 001A6300  28 00 00 00 */	cmplwi r0, 0
/* 801A93C4 001A6304  40 82 00 1C */	bne .L_801A93E0
/* 801A93C8 001A6308  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801A93CC 001A630C  7C 60 FA 14 */	add r3, r0, r31
/* 801A93D0 001A6310  81 83 00 30 */	lwz r12, 0x30(r3)
/* 801A93D4 001A6314  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A93D8 001A6318  7D 89 03 A6 */	mtctr r12
/* 801A93DC 001A631C  4E 80 04 21 */	bctrl 
.L_801A93E0:
/* 801A93E0 001A6320  3B FF 00 34 */	addi r31, r31, 0x34
/* 801A93E4 001A6324  3B DE 00 01 */	addi r30, r30, 1
.L_801A93E8:
/* 801A93E8 001A6328  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801A93EC 001A632C  7C 1E 00 00 */	cmpw r30, r0
/* 801A93F0 001A6330  41 80 FF C8 */	blt .L_801A93B8
/* 801A93F4 001A6334  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A93F8 001A6338  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801A93FC 001A633C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801A9400 001A6340  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801A9404 001A6344  7C 08 03 A6 */	mtlr r0
/* 801A9408 001A6348  38 21 00 20 */	addi r1, r1, 0x20
/* 801A940C 001A634C  4E 80 00 20 */	blr 
.endfn "doViewCalc__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "doSimulation__35MonoObjectMgr<Q24Game11DynParticle>Ff", weak
/* 801A9410 001A6350  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A9414 001A6354  7C 08 02 A6 */	mflr r0
/* 801A9418 001A6358  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A941C 001A635C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801A9420 001A6360  FF E0 08 90 */	fmr f31, f1
/* 801A9424 001A6364  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801A9428 001A6368  3B E0 00 00 */	li r31, 0
/* 801A942C 001A636C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801A9430 001A6370  3B C0 00 00 */	li r30, 0
/* 801A9434 001A6374  93 A1 00 0C */	stw r29, 0xc(r1)
/* 801A9438 001A6378  7C 7D 1B 78 */	mr r29, r3
/* 801A943C 001A637C  48 00 00 38 */	b .L_801A9474
.L_801A9440:
/* 801A9440 001A6380  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801A9444 001A6384  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801A9448 001A6388  28 00 00 00 */	cmplwi r0, 0
/* 801A944C 001A638C  40 82 00 20 */	bne .L_801A946C
/* 801A9450 001A6390  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801A9454 001A6394  FC 20 F8 90 */	fmr f1, f31
/* 801A9458 001A6398  7C 60 FA 14 */	add r3, r0, r31
/* 801A945C 001A639C  81 83 00 30 */	lwz r12, 0x30(r3)
/* 801A9460 001A63A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A9464 001A63A4  7D 89 03 A6 */	mtctr r12
/* 801A9468 001A63A8  4E 80 04 21 */	bctrl 
.L_801A946C:
/* 801A946C 001A63AC  3B FF 00 34 */	addi r31, r31, 0x34
/* 801A9470 001A63B0  3B DE 00 01 */	addi r30, r30, 1
.L_801A9474:
/* 801A9474 001A63B4  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801A9478 001A63B8  7C 1E 00 00 */	cmpw r30, r0
/* 801A947C 001A63BC  41 80 FF C4 */	blt .L_801A9440
/* 801A9480 001A63C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A9484 001A63C4  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801A9488 001A63C8  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801A948C 001A63CC  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801A9490 001A63D0  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 801A9494 001A63D4  7C 08 03 A6 */	mtlr r0
/* 801A9498 001A63D8  38 21 00 20 */	addi r1, r1, 0x20
/* 801A949C 001A63DC  4E 80 00 20 */	blr 
.endfn "doSimulation__35MonoObjectMgr<Q24Game11DynParticle>Ff"

.fn "doDirectDraw__35MonoObjectMgr<Q24Game11DynParticle>FR8Graphics", weak
/* 801A94A0 001A63E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A94A4 001A63E4  7C 08 02 A6 */	mflr r0
/* 801A94A8 001A63E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A94AC 001A63EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801A94B0 001A63F0  3B E0 00 00 */	li r31, 0
/* 801A94B4 001A63F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801A94B8 001A63F8  3B C0 00 00 */	li r30, 0
/* 801A94BC 001A63FC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801A94C0 001A6400  7C 9D 23 78 */	mr r29, r4
/* 801A94C4 001A6404  93 81 00 10 */	stw r28, 0x10(r1)
/* 801A94C8 001A6408  7C 7C 1B 78 */	mr r28, r3
/* 801A94CC 001A640C  48 00 00 38 */	b .L_801A9504
.L_801A94D0:
/* 801A94D0 001A6410  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 801A94D4 001A6414  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801A94D8 001A6418  28 00 00 00 */	cmplwi r0, 0
/* 801A94DC 001A641C  40 82 00 20 */	bne .L_801A94FC
/* 801A94E0 001A6420  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 801A94E4 001A6424  7F A4 EB 78 */	mr r4, r29
/* 801A94E8 001A6428  7C 60 FA 14 */	add r3, r0, r31
/* 801A94EC 001A642C  81 83 00 30 */	lwz r12, 0x30(r3)
/* 801A94F0 001A6430  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A94F4 001A6434  7D 89 03 A6 */	mtctr r12
/* 801A94F8 001A6438  4E 80 04 21 */	bctrl 
.L_801A94FC:
/* 801A94FC 001A643C  3B FF 00 34 */	addi r31, r31, 0x34
/* 801A9500 001A6440  3B DE 00 01 */	addi r30, r30, 1
.L_801A9504:
/* 801A9504 001A6444  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 801A9508 001A6448  7C 1E 00 00 */	cmpw r30, r0
/* 801A950C 001A644C  41 80 FF C4 */	blt .L_801A94D0
/* 801A9510 001A6450  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A9514 001A6454  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801A9518 001A6458  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801A951C 001A645C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801A9520 001A6460  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801A9524 001A6464  7C 08 03 A6 */	mtlr r0
/* 801A9528 001A6468  38 21 00 20 */	addi r1, r1, 0x20
/* 801A952C 001A646C  4E 80 00 20 */	blr 
.endfn "doDirectDraw__35MonoObjectMgr<Q24Game11DynParticle>FR8Graphics"

.fn "resetMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A9530 001A6470  38 00 00 00 */	li r0, 0
/* 801A9534 001A6474  90 03 00 28 */	stw r0, 0x28(r3)
/* 801A9538 001A6478  90 03 00 24 */	stw r0, 0x24(r3)
/* 801A953C 001A647C  90 03 00 20 */	stw r0, 0x20(r3)
/* 801A9540 001A6480  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801A9544 001A6484  4E 80 00 20 */	blr 
.endfn "resetMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "clearMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A9548 001A6488  38 00 00 00 */	li r0, 0
/* 801A954C 001A648C  38 C0 00 00 */	li r6, 0
/* 801A9550 001A6490  90 03 00 20 */	stw r0, 0x20(r3)
/* 801A9554 001A6494  38 A0 00 01 */	li r5, 1
/* 801A9558 001A6498  48 00 00 10 */	b .L_801A9568
.L_801A955C:
/* 801A955C 001A649C  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801A9560 001A64A0  7C A4 31 AE */	stbx r5, r4, r6
/* 801A9564 001A64A4  38 C6 00 01 */	addi r6, r6, 1
.L_801A9568:
/* 801A9568 001A64A8  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801A956C 001A64AC  7C 06 00 00 */	cmpw r6, r0
/* 801A9570 001A64B0  41 80 FF EC */	blt .L_801A955C
/* 801A9574 001A64B4  4E 80 00 20 */	blr 
.endfn "clearMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "onAlloc__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A9578 001A64B8  4E 80 00 20 */	blr 
.endfn "onAlloc__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "getEmptyIndex__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A957C 001A64BC  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801A9580 001A64C0  38 A0 00 00 */	li r5, 0
/* 801A9584 001A64C4  7C 09 03 A6 */	mtctr r0
/* 801A9588 001A64C8  2C 00 00 00 */	cmpwi r0, 0
/* 801A958C 001A64CC  40 81 00 24 */	ble .L_801A95B0
.L_801A9590:
/* 801A9590 001A64D0  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801A9594 001A64D4  7C 04 28 AE */	lbzx r0, r4, r5
/* 801A9598 001A64D8  28 00 00 01 */	cmplwi r0, 1
/* 801A959C 001A64DC  40 82 00 0C */	bne .L_801A95A8
/* 801A95A0 001A64E0  7C A3 2B 78 */	mr r3, r5
/* 801A95A4 001A64E4  4E 80 00 20 */	blr 
.L_801A95A8:
/* 801A95A8 001A64E8  38 A5 00 01 */	addi r5, r5, 1
/* 801A95AC 001A64EC  42 00 FF E4 */	bdnz .L_801A9590
.L_801A95B0:
/* 801A95B0 001A64F0  38 60 FF FF */	li r3, -1
/* 801A95B4 001A64F4  4E 80 00 20 */	blr 
.endfn "getEmptyIndex__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "get__35MonoObjectMgr<Q24Game11DynParticle>FPv", weak
/* 801A95B8 001A64F8  1C 04 00 34 */	mulli r0, r4, 0x34
/* 801A95BC 001A64FC  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801A95C0 001A6500  7C 63 02 14 */	add r3, r3, r0
/* 801A95C4 001A6504  4E 80 00 20 */	blr 
.endfn "get__35MonoObjectMgr<Q24Game11DynParticle>FPv"

.fn "getObject__31Container<Q24Game11DynParticle>FPv", weak
/* 801A95C8 001A6508  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A95CC 001A650C  7C 08 02 A6 */	mflr r0
/* 801A95D0 001A6510  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A95D4 001A6514  81 83 00 00 */	lwz r12, 0(r3)
/* 801A95D8 001A6518  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A95DC 001A651C  7D 89 03 A6 */	mtctr r12
/* 801A95E0 001A6520  4E 80 04 21 */	bctrl 
/* 801A95E4 001A6524  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A95E8 001A6528  7C 08 03 A6 */	mtlr r0
/* 801A95EC 001A652C  38 21 00 10 */	addi r1, r1, 0x10
/* 801A95F0 001A6530  4E 80 00 20 */	blr 
.endfn "getObject__31Container<Q24Game11DynParticle>FPv"

.fn "getAt__31Container<Q24Game11DynParticle>Fi", weak
/* 801A95F4 001A6534  38 60 00 00 */	li r3, 0
/* 801A95F8 001A6538  4E 80 00 20 */	blr 
.endfn "getAt__31Container<Q24Game11DynParticle>Fi"

.fn "getTo__31Container<Q24Game11DynParticle>Fv", weak
/* 801A95FC 001A653C  38 60 00 00 */	li r3, 0
/* 801A9600 001A6540  4E 80 00 20 */	blr 
.endfn "getTo__31Container<Q24Game11DynParticle>Fv"

.fn "invoke__59Delegate2<Q24Game11DynCreature,R10Vector3<f>,R10Vector3<f>>FR10Vector3<f>R10Vector3<f>", weak
/* 801A9604 001A6544  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A9608 001A6548  7C 08 02 A6 */	mflr r0
/* 801A960C 001A654C  7C 66 1B 78 */	mr r6, r3
/* 801A9610 001A6550  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A9614 001A6554  39 86 00 08 */	addi r12, r6, 8
/* 801A9618 001A6558  80 63 00 04 */	lwz r3, 4(r3)
/* 801A961C 001A655C  4B F1 85 09 */	bl __ptmf_scall
/* 801A9620 001A6560  60 00 00 00 */	nop 
/* 801A9624 001A6564  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A9628 001A6568  7C 08 03 A6 */	mtlr r0
/* 801A962C 001A656C  38 21 00 10 */	addi r1, r1, 0x10
/* 801A9630 001A6570  4E 80 00 20 */	blr 
.endfn "invoke__59Delegate2<Q24Game11DynCreature,R10Vector3<f>,R10Vector3<f>>FR10Vector3<f>R10Vector3<f>"

.fn "doDirectDraw__31ObjectMgr<Q24Game11DynParticle>FR8Graphics", weak
/* 801A9634 001A6574  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A9638 001A6578  7C 08 02 A6 */	mflr r0
/* 801A963C 001A657C  3C A0 80 4B */	lis r5, "__vt__30Iterator<Q24Game11DynParticle>"@ha
/* 801A9640 001A6580  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A9644 001A6584  38 00 00 00 */	li r0, 0
/* 801A9648 001A6588  38 A5 55 D4 */	addi r5, r5, "__vt__30Iterator<Q24Game11DynParticle>"@l
/* 801A964C 001A658C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801A9650 001A6590  28 00 00 00 */	cmplwi r0, 0
/* 801A9654 001A6594  7C 9F 23 78 */	mr r31, r4
/* 801A9658 001A6598  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A965C 001A659C  90 A1 00 08 */	stw r5, 8(r1)
/* 801A9660 001A65A0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801A9664 001A65A4  90 61 00 10 */	stw r3, 0x10(r1)
/* 801A9668 001A65A8  40 82 00 1C */	bne .L_801A9684
/* 801A966C 001A65AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9670 001A65B0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A9674 001A65B4  7D 89 03 A6 */	mtctr r12
/* 801A9678 001A65B8  4E 80 04 21 */	bctrl 
/* 801A967C 001A65BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9680 001A65C0  48 00 01 74 */	b .L_801A97F4
.L_801A9684:
/* 801A9684 001A65C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9688 001A65C8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A968C 001A65CC  7D 89 03 A6 */	mtctr r12
/* 801A9690 001A65D0  4E 80 04 21 */	bctrl 
/* 801A9694 001A65D4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9698 001A65D8  48 00 00 58 */	b .L_801A96F0
.L_801A969C:
/* 801A969C 001A65DC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A96A0 001A65E0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A96A4 001A65E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A96A8 001A65E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A96AC 001A65EC  7D 89 03 A6 */	mtctr r12
/* 801A96B0 001A65F0  4E 80 04 21 */	bctrl 
/* 801A96B4 001A65F4  7C 64 1B 78 */	mr r4, r3
/* 801A96B8 001A65F8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801A96BC 001A65FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A96C0 001A6600  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A96C4 001A6604  7D 89 03 A6 */	mtctr r12
/* 801A96C8 001A6608  4E 80 04 21 */	bctrl 
/* 801A96CC 001A660C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A96D0 001A6610  40 82 01 24 */	bne .L_801A97F4
/* 801A96D4 001A6614  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A96D8 001A6618  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A96DC 001A661C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A96E0 001A6620  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A96E4 001A6624  7D 89 03 A6 */	mtctr r12
/* 801A96E8 001A6628  4E 80 04 21 */	bctrl 
/* 801A96EC 001A662C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801A96F0:
/* 801A96F0 001A6630  81 81 00 08 */	lwz r12, 8(r1)
/* 801A96F4 001A6634  38 61 00 08 */	addi r3, r1, 8
/* 801A96F8 001A6638  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A96FC 001A663C  7D 89 03 A6 */	mtctr r12
/* 801A9700 001A6640  4E 80 04 21 */	bctrl 
/* 801A9704 001A6644  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9708 001A6648  41 82 FF 94 */	beq .L_801A969C
/* 801A970C 001A664C  48 00 00 E8 */	b .L_801A97F4
.L_801A9710:
/* 801A9710 001A6650  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9714 001A6654  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9718 001A6658  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A971C 001A665C  7D 89 03 A6 */	mtctr r12
/* 801A9720 001A6660  4E 80 04 21 */	bctrl 
/* 801A9724 001A6664  81 83 00 30 */	lwz r12, 0x30(r3)
/* 801A9728 001A6668  7F E4 FB 78 */	mr r4, r31
/* 801A972C 001A666C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A9730 001A6670  7D 89 03 A6 */	mtctr r12
/* 801A9734 001A6674  4E 80 04 21 */	bctrl 
/* 801A9738 001A6678  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A973C 001A667C  28 00 00 00 */	cmplwi r0, 0
/* 801A9740 001A6680  40 82 00 24 */	bne .L_801A9764
/* 801A9744 001A6684  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9748 001A6688  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A974C 001A668C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9750 001A6690  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9754 001A6694  7D 89 03 A6 */	mtctr r12
/* 801A9758 001A6698  4E 80 04 21 */	bctrl 
/* 801A975C 001A669C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9760 001A66A0  48 00 00 94 */	b .L_801A97F4
.L_801A9764:
/* 801A9764 001A66A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9768 001A66A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A976C 001A66AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9770 001A66B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9774 001A66B4  7D 89 03 A6 */	mtctr r12
/* 801A9778 001A66B8  4E 80 04 21 */	bctrl 
/* 801A977C 001A66BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9780 001A66C0  48 00 00 58 */	b .L_801A97D8
.L_801A9784:
/* 801A9784 001A66C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9788 001A66C8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A978C 001A66CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9790 001A66D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A9794 001A66D4  7D 89 03 A6 */	mtctr r12
/* 801A9798 001A66D8  4E 80 04 21 */	bctrl 
/* 801A979C 001A66DC  7C 64 1B 78 */	mr r4, r3
/* 801A97A0 001A66E0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801A97A4 001A66E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A97A8 001A66E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A97AC 001A66EC  7D 89 03 A6 */	mtctr r12
/* 801A97B0 001A66F0  4E 80 04 21 */	bctrl 
/* 801A97B4 001A66F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A97B8 001A66F8  40 82 00 3C */	bne .L_801A97F4
/* 801A97BC 001A66FC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A97C0 001A6700  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A97C4 001A6704  81 83 00 00 */	lwz r12, 0(r3)
/* 801A97C8 001A6708  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A97CC 001A670C  7D 89 03 A6 */	mtctr r12
/* 801A97D0 001A6710  4E 80 04 21 */	bctrl 
/* 801A97D4 001A6714  90 61 00 0C */	stw r3, 0xc(r1)
.L_801A97D8:
/* 801A97D8 001A6718  81 81 00 08 */	lwz r12, 8(r1)
/* 801A97DC 001A671C  38 61 00 08 */	addi r3, r1, 8
/* 801A97E0 001A6720  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A97E4 001A6724  7D 89 03 A6 */	mtctr r12
/* 801A97E8 001A6728  4E 80 04 21 */	bctrl 
/* 801A97EC 001A672C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A97F0 001A6730  41 82 FF 94 */	beq .L_801A9784
.L_801A97F4:
/* 801A97F4 001A6734  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A97F8 001A6738  81 83 00 00 */	lwz r12, 0(r3)
/* 801A97FC 001A673C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A9800 001A6740  7D 89 03 A6 */	mtctr r12
/* 801A9804 001A6744  4E 80 04 21 */	bctrl 
/* 801A9808 001A6748  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A980C 001A674C  7C 04 18 40 */	cmplw r4, r3
/* 801A9810 001A6750  40 82 FF 00 */	bne .L_801A9710
/* 801A9814 001A6754  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A9818 001A6758  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801A981C 001A675C  7C 08 03 A6 */	mtlr r0
/* 801A9820 001A6760  38 21 00 20 */	addi r1, r1, 0x20
/* 801A9824 001A6764  4E 80 00 20 */	blr 
.endfn "doDirectDraw__31ObjectMgr<Q24Game11DynParticle>FR8Graphics"

.fn "isDone__30Iterator<Q24Game11DynParticle>Fv", weak
/* 801A9828 001A6768  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A982C 001A676C  7C 08 02 A6 */	mflr r0
/* 801A9830 001A6770  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A9834 001A6774  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A9838 001A6778  7C 7F 1B 78 */	mr r31, r3
/* 801A983C 001A677C  80 63 00 08 */	lwz r3, 8(r3)
/* 801A9840 001A6780  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9844 001A6784  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A9848 001A6788  7D 89 03 A6 */	mtctr r12
/* 801A984C 001A678C  4E 80 04 21 */	bctrl 
/* 801A9850 001A6790  80 1F 00 04 */	lwz r0, 4(r31)
/* 801A9854 001A6794  7C 00 18 50 */	subf r0, r0, r3
/* 801A9858 001A6798  7C 00 00 34 */	cntlzw r0, r0
/* 801A985C 001A679C  54 03 D9 7E */	srwi r3, r0, 5
/* 801A9860 001A67A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A9864 001A67A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A9868 001A67A8  7C 08 03 A6 */	mtlr r0
/* 801A986C 001A67AC  38 21 00 10 */	addi r1, r1, 0x10
/* 801A9870 001A67B0  4E 80 00 20 */	blr 
.endfn "isDone__30Iterator<Q24Game11DynParticle>Fv"

.fn "doSimulation__31ObjectMgr<Q24Game11DynParticle>Ff", weak
/* 801A9874 001A67B4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A9878 001A67B8  7C 08 02 A6 */	mflr r0
/* 801A987C 001A67BC  3C 80 80 4B */	lis r4, "__vt__30Iterator<Q24Game11DynParticle>"@ha
/* 801A9880 001A67C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A9884 001A67C4  38 00 00 00 */	li r0, 0
/* 801A9888 001A67C8  38 84 55 D4 */	addi r4, r4, "__vt__30Iterator<Q24Game11DynParticle>"@l
/* 801A988C 001A67CC  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801A9890 001A67D0  FF E0 08 90 */	fmr f31, f1
/* 801A9894 001A67D4  28 00 00 00 */	cmplwi r0, 0
/* 801A9898 001A67D8  90 81 00 08 */	stw r4, 8(r1)
/* 801A989C 001A67DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A98A0 001A67E0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801A98A4 001A67E4  90 61 00 10 */	stw r3, 0x10(r1)
/* 801A98A8 001A67E8  40 82 00 1C */	bne .L_801A98C4
/* 801A98AC 001A67EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A98B0 001A67F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A98B4 001A67F4  7D 89 03 A6 */	mtctr r12
/* 801A98B8 001A67F8  4E 80 04 21 */	bctrl 
/* 801A98BC 001A67FC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A98C0 001A6800  48 00 01 74 */	b .L_801A9A34
.L_801A98C4:
/* 801A98C4 001A6804  81 83 00 00 */	lwz r12, 0(r3)
/* 801A98C8 001A6808  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A98CC 001A680C  7D 89 03 A6 */	mtctr r12
/* 801A98D0 001A6810  4E 80 04 21 */	bctrl 
/* 801A98D4 001A6814  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A98D8 001A6818  48 00 00 58 */	b .L_801A9930
.L_801A98DC:
/* 801A98DC 001A681C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A98E0 001A6820  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A98E4 001A6824  81 83 00 00 */	lwz r12, 0(r3)
/* 801A98E8 001A6828  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A98EC 001A682C  7D 89 03 A6 */	mtctr r12
/* 801A98F0 001A6830  4E 80 04 21 */	bctrl 
/* 801A98F4 001A6834  7C 64 1B 78 */	mr r4, r3
/* 801A98F8 001A6838  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801A98FC 001A683C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9900 001A6840  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A9904 001A6844  7D 89 03 A6 */	mtctr r12
/* 801A9908 001A6848  4E 80 04 21 */	bctrl 
/* 801A990C 001A684C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9910 001A6850  40 82 01 24 */	bne .L_801A9A34
/* 801A9914 001A6854  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9918 001A6858  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A991C 001A685C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9920 001A6860  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9924 001A6864  7D 89 03 A6 */	mtctr r12
/* 801A9928 001A6868  4E 80 04 21 */	bctrl 
/* 801A992C 001A686C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801A9930:
/* 801A9930 001A6870  81 81 00 08 */	lwz r12, 8(r1)
/* 801A9934 001A6874  38 61 00 08 */	addi r3, r1, 8
/* 801A9938 001A6878  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A993C 001A687C  7D 89 03 A6 */	mtctr r12
/* 801A9940 001A6880  4E 80 04 21 */	bctrl 
/* 801A9944 001A6884  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9948 001A6888  41 82 FF 94 */	beq .L_801A98DC
/* 801A994C 001A688C  48 00 00 E8 */	b .L_801A9A34
.L_801A9950:
/* 801A9950 001A6890  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9954 001A6894  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9958 001A6898  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A995C 001A689C  7D 89 03 A6 */	mtctr r12
/* 801A9960 001A68A0  4E 80 04 21 */	bctrl 
/* 801A9964 001A68A4  81 83 00 30 */	lwz r12, 0x30(r3)
/* 801A9968 001A68A8  FC 20 F8 90 */	fmr f1, f31
/* 801A996C 001A68AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A9970 001A68B0  7D 89 03 A6 */	mtctr r12
/* 801A9974 001A68B4  4E 80 04 21 */	bctrl 
/* 801A9978 001A68B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A997C 001A68BC  28 00 00 00 */	cmplwi r0, 0
/* 801A9980 001A68C0  40 82 00 24 */	bne .L_801A99A4
/* 801A9984 001A68C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9988 001A68C8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A998C 001A68CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9990 001A68D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9994 001A68D4  7D 89 03 A6 */	mtctr r12
/* 801A9998 001A68D8  4E 80 04 21 */	bctrl 
/* 801A999C 001A68DC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A99A0 001A68E0  48 00 00 94 */	b .L_801A9A34
.L_801A99A4:
/* 801A99A4 001A68E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A99A8 001A68E8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A99AC 001A68EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A99B0 001A68F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A99B4 001A68F4  7D 89 03 A6 */	mtctr r12
/* 801A99B8 001A68F8  4E 80 04 21 */	bctrl 
/* 801A99BC 001A68FC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A99C0 001A6900  48 00 00 58 */	b .L_801A9A18
.L_801A99C4:
/* 801A99C4 001A6904  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A99C8 001A6908  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A99CC 001A690C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A99D0 001A6910  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A99D4 001A6914  7D 89 03 A6 */	mtctr r12
/* 801A99D8 001A6918  4E 80 04 21 */	bctrl 
/* 801A99DC 001A691C  7C 64 1B 78 */	mr r4, r3
/* 801A99E0 001A6920  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801A99E4 001A6924  81 83 00 00 */	lwz r12, 0(r3)
/* 801A99E8 001A6928  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A99EC 001A692C  7D 89 03 A6 */	mtctr r12
/* 801A99F0 001A6930  4E 80 04 21 */	bctrl 
/* 801A99F4 001A6934  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A99F8 001A6938  40 82 00 3C */	bne .L_801A9A34
/* 801A99FC 001A693C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9A00 001A6940  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9A04 001A6944  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9A08 001A6948  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9A0C 001A694C  7D 89 03 A6 */	mtctr r12
/* 801A9A10 001A6950  4E 80 04 21 */	bctrl 
/* 801A9A14 001A6954  90 61 00 0C */	stw r3, 0xc(r1)
.L_801A9A18:
/* 801A9A18 001A6958  81 81 00 08 */	lwz r12, 8(r1)
/* 801A9A1C 001A695C  38 61 00 08 */	addi r3, r1, 8
/* 801A9A20 001A6960  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A9A24 001A6964  7D 89 03 A6 */	mtctr r12
/* 801A9A28 001A6968  4E 80 04 21 */	bctrl 
/* 801A9A2C 001A696C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9A30 001A6970  41 82 FF 94 */	beq .L_801A99C4
.L_801A9A34:
/* 801A9A34 001A6974  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9A38 001A6978  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9A3C 001A697C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A9A40 001A6980  7D 89 03 A6 */	mtctr r12
/* 801A9A44 001A6984  4E 80 04 21 */	bctrl 
/* 801A9A48 001A6988  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9A4C 001A698C  7C 04 18 40 */	cmplw r4, r3
/* 801A9A50 001A6990  40 82 FF 00 */	bne .L_801A9950
/* 801A9A54 001A6994  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A9A58 001A6998  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801A9A5C 001A699C  7C 08 03 A6 */	mtlr r0
/* 801A9A60 001A69A0  38 21 00 20 */	addi r1, r1, 0x20
/* 801A9A64 001A69A4  4E 80 00 20 */	blr 
.endfn "doSimulation__31ObjectMgr<Q24Game11DynParticle>Ff"

.fn "doViewCalc__31ObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A9A68 001A69A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A9A6C 001A69AC  7C 08 02 A6 */	mflr r0
/* 801A9A70 001A69B0  3C 80 80 4B */	lis r4, "__vt__30Iterator<Q24Game11DynParticle>"@ha
/* 801A9A74 001A69B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A9A78 001A69B8  38 00 00 00 */	li r0, 0
/* 801A9A7C 001A69BC  38 84 55 D4 */	addi r4, r4, "__vt__30Iterator<Q24Game11DynParticle>"@l
/* 801A9A80 001A69C0  28 00 00 00 */	cmplwi r0, 0
/* 801A9A84 001A69C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A9A88 001A69C8  90 81 00 08 */	stw r4, 8(r1)
/* 801A9A8C 001A69CC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801A9A90 001A69D0  90 61 00 10 */	stw r3, 0x10(r1)
/* 801A9A94 001A69D4  40 82 00 1C */	bne .L_801A9AB0
/* 801A9A98 001A69D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9A9C 001A69DC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A9AA0 001A69E0  7D 89 03 A6 */	mtctr r12
/* 801A9AA4 001A69E4  4E 80 04 21 */	bctrl 
/* 801A9AA8 001A69E8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9AAC 001A69EC  48 00 01 70 */	b .L_801A9C1C
.L_801A9AB0:
/* 801A9AB0 001A69F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9AB4 001A69F4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A9AB8 001A69F8  7D 89 03 A6 */	mtctr r12
/* 801A9ABC 001A69FC  4E 80 04 21 */	bctrl 
/* 801A9AC0 001A6A00  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9AC4 001A6A04  48 00 00 58 */	b .L_801A9B1C
.L_801A9AC8:
/* 801A9AC8 001A6A08  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9ACC 001A6A0C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9AD0 001A6A10  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9AD4 001A6A14  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A9AD8 001A6A18  7D 89 03 A6 */	mtctr r12
/* 801A9ADC 001A6A1C  4E 80 04 21 */	bctrl 
/* 801A9AE0 001A6A20  7C 64 1B 78 */	mr r4, r3
/* 801A9AE4 001A6A24  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801A9AE8 001A6A28  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9AEC 001A6A2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A9AF0 001A6A30  7D 89 03 A6 */	mtctr r12
/* 801A9AF4 001A6A34  4E 80 04 21 */	bctrl 
/* 801A9AF8 001A6A38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9AFC 001A6A3C  40 82 01 20 */	bne .L_801A9C1C
/* 801A9B00 001A6A40  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9B04 001A6A44  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9B08 001A6A48  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9B0C 001A6A4C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9B10 001A6A50  7D 89 03 A6 */	mtctr r12
/* 801A9B14 001A6A54  4E 80 04 21 */	bctrl 
/* 801A9B18 001A6A58  90 61 00 0C */	stw r3, 0xc(r1)
.L_801A9B1C:
/* 801A9B1C 001A6A5C  81 81 00 08 */	lwz r12, 8(r1)
/* 801A9B20 001A6A60  38 61 00 08 */	addi r3, r1, 8
/* 801A9B24 001A6A64  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A9B28 001A6A68  7D 89 03 A6 */	mtctr r12
/* 801A9B2C 001A6A6C  4E 80 04 21 */	bctrl 
/* 801A9B30 001A6A70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9B34 001A6A74  41 82 FF 94 */	beq .L_801A9AC8
/* 801A9B38 001A6A78  48 00 00 E4 */	b .L_801A9C1C
.L_801A9B3C:
/* 801A9B3C 001A6A7C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9B40 001A6A80  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9B44 001A6A84  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A9B48 001A6A88  7D 89 03 A6 */	mtctr r12
/* 801A9B4C 001A6A8C  4E 80 04 21 */	bctrl 
/* 801A9B50 001A6A90  81 83 00 30 */	lwz r12, 0x30(r3)
/* 801A9B54 001A6A94  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A9B58 001A6A98  7D 89 03 A6 */	mtctr r12
/* 801A9B5C 001A6A9C  4E 80 04 21 */	bctrl 
/* 801A9B60 001A6AA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A9B64 001A6AA4  28 00 00 00 */	cmplwi r0, 0
/* 801A9B68 001A6AA8  40 82 00 24 */	bne .L_801A9B8C
/* 801A9B6C 001A6AAC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9B70 001A6AB0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9B74 001A6AB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9B78 001A6AB8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9B7C 001A6ABC  7D 89 03 A6 */	mtctr r12
/* 801A9B80 001A6AC0  4E 80 04 21 */	bctrl 
/* 801A9B84 001A6AC4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9B88 001A6AC8  48 00 00 94 */	b .L_801A9C1C
.L_801A9B8C:
/* 801A9B8C 001A6ACC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9B90 001A6AD0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9B94 001A6AD4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9B98 001A6AD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9B9C 001A6ADC  7D 89 03 A6 */	mtctr r12
/* 801A9BA0 001A6AE0  4E 80 04 21 */	bctrl 
/* 801A9BA4 001A6AE4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9BA8 001A6AE8  48 00 00 58 */	b .L_801A9C00
.L_801A9BAC:
/* 801A9BAC 001A6AEC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9BB0 001A6AF0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9BB4 001A6AF4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9BB8 001A6AF8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A9BBC 001A6AFC  7D 89 03 A6 */	mtctr r12
/* 801A9BC0 001A6B00  4E 80 04 21 */	bctrl 
/* 801A9BC4 001A6B04  7C 64 1B 78 */	mr r4, r3
/* 801A9BC8 001A6B08  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801A9BCC 001A6B0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9BD0 001A6B10  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A9BD4 001A6B14  7D 89 03 A6 */	mtctr r12
/* 801A9BD8 001A6B18  4E 80 04 21 */	bctrl 
/* 801A9BDC 001A6B1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9BE0 001A6B20  40 82 00 3C */	bne .L_801A9C1C
/* 801A9BE4 001A6B24  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9BE8 001A6B28  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9BEC 001A6B2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9BF0 001A6B30  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9BF4 001A6B34  7D 89 03 A6 */	mtctr r12
/* 801A9BF8 001A6B38  4E 80 04 21 */	bctrl 
/* 801A9BFC 001A6B3C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801A9C00:
/* 801A9C00 001A6B40  81 81 00 08 */	lwz r12, 8(r1)
/* 801A9C04 001A6B44  38 61 00 08 */	addi r3, r1, 8
/* 801A9C08 001A6B48  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A9C0C 001A6B4C  7D 89 03 A6 */	mtctr r12
/* 801A9C10 001A6B50  4E 80 04 21 */	bctrl 
/* 801A9C14 001A6B54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9C18 001A6B58  41 82 FF 94 */	beq .L_801A9BAC
.L_801A9C1C:
/* 801A9C1C 001A6B5C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9C20 001A6B60  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9C24 001A6B64  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A9C28 001A6B68  7D 89 03 A6 */	mtctr r12
/* 801A9C2C 001A6B6C  4E 80 04 21 */	bctrl 
/* 801A9C30 001A6B70  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9C34 001A6B74  7C 04 18 40 */	cmplw r4, r3
/* 801A9C38 001A6B78  40 82 FF 04 */	bne .L_801A9B3C
/* 801A9C3C 001A6B7C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A9C40 001A6B80  7C 08 03 A6 */	mtlr r0
/* 801A9C44 001A6B84  38 21 00 20 */	addi r1, r1, 0x20
/* 801A9C48 001A6B88  4E 80 00 20 */	blr 
.endfn "doViewCalc__31ObjectMgr<Q24Game11DynParticle>Fv"

.fn "doSetView__31ObjectMgr<Q24Game11DynParticle>Fi", weak
/* 801A9C4C 001A6B8C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A9C50 001A6B90  7C 08 02 A6 */	mflr r0
/* 801A9C54 001A6B94  3C A0 80 4B */	lis r5, "__vt__30Iterator<Q24Game11DynParticle>"@ha
/* 801A9C58 001A6B98  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A9C5C 001A6B9C  38 00 00 00 */	li r0, 0
/* 801A9C60 001A6BA0  38 A5 55 D4 */	addi r5, r5, "__vt__30Iterator<Q24Game11DynParticle>"@l
/* 801A9C64 001A6BA4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801A9C68 001A6BA8  28 00 00 00 */	cmplwi r0, 0
/* 801A9C6C 001A6BAC  7C 9F 23 78 */	mr r31, r4
/* 801A9C70 001A6BB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A9C74 001A6BB4  90 A1 00 08 */	stw r5, 8(r1)
/* 801A9C78 001A6BB8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801A9C7C 001A6BBC  90 61 00 10 */	stw r3, 0x10(r1)
/* 801A9C80 001A6BC0  40 82 00 1C */	bne .L_801A9C9C
/* 801A9C84 001A6BC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9C88 001A6BC8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A9C8C 001A6BCC  7D 89 03 A6 */	mtctr r12
/* 801A9C90 001A6BD0  4E 80 04 21 */	bctrl 
/* 801A9C94 001A6BD4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9C98 001A6BD8  48 00 01 74 */	b .L_801A9E0C
.L_801A9C9C:
/* 801A9C9C 001A6BDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9CA0 001A6BE0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A9CA4 001A6BE4  7D 89 03 A6 */	mtctr r12
/* 801A9CA8 001A6BE8  4E 80 04 21 */	bctrl 
/* 801A9CAC 001A6BEC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9CB0 001A6BF0  48 00 00 58 */	b .L_801A9D08
.L_801A9CB4:
/* 801A9CB4 001A6BF4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9CB8 001A6BF8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9CBC 001A6BFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9CC0 001A6C00  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A9CC4 001A6C04  7D 89 03 A6 */	mtctr r12
/* 801A9CC8 001A6C08  4E 80 04 21 */	bctrl 
/* 801A9CCC 001A6C0C  7C 64 1B 78 */	mr r4, r3
/* 801A9CD0 001A6C10  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801A9CD4 001A6C14  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9CD8 001A6C18  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A9CDC 001A6C1C  7D 89 03 A6 */	mtctr r12
/* 801A9CE0 001A6C20  4E 80 04 21 */	bctrl 
/* 801A9CE4 001A6C24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9CE8 001A6C28  40 82 01 24 */	bne .L_801A9E0C
/* 801A9CEC 001A6C2C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9CF0 001A6C30  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9CF4 001A6C34  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9CF8 001A6C38  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9CFC 001A6C3C  7D 89 03 A6 */	mtctr r12
/* 801A9D00 001A6C40  4E 80 04 21 */	bctrl 
/* 801A9D04 001A6C44  90 61 00 0C */	stw r3, 0xc(r1)
.L_801A9D08:
/* 801A9D08 001A6C48  81 81 00 08 */	lwz r12, 8(r1)
/* 801A9D0C 001A6C4C  38 61 00 08 */	addi r3, r1, 8
/* 801A9D10 001A6C50  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A9D14 001A6C54  7D 89 03 A6 */	mtctr r12
/* 801A9D18 001A6C58  4E 80 04 21 */	bctrl 
/* 801A9D1C 001A6C5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9D20 001A6C60  41 82 FF 94 */	beq .L_801A9CB4
/* 801A9D24 001A6C64  48 00 00 E8 */	b .L_801A9E0C
.L_801A9D28:
/* 801A9D28 001A6C68  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9D2C 001A6C6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9D30 001A6C70  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A9D34 001A6C74  7D 89 03 A6 */	mtctr r12
/* 801A9D38 001A6C78  4E 80 04 21 */	bctrl 
/* 801A9D3C 001A6C7C  81 83 00 30 */	lwz r12, 0x30(r3)
/* 801A9D40 001A6C80  7F E4 FB 78 */	mr r4, r31
/* 801A9D44 001A6C84  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9D48 001A6C88  7D 89 03 A6 */	mtctr r12
/* 801A9D4C 001A6C8C  4E 80 04 21 */	bctrl 
/* 801A9D50 001A6C90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A9D54 001A6C94  28 00 00 00 */	cmplwi r0, 0
/* 801A9D58 001A6C98  40 82 00 24 */	bne .L_801A9D7C
/* 801A9D5C 001A6C9C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9D60 001A6CA0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9D64 001A6CA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9D68 001A6CA8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9D6C 001A6CAC  7D 89 03 A6 */	mtctr r12
/* 801A9D70 001A6CB0  4E 80 04 21 */	bctrl 
/* 801A9D74 001A6CB4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9D78 001A6CB8  48 00 00 94 */	b .L_801A9E0C
.L_801A9D7C:
/* 801A9D7C 001A6CBC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9D80 001A6CC0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9D84 001A6CC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9D88 001A6CC8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9D8C 001A6CCC  7D 89 03 A6 */	mtctr r12
/* 801A9D90 001A6CD0  4E 80 04 21 */	bctrl 
/* 801A9D94 001A6CD4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9D98 001A6CD8  48 00 00 58 */	b .L_801A9DF0
.L_801A9D9C:
/* 801A9D9C 001A6CDC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9DA0 001A6CE0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9DA4 001A6CE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9DA8 001A6CE8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A9DAC 001A6CEC  7D 89 03 A6 */	mtctr r12
/* 801A9DB0 001A6CF0  4E 80 04 21 */	bctrl 
/* 801A9DB4 001A6CF4  7C 64 1B 78 */	mr r4, r3
/* 801A9DB8 001A6CF8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801A9DBC 001A6CFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9DC0 001A6D00  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A9DC4 001A6D04  7D 89 03 A6 */	mtctr r12
/* 801A9DC8 001A6D08  4E 80 04 21 */	bctrl 
/* 801A9DCC 001A6D0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9DD0 001A6D10  40 82 00 3C */	bne .L_801A9E0C
/* 801A9DD4 001A6D14  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9DD8 001A6D18  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9DDC 001A6D1C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9DE0 001A6D20  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9DE4 001A6D24  7D 89 03 A6 */	mtctr r12
/* 801A9DE8 001A6D28  4E 80 04 21 */	bctrl 
/* 801A9DEC 001A6D2C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801A9DF0:
/* 801A9DF0 001A6D30  81 81 00 08 */	lwz r12, 8(r1)
/* 801A9DF4 001A6D34  38 61 00 08 */	addi r3, r1, 8
/* 801A9DF8 001A6D38  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A9DFC 001A6D3C  7D 89 03 A6 */	mtctr r12
/* 801A9E00 001A6D40  4E 80 04 21 */	bctrl 
/* 801A9E04 001A6D44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9E08 001A6D48  41 82 FF 94 */	beq .L_801A9D9C
.L_801A9E0C:
/* 801A9E0C 001A6D4C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9E10 001A6D50  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9E14 001A6D54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801A9E18 001A6D58  7D 89 03 A6 */	mtctr r12
/* 801A9E1C 001A6D5C  4E 80 04 21 */	bctrl 
/* 801A9E20 001A6D60  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9E24 001A6D64  7C 04 18 40 */	cmplw r4, r3
/* 801A9E28 001A6D68  40 82 FF 00 */	bne .L_801A9D28
/* 801A9E2C 001A6D6C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A9E30 001A6D70  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801A9E34 001A6D74  7C 08 03 A6 */	mtlr r0
/* 801A9E38 001A6D78  38 21 00 20 */	addi r1, r1, 0x20
/* 801A9E3C 001A6D7C  4E 80 00 20 */	blr 
.endfn "doSetView__31ObjectMgr<Q24Game11DynParticle>Fi"

.fn "doEntry__31ObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801A9E40 001A6D80  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A9E44 001A6D84  7C 08 02 A6 */	mflr r0
/* 801A9E48 001A6D88  3C 80 80 4B */	lis r4, "__vt__30Iterator<Q24Game11DynParticle>"@ha
/* 801A9E4C 001A6D8C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A9E50 001A6D90  38 00 00 00 */	li r0, 0
/* 801A9E54 001A6D94  38 84 55 D4 */	addi r4, r4, "__vt__30Iterator<Q24Game11DynParticle>"@l
/* 801A9E58 001A6D98  28 00 00 00 */	cmplwi r0, 0
/* 801A9E5C 001A6D9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A9E60 001A6DA0  90 81 00 08 */	stw r4, 8(r1)
/* 801A9E64 001A6DA4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801A9E68 001A6DA8  90 61 00 10 */	stw r3, 0x10(r1)
/* 801A9E6C 001A6DAC  40 82 00 1C */	bne .L_801A9E88
/* 801A9E70 001A6DB0  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9E74 001A6DB4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A9E78 001A6DB8  7D 89 03 A6 */	mtctr r12
/* 801A9E7C 001A6DBC  4E 80 04 21 */	bctrl 
/* 801A9E80 001A6DC0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9E84 001A6DC4  48 00 01 70 */	b .L_801A9FF4
.L_801A9E88:
/* 801A9E88 001A6DC8  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9E8C 001A6DCC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801A9E90 001A6DD0  7D 89 03 A6 */	mtctr r12
/* 801A9E94 001A6DD4  4E 80 04 21 */	bctrl 
/* 801A9E98 001A6DD8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9E9C 001A6DDC  48 00 00 58 */	b .L_801A9EF4
.L_801A9EA0:
/* 801A9EA0 001A6DE0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9EA4 001A6DE4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9EA8 001A6DE8  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9EAC 001A6DEC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A9EB0 001A6DF0  7D 89 03 A6 */	mtctr r12
/* 801A9EB4 001A6DF4  4E 80 04 21 */	bctrl 
/* 801A9EB8 001A6DF8  7C 64 1B 78 */	mr r4, r3
/* 801A9EBC 001A6DFC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801A9EC0 001A6E00  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9EC4 001A6E04  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A9EC8 001A6E08  7D 89 03 A6 */	mtctr r12
/* 801A9ECC 001A6E0C  4E 80 04 21 */	bctrl 
/* 801A9ED0 001A6E10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9ED4 001A6E14  40 82 01 20 */	bne .L_801A9FF4
/* 801A9ED8 001A6E18  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9EDC 001A6E1C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9EE0 001A6E20  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9EE4 001A6E24  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9EE8 001A6E28  7D 89 03 A6 */	mtctr r12
/* 801A9EEC 001A6E2C  4E 80 04 21 */	bctrl 
/* 801A9EF0 001A6E30  90 61 00 0C */	stw r3, 0xc(r1)
.L_801A9EF4:
/* 801A9EF4 001A6E34  81 81 00 08 */	lwz r12, 8(r1)
/* 801A9EF8 001A6E38  38 61 00 08 */	addi r3, r1, 8
/* 801A9EFC 001A6E3C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A9F00 001A6E40  7D 89 03 A6 */	mtctr r12
/* 801A9F04 001A6E44  4E 80 04 21 */	bctrl 
/* 801A9F08 001A6E48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9F0C 001A6E4C  41 82 FF 94 */	beq .L_801A9EA0
/* 801A9F10 001A6E50  48 00 00 E4 */	b .L_801A9FF4
.L_801A9F14:
/* 801A9F14 001A6E54  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9F18 001A6E58  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9F1C 001A6E5C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A9F20 001A6E60  7D 89 03 A6 */	mtctr r12
/* 801A9F24 001A6E64  4E 80 04 21 */	bctrl 
/* 801A9F28 001A6E68  81 83 00 30 */	lwz r12, 0x30(r3)
/* 801A9F2C 001A6E6C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A9F30 001A6E70  7D 89 03 A6 */	mtctr r12
/* 801A9F34 001A6E74  4E 80 04 21 */	bctrl 
/* 801A9F38 001A6E78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A9F3C 001A6E7C  28 00 00 00 */	cmplwi r0, 0
/* 801A9F40 001A6E80  40 82 00 24 */	bne .L_801A9F64
/* 801A9F44 001A6E84  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9F48 001A6E88  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9F4C 001A6E8C  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9F50 001A6E90  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9F54 001A6E94  7D 89 03 A6 */	mtctr r12
/* 801A9F58 001A6E98  4E 80 04 21 */	bctrl 
/* 801A9F5C 001A6E9C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9F60 001A6EA0  48 00 00 94 */	b .L_801A9FF4
.L_801A9F64:
/* 801A9F64 001A6EA4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9F68 001A6EA8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9F6C 001A6EAC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9F70 001A6EB0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9F74 001A6EB4  7D 89 03 A6 */	mtctr r12
/* 801A9F78 001A6EB8  4E 80 04 21 */	bctrl 
/* 801A9F7C 001A6EBC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801A9F80 001A6EC0  48 00 00 58 */	b .L_801A9FD8
.L_801A9F84:
/* 801A9F84 001A6EC4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9F88 001A6EC8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9F8C 001A6ECC  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9F90 001A6ED0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801A9F94 001A6ED4  7D 89 03 A6 */	mtctr r12
/* 801A9F98 001A6ED8  4E 80 04 21 */	bctrl 
/* 801A9F9C 001A6EDC  7C 64 1B 78 */	mr r4, r3
/* 801A9FA0 001A6EE0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801A9FA4 001A6EE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9FA8 001A6EE8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801A9FAC 001A6EEC  7D 89 03 A6 */	mtctr r12
/* 801A9FB0 001A6EF0  4E 80 04 21 */	bctrl 
/* 801A9FB4 001A6EF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9FB8 001A6EF8  40 82 00 3C */	bne .L_801A9FF4
/* 801A9FBC 001A6EFC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9FC0 001A6F00  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801A9FC4 001A6F04  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9FC8 001A6F08  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801A9FCC 001A6F0C  7D 89 03 A6 */	mtctr r12
/* 801A9FD0 001A6F10  4E 80 04 21 */	bctrl 
/* 801A9FD4 001A6F14  90 61 00 0C */	stw r3, 0xc(r1)
.L_801A9FD8:
/* 801A9FD8 001A6F18  81 81 00 08 */	lwz r12, 8(r1)
/* 801A9FDC 001A6F1C  38 61 00 08 */	addi r3, r1, 8
/* 801A9FE0 001A6F20  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801A9FE4 001A6F24  7D 89 03 A6 */	mtctr r12
/* 801A9FE8 001A6F28  4E 80 04 21 */	bctrl 
/* 801A9FEC 001A6F2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A9FF0 001A6F30  41 82 FF 94 */	beq .L_801A9F84
.L_801A9FF4:
/* 801A9FF4 001A6F34  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801A9FF8 001A6F38  81 83 00 00 */	lwz r12, 0(r3)
/* 801A9FFC 001A6F3C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801AA000 001A6F40  7D 89 03 A6 */	mtctr r12
/* 801AA004 001A6F44  4E 80 04 21 */	bctrl 
/* 801AA008 001A6F48  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AA00C 001A6F4C  7C 04 18 40 */	cmplw r4, r3
/* 801AA010 001A6F50  40 82 FF 04 */	bne .L_801A9F14
/* 801AA014 001A6F54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801AA018 001A6F58  7C 08 03 A6 */	mtlr r0
/* 801AA01C 001A6F5C  38 21 00 20 */	addi r1, r1, 0x20
/* 801AA020 001A6F60  4E 80 00 20 */	blr 
.endfn "doEntry__31ObjectMgr<Q24Game11DynParticle>Fv"

.fn "doAnimation__31ObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801AA024 001A6F64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801AA028 001A6F68  7C 08 02 A6 */	mflr r0
/* 801AA02C 001A6F6C  3C 80 80 4B */	lis r4, "__vt__30Iterator<Q24Game11DynParticle>"@ha
/* 801AA030 001A6F70  90 01 00 24 */	stw r0, 0x24(r1)
/* 801AA034 001A6F74  38 00 00 00 */	li r0, 0
/* 801AA038 001A6F78  38 84 55 D4 */	addi r4, r4, "__vt__30Iterator<Q24Game11DynParticle>"@l
/* 801AA03C 001A6F7C  28 00 00 00 */	cmplwi r0, 0
/* 801AA040 001A6F80  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AA044 001A6F84  90 81 00 08 */	stw r4, 8(r1)
/* 801AA048 001A6F88  90 01 00 0C */	stw r0, 0xc(r1)
/* 801AA04C 001A6F8C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801AA050 001A6F90  40 82 00 1C */	bne .L_801AA06C
/* 801AA054 001A6F94  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA058 001A6F98  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801AA05C 001A6F9C  7D 89 03 A6 */	mtctr r12
/* 801AA060 001A6FA0  4E 80 04 21 */	bctrl 
/* 801AA064 001A6FA4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AA068 001A6FA8  48 00 01 70 */	b .L_801AA1D8
.L_801AA06C:
/* 801AA06C 001A6FAC  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA070 001A6FB0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801AA074 001A6FB4  7D 89 03 A6 */	mtctr r12
/* 801AA078 001A6FB8  4E 80 04 21 */	bctrl 
/* 801AA07C 001A6FBC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AA080 001A6FC0  48 00 00 58 */	b .L_801AA0D8
.L_801AA084:
/* 801AA084 001A6FC4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AA088 001A6FC8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AA08C 001A6FCC  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA090 001A6FD0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AA094 001A6FD4  7D 89 03 A6 */	mtctr r12
/* 801AA098 001A6FD8  4E 80 04 21 */	bctrl 
/* 801AA09C 001A6FDC  7C 64 1B 78 */	mr r4, r3
/* 801AA0A0 001A6FE0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801AA0A4 001A6FE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA0A8 001A6FE8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801AA0AC 001A6FEC  7D 89 03 A6 */	mtctr r12
/* 801AA0B0 001A6FF0  4E 80 04 21 */	bctrl 
/* 801AA0B4 001A6FF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AA0B8 001A6FF8  40 82 01 20 */	bne .L_801AA1D8
/* 801AA0BC 001A6FFC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AA0C0 001A7000  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AA0C4 001A7004  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA0C8 001A7008  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AA0CC 001A700C  7D 89 03 A6 */	mtctr r12
/* 801AA0D0 001A7010  4E 80 04 21 */	bctrl 
/* 801AA0D4 001A7014  90 61 00 0C */	stw r3, 0xc(r1)
.L_801AA0D8:
/* 801AA0D8 001A7018  81 81 00 08 */	lwz r12, 8(r1)
/* 801AA0DC 001A701C  38 61 00 08 */	addi r3, r1, 8
/* 801AA0E0 001A7020  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801AA0E4 001A7024  7D 89 03 A6 */	mtctr r12
/* 801AA0E8 001A7028  4E 80 04 21 */	bctrl 
/* 801AA0EC 001A702C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AA0F0 001A7030  41 82 FF 94 */	beq .L_801AA084
/* 801AA0F4 001A7034  48 00 00 E4 */	b .L_801AA1D8
.L_801AA0F8:
/* 801AA0F8 001A7038  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AA0FC 001A703C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA100 001A7040  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AA104 001A7044  7D 89 03 A6 */	mtctr r12
/* 801AA108 001A7048  4E 80 04 21 */	bctrl 
/* 801AA10C 001A704C  81 83 00 30 */	lwz r12, 0x30(r3)
/* 801AA110 001A7050  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801AA114 001A7054  7D 89 03 A6 */	mtctr r12
/* 801AA118 001A7058  4E 80 04 21 */	bctrl 
/* 801AA11C 001A705C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AA120 001A7060  28 00 00 00 */	cmplwi r0, 0
/* 801AA124 001A7064  40 82 00 24 */	bne .L_801AA148
/* 801AA128 001A7068  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AA12C 001A706C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AA130 001A7070  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA134 001A7074  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AA138 001A7078  7D 89 03 A6 */	mtctr r12
/* 801AA13C 001A707C  4E 80 04 21 */	bctrl 
/* 801AA140 001A7080  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AA144 001A7084  48 00 00 94 */	b .L_801AA1D8
.L_801AA148:
/* 801AA148 001A7088  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AA14C 001A708C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AA150 001A7090  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA154 001A7094  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AA158 001A7098  7D 89 03 A6 */	mtctr r12
/* 801AA15C 001A709C  4E 80 04 21 */	bctrl 
/* 801AA160 001A70A0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801AA164 001A70A4  48 00 00 58 */	b .L_801AA1BC
.L_801AA168:
/* 801AA168 001A70A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AA16C 001A70AC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AA170 001A70B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA174 001A70B4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AA178 001A70B8  7D 89 03 A6 */	mtctr r12
/* 801AA17C 001A70BC  4E 80 04 21 */	bctrl 
/* 801AA180 001A70C0  7C 64 1B 78 */	mr r4, r3
/* 801AA184 001A70C4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801AA188 001A70C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA18C 001A70CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801AA190 001A70D0  7D 89 03 A6 */	mtctr r12
/* 801AA194 001A70D4  4E 80 04 21 */	bctrl 
/* 801AA198 001A70D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AA19C 001A70DC  40 82 00 3C */	bne .L_801AA1D8
/* 801AA1A0 001A70E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AA1A4 001A70E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AA1A8 001A70E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA1AC 001A70EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AA1B0 001A70F0  7D 89 03 A6 */	mtctr r12
/* 801AA1B4 001A70F4  4E 80 04 21 */	bctrl 
/* 801AA1B8 001A70F8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801AA1BC:
/* 801AA1BC 001A70FC  81 81 00 08 */	lwz r12, 8(r1)
/* 801AA1C0 001A7100  38 61 00 08 */	addi r3, r1, 8
/* 801AA1C4 001A7104  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801AA1C8 001A7108  7D 89 03 A6 */	mtctr r12
/* 801AA1CC 001A710C  4E 80 04 21 */	bctrl 
/* 801AA1D0 001A7110  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AA1D4 001A7114  41 82 FF 94 */	beq .L_801AA168
.L_801AA1D8:
/* 801AA1D8 001A7118  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801AA1DC 001A711C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA1E0 001A7120  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801AA1E4 001A7124  7D 89 03 A6 */	mtctr r12
/* 801AA1E8 001A7128  4E 80 04 21 */	bctrl 
/* 801AA1EC 001A712C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801AA1F0 001A7130  7C 04 18 40 */	cmplw r4, r3
/* 801AA1F4 001A7134  40 82 FF 04 */	bne .L_801AA0F8
/* 801AA1F8 001A7138  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801AA1FC 001A713C  7C 08 03 A6 */	mtlr r0
/* 801AA200 001A7140  38 21 00 20 */	addi r1, r1, 0x20
/* 801AA204 001A7144  4E 80 00 20 */	blr 
.endfn "doAnimation__31ObjectMgr<Q24Game11DynParticle>Fv"

.fn doDirectDraw__Q24Game11DynParticleFR8Graphics, weak
/* 801AA208 001A7148  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q24Game11DynParticleFR8Graphics

.fn doSimulation__Q24Game11DynParticleFf, weak
/* 801AA20C 001A714C  4E 80 00 20 */	blr 
.endfn doSimulation__Q24Game11DynParticleFf

.fn doViewCalc__Q24Game11DynParticleFv, weak
/* 801AA210 001A7150  4E 80 00 20 */	blr 
.endfn doViewCalc__Q24Game11DynParticleFv

.fn doSetView__Q24Game11DynParticleFUl, weak
/* 801AA214 001A7154  4E 80 00 20 */	blr 
.endfn doSetView__Q24Game11DynParticleFUl

.fn doEntry__Q24Game11DynParticleFv, weak
/* 801AA218 001A7158  4E 80 00 20 */	blr 
.endfn doEntry__Q24Game11DynParticleFv

.fn doAnimation__Q24Game11DynParticleFv, weak
/* 801AA21C 001A715C  4E 80 00 20 */	blr 
.endfn doAnimation__Q24Game11DynParticleFv

.fn "alloc__35MonoObjectMgr<Q24Game11DynParticle>Fi", weak
/* 801AA220 001A7160  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801AA224 001A7164  7C 08 02 A6 */	mflr r0
/* 801AA228 001A7168  90 01 00 24 */	stw r0, 0x24(r1)
/* 801AA22C 001A716C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801AA230 001A7170  7C 9F 23 78 */	mr r31, r4
/* 801AA234 001A7174  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801AA238 001A7178  7C 7E 1B 78 */	mr r30, r3
/* 801AA23C 001A717C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801AA240 001A7180  7F FD FB 78 */	mr r29, r31
/* 801AA244 001A7184  1C 7D 00 34 */	mulli r3, r29, 0x34
/* 801AA248 001A7188  93 81 00 10 */	stw r28, 0x10(r1)
/* 801AA24C 001A718C  38 63 00 10 */	addi r3, r3, 0x10
/* 801AA250 001A7190  4B E7 9D 5D */	bl __nwa__FUl
/* 801AA254 001A7194  3C 80 80 1B */	lis r4, __ct__Q24Game11DynParticleFv@ha
/* 801AA258 001A7198  7F A7 EB 78 */	mr r7, r29
/* 801AA25C 001A719C  38 84 A3 AC */	addi r4, r4, __ct__Q24Game11DynParticleFv@l
/* 801AA260 001A71A0  38 A0 00 00 */	li r5, 0
/* 801AA264 001A71A4  38 C0 00 34 */	li r6, 0x34
/* 801AA268 001A71A8  4B F1 77 89 */	bl __construct_new_array
/* 801AA26C 001A71AC  90 7E 00 28 */	stw r3, 0x28(r30)
/* 801AA270 001A71B0  38 00 00 00 */	li r0, 0
/* 801AA274 001A71B4  7F A3 EB 78 */	mr r3, r29
/* 801AA278 001A71B8  93 FE 00 24 */	stw r31, 0x24(r30)
/* 801AA27C 001A71BC  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801AA280 001A71C0  4B E7 9D 2D */	bl __nwa__FUl
/* 801AA284 001A71C4  2C 1F 00 00 */	cmpwi r31, 0
/* 801AA288 001A71C8  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 801AA28C 001A71CC  39 60 00 00 */	li r11, 0
/* 801AA290 001A71D0  40 81 00 B0 */	ble .L_801AA340
/* 801AA294 001A71D4  2C 1F 00 08 */	cmpwi r31, 8
/* 801AA298 001A71D8  38 7F FF F8 */	addi r3, r31, -8
/* 801AA29C 001A71DC  40 81 00 80 */	ble .L_801AA31C
/* 801AA2A0 001A71E0  38 03 00 07 */	addi r0, r3, 7
/* 801AA2A4 001A71E4  54 00 E8 FE */	srwi r0, r0, 3
/* 801AA2A8 001A71E8  7C 09 03 A6 */	mtctr r0
/* 801AA2AC 001A71EC  2C 03 00 00 */	cmpwi r3, 0
/* 801AA2B0 001A71F0  40 81 00 6C */	ble .L_801AA31C
.L_801AA2B4:
/* 801AA2B4 001A71F4  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801AA2B8 001A71F8  39 40 00 01 */	li r10, 1
/* 801AA2BC 001A71FC  39 0B 00 01 */	addi r8, r11, 1
/* 801AA2C0 001A7200  38 EB 00 02 */	addi r7, r11, 2
/* 801AA2C4 001A7204  7D 43 59 AE */	stbx r10, r3, r11
/* 801AA2C8 001A7208  38 CB 00 03 */	addi r6, r11, 3
/* 801AA2CC 001A720C  38 AB 00 04 */	addi r5, r11, 4
/* 801AA2D0 001A7210  38 8B 00 05 */	addi r4, r11, 5
/* 801AA2D4 001A7214  81 3E 00 2C */	lwz r9, 0x2c(r30)
/* 801AA2D8 001A7218  38 6B 00 06 */	addi r3, r11, 6
/* 801AA2DC 001A721C  38 0B 00 07 */	addi r0, r11, 7
/* 801AA2E0 001A7220  39 6B 00 08 */	addi r11, r11, 8
/* 801AA2E4 001A7224  7D 49 41 AE */	stbx r10, r9, r8
/* 801AA2E8 001A7228  81 1E 00 2C */	lwz r8, 0x2c(r30)
/* 801AA2EC 001A722C  7D 48 39 AE */	stbx r10, r8, r7
/* 801AA2F0 001A7230  80 FE 00 2C */	lwz r7, 0x2c(r30)
/* 801AA2F4 001A7234  7D 47 31 AE */	stbx r10, r7, r6
/* 801AA2F8 001A7238  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 801AA2FC 001A723C  7D 46 29 AE */	stbx r10, r6, r5
/* 801AA300 001A7240  80 BE 00 2C */	lwz r5, 0x2c(r30)
/* 801AA304 001A7244  7D 45 21 AE */	stbx r10, r5, r4
/* 801AA308 001A7248  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 801AA30C 001A724C  7D 44 19 AE */	stbx r10, r4, r3
/* 801AA310 001A7250  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801AA314 001A7254  7D 43 01 AE */	stbx r10, r3, r0
/* 801AA318 001A7258  42 00 FF 9C */	bdnz .L_801AA2B4
.L_801AA31C:
/* 801AA31C 001A725C  7C 0B F8 50 */	subf r0, r11, r31
/* 801AA320 001A7260  38 80 00 01 */	li r4, 1
/* 801AA324 001A7264  7C 09 03 A6 */	mtctr r0
/* 801AA328 001A7268  7C 0B F8 00 */	cmpw r11, r31
/* 801AA32C 001A726C  40 80 00 14 */	bge .L_801AA340
.L_801AA330:
/* 801AA330 001A7270  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801AA334 001A7274  7C 83 59 AE */	stbx r4, r3, r11
/* 801AA338 001A7278  39 6B 00 01 */	addi r11, r11, 1
/* 801AA33C 001A727C  42 00 FF F4 */	bdnz .L_801AA330
.L_801AA340:
/* 801AA340 001A7280  7F C3 F3 78 */	mr r3, r30
/* 801AA344 001A7284  81 9E 00 00 */	lwz r12, 0(r30)
/* 801AA348 001A7288  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 801AA34C 001A728C  7D 89 03 A6 */	mtctr r12
/* 801AA350 001A7290  4E 80 04 21 */	bctrl 
/* 801AA354 001A7294  3B 80 00 00 */	li r28, 0
/* 801AA358 001A7298  3B A0 00 00 */	li r29, 0
/* 801AA35C 001A729C  48 00 00 24 */	b .L_801AA380
.L_801AA360:
/* 801AA360 001A72A0  80 1E 00 28 */	lwz r0, 0x28(r30)
/* 801AA364 001A72A4  7C 60 EA 14 */	add r3, r0, r29
/* 801AA368 001A72A8  81 83 00 30 */	lwz r12, 0x30(r3)
/* 801AA36C 001A72AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801AA370 001A72B0  7D 89 03 A6 */	mtctr r12
/* 801AA374 001A72B4  4E 80 04 21 */	bctrl 
/* 801AA378 001A72B8  3B BD 00 34 */	addi r29, r29, 0x34
/* 801AA37C 001A72BC  3B 9C 00 01 */	addi r28, r28, 1
.L_801AA380:
/* 801AA380 001A72C0  7C 1C F8 00 */	cmpw r28, r31
/* 801AA384 001A72C4  41 80 FF DC */	blt .L_801AA360
/* 801AA388 001A72C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801AA38C 001A72CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801AA390 001A72D0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801AA394 001A72D4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801AA398 001A72D8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801AA39C 001A72DC  7C 08 03 A6 */	mtlr r0
/* 801AA3A0 001A72E0  38 21 00 20 */	addi r1, r1, 0x20
/* 801AA3A4 001A72E4  4E 80 00 20 */	blr 
.endfn "alloc__35MonoObjectMgr<Q24Game11DynParticle>Fi"

.fn constructor__Q24Game11DynParticleFv, weak
/* 801AA3A8 001A72E8  4E 80 00 20 */	blr 
.endfn constructor__Q24Game11DynParticleFv

.fn __ct__Q24Game11DynParticleFv, weak
/* 801AA3AC 001A72EC  3C 80 80 4B */	lis r4, __vt__Q24Game11DynParticle@ha
/* 801AA3B0 001A72F0  C0 22 AE DC */	lfs f1, lbl_8051923C@sda21(r2)
/* 801AA3B4 001A72F4  38 84 55 B0 */	addi r4, r4, __vt__Q24Game11DynParticle@l
/* 801AA3B8 001A72F8  38 00 00 00 */	li r0, 0
/* 801AA3BC 001A72FC  90 83 00 30 */	stw r4, 0x30(r3)
/* 801AA3C0 001A7300  C0 02 AE D8 */	lfs f0, lbl_80519238@sda21(r2)
/* 801AA3C4 001A7304  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 801AA3C8 001A7308  98 03 00 2C */	stb r0, 0x2c(r3)
/* 801AA3CC 001A730C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 801AA3D0 001A7310  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 801AA3D4 001A7314  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801AA3D8 001A7318  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 801AA3DC 001A731C  4E 80 00 20 */	blr 
.endfn __ct__Q24Game11DynParticleFv

.fn "__ct__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801AA3E0 001A7320  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801AA3E4 001A7324  7C 08 02 A6 */	mflr r0
/* 801AA3E8 001A7328  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AA3EC 001A732C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801AA3F0 001A7330  7C 7F 1B 78 */	mr r31, r3
/* 801AA3F4 001A7334  48 26 6F 9D */	bl __ct__5CNodeFv
/* 801AA3F8 001A7338  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801AA3FC 001A733C  3C 60 80 4B */	lis r3, "__vt__31Container<Q24Game11DynParticle>"@ha
/* 801AA400 001A7340  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801AA404 001A7344  3C C0 80 4B */	lis r6, __vt__16GenericObjectMgr@ha
/* 801AA408 001A7348  90 1F 00 00 */	stw r0, 0(r31)
/* 801AA40C 001A734C  38 03 54 7C */	addi r0, r3, "__vt__31Container<Q24Game11DynParticle>"@l
/* 801AA410 001A7350  3C 80 80 4B */	lis r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@ha
/* 801AA414 001A7354  3C 60 80 4B */	lis r3, "__vt__35MonoObjectMgr<Q24Game11DynParticle>"@ha
/* 801AA418 001A7358  90 1F 00 00 */	stw r0, 0(r31)
/* 801AA41C 001A735C  39 00 00 00 */	li r8, 0
/* 801AA420 001A7360  38 E4 54 A8 */	addi r7, r4, "__vt__31ObjectMgr<Q24Game11DynParticle>"@l
/* 801AA424 001A7364  38 A3 55 24 */	addi r5, r3, "__vt__35MonoObjectMgr<Q24Game11DynParticle>"@l
/* 801AA428 001A7368  99 1F 00 18 */	stb r8, 0x18(r31)
/* 801AA42C 001A736C  38 06 B5 F0 */	addi r0, r6, __vt__16GenericObjectMgr@l
/* 801AA430 001A7370  38 C7 00 2C */	addi r6, r7, 0x2c
/* 801AA434 001A7374  38 85 00 2C */	addi r4, r5, 0x2c
/* 801AA438 001A7378  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801AA43C 001A737C  38 00 00 01 */	li r0, 1
/* 801AA440 001A7380  7F E3 FB 78 */	mr r3, r31
/* 801AA444 001A7384  90 FF 00 00 */	stw r7, 0(r31)
/* 801AA448 001A7388  90 DF 00 1C */	stw r6, 0x1c(r31)
/* 801AA44C 001A738C  90 BF 00 00 */	stw r5, 0(r31)
/* 801AA450 001A7390  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 801AA454 001A7394  98 1F 00 18 */	stb r0, 0x18(r31)
/* 801AA458 001A7398  91 1F 00 24 */	stw r8, 0x24(r31)
/* 801AA45C 001A739C  91 1F 00 20 */	stw r8, 0x20(r31)
/* 801AA460 001A73A0  91 1F 00 28 */	stw r8, 0x28(r31)
/* 801AA464 001A73A4  91 1F 00 2C */	stw r8, 0x2c(r31)
/* 801AA468 001A73A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801AA46C 001A73AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AA470 001A73B0  7C 08 03 A6 */	mtlr r0
/* 801AA474 001A73B4  38 21 00 10 */	addi r1, r1, 0x10
/* 801AA478 001A73B8  4E 80 00 20 */	blr 
.endfn "__ct__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "__ml__30Iterator<Q24Game11DynParticle>Fv", weak
/* 801AA47C 001A73BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801AA480 001A73C0  7C 08 02 A6 */	mflr r0
/* 801AA484 001A73C4  7C 64 1B 78 */	mr r4, r3
/* 801AA488 001A73C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AA48C 001A73CC  80 63 00 08 */	lwz r3, 8(r3)
/* 801AA490 001A73D0  80 84 00 04 */	lwz r4, 4(r4)
/* 801AA494 001A73D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA498 001A73D8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AA49C 001A73DC  7D 89 03 A6 */	mtctr r12
/* 801AA4A0 001A73E0  4E 80 04 21 */	bctrl 
/* 801AA4A4 001A73E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AA4A8 001A73E8  7C 08 03 A6 */	mtlr r0
/* 801AA4AC 001A73EC  38 21 00 10 */	addi r1, r1, 0x10
/* 801AA4B0 001A73F0  4E 80 00 20 */	blr 
.endfn "__ml__30Iterator<Q24Game11DynParticle>Fv"

.fn "next__30Iterator<Q24Game11DynParticle>Fv", weak
/* 801AA4B4 001A73F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801AA4B8 001A73F8  7C 08 02 A6 */	mflr r0
/* 801AA4BC 001A73FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AA4C0 001A7400  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801AA4C4 001A7404  7C 7F 1B 78 */	mr r31, r3
/* 801AA4C8 001A7408  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801AA4CC 001A740C  28 00 00 00 */	cmplwi r0, 0
/* 801AA4D0 001A7410  40 82 00 24 */	bne .L_801AA4F4
/* 801AA4D4 001A7414  80 7F 00 08 */	lwz r3, 8(r31)
/* 801AA4D8 001A7418  80 9F 00 04 */	lwz r4, 4(r31)
/* 801AA4DC 001A741C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA4E0 001A7420  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AA4E4 001A7424  7D 89 03 A6 */	mtctr r12
/* 801AA4E8 001A7428  4E 80 04 21 */	bctrl 
/* 801AA4EC 001A742C  90 7F 00 04 */	stw r3, 4(r31)
/* 801AA4F0 001A7430  48 00 00 94 */	b .L_801AA584
.L_801AA4F4:
/* 801AA4F4 001A7434  80 7F 00 08 */	lwz r3, 8(r31)
/* 801AA4F8 001A7438  80 9F 00 04 */	lwz r4, 4(r31)
/* 801AA4FC 001A743C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA500 001A7440  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AA504 001A7444  7D 89 03 A6 */	mtctr r12
/* 801AA508 001A7448  4E 80 04 21 */	bctrl 
/* 801AA50C 001A744C  90 7F 00 04 */	stw r3, 4(r31)
/* 801AA510 001A7450  48 00 00 58 */	b .L_801AA568
.L_801AA514:
/* 801AA514 001A7454  80 7F 00 08 */	lwz r3, 8(r31)
/* 801AA518 001A7458  80 9F 00 04 */	lwz r4, 4(r31)
/* 801AA51C 001A745C  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA520 001A7460  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AA524 001A7464  7D 89 03 A6 */	mtctr r12
/* 801AA528 001A7468  4E 80 04 21 */	bctrl 
/* 801AA52C 001A746C  7C 64 1B 78 */	mr r4, r3
/* 801AA530 001A7470  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801AA534 001A7474  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA538 001A7478  81 8C 00 08 */	lwz r12, 8(r12)
/* 801AA53C 001A747C  7D 89 03 A6 */	mtctr r12
/* 801AA540 001A7480  4E 80 04 21 */	bctrl 
/* 801AA544 001A7484  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AA548 001A7488  40 82 00 3C */	bne .L_801AA584
/* 801AA54C 001A748C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801AA550 001A7490  80 9F 00 04 */	lwz r4, 4(r31)
/* 801AA554 001A7494  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA558 001A7498  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AA55C 001A749C  7D 89 03 A6 */	mtctr r12
/* 801AA560 001A74A0  4E 80 04 21 */	bctrl 
/* 801AA564 001A74A4  90 7F 00 04 */	stw r3, 4(r31)
.L_801AA568:
/* 801AA568 001A74A8  7F E3 FB 78 */	mr r3, r31
/* 801AA56C 001A74AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801AA570 001A74B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801AA574 001A74B4  7D 89 03 A6 */	mtctr r12
/* 801AA578 001A74B8  4E 80 04 21 */	bctrl 
/* 801AA57C 001A74BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AA580 001A74C0  41 82 FF 94 */	beq .L_801AA514
.L_801AA584:
/* 801AA584 001A74C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AA588 001A74C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801AA58C 001A74CC  7C 08 03 A6 */	mtlr r0
/* 801AA590 001A74D0  38 21 00 10 */	addi r1, r1, 0x10
/* 801AA594 001A74D4  4E 80 00 20 */	blr 
.endfn "next__30Iterator<Q24Game11DynParticle>Fv"

.fn "first__30Iterator<Q24Game11DynParticle>Fv", weak
/* 801AA598 001A74D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801AA59C 001A74DC  7C 08 02 A6 */	mflr r0
/* 801AA5A0 001A74E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AA5A4 001A74E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801AA5A8 001A74E8  7C 7F 1B 78 */	mr r31, r3
/* 801AA5AC 001A74EC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801AA5B0 001A74F0  28 00 00 00 */	cmplwi r0, 0
/* 801AA5B4 001A74F4  40 82 00 20 */	bne .L_801AA5D4
/* 801AA5B8 001A74F8  80 7F 00 08 */	lwz r3, 8(r31)
/* 801AA5BC 001A74FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA5C0 001A7500  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801AA5C4 001A7504  7D 89 03 A6 */	mtctr r12
/* 801AA5C8 001A7508  4E 80 04 21 */	bctrl 
/* 801AA5CC 001A750C  90 7F 00 04 */	stw r3, 4(r31)
/* 801AA5D0 001A7510  48 00 00 90 */	b .L_801AA660
.L_801AA5D4:
/* 801AA5D4 001A7514  80 7F 00 08 */	lwz r3, 8(r31)
/* 801AA5D8 001A7518  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA5DC 001A751C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801AA5E0 001A7520  7D 89 03 A6 */	mtctr r12
/* 801AA5E4 001A7524  4E 80 04 21 */	bctrl 
/* 801AA5E8 001A7528  90 7F 00 04 */	stw r3, 4(r31)
/* 801AA5EC 001A752C  48 00 00 58 */	b .L_801AA644
.L_801AA5F0:
/* 801AA5F0 001A7530  80 7F 00 08 */	lwz r3, 8(r31)
/* 801AA5F4 001A7534  80 9F 00 04 */	lwz r4, 4(r31)
/* 801AA5F8 001A7538  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA5FC 001A753C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801AA600 001A7540  7D 89 03 A6 */	mtctr r12
/* 801AA604 001A7544  4E 80 04 21 */	bctrl 
/* 801AA608 001A7548  7C 64 1B 78 */	mr r4, r3
/* 801AA60C 001A754C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801AA610 001A7550  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA614 001A7554  81 8C 00 08 */	lwz r12, 8(r12)
/* 801AA618 001A7558  7D 89 03 A6 */	mtctr r12
/* 801AA61C 001A755C  4E 80 04 21 */	bctrl 
/* 801AA620 001A7560  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AA624 001A7564  40 82 00 3C */	bne .L_801AA660
/* 801AA628 001A7568  80 7F 00 08 */	lwz r3, 8(r31)
/* 801AA62C 001A756C  80 9F 00 04 */	lwz r4, 4(r31)
/* 801AA630 001A7570  81 83 00 00 */	lwz r12, 0(r3)
/* 801AA634 001A7574  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801AA638 001A7578  7D 89 03 A6 */	mtctr r12
/* 801AA63C 001A757C  4E 80 04 21 */	bctrl 
/* 801AA640 001A7580  90 7F 00 04 */	stw r3, 4(r31)
.L_801AA644:
/* 801AA644 001A7584  7F E3 FB 78 */	mr r3, r31
/* 801AA648 001A7588  81 9F 00 00 */	lwz r12, 0(r31)
/* 801AA64C 001A758C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801AA650 001A7590  7D 89 03 A6 */	mtctr r12
/* 801AA654 001A7594  4E 80 04 21 */	bctrl 
/* 801AA658 001A7598  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801AA65C 001A759C  41 82 FF 94 */	beq .L_801AA5F0
.L_801AA660:
/* 801AA660 001A75A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AA664 001A75A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801AA668 001A75A8  7C 08 03 A6 */	mtlr r0
/* 801AA66C 001A75AC  38 21 00 10 */	addi r1, r1, 0x10
/* 801AA670 001A75B0  4E 80 00 20 */	blr 
.endfn "first__30Iterator<Q24Game11DynParticle>Fv"

.fn "@28@resetMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801AA674 001A75B4  38 63 FF E4 */	addi r3, r3, -28
/* 801AA678 001A75B8  4B FF EE B8 */	b "resetMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv"
.endfn "@28@resetMgr__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "@28@doDirectDraw__31ObjectMgr<Q24Game11DynParticle>FR8Graphics", weak
/* 801AA67C 001A75BC  38 63 FF E4 */	addi r3, r3, -28
/* 801AA680 001A75C0  4B FF EF B4 */	b "doDirectDraw__31ObjectMgr<Q24Game11DynParticle>FR8Graphics"
.endfn "@28@doDirectDraw__31ObjectMgr<Q24Game11DynParticle>FR8Graphics"

.fn "@28@doSimulation__31ObjectMgr<Q24Game11DynParticle>Ff", weak
/* 801AA684 001A75C4  38 63 FF E4 */	addi r3, r3, -28
/* 801AA688 001A75C8  4B FF F1 EC */	b "doSimulation__31ObjectMgr<Q24Game11DynParticle>Ff"
.endfn "@28@doSimulation__31ObjectMgr<Q24Game11DynParticle>Ff"

.fn "@28@doViewCalc__31ObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801AA68C 001A75CC  38 63 FF E4 */	addi r3, r3, -28
/* 801AA690 001A75D0  4B FF F3 D8 */	b "doViewCalc__31ObjectMgr<Q24Game11DynParticle>Fv"
.endfn "@28@doViewCalc__31ObjectMgr<Q24Game11DynParticle>Fv"

.fn "@28@doSetView__31ObjectMgr<Q24Game11DynParticle>Fi", weak
/* 801AA694 001A75D4  38 63 FF E4 */	addi r3, r3, -28
/* 801AA698 001A75D8  4B FF F5 B4 */	b "doSetView__31ObjectMgr<Q24Game11DynParticle>Fi"
.endfn "@28@doSetView__31ObjectMgr<Q24Game11DynParticle>Fi"

.fn "@28@doEntry__31ObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801AA69C 001A75DC  38 63 FF E4 */	addi r3, r3, -28
/* 801AA6A0 001A75E0  4B FF F7 A0 */	b "doEntry__31ObjectMgr<Q24Game11DynParticle>Fv"
.endfn "@28@doEntry__31ObjectMgr<Q24Game11DynParticle>Fv"

.fn "@28@doAnimation__31ObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801AA6A4 001A75E4  38 63 FF E4 */	addi r3, r3, -28
/* 801AA6A8 001A75E8  4B FF F9 7C */	b "doAnimation__31ObjectMgr<Q24Game11DynParticle>Fv"
.endfn "@28@doAnimation__31ObjectMgr<Q24Game11DynParticle>Fv"

.fn "@28@resetMgr__Q24Game14DynParticleMgrFv", weak
/* 801AA6AC 001A75EC  38 63 FF E4 */	addi r3, r3, -28
/* 801AA6B0 001A75F0  4B FF D9 88 */	b resetMgr__Q24Game14DynParticleMgrFv
.endfn "@28@resetMgr__Q24Game14DynParticleMgrFv"

.fn "@28@doDirectDraw__35MonoObjectMgr<Q24Game11DynParticle>FR8Graphics", weak
/* 801AA6B4 001A75F4  38 63 FF E4 */	addi r3, r3, -28
/* 801AA6B8 001A75F8  4B FF ED E8 */	b "doDirectDraw__35MonoObjectMgr<Q24Game11DynParticle>FR8Graphics"
.endfn "@28@doDirectDraw__35MonoObjectMgr<Q24Game11DynParticle>FR8Graphics"

.fn "@28@doSimulation__35MonoObjectMgr<Q24Game11DynParticle>Ff", weak
/* 801AA6BC 001A75FC  38 63 FF E4 */	addi r3, r3, -28
/* 801AA6C0 001A7600  4B FF ED 50 */	b "doSimulation__35MonoObjectMgr<Q24Game11DynParticle>Ff"
.endfn "@28@doSimulation__35MonoObjectMgr<Q24Game11DynParticle>Ff"

.fn "@28@doViewCalc__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801AA6C4 001A7604  38 63 FF E4 */	addi r3, r3, -28
/* 801AA6C8 001A7608  4B FF EC C8 */	b "doViewCalc__35MonoObjectMgr<Q24Game11DynParticle>Fv"
.endfn "@28@doViewCalc__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "@28@doSetView__35MonoObjectMgr<Q24Game11DynParticle>Fi", weak
/* 801AA6CC 001A760C  38 63 FF E4 */	addi r3, r3, -28
/* 801AA6D0 001A7610  4B FF EC 30 */	b "doSetView__35MonoObjectMgr<Q24Game11DynParticle>Fi"
.endfn "@28@doSetView__35MonoObjectMgr<Q24Game11DynParticle>Fi"

.fn "@28@doEntry__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801AA6D4 001A7614  38 63 FF E4 */	addi r3, r3, -28
/* 801AA6D8 001A7618  4B FF EB A8 */	b "doEntry__35MonoObjectMgr<Q24Game11DynParticle>Fv"
.endfn "@28@doEntry__35MonoObjectMgr<Q24Game11DynParticle>Fv"

.fn "@28@doAnimation__35MonoObjectMgr<Q24Game11DynParticle>Fv", weak
/* 801AA6DC 001A761C  38 63 FF E4 */	addi r3, r3, -28
/* 801AA6E0 001A7620  4B FF EB 20 */	b "doAnimation__35MonoObjectMgr<Q24Game11DynParticle>Fv"
.endfn "@28@doAnimation__35MonoObjectMgr<Q24Game11DynParticle>Fv"
