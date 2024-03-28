#ifndef _JSTUDIO_TPARSE_H
#define _JSTUDIO_TPARSE_H

#include "JSystem/JStudio/stb.h"
#include "JSystem/JStudio/TControl.h"
#include "JSystem/JStudio/fvb.h"

namespace JStudio {
struct TParse : public stb::TParse {
	TParse(JStudio::TControl*);
	virtual ~TParse();                                                   // _08
	virtual bool parseHeader(const stb::data::TParse_THeader&, u32);     // _14
	virtual bool parseBlock_block(const stb::data::TParse_TBlock&, u32); // _18

	bool parseBlock_block_fvb_(const JStudio::stb::data::TParse_TBlock&, u32);

	fvb::TParse mFvbParse; // _08
};
} // namespace JStudio

#endif
