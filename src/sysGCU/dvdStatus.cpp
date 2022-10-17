#include "Dolphin/dvd.h"
#include "Dolphin/pad.h"
#include "DvdStatus.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JFW/JFWDisplay.h"
#include "System.h"
#include "types.h"
#include "Graphics.h"
#include "JSystem/JUT/JUTVideo.h"
#include "JSystem/J2D/J2DPrint.h"
#include "P2JME/P2JME.h"

extern P2JME::Mgr* gP2JMEMgr;

enum LanguageID { LANG_ENGLISH = 0, LANG_FRENCH, LANG_GERMAN, LANG_HOL_UNUSED, LANG_ITALIAN, LANG_JAPANESE, LANG_SPANISH };

const char* filler1 = "dvdStatus";

/*
 * --INFO--
 * Address:	8042A314
 * Size:	000014
 */
DvdStatus::DvdStatus()
{
	m_fader = nullptr;
	_00     = -1;
}

/*
 * --INFO--
 * Address:	8042A328
 * Size:	00002C
 */
bool DvdStatus::isErrorOccured()
{
	bool retval = false;
	if (!((m_fader == nullptr) || (sys->m_cardMgr->_E4 & 1))) {
		retval = true;
	}
	return retval;
}

/*
 * --INFO--
 * Address:	8042A354
 * Size:	0001F0
 */
bool DvdStatus::update()
{
	int status = DVDGetDriveStatus();
	if (status == -1)
		_00 = 1;
	else if (status == 11)
		_00 = 2;
	else if (status == 4)
		_00 = 3;
	else if (status == 5)
		_00 = 4;
	else if (status == 6)
		_00 = 5;
	else if (_00 != -1 && status == 1) {
		_00 = 0;
	} else {
		_00 = -1;
	}
	if (m_fader == nullptr) {
		if (0 < _00) {
			JFWDisplay* display = sys->m_display;

			if (display) {
				m_fader          = display->m_fader;
				display->m_fader = nullptr;
			} else {
				JUT_PANICLINE(170, "no display.\n");
			}
			PADControlMotor(0, 2);
			PADControlMotor(1, 2);
			PADControlMotor(2, 2);
			PADControlMotor(3, 2);
			_08 = sys->disableCPULockDetector();
			// these probably need to be called by some global instance eventually
			ebi::FileSelect::TMgr::onDvdErrorOccured();
			ebi::Save::TMgr::onDvdErrorOccured();
		}
	} else {
		if (_00 == -1) {
			JFWDisplay* display = sys->m_display;
			if (display) {
				JUT_ASSERTLINE(197, display->m_fader == nullptr, "display changed !\n");
				display->m_fader = m_fader;
				m_fader          = nullptr;
			} else {
				JUT_PANICLINE(204, "no display.\n");
			}
			sys->enableCPULockDetector(_08);
			// these probably need to be called by some global instance eventually
			ebi::FileSelect::TMgr::onDvdErrorRecovered();
			ebi::Save::TMgr::onDvdErrorRecovered();
		}
	}
	return m_fader != nullptr;
}

/*
 * --INFO--
 * Address:	8042A544
 * Size:	0002B8
 */
void DvdStatus::draw(void)
{
	if (isErrorOccured()) {
		sys->m_gfx->setupJ2DOrthoGraphDefault();
		sys->m_gfx->m_orthoGraph.setPort();

		J2DFillBox(0.0f, 0.0f, JUTVideo::sManager->m_renderModeObj->fbWidth, JUTVideo::sManager->m_renderModeObj->efbHeight,
		           JUtility::TColor(0, 0, 0x80, 0xFF));
		J2DPrint JStack128(nullptr, 0.0f);

		if (gP2JMEMgr && gP2JMEMgr->_28) {
			JStack128.setFont((JUTFont*)gP2JMEMgr->m_font);
		} else if (sys->m_romFont) {
			JStack128.setFont((JUTFont*)sys->m_romFont);
		} else {
			JUT_ASSERTLINE(279, false, "no ROM font\n");
		}

		char** errorMsgSet;
		if (JStack128.m_font) {
			switch (sys->m_region) {
			case LANG_ENGLISH:
				errorMsgSet = DvdError::gMessage_eng;
				break;
			case LANG_FRENCH:
				errorMsgSet = DvdError::gMessage_fra;
				break;
			case LANG_GERMAN:
				errorMsgSet = DvdError::gMessage_ger;
				break;
			case LANG_ITALIAN:
				errorMsgSet = DvdError::gMessage_ita;
				break;
			case LANG_JAPANESE:
				errorMsgSet = DvdError::gMessage_jpn;
				break;
			case LANG_SPANISH:
				errorMsgSet = DvdError::gMessage_spa;
				break;
			default:
				JUT_PANICLINE(294, "unknown language. %d", sys->m_region);
				break;
			}

			JStack128.initiate();

			JStack128._40.set(TCOLOR_WHITE);
			JStack128._44.set(TCOLOR_WHITE);

			JStack128.print(40.0f, 200.0f, errorMsgSet[_00]);
		}
	}
}
