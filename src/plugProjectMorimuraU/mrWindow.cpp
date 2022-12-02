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
	m_animText1->open(0.05f);
	m_animText2->open(0.1f);
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
	m_animText1->stop();
	m_animText2->stop();
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
void TConfirmEndWindow::setRetireMsg(u64 msgID) { m_animText2->setText(msgID); }

/*
 * --INFO--
 * Address:	803A380C
 * Size:	000074
 */
TSelectExplanationWindow::TSelectExplanationWindow(JKRArchive* archive, int p2)
    : TScreenBase(archive, p2)
{
	m_state           = SelWinState_Disabled;
	m_scaleGrowRate   = 0.0f;
	m_currScreenScale = 0.0f;
	m_transXModifier  = 0.0f;
	m_transYModifier  = 0.0f;
	m_scaleMgr        = new og::Screen::ScaleMgr();
}

/*
 * --INFO--
 * Address:	803A3880
 * Size:	000194
 */
void TSelectExplanationWindow::update()
{
	if (m_state == SelWinState_Disabled) {
		m_scaleGrowRate = 0.0f;
	} else {
		m_screenObj->update();
		for (int i = 0; i < m_animScreenCount; i++) {
			m_animScreens[i]->update();
		}

		switch (m_state) {
		case SelWinState_Opening:
			m_currScreenScale += m_scaleGrowRate;
			if (m_currScreenScale >= 1.0f) {
				m_currScreenScale = 1.0f;
				screenScaleUp();
				m_state = SelWinState_IdleOpen;
			}
			break;

		case SelWinState_IdleOpen:
			break;

		case SelWinState_Closing:
			m_currScreenScale += m_scaleGrowRate;
			if (m_currScreenScale < 0.0f) {
				m_currScreenScale = 0.0f;
				m_scaleGrowRate   = 0.0f;
				m_state           = SelWinState_Disabled;
			}
			break;
		}

		m_screenObj->animation();
	}

	m_screenObj->setXY((1.0f - m_currScreenScale) * m_transXModifier, (1.0f - m_currScreenScale) * m_transYModifier);
	m_screenObj->scaleScreen(m_scaleMgr->calc());
}

/*
 * --INFO--
 * Address:	803A3A14
 * Size:	00002C
 */
void TSelectExplanationWindow::draw(Graphics& gfx, J2DPerspGraph* perspGraph)
{
	if (m_state != SelWinState_Disabled) {
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
	m_scaleGrowRate = 0.12f;
	m_state         = SelWinState_Opening;
}

/*
 * --INFO--
 * Address:	803A3A54
 * Size:	000014
 */
void TSelectExplanationWindow::closeWindow()
{
	m_scaleGrowRate = -0.12f;
	m_state         = SelWinState_Closing;
}

} // namespace Morimura