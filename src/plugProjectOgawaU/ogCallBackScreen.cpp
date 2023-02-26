#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "trig.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8030B370
 * Size:	0000A4
 */
CallBack_Screen::CallBack_Screen(P2DScreen::Mgr* mgr, u64 tag)
{
	mPartsScreen = mgr;
	mPane        = TagSearch(mPartsScreen, tag);
	mTextBox     = nullptr;
	mScale       = 1.0f;
	mXOffs       = 0.0f;
	mYOffs       = 0.0f;
}

/*
 * --INFO--
 * Address:	8030B414
 * Size:	000008
 */
P2DScreen::Mgr* CallBack_Screen::getPartsScreen() { return mPartsScreen; }

/*
 * --INFO--
 * Address:	8030B41C
 * Size:	000038
 */
void CallBack_Screen::update()
{
	J2DScreen* partsScreen = getPartsScreen();
	if (partsScreen) {
		partsScreen->update();
	}
}

/*
 * --INFO--
 * Address:	8030B454
 * Size:	0000D0
 */
void CallBack_Screen::draw(Graphics& gfx, J2DGrafContext& grafContext)
{
	if (getPartsScreen()) {
		Mtx scaledMtx;
		Mtx* mtxPtr = &mTextBox->mGlobalMtx;
		PSMTXScale(scaledMtx, mScale, mScale, 0.0f);
		PSMTXConcat(*mtxPtr, scaledMtx, scaledMtx);

		Mtx transMtx;
		PSMTXTrans(transMtx, mXOffs, mYOffs, 0.0f);
		PSMTXConcat(scaledMtx, transMtx, *mtxPtr);

		PSMTXCopy(*mtxPtr, mPane->mPositionMtx);

		mPartsScreen->draw(gfx, grafContext);
	}
}
} // namespace Screen
} // namespace og
