#include "og/Screen/DispMember.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/anime.h"
#include "og/Screen/callbackNodes.h"
#include "og/newScreen/WorldMapInfoWindow.h"
#include "types.h"
#include "Morimura/Bases.h"
#include "Morimura/Window.h"

namespace Morimura {

/*
 * __ct
 * --INFO--
 * Address:	803A3644
 * Size:	000050
 */
TConfirmEndWindow::TConfirmEndWindow(const char* p1)
    : og::newScreen::ObjWorldMapInfoWindow0(p1)
    , m_isOpenMaybe(false)
    , _D5(0)
{
}

/*
 * --INFO--
 * Address:	803A3694
 * Size:	000040
 */
bool TConfirmEndWindow::doStart(const Screen::StartSceneArg* arg)
{
	_44           = 0.0f;
	m_isOpenMaybe = false;
	_D5           = 1;
	_CC->_21      = 1;
	return og::newScreen::ObjWorldMapInfoWindow0::doStart(arg);
}

/*
 * --INFO--
 * Address:	803A36D4
 * Size:	000054
 */
void TConfirmEndWindow::doUpdateFadeinFinish()
{
	_B8->open(0.05f);
	_BC->open(0.1f);
	blink_Menu(_AC);
	og::newScreen::ObjSMenuPauseVS::doUpdateFadeinFinish();
}

/*
 * --INFO--
 * Address:	803A3728
 * Size:	000020
 */
bool TConfirmEndWindow::doUpdateFadein() { og::newScreen::ObjWorldMapInfoWindow0::doUpdateFadein(); }

/*
 * --INFO--
 * Address:	803A3748
 * Size:	000040
 */
void TConfirmEndWindow::doUpdateFadeoutFinish()
{
	m_isOpenMaybe = false;
	_B8->stop();
	_BC->stop();
}

/*
 * --INFO--
 * Address:	803A3788
 * Size:	000028
 */
bool TConfirmEndWindow::doUpdateFadeout()
{
	_D5 = 0;
	return og::newScreen::ObjSMenuPauseVS::doUpdateFadeout();
}

/*
 * --INFO--
 * Address:	803A37B0
 * Size:	000038
 */
void TConfirmEndWindow::doDraw(Graphics& gfx)
{
	if (m_isOpenMaybe) {
		ObjSMenuPauseVS::doDraw(gfx);
	} else {
		m_isOpenMaybe = true;
	}
}

/*
 * --INFO--
 * Address:	803A37E8
 * Size:	000024
 */
void TConfirmEndWindow::setRetireMsg(u64 msgID) { _BC->setText(msgID); }

/*
 * --INFO--
 * Address:	803A380C
 * Size:	000074
 */
TSelectExplanationWindow::TSelectExplanationWindow(JKRArchive* archive, int p2)
    : TScreenBase(archive, p2)
{
	_18        = 0;
	_24        = 0.0f;
	_28        = 0.0f;
	_1C        = 0.0f;
	_20        = 0.0f;
	m_scaleMgr = new og::Screen::ScaleMgr();
}

/*
 * --INFO--
 * Address:	803A3880
 * Size:	000194
 */
void TSelectExplanationWindow::update()
{
	if (_18 == 0) {
		_24 = 0.0f;
	} else {
		_08->update();
		for (int i = 0; i < _10; i++) {
			m_animScreens[i]->update();
		}

		switch (_18) {
		case 1:
			_28 += _24;
			if (_28 >= 1.0f) {
				_28 = 1.0f;
				screenScaleUp();
				_18 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			_28 += _24;
			if (_28 < 0.0f) {
				_28 = 0.0f;
				_24 = 0.0f;
				_18 = 0;
			}
			break;
		}
		_08->animation();
	}

	_08->setXY((1.0f - _28) * _1C, (1.0f - _28) * _20);
	_08->scaleScreen(m_scaleMgr->calc());
}

/*
 * --INFO--
 * Address:	803A3A14
 * Size:	00002C
 */
void TSelectExplanationWindow::draw(Graphics& gfx, J2DPerspGraph* perspGraph)
{
	if (_18 != 0) {
		TScreenBase::draw(gfx, perspGraph);
	}
}

/*
 * --INFO--
 * Address:	803A3A40
 * Size:	000014
 */
void TSelectExplanationWindow::openWindow()
{
	_24 = 0.12f;
	_18 = 1;
}

/*
 * --INFO--
 * Address:	803A3A54
 * Size:	000014
 */
void TSelectExplanationWindow::closeWindow()
{
	_24 = -0.12f;
	_18 = 3;
}

} // namespace Morimura