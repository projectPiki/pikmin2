#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "trig.h"

namespace og {
namespace Screen {

/**
 * @note Address: 0x8030B370
 * @note Size: 0xA4
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

/**
 * @note Address: 0x8030B414
 * @note Size: 0x8
 */
P2DScreen::Mgr* CallBack_Screen::getPartsScreen() { return mPartsScreen; }

/**
 * @note Address: 0x8030B41C
 * @note Size: 0x38
 */
void CallBack_Screen::update()
{
	J2DScreen* partsScreen = getPartsScreen();
	if (partsScreen) {
		partsScreen->update();
	}
}

/**
 * @note Address: 0x8030B454
 * @note Size: 0xD0
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
