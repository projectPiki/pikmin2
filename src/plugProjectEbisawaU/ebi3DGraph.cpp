#include "ebi/E3DGraph.h"

namespace ebi {

/**
 * @note Address: 0x803C9D10
 * @note Size: 0x104
 */
void E3DAnimRes::load(J3DModelData* modelData, JKRArchive* archive, char* resourcePath)
{
	void* resource = archive->getResource(resourcePath);

	P2ASSERTLINE(20, resource);

	mAnimTransform = (J3DAnmTransform*)J3DAnmLoaderDataBase::load(resource);
	mAnmCalcMtx    = J3DNewMtxCalcAnm(modelData->getJointTree().mFlags & J3DMLF_MtxTypeMask, mAnimTransform);

	mStartFrame = 0.0f;
	mStopFrame  = mAnimTransform->mTotalFrameCount - 2.0f;

	mLoopStart = mStartFrame;
	mLoopEnd   = mStopFrame;

	mTimeScale = sys->mDeltaTime * 60.0f * 0.5f;
	mMode      = 0;
}

/**
 * @note Address: 0x803C9E14
 * @note Size: 0x58
 */
void E3DAnimCtrl::setAnimFolder(E3DAnimFolderBase* animFolder)
{
	P2ASSERTLINE(40, animFolder);
	mAnimFolder = animFolder;
}

/**
 * @note Address: 0x803C9E6C
 * @note Size: 0xA4
 */
void E3DAnimCtrl::init(s32 id, f32 timeStep)
{
	P2ASSERTLINE(47, mAnimFolder);
	mAnimRes       = mAnimFolder->getAnimRes(id);
	mTimeStep      = timeStep;
	mAnimStartTime = mAnimRes->mStartFrame;
	mState         = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void E3DAnimCtrl::setStartFrame()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803C9F10
 * @note Size: 0x80
 */
void E3DAnimCtrl::play()
{
	P2ASSERTLINE(63, mAnimRes);
	if (mState != 3) {
		mAnimRes->mMode == 1 ? mState = 1 : mState = 2;
	}
}

/**
 * @note Address: 0x803C9F90
 * @note Size: 0x64
 */
void E3DAnimCtrl::playStopEnd()
{
	P2ASSERTLINE(76, mAnimRes);
	if (mState != 3) {
		mState = 2;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void E3DAnimCtrl::stop()
{
	// UNUSED FUNCTION
}
} // namespace ebi
