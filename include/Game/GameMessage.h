#ifndef _GAME_GAMEMESSAGE_H
#define _GAME_GAMEMESSAGE_H

#include "types.h"
#include "Vector3.h"

namespace Game {
struct BaseGameSection;
struct SingleGameSection;
struct VsGameSection;
struct Pellet;

struct GameMessage {
	virtual bool actCommon(BaseGameSection*);   // _08 (weak)
	virtual bool actSingle(SingleGameSection*); // _0C (weak)
	virtual bool actVs(VsGameSection*);         // _10 (weak)
};

struct GameMessagePelletBorn : public GameMessage {
	inline GameMessagePelletBorn(Pellet* pellet)
	    : m_pellet(pellet)
	{
	}

	virtual bool actVs(VsGameSection*); // _10

	Pellet* m_pellet; // _04
};

struct GameMessagePelletDead : public GameMessage {
	inline GameMessagePelletDead(Pellet* pellet)
	    : m_pellet(pellet)
	{
	}

	virtual bool actVs(VsGameSection*); // _10

	Pellet* m_pellet; // _04
};

struct GameMessageVsAddEnemy : public GameMessage {
	virtual bool actVs(VsGameSection*); // _10

	// _00      = VTABLE
	int _04; // _04
	int _08; // _08
};

struct GameMessageVsBattleFinished : public GameMessage {
	virtual bool actVs(VsGameSection*); // _10

	// _00      = VTABLE
	int _04; // _04
};

struct GameMessageVsBirthTekiTreasure : public GameMessage {
	virtual bool actVs(VsGameSection*); // _10

	Vector3f m_position; // _04
	int _10;             // _10
	bool _14;            // _14
};

struct GameMessageVsGetDoping : public GameMessage {
	virtual bool actVs(VsGameSection*); // _10

	// _00      = VTABLE
	int _04; // _04, player ID?
	int _08; // _08, spray type? 0 = bitter, 1 = spicy, maybe an enum?
};

struct GameMessageVsGetOtakara : public GameMessage {
	inline GameMessageVsGetOtakara(u32 onyonType)
	    : _04(onyonType)
	    , _08(1)
	{
	}

	virtual bool actVs(VsGameSection*); // _10

	// _00      = VTABLE
	u32 _04; // _04, onyon type according to ghidra, but that enum is meant to be a short
	int _08; // _08
};

struct GameMessageVsGotCard : public GameMessage {
	inline GameMessageVsGotCard(u32 onyonType)
	    : _04(onyonType)
	{
	}

	virtual bool actVs(VsGameSection*); // _10

	// _00      = VTABLE
	u32 _04; // _04, onyon type according to ghidra, but that enum is meant to be a short
};

struct GameMessageVsPikminDead : public GameMessage {
	virtual bool actVs(VsGameSection*); // _10
};

struct GameMessageVsRedOrSuckStart : public GameMessage {
	virtual bool actVs(VsGameSection*); // _10

	int _04; // _04
	u8 _08;  // _08 - unknown
};

struct GameMessageVsUseCard : public GameMessage {
	virtual bool actVs(VsGameSection*); // _10
};

} // namespace Game

#endif
