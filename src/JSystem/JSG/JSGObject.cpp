#include "types.h"

/*
 * --INFO--
 * Address:	800988D4
 * Size:	000048
 */
void JStage::TObject::__dt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  addi      r0, r5, 0x3680
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x7484C

	.loc_0x30:
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
 * Address:	8009891C
 * Size:	000008
 */
void JStage::TObject::JSGGetName( const
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098924
 * Size:	000004
 */
void JStage::TObject::JSGUpdate(void)
{
}

/*
 * --INFO--
 * Address:	80098928
 * Size:	000008
 */
void JStage::TObject::JSGGetFlag( const
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098930
 * Size:	000004
 */
void JStage::TObject::JSGSetFlag( (unsigned long))
{
}

/*
 * --INFO--
 * Address:	80098934
 * Size:	000008
 */
void JStage::TObject::JSGGetData( const(unsigned long, void *, unsigned long))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009893C
 * Size:	000004
 */
void JStage::TObject::JSGSetData( (unsigned long, void const *, unsigned long))
{
}

/*
 * --INFO--
 * Address:	80098940
 * Size:	000004
 */
void JStage::TObject::JSGGetParent( const(JStage::TObject **, unsigned long *))
{
}

/*
 * --INFO--
 * Address:	80098944
 * Size:	000004
 */
void JStage::TObject::JSGSetParent( (JStage::TObject *, unsigned long))
{
}

/*
 * --INFO--
 * Address:	80098948
 * Size:	000004
 */
void JStage::TObject::JSGSetRelation( (bool, JStage::TObject *, unsigned long))
{
}

/*
 * --INFO--
 * Address:	8009894C
 * Size:	000008
 */
void JStage::TObject::JSGFindNodeID( const(char const *))
{
	/*
	.loc_0x0:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80098954
 * Size:	00003C
 */
void JStage::TObject::JSGGetNodeTransformation( const(unsigned long, float (*)[4]))
{
	/*
	.loc_0x0:
	  lfs       f0, -0x76E8(r2)
	  li        r3, 0
	  stfs      f0, 0x0(r5)
	  stfs      f0, 0x4(r5)
	  stfs      f0, 0x8(r5)
	  stfs      f0, 0xC(r5)
	  stfs      f0, 0x10(r5)
	  stfs      f0, 0x14(r5)
	  stfs      f0, 0x18(r5)
	  stfs      f0, 0x1C(r5)
	  stfs      f0, 0x20(r5)
	  stfs      f0, 0x24(r5)
	  stfs      f0, 0x28(r5)
	  stfs      f0, 0x2C(r5)
	  blr
	*/
}
