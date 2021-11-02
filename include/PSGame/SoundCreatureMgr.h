#ifndef _PSGAME_SOUNDCREATUREMGR_H
#define _PSGAME_SOUNDCREATUREMGR_H

#include "types.h"

struct J3DAnmBase;

namespace PSGame {
class SoundCreatureMgr {
public:
	void registerAnime(J3DAnmBase*, const char*);
};
} // namespace PSGame

#endif
