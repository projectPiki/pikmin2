#include "Dolphin/mtx.h"
#include "Game/BaseItem.h"
#include "Game/cellPyramid.h"
#include "Iterator.h"
#include "ObjectMgr.h"
#include "Platform.h"
#include "PlatAttacher.h"
#include "Game/PlatInstance.h"
#include "Rect.h"
#include "Sys/OBBTree.h"
#include "Sys/Sphere.h"
#include "Vector3.h"
#include "id32.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80480168
    lbl_80480168:
        .4byte 0x706C6174
        .4byte 0x2D6F6262
        .4byte 0x00000000
    .global lbl_80480174
    lbl_80480174:
        .4byte 0x706C6174
        .4byte 0x696E7374
        .4byte 0x616E6365
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game7PlatMgr
    __vt__Q24Game7PlatMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game7PlatMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__32Container<Q24Game12PlatInstance>FPv"
        .4byte "getNext__36NodeObjectMgr<Q24Game12PlatInstance>FPv"
        .4byte "getStart__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "getEnd__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "get__36NodeObjectMgr<Q24Game12PlatInstance>FPv"
        .4byte "getAt__32Container<Q24Game12PlatInstance>Fi"
        .4byte "getTo__32Container<Q24Game12PlatInstance>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "@28@doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "@28@doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"
        .4byte "@28@doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "@28@doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"
        .4byte "@28@doDirectDraw__Q24Game7PlatMgrFR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"
        .4byte "doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"
        .4byte doDirectDraw__Q24Game7PlatMgrFR8Graphics
        .4byte "resetMgr__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte findRayIntersection__Q24Game7PlatMgrFRQ23Sys16RayIntersectInfo
    .global "__vt__31Iterator<Q24Game12PlatInstance>"
    "__vt__31Iterator<Q24Game12PlatInstance>":
        .4byte 0
        .4byte 0
        .4byte "first__31Iterator<Q24Game12PlatInstance>Fv"
        .4byte "next__31Iterator<Q24Game12PlatInstance>Fv"
        .4byte "isDone__31Iterator<Q24Game12PlatInstance>Fv"
        .4byte "__ml__31Iterator<Q24Game12PlatInstance>Fv"
    .global "__vt__34TObjectNode<Q24Game12PlatInstance>"
    "__vt__34TObjectNode<Q24Game12PlatInstance>":
        .4byte 0
        .4byte 0
        .4byte "__dt__34TObjectNode<Q24Game12PlatInstance>Fv"
        .4byte getChildCount__5CNodeFv
    .global "__vt__36NodeObjectMgr<Q24Game12PlatInstance>"
    "__vt__36NodeObjectMgr<Q24Game12PlatInstance>":
        .4byte 0
        .4byte 0
        .4byte "__dt__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__32Container<Q24Game12PlatInstance>FPv"
        .4byte "getNext__36NodeObjectMgr<Q24Game12PlatInstance>FPv"
        .4byte "getStart__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "getEnd__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "get__36NodeObjectMgr<Q24Game12PlatInstance>FPv"
        .4byte "getAt__32Container<Q24Game12PlatInstance>Fi"
        .4byte "getTo__32Container<Q24Game12PlatInstance>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "@28@doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "@28@doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"
        .4byte "@28@doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "@28@doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"
        .4byte "@28@doDirectDraw__32ObjectMgr<Q24Game12PlatInstance>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"
        .4byte "doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"
        .4byte "doDirectDraw__32ObjectMgr<Q24Game12PlatInstance>FR8Graphics"
        .4byte "resetMgr__36NodeObjectMgr<Q24Game12PlatInstance>Fv"
    .global "__vt__32ObjectMgr<Q24Game12PlatInstance>"
    "__vt__32ObjectMgr<Q24Game12PlatInstance>":
        .4byte 0
        .4byte 0
        .4byte "__dt__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__32Container<Q24Game12PlatInstance>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__32Container<Q24Game12PlatInstance>Fi"
        .4byte "getTo__32Container<Q24Game12PlatInstance>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "@28@doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "@28@doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"
        .4byte "@28@doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "@28@doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"
        .4byte "@28@doDirectDraw__32ObjectMgr<Q24Game12PlatInstance>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "doEntry__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "doSetView__32ObjectMgr<Q24Game12PlatInstance>Fi"
        .4byte "doViewCalc__32ObjectMgr<Q24Game12PlatInstance>Fv"
        .4byte "doSimulation__32ObjectMgr<Q24Game12PlatInstance>Ff"
        .4byte "doDirectDraw__32ObjectMgr<Q24Game12PlatInstance>FR8Graphics"
    .global "__vt__32Container<Q24Game12PlatInstance>"
    "__vt__32Container<Q24Game12PlatInstance>":
        .4byte 0
        .4byte 0
        .4byte "__dt__32Container<Q24Game12PlatInstance>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__32Container<Q24Game12PlatInstance>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__32Container<Q24Game12PlatInstance>Fi"
        .4byte "getTo__32Container<Q24Game12PlatInstance>Fv"
    .global __vt__Q24Game12PlatInstance
    __vt__Q24Game12PlatInstance:
        .4byte 0
        .4byte 0
        .4byte getPosition__Q24Game12PlatInstanceFv
        .4byte checkCollision__Q24Game12PlatInstanceFPQ24Game10CellObject
        .4byte getBoundingSphere__Q24Game12PlatInstanceFRQ23Sys6Sphere
        .4byte collisionUpdatable__Q24Game12PlatInstanceFv
        .4byte isPiki__Q24Game10CellObjectFv
        .4byte isNavi__Q24Game10CellObjectFv
        .4byte deferPikiCollision__Q24Game10CellObjectFv
        .4byte getTypeName__Q24Game12PlatInstanceFv
        .4byte getObjType__Q24Game12PlatInstanceFv
        .4byte constructor__Q24Game12PlatInstanceFv
        .4byte doAnimation__Q24Game12PlatInstanceFv
        .4byte doEntry__Q24Game12PlatInstanceFv
        .4byte doSetView__Q24Game12PlatInstanceFi
        .4byte doViewCalc__Q24Game12PlatInstanceFv
        .4byte doSimulation__Q24Game12PlatInstanceFf
        .4byte doDirectDraw__Q24Game12PlatInstanceFR8Graphics
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global useFixCollision__Q24Game12PlatInstance
    useFixCollision__Q24Game12PlatInstance:
        .byte 0x1
    .global mUseCellMgr__Q24Game7PlatMgr
    mUseCellMgr__Q24Game7PlatMgr:
        .byte 0x1
        .byte 0x0
        .byte 0x0

    .section .sbss # 0x80514D80 - 0x80516360
    .global platMgr__4Game
    platMgr__4Game:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519588
    lbl_80519588:
        .4byte 0x00000000
    .global lbl_8051958C
    lbl_8051958C:
        .4byte 0x4B435000
*/

namespace Game {
/*
 * --INFO--
 * Address:	801C4BD4
 * Size:	000028
 */
void PlatInstance::setCollision(bool flag)
{
	if (flag) {
		_108 |= 1;
	} else {
		_108 &= ~1;
	}
}

/*
 * --INFO--
 * Address:	801C4BFC
 * Size:	000020
 */
Vector3f PlatInstance::getPosition()
{
	Vector3f result;
	result.x = _B8->m_matrix.structView.tx;
	result.y = _B8->m_matrix.structView.ty;
	result.z = _B8->m_matrix.structView.tz;
	return result;
}

/*
 * --INFO--
 * Address:	801C4C1C
 * Size:	000050
 */
void PlatInstance::getBoundingSphere(Sys::Sphere& sphere) { sphere = ((Sys::OBBTree*)_EC->getTriDivider())->m_obb._100; }

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
// void getMinY__Q24Game12PlatInstanceFR10Vector3f(void)
void PlatInstance::getMinY(Vector3f&) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801C4C6C
 * Size:	000254
 */
void PlatInstance::getCurrTri(CurrTriInfo&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stfd      f30, 0xA0(r1)
	  psq_st    f30,0xA8(r1),0,0
	  stfd      f29, 0x90(r1)
	  psq_st    f29,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r3, 0xB8(r3)
	  addi      r4, r1, 0x50
	  bl        -0xDA9DC
	  lbz       r0, -0x7BB8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  lbz       r0, 0x108(r30)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x64

	.loc_0x58:
	  addi      r3, r1, 0x50
	  addi      r4, r1, 0x20
	  bl        -0xDA8B0

	.loc_0x64:
	  lbz       r0, -0x7BB8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x9C
	  lbz       r0, 0x108(r30)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x9C
	  mr        r4, r31
	  addi      r3, r30, 0xBC
	  addi      r5, r1, 0x14
	  bl        -0xDA11C
	  lfs       f0, 0x14(r1)
	  lfs       f1, 0x18(r1)
	  lfs       f2, 0x1C(r1)
	  b         .loc_0xB8

	.loc_0x9C:
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  addi      r5, r1, 0x8
	  bl        -0xDA13C
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f2, 0x10(r1)

	.loc_0xB8:
	  lfs       f31, 0x0(r31)
	  lfs       f30, 0x4(r31)
	  lfs       f29, 0x8(r31)
	  stfs      f0, 0x0(r31)
	  stfs      f1, 0x4(r31)
	  stfs      f2, 0x8(r31)
	  lwz       r3, 0xEC(r30)
	  bl        -0x91654
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  stfs      f31, 0x0(r31)
	  stfs      f30, 0x4(r31)
	  stfs      f29, 0x8(r31)
	  lbz       r0, 0xD(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x1E0
	  lbz       r0, -0x7BB8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x180
	  lbz       r0, 0x108(r30)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x180
	  lfs       f7, 0x24(r31)
	  lfs       f1, 0x54(r1)
	  lfs       f0, 0x64(r1)
	  fmuls     f1, f7, f1
	  lfs       f8, 0x20(r31)
	  lfs       f4, 0x50(r1)
	  fmuls     f2, f7, f0
	  lfs       f0, 0x74(r1)
	  lfs       f3, 0x60(r1)
	  fmadds    f5, f8, f4, f1
	  lfs       f9, 0x28(r31)
	  lfs       f6, 0x58(r1)
	  fmuls     f0, f7, f0
	  lfs       f1, 0x70(r1)
	  fmadds    f3, f8, f3, f2
	  lfs       f4, 0x68(r1)
	  fmadds    f5, f9, f6, f5
	  lfs       f2, 0x78(r1)
	  fmadds    f0, f8, f1, f0
	  fmadds    f1, f9, f4, f3
	  stfs      f5, 0x20(r31)
	  fmadds    f0, f9, f2, f0
	  stfs      f1, 0x24(r31)
	  stfs      f0, 0x28(r31)
	  b         .loc_0x1E0

	.loc_0x180:
	  lfs       f7, 0x24(r31)
	  lfs       f1, 0x54(r1)
	  lfs       f0, 0x64(r1)
	  fmuls     f1, f7, f1
	  lfs       f8, 0x20(r31)
	  lfs       f4, 0x50(r1)
	  fmuls     f2, f7, f0
	  lfs       f0, 0x74(r1)
	  lfs       f3, 0x60(r1)
	  fmadds    f5, f8, f4, f1
	  lfs       f9, 0x28(r31)
	  lfs       f6, 0x58(r1)
	  fmuls     f0, f7, f0
	  lfs       f1, 0x70(r1)
	  fmadds    f3, f8, f3, f2
	  lfs       f4, 0x68(r1)
	  fmadds    f5, f9, f6, f5
	  lfs       f2, 0x78(r1)
	  fmadds    f0, f8, f1, f0
	  fmadds    f1, f9, f4, f3
	  stfs      f5, 0x20(r31)
	  fmadds    f0, f9, f2, f0
	  stfs      f1, 0x24(r31)
	  stfs      f0, 0x28(r31)

	.loc_0x1E0:
	  lbz       r0, 0xD(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x224
	  lwz       r3, 0xB8(r30)
	  li        r0, 0
	  lfs       f2, 0x1C(r31)
	  lfs       f1, 0x14(r3)
	  lfs       f0, 0x1C(r3)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x1C(r31)
	  lwz       r3, 0xB8(r30)
	  lfs       f2, 0x18(r31)
	  lfs       f1, 0x14(r3)
	  lfs       f0, 0x1C(r3)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x18(r31)
	  stb       r0, 0xD(r31)

	.loc_0x224:
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r0, 0xC4(r1)
	  lwz       r30, 0x88(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C4EC0
 * Size:	0002E4
 */
void PlatInstance::traceMove(MoveInfo&, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stw       r31, 0xCC(r1)
	  stw       r30, 0xC8(r1)
	  stw       r29, 0xC4(r1)
	  stw       r28, 0xC0(r1)
	  lbz       r0, -0x7BA8(r13)
	  fmr       f31, f1
	  mr        r28, r3
	  mr        r29, r4
	  cmplwi    r0, 0x2
	  blt-      .loc_0xA0
	  lwz       r3, 0xEC(r28)
	  bl        -0x91814
	  lfs       f5, 0x120(r3)
	  stfs      f5, 0x8(r1)
	  lfs       f4, 0x124(r3)
	  stfs      f4, 0xC(r1)
	  lfs       f3, 0x128(r3)
	  stfs      f3, 0x10(r1)
	  lfs       f0, 0x12C(r3)
	  addi      r3, r1, 0x8
	  stfs      f0, 0x14(r1)
	  lwz       r4, 0xB8(r28)
	  lfs       f2, 0x2C(r4)
	  lfs       f1, 0x1C(r4)
	  lfs       f0, 0xC(r4)
	  fadds     f2, f3, f2
	  fadds     f1, f4, f1
	  fadds     f0, f5, f0
	  stfs      f2, 0x10(r1)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  lwz       r4, 0x0(r29)
	  bl        0x250FC0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2BC

	.loc_0xA0:
	  lwz       r3, 0xB8(r28)
	  addi      r4, r1, 0x84
	  bl        -0xDAC9C
	  lbz       r0, -0x7BB8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xC4
	  lbz       r0, 0x108(r28)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0xD0

	.loc_0xC4:
	  addi      r3, r1, 0x84
	  addi      r4, r1, 0x54
	  bl        -0xDAB70

	.loc_0xD0:
	  lwz       r31, 0x44(r29)
	  lis       r3, 0x8048
	  lwz       r30, 0x48(r29)
	  li        r0, 0
	  addi      r4, r3, 0x168
	  li        r5, 0x1
	  stw       r0, 0x44(r29)
	  stw       r0, 0x48(r29)
	  stw       r0, 0x4C(r29)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x28(r3)
	  bl        0x265B3C
	  lwz       r3, 0xEC(r28)
	  bl        -0x918D8
	  lwz       r4, 0xF0(r28)
	  cmplwi    r4, 0
	  beq-      .loc_0x138
	  lbz       r0, -0x7BA8(r13)
	  cmplwi    r0, 0x3
	  blt-      .loc_0x138
	  mr        r3, r4
	  bl        -0x918F8
	  fmr       f1, f31
	  mr        r4, r29
	  bl        0x259A44
	  b         .loc_0x17C

	.loc_0x138:
	  lbz       r0, -0x7BB8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x168
	  lbz       r0, 0x108(r28)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x168
	  fmr       f1, f31
	  mr        r6, r29
	  addi      r4, r1, 0x84
	  addi      r5, r28, 0xBC
	  bl        0x2599F0
	  b         .loc_0x17C

	.loc_0x168:
	  fmr       f1, f31
	  mr        r6, r29
	  addi      r4, r1, 0x84
	  addi      r5, r1, 0x54
	  bl        0x2599D8

	.loc_0x17C:
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x168
	  lwz       r3, 0x28(r5)
	  bl        0x265AB0
	  lwz       r3, 0x14(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x2B4
	  lwz       r0, 0x44(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x218
	  stw       r28, 0x40(r1)
	  addi      r4, r1, 0x40
	  lfs       f0, 0x50(r29)
	  stfs      f0, 0x44(r1)
	  lfs       f0, 0x54(r29)
	  stfs      f0, 0x48(r1)
	  lfs       f0, 0x58(r29)
	  stfs      f0, 0x4C(r1)
	  lwz       r0, 0xF4(r28)
	  stw       r0, 0x50(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x104(r28)
	  addi      r0, r3, 0x1
	  stw       r0, 0x104(r28)
	  lwz       r3, 0xF4(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x21C
	  lwz       r0, 0x14(r29)
	  addi      r4, r1, 0x40
	  stw       r0, 0x50(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF0(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x21C

	.loc_0x218:
	  stw       r31, 0x44(r29)

	.loc_0x21C:
	  lwz       r0, 0x48(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x268
	  stw       r28, 0x2C(r1)
	  addi      r4, r1, 0x2C
	  lfs       f0, 0x5C(r29)
	  stfs      f0, 0x30(r1)
	  lfs       f0, 0x60(r29)
	  stfs      f0, 0x34(r1)
	  lfs       f0, 0x64(r29)
	  stfs      f0, 0x38(r1)
	  lwz       r0, 0xF4(r28)
	  stw       r0, 0x3C(r1)
	  lwz       r3, 0x14(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF0(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x26C

	.loc_0x268:
	  stw       r30, 0x48(r29)

	.loc_0x26C:
	  lwz       r0, 0x4C(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x2B4
	  stw       r28, 0x18(r1)
	  addi      r4, r1, 0x18
	  lfs       f0, 0x68(r29)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x6C(r29)
	  stfs      f0, 0x20(r1)
	  lfs       f0, 0x70(r29)
	  stfs      f0, 0x24(r1)
	  lwz       r0, 0xF4(r28)
	  stw       r0, 0x28(r1)
	  lwz       r3, 0x14(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xF0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2B4:
	  li        r0, 0
	  stb       r0, -0x6520(r13)

	.loc_0x2BC:
	  psq_l     f31,0xD8(r1),0,0
	  lwz       r0, 0xE4(r1)
	  lfd       f31, 0xD0(r1)
	  lwz       r31, 0xCC(r1)
	  lwz       r30, 0xC8(r1)
	  lwz       r29, 0xC4(r1)
	  lwz       r28, 0xC0(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C51A4
 * Size:	000018
 */
PlatInstanceAttacher::PlatInstanceAttacher()
    : m_instanceCount(0)
    , m_platInstances(nullptr)
    , m_attacher(nullptr)
    , m_model(nullptr)
{
}

/*
 * --INFO--
 * Address:	801C51BC
 * Size:	0001B0
 */
void PlatInstanceAttacher::addToMgr(Creature*, ID32&, PlatAttacher*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stmw      r21, 0x64(r1)
	  mr        r27, r6
	  mr        r24, r3
	  mr        r25, r4
	  mr        r26, r5
	  mr        r28, r7
	  stw       r27, 0x8(r3)
	  mr        r3, r27
	  lwz       r0, 0x174(r4)
	  stw       r0, 0xC(r24)
	  bl        -0x9151C
	  stw       r3, 0x0(r24)
	  lwz       r0, 0x0(r24)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x1A1254
	  stw       r3, 0x4(r24)
	  addi      r30, r1, 0x3C
	  li        r29, 0
	  li        r31, 0
	  b         .loc_0x190

	.loc_0x5C:
	  mr        r3, r27
	  mr        r4, r29
	  bl        -0x914C8
	  mr        r23, r3
	  mr        r3, r27
	  mr        r4, r29
	  bl        -0x91554
	  rlwinm    r0,r3,0,16,31
	  lwz       r3, 0xC(r24)
	  mulli     r0, r0, 0x3C
	  lwz       r3, 0x10(r3)
	  add       r3, r3, r0
	  bl        0x264658
	  mr        r0, r3
	  addi      r3, r1, 0x38
	  mr        r22, r0
	  bl        0x668
	  stw       r25, 0x38(r1)
	  mr        r3, r30
	  mr        r4, r26
	  li        r5, 0x5
	  bl        -0x103B54
	  lwz       r0, 0x8(r26)
	  addi      r4, r1, 0x38
	  lwz       r3, -0x6BE0(r13)
	  stw       r0, 0x44(r1)
	  stw       r23, 0x48(r1)
	  stw       r22, 0x4C(r1)
	  stb       r28, 0x50(r1)
	  bl        0x698
	  lwz       r4, 0x4(r24)
	  stwx      r3, r4, r31
	  lwz       r0, -0x6D34(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x188
	  lwz       r3, 0x4(r24)
	  lwzx      r21, r3, r31
	  lwz       r3, 0xB8(r21)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x28(r1)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0x2C(r1)
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x30(r1)
	  lwz       r3, 0xEC(r21)
	  bl        -0x91BE0
	  mr        r23, r3
	  mr        r3, r22
	  addi      r4, r23, 0x120
	  addi      r5, r1, 0xC
	  bl        -0xDA708
	  lfs       f2, 0xC(r1)
	  addi      r4, r1, 0x28
	  lfs       f1, 0x10(r1)
	  addi      r5, r1, 0x8
	  lfs       f0, 0x14(r1)
	  addi      r6, r1, 0x18
	  stfs      f2, 0x28(r1)
	  lwz       r3, -0x6D34(r13)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  lfs       f0, 0x12C(r23)
	  stfs      f0, 0x34(r1)
	  bl        -0x6CF84
	  lwz       r3, -0x6D34(r13)
	  mr        r4, r21
	  addi      r5, r1, 0x28
	  bl        -0x6CE04
	  lwz       r3, 0xF4(r21)
	  cmplwi    r3, 0
	  beq-      .loc_0x188
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x188:
	  addi      r31, r31, 0x4
	  addi      r29, r29, 0x1

	.loc_0x190:
	  lwz       r0, 0x0(r24)
	  cmpw      r29, r0
	  blt+      .loc_0x5C
	  lmw       r21, 0x64(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C536C
 * Size:	000094
 */
void PlatInstanceAttacher::setCollision(bool p1, unsigned short jointIndex)
{
	for (int i = 0; i < m_instanceCount; i++) {
		if (jointIndex == m_attacher->getJointIndex(i)) {
			PlatInstance* instance = m_platInstances[i];
			if (p1) {
				instance->_108 &= ~0x1;
			} else {
				instance->_108 |= 0x1;
			}
		}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  rlwinm    r30,r5,0,16,31
	  li        r28, 0
	  rlwinm    r31,r4,0,24,31
	  li        r29, 0
	  b         .loc_0x74

	.loc_0x28:
	  lwz       r3, 0x8(r27)
	  mr        r4, r28
	  bl        -0x916C0
	  rlwinm    r0,r3,0,16,31
	  cmplw     r30, r0
	  bne-      .loc_0x6C
	  lwz       r3, 0x4(r27)
	  cmplwi    r31, 0
	  lwzx      r3, r3, r29
	  beq-      .loc_0x60
	  lbz       r0, 0x108(r3)
	  ori       r0, r0, 0x1
	  stb       r0, 0x108(r3)
	  b         .loc_0x6C

	.loc_0x60:
	  lbz       r0, 0x108(r3)
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x108(r3)

	.loc_0x6C:
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x1

	.loc_0x74:
	  lwz       r0, 0x0(r27)
	  cmpw      r28, r0
	  blt+      .loc_0x28
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void PlatInstanceAttacher::fixCollision(bool, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801C5400
 * Size:	00009C
 */
void PlatInstanceAttacher::fixCollision(bool p1)
{
	for (int i = 0; i < m_instanceCount; i++) {
		PlatInstance* instance = m_platInstances[i];
		if (p1) {
			instance->_108 &= ~0x2;
		} else {
			instance->_108 |= 0x2;
			PSMTXInverse(instance->_B8->m_matrix.mtxView, instance->_BC.m_matrix.mtxView);
		}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  rlwinm    r31,r4,0,24,31
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x70

	.loc_0x30:
	  lwz       r3, 0x4(r28)
	  cmplwi    r31, 0
	  lwzx      r3, r3, r30
	  beq-      .loc_0x5C
	  lbz       r0, 0x108(r3)
	  addi      r4, r3, 0xBC
	  ori       r0, r0, 0x2
	  stb       r0, 0x108(r3)
	  lwz       r3, 0xB8(r3)
	  bl        -0xDB038
	  b         .loc_0x68

	.loc_0x5C:
	  lbz       r0, 0x108(r3)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x108(r3)

	.loc_0x68:
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1

	.loc_0x70:
	  lwz       r0, 0x0(r28)
	  cmpw      r29, r0
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
 * Address:	801C549C
 * Size:	00008C
 */
void PlatInstanceAttacher::setCode(ID32&, unsigned short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  mr        r27, r4
	  rlwinm    r31,r5,0,16,31
	  li        r28, 0
	  li        r29, 0
	  b         .loc_0x6C

	.loc_0x28:
	  lwz       r3, 0x8(r26)
	  mr        r4, r28
	  bl        -0x917F0
	  rlwinm    r0,r3,0,16,31
	  cmplw     r31, r0
	  bne-      .loc_0x64
	  lwz       r3, 0x4(r26)
	  mr        r4, r27
	  li        r5, 0x5
	  lwzx      r3, r3, r29
	  addi      r30, r3, 0xF8
	  mr        r3, r30
	  bl        -0x103DDC
	  lwz       r0, 0x8(r27)
	  stw       r0, 0x8(r30)

	.loc_0x64:
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x1

	.loc_0x6C:
	  lwz       r0, 0x0(r26)
	  cmpw      r28, r0
	  blt+      .loc_0x28
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void PlatInstanceAttacher::setCode(ID32&, char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void PlatInstanceAttacher::setCollision(bool, char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void PlatInstanceAttacher::fixCollision(bool, char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801C5528
 * Size:	0000C0
 */
void PlatInstanceAttacher::setShapeVisibility()
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
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x94

	.loc_0x2C:
	  lwz       r5, 0x4(r28)
	  mr        r4, r30
	  lwz       r3, 0x8(r28)
	  lwzx      r29, r5, r31
	  bl        -0x91888
	  lbz       r0, 0x108(r29)
	  mr        r4, r3
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x70
	  lwz       r3, 0xC(r28)
	  rlwinm    r5,r4,0,16,31
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x8C

	.loc_0x70:
	  lwz       r3, 0xC(r28)
	  rlwinm    r5,r4,0,16,31
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x8C:
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0x94:
	  lwz       r0, 0x0(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x2C
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
 * Address:	801C55E8
 * Size:	0000B8
 */
PlatMgr::PlatMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  bl        0x24BD90
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r5, 0x804B
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x64E0
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r31)
	  li        r0, 0
	  addi      r6, r4, 0x6464
	  addi      r4, r3, 0x63E4
	  stb       r0, 0x18(r31)
	  subi      r0, r5, 0x4A10
	  addi      r30, r31, 0x20
	  addi      r5, r6, 0x2C
	  stw       r0, 0x1C(r31)
	  addi      r0, r4, 0x2C
	  mr        r3, r30
	  stw       r6, 0x0(r31)
	  stw       r5, 0x1C(r31)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x1C(r31)
	  bl        0x24BD30
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r3, 0x63D4
	  mr        r3, r31
	  stw       r0, 0x0(r30)
	  addi      r4, r4, 0x6338
	  addi      r0, r4, 0x2C
	  stw       r4, 0x0(r31)
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
 * Address:	801C56A0
 * Size:	0000C8
 */
// NodeObjectMgr<Game::PlatInstance>::~NodeObjectMgr()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r4
// 	  stw       r30, 0x8(r1)
// 	  mr.       r30, r3
// 	  beq-      .loc_0xAC
// 	  lis       r3, 0x804B
// 	  addic.    r0, r30, 0x20
// 	  addi      r3, r3, 0x63E4
// 	  stw       r3, 0x0(r30)
// 	  addi      r0, r3, 0x2C
// 	  stw       r0, 0x1C(r30)
// 	  beq-      .loc_0x54
// 	  lis       r4, 0x804B
// 	  addi      r3, r30, 0x20
// 	  addi      r0, r4, 0x63D4
// 	  li        r4, 0
// 	  stw       r0, 0x20(r30)
// 	  bl        0x24BE98

// 	.loc_0x54:
// 	  cmplwi    r30, 0
// 	  beq-      .loc_0x9C
// 	  lis       r3, 0x804B
// 	  addi      r3, r3, 0x6464
// 	  stw       r3, 0x0(r30)
// 	  addi      r0, r3, 0x2C
// 	  stw       r0, 0x1C(r30)
// 	  beq-      .loc_0x9C
// 	  lis       r3, 0x804B
// 	  addi      r0, r3, 0x64E0
// 	  stw       r0, 0x0(r30)
// 	  beq-      .loc_0x9C
// 	  lis       r4, 0x804B
// 	  mr        r3, r30
// 	  subi      r0, r4, 0x5324
// 	  li        r4, 0
// 	  stw       r0, 0x0(r30)
// 	  bl        0x24BE50

// 	.loc_0x9C:
// 	  extsh.    r0, r31
// 	  ble-      .loc_0xAC
// 	  mr        r3, r30
// 	  bl        -0x1A1694

// 	.loc_0xAC:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r30
// 	  lwz       r31, 0xC(r1)
// 	  lwz       r30, 0x8(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C5768
 * Size:	000060
 */
// TObjectNode<Game::PlatInstance>::~TObjectNode()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r4
// 	  stw       r30, 0x8(r1)
// 	  mr.       r30, r3
// 	  beq-      .loc_0x44
// 	  lis       r5, 0x804B
// 	  li        r4, 0
// 	  addi      r0, r5, 0x63D4
// 	  stw       r0, 0x0(r30)
// 	  bl        0x24BDF0
// 	  extsh.    r0, r31
// 	  ble-      .loc_0x44
// 	  mr        r3, r30
// 	  bl        -0x1A16F4

// 	.loc_0x44:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r30
// 	  lwz       r31, 0xC(r1)
// 	  lwz       r30, 0x8(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C57C8
 * Size:	000088
 */
// ObjectMgr<Game::PlatInstance>::~ObjectMgr()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r4
// 	  stw       r30, 0x8(r1)
// 	  mr.       r30, r3
// 	  beq-      .loc_0x6C
// 	  lis       r4, 0x804B
// 	  addi      r4, r4, 0x6464
// 	  stw       r4, 0x0(r30)
// 	  addi      r0, r4, 0x2C
// 	  stw       r0, 0x1C(r30)
// 	  beq-      .loc_0x5C
// 	  lis       r4, 0x804B
// 	  addi      r0, r4, 0x64E0
// 	  stw       r0, 0x0(r30)
// 	  beq-      .loc_0x5C
// 	  lis       r5, 0x804B
// 	  li        r4, 0
// 	  subi      r0, r5, 0x5324
// 	  stw       r0, 0x0(r30)
// 	  bl        0x24BD68

// 	.loc_0x5C:
// 	  extsh.    r0, r31
// 	  ble-      .loc_0x6C
// 	  mr        r3, r30
// 	  bl        -0x1A177C

// 	.loc_0x6C:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r30
// 	  lwz       r31, 0xC(r1)
// 	  lwz       r30, 0x8(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C5850
 * Size:	000070
 */
// Container<Game::PlatInstance>::~Container()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r4
// 	  stw       r30, 0x8(r1)
// 	  mr.       r30, r3
// 	  beq-      .loc_0x54
// 	  lis       r4, 0x804B
// 	  addi      r0, r4, 0x64E0
// 	  stw       r0, 0x0(r30)
// 	  beq-      .loc_0x44
// 	  lis       r5, 0x804B
// 	  li        r4, 0
// 	  subi      r0, r5, 0x5324
// 	  stw       r0, 0x0(r30)
// 	  bl        0x24BCF8

// 	.loc_0x44:
// 	  extsh.    r0, r31
// 	  ble-      .loc_0x54
// 	  mr        r3, r30
// 	  bl        -0x1A17EC

// 	.loc_0x54:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r30
// 	  lwz       r31, 0xC(r1)
// 	  lwz       r30, 0x8(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C58C0
 * Size:	000064
 */
PlatAddInstanceArg::PlatAddInstanceArg()
    : m_id()
{
	m_item = nullptr;
	m_id.setID('null');
	m_platform = nullptr;
	m_matrix   = nullptr;
	_18        = false;
	_1C        = 0.0f;
}

/*
 * --INFO--
 * Address:	801C5924
 * Size:	000270
 */
PlatInstance* PlatMgr::addInstance(PlatAddInstanceArg& arg)
{
	PlatInstance* instance = new PlatInstance();
	instance->_B8          = arg.m_matrix;
	instance->m_id         = arg.m_id;
	instance->_F4          = arg.m_item;
	if (arg._18) {
		instance->_EC = arg.m_platform;
		instance->_F0 = arg.m_platform->clone(*arg.m_matrix);
		instance->_108 |= 0x80;
	} else {
		instance->_EC = arg.m_platform;
	}
	TObjectNode<PlatInstance>* node = new TObjectNode<PlatInstance>();
	node->m_contents                = instance;
	m_node.add(node);
	node->m_contents->constructor();
	if (Game::platCellMgr) {
		Sys::Sphere sphere;
		sphere.m_position.x = instance->_B8->m_matrix.structView.tx;
		sphere.m_position.y = instance->_B8->m_matrix.structView.ty;
		sphere.m_position.z = instance->_B8->m_matrix.structView.tz;
		Sys::OBBTree* div   = (Sys::OBBTree*)instance->_EC->getTriDivider();
		sphere.m_position.x += div->m_obb._100.m_position.x;
		sphere.m_position.y += div->m_obb._100.m_position.y;
		sphere.m_position.z += div->m_obb._100.m_position.z;
		sphere.m_radius = div->m_obb._100.m_radius;
		if (0.0 < arg._1C) {
			sphere.m_radius = arg._1C;
		}
		int v1;
		Recti v2;
		Game::platCellMgr->calcExtent(sphere, v1, v2);
		Game::platCellMgr->entry(instance, sphere);
		if (instance->_F4) {
			instance->_F4->getCreatureName();
		}
	}
	return instance;
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r4
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  li        r3, 0x10C
	  stw       r28, 0x30(r1)
	  bl        -0x1A1AA8
	  mr.       r31, r3
	  beq-      .loc_0xE8
	  lis       r4, 0x804B
	  addi      r3, r31, 0x4
	  addi      r0, r4, 0x2A4
	  stw       r0, 0x0(r31)
	  bl        0x76E10
	  lis       r3, 0x804B
	  lis       r4, 0x8014
	  addi      r0, r3, 0x278
	  li        r5, 0
	  stw       r0, 0x0(r31)
	  addi      r3, r31, 0x54
	  subi      r4, r4, 0x5050
	  li        r6, 0x14
	  li        r7, 0x4
	  bl        -0x104154
	  addi      r3, r31, 0xA8
	  bl        -0x6EB80
	  li        r0, 0x1
	  lis       r3, 0x804B
	  stb       r0, 0x64(r31)
	  li        r4, 0
	  addi      r0, r3, 0x650C
	  addi      r3, r31, 0xF8
	  stb       r4, 0x78(r31)
	  stb       r4, 0x8C(r31)
	  stb       r4, 0xA0(r31)
	  stw       r31, 0x60(r31)
	  stw       r31, 0x74(r31)
	  stw       r31, 0x88(r31)
	  stw       r31, 0x9C(r31)
	  stw       r4, 0xA4(r31)
	  stw       r0, 0x0(r31)
	  bl        0x24D898
	  li        r0, 0
	  lis       r4, 0x6E6F
	  stw       r0, 0xB8(r31)
	  addi      r3, r31, 0xF8
	  addi      r4, r4, 0x6E65
	  stw       r0, 0xEC(r31)
	  stw       r0, 0xF4(r31)
	  bl        0x24D8E0
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, 0xF0(r31)
	  stb       r0, 0x108(r31)

	.loc_0xE8:
	  lwz       r0, 0x14(r30)
	  addi      r3, r31, 0xF8
	  addi      r4, r30, 0x4
	  li        r5, 0x5
	  stw       r0, 0xB8(r31)
	  bl        -0x104308
	  lwz       r0, 0xC(r30)
	  stw       r0, 0x100(r31)
	  lwz       r0, 0x0(r30)
	  stw       r0, 0xF4(r31)
	  lbz       r0, 0x18(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x144
	  lwz       r0, 0x10(r30)
	  stw       r0, 0xEC(r31)
	  lwz       r3, 0x10(r30)
	  lwz       r4, 0x14(r30)
	  bl        -0x92320
	  stw       r3, 0xF0(r31)
	  lbz       r0, 0x108(r31)
	  ori       r0, r0, 0x80
	  stb       r0, 0x108(r31)
	  b         .loc_0x14C

	.loc_0x144:
	  lwz       r0, 0x10(r30)
	  stw       r0, 0xEC(r31)

	.loc_0x14C:
	  li        r3, 0x1C
	  bl        -0x1A1BD0
	  mr.       r28, r3
	  beq-      .loc_0x16C
	  bl        0x24B910
	  lis       r3, 0x804B
	  addi      r0, r3, 0x63D4
	  stw       r0, 0x0(r28)

	.loc_0x16C:
	  stw       r31, 0x18(r28)
	  mr        r4, r28
	  addi      r3, r29, 0x20
	  bl        0x24B96C
	  lwz       r3, 0x18(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x6D34(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x24C
	  lwz       r3, 0xB8(r31)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0x20(r1)
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x24(r1)
	  lwz       r3, 0xEC(r31)
	  bl        -0x923F4
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x128(r3)
	  lfs       f3, 0x20(r1)
	  lfs       f2, 0x124(r3)
	  fadds     f4, f1, f0
	  lfs       f0, 0x120(r3)
	  lfs       f1, 0x1C(r1)
	  fadds     f2, f3, f2
	  stfs      f4, 0x24(r1)
	  fadds     f1, f1, f0
	  lfs       f0, -0x4DD8(r2)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x1C(r1)
	  lfs       f1, 0x12C(r3)
	  stfs      f1, 0x28(r1)
	  lfs       f1, 0x1C(r30)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x20C
	  stfs      f1, 0x28(r1)

	.loc_0x20C:
	  lwz       r3, -0x6D34(r13)
	  addi      r4, r1, 0x1C
	  addi      r5, r1, 0x8
	  addi      r6, r1, 0xC
	  bl        -0x6D7B0
	  lwz       r3, -0x6D34(r13)
	  mr        r4, r31
	  addi      r5, r1, 0x1C
	  bl        -0x6D630
	  lwz       r3, 0xF4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x24C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x24C:
	  lwz       r0, 0x44(r1)
	  mr        r3, r31
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C5B94
 * Size:	000004
 */
void PlatInstance::constructor() { }

/*
 * --INFO--
 * Address:	801C5B98
 * Size:	000020
 */
void PlatMgr::delInstance(PlatInstance*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0xE00
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C5BB8
 * Size:	0002A4
 */
void PlatMgr::traceMove(MoveInfo&, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x88(r1)
	  fmr       f31, f1
	  stw       r31, 0x84(r1)
	  mr        r31, r4
	  lbz       r0, -0x7BB7(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  lwz       r0, -0x6D34(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  lwz       r4, 0x0(r31)
	  addi      r3, r1, 0x18
	  bl        0x687AC
	  lwz       r5, -0x6D34(r13)
	  li        r0, 0x1
	  stb       r0, 0x34(r1)
	  addi      r3, r1, 0x38
	  addi      r4, r1, 0x18
	  stw       r5, 0x30(r1)
	  bl        0x687D0
	  addi      r3, r1, 0x38
	  bl        0x68844
	  b         .loc_0x90

	.loc_0x68:
	  addi      r3, r1, 0x38
	  bl        0x6893C
	  lbz       r0, 0x108(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x88
	  fmr       f1, f31
	  mr        r4, r31
	  bl        -0xD7C

	.loc_0x88:
	  addi      r3, r1, 0x38
	  bl        0x688BC

	.loc_0x90:
	  addi      r3, r1, 0x38
	  bl        0x688E8
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x28C

	.loc_0xA4:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x63BC
	  stw       r0, 0x14(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0xE0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x26C

	.loc_0xE0:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x14C

	.loc_0xF8:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x26C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x14C:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xF8
	  b         .loc_0x26C

	.loc_0x16C:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x108(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x1B0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  fmr       f1, f31
	  mr        r4, r31
	  bl        -0xEA4

	.loc_0x1B0:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1DC
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x26C

	.loc_0x1DC:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x250

	.loc_0x1FC:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x26C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x250:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1FC

	.loc_0x26C:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x16C

	.loc_0x28C:
	  lwz       r0, 0x94(r1)
	  lfd       f31, 0x88(r1)
	  lwz       r31, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C5E5C
 * Size:	00004C
 */
// void Iterator<Game::PlatInstance>::isDone()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r3
// 	  lwz       r3, 0x8(r3)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x1C(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x4(r31)
// 	  sub       r0, r3, r0
// 	  cntlzw    r0, r0
// 	  rlwinm    r3,r0,27,5,31
// 	  lwz       r31, 0xC(r1)
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0002FC
 */
// void getMinY__Q24Game7PlatMgrFR10Vector3f(void)
void PlatMgr::getMinY(Vector3f&) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801C5EA8
 * Size:	0002B0
 */
void PlatMgr::getCurrTri(CurrTriInfo&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stw       r31, 0x9C(r1)
	  mr        r31, r4
	  lbz       r0, -0x7BB7(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  lwz       r0, -0x6D34(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  lfs       f1, 0x0(r31)
	  addi      r3, r1, 0x28
	  lfs       f0, -0x4DD8(r2)
	  addi      r4, r1, 0x18
	  stfs      f1, 0x18(r1)
	  lfs       f1, 0x4(r31)
	  stfs      f1, 0x1C(r1)
	  lfs       f1, 0x8(r31)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  bl        0x684A4
	  lwz       r5, -0x6D34(r13)
	  li        r0, 0x1
	  stb       r0, 0x44(r1)
	  addi      r3, r1, 0x48
	  addi      r4, r1, 0x28
	  stw       r5, 0x40(r1)
	  bl        0x684C8
	  addi      r3, r1, 0x48
	  bl        0x6853C
	  b         .loc_0xA4

	.loc_0x80:
	  addi      r3, r1, 0x48
	  bl        0x68634
	  lbz       r0, 0x108(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x9C
	  mr        r4, r31
	  bl        -0x12D4

	.loc_0x9C:
	  addi      r3, r1, 0x48
	  bl        0x685B8

	.loc_0xA4:
	  addi      r3, r1, 0x48
	  bl        0x685E4
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x80
	  b         .loc_0x29C

	.loc_0xB8:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x63BC
	  stw       r0, 0x14(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0xF4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x27C

	.loc_0xF4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x160

	.loc_0x10C:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x27C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x160:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x10C
	  b         .loc_0x27C

	.loc_0x180:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x108(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  bl        -0x13F8

	.loc_0x1C0:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1EC
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x27C

	.loc_0x1EC:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x260

	.loc_0x20C:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x27C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x260:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x20C

	.loc_0x27C:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x180

	.loc_0x29C:
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x9C(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C6158
 * Size:	000338
 */
void PlatMgr::findRayIntersection(Sys::RayIntersectInfo&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stfd      f29, 0xA0(r1)
	  psq_st    f29,0xA8(r1),0,0
	  stfd      f28, 0x90(r1)
	  psq_st    f28,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  lfs       f2, 0x4(r4)
	  mr        r30, r4
	  lfs       f1, 0x10(r4)
	  lfs       f4, 0x0(r4)
	  fsubs     f5, f2, f1
	  lfs       f3, 0xC(r4)
	  lfs       f2, 0x8(r4)
	  lfs       f1, 0x14(r4)
	  fsubs     f3, f4, f3
	  fmuls     f4, f5, f5
	  fsubs     f2, f2, f1
	  lfs       f0, -0x4DD8(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x63BC
	  stw       r0, 0x14(r1)
	  cmplwi    r0, 0
	  lfs       f28, -0x4DD4(r2)
	  stw       r4, 0x8(r1)
	  li        r31, 0
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0xC0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x2B8

	.loc_0xC0:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x12C

	.loc_0xD8:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2B8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x12C:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xD8
	  b         .loc_0x2B8

	.loc_0x14C:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x108(r3)
	  mr        r29, r3
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x1FC
	  lwz       r3, 0xEC(r29)
	  bl        -0x92BE0
	  mr        r0, r3
	  lwz       r3, 0xB8(r29)
	  mr        r28, r0
	  addi      r4, r1, 0x48
	  bl        -0xDC014
	  lbz       r0, -0x7BB8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x1A4
	  lbz       r0, 0x108(r29)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x1B4

	.loc_0x1A4:
	  addi      r3, r1, 0x48
	  addi      r4, r1, 0x18
	  bl        -0xDBEE8
	  b         .loc_0x1C0

	.loc_0x1B4:
	  addi      r3, r29, 0xBC
	  addi      r4, r1, 0x18
	  bl        -0xDC048

	.loc_0x1C0:
	  mr        r3, r28
	  mr        r4, r30
	  addi      r5, r1, 0x48
	  addi      r6, r1, 0x18
	  bl        0x258730
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1FC
	  lfs       f0, 0x40(r30)
	  fcmpo     cr0, f0, f28
	  bge-      .loc_0x1FC
	  fmr       f28, f0
	  lfs       f31, 0x34(r30)
	  lfs       f30, 0x38(r30)
	  li        r31, 0x1
	  lfs       f29, 0x3C(r30)

	.loc_0x1FC:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x228
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x2B8

	.loc_0x228:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x29C

	.loc_0x248:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2B8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x29C:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x248

	.loc_0x2B8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x14C
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x2F4
	  stfs      f31, 0x34(r30)
	  li        r3, 0x1
	  stfs      f30, 0x38(r30)
	  stfs      f29, 0x3C(r30)
	  b         .loc_0x2F8

	.loc_0x2F4:
	  li        r3, 0

	.loc_0x2F8:
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  psq_l     f29,0xA8(r1),0,0
	  lfd       f29, 0xA0(r1)
	  psq_l     f28,0x98(r1),0,0
	  lfd       f28, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r0, 0xD4(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C6490
 * Size:	0001DC
 */
void PlatMgr::resetOnCount()
{
	Iterator<PlatInstance> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		PlatInstance* item = (*iterator);
		item->_104         = 0;
		iterator.next();
	}
}

/*
 * --INFO--
 * Address:	801C666C
 * Size:	000004
 */
void PlatMgr::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801C6670
 * Size:	0000E0
 */
PlatMgr::~PlatMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  beq-      .loc_0xC4
	  lis       r3, 0x804B
	  addi      r3, r3, 0x6338
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r31)
	  beq-      .loc_0xB4
	  lis       r3, 0x804B
	  addic.    r0, r31, 0x20
	  addi      r3, r3, 0x63E4
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r31)
	  beq-      .loc_0x6C
	  lis       r4, 0x804B
	  addi      r3, r31, 0x20
	  addi      r0, r4, 0x63D4
	  li        r4, 0
	  stw       r0, 0x20(r31)
	  bl        0x24AEB0

	.loc_0x6C:
	  cmplwi    r31, 0
	  beq-      .loc_0xB4
	  lis       r3, 0x804B
	  addi      r3, r3, 0x6464
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r31)
	  beq-      .loc_0xB4
	  lis       r3, 0x804B
	  addi      r0, r3, 0x64E0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xB4
	  lis       r4, 0x804B
	  mr        r3, r31
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x0(r31)
	  bl        0x24AE68

	.loc_0xB4:
	  extsh.    r0, r30
	  ble-      .loc_0xC4
	  mr        r3, r31
	  bl        -0x1A267C

	.loc_0xC4:
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
 * Address:	801C6750
 * Size:	000038
 */
// void Iterator<Game::PlatInstance>::operator*()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r4, r3
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x8(r3)
// 	  lwz       r4, 0x4(r4)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C6788
 * Size:	0000E4
 */
// void Iterator<Game::PlatInstance>::next()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r3
// 	  lwz       r0, 0xC(r3)
// 	  cmplwi    r0, 0
// 	  bne-      .loc_0x40
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r4, 0x4(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0x4(r31)
// 	  b         .loc_0xD0

// 	.loc_0x40:
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r4, 0x4(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0x4(r31)
// 	  b         .loc_0xB4

// 	.loc_0x60:
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r4, 0x4(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0xC(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0xD0
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r4, 0x4(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0x4(r31)

// 	.loc_0xB4:
// 	  mr        r3, r31
// 	  lwz       r12, 0x0(r31)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x60

// 	.loc_0xD0:
// 	  lwz       r0, 0x14(r1)
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C686C
 * Size:	0000DC
 */
// void Iterator<Game::PlatInstance>::first()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr        r31, r3
// 	  lwz       r0, 0xC(r3)
// 	  cmplwi    r0, 0
// 	  bne-      .loc_0x3C
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0x4(r31)
// 	  b         .loc_0xC8

// 	.loc_0x3C:
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0x4(r31)
// 	  b         .loc_0xAC

// 	.loc_0x58:
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r4, 0x4(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0xC(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0xC8
// 	  lwz       r3, 0x8(r31)
// 	  lwz       r4, 0x4(r31)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0x4(r31)

// 	.loc_0xAC:
// 	  mr        r3, r31
// 	  lwz       r12, 0x0(r31)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x58

// 	.loc_0xC8:
// 	  lwz       r0, 0x14(r1)
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C6948
 * Size:	000004
 */
void PlatInstance::checkCollision(Game::CellObject*) { }

/*
 * --INFO--
 * Address:	801C694C
 * Size:	000004
 */
void PlatInstance::doAnimation() { }

/*
 * --INFO--
 * Address:	801C6950
 * Size:	000004
 */
void PlatInstance::doEntry() { }

/*
 * --INFO--
 * Address:	801C6954
 * Size:	000004
 */
void PlatInstance::doSetView(int) { }

/*
 * --INFO--
 * Address:	801C6958
 * Size:	000004
 */
void PlatInstance::doViewCalc(void) { }

/*
 * --INFO--
 * Address:	801C695C
 * Size:	000004
 */
void PlatInstance::doSimulation(float) { }

/*
 * --INFO--
 * Address:	801C6960
 * Size:	000004
 */
void PlatInstance::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801C6964
 * Size:	00000C
 */
char* PlatInstance::getTypeName()
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  addi      r3, r3, 0x174
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C6970
 * Size:	00000C
 */
u16 PlatInstance::getObjType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x1
	  subi      r3, r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C697C
 * Size:	000008
 */
bool PlatInstance::collisionUpdatable() { return 0x0; }

/*
 * --INFO--
 * Address:	801C6984
 * Size:	000008
 */
// void NodeObjectMgr<Game::PlatInstance>::get(void*)
// {
// 	/*
// 	.loc_0x0:
// 	  lwz       r3, 0x18(r4)
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C698C
 * Size:	000008
 */
// void NodeObjectMgr<Game::PlatInstance>::getNext(void*)
// {
// 	/*
// 	.loc_0x0:
// 	  lwz       r3, 0x4(r4)
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C6994
 * Size:	000008
 */
// void NodeObjectMgr<Game::PlatInstance>::getStart()
// {
// 	/*
// 	.loc_0x0:
// 	  lwz       r3, 0x30(r3)
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C699C
 * Size:	000008
 */
// u32 NodeObjectMgr<Game::PlatInstance>::getEnd() { return 0x0; }

/*
 * --INFO--
 * Address:	801C69A4
 * Size:	000044
 */
// void NodeObjectMgr<Game::PlatInstance>::delNode(Game::PlatInstance*)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x30(r3)
// 	  b         .loc_0x2C

// 	.loc_0x14:
// 	  lwz       r0, 0x18(r3)
// 	  cmplw     r0, r4
// 	  bne-      .loc_0x28
// 	  bl        0x24AC0C
// 	  b         .loc_0x34

// 	.loc_0x28:
// 	  lwz       r3, 0x4(r3)

// 	.loc_0x2C:
// 	  cmplwi    r3, 0
// 	  bne+      .loc_0x14

// 	.loc_0x34:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C69E8
 * Size:	000018
 */
// void NodeObjectMgr<Game::PlatInstance>::resetMgr()
// {
// 	/*
// 	.loc_0x0:
// 	  li        r0, 0
// 	  stw       r0, 0x30(r3)
// 	  stw       r0, 0x2C(r3)
// 	  stw       r0, 0x28(r3)
// 	  stw       r0, 0x24(r3)
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C6A00
 * Size:	0001E4
 */
// void ObjectMgr<Game::PlatInstance>::doAnimation()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  lis       r4, 0x804B
// 	  stw       r0, 0x24(r1)
// 	  li        r0, 0
// 	  addi      r4, r4, 0x63BC
// 	  cmplwi    r0, 0
// 	  stw       r0, 0x14(r1)
// 	  stw       r4, 0x8(r1)
// 	  stw       r0, 0xC(r1)
// 	  stw       r3, 0x10(r1)
// 	  bne-      .loc_0x48
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1B4

// 	.loc_0x48:
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0xB4

// 	.loc_0x60:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0x1B4
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)

// 	.loc_0xB4:
// 	  lwz       r12, 0x8(r1)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x60
// 	  b         .loc_0x1B4

// 	.loc_0xD4:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x30(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  cmplwi    r0, 0
// 	  bne-      .loc_0x124
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1B4

// 	.loc_0x124:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x198

// 	.loc_0x144:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0x1B4
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)

// 	.loc_0x198:
// 	  lwz       r12, 0x8(r1)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x144

// 	.loc_0x1B4:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x1C(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r4, 0xC(r1)
// 	  cmplw     r4, r3
// 	  bne+      .loc_0xD4
// 	  lwz       r0, 0x24(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C6BE4
 * Size:	0001E4
 */
// void ObjectMgr<Game::PlatInstance>::doEntry()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  lis       r4, 0x804B
// 	  stw       r0, 0x24(r1)
// 	  li        r0, 0
// 	  addi      r4, r4, 0x63BC
// 	  cmplwi    r0, 0
// 	  stw       r0, 0x14(r1)
// 	  stw       r4, 0x8(r1)
// 	  stw       r0, 0xC(r1)
// 	  stw       r3, 0x10(r1)
// 	  bne-      .loc_0x48
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1B4

// 	.loc_0x48:
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0xB4

// 	.loc_0x60:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0x1B4
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)

// 	.loc_0xB4:
// 	  lwz       r12, 0x8(r1)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x60
// 	  b         .loc_0x1B4

// 	.loc_0xD4:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x34(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  cmplwi    r0, 0
// 	  bne-      .loc_0x124
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1B4

// 	.loc_0x124:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x198

// 	.loc_0x144:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0x1B4
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)

// 	.loc_0x198:
// 	  lwz       r12, 0x8(r1)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x144

// 	.loc_0x1B4:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x1C(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r4, 0xC(r1)
// 	  cmplw     r4, r3
// 	  bne+      .loc_0xD4
// 	  lwz       r0, 0x24(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C6DC8
 * Size:	0001F4
 */
// void ObjectMgr<Game::PlatInstance>::doSetView(int)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  lis       r5, 0x804B
// 	  stw       r0, 0x24(r1)
// 	  li        r0, 0
// 	  addi      r5, r5, 0x63BC
// 	  stw       r31, 0x1C(r1)
// 	  cmplwi    r0, 0
// 	  mr        r31, r4
// 	  stw       r0, 0x14(r1)
// 	  stw       r5, 0x8(r1)
// 	  stw       r0, 0xC(r1)
// 	  stw       r3, 0x10(r1)
// 	  bne-      .loc_0x50
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1C0

// 	.loc_0x50:
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0xBC

// 	.loc_0x68:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0x1C0
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)

// 	.loc_0xBC:
// 	  lwz       r12, 0x8(r1)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x68
// 	  b         .loc_0x1C0

// 	.loc_0xDC:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r31
// 	  lwz       r12, 0x38(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  cmplwi    r0, 0
// 	  bne-      .loc_0x130
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1C0

// 	.loc_0x130:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1A4

// 	.loc_0x150:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0x1C0
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)

// 	.loc_0x1A4:
// 	  lwz       r12, 0x8(r1)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x150

// 	.loc_0x1C0:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x1C(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r4, 0xC(r1)
// 	  cmplw     r4, r3
// 	  bne+      .loc_0xDC
// 	  lwz       r0, 0x24(r1)
// 	  lwz       r31, 0x1C(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C6FBC
 * Size:	0001E4
 */
// void ObjectMgr<Game::PlatInstance>::doViewCalc()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  lis       r4, 0x804B
// 	  stw       r0, 0x24(r1)
// 	  li        r0, 0
// 	  addi      r4, r4, 0x63BC
// 	  cmplwi    r0, 0
// 	  stw       r0, 0x14(r1)
// 	  stw       r4, 0x8(r1)
// 	  stw       r0, 0xC(r1)
// 	  stw       r3, 0x10(r1)
// 	  bne-      .loc_0x48
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1B4

// 	.loc_0x48:
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0xB4

// 	.loc_0x60:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0x1B4
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)

// 	.loc_0xB4:
// 	  lwz       r12, 0x8(r1)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x60
// 	  b         .loc_0x1B4

// 	.loc_0xD4:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x3C(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  cmplwi    r0, 0
// 	  bne-      .loc_0x124
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1B4

// 	.loc_0x124:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x198

// 	.loc_0x144:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0x1B4
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)

// 	.loc_0x198:
// 	  lwz       r12, 0x8(r1)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x144

// 	.loc_0x1B4:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x1C(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r4, 0xC(r1)
// 	  cmplw     r4, r3
// 	  bne+      .loc_0xD4
// 	  lwz       r0, 0x24(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C71A0
 * Size:	0001F4
 */
// void ObjectMgr<Game::PlatInstance>::doSimulation(float)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  lis       r4, 0x804B
// 	  stw       r0, 0x24(r1)
// 	  li        r0, 0
// 	  addi      r4, r4, 0x63BC
// 	  stfd      f31, 0x18(r1)
// 	  fmr       f31, f1
// 	  cmplwi    r0, 0
// 	  stw       r4, 0x8(r1)
// 	  stw       r0, 0x14(r1)
// 	  stw       r0, 0xC(r1)
// 	  stw       r3, 0x10(r1)
// 	  bne-      .loc_0x50
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1C0

// 	.loc_0x50:
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0xBC

// 	.loc_0x68:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0x1C0
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)

// 	.loc_0xBC:
// 	  lwz       r12, 0x8(r1)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x68
// 	  b         .loc_0x1C0

// 	.loc_0xDC:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r12, 0x0(r3)
// 	  fmr       f1, f31
// 	  lwz       r12, 0x40(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  cmplwi    r0, 0
// 	  bne-      .loc_0x130
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1C0

// 	.loc_0x130:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1A4

// 	.loc_0x150:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0x1C0
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)

// 	.loc_0x1A4:
// 	  lwz       r12, 0x8(r1)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x150

// 	.loc_0x1C0:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x1C(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r4, 0xC(r1)
// 	  cmplw     r4, r3
// 	  bne+      .loc_0xDC
// 	  lwz       r0, 0x24(r1)
// 	  lfd       f31, 0x18(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C7394
 * Size:	0001F4
 */
// void ObjectMgr<Game::PlatInstance>::doDirectDraw(Graphics&)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  lis       r5, 0x804B
// 	  stw       r0, 0x24(r1)
// 	  li        r0, 0
// 	  addi      r5, r5, 0x63BC
// 	  stw       r31, 0x1C(r1)
// 	  cmplwi    r0, 0
// 	  mr        r31, r4
// 	  stw       r0, 0x14(r1)
// 	  stw       r5, 0x8(r1)
// 	  stw       r0, 0xC(r1)
// 	  stw       r3, 0x10(r1)
// 	  bne-      .loc_0x50
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1C0

// 	.loc_0x50:
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x18(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0xBC

// 	.loc_0x68:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0x1C0
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)

// 	.loc_0xBC:
// 	  lwz       r12, 0x8(r1)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x68
// 	  b         .loc_0x1C0

// 	.loc_0xDC:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r31
// 	  lwz       r12, 0x44(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  cmplwi    r0, 0
// 	  bne-      .loc_0x130
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1C0

// 	.loc_0x130:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)
// 	  b         .loc_0x1A4

// 	.loc_0x150:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  mr        r4, r3
// 	  lwz       r3, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  bne-      .loc_0x1C0
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r4, 0xC(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  stw       r3, 0xC(r1)

// 	.loc_0x1A4:
// 	  lwz       r12, 0x8(r1)
// 	  addi      r3, r1, 0x8
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  rlwinm.   r0,r3,0,24,31
// 	  beq+      .loc_0x150

// 	.loc_0x1C0:
// 	  lwz       r3, 0x10(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x1C(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r4, 0xC(r1)
// 	  cmplw     r4, r3
// 	  bne+      .loc_0xDC
// 	  lwz       r0, 0x24(r1)
// 	  lwz       r31, 0x1C(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C7588
 * Size:	00002C
 */
// void Container<Game::PlatInstance>::getObject(void*)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x20(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801C75B4
 * Size:	000008
 */
// u32 Container<Game::PlatInstance>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	801C75BC
 * Size:	000008
 */
// u32 Container<Game::PlatInstance>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	801C75C4
 * Size:	000008
 */
// void ObjectMgr<Game::PlatInstance>::@28 @doDirectDraw(Graphics&)
// {
// 	/*
// 	.loc_0x0:
// 	  subi      r3, r3, 0x1C
// 	  b         -0x234
// 	*/
// }

/*
 * --INFO--
 * Address:	801C75CC
 * Size:	000008
 */
// void NodeObjectMgr<Game::PlatInstance>::@28 @resetMgr()
// {
// 	/*
// 	.loc_0x0:
// 	  subi      r3, r3, 0x1C
// 	  b         -0xBE8
// 	*/
// }

/*
 * --INFO--
 * Address:	801C75D4
 * Size:	000008
 */
// void @28 @Game::PlatMgr::doDirectDraw(Graphics&)
// {
// 	/*
// 	.loc_0x0:
// 	  subi      r3, r3, 0x1C
// 	  b         -0xF6C
// 	*/
// }

/*
 * --INFO--
 * Address:	801C75DC
 * Size:	000008
 */
// void ObjectMgr<Game::PlatInstance>::@28 @doSimulation(float)
// {
// 	/*
// 	.loc_0x0:
// 	  subi      r3, r3, 0x1C
// 	  b         -0x440
// 	*/
// }

/*
 * --INFO--
 * Address:	801C75E4
 * Size:	000008
 */
// void ObjectMgr<Game::PlatInstance>::@28 @doViewCalc()
// {
// 	/*
// 	.loc_0x0:
// 	  subi      r3, r3, 0x1C
// 	  b         -0x62C
// 	*/
// }

/*
 * --INFO--
 * Address:	801C75EC
 * Size:	000008
 */
// void ObjectMgr<Game::PlatInstance>::@28 @doSetView(int)
// {
// 	/*
// 	.loc_0x0:
// 	  subi      r3, r3, 0x1C
// 	  b         -0x828
// 	*/
// }

/*
 * --INFO--
 * Address:	801C75F4
 * Size:	000008
 */
// void ObjectMgr<Game::PlatInstance>::@28 @doEntry()
// {
// 	/*
// 	.loc_0x0:
// 	  subi      r3, r3, 0x1C
// 	  b         -0xA14
// 	*/
// }

/*
 * --INFO--
 * Address:	801C75FC
 * Size:	000008
 */
// void ObjectMgr<Game::PlatInstance>::@28 @doAnimation()
// {
// 	/*
// 	.loc_0x0:
// 	  subi      r3, r3, 0x1C
// 	  b         -0xC00
// 	*/
// }

} // namespace Game
