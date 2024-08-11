#include "ResetManager.h"
#include "System.h"
#include "Controller.h"
#include "Dolphin/dvd.h"
#include "Dolphin/__start.h"
#include "JSystem/JFramework/JFWDisplay.h"
#include "THP/THPDraw.h"
#include "PSSystem/PSSystemIF.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JUtility/JUTVideo.h"
#include "MemoryCardMgr.h"
#include "Game/MemoryCard/Mgr.h"

/**
 * @note Address: 0x80429DB0
 * @note Size: 0xC8
 */
ResetManager::ResetManager(f32 thres)
{
	JUTGamePad::C3ButtonReset::sThreshold = OS_TIMER_CLOCK * thres;

	// double check the flags are reset
	mFlags.clear();

	// TRIPLE check these flags are reset
	resetFlag(RESETFLAG_ResetInputEntered);
	resetFlag(RESETFLAG_DoResetToMenu);
	resetFlag(RESETFLAG_GPProcessing);

	mState     = ResetState_Inactive;
	mFadeTimer = 0.0f;
	mCounter   = 0;
}

/**
 * @note Address: 0x80429E78
 * @note Size: 0x2B4
 */
void ResetManager::update()
{
	if (DVDGetDriveStatus() == DVD_STATE_FATAL_ERROR)
		return;

	bool check = true;
	if (!isFlag(RESETFLAG_ResetAllowed) && !(sys->isDvdErrorOccured())) {
		check = false;
	}

	if (mState != ResetState_Inactive) {
		if (!isWritingMemoryCard() && isSoundSystemStopped() && !isFlag(RESETFLAG_GPProcessing) && check) {
			switch (mState) {
			case ResetState_Fadeout:
				if (updateStatusEffects()) {
					mState = ResetState_Finish;
				}
				break;

			case ResetState_Finish:
				JUTGamePad::clearForReset();
				sys->deleteThreads();
				JFWDisplay::setForOSResetSystem();
				if (isFlag(RESETFLAG_DoResetToMenu)) {
					OSResetSystem(true, 0, true);
				} else {
					RENDER_INFO_STORE->mIdentifier = 'vald';
					RENDER_INFO_STORE->mRenderMode = System::mRenderMode;
					OSSetSaveRegion((void*)DOL_ADDR_LIMIT, (void*)(DOL_ADDR_LIMIT + 8));
					OSResetSystem(false, 0, false);
				}
				break;
			}

		} else {
			if (isWritingMemoryCard()) {
				OSReport("\tメモリーカード書き込み終了待ち\n"); // Waiting for memory card write completion
			}

			if (!isSoundSystemStopped()) {
				if (++mCounter == 3) {
					THPPlayerStop();
				}
				OSReport("\tオーディオ終了待ち\n"); // Waiting for Audio end
			}

			if (isFlag(RESETFLAG_GPProcessing)) {
				OSReport("\tGP処理終了待ち\n"); // GP processing end waiting
			}

			if (OSGetResetSwitchState()) {
				OSReport("\tリセットボタンが押されている\n"); // Reset button pressed
			}

			if (!check) {
				OSReport("許可が出ていない\n"); // Permission Denied
			}
		}
	} else {
		volatile int input;
		volatile int* ptr = &input;
		if (ptr) { // no idea
			input = JUTGamePad::C3ButtonReset::sResetOccurredPort;
		}

		if ((JUTGamePad::C3ButtonReset::sResetOccurred || isFlag(RESETFLAG_ResetInputEntered)) && !OSGetResetSwitchState()) {
			bool check2 = true;
			if (!isFlag(RESETFLAG_ResetInputEntered)) {
				int currInput = input;
				if (currInput != -1 && (u32)currInput > 1) {
					check2 = false;
				}
			}

			if (check2 && check) {
				if (PSSystem::spSysIF) {
					PSSystem::spSysIF->stopSoundSystem();
				}
				THPPlayerSetVolume(0, 120);
				setFlag(RESETFLAG_ResetInputEntered);
				mState = ResetState_Fadeout;
			} else {
				resetFlag(RESETFLAG_ResetInputEntered);
				resetFlag(RESETFLAG_DoResetToMenu);
				JUTGamePad::C3ButtonReset::sResetOccurred = false;
			}
		}
	}
}

/**
 * @note Address: 0x8042A12C
 * @note Size: 0x38
 */
bool ResetManager::updateStatusEffects()
{
	bool done = false;
	mFadeTimer += sys->mDeltaTime;
	if (mFadeTimer > 0.25f) {
		mFadeTimer = 0.25f;
		done       = true;
	}
	return done;
}

/**
 * @note Address: 0x8042A164
 * @note Size: 0x158
 */
void ResetManager::draw()
{
	if (mState != ResetState_Inactive && DVDGetDriveStatus() != DVD_STATE_FATAL_ERROR) {

		u16 w = JUTVideo::sManager->mRenderModeObj->fbWidth;
		u16 h = JUTVideo::sManager->mRenderModeObj->efbHeight;
		J2DOrthoGraph graf(0.0f, 0.0f, (f32)w, (f32)h, -1.0f, 1.0f);
		graf.setPort();

		f32 alpha = (mFadeTimer * 255.0f) / 0.25f;
		alpha     = (alpha >= 0.0f) ? alpha + 0.5f : alpha - 0.5f;

		J2DFillBox(0.0f, 0.0f, (f32)JUTVideo::sManager->mRenderModeObj->fbWidth, (f32)JUTVideo::sManager->mRenderModeObj->efbHeight,
		           JUtility::TColor(0, 0, 0, alpha));
	}
}

/**
 * @note Address: 0x8042A2BC
 * @note Size: 0x14
 */
bool ResetManager::isWritingMemoryCard() { return sys->mCardMgr->isFlag(Game::MemoryCard::MCMFLAG_IsWriting); }

/**
 * @note Address: 0x8042A2D0
 * @note Size: 0x44
 */
bool ResetManager::isSoundSystemStopped()
{
	if (!PSSystem::spSysIF) {
		return true;
	} else {
		return JAIBasic::checkAudioStopStatus() == 2;
	}
}
