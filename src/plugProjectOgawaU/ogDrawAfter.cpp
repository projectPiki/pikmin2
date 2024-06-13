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
	// make a copy of the original pane, hide the original, the copy will be drawn after everything else
	mOrigPane   = static_cast<J2DPictureEx*>(TagSearch(mgr, tag));
	mCopiedPane = CopyPicture(mOrigPane, 'ogDAcopy');
	mOrigPane->hide();
	mIsVisible = true;
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
		JGeometry::TVec3f minPos = mOrigPane->getGlbVtx(GLBVTX_BtmLeft);
		JGeometry::TVec3f maxPos = mOrigPane->getGlbVtx(GLBVTX_TopRight);

		gfx.mOrthoGraph.setPort();

		mCopiedPane->draw(minPos.x, minPos.y, maxPos.x - minPos.x, maxPos.y - minPos.y, false, false, false);

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
