#include "GameFlow.h"

// TODO: Finish
struct {
	char* name;
	u32 _04;
} sSectionInfo[] = {
	{ "Root Menu", 0x00000000 },         { "Object Editor", 0x01010000 },
	{ "Single Game", 0x02010000 },       { "Challenge Game", 0x03010000 },
	{ "Test Challenge", 0x04010100 },    { "Teki Test", 0x05010000 },
	{ "Anim Editor", 0x06010000 },       { "Map Parts Editor", 0x07010000 },
	{ "Tex Viewer", 0x08010000 },        { "Ogawa", 0x09010000 },
	{ "Ogawa Screen Test", 0x1C010000 }, { "Hikino", 0x0A010000 },
	{ "Yamashita", 0x0B010000 },         { "Nishimura", 0x0C010000 },
	{ "Nishimura2", 0x0D010000 },        { "Morimura", 0x0E010000 },
	{ "2D Debug", 0x1A010100 },          { "Fujino", 0x1A010100 },
	{ "Cave Editor", 6, 1, 0, 0 },       { "JStudio CameraEditor", 7, 1, 0, 0 },
	{ "Movie Test", 6, 1, 0, 0 },        { "JStudio Kando Test", 7, 1, 0, 0 },
	{ "Pellet Test", 6, 1, 0, 0 },       { "Main Title", 7, 1, 0, 0 },
	{ "Message Previewer", 6, 1, 0, 0 }, { "Ebi Main Title", 7, 1, 0, 0 },
	{ "E3 Thanks Section", 6, 1, 0, 0 }, { "Ebimun Effect", 7, 1, 0, 0 },
	{ "2D Debug2", 7, 1, 0, 0 }
};

u32 GameFlow::mActiveSectionFlag;

/*
 * --INFO--
 * Address:	804241A4
 * Size:	00002C
 */
GameFlow::GameFlow()
{
	mActiveSectionFlag = 21;
	m_section          = nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void GameFlow::~GameFlow()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804241D0
 * Size:	0000DC
 */
void GameFlow::run()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr        r29, r3

	.loc_0x1C:
	  lwz       r31, -0x77D4(r13)
	  li        r0, 0
	  stw       r0, 0x8(r1)
	  cmplwi    r31, 0
	  stw       r0, 0xC(r1)
	  li        r7, -0x1
	  li        r6, 0x1
	  li        r0, 0
	  stw       r31, 0x18(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stw       r7, 0x1C(r1)
	  li        r5, -0x1
	  stb       r6, 0x20(r1)
	  stw       r0, 0x24(r1)
	  stw       r7, 0x28(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x400A8C
	  mr        r4, r31
	  li        r5, 0x1
	  bl        -0x404384
	  mr        r30, r3
	  mr        r3, r29
	  bl        .loc_0xDC
	  lwz       r3, 0x4(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r29)
	  bl        -0x30C
	  mr        r3, r30
	  bl        -0x400CDC
	  mr        r3, r31
	  bl        -0x400CF4
	  addi      r3, r1, 0x8
	  li        r4, -0x1
	  bl        -0x4001A8
	  b         .loc_0x1C

	.loc_0xDC:
	*/
}

/*
 * --INFO--
 * Address:	804242AC
 * Size:	0000C0
 */
void GameFlow::setSection()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, -0x77D4(r13)
	  bl        -0x400B10
	  lwz       r6, -0x7988(r13)
	  cmpwi     r6, 0x15
	  beq-      .loc_0x38
	  bge-      .loc_0x90
	  cmpwi     r6, 0
	  beq-      .loc_0x64
	  b         .loc_0x90

	.loc_0x38:
	  li        r3, 0xE8
	  bl        -0x400444
	  mr.       r0, r3
	  beq-      .loc_0x54
	  lwz       r4, -0x77D4(r13)
	  bl        0x23A74
	  mr        r0, r3

	.loc_0x54:
	  stw       r0, 0x4(r31)
	  li        r0, 0
	  stw       r0, -0x7988(r13)
	  b         .loc_0xAC

	.loc_0x64:
	  li        r3, 0x44
	  bl        -0x400470
	  mr.       r0, r3
	  beq-      .loc_0x80
	  lwz       r4, -0x77D4(r13)
	  bl        0x287A8
	  mr        r0, r3

	.loc_0x80:
	  stw       r0, 0x4(r31)
	  li        r0, 0x16
	  stw       r0, -0x7988(r13)
	  b         .loc_0xAC

	.loc_0x90:
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  subi      r5, r4, 0x6428
	  subi      r3, r3, 0x6438
	  li        r4, 0xBC
	  crclr     6, 0x6
	  bl        -0x3F9D14

	.loc_0xAC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042436C
 * Size:	0000B0
 */
void GameFlow::getSectionInfo(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  blt-      .loc_0x30
	  cmpwi     r30, 0x23
	  bge-      .loc_0x30
	  li        r0, 0x1

	.loc_0x30:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x54
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x6438
	  li        r4, 0xC9
	  subi      r5, r5, 0x640C
	  crclr     6, 0x6
	  bl        -0x3F9D7C

	.loc_0x54:
	  lis       r3, 0x804F
	  li        r0, 0x23
	  subi      r3, r3, 0x4404
	  li        r4, 0
	  mtctr     r0

	.loc_0x68:
	  lbz       r0, 0x4(r3)
	  cmpw      r30, r0
	  bne-      .loc_0x88
	  lis       r3, 0x804F
	  rlwinm    r4,r4,3,0,28
	  subi      r0, r3, 0x4404
	  add       r31, r0, r4
	  b         .loc_0x94

	.loc_0x88:
	  addi      r3, r3, 0x8
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x68

	.loc_0x94:
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
 * Address:	8042441C
 * Size:	000148
 */
void GameFlow::createSection(JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, -0x7988(r13)
	  cmpwi     r0, 0x16
	  beq-      .loc_0x74
	  bge-      .loc_0x3C
	  cmpwi     r0, 0x3
	  beq-      .loc_0xBC
	  bge-      .loc_0x10C
	  cmpwi     r0, 0x2
	  bge-      .loc_0x98
	  b         .loc_0x10C

	.loc_0x3C:
	  cmpwi     r0, 0x1E
	  beq-      .loc_0xE4
	  bge-      .loc_0x10C
	  cmpwi     r0, 0x18
	  bge-      .loc_0x10C
	  li        r3, 0x1B0
	  bl        -0x4005CC
	  mr.       r0, r3
	  beq-      .loc_0x6C
	  mr        r4, r31
	  bl        0x28738
	  mr        r0, r3

	.loc_0x6C:
	  mr        r3, r0
	  b         .loc_0x12C

	.loc_0x74:
	  li        r3, 0x2F70
	  bl        -0x4005F0
	  mr.       r0, r3
	  beq-      .loc_0x90
	  mr        r4, r31
	  bl        0x25B98
	  mr        r0, r3

	.loc_0x90:
	  mr        r3, r0
	  b         .loc_0x12C

	.loc_0x98:
	  li        r3, 0x278
	  bl        -0x400614
	  mr.       r0, r3
	  beq-      .loc_0xB4
	  mr        r4, r31
	  bl        -0x2D1A8C
	  mr        r0, r3

	.loc_0xB4:
	  mr        r3, r0
	  b         .loc_0x12C

	.loc_0xBC:
	  li        r3, 0x3E4
	  bl        -0x400638
	  mr.       r0, r3
	  beq-      .loc_0xDC
	  mr        r4, r31
	  li        r5, 0
	  bl        -0x263604
	  mr        r0, r3

	.loc_0xDC:
	  mr        r3, r0
	  b         .loc_0x12C

	.loc_0xE4:
	  li        r3, 0x3E4
	  bl        -0x400660
	  mr.       r0, r3
	  beq-      .loc_0x104
	  mr        r4, r31
	  li        r5, 0x1
	  bl        -0x26362C
	  mr        r0, r3

	.loc_0x104:
	  mr        r3, r0
	  b         .loc_0x12C

	.loc_0x10C:
	  li        r3, 0x2F70
	  bl        -0x400688
	  mr.       r0, r3
	  beq-      .loc_0x128
	  mr        r4, r31
	  bl        0x25B00
	  mr        r0, r3

	.loc_0x128:
	  mr        r3, r0

	.loc_0x12C:
	  li        r0, 0x16
	  stw       r0, -0x7988(r13)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80424564
 * Size:	000040
 */
void GameFlow::getCurrentSection()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
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
 * Address:	804245A4
 * Size:	000028
 */
void __sinit_gameflow_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804F
	  stw       r0, -0x64F8(r13)
	  stfsu     f0, -0x4410(r3)
	  stfs      f0, -0x64F4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
