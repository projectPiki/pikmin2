#include "ebi/E3DGraph.h"

namespace ebi {

/*
 * --INFO--
 * Address:	803C9D10
 * Size:	000104
 */
void E3DAnimRes::load(J3DModelData* modelData, JKRArchive* archive, char* resourcePath)
{
	void* resource = archive->getResource(resourcePath);

	P2ASSERTLINE(20, resource);

	mAnimTransform = (J3DAnmTransform*)J3DAnmLoaderDataBase::load(resource);
	mAnmCalcMtx    = J3DNewMtxCalcAnm((modelData->mJointTree).mFlags & 0xf, mAnimTransform);

	_08 = 0.0f;
	_0C = mAnimTransform->mMaxFrame - 2.0f;

	mLoopStart = _08;
	mLoopEnd   = _0C;

	mTimeScale = sys->mDeltaTime * 60.0f * 0.5f;
	mMode      = 0;
}

/*
 * --INFO--
 * Address:	803C9E14
 * Size:	000058
 */
void E3DAnimCtrl::setAnimFolder(E3DAnimFolderBase* animFolder)
{
	P2ASSERTLINE(40, animFolder);
	mAnimFolder = animFolder;
}

/*
 * --INFO--
 * Address:	803C9E6C
 * Size:	0000A4
 */
void E3DAnimCtrl::init(long id, float timeStep)
{
	P2ASSERTLINE(47, mAnimFolder);
	mAnimRes       = mAnimFolder->getAnimRes(id);
	mTimeStep      = timeStep;
	mAnimStartTime = mAnimRes->_08;
	mState         = 0;
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
	P2ASSERTLINE(63, mAnimRes);
	if (mState != 3) {
		mAnimRes->mMode == 1 ? mState = 1 : mState = 2;
	}
}

/*
 * --INFO--
 * Address:	803C9F90
 * Size:	000064
 */
void E3DAnimCtrl::playStopEnd()
{
	P2ASSERTLINE(76, mAnimRes);
	if (mState != 3) {
		mState = 2;
	}
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
