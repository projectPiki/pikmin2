#ifndef _GAME_PELLETMGR_H
#define _GAME_PELLETMGR_H

#include "types.h"
#include "ObjectMgr.h"
#include "GenericObjectMgr.h"

namespace Game {
struct BasePelletMgr;
struct Pellet;
struct PelletInitArg;

struct PelletMgr : public NodeObjectMgr<GenericObjectMgr> {
	struct OtakaraItemCode {
		OtakaraItemCode(s16 v)
		    : m_value(v)
		{
		}
		s16 m_value; // _00
	};

	// vtable 1
	virtual void doAnimation();           // _64 (weak)
	virtual void doEntry();               // _68 (weak)
	virtual void doSetView(int);          // _6C (weak)
	virtual void doViewCalc();            // _70 (weak)
	virtual void doSimulation(float);     // _74 (weak)
	virtual void doDirectDraw(Graphics&); // _78 (weak)
	virtual void getMgrName();            // _80 (weak)
	virtual void getCaveName(int);        // _84
	virtual void getCaveID(char*);        // _88
	virtual void doSimpleDraw(Viewport*); // _8C (weak)

	void setMovieDraw(bool);
	PelletMgr();
	void createManagers(unsigned long);
	void resetMgrs();
	void setupResources();
	void birth(Game::PelletInitArg*);
	void setUse(Game::PelletInitArg*);
	void makePelletInitArg(Game::PelletInitArg&, char*);
	void makeVsCarryMinMax(Game::PelletInitArg&, char*);
	void makePelletInitArg(Game::PelletInitArg&, Game::PelletMgr::OtakaraItemCode&);
	void makeOtakaraItemCode(char*, Game::PelletMgr::OtakaraItemCode&);
	void addMgr(Game::BasePelletMgr*);
	void setupSoundViewerAndBas();
	void decode(long, unsigned char&, int&);
	void encode(unsigned char, int);
	void getMgrByID(unsigned char);

	u8 _3C; // _3C
};

struct PelletIterator {
	PelletIterator();

	void first();
	bool isDone();
	void next();
	Pellet* operator*();
	void setFirst();
};

static PelletMgr* pelletMgr;

}; // namespace Game

#endif
