#include "og/Screen/ContenaCounter.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/ogScreen.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80307B58
 * Size:	000090
 */
ContenaCounter::ContenaCounter(DispMemberContena* contena)
{
	mDisp       = contena;
	mInOnion    = &mDisp->mInOnion;
	mInTransfer = &mDisp->mInTransfer;
	mNewCount   = &mDisp->mNewInPartyNum;
	mOnField    = &mDisp->mOnMapMinusWild;
	mCounter1   = nullptr;
	mCounter2   = nullptr;
	mCounter3   = nullptr;
	mCounter4   = nullptr;
}

/*
 * --INFO--
 * Address:	80307BE8
 * Size:	000140
 */
void ContenaCounter::setblo(char* filename, JKRArchive* archive)
{
	set(filename, 0x1000000 | 0x40000, archive);

	OSInitFastCast();
	setAlphaScreen(this);
	setAlpha(255);

	mCounter1 = setCallBack_CounterRV(this, 'a_k1', mInOnion, 5, true, true, archive);
	mCounter2 = setCallBack_CounterRV(this, 'b_k1', mInTransfer, 4, false, true, archive);
	mCounter3 = setCallBack_CounterRV(this, 'c_k1', mNewCount, 4, true, true, archive);
	mCounter4 = setCallBack_CounterRV(this, 'd_k1', mOnField, 4, true, true, archive);
}

} // namespace Screen
} // namespace og
