#ifndef _GAME_ENEMYPARMSBASE_H
#define _GAME_ENEMYPARMSBASE_H

#include "types.h"

struct JKRArchive;
struct Stream;

namespace Game {
struct EnemyParmsBase {
	bool loadSettingFile(JKRArchive* archive, char* name);
	void setDebugParm(u32);
	void resetDebugParm(u32);

	u8 _BaseClass[0xD8];
	virtual void read(Stream&);

	u16 _DC; // _DC
	u16 _DE; // _DE
};
} // namespace Game

#endif
