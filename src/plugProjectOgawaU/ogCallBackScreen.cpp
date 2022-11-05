#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8030B370
 * Size:	0000A4
 */
CallBack_Screen::CallBack_Screen(P2DScreen::Mgr* mgr, u64 tag)
{
	m_partsScreen = mgr;
	m_pane        = TagSearch(m_partsScreen, tag);
	m_textBox     = nullptr;
	_28           = 1.0f;
	_2C           = 0.0f;
	_30           = 0.0f;
}

/*
 * --INFO--
 * Address:	8030B414
 * Size:	000008
 */
P2DScreen::Mgr* CallBack_Screen::getPartsScreen() { return m_partsScreen; }

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
		Mtx* mtxPtr = &m_textBox->_080;
		PSMTXScale(scaledMtx, _28, _28, 0.0f);
		PSMTXConcat(*mtxPtr, scaledMtx, scaledMtx);

		Mtx transMtx;
		PSMTXTrans(transMtx, _2C, _30, 0.0f);
		PSMTXConcat(scaledMtx, transMtx, *mtxPtr);

		PSMTXCopy(*mtxPtr, m_pane->_050);

		m_partsScreen->draw(gfx, grafContext);
	}
}
} // namespace Screen
} // namespace og
