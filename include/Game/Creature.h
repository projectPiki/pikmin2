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
	u8 _14;       // _14
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

struct Creature : public CellObject {
	struct CheckHellArg {
	};

	Creature();

	virtual Vector3f getPosition() = 0;                        // _00
	virtual void checkCollision(CellObject*);                  // _04
	virtual void getBoundingSphere(Sys::Sphere&) = 0;          // _08
	virtual bool collisionUpdatable();                         // _0C
	virtual bool isPiki();                                     // _10
	virtual bool isNavi();                                     // _14
	virtual bool deferPikiCollision();                         // _18
	virtual char* getTypeName();                               // _1C
	virtual u8 getObjType();                                   // _20
	virtual void constructor();                                // _24
	virtual void onInit(CreatureInitArg*);                     // _28
	virtual void onKill(CreatureKillArg*);                     // _2C
	virtual void onInitPost(CreatureInitArg*);                 // _30
	virtual void doAnimation();                                // _34
	virtual void doEntry();                                    // _38
	virtual void doSetView(int);                               // _3C
	virtual void doViewCalc();                                 // _40
	virtual void doSimulation(float);                          // _44
	virtual void doDirectDraw(Graphics&);                      // _48
	virtual float getBodyRadius();                             // _4C
	virtual float getCellRadius();                             // _50
	virtual void initPosition(Vector3f&);                      // _54
	virtual void onInitPosition(Vector3f&);                    // _58
	virtual float getFaceDir()            = 0;                 // _5C
	virtual void setVelocity(Vector3f&)   = 0;                 // _60
	virtual Vector3f getVelocity()        = 0;                 // _64
	virtual void onSetPosition(Vector3f&) = 0;                 // _68
	virtual void onSetPositionPost(Vector3f&);                 // _6C
	virtual void updateTrMatrix() = 0;                         // _70
	virtual bool isTeki();                                     // _74
	virtual bool isPellet();                                   // _78
	virtual void inWaterCallback(WaterBox*);                   // _7C
	virtual void outWaterCallback();                           // _80
	virtual bool inWater();                                    // _84
	virtual void getFlockMgr();                                // _88
	virtual void onStartCapture();                             // _8C
	virtual void onUpdateCapture(Matrixf&);                    // _90
	virtual void onEndCapture();                               // _94
	virtual bool isAtari();                                    // _98
	virtual void setAtari(bool);                               // _9C
	virtual bool isAlive();                                    // _A0
	virtual void setAlive(bool);                               // _A4
	virtual bool isCollisionFlick();                           // _A8
	virtual void setCollisionFlick(bool);                      // _AC
	virtual bool isMovieActor();                               // _B0
	virtual bool isMovieExtra();                               // _B4
	virtual bool isMovieMotion();                              // _B8
	virtual void setMovieMotion(bool);                         // _BC
	virtual bool isBuried();                                   // _C0
	virtual bool isFlying();                                   // _C4
	virtual bool isUnderground();                              // _C8
	virtual bool isLivingThing();                              // _CC
	virtual bool isDebugCollision();                           // _D0
	virtual void setDebugCollision(bool);                      // _D4
	virtual void doSave(Stream&);                              // _D8
	virtual void doLoad(Stream&);                              // _DC
	virtual void bounceCallback(Sys::Triangle*);               // _E0
	virtual void collisionCallback(CollEvent&);                // _E4
	virtual void platCallback(PlatEvent&);                     // _E8
	virtual void getJAIObject();                               // _EC
	virtual PSM::Creature* getPSCreature();                    // _F0
	virtual void getSound_AILOD();                             // _F4
	virtual Vector3f* getSound_PosPtr();                       // _F8
	virtual bool sound_culling();                              // _FC
	virtual float getSound_CurrAnimFrame();                    // _100
	virtual float getSound_CurrAnimSpeed();                    // _104
	virtual void on_movie_begin(bool);                         // _108
	virtual void on_movie_end(bool);                           // _10C
	virtual void movieStartAnimation(ulong);                   // _110
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*); // _114
	virtual void movieSetAnimationLastFrame();                 // _118
	virtual void movieSetTranslation(Vector3f&, float);        // _11C
	virtual void movieSetFaceDir(float);                       // _120
	virtual bool movieGotoPosition(Vector3f&);                 // _124
	virtual void movieUserCommand(ulong, MoviePlayer*);        // _128
	virtual void getShadowParam(ShadowParam&);                 // _12C
	virtual bool needShadow();                                 // _130
	virtual void getLifeGaugeParam(LifeGaugeParam&);           // _134
	virtual void getLODSphere(Sys::Sphere&);                   // _138
	virtual void getLODCylinder(Sys::Cylinder&);               // _13C
	virtual void startPick();                                  // _140
	virtual void endPick(bool);                                // _144
	virtual u32* getMabiki();                                  // _148
	virtual Footmarks* getFootmarks();                         // _14C
	virtual void onStickStart(Creature*);                      // _150
	virtual void onStickEnd(Creature*);                        // _154
	virtual void onStickStartSelf(Creature*);                  // _158
	virtual void onStickEndSelf(Creature*);                    // _15C
	virtual bool isSlotFree(short);                            // _160
	virtual int getFreeStickSlot();                            // _164
	virtual int getNearFreeStickSlot(Vector3f&);               // _168
	virtual int getRandomFreeStickSlot();                      // _16C
	virtual void onSlotStickStart(Creature*, short);           // _170
	virtual void onSlotStickEnd(Creature*, short);             // _174
	virtual void calcStickSlotGlobal(short, Vector3f&);        // _178
	virtual void getVelocityAt(Vector3f&, Vector3f&) = 0;      // _17C
	virtual void getAngularEffect(Vector3f&, Vector3f&);       // _180
	virtual void applyImpulse(Vector3f&, Vector3f&);           // _184
	virtual bool ignoreAtari(Creature*);                       // _188
	virtual void getSuckPos();                                 // _18C
	virtual void getGoalPos();                                 // _190
	virtual bool isSuckReady();                                // _194
	virtual bool isSuckArriveWait();                           // _198
	virtual void stimulate(Interaction&);                      // _19C
	virtual char* getCreatureName();                           // _1A0
	virtual s32 getCreatureID();                               // _1A4

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
	Parameters* m_parms;           // _0C0
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
	ushort m_objectTypeID;         // _128
	UpdateContext m_updateContext; // _12C
	Matrixf m_mainMatrix;          // _138
	Vector3f m_scale;              // _168 /* Not sure if just model scale. */
	SysShape::Model* m_model;      // _174
};
} // namespace Game

#endif
