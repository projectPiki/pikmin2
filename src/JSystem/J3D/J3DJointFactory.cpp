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
	m_initData = JSUConvertOffsetToPtr<J3DJointInitData>(&block, block._0C);
	m_indexMap = JSUConvertOffsetToPtr<u16>(&block, block._10);
}

/*
 * --INFO--
 * Address:	80071B78
 * Size:	000180
 */
J3DJoint* J3DJointFactory::create(int jointIndex)
{
	J3DJoint* joint              = new J3DJoint();
	joint->m_jointIdx            = jointIndex;
	joint->_16                   = m_initData[m_indexMap[jointIndex]]._00;
	joint->m_ignoreParentScaling = m_initData[m_indexMap[jointIndex]].m_ignoreParentScaling;
	joint->m_transformInfo       = m_initData[m_indexMap[jointIndex]].m_transformInfo;
	joint->_38                   = m_initData[m_indexMap[jointIndex]]._24;
	joint->m_yRotation           = m_initData[m_indexMap[jointIndex]]._28;
	joint->_48                   = m_initData[m_indexMap[jointIndex]]._34;
	joint->m_mtxCalc             = nullptr;
	if (joint->m_ignoreParentScaling == 0xFF) {
		joint->m_ignoreParentScaling = 0;
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
