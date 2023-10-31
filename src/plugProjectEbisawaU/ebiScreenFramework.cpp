#include "ebi/Screen/TScreenBase.h"

namespace ebi {
namespace Screen {
/*
 * --INFO--
 * Address:	803D3850
 * Size:	00003C
 */
void TScreenBase::setArchive(JKRArchive* newArchive)
{
	if (mArchive == nullptr) {
		mArchive = newArchive;
		doSetArchive(newArchive);
	}
}

/*
 * --INFO--
 * Address:	803D3890
 * Size:	000058
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

/*
 * --INFO--
 * Address:	803D38EC
 * Size:	000058
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

/*
 * --INFO--
 * Address:	803D3948
 * Size:	000040
 */
void TScreenBase::killScreen()
{
	doKillScreen();
	mState = TSB_US_Finish;
}

/*
 * --INFO--
 * Address:	803D3988
 * Size:	000010
 */
u8 TScreenBase::isFinishScreen() { return mState == TSB_US_Finish; }

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
// unused function
u8 TScreenBase::isOpenScreen() { return mState == TSB_US_Open; }

/*
 * --INFO--
 * Address:	803D3998
 * Size:	000014
 */
u8 TScreenBase::isWaitScreen() { return mState == TSB_US_Wait; }

/*
 * --INFO--
 * Address:	803D39AC
 * Size:	000014
 */
u8 TScreenBase::isCloseScreen() { return mState == TSB_US_Close; }

/*
 * --INFO--
 * Address:	803D39C0
 * Size:	0000EC
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
	default:
		break;
	}
}

/*
 * --INFO--
 * Address:	803D3AC8
 * Size:	000038
 */
void TScreenBase::draw()
{
	if (mState != TSB_US_Finish) {
		doDraw();
	}
}
} // namespace Screen
} // namespace ebi
