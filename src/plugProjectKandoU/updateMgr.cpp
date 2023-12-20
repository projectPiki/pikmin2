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
    , _04(-1)
    , _09(false)
{
}

/**
 * updatable__Q24Game13UpdateContextFv
 * @note Address: 0x80196688
 * @note Size: 0x5C
 */
bool UpdateContext::updatable()
{
	if (_09) {
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
	if (_09 == false) {
		mgr->addClient(this);
	}
}

/**
 * @note Address: 0x80196720
 * @note Size: 0x58
 */
void UpdateContext::exit()
{
	if (_09 == false) {
		if (mMgr) {
			mMgr->removeClient(this);
			mMgr = nullptr;
		}
		_08 = false;
	}
}

/**
 * @note Address: 0x80196778
 * @note Size: 0x1C
 */
UpdateMgr::UpdateMgr()
{
	_08 = nullptr;
	_0C = nullptr;
	_00 = 0;
	_04 = 0;
	_10 = 0;
}

/**
 * update__Q24Game9UpdateMgrFv
 * @note Address: 0x80196794
 * @note Size: 0x24
 */
void UpdateMgr::update()
{
	int i = ++_10;
	if (i < _00) {
		return;
	}
	_10 = 0;
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
	return (u8)(context->_04 == _10);
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
	_00 = count;
	_08 = new int[count];
	_0C = new int[count];
	_04 = 0;
	_10 = 0;
	for (int i = 0; i < _00; i++) {
		_08[i] = nullptr;
		_0C[i] = nullptr;
	}
	_14 = 0;
}

/**
 * @note Address: 0x80196880
 * @note Size: 0xD0
 */
void UpdateMgr::addClient(UpdateContext* context)
{
	if (context->_04 != -1) {
		removeClient(context);
	}
	int v1                 = _00;
	int smallestValueIndex = -1;
	int smallestValue      = 10000;
	for (int i = 0; i < _00; i++) {
		if (_08[i] < smallestValue) {
			smallestValueIndex = i;
			smallestValue      = _08[i];
		}
	}
	if (smallestValueIndex != -1) {
		context->_04 = smallestValueIndex;
		_08[smallestValueIndex]++;
		if (context->_08) {
			_0C[smallestValueIndex]++;
		}
		_04++;
	}
}

/**
 * @note Address: 0x80196950
 * @note Size: 0xC8
 */
void UpdateMgr::removeClient(UpdateContext* context)
{
	int clientIDMaybe = context->_04;
	if (clientIDMaybe != -1) {
		JUT_ASSERTLINE(155, (clientIDMaybe >= 0 && clientIDMaybe < _00), "mail to [%d-%d] %d\n", 0, _00, clientIDMaybe);
		_08[context->_04]--;
		if (context->_08) {
			_0C[context->_04]--;
		}
		_04--;
		context->_04 = -1;
	}
}
} // namespace Game
