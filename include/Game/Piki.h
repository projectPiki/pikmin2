#ifndef _GAME_PIKI_H
#define _GAME_PIKI_H

#include "types.h"

namespace Sys {
struct Sphere;
} // namespace Sys

namespace SysShape {
struct AnimInfo;
} // namespace SysShape

namespace PSGame {
namespace SeMgr {
	struct SetSeId;
} // namespace SeMgr
} // namespace PSGame

namespace Game {
struct Creature;
struct MoviePlayer;
struct WaterBox;
struct ShadowParam;
struct CreatureInitArg;
struct CreatureKillArg;
struct Interaction;

typedef enum EPikiColor {
	Blue    = 0,
	Red     = 1,
	Yellow  = 2,
	Purple  = 3,
	White   = 4,
	Bulbmin = 5,
	Carrot  = 6,
} EPikiColor;

typedef enum EPikiHappa {
	Leaf       = 0,
	Bud        = 1,
	Flower     = 2,
	Bud_Red    = 3,
	Flower_Red = 4,
} EPikiHappa;

struct StateArg {
	u16 _00[4];
};

struct PikiFSM {
	virtual void init(struct Game::Piki*);                   // _00
	virtual void start(Game::Piki*, int, Game::StateArg*);   // _04
	virtual void exec(Game::Piki*);                          // _08
	virtual void transit(Game::Piki*, int, Game::StateArg*); // _0C
};

struct Piki {
	u8 _00[0x28C];
	Game::PikiFSM* m_fsm; // _28C
	u8 _290[0x38];        // _290

	struct InvokeAIFreeArg {
	};

	Piki();
	void attachRadar(bool);
	void bounceCallback(Sys::Triangle*);
	void canVsBattle();
	void changeHappa(int);
	void changeShape(int);
	void checkInvokeAI(bool);
	void clearCurrAction();
	void clearDope();
	void collisionCallback(Game::CollEvent&);
	void deferPikiCollision();
	void do_updateLookCreature();
	void doAnimation();
	void doColorChange();
	void doDebugDL();
	void doDirectDraw(Graphics&);
	void doped();
	void extendDopeTime();
	void gasInvicible();
	void getAttackDamage();
	void getBaseScale();
	void getCreatureID();
	void getCreatureName();
	void getCurrAction();
	void getCurrActionID();
	void getDownfloorMass();
	void getFormationSlotID();
	void getJAIObject();
	void getLODSphere(Sys::Sphere&);
	void getPelletCarryPower();
	void getPSCreature();
	void getShadowParam(Game::ShadowParam&);
	void getSpeed(float);
	void getStateID();
	void getThrowHeight();
	void getVsBattlePiki();
	void graspSituation_Fast(Game::Creature**);
	void graspSituation(Game::Creature**);
	void ignoreAtari(Game::Creature*);
	void initColor();
	void invokeAI();
	void invokeAI(Game::CollEvent*, bool);
	void invokeAI(Game::PlatEvent*);
	void invokeAIFree(Game::Piki::InvokeAIFreeArg&);
	void inWaterCallback(Game::WaterBox*);
	void isAlive();
	void isMyPikmin(Game::Creature*);
	void isPikmin();
	void isTekiFollowAI();
	void isThrowable();
	void isWalking();
	void might_bury();
	void movieGotoPosition(Vector3<float>&);
	void movieSetTranslation(Vector3<float>&, float);
	void movieStartAnimation(unsigned long);
	void movieStartDemoAnimation(SysShape::AnimInfo*);
	void movieUserCommand(unsigned long, Game::MoviePlayer*);
	void on_movie_begin(bool);
	void on_movie_end(bool);
	void onInit(Game::CreatureInitArg*);
	void onKeyEvent(const SysShape::KeyEvent&);
	void onKill(Game::CreatureKillArg*);
	void onSetPosition();
	void onStickEndSelf(Game::Creature*);
	void onStickStartSelf(Game::Creature*);
	void outWaterCallback();
	void platCallback(Game::PlatEvent&);
	void setActTransportArg(PikiAI::ActTransportArg&);
	void setDopeEffect(bool);
	void setFreeLightEffect(bool);
	void setGasInvincible(unsigned char);
	void setPastel(bool);
	void setSpeed(float, Vector3<float>&, float);
	void setSpeed(float, Vector3<float>&);
	void setTekiKillID(int);
	void startDope(int);
	void startMotion(int, int, SysShape::MotionListener*,
	                 SysShape::MotionListener*);
	void startSound(Game::Creature*, unsigned long, bool);
	void startSound(Game::Creature*, unsigned long, PSGame::SeMgr::SetSeId);
	void startSound(unsigned long, bool);
	void startSound(unsigned long, PSGame::SeMgr::SetSeId);
	void stimulate(Game::Interaction&);
	void surviveDayEnd();
	void update();
	void updateGasInvincible();
	void wallCallback(Vector3<float>&);
};
} // namespace Game

#endif
