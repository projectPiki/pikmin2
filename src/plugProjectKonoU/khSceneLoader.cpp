#include "types.h"

/*
 * --INFO--
 * Address:	803FBAD4
 * Size:	0001F8
 */
void kh::Screen::createScene_Koono(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  subi      r0, r3, 0x4E20
	  cmplwi    r0, 0xA
	  li        r3, 0
	  stw       r31, 0xC(r1)
	  bgt-      .loc_0x1E4
	  lis       r4, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r4, r4, 0x5998
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  li        r3, 0x220
	  bl        -0x3D7C6C
	  mr.       r31, r3
	  beq-      .loc_0x58
	  bl        0x55C74
	  lis       r3, 0x804F
	  subi      r0, r3, 0x5A7C
	  stw       r0, 0x0(r31)

	.loc_0x58:
	  mr        r3, r31
	  b         .loc_0x1E4
	  li        r3, 0x220
	  bl        -0x3D7C94
	  mr.       r31, r3
	  beq-      .loc_0x80
	  bl        0x55C4C
	  lis       r3, 0x804F
	  subi      r0, r3, 0x545C
	  stw       r0, 0x0(r31)

	.loc_0x80:
	  mr        r3, r31
	  b         .loc_0x1E4
	  li        r3, 0x224
	  bl        -0x3D7CBC
	  mr.       r31, r3
	  beq-      .loc_0xB0
	  bl        0x55C24
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0x5354
	  stw       r3, 0x0(r31)
	  stw       r0, 0x220(r31)

	.loc_0xB0:
	  mr        r3, r31
	  b         .loc_0x1E4
	  li        r3, 0x220
	  bl        -0x3D7CEC
	  mr.       r31, r3
	  beq-      .loc_0xD8
	  bl        0x55BF4
	  lis       r3, 0x804F
	  subi      r0, r3, 0x587C
	  stw       r0, 0x0(r31)

	.loc_0xD8:
	  mr        r3, r31
	  b         .loc_0x1E4
	  li        r3, 0x220
	  bl        -0x3D7D14
	  mr.       r31, r3
	  beq-      .loc_0x100
	  bl        0x55BCC
	  lis       r3, 0x804F
	  subi      r0, r3, 0x58CC
	  stw       r0, 0x0(r31)

	.loc_0x100:
	  mr        r3, r31
	  b         .loc_0x1E4
	  li        r3, 0x23C
	  bl        -0x3D7D3C
	  mr.       r0, r3
	  beq-      .loc_0x120
	  bl        0xEC6C
	  mr        r0, r3

	.loc_0x120:
	  mr        r3, r0
	  b         .loc_0x1E4
	  li        r3, 0x220
	  bl        -0x3D7D5C
	  mr.       r31, r3
	  beq-      .loc_0x148
	  bl        0x55B84
	  lis       r3, 0x804F
	  subi      r0, r3, 0x4E00
	  stw       r0, 0x0(r31)

	.loc_0x148:
	  mr        r3, r31
	  b         .loc_0x1E4
	  li        r3, 0x220
	  bl        -0x3D7D84
	  mr.       r31, r3
	  beq-      .loc_0x170
	  bl        0x55B5C
	  lis       r3, 0x804F
	  subi      r0, r3, 0x4CF8
	  stw       r0, 0x0(r31)

	.loc_0x170:
	  mr        r3, r31
	  b         .loc_0x1E4
	  li        r3, 0x220
	  bl        -0x3D7DAC
	  mr.       r31, r3
	  beq-      .loc_0x198
	  bl        0x55B34
	  lis       r3, 0x804F
	  subi      r0, r3, 0x591C
	  stw       r0, 0x0(r31)

	.loc_0x198:
	  mr        r3, r31
	  b         .loc_0x1E4
	  li        r3, 0x238
	  bl        -0x3D7DD4
	  mr.       r0, r3
	  beq-      .loc_0x1B8
	  bl        0x14B68
	  mr        r0, r3

	.loc_0x1B8:
	  mr        r3, r0
	  b         .loc_0x1E4
	  li        r3, 0x220
	  bl        -0x3D7DF4
	  mr.       r31, r3
	  beq-      .loc_0x1E0
	  bl        0x55AEC
	  lis       r3, 0x804F
	  subi      r0, r3, 0x596C
	  stw       r0, 0x0(r31)

	.loc_0x1E0:
	  mr        r3, r31

	.loc_0x1E4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FBCCC
 * Size:	00000C
 */
void kh::Screen::SceneDayEndResultTitl::getResName() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x804A
	  subi      r3, r3, 0x7B40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FBCD8
 * Size:	000008
 */
u32 kh::Screen::SceneDayEndResultTitl::getSceneType() { return 0x4E2A; }

/*
 * --INFO--
 * Address:	803FBCE0
 * Size:	000008
 */
u32 kh::Screen::SceneDayEndResultTitl::getOwnerID() { return 0x4B48; }

/*
 * --INFO--
 * Address:	803FBCE8
 * Size:	000014
 */
void kh::Screen::SceneDayEndResultTitl::getMemberID()
{
	/*
	.loc_0x0:
	  lis       r4, 0x5449
	  lis       r3, 0x4445
	  addi      r4, r4, 0x544C
	  addi      r3, r3, 0x525F
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FBCFC
 * Size:	000058
 */
void kh::Screen::SceneDayEndResultTitl::doCreateObj(JKRArchive*)
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
	  li        r3, 0x54
	  bl        -0x3D7E78
	  mr.       r4, r3
	  beq-      .loc_0x34
	  bl        0xE4CC
	  mr        r4, r3

	.loc_0x34:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x5603C
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
 * Address:	803FBD54
 * Size:	00000C
 */
void kh::Screen::SceneWinLose::getResName() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x804A
	  subi      r3, r3, 0x7B28
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FBD60
 * Size:	000008
 */
u32 kh::Screen::SceneWinLose::getSceneType() { return 0x4E28; }

/*
 * --INFO--
 * Address:	803FBD68
 * Size:	000008
 */
u32 kh::Screen::SceneWinLose::getOwnerID() { return 0x4B48; }

/*
 * --INFO--
 * Address:	803FBD70
 * Size:	000014
 */
void kh::Screen::SceneWinLose::getMemberID()
{
	/*
	.loc_0x0:
	  lis       r4, 0x4C4F
	  lis       r3, 0x5749
	  addi      r4, r4, 0x5345
	  addi      r3, r3, 0x4E5F
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FBD84
 * Size:	000058
 */
void kh::Screen::SceneWinLose::doCreateObj(JKRArchive*)
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
	  li        r3, 0xA0
	  bl        -0x3D7F00
	  mr.       r4, r3
	  beq-      .loc_0x34
	  bl        0x13F38
	  mr        r4, r3

	.loc_0x34:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x55FB4
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
 * Address:	803FBDDC
 * Size:	00000C
 */
void kh::Screen::SceneDayEndResultIncP::getResName() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x804A
	  subi      r3, r3, 0x7B18
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FBDE8
 * Size:	000008
 */
u32 kh::Screen::SceneDayEndResultIncP::getSceneType() { return 0x4E24; }

/*
 * --INFO--
 * Address:	803FBDF0
 * Size:	000008
 */
u32 kh::Screen::SceneDayEndResultIncP::getOwnerID() { return 0x4B48; }

/*
 * --INFO--
 * Address:	803FBDF8
 * Size:	000014
 */
void kh::Screen::SceneDayEndResultIncP::getMemberID()
{
	/*
	.loc_0x0:
	  lis       r4, 0x494E
	  lis       r3, 0x4445
	  addi      r4, r4, 0x4350
	  addi      r3, r3, 0x525F
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FBE0C
 * Size:	000058
 */
void kh::Screen::SceneDayEndResultIncP::doCreateObj(JKRArchive*)
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
	  li        r3, 0x158
	  bl        -0x3D7F88
	  mr.       r4, r3
	  beq-      .loc_0x34
	  bl        0x9704
	  mr        r4, r3

	.loc_0x34:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x55F2C
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
 * Address:	803FBE64
 * Size:	00000C
 */
void kh::Screen::SceneDayEndResultItem::getResName() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x804A
	  subi      r3, r3, 0x7B00
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FBE70
 * Size:	000008
 */
u32 kh::Screen::SceneDayEndResultItem::getSceneType() { return 0x4E23; }

/*
 * --INFO--
 * Address:	803FBE78
 * Size:	000008
 */
u32 kh::Screen::SceneDayEndResultItem::getOwnerID() { return 0x4B48; }

/*
 * --INFO--
 * Address:	803FBE80
 * Size:	000014
 */
void kh::Screen::SceneDayEndResultItem::getMemberID()
{
	/*
	.loc_0x0:
	  lis       r4, 0x4954
	  lis       r3, 0x4445
	  addi      r4, r4, 0x454D
	  addi      r3, r3, 0x525F
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FBE94
 * Size:	000058
 */
void kh::Screen::SceneDayEndResultItem::doCreateObj(JKRArchive*)
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
	  li        r3, 0xFC
	  bl        -0x3D8010
	  mr.       r4, r3
	  beq-      .loc_0x34
	  bl        0x75CC
	  mr        r4, r3

	.loc_0x34:
	  mr        r3, r30
	  mr        r5, r31
	  bl        0x55EA4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
