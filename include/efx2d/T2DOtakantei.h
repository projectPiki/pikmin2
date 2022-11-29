#ifndef _EFX2D_T2DOTAKANTEI_H
#define _EFX2D_T2DOTAKANTEI_H

#include "types.h"
#include "efx2d/TForever.h"

namespace efx2d {
struct T2DOtakantei : public TForeverN {
	inline T2DOtakantei()
	    : TForeverN(5)
	{
		m_forevers[0].m_efxID = 0x1d;
		m_forevers[1].m_efxID = 0x1e;
		m_forevers[2].m_efxID = 0x1f;
		m_forevers[3].m_efxID = 0x20;
		m_forevers[4].m_efxID = 0x21;
	}
	// _00     = VTBL
	// _00-_0C = TForeverN
};
} // namespace efx2d

#endif
