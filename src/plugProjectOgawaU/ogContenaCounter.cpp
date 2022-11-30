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
	m_contena = contena;
	_164      = &m_contena->m_inOnion;
	_168      = &m_contena->_28;
	_16C      = &m_contena->m_inParty;
	_170      = &m_contena->m_onMapMinusWild;
	_14C      = nullptr;
	_150      = nullptr;
	_154      = nullptr;
	_158      = nullptr;
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

	_14C = setCallBack_CounterRV(this, 'a_k1', _164, 5, true, true, archive);
	_150 = setCallBack_CounterRV(this, 'b_k1', _168, 4, false, true, archive);
	_154 = setCallBack_CounterRV(this, 'c_k1', _16C, 4, true, true, archive);
	_158 = setCallBack_CounterRV(this, 'd_k1', _170, 4, true, true, archive);
}

} // namespace Screen
} // namespace og
