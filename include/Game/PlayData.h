#ifndef _GAME_PLAYDATA_H
#define _GAME_PLAYDATA_H
#include "types.h"
namespace Game {
typedef struct PlayData;
struct PlayData {
	bool hasDope(int);
	int getDopeCount(int);
	void useDope(int);
	int getCurrentCourseIndex();
};
extern PlayData* playData;
} // namespace Game

#endif
