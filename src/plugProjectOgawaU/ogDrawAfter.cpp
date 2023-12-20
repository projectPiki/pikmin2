#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "JSystem/J2D/J2DPane.h"
#include "Graphics.h"
#include "trig.h"

namespace og {
namespace Screen {

/**
 * @note Address: N/A
 * @note Size: 0xB4
 */
CallBack_DrawAfter::CallBack_DrawAfter(P2DScreen::Mgr* mgr, u64 tag)
{
	_1C             = static_cast<J2DPictureEx*>(TagSearch(mgr, tag));
	_20             = CopyPicture(_1C, 'ogDAcopy');
	_1C->mIsVisible = false;
	mIsVisible      = true;
}

/**
 * @note Address: 0x8032D684
 * @note Size: 0x4
 */
void CallBack_DrawAfter::update() { }

/**
 * @note Address: 0x8032D688
 * @note Size: 0xFC
 */
void CallBack_DrawAfter::draw(Graphics& gfx, J2DGrafContext& context)
{
	if (mIsVisible) {
		Vector3f globalVtx0 = _1C->getGlbVtx(0);
		Vector3f globalVtx3 = _1C->getGlbVtx(3);

		gfx.mOrthoGraph.setPort();

		_20->draw(globalVtx0.x, globalVtx0.y, globalVtx3.x - globalVtx0.x, globalVtx3.y - globalVtx0.y, false, false, false);

		context.setPort();
	}
}

/**
 * @note Address: 0x8032D784
 * @note Size: 0xE4
 */
CallBack_DrawAfter* setCallBack_DrawAfter(P2DScreen::Mgr* mgr, u64 tag)
{
	CallBack_DrawAfter* callBack = new CallBack_DrawAfter(mgr, tag);
	mgr->addCallBack(tag, callBack);
	return callBack;
}

} // namespace Screen
} // namespace og
