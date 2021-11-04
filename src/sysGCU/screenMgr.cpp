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
 * Address:	........
 * Size:	000060
 */
void Screen::DispMemberCpy(unsigned char*, og::Screen::DispMemberBase*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void Screen::getSceneOwnerName(Screen::SceneBase*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Screen::getSceneMemberName(Screen::SceneBase*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80452300
 * Size:	000054
 */
void Screen::SceneInfoList::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x40F84
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r4, r3, 0x28BC
	  addi      r3, r31, 0x1C
	  stw       r4, 0x0(r31)
	  li        r4, 0xCD
	  li        r5, 0x400
	  stw       r0, 0x18(r31)
	  bl        -0x44D284
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void Screen::SceneInfoList::set((long, og::Screen::DispMemberBase*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void Screen::MgrCommand::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void Screen::MgrCommand::clearArgBuf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void Screen::MgrCommand::clearDispMemberBuf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void Screen::MgrCommand::setArg((Screen::SceneArgBase*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void Screen::MgrCommand::setDispMember((og::Screen::DispMemberBase*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001BC
 */
void Screen::MgrCommand::setTypeSetScene((Screen::SetSceneArg&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void Screen::MgrCommand::setTypeStartScene((Screen::SceneArgBase*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void Screen::MgrCommand::setTypeEndScene((Screen::SceneArgBase*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void Screen::MgrCommand::setTypeInvalid(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80452354
 * Size:	0001CC
 */
void Screen::Mgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  mr        r0, r31
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r0
	  bl        -0x4353AC
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r4, r4, 0x56B4
	  li        r0, 0
	  stw       r4, 0x0(r29)
	  subi      r4, r3, 0x28FC
	  addi      r3, r31, 0x2C
	  stw       r4, 0x0(r31)
	  stb       r0, 0x18(r31)
	  stb       r0, 0x19(r31)
	  stb       r0, 0x1A(r31)
	  stb       r0, 0x1B(r31)
	  stw       r0, 0x1C(r31)
	  stw       r0, 0x20(r31)
	  bl        -0x41024
	  addi      r3, r31, 0x44
	  bl        -0x4102C
	  li        r0, 0
	  addi      r3, r31, 0x60
	  stw       r0, 0x5C(r31)
	  bl        -0x4103C
	  addi      r3, r31, 0x78
	  bl        -0x41044
	  li        r0, 0
	  li        r29, 0
	  stb       r0, 0x18(r31)
	  stb       r0, 0x19(r31)
	  stb       r0, 0x1A(r31)
	  stb       r0, 0x1B(r31)
	  stw       r0, 0x3C(r31)
	  stw       r0, 0x38(r31)
	  stw       r0, 0x34(r31)
	  stw       r0, 0x30(r31)
	  stw       r0, 0x54(r31)
	  stw       r0, 0x50(r31)
	  stw       r0, 0x4C(r31)
	  stw       r0, 0x48(r31)

	.loc_0xBC:
	  li        r3, 0x47C
	  bl        -0x42E570
	  mr.       r30, r3
	  beq-      .loc_0x128
	  lis       r3, 0x804F
	  li        r6, 0
	  subi      r0, r3, 0x4AD8
	  addi      r5, r2, 0x2820
	  stw       r0, 0x0(r30)
	  lis       r3, 0x804F
	  subi      r4, r3, 0x28CC
	  li        r0, -0x1
	  stw       r6, 0x10(r30)
	  addi      r3, r30, 0x464
	  stw       r6, 0xC(r30)
	  stw       r6, 0x8(r30)
	  stw       r6, 0x4(r30)
	  stw       r5, 0x14(r30)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x18(r30)
	  stw       r6, 0x1C(r30)
	  stw       r6, 0x60(r30)
	  bl        -0x362938
	  addi      r3, r30, 0x464
	  bl        -0x362908
	  addi      r3, r30, 0x464
	  bl        -0x362834

	.loc_0x128:
	  mr        r4, r30
	  addi      r3, r31, 0x44
	  bl        -0x4107C
	  addi      r29, r29, 0x1
	  cmplwi    r29, 0xA
	  blt+      .loc_0xBC
	  li        r0, 0
	  li        r3, 0xC64
	  stw       r0, 0x70(r31)
	  stw       r0, 0x6C(r31)
	  stw       r0, 0x68(r31)
	  stw       r0, 0x64(r31)
	  stw       r0, 0x88(r31)
	  stw       r0, 0x84(r31)
	  stw       r0, 0x80(r31)
	  stw       r0, 0x7C(r31)
	  bl        -0x42E510
	  lis       r4, 0x8045
	  lis       r5, 0x8045
	  addi      r4, r4, 0x2300
	  li        r6, 0x41C
	  addi      r5, r5, 0x2520
	  li        r7, 0x3
	  bl        -0x390AE8
	  li        r29, 0
	  mr        r30, r3

	.loc_0x190:
	  mr        r4, r30
	  addi      r3, r31, 0x78
	  bl        -0x410E4
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x41C
	  cmplwi    r29, 0x3
	  blt+      .loc_0x190
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80452520
 * Size:	000060
 */
void Screen::SceneInfoList::__dt(void)
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
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x28BC
	  stw       r0, 0x0(r30)
	  bl        -0x40FC8
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x42E4AC

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
 * Address:	80452580
 * Size:	000070
 */
void Screen::Mgr::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x5C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r4, -0x77D4(r13)
	  li        r3, 0x880
	  li        r5, 0x1
	  bl        -0x42D83C
	  stw       r3, 0x5C(r31)
	  lwz       r0, 0x5C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x472C
	  li        r4, 0x195
	  subi      r5, r5, 0x471C
	  crclr     6, 0x6
	  bl        -0x427F98

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804525F0
 * Size:	0000FC
 */
void Screen::Mgr::reset(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  li        r31, 0
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  bl        0x1150
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  lwz       r3, 0x1C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r5, r1, 0x14
	  li        r3, 0
	  bl        -0x14FA6C
	  lwz       r3, 0x1C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r5, r1, 0x8
	  bl        -0x14FA88
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  subi      r5, r4, 0x46C4
	  addi      r6, r1, 0x14
	  subi      r3, r3, 0x472C
	  addi      r7, r1, 0x8
	  li        r4, 0x1AB
	  crclr     6, 0x6
	  bl        -0x428038
	  b         .loc_0xE0

	.loc_0x90:
	  lwz       r3, -0x6450(r13)
	  bl        -0x1EAF8
	  li        r0, 0
	  stb       r0, 0x18(r30)
	  stb       r0, 0x19(r30)
	  stb       r0, 0x1A(r30)
	  stb       r0, 0x1B(r30)
	  stw       r0, 0x1C(r30)
	  b         .loc_0xBC

	.loc_0xB4:
	  mr        r3, r30
	  bl        0x468

	.loc_0xBC:
	  mr        r3, r30
	  bl        0x3B0
	  mr.       r4, r3
	  bne+      .loc_0xB4
	  mr        r3, r30
	  bl        0x840
	  lwz       r3, 0x5C(r30)
	  bl        -0x42EF98
	  li        r31, 0x1

	.loc_0xE0:
	  lwz       r0, 0x34(r1)
	  mr        r3, r31
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000240
 */
void Screen::Mgr::create(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804526EC
 * Size:	0001E8
 */
void Screen::Mgr::startScene((Screen::StartSceneArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r27, r3
	  mr        r28, r4
	  subi      r30, r5, 0x4738
	  li        r29, 0x1
	  lwz       r3, 0x1C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  beq-      .loc_0x170
	  bl        -0x8D8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x170

	.loc_0x40:
	  lwz       r0, 0x3C(r27)
	  li        r31, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  li        r31, 0x1
	  b         .loc_0x80

	.loc_0x58:
	  lwz       r3, 0x1C(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  mr        r4, r28
	  bl        -0xB3C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x80
	  li        r31, 0x1
	  b         .loc_0x80

	.loc_0x7C:
	  li        r29, 0

	.loc_0x80:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x1D0
	  mr        r3, r27
	  bl        0x2F0
	  mr.       r31, r3
	  bne-      .loc_0xA0
	  li        r29, 0
	  b         .loc_0x1D0

	.loc_0xA0:
	  addi      r3, r31, 0x464
	  bl        -0x362C28
	  addi      r3, r30, 0x5C
	  li        r0, 0x1
	  stw       r3, 0x14(r31)
	  addi      r3, r31, 0x464
	  stw       r0, 0x18(r31)
	  bl        -0x362C40
	  cmplwi    r28, 0
	  beq-      .loc_0x128
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0x40
	  ble-      .loc_0xF8
	  addi      r3, r30, 0xC
	  addi      r5, r30, 0x1C
	  li        r4, 0x102
	  crclr     6, 0x6
	  bl        -0x4281A0

	.loc_0xF8:
	  addi      r0, r31, 0x20
	  mr        r3, r28
	  stw       r0, 0x1C(r31)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r3
	  mr        r4, r28
	  addi      r3, r31, 0x20
	  bl        -0x44D670
	  b         .loc_0x15C

	.loc_0x128:
	  lwz       r0, 0x1C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x154
	  addi      r3, r31, 0x464
	  bl        -0x362CBC
	  addi      r3, r31, 0x20
	  li        r4, 0xCD
	  li        r5, 0x40
	  bl        -0x44D780
	  addi      r3, r31, 0x464
	  bl        -0x362BF8

	.loc_0x154:
	  li        r0, 0
	  stw       r0, 0x1C(r31)

	.loc_0x15C:
	  addi      r3, r31, 0x464
	  bl        -0x362C08
	  addi      r3, r31, 0x464
	  bl        -0x362C10
	  b         .loc_0x1D0

	.loc_0x170:
	  lwz       r3, 0x1C(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r5, r1, 0x14
	  li        r3, 0
	  bl        -0x14FCB0
	  lwz       r3, 0x1C(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r5, r1, 0x8
	  bl        -0x14FCCC
	  addi      r3, r30, 0xC
	  addi      r5, r30, 0x98
	  addi      r6, r1, 0x14
	  addi      r7, r1, 0x8
	  li        r4, 0x212
	  crclr     6, 0x6
	  bl        -0x428274
	  li        r29, 0

	.loc_0x1D0:
	  mr        r3, r29
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804528D4
 * Size:	00018C
 */
void Screen::Mgr::endScene((Screen::EndSceneArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  subi      r30, r5, 0x4738
	  li        r29, 0x1
	  lwz       r3, 0x1C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  beq-      .loc_0x170
	  bl        -0xA48
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x170

	.loc_0x40:
	  lwz       r0, 0x3C(r27)
	  li        r31, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  li        r31, 0x1
	  b         .loc_0x80

	.loc_0x58:
	  lwz       r3, 0x1C(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  mr        r4, r28
	  bl        -0xCAC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x80
	  li        r31, 0x1
	  b         .loc_0x80

	.loc_0x7C:
	  li        r29, 0

	.loc_0x80:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x174
	  mr        r3, r27
	  bl        0x108
	  mr.       r31, r3
	  bne-      .loc_0xA0
	  li        r29, 0
	  b         .loc_0x174

	.loc_0xA0:
	  addi      r3, r31, 0x464
	  bl        -0x362E10
	  addi      r3, r30, 0x68
	  li        r0, 0x2
	  stw       r3, 0x14(r31)
	  addi      r3, r31, 0x464
	  stw       r0, 0x18(r31)
	  bl        -0x362E28
	  cmplwi    r28, 0
	  beq-      .loc_0x128
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0x40
	  ble-      .loc_0xF8
	  addi      r3, r30, 0xC
	  addi      r5, r30, 0x1C
	  li        r4, 0x102
	  crclr     6, 0x6
	  bl        -0x428388

	.loc_0xF8:
	  addi      r0, r31, 0x20
	  mr        r3, r28
	  stw       r0, 0x1C(r31)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r3
	  mr        r4, r28
	  addi      r3, r31, 0x20
	  bl        -0x44D858
	  b         .loc_0x15C

	.loc_0x128:
	  lwz       r0, 0x1C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x154
	  addi      r3, r31, 0x464
	  bl        -0x362EA4
	  addi      r3, r31, 0x20
	  li        r4, 0xCD
	  li        r5, 0x40
	  bl        -0x44D968
	  addi      r3, r31, 0x464
	  bl        -0x362DE0

	.loc_0x154:
	  li        r0, 0
	  stw       r0, 0x1C(r31)

	.loc_0x15C:
	  addi      r3, r31, 0x464
	  bl        -0x362DF0
	  addi      r3, r31, 0x464
	  bl        -0x362DF8
	  b         .loc_0x174

	.loc_0x170:
	  li        r29, 0

	.loc_0x174:
	  mr        r3, r29
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80452A60
 * Size:	000008
 */
void Screen::Mgr::getCurrentCommand(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x3C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80452A68
 * Size:	0000A8
 */
void Screen::Mgr::getNewCommand(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lis       r3, 0x804A
	  lwz       r30, 0x54(r29)
	  subi      r31, r3, 0x4738
	  cmplwi    r30, 0
	  bne-      .loc_0x44
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0xC4
	  li        r4, 0x267
	  crclr     6, 0x6
	  bl        -0x428468

	.loc_0x44:
	  cmplwi    r30, 0
	  beq-      .loc_0x74
	  addi      r3, r30, 0x464
	  bl        -0x362F50
	  mr        r3, r30
	  bl        -0x414F0
	  mr        r4, r30
	  addi      r3, r29, 0x2C
	  bl        -0x416C4
	  addi      r3, r30, 0x464
	  bl        -0x362E90
	  b         .loc_0x88

	.loc_0x74:
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0xE8
	  li        r4, 0x272
	  crclr     6, 0x6
	  bl        -0x4284AC

	.loc_0x88:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80452B10
 * Size:	000058
 */
void Screen::Mgr::releaseCommand((Screen::MgrCommand*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r31, 0x464
	  bl        -0x362FC8
	  mr        r3, r31
	  bl        -0x41568
	  mr        r4, r31
	  addi      r3, r30, 0x44
	  bl        -0x4173C
	  addi      r3, r31, 0x464
	  bl        -0x362F08
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
 * Address:	........
 * Size:	00002C
 */
void Screen::Mgr::updateCurrentScene(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80452B68
 * Size:	0002D8
 */
void Screen::Mgr::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lis       r3, 0x804A
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  subi      r29, r3, 0x4738
	  stw       r28, 0x10(r1)
	  lwz       r4, 0x20(r31)
	  lwz       r28, 0x3C(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x58
	  lwz       r0, 0x1C(r4)
	  rlwinm.   r0,r0,0,19,19
	  beq-      .loc_0x58
	  mr        r3, r28
	  b         .loc_0x50

	.loc_0x4C:
	  lwz       r3, 0x4(r3)

	.loc_0x50:
	  cmplwi    r3, 0
	  bne+      .loc_0x4C

	.loc_0x58:
	  cmplwi    r28, 0
	  beq-      .loc_0x2A8
	  addi      r3, r28, 0x464
	  bl        -0x363064
	  lwz       r0, 0x18(r28)
	  lwz       r3, 0x1C(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x100
	  bge-      .loc_0x8C
	  cmpwi     r0, -0x1
	  beq-      .loc_0x2A0
	  bge-      .loc_0x98
	  b         .loc_0x28C

	.loc_0x8C:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x28C
	  b         .loc_0x1E4

	.loc_0x98:
	  lwz       r29, 0x1C(r28)
	  mr        r3, r31
	  bl        0xB54
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2A0
	  lbz       r0, 0x8(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0xC8
	  mr        r3, r31
	  bl        0xD4C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A0

	.loc_0xC8:
	  lwz       r5, 0x60(r28)
	  mr        r3, r31
	  mr        r4, r29
	  bl        0x33C
	  addi      r3, r28, 0x464
	  bl        -0x3630DC
	  mr        r3, r28
	  bl        -0x4167C
	  mr        r4, r28
	  addi      r3, r31, 0x44
	  bl        -0x41850
	  addi      r3, r28, 0x464
	  bl        -0x36301C
	  b         .loc_0x2A0

	.loc_0x100:
	  cmplwi    r3, 0
	  bne-      .loc_0x11C
	  addi      r3, r29, 0xC
	  addi      r5, r29, 0x1C
	  li        r4, 0x2D6
	  crclr     6, 0x6
	  bl        -0x428640

	.loc_0x11C:
	  lwz       r3, 0x1C(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x1A0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  lwz       r3, 0x1C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r3, r30
	  beq-      .loc_0x1A0
	  lwz       r3, 0x1C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  lwz       r3, 0x1C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r6, r3
	  mr        r7, r30
	  addi      r3, r29, 0xC
	  addi      r5, r29, 0x110
	  li        r4, 0x2DE
	  crclr     6, 0x6
	  bl        -0x4286C4

	.loc_0x1A0:
	  lwz       r3, 0x1C(r31)
	  lwz       r4, 0x1C(r28)
	  bl        -0x10F8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A0
	  addi      r3, r28, 0x464
	  bl        -0x3631B8
	  mr        r3, r28
	  bl        -0x41758
	  mr        r4, r28
	  addi      r3, r31, 0x44
	  bl        -0x4192C
	  addi      r3, r28, 0x464
	  bl        -0x3630F8
	  lwz       r3, 0x1C(r31)
	  bl        -0x135C
	  b         .loc_0x2A0

	.loc_0x1E4:
	  cmplwi    r3, 0
	  bne-      .loc_0x200
	  addi      r3, r29, 0xC
	  addi      r5, r29, 0x1C
	  li        r4, 0x2F3
	  crclr     6, 0x6
	  bl        -0x428724

	.loc_0x200:
	  lwz       r3, 0x1C(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x250
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  lwz       r3, 0x1C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r3, r30
	  beq-      .loc_0x250
	  addi      r3, r29, 0xC
	  addi      r5, r29, 0x1C
	  li        r4, 0x2F7
	  crclr     6, 0x6
	  bl        -0x428774

	.loc_0x250:
	  lwz       r3, 0x1C(r31)
	  lwz       r4, 0x1C(r28)
	  bl        -0x1130
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A0
	  addi      r3, r28, 0x464
	  bl        -0x363268
	  mr        r3, r28
	  bl        -0x41808
	  mr        r4, r28
	  addi      r3, r31, 0x44
	  bl        -0x419DC
	  addi      r3, r28, 0x464
	  bl        -0x3631A8
	  b         .loc_0x2A0

	.loc_0x28C:
	  addi      r3, r29, 0xC
	  addi      r5, r29, 0x1C
	  li        r4, 0x30D
	  crclr     6, 0x6
	  bl        -0x4287C4

	.loc_0x2A0:
	  addi      r3, r28, 0x464
	  bl        -0x3631C8

	.loc_0x2A8:
	  lwz       r3, 0x1C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x2B8
	  bl        -0x1434

	.loc_0x2B8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80452E40
 * Size:	0000B4
 */
void Screen::Mgr::draw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r5, -0x64AC(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x58
	  lwz       r0, 0x1F0(r5)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x58
	  lwz       r3, 0x1C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C

	.loc_0x58:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  mr        r4, r31
	  bl        -0x1338

	.loc_0x84:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x9C:
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
 * Address:	80452EF4
 * Size:	000004
 */
void Screen::Mgr::drawBG((Graphics&)) { }

/*
 * --INFO--
 * Address:	80452EF8
 * Size:	000008
 */
u32 Screen::Mgr::doGetSceneBase((long)) { return 0x0; }

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void Screen::Mgr::getSceneBase((long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void Screen::Mgr::createNewBackupSceneInfo((Screen::SceneBase*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80452F00
 * Size:	000078
 */
void Screen::Mgr::clearBackupSceneInfo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r31, 0x70(r3)
	  b         .loc_0x40

	.loc_0x24:
	  lwz       r30, 0x4(r31)
	  mr        r3, r31
	  bl        -0x4195C
	  mr        r4, r31
	  addi      r3, r29, 0x78
	  bl        -0x41B30
	  mr        r31, r30

	.loc_0x40:
	  cmplwi    r31, 0
	  bne+      .loc_0x24
	  li        r0, 0
	  stw       r0, 0x70(r29)
	  stw       r0, 0x6C(r29)
	  stw       r0, 0x68(r29)
	  stw       r0, 0x64(r29)
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
 * Address:	80452F78
 * Size:	00024C
 */
void Screen::Mgr::changeScene((Screen::SetSceneArg&, unsigned char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r30, r4
	  lis       r4, 0x804A
	  mr        r29, r3
	  mr        r3, r30
	  mr        r31, r5
	  subi      r27, r4, 0x4738
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x65F8(r13)
	  mr        r25, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  mr        r3, r0
	  li        r4, 0
	  bl        -0x997F0
	  lwz       r3, -0x65F8(r13)
	  li        r4, 0x1
	  bl        -0x997FC

	.loc_0x60:
	  lwz       r26, 0x1C(r29)
	  cmplwi    r26, 0
	  beq-      .loc_0x124
	  lbz       r0, 0x9(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x114
	  cmplwi    r26, 0
	  bne-      .loc_0x94
	  addi      r3, r27, 0xC
	  addi      r5, r27, 0x1C
	  li        r4, 0x357
	  crclr     6, 0x6
	  bl        -0x4289C8

	.loc_0x94:
	  lwz       r28, 0x88(r29)
	  cmplwi    r28, 0
	  bne-      .loc_0xB8
	  addi      r3, r27, 0xC
	  addi      r5, r27, 0x14C
	  li        r4, 0x368
	  crclr     6, 0x6
	  bl        -0x4289E8
	  b         .loc_0x108

	.loc_0xB8:
	  mr        r3, r28
	  bl        -0x41A64
	  mr        r3, r26
	  lwz       r26, 0x21C(r26)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r28)
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r3
	  mr        r4, r26
	  addi      r3, r28, 0x1C
	  bl        -0x44DED8
	  addi      r3, r28, 0x1C
	  bl        -0x143AB0

	.loc_0x108:
	  mr        r4, r28
	  addi      r3, r29, 0x60
	  bl        -0x41CC8

	.loc_0x114:
	  lwz       r3, 0x1C(r29)
	  bl        -0x179C
	  lwz       r3, 0x5C(r29)
	  bl        -0x42F968

	.loc_0x124:
	  lwz       r3, -0x77D4(r13)
	  bl        -0x42F8C0
	  stw       r3, 0x24(r29)
	  lwz       r3, -0x6450(r13)
	  lwz       r3, 0x4(r3)
	  lwz       r0, 0x38(r3)
	  stw       r0, 0x28(r29)
	  lwz       r26, -0x77D4(r13)
	  lwz       r3, 0x5C(r29)
	  bl        -0x42FB1C
	  mr        r3, r29
	  mr        r4, r25
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r28, r3
	  mr        r3, r26
	  bl        -0x42FB40
	  cmplwi    r28, 0
	  bne-      .loc_0x18C
	  addi      r3, r27, 0xC
	  addi      r5, r27, 0x138
	  li        r4, 0x34B
	  crclr     6, 0x6
	  bl        -0x428AC0

	.loc_0x18C:
	  lwz       r0, 0x20(r29)
	  stw       r0, 0x104(r28)
	  stw       r28, 0x1C(r29)
	  lwz       r3, 0x1C(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x238
	  lwz       r0, 0xC(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C0
	  lwz       r4, 0x21C(r3)
	  mr        r3, r29
	  mr        r5, r31
	  bl        0x64C

	.loc_0x1C0:
	  lwz       r3, 0x1C(r29)
	  stw       r29, 0x108(r3)
	  lwz       r0, 0x20(r29)
	  lwz       r3, 0x1C(r29)
	  stw       r0, 0x104(r3)
	  lwz       r3, 0x1C(r29)
	  bl        -0x1824
	  lwz       r3, 0x1C(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x238
	  lwz       r28, 0x70(r29)
	  b         .loc_0x21C

	.loc_0x200:
	  lwz       r27, 0x4(r28)
	  mr        r3, r28
	  bl        -0x41BB0
	  mr        r4, r28
	  addi      r3, r29, 0x78
	  bl        -0x41D84
	  mr        r28, r27

	.loc_0x21C:
	  cmplwi    r28, 0
	  bne+      .loc_0x200
	  li        r0, 0
	  stw       r0, 0x70(r29)
	  stw       r0, 0x6C(r29)
	  stw       r0, 0x68(r29)
	  stw       r0, 0x64(r29)

	.loc_0x238:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804531C4
 * Size:	000598
 */
void Screen::Mgr::setScene((Screen::SetSceneArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x44(r1)
	  stmw      r26, 0x28(r1)
	  mr        r27, r4
	  mr        r26, r3
	  subi      r31, r5, 0x4738
	  li        r28, 0x1
	  lbz       r0, 0x8(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  lwz       r3, 0x1C(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  beq-      .loc_0x57C
	  bl        -0x1434
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x57C

	.loc_0x4C:
	  lwz       r30, 0x54(r26)
	  cmplwi    r30, 0
	  bne-      .loc_0x6C
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0xC4
	  li        r4, 0x267
	  crclr     6, 0x6
	  bl        -0x428BEC

	.loc_0x6C:
	  cmplwi    r30, 0
	  beq-      .loc_0x9C
	  addi      r3, r30, 0x464
	  bl        -0x3636D4
	  mr        r3, r30
	  bl        -0x41C74
	  mr        r4, r30
	  addi      r3, r26, 0x2C
	  bl        -0x41E48
	  addi      r3, r30, 0x464
	  bl        -0x363614
	  b         .loc_0xB0

	.loc_0x9C:
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0xE8
	  li        r4, 0x272
	  crclr     6, 0x6
	  bl        -0x428C30

	.loc_0xB0:
	  cmplwi    r30, 0
	  bne-      .loc_0xC0
	  li        r28, 0
	  b         .loc_0x570

	.loc_0xC0:
	  addi      r3, r30, 0x464
	  bl        -0x363720
	  lbz       r0, 0x8(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x2A8
	  mr        r3, r26
	  bl        .loc_0x598
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x260
	  addi      r3, r31, 0x50
	  li        r0, 0
	  stw       r3, 0x14(r30)
	  addi      r3, r30, 0x464
	  stw       r0, 0x18(r30)
	  bl        -0x363754
	  cmplwi    r27, 0
	  beq-      .loc_0x164
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0x40
	  ble-      .loc_0x134
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x1C
	  li        r4, 0x102
	  crclr     6, 0x6
	  bl        -0x428CB4

	.loc_0x134:
	  addi      r0, r30, 0x20
	  mr        r3, r27
	  stw       r0, 0x1C(r30)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r3
	  mr        r4, r27
	  addi      r3, r30, 0x20
	  bl        -0x44E184
	  b         .loc_0x198

	.loc_0x164:
	  lwz       r0, 0x1C(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x190
	  addi      r3, r30, 0x464
	  bl        -0x3637D0
	  addi      r3, r30, 0x20
	  li        r4, 0xCD
	  li        r5, 0x40
	  bl        -0x44E294
	  addi      r3, r30, 0x464
	  bl        -0x36370C

	.loc_0x190:
	  li        r0, 0
	  stw       r0, 0x1C(r30)

	.loc_0x198:
	  addi      r3, r30, 0x464
	  bl        -0x36371C
	  lwz       r27, 0xC(r27)
	  addi      r3, r30, 0x464
	  bl        -0x363804
	  cmplwi    r27, 0
	  beq-      .loc_0x24C
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0x400
	  bgt-      .loc_0x208
	  addi      r0, r30, 0x64
	  mr        r3, r27
	  stw       r0, 0x60(r30)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r3
	  mr        r4, r27
	  addi      r3, r30, 0x64
	  bl        -0x44E220
	  lwz       r3, 0x60(r30)
	  bl        -0x143DF8
	  b         .loc_0x254

	.loc_0x208:
	  mr        r3, r27
	  addi      r4, r1, 0x14
	  bl        -0x144038
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r7, r3
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x28
	  addi      r6, r1, 0x14
	  li        r4, 0x125
	  li        r8, 0x400
	  crclr     6, 0x6
	  bl        -0x428DC8
	  b         .loc_0x254

	.loc_0x24C:
	  li        r0, 0
	  stw       r0, 0x60(r30)

	.loc_0x254:
	  addi      r3, r30, 0x464
	  bl        -0x3637D8
	  b         .loc_0x570

	.loc_0x260:
	  addi      r3, r30, 0x464
	  bl        -0x3638C0
	  mr        r3, r30
	  bl        -0x41E60
	  mr        r4, r30
	  addi      r3, r26, 0x44
	  bl        -0x42034
	  addi      r3, r30, 0x464
	  bl        -0x363800
	  lwz       r3, 0xC(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x294
	  bl        -0x143E88

	.loc_0x294:
	  lwz       r5, 0xC(r27)
	  mr        r3, r26
	  mr        r4, r27
	  bl        -0x4EC
	  b         .loc_0x570

	.loc_0x2A8:
	  lwz       r0, 0x1C(r26)
	  cmplwi    r0, 0
	  beq-      .loc_0x52C
	  lwz       r29, 0x54(r26)
	  cmplwi    r29, 0
	  bne-      .loc_0x2D4
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0xC4
	  li        r4, 0x267
	  crclr     6, 0x6
	  bl        -0x428E54

	.loc_0x2D4:
	  cmplwi    r29, 0
	  beq-      .loc_0x304
	  addi      r3, r29, 0x464
	  bl        -0x36393C
	  mr        r3, r29
	  bl        -0x41EDC
	  mr        r4, r29
	  addi      r3, r26, 0x2C
	  bl        -0x420B0
	  addi      r3, r29, 0x464
	  bl        -0x36387C
	  b         .loc_0x318

	.loc_0x304:
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0xE8
	  li        r4, 0x272
	  crclr     6, 0x6
	  bl        -0x428E98

	.loc_0x318:
	  cmplwi    r29, 0
	  beq-      .loc_0x500
	  addi      r3, r30, 0x464
	  bl        -0x363980
	  addi      r3, r31, 0x68
	  li        r0, 0x2
	  stw       r3, 0x14(r30)
	  addi      r3, r30, 0x464
	  stw       r0, 0x18(r30)
	  bl        -0x363998
	  lwz       r0, 0x1C(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x36C
	  addi      r3, r30, 0x464
	  bl        -0x3639AC
	  addi      r3, r30, 0x20
	  li        r4, 0xCD
	  li        r5, 0x40
	  bl        -0x44E470
	  addi      r3, r30, 0x464
	  bl        -0x3638E8

	.loc_0x36C:
	  li        r0, 0
	  addi      r3, r30, 0x464
	  stw       r0, 0x1C(r30)
	  bl        -0x3638F8
	  addi      r3, r30, 0x464
	  bl        -0x363900
	  addi      r3, r31, 0x50
	  li        r0, 0
	  stw       r3, 0x14(r29)
	  addi      r3, r29, 0x464
	  stw       r0, 0x18(r29)
	  bl        -0x3639F4
	  cmplwi    r27, 0
	  beq-      .loc_0x404
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0x40
	  ble-      .loc_0x3D4
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x1C
	  li        r4, 0x102
	  crclr     6, 0x6
	  bl        -0x428F54

	.loc_0x3D4:
	  addi      r0, r29, 0x20
	  mr        r3, r27
	  stw       r0, 0x1C(r29)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r3
	  mr        r4, r27
	  addi      r3, r29, 0x20
	  bl        -0x44E424
	  b         .loc_0x438

	.loc_0x404:
	  lwz       r0, 0x1C(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x430
	  addi      r3, r29, 0x464
	  bl        -0x363A70
	  addi      r3, r29, 0x20
	  li        r4, 0xCD
	  li        r5, 0x40
	  bl        -0x44E534
	  addi      r3, r29, 0x464
	  bl        -0x3639AC

	.loc_0x430:
	  li        r0, 0
	  stw       r0, 0x1C(r29)

	.loc_0x438:
	  addi      r3, r29, 0x464
	  bl        -0x3639BC
	  lwz       r27, 0xC(r27)
	  addi      r3, r29, 0x464
	  bl        -0x363AA4
	  cmplwi    r27, 0
	  beq-      .loc_0x4EC
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0x400
	  bgt-      .loc_0x4A8
	  addi      r0, r29, 0x64
	  mr        r3, r27
	  stw       r0, 0x60(r29)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r3
	  mr        r4, r27
	  addi      r3, r29, 0x64
	  bl        -0x44E4C0
	  lwz       r3, 0x60(r29)
	  bl        -0x144098
	  b         .loc_0x4F4

	.loc_0x4A8:
	  mr        r3, r27
	  addi      r4, r1, 0x8
	  bl        -0x1442D8
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r7, r3
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x28
	  addi      r6, r1, 0x8
	  li        r4, 0x125
	  li        r8, 0x400
	  crclr     6, 0x6
	  bl        -0x429068
	  b         .loc_0x4F4

	.loc_0x4EC:
	  li        r0, 0
	  stw       r0, 0x60(r29)

	.loc_0x4F4:
	  addi      r3, r29, 0x464
	  bl        -0x363A78
	  b         .loc_0x570

	.loc_0x500:
	  addi      r3, r30, 0x464
	  bl        -0x363B60
	  mr        r3, r30
	  bl        -0x42100
	  mr        r4, r30
	  addi      r3, r26, 0x44
	  bl        -0x422D4
	  addi      r3, r30, 0x464
	  bl        -0x363AA0
	  li        r28, 0
	  b         .loc_0x570

	.loc_0x52C:
	  addi      r3, r30, 0x464
	  bl        -0x363B8C
	  mr        r3, r30
	  bl        -0x4212C
	  mr        r4, r30
	  addi      r3, r26, 0x44
	  bl        -0x42300
	  addi      r3, r30, 0x464
	  bl        -0x363ACC
	  lwz       r3, 0xC(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x560
	  bl        -0x144154

	.loc_0x560:
	  lwz       r5, 0xC(r27)
	  mr        r3, r26
	  mr        r4, r27
	  bl        -0x7B8

	.loc_0x570:
	  addi      r3, r30, 0x464
	  bl        -0x363AF4
	  b         .loc_0x580

	.loc_0x57C:
	  li        r28, 0

	.loc_0x580:
	  mr        r3, r28
	  lmw       r26, 0x28(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x598:
	*/
}

/*
 * --INFO--
 * Address:	8045375C
 * Size:	000024
 */
void Screen::Mgr::isCurrentSceneLoading(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x1C(r3)
	  li        r3, 0
	  cmplwi    r4, 0
	  beqlr-
	  lwz       r0, 0x120(r4)
	  cmpwi     r0, 0x1
	  bnelr-
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80453780
 * Size:	000160
 */
void Screen::Mgr::copyDispMember((unsigned char*, unsigned char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r27, 0x3C(r1)
	  mr        r27, r3
	  mr        r31, r4
	  mr        r30, r5
	  lwz       r3, 0x1C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  lwz       r3, 0x1C(r27)
	  mr        r29, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r27, r4
	  mr        r28, r0
	  mr        r3, r30
	  mr        r4, r29
	  mr        r6, r27
	  mr        r5, r28
	  bl        -0x1444CC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x90
	  mr        r3, r30
	  mr        r4, r29
	  mr        r6, r27
	  mr        r5, r28
	  bl        -0x144344
	  cmplwi    r3, 0
	  beq-      .loc_0xC0

	.loc_0x90:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r3
	  mr        r3, r31
	  mr        r4, r30
	  bl        -0x44E694
	  mr        r3, r31
	  bl        -0x14426C
	  b         .loc_0x14C

	.loc_0xC0:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r5, r1, 0x14
	  li        r3, 0
	  bl        -0x150C94
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r5, r1, 0x8
	  bl        -0x150CB0
	  mr        r4, r29
	  addi      r5, r1, 0x2C
	  li        r3, 0
	  bl        -0x150CC0
	  mr        r4, r27
	  mr        r3, r28
	  addi      r5, r1, 0x20
	  bl        -0x150CD0
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  subi      r5, r4, 0x45C8
	  addi      r6, r1, 0x2C
	  subi      r3, r3, 0x472C
	  addi      r7, r1, 0x20
	  addi      r8, r1, 0x14
	  addi      r9, r1, 0x8
	  li        r4, 0x44A
	  crclr     6, 0x6
	  bl        -0x429288

	.loc_0x14C:
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804538E0
 * Size:	000034
 */
void Screen::Mgr::setDispMember((og::Screen::DispMemberBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x20
	  bl        -0x1838
	  b         .loc_0x24

	.loc_0x20:
	  li        r3, 0

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80453914
 * Size:	00001C
 */
void Screen::Mgr::getDispMember(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x14
	  lwz       r3, 0x21C(r3)
	  blr

	.loc_0x14:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80453930
 * Size:	000040
 */
void Screen::Mgr::getSceneType(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x30

	.loc_0x2C:
	  li        r3, 0

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80453970
 * Size:	000028
 */
void Screen::Mgr::isSceneFinish(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x20
	  lwz       r0, 0x120(r3)
	  subfic    r0, r0, 0x4
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr

	.loc_0x20:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80453998
 * Size:	000038
 */
void Screen::Mgr::getSceneFinishState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  lwz       r3, 0x1C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x24
	  bl        -0x17C4
	  mr        r0, r3

	.loc_0x24:
	  mr        r3, r0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804539D0
 * Size:	00001C
 */
void Screen::Mgr::setGamePad((Controller*))
{
	/*
	.loc_0x0:
	  stw       r4, 0x20(r3)
	  lwz       r4, 0x1C(r3)
	  cmplwi    r4, 0
	  beqlr-
	  lwz       r0, 0x20(r3)
	  stw       r0, 0x104(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804539EC
 * Size:	000034
 */
void Screen::Mgr::setBackupScene(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x20
	  bl        -0x1A44
	  b         .loc_0x24

	.loc_0x20:
	  li        r3, 0

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80453A20
 * Size:	000038
 */
void Screen::Mgr::isAnyReservation( const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x3C(r3)
	  b         .loc_0x28

	.loc_0x8:
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x1C
	  cmpwi     r0, 0x1
	  bne-      .loc_0x24

	.loc_0x1C:
	  li        r3, 0x1
	  blr

	.loc_0x24:
	  lwz       r3, 0x4(r3)

	.loc_0x28:
	  cmplwi    r3, 0
	  bne+      .loc_0x8
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80453A58
 * Size:	000068
 */
void Screen::MgrCommand::__dt(void)
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
	  beq-      .loc_0x4C
	  lis       r4, 0x804F
	  subi      r0, r4, 0x28CC
	  stw       r0, 0x0(r30)
	  bl        -0x424B4
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x42508
	  extsh.    r0, r31
	  ble-      .loc_0x4C
	  mr        r3, r30
	  bl        -0x42F9EC

	.loc_0x4C:
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
 * Address:	80453AC0
 * Size:	000028
 */
void __sinit_screenMgr_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804F
	  stw       r0, -0x63A0(r13)
	  stfsu     f0, -0x2908(r3)
	  stfs      f0, -0x639C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
