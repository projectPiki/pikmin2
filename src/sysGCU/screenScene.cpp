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
 * Address:	80451790
 * Size:	000134
 */
void Screen::SceneBase::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x804F
	  lis       r4, 0x804F
	  stw       r0, 0x34(r1)
	  subi      r0, r4, 0x2974
	  li        r9, 0
	  subi      r6, r5, 0x2980
	  stw       r31, 0x2C(r1)
	  lis       r4, 0x804F
	  subi      r5, r4, 0x2918
	  mr        r31, r3
	  stw       r0, 0x0(r3)
	  lis       r3, 0x804F
	  subi      r0, r3, 0x2924
	  addi      r4, r2, 0x2810
	  stw       r9, 0x104(r31)
	  addi      r3, r31, 0x128
	  stw       r9, 0x108(r31)
	  lwz       r8, 0x0(r6)
	  lwz       r7, 0x4(r6)
	  lwz       r6, 0x8(r6)
	  stw       r8, 0x10(r1)
	  stw       r5, 0x10C(r31)
	  stw       r0, 0x10C(r31)
	  stw       r31, 0x110(r31)
	  stw       r8, 0x114(r31)
	  stw       r7, 0x118(r31)
	  stw       r6, 0x11C(r31)
	  stw       r7, 0x14(r1)
	  stw       r6, 0x18(r1)
	  stw       r9, 0x120(r31)
	  bl        -0x1E65C
	  li        r0, 0
	  li        r3, 0x18
	  stw       r0, 0x218(r31)
	  bl        -0x42D97C
	  mr.       r0, r3
	  beq-      .loc_0xA4
	  bl        0x2844
	  mr        r0, r3

	.loc_0xA4:
	  stw       r0, 0x218(r31)
	  li        r3, 0x400
	  bl        -0x42D890
	  stw       r3, 0x21C(r31)
	  lwz       r0, 0x21C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xDC
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4760
	  li        r4, 0x71
	  subi      r5, r5, 0x4750
	  crclr     6, 0x6
	  bl        -0x427228

	.loc_0xDC:
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  addi      r0, r4, 0x1148
	  li        r6, 0
	  stw       r0, 0x8(r1)
	  subi      r0, r3, 0x7DD8
	  addi      r4, r1, 0x8
	  li        r5, 0x8
	  stw       r6, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x21C(r31)
	  bl        -0x44C6FC
	  addi      r3, r31, 0x4
	  addi      r4, r2, 0x2818
	  crclr     6, 0x6
	  bl        -0x38A470
	  lwz       r0, 0x34(r1)
	  mr        r3, r31
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804518C4
 * Size:	000030
 */
void Screen::SceneBase::searchObj((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  mr        r4, r6
	  lwz       r3, 0x218(r3)
	  bl        0x28F0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804518F4
 * Size:	000038
 */
void Screen::SceneBase::destroy(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x158(r3)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x28
	  lwz       r3, -0x6450(r13)
	  addi      r4, r4, 0x128
	  bl        -0x1DDFC

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045192C
 * Size:	0000BC
 */
void Screen::SceneBase::create(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x158(r3)
	  cmpwi     r0, -0x1
	  bne-      .loc_0xA8
	  lwz       r3, -0x6514(r13)
	  bl        -0x2EA98
	  stfs      f1, 0x124(r31)
	  addi      r0, r31, 0x10C
	  mr        r3, r31
	  stw       r0, 0x1D8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  extsb.    r0, r0
	  beq-      .loc_0x8C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x4
	  bl        -0x139A50
	  lwz       r3, -0x6450(r13)
	  addi      r4, r31, 0x128
	  addi      r5, r31, 0x4
	  li        r6, 0x1
	  bl        -0x1E01C
	  b         .loc_0xA0

	.loc_0x8C:
	  lwz       r3, -0x6450(r13)
	  addi      r4, r31, 0x128
	  addi      r5, r2, 0x281C
	  li        r6, 0x1
	  bl        -0x1E034

	.loc_0xA0:
	  li        r0, 0x1
	  stw       r0, 0x120(r31)

	.loc_0xA8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804519E8
 * Size:	00015C
 */
void Screen::SceneBase::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  lwz       r0, 0x120(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x144
	  bge-      .loc_0x38
	  cmpwi     r0, 0
	  beq-      .loc_0x144
	  bge-      .loc_0x48
	  b         .loc_0x128

	.loc_0x38:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x144
	  bge-      .loc_0x128
	  b         .loc_0x110

	.loc_0x48:
	  lwz       r3, -0x6450(r13)
	  addi      r4, r31, 0x128
	  li        r5, 0
	  bl        -0x1DE4C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x144
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  extsb.    r0, r0
	  beq-      .loc_0xFC
	  addi      r3, r31, 0x128
	  bl        -0x1E5D0
	  mr.       r30, r3
	  bne-      .loc_0xAC
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4760
	  li        r4, 0xC2
	  subi      r5, r5, 0x4750
	  crclr     6, 0x6
	  bl        -0x427450

	.loc_0xAC:
	  addi      r3, r31, 0x128
	  bl        -0x1E6F4
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0x1
	  bl        -0x436914
	  mr.       r30, r3
	  bne-      .loc_0xE8
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4760
	  li        r4, 0xC5
	  subi      r5, r5, 0x4750
	  crclr     6, 0x6
	  bl        -0x42748C

	.loc_0xE8:
	  mr        r3, r31
	  mr        r4, r30
	  bl        0x270
	  addi      r3, r31, 0x128
	  bl        -0x1E6CC

	.loc_0xFC:
	  li        r0, 0x2
	  stw       r0, 0x120(r31)
	  lwz       r3, -0x6514(r13)
	  bl        -0x2EC38
	  b         .loc_0x144

	.loc_0x110:
	  bl        .loc_0x15C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x144
	  li        r0, 0x4
	  stw       r0, 0x120(r31)
	  b         .loc_0x144

	.loc_0x128:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4760
	  li        r4, 0xE2
	  subi      r5, r5, 0x4750
	  crclr     6, 0x6
	  bl        -0x4274E8

	.loc_0x144:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x15C:
	*/
}

/*
 * --INFO--
 * Address:	80451B44
 * Size:	000040
 */
void Screen::SceneBase::updateActive(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x218(r31)
	  bl        0x25A0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80451B84
 * Size:	000004
 */
void Screen::SceneBase::doUpdateActive(void) { }

/*
 * --INFO--
 * Address:	80451B88
 * Size:	000090
 */
void Screen::SceneBase::draw((Graphics&))
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
	  lwz       r0, 0x120(r3)
	  cmpwi     r0, 0x3
	  bge-      .loc_0x34
	  cmpwi     r0, 0
	  bge-      .loc_0x78
	  b         .loc_0x5C

	.loc_0x34:
	  cmpwi     r0, 0x5
	  bge-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x218(r30)
	  mr        r4, r31
	  bl        0x2598
	  b         .loc_0x78

	.loc_0x5C:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4760
	  li        r4, 0x11D
	  subi      r5, r5, 0x4750
	  crclr     6, 0x6
	  bl        -0x4275BC

	.loc_0x78:
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
 * Address:	80451C18
 * Size:	000050
 */
void Screen::SceneBase::start((Screen::StartSceneArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x120(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x3C
	  cmpwi     r0, 0x1
	  beq-      .loc_0x3C
	  li        r0, 0x3
	  stw       r0, 0x120(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x40

	.loc_0x3C:
	  li        r3, 0

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80451C68
 * Size:	000028
 */
void Screen::SceneBase::doStart((Screen::StartSceneArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x218(r3)
	  bl        0x25F0
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80451C90
 * Size:	000068
 */
void Screen::SceneBase::end((Screen::EndSceneArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x120(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x20
	  cmpwi     r0, 0x2
	  bne-      .loc_0x30

	.loc_0x20:
	  li        r0, 0x4
	  li        r4, 0x1
	  stw       r0, 0x120(r3)
	  b         .loc_0x54

	.loc_0x30:
	  cmpwi     r0, 0x1
	  beq-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  b         .loc_0x54

	.loc_0x50:
	  li        r4, 0

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r4
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80451CF8
 * Size:	000024
 */
void Screen::SceneBase::doEnd((Screen::EndSceneArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x218(r3)
	  bl        0x25D8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80451D1C
 * Size:	00002C
 */
void Screen::SceneBase::userCallBackFunc((Resource::MgrCommand*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
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
 * Address:	80451D48
 * Size:	00002C
 */
void Screen::SceneBase::createObj((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
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
 * Address:	80451D74
 * Size:	00005C
 */
void Screen::SceneBase::registObj((Screen::ObjBase*, JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  mr        r5, r6
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r3, 0x218(r3)
	  bl        0x2318
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80451DD0
 * Size:	000078
 */
void Screen::SceneBase::confirmSetScene((Screen::SetSceneArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x218(r3)
	  bl        0x2560
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  li        r31, 0x1

	.loc_0x58:
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
 * Address:	80451E48
 * Size:	000078
 */
void Screen::SceneBase::confirmStartScene((Screen::StartSceneArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x218(r3)
	  bl        0x2564
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  li        r31, 0x1

	.loc_0x58:
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
 * Address:	80451EC0
 * Size:	000070
 */
void Screen::SceneBase::confirmEndScene((Screen::EndSceneArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r4, 0x8(r1)
	  lwz       r3, 0x218(r3)
	  bl        0x256C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54
	  li        r31, 0x1

	.loc_0x54:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80451F30
 * Size:	000030
 */
void Screen::SceneBase::setScene((Screen::SetSceneArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x108(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
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
 * Address:	80451F60
 * Size:	000030
 */
void Screen::SceneBase::startScene((Screen::StartSceneArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x108(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	80451F90
 * Size:	000030
 */
void Screen::SceneBase::endScene((Screen::EndSceneArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x108(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	80451FC0
 * Size:	000100
 */
void Screen::SceneBase::setBackupScene(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  stw       r29, 0x24(r1)
	  li        r29, 0
	  lwz       r4, 0x108(r3)
	  lwz       r5, 0x70(r4)
	  cmplwi    r5, 0
	  beq-      .loc_0xE0
	  lwz       r7, 0x18(r5)
	  lis       r4, 0x804E
	  subi      r0, r4, 0x7B98
	  lis       r4, 0x804E
	  stw       r0, 0x8(r1)
	  subi      r4, r4, 0x7BA8
	  addi      r0, r5, 0x1C
	  li        r6, 0
	  li        r5, 0x1
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0xC(r1)
	  stb       r6, 0x10(r1)
	  stb       r5, 0x11(r1)
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x108(r30)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  mr        r29, r3
	  beq-      .loc_0xE0
	  lwz       r31, 0x108(r30)
	  lwz       r30, 0x70(r31)
	  cmplwi    r30, 0
	  bne-      .loc_0xCC
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4744
	  li        r4, 0x149
	  subi      r5, r5, 0x4750
	  crclr     6, 0x6
	  bl        -0x427A48

	.loc_0xCC:
	  mr        r3, r30
	  bl        -0x40AC0
	  mr        r4, r30
	  addi      r3, r31, 0x78
	  bl        -0x40C94

	.loc_0xE0:
	  lwz       r0, 0x34(r1)
	  mr        r3, r29
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void Screen::SceneBase::getBackupSceneType(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804520C0
 * Size:	000130
 */
void Screen::SceneBase::setDispMember((og::Screen::DispMemberBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  li        r29, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  mr        r31, r4
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r28
	  mr        r6, r31
	  mr        r5, r30
	  bl        -0x142DFC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB0
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  mr        r30, r4
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r28
	  mr        r6, r30
	  mr        r5, r31
	  bl        -0x142CA4
	  cmplwi    r3, 0
	  beq-      .loc_0xDC

	.loc_0xB0:
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r3
	  lwz       r3, 0x21C(r27)
	  mr        r4, r28
	  bl        -0x44CFF4
	  li        r29, 0x1
	  b         .loc_0x118

	.loc_0xDC:
	  lis       r4, 0x4F
	  lis       r6, 0x554D
	  mr        r3, r28
	  li        r5, 0x44
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4D59
	  bl        -0x142E98
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x118
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  mr        r29, r3

	.loc_0x118:
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
 * Address:	804521F0
 * Size:	000040
 */
void Screen::SceneBase::getFinishState(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x120(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x2C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x30

	.loc_0x2C:
	  li        r3, -0x2

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80452230
 * Size:	000054
 */
void Screen::SceneBase::getGamePad( const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x108(r3)
	  lwz       r0, 0x20(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4744
	  li        r4, 0x118
	  subi      r5, r5, 0x4750
	  crclr     6, 0x6
	  bl        -0x427C28

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x20(r31)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80452284
 * Size:	000044
 */
void Screen::SceneBase::setColorBG( (unsigned char, unsigned char, unsigned char, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stb       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  stb       r5, 0x9(r1)
	  stb       r6, 0xA(r1)
	  stb       r7, 0xB(r1)
	  lwz       r3, 0x108(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	804522C8
 * Size:	000004
 */
void Screen::Mgr::setColorBG( (JUtility::TColor &))
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void Screen::SceneBase::setBGMode( (int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804522CC
 * Size:	000004
 */
void Screen::Mgr::setBGMode( (int))
{
}

/*
 * --INFO--
 * Address:	804522D0
 * Size:	000030
 */
void Delegate1<Screen::SceneBase, Resource::MgrCommand *>::invoke(Resource::MgrCommand *)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r5, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x3907C4
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
