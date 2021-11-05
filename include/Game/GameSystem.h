#ifndef _GAME_GAMESYSTEM_H
#define _GAME_GAMESYSTEM_H

#include "types.h"

struct Graphics;
struct Viewport;
struct GenericObjectMgr;
template <typename T> struct TObjectNode;

namespace Game {
struct BaseGameSection;

struct GameSystem {
	GameSystem(Game::BaseGameSection*);
	~GameSystem();

	void addObjectMgr_reuse(TObjectNode<GenericObjectMgr>*);
	void addObjectMgr(GenericObjectMgr*);
	s32 calcFrameDist(int);
	void detachObjectMgr_reuse(GenericObjectMgr*);
	void detachObjectMgr(GenericObjectMgr*);
	void directDraw(Graphics&);
	void doAnimation();
	void doDirectDraw(Graphics&);
	void doEntry();
	void doSetView(int);
	void doSimpleDraw(Viewport*);
	void doSimulation(float);
	void doViewCalc();
	void endFrame();
	void getLightMgr();
	void init();
	void isZukanMode();
	void paused_soft();
	void paused();
	void setDrawBuffer(int);
	void setFrozen(bool, char*);
	void setMoviePause(bool, char*);
	void setPause(bool, char*, int);
	void startFadeblack();
	void startFadein(float);
	void startFadeout(float);
	void startFadeoutin(float);
	void startFadewhite();
	void startFrame();
	void startPause(bool, int, char*);

	u8 _00[0x50];                    // _00
	u32 m_frameTimer;                // _50
	struct JUTTexture* m_xfbTexture; // _54
};

extern GameSystem* gameSystem;

} // namespace Game

#endif
