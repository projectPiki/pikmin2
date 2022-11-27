#include "types.h"
#include "efx/OnyonSpot.h"
#include "Sys/Sphere.h"
#include "Sys/Cylinder.h"
#include "Game/GameSystem.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "Game/Entities/ItemOnyon.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80481C88
    lbl_80481C88:
        .asciz "efxModelObjects"
        .asciz "user/Kando/effect/modeleffect.szs"
        .skip 2
    .global lbl_80481CBC
    lbl_80481CBC:
        .asciz "efxModelObjects.cpp"
    .global lbl_80481CD0
    lbl_80481CD0:
        .asciz "P2Assert"
        .skip 3
        .asciz "onyonspot.bmd"
        .skip 2
        .asciz "onyonspot.btk"
        .skip 2
        .asciz "onyonspot_blue.brk"
        .skip 1
        .asciz "onyonspot_red.brk"
        .skip 2
        .asciz "onyonspot_yellow.brk"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx13OnyonSpotData
    __vt__Q23efx13OnyonSpotData:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23efx13OnyonSpotDataFv
        .4byte getChildCount__5CNodeFv
        .4byte loadResources__Q23efx13OnyonSpotDataFv
        .4byte getID__Q23efx13OnyonSpotDataFv
        .4byte onCreate__Q23efx13OnyonSpotDataFP20ModelEffectCreateArg
    .global __vt__Q23efx9OnyonSpot
    __vt__Q23efx9OnyonSpot:
        .4byte 0
        .4byte 0
        .4byte constructor__11ModelEffectFv
        .4byte doAnimation__11ModelEffectFv
        .4byte doEntry__11ModelEffectFv
        .4byte doSetView__11ModelEffectFi
        .4byte doViewCalc__11ModelEffectFv
        .4byte changeMaterial__Q23efx9OnyonSpotFv
        .4byte getLODSphere__Q23efx9OnyonSpotFRQ23Sys6Sphere
        .4byte useCylinderLOD__Q23efx9OnyonSpotFv
        .4byte getLODCylinder__Q23efx9OnyonSpotFRQ23Sys8Cylinder
        .4byte doSimulation__11ModelEffectFf
        .4byte doDirectDraw__11ModelEffectFR8Graphics

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519D70
    lbl_80519D70:
        .4byte 0x41200000
    .global lbl_80519D74
    lbl_80519D74:
        .4byte 0x41A00000
    .global lbl_80519D78
    lbl_80519D78:
        .4byte 0x43480000
    .global lbl_80519D7C
    lbl_80519D7C:
        .float 0.5
    .global lbl_80519D80
    lbl_80519D80:
        .4byte 0x00000000
    .global lbl_80519D84
    lbl_80519D84:
        .float 1.0
    .global lbl_80519D88
    lbl_80519D88:
        .4byte 0x41F00000
        .4byte 0x00000000
*/

namespace efx {

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void OnyonSpot::initAnimators(Sys::MatTexAnimation*, Sys::MatTevRegAnimation*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802055A4
 * Size:	000024
 */
void OnyonSpot::getLODSphere(Sys::Sphere& sphere)
{
	sphere.m_position.x = m_mtx.m_matrix.structView.tx;
	sphere.m_position.y = m_mtx.m_matrix.structView.ty;
	sphere.m_position.z = m_mtx.m_matrix.structView.tz;
	sphere.m_radius     = 10.0f;
	/*
	lfs      f1, 0x14(r3)
	lfs      f0, lbl_80519D70@sda21(r2)
	stfs     f1, 0(r4)
	lfs      f1, 0x24(r3)
	stfs     f1, 4(r4)
	lfs      f1, 0x34(r3)
	stfs     f1, 8(r4)
	stfs     f0, 0xc(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802055C8
 * Size:	000054
 */
void OnyonSpot::getLODCylinder(Sys::Cylinder& cyl)
{
	cyl.m_center.x = m_mtx.m_matrix.structView.tx;
	cyl.m_center.y = m_mtx.m_matrix.structView.ty;
	cyl.m_center.z = m_mtx.m_matrix.structView.tz;
	cyl.m_radius   = 20.0f;
	cyl.m_length   = 200.0f;
	cyl.m_center.y += cyl.m_length * 0.5f;
	cyl.m_axis = Vector3f(0.0f, 1.0f, 0.0f);

	/*
	lfs      f0, 0x14(r3)
	lfs      f3, lbl_80519D74@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f2, lbl_80519D78@sda21(r2)
	lfs      f0, 0x24(r3)
	lfs      f4, lbl_80519D7C@sda21(r2)
	stfs     f0, 4(r4)
	lfs      f1, lbl_80519D80@sda21(r2)
	lfs      f5, 0x34(r3)
	lfs      f0, lbl_80519D84@sda21(r2)
	stfs     f5, 8(r4)
	stfs     f3, 0x1c(r4)
	stfs     f2, 0x18(r4)
	lfs      f3, 0x18(r4)
	lfs      f2, 4(r4)
	fmadds   f2, f4, f3, f2
	stfs     f2, 4(r4)
	stfs     f1, 0xc(r4)
	stfs     f0, 0x10(r4)
	stfs     f1, 0x14(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020561C
 * Size:	000050
 */
void OnyonSpot::changeMaterial(void)
{
	if (!Game::gameSystem->paused()) {
		m_anim1.animate(30.0f);
	}
	m_anim2.animate(0.0f);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       paused__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8020564C
	lfs      f1, lbl_80519D88@sda21(r2)
	addi     r3, r31, 0x3c
	bl       animate__Q23Sys15MatBaseAnimatorFf

lbl_8020564C:
	lfs      f1, lbl_80519D80@sda21(r2)
	addi     r3, r31, 0x48
	bl       animate__Q23Sys15MatBaseAnimatorFf
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020566C
 * Size:	0001A4
 */
void OnyonSpotData::loadResources(void)
{
	allocModelData(1);
	JKRArchive* arc = JKRArchive::mount("user/Kando/effect/modeleffect.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Unk1);
	P2ASSERTLINE(92, arc != 0);
	void* file = JKRFileLoader::getGlbResource("onyonspot.bmd", nullptr);
	P2ASSERTLINE(95, file != 0);

	J3DModelData* model = J3DModelLoaderDataBase::load(file, 0x21020000);
	*m_modelData        = model;
	m_texAnimCount      = 1;
	m_texanims          = new Sys::MatTexAnimation[m_texAnimCount];
	m_tevAnimCount      = ONYON_TYPE_MAX;
	m_tevanims          = new Sys::MatTevRegAnimation[m_tevAnimCount];

	file = JKRFileLoader::getGlbResource("onyonspot.btk", nullptr);
	m_texanims[0].attachResource(file, *m_modelData);

	file = JKRFileLoader::getGlbResource("onyonspot_blue.brk", nullptr);
	m_tevanims[0].attachResource(file, *m_modelData);
	file = JKRFileLoader::getGlbResource("onyonspot_red.brk", nullptr);
	m_tevanims[1].attachResource(file, *m_modelData);
	file = JKRFileLoader::getGlbResource("onyonspot_yellow.brk", nullptr);
	m_tevanims[2].attachResource(file, *m_modelData);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80481C88@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_80481C88@l
	li       r4, 1
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	bl       allocModelData__15ModelEffectDataFi
	addi     r3, r31, 0x10
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	cmplwi   r3, 0
	bne      lbl_802056C8
	addi     r3, r31, 0x34
	addi     r5, r31, 0x48
	li       r4, 0x5c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802056C8:
	addi     r3, r31, 0x54
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r29, r3, r3
	bne      lbl_802056F0
	addi     r3, r31, 0x34
	addi     r5, r31, 0x48
	li       r4, 0x5f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802056F0:
	mr       r3, r29
	lis      r4, 0x2102
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lwz      r4, 0x1c(r30)
	li       r0, 1
	stw      r3, 0(r4)
	stw      r0, 0x20(r30)
	lwz      r29, 0x20(r30)
	slwi     r3, r29, 4
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q23Sys15MatTexAnimationFv@ha
	mr       r7, r29
	addi     r4, r4, __ct__Q23Sys15MatTexAnimationFv@l
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0x24(r30)
	li       r0, 3
	stw      r0, 0x28(r30)
	lwz      r29, 0x28(r30)
	mulli    r3, r29, 0x14
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q23Sys18MatTevRegAnimationFv@ha
	mr       r7, r29
	addi     r4, r4, __ct__Q23Sys18MatTevRegAnimationFv@l
	li       r5, 0
	li       r6, 0x14
	bl       __construct_new_array
	stw      r3, 0x2c(r30)
	addi     r3, r31, 0x64
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	lwz      r5, 0x1c(r30)
	mr       r4, r3
	lwz      r3, 0x24(r30)
	lwz      r5, 0(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	addi     r3, r31, 0x74
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	lwz      r5, 0x1c(r30)
	mr       r4, r3
	lwz      r3, 0x2c(r30)
	lwz      r5, 0(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	addi     r3, r31, 0x88
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	lwz      r4, 0x1c(r30)
	lwz      r6, 0x2c(r30)
	lwz      r5, 0(r4)
	mr       r4, r3
	addi     r3, r6, 0x14
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	addi     r3, r31, 0x9c
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	lwz      r4, 0x1c(r30)
	lwz      r6, 0x2c(r30)
	lwz      r5, 0(r4)
	mr       r4, r3
	addi     r3, r6, 0x28
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80205810
 * Size:	000180
 */
OnyonSpot* OnyonSpotData::onCreate(ModelEffectCreateArg* arg)
{
	OnyonSpotArg* onyonarg = static_cast<OnyonSpotArg*>(arg);

	u64 id1 = getID();
	u64 id2 = onyonarg->getID();
	P2ASSERTLINE(129, id1 == id2);

	SysShape::Model* model = new SysShape::Model(*m_modelData, 0, 2);
	int type               = onyonarg->m_onyonType;

	OnyonSpot* spot = new OnyonSpot();
	spot->m_model   = model;

	Matrixf mtx;
	mtx.makeT(onyonarg->m_orig);
	PSMTXCopy(mtx.m_matrix.mtxView, spot->m_mtx.m_matrix.mtxView);

	Sys::MatTevRegAnimation* tevanim = &m_tevanims[type];
	Sys::MatTexAnimation* texanim    = m_texanims;
	spot->m_model->enableMaterialAnim(0);
	spot->m_anim2.start(tevanim);
	spot->m_anim1.start(texanim);

	return spot;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r29, r3
	mr       r30, r4
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	mr       r28, r4
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	xor      r4, r4, r28
	xor      r0, r3, r31
	or.      r0, r4, r0
	beq      lbl_80205880
	lis      r3, lbl_80481CBC@ha
	lis      r5, lbl_80481CD0@ha
	addi     r3, r3, lbl_80481CBC@l
	li       r4, 0x81
	addi     r5, r5, lbl_80481CD0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80205880:
	li       r3, 0x14
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_802058A8
	lwz      r4, 0x1c(r29)
	li       r5, 0
	li       r6, 2
	lwz      r4, 0(r4)
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r28, r3

lbl_802058A8:
	lwz      r27, 0x10(r30)
	li       r3, 0x54
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80205910
	lis      r4, __vt__11ModelEffect@ha
	lis      r3, __vt__Q23efx9OnyonSpot@ha
	addi     r0, r4, __vt__11ModelEffect@l
	li       r5, 1
	stw      r0, 0(r31)
	li       r4, 0
	addi     r0, r3, __vt__Q23efx9OnyonSpot@l
	addi     r3, r31, 0x3c
	stb      r5, 0x39(r31)
	stb      r5, 0x38(r31)
	stb      r4, 0x3a(r31)
	stw      r0, 0(r31)
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r4, __vt__Q23Sys15MatLoopAnimator@ha
	addi     r3, r31, 0x48
	addi     r0, r4, __vt__Q23Sys15MatLoopAnimator@l
	stw      r0, 0x3c(r31)
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r3, __vt__Q23Sys15MatLoopAnimator@ha
	addi     r0, r3, __vt__Q23Sys15MatLoopAnimator@l
	stw      r0, 0x48(r31)

lbl_80205910:
	stw      r28, 4(r31)
	addi     r3, r1, 8
	addi     r4, r30, 4
	bl       "makeT__7MatrixfFR10Vector3<f>"
	addi     r3, r1, 8
	addi     r4, r31, 8
	bl       PSMTXCopy
	mulli    r0, r27, 0x14
	lwz      r5, 0x2c(r29)
	lwz      r28, 0x24(r29)
	li       r4, 0
	lwz      r3, 4(r31)
	add      r29, r5, r0
	bl       enableMaterialAnim__Q28SysShape5ModelFi
	addi     r3, r31, 0x48
	mr       r4, r29
	lwz      r12, 0x48(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x3c
	mr       r4, r28
	lwz      r12, 0x3c(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80205990
 * Size:	000014
 */
u64 OnyonSpotData::getID(void)
{
	return 'ONY_SPOT';
	/*
	lis      r4, 0x53504F54@ha
	lis      r3, 0x4F4E595F@ha
	addi     r4, r4, 0x53504F54@l
	addi     r3, r3, 0x4F4E595F@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	802059A4
 * Size:	000070
 */
OnyonSpotData::~OnyonSpotData(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802059F8
	lis      r4, __vt__Q23efx13OnyonSpotData@ha
	addi     r0, r4, __vt__Q23efx13OnyonSpotData@l
	stw      r0, 0(r30)
	beq      lbl_802059E8
	lis      r5, __vt__15ModelEffectData@ha
	li       r4, 0
	addi     r0, r5, __vt__15ModelEffectData@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_802059E8:
	extsh.   r0, r31
	ble      lbl_802059F8
	mr       r3, r30
	bl       __dl__FPv

lbl_802059F8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80205A14
 * Size:	000008
 */
bool OnyonSpot::useCylinderLOD(void) { return true; }

} // namespace efx

/*
 * --INFO--
 * Address:	80205A1C
 * Size:	000004
 */
void ModelEffect::constructor() { }

/*
 * --INFO--
 * Address:	80205A20
 * Size:	000004
 */
void ModelEffect::doSimulation(float) { }

/*
 * --INFO--
 * Address:	80205A24
 * Size:	000004
 */
void ModelEffect::doDirectDraw(Graphics&) { }
