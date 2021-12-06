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
	GSM_PIKLOPEDIA,
	GSM_FORCE_UINT = 0xFFFFFFFF
};
#pragma enumalwaysint reset
struct GameSystem : public NodeObjectMgr<GenericObjectMgr> {
	GameSystem(Game::BaseGameSection*);
	// vtable 1
	virtual ~GameSystem(); // _00
	// vtable 2
	virtual void doAnimation();           // _00
	virtual void doEntry();               // _04
	virtual void doSetView(int);          // _08
	virtual void doViewCalc();            // _0C
	virtual void doSimulation(float);     // _10
	virtual void doDirectDraw(Graphics&); // _14
	virtual void doSimpleDraw(Viewport*); // _18
	virtual void loadResources();         // _1C
	virtual void resetMgr();              // _20
	virtual bool pausable();              // _24
	virtual bool frozenable();            // _28
	virtual u32 getMatrixLoadType();      // _2C
	virtual void startFrame();            // _78
	virtual void endFrame();              // _7C
	virtual void directDraw(Graphics&);   // _84
	virtual void startFadeout(float);     // _88
	virtual void startFadein(float);      // _8C
	virtual void startFadeoutin(float);   // _90
	virtual void startFadeblack();        // _94
	virtual void startFadewhite();        // _98

	void addObjectMgr_reuse(TObjectNode<GenericObjectMgr>*);
	void addObjectMgr(GenericObjectMgr*);
	s32 calcFrameDist(int);
	void detachObjectMgr_reuse(GenericObjectMgr*);
	void detachObjectMgr(GenericObjectMgr*);
	void getLightMgr();
	void init();
	void isZukanMode();
	void paused_soft();
	void paused();
	void setDrawBuffer(int);
	void setFrozen(bool, char*);
	void setMoviePause(bool, char*);
	void setPause(bool, char*, int);
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
