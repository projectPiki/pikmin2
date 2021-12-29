#ifndef _GAME_GAMEMESSAGEPELLETBORN_H
#define _GAME_GAMEMESSAGEPELLETBORN_H

/*
    __vt__Q24Game21GameMessagePelletBorn:
    .4byte 0
    .4byte 0
    .4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
    .4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
    .4byte actVs__Q24Game21GameMessagePelletBornFPQ24Game13VsGameSection
*/

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
