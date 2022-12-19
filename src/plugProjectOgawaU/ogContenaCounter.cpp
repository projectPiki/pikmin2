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
	m_disp       = contena;
	m_inOnion    = &m_disp->m_inOnion;
	m_inTransfer = &m_disp->m_inTransfer;
	m_newCount   = &m_disp->m_newInPartyNum;
	m_onField    = &m_disp->m_onMapMinusWild;
	m_counter1   = nullptr;
	m_counter2   = nullptr;
	m_counter3   = nullptr;
	m_counter4   = nullptr;
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

	m_counter1 = setCallBack_CounterRV(this, 'a_k1', m_inOnion, 5, true, true, archive);
	m_counter2 = setCallBack_CounterRV(this, 'b_k1', m_inTransfer, 4, false, true, archive);
	m_counter3 = setCallBack_CounterRV(this, 'c_k1', m_newCount, 4, true, true, archive);
	m_counter4 = setCallBack_CounterRV(this, 'd_k1', m_onField, 4, true, true, archive);
}

} // namespace Screen
} // namespace og
