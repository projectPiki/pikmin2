#include "og/Screen/callbackNodes.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/ogScreen.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "trig.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80307820
 * Size:	000080
 */
CallBack_CatchPiki::CallBack_CatchPiki()
{
	mPikiType = nullptr;
	mPikiIcon = nullptr;
}

/*
 * --INFO--
 * Address:	803078DC
 * Size:	0000C0
 */
void CallBack_CatchPiki::init(J2DScreen* screen, u64 tag, u32* pikiType, JKRArchive* archive)
{
	mPikiIcon     = static_cast<J2DPicture*>(screen->search(tag));
	mPikiType     = pikiType;
	mCurrPikiType = *pikiType;

	char** iconNames   = (char**)PikiIconTextureName;
	ResTIMG** textures = PikiIconTextureResTIMG;

	for (int i = 0; i < 19; i++) {
		textures[i] = static_cast<ResTIMG*>(archive->getResource('TIMG', iconNames[i]));
	}

	setPikiIcon(*pikiType);
	update();
}

/*
 * --INFO--
 * Address:	8030799C
 * Size:	0000F0
 */
void CallBack_CatchPiki::update()
{
	if (mPikiType && mPikiIcon) {
		u32 pikiType = *mPikiType;
		if (pikiType != mCurrPikiType && pikiType < 19) {
			setPikiIcon(pikiType);
			mScaleMgr.up(0.4f, 30.0f, 0.7f, 0.0f);
			mCurrPikiType = pikiType;
		}

		f32 scale = mScaleMgr.calc();
		mPikiIcon->rotate(mPikiIcon->mBounds.getWidth() / 2, mPikiIcon->mBounds.getHeight() / 2, J2DROTATE_Z, 0.0f);
		mPikiIcon->updateScale(scale);
	}
}

/*
 * --INFO--
 * Address:	80307A8C
 * Size:	00004C
 */
void CallBack_CatchPiki::setPikiIcon(int pikiType)
{
	if (pikiType < 19) {
		mPikiIcon->changeTexture(PikiIconTextureResTIMG[pikiType], 0);
	}
}

} // namespace Screen
} // namespace og
