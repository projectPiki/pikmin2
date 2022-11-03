.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_creature_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8047C6E8:
	.asciz "creature.cpp"
.balign 4
lbl_8047C6F8:
	.asciz "P2Assert"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
lbl_804B00A4:
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte "resolveOneColl__Q24Game8CreatureFP8CollPartP8CollPartR10Vector3<f>"
.global "__vt__63Delegate3<Q24Game8Creature,P8CollPart,P8CollPart,R10Vector3<f>>"
"__vt__63Delegate3<Q24Game8Creature,P8CollPart,P8CollPart,R10Vector3<f>>":
	.4byte 0
	.4byte 0
	.4byte "invoke__63Delegate3<Q24Game8Creature,P8CollPart,P8CollPart,R10Vector3<f>>FP8CollPartP8CollPartR10Vector3<f>"
.global "__vt__47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
"__vt__47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>":
	.4byte 0
	.4byte 0
	.4byte 0
.global __vt__Q24Game8Creature
__vt__Q24Game8Creature:
	.4byte 0
	.4byte 0
	.4byte 0
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
	.4byte 0
	.4byte 0
	.4byte 0
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
	.4byte 0
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
.global __vt__Q24Game10CellObject
__vt__Q24Game10CellObject:
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte checkCollision__Q24Game10CellObjectFPQ24Game10CellObject
	.4byte 0
	.4byte 0
	.4byte isPiki__Q24Game10CellObjectFv
	.4byte isNavi__Q24Game10CellObjectFv
	.4byte deferPikiCollision__Q24Game10CellObjectFv
	.4byte 0
	.4byte 0
.global __vt__Q24Game15TPositionObject
__vt__Q24Game15TPositionObject:
	.4byte 0
	.4byte 0
	.4byte 0

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.global usePacketCulling__Q24Game8Creature
usePacketCulling__Q24Game8Creature:
	.byte 1

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 4
gfNAN___Q24Game5P2JST:
	.skip 4
.global currOp__Q24Game8Creature
currOp__Q24Game8Creature:
	.skip 4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80518280:
	.float 100.0
lbl_80518284:
	.float 1.0
lbl_80518288:
	.float 0.0
lbl_8051828C:
	.float 0.5
lbl_80518290:
	.float 10.0
lbl_80518294:
	.float 4.0
lbl_80518298:
	.float -500.0
lbl_8051829C:
	.float -300.0
lbl_805182A0:
	.float 200.0
lbl_805182A4:
	.float 0.1
lbl_805182A8:
	.float 2.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q24Game8CreatureFv
__ct__Q24Game8CreatureFv:
/* 8013AE84 00137DC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013AE88 00137DC8  7C 08 02 A6 */	mflr r0
/* 8013AE8C 00137DCC  3C 80 80 4B */	lis r4, __vt__Q24Game15TPositionObject@ha
/* 8013AE90 00137DD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013AE94 00137DD4  38 04 02 A4 */	addi r0, r4, __vt__Q24Game15TPositionObject@l
/* 8013AE98 00137DD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013AE9C 00137DDC  7C 7F 1B 78 */	mr r31, r3
/* 8013AEA0 00137DE0  90 03 00 00 */	stw r0, 0(r3)
/* 8013AEA4 00137DE4  38 7F 00 04 */	addi r3, r31, 4
/* 8013AEA8 00137DE8  48 10 18 D1 */	bl __ct__Q210SweepPrune6ObjectFv
/* 8013AEAC 00137DEC  3C 60 80 4B */	lis r3, __vt__Q24Game10CellObject@ha
/* 8013AEB0 00137DF0  3C 80 80 14 */	lis r4, __ct__Q24Game7CellLegFv@ha
/* 8013AEB4 00137DF4  38 03 02 78 */	addi r0, r3, __vt__Q24Game10CellObject@l
/* 8013AEB8 00137DF8  38 A0 00 00 */	li r5, 0
/* 8013AEBC 00137DFC  90 1F 00 00 */	stw r0, 0(r31)
/* 8013AEC0 00137E00  38 7F 00 54 */	addi r3, r31, 0x54
/* 8013AEC4 00137E04  38 84 AF B0 */	addi r4, r4, __ct__Q24Game7CellLegFv@l
/* 8013AEC8 00137E08  38 C0 00 14 */	li r6, 0x14
/* 8013AECC 00137E0C  38 E0 00 04 */	li r7, 4
/* 8013AED0 00137E10  4B F8 69 6D */	bl __construct_array
/* 8013AED4 00137E14  38 7F 00 A8 */	addi r3, r31, 0xa8
/* 8013AED8 00137E18  48 01 BF 41 */	bl __ct__Q24Game15CollisionBufferFv
/* 8013AEDC 00137E1C  38 00 00 01 */	li r0, 1
/* 8013AEE0 00137E20  3C 60 80 4B */	lis r3, __vt__Q24Game8Creature@ha
/* 8013AEE4 00137E24  98 1F 00 64 */	stb r0, 0x64(r31)
/* 8013AEE8 00137E28  38 80 00 00 */	li r4, 0
/* 8013AEEC 00137E2C  38 03 00 C8 */	addi r0, r3, __vt__Q24Game8Creature@l
/* 8013AEF0 00137E30  38 7F 00 D8 */	addi r3, r31, 0xd8
/* 8013AEF4 00137E34  98 9F 00 78 */	stb r4, 0x78(r31)
/* 8013AEF8 00137E38  98 9F 00 8C */	stb r4, 0x8c(r31)
/* 8013AEFC 00137E3C  98 9F 00 A0 */	stb r4, 0xa0(r31)
/* 8013AF00 00137E40  93 FF 00 60 */	stw r31, 0x60(r31)
/* 8013AF04 00137E44  93 FF 00 74 */	stw r31, 0x74(r31)
/* 8013AF08 00137E48  93 FF 00 88 */	stw r31, 0x88(r31)
/* 8013AF0C 00137E4C  93 FF 00 9C */	stw r31, 0x9c(r31)
/* 8013AF10 00137E50  90 9F 00 A4 */	stw r4, 0xa4(r31)
/* 8013AF14 00137E54  90 1F 00 00 */	stw r0, 0(r31)
/* 8013AF18 00137E58  98 9F 00 BC */	stb r4, 0xbc(r31)
/* 8013AF1C 00137E5C  98 9F 00 BD */	stb r4, 0xbd(r31)
/* 8013AF20 00137E60  98 9F 00 BE */	stb r4, 0xbe(r31)
/* 8013AF24 00137E64  98 9F 00 BF */	stb r4, 0xbf(r31)
/* 8013AF28 00137E68  48 09 C8 FD */	bl __ct__Q24Game5AILODFv
/* 8013AF2C 00137E6C  38 7F 01 2C */	addi r3, r31, 0x12c
/* 8013AF30 00137E70  48 05 B7 41 */	bl __ct__Q24Game13UpdateContextFv
/* 8013AF34 00137E74  38 00 00 00 */	li r0, 0
/* 8013AF38 00137E78  C0 22 9F 20 */	lfs f1, lbl_80518280@sda21(r2)
/* 8013AF3C 00137E7C  90 1F 01 14 */	stw r0, 0x114(r31)
/* 8013AF40 00137E80  38 7F 01 38 */	addi r3, r31, 0x138
/* 8013AF44 00137E84  C0 02 9F 24 */	lfs f0, lbl_80518284@sda21(r2)
/* 8013AF48 00137E88  90 1F 01 74 */	stw r0, 0x174(r31)
/* 8013AF4C 00137E8C  D0 3F 01 18 */	stfs f1, 0x118(r31)
/* 8013AF50 00137E90  90 1F 00 C4 */	stw r0, 0xc4(r31)
/* 8013AF54 00137E94  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 8013AF58 00137E98  D0 1F 01 6C */	stfs f0, 0x16c(r31)
/* 8013AF5C 00137E9C  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 8013AF60 00137EA0  4B FA F3 41 */	bl PSMTXIdentity
/* 8013AF64 00137EA4  3C 60 00 01 */	lis r3, 0x0000FFFE@ha
/* 8013AF68 00137EA8  38 00 00 00 */	li r0, 0
/* 8013AF6C 00137EAC  38 83 FF FE */	addi r4, r3, 0x0000FFFE@l
/* 8013AF70 00137EB0  7F E3 FB 78 */	mr r3, r31
/* 8013AF74 00137EB4  B0 9F 01 28 */	sth r4, 0x128(r31)
/* 8013AF78 00137EB8  98 1F 00 BC */	stb r0, 0xbc(r31)
/* 8013AF7C 00137EBC  98 1F 00 BD */	stb r0, 0xbd(r31)
/* 8013AF80 00137EC0  98 1F 00 BE */	stb r0, 0xbe(r31)
/* 8013AF84 00137EC4  98 1F 00 BF */	stb r0, 0xbf(r31)
/* 8013AF88 00137EC8  80 1F 00 BC */	lwz r0, 0xbc(r31)
/* 8013AF8C 00137ECC  60 00 00 07 */	ori r0, r0, 7
/* 8013AF90 00137ED0  90 1F 00 BC */	stw r0, 0xbc(r31)
/* 8013AF94 00137ED4  48 06 3F 01 */	bl clearStick__Q24Game8CreatureFv
/* 8013AF98 00137ED8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013AF9C 00137EDC  7F E3 FB 78 */	mr r3, r31
/* 8013AFA0 00137EE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013AFA4 00137EE4  7C 08 03 A6 */	mtlr r0
/* 8013AFA8 00137EE8  38 21 00 10 */	addi r1, r1, 0x10
/* 8013AFAC 00137EEC  4E 80 00 20 */	blr 

.global __ct__Q24Game7CellLegFv
__ct__Q24Game7CellLegFv:
/* 8013AFB0 00137EF0  38 00 00 00 */	li r0, 0
/* 8013AFB4 00137EF4  90 03 00 04 */	stw r0, 4(r3)
/* 8013AFB8 00137EF8  90 03 00 00 */	stw r0, 0(r3)
/* 8013AFBC 00137EFC  90 03 00 0C */	stw r0, 0xc(r3)
/* 8013AFC0 00137F00  90 03 00 08 */	stw r0, 8(r3)
/* 8013AFC4 00137F04  4E 80 00 20 */	blr 

.global init__Q24Game8CreatureFPQ24Game15CreatureInitArg
init__Q24Game8CreatureFPQ24Game15CreatureInitArg:
/* 8013AFC8 00137F08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013AFCC 00137F0C  7C 08 02 A6 */	mflr r0
/* 8013AFD0 00137F10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013AFD4 00137F14  38 00 00 00 */	li r0, 0
/* 8013AFD8 00137F18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013AFDC 00137F1C  7C 9F 23 78 */	mr r31, r4
/* 8013AFE0 00137F20  93 C1 00 08 */	stw r30, 8(r1)
/* 8013AFE4 00137F24  7C 7E 1B 78 */	mr r30, r3
/* 8013AFE8 00137F28  90 03 00 DC */	stw r0, 0xdc(r3)
/* 8013AFEC 00137F2C  90 03 00 E0 */	stw r0, 0xe0(r3)
/* 8013AFF0 00137F30  90 03 00 E4 */	stw r0, 0xe4(r3)
/* 8013AFF4 00137F34  90 03 00 E8 */	stw r0, 0xe8(r3)
/* 8013AFF8 00137F38  90 03 00 EC */	stw r0, 0xec(r3)
/* 8013AFFC 00137F3C  98 03 00 BC */	stb r0, 0xbc(r3)
/* 8013B000 00137F40  98 03 00 BD */	stb r0, 0xbd(r3)
/* 8013B004 00137F44  98 03 00 BE */	stb r0, 0xbe(r3)
/* 8013B008 00137F48  98 03 00 BF */	stb r0, 0xbf(r3)
/* 8013B00C 00137F4C  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 8013B010 00137F50  60 00 00 07 */	ori r0, r0, 7
/* 8013B014 00137F54  90 03 00 BC */	stw r0, 0xbc(r3)
/* 8013B018 00137F58  48 06 3E 7D */	bl clearStick__Q24Game8CreatureFv
/* 8013B01C 00137F5C  80 8D 93 50 */	lwz r4, collisionUpdateMgr__4Game@sda21(r13)
/* 8013B020 00137F60  38 7E 01 2C */	addi r3, r30, 0x12c
/* 8013B024 00137F64  48 05 B6 C1 */	bl init__Q24Game13UpdateContextFPQ24Game9UpdateMgr
/* 8013B028 00137F68  C0 02 9F 28 */	lfs f0, lbl_80518288@sda21(r2)
/* 8013B02C 00137F6C  7F C3 F3 78 */	mr r3, r30
/* 8013B030 00137F70  D0 1E 01 1C */	stfs f0, 0x11c(r30)
/* 8013B034 00137F74  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 8013B038 00137F78  D0 1E 01 24 */	stfs f0, 0x124(r30)
/* 8013B03C 00137F7C  48 06 4A 61 */	bl clearCapture__Q24Game8CreatureFv
/* 8013B040 00137F80  38 00 00 00 */	li r0, 0
/* 8013B044 00137F84  C0 22 9F 28 */	lfs f1, lbl_80518288@sda21(r2)
/* 8013B048 00137F88  90 1E 00 C8 */	stw r0, 0xc8(r30)
/* 8013B04C 00137F8C  7F C3 F3 78 */	mr r3, r30
/* 8013B050 00137F90  C0 02 9F 24 */	lfs f0, lbl_80518284@sda21(r2)
/* 8013B054 00137F94  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 8013B058 00137F98  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 8013B05C 00137F9C  D0 3E 00 D4 */	stfs f1, 0xd4(r30)
/* 8013B060 00137FA0  48 06 4A 3D */	bl clearCapture__Q24Game8CreatureFv
/* 8013B064 00137FA4  7F C3 F3 78 */	mr r3, r30
/* 8013B068 00137FA8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B06C 00137FAC  81 8C 01 50 */	lwz r12, 0x150(r12)
/* 8013B070 00137FB0  7D 89 03 A6 */	mtctr r12
/* 8013B074 00137FB4  4E 80 04 21 */	bctrl 
/* 8013B078 00137FB8  28 03 00 00 */	cmplwi r3, 0
/* 8013B07C 00137FBC  41 82 00 24 */	beq .L_8013B0A0
/* 8013B080 00137FC0  7F C3 F3 78 */	mr r3, r30
/* 8013B084 00137FC4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B088 00137FC8  81 8C 01 50 */	lwz r12, 0x150(r12)
/* 8013B08C 00137FCC  7D 89 03 A6 */	mtctr r12
/* 8013B090 00137FD0  4E 80 04 21 */	bctrl 
/* 8013B094 00137FD4  38 00 00 00 */	li r0, 0
/* 8013B098 00137FD8  90 03 00 04 */	stw r0, 4(r3)
/* 8013B09C 00137FDC  90 03 00 00 */	stw r0, 0(r3)
.L_8013B0A0:
/* 8013B0A0 00137FE0  7F C3 F3 78 */	mr r3, r30
/* 8013B0A4 00137FE4  7F E4 FB 78 */	mr r4, r31
/* 8013B0A8 00137FE8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B0AC 00137FEC  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8013B0B0 00137FF0  7D 89 03 A6 */	mtctr r12
/* 8013B0B4 00137FF4  4E 80 04 21 */	bctrl 
/* 8013B0B8 00137FF8  7F C3 F3 78 */	mr r3, r30
/* 8013B0BC 00137FFC  7F E4 FB 78 */	mr r4, r31
/* 8013B0C0 00138000  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B0C4 00138004  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8013B0C8 00138008  7D 89 03 A6 */	mtctr r12
/* 8013B0CC 0013800C  4E 80 04 21 */	bctrl 
/* 8013B0D0 00138010  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013B0D4 00138014  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013B0D8 00138018  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013B0DC 0013801C  7C 08 03 A6 */	mtlr r0
/* 8013B0E0 00138020  38 21 00 10 */	addi r1, r1, 0x10
/* 8013B0E4 00138024  4E 80 00 20 */	blr 

.global onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg:
/* 8013B0E8 00138028  4E 80 00 20 */	blr 

.global onInit__Q24Game8CreatureFPQ24Game15CreatureInitArg
onInit__Q24Game8CreatureFPQ24Game15CreatureInitArg:
/* 8013B0EC 0013802C  4E 80 00 20 */	blr 

.global kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
kill__Q24Game8CreatureFPQ24Game15CreatureKillArg:
/* 8013B0F0 00138030  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013B0F4 00138034  7C 08 02 A6 */	mflr r0
/* 8013B0F8 00138038  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013B0FC 0013803C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013B100 00138040  7C 9F 23 78 */	mr r31, r4
/* 8013B104 00138044  93 C1 00 08 */	stw r30, 8(r1)
/* 8013B108 00138048  7C 7E 1B 78 */	mr r30, r3
/* 8013B10C 0013804C  48 06 43 19 */	bl endStick__Q24Game8CreatureFv
/* 8013B110 00138050  7F C3 F3 78 */	mr r3, r30
/* 8013B114 00138054  38 80 00 00 */	li r4, 0
/* 8013B118 00138058  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B11C 0013805C  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8013B120 00138060  7D 89 03 A6 */	mtctr r12
/* 8013B124 00138064  4E 80 04 21 */	bctrl 
/* 8013B128 00138068  80 0D 92 C8 */	lwz r0, cellMgr__4Game@sda21(r13)
/* 8013B12C 0013806C  7F C3 F3 78 */	mr r3, r30
/* 8013B130 00138070  90 0D 92 D8 */	stw r0, sCurrCellMgr__Q24Game4Cell@sda21(r13)
/* 8013B134 00138074  48 01 B5 59 */	bl exitCell__Q24Game10CellObjectFv
/* 8013B138 00138078  38 00 00 00 */	li r0, 0
/* 8013B13C 0013807C  38 7E 01 2C */	addi r3, r30, 0x12c
/* 8013B140 00138080  90 0D 92 D8 */	stw r0, sCurrCellMgr__Q24Game4Cell@sda21(r13)
/* 8013B144 00138084  48 05 B5 DD */	bl exit__Q24Game13UpdateContextFv
/* 8013B148 00138088  7F C3 F3 78 */	mr r3, r30
/* 8013B14C 0013808C  48 06 3D 6D */	bl releaseAllStickers__Q24Game8CreatureFv
/* 8013B150 00138090  7F C3 F3 78 */	mr r3, r30
/* 8013B154 00138094  48 06 49 49 */	bl clearCapture__Q24Game8CreatureFv
/* 8013B158 00138098  7F C3 F3 78 */	mr r3, r30
/* 8013B15C 0013809C  7F E4 FB 78 */	mr r4, r31
/* 8013B160 001380A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B164 001380A4  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8013B168 001380A8  7D 89 03 A6 */	mtctr r12
/* 8013B16C 001380AC  4E 80 04 21 */	bctrl 
/* 8013B170 001380B0  80 7E 00 C4 */	lwz r3, 0xc4(r30)
/* 8013B174 001380B4  28 03 00 00 */	cmplwi r3, 0
/* 8013B178 001380B8  41 82 00 14 */	beq .L_8013B18C
/* 8013B17C 001380BC  7F C4 F3 78 */	mr r4, r30
/* 8013B180 001380C0  48 06 FB 75 */	bl informDeath__Q24Game9GeneratorFPQ24Game8Creature
/* 8013B184 001380C4  38 00 00 00 */	li r0, 0
/* 8013B188 001380C8  90 1E 00 C4 */	stw r0, 0xc4(r30)
.L_8013B18C:
/* 8013B18C 001380CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013B190 001380D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013B194 001380D4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013B198 001380D8  7C 08 03 A6 */	mtlr r0
/* 8013B19C 001380DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8013B1A0 001380E0  4E 80 00 20 */	blr 

.global onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg:
/* 8013B1A4 001380E4  4E 80 00 20 */	blr 

.global "setPosition__Q24Game8CreatureFR10Vector3<f>b"
"setPosition__Q24Game8CreatureFR10Vector3<f>b":
/* 8013B1A8 001380E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013B1AC 001380EC  7C 08 02 A6 */	mflr r0
/* 8013B1B0 001380F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013B1B4 001380F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013B1B8 001380F8  7C BF 2B 78 */	mr r31, r5
/* 8013B1BC 001380FC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013B1C0 00138100  7C 9E 23 78 */	mr r30, r4
/* 8013B1C4 00138104  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013B1C8 00138108  7C 7D 1B 78 */	mr r29, r3
/* 8013B1CC 0013810C  81 83 00 00 */	lwz r12, 0(r3)
/* 8013B1D0 00138110  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8013B1D4 00138114  7D 89 03 A6 */	mtctr r12
/* 8013B1D8 00138118  4E 80 04 21 */	bctrl 
/* 8013B1DC 0013811C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8013B1E0 00138120  40 82 00 74 */	bne .L_8013B254
/* 8013B1E4 00138124  7F A3 EB 78 */	mr r3, r29
/* 8013B1E8 00138128  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013B1EC 0013812C  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 8013B1F0 00138130  7D 89 03 A6 */	mtctr r12
/* 8013B1F4 00138134  4E 80 04 21 */	bctrl 
/* 8013B1F8 00138138  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 8013B1FC 0013813C  28 03 00 00 */	cmplwi r3, 0
/* 8013B200 00138140  41 82 00 3C */	beq .L_8013B23C
/* 8013B204 00138144  80 83 00 08 */	lwz r4, 8(r3)
/* 8013B208 00138148  38 7D 01 38 */	addi r3, r29, 0x138
/* 8013B20C 0013814C  38 84 00 24 */	addi r4, r4, 0x24
/* 8013B210 00138150  4B FA F0 BD */	bl PSMTXCopy
/* 8013B214 00138154  80 7D 01 74 */	lwz r3, 0x174(r29)
/* 8013B218 00138158  80 63 00 08 */	lwz r3, 8(r3)
/* 8013B21C 0013815C  81 83 00 00 */	lwz r12, 0(r3)
/* 8013B220 00138160  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8013B224 00138164  7D 89 03 A6 */	mtctr r12
/* 8013B228 00138168  4E 80 04 21 */	bctrl 
/* 8013B22C 0013816C  80 7D 01 14 */	lwz r3, 0x114(r29)
/* 8013B230 00138170  28 03 00 00 */	cmplwi r3, 0
/* 8013B234 00138174  41 82 00 08 */	beq .L_8013B23C
/* 8013B238 00138178  4B FF A8 65 */	bl update__8CollTreeFv
.L_8013B23C:
/* 8013B23C 0013817C  7F A3 EB 78 */	mr r3, r29
/* 8013B240 00138180  7F C4 F3 78 */	mr r4, r30
/* 8013B244 00138184  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013B248 00138188  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8013B24C 0013818C  7D 89 03 A6 */	mtctr r12
/* 8013B250 00138190  4E 80 04 21 */	bctrl 
.L_8013B254:
/* 8013B254 00138194  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013B258 00138198  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013B25C 0013819C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013B260 001381A0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013B264 001381A4  7C 08 03 A6 */	mtlr r0
/* 8013B268 001381A8  38 21 00 20 */	addi r1, r1, 0x20
/* 8013B26C 001381AC  4E 80 00 20 */	blr 

.global "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
"onSetPositionPost__Q24Game8CreatureFR10Vector3<f>":
/* 8013B270 001381B0  4E 80 00 20 */	blr 

.global "initPosition__Q24Game8CreatureFR10Vector3<f>"
"initPosition__Q24Game8CreatureFR10Vector3<f>":
/* 8013B274 001381B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013B278 001381B8  7C 08 02 A6 */	mflr r0
/* 8013B27C 001381BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013B280 001381C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013B284 001381C4  7C 9F 23 78 */	mr r31, r4
/* 8013B288 001381C8  93 C1 00 08 */	stw r30, 8(r1)
/* 8013B28C 001381CC  7C 7E 1B 78 */	mr r30, r3
/* 8013B290 001381D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8013B294 001381D4  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8013B298 001381D8  7D 89 03 A6 */	mtctr r12
/* 8013B29C 001381DC  4E 80 04 21 */	bctrl 
/* 8013B2A0 001381E0  7F C3 F3 78 */	mr r3, r30
/* 8013B2A4 001381E4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B2A8 001381E8  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 8013B2AC 001381EC  7D 89 03 A6 */	mtctr r12
/* 8013B2B0 001381F0  4E 80 04 21 */	bctrl 
/* 8013B2B4 001381F4  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8013B2B8 001381F8  28 03 00 00 */	cmplwi r3, 0
/* 8013B2BC 001381FC  41 82 00 3C */	beq .L_8013B2F8
/* 8013B2C0 00138200  80 83 00 08 */	lwz r4, 8(r3)
/* 8013B2C4 00138204  38 7E 01 38 */	addi r3, r30, 0x138
/* 8013B2C8 00138208  38 84 00 24 */	addi r4, r4, 0x24
/* 8013B2CC 0013820C  4B FA F0 01 */	bl PSMTXCopy
/* 8013B2D0 00138210  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8013B2D4 00138214  80 63 00 08 */	lwz r3, 8(r3)
/* 8013B2D8 00138218  81 83 00 00 */	lwz r12, 0(r3)
/* 8013B2DC 0013821C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8013B2E0 00138220  7D 89 03 A6 */	mtctr r12
/* 8013B2E4 00138224  4E 80 04 21 */	bctrl 
/* 8013B2E8 00138228  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8013B2EC 0013822C  28 03 00 00 */	cmplwi r3, 0
/* 8013B2F0 00138230  41 82 00 08 */	beq .L_8013B2F8
/* 8013B2F4 00138234  4B FF A7 A9 */	bl update__8CollTreeFv
.L_8013B2F8:
/* 8013B2F8 00138238  7F C3 F3 78 */	mr r3, r30
/* 8013B2FC 0013823C  7F E4 FB 78 */	mr r4, r31
/* 8013B300 00138240  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B304 00138244  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8013B308 00138248  7D 89 03 A6 */	mtctr r12
/* 8013B30C 0013824C  4E 80 04 21 */	bctrl 
/* 8013B310 00138250  7F C3 F3 78 */	mr r3, r30
/* 8013B314 00138254  7F E4 FB 78 */	mr r4, r31
/* 8013B318 00138258  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B31C 0013825C  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8013B320 00138260  7D 89 03 A6 */	mtctr r12
/* 8013B324 00138264  4E 80 04 21 */	bctrl 
/* 8013B328 00138268  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013B32C 0013826C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013B330 00138270  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013B334 00138274  7C 08 03 A6 */	mtlr r0
/* 8013B338 00138278  38 21 00 10 */	addi r1, r1, 0x10
/* 8013B33C 0013827C  4E 80 00 20 */	blr 

.global "getYVector__Q24Game8CreatureFR10Vector3<f>"
"getYVector__Q24Game8CreatureFR10Vector3<f>":
/* 8013B340 00138280  C0 03 01 3C */	lfs f0, 0x13c(r3)
/* 8013B344 00138284  C0 22 9F 28 */	lfs f1, lbl_80518288@sda21(r2)
/* 8013B348 00138288  D0 04 00 00 */	stfs f0, 0(r4)
/* 8013B34C 0013828C  C0 03 01 4C */	lfs f0, 0x14c(r3)
/* 8013B350 00138290  D0 04 00 04 */	stfs f0, 4(r4)
/* 8013B354 00138294  C0 03 01 5C */	lfs f0, 0x15c(r3)
/* 8013B358 00138298  D0 04 00 08 */	stfs f0, 8(r4)
/* 8013B35C 0013829C  C0 64 00 00 */	lfs f3, 0(r4)
/* 8013B360 001382A0  C0 44 00 04 */	lfs f2, 4(r4)
/* 8013B364 001382A4  EC 03 00 F2 */	fmuls f0, f3, f3
/* 8013B368 001382A8  C0 84 00 08 */	lfs f4, 8(r4)
/* 8013B36C 001382AC  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8013B370 001382B0  EC 84 01 32 */	fmuls f4, f4, f4
/* 8013B374 001382B4  EC 00 10 2A */	fadds f0, f0, f2
/* 8013B378 001382B8  EC 04 00 2A */	fadds f0, f4, f0
/* 8013B37C 001382BC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8013B380 001382C0  40 81 00 20 */	ble .L_8013B3A0
/* 8013B384 001382C4  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 8013B388 001382C8  EC 44 00 2A */	fadds f2, f4, f0
/* 8013B38C 001382CC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8013B390 001382D0  40 81 00 14 */	ble .L_8013B3A4
/* 8013B394 001382D4  FC 00 10 34 */	frsqrte f0, f2
/* 8013B398 001382D8  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8013B39C 001382DC  48 00 00 08 */	b .L_8013B3A4
.L_8013B3A0:
/* 8013B3A0 001382E0  FC 40 08 90 */	fmr f2, f1
.L_8013B3A4:
/* 8013B3A4 001382E4  C0 02 9F 28 */	lfs f0, lbl_80518288@sda21(r2)
/* 8013B3A8 001382E8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013B3AC 001382EC  4C 81 00 20 */	blelr 
/* 8013B3B0 001382F0  C0 22 9F 24 */	lfs f1, lbl_80518284@sda21(r2)
/* 8013B3B4 001382F4  C0 04 00 00 */	lfs f0, 0(r4)
/* 8013B3B8 001382F8  EC 21 10 24 */	fdivs f1, f1, f2
/* 8013B3BC 001382FC  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013B3C0 00138300  D0 04 00 00 */	stfs f0, 0(r4)
/* 8013B3C4 00138304  C0 04 00 04 */	lfs f0, 4(r4)
/* 8013B3C8 00138308  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013B3CC 0013830C  D0 04 00 04 */	stfs f0, 4(r4)
/* 8013B3D0 00138310  C0 04 00 08 */	lfs f0, 8(r4)
/* 8013B3D4 00138314  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013B3D8 00138318  D0 04 00 08 */	stfs f0, 8(r4)
/* 8013B3DC 0013831C  4E 80 00 20 */	blr 

.global getBodyRadius__Q24Game8CreatureFv
getBodyRadius__Q24Game8CreatureFv:
/* 8013B3E0 00138320  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013B3E4 00138324  7C 08 02 A6 */	mflr r0
/* 8013B3E8 00138328  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013B3EC 0013832C  38 81 00 08 */	addi r4, r1, 8
/* 8013B3F0 00138330  81 83 00 00 */	lwz r12, 0(r3)
/* 8013B3F4 00138334  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8013B3F8 00138338  7D 89 03 A6 */	mtctr r12
/* 8013B3FC 0013833C  4E 80 04 21 */	bctrl 
/* 8013B400 00138340  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013B404 00138344  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8013B408 00138348  7C 08 03 A6 */	mtlr r0
/* 8013B40C 0013834C  38 21 00 20 */	addi r1, r1, 0x20
/* 8013B410 00138350  4E 80 00 20 */	blr 

.global getCellRadius__Q24Game8CreatureFv
getCellRadius__Q24Game8CreatureFv:
/* 8013B414 00138354  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013B418 00138358  7C 08 02 A6 */	mflr r0
/* 8013B41C 0013835C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013B420 00138360  38 81 00 08 */	addi r4, r1, 8
/* 8013B424 00138364  81 83 00 00 */	lwz r12, 0(r3)
/* 8013B428 00138368  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8013B42C 0013836C  7D 89 03 A6 */	mtctr r12
/* 8013B430 00138370  4E 80 04 21 */	bctrl 
/* 8013B434 00138374  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013B438 00138378  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8013B43C 0013837C  7C 08 03 A6 */	mtlr r0
/* 8013B440 00138380  38 21 00 20 */	addi r1, r1, 0x20
/* 8013B444 00138384  4E 80 00 20 */	blr 

.global getTypeName__Q24Game8CreatureFv
getTypeName__Q24Game8CreatureFv:
/* 8013B448 00138388  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013B44C 0013838C  7C 08 02 A6 */	mflr r0
/* 8013B450 00138390  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013B454 00138394  A0 63 01 28 */	lhz r3, 0x128(r3)
/* 8013B458 00138398  48 04 1F A1 */	bl getName__Q24Game7ObjTypeFUs
/* 8013B45C 0013839C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013B460 001383A0  7C 08 03 A6 */	mtlr r0
/* 8013B464 001383A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8013B468 001383A8  4E 80 00 20 */	blr 

.global getShadowParam__Q24Game8CreatureFRQ24Game11ShadowParam
getShadowParam__Q24Game8CreatureFRQ24Game11ShadowParam:
/* 8013B46C 001383AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013B470 001383B0  7C 08 02 A6 */	mflr r0
/* 8013B474 001383B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013B478 001383B8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013B47C 001383BC  7C 9F 23 78 */	mr r31, r4
/* 8013B480 001383C0  7C 64 1B 78 */	mr r4, r3
/* 8013B484 001383C4  38 61 00 08 */	addi r3, r1, 8
/* 8013B488 001383C8  81 84 00 00 */	lwz r12, 0(r4)
/* 8013B48C 001383CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013B490 001383D0  7D 89 03 A6 */	mtctr r12
/* 8013B494 001383D4  4E 80 04 21 */	bctrl 
/* 8013B498 001383D8  C0 01 00 08 */	lfs f0, 8(r1)
/* 8013B49C 001383DC  C0 82 9F 2C */	lfs f4, lbl_8051828C@sda21(r2)
/* 8013B4A0 001383E0  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8013B4A4 001383E4  C0 62 9F 30 */	lfs f3, lbl_80518290@sda21(r2)
/* 8013B4A8 001383E8  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8013B4AC 001383EC  C0 42 9F 34 */	lfs f2, lbl_80518294@sda21(r2)
/* 8013B4B0 001383F0  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8013B4B4 001383F4  C0 22 9F 28 */	lfs f1, lbl_80518288@sda21(r2)
/* 8013B4B8 001383F8  C0 A1 00 10 */	lfs f5, 0x10(r1)
/* 8013B4BC 001383FC  C0 02 9F 24 */	lfs f0, lbl_80518284@sda21(r2)
/* 8013B4C0 00138400  D0 BF 00 08 */	stfs f5, 8(r31)
/* 8013B4C4 00138404  C0 BF 00 04 */	lfs f5, 4(r31)
/* 8013B4C8 00138408  EC 85 20 2A */	fadds f4, f5, f4
/* 8013B4CC 0013840C  D0 9F 00 04 */	stfs f4, 4(r31)
/* 8013B4D0 00138410  D0 7F 00 18 */	stfs f3, 0x18(r31)
/* 8013B4D4 00138414  D0 5F 00 1C */	stfs f2, 0x1c(r31)
/* 8013B4D8 00138418  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 8013B4DC 0013841C  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8013B4E0 00138420  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 8013B4E4 00138424  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013B4E8 00138428  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013B4EC 0013842C  7C 08 03 A6 */	mtlr r0
/* 8013B4F0 00138430  38 21 00 20 */	addi r1, r1, 0x20
/* 8013B4F4 00138434  4E 80 00 20 */	blr 

.global needShadow__Q24Game8CreatureFv
needShadow__Q24Game8CreatureFv:
/* 8013B4F8 00138438  88 03 00 D8 */	lbz r0, 0xd8(r3)
/* 8013B4FC 0013843C  54 03 F7 FE */	rlwinm r3, r0, 0x1e, 0x1f, 0x1f
/* 8013B500 00138440  4E 80 00 20 */	blr 

.global getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam:
/* 8013B504 00138444  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013B508 00138448  7C 08 02 A6 */	mflr r0
/* 8013B50C 0013844C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013B510 00138450  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013B514 00138454  7C 9F 23 78 */	mr r31, r4
/* 8013B518 00138458  7C 64 1B 78 */	mr r4, r3
/* 8013B51C 0013845C  38 61 00 08 */	addi r3, r1, 8
/* 8013B520 00138460  81 84 00 00 */	lwz r12, 0(r4)
/* 8013B524 00138464  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013B528 00138468  7D 89 03 A6 */	mtctr r12
/* 8013B52C 0013846C  4E 80 04 21 */	bctrl 
/* 8013B530 00138470  C0 01 00 08 */	lfs f0, 8(r1)
/* 8013B534 00138474  38 00 00 01 */	li r0, 1
/* 8013B538 00138478  C0 22 9F 24 */	lfs f1, lbl_80518284@sda21(r2)
/* 8013B53C 0013847C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8013B540 00138480  C0 02 9F 30 */	lfs f0, lbl_80518290@sda21(r2)
/* 8013B544 00138484  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8013B548 00138488  D0 5F 00 04 */	stfs f2, 4(r31)
/* 8013B54C 0013848C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8013B550 00138490  D0 5F 00 08 */	stfs f2, 8(r31)
/* 8013B554 00138494  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 8013B558 00138498  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8013B55C 0013849C  98 1F 00 14 */	stb r0, 0x14(r31)
/* 8013B560 001384A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013B564 001384A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013B568 001384A8  7C 08 03 A6 */	mtlr r0
/* 8013B56C 001384AC  38 21 00 20 */	addi r1, r1, 0x20
/* 8013B570 001384B0  4E 80 00 20 */	blr 

.global save__Q24Game8CreatureFR6StreamUc
save__Q24Game8CreatureFR6StreamUc:
/* 8013B574 001384B4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8013B578 001384B8  7C 08 02 A6 */	mflr r0
/* 8013B57C 001384BC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8013B580 001384C0  54 A0 07 FF */	clrlwi. r0, r5, 0x1f
/* 8013B584 001384C4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8013B588 001384C8  7C 9F 23 78 */	mr r31, r4
/* 8013B58C 001384CC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8013B590 001384D0  7C 7E 1B 78 */	mr r30, r3
/* 8013B594 001384D4  41 82 00 40 */	beq .L_8013B5D4
/* 8013B598 001384D8  7F C4 F3 78 */	mr r4, r30
/* 8013B59C 001384DC  38 61 00 08 */	addi r3, r1, 8
/* 8013B5A0 001384E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B5A4 001384E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013B5A8 001384E8  7D 89 03 A6 */	mtctr r12
/* 8013B5AC 001384EC  4E 80 04 21 */	bctrl 
/* 8013B5B0 001384F0  C0 41 00 08 */	lfs f2, 8(r1)
/* 8013B5B4 001384F4  7F E4 FB 78 */	mr r4, r31
/* 8013B5B8 001384F8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8013B5BC 001384FC  38 61 00 14 */	addi r3, r1, 0x14
/* 8013B5C0 00138500  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8013B5C4 00138504  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8013B5C8 00138508  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8013B5CC 0013850C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8013B5D0 00138510  48 2D 64 19 */	bl "write__10Vector3<f>FR6Stream"
.L_8013B5D4:
/* 8013B5D4 00138514  7F C3 F3 78 */	mr r3, r30
/* 8013B5D8 00138518  7F E4 FB 78 */	mr r4, r31
/* 8013B5DC 0013851C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B5E0 00138520  81 8C 00 E0 */	lwz r12, 0xe0(r12)
/* 8013B5E4 00138524  7D 89 03 A6 */	mtctr r12
/* 8013B5E8 00138528  4E 80 04 21 */	bctrl 
/* 8013B5EC 0013852C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8013B5F0 00138530  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8013B5F4 00138534  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8013B5F8 00138538  7C 08 03 A6 */	mtlr r0
/* 8013B5FC 0013853C  38 21 00 30 */	addi r1, r1, 0x30
/* 8013B600 00138540  4E 80 00 20 */	blr 

.global load__Q24Game8CreatureFR6StreamUc
load__Q24Game8CreatureFR6StreamUc:
/* 8013B604 00138544  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013B608 00138548  7C 08 02 A6 */	mflr r0
/* 8013B60C 0013854C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013B610 00138550  54 A0 07 FF */	clrlwi. r0, r5, 0x1f
/* 8013B614 00138554  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013B618 00138558  7C 9F 23 78 */	mr r31, r4
/* 8013B61C 0013855C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013B620 00138560  7C 7E 1B 78 */	mr r30, r3
/* 8013B624 00138564  41 82 00 94 */	beq .L_8013B6B8
/* 8013B628 00138568  38 61 00 08 */	addi r3, r1, 8
/* 8013B62C 0013856C  48 2D 63 65 */	bl "read__10Vector3<f>FR6Stream"
/* 8013B630 00138570  7F C3 F3 78 */	mr r3, r30
/* 8013B634 00138574  38 81 00 08 */	addi r4, r1, 8
/* 8013B638 00138578  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B63C 0013857C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8013B640 00138580  7D 89 03 A6 */	mtctr r12
/* 8013B644 00138584  4E 80 04 21 */	bctrl 
/* 8013B648 00138588  7F C3 F3 78 */	mr r3, r30
/* 8013B64C 0013858C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B650 00138590  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 8013B654 00138594  7D 89 03 A6 */	mtctr r12
/* 8013B658 00138598  4E 80 04 21 */	bctrl 
/* 8013B65C 0013859C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8013B660 001385A0  28 03 00 00 */	cmplwi r3, 0
/* 8013B664 001385A4  41 82 00 3C */	beq .L_8013B6A0
/* 8013B668 001385A8  80 83 00 08 */	lwz r4, 8(r3)
/* 8013B66C 001385AC  38 7E 01 38 */	addi r3, r30, 0x138
/* 8013B670 001385B0  38 84 00 24 */	addi r4, r4, 0x24
/* 8013B674 001385B4  4B FA EC 59 */	bl PSMTXCopy
/* 8013B678 001385B8  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8013B67C 001385BC  80 63 00 08 */	lwz r3, 8(r3)
/* 8013B680 001385C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8013B684 001385C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8013B688 001385C8  7D 89 03 A6 */	mtctr r12
/* 8013B68C 001385CC  4E 80 04 21 */	bctrl 
/* 8013B690 001385D0  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8013B694 001385D4  28 03 00 00 */	cmplwi r3, 0
/* 8013B698 001385D8  41 82 00 08 */	beq .L_8013B6A0
/* 8013B69C 001385DC  4B FF A4 01 */	bl update__8CollTreeFv
.L_8013B6A0:
/* 8013B6A0 001385E0  7F C3 F3 78 */	mr r3, r30
/* 8013B6A4 001385E4  38 81 00 08 */	addi r4, r1, 8
/* 8013B6A8 001385E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B6AC 001385EC  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8013B6B0 001385F0  7D 89 03 A6 */	mtctr r12
/* 8013B6B4 001385F4  4E 80 04 21 */	bctrl 
.L_8013B6B8:
/* 8013B6B8 001385F8  7F C3 F3 78 */	mr r3, r30
/* 8013B6BC 001385FC  7F E4 FB 78 */	mr r4, r31
/* 8013B6C0 00138600  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013B6C4 00138604  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 8013B6C8 00138608  7D 89 03 A6 */	mtctr r12
/* 8013B6CC 0013860C  4E 80 04 21 */	bctrl 
/* 8013B6D0 00138610  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013B6D4 00138614  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013B6D8 00138618  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013B6DC 0013861C  7C 08 03 A6 */	mtlr r0
/* 8013B6E0 00138620  38 21 00 20 */	addi r1, r1, 0x20
/* 8013B6E4 00138624  4E 80 00 20 */	blr 

.global calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature:
/* 8013B6E8 00138628  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8013B6EC 0013862C  7C 08 02 A6 */	mflr r0
/* 8013B6F0 00138630  90 01 00 34 */	stw r0, 0x34(r1)
/* 8013B6F4 00138634  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8013B6F8 00138638  7C 7F 1B 78 */	mr r31, r3
/* 8013B6FC 0013863C  7C 83 23 78 */	mr r3, r4
/* 8013B700 00138640  38 81 00 18 */	addi r4, r1, 0x18
/* 8013B704 00138644  81 83 00 00 */	lwz r12, 0(r3)
/* 8013B708 00138648  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8013B70C 0013864C  7D 89 03 A6 */	mtctr r12
/* 8013B710 00138650  4E 80 04 21 */	bctrl 
/* 8013B714 00138654  7F E3 FB 78 */	mr r3, r31
/* 8013B718 00138658  38 81 00 08 */	addi r4, r1, 8
/* 8013B71C 0013865C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013B720 00138660  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8013B724 00138664  7D 89 03 A6 */	mtctr r12
/* 8013B728 00138668  4E 80 04 21 */	bctrl 
/* 8013B72C 0013866C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8013B730 00138670  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8013B734 00138674  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8013B738 00138678  EC 81 00 28 */	fsubs f4, f1, f0
/* 8013B73C 0013867C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8013B740 00138680  C0 21 00 08 */	lfs f1, 8(r1)
/* 8013B744 00138684  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8013B748 00138688  EC 43 10 28 */	fsubs f2, f3, f2
/* 8013B74C 0013868C  EC 64 01 32 */	fmuls f3, f4, f4
/* 8013B750 00138690  EC 21 00 28 */	fsubs f1, f1, f0
/* 8013B754 00138694  C0 02 9F 28 */	lfs f0, lbl_80518288@sda21(r2)
/* 8013B758 00138698  EC 42 00 B2 */	fmuls f2, f2, f2
/* 8013B75C 0013869C  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 8013B760 001386A0  EC 42 08 2A */	fadds f2, f2, f1
/* 8013B764 001386A4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013B768 001386A8  40 81 00 14 */	ble .L_8013B77C
/* 8013B76C 001386AC  40 81 00 14 */	ble .L_8013B780
/* 8013B770 001386B0  FC 00 10 34 */	frsqrte f0, f2
/* 8013B774 001386B4  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8013B778 001386B8  48 00 00 08 */	b .L_8013B780
.L_8013B77C:
/* 8013B77C 001386BC  FC 40 00 90 */	fmr f2, f0
.L_8013B780:
/* 8013B780 001386C0  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8013B784 001386C4  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8013B788 001386C8  EC 01 00 2A */	fadds f0, f1, f0
/* 8013B78C 001386CC  EC 22 00 28 */	fsubs f1, f2, f0
/* 8013B790 001386D0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8013B794 001386D4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8013B798 001386D8  7C 08 03 A6 */	mtlr r0
/* 8013B79C 001386DC  38 21 00 30 */	addi r1, r1, 0x30
/* 8013B7A0 001386E0  4E 80 00 20 */	blr 

.global applyAirDrag__Q24Game8CreatureFfff
applyAirDrag__Q24Game8CreatureFfff:
/* 8013B7A4 001386E4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8013B7A8 001386E8  7C 08 02 A6 */	mflr r0
/* 8013B7AC 001386EC  90 01 00 64 */	stw r0, 0x64(r1)
/* 8013B7B0 001386F0  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8013B7B4 001386F4  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8013B7B8 001386F8  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8013B7BC 001386FC  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8013B7C0 00138700  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 8013B7C4 00138704  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 8013B7C8 00138708  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8013B7CC 0013870C  7C 7F 1B 78 */	mr r31, r3
/* 8013B7D0 00138710  FF A0 08 90 */	fmr f29, f1
/* 8013B7D4 00138714  7F E4 FB 78 */	mr r4, r31
/* 8013B7D8 00138718  FF C0 10 90 */	fmr f30, f2
/* 8013B7DC 0013871C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013B7E0 00138720  FF E0 18 90 */	fmr f31, f3
/* 8013B7E4 00138724  38 61 00 08 */	addi r3, r1, 8
/* 8013B7E8 00138728  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8013B7EC 0013872C  7D 89 03 A6 */	mtctr r12
/* 8013B7F0 00138730  4E 80 04 21 */	bctrl 
/* 8013B7F4 00138734  C0 81 00 0C */	lfs f4, 0xc(r1)
/* 8013B7F8 00138738  EC BD 07 B2 */	fmuls f5, f29, f30
/* 8013B7FC 0013873C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8013B800 00138740  7F E3 FB 78 */	mr r3, r31
/* 8013B804 00138744  EC 5D 01 32 */	fmuls f2, f29, f4
/* 8013B808 00138748  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8013B80C 0013874C  EC 20 01 7C */	fnmsubs f1, f0, f5, f0
/* 8013B810 00138750  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8013B814 00138754  EC 03 19 7C */	fnmsubs f0, f3, f5, f3
/* 8013B818 00138758  EC 5F 20 BC */	fnmsubs f2, f31, f2, f4
/* 8013B81C 0013875C  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8013B820 00138760  38 81 00 14 */	addi r4, r1, 0x14
/* 8013B824 00138764  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8013B828 00138768  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8013B82C 0013876C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8013B830 00138770  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8013B834 00138774  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013B838 00138778  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8013B83C 0013877C  7D 89 03 A6 */	mtctr r12
/* 8013B840 00138780  4E 80 04 21 */	bctrl 
/* 8013B844 00138784  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8013B848 00138788  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8013B84C 0013878C  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8013B850 00138790  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8013B854 00138794  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 8013B858 00138798  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 8013B85C 0013879C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8013B860 001387A0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8013B864 001387A4  7C 08 03 A6 */	mtlr r0
/* 8013B868 001387A8  38 21 00 60 */	addi r1, r1, 0x60
/* 8013B86C 001387AC  4E 80 00 20 */	blr 

.global doAnimation__Q24Game8CreatureFv
doAnimation__Q24Game8CreatureFv:
/* 8013B870 001387B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013B874 001387B4  7C 08 02 A6 */	mflr r0
/* 8013B878 001387B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013B87C 001387BC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8013B880 001387C0  28 03 00 00 */	cmplwi r3, 0
/* 8013B884 001387C4  41 82 00 18 */	beq .L_8013B89C
/* 8013B888 001387C8  80 63 00 08 */	lwz r3, 8(r3)
/* 8013B88C 001387CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8013B890 001387D0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8013B894 001387D4  7D 89 03 A6 */	mtctr r12
/* 8013B898 001387D8  4E 80 04 21 */	bctrl 
.L_8013B89C:
/* 8013B89C 001387DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013B8A0 001387E0  7C 08 03 A6 */	mtlr r0
/* 8013B8A4 001387E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8013B8A8 001387E8  4E 80 00 20 */	blr 

.global doEntry__Q24Game8CreatureFv
doEntry__Q24Game8CreatureFv:
/* 8013B8AC 001387EC  4E 80 00 20 */	blr 

.global doSetView__Q24Game8CreatureFi
doSetView__Q24Game8CreatureFi:
/* 8013B8B0 001387F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013B8B4 001387F4  7C 08 02 A6 */	mflr r0
/* 8013B8B8 001387F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013B8BC 001387FC  38 00 00 00 */	li r0, 0
/* 8013B8C0 00138800  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013B8C4 00138804  7C 7F 1B 78 */	mr r31, r3
/* 8013B8C8 00138808  93 C1 00 08 */	stw r30, 8(r1)
/* 8013B8CC 0013880C  7C 9E 23 79 */	or. r30, r4, r4
/* 8013B8D0 00138810  41 80 00 10 */	blt .L_8013B8E0
/* 8013B8D4 00138814  2C 1E 00 02 */	cmpwi r30, 2
/* 8013B8D8 00138818  40 80 00 08 */	bge .L_8013B8E0
/* 8013B8DC 0013881C  38 00 00 01 */	li r0, 1
.L_8013B8E0:
/* 8013B8E0 00138820  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8013B8E4 00138824  40 82 00 20 */	bne .L_8013B904
/* 8013B8E8 00138828  3C 60 80 48 */	lis r3, lbl_8047C6E8@ha
/* 8013B8EC 0013882C  3C A0 80 48 */	lis r5, lbl_8047C6F8@ha
/* 8013B8F0 00138830  38 63 C6 E8 */	addi r3, r3, lbl_8047C6E8@l
/* 8013B8F4 00138834  38 80 02 2E */	li r4, 0x22e
/* 8013B8F8 00138838  38 A5 C6 F8 */	addi r5, r5, lbl_8047C6F8@l
/* 8013B8FC 0013883C  4C C6 31 82 */	crclr 6
/* 8013B900 00138840  4B EE ED 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8013B904:
/* 8013B904 00138844  80 1F 01 74 */	lwz r0, 0x174(r31)
/* 8013B908 00138848  28 00 00 00 */	cmplwi r0, 0
/* 8013B90C 0013884C  41 82 00 94 */	beq .L_8013B9A0
/* 8013B910 00138850  40 82 00 20 */	bne .L_8013B930
/* 8013B914 00138854  3C 60 80 48 */	lis r3, lbl_8047C6E8@ha
/* 8013B918 00138858  3C A0 80 48 */	lis r5, lbl_8047C6F8@ha
/* 8013B91C 0013885C  38 63 C6 E8 */	addi r3, r3, lbl_8047C6E8@l
/* 8013B920 00138860  38 80 02 33 */	li r4, 0x233
/* 8013B924 00138864  38 A5 C6 F8 */	addi r5, r5, lbl_8047C6F8@l
/* 8013B928 00138868  4C C6 31 82 */	crclr 6
/* 8013B92C 0013886C  4B EE ED 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8013B930:
/* 8013B930 00138870  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8013B934 00138874  57 C4 04 3E */	clrlwi r4, r30, 0x10
/* 8013B938 00138878  48 30 37 89 */	bl setCurrentViewNo__Q28SysShape5ModelFUl
/* 8013B93C 0013887C  88 0D 84 00 */	lbz r0, usePacketCulling__Q24Game8Creature@sda21(r13)
/* 8013B940 00138880  28 00 00 00 */	cmplwi r0, 0
/* 8013B944 00138884  41 82 00 48 */	beq .L_8013B98C
/* 8013B948 00138888  38 00 00 10 */	li r0, 0x10
/* 8013B94C 0013888C  88 7F 00 D8 */	lbz r3, 0xd8(r31)
/* 8013B950 00138890  7C 00 F0 30 */	slw r0, r0, r30
/* 8013B954 00138894  7C 60 00 39 */	and. r0, r3, r0
/* 8013B958 00138898  41 82 00 1C */	beq .L_8013B974
/* 8013B95C 0013889C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8013B960 001388A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8013B964 001388A4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8013B968 001388A8  7D 89 03 A6 */	mtctr r12
/* 8013B96C 001388AC  4E 80 04 21 */	bctrl 
/* 8013B970 001388B0  48 00 00 30 */	b .L_8013B9A0
.L_8013B974:
/* 8013B974 001388B4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8013B978 001388B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8013B97C 001388BC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8013B980 001388C0  7D 89 03 A6 */	mtctr r12
/* 8013B984 001388C4  4E 80 04 21 */	bctrl 
/* 8013B988 001388C8  48 00 00 18 */	b .L_8013B9A0
.L_8013B98C:
/* 8013B98C 001388CC  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8013B990 001388D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8013B994 001388D4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8013B998 001388D8  7D 89 03 A6 */	mtctr r12
/* 8013B99C 001388DC  4E 80 04 21 */	bctrl 
.L_8013B9A0:
/* 8013B9A0 001388E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013B9A4 001388E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013B9A8 001388E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013B9AC 001388EC  7C 08 03 A6 */	mtlr r0
/* 8013B9B0 001388F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8013B9B4 001388F4  4E 80 00 20 */	blr 

.global doViewCalc__Q24Game8CreatureFv
doViewCalc__Q24Game8CreatureFv:
/* 8013B9B8 001388F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013B9BC 001388FC  7C 08 02 A6 */	mflr r0
/* 8013B9C0 00138900  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013B9C4 00138904  80 63 01 74 */	lwz r3, 0x174(r3)
/* 8013B9C8 00138908  28 03 00 00 */	cmplwi r3, 0
/* 8013B9CC 0013890C  41 82 00 08 */	beq .L_8013B9D4
/* 8013B9D0 00138910  48 30 36 89 */	bl viewCalc__Q28SysShape5ModelFv
.L_8013B9D4:
/* 8013B9D4 00138914  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013B9D8 00138918  7C 08 03 A6 */	mtlr r0
/* 8013B9DC 0013891C  38 21 00 10 */	addi r1, r1, 0x10
/* 8013B9E0 00138920  4E 80 00 20 */	blr 

.global isPiki__Q24Game8CreatureFv
isPiki__Q24Game8CreatureFv:
/* 8013B9E4 00138924  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 8013B9E8 00138928  7C 00 00 34 */	cntlzw r0, r0
/* 8013B9EC 0013892C  54 03 D9 7E */	srwi r3, r0, 5
/* 8013B9F0 00138930  4E 80 00 20 */	blr 

.global isNavi__Q24Game8CreatureFv
isNavi__Q24Game8CreatureFv:
/* 8013B9F4 00138934  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 8013B9F8 00138938  20 00 00 01 */	subfic r0, r0, 1
/* 8013B9FC 0013893C  7C 00 00 34 */	cntlzw r0, r0
/* 8013BA00 00138940  54 03 D9 7E */	srwi r3, r0, 5
/* 8013BA04 00138944  4E 80 00 20 */	blr 

.global isTeki__Q24Game8CreatureFv
isTeki__Q24Game8CreatureFv:
/* 8013BA08 00138948  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 8013BA0C 0013894C  20 00 00 02 */	subfic r0, r0, 2
/* 8013BA10 00138950  7C 00 00 34 */	cntlzw r0, r0
/* 8013BA14 00138954  54 03 D9 7E */	srwi r3, r0, 5
/* 8013BA18 00138958  4E 80 00 20 */	blr 

.global isPellet__Q24Game8CreatureFv
isPellet__Q24Game8CreatureFv:
/* 8013BA1C 0013895C  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 8013BA20 00138960  20 00 04 01 */	subfic r0, r0, 0x401
/* 8013BA24 00138964  7C 00 00 34 */	cntlzw r0, r0
/* 8013BA28 00138968  54 03 D9 7E */	srwi r3, r0, 5
/* 8013BA2C 0013896C  4E 80 00 20 */	blr 

.global sound_culling__Q24Game8CreatureFv
sound_culling__Q24Game8CreatureFv:
/* 8013BA30 00138970  88 83 00 D8 */	lbz r4, 0xd8(r3)
/* 8013BA34 00138974  38 60 00 00 */	li r3, 0
/* 8013BA38 00138978  54 80 07 39 */	rlwinm. r0, r4, 0, 0x1c, 0x1c
/* 8013BA3C 0013897C  4C 82 00 20 */	bnelr 
/* 8013BA40 00138980  54 80 07 7B */	rlwinm. r0, r4, 0, 0x1d, 0x1d
/* 8013BA44 00138984  4C 82 00 20 */	bnelr 
/* 8013BA48 00138988  38 60 00 01 */	li r3, 1
/* 8013BA4C 0013898C  4E 80 00 20 */	blr 

.global movie_begin__Q24Game8CreatureFb
movie_begin__Q24Game8CreatureFb:
/* 8013BA50 00138990  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013BA54 00138994  7C 08 02 A6 */	mflr r0
/* 8013BA58 00138998  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013BA5C 0013899C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013BA60 001389A0  7C 9F 23 78 */	mr r31, r4
/* 8013BA64 001389A4  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8013BA68 001389A8  93 C1 00 08 */	stw r30, 8(r1)
/* 8013BA6C 001389AC  7C 7E 1B 78 */	mr r30, r3
/* 8013BA70 001389B0  80 83 00 BC */	lwz r4, 0xbc(r3)
/* 8013BA74 001389B4  60 80 00 10 */	ori r0, r4, 0x10
/* 8013BA78 001389B8  90 03 00 BC */	stw r0, 0xbc(r3)
/* 8013BA7C 001389BC  40 82 00 24 */	bne .L_8013BAA0
/* 8013BA80 001389C0  80 1E 00 BC */	lwz r0, 0xbc(r30)
/* 8013BA84 001389C4  60 00 00 40 */	ori r0, r0, 0x40
/* 8013BA88 001389C8  90 1E 00 BC */	stw r0, 0xbc(r30)
/* 8013BA8C 001389CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8013BA90 001389D0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8013BA94 001389D4  7D 89 03 A6 */	mtctr r12
/* 8013BA98 001389D8  4E 80 04 21 */	bctrl 
/* 8013BA9C 001389DC  48 00 00 20 */	b .L_8013BABC
.L_8013BAA0:
/* 8013BAA0 001389E0  80 1E 00 BC */	lwz r0, 0xbc(r30)
/* 8013BAA4 001389E4  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8013BAA8 001389E8  90 1E 00 BC */	stw r0, 0xbc(r30)
/* 8013BAAC 001389EC  81 83 00 00 */	lwz r12, 0(r3)
/* 8013BAB0 001389F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8013BAB4 001389F4  7D 89 03 A6 */	mtctr r12
/* 8013BAB8 001389F8  4E 80 04 21 */	bctrl 
.L_8013BABC:
/* 8013BABC 001389FC  7F C3 F3 78 */	mr r3, r30
/* 8013BAC0 00138A00  7F E4 FB 78 */	mr r4, r31
/* 8013BAC4 00138A04  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013BAC8 00138A08  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 8013BACC 00138A0C  7D 89 03 A6 */	mtctr r12
/* 8013BAD0 00138A10  4E 80 04 21 */	bctrl 
/* 8013BAD4 00138A14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013BAD8 00138A18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013BADC 00138A1C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8013BAE0 00138A20  7C 08 03 A6 */	mtlr r0
/* 8013BAE4 00138A24  38 21 00 10 */	addi r1, r1, 0x10
/* 8013BAE8 00138A28  4E 80 00 20 */	blr 

.global movie_end__Q24Game8CreatureFb
movie_end__Q24Game8CreatureFb:
/* 8013BAEC 00138A2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013BAF0 00138A30  7C 08 02 A6 */	mflr r0
/* 8013BAF4 00138A34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013BAF8 00138A38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013BAFC 00138A3C  7C 7F 1B 78 */	mr r31, r3
/* 8013BB00 00138A40  81 83 00 00 */	lwz r12, 0(r3)
/* 8013BB04 00138A44  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 8013BB08 00138A48  7D 89 03 A6 */	mtctr r12
/* 8013BB0C 00138A4C  4E 80 04 21 */	bctrl 
/* 8013BB10 00138A50  80 1F 00 BC */	lwz r0, 0xbc(r31)
/* 8013BB14 00138A54  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 8013BB18 00138A58  90 1F 00 BC */	stw r0, 0xbc(r31)
/* 8013BB1C 00138A5C  80 1F 00 BC */	lwz r0, 0xbc(r31)
/* 8013BB20 00138A60  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8013BB24 00138A64  90 1F 00 BC */	stw r0, 0xbc(r31)
/* 8013BB28 00138A68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013BB2C 00138A6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013BB30 00138A70  7C 08 03 A6 */	mtlr r0
/* 8013BB34 00138A74  38 21 00 10 */	addi r1, r1, 0x10
/* 8013BB38 00138A78  4E 80 00 20 */	blr 

.global checkWater__Q24Game8CreatureFPQ24Game8WaterBoxRQ23Sys6Sphere
checkWater__Q24Game8CreatureFPQ24Game8WaterBoxRQ23Sys6Sphere:
/* 8013BB3C 00138A7C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013BB40 00138A80  7C 08 02 A6 */	mflr r0
/* 8013BB44 00138A84  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013BB48 00138A88  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013BB4C 00138A8C  7C BF 2B 78 */	mr r31, r5
/* 8013BB50 00138A90  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013BB54 00138A94  7C 9E 23 79 */	or. r30, r4, r4
/* 8013BB58 00138A98  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013BB5C 00138A9C  7C 7D 1B 78 */	mr r29, r3
/* 8013BB60 00138AA0  41 82 00 60 */	beq .L_8013BBC0
/* 8013BB64 00138AA4  7F C3 F3 78 */	mr r3, r30
/* 8013BB68 00138AA8  7F E4 FB 78 */	mr r4, r31
/* 8013BB6C 00138AAC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013BB70 00138AB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013BB74 00138AB4  7D 89 03 A6 */	mtctr r12
/* 8013BB78 00138AB8  4E 80 04 21 */	bctrl 
/* 8013BB7C 00138ABC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013BB80 00138AC0  40 82 00 7C */	bne .L_8013BBFC
/* 8013BB84 00138AC4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8013BB88 00138AC8  28 03 00 00 */	cmplwi r3, 0
/* 8013BB8C 00138ACC  41 82 00 10 */	beq .L_8013BB9C
/* 8013BB90 00138AD0  7F E4 FB 78 */	mr r4, r31
/* 8013BB94 00138AD4  48 02 7D 95 */	bl findWater__Q24Game6MapMgrFRQ23Sys6Sphere
/* 8013BB98 00138AD8  7C 7E 1B 78 */	mr r30, r3
.L_8013BB9C:
/* 8013BB9C 00138ADC  28 1E 00 00 */	cmplwi r30, 0
/* 8013BBA0 00138AE0  40 82 00 5C */	bne .L_8013BBFC
/* 8013BBA4 00138AE4  7F A3 EB 78 */	mr r3, r29
/* 8013BBA8 00138AE8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013BBAC 00138AEC  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8013BBB0 00138AF0  7D 89 03 A6 */	mtctr r12
/* 8013BBB4 00138AF4  4E 80 04 21 */	bctrl 
/* 8013BBB8 00138AF8  3B C0 00 00 */	li r30, 0
/* 8013BBBC 00138AFC  48 00 00 40 */	b .L_8013BBFC
.L_8013BBC0:
/* 8013BBC0 00138B00  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8013BBC4 00138B04  38 80 00 00 */	li r4, 0
/* 8013BBC8 00138B08  28 03 00 00 */	cmplwi r3, 0
/* 8013BBCC 00138B0C  41 82 00 10 */	beq .L_8013BBDC
/* 8013BBD0 00138B10  7F E4 FB 78 */	mr r4, r31
/* 8013BBD4 00138B14  48 02 7D 55 */	bl findWater__Q24Game6MapMgrFRQ23Sys6Sphere
/* 8013BBD8 00138B18  7C 64 1B 78 */	mr r4, r3
.L_8013BBDC:
/* 8013BBDC 00138B1C  28 04 00 00 */	cmplwi r4, 0
/* 8013BBE0 00138B20  7C 9E 23 78 */	mr r30, r4
/* 8013BBE4 00138B24  41 82 00 18 */	beq .L_8013BBFC
/* 8013BBE8 00138B28  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013BBEC 00138B2C  7F A3 EB 78 */	mr r3, r29
/* 8013BBF0 00138B30  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 8013BBF4 00138B34  7D 89 03 A6 */	mtctr r12
/* 8013BBF8 00138B38  4E 80 04 21 */	bctrl 
.L_8013BBFC:
/* 8013BBFC 00138B3C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013BC00 00138B40  7F C3 F3 78 */	mr r3, r30
/* 8013BC04 00138B44  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013BC08 00138B48  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013BC0C 00138B4C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013BC10 00138B50  7C 08 03 A6 */	mtlr r0
/* 8013BC14 00138B54  38 21 00 20 */	addi r1, r1, 0x20
/* 8013BC18 00138B58  4E 80 00 20 */	blr 

.global inWaterCallback__Q24Game8CreatureFPQ24Game8WaterBox
inWaterCallback__Q24Game8CreatureFPQ24Game8WaterBox:
/* 8013BC1C 00138B5C  4E 80 00 20 */	blr 

.global outWaterCallback__Q24Game8CreatureFv
outWaterCallback__Q24Game8CreatureFv:
/* 8013BC20 00138B60  4E 80 00 20 */	blr 

.global checkHell__Q24Game8CreatureFRQ34Game8Creature12CheckHellArg
checkHell__Q24Game8CreatureFRQ34Game8Creature12CheckHellArg:
/* 8013BC24 00138B64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013BC28 00138B68  7C 08 02 A6 */	mflr r0
/* 8013BC2C 00138B6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013BC30 00138B70  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013BC34 00138B74  7C 9F 23 78 */	mr r31, r4
/* 8013BC38 00138B78  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013BC3C 00138B7C  7C 7E 1B 78 */	mr r30, r3
/* 8013BC40 00138B80  7F C4 F3 78 */	mr r4, r30
/* 8013BC44 00138B84  38 61 00 08 */	addi r3, r1, 8
/* 8013BC48 00138B88  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013BC4C 00138B8C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013BC50 00138B90  7D 89 03 A6 */	mtctr r12
/* 8013BC54 00138B94  4E 80 04 21 */	bctrl 
/* 8013BC58 00138B98  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8013BC5C 00138B9C  C0 02 9F 38 */	lfs f0, lbl_80518298@sda21(r2)
/* 8013BC60 00138BA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013BC64 00138BA4  40 80 00 DC */	bge .L_8013BD40
/* 8013BC68 00138BA8  7F C3 F3 78 */	mr r3, r30
/* 8013BC6C 00138BAC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013BC70 00138BB0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8013BC74 00138BB4  7D 89 03 A6 */	mtctr r12
/* 8013BC78 00138BB8  4E 80 04 21 */	bctrl 
/* 8013BC7C 00138BBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013BC80 00138BC0  41 82 00 28 */	beq .L_8013BCA8
/* 8013BC84 00138BC4  7F C3 F3 78 */	mr r3, r30
/* 8013BC88 00138BC8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013BC8C 00138BCC  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 8013BC90 00138BD0  7D 89 03 A6 */	mtctr r12
/* 8013BC94 00138BD4  4E 80 04 21 */	bctrl 
/* 8013BC98 00138BD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013BC9C 00138BDC  41 82 00 0C */	beq .L_8013BCA8
/* 8013BCA0 00138BE0  38 60 00 00 */	li r3, 0
/* 8013BCA4 00138BE4  48 0F 4A 75 */	bl inc__Q24Game8DeathMgrFi
.L_8013BCA8:
/* 8013BCA8 00138BE8  88 1F 00 00 */	lbz r0, 0(r31)
/* 8013BCAC 00138BEC  28 00 00 00 */	cmplwi r0, 0
/* 8013BCB0 00138BF0  41 82 00 88 */	beq .L_8013BD38
/* 8013BCB4 00138BF4  7F C3 F3 78 */	mr r3, r30
/* 8013BCB8 00138BF8  48 06 37 6D */	bl endStick__Q24Game8CreatureFv
/* 8013BCBC 00138BFC  7F C3 F3 78 */	mr r3, r30
/* 8013BCC0 00138C00  38 80 00 00 */	li r4, 0
/* 8013BCC4 00138C04  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013BCC8 00138C08  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8013BCCC 00138C0C  7D 89 03 A6 */	mtctr r12
/* 8013BCD0 00138C10  4E 80 04 21 */	bctrl 
/* 8013BCD4 00138C14  80 0D 92 C8 */	lwz r0, cellMgr__4Game@sda21(r13)
/* 8013BCD8 00138C18  7F C3 F3 78 */	mr r3, r30
/* 8013BCDC 00138C1C  90 0D 92 D8 */	stw r0, sCurrCellMgr__Q24Game4Cell@sda21(r13)
/* 8013BCE0 00138C20  48 01 A9 AD */	bl exitCell__Q24Game10CellObjectFv
/* 8013BCE4 00138C24  38 00 00 00 */	li r0, 0
/* 8013BCE8 00138C28  38 7E 01 2C */	addi r3, r30, 0x12c
/* 8013BCEC 00138C2C  90 0D 92 D8 */	stw r0, sCurrCellMgr__Q24Game4Cell@sda21(r13)
/* 8013BCF0 00138C30  48 05 AA 31 */	bl exit__Q24Game13UpdateContextFv
/* 8013BCF4 00138C34  7F C3 F3 78 */	mr r3, r30
/* 8013BCF8 00138C38  48 06 31 C1 */	bl releaseAllStickers__Q24Game8CreatureFv
/* 8013BCFC 00138C3C  7F C3 F3 78 */	mr r3, r30
/* 8013BD00 00138C40  48 06 3D 9D */	bl clearCapture__Q24Game8CreatureFv
/* 8013BD04 00138C44  7F C3 F3 78 */	mr r3, r30
/* 8013BD08 00138C48  38 80 00 00 */	li r4, 0
/* 8013BD0C 00138C4C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013BD10 00138C50  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8013BD14 00138C54  7D 89 03 A6 */	mtctr r12
/* 8013BD18 00138C58  4E 80 04 21 */	bctrl 
/* 8013BD1C 00138C5C  80 7E 00 C4 */	lwz r3, 0xc4(r30)
/* 8013BD20 00138C60  28 03 00 00 */	cmplwi r3, 0
/* 8013BD24 00138C64  41 82 00 14 */	beq .L_8013BD38
/* 8013BD28 00138C68  7F C4 F3 78 */	mr r4, r30
/* 8013BD2C 00138C6C  48 06 EF C9 */	bl informDeath__Q24Game9GeneratorFPQ24Game8Creature
/* 8013BD30 00138C70  38 00 00 00 */	li r0, 0
/* 8013BD34 00138C74  90 1E 00 C4 */	stw r0, 0xc4(r30)
.L_8013BD38:
/* 8013BD38 00138C78  38 60 00 02 */	li r3, 2
/* 8013BD3C 00138C7C  48 00 00 14 */	b .L_8013BD50
.L_8013BD40:
/* 8013BD40 00138C80  C0 02 9F 3C */	lfs f0, lbl_8051829C@sda21(r2)
/* 8013BD44 00138C84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013BD48 00138C88  7C 00 00 26 */	mfcr r0
/* 8013BD4C 00138C8C  54 03 0F FE */	srwi r3, r0, 0x1f
.L_8013BD50:
/* 8013BD50 00138C90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013BD54 00138C94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013BD58 00138C98  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013BD5C 00138C9C  7C 08 03 A6 */	mtlr r0
/* 8013BD60 00138CA0  38 21 00 20 */	addi r1, r1, 0x20
/* 8013BD64 00138CA4  4E 80 00 20 */	blr 

.global updateCell__Q24Game8CreatureFv
updateCell__Q24Game8CreatureFv:
/* 8013BD68 00138CA8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8013BD6C 00138CAC  7C 08 02 A6 */	mflr r0
/* 8013BD70 00138CB0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8013BD74 00138CB4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8013BD78 00138CB8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8013BD7C 00138CBC  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8013BD80 00138CC0  7C 7D 1B 78 */	mr r29, r3
/* 8013BD84 00138CC4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8013BD88 00138CC8  28 04 00 00 */	cmplwi r4, 0
/* 8013BD8C 00138CCC  41 82 00 10 */	beq .L_8013BD9C
/* 8013BD90 00138CD0  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 8013BD94 00138CD4  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8013BD98 00138CD8  40 82 01 2C */	bne .L_8013BEC4
.L_8013BD9C:
/* 8013BD9C 00138CDC  38 00 FF FF */	li r0, -1
/* 8013BDA0 00138CE0  7F A4 EB 78 */	mr r4, r29
/* 8013BDA4 00138CE4  90 1D 00 A4 */	stw r0, 0xa4(r29)
/* 8013BDA8 00138CE8  38 61 00 08 */	addi r3, r1, 8
/* 8013BDAC 00138CEC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013BDB0 00138CF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8013BDB4 00138CF4  7D 89 03 A6 */	mtctr r12
/* 8013BDB8 00138CF8  4E 80 04 21 */	bctrl 
/* 8013BDBC 00138CFC  C0 41 00 08 */	lfs f2, 8(r1)
/* 8013BDC0 00138D00  7F A3 EB 78 */	mr r3, r29
/* 8013BDC4 00138D04  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8013BDC8 00138D08  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8013BDCC 00138D0C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8013BDD0 00138D10  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8013BDD4 00138D14  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8013BDD8 00138D18  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013BDDC 00138D1C  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8013BDE0 00138D20  7D 89 03 A6 */	mtctr r12
/* 8013BDE4 00138D24  4E 80 04 21 */	bctrl 
/* 8013BDE8 00138D28  FC 00 08 18 */	frsp f0, f1
/* 8013BDEC 00138D2C  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8013BDF0 00138D30  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8013BDF4 00138D34  28 1D 00 00 */	cmplwi r29, 0
/* 8013BDF8 00138D38  7F BF EB 78 */	mr r31, r29
/* 8013BDFC 00138D3C  EC 02 00 28 */	fsubs f0, f2, f0
/* 8013BE00 00138D40  D0 1D 00 04 */	stfs f0, 4(r29)
/* 8013BE04 00138D44  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8013BE08 00138D48  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8013BE0C 00138D4C  EC 01 00 2A */	fadds f0, f1, f0
/* 8013BE10 00138D50  D0 1D 00 18 */	stfs f0, 0x18(r29)
/* 8013BE14 00138D54  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8013BE18 00138D58  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8013BE1C 00138D5C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8013BE20 00138D60  D0 1D 00 2C */	stfs f0, 0x2c(r29)
/* 8013BE24 00138D64  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8013BE28 00138D68  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8013BE2C 00138D6C  EC 01 00 2A */	fadds f0, f1, f0
/* 8013BE30 00138D70  D0 1D 00 40 */	stfs f0, 0x40(r29)
/* 8013BE34 00138D74  41 82 00 08 */	beq .L_8013BE3C
/* 8013BE38 00138D78  3B FD 00 04 */	addi r31, r29, 4
.L_8013BE3C:
/* 8013BE3C 00138D7C  83 CD 92 C8 */	lwz r30, cellMgr__4Game@sda21(r13)
/* 8013BE40 00138D80  7F E3 FB 78 */	mr r3, r31
/* 8013BE44 00138D84  7F C4 F3 78 */	mr r4, r30
/* 8013BE48 00138D88  48 10 07 69 */	bl insertSort__Q210SweepPrune4NodeFRQ210SweepPrune4Node
/* 8013BE4C 00138D8C  7F C4 F3 78 */	mr r4, r30
/* 8013BE50 00138D90  38 7F 00 14 */	addi r3, r31, 0x14
/* 8013BE54 00138D94  48 10 07 5D */	bl insertSort__Q210SweepPrune4NodeFRQ210SweepPrune4Node
/* 8013BE58 00138D98  38 7F 00 28 */	addi r3, r31, 0x28
/* 8013BE5C 00138D9C  38 9E 00 14 */	addi r4, r30, 0x14
/* 8013BE60 00138DA0  48 10 07 51 */	bl insertSort__Q210SweepPrune4NodeFRQ210SweepPrune4Node
/* 8013BE64 00138DA4  38 7F 00 3C */	addi r3, r31, 0x3c
/* 8013BE68 00138DA8  38 9E 00 14 */	addi r4, r30, 0x14
/* 8013BE6C 00138DAC  48 10 07 45 */	bl insertSort__Q210SweepPrune4NodeFRQ210SweepPrune4Node
/* 8013BE70 00138DB0  80 0D 92 C8 */	lwz r0, cellMgr__4Game@sda21(r13)
/* 8013BE74 00138DB4  28 00 00 00 */	cmplwi r0, 0
/* 8013BE78 00138DB8  41 82 00 4C */	beq .L_8013BEC4
/* 8013BE7C 00138DBC  7F A3 EB 78 */	mr r3, r29
/* 8013BE80 00138DC0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013BE84 00138DC4  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 8013BE88 00138DC8  7D 89 03 A6 */	mtctr r12
/* 8013BE8C 00138DCC  4E 80 04 21 */	bctrl 
/* 8013BE90 00138DD0  90 6D 84 1C */	stw r3, sCellBugName__Q24Game11CellPyramid@sda21(r13)
/* 8013BE94 00138DD4  7F A3 EB 78 */	mr r3, r29
/* 8013BE98 00138DD8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013BE9C 00138DDC  81 8C 01 AC */	lwz r12, 0x1ac(r12)
/* 8013BEA0 00138DE0  7D 89 03 A6 */	mtctr r12
/* 8013BEA4 00138DE4  4E 80 04 21 */	bctrl 
/* 8013BEA8 00138DE8  90 6D 92 DC */	stw r3, sCellBugID__Q24Game11CellPyramid@sda21(r13)
/* 8013BEAC 00138DEC  7F A4 EB 78 */	mr r4, r29
/* 8013BEB0 00138DF0  80 6D 92 C8 */	lwz r3, cellMgr__4Game@sda21(r13)
/* 8013BEB4 00138DF4  38 A1 00 14 */	addi r5, r1, 0x14
/* 8013BEB8 00138DF8  38 DD 00 DC */	addi r6, r29, 0xdc
/* 8013BEBC 00138DFC  38 FD 00 E0 */	addi r7, r29, 0xe0
/* 8013BEC0 00138E00  48 01 C6 95 */	bl "entry__Q24Game11CellPyramidFPQ24Game10CellObjectRQ23Sys6SphereRiR7Rect<i>"
.L_8013BEC4:
/* 8013BEC4 00138E04  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8013BEC8 00138E08  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8013BECC 00138E0C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8013BED0 00138E10  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8013BED4 00138E14  7C 08 03 A6 */	mtlr r0
/* 8013BED8 00138E18  38 21 00 40 */	addi r1, r1, 0x40
/* 8013BEDC 00138E1C  4E 80 00 20 */	blr 

.global getCreatureID__Q24Game8CreatureFv
getCreatureID__Q24Game8CreatureFv:
/* 8013BEE0 00138E20  38 60 FF FF */	li r3, -1
/* 8013BEE4 00138E24  4E 80 00 20 */	blr 

.global getCellPikiCount__Q24Game8CreatureFv
getCellPikiCount__Q24Game8CreatureFv:
/* 8013BEE8 00138E28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013BEEC 00138E2C  7C 08 02 A6 */	mflr r0
/* 8013BEF0 00138E30  7C 65 1B 78 */	mr r5, r3
/* 8013BEF4 00138E34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013BEF8 00138E38  80 0D 92 C8 */	lwz r0, cellMgr__4Game@sda21(r13)
/* 8013BEFC 00138E3C  28 00 00 00 */	cmplwi r0, 0
/* 8013BF00 00138E40  41 82 00 18 */	beq .L_8013BF18
/* 8013BF04 00138E44  80 85 00 DC */	lwz r4, 0xdc(r5)
/* 8013BF08 00138E48  7C 03 03 78 */	mr r3, r0
/* 8013BF0C 00138E4C  38 A5 00 E0 */	addi r5, r5, 0xe0
/* 8013BF10 00138E50  48 01 CE 25 */	bl "getPikiCount__Q24Game11CellPyramidFiR7Rect<i>"
/* 8013BF14 00138E54  48 00 00 08 */	b .L_8013BF1C
.L_8013BF18:
/* 8013BF18 00138E58  38 60 00 00 */	li r3, 0
.L_8013BF1C:
/* 8013BF1C 00138E5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013BF20 00138E60  7C 08 03 A6 */	mtlr r0
/* 8013BF24 00138E64  38 21 00 10 */	addi r1, r1, 0x10
/* 8013BF28 00138E68  4E 80 00 20 */	blr 

.global "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
"applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>":
/* 8013BF2C 00138E6C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8013BF30 00138E70  7C 08 02 A6 */	mflr r0
/* 8013BF34 00138E74  90 01 00 34 */	stw r0, 0x34(r1)
/* 8013BF38 00138E78  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8013BF3C 00138E7C  7C BF 2B 78 */	mr r31, r5
/* 8013BF40 00138E80  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8013BF44 00138E84  7C 7E 1B 78 */	mr r30, r3
/* 8013BF48 00138E88  7F C4 F3 78 */	mr r4, r30
/* 8013BF4C 00138E8C  38 61 00 08 */	addi r3, r1, 8
/* 8013BF50 00138E90  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013BF54 00138E94  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8013BF58 00138E98  7D 89 03 A6 */	mtctr r12
/* 8013BF5C 00138E9C  4E 80 04 21 */	bctrl 
/* 8013BF60 00138EA0  C0 A1 00 08 */	lfs f5, 8(r1)
/* 8013BF64 00138EA4  7F C3 F3 78 */	mr r3, r30
/* 8013BF68 00138EA8  C0 81 00 0C */	lfs f4, 0xc(r1)
/* 8013BF6C 00138EAC  38 81 00 14 */	addi r4, r1, 0x14
/* 8013BF70 00138EB0  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8013BF74 00138EB4  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 8013BF78 00138EB8  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8013BF7C 00138EBC  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8013BF80 00138EC0  C0 DE 01 18 */	lfs f6, 0x118(r30)
/* 8013BF84 00138EC4  C0 5F 00 08 */	lfs f2, 8(r31)
/* 8013BF88 00138EC8  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8013BF8C 00138ECC  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8013BF90 00138ED0  EC 42 01 B2 */	fmuls f2, f2, f6
/* 8013BF94 00138ED4  EC 21 01 B2 */	fmuls f1, f1, f6
/* 8013BF98 00138ED8  EC 00 01 B2 */	fmuls f0, f0, f6
/* 8013BF9C 00138EDC  EC 43 10 2A */	fadds f2, f3, f2
/* 8013BFA0 00138EE0  EC 24 08 2A */	fadds f1, f4, f1
/* 8013BFA4 00138EE4  EC 05 00 2A */	fadds f0, f5, f0
/* 8013BFA8 00138EE8  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 8013BFAC 00138EEC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8013BFB0 00138EF0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8013BFB4 00138EF4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013BFB8 00138EF8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8013BFBC 00138EFC  7D 89 03 A6 */	mtctr r12
/* 8013BFC0 00138F00  4E 80 04 21 */	bctrl 
/* 8013BFC4 00138F04  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8013BFC8 00138F08  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8013BFCC 00138F0C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8013BFD0 00138F10  7C 08 03 A6 */	mtlr r0
/* 8013BFD4 00138F14  38 21 00 30 */	addi r1, r1, 0x30
/* 8013BFD8 00138F18  4E 80 00 20 */	blr 

.global checkCollision__Q24Game8CreatureFPQ24Game10CellObject
checkCollision__Q24Game8CreatureFPQ24Game10CellObject:
/* 8013BFDC 00138F1C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8013BFE0 00138F20  7C 08 02 A6 */	mflr r0
/* 8013BFE4 00138F24  90 01 00 64 */	stw r0, 0x64(r1)
/* 8013BFE8 00138F28  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 8013BFEC 00138F2C  7C 7D 1B 78 */	mr r29, r3
/* 8013BFF0 00138F30  7C 9E 23 78 */	mr r30, r4
/* 8013BFF4 00138F34  81 83 00 00 */	lwz r12, 0(r3)
/* 8013BFF8 00138F38  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 8013BFFC 00138F3C  7D 89 03 A6 */	mtctr r12
/* 8013C000 00138F40  4E 80 04 21 */	bctrl 
/* 8013C004 00138F44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C008 00138F48  41 82 00 2C */	beq .L_8013C034
/* 8013C00C 00138F4C  7F A3 EB 78 */	mr r3, r29
/* 8013C010 00138F50  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013C014 00138F54  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 8013C018 00138F58  7D 89 03 A6 */	mtctr r12
/* 8013C01C 00138F5C  4E 80 04 21 */	bctrl 
/* 8013C020 00138F60  7F C3 F3 78 */	mr r3, r30
/* 8013C024 00138F64  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013C028 00138F68  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 8013C02C 00138F6C  7D 89 03 A6 */	mtctr r12
/* 8013C030 00138F70  4E 80 04 21 */	bctrl 
.L_8013C034:
/* 8013C034 00138F74  7F C3 F3 78 */	mr r3, r30
/* 8013C038 00138F78  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013C03C 00138F7C  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 8013C040 00138F80  7D 89 03 A6 */	mtctr r12
/* 8013C044 00138F84  4E 80 04 21 */	bctrl 
/* 8013C048 00138F88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C04C 00138F8C  41 82 02 60 */	beq .L_8013C2AC
/* 8013C050 00138F90  7F A3 EB 78 */	mr r3, r29
/* 8013C054 00138F94  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013C058 00138F98  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 8013C05C 00138F9C  7D 89 03 A6 */	mtctr r12
/* 8013C060 00138FA0  4E 80 04 21 */	bctrl 
/* 8013C064 00138FA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C068 00138FA8  40 82 00 08 */	bne .L_8013C070
/* 8013C06C 00138FAC  48 00 02 40 */	b .L_8013C2AC
.L_8013C070:
/* 8013C070 00138FB0  7F A3 EB 78 */	mr r3, r29
/* 8013C074 00138FB4  48 06 35 01 */	bl isStickTo__Q24Game8CreatureFv
/* 8013C078 00138FB8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C07C 00138FBC  41 82 00 10 */	beq .L_8013C08C
/* 8013C080 00138FC0  80 1D 00 F4 */	lwz r0, 0xf4(r29)
/* 8013C084 00138FC4  7C 00 F0 40 */	cmplw r0, r30
/* 8013C088 00138FC8  41 82 02 24 */	beq .L_8013C2AC
.L_8013C08C:
/* 8013C08C 00138FCC  7F C3 F3 78 */	mr r3, r30
/* 8013C090 00138FD0  48 06 34 E5 */	bl isStickTo__Q24Game8CreatureFv
/* 8013C094 00138FD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C098 00138FD8  41 82 00 10 */	beq .L_8013C0A8
/* 8013C09C 00138FDC  80 1E 00 F4 */	lwz r0, 0xf4(r30)
/* 8013C0A0 00138FE0  7C 00 E8 40 */	cmplw r0, r29
/* 8013C0A4 00138FE4  41 82 02 08 */	beq .L_8013C2AC
.L_8013C0A8:
/* 8013C0A8 00138FE8  7F A3 EB 78 */	mr r3, r29
/* 8013C0AC 00138FEC  7F C4 F3 78 */	mr r4, r30
/* 8013C0B0 00138FF0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013C0B4 00138FF4  81 8C 01 90 */	lwz r12, 0x190(r12)
/* 8013C0B8 00138FF8  7D 89 03 A6 */	mtctr r12
/* 8013C0BC 00138FFC  4E 80 04 21 */	bctrl 
/* 8013C0C0 00139000  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C0C4 00139004  40 82 01 E8 */	bne .L_8013C2AC
/* 8013C0C8 00139008  7F C3 F3 78 */	mr r3, r30
/* 8013C0CC 0013900C  7F A4 EB 78 */	mr r4, r29
/* 8013C0D0 00139010  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013C0D4 00139014  81 8C 01 90 */	lwz r12, 0x190(r12)
/* 8013C0D8 00139018  7D 89 03 A6 */	mtctr r12
/* 8013C0DC 0013901C  4E 80 04 21 */	bctrl 
/* 8013C0E0 00139020  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C0E4 00139024  41 82 00 08 */	beq .L_8013C0EC
/* 8013C0E8 00139028  48 00 01 C4 */	b .L_8013C2AC
.L_8013C0EC:
/* 8013C0EC 0013902C  7F C3 F3 78 */	mr r3, r30
/* 8013C0F0 00139030  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013C0F4 00139034  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8013C0F8 00139038  7D 89 03 A6 */	mtctr r12
/* 8013C0FC 0013903C  4E 80 04 21 */	bctrl 
/* 8013C100 00139040  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C104 00139044  41 82 01 A8 */	beq .L_8013C2AC
/* 8013C108 00139048  7F A3 EB 78 */	mr r3, r29
/* 8013C10C 0013904C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013C110 00139050  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8013C114 00139054  7D 89 03 A6 */	mtctr r12
/* 8013C118 00139058  4E 80 04 21 */	bctrl 
/* 8013C11C 0013905C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C120 00139060  40 82 00 08 */	bne .L_8013C128
/* 8013C124 00139064  48 00 01 88 */	b .L_8013C2AC
.L_8013C128:
/* 8013C128 00139068  7F A3 EB 78 */	mr r3, r29
/* 8013C12C 0013906C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013C130 00139070  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 8013C134 00139074  7D 89 03 A6 */	mtctr r12
/* 8013C138 00139078  4E 80 04 21 */	bctrl 
/* 8013C13C 0013907C  3C 60 80 4B */	lis r3, lbl_804B00A4@ha
/* 8013C140 00139080  3C 80 80 4B */	lis r4, "__vt__47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"@ha
/* 8013C144 00139084  38 A3 00 A4 */	addi r5, r3, lbl_804B00A4@l
/* 8013C148 00139088  3C 60 80 4B */	lis r3, "__vt__63Delegate3<Q24Game8Creature,P8CollPart,P8CollPart,R10Vector3<f>>"@ha
/* 8013C14C 0013908C  80 E5 00 00 */	lwz r7, 0(r5)
/* 8013C150 00139090  38 84 00 BC */	addi r4, r4, "__vt__47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"@l
/* 8013C154 00139094  80 C5 00 04 */	lwz r6, 4(r5)
/* 8013C158 00139098  38 03 00 B0 */	addi r0, r3, "__vt__63Delegate3<Q24Game8Creature,P8CollPart,P8CollPart,R10Vector3<f>>"@l
/* 8013C15C 0013909C  80 A5 00 08 */	lwz r5, 8(r5)
/* 8013C160 001390A0  7F A3 EB 78 */	mr r3, r29
/* 8013C164 001390A4  90 81 00 30 */	stw r4, 0x30(r1)
/* 8013C168 001390A8  3B E1 00 38 */	addi r31, r1, 0x38
/* 8013C16C 001390AC  90 01 00 30 */	stw r0, 0x30(r1)
/* 8013C170 001390B0  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8013C174 001390B4  90 E1 00 38 */	stw r7, 0x38(r1)
/* 8013C178 001390B8  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 8013C17C 001390BC  90 A1 00 40 */	stw r5, 0x40(r1)
/* 8013C180 001390C0  93 CD 92 78 */	stw r30, currOp__Q24Game8Creature@sda21(r13)
/* 8013C184 001390C4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013C188 001390C8  90 E1 00 24 */	stw r7, 0x24(r1)
/* 8013C18C 001390CC  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 8013C190 001390D0  90 C1 00 28 */	stw r6, 0x28(r1)
/* 8013C194 001390D4  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 8013C198 001390D8  7D 89 03 A6 */	mtctr r12
/* 8013C19C 001390DC  4E 80 04 21 */	bctrl 
/* 8013C1A0 001390E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C1A4 001390E4  41 82 00 0C */	beq .L_8013C1B0
/* 8013C1A8 001390E8  38 00 00 01 */	li r0, 1
/* 8013C1AC 001390EC  98 0D 92 60 */	stb r0, mDebug__8CollTree@sda21(r13)
.L_8013C1B0:
/* 8013C1B0 001390F0  7F A3 EB 78 */	mr r3, r29
/* 8013C1B4 001390F4  3B 80 00 01 */	li r28, 1
/* 8013C1B8 001390F8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013C1BC 001390FC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8013C1C0 00139100  7D 89 03 A6 */	mtctr r12
/* 8013C1C4 00139104  4E 80 04 21 */	bctrl 
/* 8013C1C8 00139108  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C1CC 0013910C  40 82 00 24 */	bne .L_8013C1F0
/* 8013C1D0 00139110  7F A3 EB 78 */	mr r3, r29
/* 8013C1D4 00139114  81 9D 00 00 */	lwz r12, 0(r29)
/* 8013C1D8 00139118  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013C1DC 0013911C  7D 89 03 A6 */	mtctr r12
/* 8013C1E0 00139120  4E 80 04 21 */	bctrl 
/* 8013C1E4 00139124  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C1E8 00139128  40 82 00 08 */	bne .L_8013C1F0
/* 8013C1EC 0013912C  3B 80 00 00 */	li r28, 0
.L_8013C1F0:
/* 8013C1F0 00139130  7F C3 F3 78 */	mr r3, r30
/* 8013C1F4 00139134  3B 60 00 01 */	li r27, 1
/* 8013C1F8 00139138  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013C1FC 0013913C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8013C200 00139140  7D 89 03 A6 */	mtctr r12
/* 8013C204 00139144  4E 80 04 21 */	bctrl 
/* 8013C208 00139148  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C20C 0013914C  40 82 00 24 */	bne .L_8013C230
/* 8013C210 00139150  7F C3 F3 78 */	mr r3, r30
/* 8013C214 00139154  81 9E 00 00 */	lwz r12, 0(r30)
/* 8013C218 00139158  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013C21C 0013915C  7D 89 03 A6 */	mtctr r12
/* 8013C220 00139160  4E 80 04 21 */	bctrl 
/* 8013C224 00139164  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C228 00139168  40 82 00 08 */	bne .L_8013C230
/* 8013C22C 0013916C  3B 60 00 00 */	li r27, 0
.L_8013C230:
/* 8013C230 00139170  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 8013C234 00139174  41 82 00 0C */	beq .L_8013C240
/* 8013C238 00139178  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8013C23C 0013917C  40 82 00 14 */	bne .L_8013C250
.L_8013C240:
/* 8013C240 00139180  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 8013C244 00139184  40 82 00 4C */	bne .L_8013C290
/* 8013C248 00139188  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8013C24C 0013918C  40 82 00 44 */	bne .L_8013C290
.L_8013C250:
/* 8013C250 00139190  80 7D 01 14 */	lwz r3, 0x114(r29)
/* 8013C254 00139194  38 A1 00 0C */	addi r5, r1, 0xc
/* 8013C258 00139198  80 9E 01 14 */	lwz r4, 0x114(r30)
/* 8013C25C 0013919C  38 C1 00 08 */	addi r6, r1, 8
/* 8013C260 001391A0  38 E1 00 10 */	addi r7, r1, 0x10
/* 8013C264 001391A4  4B FF 82 ED */	bl "checkCollision__8CollTreeFP8CollTreePP8CollPartPP8CollPartR10Vector3<f>"
/* 8013C268 001391A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C26C 001391AC  41 82 00 34 */	beq .L_8013C2A0
/* 8013C270 001391B0  80 61 00 34 */	lwz r3, 0x34(r1)
/* 8013C274 001391B4  7F EC FB 78 */	mr r12, r31
/* 8013C278 001391B8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8013C27C 001391BC  38 C1 00 10 */	addi r6, r1, 0x10
/* 8013C280 001391C0  80 A1 00 08 */	lwz r5, 8(r1)
/* 8013C284 001391C4  4B F8 58 A1 */	bl __ptmf_scall
/* 8013C288 001391C8  60 00 00 00 */	nop 
/* 8013C28C 001391CC  48 00 00 14 */	b .L_8013C2A0
.L_8013C290:
/* 8013C290 001391D0  80 7D 01 14 */	lwz r3, 0x114(r29)
/* 8013C294 001391D4  38 A1 00 30 */	addi r5, r1, 0x30
/* 8013C298 001391D8  80 9E 01 14 */	lwz r4, 0x114(r30)
/* 8013C29C 001391DC  4B FF 92 C9 */	bl "checkCollisionMulti__8CollTreeFP8CollTreeP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>"
.L_8013C2A0:
/* 8013C2A0 001391E0  38 00 00 00 */	li r0, 0
/* 8013C2A4 001391E4  98 0D 92 60 */	stb r0, mDebug__8CollTree@sda21(r13)
/* 8013C2A8 001391E8  90 0D 92 78 */	stw r0, currOp__Q24Game8Creature@sda21(r13)
.L_8013C2AC:
/* 8013C2AC 001391EC  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 8013C2B0 001391F0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8013C2B4 001391F4  7C 08 03 A6 */	mtlr r0
/* 8013C2B8 001391F8  38 21 00 60 */	addi r1, r1, 0x60
/* 8013C2BC 001391FC  4E 80 00 20 */	blr 

.global "resolveOneColl__Q24Game8CreatureFP8CollPartP8CollPartR10Vector3<f>"
"resolveOneColl__Q24Game8CreatureFP8CollPartP8CollPartR10Vector3<f>":
/* 8013C2C0 00139200  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 8013C2C4 00139204  7C 08 02 A6 */	mflr r0
/* 8013C2C8 00139208  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 8013C2CC 0013920C  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 8013C2D0 00139210  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 8013C2D4 00139214  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 8013C2D8 00139218  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 8013C2DC 0013921C  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 8013C2E0 00139220  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 8013C2E4 00139224  BF 41 00 A8 */	stmw r26, 0xa8(r1)
/* 8013C2E8 00139228  80 0D 92 78 */	lwz r0, currOp__Q24Game8Creature@sda21(r13)
/* 8013C2EC 0013922C  7C 7C 1B 78 */	mr r28, r3
/* 8013C2F0 00139230  7C 9D 23 78 */	mr r29, r4
/* 8013C2F4 00139234  7C BE 2B 78 */	mr r30, r5
/* 8013C2F8 00139238  28 00 00 00 */	cmplwi r0, 0
/* 8013C2FC 0013923C  7C DA 33 78 */	mr r26, r6
/* 8013C300 00139240  7C 1F 03 78 */	mr r31, r0
/* 8013C304 00139244  41 82 08 5C */	beq .L_8013CB60
/* 8013C308 00139248  81 83 00 00 */	lwz r12, 0(r3)
/* 8013C30C 0013924C  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 8013C310 00139250  7D 89 03 A6 */	mtctr r12
/* 8013C314 00139254  4E 80 04 21 */	bctrl 
/* 8013C318 00139258  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C31C 0013925C  41 82 00 2C */	beq .L_8013C348
/* 8013C320 00139260  7F 83 E3 78 */	mr r3, r28
/* 8013C324 00139264  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013C328 00139268  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 8013C32C 0013926C  7D 89 03 A6 */	mtctr r12
/* 8013C330 00139270  4E 80 04 21 */	bctrl 
/* 8013C334 00139274  7F E3 FB 78 */	mr r3, r31
/* 8013C338 00139278  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013C33C 0013927C  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 8013C340 00139280  7D 89 03 A6 */	mtctr r12
/* 8013C344 00139284  4E 80 04 21 */	bctrl 
.L_8013C348:
/* 8013C348 00139288  7F 83 E3 78 */	mr r3, r28
/* 8013C34C 0013928C  3B 60 00 00 */	li r27, 0
/* 8013C350 00139290  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013C354 00139294  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 8013C358 00139298  7D 89 03 A6 */	mtctr r12
/* 8013C35C 0013929C  4E 80 04 21 */	bctrl 
/* 8013C360 001392A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C364 001392A4  41 82 00 20 */	beq .L_8013C384
/* 8013C368 001392A8  7F E3 FB 78 */	mr r3, r31
/* 8013C36C 001392AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013C370 001392B0  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 8013C374 001392B4  7D 89 03 A6 */	mtctr r12
/* 8013C378 001392B8  4E 80 04 21 */	bctrl 
/* 8013C37C 001392BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C380 001392C0  40 82 00 08 */	bne .L_8013C388
.L_8013C384:
/* 8013C384 001392C4  3B 60 00 01 */	li r27, 1
.L_8013C388:
/* 8013C388 001392C8  C0 3A 00 04 */	lfs f1, 4(r26)
/* 8013C38C 001392CC  C0 1A 00 00 */	lfs f0, 0(r26)
/* 8013C390 001392D0  FC 60 08 50 */	fneg f3, f1
/* 8013C394 001392D4  C0 5A 00 08 */	lfs f2, 8(r26)
/* 8013C398 001392D8  FC 00 00 50 */	fneg f0, f0
/* 8013C39C 001392DC  C0 22 9F 28 */	lfs f1, lbl_80518288@sda21(r2)
/* 8013C3A0 001392E0  FC 40 10 50 */	fneg f2, f2
/* 8013C3A4 001392E4  FC 80 18 18 */	frsp f4, f3
/* 8013C3A8 001392E8  FC A0 00 18 */	frsp f5, f0
/* 8013C3AC 001392EC  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 8013C3B0 001392F0  FC C0 10 18 */	frsp f6, f2
/* 8013C3B4 001392F4  EC 84 01 32 */	fmuls f4, f4, f4
/* 8013C3B8 001392F8  D0 61 00 9C */	stfs f3, 0x9c(r1)
/* 8013C3BC 001392FC  EC 05 01 72 */	fmuls f0, f5, f5
/* 8013C3C0 00139300  EC 66 01 B2 */	fmuls f3, f6, f6
/* 8013C3C4 00139304  D0 41 00 A0 */	stfs f2, 0xa0(r1)
/* 8013C3C8 00139308  EC 00 20 2A */	fadds f0, f0, f4
/* 8013C3CC 0013930C  EC 03 00 2A */	fadds f0, f3, f0
/* 8013C3D0 00139310  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8013C3D4 00139314  40 81 00 20 */	ble .L_8013C3F4
/* 8013C3D8 00139318  EC 05 21 7A */	fmadds f0, f5, f5, f4
/* 8013C3DC 0013931C  EC 83 00 2A */	fadds f4, f3, f0
/* 8013C3E0 00139320  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 8013C3E4 00139324  40 81 00 14 */	ble .L_8013C3F8
/* 8013C3E8 00139328  FC 00 20 34 */	frsqrte f0, f4
/* 8013C3EC 0013932C  EC 80 01 32 */	fmuls f4, f0, f4
/* 8013C3F0 00139330  48 00 00 08 */	b .L_8013C3F8
.L_8013C3F4:
/* 8013C3F4 00139334  FC 80 08 90 */	fmr f4, f1
.L_8013C3F8:
/* 8013C3F8 00139338  C0 02 9F 28 */	lfs f0, lbl_80518288@sda21(r2)
/* 8013C3FC 0013933C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8013C400 00139340  40 81 00 34 */	ble .L_8013C434
/* 8013C404 00139344  C0 02 9F 24 */	lfs f0, lbl_80518284@sda21(r2)
/* 8013C408 00139348  C0 41 00 98 */	lfs f2, 0x98(r1)
/* 8013C40C 0013934C  EC 60 20 24 */	fdivs f3, f0, f4
/* 8013C410 00139350  C0 21 00 9C */	lfs f1, 0x9c(r1)
/* 8013C414 00139354  C0 01 00 A0 */	lfs f0, 0xa0(r1)
/* 8013C418 00139358  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8013C41C 0013935C  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8013C420 00139360  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8013C424 00139364  D0 41 00 98 */	stfs f2, 0x98(r1)
/* 8013C428 00139368  D0 21 00 9C */	stfs f1, 0x9c(r1)
/* 8013C42C 0013936C  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 8013C430 00139370  48 00 00 08 */	b .L_8013C438
.L_8013C434:
/* 8013C434 00139374  FC 80 00 90 */	fmr f4, f0
.L_8013C438:
/* 8013C438 00139378  C0 22 9F 28 */	lfs f1, lbl_80518288@sda21(r2)
/* 8013C43C 0013937C  FC 01 20 00 */	fcmpu cr0, f1, f4
/* 8013C440 00139380  40 82 00 14 */	bne .L_8013C454
/* 8013C444 00139384  C0 02 9F 24 */	lfs f0, lbl_80518284@sda21(r2)
/* 8013C448 00139388  D0 21 00 98 */	stfs f1, 0x98(r1)
/* 8013C44C 0013938C  D0 21 00 9C */	stfs f1, 0x9c(r1)
/* 8013C450 00139390  D0 01 00 A0 */	stfs f0, 0xa0(r1)
.L_8013C454:
/* 8013C454 00139394  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 8013C458 00139398  7F 83 E3 78 */	mr r3, r28
/* 8013C45C 0013939C  C0 C1 00 A0 */	lfs f6, 0xa0(r1)
/* 8013C460 001393A0  38 81 00 74 */	addi r4, r1, 0x74
/* 8013C464 001393A4  C0 E1 00 9C */	lfs f7, 0x9c(r1)
/* 8013C468 001393A8  38 A1 00 8C */	addi r5, r1, 0x8c
/* 8013C46C 001393AC  C1 01 00 98 */	lfs f8, 0x98(r1)
/* 8013C470 001393B0  EC A6 00 32 */	fmuls f5, f6, f0
/* 8013C474 001393B4  C0 5D 00 54 */	lfs f2, 0x54(r29)
/* 8013C478 001393B8  EC 87 00 32 */	fmuls f4, f7, f0
/* 8013C47C 001393BC  C0 3D 00 50 */	lfs f1, 0x50(r29)
/* 8013C480 001393C0  EC 68 00 32 */	fmuls f3, f8, f0
/* 8013C484 001393C4  C0 1D 00 4C */	lfs f0, 0x4c(r29)
/* 8013C488 001393C8  EC 42 28 2A */	fadds f2, f2, f5
/* 8013C48C 001393CC  EC 21 20 2A */	fadds f1, f1, f4
/* 8013C490 001393D0  EC 00 18 2A */	fadds f0, f0, f3
/* 8013C494 001393D4  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8013C498 001393D8  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 8013C49C 001393DC  D0 21 00 78 */	stfs f1, 0x78(r1)
/* 8013C4A0 001393E0  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8013C4A4 001393E4  C0 BE 00 54 */	lfs f5, 0x54(r30)
/* 8013C4A8 001393E8  EC 86 00 32 */	fmuls f4, f6, f0
/* 8013C4AC 001393EC  C0 7E 00 50 */	lfs f3, 0x50(r30)
/* 8013C4B0 001393F0  EC 47 00 32 */	fmuls f2, f7, f0
/* 8013C4B4 001393F4  C0 3E 00 4C */	lfs f1, 0x4c(r30)
/* 8013C4B8 001393F8  EC 08 00 32 */	fmuls f0, f8, f0
/* 8013C4BC 001393FC  EC 85 20 28 */	fsubs f4, f5, f4
/* 8013C4C0 00139400  EC 43 10 28 */	fsubs f2, f3, f2
/* 8013C4C4 00139404  EC 01 00 28 */	fsubs f0, f1, f0
/* 8013C4C8 00139408  D0 81 00 70 */	stfs f4, 0x70(r1)
/* 8013C4CC 0013940C  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 8013C4D0 00139410  D0 41 00 6C */	stfs f2, 0x6c(r1)
/* 8013C4D4 00139414  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013C4D8 00139418  81 8C 01 84 */	lwz r12, 0x184(r12)
/* 8013C4DC 0013941C  7D 89 03 A6 */	mtctr r12
/* 8013C4E0 00139420  4E 80 04 21 */	bctrl 
/* 8013C4E4 00139424  7F E3 FB 78 */	mr r3, r31
/* 8013C4E8 00139428  38 81 00 68 */	addi r4, r1, 0x68
/* 8013C4EC 0013942C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013C4F0 00139430  38 A1 00 80 */	addi r5, r1, 0x80
/* 8013C4F4 00139434  81 8C 01 84 */	lwz r12, 0x184(r12)
/* 8013C4F8 00139438  7D 89 03 A6 */	mtctr r12
/* 8013C4FC 0013943C  4E 80 04 21 */	bctrl 
/* 8013C500 00139440  C0 5C 01 18 */	lfs f2, 0x118(r28)
/* 8013C504 00139444  C0 3F 01 18 */	lfs f1, 0x118(r31)
/* 8013C508 00139448  C0 02 9F 28 */	lfs f0, lbl_80518288@sda21(r2)
/* 8013C50C 0013944C  EC 22 08 2A */	fadds f1, f2, f1
/* 8013C510 00139450  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013C514 00139454  40 81 00 14 */	ble .L_8013C528
/* 8013C518 00139458  EF E2 08 24 */	fdivs f31, f2, f1
/* 8013C51C 0013945C  C0 02 9F 24 */	lfs f0, lbl_80518284@sda21(r2)
/* 8013C520 00139460  EF C0 F8 28 */	fsubs f30, f0, f31
/* 8013C524 00139464  48 00 00 0C */	b .L_8013C530
.L_8013C528:
/* 8013C528 00139468  C3 C2 9F 2C */	lfs f30, lbl_8051828C@sda21(r2)
/* 8013C52C 0013946C  FF E0 F0 90 */	fmr f31, f30
.L_8013C530:
/* 8013C530 00139470  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8013C534 00139474  7F 83 E3 78 */	mr r3, r28
/* 8013C538 00139478  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013C53C 0013947C  C0 22 9F 24 */	lfs f1, lbl_80518284@sda21(r2)
/* 8013C540 00139480  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8013C544 00139484  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013C548 00139488  EF A1 00 24 */	fdivs f29, f1, f0
/* 8013C54C 0013948C  7D 89 03 A6 */	mtctr r12
/* 8013C550 00139490  4E 80 04 21 */	bctrl 
/* 8013C554 00139494  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C558 00139498  41 82 00 88 */	beq .L_8013C5E0
/* 8013C55C 0013949C  7F E3 FB 78 */	mr r3, r31
/* 8013C560 001394A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013C564 001394A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013C568 001394A8  7D 89 03 A6 */	mtctr r12
/* 8013C56C 001394AC  4E 80 04 21 */	bctrl 
/* 8013C570 001394B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C574 001394B4  40 82 00 6C */	bne .L_8013C5E0
/* 8013C578 001394B8  7F E3 FB 78 */	mr r3, r31
/* 8013C57C 001394BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013C580 001394C0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8013C584 001394C4  7D 89 03 A6 */	mtctr r12
/* 8013C588 001394C8  4E 80 04 21 */	bctrl 
/* 8013C58C 001394CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C590 001394D0  40 82 00 8C */	bne .L_8013C61C
/* 8013C594 001394D4  C0 22 9F 2C */	lfs f1, lbl_8051828C@sda21(r2)
/* 8013C598 001394D8  C0 02 9F 28 */	lfs f0, lbl_80518288@sda21(r2)
/* 8013C59C 001394DC  EC 21 07 72 */	fmuls f1, f1, f29
/* 8013C5A0 001394E0  C0 7A 00 00 */	lfs f3, 0(r26)
/* 8013C5A4 001394E4  EC 00 07 72 */	fmuls f0, f0, f29
/* 8013C5A8 001394E8  C0 5C 01 1C */	lfs f2, 0x11c(r28)
/* 8013C5AC 001394EC  EC 9F 00 72 */	fmuls f4, f31, f1
/* 8013C5B0 001394F0  EC 3F 00 32 */	fmuls f1, f31, f0
/* 8013C5B4 001394F4  EC 03 11 3A */	fmadds f0, f3, f4, f2
/* 8013C5B8 001394F8  D0 1C 01 1C */	stfs f0, 0x11c(r28)
/* 8013C5BC 001394FC  C0 5A 00 08 */	lfs f2, 8(r26)
/* 8013C5C0 00139500  C0 1C 01 24 */	lfs f0, 0x124(r28)
/* 8013C5C4 00139504  EC 02 01 3A */	fmadds f0, f2, f4, f0
/* 8013C5C8 00139508  D0 1C 01 24 */	stfs f0, 0x124(r28)
/* 8013C5CC 0013950C  C0 5A 00 04 */	lfs f2, 4(r26)
/* 8013C5D0 00139510  C0 1C 01 20 */	lfs f0, 0x120(r28)
/* 8013C5D4 00139514  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8013C5D8 00139518  D0 1C 01 20 */	stfs f0, 0x120(r28)
/* 8013C5DC 0013951C  48 00 00 40 */	b .L_8013C61C
.L_8013C5E0:
/* 8013C5E0 00139520  C0 22 9F 2C */	lfs f1, lbl_8051828C@sda21(r2)
/* 8013C5E4 00139524  C0 02 9F 28 */	lfs f0, lbl_80518288@sda21(r2)
/* 8013C5E8 00139528  EC 21 07 72 */	fmuls f1, f1, f29
/* 8013C5EC 0013952C  C0 5A 00 00 */	lfs f2, 0(r26)
/* 8013C5F0 00139530  EC 00 07 72 */	fmuls f0, f0, f29
/* 8013C5F4 00139534  EC 7F 00 72 */	fmuls f3, f31, f1
/* 8013C5F8 00139538  EC 1F 00 32 */	fmuls f0, f31, f0
/* 8013C5FC 0013953C  EC 22 00 F2 */	fmuls f1, f2, f3
/* 8013C600 00139540  D0 3C 01 1C */	stfs f1, 0x11c(r28)
/* 8013C604 00139544  C0 3A 00 08 */	lfs f1, 8(r26)
/* 8013C608 00139548  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8013C60C 0013954C  D0 3C 01 24 */	stfs f1, 0x124(r28)
/* 8013C610 00139550  C0 3A 00 04 */	lfs f1, 4(r26)
/* 8013C614 00139554  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013C618 00139558  D0 1C 01 20 */	stfs f0, 0x120(r28)
.L_8013C61C:
/* 8013C61C 0013955C  7F E3 FB 78 */	mr r3, r31
/* 8013C620 00139560  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013C624 00139564  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013C628 00139568  7D 89 03 A6 */	mtctr r12
/* 8013C62C 0013956C  4E 80 04 21 */	bctrl 
/* 8013C630 00139570  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C634 00139574  41 82 00 88 */	beq .L_8013C6BC
/* 8013C638 00139578  7F 83 E3 78 */	mr r3, r28
/* 8013C63C 0013957C  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013C640 00139580  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013C644 00139584  7D 89 03 A6 */	mtctr r12
/* 8013C648 00139588  4E 80 04 21 */	bctrl 
/* 8013C64C 0013958C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C650 00139590  40 82 00 6C */	bne .L_8013C6BC
/* 8013C654 00139594  7F 83 E3 78 */	mr r3, r28
/* 8013C658 00139598  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013C65C 0013959C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8013C660 001395A0  7D 89 03 A6 */	mtctr r12
/* 8013C664 001395A4  4E 80 04 21 */	bctrl 
/* 8013C668 001395A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C66C 001395AC  40 82 00 98 */	bne .L_8013C704
/* 8013C670 001395B0  C0 02 9F 2C */	lfs f0, lbl_8051828C@sda21(r2)
/* 8013C674 001395B4  C0 5A 00 00 */	lfs f2, 0(r26)
/* 8013C678 001395B8  EC 20 07 72 */	fmuls f1, f0, f29
/* 8013C67C 001395BC  C0 02 9F 28 */	lfs f0, lbl_80518288@sda21(r2)
/* 8013C680 001395C0  FC 40 10 50 */	fneg f2, f2
/* 8013C684 001395C4  EC 00 07 72 */	fmuls f0, f0, f29
/* 8013C688 001395C8  EC 7E 00 72 */	fmuls f3, f30, f1
/* 8013C68C 001395CC  EC 1E 00 32 */	fmuls f0, f30, f0
/* 8013C690 001395D0  EC 22 00 F2 */	fmuls f1, f2, f3
/* 8013C694 001395D4  D0 3F 01 1C */	stfs f1, 0x11c(r31)
/* 8013C698 001395D8  C0 3A 00 08 */	lfs f1, 8(r26)
/* 8013C69C 001395DC  FC 20 08 50 */	fneg f1, f1
/* 8013C6A0 001395E0  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8013C6A4 001395E4  D0 3F 01 24 */	stfs f1, 0x124(r31)
/* 8013C6A8 001395E8  C0 3A 00 04 */	lfs f1, 4(r26)
/* 8013C6AC 001395EC  FC 20 08 50 */	fneg f1, f1
/* 8013C6B0 001395F0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013C6B4 001395F4  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 8013C6B8 001395F8  48 00 00 4C */	b .L_8013C704
.L_8013C6BC:
/* 8013C6BC 001395FC  C0 02 9F 2C */	lfs f0, lbl_8051828C@sda21(r2)
/* 8013C6C0 00139600  C0 5A 00 00 */	lfs f2, 0(r26)
/* 8013C6C4 00139604  EC 20 07 72 */	fmuls f1, f0, f29
/* 8013C6C8 00139608  C0 02 9F 28 */	lfs f0, lbl_80518288@sda21(r2)
/* 8013C6CC 0013960C  FC 40 10 50 */	fneg f2, f2
/* 8013C6D0 00139610  EC 00 07 72 */	fmuls f0, f0, f29
/* 8013C6D4 00139614  EC 7E 00 72 */	fmuls f3, f30, f1
/* 8013C6D8 00139618  EC 1E 00 32 */	fmuls f0, f30, f0
/* 8013C6DC 0013961C  EC 22 00 F2 */	fmuls f1, f2, f3
/* 8013C6E0 00139620  D0 3F 01 1C */	stfs f1, 0x11c(r31)
/* 8013C6E4 00139624  C0 3A 00 08 */	lfs f1, 8(r26)
/* 8013C6E8 00139628  FC 20 08 50 */	fneg f1, f1
/* 8013C6EC 0013962C  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8013C6F0 00139630  D0 3F 01 24 */	stfs f1, 0x124(r31)
/* 8013C6F4 00139634  C0 3A 00 04 */	lfs f1, 4(r26)
/* 8013C6F8 00139638  FC 20 08 50 */	fneg f1, f1
/* 8013C6FC 0013963C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013C700 00139640  D0 1F 01 20 */	stfs f0, 0x120(r31)
.L_8013C704:
/* 8013C704 00139644  C0 5C 01 1C */	lfs f2, 0x11c(r28)
/* 8013C708 00139648  C0 3C 01 20 */	lfs f1, 0x120(r28)
/* 8013C70C 0013964C  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8013C710 00139650  C0 7C 01 24 */	lfs f3, 0x124(r28)
/* 8013C714 00139654  EC 81 00 72 */	fmuls f4, f1, f1
/* 8013C718 00139658  C0 22 9F 28 */	lfs f1, lbl_80518288@sda21(r2)
/* 8013C71C 0013965C  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8013C720 00139660  EC 00 20 2A */	fadds f0, f0, f4
/* 8013C724 00139664  EC 03 00 2A */	fadds f0, f3, f0
/* 8013C728 00139668  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8013C72C 0013966C  40 81 00 20 */	ble .L_8013C74C
/* 8013C730 00139670  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 8013C734 00139674  EC 63 00 2A */	fadds f3, f3, f0
/* 8013C738 00139678  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8013C73C 0013967C  40 81 00 14 */	ble .L_8013C750
/* 8013C740 00139680  FC 00 18 34 */	frsqrte f0, f3
/* 8013C744 00139684  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8013C748 00139688  48 00 00 08 */	b .L_8013C750
.L_8013C74C:
/* 8013C74C 0013968C  FC 60 08 90 */	fmr f3, f1
.L_8013C750:
/* 8013C750 00139690  C0 42 9F 40 */	lfs f2, lbl_805182A0@sda21(r2)
/* 8013C754 00139694  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 8013C758 00139698  40 81 00 34 */	ble .L_8013C78C
/* 8013C75C 0013969C  C0 22 9F 24 */	lfs f1, lbl_80518284@sda21(r2)
/* 8013C760 001396A0  C0 1C 01 1C */	lfs f0, 0x11c(r28)
/* 8013C764 001396A4  EC 21 18 24 */	fdivs f1, f1, f3
/* 8013C768 001396A8  EC 22 00 72 */	fmuls f1, f2, f1
/* 8013C76C 001396AC  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013C770 001396B0  D0 1C 01 1C */	stfs f0, 0x11c(r28)
/* 8013C774 001396B4  C0 1C 01 20 */	lfs f0, 0x120(r28)
/* 8013C778 001396B8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013C77C 001396BC  D0 1C 01 20 */	stfs f0, 0x120(r28)
/* 8013C780 001396C0  C0 1C 01 24 */	lfs f0, 0x124(r28)
/* 8013C784 001396C4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013C788 001396C8  D0 1C 01 24 */	stfs f0, 0x124(r28)
.L_8013C78C:
/* 8013C78C 001396CC  C0 5F 01 1C */	lfs f2, 0x11c(r31)
/* 8013C790 001396D0  C0 3F 01 20 */	lfs f1, 0x120(r31)
/* 8013C794 001396D4  EC 02 00 B2 */	fmuls f0, f2, f2
/* 8013C798 001396D8  C0 7F 01 24 */	lfs f3, 0x124(r31)
/* 8013C79C 001396DC  EC 81 00 72 */	fmuls f4, f1, f1
/* 8013C7A0 001396E0  C0 22 9F 28 */	lfs f1, lbl_80518288@sda21(r2)
/* 8013C7A4 001396E4  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8013C7A8 001396E8  EC 00 20 2A */	fadds f0, f0, f4
/* 8013C7AC 001396EC  EC 03 00 2A */	fadds f0, f3, f0
/* 8013C7B0 001396F0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8013C7B4 001396F4  40 81 00 20 */	ble .L_8013C7D4
/* 8013C7B8 001396F8  EC 02 20 BA */	fmadds f0, f2, f2, f4
/* 8013C7BC 001396FC  EC 63 00 2A */	fadds f3, f3, f0
/* 8013C7C0 00139700  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8013C7C4 00139704  40 81 00 14 */	ble .L_8013C7D8
/* 8013C7C8 00139708  FC 00 18 34 */	frsqrte f0, f3
/* 8013C7CC 0013970C  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8013C7D0 00139710  48 00 00 08 */	b .L_8013C7D8
.L_8013C7D4:
/* 8013C7D4 00139714  FC 60 08 90 */	fmr f3, f1
.L_8013C7D8:
/* 8013C7D8 00139718  C0 42 9F 40 */	lfs f2, lbl_805182A0@sda21(r2)
/* 8013C7DC 0013971C  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 8013C7E0 00139720  40 81 00 34 */	ble .L_8013C814
/* 8013C7E4 00139724  C0 22 9F 24 */	lfs f1, lbl_80518284@sda21(r2)
/* 8013C7E8 00139728  C0 1F 01 1C */	lfs f0, 0x11c(r31)
/* 8013C7EC 0013972C  EC 21 18 24 */	fdivs f1, f1, f3
/* 8013C7F0 00139730  EC 22 00 72 */	fmuls f1, f2, f1
/* 8013C7F4 00139734  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013C7F8 00139738  D0 1F 01 1C */	stfs f0, 0x11c(r31)
/* 8013C7FC 0013973C  C0 1F 01 20 */	lfs f0, 0x120(r31)
/* 8013C800 00139740  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013C804 00139744  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 8013C808 00139748  C0 1F 01 24 */	lfs f0, 0x124(r31)
/* 8013C80C 0013974C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013C810 00139750  D0 1F 01 24 */	stfs f0, 0x124(r31)
.L_8013C814:
/* 8013C814 00139754  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8013C818 00139758  41 82 00 20 */	beq .L_8013C838
/* 8013C81C 0013975C  C0 02 9F 28 */	lfs f0, lbl_80518288@sda21(r2)
/* 8013C820 00139760  D0 1C 01 1C */	stfs f0, 0x11c(r28)
/* 8013C824 00139764  D0 1C 01 20 */	stfs f0, 0x120(r28)
/* 8013C828 00139768  D0 1C 01 24 */	stfs f0, 0x124(r28)
/* 8013C82C 0013976C  D0 1F 01 1C */	stfs f0, 0x11c(r31)
/* 8013C830 00139770  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 8013C834 00139774  D0 1F 01 24 */	stfs f0, 0x124(r31)
.L_8013C838:
/* 8013C838 00139778  C0 21 00 90 */	lfs f1, 0x90(r1)
/* 8013C83C 0013977C  7F 83 E3 78 */	mr r3, r28
/* 8013C840 00139780  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 8013C844 00139784  38 81 00 5C */	addi r4, r1, 0x5c
/* 8013C848 00139788  C0 61 00 8C */	lfs f3, 0x8c(r1)
/* 8013C84C 0013978C  C0 41 00 80 */	lfs f2, 0x80(r1)
/* 8013C850 00139790  EC 21 00 28 */	fsubs f1, f1, f0
/* 8013C854 00139794  C0 01 00 9C */	lfs f0, 0x9c(r1)
/* 8013C858 00139798  EC 43 10 28 */	fsubs f2, f3, f2
/* 8013C85C 0013979C  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8013C860 001397A0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013C864 001397A4  C0 21 00 98 */	lfs f1, 0x98(r1)
/* 8013C868 001397A8  93 C1 00 60 */	stw r30, 0x60(r1)
/* 8013C86C 001397AC  C0 61 00 94 */	lfs f3, 0x94(r1)
/* 8013C870 001397B0  93 A1 00 64 */	stw r29, 0x64(r1)
/* 8013C874 001397B4  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8013C878 001397B8  C0 21 00 88 */	lfs f1, 0x88(r1)
/* 8013C87C 001397BC  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013C880 001397C0  EC 43 08 28 */	fsubs f2, f3, f1
/* 8013C884 001397C4  C0 21 00 A0 */	lfs f1, 0xa0(r1)
/* 8013C888 001397C8  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8013C88C 001397CC  EF A2 00 7A */	fmadds f29, f2, f1, f0
/* 8013C890 001397D0  7D 89 03 A6 */	mtctr r12
/* 8013C894 001397D4  4E 80 04 21 */	bctrl 
/* 8013C898 001397D8  93 81 00 50 */	stw r28, 0x50(r1)
/* 8013C89C 001397DC  7F E3 FB 78 */	mr r3, r31
/* 8013C8A0 001397E0  38 81 00 50 */	addi r4, r1, 0x50
/* 8013C8A4 001397E4  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8013C8A8 001397E8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8013C8AC 001397EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013C8B0 001397F0  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 8013C8B4 001397F4  7D 89 03 A6 */	mtctr r12
/* 8013C8B8 001397F8  4E 80 04 21 */	bctrl 
/* 8013C8BC 001397FC  C0 02 9F 28 */	lfs f0, lbl_80518288@sda21(r2)
/* 8013C8C0 00139800  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8013C8C4 00139804  4C 40 13 82 */	cror 2, 0, 2
/* 8013C8C8 00139808  40 82 00 4C */	bne .L_8013C914
/* 8013C8CC 0013980C  7F 83 E3 78 */	mr r3, r28
/* 8013C8D0 00139810  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013C8D4 00139814  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 8013C8D8 00139818  7D 89 03 A6 */	mtctr r12
/* 8013C8DC 0013981C  4E 80 04 21 */	bctrl 
/* 8013C8E0 00139820  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C8E4 00139824  41 82 02 7C */	beq .L_8013CB60
/* 8013C8E8 00139828  7F 83 E3 78 */	mr r3, r28
/* 8013C8EC 0013982C  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013C8F0 00139830  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 8013C8F4 00139834  7D 89 03 A6 */	mtctr r12
/* 8013C8F8 00139838  4E 80 04 21 */	bctrl 
/* 8013C8FC 0013983C  7F E3 FB 78 */	mr r3, r31
/* 8013C900 00139840  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013C904 00139844  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 8013C908 00139848  7D 89 03 A6 */	mtctr r12
/* 8013C90C 0013984C  4E 80 04 21 */	bctrl 
/* 8013C910 00139850  48 00 02 50 */	b .L_8013CB60
.L_8013C914:
/* 8013C914 00139854  7F 83 E3 78 */	mr r3, r28
/* 8013C918 00139858  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013C91C 0013985C  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 8013C920 00139860  7D 89 03 A6 */	mtctr r12
/* 8013C924 00139864  4E 80 04 21 */	bctrl 
/* 8013C928 00139868  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8013C92C 0013986C  41 82 00 1C */	beq .L_8013C948
/* 8013C930 00139870  7F 83 E3 78 */	mr r3, r28
/* 8013C934 00139874  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013C938 00139878  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 8013C93C 0013987C  7D 89 03 A6 */	mtctr r12
/* 8013C940 00139880  4E 80 04 21 */	bctrl 
/* 8013C944 00139884  48 00 02 1C */	b .L_8013CB60
.L_8013C948:
/* 8013C948 00139888  7F 83 E3 78 */	mr r3, r28
/* 8013C94C 0013988C  C3 C2 9F 44 */	lfs f30, lbl_805182A4@sda21(r2)
/* 8013C950 00139890  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013C954 00139894  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013C958 00139898  7D 89 03 A6 */	mtctr r12
/* 8013C95C 0013989C  4E 80 04 21 */	bctrl 
/* 8013C960 001398A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C964 001398A4  40 82 00 20 */	bne .L_8013C984
/* 8013C968 001398A8  7F E3 FB 78 */	mr r3, r31
/* 8013C96C 001398AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013C970 001398B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8013C974 001398B4  7D 89 03 A6 */	mtctr r12
/* 8013C978 001398B8  4E 80 04 21 */	bctrl 
/* 8013C97C 001398BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8013C980 001398C0  41 82 00 08 */	beq .L_8013C988
.L_8013C984:
/* 8013C984 001398C4  C3 C2 9F 28 */	lfs f30, lbl_80518288@sda21(r2)
.L_8013C988:
/* 8013C988 001398C8  C0 02 9F 24 */	lfs f0, lbl_80518284@sda21(r2)
/* 8013C98C 001398CC  3B 60 00 00 */	li r27, 0
/* 8013C990 001398D0  C0 5C 01 18 */	lfs f2, 0x118(r28)
/* 8013C994 001398D4  EC 60 F0 2A */	fadds f3, f0, f30
/* 8013C998 001398D8  C0 3F 01 18 */	lfs f1, 0x118(r31)
/* 8013C99C 001398DC  C0 02 9F 28 */	lfs f0, lbl_80518288@sda21(r2)
/* 8013C9A0 001398E0  EC 42 08 2A */	fadds f2, f2, f1
/* 8013C9A4 001398E4  FC 20 18 50 */	fneg f1, f3
/* 8013C9A8 001398E8  FF C0 10 90 */	fmr f30, f2
/* 8013C9AC 001398EC  FC 00 10 00 */	fcmpu cr0, f0, f2
/* 8013C9B0 001398F0  EF A1 07 72 */	fmuls f29, f1, f29
/* 8013C9B4 001398F4  40 82 00 0C */	bne .L_8013C9C0
/* 8013C9B8 001398F8  C3 C2 9F 48 */	lfs f30, lbl_805182A8@sda21(r2)
/* 8013C9BC 001398FC  3B 60 00 01 */	li r27, 1
.L_8013C9C0:
/* 8013C9C0 00139900  7F 83 E3 78 */	mr r3, r28
/* 8013C9C4 00139904  38 81 00 74 */	addi r4, r1, 0x74
/* 8013C9C8 00139908  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013C9CC 0013990C  38 A1 00 98 */	addi r5, r1, 0x98
/* 8013C9D0 00139910  81 8C 01 88 */	lwz r12, 0x188(r12)
/* 8013C9D4 00139914  7D 89 03 A6 */	mtctr r12
/* 8013C9D8 00139918  4E 80 04 21 */	bctrl 
/* 8013C9DC 0013991C  7F E3 FB 78 */	mr r3, r31
/* 8013C9E0 00139920  EF DE 08 2A */	fadds f30, f30, f1
/* 8013C9E4 00139924  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013C9E8 00139928  38 81 00 68 */	addi r4, r1, 0x68
/* 8013C9EC 0013992C  38 A1 00 98 */	addi r5, r1, 0x98
/* 8013C9F0 00139930  81 8C 01 88 */	lwz r12, 0x188(r12)
/* 8013C9F4 00139934  7D 89 03 A6 */	mtctr r12
/* 8013C9F8 00139938  4E 80 04 21 */	bctrl 
/* 8013C9FC 0013993C  EF DE 08 2A */	fadds f30, f30, f1
/* 8013CA00 00139940  C0 21 00 A0 */	lfs f1, 0xa0(r1)
/* 8013CA04 00139944  C0 C1 00 9C */	lfs f6, 0x9c(r1)
/* 8013CA08 00139948  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8013CA0C 0013994C  C0 E1 00 98 */	lfs f7, 0x98(r1)
/* 8013CA10 00139950  EC 5D F0 24 */	fdivs f2, f29, f30
/* 8013CA14 00139954  FC A0 10 50 */	fneg f5, f2
/* 8013CA18 00139958  EC 01 00 B2 */	fmuls f0, f1, f2
/* 8013CA1C 0013995C  EC 66 00 B2 */	fmuls f3, f6, f2
/* 8013CA20 00139960  EC 81 01 72 */	fmuls f4, f1, f5
/* 8013CA24 00139964  EC 47 00 B2 */	fmuls f2, f7, f2
/* 8013CA28 00139968  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 8013CA2C 0013996C  EC 27 01 72 */	fmuls f1, f7, f5
/* 8013CA30 00139970  EC 06 01 72 */	fmuls f0, f6, f5
/* 8013CA34 00139974  D0 61 00 48 */	stfs f3, 0x48(r1)
/* 8013CA38 00139978  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 8013CA3C 0013997C  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8013CA40 00139980  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8013CA44 00139984  D0 81 00 40 */	stfs f4, 0x40(r1)
/* 8013CA48 00139988  40 82 00 40 */	bne .L_8013CA88
/* 8013CA4C 0013998C  7F 83 E3 78 */	mr r3, r28
/* 8013CA50 00139990  38 81 00 74 */	addi r4, r1, 0x74
/* 8013CA54 00139994  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013CA58 00139998  38 A1 00 44 */	addi r5, r1, 0x44
/* 8013CA5C 0013999C  81 8C 01 8C */	lwz r12, 0x18c(r12)
/* 8013CA60 001399A0  7D 89 03 A6 */	mtctr r12
/* 8013CA64 001399A4  4E 80 04 21 */	bctrl 
/* 8013CA68 001399A8  7F E3 FB 78 */	mr r3, r31
/* 8013CA6C 001399AC  38 81 00 68 */	addi r4, r1, 0x68
/* 8013CA70 001399B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013CA74 001399B4  38 A1 00 38 */	addi r5, r1, 0x38
/* 8013CA78 001399B8  81 8C 01 8C */	lwz r12, 0x18c(r12)
/* 8013CA7C 001399BC  7D 89 03 A6 */	mtctr r12
/* 8013CA80 001399C0  4E 80 04 21 */	bctrl 
/* 8013CA84 001399C4  48 00 00 DC */	b .L_8013CB60
.L_8013CA88:
/* 8013CA88 001399C8  7F 84 E3 78 */	mr r4, r28
/* 8013CA8C 001399CC  38 61 00 14 */	addi r3, r1, 0x14
/* 8013CA90 001399D0  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013CA94 001399D4  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8013CA98 001399D8  7D 89 03 A6 */	mtctr r12
/* 8013CA9C 001399DC  4E 80 04 21 */	bctrl 
/* 8013CAA0 001399E0  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 8013CAA4 001399E4  7F 83 E3 78 */	mr r3, r28
/* 8013CAA8 001399E8  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 8013CAAC 001399EC  38 81 00 2C */	addi r4, r1, 0x2c
/* 8013CAB0 001399F0  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 8013CAB4 001399F4  C0 41 00 4C */	lfs f2, 0x4c(r1)
/* 8013CAB8 001399F8  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 8013CABC 001399FC  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 8013CAC0 00139A00  EC 43 10 2A */	fadds f2, f3, f2
/* 8013CAC4 00139A04  D0 61 00 34 */	stfs f3, 0x34(r1)
/* 8013CAC8 00139A08  EC 24 08 2A */	fadds f1, f4, f1
/* 8013CACC 00139A0C  EC 05 00 2A */	fadds f0, f5, f0
/* 8013CAD0 00139A10  D0 A1 00 2C */	stfs f5, 0x2c(r1)
/* 8013CAD4 00139A14  D0 81 00 30 */	stfs f4, 0x30(r1)
/* 8013CAD8 00139A18  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8013CADC 00139A1C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8013CAE0 00139A20  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 8013CAE4 00139A24  81 9C 00 00 */	lwz r12, 0(r28)
/* 8013CAE8 00139A28  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8013CAEC 00139A2C  7D 89 03 A6 */	mtctr r12
/* 8013CAF0 00139A30  4E 80 04 21 */	bctrl 
/* 8013CAF4 00139A34  7F E4 FB 78 */	mr r4, r31
/* 8013CAF8 00139A38  38 61 00 08 */	addi r3, r1, 8
/* 8013CAFC 00139A3C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013CB00 00139A40  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8013CB04 00139A44  7D 89 03 A6 */	mtctr r12
/* 8013CB08 00139A48  4E 80 04 21 */	bctrl 
/* 8013CB0C 00139A4C  C0 A1 00 08 */	lfs f5, 8(r1)
/* 8013CB10 00139A50  7F E3 FB 78 */	mr r3, r31
/* 8013CB14 00139A54  C0 81 00 0C */	lfs f4, 0xc(r1)
/* 8013CB18 00139A58  38 81 00 20 */	addi r4, r1, 0x20
/* 8013CB1C 00139A5C  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8013CB20 00139A60  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 8013CB24 00139A64  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 8013CB28 00139A68  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8013CB2C 00139A6C  EC 43 10 2A */	fadds f2, f3, f2
/* 8013CB30 00139A70  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 8013CB34 00139A74  EC 24 08 2A */	fadds f1, f4, f1
/* 8013CB38 00139A78  EC 05 00 2A */	fadds f0, f5, f0
/* 8013CB3C 00139A7C  D0 A1 00 20 */	stfs f5, 0x20(r1)
/* 8013CB40 00139A80  D0 81 00 24 */	stfs f4, 0x24(r1)
/* 8013CB44 00139A84  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8013CB48 00139A88  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8013CB4C 00139A8C  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 8013CB50 00139A90  81 9F 00 00 */	lwz r12, 0(r31)
/* 8013CB54 00139A94  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8013CB58 00139A98  7D 89 03 A6 */	mtctr r12
/* 8013CB5C 00139A9C  4E 80 04 21 */	bctrl 
.L_8013CB60:
/* 8013CB60 00139AA0  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 8013CB64 00139AA4  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 8013CB68 00139AA8  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 8013CB6C 00139AAC  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 8013CB70 00139AB0  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 8013CB74 00139AB4  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 8013CB78 00139AB8  BB 41 00 A8 */	lmw r26, 0xa8(r1)
/* 8013CB7C 00139ABC  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 8013CB80 00139AC0  7C 08 03 A6 */	mtlr r0
/* 8013CB84 00139AC4  38 21 00 F0 */	addi r1, r1, 0xf0
/* 8013CB88 00139AC8  4E 80 00 20 */	blr 

.global collisionCallback__Q24Game8CreatureFRQ24Game9CollEvent
collisionCallback__Q24Game8CreatureFRQ24Game9CollEvent:
/* 8013CB8C 00139ACC  4E 80 00 20 */	blr 

.global "invoke__63Delegate3<Q24Game8Creature,P8CollPart,P8CollPart,R10Vector3<f>>FP8CollPartP8CollPartR10Vector3<f>"
"invoke__63Delegate3<Q24Game8Creature,P8CollPart,P8CollPart,R10Vector3<f>>FP8CollPartP8CollPartR10Vector3<f>":
/* 8013CB90 00139AD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013CB94 00139AD4  7C 08 02 A6 */	mflr r0
/* 8013CB98 00139AD8  7C 67 1B 78 */	mr r7, r3
/* 8013CB9C 00139ADC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013CBA0 00139AE0  39 87 00 08 */	addi r12, r7, 8
/* 8013CBA4 00139AE4  80 63 00 04 */	lwz r3, 4(r3)
/* 8013CBA8 00139AE8  4B F8 4F 7D */	bl __ptmf_scall
/* 8013CBAC 00139AEC  60 00 00 00 */	nop 
/* 8013CBB0 00139AF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013CBB4 00139AF4  7C 08 03 A6 */	mtlr r0
/* 8013CBB8 00139AF8  38 21 00 10 */	addi r1, r1, 0x10
/* 8013CBBC 00139AFC  4E 80 00 20 */	blr 

.global constructor__Q24Game8CreatureFv
constructor__Q24Game8CreatureFv:
/* 8013CBC0 00139B00  4E 80 00 20 */	blr 

.global doSimulation__Q24Game8CreatureFf
doSimulation__Q24Game8CreatureFf:
/* 8013CBC4 00139B04  4E 80 00 20 */	blr 

.global inWater__Q24Game8CreatureFv
inWater__Q24Game8CreatureFv:
/* 8013CBC8 00139B08  38 60 00 00 */	li r3, 0
/* 8013CBCC 00139B0C  4E 80 00 20 */	blr 

.global isFlying__Q24Game8CreatureFv
isFlying__Q24Game8CreatureFv:
/* 8013CBD0 00139B10  38 60 00 00 */	li r3, 0
/* 8013CBD4 00139B14  4E 80 00 20 */	blr 

.global getPSCreature__Q24Game8CreatureFv
getPSCreature__Q24Game8CreatureFv:
/* 8013CBD8 00139B18  38 60 00 00 */	li r3, 0
/* 8013CBDC 00139B1C  4E 80 00 20 */	blr 

.global getSound_PosPtr__Q24Game8CreatureFv
getSound_PosPtr__Q24Game8CreatureFv:
/* 8013CBE0 00139B20  38 60 00 00 */	li r3, 0
/* 8013CBE4 00139B24  4E 80 00 20 */	blr 

.global getSound_CurrAnimFrame__Q24Game8CreatureFv
getSound_CurrAnimFrame__Q24Game8CreatureFv:
/* 8013CBE8 00139B28  C0 22 9F 28 */	lfs f1, lbl_80518288@sda21(r2)
/* 8013CBEC 00139B2C  4E 80 00 20 */	blr 

.global getSound_CurrAnimSpeed__Q24Game8CreatureFv
getSound_CurrAnimSpeed__Q24Game8CreatureFv:
/* 8013CBF0 00139B30  C0 22 9F 28 */	lfs f1, lbl_80518288@sda21(r2)
/* 8013CBF4 00139B34  4E 80 00 20 */	blr 

.global getLODSphere__Q24Game8CreatureFRQ23Sys6Sphere
getLODSphere__Q24Game8CreatureFRQ23Sys6Sphere:
/* 8013CBF8 00139B38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013CBFC 00139B3C  7C 08 02 A6 */	mflr r0
/* 8013CC00 00139B40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013CC04 00139B44  81 83 00 00 */	lwz r12, 0(r3)
/* 8013CC08 00139B48  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8013CC0C 00139B4C  7D 89 03 A6 */	mtctr r12
/* 8013CC10 00139B50  4E 80 04 21 */	bctrl 
/* 8013CC14 00139B54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013CC18 00139B58  7C 08 03 A6 */	mtlr r0
/* 8013CC1C 00139B5C  38 21 00 10 */	addi r1, r1, 0x10
/* 8013CC20 00139B60  4E 80 00 20 */	blr 

.global onStickStart__Q24Game8CreatureFPQ24Game8Creature
onStickStart__Q24Game8CreatureFPQ24Game8Creature:
/* 8013CC24 00139B64  4E 80 00 20 */	blr 

.global onStickEnd__Q24Game8CreatureFPQ24Game8Creature
onStickEnd__Q24Game8CreatureFPQ24Game8Creature:
/* 8013CC28 00139B68  4E 80 00 20 */	blr 

.global checkCollision__Q24Game10CellObjectFPQ24Game10CellObject
checkCollision__Q24Game10CellObjectFPQ24Game10CellObject:
/* 8013CC2C 00139B6C  4E 80 00 20 */	blr 

.global isPiki__Q24Game10CellObjectFv
isPiki__Q24Game10CellObjectFv:
/* 8013CC30 00139B70  38 60 00 00 */	li r3, 0
/* 8013CC34 00139B74  4E 80 00 20 */	blr 

.global isNavi__Q24Game10CellObjectFv
isNavi__Q24Game10CellObjectFv:
/* 8013CC38 00139B78  38 60 00 00 */	li r3, 0
/* 8013CC3C 00139B7C  4E 80 00 20 */	blr 

__sinit_creature_cpp:
/* 8013CC40 00139B80  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8013CC44 00139B84  38 00 FF FF */	li r0, -1
/* 8013CC48 00139B88  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8013CC4C 00139B8C  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8013CC50 00139B90  90 0D 92 70 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8013CC54 00139B94  D4 03 00 98 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8013CC58 00139B98  D0 0D 92 74 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8013CC5C 00139B9C  D0 03 00 04 */	stfs f0, 4(r3)
/* 8013CC60 00139BA0  D0 03 00 08 */	stfs f0, 8(r3)
/* 8013CC64 00139BA4  4E 80 00 20 */	blr 
