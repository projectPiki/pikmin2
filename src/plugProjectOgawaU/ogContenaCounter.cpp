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
	m_contena        = contena;
	m_inOnionCount   = &m_contena->m_inOnionCount;
	_168             = &m_contena->_28;
	m_inSquadCount   = &m_contena->m_inSquadCount;
	m_onMapCount     = &m_contena->m_onMapCount;
	m_inOnionCounter = nullptr;
	_150             = nullptr;
	m_inSquadCounter = nullptr;
	m_onMapCounter   = nullptr;
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
	setAlpha(0xFF);

	m_inOnionCounter = setCallBack_CounterRV(this, 'a_k1', m_inOnionCount, 5, true, true, archive);
	_150             = setCallBack_CounterRV(this, 'b_k1', _168, 4, false, true, archive);
	m_inSquadCounter = setCallBack_CounterRV(this, 'c_k1', m_inSquadCount, 4, true, true, archive);
	m_onMapCounter   = setCallBack_CounterRV(this, 'd_k1', m_onMapCount, 4, true, true, archive);
}

} // namespace Screen
} // namespace og
