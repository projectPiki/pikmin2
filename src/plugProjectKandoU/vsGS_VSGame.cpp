#include "types.h"

namespace Game {

struct VsGameSection;
struct StateArg;

struct VsGame {

	struct GameState {
		virtual void init(Game::VsGameSection*, Game::StateArg*);
		virtual void exec(Game::VsGameSection*);
		virtual void cleanup(VsGameSection*);
		// WTF are these symbols?
	};

	struct VSState {
	};
};

/*
 * --INFO--
 * Address:	8022EA94
 * Size:	000044
 */
VsGame::VSState::VSState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x5804
	  lis       r3, 0x804C
	  li        r0, 0x3
	  addi      r4, r3, 0x1164
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  stw       r0, 0x4(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022EAD8
 * Size:	0000CC
 */
void VsGame::VSState::do_init(Game::VsGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0x1
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  lis       r4, 0x8048
	  lwz       r3, -0x6C18(r13)
	  addi      r31, r4, 0x3850
	  li        r4, 0x2
	  stw       r0, 0x44(r3)
	  mr        r3, r29
	  bl        -0xE11F8
	  mr        r3, r29
	  bl        -0xE0D90
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x24
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x2044F8

	.loc_0x64:
	  lwz       r30, -0x6780(r13)
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x88
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x24
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x20451C

	.loc_0x88:
	  lwz       r3, 0x4(r30)
	  lwz       r3, 0x4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  addi      r4, r29, 0x214
	  li        r5, 0
	  bl        -0x6C75C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8022EBA4
 * Size:	000028
 */
void __sinit_vsGS_VSGame_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x69F0(r13)
	  stfsu     f0, 0x1158(r3)
	  stfs      f0, -0x69EC(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
