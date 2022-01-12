#include "Game/updateMgr.h"
#include "JSystem/JUT/JUTException.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F048
    lbl_8047F048:
        .4byte 0x75706461
        .4byte 0x74654D67
        .4byte 0x722E6370
        .4byte 0x70000000
    .global lbl_8047F058
    lbl_8047F058:
        .4byte 0x6D61696C
        .4byte 0x20746F20
        .4byte 0x5B25642D
        .4byte 0x25645D20
        .4byte 0x25640A00
        .4byte 0x00000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global collisionUpdateMgr__4Game
    collisionUpdateMgr__4Game:
        .skip 0x8
*/

namespace Game {

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
		if (m_mgr != nullptr) {
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

#if NOPE

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
	return (_10 - context->_04) == false;
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  lwz       r4, 0x4(r4)
	  lwz       r0, 0x10(r3)
	  sub       r0, r0, r4
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31
	  blr
	*/
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

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void UpdateMgr::balanceClient(UpdateContext*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void UpdateMgr::showInfo(Graphics&, int, int)
{
	// UNUSED FUNCTION
}
#endif
} // namespace Game
