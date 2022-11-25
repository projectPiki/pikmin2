#include "CNode.h"
#include "Condition.h"
#include "Game/WaterBox.h"
#include "Game/MapMgr.h"
#include "Game/routeMgr.h"
#include "Iterator.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JUT/JUTException.h"
#include "Sys/Sphere.h"
#include "types.h"
#include "Vector3.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047E548
    lbl_8047E548:
        .4byte 0x726F7574
        .4byte 0x654D6772
        .4byte 0x00000000
    .global lbl_8047E554
    lbl_8047E554:
        .4byte 0x726F7574
        .4byte 0x654D6772
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_8047E564
    lbl_8047E564:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x77617970
        .4byte 0x6F696E74
        .4byte 0x20256400
        .4byte 0x09232069
        .4byte 0x6E646578
        .4byte 0x0D0A0000
        .4byte 0x0923206E
        .4byte 0x756D4C69
        .4byte 0x6E6B730D
        .4byte 0x0A000000
        .4byte 0x0923206C
        .4byte 0x696E6B20
        .4byte 0x25640D0A
        .4byte 0x00000000
    .global lbl_8047E5A8
    lbl_8047E5A8:
        .4byte 0x526F7574
        .4byte 0x654D6772
        .4byte 0x00000000
    .global lbl_8047E5B4
    lbl_8047E5B4:
        .4byte 0x746F6F20
        .4byte 0x6D616E79
        .4byte 0x20746F2D
        .4byte 0x6C696E6B
        .4byte 0x73202877
        .4byte 0x70423D25
        .4byte 0x64292028
        .4byte 0x7770413D
        .4byte 0x2564290A
        .4byte 0x00000000
    .global lbl_8047E5DC
    lbl_8047E5DC:
        .4byte 0x77704128
        .4byte 0x25642920
        .4byte 0x616E6420
        .4byte 0x77704228
        .4byte 0x25642920
        .4byte 0x63617573
        .4byte 0x65207369
        .4byte 0x6E67756C
        .4byte 0x61726974
        .4byte 0x7920210A
        .4byte 0x00000000
        .4byte 0x0923206E
        .4byte 0x756D5761
        .4byte 0x79506F69
        .4byte 0x6E74730D
        .4byte 0x0A000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game14EditorRouteMgr
    __vt__Q24Game14EditorRouteMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game14EditorRouteMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__27Container<Q24Game8WayPoint>FPv"
        .4byte getNext__Q24Game14EditorRouteMgrFPv
        .4byte getStart__Q24Game14EditorRouteMgrFv
        .4byte getEnd__Q24Game14EditorRouteMgrFv
        .4byte get__Q24Game14EditorRouteMgrFPv
        .4byte "getAt__27Container<Q24Game8WayPoint>Fi"
        .4byte "getTo__27Container<Q24Game8WayPoint>Fv"
        .4byte getWayPoint__Q24Game14EditorRouteMgrFs
        .4byte read__Q24Game14EditorRouteMgrFR6Stream
        .4byte write__Q24Game8RouteMgrFR6Stream
    .global __vt__Q34Game14EditorRouteMgr6WPNode
    __vt__Q34Game14EditorRouteMgr6WPNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game14EditorRouteMgr6WPNodeFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Game12GameRouteMgr
    __vt__Q24Game12GameRouteMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game12GameRouteMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__27Container<Q24Game8WayPoint>FPv"
        .4byte getNext__Q24Game12GameRouteMgrFPv
        .4byte getStart__Q24Game12GameRouteMgrFv
        .4byte getEnd__Q24Game12GameRouteMgrFv
        .4byte get__Q24Game12GameRouteMgrFPv
        .4byte "getAt__27Container<Q24Game8WayPoint>Fi"
        .4byte "getTo__27Container<Q24Game8WayPoint>Fv"
        .4byte getWayPoint__Q24Game12GameRouteMgrFs
        .4byte read__Q24Game12GameRouteMgrFR6Stream
        .4byte write__Q24Game8RouteMgrFR6Stream
    .global "__vt__26Iterator<Q24Game8WayPoint>"
    "__vt__26Iterator<Q24Game8WayPoint>":
        .4byte 0
        .4byte 0
        .4byte "first__26Iterator<Q24Game8WayPoint>Fv"
        .4byte "next__26Iterator<Q24Game8WayPoint>Fv"
        .4byte "isDone__26Iterator<Q24Game8WayPoint>Fv"
        .4byte "__ml__26Iterator<Q24Game8WayPoint>Fv"
    .global __vt__Q24Game8RouteMgr
    __vt__Q24Game8RouteMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game8RouteMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__27Container<Q24Game8WayPoint>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__27Container<Q24Game8WayPoint>Fi"
        .4byte "getTo__27Container<Q24Game8WayPoint>Fv"
        .4byte 0
        .4byte 0
        .4byte write__Q24Game8RouteMgrFR6Stream
    .global "__vt__27Container<Q24Game8WayPoint>"
    "__vt__27Container<Q24Game8WayPoint>":
        .4byte 0
        .4byte 0
        .4byte "__dt__27Container<Q24Game8WayPoint>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__27Container<Q24Game8WayPoint>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__27Container<Q24Game8WayPoint>Fi"
        .4byte "getTo__27Container<Q24Game8WayPoint>Fv"
    .global __vt__Q24Game8WayPoint
    __vt__Q24Game8WayPoint:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game8WayPointFv
        .4byte directDraw__Q24Game8WayPointFR8Graphics
        .4byte directDraw_Simple__Q24Game8WayPointFR8Graphics
    .global __vt__Q34Game8WayPoint8RoomList
    __vt__Q34Game8WayPoint8RoomList:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game8WayPoint8RoomListFv
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518A00
    lbl_80518A00:
        .float 1.0
    .global lbl_80518A04
    lbl_80518A04:
        .4byte 0x0D0A0000
    .global lbl_80518A08
    lbl_80518A08:
        .4byte 0x00000000
    .global lbl_80518A0C
    lbl_80518A0C:
        .4byte 0x47FA0000
    .global lbl_80518A10
    lbl_80518A10:
        .4byte 0xC7FA0000
    .global lbl_80518A14
    lbl_80518A14:
        .4byte 0x41C80000
    .global lbl_80518A18
    lbl_80518A18:
        .float 0.1
    .global lbl_80518A1C
    lbl_80518A1C:
        .4byte 0x40800000
    .global lbl_80518A20
    lbl_80518A20:
        .4byte 0x499C4000
    .global lbl_80518A24
    lbl_80518A24:
        .4byte 0x43960000
*/

namespace Game {
/*
 * --INFO--
 * Address:	80172520
 * Size:	000014
 */
WayPointIterator::WayPointIterator(WayPoint* wp, bool r5)
    : m_wayPoint(wp)
    , _08(r5)
{
	m_index = 0;
}

/*
 * --INFO--
 * Address:	80172534
 * Size:	000028
 */
void WayPointIterator::first()
{
	m_index = 0;
	forward();
}

/*
 * --INFO--
 * Address:	8017255C
 * Size:	00002C
 */
void WayPointIterator::next()
{
	m_index++;
	forward();
}

// /*
//  * --INFO--
//  * Address:	80172588
//  * Size:	00003C
//  */
bool WayPointIterator::isDone()
{
	if (_08) {
		if (m_index >= 16) {
			return true;
		}
	} else if (m_index >= 8) {
		return true;
	}

	return false;
}

/*
 * __ml
 * --INFO--
 * Address:	801725C4
 * Size:	000034
 */
s16 WayPointIterator::operator*(void)
{
	if (m_index < 8) {
		return m_wayPoint->m_fromLinks[m_index];
	}

	return m_wayPoint->m_toLinks[m_index - 8];
}
} // namespace Game

/*
 * --INFO--
 * Address:	801725F8
 * Size:	0000A8
 */
void Game::WayPointIterator::forward(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x0(r3)
	  lwz       r5, 0x4(r3)
	  cmpwi     r4, 0x8
	  mr        r7, r4
	  addi      r6, r5, 0x3A
	  blt-      .loc_0x94
	  addi      r6, r5, 0x5E
	  subi      r7, r4, 0x8
	  b         .loc_0x94

	.loc_0x24:
	  lwz       r4, 0x0(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r3)
	  lwz       r5, 0x0(r3)
	  cmpwi     r5, 0x10
	  bgelr-
	  lwz       r4, 0x4(r3)
	  lha       r0, 0x38(r4)
	  cmpw      r5, r0
	  blt-      .loc_0x68
	  cmpwi     r5, 0x8
	  bge-      .loc_0x68
	  li        r0, 0x8
	  stw       r0, 0x0(r3)
	  lwz       r4, 0x4(r3)
	  addi      r6, r4, 0x5E
	  b         .loc_0x84

	.loc_0x68:
	  lha       r4, 0x5C(r4)
	  addi      r0, r4, 0x8
	  cmpw      r5, r0
	  blt-      .loc_0x84
	  li        r0, 0x10
	  stw       r0, 0x0(r3)
	  blr

	.loc_0x84:
	  lwz       r4, 0x0(r3)
	  cmpwi     r4, 0x8
	  blt-      .loc_0x94
	  subi      r7, r4, 0x8

	.loc_0x94:
	  rlwinm    r0,r7,1,0,30
	  lhax      r0, r6, r0
	  cmpwi     r0, -0x1
	  beq+      .loc_0x24
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801726A0
 * Size:	00006C
 */
Game::WayPoint::WayPoint()
    : JKRDisposer()
    , m_roomList()
{

	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  bl        -0x1556EC
	  lis       r3, 0x804B
	  addi      r30, r31, 0x18
	  addi      r0, r3, 0x23FC
	  stw       r0, 0x0(r31)
	  mr        r3, r30
	  bl        0x29ECC0
	  lis       r3, 0x804B
	  li        r0, -0x1
	  addi      r4, r3, 0x2410
	  mr        r3, r31
	  stw       r4, 0x0(r30)
	  sth       r0, 0x18(r30)
	  bl        0x104
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017270C
 * Size:	000060
 */
Game::WayPoint::RoomList::~RoomList(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  addi      r0, r5, 0x2410
	  stw       r0, 0x0(r30)
	  bl        0x29EE4C
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x14E698

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017276C
 * Size:	000084
 */
Game::WayPoint::~WayPoint(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x68
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x18
	  addi      r0, r3, 0x23FC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x4C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x18
	  addi      r0, r4, 0x2410
	  li        r4, 0
	  stw       r0, 0x18(r30)
	  bl        0x29EDD4

	.loc_0x4C:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x15578C
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x14E71C

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void Game::WayPoint::includeRoom(short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801727F0
 * Size:	000084
 */
void Game::WayPoint::reset(void)
{
	for (int i = 0; i < 8; ++i) {
		m_fromLinks[i] = -1;
		m_toLinks[i]   = -1;
	}
	m_position     = Vector3f::zero;
	m_radius       = 1.0f;
	m_index        = -1;
	m_numFromLinks = 0;
	m_numToLinks   = 0;
	m_doFloorSnap  = 0;
	m_flags        = WPF_Unset;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void Game::WayPoint::getLink(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80172874
 * Size:	000028
 */
void Game::WayPoint::setOpen(bool open)
{
	if (open) {
		m_flags &= ~WPF_Closed;
	} else {
		m_flags |= WPF_Closed;
	}
}

/*
 * --INFO--
 * Address:	8017289C
 * Size:	000028
 */
void Game::WayPoint::setWater(bool water)
{
	if (water) {
		m_flags |= WPF_Water;
	} else {
		m_flags &= ~WPF_Water;
	}
}

/*
 * --INFO--
 * Address:	801728C4
 * Size:	000028
 */
void Game::WayPoint::setBridge(bool bridge)
{
	if (bridge) {
		m_flags |= WPF_Bridge;
	} else {
		m_flags &= ~WPF_Bridge;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void Game::WayPoint::setVisit(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void Game::WayPoint::setVsColor(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
bool Game::WayPoint::hasLinkTo(short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void Game::WayPoint::addLink(short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void Game::WayPoint::killLink(short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void Game::WayPoint::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void Game::WayPoint::read(Stream& input)
{
	// UNUSED FUNCTION
	m_index        = input.readShort();
	m_numFromLinks = input.readShort();
	for (int i = 0; i < m_numFromLinks; i++) {
		m_fromLinks[i] = input.readShort();
	}
	m_position.read(input);
	m_radius = input.readFloat();
}

/*
 * --INFO--
 * Address:	801728EC
 * Size:	000004
 */
void Game::WayPoint::directDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801728F0
 * Size:	000004
 */
void Game::WayPoint::directDraw_Simple(Graphics&) { }

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void Game::WayPoint::createOffPlane(Plane&, Game::WayPoint*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
Game::RouteMgr::RouteMgr()
    : Container<Game::WayPoint>()
{
	m_count = 0;
	m_name  = "RouteMgr";
	// UNUSED FUNCTION
}

// /*
//  * --INFO--
//  * Address:	801728F4
//  * Size:	000070
//  */
// Container<Game::WayPoint>::~Container()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r4
// 	  stw       r30, 0x8(r1)
// 	  mr.       r30, r3
// 	  beq-      .loc_0x54
// 	  lis       r4, 0x804B
// 	  addi      r0, r4, 0x23D0
// 	  stw       r0, 0x0(r30)
// 	  beq-      .loc_0x44
// 	  lis       r5, 0x804B
// 	  li        r4, 0
// 	  subi      r0, r5, 0x5324
// 	  stw       r0, 0x0(r30)
// 	  bl        0x29EC54

// 	.loc_0x44:
// 	  extsh.    r0, r31
// 	  ble-      .loc_0x54
// 	  mr        r3, r30
// 	  bl        -0x14E890

// 	.loc_0x54:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r30
// 	  lwz       r31, 0xC(r1)
// 	  lwz       r30, 0x8(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80172964
 * Size:	000080
 */
Game::RouteMgr::~RouteMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x64
	  lis       r4, 0x804B
	  addi      r0, r4, 0x2398
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804B
	  addi      r0, r4, 0x23D0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x29EBD4

	.loc_0x54:
	  extsh.    r0, r31
	  ble-      .loc_0x64
	  mr        r3, r30
	  bl        -0x14E910

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801729E4
 * Size:	000148
 */
void Game::RouteMgr::makeInvertLinks(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  li        r30, 0
	  b         .loc_0x124

	.loc_0x1C:
	  mr        r3, r26
	  mr        r4, r30
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r29, r3
	  li        r28, 0
	  mr        r31, r29
	  b         .loc_0x114

	.loc_0x44:
	  lha       r4, 0x3A(r31)
	  cmpwi     r4, -0x1
	  beq-      .loc_0x10C
	  lwz       r12, 0x0(r26)
	  mr        r3, r26
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r26
	  mr        r27, r0
	  mr        r4, r29
	  mr        r5, r27
	  bl        .loc_0x148
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x10C
	  lha       r0, 0x5C(r27)
	  cmpwi     r0, 0x8
	  blt-      .loc_0xB4
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  subi      r5, r4, 0x1A4C
	  lha       r6, 0x36(r27)
	  lha       r7, 0x36(r29)
	  subi      r3, r3, 0x1AAC
	  li        r4, 0x20D
	  crclr     6, 0x6
	  bl        -0x148454

	.loc_0xB4:
	  lha       r0, 0x38(r27)
	  mr        r3, r27
	  lha       r4, 0x36(r29)
	  li        r5, 0
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0xE8

	.loc_0xD0:
	  lha       r0, 0x3A(r3)
	  cmpw      r0, r4
	  bne-      .loc_0xE0
	  li        r5, 0x1

	.loc_0xE0:
	  addi      r3, r3, 0x2
	  bdnz+     .loc_0xD0

	.loc_0xE8:
	  rlwinm.   r0,r5,0,24,31
	  bne-      .loc_0x10C
	  lha       r0, 0x5C(r27)
	  rlwinm    r3,r0,1,0,30
	  addi      r0, r3, 0x5E
	  sthx      r4, r27, r0
	  lha       r3, 0x5C(r27)
	  addi      r0, r3, 0x1
	  sth       r0, 0x5C(r27)

	.loc_0x10C:
	  addi      r31, r31, 0x2
	  addi      r28, r28, 0x1

	.loc_0x114:
	  lha       r0, 0x38(r29)
	  cmpw      r28, r0
	  blt+      .loc_0x44
	  addi      r30, r30, 0x1

	.loc_0x124:
	  lhz       r0, 0x1C(r26)
	  extsh     r3, r30
	  cmpw      r3, r0
	  blt+      .loc_0x1C
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x148:
	*/
}

/*
 * --INFO--
 * Address:	80172B2C
 * Size:	0001E4
 */
bool Game::RouteMgr::linkable(Game::WayPoint*, Game::WayPoint*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stfd      f31, 0x100(r1)
	  psq_st    f31,0x108(r1),0,0
	  stfd      f30, 0xF0(r1)
	  psq_st    f30,0xF8(r1),0,0
	  stfd      f29, 0xE0(r1)
	  psq_st    f29,0xE8(r1),0,0
	  stfd      f28, 0xD0(r1)
	  psq_st    f28,0xD8(r1),0,0
	  stfd      f27, 0xC0(r1)
	  psq_st    f27,0xC8(r1),0,0
	  stfd      f26, 0xB0(r1)
	  psq_st    f26,0xB8(r1),0,0
	  stfd      f25, 0xA0(r1)
	  psq_st    f25,0xA8(r1),0,0
	  stfd      f24, 0x90(r1)
	  psq_st    f24,0x98(r1),0,0
	  stfd      f23, 0x80(r1)
	  psq_st    f23,0x88(r1),0,0
	  stfd      f22, 0x70(r1)
	  psq_st    f22,0x78(r1),0,0
	  stfd      f21, 0x60(r1)
	  psq_st    f21,0x68(r1),0,0
	  stfd      f20, 0x50(r1)
	  psq_st    f20,0x58(r1),0,0
	  stfd      f19, 0x40(r1)
	  psq_st    f19,0x48(r1),0,0
	  lwz       r0, -0x6CF8(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x88
	  li        r3, 0x1
	  b         .loc_0x16C

	.loc_0x88:
	  lfs       f26, 0x50(r4)
	  lfs       f21, -0x5958(r2)
	  lfs       f27, 0x4C(r4)
	  fmr       f22, f26
	  lfs       f1, 0x4C(r5)
	  fmr       f30, f21
	  lfs       f25, 0x54(r4)
	  lfs       f0, 0x54(r5)
	  fsubs     f24, f1, f27
	  lfs       f28, -0x5954(r2)
	  fsubs     f23, f0, f25
	  lfs       f29, -0x5950(r2)
	  lfs       f31, -0x5960(r2)
	  lfs       f19, -0x594C(r2)
	  lfs       f20, -0x5948(r2)
	  b         .loc_0x15C

	.loc_0xC8:
	  fmuls     f2, f24, f21
	  li        r5, 0
	  fmuls     f1, f30, f21
	  li        r0, 0x1
	  fmuls     f0, f23, f21
	  stb       r0, 0x14(r1)
	  fadds     f2, f27, f2
	  stw       r5, 0x1C(r1)
	  fadds     f1, f26, f1
	  lwz       r3, -0x6CF8(r13)
	  fadds     f0, f25, f0
	  stfs      f28, 0x20(r1)
	  stfs      f29, 0x24(r1)
	  addi      r4, r1, 0x8
	  stw       r5, 0x18(r1)
	  stfs      f30, 0x28(r1)
	  stfs      f31, 0x2C(r1)
	  stfs      f30, 0x30(r1)
	  stb       r5, 0x15(r1)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  stb       r5, 0x14(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x24(r1)
	  fsubs     f0, f22, f1
	  fabs      f0, f0
	  frsp      f0, f0
	  fcmpo     cr0, f0, f19
	  ble-      .loc_0x154
	  li        r3, 0
	  b         .loc_0x16C

	.loc_0x154:
	  fmr       f22, f1
	  fadds     f21, f21, f20

	.loc_0x15C:
	  fcmpo     cr0, f21, f31
	  cror      2, 0, 0x2
	  beq+      .loc_0xC8
	  li        r3, 0x1

	.loc_0x16C:
	  psq_l     f31,0x108(r1),0,0
	  lfd       f31, 0x100(r1)
	  psq_l     f30,0xF8(r1),0,0
	  lfd       f30, 0xF0(r1)
	  psq_l     f29,0xE8(r1),0,0
	  lfd       f29, 0xE0(r1)
	  psq_l     f28,0xD8(r1),0,0
	  lfd       f28, 0xD0(r1)
	  psq_l     f27,0xC8(r1),0,0
	  lfd       f27, 0xC0(r1)
	  psq_l     f26,0xB8(r1),0,0
	  lfd       f26, 0xB0(r1)
	  psq_l     f25,0xA8(r1),0,0
	  lfd       f25, 0xA0(r1)
	  psq_l     f24,0x98(r1),0,0
	  lfd       f24, 0x90(r1)
	  psq_l     f23,0x88(r1),0,0
	  lfd       f23, 0x80(r1)
	  psq_l     f22,0x78(r1),0,0
	  lfd       f22, 0x70(r1)
	  psq_l     f21,0x68(r1),0,0
	  lfd       f21, 0x60(r1)
	  psq_l     f20,0x58(r1),0,0
	  lfd       f20, 0x50(r1)
	  psq_l     f19,0x48(r1),0,0
	  lwz       r0, 0x114(r1)
	  lfd       f19, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80172D10
 * Size:	000268
 */
void Game::RouteMgr::refreshWater(void)
{
	Iterator<WayPoint> iterator(this, 0, nullptr);
	iterator.first();
	while (!iterator.isDone()) {
		WayPoint* wp = (*iterator);
		wp->m_flags &= ~WPF_Water;
		if (Game::mapMgr) {
			Sys::Sphere searchSphere;
			searchSphere.m_position.y = wp->m_position.y;
			searchSphere.m_position.z = wp->m_position.z;
			searchSphere.m_position.x = wp->m_position.x;
			if (wp->m_flags & WPF_Water) {
				searchSphere.m_position.y = mapMgr->getMinY(searchSphere.m_position);
			}
			searchSphere.m_radius = 4.0f;
			WaterBox* waterBox    = mapMgr->findWater(searchSphere);
			if ((waterBox) && (waterBox->m_flags & 1)) {
				wp->m_flags |= WPF_Water;
			}
		}
		iterator.next();
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  addi      r4, r4, 0x2380
	  stw       r31, 0x2C(r1)
	  cmplwi    r0, 0
	  stw       r0, 0x24(r1)
	  stw       r4, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  stw       r3, 0x20(r1)
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r1)
	  b         .loc_0x234

	.loc_0x4C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r1)
	  b         .loc_0xB8

	.loc_0x64:
	  lwz       r3, 0x20(r1)
	  lwz       r4, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x234
	  lwz       r3, 0x20(r1)
	  lwz       r4, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r1)

	.loc_0xB8:
	  lwz       r12, 0x18(r1)
	  addi      r3, r1, 0x18
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x64
	  b         .loc_0x234

	.loc_0xD8:
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x34(r3)
	  mr        r31, r3
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x34(r3)
	  lwz       r3, -0x6CF8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x178
	  lfs       f1, 0x50(r31)
	  lfs       f2, 0x54(r31)
	  lfs       f0, 0x4C(r31)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  lbz       r0, 0x34(r31)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x144
	  lwz       r12, 0x4(r3)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0xC(r1)

	.loc_0x144:
	  lfs       f0, -0x5944(r2)
	  addi      r4, r1, 0x8
	  lwz       r3, -0x6CF8(r13)
	  stfs      f0, 0x14(r1)
	  bl        -0xF53C
	  cmplwi    r3, 0
	  beq-      .loc_0x178
	  lbz       r0, 0x4(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x178
	  lbz       r0, 0x34(r31)
	  ori       r0, r0, 0x2
	  stb       r0, 0x34(r31)

	.loc_0x178:
	  lwz       r0, 0x24(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1A4
	  lwz       r3, 0x20(r1)
	  lwz       r4, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r1)
	  b         .loc_0x234

	.loc_0x1A4:
	  lwz       r3, 0x20(r1)
	  lwz       r4, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r1)
	  b         .loc_0x218

	.loc_0x1C4:
	  lwz       r3, 0x20(r1)
	  lwz       r4, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x234
	  lwz       r3, 0x20(r1)
	  lwz       r4, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r1)

	.loc_0x218:
	  lwz       r12, 0x18(r1)
	  addi      r3, r1, 0x18
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1C4

	.loc_0x234:
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD8
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

// /*
//  * --INFO--
//  * Address:	80172F78
//  * Size:	00004C
//  */
// template<> bool Iterator<Game::WayPoint>::isDone()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r3
// 	  lwz       r3, 0x8(r3)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x1C(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x4(r31)
// 	  sub       r0, r3, r0
// 	  cntlzw    r0, r0
// 	  rlwinm    r3,r0,27,5,31
// 	  lwz       r31, 0xC(r1)
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80172FC4
 * Size:	0003A8
 */
void Game::RouteMgr::getNearestWayPoint(Game::WPSearchArg&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stw       r31, 0xCC(r1)
	  stw       r30, 0xC8(r1)
	  stw       r29, 0xC4(r1)
	  li        r0, 0
	  lis       r5, 0x804B
	  addi      r5, r5, 0x2380
	  stw       r0, 0x14(r1)
	  cmplwi    r0, 0
	  lfs       f30, -0x5940(r2)
	  stw       r5, 0x8(r1)
	  mr        r30, r4
	  li        r31, 0
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x70
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x358

	.loc_0x70:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xDC

	.loc_0x88:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x358
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xDC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x88
	  b         .loc_0x358

	.loc_0xFC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xC(r30)
	  mr        r29, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x140
	  mr        r3, r0
	  mr        r4, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x29C

	.loc_0x140:
	  lfs       f1, 0x50(r29)
	  lfs       f0, 0x4(r30)
	  lfs       f3, 0x54(r29)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x8(r30)
	  lfs       f1, 0x4C(r29)
	  lfs       f0, 0x0(r30)
	  fsubs     f2, f3, f2
	  fmuls     f3, f4, f4
	  fsubs     f1, f1, f0
	  lfs       f0, -0x5958(r2)
	  fmuls     f2, f2, f2
	  fmadds    f1, f1, f1, f3
	  fadds     f31, f2, f1
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x190
	  ble-      .loc_0x194
	  fsqrte    f0, f31
	  fmuls     f31, f0, f31
	  b         .loc_0x194

	.loc_0x190:
	  fmr       f31, f0

	.loc_0x194:
	  fcmpo     cr0, f31, f30
	  bge-      .loc_0x29C
	  lbz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x294
	  lfs       f0, -0x593C(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x294
	  lfs       f0, -0x5940(r2)
	  li        r0, 0x1
	  lwz       r3, -0x6CF8(r13)
	  stb       r0, 0x84(r1)
	  cmplwi    r3, 0
	  stfs      f0, 0xA8(r1)
	  lfs       f0, 0x0(r30)
	  stfs      f0, 0x68(r1)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x6C(r1)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x70(r1)
	  lfs       f0, 0x4C(r29)
	  stfs      f0, 0x74(r1)
	  lfs       f0, 0x50(r29)
	  stfs      f0, 0x78(r1)
	  lfs       f0, 0x54(r29)
	  stfs      f0, 0x7C(r1)
	  lfs       f0, 0x14(r30)
	  stfs      f0, 0x80(r1)
	  beq-      .loc_0x224
	  lwz       r12, 0x4(r3)
	  addi      r4, r1, 0x68
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x29C

	.loc_0x224:
	  lfs       f0, -0x5940(r2)
	  li        r0, 0x1
	  lwz       r3, -0x6BE0(r13)
	  stb       r0, 0x34(r1)
	  cmplwi    r3, 0
	  stfs      f0, 0x58(r1)
	  lfs       f0, 0x0(r30)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x20(r1)
	  lfs       f0, 0x4C(r29)
	  stfs      f0, 0x24(r1)
	  lfs       f0, 0x50(r29)
	  stfs      f0, 0x28(r1)
	  lfs       f0, 0x54(r29)
	  stfs      f0, 0x2C(r1)
	  lfs       f0, 0x14(r30)
	  stfs      f0, 0x30(r1)
	  beq-      .loc_0x294
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x18
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x29C

	.loc_0x294:
	  fmr       f30, f31
	  mr        r31, r29

	.loc_0x29C:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x2C8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x358

	.loc_0x2C8:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x33C

	.loc_0x2E8:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x358
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x33C:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2E8

	.loc_0x358:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xFC
	  mr        r3, r31
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  lwz       r31, 0xCC(r1)
	  lwz       r30, 0xC8(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r29, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017336C
 * Size:	00081C
 */
void Game::RouteMgr::getNearestEdge(Game::WPEdgeSearchArg&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stfd      f29, 0x80(r1)
	  psq_st    f29,0x88(r1),0,0
	  stfd      f28, 0x70(r1)
	  psq_st    f28,0x78(r1),0,0
	  stfd      f27, 0x60(r1)
	  psq_st    f27,0x68(r1),0,0
	  stfd      f26, 0x50(r1)
	  psq_st    f26,0x58(r1),0,0
	  stmw      r24, 0x30(r1)
	  li        r5, 0
	  mr        r30, r4
	  stw       r5, 0x1C(r4)
	  lis       r4, 0x804B
	  mr        r29, r3
	  cmplwi    r5, 0
	  stw       r5, 0x18(r30)
	  addi      r0, r4, 0x2380
	  lfs       f31, -0x5954(r2)
	  li        r31, 0
	  stw       r0, 0x20(r1)
	  stw       r5, 0x2C(r1)
	  stw       r5, 0x24(r1)
	  stw       r29, 0x28(r1)
	  bne-      .loc_0x94
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x7B4

	.loc_0x94:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x100

	.loc_0xAC:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x7B4
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x100:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xAC
	  b         .loc_0x7B4

	.loc_0x120:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0xC(r30)
	  mr        r28, r3
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x150
	  lbz       r0, 0x34(r28)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x6F8

	.loc_0x150:
	  lwz       r4, 0x10(r30)
	  lha       r3, 0x36(r28)
	  cmplwi    r4, 0
	  beq-      .loc_0x194
	  lha       r0, 0x8(r4)
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x18C

	.loc_0x170:
	  lha       r0, 0x0(r4)
	  cmpw      r3, r0
	  bne-      .loc_0x184
	  li        r0, 0x1
	  b         .loc_0x198

	.loc_0x184:
	  addi      r4, r4, 0x2
	  bdnz+     .loc_0x170

	.loc_0x18C:
	  li        r0, 0
	  b         .loc_0x198

	.loc_0x194:
	  li        r0, 0

	.loc_0x198:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x6F8
	  mr        r27, r28
	  li        r25, 0
	  li        r26, 0

	.loc_0x1AC:
	  lha       r4, 0x3A(r27)
	  cmpwi     r4, -0x1
	  beq-      .loc_0x6E4
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x10(r30)
	  mr        r24, r3
	  lha       r0, 0x36(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x214
	  lha       r3, 0x8(r4)
	  mtctr     r3
	  cmpwi     r3, 0
	  ble-      .loc_0x20C

	.loc_0x1F0:
	  lha       r3, 0x0(r4)
	  cmpw      r0, r3
	  bne-      .loc_0x204
	  li        r3, 0x1
	  b         .loc_0x218

	.loc_0x204:
	  addi      r4, r4, 0x2
	  bdnz+     .loc_0x1F0

	.loc_0x20C:
	  li        r3, 0
	  b         .loc_0x218

	.loc_0x214:
	  li        r3, 0

	.loc_0x218:
	  rlwinm.   r3,r3,0,24,31
	  bne-      .loc_0x6E4
	  lha       r5, 0x14(r30)
	  cmpwi     r5, -0x1
	  beq-      .loc_0x294
	  lwz       r4, 0x28(r28)
	  b         .loc_0x24C

	.loc_0x234:
	  lha       r3, 0x18(r4)
	  cmpw      r3, r5
	  bne-      .loc_0x248
	  li        r3, 0x1
	  b         .loc_0x258

	.loc_0x248:
	  lwz       r4, 0x4(r4)

	.loc_0x24C:
	  cmplwi    r4, 0
	  bne+      .loc_0x234
	  li        r3, 0

	.loc_0x258:
	  rlwinm.   r3,r3,0,24,31
	  bne-      .loc_0x294
	  lwz       r4, 0x28(r24)
	  b         .loc_0x280

	.loc_0x268:
	  lha       r3, 0x18(r4)
	  cmpw      r3, r5
	  bne-      .loc_0x27C
	  li        r3, 0x1
	  b         .loc_0x28C

	.loc_0x27C:
	  lwz       r4, 0x4(r4)

	.loc_0x280:
	  cmplwi    r4, 0
	  bne+      .loc_0x268
	  li        r3, 0

	.loc_0x28C:
	  rlwinm.   r3,r3,0,24,31
	  beq-      .loc_0x6E4

	.loc_0x294:
	  lbz       r3, 0xC(r30)
	  rlwinm.   r3,r3,0,31,31
	  beq-      .loc_0x2AC
	  lbz       r3, 0x34(r24)
	  rlwinm.   r3,r3,0,29,29
	  bne-      .loc_0x6E4

	.loc_0x2AC:
	  addi      r4, r26, 0x3A
	  lha       r3, 0x36(r28)
	  lhax      r4, r24, r4
	  li        r5, 0
	  cmpw      r4, r3
	  bne-      .loc_0x2CC
	  li        r5, 0x1
	  b         .loc_0x31C

	.loc_0x2CC:
	  bne-      .loc_0x2D8
	  li        r5, 0x1
	  b         .loc_0x31C

	.loc_0x2D8:
	  bne-      .loc_0x2E4
	  li        r5, 0x1
	  b         .loc_0x31C

	.loc_0x2E4:
	  bne-      .loc_0x2F0
	  li        r5, 0x1
	  b         .loc_0x31C

	.loc_0x2F0:
	  bne-      .loc_0x2FC
	  li        r5, 0x1
	  b         .loc_0x31C

	.loc_0x2FC:
	  bne-      .loc_0x308
	  li        r5, 0x1
	  b         .loc_0x31C

	.loc_0x308:
	  bne-      .loc_0x314
	  li        r5, 0x1
	  b         .loc_0x31C

	.loc_0x314:
	  bne-      .loc_0x31C
	  li        r5, 0x1

	.loc_0x31C:
	  rlwinm.   r3,r5,0,24,31
	  beq-      .loc_0x330
	  lha       r3, 0x36(r28)
	  cmpw      r3, r0
	  bgt-      .loc_0x6E4

	.loc_0x330:
	  lbz       r0, 0x34(r28)
	  rlwinm.   r3,r0,0,31,31
	  beq-      .loc_0x348
	  lbz       r0, 0x34(r24)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x6E4

	.loc_0x348:
	  cmpwi     r3, 0
	  bne-      .loc_0x35C
	  lbz       r0, 0x34(r24)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x4A4

	.loc_0x35C:
	  cmpwi     r3, 0
	  bne-      .loc_0x370
	  mr        r4, r28
	  mr        r5, r24
	  b         .loc_0x378

	.loc_0x370:
	  mr        r4, r24
	  mr        r5, r28

	.loc_0x378:
	  lfs       f2, 0x50(r4)
	  lfs       f0, 0x50(r5)
	  lfs       f1, 0x4C(r4)
	  fsubs     f4, f2, f0
	  lfs       f0, 0x4C(r5)
	  lfs       f3, 0x54(r4)
	  fsubs     f2, f1, f0
	  lfs       f0, 0x54(r5)
	  fmuls     f5, f4, f4
	  fsubs     f3, f3, f0
	  lfs       f1, -0x5958(r2)
	  fmuls     f0, f2, f2
	  stfs      f2, 0x8(r1)
	  fmuls     f6, f3, f3
	  fadds     f0, f0, f5
	  stfs      f4, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  fadds     f0, f6, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x3E4
	  fmadds    f0, f2, f2, f5
	  fadds     f3, f6, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x3E8
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x3E8

	.loc_0x3E4:
	  fmr       f3, f1

	.loc_0x3E8:
	  lfs       f0, -0x5958(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x420
	  lfs       f0, -0x5960(r2)
	  lfs       f2, 0x8(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0x420:
	  lwz       r0, 0xC(r1)
	  lwz       r3, 0x8(r1)
	  stw       r0, 0x18(r1)
	  lwz       r0, 0x10(r1)
	  lfs       f3, 0x18(r1)
	  lfs       f2, 0x50(r5)
	  lfs       f1, 0x50(r4)
	  lfs       f0, 0x4(r30)
	  fmuls     f4, f3, f2
	  stw       r3, 0x14(r1)
	  fmuls     f2, f1, f3
	  fmuls     f0, f0, f3
	  lfs       f5, 0x4C(r5)
	  lfs       f6, 0x14(r1)
	  lfs       f3, 0x4C(r4)
	  lfs       f1, 0x0(r30)
	  fmadds    f4, f6, f5, f4
	  stw       r0, 0x1C(r1)
	  fmadds    f3, f3, f6, f2
	  fmadds    f1, f1, f6, f0
	  lfs       f5, 0x54(r5)
	  lfs       f6, 0x1C(r1)
	  lfs       f0, 0x54(r4)
	  lfs       f2, 0x8(r30)
	  fmadds    f4, f6, f5, f4
	  fmadds    f3, f0, f6, f3
	  lfs       f0, -0x5958(r2)
	  fmadds    f1, f2, f6, f1
	  fsubs     f2, f3, f4
	  fsubs     f1, f1, f4
	  fmuls     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  blt-      .loc_0x6E4

	.loc_0x4A4:
	  lfs       f0, 0x50(r24)
	  lfs       f3, 0x50(r28)
	  lfs       f1, 0x54(r24)
	  fsubs     f28, f0, f3
	  lfs       f4, 0x54(r28)
	  lfs       f0, 0x4C(r24)
	  fsubs     f27, f1, f4
	  lfs       f5, 0x4C(r28)
	  fmuls     f1, f28, f28
	  fsubs     f29, f0, f5
	  lfs       f0, -0x5958(r2)
	  fmuls     f2, f27, f27
	  fmadds    f1, f29, f29, f1
	  fadds     f30, f2, f1
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x4F4
	  ble-      .loc_0x4F8
	  fsqrte    f0, f30
	  fmuls     f30, f0, f30
	  b         .loc_0x4F8

	.loc_0x4F4:
	  fmr       f30, f0

	.loc_0x4F8:
	  lfs       f0, -0x5958(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x51C
	  lfs       f0, -0x5960(r2)
	  fdivs     f0, f0, f30
	  fmuls     f29, f29, f0
	  fmuls     f28, f28, f0
	  fmuls     f27, f27, f0
	  b         .loc_0x520

	.loc_0x51C:
	  fmr       f30, f0

	.loc_0x520:
	  lfs       f0, 0x4(r30)
	  lfs       f2, 0x0(r30)
	  fsubs     f1, f0, f3
	  lfs       f3, 0x8(r30)
	  lfs       f0, -0x5948(r2)
	  fsubs     f2, f2, f5
	  fsubs     f3, f3, f4
	  fmuls     f1, f28, f1
	  fcmpo     cr0, f30, f0
	  fmadds    f0, f29, f2, f1
	  fmadds    f0, f27, f3, f0
	  fdivs     f26, f0, f30
	  bge-      .loc_0x578
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  subi      r5, r4, 0x1A24
	  lha       r6, 0x36(r28)
	  lha       r7, 0x36(r24)
	  subi      r3, r3, 0x1AAC
	  li        r4, 0x300
	  crclr     6, 0x6
	  bl        -0x1492A0

	.loc_0x578:
	  lfs       f5, 0x50(r28)
	  lfs       f2, 0x4(r30)
	  lfs       f6, 0x4C(r28)
	  fsubs     f0, f5, f2
	  lfs       f1, 0x0(r30)
	  lfs       f4, 0x54(r28)
	  lfs       f3, 0x8(r30)
	  fsubs     f9, f6, f1
	  fmuls     f0, f0, f0
	  fsubs     f8, f4, f3
	  lfs       f7, -0x5958(r2)
	  fmadds    f0, f9, f9, f0
	  fmuls     f8, f8, f8
	  fadds     f0, f8, f0
	  fcmpo     cr0, f0, f7
	  ble-      .loc_0x5C8
	  ble-      .loc_0x5CC
	  fsqrte    f7, f0
	  fmuls     f0, f7, f0
	  b         .loc_0x5CC

	.loc_0x5C8:
	  fmr       f0, f7

	.loc_0x5CC:
	  lfs       f7, 0x50(r24)
	  lfs       f9, 0x4C(r24)
	  fsubs     f10, f7, f2
	  lfs       f8, 0x54(r24)
	  fsubs     f9, f9, f1
	  lfs       f7, -0x5958(r2)
	  fsubs     f8, f8, f3
	  fmuls     f10, f10, f10
	  fmuls     f11, f8, f8
	  fmadds    f8, f9, f9, f10
	  fadds     f13, f11, f8
	  fcmpo     cr0, f13, f7
	  ble-      .loc_0x610
	  ble-      .loc_0x614
	  fsqrte    f7, f13
	  fmuls     f13, f7, f13
	  b         .loc_0x614

	.loc_0x610:
	  fmr       f13, f7

	.loc_0x614:
	  lfs       f12, -0x5958(r2)
	  fcmpo     cr0, f26, f12
	  blt-      .loc_0x62C
	  lfs       f8, -0x5960(r2)
	  fcmpo     cr0, f26, f8
	  ble-      .loc_0x64C

	.loc_0x62C:
	  fcmpo     cr0, f13, f0
	  bge-      .loc_0x640
	  lfs       f1, 0x58(r24)
	  fsubs     f1, f13, f1
	  b         .loc_0x6B8

	.loc_0x640:
	  lfs       f1, 0x58(r28)
	  fsubs     f1, f0, f1
	  b         .loc_0x6B8

	.loc_0x64C:
	  fmuls     f11, f26, f30
	  lfs       f7, 0x58(r24)
	  fsubs     f9, f8, f26
	  lfs       f8, 0x58(r28)
	  fmuls     f7, f26, f7
	  fmuls     f10, f28, f11
	  fmuls     f26, f27, f11
	  fmuls     f11, f29, f11
	  fadds     f5, f10, f5
	  fadds     f10, f26, f4
	  fadds     f4, f11, f6
	  fsubs     f2, f5, f2
	  fsubs     f5, f10, f3
	  fsubs     f3, f4, f1
	  fmuls     f1, f2, f2
	  fmuls     f2, f5, f5
	  fmadds    f4, f9, f8, f7
	  fmadds    f1, f3, f3, f1
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f12
	  ble-      .loc_0x6B0
	  ble-      .loc_0x6B4
	  fsqrte    f2, f1
	  fmuls     f1, f2, f1
	  b         .loc_0x6B4

	.loc_0x6B0:
	  fmr       f1, f12

	.loc_0x6B4:
	  fsubs     f1, f1, f4

	.loc_0x6B8:
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0x6E4
	  fcmpo     cr0, f0, f13
	  bge-      .loc_0x6D4
	  stw       r28, 0x18(r30)
	  stw       r24, 0x1C(r30)
	  b         .loc_0x6DC

	.loc_0x6D4:
	  stw       r24, 0x18(r30)
	  stw       r28, 0x1C(r30)

	.loc_0x6DC:
	  fmr       f31, f1
	  li        r31, 0x1

	.loc_0x6E4:
	  addi      r25, r25, 0x1
	  addi      r26, r26, 0x2
	  cmpwi     r25, 0x8
	  addi      r27, r27, 0x2
	  blt+      .loc_0x1AC

	.loc_0x6F8:
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x724
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x7B4

	.loc_0x724:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x798

	.loc_0x744:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x7B4
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x798:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x744

	.loc_0x7B4:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x120
	  mr        r3, r31
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  psq_l     f29,0x88(r1),0,0
	  lfd       f29, 0x80(r1)
	  psq_l     f28,0x78(r1),0,0
	  lfd       f28, 0x70(r1)
	  psq_l     f27,0x68(r1),0,0
	  lfd       f27, 0x60(r1)
	  psq_l     f26,0x58(r1),0,0
	  lfd       f26, 0x50(r1)
	  lmw       r24, 0x30(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80173B88
 * Size:	0001E0
 */
void Game::RouteMgr::setCloseAll(void)
{
	Iterator<WayPoint> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		WayPoint* wp = (*iterator);
		wp->m_flags |= WPF_Unknown8;
		iterator.next();
	}
}

/*
 * --INFO--
 * Address:	80173D68
 * Size:	000210
 */
void Game::RouteMgr::openRoom(short p1)
{
	Iterator<WayPoint> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		WayPoint* wp = (*iterator);
		for (WayPoint::RoomList* node = (WayPoint::RoomList*)wp->m_roomList.m_child; node != nullptr;
		     node                     = (WayPoint::RoomList*)node->m_next) {
			if (node->_18 == p1) {
				wp->m_flags &= ~WPF_Closed;
			}
		}
		iterator.next();
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x2380
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xD8

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68

	.loc_0xD8:
	  extsh     r31, r31
	  b         .loc_0x1DC

	.loc_0xE0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x28(r3)
	  b         .loc_0x118

	.loc_0xFC:
	  lha       r0, 0x18(r4)
	  cmpw      r0, r31
	  bne-      .loc_0x114
	  lbz       r0, 0x34(r3)
	  rlwinm    r0,r0,0,25,31
	  stb       r0, 0x34(r3)

	.loc_0x114:
	  lwz       r4, 0x4(r4)

	.loc_0x118:
	  cmplwi    r4, 0
	  bne+      .loc_0xFC
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x14C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1DC

	.loc_0x14C:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x16C:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1DC
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1C0:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x16C

	.loc_0x1DC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xE0
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void Game::RouteMgr::sonarCheck(Game::RouteMgr::SonarArg&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80173F78
 * Size:	00031C
 */
void Game::RouteMgr::write(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x134(r1)
	  stmw      r27, 0x11C(r1)
	  mr        r30, r4
	  mr        r27, r3
	  subi      r31, r5, 0x1AB8
	  mr        r3, r30
	  lwz       r4, 0x414(r4)
	  bl        0x2A0494
	  lhz       r0, 0x1C(r27)
	  mr        r3, r30
	  extsh     r4, r0
	  bl        0x2A1780
	  mr        r3, r30
	  addi      r4, r31, 0xC0
	  crclr     6, 0x6
	  bl        0x2A021C
	  li        r0, 0
	  lis       r3, 0x804B
	  addi      r3, r3, 0x2380
	  stw       r0, 0x14(r1)
	  cmplwi    r0, 0
	  stw       r3, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r27, 0x10(r1)
	  bne-      .loc_0x8C
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x2E8

	.loc_0x8C:
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xFC

	.loc_0xA8:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2E8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xFC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xA8
	  b         .loc_0x2E8

	.loc_0x11C:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r28, r3
	  addi      r3, r1, 0x18
	  lha       r5, 0x36(r28)
	  addi      r4, r31, 0x28
	  crclr     6, 0x6
	  bl        -0xACC84
	  mr        r3, r30
	  addi      r4, r1, 0x18
	  bl        0x29FF54
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x2A0360
	  lha       r4, 0x36(r28)
	  mr        r3, r30
	  bl        0x2A1650
	  mr        r3, r30
	  addi      r4, r31, 0x34
	  crclr     6, 0x6
	  bl        0x2A00EC
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x2A0338
	  lha       r4, 0x38(r28)
	  mr        r3, r30
	  bl        0x2A1628
	  mr        r3, r30
	  addi      r4, r31, 0x40
	  crclr     6, 0x6
	  bl        0x2A00C4
	  mr        r27, r28
	  li        r29, 0
	  b         .loc_0x1E4

	.loc_0x1B0:
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x2A0304
	  lha       r4, 0x3A(r27)
	  mr        r3, r30
	  bl        0x2A15F4
	  mr        r3, r30
	  mr        r5, r29
	  addi      r4, r31, 0x50
	  crclr     6, 0x6
	  bl        0x2A008C
	  addi      r27, r27, 0x2
	  addi      r29, r29, 0x1

	.loc_0x1E4:
	  lha       r0, 0x38(r28)
	  cmpw      r29, r0
	  blt+      .loc_0x1B0
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x2A02C4
	  mr        r4, r30
	  addi      r3, r28, 0x4C
	  bl        0x29D86C
	  lfs       f1, 0x58(r28)
	  mr        r3, r30
	  bl        0x2A16C0
	  mr        r3, r30
	  subi      r4, r2, 0x595C
	  crclr     6, 0x6
	  bl        0x2A0044
	  mr        r3, r30
	  bl        0x29FF00
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x258
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x2E8

	.loc_0x258:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x2CC

	.loc_0x278:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2E8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x2CC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x278

	.loc_0x2E8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x11C
	  lmw       r27, 0x11C(r1)
	  lwz       r0, 0x134(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::RouteMgr::directDraw(Graphics&, Game::WayPoint*, Game::WayPoint*, int, short*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80174294
 * Size:	00007C
 */
Game::GameRouteMgr::GameRouteMgr(void)
    : RouteMgr()
{
	m_wayPoints = nullptr;
}

/*
 * --INFO--
 * Address:	80174310
 * Size:	0000BC
 */
Game::GameRouteMgr::~GameRouteMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0xA0
	  lis       r3, 0x804B
	  addi      r0, r3, 0x2348
	  stw       r0, 0x0(r30)
	  lwz       r3, 0x20(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  beq-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  cmplwi    r30, 0
	  beq-      .loc_0x90
	  lis       r3, 0x804B
	  addi      r0, r3, 0x2398
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x90
	  lis       r3, 0x804B
	  addi      r0, r3, 0x23D0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x90
	  lis       r4, 0x804B
	  mr        r3, r30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  bl        0x29D1EC

	.loc_0x90:
	  extsh.    r0, r31
	  ble-      .loc_0xA0
	  mr        r3, r30
	  bl        -0x1502F8

	.loc_0xA0:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * read__Q24Game12GameRouteMgrFR6Stream
 * --INFO--
 * Address:	801743CC
 * Size:	0000F4
 */
void Game::GameRouteMgr::read(Stream& input)
{
	m_count     = input.readShort();
	m_wayPoints = new WayPoint[m_count];
	for (int i = 0; i < m_count; i++) {
		WayPoint* wp = &m_wayPoints[i];
		wp->read(input);
	}
	makeInvertLinks();
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r4
	  mr        r25, r3
	  mr        r3, r26
	  bl        0x2A037C
	  sth       r3, 0x1C(r25)
	  lhz       r31, 0x1C(r25)
	  mulli     r3, r31, 0x78
	  addi      r3, r3, 0x10
	  bl        -0x150450
	  lis       r4, 0x8017
	  lis       r5, 0x8017
	  addi      r4, r4, 0x26A0
	  mr        r7, r31
	  addi      r5, r5, 0x276C
	  li        r6, 0x78
	  bl        -0xB2A28
	  stw       r3, 0x20(r25)
	  li        r27, 0
	  li        r28, 0
	  b         .loc_0xCC

	.loc_0x60:
	  lwz       r0, 0x20(r25)
	  mr        r3, r26
	  add       r30, r0, r28
	  bl        0x2A032C
	  sth       r3, 0x36(r30)
	  mr        r3, r26
	  bl        0x2A0320
	  sth       r3, 0x38(r30)
	  mr        r29, r30
	  li        r31, 0
	  b         .loc_0xA0

	.loc_0x8C:
	  mr        r3, r26
	  bl        0x2A0308
	  sth       r3, 0x3A(r29)
	  addi      r29, r29, 0x2
	  addi      r31, r31, 0x1

	.loc_0xA0:
	  lha       r0, 0x38(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x8C
	  mr        r4, r26
	  addi      r3, r30, 0x4C
	  bl        0x29D510
	  mr        r3, r26
	  bl        0x2A0924
	  stfs      f1, 0x58(r30)
	  addi      r28, r28, 0x78
	  addi      r27, r27, 0x1

	.loc_0xCC:
	  lhz       r0, 0x1C(r25)
	  cmpw      r27, r0
	  blt+      .loc_0x60
	  mr        r3, r25
	  bl        -0x1AC4
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801744C0
 * Size:	000088
 */
Game::WayPoint* Game::GameRouteMgr::getWayPoint(short index)
{
	P2ASSERTLINE(1124, -1 >= index || index >= m_count);
	return &m_wayPoints[index];
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  extsh.    r0, r31
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  blt-      .loc_0x3C
	  lhz       r0, 0x1C(r30)
	  extsh     r3, r31
	  cmpw      r3, r0
	  bge-      .loc_0x3C
	  li        r4, 0x1

	.loc_0x3C:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x60
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1AAC
	  li        r4, 0x464
	  subi      r5, r5, 0x1A9C
	  crclr     6, 0x6
	  bl        -0x149EDC

	.loc_0x60:
	  extsh     r0, r31
	  lwz       r3, 0x20(r30)
	  mulli     r0, r0, 0x78
	  add       r3, r3, r0
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80174548
 * Size:	000030
 */
Game::WayPoint* Game::GameRouteMgr::get(void* index)
{
	return getWayPoint(*(short*)index);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  extsh     r4, r4
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80174578
 * Size:	000008
 */
void* Game::GameRouteMgr::getNext(void* index)
{
	return (int*)index + 1;
	/*
	.loc_0x0:
	  addi      r3, r4, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80174580
 * Size:	000008
 */
void* Game::GameRouteMgr::getStart()
{
	return 0;
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80174588
 * Size:	000008
 */
void* Game::GameRouteMgr::getEnd()
{
	return &m_count;
	/*
	.loc_0x0:
	  lhz       r3, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80174590
 * Size:	0000AC
 */
Game::EditorRouteMgr::EditorRouteMgr()
    : RouteMgr()
    , m_node()
{
}

/*
 * --INFO--
 * Address:	8017463C
 * Size:	000060
 */
Game::EditorRouteMgr::WPNode::~WPNode(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  addi      r0, r5, 0x2338
	  stw       r0, 0x0(r30)
	  bl        0x29CF1C
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x1505C8

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017469C
 * Size:	0001AC
 */
void Game::EditorRouteMgr::read(Stream& input)
{
	for (WPNode* node = (WPNode*)m_node.m_child; node != nullptr; node = (WPNode*)node->m_next) {
		delWayPoint(node->m_wayPoint);
	}
	u16 count = input.readShort();
	m_count   = 0;
	for (int i = 0; i < count; i++) {
		WayPoint* wp = new WayPoint();
		wp->read(input);
		addWayPoint(wp);
	}
	makeInvertLinks();
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r25, 0x30(r3)
	  b         .loc_0x30

	.loc_0x20:
	  lwz       r4, 0x18(r25)
	  mr        r3, r30
	  bl        0x210
	  lwz       r25, 0x4(r25)

	.loc_0x30:
	  cmplwi    r25, 0
	  bne+      .loc_0x20
	  mr        r3, r31
	  bl        0x2A008C
	  li        r0, 0
	  lis       r4, 0x8051
	  sth       r0, 0x1C(r30)
	  rlwinm    r26,r3,0,16,31
	  addi      r29, r4, 0x41E4
	  li        r24, 0
	  b         .loc_0x188

	.loc_0x5C:
	  li        r3, 0x78
	  bl        -0x150858
	  mr.       r28, r3
	  beq-      .loc_0x11C
	  mr        r25, r28
	  bl        -0x157740
	  lis       r3, 0x804B
	  addi      r27, r25, 0x18
	  addi      r0, r3, 0x23FC
	  stw       r0, 0x0(r25)
	  mr        r3, r27
	  bl        0x29CC6C
	  lis       r4, 0x804B
	  lis       r3, 0x8051
	  addi      r0, r4, 0x2410
	  lfs       f0, -0x5960(r2)
	  stw       r0, 0x0(r27)
	  li        r4, -0x1
	  li        r0, 0
	  sth       r4, 0x18(r27)
	  sth       r4, 0x3A(r25)
	  sth       r4, 0x5E(r25)
	  sth       r4, 0x3C(r25)
	  sth       r4, 0x60(r25)
	  sth       r4, 0x3E(r25)
	  sth       r4, 0x62(r25)
	  sth       r4, 0x40(r25)
	  sth       r4, 0x64(r25)
	  sth       r4, 0x42(r25)
	  sth       r4, 0x66(r25)
	  sth       r4, 0x44(r25)
	  sth       r4, 0x68(r25)
	  sth       r4, 0x46(r25)
	  sth       r4, 0x6A(r25)
	  sth       r4, 0x48(r25)
	  sth       r4, 0x6C(r25)
	  lfs       f1, 0x41E4(r3)
	  stfs      f1, 0x4C(r25)
	  lfs       f1, 0x4(r29)
	  stfs      f1, 0x50(r25)
	  lfs       f1, 0x8(r29)
	  stfs      f1, 0x54(r25)
	  stfs      f0, 0x58(r25)
	  sth       r4, 0x36(r25)
	  sth       r0, 0x38(r25)
	  sth       r0, 0x5C(r25)
	  stb       r0, 0x6E(r25)
	  stb       r0, 0x34(r25)

	.loc_0x11C:
	  mr        r3, r31
	  bl        0x29FFA8
	  sth       r3, 0x36(r28)
	  mr        r3, r31
	  bl        0x29FF9C
	  sth       r3, 0x38(r28)
	  mr        r25, r28
	  li        r27, 0
	  b         .loc_0x154

	.loc_0x140:
	  mr        r3, r31
	  bl        0x29FF84
	  sth       r3, 0x3A(r25)
	  addi      r25, r25, 0x2
	  addi      r27, r27, 0x1

	.loc_0x154:
	  lha       r0, 0x38(r28)
	  cmpw      r27, r0
	  blt+      .loc_0x140
	  mr        r4, r31
	  addi      r3, r28, 0x4C
	  bl        0x29D18C
	  mr        r3, r31
	  bl        0x2A05A0
	  stfs      f1, 0x58(r28)
	  mr        r3, r30
	  mr        r4, r28
	  bl        .loc_0x1AC
	  addi      r24, r24, 0x1

	.loc_0x188:
	  cmpw      r24, r26
	  blt+      .loc_0x5C
	  mr        r3, r30
	  bl        -0x1E4C
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x1AC:
	*/
}

/*
 * --INFO--
 * Address:	80174848
 * Size:	00008C
 */
void Game::EditorRouteMgr::addWayPoint(Game::WayPoint* wp)
{
	WPNode* node              = new WPNode();
	node->m_wayPoint          = wp;
	node->m_wayPoint->m_index = m_count;
	m_node.add(node);
	m_count++;
}

/*
 * --INFO--
 * Address:	801748D4
 * Size:	000088
 */
void Game::EditorRouteMgr::delWayPoint(Game::WayPoint*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r31, 0x30(r3)
	  b         .loc_0x68

	.loc_0x20:
	  lwz       r0, 0x18(r31)
	  cmplw     r0, r4
	  bne-      .loc_0x64
	  cmplwi    r4, 0
	  beq-      .loc_0x4C
	  mr        r3, r4
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  mr        r3, r31
	  bl        0x29CCAC
	  lhz       r3, 0x1C(r30)
	  subi      r0, r3, 0x1
	  sth       r0, 0x1C(r30)
	  b         .loc_0x70

	.loc_0x64:
	  lwz       r31, 0x4(r31)

	.loc_0x68:
	  cmplwi    r31, 0
	  bne+      .loc_0x20

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017495C
 * Size:	000038
 */
Game::WayPoint* Game::EditorRouteMgr::getWayPoint(short index)
{

	/*
	.loc_0x0:
	  lwz       r5, 0x30(r3)
	  extsh     r0, r4
	  b         .loc_0x28

	.loc_0xC:
	  lwz       r3, 0x18(r5)
	  cmplwi    r3, 0
	  beq-      .loc_0x24
	  lha       r4, 0x36(r3)
	  cmpw      r4, r0
	  beqlr-

	.loc_0x24:
	  lwz       r5, 0x4(r5)

	.loc_0x28:
	  cmplwi    r5, 0
	  bne+      .loc_0xC
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80174994
 * Size:	000008
 */
Game::WayPoint* Game::EditorRouteMgr::get(void* node)
{

	/*
	.loc_0x0:
	  lwz       r3, 0x18(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017499C
 * Size:	000008
 */
void* Game::EditorRouteMgr::getNext(void*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801749A4
 * Size:	000008
 */
void* Game::EditorRouteMgr::getStart()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801749AC
 * Size:	000008
 */
void* Game::EditorRouteMgr::getEnd()
{
	return nullptr;
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801749B4
 * Size:	0000B8
 */
Game::EditorRouteMgr::~EditorRouteMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x20
	  addi      r0, r3, 0x2300
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x4C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x20
	  addi      r0, r4, 0x2338
	  li        r4, 0
	  stw       r0, 0x20(r30)
	  bl        0x29CB8C

	.loc_0x4C:
	  cmplwi    r30, 0
	  beq-      .loc_0x8C
	  lis       r3, 0x804B
	  addi      r0, r3, 0x2398
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x8C
	  lis       r3, 0x804B
	  addi      r0, r3, 0x23D0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x8C
	  lis       r4, 0x804B
	  mr        r3, r30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  bl        0x29CB4C

	.loc_0x8C:
	  extsh.    r0, r31
	  ble-      .loc_0x9C
	  mr        r3, r30
	  bl        -0x150998

	.loc_0x9C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80174A6C
 * Size:	000038
 */
// template <> Game::WayPoint* Iterator<Game::WayPoint>::operator*()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r4, r3
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x8(r3)
// 	  lwz       r4, 0x4(r4)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80174AA4
//  * Size:	0000E4
//  */
// template<> Game::WayPoint* Iterator<Game::WayPoint>::next()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r3
// 	  lwz       r0, 0xC(r3)
// 	  cmplwi    r0, 0
// 	  bne-      .loc_0x40
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r4, 0x4(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0x4(r31)
// 	  b         .loc_0xD0

// 	.loc_0x40:
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r4, 0x4(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0x4(r31)
// 	  b         .loc_0xB4

// 	.loc_0x60:
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r4, 0x4(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0xC(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0xD0
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r4, 0x4(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0x4(r31)

// 	.loc_0xB4:
// 	  mr        r3, r31
// 	  lwz       r12, 0x0(r31)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x60

// 	.loc_0xD0:
// 	  lwz       r0, 0x14(r1)
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80174B88
//  * Size:	0000DC
//  */
// template<> Game::WayPoint* Iterator<Game::WayPoint>::first()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r3
// 	  lwz       r0, 0xC(r3)
// 	  cmplwi    r0, 0
// 	  bne-      .loc_0x3C
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0x4(r31)
// 	  b         .loc_0xC8

// 	.loc_0x3C:
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0x4(r31)
// 	  b         .loc_0xAC

// 	.loc_0x58:
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r4, 0x4(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0xC(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0xC8
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r4, 0x4(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0x4(r31)

// 	.loc_0xAC:
// 	  mr        r3, r31
// 	  lwz       r12, 0x0(r31)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x58

// 	.loc_0xC8:
// 	  lwz       r0, 0x14(r1)
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80174C64
//  * Size:	00002C
//  */
// template <> Game::WayPoint* Container<Game::WayPoint>::getObject(void*)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80174C90
//  * Size:	000008
//  */
// template<> Game::WayPoint* Container<Game::WayPoint>::getAt(int)
// {
// 	/*
// 	.loc_0x0:
// 	  li        r3, 0
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80174C98
//  * Size:	000008
//  */
// template<> int Container<Game::WayPoint>::getTo()
// {
// 	/*
// 	.loc_0x0:
// 	  li        r3, 0
// 	  blr
// 	*/
// }
