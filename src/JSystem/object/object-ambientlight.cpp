#include "types.h"

/*
 * --INFO--
 * Address:	8001318C
 * Size:	0000A0
 */
JStudio_JStage::TAdaptor_ambientLight::TAdaptor_ambientLight(
    const JStage::TSystem*, JStage::TAmbientLight*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x804A
	  lis       r7, 0x804A
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0xB98
	  lis       r6, 0x8000
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  subi      r5, r7, 0xC48
	  li        r7, 0x4
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r8, r29
	  stw       r0, 0x0(r3)
	  addi      r3, r8, 0xC
	  li        r0, 0x4
	  stw       r3, 0x4(r29)
	  stw       r0, 0x8(r29)
	  addi      r0, r6, 0x5808
	  mr        r4, r0
	  li        r6, 0x14
	  stw       r5, 0x0(r29)
	  li        r5, 0
	  bl        0xAE648
	  lis       r4, 0x804A
	  mr        r3, r29
	  subi      r0, r4, 0x8F8
	  stw       r0, 0x0(r29)
	  stw       r30, 0x5C(r29)
	  stw       r31, 0x60(r29)
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
 * Address:	8001322C
 * Size:	000078
 */
JStudio_JStage::TAdaptor_ambientLight::~TAdaptor_ambientLight()
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
	  lis       r5, 0x804A
	  li        r4, 0
	  subi      r0, r5, 0x8F8
	  stw       r0, 0x0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x54A0
	  extsh.    r0, r31
	  ble-      .loc_0x5C
	  mr        r3, r30
	  bl        0x10E30

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
 * Address:	800132A4
 * Size:	000004
 */
void JStudio_JStage::TAdaptor_ambientLight::adaptor_do_prepare(
    const JStudio::TObject*)
{
}

/*
 * --INFO--
 * Address:	800132A8
 * Size:	00008C
 */
void JStudio_JStage::TAdaptor_ambientLight::adaptor_do_begin(
    const JStudio::TObject*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r31, 0x60(r3)
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r31)
	  ori       r4, r3, 0x1
	  mr        r3, r31
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x60(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8047
	  stw       r3, 0x8(r1)
	  addi      r4, r4, 0x3380
	  mr        r3, r30
	  addi      r5, r1, 0x8
	  bl        -0x5FB4
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80013334
 * Size:	000054
 */
void JStudio_JStage::TAdaptor_ambientLight::adaptor_do_end(
    const JStudio::TObject*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x60(r3)
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r31)
	  rlwinm    r4,r3,0,0,30
	  mr        r3, r31
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80013388
 * Size:	00006C
 */
void JStudio_JStage::TAdaptor_ambientLight::adaptor_do_update(
    const JStudio::TObject*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8047
	  stw       r0, 0x24(r1)
	  addi      r5, r4, 0x3380
	  addi      r4, r1, 0xC
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x5F64
	  lwz       r0, 0xC(r1)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x60(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x60(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800133F4
 * Size:	000034
 */
void JStudio_JStage::TAdaptor_ambientLight::adaptor_do_data(
    const JStudio::TObject*, const void*, unsigned long, const void*,
    unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r5
	  mr        r5, r6
	  stw       r0, 0x14(r1)
	  mr        r6, r7
	  mr        r7, r8
	  lwz       r3, 0x60(r3)
	  bl        -0x13D0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
