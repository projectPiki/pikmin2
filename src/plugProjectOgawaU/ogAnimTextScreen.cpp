#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/anime.h"
#include "og/newscreen/SMenu.h"
#include "trig.h"
#include "System.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	803087B8
 * Size:	000134
 */
AnimText_Screen* setAnimTextScreen(JKRArchive* arc, P2DScreen::Mgr* parentScreen, u64 tag)
{
	P2DScreen::Mgr* scrn = new P2DScreen::Mgr;
	scrn->set("anim_text.blo", 0x40000, arc);

	J2DTextBoxEx* pane = static_cast<J2DTextBoxEx*>(og::Screen::TagSearch(parentScreen, tag));
	pane->setString("");
	pane->m_isVisible = false;

	AnimText_Screen* anm = new AnimText_Screen(scrn, 'joint');
	anm->m_textBox       = pane;
	anm->setText(pane->m_messageID);

	AnimScreen* anmscrn = new AnimScreen;
	anmscrn->init(arc, scrn, "anim_text.bck");
	anm->setAnimScreen(anmscrn);

	parentScreen->addCallBack(tag, anm);
	og::Screen::setCallBackMessage(scrn);
	anmscrn->_38 = false;

	anm->stop();
	return anm;
}

/*
 * --INFO--
 * Address:	803088EC
 * Size:	00013C
 */
AnimText_Screen* setMenuScreen(JKRArchive* arc, P2DScreen::Mgr* parentScreen, u64 tag)
{
	AnimText_Screen* anm = setAnimTextScreen(arc, parentScreen, tag);
	anm->m_colorType     = 1;
	return anm;
}

/*
 * --INFO--
 * Address:	80308A28
 * Size:	00013C
 */
AnimText_Screen* setMenuTitleScreen(JKRArchive* arc, P2DScreen::Mgr* parentScreen, u64 tag)
{
	AnimText_Screen* anm = setAnimTextScreen(arc, parentScreen, tag);
	anm->m_colorType     = 3;
	return anm;
}

/*
 * --INFO--
 * Address:	80308B64
 * Size:	000228
 */
AnimText_Screen::AnimText_Screen(P2DScreen::Mgr* scrn, u64 tag)
    : CallBack_Screen(scrn, tag)
{
	char buf[24];
	if (!m_pane) {
		TagToName(tag, buf);
	}
	m_anmScreen       = nullptr;
	m_isUpdateSuccess = false;
	m_msgBodyPane     = nullptr;
	m_msgBackPane     = nullptr;
	_48               = false;
	m_tag             = 0;
	m_msgBodyPane     = static_cast<J2DTextBox*>(og::Screen::TagSearch(scrn, 'msg_body'));
	m_msgBackPane     = static_cast<J2DTextBox*>(og::Screen::TagSearch(scrn, 'msg_back'));
	m_blinkTimer      = 0.0f;
	m_blinkFactor     = 0.0f;
	m_blinkLevel      = 1.0f;
	m_isBlinking      = false;
	_6C               = 1.0f;
	og::newScreen::ObjSMenuPause::ObjHIOVal::getMenuColor(&m_color0, &m_color1, &m_color2, &m_color3, &m_color4, &m_color5, &m_color6,
	                                                      &m_color7, &m_color8, &m_color9, &m_color13, &m_color14, &m_color15, &m_color16);
	m_color10   = m_msgBackPane->getWhite();
	m_color11   = m_msgBackPane->getBlack();
	m_color12   = m_color4;
	m_colorType = 0;
}

/*
 * --INFO--
 * Address:	80308E0C
 * Size:	00060C
 */
void AnimText_Screen::update()
{
	og::Screen::CallBack_Screen::update();
	if (m_anmScreen) {
		m_isUpdateSuccess = m_anmScreen->update();

		if (_48) {
			if (m_tag) {
				if (!m_isUpdateSuccess) {
					setText(m_tag);
					m_tag = 0;
					open(0.0f);
				}
			} else if (!m_isUpdateSuccess) {
				_48 = false;
			}
		}

		J2DTextBox* pane = static_cast<J2DTextBox*>(m_textBox);
		JUtility::TColor bodyWhite, bodyBlack, bgWhite, bgBlack;

		switch (m_colorType) {
		case 0:
			bodyWhite = pane->getWhite();
			bodyBlack = pane->getBlack();
			bgWhite   = m_color10;
			bgBlack   = m_color11;
			break;
		case 1:
			bodyWhite = m_color4;
			bodyBlack = m_color5;
			bgWhite   = m_color6;
			bgBlack   = m_color7;
			break;
		case 2:
			bodyWhite = m_color0;
			bodyBlack = m_color1;
			bgWhite   = m_color8;
			bgBlack   = m_color9;
			break;
		case 3:
			bodyWhite = m_color13;
			bodyBlack = m_color14;
			bgWhite   = m_color15;
			bgBlack   = m_color16;
			break;
		default:
			JUT_PANICLINE(229, "ColorType ERR!!\n");
		}

		m_msgBodyPane->setBlack(bodyBlack);

		m_msgBackPane->setWhite(bgWhite);
		m_msgBackPane->setBlack(bgBlack);

		// if m_isBlinking, update blinking params + set body white to blended value
		//     else, set body white to col1
		if (m_isBlinking) {
			if (m_blinkFactor > 0.0f) {
				m_blinkTimer += sys->m_deltaTime;
				if (m_blinkTimer >= m_blinkFactor) {
					m_blinkTimer = 0.0f;
				}

				if (m_blinkLevel > 0.0f) {
					m_blinkLevel -= 0.1f;
					if (m_blinkLevel < 0.0f) {
						m_blinkLevel = 0.0f;
					}
				}

				f32 t = (1.0f + pikmin2_sinf((m_blinkTimer * TAU) / m_blinkFactor)) / 2;
				_64 += (t - _64) / 3.0f;

			} else if (m_blinkLevel < 1.0f) {
				m_blinkLevel += 0.05f;
				if (m_blinkLevel > 1.0f) {
					m_blinkLevel = 1.0f;
				}
			}

			JUtility::TColor blendedWhite;
			if (m_blinkFactor > 0.0f) {
				JUtility::TColor interColor;
				og::Screen::blendColor(m_color2, m_color3, _64, &interColor);
				og::Screen::blendColor(interColor, m_color4, m_blinkLevel, &blendedWhite);
				m_color12 = blendedWhite;

			} else {
				og::Screen::blendColor(m_color12, m_color4, m_blinkLevel, &blendedWhite);
			}

			m_msgBodyPane->setWhite(blendedWhite);

		} else {
			m_msgBodyPane->setWhite(bodyWhite);
		}

		u8 alpha = _6C * 255.0f;

		if (m_colorType == 2) {
			alpha = m_color0.a;
		}

		m_msgBodyPane->setAlpha(alpha);
		m_msgBackPane->setAlpha(alpha);

	} else {
		m_isUpdateSuccess = false;
	}
}

/*
 * --INFO--
 * Address:	80309418
 * Size:	000008
 */
void AnimText_Screen::setAnimScreen(AnimScreen* screen) { m_anmScreen = screen; }

/*
 * --INFO--
 * Address:	80309420
 * Size:	00001C
 */
void AnimText_Screen::setText(u64 tag)
{
	m_msgBodyPane->m_messageID = tag;
	m_msgBackPane->m_messageID = tag;
}

/*
 * --INFO--
 * Address:	8030943C
 * Size:	000018
 */
void AnimText_Screen::stop()
{
	m_anmScreen->_20     = 0.0f;
	m_anmScreen->m_frame = 0.0f;
}

/*
 * --INFO--
 * Address:	80309454
 * Size:	00003C
 */
void AnimText_Screen::open(f32 a1)
{
	m_anmScreen->_20     = 1.0f;
	m_anmScreen->m_frame = 0.0f;
	m_anmScreen->AnimBaseBase::start(a1);
}

/*
 * --INFO--
 * Address:	80309490
 * Size:	000048
 */
void AnimText_Screen::close()
{
	m_anmScreen->_20     = -1.0f;
	m_anmScreen->m_frame = m_anmScreen->m_lastFrame;
	m_anmScreen->start();
}

/*
 * --INFO--
 * Address:	803094D8
 * Size:	0000AC
 */
void AnimText_Screen::blink(f32 factor, f32 timer)
{
	if (factor > 0.0f) {
		m_isBlinking = true;
	}
	m_blinkFactor = factor;
	m_blinkTimer  = timer;
	f32 calc      = pikmin2_sinf((m_blinkTimer * TAU) / m_blinkFactor);
	_64           = (calc + 1.0f) / 2;
}
} // namespace Screen
} // namespace og
