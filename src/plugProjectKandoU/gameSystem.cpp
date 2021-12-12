#include "types.h"
#include "Game/GameSystem.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_gameSystem_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047FBB8
    lbl_8047FBB8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x67616D65
        .4byte 0x53797374
        .4byte 0x656D0000
    .global lbl_8047FBD0
    lbl_8047FBD0:
        .4byte 0x44796E50
        .4byte 0x61727469
        .4byte 0x636C6500
    .global lbl_8047FBDC
    lbl_8047FBDC:
        .4byte 0x75736572
        .4byte 0x2F416265
        .4byte 0x2F74696D
        .4byte 0x652F7469
        .4byte 0x6D652E69
        .4byte 0x6E690000
        .4byte 0x44796E61
        .4byte 0x6D696373
        .4byte 0x00000000
        .4byte 0x8373834E
        .4byte 0x837E8393
        .4byte 0x8EF10000
        .4byte 0x8352838A
        .4byte 0x83578387
        .4byte 0x8393836F
        .4byte 0x83628374
        .4byte 0x8340974C
        .4byte 0x8CF80000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B5B50
    lbl_804B5B50:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game18OptimiseController
    __vt__Q24Game18OptimiseController:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game18OptimiseControllerFv
    .global __vt__Q24Game10GameSystem
    __vt__Q24Game10GameSystem:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game10GameSystemFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__29Container<16GenericObjectMgr>FPv"
        .4byte "getNext__33NodeObjectMgr<16GenericObjectMgr>FPv"
        .4byte "getStart__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte "getEnd__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte "get__33NodeObjectMgr<16GenericObjectMgr>FPv"
        .4byte "getAt__29Container<16GenericObjectMgr>Fi"
        .4byte "getTo__29Container<16GenericObjectMgr>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__Q24Game10GameSystemFv"
        .4byte "@28@doEntry__Q24Game10GameSystemFv"
        .4byte "@28@doSetView__Q24Game10GameSystemFi"
        .4byte "@28@doViewCalc__Q24Game10GameSystemFv"
        .4byte "@28@doSimulation__Q24Game10GameSystemFf"
        .4byte "@28@doDirectDraw__Q24Game10GameSystemFR8Graphics"
        .4byte "@28@doSimpleDraw__Q24Game10GameSystemFP8Viewport"
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte doAnimation__Q24Game10GameSystemFv
        .4byte doEntry__Q24Game10GameSystemFv
        .4byte doSetView__Q24Game10GameSystemFi
        .4byte doViewCalc__Q24Game10GameSystemFv
        .4byte doSimulation__Q24Game10GameSystemFf
        .4byte doDirectDraw__Q24Game10GameSystemFR8Graphics
        .4byte "resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte startFrame__Q24Game10GameSystemFv
        .4byte endFrame__Q24Game10GameSystemFv
        .4byte doSimpleDraw__Q24Game10GameSystemFP8Viewport
        .4byte directDraw__Q24Game10GameSystemFR8Graphics
        .4byte startFadeout__Q24Game10GameSystemFf
        .4byte startFadein__Q24Game10GameSystemFf
        .4byte startFadeoutin__Q24Game10GameSystemFf
        .4byte startFadeblack__Q24Game10GameSystemFv
        .4byte startFadewhite__Q24Game10GameSystemFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515A60
    lbl_80515A60:
        .skip 0x4
    .global lbl_80515A64
    lbl_80515A64:
        .skip 0x4
    .global gameSystem__4Game
    gameSystem__4Game:
        .skip 0x4
    .global mInstance__Q24Game18OptimiseController
    mInstance__Q24Game18OptimiseController:
        .skip 0x4
*/

namespace Game {

/*
 * --INFO--
 * Address:	801B4A80
 * Size:	000100
 */
GameSystem::GameSystem(Game::BaseGameSection*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r30
	stw      r28, 0x10(r1)
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__29Container<16GenericObjectMgr>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r5, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__29Container<16GenericObjectMgr>"@l
	lis      r4, "__vt__29ObjectMgr<16GenericObjectMgr>"@ha
	lis      r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@ha
	stw      r0, 0(r30)
	li       r0, 0
	addi     r6, r4, "__vt__29ObjectMgr<16GenericObjectMgr>"@l
	addi     r4, r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@l
	stb      r0, 0x18(r30)
	addi     r0, r5, __vt__16GenericObjectMgr@l
	addi     r28, r29, 0x20
	addi     r5, r6, 0x2c
	stw      r0, 0x1c(r30)
	addi     r0, r4, 0x2c
	mr       r3, r28
	stw      r6, 0(r30)
	stw      r5, 0x1c(r30)
	stw      r4, 0(r29)
	stw      r0, 0x1c(r29)
	bl       __ct__5CNodeFv
	lis      r4, "__vt__31TObjectNode<16GenericObjectMgr>"@ha
	lis      r3, __vt__Q24Game10GameSystem@ha
	addi     r4, r4, "__vt__31TObjectNode<16GenericObjectMgr>"@l
	li       r0, 0
	stw      r4, 0(r28)
	addi     r4, r3, __vt__Q24Game10GameSystem@l
	addi     r3, r4, 0x2c
	stw      r4, 0(r30)
	stw      r3, 0x1c(r30)
	stb      r0, 0x3c(r30)
	stw      r31, 0x58(r30)
	stw      r0, 0x44(r30)
	stw      r0, 0x54(r30)
	bl       globalInstance__13DynamicsParmsFv
	bl       globalInstance__12CellMgrParmsFv
	li       r0, 0
	stb      r0, 0x3c(r30)
	bl       globalInstance__Q24Game18OptimiseControllerFv
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x4d(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B4B80
 * Size:	0000E8
 */
GameSystem::~GameSystem(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_801B4C4C
	lis      r3, __vt__Q24Game10GameSystem@ha
	addi     r3, r3, __vt__Q24Game10GameSystem@l
	stw      r3, 0(r31)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r31)
	bl       deleteInstance__Q24Game18OptimiseControllerFv
	cmplwi   r31, 0
	beq      lbl_801B4C3C
	lis      r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@ha
	addic.   r0, r31, 0x20
	addi     r3, r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@l
	stw      r3, 0(r31)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r31)
	beq      lbl_801B4BF4
	lis      r4, "__vt__31TObjectNode<16GenericObjectMgr>"@ha
	addi     r3, r31, 0x20
	addi     r0, r4, "__vt__31TObjectNode<16GenericObjectMgr>"@l
	li       r4, 0
	stw      r0, 0x20(r31)
	bl       __dt__5CNodeFv

lbl_801B4BF4:
	cmplwi   r31, 0
	beq      lbl_801B4C3C
	lis      r3, "__vt__29ObjectMgr<16GenericObjectMgr>"@ha
	addi     r3, r3, "__vt__29ObjectMgr<16GenericObjectMgr>"@l
	stw      r3, 0(r31)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r31)
	beq      lbl_801B4C3C
	lis      r3, "__vt__29Container<16GenericObjectMgr>"@ha
	addi     r0, r3, "__vt__29Container<16GenericObjectMgr>"@l
	stw      r0, 0(r31)
	beq      lbl_801B4C3C
	lis      r4, __vt__16GenericContainer@ha
	mr       r3, r31
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0(r31)
	bl       __dt__5CNodeFv

lbl_801B4C3C:
	extsh.   r0, r30
	ble      lbl_801B4C4C
	mr       r3, r31
	bl       __dl__FPv

lbl_801B4C4C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B4C68
 * Size:	0000F0
 */
void GameSystem::init(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stb      r0, 0x4d(r3)
	lis      r3, lbl_8047FBD0@ha
	addi     r4, r3, lbl_8047FBD0@l
	stb      r0, 0x3c(r31)
	stw      r0, 0x50(r31)
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x30
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801B4CBC
	li       r4, 0x200
	bl       __ct__Q24Game14DynParticleMgrFi
	mr       r0, r3

lbl_801B4CBC:
	lis      r3, lbl_8047FBD0@ha
	stw      r0, dynParticleMgr__4Game@sda21(r13)
	addi     r4, r3, lbl_8047FBD0@l
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	li       r3, 0x5c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801B4CE8
	bl       __ct__Q24Game11AIConstantsFv
	mr       r0, r3

lbl_801B4CE8:
	stw      r0, _aiConstants__4Game@sda21(r13)
	bl       initialise__Q24Game8StickersFv
	bl       clear__Q24Game8GameStatFv
	li       r0, 0
	li       r3, 0x244
	stb      r0, 0x4a(r31)
	stb      r0, 0x49(r31)
	stb      r0, 0x4b(r31)
	stb      r0, 0x4c(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801B4D20
	bl       __ct__Q24Game7TimeMgrFv
	mr       r0, r3

lbl_801B4D20:
	stw      r0, 0x40(r31)
	lis      r3, lbl_8047FBDC@ha
	addi     r4, r3, lbl_8047FBDC@l
	lwz      r3, 0x40(r31)
	bl       loadSettingFile__Q24Game7TimeMgrFPc
	lwz      r3, 0x40(r31)
	lwz      r0, 0x240(r3)
	ori      r0, r0, 1
	stw      r0, 0x240(r3)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B4D58
 * Size:	000020
 */
s32 GameSystem::calcFrameDist(int)
{
	/*
	lwz      r5, 0x50(r3)
	lis      r0, 0x4000
	subf     r0, r4, r0
	cmpw     r5, r4
	add      r3, r0, r5
	bltlr
	subf     r3, r4, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B4D78
 * Size:	0000DC
 */
void GameSystem::startFrame(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r3, 0x4b(r3)
	cmplwi   r3, 0
	beq      lbl_801B4DA0
	addi     r0, r3, -1
	stb      r0, 0x4b(r31)

lbl_801B4DA0:
	lwz      r3, 0x50(r31)
	lis      r0, 0x4000
	addi     r3, r3, 1
	stw      r3, 0x50(r31)
	lwz      r3, 0x50(r31)
	cmpw     r3, r0
	ble      lbl_801B4DC4
	li       r0, 0
	stw      r0, 0x50(r31)

lbl_801B4DC4:
	lwz      r3, cellMgr__4Game@sda21(r13)
	bl       initFrame__Q24Game11CellPyramidFv
	lwz      r3, collisionUpdateMgr__4Game@sda21(r13)
	bl       update__Q24Game9UpdateMgrFv
	mr       r3, r31
	bl       paused__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B4E40
	lbz      r0, 0x4a(r31)
	cmplwi   r0, 0
	bne      lbl_801B4E40
	lbz      r0, 0x3c(r31)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_801B4E40
	mr       r3, r31
	bl       paused_soft__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B4E40
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801B4E24
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_801B4E40

lbl_801B4E24:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x218(r3)
	cmpwi    r0, 0
	beq      lbl_801B4E40
	lwz      r3, 0x40(r31)
	bl       update__Q24Game7TimeMgrFv

lbl_801B4E40:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B4E54
 * Size:	000018
 */
void GameSystem::endFrame(void)
{
	/*
	lbz      r4, 0x4b(r3)
	cmplwi   r4, 0
	beqlr
	addi     r0, r4, -1
	stb      r0, 0x4b(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B4E6C
 * Size:	000038
 */
void GameSystem::startFadeout(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x58(r3)
	cmplwi   r3, 0
	beq      lbl_801B4E94
	lwz      r12, 0(r3)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl

lbl_801B4E94:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B4EA4
 * Size:	000038
 */
void GameSystem::startFadein(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x58(r3)
	cmplwi   r3, 0
	beq      lbl_801B4ECC
	lwz      r12, 0(r3)
	lwz      r12, 0xc0(r12)
	mtctr    r12
	bctrl

lbl_801B4ECC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B4EDC
 * Size:	000038
 */
void GameSystem::startFadeoutin(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x58(r3)
	cmplwi   r3, 0
	beq      lbl_801B4F04
	lwz      r12, 0(r3)
	lwz      r12, 0xc4(r12)
	mtctr    r12
	bctrl

lbl_801B4F04:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B4F14
 * Size:	000038
 */
void GameSystem::startFadeblack(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x58(r3)
	cmplwi   r3, 0
	beq      lbl_801B4F3C
	lwz      r12, 0(r3)
	lwz      r12, 0xc8(r12)
	mtctr    r12
	bctrl

lbl_801B4F3C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B4F4C
 * Size:	000038
 */
void GameSystem::startFadewhite(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x58(r3)
	cmplwi   r3, 0
	beq      lbl_801B4F74
	lwz      r12, 0(r3)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl

lbl_801B4F74:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B4F84
 * Size:	000008
 */
void GameSystem::setMoviePause(bool, char* a1)
{
	// Generated from stb r4, 0x4D(r3)
	m_isMoviePause = a1;
}

/*
 * --INFO--
 * Address:	801B4F8C
 * Size:	000008
 */
void GameSystem::setFrozen(bool, char* a1)
{
	// Generated from stb r4, 0x4A(r3)
	m_isFrozen = a1;
}

/*
 * --INFO--
 * Address:	801B4F94
 * Size:	00002C
 */
void GameSystem::setPause(bool, char*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	mr       r0, r5
	mr       r5, r6
	mr       r6, r0
	bl       startPause__Q24Game10GameSystemFbiPc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B4FC0
 * Size:	000008
 */
bool GameSystem::paused_soft(void)
{
	return m_isPausedSoft;
	/*
	lbz      r3, 0x4c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B4FC8
 * Size:	000028
 */
bool GameSystem::paused()
{
	/*
	lbz      r0, 0x4b(r3)
	cmplwi   r0, 0
	bne      lbl_801B4FE8
	lbz      r0, 0x4c(r3)
	cmplwi   r0, 0
	beq      lbl_801B4FE8
	li       r3, 1
	blr

lbl_801B4FE8:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B4FF0
 * Size:	000050
 */
void GameSystem::startPause(bool, int, char*)
{
	/*
	clrlwi.  r0, r4, 0x18
	beq      lbl_801B502C
	lbz      r0, 0x4b(r3)
	cmplwi   r0, 0
	bne      lbl_801B5018
	lbz      r0, 0x4c(r3)
	cmplwi   r0, 0
	beq      lbl_801B5018
	li       r0, 1
	b        lbl_801B501C

lbl_801B5018:
	li       r0, 0

lbl_801B501C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801B502C
	li       r3, 1
	blr

lbl_801B502C:
	stb      r5, 0x4b(r3)
	lbz      r0, 0x4c(r3)
	stb      r4, 0x4c(r3)
	mr       r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B5040
 * Size:	00002C
 */
void GameSystem::setDrawBuffer(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x58(r3)
	cmplwi   r3, 0
	beq      lbl_801B505C
	bl       setDrawBuffer__Q24Game15BaseGameSectionFi

lbl_801B505C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B506C
 * Size:	00000C
 */
LightMgr* GameSystem::getLightMgr(void)
{
	/*
	lwz      r3, 0x58(r3)
	lwz      r3, 0x128(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B5078
 * Size:	000274
 */
void GameSystem::doAnimation(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
	stw      r31, 0x1c(r1)
	mr       r31, r3
	cmplwi   r0, 0
	stw      r30, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r31, 0x10(r1)
	bne      lbl_801B50CC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B52B4

lbl_801B50CC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5138

lbl_801B50E4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B52B4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5138:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B50E4
	b        lbl_801B52B4

lbl_801B5158:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x4b(r31)
	mr       r30, r3
	cmplwi   r0, 0
	bne      lbl_801B5190
	lbz      r0, 0x4c(r31)
	cmplwi   r0, 0
	beq      lbl_801B5190
	li       r0, 1
	b        lbl_801B5194

lbl_801B5190:
	li       r0, 0

lbl_801B5194:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801B51BC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B51F8
	b        lbl_801B51E4

lbl_801B51BC:
	lbz      r0, 0x4a(r31)
	cmplwi   r0, 0
	beq      lbl_801B51E4
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B51F8

lbl_801B51E4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801B51F8:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B5224
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B52B4

lbl_801B5224:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5298

lbl_801B5244:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B52B4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5298:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5244

lbl_801B52B4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B5158
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B52EC
 * Size:	0001E4
 */
void GameSystem::doEntry(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B5334
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B54A0

lbl_801B5334:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B53A0

lbl_801B534C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B54A0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B53A0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B534C
	b        lbl_801B54A0

lbl_801B53C0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B5410
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B54A0

lbl_801B5410:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5484

lbl_801B5430:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B54A0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5484:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5430

lbl_801B54A0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B53C0
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B54D0
 * Size:	0001F4
 */
void GameSystem::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B5520
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5690

lbl_801B5520:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B558C

lbl_801B5538:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B5690
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B558C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5538
	b        lbl_801B5690

lbl_801B55AC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B5600
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5690

lbl_801B5600:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5674

lbl_801B5620:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B5690
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5674:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5620

lbl_801B5690:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B55AC
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B56C4
 * Size:	000404
 */
void GameSystem::doViewCalc(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	lbz      r0, sOptDraw__Q24Game15BaseGameSection@sda21(r13)
	cmplwi   r0, 1
	bgt      lbl_801B58B0
	li       r0, 0
	lis      r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
	addi     r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
	stw      r0, 0x24(r1)
	cmplwi   r0, 0
	stw      r4, 0x18(r1)
	stw      r0, 0x1c(r1)
	stw      r3, 0x20(r1)
	bne      lbl_801B5720
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_801B588C

lbl_801B5720:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_801B578C

lbl_801B5738:
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B588C
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)

lbl_801B578C:
	lwz      r12, 0x18(r1)
	addi     r3, r1, 0x18
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5738
	b        lbl_801B588C

lbl_801B57AC:
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	cmplwi   r0, 0
	bne      lbl_801B57FC
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_801B588C

lbl_801B57FC:
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_801B5870

lbl_801B581C:
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B588C
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)

lbl_801B5870:
	lwz      r12, 0x18(r1)
	addi     r3, r1, 0x18
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B581C

lbl_801B588C:
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1c(r1)
	cmplw    r4, r3
	bne      lbl_801B57AC
	b        lbl_801B5AB0

lbl_801B58B0:
	li       r0, 0
	lbz      r5, viewCalcMode__Q28SysShape5Model@sda21(r13)
	lis      r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
	cntlzw   r5, r5
	cmplwi   r0, 0
	stw      r4, 8(r1)
	srwi     r30, r5, 5
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B58F8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5980

lbl_801B58F8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5964

lbl_801B5910:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B5980
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5964:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5910

lbl_801B5980:
	clrlwi   r31, r30, 0x18
	b        lbl_801B5A90

lbl_801B5988:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmplwi   r31, 0
	mr       r30, r3
	bne      lbl_801B59C0
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 1
	beq      lbl_801B59D4

lbl_801B59C0:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_801B59D4:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B5A00
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5A90

lbl_801B5A00:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5A74

lbl_801B5A20:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B5A90
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5A74:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5A20

lbl_801B5A90:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B5988

lbl_801B5AB0:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B5AC8
 * Size:	000284
 */
void GameSystem::doSimulation(float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x34(r1)
	li       r0, 0
	addi     r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
	stfd     f31, 0x28(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r31, 0x24(r1)
	mr       r31, r3
	stw      r30, 0x20(r1)
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r31, 0x10(r1)
	bne      lbl_801B5B24
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5D10

lbl_801B5B24:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5B90

lbl_801B5B3C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B5D10
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5B90:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5B3C
	b        lbl_801B5D10

lbl_801B5BB0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x4b(r31)
	mr       r30, r3
	cmplwi   r0, 0
	bne      lbl_801B5BE8
	lbz      r0, 0x4c(r31)
	cmplwi   r0, 0
	beq      lbl_801B5BE8
	li       r0, 1
	b        lbl_801B5BEC

lbl_801B5BE8:
	li       r0, 0

lbl_801B5BEC:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801B5C14
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B5C54
	b        lbl_801B5C3C

lbl_801B5C14:
	lbz      r0, 0x4a(r31)
	cmplwi   r0, 0
	beq      lbl_801B5C3C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B5C54

lbl_801B5C3C:
	mr       r3, r30
	fmr      f1, f31
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_801B5C54:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B5C80
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5D10

lbl_801B5C80:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5CF4

lbl_801B5CA0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B5D10
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5CF4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5CA0

lbl_801B5D10:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B5BB0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x28(r1)
	lwz      r31, 0x24(r1)
	lwz      r30, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B5D4C
 * Size:	0001F4
 */
void GameSystem::doSimpleDraw(Viewport*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B5D9C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5F0C

lbl_801B5D9C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5E08

lbl_801B5DB4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B5F0C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5E08:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5DB4
	b        lbl_801B5F0C

lbl_801B5E28:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B5E7C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5F0C

lbl_801B5E7C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5EF0

lbl_801B5E9C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B5F0C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5EF0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5E9C

lbl_801B5F0C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B5E28
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B5F40
 * Size:	000004
 */
void GameSystem::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801B5F44
 * Size:	000004
 */
void GameSystem::directDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801B5F48
 * Size:	00006C
 */
void GameSystem::addObjectMgr(GenericObjectMgr*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_801B5F88
	bl       __ct__5CNodeFv
	lis      r3, "__vt__31TObjectNode<16GenericObjectMgr>"@ha
	addi     r0, r3, "__vt__31TObjectNode<16GenericObjectMgr>"@l
	stw      r0, 0(r31)

lbl_801B5F88:
	stw      r30, 0x18(r31)
	mr       r4, r31
	addi     r3, r29, 0x20
	bl       add__5CNodeFP5CNode
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B5FB4
 * Size:	000020
 */
void GameSystem::detachObjectMgr(GenericObjectMgr*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       "delNode__33NodeObjectMgr<16GenericObjectMgr>FP16GenericObjectMgr"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void GameSystem::detachAllMgr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B5FD4
 * Size:	000024
 */
// void
// addObjectMgr_reuse__Q24Game10GameSystemFP31TObjectNode<GenericObjectMgr>(
//    void)
void GameSystem::addObjectMgr_reuse(TObjectNode<GenericObjectMgr>*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x20
	  stw       r0, 0x14(r1)
	  bl        0x25B424
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B5FF8
 * Size:	000058
 */
void GameSystem::detachObjectMgr_reuse(GenericObjectMgr*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, 0x30(r3)
	b        lbl_801B6030

lbl_801B6010:
	lwz      r0, 0x18(r31)
	cmplw    r0, r4
	bne      lbl_801B602C
	mr       r3, r31
	bl       del__5CNodeFv
	mr       r3, r31
	b        lbl_801B603C

lbl_801B602C:
	lwz      r31, 4(r31)

lbl_801B6030:
	cmplwi   r31, 0
	bne      lbl_801B6010
	li       r3, 0

lbl_801B603C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
OptimiseController::OptimiseController(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B6050
 * Size:	000068
 */
OptimiseController::~OptimiseController(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801B609C
	lis      r4, __vt__Q24Game18OptimiseController@ha
	li       r0, 0
	addi     r5, r4, __vt__Q24Game18OptimiseController@l
	li       r4, 0
	stw      r5, 0(r30)
	stw      r0, mInstance__Q24Game18OptimiseController@sda21(r13)
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_801B609C
	mr       r3, r30
	bl       __dl__FPv

lbl_801B609C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B60B8
 * Size:	00010C
 */
void OptimiseController::globalInstance(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8047FBB8@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	addi     r30, r3, lbl_8047FBB8@l
	lwz      r0, mInstance__Q24Game18OptimiseController@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801B61AC
	li       r3, 0x60
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801B61A8
	addi     r0, r4, 0x5c
	mr       r31, r4
	stw      r0, 0x18(r4)
	bl       __ct__11JKRDisposerFv
	li       r0, 0
	lis      r3, __vt__Q24Game18OptimiseController@ha
	stw      r0, 0x1c(r31)
	addi     r4, r30, 0x3c
	cmplwi   r31, 0
	addi     r0, r3, __vt__Q24Game18OptimiseController@l
	stw      r4, 0x20(r31)
	mr       r4, r31
	stw      r0, 0(r31)
	beq      lbl_801B612C
	addi     r4, r31, 0x18

lbl_801B612C:
	lis      r5, 0x63303030@ha
	addi     r3, r31, 0x24
	addi     r6, r30, 0x48
	addi     r5, r5, 0x63303030@l
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r4, "__vt__7Parm<b>"@ha
	li       r3, 1
	addi     r4, r4, "__vt__7Parm<b>"@l
	li       r0, 0
	stw      r4, 0x24(r31)
	cmplwi   r31, 0
	mr       r4, r31
	stb      r3, 0x3c(r31)
	stb      r0, 0x3e(r31)
	stb      r3, 0x3f(r31)
	beq      lbl_801B6170
	addi     r4, r31, 0x18

lbl_801B6170:
	lis      r5, 0x63303031@ha
	addi     r3, r31, 0x40
	addi     r6, r30, 0x54
	addi     r5, r5, 0x63303031@l
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r4, "__vt__7Parm<b>"@ha
	li       r3, 0
	addi     r4, r4, "__vt__7Parm<b>"@l
	li       r0, 1
	stw      r4, 0x40(r31)
	mr       r4, r31
	stb      r3, 0x58(r31)
	stb      r3, 0x5a(r31)
	stb      r0, 0x5b(r31)

lbl_801B61A8:
	stw      r4, mInstance__Q24Game18OptimiseController@sda21(r13)

lbl_801B61AC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B61C4
 * Size:	000048
 */
void OptimiseController::deleteInstance(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, mInstance__Q24Game18OptimiseController@sda21(r13)
	cmplwi   r3, 0
	bne      lbl_801B61F4
	beq      lbl_801B61F4
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801B61F4:
	li       r0, 0
	stw      r0, mInstance__Q24Game18OptimiseController@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801B620C
 * Size:	000044
 */
void NodeObjectMgr<GenericObjectMgr>::delNode(GenericObjectMgr*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x30(r3)
	b        lbl_801B6238

lbl_801B6220:
	lwz      r0, 0x18(r3)
	cmplw    r0, r4
	bne      lbl_801B6234
	bl       del__5CNodeFv
	b        lbl_801B6240

lbl_801B6234:
	lwz      r3, 4(r3)

lbl_801B6238:
	cmplwi   r3, 0
	bne      lbl_801B6220

lbl_801B6240:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B6250
 * Size:	000028
 */
void __sinit_gameSystem_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B5B50@ha
	stw      r0, lbl_80515A60@sda21(r13)
	stfsu    f0, lbl_804B5B50@l(r3)
	stfs     f0, lbl_80515A64@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B6278
 * Size:	000008
 */
// void @28 @Game::GameSystem::doSimpleDraw(Viewport*)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doSimpleDraw__Q24Game10GameSystemFP8Viewport
// 	*/
// }

/*
 * --INFO--
 * Address:	801B6280
 * Size:	000008
 */
// void @28 @Game::GameSystem::doDirectDraw(Graphics&)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doDirectDraw__Q24Game10GameSystemFR8Graphics
// 	*/
// }

/*
 * --INFO--
 * Address:	801B6288
 * Size:	000008
 */
// void @28 @Game::GameSystem::doSimulation(float)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doSimulation__Q24Game10GameSystemFf
// 	*/
// }

/*
 * --INFO--
 * Address:	801B6290
 * Size:	000008
 */
// void @28 @Game::GameSystem::doViewCalc(void)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doViewCalc__Q24Game10GameSystemFv
// 	*/
// }

/*
 * --INFO--
 * Address:	801B6298
 * Size:	000008
 */
// void @28 @Game::GameSystem::doSetView(int)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doSetView__Q24Game10GameSystemFi
// 	*/
// }

/*
 * --INFO--
 * Address:	801B62A0
 * Size:	000008
 */
// void @28 @Game::GameSystem::doEntry(void)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doEntry__Q24Game10GameSystemFv
// 	*/
// }

/*
 * --INFO--
 * Address:	801B62A8
 * Size:	000008
 */
// void @28 @Game::GameSystem::doAnimation(void)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doAnimation__Q24Game10GameSystemFv
// 	*/
// }
