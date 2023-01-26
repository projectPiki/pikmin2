#include "types.h"
#include "ebi/E3DGraph.h"

namespace ebi {

/*
 * --INFO--
 * Address:	803C9D10
 * Size:	000104
 */
void E3DAnimRes::load(J3DModelData* param_1, JKRArchive* param_2, char* param_3)
{
	void* pvVar1 = param_2->getResource(param_3);

	P2ASSERTLINE(20, pvVar1);
	pAnmTransform_0x0 = (J3DAnmTransform*)J3DAnmLoaderDataBase::load(pvVar1);
	pMtxCalcAnm_0x4   = J3DNewMtxCalcAnm((param_1->mJointTree).mFlags & 0xf, pAnmTransform_0x0);
	float_0x8         = 0.0f;
	float_0xC         = pAnmTransform_0x0->mMaxFrame - 2.0f;
	mLoopStart        = float_0x8;
	mLoopEnd          = float_0xC;
	float_0x18        = sys->mDeltaTime * 60.0f * 0.5f;
	mMode             = 0;
}

/*
 * --INFO--
 * Address:	803C9E14
 * Size:	000058
 */
void E3DAnimCtrl::setAnimFolder(E3DAnimFolderBase* param_1)
{
	P2ASSERTLINE(40, param_1);
	pAnimFolder_0x10 = param_1;
}

/*
 * --INFO--
 * Address:	803C9E6C
 * Size:	0000A4
 */
void E3DAnimCtrl::init(long param_1, float param_2)
{
	P2ASSERTLINE(47, pAnimFolder_0x10);
	_0C = pAnimFolder_0x10->getAnimRes(param_1);
	_04 = param_2;
	_00 = _0C->float_0x8;
	_08 = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void E3DAnimCtrl::setStartFrame()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C9F10
 * Size:	000080
 */
void E3DAnimCtrl::play()
{
	P2ASSERTLINE(63, _0C);
	if (_08 != 3)
		_0C->mMode == 1 ? _08 = 1 : _08 = 2;
}

/*
 * --INFO--
 * Address:	803C9F90
 * Size:	000064
 */
void E3DAnimCtrl::playStopEnd()
{
	P2ASSERTLINE(76, _0C);
	if (_08 != 3)
		_08 = 2;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void E3DAnimCtrl::stop()
{
	// UNUSED FUNCTION
}
} // namespace ebi
