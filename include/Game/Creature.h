#ifndef _GAME_CREATURE_H
#define _GAME_CREATURE_H

#include "types.h"
#include "Game/AILOD.h"
#include "Game/cellPyramid.h"
#include "Game/updateMgr.h"
#include "Rect.h"
#include "SysShape/Animator.h"
#include "Vector3.h"

struct Graphics;
struct Matrixf;
struct CollPart;
struct CollTree;
struct Parameters;

namespace PSM {
struct Creature;
}

namespace Sys {
struct Triangle;
struct Sphere;
struct Cylinder;
} // namespace Sys

namespace SysShape {
struct AnimInfo;
}

namespace Game {
struct AILODParm;
struct CellObject;
struct CollEvent;
struct Footmarks;
struct Generator;
struct WaterBox;
struct ShadowParam;
struct CreatureInitArg;
struct CreatureKillArg;
struct MoviePlayer;
struct Interaction;
struct PlatEvent;

struct LifeGaugeParam {
	Vector3f _00; // _00
	float _0C;    // _0C
	float _10;    // _10
	bool _14;     // _14
};

enum CreatureFlags {
	CF_IS_ATARI           = 0x00000001,
	CF_IS_ALIVE           = 0x00000002,
	CF_IS_COLLISION_FLICK = 0x00000004,
	CF_IS_MOVIE_ACTOR     = 0x00000010,
	CF_IS_MOVIE_MOTION    = 0x00000020,
	CF_IS_MOVIE_EXTRA     = 0x00000040,
	CF_IS_DEBUG_COLLISION = 0x80000000
};

struct CreatureInitArg {
	virtual const char* getName() = 0; // _00
};

struct CreatureKillArg {
	virtual const char* getName() // _00
	{
		return "CreatureKillArg";
	}
};

struct Creature : public CellObject {
	struct CheckHellArg {
	};

	Creature();

	virtual bool collisionUpdatable();         // _0C
	virtual u16 getObjType();                  // _20
	virtual void constructor();                // _2C
	virtual void onInit(CreatureInitArg*);     // _30
	virtual void onKill(CreatureKillArg*);     // _34
	virtual void onInitPost(CreatureInitArg*); // _38
	virtual void doAnimation();                // _3C
	virtual void doEntry();                    // _40
	virtual void doSetView(int);               // _44
	virtual void doViewCalc();                 // _48
	virtual void doSimulation(float);          // _4C
	virtual void doDirectDraw(Graphics&);      // _50
	virtual float getBodyRadius();             // _54
	virtual float getCellRadius();             // _58
	virtual void initPosition(Vector3f&);      // _5C
	virtual void onInitPosition(Vector3f&);    // _60
	virtual float getFaceDir()            = 0; // _64
	virtual void setVelocity(Vector3f&)   = 0; // _68
	virtual Vector3f getVelocity()        = 0; // _6C
	virtual void onSetPosition(Vector3f&) = 0; // _70
	virtual void onSetPositionPost(Vector3f&); // _74
	virtual void updateTrMatrix() = 0;         // _78
	virtual bool isTeki();                     // _7C
	virtual bool isPellet();                   // _80
	virtual void inWaterCallback(WaterBox*);   // _84
	virtual void outWaterCallback();           // _88
	virtual bool inWater();                    // _8C
	virtual u32 getFlockMgr();                 // _90
	virtual void onStartCapture();             // _94
	virtual void onUpdateCapture(Matrixf&);    // _98
	virtual void onEndCapture();               // _9C
	virtual bool isAtari();                    // _A0
	virtual void setAtari(bool);               // _A4
	virtual bool isAlive();                    // _A8
	virtual void setAlive(bool);               // _AC
	virtual bool isCollisionFlick();           // _B0
	virtual void setCollisionFlick(bool);      // _B4
	virtual bool isMovieActor();               // _B8
	virtual bool isMovieExtra();               // _BC
	virtual bool isMovieMotion();              // _C0
	virtual void setMovieMotion(bool);         // _C4
	virtual bool isBuried();                   // _C8
	virtual bool isFlying();                   // _CC
	virtual bool isUnderground();              // _D0
	virtual bool isLivingThing();              // _D4
	virtual bool isDebugCollision();
	virtual void setDebugCollision(bool);
	virtual void doSave(Stream&);
	virtual void doLoad(Stream&);
	virtual void bounceCallback(Sys::Triangle*);
	virtual void collisionCallback(CollEvent&);
	virtual void platCallback(PlatEvent&);
	virtual void getJAIObject();
	virtual PSM::Creature* getPSCreature();
	virtual AILOD* getSound_AILOD();
	virtual Vector3f* getSound_PosPtr();
	virtual bool sound_culling();
	virtual float getSound_CurrAnimFrame();
	virtual float getSound_CurrAnimSpeed();
	virtual void on_movie_begin(bool);
	virtual void on_movie_end(bool);
	virtual void movieStartAnimation(u32);
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*);
	virtual void movieSetAnimationLastFrame();
	virtual void movieSetTranslation(Vector3f&, float);
	virtual void movieSetFaceDir(float);
	virtual bool movieGotoPosition(Vector3f&);
	virtual void movieUserCommand(u32, MoviePlayer*);
	virtual void getShadowParam(ShadowParam&);
	virtual bool needShadow();
	virtual void getLifeGaugeParam(LifeGaugeParam&);
	virtual void getLODSphere(Sys::Sphere&);
	virtual void getLODCylinder(Sys::Cylinder&);
	virtual void startPick();
	virtual void endPick(bool);
	virtual u32* getMabiki();
	virtual Footmarks* getFootmarks();
	virtual void onStickStart(Creature*);
	virtual void onStickEnd(Creature*);
	virtual void onStickStartSelf(Creature*);
	virtual void onStickEndSelf(Creature*);
	virtual bool isSlotFree(short);
	virtual int getFreeStickSlot();
	virtual int getNearFreeStickSlot(Vector3f&);
	virtual int getRandomFreeStickSlot();
	virtual void onSlotStickStart(Creature*, short);
	virtual void onSlotStickEnd(Creature*, short);
	virtual void calcStickSlotGlobal(short, Vector3f&);
	virtual void getVelocityAt(Vector3f&, Vector3f&) = 0;
	virtual float getAngularEffect(Vector3f&, Vector3f&);
	virtual void applyImpulse(Vector3f&, Vector3f&);
	virtual bool ignoreAtari(Creature*);
	virtual Vector3f getSuckPos();
	virtual Vector3f getGoalPos();
	virtual bool isSuckReady();
	virtual bool isSuckArriveWait();
	virtual void stimulate(Interaction&);
	virtual char* getCreatureName();
	virtual s32 getCreatureID(); // leave as s32 or matching breaks. unsure why.

	void applyAirDrag(float, float, float);
	void calcSphereDistance(Game::Creature*);
	void checkHell(CheckHellArg&);
	void checkWater(Game::WaterBox*, Sys::Sphere&);
	void clearCapture();
	void clearStick();
	void drawLODInfo(Graphics&, Vector3f&);
	void endCapture();
	void endStick();
	int getCellPikiCount();
	void getYVector(Vector3f&);
	void init(Game::CreatureInitArg*);
	void kill(Game::CreatureKillArg*);
	void load(Stream&, unsigned char);
	void movie_begin(bool);
	void movie_end(bool);
	void releaseAllStickers();
	void resolveOneColl(CollPart*, CollPart*, Vector3f&);
	void save(Stream&, unsigned char);
	void setPosition(Vector3f&, bool);
	void startCapture(Matrixf*);
	void startStick(Game::Creature*, CollPart*);
	void startStick(Game::Creature*, short);
	void startStickMouth(Game::Creature*, CollPart*);
	void updateCapture(Matrixf&);
	void updateCell();
	void updateLOD(Game::AILODParm&);
	void updateStick(Vector3f&);
	bool isStickTo();

	Matrixf* m_captureMatrix; // _0B8
	union {
		u8 byteView[4];
		// Use this with CreatureFlags.
		u32 intView;
		// The following bitfield is here for mod usage.
		// Vanilla seems to just use the previous 2 representations.
		// u32 m_isDebugCollision : 1, : 24, m_isMovieExtra : 1,
		//     m_isMovieMotion : 1, m_isMovieActor : 1, padding2 : 1,
		//     m_isCollisionFlick : 1, m_isAlive : 1, m_isAtari : 1;
	} m_flags;                     // _0BC
	void* m_parms;                 // _0C0
	Generator* m_generator;        // _0C4
	int _0C8;                      // _0C8
	Vector3f m_collisionPosition;  // _0CC
	AILOD m_lod;                   // _0D8
	int m_cellLayerIndex;          // _0DC
	Recti m_cellRect;              // _0E0
	Creature* m_sticked;           // _0F0
	Creature* m_sticker;           // _0F4
	CollPart* _0F8;                // _0F8
	Creature* m_captured;          // _0FC
	Creature* m_capture;           // _100
	Vector3f _104;                 // _104
	short m_hasStick;              // _110
	CollTree* m_collTree;          // _114
	float _118;                    // _118
	Vector3f _11C;                 // _11C
	u16 m_objectTypeID;            // _128
	UpdateContext m_updateContext; // _12C
	Matrixf m_mainMatrix;          // _138
	Vector3f m_scale;              // _168 /* Not sure if just model scale. */
	SysShape::Model* m_model;      // _174
};
} // namespace Game

#endif
