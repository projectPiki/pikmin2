#include "JSystem/J2D/J2DPane.h"
#include "P2Macros.h"
#include "P2DScreen.h"
#include "System.h"

namespace P2DScreen {

/* __ct
 * @note Address: 0x80434AC0
 * @note Size: 0x64
 */
Mgr::Mgr() { }

/**
 * @note Address: 0x80434B24
 * @note Size: 0x138
 */
J2DPane* Mgr::addCallBack(u64 tag, Node* node)
{
	P2ASSERTLINE(73, node);
	s8* tagbyteview = (s8*)&tag;

	J2DPane* pane = search(tag);
	if (pane) {
		node->mPane = pane;
		node->doInit();
		mScreenNode.add(node);
	} else {
		for (int i = 0; i < 8; i++) {
			if (!tagbyteview[i]) {
				tagbyteview[i] = 0x3f;
			}
		}
	}
	return pane;
}

/**
 * @note Address: 0x80434C5C
 * @note Size: 0x84
 */
void Mgr::addCallBackPane(J2DPane* pane, Node* node)
{
	P2ASSERTLINE(97, node);
	node->mPane = pane;
	node->doInit();
	mScreenNode.add(node);
}

/**
 * @note Address: 0x80434CE0
 * @note Size: 0x4C
 */
void Mgr::update()
{
	FOREACH_NODE(Node, mScreenNode.mChild, node) { node->update(); }
}

/**
 * @note Address: 0x80434D2C
 * @note Size: 0x80
 */
void Mgr::draw(Graphics& gfx, J2DGrafContext& context)
{
	J2DScreen::draw(0.0f, 0.0f, &context);
	FOREACH_NODE(Node, mScreenNode.mChild, node) { node->draw(gfx, context); }
}

const f32 Mgr_tuning::mstTuningScaleX = 0.95f;
const f32 Mgr_tuning::mstTuningScaleY = 0.95f;
const f32 Mgr_tuning::mstTuningTransX = -15.2f;
const f32 Mgr_tuning::mstTuningTransY = -15.2f;

/**
 * @note Address: 0x80434DAC
 * @note Size: 0x88
 */
Mgr_tuning::Mgr_tuning()
    : mScreenScaleX(0.95f)
    , mScreenScaleY(0.95f)
    , mSomeX(-15.2f)
    , mSomeY(-15.2f)
{
}

/* draw__Q29P2DScreen10Mgr_tuningFR8GraphicsR14J2DGrafContext
 * @note Address: 0x80434E34
 * @note Size: 0x128
 */
void Mgr_tuning::draw(Graphics& gfx, J2DGrafContext& context)
{
	u16 x = System::getRenderModeObj()->fbWidth;
	u16 y = System::getRenderModeObj()->efbHeight;
	rotate(x * 0.5f, y * 0.5f, J2DROTATE_Z, 0.0f);
	updateScale(mScreenScaleX, mScreenScaleY);
	setOffset(mSomeX, mSomeY);
	Mgr::draw(gfx, context);
}

} // namespace P2DScreen
