#include "types.h"

/*
 * --INFO--
 * Address:	800BA7F8
 * Size:	000044
 */
JADUtility::DataMgrBase::DataMgrBase(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x9D840
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r4, r3, 0x67F8
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BA83C
 * Size:	000078
 */
JADUtility::DataMgrBase::~DataMgrBase(void)
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
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x67F8
	  stw       r0, 0x0(r30)
	  lwz       r3, 0x18(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  li        r4, 0
	  bl        -0x9720C

	.loc_0x40:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x9D850
	  extsh.    r0, r31
	  ble-      .loc_0x5C
	  mr        r3, r30
	  bl        -0x967E0

	.loc_0x5C:
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
 * Size:	0000D0
 */
JADUtility::DataLoadMgrNode::DataLoadMgrNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BA8B4
 * Size:	0000C8
 */
JADUtility::DataLoadMgrNode::~DataLoadMgrNode(void)
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804A
	  addi      r0, r30, 0x214
	  addi      r3, r3, 0x67C4
	  stw       r3, 0x4(r30)
	  addi      r4, r3, 0x24
	  lwz       r3, 0x0(r30)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x0(r30)
	  sub       r0, r0, r3
	  stw       r0, 0x1C(r3)
	  lwz       r0, 0x8(r30)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x60
	  lwz       r3, 0x0(r30)
	  li        r0, 0
	  stw       r0, 0x18(r3)

	.loc_0x60:
	  extsh.    r0, r31
	  beq-      .loc_0x9C
	  addic.    r0, r30, 0x214
	  beq-      .loc_0x9C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x67F8
	  stw       r0, 0x214(r30)
	  lwz       r3, 0x22C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  li        r4, 0
	  bl        -0x972D4

	.loc_0x90:
	  addi      r3, r30, 0x214
	  li        r4, 0
	  bl        -0x9D918

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x968A8

	.loc_0xAC:
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
 * Size:	000050
 */
void JADUtility::DataLoadMgrNode::setLoadPath(char const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000230
 */
void JADUtility::DataLoadMgrNode::load(JADUtility::DataLoadMgrNode::ObjStatus,
                                       bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BA97C
 * Size:	000008
 */
u32 JADUtility::DataLoadMgrNode::isTempBuffaMode(void) { return 0x0; }

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void JADUtility::DataLoadMgrNode::initInstanceExt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BA984
 * Size:	0000F0
 */
void JADUtility::DataLoadMgrNode::initInstanceExt(void*, long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r12, 0x4(r3)
	  lwz       r30, -0x77D4(r13)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  mr        r3, r28
	  lwz       r12, 0x4(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x97438

	.loc_0x5C:
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x4(r28)
	  mr        r5, r31
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r28
	  lwz       r12, 0x4(r28)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  mr        r3, r30
	  bl        -0x9747C

	.loc_0xA0:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xC0
	  li        r0, 0
	  li        r3, 0
	  stw       r0, 0x8(r28)
	  lwz       r4, 0x0(r28)
	  stw       r0, 0x18(r4)
	  b         .loc_0xD0

	.loc_0xC0:
	  mr        r3, r28
	  mr        r4, r29
	  bl        .loc_0xF0
	  li        r3, 0x1

	.loc_0xD0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xF0:
	*/
}

/*
 * --INFO--
 * Address:	800BAA74
 * Size:	000014
 */
void JADUtility::DataLoadMgrNode::setFlagsAsExternal(void*)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x0(r3)
	  li        r0, 0x3
	  stw       r4, 0x18(r5)
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void JADUtility::DataLoadMgrNode::loadDvd(unsigned long*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BAA88
 * Size:	00015C
 */
JADUtility::DataMgrNode::DataMgrNode(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  beq-      .loc_0x44
	  addi      r3, r31, 0x250
	  stw       r3, 0x0(r31)
	  mr        r30, r3
	  bl        -0x9DAE8
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x67F8
	  stw       r3, 0x0(r30)
	  stw       r0, 0x18(r30)

	.loc_0x44:
	  lis       r3, 0x804A
	  addi      r4, r31, 0x214
	  addi      r3, r3, 0x67C4
	  li        r0, 0
	  stw       r3, 0x4(r31)
	  addi      r6, r3, 0x24
	  mr        r30, r31
	  subi      r3, r2, 0x72D0
	  lwz       r5, 0x0(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x0(r31)
	  sub       r4, r4, r5
	  stw       r4, 0x1C(r5)
	  stw       r0, 0x8(r31)
	  stw       r0, 0x20C(r31)
	  stw       r0, 0x210(r31)
	  bl        0xFE04
	  cmplwi    r3, 0xFF
	  bgt-      .loc_0x9C
	  addi      r3, r31, 0xC
	  subi      r4, r2, 0x72D0
	  bl        0xFD38

	.loc_0x9C:
	  subi      r3, r2, 0x72D0
	  bl        0xFDE8
	  cmplwi    r3, 0xFF
	  bgt-      .loc_0xB8
	  addi      r3, r30, 0x10C
	  subi      r4, r2, 0x72D0
	  bl        0xFD1C

	.loc_0xB8:
	  lis       r3, 0x804A
	  addi      r0, r31, 0x250
	  addi      r3, r3, 0x6788
	  addi      r30, r31, 0x214
	  stw       r3, 0x4(r31)
	  addi      r5, r3, 0x2C
	  mr        r3, r30
	  lwz       r4, 0x0(r31)
	  stw       r5, 0x0(r4)
	  lwz       r4, 0x0(r31)
	  sub       r0, r0, r4
	  stw       r0, 0x1C(r4)
	  bl        -0x9DBA4
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r3, r3, 0x6774
	  mr        r4, r30
	  stw       r3, 0x0(r30)
	  addi      r3, r30, 0x1C
	  stb       r0, 0x18(r30)
	  bl        -0x943D8
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r3, 0x6760
	  lis       r3, 0x804A
	  stw       r0, 0x0(r30)
	  addi      r5, r4, 0x674C
	  addi      r4, r3, 0x6738
	  li        r0, 0
	  stw       r5, 0x0(r30)
	  mr        r3, r31
	  stw       r4, 0x0(r30)
	  stw       r0, 0x30(r30)
	  stw       r0, 0x34(r30)
	  stw       r0, 0x38(r30)
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
 * Address:	800BABE4
 * Size:	0000A8
 */
JADUtility::StrPrm::~StrPrm(void)
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
	  beq-      .loc_0x8C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x6738
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x7C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x674C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x7C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x6760
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x7C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x1C
	  addi      r0, r3, 0x6774
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x70
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x94480

	.loc_0x70:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x9DC28

	.loc_0x7C:
	  extsh.    r0, r31
	  ble-      .loc_0x8C
	  mr        r3, r30
	  bl        -0x96BB8

	.loc_0x8C:
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
 * Address:	800BAC8C
 * Size:	000098
 */
void __dt__Q210JADUtility10PrmHio<char*> Fv(void)
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
	  beq-      .loc_0x7C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x674C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x6C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x6760
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x6C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x1C
	  addi      r0, r3, 0x6774
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x60
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x94518

	.loc_0x60:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x9DCC0

	.loc_0x6C:
	  extsh.    r0, r31
	  ble-      .loc_0x7C
	  mr        r3, r30
	  bl        -0x96C50

	.loc_0x7C:
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
 * Address:	800BAD24
 * Size:	000088
 */
void __dt__Q210JADUtility7Prm<char*> Fv(void)
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
	  beq-      .loc_0x6C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x6760
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x1C
	  addi      r0, r3, 0x6774
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x50
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x945A0

	.loc_0x50:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x9DD48

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x96CD8

	.loc_0x6C:
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
 * Address:	800BADAC
 * Size:	000078
 */
JADUtility::PrmBase::~PrmBase(void)
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
	  beq-      .loc_0x5C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x1C
	  addi      r0, r3, 0x6774
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x40
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x94618

	.loc_0x40:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x9DDC0
	  extsh.    r0, r31
	  ble-      .loc_0x5C
	  mr        r3, r30
	  bl        -0x96D50

	.loc_0x5C:
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
 * Size:	000054
 */
void JSULink<JADUtility::PrmBase>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
JADUtility::DataLoadMgrVirNode::DataLoadMgrVirNode(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
JADUtility::DataMgrVirNode::DataMgrVirNode(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
JADUtility::DataMgrVirNode::~DataMgrVirNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JADUtility::DataMgrVirNode::getPath(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void JADUtility::DataMgrVirNode::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JADUtility::DataLoadMgrVirNode::getPath(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void JADUtility::DataLoadMgrVirNode::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
JADUtility::DataLoadMgrVirNode::~DataLoadMgrVirNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BAE24
 * Size:	0000A0
 */
void JADUtility::StrPrm::save(JSUMemoryOutputStream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r5, 0x30(r3)
	  cmpwi     r5, 0
	  ble-      .loc_0x40
	  lwz       r4, 0x2C(r28)
	  mr        r3, r29
	  bl        -0x94C7C
	  b         .loc_0x4C

	.loc_0x40:
	  lwz       r4, 0x2C(r28)
	  mr        r3, r29
	  bl        -0x94C34

	.loc_0x4C:
	  li        r30, 0
	  mr        r31, r30
	  b         .loc_0x70

	.loc_0x58:
	  stb       r31, 0x8(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        -0x94CAC
	  addi      r30, r30, 0x1

	.loc_0x70:
	  lbz       r0, 0x18(r28)
	  rlwinm    r3,r30,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x58
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
 * Address:	800BAEC4
 * Size:	0000A0
 */
void JADUtility::StrPrm::load(JSUMemoryInputStream&)
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
	  lwz       r5, 0x30(r3)
	  cmpwi     r5, 0
	  ble-      .loc_0x38
	  lwz       r4, 0x2C(r30)
	  mr        r3, r31
	  bl        -0x94B20
	  b         .loc_0x44

	.loc_0x38:
	  lwz       r4, 0x2C(r30)
	  mr        r3, r31
	  bl        -0x94AD8

	.loc_0x44:
	  lbz       r4, 0x18(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x64
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x64:
	  lwz       r12, 0x34(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0x88
	  lwz       r4, 0x38(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x88
	  mr        r3, r30
	  mtctr     r12
	  bctrl

	.loc_0x88:
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
 * Address:	800BAF64
 * Size:	000078
 */
void JADUtility::PrmBase::save(JSUMemoryOutputStream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x48

	.loc_0x30:
	  stb       r31, 0x8(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        -0x94DC4
	  addi      r30, r30, 0x1

	.loc_0x48:
	  lbz       r0, 0x18(r28)
	  rlwinm    r3,r30,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x30
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
 * Address:	800BAFDC
 * Size:	000164
 */
JADUtility::DataMgrNode::~DataMgrNode(void)
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
	  beq-      .loc_0x148
	  lis       r4, 0x804A
	  addi      r3, r30, 0x250
	  addi      r4, r4, 0x6788
	  addic.    r0, r30, 0x214
	  stw       r4, 0x4(r30)
	  addi      r0, r4, 0x2C
	  lwz       r4, 0x0(r30)
	  stw       r0, 0x0(r4)
	  lwz       r4, 0x0(r30)
	  sub       r0, r3, r4
	  stw       r0, 0x1C(r4)
	  beq-      .loc_0xB4
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x214
	  addi      r0, r3, 0x6738
	  stw       r0, 0x214(r30)
	  beq-      .loc_0xB4
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x214
	  addi      r0, r3, 0x674C
	  stw       r0, 0x214(r30)
	  beq-      .loc_0xB4
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x214
	  addi      r0, r3, 0x6760
	  stw       r0, 0x214(r30)
	  beq-      .loc_0xB4
	  lis       r4, 0x804A
	  addic.    r3, r30, 0x230
	  addi      r0, r4, 0x6774
	  stw       r0, 0x214(r30)
	  beq-      .loc_0xA8
	  li        r4, 0
	  bl        -0x948B0

	.loc_0xA8:
	  addi      r3, r30, 0x214
	  li        r4, 0
	  bl        -0x9E058

	.loc_0xB4:
	  cmplwi    r30, 0
	  beq-      .loc_0xFC
	  lis       r3, 0x804A
	  addi      r0, r30, 0x214
	  addi      r3, r3, 0x67C4
	  stw       r3, 0x4(r30)
	  addi      r4, r3, 0x24
	  lwz       r3, 0x0(r30)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x0(r30)
	  sub       r0, r0, r3
	  stw       r0, 0x1C(r3)
	  lwz       r0, 0x8(r30)
	  cmpwi     r0, 0x3
	  bne-      .loc_0xFC
	  lwz       r3, 0x0(r30)
	  li        r0, 0
	  stw       r0, 0x18(r3)

	.loc_0xFC:
	  extsh.    r0, r31
	  beq-      .loc_0x138
	  addic.    r0, r30, 0x250
	  beq-      .loc_0x138
	  lis       r3, 0x804A
	  addi      r0, r3, 0x67F8
	  stw       r0, 0x250(r30)
	  lwz       r3, 0x268(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x12C
	  li        r4, 0
	  bl        -0x97A98

	.loc_0x12C:
	  addi      r3, r30, 0x250
	  li        r4, 0
	  bl        -0x9E0DC

	.loc_0x138:
	  extsh.    r0, r31
	  ble-      .loc_0x148
	  mr        r3, r30
	  bl        -0x9706C

	.loc_0x148:
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
 * Address:	800BB140
 * Size:	000008
 */
void JADUtility::DataMgrNode::getPath(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0xC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BB148
 * Size:	000050
 */
void JADUtility::DataMgrNode::setPath(char*)
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
	  mr        r3, r31
	  bl        0xF7A8
	  cmplwi    r3, 0xFF
	  bgt-      .loc_0x38
	  mr        r4, r31
	  addi      r3, r30, 0xC
	  bl        0xF6DC

	.loc_0x38:
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
 * Address:	800BB198
 * Size:	000044
 */
void JADUtility::DataMgrNode::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  stw       r0, 0x8(r3)
	  lwz       r31, 0x0(r3)
	  lwz       r3, 0x18(r31)
	  bl        -0x97B50
	  li        r0, 0
	  stw       r0, 0x18(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BB1DC
 * Size:	000044
 */
void JADUtility::DataLoadMgrNode::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  stw       r0, 0x8(r3)
	  lwz       r31, 0x0(r3)
	  lwz       r3, 0x18(r31)
	  bl        -0x97B94
	  li        r0, 0
	  stw       r0, 0x18(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BB220
 * Size:	00003C
 */
void JADUtility::DataMgrBase::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        -0x97BD0
	  li        r0, 0
	  stw       r0, 0x18(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BB25C
 * Size:	000084
 */
void save__Q210JADUtility7Prm<char*> FR21JSUMemoryOutputStream(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r4, 0x2C(r3)
	  mr        r3, r29
	  bl        -0x95050
	  li        r30, 0
	  mr        r31, r30
	  b         .loc_0x54

	.loc_0x3C:
	  stb       r31, 0x8(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        -0x950C8
	  addi      r30, r30, 0x1

	.loc_0x54:
	  lbz       r0, 0x18(r28)
	  rlwinm    r3,r30,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x3C
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
 * Address:	800BB2E0
 * Size:	000060
 */
void load__Q210JADUtility7Prm<char*> FR20JSUMemoryInputStream(void)
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
	  lwz       r4, 0x2C(r3)
	  mr        r3, r31
	  bl        -0x94ED8
	  lbz       r4, 0x18(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x48
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x48:
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
 * Address:	800BB340
 * Size:	000014
 */
void @532 @28 @JADUtility::DataLoadMgrNode::init(void)
{
	/*
	.loc_0x0:
	  li        r11, 0x1C
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x214
	  b         -0x174
	*/
}

/*
 * --INFO--
 * Address:	800BB354
 * Size:	000014
 */
@532 @28 @JADUtility::DataLoadMgrNode::~DataLoadMgrNode(void)
{
	/*
	.loc_0x0:
	  li        r11, 0x1C
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x214
	  b         -0xAB0
	*/
}

/*
 * --INFO--
 * Address:	800BB368
 * Size:	000014
 */
void @592 @28 @JADUtility::DataMgrNode::init(void)
{
	/*
	.loc_0x0:
	  li        r11, 0x1C
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x250
	  b         -0x1E0
	*/
}

/*
 * --INFO--
 * Address:	800BB37C
 * Size:	000014
 */
@592 @28 @JADUtility::DataMgrNode::~DataMgrNode(void)
{
	/*
	.loc_0x0:
	  li        r11, 0x1C
	  lwzx      r11, r3, r11
	  add       r3, r3, r11
	  subi      r3, r3, 0x250
	  b         -0x3B0
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void @532 @28 @JADUtility::DataLoadMgrVirNode::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
@532 @28 @JADUtility::DataLoadMgrVirNode::~DataLoadMgrVirNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void @532 @28 @JADUtility::DataMgrVirNode::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
@532 @28 @JADUtility::DataMgrVirNode::~DataMgrVirNode(void)
{
	// UNUSED FUNCTION
}
