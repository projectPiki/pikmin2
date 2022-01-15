#ifndef _GAME_PLAYDATA_H
#define _GAME_PLAYDATA_H
#include "types.h"

typedef struct PlayData;
struct PlayData {
	bool hasDope(int);
};
extern PlayData* playData;

#endif
