#ifndef _GAME_PELLETMGR_H
#define _GAME_PELLETMGR_H

#include "types.h"
#include "ObjectMgr.h"
#include "Game/GenericObjectMgr.h"

namespace Game {

struct PelletMgr : public NodeObjectMgr<GenericObjectMgr> {
	struct OtakaraItemCode {
		short m_value; // _00
	};
	void makeOtakaraItemCode(char*, OtakaraItemCode&);

	u8 _3C; // _3C
};

static PelletMgr* pelletMgr;

}; // namespace Game

#endif
