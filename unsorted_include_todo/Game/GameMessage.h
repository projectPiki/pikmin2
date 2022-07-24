#ifndef _GAME_GAMEMESSAGE_H
#define _GAME_GAMEMESSAGE_H

/*
    __vt__Q24Game11GameMessage:
    .4byte 0
    .4byte 0
    .4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
    .4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
    .4byte actVs__Q24Game11GameMessageFPQ24Game13VsGameSection
*/

namespace Game {
struct GameMessage {
	virtual void actCommon(BaseGameSection*);   // _08 (inline)
	virtual void actSingle(SingleGameSection*); // _0C (inline)
	virtual void actVs(VsGameSection*);         // _10 (inline)
};
} // namespace Game

#endif
