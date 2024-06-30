#include "Game/updateMgr.h"
#include "JSystem/JUtility/JUTException.h"

namespace Game {

UpdateMgr* collisionUpdateMgr;

/**
 * @note Address: 0x80196670
 * @note Size: 0x18
 */
UpdateContext::UpdateContext()
    : mMgr(0)
    , mClientIndex(-1)
    , mDoForceActive(false)
{
}

/**
 * updatable__Q24Game13UpdateContextFv
 * @note Address: 0x80196688
 * @note Size: 0x5C
 */
bool UpdateContext::updatable()
{
	if (mDoForceActive) {
		return true;
	}

	if (mMgr == nullptr) {
		return false;
	}

	return !!mMgr->updatable(this);
}

/**
 * @note Address: 0x801966E4
 * @note Size: 0x3C
 */
void UpdateContext::init(UpdateMgr* mgr)
{
	mMgr = mgr;
	if (mDoForceActive == false) {
		mgr->addClient(this);
	}
}

/**
 * @note Address: 0x80196720
 * @note Size: 0x58
 */
void UpdateContext::exit()
{
	if (mDoForceActive == false) {
		if (mMgr) {
			mMgr->removeClient(this);
			mMgr = nullptr;
		}
		mIsActive = false;
	}
}

/**
 * @note Address: 0x80196778
 * @note Size: 0x1C
 */
UpdateMgr::UpdateMgr()
{
	mClientListA  = nullptr;
	mClientListB  = nullptr;
	mMaxClientId  = 0;
	mClientCount  = 0;
	mCurrentIndex = 0;
}

/**
 * update__Q24Game9UpdateMgrFv
 * @note Address: 0x80196794
 * @note Size: 0x24
 */
void UpdateMgr::update()
{
	int i = ++mCurrentIndex;

	if (i < mMaxClientId) {
		return;
	}

	mCurrentIndex = 0;
}

/**
 * updatable__Q24Game9UpdateMgrFPQ24Game13UpdateContext
 * @note Address: 0x801967B8
 * @note Size: 0x28
 */
bool UpdateMgr::updatable(UpdateContext* context)
{
	if (context == nullptr) {
		return false;
	}
	return (u8)(context->mClientIndex == mCurrentIndex);
}

/**
 * @note Address: 0x801967E0
 * @note Size: 0xA0
 */
void UpdateMgr::create(int count)
{
	if (count <= 0) {
		count = 1;
	}
	mMaxClientId  = count;
	mClientListA  = new int[count];
	mClientListB  = new int[count];
	mClientCount  = 0;
	mCurrentIndex = 0;
	for (int i = 0; i < mMaxClientId; i++) {
		mClientListA[i] = nullptr;
		mClientListB[i] = nullptr;
	}
	_14 = 0;
}

/**
 * @note Address: 0x80196880
 * @note Size: 0xD0
 */
void UpdateMgr::addClient(UpdateContext* context)
{
	if (context->mClientIndex != -1) {
		removeClient(context);
	}

	int smallestValueIndex = -1;
	int smallestValue      = 10000;

	for (int i = 0; i < mMaxClientId; i++) {
		if (mClientListA[i] < smallestValue) {
			smallestValueIndex = i;
			smallestValue      = mClientListA[i];
		}
	}

	if (smallestValueIndex != -1) {
		context->mClientIndex = smallestValueIndex;
		mClientListA[smallestValueIndex]++;
		if (context->mIsActive) {
			mClientListB[smallestValueIndex]++;
		}
		mClientCount++;
	}
}

/**
 * @note Address: 0x80196950
 * @note Size: 0xC8
 */
void UpdateMgr::removeClient(UpdateContext* context)
{
	int clientId = context->mClientIndex;
	if (clientId != -1) {
		JUT_ASSERTLINE(155, (clientId >= 0 && clientId < mMaxClientId), "mail to [%d-%d] %d\n", 0, mMaxClientId, clientId);

		mClientListA[context->mClientIndex]--;
		if (context->mIsActive) {
			mClientListB[context->mClientIndex]--;
		}

		mClientCount--;
		context->mClientIndex = -1;
	}
}
} // namespace Game
