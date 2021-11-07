#ifndef _GAME_GAMEMESSAGEPELLETBORN_H
#define _GAME_GAMEMESSAGEPELLETBORN_H

namespace Game {
struct GameMessage {
	virtual void actCommon(BaseGameSection*);   // _00
	virtual void actSingle(SingleGameSection*); // _04

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct GameMessagePelletBorn : public GameMessage {
	virtual void actCommon(BaseGameSection*);   // _00
	virtual void actSingle(SingleGameSection*); // _04
	virtual void actVs(VsGameSection*);         // _08

	// _00 VTBL
};
} // namespace Game

#endif
