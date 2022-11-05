#include "BoundBox.h"
#include "Dolphin/math.h"
#include "Dolphin/mtx.h"
#include "Dolphin/string.h"
#include "Dolphin/vec.h"
#include "Game/GameSystem.h"
#include "Game/MapMgr.h"
#include "Game/routeMgr.h"
#include "Game/seaMgr.h"
#include "Game/WaterBox.h"
#include "Iterator.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DTexture.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "Matrixf.h"
#include "ObjectMgr.h"
#include "nans.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/Sphere.h"
#include "SysShape/Model.h"
#include "System.h"
#include "types.h"
#include "Vector3.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_gameSeaMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F958
    lbl_8047F958:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_8047F964
    lbl_8047F964:
        .4byte 0x67616D65
        .4byte 0x5365614D
        .4byte 0x67722E63
        .4byte 0x70700000
    .global lbl_8047F974
    lbl_8047F974:
        .4byte 0x82DC82F1
        .4byte 0x82BE2120
        .4byte 0x73746172
        .4byte 0x7455700A
        .4byte 0x00000000
    .global lbl_8047F988
    lbl_8047F988:
        .4byte 0x66627465
        .4byte 0x785F6475
        .4byte 0x6D6D7900
        .4byte 0x75736572
        .4byte 0x2F4B616E
        .4byte 0x646F2F6D
        .4byte 0x61702F77
        .4byte 0x61746572
        .4byte 0x626F782E
        .4byte 0x737A7300
        .4byte 0x75736572
        .4byte 0x2F4B616E
        .4byte 0x646F2F6D
        .4byte 0x61702F77
        .4byte 0x61746572
        .4byte 0x626F7832
        .4byte 0x702E737A
        .4byte 0x73000000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x31303078
        .4byte 0x3130302F
        .4byte 0x6D697A75
        .4byte 0x31303078
        .4byte 0x3130302E
        .4byte 0x626D6400
        .4byte 0x32702F32
        .4byte 0x702E626D
        .4byte 0x64000000
        .4byte 0x31303078
        .4byte 0x3130302F
        .4byte 0x6D697A75
        .4byte 0x31303078
        .4byte 0x3130302E
        .4byte 0x62746B00
        .4byte 0x32702F32
        .4byte 0x702E6274
        .4byte 0x6B000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B57A8
    lbl_804B57A8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game6SeaMgr
    __vt__Q24Game6SeaMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game6SeaMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__27Container<Q24Game8WaterBox>FPv"
        .4byte "getNext__31NodeObjectMgr<Q24Game8WaterBox>FPv"
        .4byte "getStart__31NodeObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "getEnd__31NodeObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "get__31NodeObjectMgr<Q24Game8WaterBox>FPv"
        .4byte "getAt__27Container<Q24Game8WaterBox>Fi"
        .4byte "getTo__27Container<Q24Game8WaterBox>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "@28@doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "@28@doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
        .4byte "@28@doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "@28@doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
        .4byte "@28@doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
        .4byte "doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
        .4byte "doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
        .4byte "resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv"
    .global "__vt__29TObjectNode<Q24Game8WaterBox>"
    "__vt__29TObjectNode<Q24Game8WaterBox>":
        .4byte 0
        .4byte 0
        .4byte "__dt__29TObjectNode<Q24Game8WaterBox>Fv"
        .4byte getChildCount__5CNodeFv
    .global "__vt__31NodeObjectMgr<Q24Game8WaterBox>"
    "__vt__31NodeObjectMgr<Q24Game8WaterBox>":
        .4byte 0
        .4byte 0
        .4byte "__dt__31NodeObjectMgr<Q24Game8WaterBox>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__27Container<Q24Game8WaterBox>FPv"
        .4byte "getNext__31NodeObjectMgr<Q24Game8WaterBox>FPv"
        .4byte "getStart__31NodeObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "getEnd__31NodeObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "get__31NodeObjectMgr<Q24Game8WaterBox>FPv"
        .4byte "getAt__27Container<Q24Game8WaterBox>Fi"
        .4byte "getTo__27Container<Q24Game8WaterBox>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "@28@doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "@28@doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
        .4byte "@28@doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "@28@doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
        .4byte "@28@doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
        .4byte "doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
        .4byte "doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
        .4byte "resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv"
    .global "__vt__27ObjectMgr<Q24Game8WaterBox>"
    "__vt__27ObjectMgr<Q24Game8WaterBox>":
        .4byte 0
        .4byte 0
        .4byte "__dt__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__27Container<Q24Game8WaterBox>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__27Container<Q24Game8WaterBox>Fi"
        .4byte "getTo__27Container<Q24Game8WaterBox>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "@28@doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "@28@doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
        .4byte "@28@doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "@28@doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
        .4byte "@28@doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
        .4byte "doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
        .4byte "doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
        .4byte "doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
    .global "__vt__27Container<Q24Game8WaterBox>"
    "__vt__27Container<Q24Game8WaterBox>":
        .4byte 0
        .4byte 0
        .4byte "__dt__27Container<Q24Game8WaterBox>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__27Container<Q24Game8WaterBox>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__27Container<Q24Game8WaterBox>Fi"
        .4byte "getTo__27Container<Q24Game8WaterBox>Fv"
    .global __vt__Q24Game12AABBWaterBox
    __vt__Q24Game12AABBWaterBox:
        .4byte 0
        .4byte 0
        .4byte inWater__Q24Game12AABBWaterBoxFRQ23Sys6Sphere
        .4byte inWater2d__Q24Game12AABBWaterBoxFRQ23Sys6Sphere
        .4byte getSeaLevel__Q24Game12AABBWaterBoxFv
        .4byte getSeaHeightPtr__Q24Game12AABBWaterBoxFv
        .4byte update__Q24Game12AABBWaterBoxFv
        .4byte startDown__Q24Game12AABBWaterBoxFf
        .4byte startUp__Q24Game12AABBWaterBoxFf
        .4byte directDraw__Q24Game12AABBWaterBoxFR8Graphics
        .4byte doAnimation__Q24Game12AABBWaterBoxFv
        .4byte doEntry__Q24Game12AABBWaterBoxFv
        .4byte doSetView__Q24Game12AABBWaterBoxFi
        .4byte doViewCalc__Q24Game12AABBWaterBoxFv
        .4byte doSimulation__Q24Game8WaterBoxFf
        .4byte doDirectDraw__Q24Game8WaterBoxFR8Graphics
        .4byte
   attachModel__Q24Game12AABBWaterBoxFP12J3DModelDataPQ23Sys15MatTexAnimationf
        .4byte calcMatrix__Q24Game12AABBWaterBoxFv
    .global __vt__Q24Game8WaterBox
    __vt__Q24Game8WaterBox:
        .4byte 0
        .4byte 0
        .4byte inWater__Q24Game8WaterBoxFRQ23Sys6Sphere
        .4byte inWater2d__Q24Game8WaterBoxFRQ23Sys6Sphere
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte startDown__Q24Game8WaterBoxFf
        .4byte startUp__Q24Game8WaterBoxFf
        .4byte directDraw__Q24Game8WaterBoxFR8Graphics
        .4byte doAnimation__Q24Game8WaterBoxFv
        .4byte doEntry__Q24Game8WaterBoxFv
        .4byte doSetView__Q24Game8WaterBoxFi
        .4byte doViewCalc__Q24Game8WaterBoxFv
        .4byte doSimulation__Q24Game8WaterBoxFf
        .4byte doDirectDraw__Q24Game8WaterBoxFR8Graphics
        .4byte
   attachModel__Q24Game8WaterBoxFP12J3DModelDataPQ23Sys15MatTexAnimationf .4byte
   calcMatrix__Q24Game8WaterBoxFv .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515A50
    lbl_80515A50:
        .skip 0x4
    .global lbl_80515A54
    lbl_80515A54:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519320
    lbl_80519320:
        .4byte 0x47000000
    .global lbl_80519324
    lbl_80519324:
        .4byte 0xC7000000
    .global lbl_80519328
    lbl_80519328:
        .4byte 0x00000000
    .global lbl_8051932C
    lbl_8051932C:
        .4byte 0x40A00000
    .global lbl_80519330
    lbl_80519330:
        .float 0.5
    .global lbl_80519334
    lbl_80519334:
        .float 1.0
    .global lbl_80519338
    lbl_80519338:
        .4byte 0x41F00000
    .global lbl_8051933C
    lbl_8051933C:
        .4byte 0x40400000
    .global lbl_80519340
    lbl_80519340:
        .4byte 0x447A0000
    .global lbl_80519344
    lbl_80519344:
        .4byte 0x42C80000
*/

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
WaterBox::WaterBox()
    : m_flags(0)
{
	const char* fakeMatch_gameSeaMgr[3] = { nullptr, nullptr, nullptr };
	// UNUSED FUNCTION
	m_flags = 0;
	m_flags |= WBF_Unknown1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
AABBWaterBox::AABBWaterBox()
    : m_bounds()
    , m_matAnimator()
{
	// UNUSED FUNCTION
	_0C     = 0.0f;
	_08     = 0;
	_10     = 0.0f;
	_14     = 0.0f;
	_30     = 0.0f;
	m_model = nullptr;
	_34     = 0.0f;
	_60     = nullptr;
}

/*
 * --INFO--
 * Address:	801AE448
 * Size:	000028
 */
void AABBWaterBox::startDown(float p1)
{
	if (_08 != 0) {
		return;
	}
	_10 = p1;
	_14 = 0.0f;
	_08 = 1;
	_38 = 0.0f;
}

/*
 * --INFO--
 * Address:	801AE470
 * Size:	000038
 */
void AABBWaterBox::startUp(float) { JUT_PANICLINE(167, "まんだ! startUp\n"); }

/*
 * --INFO--
 * Address:	801AE4A8
 * Size:	0000B8
 */
inline bool AABBWaterBox::update(void)
{
	if (_08 == 1) {
		_0C = -(_38 * sys->m_deltaTime - _0C);
		_38 = sys->m_deltaTime * 5.0f + _38;
		_34 = _30 + _0C;
		if (_0C <= _10) {
			_0C = _10;
			_08 = 3;
			Game::mapMgr->m_seaMgr->delNode(this);
			return true;
		}
	}
	_34 = _30 + _0C;
	return false;
}

/*
 * --INFO--
 * Address:	801AE560
 * Size:	0001B0
 */
void AABBWaterBox::attachModel(J3DModelData* modelData, Sys::MatTexAnimation* anm, float p3)
{
	_64          = -1;
	_60          = 0;
	m_model      = new SysShape::Model(modelData, 0, 2);
	m_model->_04 = 1;
	_3C          = FABS(m_bounds.m_max.x - m_bounds.m_min.x) / p3;
	_40          = FABS(m_bounds.m_max.z - m_bounds.m_min.z) / p3;
	_44.x        = (m_bounds.m_min.x + m_bounds.m_max.x) * 0.5f;
	_44.z        = (m_bounds.m_min.z + m_bounds.m_max.z) * 0.5f;
	_44.y        = _30 + _0C;
	m_matAnimator.start(anm);
	calcMatrix();
	_34 = _30 + _0C;
	for (u16 i = 0; i < m_model->m_j3dModel->m_modelData->m_materialTable.m_texture->_00; i++) {
		if (strcmp(m_model->m_j3dModel->m_modelData->m_materialTable._18->getName(i), "fbtex_dummy") == 0) {
			_60 = m_model->m_j3dModel->m_modelData->m_materialTable.m_texture;
			_64 = i;
		}
	}
}

/*
 * --INFO--
 * Address:	801AE710
 * Size:	0000A0
 */
void AABBWaterBox::calcMatrix(void)
{
	if (m_model) {
		_44.y = _30 + _0C;
		Vector3f v1(_3C, 1.0f, _40);
		Matrixf mtx;
		mtx.makeSRT(v1, Vector3f::zero, _44);
		PSMTXCopy(mtx.m_matrix.mtxView, m_model->m_j3dModel->_24);
		m_model->m_j3dModel->calc();
	}
}

/*
 * --INFO--
 * Address:	801AE7B0
 * Size:	000048
 */
void AABBWaterBox::doAnimation(void)
{
	m_matAnimator.animate(30.0f);
	calcMatrix();
}

/*
 * --INFO--
 * Address:	801AE7F8
 * Size:	000030
 */
void AABBWaterBox::doSetView(int viewNo)
{
	if (m_model) {
		m_model->setCurrentViewNo((u16)viewNo);
	}
}

/*
 * --INFO--
 * Address:	801AE828
 * Size:	00002C
 */
void AABBWaterBox::doViewCalc(void)
{
	if (m_model) {
		m_model->viewCalc();
	}
}

/*
 * --INFO--
 * Address:	801AE854
 * Size:	000538
 */
void AABBWaterBox::doEntry(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r3
	stw      r30, 0x78(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_801AE914
	lwz      r3, 0x44(r4)
	cmpwi    r3, 0
	beq      lbl_801AE914
	cmpwi    r3, 4
	beq      lbl_801AE914
	cmpwi    r3, 2
	li       r0, 0
	beq      lbl_801AE8A0
	cmpwi    r3, 3
	bne      lbl_801AE8A4

lbl_801AE8A0:
	li       r0, 1

lbl_801AE8A4:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801AE8CC
	cmpwi    r3, 1
	li       r0, 0
	beq      lbl_801AE8C0
	cmpwi    r3, 3
	bne      lbl_801AE8C4

lbl_801AE8C0:
	li       r0, 1

lbl_801AE8C4:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801AE914

lbl_801AE8CC:
	cmplwi   r4, 0
	beq      lbl_801AED74
	mr       r3, r4
	li       r4, 4
	bl       setDrawBuffer__Q24Game10GameSystemFi
	lwz      r3, 0x50(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x50(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_801AED74

lbl_801AE914:
	lwz      r0, 0x44(r4)
	cmpwi    r0, 0
	bne      lbl_801AEB20
	lwz      r30, 0x58(r4)
	lwz      r0, 0xe4(r30)
	cmpwi    r0, 2
	bne      lbl_801AEB20
	cmplwi   r4, 0
	beq      lbl_801AED74
	mr       r3, r4
	li       r4, 4
	bl       setDrawBuffer__Q24Game10GameSystemFi
	addi     r3, r1, 0x48
	bl       PSMTXIdentity
	lwz      r3, 0x50(r31)
	li       r4, 3
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r3, 0x60(r3)
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x48(r1)
	lfs      f1, lbl_80519328@sda21(r2)
	stfs     f0, 0x24(r3)
	lfs      f0, lbl_80519334@sda21(r2)
	lfs      f2, 0x4c(r1)
	stfs     f2, 0x28(r3)
	lfs      f2, 0x50(r1)
	stfs     f2, 0x2c(r3)
	lfs      f2, 0x54(r1)
	stfs     f2, 0x30(r3)
	lfs      f2, 0x58(r1)
	stfs     f2, 0x34(r3)
	lfs      f2, 0x5c(r1)
	stfs     f2, 0x38(r3)
	lfs      f2, 0x60(r1)
	stfs     f2, 0x3c(r3)
	lfs      f2, 0x64(r1)
	stfs     f2, 0x40(r3)
	lfs      f2, 0x68(r1)
	stfs     f2, 0x44(r3)
	lfs      f2, 0x6c(r1)
	stfs     f2, 0x48(r3)
	lfs      f2, 0x70(r1)
	stfs     f2, 0x4c(r3)
	lfs      f2, 0x74(r1)
	stfs     f2, 0x50(r3)
	stfs     f1, 0x5c(r3)
	stfs     f1, 0x58(r3)
	stfs     f1, 0x54(r3)
	stfs     f0, 0x60(r3)
	lwz      r4, 0xf4(r30)
	lwz      r3, 0x60(r31)
	lha      r0, 0x64(r31)
	lwz      r4, 0x20(r4)
	lwz      r6, 4(r3)
	rlwinm   r0, r0, 5, 0xb, 0x1a
	lbz      r5, 0(r4)
	add      r6, r6, r0
	stb      r5, 0(r6)
	lbz      r5, 1(r4)
	stb      r5, 1(r6)
	lhz      r5, 2(r4)
	sth      r5, 2(r6)
	lhz      r5, 4(r4)
	sth      r5, 4(r6)
	lbz      r5, 6(r4)
	stb      r5, 6(r6)
	lbz      r5, 7(r4)
	stb      r5, 7(r6)
	lbz      r5, 8(r4)
	stb      r5, 8(r6)
	lbz      r5, 9(r4)
	stb      r5, 9(r6)
	lhz      r5, 0xa(r4)
	sth      r5, 0xa(r6)
	lwz      r5, 0xc(r4)
	stw      r5, 0xc(r6)
	lbz      r5, 0x10(r4)
	stb      r5, 0x10(r6)
	lbz      r5, 0x11(r4)
	stb      r5, 0x11(r6)
	lbz      r5, 0x12(r4)
	stb      r5, 0x12(r6)
	lbz      r5, 0x13(r4)
	stb      r5, 0x13(r6)
	lbz      r5, 0x14(r4)
	stb      r5, 0x14(r6)
	lbz      r5, 0x15(r4)
	stb      r5, 0x15(r6)
	lbz      r5, 0x16(r4)
	stb      r5, 0x16(r6)
	lbz      r5, 0x17(r4)
	stb      r5, 0x17(r6)
	lbz      r5, 0x18(r4)
	stb      r5, 0x18(r6)
	lbz      r5, 0x19(r4)
	stb      r5, 0x19(r6)
	lha      r5, 0x1a(r4)
	sth      r5, 0x1a(r6)
	lwz      r5, 0x1c(r4)
	stw      r5, 0x1c(r6)
	lwz      r5, 4(r3)
	add      r6, r5, r0
	lwz      r5, 0x1c(r6)
	add      r5, r4, r5
	subf     r5, r6, r5
	stw      r5, 0x1c(r6)
	lwz      r3, 4(r3)
	add      r3, r3, r0
	lwz      r0, 0xc(r3)
	add      r0, r4, r0
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	lwz      r3, 0x50(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x50(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_801AED74

lbl_801AEB20:
	lwz      r3, sys@sda21(r13)
	addi     r4, r1, 8
	lwz      r3, 0x24(r3)
	lwz      r3, 0x25c(r3)
	lwz      r3, 0x44(r3)
	addi     r3, r3, 0xb4
	bl       PSMTX44Copy
	lfs      f5, 0x38(r1)
	lfs      f4, 0x3c(r1)
	lfs      f1, lbl_80519328@sda21(r2)
	lfs      f3, 0x40(r1)
	lfs      f2, 0x44(r1)
	lfs      f0, lbl_80519334@sda21(r2)
	stfs     f5, 0x28(r1)
	stfs     f4, 0x2c(r1)
	stfs     f3, 0x30(r1)
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)
	lwz      r0, 0x50(r31)
	cmplwi   r0, 0
	beq      lbl_801AED74
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801AED5C
	li       r4, 4
	bl       setDrawBuffer__Q24Game10GameSystemFi
	lwz      r3, 0x50(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x60(r31)
	cmplwi   r0, 0
	beq      lbl_801AED5C
	lwz      r3, 0x50(r31)
	li       r4, 3
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r3, 0x60(r3)
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	lfs      f1, lbl_80519328@sda21(r2)
	stfs     f0, 0x24(r3)
	lfs      f0, lbl_80519334@sda21(r2)
	lfs      f2, 0xc(r1)
	stfs     f2, 0x28(r3)
	lfs      f2, 0x10(r1)
	stfs     f2, 0x2c(r3)
	lfs      f2, 0x14(r1)
	stfs     f2, 0x30(r3)
	lfs      f2, 0x18(r1)
	stfs     f2, 0x34(r3)
	lfs      f2, 0x1c(r1)
	stfs     f2, 0x38(r3)
	lfs      f2, 0x20(r1)
	stfs     f2, 0x3c(r3)
	lfs      f2, 0x24(r1)
	stfs     f2, 0x40(r3)
	lfs      f2, 0x28(r1)
	stfs     f2, 0x44(r3)
	lfs      f2, 0x2c(r1)
	stfs     f2, 0x48(r3)
	lfs      f2, 0x30(r1)
	stfs     f2, 0x4c(r3)
	lfs      f2, 0x34(r1)
	stfs     f2, 0x50(r3)
	stfs     f1, 0x5c(r3)
	stfs     f1, 0x58(r3)
	stfs     f1, 0x54(r3)
	stfs     f0, 0x60(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lha      r0, 0x64(r31)
	lwz      r4, 0x54(r3)
	lwz      r3, 0x60(r31)
	rlwinm   r0, r0, 5, 0xb, 0x1a
	lwz      r4, 0x20(r4)
	lwz      r6, 4(r3)
	lbz      r5, 0(r4)
	add      r6, r6, r0
	stb      r5, 0(r6)
	lbz      r5, 1(r4)
	stb      r5, 1(r6)
	lhz      r5, 2(r4)
	sth      r5, 2(r6)
	lhz      r5, 4(r4)
	sth      r5, 4(r6)
	lbz      r5, 6(r4)
	stb      r5, 6(r6)
	lbz      r5, 7(r4)
	stb      r5, 7(r6)
	lbz      r5, 8(r4)
	stb      r5, 8(r6)
	lbz      r5, 9(r4)
	stb      r5, 9(r6)
	lhz      r5, 0xa(r4)
	sth      r5, 0xa(r6)
	lwz      r5, 0xc(r4)
	stw      r5, 0xc(r6)
	lbz      r5, 0x10(r4)
	stb      r5, 0x10(r6)
	lbz      r5, 0x11(r4)
	stb      r5, 0x11(r6)
	lbz      r5, 0x12(r4)
	stb      r5, 0x12(r6)
	lbz      r5, 0x13(r4)
	stb      r5, 0x13(r6)
	lbz      r5, 0x14(r4)
	stb      r5, 0x14(r6)
	lbz      r5, 0x15(r4)
	stb      r5, 0x15(r6)
	lbz      r5, 0x16(r4)
	stb      r5, 0x16(r6)
	lbz      r5, 0x17(r4)
	stb      r5, 0x17(r6)
	lbz      r5, 0x18(r4)
	stb      r5, 0x18(r6)
	lbz      r5, 0x19(r4)
	stb      r5, 0x19(r6)
	lha      r5, 0x1a(r4)
	sth      r5, 0x1a(r6)
	lwz      r5, 0x1c(r4)
	stw      r5, 0x1c(r6)
	lwz      r5, 4(r3)
	add      r6, r5, r0
	lwz      r5, 0x1c(r6)
	add      r5, r4, r5
	subf     r5, r6, r5
	stw      r5, 0x1c(r6)
	lwz      r3, 4(r3)
	add      r3, r3, r0
	lwz      r0, 0xc(r3)
	add      r0, r4, r0
	subf     r0, r3, r0
	stw      r0, 0xc(r3)

lbl_801AED5C:
	lwz      r3, 0x50(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_801AED74:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * update__Q24Game6SeaMgrFv
 * --INFO--
 * Address:	801AED8C
 * Size:	000210
 */
void SeaMgr::update()
{
	bool isRefreshNeeded = false;
	Iterator<WaterBox> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		WaterBox* item = (*iterator);
		if (item->update()) {
			isRefreshNeeded = true;
		}
		iterator.next();
	}
	if (isRefreshNeeded) {
		mapMgr->m_routeMgr->refreshWater();
	}
}

/*
 * --INFO--
 * Address:	801AEF9C
 * Size:	000104
 */
bool AABBWaterBox::inWater(Sys::Sphere& collision)
{
	if (_34 - 3.0f < collision.m_position.y) {
		return false;
	}
	// TODO: The rest
	/*
	lfs      f1, 0x34(r3)
	lfs      f0, lbl_8051933C@sda21(r2)
	lfs      f2, 4(r4)
	fsubs    f0, f1, f0
	fcmpo    cr0, f2, f0
	ble      lbl_801AEFBC
	li       r3, 0
	blr

lbl_801AEFBC:
	lfs      f1, 0(r4)
	lfs      f0, 0xc(r4)
	lfs      f4, 0x24(r3)
	fsubs    f2, f1, f0
	lfs      f3, 0x18(r3)
	fadds    f1, f1, f0
	fcmpo    cr0, f4, f2
	bge      lbl_801AEFE4
	li       r3, 0
	blr

lbl_801AEFE4:
	fcmpo    cr0, f1, f3
	bge      lbl_801AEFF4
	li       r3, 0
	blr

lbl_801AEFF4:
	fcmpo    cr0, f2, f3
	cror     2, 0, 2
	bne      lbl_801AF00C
	fcmpo    cr0, f3, f1
	cror     2, 0, 2
	beq      lbl_801AF02C

lbl_801AF00C:
	fcmpo    cr0, f3, f2
	cror     2, 0, 2
	bne      lbl_801AF024
	fcmpo    cr0, f2, f4
	cror     2, 0, 2
	beq      lbl_801AF02C

lbl_801AF024:
	li       r3, 0
	blr

lbl_801AF02C:
	lfs      f1, 8(r4)
	lfs      f4, 0x2c(r3)
	fsubs    f2, f1, f0
	lfs      f3, 0x20(r3)
	fadds    f0, f1, f0
	fcmpo    cr0, f4, f2
	bge      lbl_801AF050
	li       r3, 0
	blr

lbl_801AF050:
	fcmpo    cr0, f0, f3
	bge      lbl_801AF060
	li       r3, 0
	blr

lbl_801AF060:
	fcmpo    cr0, f2, f3
	cror     2, 0, 2
	bne      lbl_801AF078
	fcmpo    cr0, f3, f0
	cror     2, 0, 2
	beq      lbl_801AF098

lbl_801AF078:
	fcmpo    cr0, f3, f2
	cror     2, 0, 2
	bne      lbl_801AF090
	fcmpo    cr0, f2, f4
	cror     2, 0, 2
	beq      lbl_801AF098

lbl_801AF090:
	li       r3, 0
	blr

lbl_801AF098:
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AF0A0
 * Size:	0000E4
 */
bool AABBWaterBox::inWater2d(Sys::Sphere&)
{
	/*
	lfs      f1, 0(r4)
	lfs      f0, 0xc(r4)
	lfs      f4, 0x24(r3)
	fsubs    f2, f1, f0
	lfs      f3, 0x18(r3)
	fadds    f1, f1, f0
	fcmpo    cr0, f4, f2
	bge      lbl_801AF0C8
	li       r3, 0
	blr

lbl_801AF0C8:
	fcmpo    cr0, f1, f3
	bge      lbl_801AF0D8
	li       r3, 0
	blr

lbl_801AF0D8:
	fcmpo    cr0, f2, f3
	cror     2, 0, 2
	bne      lbl_801AF0F0
	fcmpo    cr0, f3, f1
	cror     2, 0, 2
	beq      lbl_801AF110

lbl_801AF0F0:
	fcmpo    cr0, f3, f2
	cror     2, 0, 2
	bne      lbl_801AF108
	fcmpo    cr0, f2, f4
	cror     2, 0, 2
	beq      lbl_801AF110

lbl_801AF108:
	li       r3, 0
	blr

lbl_801AF110:
	lfs      f1, 8(r4)
	lfs      f4, 0x2c(r3)
	fsubs    f2, f1, f0
	lfs      f3, 0x20(r3)
	fadds    f0, f1, f0
	fcmpo    cr0, f4, f2
	bge      lbl_801AF134
	li       r3, 0
	blr

lbl_801AF134:
	fcmpo    cr0, f0, f3
	bge      lbl_801AF144
	li       r3, 0
	blr

lbl_801AF144:
	fcmpo    cr0, f2, f3
	cror     2, 0, 2
	bne      lbl_801AF15C
	fcmpo    cr0, f3, f0
	cror     2, 0, 2
	beq      lbl_801AF17C

lbl_801AF15C:
	fcmpo    cr0, f3, f2
	cror     2, 0, 2
	bne      lbl_801AF174
	fcmpo    cr0, f2, f4
	cror     2, 0, 2
	beq      lbl_801AF17C

lbl_801AF174:
	li       r3, 0
	blr

lbl_801AF17C:
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
// void create__Q24Game12AABBWaterBoxFR10Vector3f R10Vector3f(void)
void AABBWaterBox::create(Vector3f&, Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AF184
 * Size:	0001C8
 */
void AABBWaterBox::globalise(Game::AABBWaterBox* other, Matrixf& p2)
{
	Matrixf a;
	Vec b;
	Vec* c   = &a.m_matrix.flippedVecView.x;
	m_bounds = other->m_bounds;
	// a.m_matrix.flippedVectorView.x = m_bounds.m_min;
	// a.m_matrix.flippedVectorView.z = m_bounds.m_max;
	a.m_matrix.flippedVectorView.x.x = m_bounds.m_min.x;
	a.m_matrix.flippedVectorView.x.y = m_bounds.m_min.y;
	a.m_matrix.flippedVectorView.x.z = m_bounds.m_min.z;
	a.m_matrix.flippedVectorView.z.x = m_bounds.m_max.x;
	a.m_matrix.flippedVectorView.z.y = m_bounds.m_max.y;
	a.m_matrix.flippedVectorView.z.z = m_bounds.m_max.z;
	a.m_matrix.flippedVectorView.y.z = m_bounds.m_max.z;
	a.m_matrix.flippedVectorView.y.y = m_bounds.m_min.y;
	a.m_matrix.flippedVectorView.y.x = m_bounds.m_min.x;
	a.m_matrix.flippedVectorView.t.z = m_bounds.m_min.z;
	a.m_matrix.flippedVectorView.t.y = m_bounds.m_min.y;
	a.m_matrix.flippedVectorView.t.x = m_bounds.m_max.x;
	m_bounds.m_min.x                 = 32768.0f;
	m_bounds.m_min.y                 = 32768.0f;
	m_bounds.m_min.z                 = 32768.0f;
	m_bounds.m_max.x                 = -32768.0f;
	m_bounds.m_max.y                 = -32768.0f;
	m_bounds.m_max.z                 = -32768.0f;
	for (int i = 0; i < 4; i++) {
		PSMTXMultVec(p2.m_matrix.mtxView, c, &b);
		*c = b;
		if (c->x < m_bounds.m_min.x) {
			m_bounds.m_min.x = c->x;
		}
		if (c->y < m_bounds.m_min.y) {
			m_bounds.m_min.y = c->y;
		}
		if (c->z < m_bounds.m_min.z) {
			m_bounds.m_min.z = c->z;
		}
		if (c->x > m_bounds.m_max.x) {
			m_bounds.m_max.x = c->x;
		}
		if (c->y > m_bounds.m_max.y) {
			m_bounds.m_max.y = c->y;
		}
		if (c->z > m_bounds.m_max.z) {
			m_bounds.m_max.z = c->z;
		}
		c++;
	}
	_30 = other->_30;
	m_bounds.m_min.y -= 1000.0f;
	_30 = m_bounds.m_max.y;
	_08 = 0;
	_0C = 0.0f;
	_14 = 0.0f;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lfs      f1, lbl_80519320@sda21(r2)
	stw      r0, 0x64(r1)
	stmw     r27, 0x4c(r1)
	mr       r28, r4
	mr       r27, r3
	mr       r29, r5
	addi     r31, r1, 0x14
	li       r30, 0
	lfs      f0, 0x18(r4)
	stfs     f0, 0x18(r3)
	lfs      f0, lbl_80519324@sda21(r2)
	lfs      f2, 0x1c(r4)
	stfs     f2, 0x1c(r3)
	lfs      f2, 0x20(r4)
	stfs     f2, 0x20(r3)
	lfs      f2, 0x24(r4)
	stfs     f2, 0x24(r3)
	lfs      f2, 0x28(r4)
	stfs     f2, 0x28(r3)
	lfs      f2, 0x2c(r4)
	stfs     f2, 0x2c(r3)
	lfs      f2, 0x18(r3)
	stfs     f2, 0x14(r1)
	lfs      f2, 0x1c(r3)
	stfs     f2, 0x18(r1)
	lfs      f2, 0x20(r3)
	stfs     f2, 0x1c(r1)
	lfs      f2, 0x24(r3)
	stfs     f2, 0x2c(r1)
	lfs      f2, 0x28(r3)
	stfs     f2, 0x30(r1)
	lfs      f2, 0x2c(r3)
	stfs     f2, 0x34(r1)
	lfs      f4, 0x2c(r3)
	lfs      f3, 0x1c(r3)
	lfs      f2, 0x18(r3)
	stfs     f2, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f4, 0x28(r1)
	lfs      f4, 0x20(r3)
	lfs      f2, 0x24(r3)
	stfs     f2, 0x38(r1)
	stfs     f3, 0x3c(r1)
	stfs     f4, 0x40(r1)
	stfs     f1, 0x18(r3)
	stfs     f1, 0x1c(r3)
	stfs     f1, 0x20(r3)
	stfs     f0, 0x24(r3)
	stfs     f0, 0x28(r3)
	stfs     f0, 0x2c(r3)

lbl_801AF254:
	mr       r3, r29
	mr       r4, r31
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f0, 8(r1)
	lfs      f1, 0xc(r1)
	stfs     f0, 0(r31)
	lfs      f0, 0x10(r1)
	stfs     f1, 4(r31)
	stfs     f0, 8(r31)
	lfs      f1, 0(r31)
	lfs      f0, 0x18(r27)
	fcmpo    cr0, f1, f0
	bge      lbl_801AF290
	stfs     f1, 0x18(r27)

lbl_801AF290:
	lfs      f1, 4(r31)
	lfs      f0, 0x1c(r27)
	fcmpo    cr0, f1, f0
	bge      lbl_801AF2A4
	stfs     f1, 0x1c(r27)

lbl_801AF2A4:
	lfs      f1, 8(r31)
	lfs      f0, 0x20(r27)
	fcmpo    cr0, f1, f0
	bge      lbl_801AF2B8
	stfs     f1, 0x20(r27)

lbl_801AF2B8:
	lfs      f1, 0(r31)
	lfs      f0, 0x24(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_801AF2CC
	stfs     f1, 0x24(r27)

lbl_801AF2CC:
	lfs      f1, 4(r31)
	lfs      f0, 0x28(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_801AF2E0
	stfs     f1, 0x28(r27)

lbl_801AF2E0:
	lfs      f1, 8(r31)
	lfs      f0, 0x2c(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_801AF2F4
	stfs     f1, 0x2c(r27)

lbl_801AF2F4:
	addi     r30, r30, 1
	addi     r31, r31, 0xc
	cmpwi    r30, 4
	blt      lbl_801AF254
	lfs      f0, 0x30(r28)
	li       r0, 0
	lfs      f1, lbl_80519340@sda21(r2)
	stfs     f0, 0x30(r27)
	lfs      f0, lbl_80519328@sda21(r2)
	lfs      f2, 0x1c(r27)
	fsubs    f1, f2, f1
	stfs     f1, 0x1c(r27)
	lfs      f1, 0x28(r27)
	stfs     f1, 0x30(r27)
	sth      r0, 8(r27)
	stfs     f0, 0xc(r27)
	stfs     f0, 0x14(r27)
	lmw      r27, 0x4c(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AF34C
 * Size:	000004
 */
void AABBWaterBox::directDraw(Graphics&) { }

/*
 * __ct__Q24Game6SeaMgrFv
 * --INFO--
 * Address:	801AF350
 * Size:	0002F8
 */
SeaMgr::SeaMgr(void)
{
	_3C         = 1;
	m_modelData = new J3DModelData*[_3C];

	JKRArchive* archive;
	// if (Game::gameSystem != nullptr && !(Game::gameSystem->m_mode == GSM_VERSUS_MODE || Game::gameSystem->m_mode ==
	// GSM_TWO_PLAYER_CHALLENGE)) {
	if (Game::gameSystem != nullptr && !Game::gameSystem->isMultiplayerMode()) {
		archive = JKRArchive::mount("user/Kando/map/waterbox.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Unk1);
	} else {
		archive = JKRArchive::mount("user/Kando/map/waterbox2p.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Unk1);
	}
	P2ASSERTLINE(527, archive != nullptr);

	void* resourceData;
	// if (Game::gameSystem != nullptr && !Game::gameSystem->m_mode == GSM_VERSUS_MODE || Game::gameSystem->m_mode ==
	// GSM_TWO_PLAYER_CHALLENGE)) {
	if (Game::gameSystem != nullptr && !Game::gameSystem->isMultiplayerMode()) {
		resourceData = archive->getResource("100x100/mizu100x100.bmd");
	} else {
		resourceData = archive->getResource("2p/2p.bmd");
	}

	u32 flags;
	// if (Game::gameSystem == nullptr || !(Game::gameSystem->m_mode == GSM_VERSUS_MODE || Game::gameSystem->m_mode ==
	// GSM_TWO_PLAYER_CHALLENGE)) {
	if (!(Game::gameSystem == nullptr || !Game::gameSystem->isMultiplayerMode())) {
		flags = 0x20240010;
	} else {
		flags = 0x21240010;
	}
	m_modelData[0] = J3DModelLoaderDataBase::load(resourceData, flags);
	SysShape::Model::enableMaterialAnim(m_modelData[0], 0);
	m_animations = new Sys::MatTexAnimation[_3C];

	if (!(Game::gameSystem == nullptr || Game::gameSystem->isMultiplayerMode())) {
		resourceData = archive->getResource("100x100/mizu100x100.btk");
	} else {
		resourceData = archive->getResource("2p/2p.btk");
	}
	P2ASSERTLINE(567, resourceData != nullptr);
	m_animations[0].attachResource(resourceData, m_modelData[0]);
}

// } // namespace Game

/**
 * @generated{__dt__31NodeObjectMgr<Q24Game8WaterBox>Fv}
 * @generated{__dt__29TObjectNode<Q24Game8WaterBox>Fv}
 * @generated{__dt__27ObjectMgr<Q24Game8WaterBox>Fv}
 * @generated{__dt__27Container<Q24Game8WaterBox>Fv}
 */

// /*
//  * --INFO--
//  * Address:	801AF648
//  * Size:	0000C8
//  */
// void NodeObjectMgr<Game::WaterBox>::~NodeObjectMgr()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_801AF6F4
// 	lis      r3, "__vt__31NodeObjectMgr<Q24Game8WaterBox>"@ha
// 	addic.   r0, r30, 0x20
// 	addi     r3, r3, "__vt__31NodeObjectMgr<Q24Game8WaterBox>"@l
// 	stw      r3, 0(r30)
// 	addi     r0, r3, 0x2c
// 	stw      r0, 0x1c(r30)
// 	beq      lbl_801AF69C
// 	lis      r4, "__vt__29TObjectNode<Q24Game8WaterBox>"@ha
// 	addi     r3, r30, 0x20
// 	addi     r0, r4, "__vt__29TObjectNode<Q24Game8WaterBox>"@l
// 	li       r4, 0
// 	stw      r0, 0x20(r30)
// 	bl       __dt__5CNodeFv

// lbl_801AF69C:
// 	cmplwi   r30, 0
// 	beq      lbl_801AF6E4
// 	lis      r3, "__vt__27ObjectMgr<Q24Game8WaterBox>"@ha
// 	addi     r3, r3, "__vt__27ObjectMgr<Q24Game8WaterBox>"@l
// 	stw      r3, 0(r30)
// 	addi     r0, r3, 0x2c
// 	stw      r0, 0x1c(r30)
// 	beq      lbl_801AF6E4
// 	lis      r3, "__vt__27Container<Q24Game8WaterBox>"@ha
// 	addi     r0, r3, "__vt__27Container<Q24Game8WaterBox>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_801AF6E4
// 	lis      r4, __vt__16GenericContainer@ha
// 	mr       r3, r30
// 	addi     r0, r4, __vt__16GenericContainer@l
// 	li       r4, 0
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_801AF6E4:
// 	extsh.   r0, r31
// 	ble      lbl_801AF6F4
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_801AF6F4:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801AF710
//  * Size:	000060
//  */
// void TObjectNode<Game::WaterBox>::~TObjectNode()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_801AF754
// 	lis      r5, "__vt__29TObjectNode<Q24Game8WaterBox>"@ha
// 	li       r4, 0
// 	addi     r0, r5, "__vt__29TObjectNode<Q24Game8WaterBox>"@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv
// 	extsh.   r0, r31
// 	ble      lbl_801AF754
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_801AF754:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801AF770
//  * Size:	000088
//  */
// void ObjectMgr<Game::WaterBox>::~ObjectMgr()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_801AF7DC
// 	lis      r4, "__vt__27ObjectMgr<Q24Game8WaterBox>"@ha
// 	addi     r4, r4, "__vt__27ObjectMgr<Q24Game8WaterBox>"@l
// 	stw      r4, 0(r30)
// 	addi     r0, r4, 0x2c
// 	stw      r0, 0x1c(r30)
// 	beq      lbl_801AF7CC
// 	lis      r4, "__vt__27Container<Q24Game8WaterBox>"@ha
// 	addi     r0, r4, "__vt__27Container<Q24Game8WaterBox>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_801AF7CC
// 	lis      r5, __vt__16GenericContainer@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__16GenericContainer@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_801AF7CC:
// 	extsh.   r0, r31
// 	ble      lbl_801AF7DC
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_801AF7DC:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801AF7F8
//  * Size:	000070
//  */
// void Container<Game::WaterBox>::~Container()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_801AF84C
// 	lis      r4, "__vt__27Container<Q24Game8WaterBox>"@ha
// 	addi     r0, r4, "__vt__27Container<Q24Game8WaterBox>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_801AF83C
// 	lis      r5, __vt__16GenericContainer@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__16GenericContainer@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_801AF83C:
// 	extsh.   r0, r31
// 	ble      lbl_801AF84C
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_801AF84C:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 * @matchedSize
 */
void SeaMgr::addWaterBox(Game::WaterBox* wb)
{
	// INLINED FUNCTION
	TObjectNode<Game::WaterBox>* node = new TObjectNode<Game::WaterBox>();
	node->m_contents                  = wb;
	wb->attachModel(*m_modelData, m_animations, 100.0f);
	m_node.add(node);
}

/*
 * --INFO--
 * Address:	801AF868
 * Size:	000004
 */
void WaterBox::attachModel(J3DModelData*, Sys::MatTexAnimation*, float) { }

/*
 * findWater__Q24Game6SeaMgrFRQ23Sys6Sphere
 * --INFO--
 * Address:	801AF86C
 * Size:	000214
 */
WaterBox* SeaMgr::findWater(Sys::Sphere& collision)
{
	Iterator<WaterBox> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		WaterBox* item = (*iterator);
		if (item->inWater(collision)) {
			return item;
		}
		iterator.next();
	}
	return nullptr;
}

/*
 * findWater2d__Q24Game6SeaMgrFRQ23Sys6Sphere
 * --INFO--
 * Address:	801AFA80
 * Size:	000214
 */
WaterBox* SeaMgr::findWater2d(Sys::Sphere& collision)
{
	Iterator<WaterBox> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		WaterBox* item = (*iterator);
		if (item->inWater2d(collision)) {
			return item;
		}
		iterator.next();
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	801AFC94
 * Size:	000008
 */
bool WaterBox::inWater2d(Sys::Sphere&) { return false; }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void SeaMgr::directDraw(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AFC9C
 * Size:	00020C
 */
void SeaMgr::read(Stream& input)
{
	input.readInt();
	int wbCount = input.readInt();
	for (int i = 0; i < wbCount; i++) {
		BoundBox boundBox;
		boundBox.read(input);
		AABBWaterBox* wb = new AABBWaterBox();
		boundBox.m_min.y -= 1000.0f;
		wb->m_bounds                      = boundBox;
		wb->_30                           = boundBox.m_max.y;
		wb->_08                           = 0;
		wb->_0C                           = 0.0f;
		wb->_14                           = 0.0f;
		TObjectNode<Game::WaterBox>* node = new TObjectNode<Game::WaterBox>();
		node->m_contents                  = wb;
		wb->attachModel(*m_modelData, m_animations, 100.0f);
		m_node.add(node);
	}
}

/*
 * --INFO--
 * Address:	801AFEA8
 * Size:	000308
 */
void SeaMgr::addSeaMgr(Game::SeaMgr* otherMgr, Matrixf& p2)
{
	Iterator<WaterBox> iterator(otherMgr);
	iterator.first();
	while (!iterator.isDone()) {
		WaterBox* otherWB = (*iterator);
		AABBWaterBox* wb  = new AABBWaterBox();
		wb->globalise((AABBWaterBox*)otherWB, p2);
		addWaterBox(wb);
		// TObjectNode<Game::WaterBox>* node = new TObjectNode<Game::WaterBox>();
		// node->m_contents = wb;
		// wb->attachModel(*m_modelData, m_animations, 100.0f);
		// m_node.add(node);
		iterator.next();
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, "__vt__26Iterator<Q24Game8WaterBox>"@ha
	stw      r0, 0x34(r1)
	li       r0, 0
	addi     r6, r6, "__vt__26Iterator<Q24Game8WaterBox>"@l
	stw      r31, 0x2c(r1)
	cmplwi   r0, 0
	mr       r31, r5
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	stw      r0, 0x14(r1)
	stw      r6, 8(r1)
	stw      r0, 0xc(r1)
	stw      r4, 0x10(r1)
	bne      lbl_801AFF0C
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B0170

lbl_801AFF0C:
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801AFF7C

lbl_801AFF28:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B0170
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801AFF7C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801AFF28
	b        lbl_801B0170

lbl_801AFF9C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	li       r3, 0x68
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_801B0050
	lis      r4, __vt__Q24Game8WaterBox@ha
	lis      r3, __vt__Q24Game12AABBWaterBox@ha
	addi     r0, r4, __vt__Q24Game8WaterBox@l
	li       r4, 0
	stw      r0, 0(r28)
	addi     r0, r3, __vt__Q24Game12AABBWaterBox@l
	lfs      f1, lbl_80519320@sda21(r2)
	addi     r3, r28, 0x54
	stb      r4, 4(r28)
	lfs      f0, lbl_80519324@sda21(r2)
	stb      r4, 4(r28)
	lbz      r4, 4(r28)
	ori      r4, r4, 1
	stb      r4, 4(r28)
	stw      r0, 0(r28)
	stfs     f1, 0x18(r28)
	stfs     f1, 0x1c(r28)
	stfs     f1, 0x20(r28)
	stfs     f0, 0x24(r28)
	stfs     f0, 0x28(r28)
	stfs     f0, 0x2c(r28)
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r3, __vt__Q23Sys15MatLoopAnimator@ha
	lfs      f0, lbl_80519328@sda21(r2)
	addi     r3, r3, __vt__Q23Sys15MatLoopAnimator@l
	li       r0, 0
	stw      r3, 0x54(r28)
	stfs     f0, 0xc(r28)
	sth      r0, 8(r28)
	stfs     f0, 0x10(r28)
	stfs     f0, 0x14(r28)
	stfs     f0, 0x30(r28)
	stw      r0, 0x50(r28)
	stfs     f0, 0x34(r28)
	stw      r0, 0x60(r28)

lbl_801B0050:
	mr       r3, r28
	mr       r4, r29
	mr       r5, r31
	bl       globalise__Q24Game12AABBWaterBoxFPQ24Game12AABBWaterBoxR7Matrixf
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_801B0080
	bl       __ct__5CNodeFv
	lis      r3, "__vt__29TObjectNode<Q24Game8WaterBox>"@ha
	addi     r0, r3, "__vt__29TObjectNode<Q24Game8WaterBox>"@l
	stw      r0, 0(r29)

lbl_801B0080:
	stw      r28, 0x18(r29)
	mr       r3, r28
	lfs      f1, lbl_80519344@sda21(r2)
	lwz      r12, 0(r28)
	lwz      r4, 0x40(r30)
	lwz      r12, 0x40(r12)
	lwz      r4, 0(r4)
	lwz      r5, 0x44(r30)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r30, 0x20
	bl       add__5CNodeFP5CNode
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B00E0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B0170

lbl_801B00E0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B0154

lbl_801B0100:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B0170
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B0154:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B0100

lbl_801B0170:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801AFF9C
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B01B0
 * Size:	0000E0
 */
SeaMgr::~SeaMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_801B0274
	lis      r3, __vt__Q24Game6SeaMgr@ha
	addi     r3, r3, __vt__Q24Game6SeaMgr@l
	stw      r3, 0(r31)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r31)
	beq      lbl_801B0264
	lis      r3, "__vt__31NodeObjectMgr<Q24Game8WaterBox>"@ha
	addic.   r0, r31, 0x20
	addi     r3, r3, "__vt__31NodeObjectMgr<Q24Game8WaterBox>"@l
	stw      r3, 0(r31)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r31)
	beq      lbl_801B021C
	lis      r4, "__vt__29TObjectNode<Q24Game8WaterBox>"@ha
	addi     r3, r31, 0x20
	addi     r0, r4, "__vt__29TObjectNode<Q24Game8WaterBox>"@l
	li       r4, 0
	stw      r0, 0x20(r31)
	bl       __dt__5CNodeFv

lbl_801B021C:
	cmplwi   r31, 0
	beq      lbl_801B0264
	lis      r3, "__vt__27ObjectMgr<Q24Game8WaterBox>"@ha
	addi     r3, r3, "__vt__27ObjectMgr<Q24Game8WaterBox>"@l
	stw      r3, 0(r31)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r31)
	beq      lbl_801B0264
	lis      r3, "__vt__27Container<Q24Game8WaterBox>"@ha
	addi     r0, r3, "__vt__27Container<Q24Game8WaterBox>"@l
	stw      r0, 0(r31)
	beq      lbl_801B0264
	lis      r4, __vt__16GenericContainer@ha
	mr       r3, r31
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0(r31)
	bl       __dt__5CNodeFv

lbl_801B0264:
	extsh.   r0, r30
	ble      lbl_801B0274
	mr       r3, r31
	bl       __dl__FPv

lbl_801B0274:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B0290
 * Size:	000010
 */
float AABBWaterBox::getSeaLevel(void)
{
	/*
	lfs      f1, 0x30(r3)
	lfs      f0, 0xc(r3)
	fadds    f1, f1, f0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B02A0
 * Size:	000008
 */
float* AABBWaterBox::getSeaHeightPtr(void)
{
	/*
	addi     r3, r3, 0x34
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B02A8
 * Size:	000004
 */
void WaterBox::doSimulation(float) { }

/*
 * --INFO--
 * Address:	801B02AC
 * Size:	000004
 */
void WaterBox::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801B02B0
 * Size:	000004
 */
void WaterBox::startDown(float) { }

/*
 * --INFO--
 * Address:	801B02B4
 * Size:	000004
 */
void WaterBox::startUp(float) { }

/*
 * --INFO--
 * Address:	801B02B8
 * Size:	000004
 */
void WaterBox::directDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801B02BC
 * Size:	000004
 */
void WaterBox::calcMatrix(void) { }

} // namespace Game

/**
 * @generated{get__31NodeObjectMgr<Q24Game8WaterBox>FPv}
 * @generated{getNext__31NodeObjectMgr<Q24Game8WaterBox>FPv}
 * @generated{getStart__31NodeObjectMgr<Q24Game8WaterBox>Fv}
 * @generated{getEnd__31NodeObjectMgr<Q24Game8WaterBox>Fv}
 * @generated{delNode__31NodeObjectMgr<Q24Game8WaterBox>FPQ24Game8WaterBox}
 * @generated{resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv}
 * @generated{doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff}
 * @generated{doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics}
 * @generated{getObject__27Container<Q24Game8WaterBox>FPv}
 * @generated{getTo__27Container<Q24Game8WaterBox>Fv}
 * @generated{__sinit_gameSeaMgr_cpp}
 * @generated{@28@resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv}
 * @generated{@28@doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics}
 * @generated{@28@doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff}
 * @generated{@28@doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv}
 * @generated{@28@doSetView__27ObjectMgr<Q24Game8WaterBox>Fi}
 * @generated{@28@doEntry__27ObjectMgr<Q24Game8WaterBox>Fv}
 * @generated{@28@doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv}
 */

// /*
//  * --INFO--
//  * Address:	801B02C0
//  * Size:	000008
//  */
// void NodeObjectMgr<Game::WaterBox>::get(void*)
// {
// 	/*
// 	lwz      r3, 0x18(r4)
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801B02C8
//  * Size:	000008
//  */
// void NodeObjectMgr<Game::WaterBox>::getNext(void*)
// {
// 	/*
// 	lwz      r3, 4(r4)
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801B02D0
//  * Size:	000008
//  */
// void NodeObjectMgr<Game::WaterBox>::getStart()
// {
// 	/*
// 	lwz      r3, 0x30(r3)
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801B02D8
//  * Size:	000008
//  */
// u32 NodeObjectMgr<Game::WaterBox>::getEnd() { return 0x0; }

// /*
//  * --INFO--
//  * Address:	801B02E0
//  * Size:	000044
//  */
// void NodeObjectMgr<Game::WaterBox>::delNode(Game::WaterBox*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwz      r3, 0x30(r3)
// 	b        lbl_801B030C

// lbl_801B02F4:
// 	lwz      r0, 0x18(r3)
// 	cmplw    r0, r4
// 	bne      lbl_801B0308
// 	bl       del__5CNodeFv
// 	b        lbl_801B0314

// lbl_801B0308:
// 	lwz      r3, 4(r3)

// lbl_801B030C:
// 	cmplwi   r3, 0
// 	bne      lbl_801B02F4

// lbl_801B0314:
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801B0324
//  * Size:	000018
//  */
// void NodeObjectMgr<Game::WaterBox>::resetMgr()
// {
// 	/*
// 	li       r0, 0
// 	stw      r0, 0x30(r3)
// 	stw      r0, 0x2c(r3)
// 	stw      r0, 0x28(r3)
// 	stw      r0, 0x24(r3)
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801B033C
//  * Size:	0001F4
//  */
// void ObjectMgr<Game::WaterBox>::doSimulation(float)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__26Iterator<Q24Game8WaterBox>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__26Iterator<Q24Game8WaterBox>"@l
// 	stfd     f31, 0x18(r1)
// 	fmr      f31, f1
// 	cmplwi   r0, 0
// 	stw      r4, 8(r1)
// 	stw      r0, 0x14(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801B038C
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801B04FC

// lbl_801B038C:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801B03F8

// lbl_801B03A4:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801B04FC
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801B03F8:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801B03A4
// 	b        lbl_801B04FC

// lbl_801B0418:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	fmr      f1, f31
// 	lwz      r12, 0x38(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801B046C
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801B04FC

// lbl_801B046C:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801B04E0

// lbl_801B048C:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801B04FC
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801B04E0:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801B048C

// lbl_801B04FC:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801B0418
// 	lwz      r0, 0x24(r1)
// 	lfd      f31, 0x18(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801B0530
//  * Size:	0001F4
//  */
// void ObjectMgr<Game::WaterBox>::doDirectDraw(Graphics&)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r5, "__vt__26Iterator<Q24Game8WaterBox>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r5, r5, "__vt__26Iterator<Q24Game8WaterBox>"@l
// 	stw      r31, 0x1c(r1)
// 	cmplwi   r0, 0
// 	mr       r31, r4
// 	stw      r0, 0x14(r1)
// 	stw      r5, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801B0580
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801B06F0

// lbl_801B0580:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801B05EC

// lbl_801B0598:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801B06F0
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801B05EC:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801B0598
// 	b        lbl_801B06F0

// lbl_801B060C:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	mr       r4, r31
// 	lwz      r12, 0x3c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801B0660
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801B06F0

// lbl_801B0660:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801B06D4

// lbl_801B0680:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801B06F0
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801B06D4:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801B0680

// lbl_801B06F0:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801B060C
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801B0724
//  * Size:	00002C
//  */
// void Container<Game::WaterBox>::getObject(void*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * @generated{getAt__27Container<Q24Game8WaterBox>Fi}
 * --INFO--
 * Address:	801B0750
 * Size:	000008
 */

// /*
//  * --INFO--
//  * Address:	801B0758
//  * Size:	000008
//  */
// u32 Container<Game::WaterBox>::getTo() { return 0x0; }

// /*
//  * --INFO--
//  * Address:	801B0760
//  * Size:	000028
//  */
// void __sinit_gameSeaMgr_cpp(void)
// {
// 	/*
// 	lis      r4, __float_nan@ha
// 	li       r0, -1
// 	lfs      f0, __float_nan@l(r4)
// 	lis      r3, lbl_804B57A8@ha
// 	stw      r0, lbl_80515A50@sda21(r13)
// 	stfsu    f0, lbl_804B57A8@l(r3)
// 	stfs     f0, lbl_80515A54@sda21(r13)
// 	stfs     f0, 4(r3)
// 	stfs     f0, 8(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801B0788
 * Size:	000008
 */
// void NodeObjectMgr<Game::WaterBox>::@28 @resetMgr()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        "resetMgr__31NodeObjectMgr<Q24Game8WaterBox>Fv"
// 	*/
// }

/*
 * --INFO--
 * Address:	801B0790
 * Size:	000008
 */
// void ObjectMgr<Game::WaterBox>::@28 @doDirectDraw(Graphics&)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        "doDirectDraw__27ObjectMgr<Q24Game8WaterBox>FR8Graphics"
// 	*/
// }

/*
 * --INFO--
 * Address:	801B0798
 * Size:	000008
 */
// void ObjectMgr<Game::WaterBox>::@28 @doSimulation(float)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        "doSimulation__27ObjectMgr<Q24Game8WaterBox>Ff"
// 	*/
// }

/*
 * --INFO--
 * Address:	801B07A0
 * Size:	000008
 */
// void ObjectMgr<Game::WaterBox>::@28 @doViewCalc()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        "doViewCalc__27ObjectMgr<Q24Game8WaterBox>Fv"
// 	*/
// }

/*
 * --INFO--
 * Address:	801B07A8
 * Size:	000008
 */
// void ObjectMgr<Game::WaterBox>::@28 @doSetView(int)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        "doSetView__27ObjectMgr<Q24Game8WaterBox>Fi"
// 	*/
// }

/*
 * --INFO--
 * Address:	801B07B0
 * Size:	000008
 */
// void ObjectMgr<Game::WaterBox>::@28 @doEntry()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        "doEntry__27ObjectMgr<Q24Game8WaterBox>Fv"
// 	*/
// }

/*
 * --INFO--
 * Address:	801B07B8
 * Size:	000008
 */
// void ObjectMgr<Game::WaterBox>::@28 @doAnimation()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        "doAnimation__27ObjectMgr<Q24Game8WaterBox>Fv"
// 	*/
// }
