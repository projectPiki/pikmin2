#ifndef _JSTUDIO_TPARSE_H
#define _JSTUDIO_TPARSE_H

#include "JStudio/stb.h"
#include "JStudio/TControl.h"
#include "JSystem/fvb/fvb.h"

namespace JStudio {
struct TParse : public stb::TParse {
	TParse(JStudio::TControl*);
	virtual ~TParse();                                                             // _08
	virtual bool parseHeader(const stb::data::TParse_THeader&, unsigned long);     // _14
	virtual void parseBlock_block(const stb::data::TParse_TBlock&, unsigned long); // _18

	void parseBlock_block_fvb_(const JStudio::stb::data::TParse_TBlock&, unsigned long);

	fvb::TParse m_fvbParse; // _08
};
} // namespace JStudio

#endif
