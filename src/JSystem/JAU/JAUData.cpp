#include "types.h"

/*
 * --INFO--
 * Address:	800BA564
 * Size:	0000AC
 */
void JADUtility::PrmSetBase::__ct((bool))
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
	  bl        -0x9D5B4
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r4, r3, 0x66E0
	  addi      r3, r30, 0x1C
	  stw       r4, 0x0(r30)
	  stb       r0, 0x18(r30)
	  stb       r0, 0x19(r30)
	  stb       r31, 0x1A(r30)
	  bl        -0x93CD4
	  addi      r31, r30, 0x2C
	  mr        r3, r31
	  bl        -0x93CE0
	  mr        r4, r30
	  addi      r3, r31, 0xC
	  bl        -0x93E04
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x671C
	  li        r4, 0
	  stw       r0, 0x1C(r31)
	  addi      r0, r3, 0x6704
	  mr        r3, r30
	  stw       r4, 0x20(r31)
	  stw       r4, 0x24(r31)
	  stw       r4, 0x28(r31)
	  stw       r4, 0x2C(r31)
	  stw       r4, 0x30(r31)
	  stw       r4, 0x34(r31)
	  stw       r0, 0x1C(r31)
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
 * Address:	........
 * Size:	000094
 */
void JADUtility::PrmSetTree::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void __dt__Q210JADUtility36NodeTree<JADUtility::PrmSetBase> Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JSUTree<JADUtility::PrmSetBase>::~JSUTree()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<JADUtility::PrmSetBase>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<JADUtility::PrmSetBase>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<JADUtility::PrmBase>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JADUtility::PrmSetBase::appendDummy((unsigned char))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BA610
 * Size:	000098
 */
void JADUtility::PrmSetBase::load((JSUMemoryInputStream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lbz       r4, 0x18(r29)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0x1C(r29)
	  b         .loc_0x5C

	.loc_0x40:
	  lwz       r3, 0x0(r31)
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r31, 0xC(r31)

	.loc_0x5C:
	  cmplwi    r31, 0
	  bne+      .loc_0x40
	  mr        r3, r30
	  lbz       r4, 0x19(r29)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
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
 * Address:	800BA6A8
 * Size:	000040
 */
void JADUtility::PrmBase::load((JSUMemoryInputStream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  mr        r3, r4
	  mr        r4, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BA6E8
 * Size:	0000E8
 */
void JADUtility::PrmSetBase::__dt(void)
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
	  beq-      .loc_0xCC
	  lis       r3, 0x804A
	  addi      r0, r3, 0x66E0
	  stw       r0, 0x0(r30)
	  b         .loc_0x38

	.loc_0x30:
	  addi      r3, r30, 0x1C
	  bl        -0x93AF8

	.loc_0x38:
	  lwz       r4, 0x1C(r30)
	  cmplwi    r4, 0
	  bne+      .loc_0x30
	  addic.    r0, r30, 0x2C
	  beq-      .loc_0x9C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x2C
	  addi      r0, r3, 0x6704
	  stw       r0, 0x48(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804A
	  addic.    r0, r30, 0x2C
	  addi      r0, r3, 0x671C
	  stw       r0, 0x48(r30)
	  beq-      .loc_0x9C
	  addic.    r0, r30, 0x38
	  beq-      .loc_0x88
	  addi      r3, r30, 0x38
	  li        r4, 0
	  bl        -0x93F9C

	.loc_0x88:
	  addic.    r0, r30, 0x2C
	  beq-      .loc_0x9C
	  addi      r3, r30, 0x2C
	  li        r4, 0
	  bl        -0x93F18

	.loc_0x9C:
	  addic.    r0, r30, 0x1C
	  beq-      .loc_0xB0
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x93F2C

	.loc_0xB0:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x9D76C
	  extsh.    r0, r31
	  ble-      .loc_0xCC
	  mr        r3, r30
	  bl        -0x966FC

	.loc_0xCC:
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
 * Address:	800BA7D0
 * Size:	000004
 */
void JADUtility::PrmSetBase::appendAfter(void) { }

/*
 * --INFO--
 * Address:	800BA7D4
 * Size:	000004
 */
void JADUtility::PrmSetBase::afterRemovingChildButton((JADUtility::PrmSetBase*))
{
}

/*
 * --INFO--
 * Address:	800BA7D8
 * Size:	000004
 */
void JADUtility::PrmSetBase::afterRemovingThisButton((JADUtility::PrmSetBase*))
{
}

/*
 * --INFO--
 * Address:	800BA7DC
 * Size:	000008
 */
u32 JADUtility::PrmSetBase::getEraseLink(void) { return 0x0; }

/*
 * --INFO--
 * Address:	800BA7E4
 * Size:	000004
 */
void JADUtility::PrmSetBase::afterGetFromFree(void) { }

/*
 * --INFO--
 * Address:	800BA7E8
 * Size:	000004
 */
void beforeRemovingChild__Q210JADUtility36NodeTree<JADUtility::PrmSetBase>
FPQ210JADUtility10PrmSetBase(void)
{
}

/*
 * --INFO--
 * Address:	800BA7EC
 * Size:	000004
 */
void beforeRemovingThis__Q210JADUtility36NodeTree<JADUtility::PrmSetBase>
FPQ210JADUtility10PrmSetBase(void)
{
}

/*
 * --INFO--
 * Address:	800BA7F0
 * Size:	000004
 */
void afterRemovingChildButton__Q210JADUtility36NodeTree<JADUtility::PrmSetBase>
FPQ210JADUtility10PrmSetBase(void)
{
}

/*
 * --INFO--
 * Address:	800BA7F4
 * Size:	000004
 */
void afterRemovingThisButton__Q210JADUtility36NodeTree<JADUtility::PrmSetBase>
FPQ210JADUtility10PrmSetBasePQ210JADUtility10PrmSetBase(void)
{
}
