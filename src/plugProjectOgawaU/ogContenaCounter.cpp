#include "og/Screen/ContenaCounter.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/ogScreen.h"

namespace og {
namespace Screen {

/**
 * @note Address: 0x80307B58
 * @note Size: 0x90
 */
ContenaCounter::ContenaCounter(DispMemberContena* contena)
{
	mDisp              = contena;
	mInOnion           = &mDisp->mDataContena.mInOnionCount;
	mInTransfer        = &mDisp->mDataContena.mInTransfer;
	mInSquad           = &mDisp->mDataContena.mInSquadCount;
	mOnField           = &mDisp->mDataContena.mOnMapCount;
	mInOnionCounter    = nullptr;
	mInTransferCounter = nullptr;
	mInSquadCounter    = nullptr;
	mOnFieldCounter    = nullptr;
}

/**
 * @note Address: 0x80307BE8
 * @note Size: 0x140
 */
void ContenaCounter::setblo(char* filename, JKRArchive* archive)
{
	set(filename, 0x1000000 | 0x40000, archive);

	OSInitFastCast();
	setAlphaScreen(this);
	setAlpha(255);

	mInOnionCounter    = setCallBack_CounterRV(this, 'a_k1', mInOnion, 5, true, true, archive); // room for 5 digits in onion count
	mInTransferCounter = setCallBack_CounterRV(this, 'b_k1', mInTransfer, 4, false, true,
	                                           archive); // room for 4 digits in transfer count (3 + buffer space)
	mInSquadCounter
	    = setCallBack_CounterRV(this, 'c_k1', mInSquad, 4, true, true, archive); // room for 4 digits in squad count (3 + buffer space)
	mOnFieldCounter
	    = setCallBack_CounterRV(this, 'd_k1', mOnField, 4, true, true, archive); // room for 4 digits in field count (3 + buffer space)
}

} // namespace Screen
} // namespace og
