#ifndef _EBI_TMAINTITLEMGR_H
#define _EBI_TMAINTITLEMGR_H

#include "types.h"

// TODO: Everything.
namespace ebi {
struct TMainTitleMgr {

	// TODO: gameflow.cpp is gonna break! Section::title is broken
	u8 _00[0x2f70 - 0x1cc8]; // _00
};
} // namespace ebi

#endif
