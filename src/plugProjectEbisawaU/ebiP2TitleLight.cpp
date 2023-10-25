#include "ebi/title/TTitle.h"
#include "stream.h"
#include "nans.h"

namespace ebi {
namespace title {

/*
 * --INFO--
 * Address:	803C1F58
 * Size:	000094
 */
void TTitleLightMgr::loadSettingFile(JKRArchive* arc, char* path)
{
	void* file = arc->getResource(path);
	if (file) {
		RamStream stream(file, -1);
		stream.resetPosition(true, 1);

		mSetting.mAmbParms.read(stream);
		mSetting.mMainParms.read(stream);
		mSetting.mSpecParms.read(stream);
	}
}

/*
 * --INFO--
 * Address:	803C1FEC
 * Size:	00017C
 */
void TTitleLightMgr::setParam_()
{
	mAmbientLight.mColor = Color4(mSetting.mAmbParms.mRed, mSetting.mAmbParms.mGreen, mSetting.mAmbParms.mBlue, mSetting.mAmbParms.mAlpha);

	mLightObjMain.mColor = Color4(mSetting.mMainParms.mLightColR, mSetting.mMainParms.mLightColG, mSetting.mMainParms.mLightColB,
	                              mSetting.mMainParms.mLightColA);
	mLightObjMain.mPosition
	    = Vector3f(mSetting.mMainParms.mPosX.mValue, mSetting.mMainParms.mPosY.mValue, mSetting.mMainParms.mPosZ.mValue);

	Vector3f temp(mSetting.mMainParms.mRotX, mSetting.mMainParms.mRotY, mSetting.mMainParms.mRotZ);
	_normalise2(temp);
	mLightObjMain.mElevation = temp;

	setRefValues(mSetting.mMainParms.mLightRange, mSetting.mMainParms.mLightBrightness, mSetting.mMainParms.mCutoffAngle);
	mLightObjMain.mDistAttnFn = 1;
	mLightObjMain.mSpotFn     = 3;

	mLightObjSpec.mColor = Color4(mSetting.mSpecParms.mLightColR, mSetting.mSpecParms.mLightColG, mSetting.mSpecParms.mLightColB,
	                              mSetting.mSpecParms.mLightColA);
	Vector3f temp2(mSetting.mSpecParms.mRotX, mSetting.mSpecParms.mRotY, mSetting.mSpecParms.mRotZ);
	_normalise(temp2);
	mLightObjSpec.mElevation = temp2;
	mLightObjSpec.mKScale    = mSetting.mSpecParms.mGlossAmount;
}

/*
 * --INFO--
 * Address:	803C2168
 * Size:	000020
 */
void TTitleLightMgr::update() { setParam_(); }

/*
 * --INFO--
 * Address:	803C2188
 * Size:	000094
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
