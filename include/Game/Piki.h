#ifndef _GAME_PIKI_H
#define _GAME_PIKI_H

#include "Game/FakePiki.h"
#include "JSystem/JUtility.h"
#include "types.h"

namespace efx {
struct Context;
struct TPkEffect;
} // namespace efx

namespace PikiAI {
struct Brain;
struct ActTransportArg;
} // namespace PikiAI

namespace PSM {
struct Piki;
} // namespace PSM

namespace Sys {
struct Sphere;
} // namespace Sys

namespace SysShape {
struct AnimInfo;
struct Joint;
} // namespace SysShape

namespace PSGame {
namespace SeMgr {
	struct SetSeId;
} // namespace SeMgr
} // namespace PSGame

namespace Game {
struct Navi;
struct MoviePlayer;
struct WaterBox;
struct ShadowParam;
struct CreatureInitArg;
struct CreatureKillArg;
struct Interaction;
struct Piki;
struct PikiState;
struct StateArg;

typedef enum EPikiColor {
	Blue    = 0,
	Red     = 1,
	Yellow  = 2,
	Purple  = 3,
	White   = 4,
	Bulbmin = 5,
	Carrot  = 6,
	PikiColorCount,
} EPikiColor;

typedef enum EPikiHappa {
	Leaf       = 0,
	Bud        = 1,
	Flower     = 2,
	Bud_Red    = 3,
	Flower_Red = 4,
} EPikiHappa;

struct PikiFSM {
	virtual void init(Game::Piki*);                          // _00
	virtual void start(Game::Piki*, int, Game::StateArg*);   // _04
	virtual void exec(Game::Piki*);                          // _08
	virtual void transit(Game::Piki*, int, Game::StateArg*); // _0C
};

struct Piki : public FakePiki {
	struct InvokeAIFreeArg {
	};

	Piki();

	// vtable 1 (Creature)
	virtual bool deferPikiCollision();                          // _18
	virtual void onInit(CreatureInitArg*);                      // _28
	virtual void onKill(CreatureKillArg*);                      // _2C
	virtual void doAnimation();                                 // _34
	virtual void doDirectDraw(Graphics&);                       // _48
	virtual void inWaterCallback(WaterBox*);                    // _7C
	virtual void outWaterCallback();                            // _80
	virtual bool isAlive();                                     // _A0
	virtual void bounceCallback(Sys::Triangle*);                // _E0
	virtual void collisionCallback(CollEvent&);                 // _E4
	virtual void platCallback(PlatEvent&);                      // _E8
	virtual void getJAIObject();                                // _EC
	virtual PSM::Creature* getPSCreature();                     // _F0
	virtual void on_movie_begin(bool);                          // _108
	virtual void on_movie_end(bool);                            // _10C
	virtual void movieStartAnimation(u32);                    // _110
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*);  // _114
	virtual void movieSetTranslation(Vector3f&, float);         // _11C
	virtual bool movieGotoPosition(Vector3f&);                  // _124
	virtual void movieUserCommand(unsigned long, MoviePlayer*); // _128
	virtual void getShadowParam(ShadowParam&);                  // _12C
	virtual void getLODSphere(Sys::Sphere&);                    // _138
	virtual void onStickStartSelf(Creature*);                   // _158
	virtual void onStickEndSelf(Creature*);                     // _15C
	virtual bool ignoreAtari(Creature*);                        // _188
	virtual void stimulate(Interaction&);                       // _19C
	virtual char* getCreatureName();                            // _1A0
	virtual s32 getCreatureID();                                // _1A4
	// vtable 2 (MotionListener + FakePiki + self)
	virtual int getDownfloorMass();       // _1B4
	virtual bool isPikmin();              // _1B8
	virtual void doColorChange();         // _1BC
	virtual void doDebugDL();             // _1C0
	virtual void update();                // _1C4
	virtual void wallCallback(Vector3f&); // _1FC
	virtual void startMotion(int, int, SysShape::MotionListener*,
	                         SysShape::MotionListener*); // _200
	virtual void onKeyEvent(const SysShape::KeyEvent&);  // _204
	virtual void do_updateLookCreature();                // _20C
	virtual void onSetPosition();                        // _210
	virtual bool isWalking();                            // _214

	void attachRadar(bool);
	bool canVsBattle();
	void changeHappa(int);
	void changeShape(int);
	void checkInvokeAI(bool);
	void clearCurrAction();
	void clearDope();
	bool doped();
	void extendDopeTime();
	bool gasInvicible();
	void getAttackDamage();
	float getBaseScale();
	void getCurrAction();
	int getCurrActionID();
	int getFormationSlotID();
	void getPelletCarryPower();
	void getSpeed(float);
	int getStateID();
	float getThrowHeight();
	void getVsBattlePiki();
	void graspSituation_Fast(Game::Creature**);
	void graspSituation(Game::Creature**);
	void initColor();
	void invokeAI();
	void invokeAI(Game::CollEvent*, bool);
	void invokeAI(Game::PlatEvent*);
	void invokeAIFree(Game::Piki::InvokeAIFreeArg&);
	bool isMyPikmin(Game::Creature*);
	bool isTekiFollowAI();
	bool isThrowable();
	void might_bury();
	void setActTransportArg(PikiAI::ActTransportArg&);
	void setDopeEffect(bool);
	void setFreeLightEffect(bool);
	void setGasInvincible(u8);
	void setPastel(bool);
	void setSpeed(float, Vector3f&, float);
	void setSpeed(float, Vector3f&);
	void setTekiKillID(int);
	void startDope(int);
	void startSound(Game::Creature*, u32, bool);
	void startSound(Game::Creature*, u32, PSGame::SeMgr::SetSeId);
	void startSound(u32, bool);
	void startSound(u32, PSGame::SeMgr::SetSeId);
	void surviveDayEnd();
	void updateGasInvincible();
	void updateDope();
	void updateColor();

	// FakePiki: _000 - _24C
	PSM::Piki* m_soundObj;          // _250
	float m_targetLookAngle;        // _254
	efx::TPkEffect* m_effectsObj;   // _258
	Vector3f _25C;                  // _25C
	SysShape::Joint* m_happaJoint3; // _268
	Vector3f _26C;                  // _26C
	SysShape::Joint* m_happaJoint1; // _278
	efx::Context* m_effectsContext; // _27C
	u8 _280[4];                     // _280
	short m_isDoped;                // _284
	float m_dopeTime;               // _288
	PikiFSM* m_fsm;                 // _28C
	PikiState* m_currentState;      // _290
	PikiAI::Brain* m_brain;         // _294
	UpdateContext m_updateContext;  // _298
	short m_tekiKillID;             // _2A4
	u8 m_gasInvincible;          // _2A6
	JUtility::TColor _2A7;          // _2A7
	JUtility::TColor _2AB;          // _2AB
	JUtility::TColor m_pikiColor;   // _2AF
	float m_colorFloat;             // _2B4
	u8 m_pikminType;                // _2B8
	u8 m_pikminGrowth;              // _2B9
	u32 m_leafModel;                // _2BC
	int m_mgrIndex;                 // _2C0
	Navi* m_navi;                   // _2C4
};
} // namespace Game

#endif
