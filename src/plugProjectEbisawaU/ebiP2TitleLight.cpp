#include "ebi/title/TTitle.h"
#include "stream.h"
#include "nans.h"

namespace ebi {
namespace title {

/**
 * @note Address: 0x803C1F58
 * @note Size: 0x94
 */
void TTitleLightMgr::loadSettingFile(JKRArchive* arc, char* path)
{
	void* file = arc->getResource(path);
	if (file) {
		RamStream stream(file, -1);
		stream.setMode(STREAM_MODE_TEXT, 1);

		mSetting.mAmbParms.read(stream);
		mSetting.mMainParms.read(stream);
		mSetting.mSpecParms.read(stream);
	}
}

/**
 * @note Address: 0x803C1FEC
 * @note Size: 0x17C
 */
void TTitleLightMgr::setParam_()
{
	mAmbientLight.mColor = Color4(mSetting.mAmbParms.mRed, mSetting.mAmbParms.mGreen, mSetting.mAmbParms.mBlue, mSetting.mAmbParms.mAlpha);

	mLightObjMain.mColor = Color4(mSetting.mMainParms.mLightColR, mSetting.mMainParms.mLightColG, mSetting.mMainParms.mLightColB,
	                              mSetting.mMainParms.mLightColA);
	mLightObjMain.mPosition
	    = Vector3f(mSetting.mMainParms.mPosX.mValue, mSetting.mMainParms.mPosY.mValue, mSetting.mMainParms.mPosZ.mValue);

	Vector3f temp(mSetting.mMainParms.mRotX, mSetting.mMainParms.mRotY, mSetting.mMainParms.mRotZ);
	temp.normalise();
	mLightObjMain.mElevation = temp;

	setRefValues(mSetting.mMainParms.mLightRange, mSetting.mMainParms.mLightBrightness, mSetting.mMainParms.mCutoffAngle);
	mLightObjMain.mDistAttnFn = GX_DA_GENTLE;
	mLightObjMain.mSpotFn     = GX_SP_COS2;

	mLightObjSpec.mColor = Color4(mSetting.mSpecParms.mLightColR, mSetting.mSpecParms.mLightColG, mSetting.mSpecParms.mLightColB,
	                              mSetting.mSpecParms.mLightColA);

	temp.set(mSetting.mSpecParms.mRotX, mSetting.mSpecParms.mRotY, mSetting.mSpecParms.mRotZ);
	temp.normalise();
	mLightObjSpec.mElevation = temp;
	mLightObjSpec.mKScale    = mSetting.mSpecParms.mGlossAmount;
}

/**
 * @note Address: 0x803C2168
 * @note Size: 0x20
 */
void TTitleLightMgr::update() { setParam_(); }

/**
 * @note Address: 0x803C2188
 * @note Size: 0x94
 */
void TTitleLightMgr::setCameraMtx(Mtx mtx)
{
	Matrixf mtx2;
	PSMTXCopy(mtx, mtx2.mMatrix.mtxView);
	GXColor col = mAmbientLight.mColor.toGXColor();
	GXSetChanAmbColor(GX_COLOR0A0, col);

	FOREACH_NODE(LightObj, mLightObjChain.mChild, node) { node->set(mtx2); }
}

} // namespace title
} // namespace ebi
