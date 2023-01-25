#include "JSystem/J3D/J3DJointFactory.h"
#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/JSupport/JSU.h"
#include "types.h"

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
	J3DJoint* joint             = new J3DJoint();
	joint->mJointIdx            = jointIndex;
	joint->_16                  = mInitData[mIndexMap[jointIndex]]._00;
	joint->mIgnoreParentScaling = mInitData[mIndexMap[jointIndex]].mIgnoreParentScaling;
	joint->mTransformInfo       = mInitData[mIndexMap[jointIndex]].mTransformInfo;
	joint->_38                  = mInitData[mIndexMap[jointIndex]]._24;
	joint->mYRotation           = mInitData[mIndexMap[jointIndex]]._28;
	joint->_48                  = mInitData[mIndexMap[jointIndex]]._34;
	joint->mMtxCalc             = nullptr;
	if (joint->mIgnoreParentScaling == 0xFF) {
		joint->mIgnoreParentScaling = 0;
	}
	return joint;
}

/*
 * --INFO--
 * Address:	80071CF8
 * Size:	000018
 */
// void JSUConvertOffsetToPtr<J3DJointInitData>(const void*, unsigned long)
// {
// }
