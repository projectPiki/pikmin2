#ifndef _GAME_FOOTMARK_H
#define _GAME_FOOTMARK_H

#include "types.h"
#include "Vector3.h"

namespace Game {
struct Footmark {
	Vector3f position; // _00
	u32 flag;          // _0C

	Footmark();
};
struct Footmarks {
	Footmark* m_marks; // _00
	u32 _04;           // _04
	u32 _08;           // _08
	int m_count;       // _0C
	u32 _10;           // _10
	u32 _14;           // _14
	u32 _18;           // _18
	u32 _1C;           // _1C

	Footmarks();
	void alloc(int);
};

} // namespace Game

#endif
namespace Game {

/*
 * --INFO--
 * Address:	801B4794
 * Size:	00001C
 */
Footmark::Footmark(void)
{
	position.x = 0.0f;
	position.y = 0.0f;
	position.z = 0.0f;
	flag       = 0;
}

/*
 * --INFO--
 * Address:	801B47B0
 * Size:	00001C
 */
Footmarks::Footmarks(void)
{
	m_marks = nullptr;
	m_count = 0;
	_08     = 0;
	_04     = 0;
	_10     = 0;
}

/*
 * --INFO--
 * Address:	801B47CC
 * Size:	00006C
 */
void Footmarks::alloc(int amt)
{
	m_marks = new Footmark[amt];
	m_count = amt;
	_08     = 0;
	_04     = 0;
}
} // namespace Game
#ifdef UNFINISHED

/*
 * --INFO--
 * Address:	801B4838
 * Size:	000134
 */
void Game::Footmarks::add((Game::Footmark&))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x14(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x1C(r3)
	  lwz       r0, 0x8(r3)
	  cmpwi     r0, 0x2
	  blt-      .loc_0xAC
	  lwz       r7, 0xC(r3)
	  lwz       r5, 0x4(r3)
	  subi      r0, r7, 0x1
	  lwz       r6, 0x0(r3)
	  add       r5, r5, r0
	  lfs       f2, 0x4(r4)
	  divw      r0, r5, r7
	  lfs       f4, 0x8(r4)
	  lfs       f1, 0x0(r4)
	  lfs       f0, -0x4F48(r2)
	  mullw     r0, r0, r7
	  sub       r0, r5, r0
	  rlwinm    r0,r0,4,0,27
	  add       r5, r6, r0
	  lfs       f3, 0x4(r5)
	  lfs       f5, 0x8(r5)
	  fsubs     f3, f3, f2
	  lfs       f2, 0x0(r5)
	  fsubs     f4, f5, f4
	  fsubs     f1, f2, f1
	  fmuls     f2, f3, f3
	  fmuls     f3, f4, f4
	  fmadds    f1, f1, f1, f2
	  fadds     f1, f3, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x9C
	  ble-      .loc_0xA0
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xA0

	.loc_0x9C:
	  fmr       f1, f0

	.loc_0xA0:
	  lfs       f0, -0x4F44(r2)
	  fcmpo     cr0, f1, f0
	  bltlr-

	.loc_0xAC:
	  lwz       r6, -0x6C18(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r5, 0x0(r3)
	  rlwinm    r0,r0,4,0,27
	  lwz       r6, 0x50(r6)
	  lfs       f0, 0x0(r4)
	  add       r5, r5, r0
	  stfs      f0, 0x0(r5)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x4(r5)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x8(r5)
	  lwz       r0, 0xC(r4)
	  stw       r0, 0xC(r5)
	  lwz       r0, 0x4(r3)
	  lwz       r4, 0x0(r3)
	  rlwinm    r0,r0,4,0,27
	  add       r4, r4, r0
	  stw       r6, 0xC(r4)
	  lwz       r5, 0x4(r3)
	  lwz       r4, 0xC(r3)
	  addi      r5, r5, 0x1
	  divw      r0, r5, r4
	  mullw     r0, r0, r4
	  sub       r0, r5, r0
	  stw       r0, 0x4(r3)
	  lwz       r4, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r4, r0
	  bge-      .loc_0x12C
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)

	.loc_0x12C:
	  stw       r6, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B496C
 * Size:	00004C
 */
void Game::Footmarks::get((int))
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0
	  blt-      .loc_0x14
	  lwz       r0, 0x8(r3)
	  cmpw      r4, r0
	  blt-      .loc_0x1C

	.loc_0x14:
	  li        r3, 0
	  blr

	.loc_0x1C:
	  lwz       r6, 0xC(r3)
	  addi      r4, r4, 0x1
	  lwz       r0, 0x4(r3)
	  lwz       r5, 0x0(r3)
	  add       r0, r6, r0
	  sub       r3, r0, r4
	  divw      r0, r3, r6
	  mullw     r0, r0, r6
	  sub       r0, r3, r0
	  rlwinm    r0,r0,4,0,27
	  add       r3, r5, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00014C
 */
void findNearest__Q24Game9FootmarksFR10Vector3<float> i(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B49B8
 * Size:	0000C8
 */
void findNearest2__Q24Game9FootmarksFR10Vector3<float> i(void)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  li        r8, -0x1
	  lfs       f5, -0x4F40(r2)
	  li        r9, 0
	  subic.    r0, r6, 0x1
	  mtctr     r0
	  ble-      .loc_0xA8

	.loc_0x1C:
	  lwz       r0, 0x4(r3)
	  cmpwi     r5, -0x1
	  lwz       r6, 0xC(r3)
	  add       r7, r0, r9
	  divw      r0, r7, r6
	  mullw     r0, r0, r6
	  sub       r10, r7, r0
	  beq-      .loc_0x54
	  rlwinm    r6,r10,4,0,27
	  lwz       r7, 0x0(r3)
	  addi      r0, r6, 0xC
	  lwzx      r0, r7, r0
	  cmpw      r0, r5
	  ble-      .loc_0xA0

	.loc_0x54:
	  lwz       r6, 0x0(r3)
	  rlwinm    r0,r10,4,0,27
	  lfs       f3, 0x4(r4)
	  add       r6, r6, r0
	  lfs       f1, 0x0(r4)
	  lfs       f2, 0x4(r6)
	  lfs       f0, 0x0(r6)
	  fsubs     f4, f3, f2
	  lfs       f3, 0x8(r4)
	  lfs       f2, 0x8(r6)
	  fsubs     f1, f1, f0
	  fmuls     f0, f4, f4
	  fsubs     f2, f3, f2
	  fmadds    f0, f1, f1, f0
	  fmadds    f0, f2, f2, f0
	  fcmpo     cr0, f0, f5
	  bge-      .loc_0xA0
	  fmr       f5, f0
	  mr        r8, r10

	.loc_0xA0:
	  addi      r9, r9, 0x1
	  bdnz+     .loc_0x1C

	.loc_0xA8:
	  cmpwi     r8, -0x1
	  beq-      .loc_0xC0
	  lwz       r3, 0x0(r3)
	  rlwinm    r0,r8,4,0,27
	  add       r3, r3, r0
	  blr

	.loc_0xC0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::Footmarks::draw((Graphics&))
{
	// UNUSED FUNCTION
}
#endif
