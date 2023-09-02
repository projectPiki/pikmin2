#ifndef _GAME_P2JST_OBJECTBASE_H
#define _GAME_P2JST_OBJECTBASE_H

#include "types.h"

namespace Game {
struct MoviePlayer;

namespace P2JST {

struct ObjectBase {
	ObjectBase(char const* name, MoviePlayer* movie)
	{
		mMoviePlayer = movie;
		mName        = name;
		mFlags       = 0;
		_14          = -1;
		_18          = nullptr;
		_1C          = 0;
	}

	virtual void reset()  = 0;                        // _08
	virtual void update() = 0;                        // _0C
	virtual void start()  = 0;                        // _10
	virtual void stop()   = 0;                        // _14
	virtual void parseUserData_(u32, const void*) { } // _18 (weak)

	MoviePlayer* mMoviePlayer; // _08
	char const* mName;         // _0C
	u32 mFlags;                // _10
	int _14;                   // _14
	const void* _18;           // _18
	u32 _1C;                   // _1C

	// _00 = VTBL
};

} // namespace P2JST
} // namespace Game

#endif
