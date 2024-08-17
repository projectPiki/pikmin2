#ifndef _GAME_CREATURE_H
#define _GAME_CREATURE_H

#include "Game/AILOD.h"
#include "Game/cellPyramid.h"
#include "Game/EnemyAnimatorBase.h"
#include "Game/updateMgr.h"
#include "BitFlag.h"
#include "ObjectTypes.h"
#include "Game/P2JST/ObjectActor.h"
#include "trig.h"

// Shorthand cast to obj-specific 'parms'
#define CG_PARMS(x) (static_cast<Parms*>(x->mParms))
#define C_PARMS     (CG_PARMS(this))

// Shorthand cast to obj-specific 'parms->mGeneralParms'
#define CG_GENERALPARMS(x) (CG_PARMS(x)->mGeneral)
#define C_GENERALPARMS     (C_PARMS->mGeneral)

// Shorthand cast to obj-specific 'parms->properParms'
#define CG_PROPERPARMS(x) (CG_PARMS(x)->mProperParms)
#define C_PROPERPARMS     (CG_PROPERPARMS(this))

// shorthand cast to obj-specific 'mMgr'
#define CG_MGR(x) (static_cast<Mgr*>(x->mMgr))
#define C_MGR     (CG_MGR(this))

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
	LifeGaugeParam() { mIsGaugeShown = false; }

	Vector3f mPosition;   // _00
	f32 mCurrHealthRatio; // _0C, between 0 and 1
	f32 mRadius;          // _10
	bool mIsGaugeShown;   // _14
};

enum CreatureFlags {
	CF_IsAtari          = 0x00000001,
	CF_IsAlive          = 0x00000002,
	CF_IsCollisionFlick = 0x00000004,
	CF_IsMovieActor     = 0x00000010,
	CF_IsMovieMotion    = 0x00000020,
	CF_IsMovieExtra     = 0x00000040,
	CF_IsDebugCollision = 0x80000000
};

// Manages dust clouds on stage change - only used by ItemGate and ItemBridge
struct Mabiki {
	inline void reset()
	{
		mBuffer  = 0;
		mCounter = 0;
	}

	inline void update(int dec)
	{
		if (mBuffer > 0) {
			mCounter += mBuffer;
		} else if (mCounter > 0) {
			mCounter -= dec;
			if (mCounter < 0) {
				mCounter = 0;
			}
		}

		mBuffer = 0;
	}

	int mCounter; // _00, decreases by 4 (gate) or 5 (bridge) each frame
	int mBuffer;  // _04, will get added to mCounter next frame
};

struct CreatureInitArg {
	virtual const char* getName() = 0; // _08

	// _00 VTBL
};

enum CreatureKillFlags {
	CKILL_NULL                = 0,
	CKILL_DontCountAsDeath    = 1,          // for sprouts <-> pikis, force kills, entering onyons etc
	CKILL_Unk17               = 0x10000,    // unknown, set by some piki deaths but doesn't seem to be used
	CKILL_DisableDeathEffects = 0x10000000, // enemy died to kill plane, force kill, end of day etc - don't do ghost
	CKILL_LeaveNoCarcass      = 0x20000000, // enemy died to kill plane, force kill, end of day etc - don't leave a body
	CKILL_NotKilledByPlayer   = 0x40000000, // disables bitter drop checking, corpse creation and setting of zukan/piklopedia flags
	CKILL_VsChargePiki        = 0x80000000, // set vs onyon to charge a piki
};

struct CreatureKillArg {
	inline CreatureKillArg(int flags)
	    : mFlags(flags)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "CreatureKillArg";
	}

	inline void setFlag(u32 flag) { mFlags |= flag; }
	inline void resetFlag(u32 flag) { mFlags &= ~flag; }
	inline bool isFlag(u32 flag) const { return mFlags & flag; }

	// _00 VTBL
	int mFlags; // _04
};

#define CREATURE_HELL_ALIVE    (0)
#define CREATURE_HELL_BELOWMAP (1)
#define CREATURE_HELL_DEATH    (2)

// Save position
#define CREATURE_SAVE_FLAG_POSITION (1)

/// @brief Basic Creature structure
struct Creature : public CellObject {
	struct CheckHellArg {
		inline CheckHellArg()
		    : mIsKillPiki(true)
		{
		}

		bool mIsKillPiki; // _00
	};

	Creature();

	virtual Vector3f getPosition() = 0;                             // _08
	virtual void checkCollision(CellObject* other);                 // _0C
	virtual void getBoundingSphere(Sys::Sphere& boundSphere) = 0;   // _10
	virtual bool isPiki();                                          // _18
	virtual bool isNavi();                                          // _1C
	virtual char* getTypeName();                                    // _24
	virtual void constructor() { }                                  // _2C (weak)
	virtual void onInit(CreatureInitArg* settings) { }              // _30 (weak)
	virtual void onKill(CreatureKillArg* settings) { }              // _34 (weak)
	virtual void onInitPost(CreatureInitArg* settings) { }          // _38 (weak)
	virtual void doAnimation();                                     // _3C
	virtual void doEntry();                                         // _40
	virtual void doSetView(int viewportNumber);                     // _44
	virtual void doViewCalc();                                      // _48
	virtual void doSimulation(f32 rate) { }                         // _4C (weak)
	virtual void doDirectDraw(Graphics& gfx) { }                    // _50 (weak)
	virtual f32 getBodyRadius();                                    // _54
	virtual f32 getCellRadius();                                    // _58
	virtual void initPosition(Vector3f& position);                  // _5C
	virtual void onInitPosition(Vector3f& dest) { }                 // _60 (weak)
	virtual f32 getFaceDir()                   = 0;                 // _64
	virtual void setVelocity(Vector3f& vel)    = 0;                 // _68
	virtual Vector3f getVelocity()             = 0;                 // _6C
	virtual void onSetPosition(Vector3f& dest) = 0;                 // _70
	virtual void onSetPositionPost(Vector3f& dest) { }              // _74 (weak)
	virtual void updateTrMatrix() = 0;                              // _78
	virtual bool isTeki();                                          // _7C
	virtual bool isPellet();                                        // _80
	virtual void inWaterCallback(WaterBox* waterbox) { }            // _84 (weak)
	virtual void outWaterCallback() { }                             // _88 (weak)
	virtual bool inWater() { return false; }                        // _8C (weak)
	virtual BaseFlockMgr* getFlockMgr() { return nullptr; }         // _90 (weak)
	virtual void onStartCapture() { }                               // _94 (weak)
	virtual void onUpdateCapture(Matrixf& mtx) { }                  // _98 (weak)
	virtual void onEndCapture() { }                                 // _9C (weak)
	virtual bool isAtari() { return mFlags.typeView & CF_IsAtari; } // _A0 (weak)
	virtual void setAtari(bool atari)                               // _A4 (weak)
	{
		if (atari) {
			mFlags.typeView |= CF_IsAtari;
		} else {
			mFlags.typeView &= ~CF_IsAtari;
		}
	}
	virtual bool isAlive() { return mFlags.typeView & CF_IsAlive; } // _A8 (weak)
	virtual void setAlive(bool alive)                               // _AC (weak)
	{
		if (alive) {
			mFlags.typeView |= CF_IsAlive;
		} else {
			mFlags.typeView &= ~CF_IsAlive;
		}
	}
	virtual bool isCollisionFlick() { return mFlags.typeView & CF_IsCollisionFlick; } // _B0 (weak)
	virtual void setCollisionFlick(bool collisionFlick)                               // _B4 (weak)
	{
		if (collisionFlick) {
			mFlags.typeView |= CF_IsCollisionFlick;
		} else {
			mFlags.typeView &= ~CF_IsCollisionFlick;
		}
	}
	virtual bool isMovieActor() { return mFlags.typeView & CF_IsMovieActor; }   // _B8 (weak)
	virtual bool isMovieExtra() { return mFlags.typeView & CF_IsMovieExtra; }   // _BC (weak)
	virtual bool isMovieMotion() { return mFlags.typeView & CF_IsMovieMotion; } // _C0 (weak)
	virtual void setMovieMotion(bool movieMotion)                               // _C4 (weak)
	{
		if (movieMotion) {
			mFlags.typeView |= CF_IsMovieMotion;
		} else {
			mFlags.typeView &= ~CF_IsMovieMotion;
		}
	}
	virtual bool isBuried() { return false; }                                         // _C8 (weak)
	virtual bool isFlying() { return false; }                                         // _CC (weak)
	virtual bool isUnderground() { return false; }                                    // _D0 (weak)
	virtual bool isLivingThing() { return true; }                                     // _D4 (weak)
	virtual bool isDebugCollision() { return mFlags.typeView & CF_IsDebugCollision; } // _D8 (weak)
	virtual void setDebugCollision(bool debugCollision)                               // _DC (weak)
	{
		if (debugCollision) {
			mFlags.typeView |= CF_IsDebugCollision;
		} else {
			mFlags.typeView &= ~CF_IsDebugCollision;
		}
	}
	virtual void doSave(Stream& stream) { }                                              // _E0 (weak)
	virtual void doLoad(Stream& stream) { }                                              // _E4 (weak)
	virtual void bounceCallback(Sys::Triangle* tri) { }                                  // _E8 (weak)
	virtual void collisionCallback(CollEvent& event) { }                                 // _EC (weak)
	virtual void platCallback(PlatEvent& event) { }                                      // _F0 (weak)
	virtual JAInter::Object* getJAIObject() { return nullptr; }                          // _F4 (weak)
	virtual PSM::Creature* getPSCreature() { return nullptr; }                           // _F8 (weak)
	virtual AILOD* getSound_AILOD() { return &mLod; }                                    // _FC (weak)
	virtual Vector3f* getSound_PosPtr() { return nullptr; }                              // _100 (weak)
	virtual bool sound_culling();                                                        // _104
	virtual f32 getSound_CurrAnimFrame() { return 0.0f; }                                // _108 (weak)
	virtual f32 getSound_CurrAnimSpeed() { return 0.0f; }                                // _10C (weak)
	virtual void on_movie_begin(bool isMainActor) { }                                    // _110 (weak)
	virtual void on_movie_end(bool isMainActor) { }                                      // _114 (weak)
	virtual void movieStartAnimation(u32 animIdx) { }                                    // _118 (weak)
	virtual void movieStartDemoAnimation(SysShape::AnimInfo* info) { }                   // _11C (weak)
	virtual void movieSetAnimationLastFrame() { }                                        // _120 (weak)
	virtual void movieSetTranslation(Vector3f& position, f32 direction) { }              // _124 (weak)
	virtual void movieSetFaceDir(f32 direction) { }                                      // _128 (weak)
	virtual bool movieGotoPosition(Vector3f&) { return true; }                           // _12C (weak)
	virtual void movieUserCommand(u32, MoviePlayer*) { }                                 // _130 (weak)
	virtual void getShadowParam(ShadowParam& param);                                     // _134
	virtual bool needShadow();                                                           // _138
	virtual void getLifeGaugeParam(LifeGaugeParam& param);                               // _13C
	virtual void getLODSphere(Sys::Sphere& sphere) { return getBoundingSphere(sphere); } // _140 (weak)
	virtual void getLODCylinder(Sys::Cylinder&) { }                                      // _144 (weak)
	virtual void startPick() { }                                                         // _148 (weak)
	virtual void endPick(bool) { }                                                       // _14C (weak)
	virtual Mabiki* getMabiki() { return nullptr; }                                      // _150 (weak)
	virtual Footmarks* getFootmarks() { return nullptr; }                                // _154 (weak)
	virtual void onStickStart(Creature* other) { }                                       // _158 (weak)
	virtual void onStickEnd(Creature* other) { }                                         // _15C (weak)
	virtual void onStickStartSelf(Creature* other) { }                                   // _160 (weak)
	virtual void onStickEndSelf(Creature* other) { }                                     // _164 (weak)
	virtual bool isSlotFree(s16 slotIndex) { return false; }                             // _168 (weak)
	virtual s16 getFreeStickSlot() { return -1; }                                        // _16C (weak)
	virtual s16 getNearFreeStickSlot(Vector3f&) { return -1; }                           // _170 (weak)
	virtual s16 getRandomFreeStickSlot() { return -1; }                                  // _174 (weak)
	virtual void onSlotStickStart(Creature* other, s16 slotIndex) { }                    // _178 (weak)
	virtual void onSlotStickEnd(Creature* other, s16 slotIndex) { }                      // _17C (weak)
	virtual void calcStickSlotGlobal(s16 slotIndex, Vector3f& position) { }              // _180 (weak)
	virtual void getVelocityAt(Vector3f&, Vector3f&) = 0;                                // _184
	virtual f32 getAngularEffect(Vector3f&, Vector3f&) { return 0.0f; }                  // _188 (weak)
	virtual void applyImpulse(Vector3f&, Vector3f&);                                     // _18C
	virtual bool ignoreAtari(Creature*) { return false; }                                // _190 (weak)
	virtual Vector3f getSuckPos() { return getPosition(); }                              // _194 (weak)
	virtual Vector3f getGoalPos() { return getPosition(); }                              // _198 (weak)
	virtual bool isSuckReady() { return true; }                                          // _19C (weak)
	virtual BOOL isSuckArriveWait() { return FALSE; }                                    // _1A0 (weak)
	virtual bool stimulate(Interaction& data) { return false; }                          // _1A4 (weak)
	virtual char* getCreatureName() { return "Creature"; }                               // _1A8 (weak)
	virtual s32 getCreatureID() { return -1; }                                           // _1AC (weak)
	virtual u16 getObjType() { return mObjectTypeID; }                                   // _28 (weak)
	virtual bool collisionUpdatable() { return mUpdateContext.updatable(); }             // _14 (weak)

	/**
	 * Calculates the distance between the current creature and the specified creature.
	 * The result is stored in the provided distanceResult vector.
	 *
	 * @param creature The creature to calculate the distance to.
	 * @param distanceResult The vector to store the distance result in.
	 */
	inline void getDistanceTo(Creature* creature, Vector2f& distanceResult)
	{
		distanceResult.x = getPosition().x - creature->getPosition().x;
		distanceResult.y = getPosition().z - creature->getPosition().z;
	}

	/**
	 * Checks if a creature is within a specified range relative to this creature object.
	 *
	 * @param c The creature to check.
	 * @param range The range around this creature to check within.
	 * @return True if the creature is within the range, false otherwise.
	 */
	inline bool isCreatureWithinRange(Creature* c, f32 range)
	{
		Vector2f delta;
		getDistanceTo(c, delta);

		if (IS_WITHIN_CIRCLE(delta.x, delta.y, range)) {
			return true;
		}

		return false;
	}

	/**
	 * @brief Calculates the distance between the current creature and the target creature.
	 *
	 * @param target The target creature.
	 * @return The distance between the current creature and the target creature.
	 */
	inline f32 getDistanceTo(Creature* target)
	{
		Vector3f sep   = getPosition() - target->getPosition();
		Vector2f sep2D = Vector2f(sep.x, sep.z);
		return sep2D.length();
	}

	inline bool isCreatureFlag(u32 flag) const { return mFlags.typeView & flag; }

	/**
	 * Calculates the angular distance between this creature and another creature.
	 *
	 * @param other The other creature.
	 * @return The angular distance between the two creatures.
	 */
	inline f32 getAngDist(Creature* other)
	{
		Vector3f otherPos = other->getPosition();
		Vector3f pos      = getPosition();

		f32 angBetween = _angXZ(otherPos.x, otherPos.z, pos.x, pos.z);
		return angDist(angBetween, getFaceDir());
	}

	/**
	 * Calculates the angular distance between the current object's facing direction and a target position.
	 *
	 * @param targetPos The target position to calculate the angular distance to.
	 * @return The angular distance between the current object's facing direction and the target position.
	 */
	inline f32 getAngDist(Vector3f& targetPos)
	{
		Vector3f pos   = getPosition();
		f32 angBetween = angXZ(targetPos.x, targetPos.z, pos);
		return angDist(angBetween, getFaceDir());
	}

	/**
	 * Calculates the angular distance between the current object's facing direction and a target position.
	 *
	 * @param targetPos The target position to calculate the angular distance to.
	 * @return The angular distance between the current object's facing direction and the target position.
	 */
	inline f32 getAngDist2(Vector3f& targetPos)
	{
		Vector3f pos   = getPosition();
		f32 angBetween = _angXZ(targetPos.x, targetPos.z, pos.x, pos.z);
		return angDist(angBetween, getFaceDir());
	}

	/**
	 * @brief Calculates the separation vector between the current creature and a target creature.
	 *
	 * @param target The target creature.
	 * @return The separation vector as a Vector3f object.
	 */
	inline Vector3f getTargetSeparation(Creature* target)
	{
		f32 x, y, z;
		x = target->getPosition().x - getPosition().x;
		y = target->getPosition().y - getPosition().y;
		z = target->getPosition().z - getPosition().z;
		return Vector3f(x, y, z);
	}

	inline f32 getSquarePositionTo(Vector3f& pos)
	{
		f32 z       = getPosition().z;
		f32 x       = getPosition().x;
		f32 targetZ = pos.z;
		f32 targetX = pos.x;
		f32 diffZ   = targetZ - z;
		f32 diffX   = targetX - x;
		return SQUARE(diffX) + SQUARE(diffZ);
	}

	inline f32 getPositionTo(Vector3f& pos)
	{
		Vector3f sep = pos - Vector3f(getPosition().x, 0.0f, getPosition().z);
		// f32 z = getPosition().z;
		// f32 x = getPosition().x;
		// f32 targetZ = pos.z;
		// f32 targetX = pos.x;
		// f32 diffZ = targetZ - z;
		// f32 diffX = targetX - x;
		f32 sqrDist = SQUARE(sep.x) + SQUARE(sep.z);
		return sqrtf(sqrDist);
		// return sqrDist;
	}

	void applyAirDrag(f32 drag, f32 horizontalDrag, f32 verticalDrag);
	f32 calcSphereDistance(Creature* other);
	int checkHell(Creature::CheckHellArg& hellArg);
	WaterBox* checkWater(WaterBox* wb, Sys::Sphere& boundSphere);
	void clearCapture();
	void clearStick();
	void drawLODInfo(Graphics& gfx, Vector3f& drawPosition);
	void endCapture();
	void endStick();
	int getCellPikiCount();
	void getYVector(Vector3f& outVector);
	void init(CreatureInitArg* arg);
	bool isStickTo();
	bool isStickToMouth();
	void kill(CreatureKillArg* arg);
	void load(Stream& input, u8 flags);
	void movie_begin(bool required);
	void movie_end(bool required);
	void releaseAllStickers();
	void resolveOneColl(CollPart* source, CollPart* dest, Vector3f& direction);
	void save(Stream& output, u8 flags);
	void setPosition(Vector3f& position, bool skipPostProc);
	void startCapture(Matrixf* captureMtx);
	bool startStick(Creature* obj, CollPart* part);
	bool startStick(Creature* obj, s16 partId);
	bool startStickMouth(Creature* obj, CollPart* mouthCollPart);
	void updateCapture(Matrixf& captureMtx);
	void updateCell();
	void updateLOD(AILODParm& lod);
	void updateStick(Vector3f& position);

	// unused/inlined
	bool isStickLeader();

	static bool usePacketCulling;
	static Creature* currOp;

	Matrixf* mCaptureMatrix;       // _0B8
	BitFlag<u32> mFlags;           // _0BC
	void* mParms;                  // _0C0
	Generator* mGenerator;         // _0C4
	Sys::Triangle* mFloorTriangle; // _0C8, triangle below creature (if on ground, nullptr if in air)
	Vector3f mFloorNormal;         // _0CC, normal vector from floor triangle; is (0.0f, 1.0f, 0.0f) if flat ground
	AILOD mLod;                    // _0D8
	int mCellLayerIndex;           // _0DC
	Recti mCellRect;               // _0E0
	Creature* mSticked;            // _0F0
	Creature* mSticker;            // _0F4
	CollPart* mStuckCollPart;      // _0F8
	Creature* mCaptured;           // _0FC
	Creature* mCapture;            // _100
	Vector3f mClimbingPosition;    // _104
	s16 mStickSlot;                // _110
	CollTree* mCollTree;           // _114
	f32 mMass;                     // _118
	Vector3f mAcceleration;        // _11C
	u16 mObjectTypeID;             // _128
	UpdateContext mUpdateContext;  // _12C
	Matrixf mBaseTrMatrix;         // _138
	Vector3f mScale;               // _168 /* Not sure if just model scale. */
	SysShape::Model* mModel;       // _174
};

extern Creature* currOp;
} // namespace Game

#endif
