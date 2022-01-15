#ifndef _GAME_PLAYDATA_H
#define _GAME_PLAYDATA_H
#include "types.h"

typedef struct PlayData;
struct PlayData {
	bool hasDope(int);
	int getDopeCount(int);
	void useDope(int);
};
extern PlayData* playData;

#endif
