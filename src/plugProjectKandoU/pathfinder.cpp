#include "Game/pathfinder.h"
#include "System.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F400
    lbl_8047F400:
        .asciz "pathfinder"
        .skip 1
    .global lbl_8047F40C
    lbl_8047F40C:
        .asciz "pathfinder.cpp"
        .skip 1
        .asciz "Oh! no!\n"
        .skip 3
        .asciz "no context is available (clients=%d)!\n"
        .skip 1
        .asciz "context state is %d\n"
        .skip 3
        .asciz "no such handle %d\n"
        .skip 1
    .global lbl_8047F47C
    lbl_8047F47C:
        .asciz " no handle ! %d\n"
        .skip 3

    .section .sbss # 0x80514D80 - 0x80516360
    .global testPathfinder__4Game
    testPathfinder__4Game:
        .skip 0x4
    .global routeMgr__Q24Game15PathfindContext
    routeMgr__Q24Game15PathfindContext:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519178
    lbl_80519178:
        .asciz "path"
        .skip 3
    .global lbl_80519180
    lbl_80519180:
        .float 1280000.0
    .global lbl_80519184
    lbl_80519184:
        .float 0.0
*/

namespace Game {

/*
 * --INFO--
 * Address:	801A35EC
 * Size:	000060
 */
Pathfinder::Pathfinder(void)
{
	m_aStarPathfinder   = new AStarPathfinder();
	m_aStarContextCount = 0;
	m_clientCount       = 0;
	m_aStarContexts     = nullptr;
	_00                 = 1;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 4
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801A3618
	bl       __ct__Q24Game15AStarPathfinderFv
	mr       r0, r3

lbl_801A3618:
	stw      r0, 0x10(r31)
	li       r4, 0
	li       r0, 1
	mr       r3, r31
	stw      r4, 8(r31)
	stw      r4, 4(r31)
	stw      r4, 0xc(r31)
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A364C
 * Size:	0000C4
 */
void Pathfinder::create(int contextCount, Game::RouteMgr* routeMgr)
{
	sys->heapStatusStart("pathfinder", nullptr);
	m_clientCount       = 0;
	m_aStarContextCount = contextCount;
	m_aStarContexts     = new AStarContext[contextCount];
	for (int i = 0; i < contextCount; i++) {
		m_aStarContexts[i].init(routeMgr, 0);
	}
	_00 = 1;
	sys->heapStatusEnd("pathfinder");
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, lbl_8047F400@ha
	stw      r0, 0x24(r1)
	addi     r0, r6, lbl_8047F400@l
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	mr       r4, r0
	li       r5, 0
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r0, 0
	stw      r0, 4(r27)
	mulli    r3, r28, 0x64
	stw      r28, 8(r27)
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q24Game12AStarContextFv@ha
	mr       r7, r28
	addi     r4, r4, __ct__Q24Game12AStarContextFv@l
	li       r5, 0
	li       r6, 0x64
	bl       __construct_new_array
	stw      r3, 0xc(r27)
	li       r30, 0
	li       r31, 0
	b        lbl_801A36DC

lbl_801A36C0:
	lwz      r0, 0xc(r27)
	mr       r4, r29
	li       r5, 0
	add      r3, r0, r31
	bl       init__Q24Game12AStarContextFPQ24Game8RouteMgri
	addi     r31, r31, 0x64
	addi     r30, r30, 1

lbl_801A36DC:
	cmpw     r30, r28
	blt      lbl_801A36C0
	li       r0, 1
	lis      r3, lbl_8047F400@ha
	stw      r0, 0(r27)
	addi     r4, r3, lbl_8047F400@l
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A3710
 * Size:	000020
 */
AStarContext::AStarContext(void)
{
	_04                             = 0;
	_00                             = -1;
	_02                             = -1;
	Game::PathfindContext::routeMgr = nullptr;
	_60                             = 0;
	/*
	li       r4, 0
	li       r0, -1
	stb      r4, 4(r3)
	sth      r0, 2(r3)
	sth      r0, 0(r3)
	stw      r4, routeMgr__Q24Game15PathfindContext@sda21(r13)
	stw      r4, 0x60(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A3730
 * Size:	000124
 */
void Pathfinder::update(void)
{
	// sys->m_timers->_start("path", true);
	// u32 contextsRemaining = m_aStarContextCount;

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	addi     r4, r2, lbl_80519178@sda21
	li       r5, 1
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r6, sys@sda21(r13)
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r0, 8(r31)
	li       r6, 0
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801A37B4

lbl_801A3778:
	lwz      r0, 0xc(r31)
	li       r3, 0
	add      r4, r0, r5
	lwz      r0, 0x60(r4)
	cmplwi   r0, 0
	beq      lbl_801A37A0
	lbz      r0, 0x54(r4)
	cmplwi   r0, 2
	bne      lbl_801A37A0
	li       r3, 1

lbl_801A37A0:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A37AC
	addi     r6, r6, 1

lbl_801A37AC:
	addi     r5, r5, 0x64
	bdnz     lbl_801A3778

lbl_801A37B4:
	cmpwi    r6, 0
	ble      lbl_801A3828
	li       r29, 0
	li       r30, 0
	b        lbl_801A381C

lbl_801A37C8:
	lwz      r0, 0xc(r31)
	li       r3, 0
	add      r4, r0, r30
	lwz      r0, 0x60(r4)
	cmplwi   r0, 0
	beq      lbl_801A37F0
	lbz      r0, 0x54(r4)
	cmplwi   r0, 2
	bne      lbl_801A37F0
	li       r3, 1

lbl_801A37F0:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A3814
	lwz      r3, 0x10(r31)
	addi     r6, r4, 0x5c
	li       r5, 1
	bl
search__Q24Game15AStarPathfinderFPQ24Game12AStarContextiPPQ24Game8PathNode lwz
r4, 0xc(r31) addi     r0, r30, 0x54 stbx     r3, r4, r0

lbl_801A3814:
	addi     r30, r30, 0x64
	addi     r29, r29, 1

lbl_801A381C:
	lwz      r0, 8(r31)
	cmpw     r29, r0
	blt      lbl_801A37C8

lbl_801A3828:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519178@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
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
 * Address:	........
 * Size:	000024
 */
void Pathfinder::getFreeContext(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Pathfinder::getContext(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A3854
 * Size:	00014C
 */
int Pathfinder::start(PathfindRequest&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8047F400@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	addi     r4, r5, lbl_8047F400@l
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r28, 0x10(r1)
	lwz      r3, 4(r3)
	lwz      r0, 8(r29)
	cmpw     r3, r0
	blt      lbl_801A38AC
	addi     r3, r4, 0xc
	addi     r5, r4, 0x1c
	li       r4, 0xfa
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0
	b        lbl_801A3980

lbl_801A38AC:
	lwz      r3, 0(r29)
	addi     r0, r3, 1
	mr       r31, r3
	stw      r0, 0(r29)
	lwz      r0, 0(r29)
	cmplwi   r0, 0x4e20
	blt      lbl_801A38D0
	li       r0, 1
	stw      r0, 0(r29)

lbl_801A38D0:
	lwz      r0, 8(r29)
	li       r3, 0
	mr       r5, r3
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801A3914

lbl_801A38E8:
	lwz      r6, 0xc(r29)
	addi     r0, r5, 0x60
	lwzx     r0, r6, r0
	cmplwi   r0, 0
	bne      lbl_801A3908
	mulli    r0, r3, 0x64
	add      r28, r6, r0
	b        lbl_801A3918

lbl_801A3908:
	addi     r5, r5, 0x64
	addi     r3, r3, 1
	bdnz     lbl_801A38E8

lbl_801A3914:
	li       r28, 0

lbl_801A3918:
	cmplwi   r28, 0
	bne      lbl_801A3938
	lwz      r6, 4(r29)
	addi     r3, r4, 0xc
	addi     r5, r4, 0x28
	li       r4, 0x102
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A3938:
	lwz      r5, 4(r29)
	li       r3, 0
	li       r0, 2
	mr       r4, r28
	addi     r5, r5, 1
	stw      r5, 4(r29)
	stw      r3, 0x60(r28)
	stb      r0, 0x54(r28)
	stw      r31, 0x60(r28)
	lha      r0, 0(r30)
	sth      r0, 0(r28)
	lha      r0, 2(r30)
	sth      r0, 2(r28)
	lbz      r0, 4(r30)
	stb      r0, 4(r28)
	lwz      r3, 0x10(r29)
	bl       initsearch__Q24Game15AStarPathfinderFPQ24Game12AStarContext
	mr       r3, r31

lbl_801A3980:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A39A0
 * Size:	0000C0
 */
int Pathfinder::makepath(unsigned long, Game::PathNode**)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r6, lbl_8047F400@ha
	li       r8, 0
	stw      r0, 0x14(r1)
	addi     r7, r6, lbl_8047F400@l
	mr       r6, r8
	lwz      r0, 8(r3)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801A39F8

lbl_801A39CC:
	lwz      r9, 0xc(r3)
	addi     r0, r6, 0x60
	lwzx     r0, r9, r0
	cmplw    r4, r0
	bne      lbl_801A39EC
	mulli    r0, r8, 0x64
	add      r3, r9, r0
	b        lbl_801A39FC

lbl_801A39EC:
	addi     r6, r6, 0x64
	addi     r8, r8, 1
	bdnz     lbl_801A39CC

lbl_801A39F8:
	li       r3, 0

lbl_801A39FC:
	cmplwi   r3, 0
	beq      lbl_801A3A34
	lbz      r6, 0x54(r3)
	cmplwi   r6, 0
	bne      lbl_801A3A1C
	lwz      r4, 0x5c(r3)
	bl       makepath__Q24Game12AStarContextFPQ24Game8PathNodePPQ24Game8PathNode
	b        lbl_801A3A50

lbl_801A3A1C:
	addi     r3, r7, 0xc
	addi     r5, r7, 0x50
	li       r4, 0x122
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_801A3A4C

lbl_801A3A34:
	mr       r6, r4
	addi     r3, r7, 0xc
	addi     r5, r7, 0x68
	li       r4, 0x125
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A3A4C:
	li       r3, 0

lbl_801A3A50:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
int Pathfinder::makepath(unsigned long, short*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A3A60
 * Size:	000070
 */
void Pathfinder::release(unsigned long)
{
	/*
	lwz      r0, 8(r3)
	li       r5, 0
	mr       r6, r5
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801A3AA4

lbl_801A3A78:
	lwz      r7, 0xc(r3)
	addi     r0, r6, 0x60
	lwzx     r0, r7, r0
	cmplw    r4, r0
	bne      lbl_801A3A98
	mulli    r0, r5, 0x64
	add      r6, r7, r0
	b        lbl_801A3AA8

lbl_801A3A98:
	addi     r6, r6, 0x64
	addi     r5, r5, 1
	bdnz     lbl_801A3A78

lbl_801A3AA4:
	li       r6, 0

lbl_801A3AA8:
	cmplwi   r6, 0
	beqlr
	lwz      r5, 4(r3)
	li       r4, 0
	li       r0, 2
	addi     r5, r5, -1
	stw      r5, 4(r3)
	stw      r4, 0x60(r6)
	stb      r0, 0x54(r6)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A3AD0
 * Size:	000098
 */
u8 Pathfinder::check(u32)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	mr       r6, r5
	lwz      r0, 8(r3)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801A3B20

lbl_801A3AF4:
	lwz      r7, 0xc(r3)
	addi     r0, r6, 0x60
	lwzx     r0, r7, r0
	cmplw    r4, r0
	bne      lbl_801A3B14
	mulli    r0, r5, 0x64
	add      r3, r7, r0
	b        lbl_801A3B24

lbl_801A3B14:
	addi     r6, r6, 0x64
	addi     r5, r5, 1
	bdnz     lbl_801A3AF4

lbl_801A3B20:
	li       r3, 0

lbl_801A3B24:
	cmplwi   r3, 0
	beq      lbl_801A3B34
	lbz      r3, 0x54(r3)
	b        lbl_801A3B58

lbl_801A3B34:
	lis      r3, lbl_8047F40C@ha
	lis      r5, lbl_8047F47C@ha
	mr       r6, r4
	li       r4, 0x14c
	addi     r3, r3, lbl_8047F40C@l
	addi     r5, r5, lbl_8047F47C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 3

lbl_801A3B58:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void PathNode::initNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void PathNode::add(Game::PathNode*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void PathNode::del(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void PathNode::dump(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void PathNode::pop(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void PathNode::countLinks(Game::PathNode**)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A3B68
 * Size:	000078
 */
void AStarContext::init(Game::RouteMgr*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_801A3BCC
	stw      r4, routeMgr__Q24Game15PathfindContext@sda21(r13)
	li       r0, 0
	cmpwi    r5, 0
	sth      r0, 0x50(r31)
	bgt      lbl_801A3BA8
	lwz      r3, routeMgr__Q24Game15PathfindContext@sda21(r13)
	lhz      r0, 0x1c(r3)
	sth      r0, 0x52(r31)
	b        lbl_801A3BAC

lbl_801A3BA8:
	sth      r5, 0x52(r31)

lbl_801A3BAC:
	lha      r0, 0x52(r31)
	mulli    r3, r0, 0x24
	bl       __nwa__FUl
	stw      r3, 0x58(r31)
	li       r3, 0
	li       r0, 2
	stw      r3, 0x60(r31)
	stb      r0, 0x54(r31)

lbl_801A3BCC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A3BE0
 * Size:	00000C
 */
AStarPathfinder::AStarPathfinder(void)
{
	/*
	li       r0, 0
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A3BEC
 * Size:	000008
 */
void AStarPathfinder::setContext(AStarContext* context)
{
	// Generated from stw r4, 0x0(r3)
	m_context = context;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void AStarContext::getNode(short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000558
 */
void AStarPathfinder::search(short, short, short*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00057C
 */
void AStarPathfinder::search(Game::AStarContext*, short, short, short*, int, int, int&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A3BF4
 * Size:	00017C
 */
void AStarPathfinder::initsearch(Game::AStarContext*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 0
	stw      r0, 0x14(r1)
	mr       r7, r6
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	lha      r10, 0(r4)
	lha      r5, 2(r4)
	stw      r4, 0(r3)
	lwz      r3, 0(r3)
	stw      r6, 0x20(r3)
	stw      r6, 0x1c(r3)
	stw      r6, 0x24(r3)
	stw      r6, 0x18(r3)
	stw      r6, 0x10(r3)
	stw      r6, 0x14(r3)
	lwz      r3, 0(r31)
	stw      r6, 0x44(r3)
	stw      r6, 0x40(r3)
	stw      r6, 0x48(r3)
	stw      r6, 0x3c(r3)
	stw      r6, 0x34(r3)
	stw      r6, 0x38(r3)
	lwz      r3, 0(r31)
	sth      r6, 0x50(r3)
	lwz      r8, 0(r31)
	lha      r9, 0x50(r8)
	mtctr    r9
	cmpwi    r9, 0
	ble      lbl_801A3CA0

lbl_801A3C74:
	lwz      r3, 0x58(r8)
	addi     r0, r7, 0x20
	lhax     r0, r3, r0
	cmpw     r10, r0
	bne      lbl_801A3C94
	mulli    r0, r6, 0x24
	add      r30, r3, r0
	b        lbl_801A3CF4

lbl_801A3C94:
	addi     r7, r7, 0x24
	addi     r6, r6, 1
	bdnz     lbl_801A3C74

lbl_801A3CA0:
	lha      r0, 0x52(r8)
	cmpw     r9, r0
	bge      lbl_801A3CF0
	lha      r4, 0x50(r8)
	mulli    r6, r9, 0x24
	lwz      r7, 0x58(r8)
	li       r3, 0
	addi     r0, r4, 1
	sth      r0, 0x50(r8)
	add      r30, r7, r6
	li       r0, 2
	stw      r3, 0x18(r30)
	stw      r3, 0x14(r30)
	stw      r3, 0x1c(r30)
	stw      r3, 0x10(r30)
	stw      r3, 8(r30)
	stw      r3, 0xc(r30)
	sth      r10, 0x20(r30)
	stb      r0, 0x22(r30)
	b        lbl_801A3CF4

lbl_801A3CF0:
	li       r30, 0

lbl_801A3CF4:
	sth      r10, 0x20(r30)
	mr       r3, r31
	lfs      f0, lbl_80519184@sda21(r2)
	mr       r4, r10
	stfs     f0, 0(r30)
	bl       estimate__Q24Game15AStarPathfinderFss
	stfs     f1, 4(r30)
	li       r0, 0
	stw      r0, 8(r30)
	stb      r0, 0x22(r30)
	lwz      r3, 0(r31)
	addi     r4, r3, 8
	lwz      r3, 0x24(r3)
	cmplwi   r3, 0
	beq      lbl_801A3D50
	b        lbl_801A3D38

lbl_801A3D34:
	mr       r3, r0

lbl_801A3D38:
	lwz      r0, 0x14(r3)
	cmplwi   r0, 0
	bne      lbl_801A3D34
	stw      r30, 0x14(r3)
	stw      r3, 0x18(r30)
	b        lbl_801A3D54

lbl_801A3D50:
	stw      r30, 0x1c(r4)

lbl_801A3D54:
	stw      r4, 0x10(r30)
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
 * Address:	801A3D70
 * Size:	0004B8
 */
void AStarPathfinder::search(Game::AStarContext*, int, Game::PathNode**)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r24, 0x20(r1)
	mr       r24, r3
	mr       r25, r6
	mr       r28, r5
	stw      r4, 0(r3)
	lha      r29, 2(r4)
	b        lbl_801A41E4

lbl_801A3D98:
	lfs      f2, lbl_80519180@sda21(r2)
	li       r31, 0
	b        lbl_801A3DC4

lbl_801A3DA4:
	lfs      f1, 0(r3)
	lfs      f0, 4(r3)
	fadds    f0, f1, f0
	fcmpo    cr0, f0, f2
	bge      lbl_801A3DC0
	fmr      f2, f0
	mr       r31, r3

lbl_801A3DC0:
	lwz      r3, 0x14(r3)

lbl_801A3DC4:
	cmplwi   r3, 0
	bne      lbl_801A3DA4
	cmplwi   r31, 0
	beq      lbl_801A3E68
	lwz      r5, 0x10(r31)
	cmplwi   r5, 0
	beq      lbl_801A3E68
	lwz      r4, 0x1c(r5)
	li       r3, 0
	b        lbl_801A3E60

lbl_801A3DEC:
	cmplw    r4, r31
	bne      lbl_801A3E58
	cmplwi   r3, 0
	beq      lbl_801A3E28
	lwz      r0, 0x14(r4)
	stw      r0, 0x14(r3)
	lwz      r4, 0x14(r4)
	cmplwi   r4, 0
	beq      lbl_801A3E14
	stw      r3, 0x18(r4)

lbl_801A3E14:
	li       r0, 0
	stw      r0, 0x18(r31)
	stw      r0, 0x14(r31)
	stw      r0, 0x10(r31)
	b        lbl_801A3E68

lbl_801A3E28:
	lwz      r0, 0x14(r4)
	stw      r0, 0x1c(r5)
	lwz      r3, 0x14(r4)
	cmplwi   r3, 0
	beq      lbl_801A3E44
	li       r0, 0
	stw      r0, 0x18(r3)

lbl_801A3E44:
	li       r0, 0
	stw      r0, 0x18(r31)
	stw      r0, 0x14(r31)
	stw      r0, 0x10(r31)
	b        lbl_801A3E68

lbl_801A3E58:
	mr       r3, r4
	lwz      r4, 0x14(r4)

lbl_801A3E60:
	cmplwi   r4, 0
	bne      lbl_801A3DEC

lbl_801A3E68:
	lha      r4, 0x20(r31)
	cmpw     r4, r29
	bne      lbl_801A3E80
	stw      r31, 0(r25)
	li       r3, 0
	b        lbl_801A4214

lbl_801A3E80:
	lwz      r3, routeMgr__Q24Game15PathfindContext@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0(r24)
	mr       r27, r3
	addi     r3, r1, 8
	lbz      r0, 4(r4)
	mr       r4, r27
	rlwinm   r5, r0, 0x19, 0x1f, 0x1f
	bl       __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
	addi     r3, r1, 8
	bl       first__Q24Game16WayPointIteratorFv
	b        lbl_801A3ECC

lbl_801A3EBC:
	addi     r3, r1, 8
	bl       __ml__Q24Game16WayPointIteratorFv
	addi     r3, r1, 8
	bl       next__Q24Game16WayPointIteratorFv

lbl_801A3ECC:
	addi     r3, r1, 8
	bl       isDone__Q24Game16WayPointIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A3EBC
	addi     r3, r1, 8
	bl       first__Q24Game16WayPointIteratorFv
	b        lbl_801A418C

lbl_801A3EE8:
	addi     r3, r1, 8
	bl       __ml__Q24Game16WayPointIteratorFv
	mr       r0, r3
	lwz      r3, routeMgr__Q24Game15PathfindContext@sda21(r13)
	mr       r26, r0
	lwz      r12, 0(r3)
	mr       r4, r26
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r8, 0(r24)
	li       r5, 0
	mr       r6, r5
	extsh    r4, r26
	lha      r9, 0x50(r8)
	mtctr    r9
	cmpwi    r9, 0
	ble      lbl_801A3F5C

lbl_801A3F30:
	lwz      r7, 0x58(r8)
	addi     r0, r6, 0x20
	lhax     r0, r7, r0
	cmpw     r4, r0
	bne      lbl_801A3F50
	mulli    r0, r5, 0x24
	add      r30, r7, r0
	b        lbl_801A3FB0

lbl_801A3F50:
	addi     r6, r6, 0x24
	addi     r5, r5, 1
	bdnz     lbl_801A3F30

lbl_801A3F5C:
	lha      r0, 0x52(r8)
	cmpw     r9, r0
	bge      lbl_801A3FAC
	lha      r5, 0x50(r8)
	mulli    r6, r9, 0x24
	lwz      r7, 0x58(r8)
	li       r4, 0
	addi     r0, r5, 1
	sth      r0, 0x50(r8)
	add      r30, r7, r6
	li       r0, 2
	stw      r4, 0x18(r30)
	stw      r4, 0x14(r30)
	stw      r4, 0x1c(r30)
	stw      r4, 0x10(r30)
	stw      r4, 8(r30)
	stw      r4, 0xc(r30)
	sth      r26, 0x20(r30)
	stb      r0, 0x22(r30)
	b        lbl_801A3FB0

lbl_801A3FAC:
	li       r30, 0

lbl_801A3FB0:
	lwz      r4, 0(r24)
	lbz      r4, 4(r4)
	clrlwi.  r0, r4, 0x1f
	beq      lbl_801A3FCC
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_801A4184

lbl_801A3FCC:
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	bne      lbl_801A3FE0
	lbz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_801A4184

lbl_801A3FE0:
	rlwinm.  r0, r4, 0, 0x19, 0x19
	bne      lbl_801A3FF4
	lbz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x18, 0x18
	bne      lbl_801A4184

lbl_801A3FF4:
	lbz      r0, 0x34(r27)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_801A4014
	rlwinm.  r0, r4, 0, 0x1d, 0x1d
	beq      lbl_801A4014
	lbz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_801A4184

lbl_801A4014:
	rlwinm.  r0, r4, 0, 0x1a, 0x1a
	beq      lbl_801A4028
	lbz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	bne      lbl_801A4184

lbl_801A4028:
	rlwinm.  r0, r4, 0, 0x1b, 0x1b
	beq      lbl_801A403C
	lbz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	bne      lbl_801A4184

lbl_801A403C:
	lha      r4, 0x20(r31)
	mr       r3, r24
	lha      r5, 0x20(r30)
	bl       estimate__Q24Game15AStarPathfinderFss
	lfs      f0, 0(r31)
	lbz      r0, 0x22(r30)
	fadds    f1, f0, f1
	cmplwi   r0, 2
	beq      lbl_801A4070
	lfs      f0, 0(r30)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	beq      lbl_801A4184

lbl_801A4070:
	stw      r31, 8(r30)
	mr       r3, r24
	mr       r5, r29
	stfs     f1, 0(r30)
	lha      r4, 0x20(r30)
	bl       estimate__Q24Game15AStarPathfinderFss
	stfs     f1, 4(r30)
	lbz      r0, 0x22(r30)
	cmplwi   r0, 1
	bne      lbl_801A4134
	lwz      r5, 0x10(r30)
	cmplwi   r5, 0
	beq      lbl_801A412C
	lwz      r4, 0x1c(r5)
	li       r3, 0
	b        lbl_801A4124

lbl_801A40B0:
	cmplw    r4, r30
	bne      lbl_801A411C
	cmplwi   r3, 0
	beq      lbl_801A40EC
	lwz      r0, 0x14(r4)
	stw      r0, 0x14(r3)
	lwz      r4, 0x14(r4)
	cmplwi   r4, 0
	beq      lbl_801A40D8
	stw      r3, 0x18(r4)

lbl_801A40D8:
	li       r0, 0
	stw      r0, 0x18(r30)
	stw      r0, 0x14(r30)
	stw      r0, 0x10(r30)
	b        lbl_801A412C

lbl_801A40EC:
	lwz      r0, 0x14(r4)
	stw      r0, 0x1c(r5)
	lwz      r3, 0x14(r4)
	cmplwi   r3, 0
	beq      lbl_801A4108
	li       r0, 0
	stw      r0, 0x18(r3)

lbl_801A4108:
	li       r0, 0
	stw      r0, 0x18(r30)
	stw      r0, 0x14(r30)
	stw      r0, 0x10(r30)
	b        lbl_801A412C

lbl_801A411C:
	mr       r3, r4
	lwz      r4, 0x14(r4)

lbl_801A4124:
	cmplwi   r4, 0
	bne      lbl_801A40B0

lbl_801A412C:
	li       r0, 2
	stb      r0, 0x22(r30)

lbl_801A4134:
	lbz      r0, 0x22(r30)
	cmplwi   r0, 0
	beq      lbl_801A4184
	li       r0, 0
	stb      r0, 0x22(r30)
	lwz      r3, 0(r24)
	addi     r4, r3, 8
	lwz      r3, 0x24(r3)
	cmplwi   r3, 0
	beq      lbl_801A417C
	b        lbl_801A4164

lbl_801A4160:
	mr       r3, r0

lbl_801A4164:
	lwz      r0, 0x14(r3)
	cmplwi   r0, 0
	bne      lbl_801A4160
	stw      r30, 0x14(r3)
	stw      r3, 0x18(r30)
	b        lbl_801A4180

lbl_801A417C:
	stw      r30, 0x1c(r4)

lbl_801A4180:
	stw      r4, 0x10(r30)

lbl_801A4184:
	addi     r3, r1, 8
	bl       next__Q24Game16WayPointIteratorFv

lbl_801A418C:
	addi     r3, r1, 8
	bl       isDone__Q24Game16WayPointIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A3EE8
	li       r0, 1
	stb      r0, 0x22(r31)
	lwz      r3, 0(r24)
	addi     r4, r3, 0x2c
	lwz      r3, 0x48(r3)
	cmplwi   r3, 0
	beq      lbl_801A41D8
	b        lbl_801A41C0

lbl_801A41BC:
	mr       r3, r0

lbl_801A41C0:
	lwz      r0, 0x14(r3)
	cmplwi   r0, 0
	bne      lbl_801A41BC
	stw      r31, 0x14(r3)
	stw      r3, 0x18(r31)
	b        lbl_801A41DC

lbl_801A41D8:
	stw      r31, 0x1c(r4)

lbl_801A41DC:
	stw      r4, 0x10(r31)
	addi     r28, r28, -1

lbl_801A41E4:
	lwz      r4, 0(r24)
	lwz      r3, 0x24(r4)
	cmplwi   r3, 0
	beq      lbl_801A41FC
	cmpwi    r28, 0
	bgt      lbl_801A3D98

lbl_801A41FC:
	lwz      r0, 0x24(r4)
	cmplwi   r0, 0
	bne      lbl_801A4210
	li       r3, 1
	b        lbl_801A4214

lbl_801A4210:
	li       r3, 2

lbl_801A4214:
	lmw      r24, 0x20(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A4228
 * Size:	0000B4
 */
void AStarPathfinder::estimate(short, short)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r5
	lwz      r3, routeMgr__Q24Game15PathfindContext@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	lwz      r3, routeMgr__Q24Game15PathfindContext@sda21(r13)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r31)
	lfs      f0, 0x50(r3)
	lfs      f3, 0x54(r31)
	fsubs    f4, f1, f0
	lfs      f2, 0x54(r3)
	lfs      f1, 0x4c(r31)
	lfs      f0, 0x4c(r3)
	fsubs    f2, f3, f2
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_80519184@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801A42C0
	ble      lbl_801A42C4
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801A42C4

lbl_801A42C0:
	fmr      f1, f0

lbl_801A42C4:
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
 * Address:	801A42DC
 * Size:	000034
 */
void AStarContext::makepath(PathNode*, PathNode**)
{
	/*
	lwz      r6, 8(r4)
	li       r3, 1
	b        lbl_801A42F8

lbl_801A42E8:
	stw      r4, 0xc(r6)
	mr       r4, r6
	addi     r3, r3, 1
	lwz      r6, 8(r6)

lbl_801A42F8:
	cmplwi   r6, 0
	bne      lbl_801A42E8
	cmplwi   r5, 0
	beqlr
	stw      r4, 0(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void AStarPathfinder::constructPath(Game::PathNode*, short*, int)
{
	// UNUSED FUNCTION
}
} // namespace Game
