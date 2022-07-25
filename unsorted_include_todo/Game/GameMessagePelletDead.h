#ifndef _GAME_GAMEMESSAGEPELLETDEAD_H
#define _GAME_GAMEMESSAGEPELLETDEAD_H

/*
    __vt__Q24Game21GameMessagePelletDead:
    .4byte 0
    .4byte 0
    .4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
    .4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
    .4byte actVs__Q24Game21GameMessagePelletDeadFPQ24Game13VsGameSection
*/

namespace Game {
struct GameMessage {
	virtual void actCommon(BaseGameSection*);   // _08 (weak)
	virtual void actSingle(SingleGameSection*); // _0C (weak)
};
} // namespace Game

namespace Game {
struct GameMessagePelletDead : public GameMessage {
	virtual void actVs(VsGameSection*); // _10
};
} // namespace Game

#endif
