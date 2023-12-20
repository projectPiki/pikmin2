#include "Dolphin/dvd.h"
#include "Dolphin/pad.h"
#include "DvdStatus.h"
#include "JSystem/JUtility/JUTException.h"
#include "JSystem/JFramework/JFWDisplay.h"
#include "System.h"
#include "types.h"
#include "Graphics.h"
#include "JSystem/JUtility/JUTVideo.h"
#include "JSystem/J2D/J2DPrint.h"
#include "P2JME/P2JME.h"
#include "Game/MemoryCard/Mgr.h"

extern P2JME::Mgr* gP2JMEMgr;

enum LanguageID { LANG_ENGLISH = 0, LANG_FRENCH, LANG_GERMAN, LANG_HOL_UNUSED, LANG_ITALIAN, LANG_JAPANESE, LANG_SPANISH };

const char* filler1 = "dvdStatus";

/**
 * @note Address: 0x8042A314
 * @note Size: 0x14
 */
DvdStatus::DvdStatus()
{
	mFader = nullptr;
	_00    = -1;
}

/**
 * @note Address: 0x8042A328
 * @note Size: 0x2C
 */
bool DvdStatus::isErrorOccured()
{
	bool retval = false;
	if (!((mFader == nullptr) || (sys->mCardMgr->mFlags.typeView & 1))) {
		retval = true;
	}
	return retval;
}

/**
 * @note Address: 0x8042A354
 * @note Size: 0x1F0
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
	if (mFader == nullptr) {
		if (0 < _00) {
			JFWDisplay* display = sys->mDisplay;

			if (display) {
				mFader          = display->mFader;
				display->mFader = nullptr;
			} else {
				JUT_PANICLINE(170, "no display.\n");
			}
			PADControlMotor(0, 2);
			PADControlMotor(1, 2);
			PADControlMotor(2, 2);
			PADControlMotor(3, 2);
			_08 = sys->disableCPULockDetector();
			ebi::FileSelect::TMgr::onDvdErrorOccured();
			ebi::Save::TMgr::onDvdErrorOccured();
		}
	} else {
		if (_00 == -1) {
			JFWDisplay* display = sys->mDisplay;
			if (display) {
				JUT_ASSERTLINE(197, display->mFader == nullptr, "display changed !\n");
				display->mFader = mFader;
				mFader          = nullptr;
			} else {
				JUT_PANICLINE(204, "no display.\n");
			}
			sys->enableCPULockDetector(_08);
			ebi::FileSelect::TMgr::onDvdErrorRecovered();
			ebi::Save::TMgr::onDvdErrorRecovered();
		}
	}
	return mFader != nullptr;
}

/**
 * @note Address: 0x8042A544
 * @note Size: 0x2B8
 */
void DvdStatus::draw()
{
	if (isErrorOccured()) {
		sys->mGfx->setupJ2DOrthoGraphDefault();
		sys->mGfx->mOrthoGraph.setPort();

		J2DFillBox(0.0f, 0.0f, JUTVideo::sManager->mRenderModeObj->fbWidth, JUTVideo::sManager->mRenderModeObj->efbHeight,
		           JUtility::TColor(0, 0, 0x80, 0xFF));
		J2DPrint print(nullptr, 0.0f);

		if (gP2JMEMgr && gP2JMEMgr->_28) {
			print.setFont((JUTFont*)gP2JMEMgr->mFont);
		} else if (sys->mRomFont) {
			print.setFont((JUTFont*)sys->mRomFont);
		} else {
			JUT_ASSERTLINE(279, false, "no ROM font\n");
		}

		char** errorMsgSet;
		if (print.mFont) {
			switch (sys->mRegion) {
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
				JUT_PANICLINE(294, "unknown language. %d", sys->mRegion);
				break;
			}

			print.initiate();

			print.mCharColor.set(TCOLOR_WHITE);
			print.mGradientColor.set(TCOLOR_WHITE);

			print.print(40.0f, 200.0f, errorMsgSet[_00]);
		}
	}
}
