#include "SysShape/Model.h"
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
	mJointCount = mJ3dModel->getModelData()->getJointNum();
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
		J3DModelData* data = mJ3dModel->getModelData();
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
		Vector3f max(jnt->getMax()->x - center.x, jnt->getMax()->y - center.y, jnt->getMax()->z - center.z);
		Vector3f min(jnt->getMin()->x - center.x, jnt->getMin()->y - center.y, jnt->getMin()->z - center.z);

		f32 max2 = max.length();
		f32 min2 = min.length();

		if (max2 > maxlen) {
			maxlen = max2;
		}

		if (min2 > maxlen) {
			maxlen = min2;
		}
	}

	f32 radius = maxlen;
	f32 minlen = 0.0f;

	for (int i = 0; i < mJointCount; i++) {
		if (mJoints[i].mJ3d->mBoundingSphereRadius > minlen) {
			minlen = mJoints[i].mJ3d->mBoundingSphereRadius;
		}
	}

	if (minlen < maxlen) {
		radius = minlen;
	}
	return radius;
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
	for (int i = 0; i < gfx->getViewportNum(); i++) {
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
		for (J3DMaterial* material = mJ3dModel->getModelData()->getJointNodePointer(jointIndex)->getMesh(); material != nullptr;
		     material              = material->getNext()) {
			material->getShape()->offFlag(J3DShape_Hide);
		}
	} else {
		for (J3DMaterial* material = mJ3dModel->getModelData()->getJointNodePointer(jointIndex)->getMesh(); material != nullptr;
		     material              = material->getNext()) {
			material->getShape()->onFlag(J3DShape_Hide);
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
		for (J3DMaterial* material = mJ3dModel->getModelData()->getJointNodePointer(i)->getMesh(); material != nullptr;
		     material              = material->getNext()) {
			material->getShape()->onFlag(J3DShape_Hide);
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
		for (J3DMaterial* material = mJ3dModel->getModelData()->getJointNodePointer(i)->getMesh(); material != nullptr;
		     material              = material->mNext) {
			material->getShape()->offFlag(J3DShape_Hide);
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
		mJ3dModel->getShapePacket(i)->onFlag(J3DShape_Hidden);
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
	// CONST MEMES MY BEHATED
	Joint* const joint = &mJoints[id];
	joint->mParent     = jnt;

	J3DJoint* const jnt2 = joint->mJ3d->getChild();
	J3DJoint* const jnt3 = joint->mJ3d->getYounger();
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
}

/**
 * @note Address: 0x8043EFB4
 * @note Size: 0x30
 */
u16 Model::getJointIndex(char* name)
{
	return mJ3dModel->getModelData()->getJointName()->getIndex(name);
}

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
void Model::setViewCalcModeImm()
{
	viewCalcMode = false;
}

/**
 * @note Address: 0x8043F04C
 * @note Size: 0xC
 */
void Model::setViewCalcModeInd()
{
	viewCalcMode = true;
}

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
		mJ3dModel->getMtxBuffer()->mCurrentViewNumber = viewportNumber;
	}
}

/**
 * @note Address: 0x8043F10C
 * @note Size: 0x14
 */
bool Model::isMtxImmediate()
{
	return mJ3dModel->getModelData()->getFlag() >> 4 & 1;
}

} // namespace SysShape
