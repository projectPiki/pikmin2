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
	mFader      = nullptr;
	mErrorIndex = -1;
}

/**
 * @note Address: 0x8042A328
 * @note Size: 0x2C
 */
bool DvdStatus::isErrorOccured()
{
	bool retval = false;
	if (!((mFader == nullptr) || (sys->mCardMgr->isFlag(Game::MemoryCard::MCMFLAG_IsWriting)))) {
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
	if (status == DVD_STATE_FATAL_ERROR) {
		mErrorIndex = DvdError_ErrorOccured;
	} else if (status == DVD_STATE_RETRY) {
		mErrorIndex = DvdError_DiscReadError;
	} else if (status == DVD_STATE_NO_DISK) {
		mErrorIndex = DvdError_InsertDisc;
	} else if (status == DVD_STATE_COVER_OPEN) {
		mErrorIndex = DvdError_TrayOpen;
	} else if (status == DVD_STATE_WRONG_DISK) {
		mErrorIndex = DvdError_WrongDisc;
	} else if (mErrorIndex != -1 && status == DVD_STATE_BUSY) {
		mErrorIndex = DvdError_Loading;
	} else {
		mErrorIndex = DvdError_None;
	}

	if (mFader == nullptr) {
		if (DvdError_Loading < mErrorIndex) {
			JFWDisplay* display = sys->mDisplay;

			if (display) {
				mFader          = display->mFader;
				display->mFader = nullptr;
			} else {
				JUT_PANICLINE(170, "no display.\n");
			}

			PADControlMotor(PAD_CHAN0, PAD_MOTOR_STOP_HARD);
			PADControlMotor(PAD_CHAN1, PAD_MOTOR_STOP_HARD);
			PADControlMotor(PAD_CHAN2, PAD_MOTOR_STOP_HARD);
			PADControlMotor(PAD_CHAN3, PAD_MOTOR_STOP_HARD);
			mCPULockNum = sys->disableCPULockDetector();
			ebi::FileSelect::TMgr::onDvdErrorOccured();
			ebi::Save::TMgr::onDvdErrorOccured();
		}
	} else if (mErrorIndex == DvdError_None) {

		JFWDisplay* display = sys->mDisplay;
		if (display) {
			JUT_ASSERTLINE(197, display->mFader == nullptr, "display changed !\n");
			display->mFader = mFader;
			mFader          = nullptr;
		} else {
			JUT_PANICLINE(204, "no display.\n");
		}

		sys->enableCPULockDetector(mCPULockNum);
		ebi::FileSelect::TMgr::onDvdErrorRecovered();
		ebi::Save::TMgr::onDvdErrorRecovered();
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

		if (gP2JMEMgr && gP2JMEMgr->mIsLoaded) {
			print.setFont(gP2JMEMgr->mFont);
		} else if (sys->mRomFont) {
			print.setFont(sys->mRomFont);
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

			print.mCharColor.set(TCOLOR_WHITE_U8);
			print.mGradientColor.set(TCOLOR_WHITE_U8);

			print.print(40.0f, 200.0f, errorMsgSet[mErrorIndex]);
		}
	}
}
