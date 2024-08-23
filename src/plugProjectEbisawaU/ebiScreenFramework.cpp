#include "ebi/Screen/TScreenBase.h"

namespace ebi {
namespace Screen {
/**
 * @note Address: 0x803D3850
 * @note Size: 0x3C
 */
void TScreenBase::setArchive(JKRArchive* newArchive)
{
	if (mArchive == nullptr) {
		mArchive = newArchive;
		doSetArchive(newArchive);
	}
}

/**
 * @note Address: 0x803D3890
 * @note Size: 0x58
 */
bool TScreenBase::openScreen(ArgOpen* arg)
{
	if (mState == TSB_US_Finish) {
		doOpenScreen(arg);
		mState = TSB_US_Open;
		return true;
	}

	return false;
}

/**
 * @note Address: 0x803D38EC
 * @note Size: 0x58
 */
bool TScreenBase::closeScreen(ArgClose* arg)
{
	if (mState == TSB_US_Wait) {
		doCloseScreen(arg);
		mState = TSB_US_Close;
		return true;
	}

	return false;
}

/**
 * @note Address: 0x803D3948
 * @note Size: 0x40
 */
void TScreenBase::killScreen()
{
	doKillScreen();
	mState = TSB_US_Finish;
}

/**
 * @note Address: 0x803D3988
 * @note Size: 0x10
 */
u8 TScreenBase::isFinishScreen() { return mState == TSB_US_Finish; }

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
// unused function
u8 TScreenBase::isOpenScreen() { return mState == TSB_US_Open; }

/**
 * @note Address: 0x803D3998
 * @note Size: 0x14
 */
u8 TScreenBase::isWaitScreen() { return mState == TSB_US_Wait; }

/**
 * @note Address: 0x803D39AC
 * @note Size: 0x14
 */
u8 TScreenBase::isCloseScreen() { return mState == TSB_US_Close; }

/**
 * @note Address: 0x803D39C0
 * @note Size: 0xEC
 */
void TScreenBase::update()
{
	switch (mState) {
	case TSB_US_Open:
		if (doUpdateStateOpen()) {
			doInitWaitState();
			mState = TSB_US_Wait;
		}
		break;
	case TSB_US_Wait:
		if (doUpdateStateWait()) {
			closeScreen(nullptr);
		}
		break;
	case TSB_US_Close:
		if (doUpdateStateClose()) {
			killScreen();
		}
		break;
	case TSB_US_Finish:
		break;
	}
}

/**
 * @note Address: 0x803D3AC8
 * @note Size: 0x38
 */
void TScreenBase::draw()
{
	if (mState != TSB_US_Finish) {
		doDraw();
	}
}
} // namespace Screen
} // namespace ebi
