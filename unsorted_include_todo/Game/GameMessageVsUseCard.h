#ifndef _GAME_GAMEMESSAGEVSUSECARD_H
#define _GAME_GAMEMESSAGEVSUSECARD_H

/*
    __vt__Q24Game20GameMessageVsUseCard:
    .4byte 0
    .4byte 0
    .4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
    .4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
    .4byte actVs__Q24Game20GameMessageVsUseCardFPQ24Game13VsGameSection
*/

namespace Game {
struct GameMessage {
	virtual void actCommon(BaseGameSection*);   // _08 (weak)
	virtual void actSingle(SingleGameSection*); // _0C (weak)
};
} // namespace Game

namespace Game {
struct GameMessageVsUseCard : public GameMessage {
	virtual void actVs(VsGameSection*); // _10
};
} // namespace Game

#endif
