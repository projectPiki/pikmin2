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

	mLightObjMain.mColor
	    = Color4(mSetting.mMainParms.mTl04, mSetting.mMainParms.mTl05, mSetting.mMainParms.mTl06, mSetting.mMainParms.mTl07);
	mLightObjMain.mPosition
	    = Vector3f(mSetting.mMainParms.mTl50.mValue, mSetting.mMainParms.mTl51.mValue, mSetting.mMainParms.mTl52.mValue);

	Vector3f temp(mSetting.mMainParms.mTl53, mSetting.mMainParms.mTl54, mSetting.mMainParms.mTl55);
	_normalise2(temp);
	mLightObjMain.mElevation = temp;

	setRefValues(mSetting.mMainParms.mTl56, mSetting.mMainParms.mTl57, mSetting.mMainParms.mTl58);
	mLightObjMain.mDistAttnFn = 1;
	mLightObjMain.mSpotFn     = 3;

	mLightObjSpec.mColor
	    = Color4(mSetting.mSpecParms.mSp04, mSetting.mSpecParms.mSp05, mSetting.mSpecParms.mSp06, mSetting.mSpecParms.mSp07);
	Vector3f temp2(mSetting.mSpecParms.mSp53, mSetting.mSpecParms.mSp54, mSetting.mSpecParms.mSp55);
	_normalise(temp2);
	mLightObjSpec.mElevation = temp2;
	mLightObjSpec.mKScale    = mSetting.mSpecParms.mSp56;
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
