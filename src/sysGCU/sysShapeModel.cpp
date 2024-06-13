#include "SysShape/Model.h"
#include "SysShape/Joint.h"
#include "Graphics.h"
#include "Viewport.h"
#include "nans.h"

namespace SysShape {

u8 Model::viewCalcMode = true;
int Model::cullCount;

/**
 * @note Address: 0x8043E1D8
 * @note Size: 0xC4
 */
Model::Model(J3DModelData* data, u32 flags, u32 viewNum)
{
	mJ3dModel   = new J3DModel(data, flags, viewNum);
	mJointCount = mJ3dModel->mModelData->getJointNum();
	initJoints();
	_05          = 1;
	mIsAnimating = false;
	clearAnimatorAll();
}

/**
 * @note Address: 0x8043E29C
 * @note Size: 0x17C
 */
void Model::enableMaterialAnim(J3DModelData* data, int type)
{
	switch (type) {
	case 0:
		for (u16 i = 0; i < data->getMaterialNum(); i++) {
			J3DMaterialAnm* anm = new J3DMaterialAnm;
			data->getMaterialNodePointer(i)->change();
			data->getMaterialNodePointer(i)->setMaterialAnm(anm);
		}
		break;
	case 1:
		JUT_PANICLINE(79, "manda\n");
	}
}

/**
 * @note Address: 0x8043E418
 * @note Size: 0x174
 */
void Model::enableMaterialAnim(int type)
{
	switch (type) {
	case 0:
		J3DModelData* data = mJ3dModel->mModelData;
		for (u16 i = 0; i < data->getMaterialNum(); i++) {
			J3DMaterialAnm* anm = new J3DMaterialAnm;
			data->getMaterialNodePointer(i)->change();
			data->getMaterialNodePointer(i)->setMaterialAnm(anm);
		}
		break;
	case 1:
		JUT_PANICLINE(100, "manda\n");
	}
	mIsAnimating = true;
}

/**
 * @note Address: 0x8043E58C
 * @note Size: 0x48
 */
Matrixf* Model::getMatrix(int jointIndex)
{
	if (jointIndex == -1) {
		return nullptr;
	}
	return (mJoints + jointIndex != nullptr) ? mJoints[jointIndex].getWorldMatrix() : nullptr;
}

/**
 * @note Address: 0x8043E5D4
 * @note Size: 0x15C
 */
f32 Model::getRoughBoundingRadius()
{
	Vector3f center = getRoughCenter();

	f32 maxlen = 0.0f;

	for (int i = 0; i < mJointCount; i++) {
		J3DJoint* jnt = mJoints[i].mJ3d;
		Vector3f max  = *(Vector3f*)jnt->getMax() - center; // stupid tvec3 cast part 100
		Vector3f min  = *(Vector3f*)jnt->getMin() - center;

		f32 max2 = max.length();
		f32 min2 = min.length();

		if (max2 > maxlen) {
			maxlen = max2;
		}

		if (min2 > maxlen) {
			maxlen = min2;
		}
	}

	f32 minlen = 0.0f;

	for (int i = 0; i < mJointCount; i++) {
		f32 rad = mJoints[i].mJ3d->mBoundingSphereRadius;
		if (rad > minlen) {
			minlen = rad;
		}
	}

	if (minlen < maxlen) {
		maxlen = minlen;
	}
	return maxlen;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	mr       r4, r31
	bl       getRoughCenter__Q28SysShape5ModelFv
	lfs      f0, lbl_80520910@sda21(r2)
	li       r4, 0
	lwz      r5, 0xc(r31)
	fmr      f3, f0
	lfs      f9, 8(r1)
	fmr      f1, f0
	lfs      f10, 0xc(r1)
	lfs      f11, 0x10(r1)
	mtctr    r5
	cmpwi    r5, 0
	ble      lbl_8043E6D4

lbl_8043E620:
	lwz      r3, 0x10(r31)
	addi     r0, r4, 0x18
	lwzx     r3, r3, r0
	lfs      f2, 0x4c(r3)
	lfs      f5, 0x50(r3)
	fsubs    f7, f2, f10
	lfs      f4, 0x48(r3)
	fsubs    f8, f5, f11
	lfs      f2, 0x44(r3)
	lfs      f5, 0x40(r3)
	fsubs    f6, f4, f9
	fmuls    f12, f7, f7
	lfs      f4, 0x3c(r3)
	fmuls    f8, f8, f8
	fsubs    f7, f2, f11
	fmadds   f2, f6, f6, f12
	fsubs    f5, f5, f10
	fsubs    f4, f4, f9
	fadds    f6, f8, f2
	fcmpo    cr0, f6, f3
	ble      lbl_8043E684
	ble      lbl_8043E688
	frsqrte  f2, f6
	fmuls    f6, f2, f6
	b        lbl_8043E688

lbl_8043E684:
	fmr      f6, f3

lbl_8043E688:
	fmuls    f2, f5, f5
	fmuls    f5, f7, f7
	fmadds   f2, f4, f4, f2
	fadds    f2, f5, f2
	fcmpo    cr0, f2, f1
	ble      lbl_8043E6B0
	ble      lbl_8043E6B4
	frsqrte  f4, f2
	fmuls    f2, f4, f2
	b        lbl_8043E6B4

lbl_8043E6B0:
	fmr      f2, f1

lbl_8043E6B4:
	fcmpo    cr0, f6, f0
	ble      lbl_8043E6C0
	fmr      f0, f6

lbl_8043E6C0:
	fcmpo    cr0, f2, f0
	ble      lbl_8043E6CC
	fmr      f0, f2

lbl_8043E6CC:
	addi     r4, r4, 0x3c
	bdnz     lbl_8043E620

lbl_8043E6D4:
	fmr      f1, f0
	lfs      f3, lbl_80520910@sda21(r2)
	li       r4, 0
	mtctr    r5
	cmpwi    r5, 0
	ble      lbl_8043E710

lbl_8043E6EC:
	lwz      r3, 0x10(r31)
	addi     r0, r4, 0x18
	lwzx     r3, r3, r0
	lfs      f2, 0x38(r3)
	fcmpo    cr0, f2, f3
	ble      lbl_8043E708
	fmr      f3, f2

lbl_8043E708:
	addi     r4, r4, 0x3c
	bdnz     lbl_8043E6EC

lbl_8043E710:
	fcmpo    cr0, f3, f0
	bge      lbl_8043E71C
	fmr      f1, f3

lbl_8043E71C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8043E730
 * @note Size: 0x174
 */
Vector3f Model::getRoughCenter()
{

	Vector3f result_max = 0.0f;
	Vector3f result_min = 0.0f;
	f32 currhighestmax  = 0.0f;
	f32 currhighestmin  = 0.0f;

	for (int i = 0; i < mJointCount; i++) {
		J3DJoint* jnt = mJoints[i].mJ3d;
		Vector3f max  = *(Vector3f*)jnt->getMax();
		Vector3f min  = *(Vector3f*)jnt->getMin();

		f32 magmax = max.length();
		f32 magmin = min.length();

		if (magmax > currhighestmax) {
			result_max     = max;
			currhighestmax = magmax;
		}

		if (magmin > currhighestmin) {
			result_min     = min;
			currhighestmin = magmin;
		}
	}

	return Vector3f(result_max + result_min) * 0.5f;
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void Model::entry(Sys::Sphere&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8043E8A4
 * @note Size: 0x98
 */
bool Model::isVisible(Sys::Sphere& sphere)
{
	Graphics* gfx = sys->mGfx;
	for (int i = 0; i < gfx->mActiveViewports; i++) {
		Viewport* viewport = gfx->getViewport(i);
		if (viewport->viewable() && viewport->mCamera->isVisible(sphere)) {
			mIsVisible = true;
			return true;
		}
	}
	mIsVisible = false;
	return false;
}

/**
 * @note Address: 0x8043E93C
 * @note Size: 0x80
 */
void Model::jointVisible(bool newVisibility, int jointIndex)
{
	if (newVisibility != false) {
		for (J3DMaterial* material = mJ3dModel->mModelData->mJointTree.mJoints[(u16)jointIndex]->mMaterial; material != nullptr;
		     material              = material->mNext) {
			RESET_FLAG(material->mShape->mFlags, J3DShape_Hide);
		}
	} else {
		for (J3DMaterial* material = mJ3dModel->mModelData->mJointTree.mJoints[(u16)jointIndex]->mMaterial; material != nullptr;
		     material              = material->mNext) {
			SET_FLAG(material->mShape->mFlags, J3DShape_Hide);
		}
	}
}

/**
 * @note Address: 0x8043E9BC
 * @note Size: 0x58
 */
void Model::hide()
{
	for (u16 i = 0; i < mJointCount; i++) {
		for (J3DMaterial* material = mJ3dModel->mModelData->mJointTree.mJoints[i]->mMaterial; material != nullptr;
		     material              = material->mNext) {
			SET_FLAG(material->mShape->mFlags, J3DShape_Hide);
		}
	}
}

/**
 * @note Address: 0x8043EA14
 * @note Size: 0x58
 */
void Model::show()
{
	for (u16 i = 0; i < mJointCount; i++) {
		for (J3DMaterial* material = mJ3dModel->mModelData->mJointTree.mJoints[i]->mMaterial; material != nullptr;
		     material              = material->mNext) {
			RESET_FLAG(material->mShape->mFlags, J3DShape_Hide);
		}
	}
}

/**
 * @note Address: 0x8043EA6C
 * @note Size: 0x44
 */
void Model::hidePackets()
{
	for (u16 i = 0; i < mJ3dModel->getModelData()->getShapeNum(); i++) {
		mJ3dModel->mShapePackets[i].onFlag(J3DShape_Hidden);
	}
}

/**
 * @note Address: 0x8043EAB0
 * @note Size: 0x44
 */
void Model::showPackets()
{
	for (u16 i = 0; i < mJ3dModel->getModelData()->getShapeNum(); i++) {
		getJ3DModel()->getShapePacket(i)->offFlag(J3DShape_Hidden);
	}
}

/**
 * @note Address: 0x8043EAF4
 * @note Size: 0xBC
 */
void Model::initJoints()
{
	mJoints = new Joint[mJointCount];
	for (u16 i = 0; i < mJointCount; i++) {
		mJoints[i].init(i, this, getJ3DModel()->getModelData()->getJointTree().getJointNodePointer(i));
	}
	initJointsRec(0, nullptr);
}

/**
 * @note Address: 0x8043EC10
 * @note Size: 0x5C
 */
Joint::Joint()
{
	mMin = SHORT_FLOAT_MAX;
	mMax = -SHORT_FLOAT_MAX;
}

/**
 * @note Address: 0x8043EC6C
 * @note Size: 0x330
 */
void Model::initJointsRec(int id, Joint* jnt)
{
	Joint* joint   = &mJoints[id];
	joint->mParent = jnt;

	J3DJoint* jnt2 = joint->mJ3d->getChild();
	J3DJoint* jnt3 = joint->mJ3d->getYounger();
	if (jnt2) {
		id            = jnt2->getJntNo();
		joint->mChild = &mJoints[id];
		initJointsRec(id, joint);
	}

	if (jnt3) {
		id           = jnt3->getJntNo();
		joint->mNext = &mJoints[id];
		initJointsRec(id, jnt);
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	mulli    r0, r4, 0x3c
	stmw     r23, 0xc(r1)
	mr       r30, r3
	mr       r31, r5
	lwz      r3, 0x10(r3)
	add      r26, r3, r0
	stw      r31, 0xc(r26)
	lwz      r4, 0x18(r26)
	lwz      r3, 0xc(r4)
	lwz      r25, 0x10(r4)
	cmplwi   r3, 0
	beq      lbl_8043EE14
	lhz      r0, 0x14(r3)
	lwz      r3, 0x10(r30)
	mulli    r4, r0, 0x3c
	add      r0, r3, r4
	stw      r0, 0x10(r26)
	lwz      r0, 0x10(r30)
	add      r28, r0, r4
	stw      r26, 0xc(r28)
	lwz      r4, 0x18(r28)
	lwz      r3, 0xc(r4)
	lwz      r29, 0x10(r4)
	cmplwi   r3, 0
	beq      lbl_8043ED74
	lhz      r0, 0x14(r3)
	lwz      r3, 0x10(r30)
	mulli    r4, r0, 0x3c
	add      r0, r3, r4
	stw      r0, 0x10(r28)
	lwz      r0, 0x10(r30)
	add      r27, r0, r4
	stw      r28, 0xc(r27)
	lwz      r3, 0x18(r27)
	bl       getChild__8J3DJointFv
	mr       r23, r3
	lwz      r3, 0x18(r27)
	bl       getYounger__8J3DJointFv
	cmplwi   r23, 0
	mr       r24, r3
	beq      lbl_8043ED44
	mr       r3, r23
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r27
	add      r0, r6, r0
	stw      r0, 0x10(r27)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043ED44:
	cmplwi   r24, 0
	beq      lbl_8043ED74
	mr       r3, r24
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r28
	add      r0, r6, r0
	stw      r0, 4(r27)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043ED74:
	cmplwi   r29, 0
	beq      lbl_8043EE14
	lhz      r0, 0x14(r29)
	lwz      r3, 0x10(r30)
	mulli    r4, r0, 0x3c
	add      r0, r3, r4
	stw      r0, 4(r28)
	lwz      r0, 0x10(r30)
	add      r27, r0, r4
	stw      r26, 0xc(r27)
	lwz      r3, 0x18(r27)
	bl       getChild__8J3DJointFv
	mr       r24, r3
	lwz      r3, 0x18(r27)
	bl       getYounger__8J3DJointFv
	cmplwi   r24, 0
	mr       r23, r3
	beq      lbl_8043EDE4
	mr       r3, r24
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r27
	add      r0, r6, r0
	stw      r0, 0x10(r27)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043EDE4:
	cmplwi   r23, 0
	beq      lbl_8043EE14
	mr       r3, r23
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r26
	add      r0, r6, r0
	stw      r0, 4(r27)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043EE14:
	cmplwi   r25, 0
	beq      lbl_8043EF88
	lhz      r0, 0x14(r25)
	lwz      r3, 0x10(r30)
	mulli    r4, r0, 0x3c
	add      r0, r3, r4
	stw      r0, 4(r26)
	lwz      r0, 0x10(r30)
	add      r28, r0, r4
	stw      r31, 0xc(r28)
	lwz      r4, 0x18(r28)
	lwz      r3, 0xc(r4)
	lwz      r25, 0x10(r4)
	cmplwi   r3, 0
	beq      lbl_8043EEE8
	lhz      r0, 0x14(r3)
	lwz      r3, 0x10(r30)
	mulli    r4, r0, 0x3c
	add      r0, r3, r4
	stw      r0, 0x10(r28)
	lwz      r0, 0x10(r30)
	add      r26, r0, r4
	stw      r28, 0xc(r26)
	lwz      r3, 0x18(r26)
	bl       getChild__8J3DJointFv
	mr       r24, r3
	lwz      r3, 0x18(r26)
	bl       getYounger__8J3DJointFv
	cmplwi   r24, 0
	mr       r23, r3
	beq      lbl_8043EEB8
	mr       r3, r24
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r26
	add      r0, r6, r0
	stw      r0, 0x10(r26)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043EEB8:
	cmplwi   r23, 0
	beq      lbl_8043EEE8
	mr       r3, r23
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r28
	add      r0, r6, r0
	stw      r0, 4(r26)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043EEE8:
	cmplwi   r25, 0
	beq      lbl_8043EF88
	lhz      r0, 0x14(r25)
	lwz      r3, 0x10(r30)
	mulli    r4, r0, 0x3c
	add      r0, r3, r4
	stw      r0, 4(r28)
	lwz      r0, 0x10(r30)
	add      r25, r0, r4
	stw      r31, 0xc(r25)
	lwz      r3, 0x18(r25)
	bl       getChild__8J3DJointFv
	mr       r24, r3
	lwz      r3, 0x18(r25)
	bl       getYounger__8J3DJointFv
	cmplwi   r24, 0
	mr       r23, r3
	beq      lbl_8043EF58
	mr       r3, r24
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r25
	add      r0, r6, r0
	stw      r0, 0x10(r25)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043EF58:
	cmplwi   r23, 0
	beq      lbl_8043EF88
	mr       r3, r23
	bl       getJntNo__8J3DJointCFv
	clrlwi   r4, r3, 0x10
	lwz      r6, 0x10(r30)
	mulli    r0, r4, 0x3c
	mr       r3, r30
	mr       r5, r31
	add      r0, r6, r0
	stw      r0, 4(r25)
	bl       initJointsRec__Q28SysShape5ModelFiPQ28SysShape5Joint

lbl_8043EF88:
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8043EFB4
 * @note Size: 0x30
 */
u16 Model::getJointIndex(char* name) { return mJ3dModel->mModelData->mJointTree.mNametab->getIndex(name); }

/**
 * @note Address: 0x8043EFE4
 * @note Size: 0x5C
 */
Joint* Model::getJoint(char* name)
{
	int id = getJointIndex(name);
	if (id < mJointCount) {
		return &mJoints[id];
	}
	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void Model::update()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8043F040
 * @note Size: 0xC
 */
void Model::setViewCalcModeImm() { viewCalcMode = false; }

/**
 * @note Address: 0x8043F04C
 * @note Size: 0xC
 */
void Model::setViewCalcModeInd() { viewCalcMode = true; }

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
bool Model::needViewCalc()
{
	bool calc;
	if (viewCalcMode == 0) {
		calc = isMtxImmediate();
	} else {
		calc = isMtxImmediate() == false;
	}
	return calc;
}

/**
 * @note Address: 0x8043F058
 * @note Size: 0x68
 */
void Model::viewCalc()
{

	if (needViewCalc()) {
		mJ3dModel->viewCalc();
	}
}

/**
 * @note Address: 0x8043F0C0
 * @note Size: 0x4C
 */
void Model::setCurrentViewNo(u32 viewportNumber)
{
	if (!isMtxImmediate()) {
		mJ3dModel->mMtxBuffer->mCurrentViewNumber = viewportNumber;
	}
}

/**
 * @note Address: 0x8043F10C
 * @note Size: 0x14
 */
bool Model::isMtxImmediate() { return mJ3dModel->mModelData->mModelLoaderFlags >> 4 & 1; }

/**
 * @note Address: 0x8043F130
 * @note Size: 0x30
 */
void Model::jointVisible(bool flag, Joint* joint) { jointVisible(flag, joint->mJointIndex); }

} // namespace SysShape
