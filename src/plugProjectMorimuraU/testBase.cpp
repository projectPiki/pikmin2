#ifndef _MORIMURA_TESTBASE_H
#define _MORIMURA_TESTBASE_H

#include "types.h"
#include "Vector3.h"

#include "Dolphin/string.h"
#include "JSystem/JKR/JKRDisposer.h"

namespace Screen {
struct ObjBase;
} // namespace Screen

namespace Morimura {
struct TTestBase {
	// virtual functions go here

	// _00 vtbl
	ObjBase* _04;         // _04
	ObjBase* _08;         // _08
	ObjBase* _0C;         // _0C
	ObjBase* _10;         // _10
	char* name;           // _14
	JKRDisposer disposer; // _18
	int _30;              // _30
	SceneBase* pOwner;    // _34
	float _38;            // _38
	float _3C;            // _3C
	float _40;            // _40
	uchar _44;            // _44
	uchar _45;            // _45
	char* new_name;       // _46

	TTestBase(char*);
}; // tentatively size 0x4A

} // namespace Morimura

#endif

namespace Morimura {

/*
 * --INFO--
 * Address:	803491C8
 * Size:	000084
 */
void TTestBase::TTestBase(char*)
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
	  bl        0x10A904
	  lis       r3, 0x804E
	  lfs       f1, -0x70(r2)
	  subi      r3, r3, 0x4708
	  lfs       f0, -0x6C(r2)
	  stw       r3, 0x0(r30)
	  addi      r3, r3, 0x10
	  li        r0, 0
	  mr        r4, r31
	  stw       r3, 0x18(r30)
	  addi      r3, r30, 0x46
	  stfs      f1, 0x38(r30)
	  stfs      f0, 0x3C(r30)
	  stfs      f1, 0x40(r30)
	  stb       r0, 0x44(r30)
	  stb       r0, 0x45(r30)
	  bl        -0x27E9CC
	  addi      r0, r30, 0x46
	  mr        r3, r30
	  stw       r0, 0x14(r30)
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
 * Address:	8034924C
 * Size:	000020
 */
void TTestBase::doStart((Screen::StartSceneArg const*))
{
	/*
	.loc_0x0:
	  lfs       f0, -0x70(r2)
	  li        r0, 0
	  stfs      f0, 0x40(r3)
	  stfs      f0, 0x38(r3)
	  stb       r0, 0x44(r3)
	  stb       r0, 0x45(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034926C
 * Size:	000010
 */
void TTestBase::doEnd((Screen::EndSceneArg const*))
{
	/*
	.loc_0x0:
	  lfs       f0, -0x70(r2)
	  stfs      f0, 0x38(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034927C
 * Size:	0000B0
 */
void TTestBase::doUpdateFadein(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r4, -0x6514(r13)
	  lfs       f1, 0x38(r3)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r3)
	  lfs       f0, 0x38(r3)
	  lfs       f1, 0x3C(r3)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x3C
	  stfs      f1, 0x38(r31)

	.loc_0x3C:
	  lfs       f2, 0x38(r31)
	  mr        r3, r31
	  lfs       f0, 0x3C(r31)
	  lfs       f1, -0x68(r2)
	  fdivs     f0, f2, f0
	  stfs      f0, 0x40(r31)
	  lfs       f0, 0x40(r31)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  stb       r0, 0x44(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x38(r31)
	  lfs       f0, 0x3C(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x98
	  li        r3, 0x1
	  b         .loc_0x9C

	.loc_0x98:
	  li        r3, 0

	.loc_0x9C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034932C
 * Size:	00000C
 */
void TTestBase::doUpdateFinish(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x70(r2)
	  stfs      f0, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80349338
 * Size:	0000B8
 */
void TTestBase::doUpdateFadeout(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r4, -0x6514(r13)
	  lfs       f1, 0x38(r3)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r3)
	  lfs       f0, 0x38(r3)
	  lfs       f1, 0x3C(r3)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x3C
	  stfs      f1, 0x38(r31)

	.loc_0x3C:
	  lfs       f1, 0x38(r31)
	  mr        r3, r31
	  lfs       f0, 0x3C(r31)
	  lfs       f2, -0x64(r2)
	  fdivs     f0, f1, f0
	  lfs       f1, -0x68(r2)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x40(r31)
	  lfs       f0, 0x40(r31)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  stb       r0, 0x44(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x38(r31)
	  lfs       f0, 0x3C(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xA0
	  li        r3, 0x1
	  b         .loc_0xA4

	.loc_0xA0:
	  li        r3, 0

	.loc_0xA4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803493F0
 * Size:	000008
 */
void @24 @Morimura::TTestBase::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x528C
	*/
}
} // namespace Morimura
