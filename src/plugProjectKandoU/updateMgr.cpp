#ifndef _GAME_UPDATEMGR_H
#define _GAME_UPDATEMGR_H

#include "types.h"
typedef struct UpdateMgr;
namespace Game {
struct UpdateContext {
	UpdateContext();

	bool updatable();

	UpdateMgr* _00;
	s32 _04;
	u8 _08;
	u8 _09;
};

struct UpdateMgr {
	bool updatable(UpdateContext*);
};
} // namespace Game

#endif

namespace Game {

/*
 * --INFO--
 * Address:	80196670
 * Size:	000018
 */
UpdateContext::UpdateContext()
    : _00(0)
    , _04(-1)
    , _09(0)
{
}
} // namespace Game
#ifdef NONMATCHING
/*
 * --INFO--
 * Address:	80196688
 * Size:	00005C
 */
bool UpdateContext::updatable()
{
	if (_09 != 0) {
		return true;
	}

	if (_00 == nullptr) {
		return false;
	}

	return (bool)UpdateMgr().updatable(this);
}
} // namespace Game

// /*
//  * --INFO--
//  * Address:	801966E4
//  * Size:	00003C
//  */
// void Game::UpdateContext::init((Game::UpdateMgr*))
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r5, r3
// 	  stw       r0, 0x14(r1)
// 	  stw       r4, 0x0(r3)
// 	  lbz       r0, 0x9(r3)
// 	  cmplwi    r0, 0
// 	  bne-      .loc_0x2C
// 	  mr        r3, r4
// 	  mr        r4, r5
// 	  bl        0x174

// 	.loc_0x2C:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80196720
//  * Size:	000058
//  */
// void Game::UpdateContext::exit(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r3
// 	  lbz       r0, 0x9(r3)
// 	  cmplwi    r0, 0
// 	  bne-      .loc_0x44
// 	  lwz       r3, 0x0(r31)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x3C
// 	  mr        r4, r31
// 	  bl        0x200
// 	  li        r0, 0
// 	  stw       r0, 0x0(r31)

// 	.loc_0x3C:
// 	  li        r0, 0
// 	  stb       r0, 0x8(r31)

// 	.loc_0x44:
// 	  lwz       r0, 0x14(r1)
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80196778
//  * Size:	00001C
//  */
// void Game::UpdateMgr::__ct(void)
// {
// 	/*
// 	.loc_0x0:
// 	  li        r0, 0
// 	  stw       r0, 0x8(r3)
// 	  stw       r0, 0xC(r3)
// 	  stw       r0, 0x0(r3)
// 	  stw       r0, 0x4(r3)
// 	  stw       r0, 0x10(r3)
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80196794
//  * Size:	000024
//  */
// void Game::UpdateMgr::update(void)
// {
// 	/*
// 	.loc_0x0:
// 	  lwz       r4, 0x10(r3)
// 	  addi      r4, r4, 0x1
// 	  stw       r4, 0x10(r3)
// 	  lwz       r0, 0x0(r3)
// 	  cmpw      r4, r0
// 	  bltlr-
// 	  li        r0, 0
// 	  stw       r0, 0x10(r3)
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801967B8
//  * Size:	000028
//  */
// void Game::UpdateMgr::updatable((Game::UpdateContext*))
// {
// 	/*
// 	.loc_0x0:
// 	  cmplwi    r4, 0
// 	  bne-      .loc_0x10
// 	  li        r3, 0
// 	  blr

// 	.loc_0x10:
// 	  lwz       r4, 0x4(r4)
// 	  lwz       r0, 0x10(r3)
// 	  sub       r0, r0, r4
// 	  cntlzw    r0, r0
// 	  rlwinm    r3,r0,27,24,31
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801967E0
//  * Size:	0000A0
//  */
// void Game::UpdateMgr::create((int))
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  cmpwi     r4, 0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  stw       r30, 0x8(r1)
// 	  mr        r30, r3
// 	  bgt-      .loc_0x24
// 	  li        r4, 0x1

// 	.loc_0x24:
// 	  rlwinm    r31,r4,2,0,29
// 	  stw       r4, 0x0(r30)
// 	  mr        r3, r31
// 	  bl        -0x172864
// 	  stw       r3, 0x8(r30)
// 	  mr        r3, r31
// 	  bl        -0x172870
// 	  stw       r3, 0xC(r30)
// 	  li        r4, 0
// 	  mr        r5, r4
// 	  li        r6, 0
// 	  stw       r4, 0x4(r30)
// 	  stw       r4, 0x10(r30)
// 	  b         .loc_0x74

// 	.loc_0x5C:
// 	  lwz       r3, 0x8(r30)
// 	  addi      r6, r6, 0x1
// 	  stwx      r4, r3, r5
// 	  lwz       r3, 0xC(r30)
// 	  stwx      r4, r3, r5
// 	  addi      r5, r5, 0x4

// 	.loc_0x74:
// 	  lwz       r0, 0x0(r30)
// 	  cmpw      r6, r0
// 	  blt+      .loc_0x5C
// 	  li        r0, 0
// 	  stw       r0, 0x14(r30)
// 	  lwz       r0, 0x14(r1)
// 	  lwz       r31, 0xC(r1)
// 	  lwz       r30, 0x8(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80196880
//  * Size:	0000D0
//  */
// void Game::UpdateMgr::addClient((Game::UpdateContext*))
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r3
// 	  stw       r30, 0x8(r1)
// 	  mr        r30, r4
// 	  lwz       r0, 0x4(r4)
// 	  cmpwi     r0, -0x1
// 	  beq-      .loc_0x2C
// 	  bl        .loc_0xD0

// 	.loc_0x2C:
// 	  lwz       r0, 0x0(r31)
// 	  li        r5, -0x1
// 	  li        r6, 0x2710
// 	  li        r7, 0
// 	  li        r4, 0
// 	  mtctr     r0
// 	  cmpwi     r0, 0
// 	  ble-      .loc_0x70

// 	.loc_0x4C:
// 	  lwz       r3, 0x8(r31)
// 	  lwzx      r0, r3, r4
// 	  cmpw      r0, r6
// 	  bge-      .loc_0x64
// 	  mr        r5, r7
// 	  mr        r6, r0

// 	.loc_0x64:
// 	  addi      r4, r4, 0x4
// 	  addi      r7, r7, 0x1
// 	  bdnz+     .loc_0x4C

// 	.loc_0x70:
// 	  cmpwi     r5, -0x1
// 	  beq-      .loc_0xB8
// 	  stw       r5, 0x4(r30)
// 	  rlwinm    r5,r5,2,0,29
// 	  lwz       r4, 0x8(r31)
// 	  lwzx      r3, r4, r5
// 	  addi      r0, r3, 0x1
// 	  stwx      r0, r4, r5
// 	  lbz       r0, 0x8(r30)
// 	  cmplwi    r0, 0
// 	  beq-      .loc_0xAC
// 	  lwz       r4, 0xC(r31)
// 	  lwzx      r3, r4, r5
// 	  addi      r0, r3, 0x1
// 	  stwx      r0, r4, r5

// 	.loc_0xAC:
// 	  lwz       r3, 0x4(r31)
// 	  addi      r0, r3, 0x1
// 	  stw       r0, 0x4(r31)

// 	.loc_0xB8:
// 	  lwz       r0, 0x14(r1)
// 	  lwz       r31, 0xC(r1)
// 	  lwz       r30, 0x8(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr

// 	.loc_0xD0:
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80196950
//  * Size:	0000C8
//  */
// void Game::UpdateMgr::removeClient((Game::UpdateContext*))
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r4
// 	  stw       r30, 0x8(r1)
// 	  mr        r30, r3
// 	  lwz       r8, 0x4(r4)
// 	  cmpwi     r8, -0x1
// 	  beq-      .loc_0xB0
// 	  cmpwi     r8, 0
// 	  blt-      .loc_0x3C
// 	  lwz       r0, 0x0(r30)
// 	  cmpw      r8, r0
// 	  blt-      .loc_0x60

// 	.loc_0x3C:
// 	  lis       r3, 0x8048
// 	  lis       r4, 0x8048
// 	  subi      r5, r4, 0xFA8
// 	  lwz       r7, 0x0(r30)
// 	  subi      r3, r3, 0xFB8
// 	  li        r4, 0x9B
// 	  li        r6, 0
// 	  crclr     6, 0x6
// 	  bl        -0x16C36C

// 	.loc_0x60:
// 	  lwz       r0, 0x4(r31)
// 	  lwz       r5, 0x8(r30)
// 	  rlwinm    r4,r0,2,0,29
// 	  lwzx      r3, r5, r4
// 	  subi      r0, r3, 0x1
// 	  stwx      r0, r5, r4
// 	  lbz       r0, 0x8(r31)
// 	  cmplwi    r0, 0
// 	  beq-      .loc_0x9C
// 	  lwz       r0, 0x4(r31)
// 	  lwz       r5, 0xC(r30)
// 	  rlwinm    r4,r0,2,0,29
// 	  lwzx      r3, r5, r4
// 	  subi      r0, r3, 0x1
// 	  stwx      r0, r5, r4

// 	.loc_0x9C:
// 	  lwz       r3, 0x4(r30)
// 	  li        r0, -0x1
// 	  subi      r3, r3, 0x1
// 	  stw       r3, 0x4(r30)
// 	  stw       r0, 0x4(r31)

// 	.loc_0xB0:
// 	  lwz       r0, 0x14(r1)
// 	  lwz       r31, 0xC(r1)
// 	  lwz       r30, 0x8(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000004
//  */
// void Game::UpdateMgr::balanceClient((Game::UpdateContext*))
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000004
//  */
// void Game::UpdateMgr::showInfo((Graphics&, int, int))
// {
// 	// UNUSED FUNCTION
// }
#endif
