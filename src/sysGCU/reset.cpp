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

/*
 * --INFO--
 * Address:	80429DB0
 * Size:	0000C8
 */
ResetManager::ResetManager(f32 thres)
{
	JUTGamePad::C3ButtonReset::sThreshold = OS_TIMER_CLOCK * thres;

	// double check the flags are reset
	mFlags.clear();

	// TRIPLE check these flags are reset
	resetFlag(RESETFLAG_1);
	resetFlag(RESETFLAG_4);
	resetFlag(RESETFLAG_2);

	mState       = 0;
	mStatusTimer = 0.0f;
	mCounter     = 0;
}

/*
 * --INFO--
 * Address:	80429E78
 * Size:	0002B4
 */
void ResetManager::update()
{
	if (DVDGetDriveStatus() == -1)
		return;

	bool check = true;
	if (!isFlag(RESETFLAG_29) && !(sys->isDvdErrorOccured())) {
		check = false;
	}

	if ((int)mState != 0) {
		if (!isWritingMemoryCard() && isSoundSystemStopped() && !isFlag(RESETFLAG_2) && check) {
			switch (mState) {
			case 1:
				if (updateStatusEffects()) {
					mState = 2;
				}
				break;

			case 2:
				JUTGamePad::clearForReset();
				sys->deleteThreads();
				JFWDisplay::setForOSResetSystem();
				if (isFlag(RESETFLAG_4)) {
					OSResetSystem(true, 0, true);
				} else {
					*((u32*)DOL_ADDR_LIMIT)    = 'vald';
					*((u8*)DOL_ADDR_LIMIT + 4) = System::mRenderMode;
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

			if (isFlag(RESETFLAG_2)) {
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

		if ((JUTGamePad::C3ButtonReset::sResetOccurred || mFlags.isSet(1)) && !OSGetResetSwitchState()) {
			bool check2 = true;
			if (!isFlag(RESETFLAG_1)) {
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
				setFlag(RESETFLAG_1);
				mState = 1;
			} else {
				resetFlag(RESETFLAG_1);
				resetFlag(RESETFLAG_4);
				JUTGamePad::C3ButtonReset::sResetOccurred = false;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8042A12C
 * Size:	000038
 */
bool ResetManager::updateStatusEffects()
{
	bool check = false;
	mStatusTimer += sys->mDeltaTime;
	if (mStatusTimer > 0.25f) {
		mStatusTimer = 0.25f;
		check        = true;
	}
	return check;
}

/*
 * --INFO--
 * Address:	8042A164
 * Size:	000158
 */
void ResetManager::draw()
{
	if ((int)mState != 0 && DVDGetDriveStatus() != -1) {

		u16 w = JUTVideo::sManager->mRenderModeObj->fbWidth;
		u16 h = JUTVideo::sManager->mRenderModeObj->efbHeight;
		J2DOrthoGraph graf(0.0f, 0.0f, (f32)w, (f32)h, -1.0f, 1.0f);
		graf.setPort();

		f32 alpha = (mStatusTimer * 255.0f) / 0.25f;
		alpha     = (alpha >= 0.0f) ? alpha + 0.5f : alpha - 0.5f;

		J2DFillBox(0.0f, 0.0f, (f32)JUTVideo::sManager->mRenderModeObj->fbWidth, (f32)JUTVideo::sManager->mRenderModeObj->efbHeight,
		           JUtility::TColor(0, 0, 0, alpha));
	}
}

/*
 * --INFO--
 * Address:	8042A2BC
 * Size:	000014
 */
bool ResetManager::isWritingMemoryCard() { return sys->mCardMgr->mFlags.isSet(1); }

/*
 * --INFO--
 * Address:	8042A2D0
 * Size:	000044
 */
bool ResetManager::isSoundSystemStopped()
{
	if (!PSSystem::spSysIF) {
		return true;
	} else {
		return JAIBasic::checkAudioStopStatus() == 2;
	}
}
