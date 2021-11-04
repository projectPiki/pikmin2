#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C7834
 * Size:	000274
 */
void efx::TEnemyPiyo::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x14
	  bl        -0x2FD1C0
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x11
	  crclr     6, 0x6
	  bl        -0x39D260

	.loc_0x70:
	  lwz       r0, 0x10(r30)
	  cmplwi    r0, 0x63
	  bgt-      .loc_0x1DC
	  lis       r3, 0x804E
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x7B50
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f31, 0x1570(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x1574(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x1578(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x157C(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x1580(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x1584(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x1588(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x158C(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x1590(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x1594(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x1598(r2)
	  b         .loc_0x1E4
	  li        r3, 0
	  b         .loc_0x250
	  lfs       f31, 0x159C(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15A0(r2)
	  b         .loc_0x1E4
	  li        r3, 0
	  b         .loc_0x250
	  li        r3, 0
	  b         .loc_0x250
	  lfs       f31, 0x15A4(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15A8(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15AC(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15B0(r2)
	  b         .loc_0x1E4
	  li        r3, 0
	  b         .loc_0x250
	  lfs       f31, 0x1598(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x1574(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15B4(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15B8(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15BC(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15C0(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x157C(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x1574(r2)
	  b         .loc_0x1E4
	  li        r3, 0
	  b         .loc_0x250
	  lfs       f31, 0x15AC(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15C4(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15C8(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15C8(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15CC(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15D0(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15D4(r2)
	  b         .loc_0x1E4
	  lfs       f31, 0x15D8(r2)
	  b         .loc_0x1E4
	  li        r3, 0
	  b         .loc_0x250
	  lfs       f31, 0x1574(r2)
	  b         .loc_0x1E4
	  li        r3, 0
	  b         .loc_0x250

	.loc_0x1DC:
	  li        r3, 0
	  b         .loc_0x250

	.loc_0x1E4:
	  lfs       f0, 0x14(r30)
	  mr        r3, r29
	  mr        r4, r30
	  fmuls     f31, f31, f0
	  bl        -0x1833C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x24C
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  lfs       f1, 0x1588(r2)
	  stfs      f31, 0x98(r4)
	  fsubs     f0, f31, f1
	  lfs       f2, 0x15DC(r2)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  fmadds    f0, f2, f0, f1
	  lwz       r4, 0x8(r29)
	  stfs      f31, 0x14(r1)
	  stfs      f0, 0xB0(r4)
	  stfs      f31, 0x18(r1)
	  stfs      f31, 0x1C(r1)
	  stfs      f0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  stfs      f0, 0xB4(r4)
	  b         .loc_0x250

	.loc_0x24C:
	  li        r3, 0

	.loc_0x250:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C7AA8
 * Size:	0000DC
 */
void efx::TEnemyPoisonL::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FD434
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x39D4D4

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x18BA0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r3, 0

	.loc_0xB8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C7B84
 * Size:	0000DC
 */
void efx::TEnemyPoisonS::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FD510
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0xD6
	  crclr     6, 0x6
	  bl        -0x39D5B0

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x18C7C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r3, 0

	.loc_0xB8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C7C60
 * Size:	0000DC
 */
void efx::TSekikaLOff::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FD5EC
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0xE7
	  crclr     6, 0x6
	  bl        -0x39D68C

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x18D58
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r3, 0

	.loc_0xB8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C7D3C
 * Size:	0000DC
 */
void efx::TSekikaLOn::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FD6C8
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0xF6
	  crclr     6, 0x6
	  bl        -0x39D768

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x18E34
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r3, 0

	.loc_0xB8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C7E18
 * Size:	0000DC
 */
void efx::TSekikaSOff::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FD7A4
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x105
	  crclr     6, 0x6
	  bl        -0x39D844

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x18F10
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r3, 0

	.loc_0xB8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C7EF4
 * Size:	0000DC
 */
void efx::TSekikaSOn::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FD880
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x114
	  crclr     6, 0x6
	  bl        -0x39D920

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x18FEC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r3, 0

	.loc_0xB8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C7FD0
 * Size:	0000DC
 */
void efx::TEnemyDead_ArgScale::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FD95C
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x127
	  crclr     6, 0x6
	  bl        -0x39D9FC

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x190C8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r3, 0

	.loc_0xB8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C80AC
 * Size:	00024C
 */
void efx::TEnemyDead::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x14
	  bl        -0x2FDA38
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x138
	  crclr     6, 0x6
	  bl        -0x39DAD8

	.loc_0x70:
	  lwz       r0, 0x10(r30)
	  cmplwi    r0, 0x63
	  bgt-      .loc_0x1D4
	  lis       r3, 0x804E
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x7CE0
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f31, 0x15E0(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15D0(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15E4(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15E0(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15A8(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x1588(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x1588(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x1588(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x1598(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15E4(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15BC(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15E4(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15C0(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x1580(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x1580(r2)
	  b         .loc_0x1DC
	  li        r3, 0
	  b         .loc_0x228
	  lfs       f31, 0x15C8(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15E8(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15EC(r2)
	  b         .loc_0x1DC
	  li        r3, 0
	  b         .loc_0x228
	  lfs       f31, 0x15F0(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x1588(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15F0(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15D0(r2)
	  b         .loc_0x1DC
	  li        r3, 0
	  b         .loc_0x228
	  lfs       f31, 0x15F4(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15EC(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15EC(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15F8(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15FC(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15C8(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15EC(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15E4(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x1600(r2)
	  b         .loc_0x1DC
	  li        r3, 0
	  b         .loc_0x228
	  lfs       f31, 0x1604(r2)
	  b         .loc_0x1DC
	  lfs       f31, 0x15F0(r2)
	  b         .loc_0x1DC
	  li        r3, 0
	  b         .loc_0x228
	  lfs       f31, 0x1608(r2)
	  b         .loc_0x1DC
	  li        r3, 0
	  b         .loc_0x228

	.loc_0x1D4:
	  li        r3, 0
	  b         .loc_0x228

	.loc_0x1DC:
	  lfs       f0, 0x14(r30)
	  mr        r3, r29
	  mr        r4, r30
	  fmuls     f31, f31, f0
	  bl        -0x19314
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x224
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0x228

	.loc_0x224:
	  li        r3, 0

	.loc_0x228:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C82F8
 * Size:	000318
 */
void efx::TEnemyWalkSmoke::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  lis       r4, 0x8049
	  stw       r30, 0x58(r1)
	  mr        r3, r31
	  addi      r30, r4, 0x63C8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r30, 0x14
	  bl        -0x2FDC74
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x60
	  addi      r3, r30, 0
	  addi      r5, r30, 0x24
	  li        r4, 0x1EB
	  crclr     6, 0x6
	  bl        -0x39DD14

	.loc_0x60:
	  lwz       r0, 0x10(r31)
	  lfs       f2, 0x4(r31)
	  lfs       f1, 0x8(r31)
	  cmplwi    r0, 0x63
	  lfs       f0, 0xC(r31)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bgt-      .loc_0x208
	  lis       r3, 0x804E
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x7E70
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f3, 0x15CC(r2)
	  li        r7, 0
	  b         .loc_0x210
	  lfs       f3, 0x1588(r2)
	  li        r7, 0x1
	  b         .loc_0x210
	  lfs       f3, 0x1580(r2)
	  li        r7, 0
	  b         .loc_0x210
	  lfs       f3, 0x15CC(r2)
	  li        r7, 0
	  b         .loc_0x210
	  li        r3, 0
	  b         .loc_0x300
	  lfs       f3, 0x1588(r2)
	  li        r7, 0x1
	  b         .loc_0x210
	  li        r3, 0
	  b         .loc_0x300
	  li        r3, 0
	  b         .loc_0x300
	  li        r3, 0
	  b         .loc_0x300
	  li        r3, 0
	  b         .loc_0x300
	  li        r3, 0
	  b         .loc_0x300
	  li        r3, 0
	  b         .loc_0x300
	  li        r3, 0
	  b         .loc_0x300
	  li        r3, 0
	  b         .loc_0x300
	  li        r3, 0
	  b         .loc_0x300
	  li        r3, 0
	  b         .loc_0x300
	  li        r3, 0
	  b         .loc_0x300
	  lfs       f3, 0x15C0(r2)
	  li        r7, 0x1
	  b         .loc_0x210
	  lfs       f3, 0x15E4(r2)
	  li        r7, 0
	  b         .loc_0x210
	  li        r3, 0
	  b         .loc_0x300
	  li        r3, 0
	  b         .loc_0x300
	  li        r3, 0
	  b         .loc_0x300
	  lfs       f3, 0x15C0(r2)
	  li        r7, 0x1
	  b         .loc_0x210
	  lfs       f3, 0x15EC(r2)
	  li        r7, 0x1
	  b         .loc_0x210
	  li        r3, 0
	  b         .loc_0x300
	  lfs       f3, 0x15AC(r2)
	  li        r7, 0
	  b         .loc_0x210
	  lfs       f3, 0x1588(r2)
	  li        r7, 0
	  b         .loc_0x210
	  lfs       f3, 0x15FC(r2)
	  li        r7, 0x1
	  b         .loc_0x210
	  lfs       f3, 0x15FC(r2)
	  li        r7, 0x1
	  b         .loc_0x210
	  li        r3, 0
	  b         .loc_0x300
	  lfs       f3, 0x1588(r2)
	  li        r7, 0
	  b         .loc_0x210
	  li        r3, 0
	  b         .loc_0x300
	  lfs       f3, 0x15C0(r2)
	  li        r7, 0x1
	  b         .loc_0x210
	  lfs       f3, 0x1588(r2)
	  li        r7, 0
	  b         .loc_0x210
	  li        r3, 0
	  b         .loc_0x300
	  lfs       f3, 0x15BC(r2)
	  li        r7, 0
	  b         .loc_0x210
	  li        r3, 0
	  b         .loc_0x300

	.loc_0x208:
	  li        r3, 0
	  b         .loc_0x300

	.loc_0x210:
	  lwz       r0, 0x2C(r1)
	  lis       r4, 0x804B
	  lwz       r6, 0x30(r1)
	  lis       r3, 0x804B
	  lwz       r5, 0x34(r1)
	  subi      r4, r4, 0x5814
	  lfs       f0, 0x14(r31)
	  cmpwi     r7, 0
	  stw       r0, 0x8(r1)
	  subi      r0, r3, 0x5D24
	  fmuls     f3, f3, f0
	  stw       r6, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  stw       r5, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stw       r4, 0x38(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  stw       r0, 0x38(r1)
	  stfs      f3, 0x48(r1)
	  bne-      .loc_0x2B0
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x20(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x5A
	  li        r5, 0
	  stw       r0, 0x20(r1)
	  subi      r0, r3, 0x79C8
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x38
	  sth       r6, 0x24(r1)
	  stw       r5, 0x28(r1)
	  stw       r0, 0x20(r1)
	  bl        .loc_0x318
	  b         .loc_0x300

	.loc_0x2B0:
	  cmpwi     r7, 0x1
	  bne-      .loc_0x2FC
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x14(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x59
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  subi      r0, r3, 0x79DC
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x38
	  sth       r6, 0x18(r1)
	  stw       r5, 0x1C(r1)
	  stw       r0, 0x14(r1)
	  bl        0x100
	  b         .loc_0x300

	.loc_0x2FC:
	  li        r3, 0

	.loc_0x300:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr

	.loc_0x318:
	*/
}

/*
 * --INFO--
 * Address:	803C8610
 * Size:	0000DC
 */
void efx::TEnemyWalkSmokeM::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FDF9C
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x2AE
	  crclr     6, 0x6
	  bl        -0x39E03C

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x19708
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r3, 0

	.loc_0xB8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C86EC
 * Size:	000078
 */
void efx::TEnemyWalkSmokeS::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lfs       f31, 0x10(r4)
	  bl        -0x19788
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  lwz       r4, 0x8(r31)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0x5C

	.loc_0x58:
	  li        r3, 0

	.loc_0x5C:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C8764
 * Size:	000068
 */
void efx::TEnemyDownSmoke::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x197F4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  lfs       f0, 0xC(r31)
	  li        r3, 0x1
	  lwz       r4, 0x8(r31)
	  stfs      f0, 0x8(r1)
	  stfs      f0, 0x98(r4)
	  stfs      f0, 0x9C(r4)
	  stfs      f0, 0xA0(r4)
	  stfs      f0, 0xB0(r4)
	  stfs      f0, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  stfs      f0, 0xB4(r4)
	  b         .loc_0x54

	.loc_0x50:
	  li        r3, 0

	.loc_0x54:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C87CC
 * Size:	00010C
 */
void efx::TEnemyDownWat::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FE158
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x2DE
	  crclr     6, 0x6
	  bl        -0x39E1F8

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x1978C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE4
	  lwz       r4, 0xC(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  lwz       r4, 0x10(r29)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  lwz       r4, 0x14(r29)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xE8

	.loc_0xE4:
	  li        r3, 0

	.loc_0xE8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C88D8
 * Size:	0000F4
 */
void efx::TEnemyDive::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FE264
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x2EE
	  crclr     6, 0x6
	  bl        -0x39E304

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x19940
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xCC
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  lwz       r4, 0xC(r29)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xD0

	.loc_0xCC:
	  li        r3, 0

	.loc_0xD0:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C89CC
 * Size:	0003B8
 */
void efx::TEnemyBombScaleTable::__ct((Game::EnemyTypeID::EEnemyTypeID))
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0x63
	  bgt-      .loc_0x3A4
	  lis       r5, 0x804F
	  rlwinm    r0,r4,2,0,29
	  subi      r4, r5, 0x8000
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  li        r0, 0x1
	  lfs       f0, 0x160C(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x15CC(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x1610(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x160C(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x1588(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x1580(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x15F0(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x1580(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x1614(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x1574(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x15A8(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x1574(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x1598(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x1588(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x159C(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x15EC(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x15D0(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x15FC(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x15A8(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0
	  lfs       f0, 0x1618(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x1614(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x15EC(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x15C0(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x15CC(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x1614(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x161C(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x15F0(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x15E4(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x15E4(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0
	  lfs       f0, 0x1618(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x15AC(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x15D0(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x15E4(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x15A8(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x15CC(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x15D0(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x1614(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x15AC(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x15C0(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x1598(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0
	  lfs       f0, 0x1618(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x15C8(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x2
	  lfs       f0, 0x1588(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x1588(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	  li        r0, 0x1
	  lfs       f0, 0x1574(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr

	.loc_0x3A4:
	  li        r0, 0
	  lfs       f0, 0x1618(r2)
	  stw       r0, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C8D84
 * Size:	0001EC
 */
void efx::TEnemyBomb::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  mr        r30, r4
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x14
	  bl        -0x2FE700
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x60
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x3DB
	  crclr     6, 0x6
	  bl        -0x39E7A0

	.loc_0x60:
	  lfs       f2, 0x4(r30)
	  addi      r3, r1, 0x8
	  lfs       f1, 0x8(r30)
	  lfs       f0, 0xC(r30)
	  stfs      f2, 0x1C(r1)
	  lwz       r4, 0x10(r30)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  bl        -0x438
	  lwz       r7, 0x1C(r1)
	  lis       r4, 0x804B
	  lwz       r6, 0x20(r1)
	  lis       r3, 0x804B
	  lwz       r5, 0x24(r1)
	  subi      r4, r4, 0x5814
	  lfs       f1, 0x14(r30)
	  subi      r0, r3, 0x5D24
	  lfs       f0, 0xC(r1)
	  stw       r7, 0x10(r1)
	  fmuls     f3, f1, f0
	  lwz       r3, 0x8(r1)
	  stw       r6, 0x14(r1)
	  lfs       f2, 0x10(r1)
	  cmpwi     r3, 0
	  stw       r5, 0x18(r1)
	  lfs       f1, 0x14(r1)
	  stw       r4, 0x60(r1)
	  lfs       f0, 0x18(r1)
	  stfs      f2, 0x64(r1)
	  stfs      f1, 0x68(r1)
	  stfs      f0, 0x6C(r1)
	  stw       r0, 0x60(r1)
	  stfs      f3, 0x70(r1)
	  bne-      .loc_0xF0
	  li        r3, 0
	  b         .loc_0x1D4

	.loc_0xF0:
	  cmpwi     r3, 0x1
	  bne-      .loc_0x160
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x44(r1)
	  addi      r0, r3, 0x6A3C
	  lis       r3, 0x804F
	  li        r4, 0x4A
	  stw       r0, 0x44(r1)
	  subi      r0, r3, 0x7A40
	  li        r8, 0x4B
	  li        r7, 0x4C
	  li        r6, 0x4D
	  sth       r4, 0x48(r1)
	  addi      r3, r1, 0x44
	  addi      r4, r1, 0x60
	  sth       r8, 0x4A(r1)
	  sth       r7, 0x4C(r1)
	  sth       r6, 0x4E(r1)
	  stw       r5, 0x50(r1)
	  stw       r5, 0x54(r1)
	  stw       r5, 0x58(r1)
	  stw       r5, 0x5C(r1)
	  stw       r0, 0x44(r1)
	  bl        .loc_0x1EC
	  b         .loc_0x1D4

	.loc_0x160:
	  cmpwi     r3, 0x2
	  bne-      .loc_0x1D0
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x28(r1)
	  addi      r0, r3, 0x6A3C
	  lis       r3, 0x804F
	  li        r4, 0x4E
	  stw       r0, 0x28(r1)
	  subi      r0, r3, 0x7A54
	  li        r8, 0x4F
	  li        r7, 0x50
	  li        r6, 0x51
	  sth       r4, 0x2C(r1)
	  addi      r3, r1, 0x28
	  addi      r4, r1, 0x60
	  sth       r8, 0x2E(r1)
	  sth       r7, 0x30(r1)
	  sth       r6, 0x32(r1)
	  stw       r5, 0x34(r1)
	  stw       r5, 0x38(r1)
	  stw       r5, 0x3C(r1)
	  stw       r5, 0x40(r1)
	  stw       r0, 0x28(r1)
	  bl        0x148
	  b         .loc_0x1D4

	.loc_0x1D0:
	  li        r3, 0

	.loc_0x1D4:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr

	.loc_0x1EC:
	*/
}

/*
 * --INFO--
 * Address:	803C8F70
 * Size:	000124
 */
void efx::TEnemyBombM::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FE8FC
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x3F4
	  crclr     6, 0x6
	  bl        -0x39E99C

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x19E88
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xFC
	  lwz       r4, 0xC(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  lwz       r4, 0x10(r29)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  lwz       r4, 0x14(r29)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  lwz       r4, 0x18(r29)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0x100

	.loc_0xFC:
	  li        r3, 0

	.loc_0x100:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C9094
 * Size:	000124
 */
void efx::TEnemyBombS::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FEA20
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x405
	  crclr     6, 0x6
	  bl        -0x39EAC0

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x19FAC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xFC
	  lwz       r4, 0xC(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  lwz       r4, 0x10(r29)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  lwz       r4, 0x14(r29)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  lwz       r4, 0x18(r29)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0x100

	.loc_0xFC:
	  li        r3, 0

	.loc_0x100:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C91B8
 * Size:	0001A4
 */
void efx::TEnemyApsmoke::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  mr        r30, r4
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x14
	  bl        -0x2FEB34
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x60
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x417
	  crclr     6, 0x6
	  bl        -0x39EBD4

	.loc_0x60:
	  lfs       f2, 0x4(r30)
	  addi      r3, r1, 0x8
	  lfs       f1, 0x8(r30)
	  lfs       f0, 0xC(r30)
	  stfs      f2, 0x34(r1)
	  lwz       r4, 0x10(r30)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  bl        -0x86C
	  lwz       r7, 0x34(r1)
	  lis       r4, 0x804B
	  lwz       r6, 0x38(r1)
	  lis       r3, 0x804B
	  lwz       r5, 0x3C(r1)
	  subi      r4, r4, 0x5814
	  lfs       f1, 0x14(r30)
	  subi      r0, r3, 0x5D24
	  lfs       f0, 0xC(r1)
	  stw       r7, 0x10(r1)
	  fmuls     f3, f1, f0
	  lwz       r3, 0x8(r1)
	  stw       r6, 0x14(r1)
	  lfs       f2, 0x10(r1)
	  cmpwi     r3, 0
	  stw       r5, 0x18(r1)
	  lfs       f1, 0x14(r1)
	  stw       r4, 0x40(r1)
	  lfs       f0, 0x18(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  stw       r0, 0x40(r1)
	  stfs      f3, 0x50(r1)
	  bne-      .loc_0xF0
	  li        r3, 0
	  b         .loc_0x18C

	.loc_0xF0:
	  cmpwi     r3, 0x1
	  bne-      .loc_0x13C
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x28(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x2AF
	  li        r5, 0
	  stw       r0, 0x28(r1)
	  subi      r0, r3, 0x7A7C
	  addi      r3, r1, 0x28
	  addi      r4, r1, 0x40
	  sth       r6, 0x2C(r1)
	  stw       r5, 0x30(r1)
	  stw       r0, 0x28(r1)
	  bl        .loc_0x1A4
	  b         .loc_0x18C

	.loc_0x13C:
	  cmpwi     r3, 0x2
	  bne-      .loc_0x188
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x1C(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x2B0
	  li        r5, 0
	  stw       r0, 0x1C(r1)
	  subi      r0, r3, 0x7A90
	  addi      r3, r1, 0x1C
	  addi      r4, r1, 0x40
	  sth       r6, 0x20(r1)
	  stw       r5, 0x24(r1)
	  stw       r0, 0x1C(r1)
	  bl        0x100
	  b         .loc_0x18C

	.loc_0x188:
	  li        r3, 0

	.loc_0x18C:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr

	.loc_0x1A4:
	*/
}

/*
 * --INFO--
 * Address:	803C935C
 * Size:	0000DC
 */
void efx::TEnemyApsmokeM::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FECE8
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x430
	  crclr     6, 0x6
	  bl        -0x39ED88

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x1A454
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r3, 0

	.loc_0xB8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C9438
 * Size:	0000DC
 */
void efx::TEnemyApsmokeS::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FEDC4
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x441
	  crclr     6, 0x6
	  bl        -0x39EE64

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x1A530
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r3, 0

	.loc_0xB8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C9514
 * Size:	0000DC
 */
void efx::TEnemyHamonM::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FEEA0
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x454
	  crclr     6, 0x6
	  bl        -0x39EF40

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x19EA4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r3, 0

	.loc_0xB8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C95F0
 * Size:	0000DC
 */
void efx::TEnemyHamonMInd::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x30
	  bl        -0x2FEF7C
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x462
	  crclr     6, 0x6
	  bl        -0x39F01C

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x19F80
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x8(r1)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xC(r1)
	  stfs      f31, 0x10(r1)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r3, 0

	.loc_0xB8:
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C96CC
 * Size:	0002FC
 */
void efx::TEnemyHamonChasePos::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r31)
	  addi      r29, r4, 0x63C8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r29, 0x14
	  bl        -0x2FF058
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r29, 0
	  addi      r5, r29, 0x24
	  li        r4, 0x470
	  crclr     6, 0x6
	  bl        -0x39F0F8

	.loc_0x70:
	  lwz       r0, 0x10(r31)
	  lfs       f2, 0x4(r31)
	  lfs       f1, 0x8(r31)
	  cmplwi    r0, 0x63
	  lfs       f0, 0xC(r31)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bgt-      .loc_0x21C
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x7E70
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f31, 0x15C0(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15A0(r2)
	  b         .loc_0x224
	  lfs       f31, 0x1598(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15C0(r2)
	  b         .loc_0x224
	  lfs       f31, 0x1574(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15A8(r2)
	  b         .loc_0x224
	  lfs       f31, 0x1588(r2)
	  b         .loc_0x224
	  lfs       f31, 0x1588(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15F4(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15E4(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15CC(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15E4(r2)
	  b         .loc_0x224
	  lfs       f31, 0x1588(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15A0(r2)
	  b         .loc_0x224
	  li        r3, 0
	  b         .loc_0x2D8
	  lfs       f31, 0x1574(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15CC(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15A8(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15A4(r2)
	  b         .loc_0x224
	  lfs       f31, 0x1580(r2)
	  b         .loc_0x224
	  lfs       f31, 0x1580(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15E4(r2)
	  b         .loc_0x224
	  lfs       f31, 0x159C(r2)
	  b         .loc_0x224
	  lfs       f31, 0x1588(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15F8(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15EC(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15BC(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15F8(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15E4(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15C0(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15C0(r2)
	  b         .loc_0x224
	  lfs       f31, 0x1620(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15BC(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15E0(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15C0(r2)
	  b         .loc_0x224
	  lfs       f31, 0x1588(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15BC(r2)
	  b         .loc_0x224
	  li        r3, 0
	  b         .loc_0x2D8
	  lfs       f31, 0x1598(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15F0(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15F0(r2)
	  b         .loc_0x224
	  lfs       f31, 0x159C(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15EC(r2)
	  b         .loc_0x224
	  lfs       f31, 0x15EC(r2)
	  b         .loc_0x224
	  lfs       f31, 0x1624(r2)
	  b         .loc_0x224
	  li        r3, 0
	  b         .loc_0x2D8

	.loc_0x21C:
	  li        r3, 0
	  b         .loc_0x2D8

	.loc_0x224:
	  lwz       r8, 0x14(r1)
	  lis       r4, 0x804B
	  lwz       r7, 0x18(r1)
	  lis       r3, 0x804B
	  lwz       r6, 0x1C(r1)
	  subi      r5, r4, 0x5814
	  lfs       f0, 0x14(r31)
	  subi      r0, r3, 0x5D24
	  stw       r8, 0x8(r1)
	  addi      r3, r30, 0x4
	  fmuls     f31, f31, f0
	  addi      r4, r1, 0x20
	  stw       r7, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  stw       r6, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stw       r5, 0x20(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stw       r0, 0x20(r1)
	  stfs      f31, 0x30(r1)
	  lwz       r12, 0x4(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2A0
	  li        r3, 0
	  b         .loc_0x2D8

	.loc_0x2A0:
	  lfd       f0, 0x1628(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x2D4
	  addi      r3, r30, 0x18
	  addi      r4, r1, 0x20
	  lwz       r12, 0x18(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2D4
	  li        r3, 0
	  b         .loc_0x2D8

	.loc_0x2D4:
	  li        r3, 0x1

	.loc_0x2D8:
	  psq_l     f31,0x58(r1),0,0
	  lwz       r0, 0x64(r1)
	  lfd       f31, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C99C8
 * Size:	000138
 */
void update__Q23efx11TEnemyHamonFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r4, 0x30(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x118
	  lbz       r0, 0x40(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x118
	  lfs       f1, 0x0(r4)
	  lfs       f0, 0x4(r31)
	  fsubs     f31, f1, f0
	  bl        0x190
	  lfs       f0, 0x1618(r2)
	  lfs       f2, 0x48(r30)
	  fcmpo     cr0, f0, f31
	  fmuls     f0, f2, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x104
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x104
	  lwz       r7, 0x30(r30)
	  lis       r5, 0x8051
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  lfs       f2, 0x8(r31)
	  addi      r6, r5, 0x41E4
	  lfs       f1, 0x0(r7)
	  subi      r5, r4, 0x5814
	  lfs       f0, 0x0(r31)
	  subi      r0, r3, 0x5820
	  addi      r3, r30, 0x4
	  addi      r4, r1, 0x14
	  stfs      f0, 0x34(r30)
	  stfs      f1, 0x38(r30)
	  stfs      f2, 0x3C(r30)
	  lwz       r8, 0x0(r6)
	  lwz       r7, 0x4(r6)
	  lwz       r6, 0x8(r6)
	  stw       r8, 0x8(r1)
	  lfs       f3, 0x48(r30)
	  lwz       r8, 0x44(r30)
	  stw       r7, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  stw       r6, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stw       r5, 0x14(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  stw       r0, 0x14(r1)
	  stw       r8, 0x24(r1)
	  stfs      f3, 0x28(r1)
	  lwz       r12, 0x4(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x118

	.loc_0x104:
	  addi      r3, r30, 0x4
	  lwz       r12, 0x4(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x118:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C9B00
 * Size:	0000A0
 */
void efx::TEnemyHamon::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  lis       r4, 0x8049
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r30
	  addi      r31, r4, 0x63C8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x14
	  bl        -0x2FF484
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x68
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x547
	  crclr     6, 0x6
	  bl        -0x39F524

	.loc_0x68:
	  lwz       r4, 0x10(r30)
	  li        r0, 0x1
	  li        r3, 0x1
	  stw       r4, 0x44(r29)
	  lfs       f0, 0x14(r30)
	  stfs      f0, 0x48(r29)
	  stb       r0, 0x40(r29)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C9BA0
 * Size:	000140
 */
void efx::TEnemyHamon::getLimitDepth_(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x44(r3)
	  lfs       f1, 0x1630(r2)
	  cmplwi    r0, 0x63
	  bgtlr-
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x7CE0
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f1, 0x1634(r2)
	  blr
	  lfs       f1, 0x1638(r2)
	  blr
	  lfs       f1, 0x163C(r2)
	  blr
	  lfs       f1, 0x1634(r2)
	  blr
	  lfs       f1, 0x163C(r2)
	  blr
	  lfs       f1, 0x1640(r2)
	  blr
	  lfs       f1, 0x1644(r2)
	  blr
	  lfs       f1, 0x1648(r2)
	  blr
	  lfs       f1, 0x164C(r2)
	  blr
	  lfs       f1, 0x1644(r2)
	  blr
	  lfs       f1, 0x1650(r2)
	  blr
	  lfs       f1, 0x1638(r2)
	  blr
	  lfs       f1, 0x1648(r2)
	  blr
	  lfs       f1, 0x1654(r2)
	  blr
	  lfs       f1, 0x1658(r2)
	  blr
	  lfs       f1, 0x1644(r2)
	  blr
	  lfs       f1, 0x165C(r2)
	  blr
	  lfs       f1, 0x1660(r2)
	  blr
	  lfs       f1, 0x1664(r2)
	  blr
	  lfs       f1, 0x163C(r2)
	  blr
	  lfs       f1, 0x1644(r2)
	  blr
	  lfs       f1, 0x1668(r2)
	  blr
	  lfs       f1, 0x1644(r2)
	  blr
	  lfs       f1, 0x1634(r2)
	  blr
	  lfs       f1, 0x166C(r2)
	  blr
	  lfs       f1, 0x1660(r2)
	  blr
	  lfs       f1, 0x1670(r2)
	  blr
	  lfs       f1, 0x163C(r2)
	  blr
	  lfs       f1, 0x1674(r2)
	  blr
	  lfs       f1, 0x1654(r2)
	  blr
	  lfs       f1, 0x1634(r2)
	  blr
	  lfs       f1, 0x163C(r2)
	  blr
	  lfs       f1, 0x1664(r2)
	  blr
	  lfs       f1, 0x1664(r2)
	  blr
	  lfs       f1, 0x1668(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C9CE0
 * Size:	000004
 */
void efx::TEnemyApsmoke::forceKill(void) { }

/*
 * --INFO--
 * Address:	803C9CE4
 * Size:	000004
 */
void efx::TEnemyApsmoke::fade(void) { }

/*
 * --INFO--
 * Address:	803C9CE8
 * Size:	000004
 */
void efx::TEnemyBomb::forceKill(void) { }

/*
 * --INFO--
 * Address:	803C9CEC
 * Size:	000004
 */
void efx::TEnemyBomb::fade(void) { }

/*
 * --INFO--
 * Address:	803C9CF0
 * Size:	000004
 */
void efx::TEnemyWalkSmoke::forceKill(void) { }

/*
 * --INFO--
 * Address:	803C9CF4
 * Size:	000004
 */
void efx::TEnemyWalkSmoke::fade(void) { }

/*
 * --INFO--
 * Address:	803C9CF8
 * Size:	000008
 */
void @4 @efx::TEnemyPiyo::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x2C8B84
	*/
}

/*
 * --INFO--
 * Address:	803C9D00
 * Size:	000008
 */
void @4 @efx::TEnemyHamonM::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x29B624
	*/
}

/*
 * --INFO--
 * Address:	803C9D08
 * Size:	000008
 */
void @4 @efx::TEnemyHamonMInd::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x29B6C8
	*/
}
