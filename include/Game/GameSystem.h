#ifndef _GAME_GAMESYSTEM_H
#define _GAME_GAMESYSTEM_H

#include "types.h"
#include "CNode.h"
#include "ObjectMgr.h"

struct Graphics;
struct JUTTexture;
struct Viewport;
namespace Game {
struct BaseGameSection;
struct TimeMgr;

#pragma enumalwaysint on
enum GameSystemMode {
	GSM_STORY_MODE = 0,
	GSM_VERSUS_MODE,
	GSM_ONE_PLAYER_CHALLENGE,
	GSM_TWO_PLAYER_CHALLENGE,
	GSM_PIKLOPEDIA
};
#pragma enumalwaysint reset
struct GameSystem : public NodeObjectMgr<GenericObjectMgr> {
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

	u8 _3C;                     // _3C /* bitfield */
	TimeMgr* m_timeMgr;         // _40
	GameSystemMode m_mode;      // _44
	u8 m_isInCaveMaybe;         // _48
	u8 _49;                     // _49
	bool m_isFrozen;            // _4A
	bool m_isPaused;            // _4B
	bool m_isPausedSoft;        // _4C
	bool m_isMoviePause;        // _4D
	u32 m_frameTimer;           // _50
	JUTTexture* m_xfbTexture;   // _54
	BaseGameSection* m_section; // _58
};

extern GameSystem* gameSystem;

} // namespace Game

#endif
