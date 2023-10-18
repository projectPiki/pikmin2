#include "JSystem/J3D/J3DJointFactory.h"
#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/JSupport/JSU.h"

/*
 * --INFO--
 * Address:	80071B20
 * Size:	000058
 */
J3DJointFactory::J3DJointFactory(const J3DJointBlock& block)
{
	mInitData = JSUConvertOffsetToPtr<J3DJointInitData>(&block, block._0C);
	mIndexMap = JSUConvertOffsetToPtr<u16>(&block, block._10);
}

/*
 * --INFO--
 * Address:	80071B78
 * Size:	000180
 */
J3DJoint* J3DJointFactory::create(int jointIndex)
{
	J3DJoint* joint              = new J3DJoint;
	joint->mJointIdx             = jointIndex;
	joint->mKind                 = mInitData[mIndexMap[jointIndex]].mKind;
	joint->mScaleCompensate      = mInitData[mIndexMap[jointIndex]].mIgnoreParentScaling;
	joint->mTransformInfo        = mInitData[mIndexMap[jointIndex]].mTransformInfo;
	joint->mBoundingSphereRadius = mInitData[mIndexMap[jointIndex]].mRadius;
	joint->mMin                  = mInitData[mIndexMap[jointIndex]].mMin;
	joint->mMax                  = mInitData[mIndexMap[jointIndex]].mMax;
	joint->mMtxCalc              = nullptr;
	if (joint->mScaleCompensate == 0xFF) {
		joint->mScaleCompensate = 0;
	}
	return joint;
}
