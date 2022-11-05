#ifndef _GAME_CREATURE_H
#define _GAME_CREATURE_H

#include "Game/AILOD.h"
#include "Game/cellPyramid.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/updateMgr.h"
#include "BitFlag.h"
#include "ObjectTypes.h"

// Shorthand cast to obj-specific 'parms'
#define CG_PARMS(x) (static_cast<Parms*>(x->m_parms))
#define C_PARMS     (CG_PARMS(this))

// Shorthand cast to obj-specific 'parms->properParms'
#define CG_PROPERPARMS(x) (CG_PARMS(x)->m_properParms)
#define C_PROPERPARMS     (CG_PROPERPARMS(this))

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
struct BaseFlockMgr;
struct CellObject;
struct CollEvent;
struct Creature;
struct CreatureInitArg;
struct Footmarks;
struct Generator;
struct Interaction;
struct MoviePlayer;
struct PlatEvent;
struct ShadowParam;
struct WaterBox;

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

struct CreatureInitArg {
	virtual const char* getName() = 0; // _08

	// _00 VTBL
};

struct CreatureKillArg {
	inline CreatureKillArg(int p1)
	    : _04(p1)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "CreatureKillArg";
	}

	// _00 VTBL
	int _04; // _04
};

/// @brief Basic Creature structure
struct Creature : public CellObject {
	struct CheckHellArg {
		inline CheckHellArg()
		    : _00(true)
		{
		}

		bool _00; // _00
	};

	Creature();

	virtual Vector3f getPosition() = 0;                           // _08
	virtual void checkCollision(CellObject* other);               // _0C
	virtual void getBoundingSphere(Sys::Sphere& boundSphere) = 0; // _10
	virtual bool collisionUpdatable()                             // _14 (weak)
	{
		return m_updateContext.updatable();
	}
	virtual bool isPiki();                                            // _18
	virtual bool isNavi();                                            // _1C
	virtual char* getTypeName();                                      // _24
	virtual u16 getObjType() { return m_objectTypeID; }               // _28 (weak)
	virtual void constructor() { }                                    // _2C (weak)
	virtual void onInit(CreatureInitArg* settings) { }                // _30 (weak)
	virtual void onKill(CreatureKillArg* settings) { }                // _34 (weak)
	virtual void onInitPost(CreatureInitArg* settings) { }            // _38 (weak)
	virtual void doAnimation();                                       // _3C
	virtual void doEntry();                                           // _40
	virtual void doSetView(int viewportNumber);                       // _44
	virtual void doViewCalc();                                        // _48
	virtual void doSimulation(float rate) { }                         // _4C (weak)
	virtual void doDirectDraw(Graphics& gfx) { }                      // _50 (weak)
	virtual float getBodyRadius();                                    // _54
	virtual float getCellRadius();                                    // _58
	virtual void initPosition(Vector3f& dest);                        // _5C
	virtual void onInitPosition(Vector3f& dest) { }                   // _60 (weak)
	virtual float getFaceDir()                 = 0;                   // _64
	virtual void setVelocity(Vector3f& vel)    = 0;                   // _68
	virtual Vector3f getVelocity()             = 0;                   // _6C
	virtual void onSetPosition(Vector3f& dest) = 0;                   // _70
	virtual void onSetPositionPost(Vector3f& dest) { }                // _74 (weak)
	virtual void updateTrMatrix() = 0;                                // _78
	virtual bool isTeki();                                            // _7C
	virtual bool isPellet();                                          // _80
	virtual void inWaterCallback(WaterBox* waterbox) { }              // _84 (weak)
	virtual void outWaterCallback() { }                               // _88 (weak)
	virtual bool inWater() { return false; }                          // _8C (weak)
	virtual BaseFlockMgr* getFlockMgr() { return nullptr; }           // _90 (weak)
	virtual void onStartCapture() { }                                 // _94 (weak)
	virtual void onUpdateCapture(Matrixf&) { }                        // _98 (weak)
	virtual void onEndCapture() { }                                   // _9C (weak)
	virtual bool isAtari() { return m_flags.typeView & CF_IS_ATARI; } // _A0 (weak)
	virtual void setAtari(bool atari)                                 // _A4 (weak)
	{
		if (atari) {
			m_flags.typeView |= CF_IS_ATARI;
		} else {
			m_flags.typeView &= ~CF_IS_ATARI;
		}
	}
	virtual bool isAlive() { return m_flags.typeView & CF_IS_ALIVE; } // _A8 (weak)
	virtual void setAlive(bool alive)                                 // _AC (weak)
	{
		if (alive) {
			m_flags.typeView |= CF_IS_ALIVE;
		} else {
			m_flags.typeView &= ~CF_IS_ALIVE;
		}
	}
	virtual bool isCollisionFlick() // _B0 (weak)
	{
		return m_flags.typeView & CF_IS_COLLISION_FLICK;
	}
	virtual void setCollisionFlick(bool collisionFlick) // _B4 (weak)
	{
		if (collisionFlick) {
			m_flags.typeView |= CF_IS_COLLISION_FLICK;
		} else {
			m_flags.typeView &= ~CF_IS_COLLISION_FLICK;
		}
	}
	virtual bool isMovieActor() // _B8 (weak)
	{
		return m_flags.typeView & CF_IS_MOVIE_ACTOR;
	}
	virtual bool isMovieExtra() // _BC (weak)
	{
		return m_flags.typeView & CF_IS_MOVIE_EXTRA;
	}
	virtual bool isMovieMotion() // _C0 (weak)
	{
		return m_flags.typeView & CF_IS_MOVIE_MOTION;
	}
	virtual void setMovieMotion(bool movieMotion) // _C4 (weak)
	{
		if (movieMotion) {
			m_flags.typeView |= CF_IS_MOVIE_MOTION;
		} else {
			m_flags.typeView &= ~CF_IS_MOVIE_MOTION;
		}
	}
	virtual bool isBuried() { return false; }      // _C8 (weak)
	virtual bool isFlying() { return false; }      // _CC (weak)
	virtual bool isUnderground() { return false; } // _D0 (weak)
	virtual bool isLivingThing() { return true; }  // _D4 (weak)
	virtual bool isDebugCollision()                // _D8 (weak)
	{
		return m_flags.typeView & CF_IS_DEBUG_COLLISION;
	}
	virtual void setDebugCollision(bool debugCollision) // _DC (weak)
	{
		if (debugCollision) {
			m_flags.typeView |= CF_IS_DEBUG_COLLISION;
		} else {
			m_flags.typeView &= ~CF_IS_DEBUG_COLLISION;
		}
	}
	virtual void doSave(Stream&) { }                              // _E0 (weak)
	virtual void doLoad(Stream&) { }                              // _E4 (weak)
	virtual void bounceCallback(Sys::Triangle* tri) { }           // _E8 (weak)
	virtual void collisionCallback(CollEvent& event) { }          // _EC (weak)
	virtual void platCallback(PlatEvent& event) { }               // _F0 (weak)
	virtual JAInter::Object* getJAIObject() { return nullptr; }   // _F4 (weak)
	virtual PSM::Creature* getPSCreature() { return nullptr; }    // _F8 (weak)
	virtual AILOD* getSound_AILOD() { return &m_lod; }            // _FC (weak)
	virtual Vector3f* getSound_PosPtr() { return nullptr; }       // _100 (weak)
	virtual bool sound_culling();                                 // _104
	virtual float getSound_CurrAnimFrame() { return 0.0f; }       // _108 (weak)
	virtual float getSound_CurrAnimSpeed() { return 0.0f; }       // _10C (weak)
	virtual void on_movie_begin(bool) { }                         // _110 (weak)
	virtual void on_movie_end(bool) { }                           // _114 (weak)
	virtual void movieStartAnimation(u32) { }                     // _118 (weak)
	virtual void movieStartDemoAnimation(SysShape::AnimInfo*) { } // _11C (weak)
	virtual void movieSetAnimationLastFrame() { }                 // _120 (weak)
	virtual void movieSetTranslation(Vector3f&, float) { }        // _124 (weak)
	virtual void movieSetFaceDir(float) { }                       // _128 (weak)
	virtual bool movieGotoPosition(Vector3f&) { return true; }    // _12C (weak)
	virtual void movieUserCommand(u32, MoviePlayer*) { }          // _130 (weak)
	virtual void getShadowParam(ShadowParam& settings);           // _134
	virtual bool needShadow();                                    // _138
	virtual void getLifeGaugeParam(LifeGaugeParam&);              // _13C
	virtual void getLODSphere(Sys::Sphere& sphere)                // _140 (weak)
	{
		return getBoundingSphere(sphere);
	}
	virtual void getLODCylinder(Sys::Cylinder&) { }              // _144 (weak)
	virtual void startPick() { }                                 // _148 (weak)
	virtual void endPick(bool) { }                               // _14C (weak)
	virtual u32* getMabiki() { return nullptr; }                 // _150 (weak) - maybe shouldn't be u32*
	virtual Footmarks* getFootmarks() { return nullptr; }        // _154 (weak)
	virtual void onStickStart(Creature*) { }                     // _158 (weak)
	virtual void onStickEnd(Creature*) { }                       // _15C (weak)
	virtual void onStickStartSelf(Creature*) { }                 // _160 (weak)
	virtual void onStickEndSelf(Creature*) { }                   // _164 (weak)
	virtual bool isSlotFree(short) { return false; }             // _168 (weak)
	virtual short getFreeStickSlot() { return -1; }              // _16C (weak)
	virtual short getNearFreeStickSlot(Vector3f&) { return -1; } // _170 (weak)
	virtual short getRandomFreeStickSlot() { return -1; }        // _174 (weak)
	virtual void onSlotStickStart(Creature*, short) { }          // _178 (weak)
	virtual void onSlotStickEnd(Creature*, short) { }            // _17C (weak)
	virtual void calcStickSlotGlobal(short, Vector3f&) { }       // _180 (weak)
	virtual void getVelocityAt(Vector3f&, Vector3f&) = 0;        // _184
	virtual float getAngularEffect(Vector3f&, Vector3f&)         // _188 (weak)
	{
		return 0.0f;
	}
	virtual void applyImpulse(Vector3f&, Vector3f&);      // _18C
	virtual bool ignoreAtari(Creature*) { return false; } // _190 (weak)
	virtual Vector3f getSuckPos()                         // _194 (weak)
	{
		return getPosition();
	}
	virtual Vector3f getGoalPos() // _198 (weak)
	{
		return getPosition();
	}
	virtual bool isSuckReady() { return true; }       // _19C (weak)
	virtual BOOL isSuckArriveWait() { return FALSE; } // _1A0 (weak)
	virtual bool stimulate(Interaction& data);        // _1A4 (weak)
	virtual char* getCreatureName();                  // _1A8 (weak)
	virtual s32 getCreatureID() { return -1; }        // _1AC (weak)

	inline void getDistanceTo(Creature* creature, Vector2f& distanceResult)
	{
		distanceResult.x = getPosition().x - creature->getPosition().x;
		distanceResult.y = getPosition().z - creature->getPosition().z;
	}

	inline bool isCreatureWithinRange(Creature* c, f32 range)
	{
		Vector2f delta;
		getDistanceTo(c, delta);

		if (IS_WITHIN_CIRCLE(delta.x, delta.y, range)) {
			return true;
		}

		return false;
	}

	void applyAirDrag(float, float, float);
	float calcSphereDistance(Creature*);
	int checkHell(Creature::CheckHellArg&);
	WaterBox* checkWater(WaterBox*, Sys::Sphere&);
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

	Matrixf* m_captureMatrix;      // _0B8
	BitFlag<u32> m_flags;          // _0BC
	void* m_parms;                 // _0C0
	Generator* m_generator;        // _0C4
	Sys::Triangle* m_curTriangle;  // _0C8
	Vector3f m_collisionPosition;  // _0CC
	AILOD m_lod;                   // _0D8
	int m_cellLayerIndex;          // _0DC
	Recti m_cellRect;              // _0E0
	Creature* m_sticked;           // _0F0
	Creature* m_sticker;           // _0F4
	CollPart* m_stuckCollPart;     // _0F8
	Creature* m_captured;          // _0FC
	Creature* m_capture;           // _100
	Vector3f _104;                 // _104
	short m_hasStick;              // _110
	CollTree* m_collTree;          // _114
	float m_mass;                  // _118
	Vector3f m_triangleNormal;     // _11C
	u16 m_objectTypeID;            // _128
	UpdateContext m_updateContext; // _12C
	Matrixf m_mainMatrix;          // _138
	Vector3f m_scale;              // _168 /* Not sure if just model scale. */
	SysShape::Model* m_model;      // _174
};

extern Creature* currOp;
} // namespace Game

#endif
