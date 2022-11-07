#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "JSystem/J2D/J2DPane.h"
#include "Graphics.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
CallBack_DrawAfter::CallBack_DrawAfter(P2DScreen::Mgr* mgr, u64 tag)
{
	_1C              = static_cast<J2DPictureEx*>(TagSearch(mgr, tag));
	_20              = CopyPicture(_1C, 'ogDAcopy');
	_1C->m_isVisible = false;
	_24              = true;
}

/*
 * --INFO--
 * Address:	8032D684
 * Size:	000004
 */
void CallBack_DrawAfter::update() { }

/*
 * --INFO--
 * Address:	8032D688
 * Size:	0000FC
 */
void CallBack_DrawAfter::draw(Graphics& gfx, J2DGrafContext& context)
{
	if (_24) {
		Vector3f globalVtx0 = _1C->getGlbVtx(0);
		Vector3f globalVtx3 = _1C->getGlbVtx(3);

		gfx.m_orthoGraph.setPort();

		_20->draw(globalVtx0.x, globalVtx0.y, globalVtx3.x - globalVtx0.x, globalVtx3.y - globalVtx0.y, false, false, false);

		context.setPort();
	}
}

/*
 * --INFO--
 * Address:	8032D784
 * Size:	0000E4
 */
CallBack_DrawAfter* setCallBack_DrawAfter(P2DScreen::Mgr* mgr, u64 tag)
{
	CallBack_DrawAfter* callBack = new CallBack_DrawAfter(mgr, tag);
	mgr->addCallBack(tag, callBack);
	return callBack;
}

} // namespace Screen
} // namespace og
