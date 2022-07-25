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

namespace JAInter {
struct Object;
} // namespace JAInter

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
struct Creature;
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
	Vector3f m_position;      // _00
	float m_healthPercentage; // _0C
	float _10;                // _10
	bool _14;                 // _14
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

struct CreatureKillArg {
	inline CreatureKillArg(int p1)
	    : _04(p1)
	{
	}
	virtual const char* getName() // _00
	{
		return "CreatureKillArg";
	}

	int _04; // _04
};

struct Creature : public CellObject {
	struct CheckHellArg {
		bool _00; // _00
	};

	virtual void checkCollision(CellObject*);    // _0C
	virtual bool collisionUpdatable();           // _14 (inline)
	virtual bool isPiki();                       // _18
	virtual bool isNavi();                       // _1C
	virtual char* getTypeName();                 // _24
	virtual u16 getObjType();                    // _28 (inline)
	virtual void constructor();                  // _2C (inline)
	virtual void onInit(CreatureInitArg*);       // _30 (inline)
	virtual void onKill(CreatureKillArg*);       // _34 (inline)
	virtual void onInitPost(CreatureInitArg*);   // _38 (inline)
	virtual void doAnimation();                  // _3C
	virtual void doEntry();                      // _40
	virtual void doSetView(int);                 // _44
	virtual void doViewCalc();                   // _48
	virtual void doSimulation(float);            // _4C (inline)
	virtual void doDirectDraw(Graphics&);        // _50 (inline)
	virtual float getBodyRadius();               // _54
	virtual float getCellRadius();               // _58
	virtual void initPosition(Vector3f&);        // _5C
	virtual void onInitPosition(Vector3f&);      // _60 (inline)
	virtual float getFaceDir()            = 0;   // _64
	virtual void setVelocity(Vector3f&)   = 0;   // _68
	virtual Vector3f getVelocity()        = 0;   // _6C
	virtual void onSetPosition(Vector3f&) = 0;   // _70
	virtual void onSetPositionPost(Vector3f&);   // _74 (inline)
	virtual void updateTrMatrix() = 0;           // _78
	virtual bool isTeki();                       // _7C
	virtual bool isPellet();                     // _80
	virtual void inWaterCallback(WaterBox*);     // _84 (inline)
	virtual void outWaterCallback();             // _88 (inline)
	virtual bool inWater();                      // _8C (inline)
	virtual u32 getFlockMgr();                   // _90 (inline)
	virtual void onStartCapture();               // _94 (inline)
	virtual void onUpdateCapture(Matrixf&);      // _98 (inline)
	virtual void onEndCapture();                 // _9C (inline)
	virtual bool isAtari();                      // _A0 (inline)
	virtual void setAtari(bool);                 // _A4 (inline)
	virtual bool isAlive();                      // _A8 (inline)
	virtual void setAlive(bool);                 // _AC (inline)
	virtual bool isCollisionFlick();             // _B0 (inline)
	virtual void setCollisionFlick(bool);        // _B4 (inline)
	virtual bool isMovieActor();                 // _B8 (inline)
	virtual bool isMovieExtra();                 // _BC (inline)
	virtual bool isMovieMotion();                // _C0 (inline)
	virtual void setMovieMotion(bool);           // _C4 (inline)
	virtual bool isBuried();                     // _C8 (inline)
	virtual bool isFlying();                     // _CC (inline)
	virtual bool isUnderground();                // _D0 (inline)
	virtual bool isLivingThing();                // _D4 (inline)
	virtual bool isDebugCollision();             // _D8 (inline)
	virtual void setDebugCollision(bool);        // _DC (inline)
	virtual void doSave(Stream&);                // _E0 (inline)
	virtual void doLoad(Stream&);                // _E4 (inline)
	virtual void bounceCallback(Sys::Triangle*); // _E8 (inline)
	virtual void collisionCallback(CollEvent&);  // _EC (inline)
	virtual void platCallback(PlatEvent&);       // _F0 (inline)
	/**
	 * @reifiedAddress{80124228}
	 * @reifiedFile{plugProjectYamashitaU/farmMgr.cpp}
	 */
	virtual JAInter::Object* getJAIObject() { return nullptr; } // _F4 (inline)
	virtual PSM::Creature* getPSCreature();                     // _F8 (inline)
	virtual AILOD* getSound_AILOD();                            // _FC (inline)
	virtual Vector3f* getSound_PosPtr();                        // _100 (inline)
	virtual bool sound_culling();                               // _104
	virtual float getSound_CurrAnimFrame();                     // _108 (inline)
	virtual float getSound_CurrAnimSpeed();                     // _10C (inline)
	virtual void on_movie_begin(bool);                          // _110 (inline)
	virtual void on_movie_end(bool);                            // _114 (inline)
	virtual void movieStartAnimation(unsigned long);            // _118 (inline)
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*);  // _11C (inline)
	virtual void movieSetAnimationLastFrame();                  // _120 (inline)
	virtual void movieSetTranslation(Vector3f&, float);         // _124 (inline)
	virtual void movieSetFaceDir(float);                        // _128 (inline)
	virtual bool movieGotoPosition(Vector3f&);                  // _12C (inline)
	virtual void movieUserCommand(unsigned long, MoviePlayer*); // _130 (inline)
	virtual void getShadowParam(ShadowParam&);                  // _134
	virtual bool needShadow();                                  // _138
	virtual void getLifeGaugeParam(LifeGaugeParam&);            // _13C
	virtual void getLODSphere(Sys::Sphere&);                    // _140 (inline)
	virtual void getLODCylinder(Sys::Cylinder&);                // _144 (inline)
	virtual void startPick();                                   // _148 (inline)
	virtual void endPick(bool);                                 // _14C (inline)
	virtual u32* getMabiki();                                   // _150 (inline)
	virtual Footmarks* getFootmarks();                          // _154 (inline)
	virtual void onStickStart(Creature*);                       // _158 (inline)
	virtual void onStickEnd(Creature*);                         // _15C (inline)
	virtual void onStickStartSelf(Creature*);                   // _160 (inline)
	virtual void onStickEndSelf(Creature*);                     // _164 (inline)
	virtual bool isSlotFree(short);                             // _168 (inline)
	virtual int getFreeStickSlot();                             // _16C (inline)
	virtual int getNearFreeStickSlot(Vector3f&);                // _170 (inline)
	virtual int getRandomFreeStickSlot();                       // _174 (inline)
	virtual void onSlotStickStart(Creature*, short);            // _178 (inline)
	virtual void onSlotStickEnd(Creature*, short);              // _17C (inline)
	virtual void calcStickSlotGlobal(short, Vector3f&);         // _180 (inline)
	virtual void getVelocityAt(Vector3f&, Vector3f&) = 0;       // _184
	virtual float getAngularEffect(Vector3f&, Vector3f&);       // _188 (inline)
	virtual void applyImpulse(Vector3f&, Vector3f&);            // _18C
	virtual bool ignoreAtari(Creature*);                        // _190 (inline)
	virtual Vector3f getSuckPos();                              // _194 (inline)
	virtual Vector3f getGoalPos();                              // _198 (inline)
	virtual bool isSuckReady();                                 // _19C (inline)
	virtual BOOL isSuckArriveWait();                            // _1A0 (inline)
	virtual bool stimulate(Interaction&);                       // _1A4 (inline)
	virtual char* getCreatureName();                            // _1A8 (inline)
	virtual s32 getCreatureID();                                // _1AC (inline)

	Creature();
	void applyAirDrag(float, float, float);
	float calcSphereDistance(Creature*);
	void checkHell(Creature::CheckHellArg&);
	void checkWater(WaterBox*, Sys::Sphere&);
	void clearCapture();
	void clearStick();
	void drawLODInfo(Graphics&, Vector3f&);
	void endCapture();
	void endStick();
	int getCellPikiCount();
	void getYVector(Vector3f&);
	void init(CreatureInitArg*);
	bool isStickTo();
	bool isStickToMouth();
	void kill(CreatureKillArg*);
	void load(Stream&, unsigned char);
	void movie_begin(bool);
	void movie_end(bool);
	void releaseAllStickers();
	void resolveOneColl(CollPart*, CollPart*, Vector3f&);
	void save(Stream&, unsigned char);
	void setPosition(Vector3f&, bool);
	void startCapture(Matrixf*);
	void startStick(Creature*, CollPart*);
	void startStick(Creature*, short);
	void startStickMouth(Creature*, CollPart*);
	void updateCapture(Matrixf&);
	void updateCell();
	void updateLOD(AILODParm&);
	void updateStick(Vector3f&);

	static bool usePacketCulling;

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
	unkptr _0C8;                   // _0C8
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
