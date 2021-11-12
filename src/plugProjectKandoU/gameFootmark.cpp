
/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519418
    lbl_80519418:
        .4byte 0x00000000
    .global lbl_8051941C
    lbl_8051941C:
        .4byte 0x41A00000
    .global lbl_80519420
    lbl_80519420:
        .4byte 0x499C4000
        .4byte 0x00000000
*/
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
	Vector3f _14;      // _14

	Footmarks();
	void alloc(int);
	void add(Footmark& mark);
};

} // namespace Game

#endif

#include "Game/GameSystem.h"

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

/*
 * --INFO--
 * Address:	801B4838
 * Size:	000134
 */
void Footmarks::add(Footmark& mark)
{
	_14.x = mark.position.x;
	_14.y = mark.position.y;
	_14.z = mark.position.z;
	Footmark* v2;
	float v3;
	float v4;
	float v5;
	float v6;
	if (this->_08 < 2
	            || (v2 = &this->m_marks[this->_04 + this->m_count - 1
	                                    - (this->_04 + this->m_count - 1)
	                                          / this->m_count * this->m_count],
	                v3 = (v2->position.x - mark.position.y),
	                v4 = (v2->position.z - mark.position.z),
	                v5 = (v4 * v4)
	                     + ((v2->position.x - mark.position.x)
	                            * (v2->position.x - mark.position.x)
	                        + (v3 * v3)),
	                v5 <= 0.0f)
	        ? (v6 = 0.0f)
	        : (v6 = (__frsqrte(v5) * (v4 * v4)
	                 + ((v2->position.x - mark.position.x)
	                        * (v2->position.x - mark.position.x)
	                    + (v3 * v3))),
	           v6 >= 20.0f)) {
		this->m_marks[this->_04].position = mark.position;
		this->m_marks[this->_04].flag     = Game::gameSystem->_50;
		this->_04
		    = this->_04 + 1 - (this->_04 + 1) / this->m_count * this->m_count;

		u32 v8 = this->_08;
		if (v8 < this->m_count)
			this->_08 = v8 + 1;
		this->_10 = Game::gameSystem->_50;
		namespace Game {

		}
	}

} // namespace Game
#ifdef UNFINISHED
void Footmarks::add(Game::Footmark&)
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
void Footmarks::get(int)
{
	/*
	cmpwi    r4, 0
	blt      lbl_801B4980
	lwz      r0, 8(r3)
	cmpw     r4, r0
	blt      lbl_801B4988

lbl_801B4980:
	li       r3, 0
	blr

lbl_801B4988:
	lwz      r6, 0xc(r3)
	addi     r4, r4, 1
	lwz      r0, 4(r3)
	lwz      r5, 0(r3)
	add      r0, r6, r0
	subf     r3, r4, r0
	divw     r0, r3, r6
	mullw    r0, r0, r6
	subf     r0, r0, r3
	slwi     r0, r0, 4
	add      r3, r5, r0
	blr
	*/
}

} // Game

/*
 * --INFO--
 * Address:	........
 * Size:	00014C
 */
void findNearest__Q24Game9FootmarksFR10Vector3f i(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B49B8
 * Size:	0000C8
 */
void findNearest2__Q24Game9FootmarksFR10Vector3f i(void)
{
	/*
	lwz      r6, 8(r3)
	li       r8, -1
	lfs      f5, lbl_80519420@sda21(r2)
	li       r9, 0
	addic.   r0, r6, -1
	mtctr    r0
	ble      lbl_801B4A60

lbl_801B49D4:
	lwz      r0, 4(r3)
	cmpwi    r5, -1
	lwz      r6, 0xc(r3)
	add      r7, r0, r9
	divw     r0, r7, r6
	mullw    r0, r0, r6
	subf     r10, r0, r7
	beq      lbl_801B4A0C
	slwi     r6, r10, 4
	lwz      r7, 0(r3)
	addi     r0, r6, 0xc
	lwzx     r0, r7, r0
	cmpw     r0, r5
	ble      lbl_801B4A58

lbl_801B4A0C:
	lwz      r6, 0(r3)
	slwi     r0, r10, 4
	lfs      f3, 4(r4)
	add      r6, r6, r0
	lfs      f1, 0(r4)
	lfs      f2, 4(r6)
	lfs      f0, 0(r6)
	fsubs    f4, f3, f2
	lfs      f3, 8(r4)
	lfs      f2, 8(r6)
	fsubs    f1, f1, f0
	fmuls    f0, f4, f4
	fsubs    f2, f3, f2
	fmadds   f0, f1, f1, f0
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f5
	bge      lbl_801B4A58
	fmr      f5, f0
	mr       r8, r10

lbl_801B4A58:
	addi     r9, r9, 1
	bdnz     lbl_801B49D4

lbl_801B4A60:
	cmpwi    r8, -1
	beq      lbl_801B4A78
	lwz      r3, 0(r3)
	slwi     r0, r8, 4
	add      r3, r3, r0
	blr

lbl_801B4A78:
	li       r3, 0
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Footmarks::draw(Graphics&)
{
	// UNUSED FUNCTION
}
#endif
} // Game
