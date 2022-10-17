#include "Game/updateMgr.h"
#include "JSystem/JUT/JUTException.h"

namespace Game {

UpdateMgr* collisionUpdateMgr;

/*
 * --INFO--
 * Address:	80196670
 * Size:	000018
 */
UpdateContext::UpdateContext()
    : m_mgr(0)
    , _04(-1)
    , _09(false)
{
}

/*
 * updatable__Q24Game13UpdateContextFv
 * --INFO--
 * Address:	80196688
 * Size:	00005C
 */
bool UpdateContext::updatable()
{
	if (_09) {
		return true;
	}

	if (m_mgr == nullptr) {
		return false;
	}

	return !!m_mgr->updatable(this);
}

/*
 * --INFO--
 * Address:	801966E4
 * Size:	00003C
 */
void UpdateContext::init(UpdateMgr* mgr)
{
	m_mgr = mgr;
	if (_09 == false) {
		mgr->addClient(this);
	}
}

/*
 * --INFO--
 * Address:	80196720
 * Size:	000058
 */
void UpdateContext::exit()
{
	if (_09 == false) {
		if (m_mgr) {
			m_mgr->removeClient(this);
			m_mgr = nullptr;
		}
		_08 = false;
	}
}

/*
 * --INFO--
 * Address:	80196778
 * Size:	00001C
 */
UpdateMgr::UpdateMgr(void)
{
	_08 = nullptr;
	_0C = nullptr;
	_00 = 0;
	_04 = 0;
	_10 = 0;
}

/*
 * update__Q24Game9UpdateMgrFv
 * --INFO--
 * Address:	80196794
 * Size:	000024
 */
void UpdateMgr::update(void)
{
	int i = ++_10;
	if (i < _00) {
		return;
	}
	_10 = 0;
}

/*
 * updatable__Q24Game9UpdateMgrFPQ24Game13UpdateContext
 * --INFO--
 * Address:	801967B8
 * Size:	000028
 */
bool UpdateMgr::updatable(UpdateContext* context)
{
	if (context == nullptr) {
		return false;
	}
	return (u8)(context->_04 == _10);
}

/*
 * --INFO--
 * Address:	801967E0
 * Size:	0000A0
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

/*
 * --INFO--
 * Address:	80196880
 * Size:	0000D0
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

/*
 * --INFO--
 * Address:	80196950
 * Size:	0000C8
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
