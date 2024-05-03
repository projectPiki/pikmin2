#ifndef _GAME_PLATINSTANCE_H
#define _GAME_PLATINSTANCE_H

#include "ObjectMgr.h"
#include "ObjectTypes.h"
#include "types.h"
#include "Game/cellPyramid.h"
#include "Matrixf.h"
#include "id32.h"

struct Graphics;
struct Platform;
struct PlatAttacher;
namespace Sys {
struct Sphere;
struct RayIntersectInfo;
} // namespace Sys
namespace SysShape {
struct Model;
}
namespace Game {
struct BaseItem;
struct Creature;
struct CurrTriInfo;
struct MoveInfo;
} // namespace Game

namespace Game {
struct PlatAddInstanceArg {
	PlatAddInstanceArg();

	BaseItem* mItem;        // _00
	ID32 mId;               // _04
	Platform* mPlatform;    // _10
	Matrixf* mMatrix;       // _14
	bool mEnableGlobalPlat; // _18
	f32 mRadius;            // _1C
};

enum PlatFlags {
	PLATFLAG_CollisionActive   = 0x1,
	PLATFLAG_IsCollisionStatic = 0x2,
	PLATFLAG_GlobalPlatEnabled = 0x80,
};

struct PlatInstance : public CellObject {
	inline PlatInstance()
	    : CellObject()
	{
		mMatrix   = nullptr;
		mPlatform = nullptr;
		mItem     = nullptr;
		mId.setID('none');
		mGlobalPlatform = nullptr;
		mFlags          = PLATFLAG_CollisionActive;
	}

	virtual Vector3f getPosition();                           // _08
	virtual void getBoundingSphere(Sys::Sphere& boundSphere); // _10
	virtual void constructor() { }                            // _2C (weak)
	virtual void checkCollision(CellObject* other) { }        // _0C (weak)
	virtual void doAnimation() { }                            // _30 (weak)
	virtual void doEntry() { }                                // _34 (weak)
	virtual void doSetView(int viewportNumber) { }            // _38 (weak)
	virtual void doViewCalc() { }                             // _3C (weak)
	virtual void doSimulation(f32) { }                        // _40 (weak)
	virtual void doDirectDraw(Graphics& gfx) { }              // _44 (weak)
	virtual char* getTypeName() { return "platinstance"; }    // _24 (weak)
	virtual u16 getObjType() { return OBJTYPE_End; }          // _28 (weak)
	virtual bool collisionUpdatable() { return false; }       // _14 (weak)

	void setCollision(bool);
	void getCurrTri(CurrTriInfo&);
	void traceMove(MoveInfo&, f32);

	inline void setFlag(u32 flag) { mFlags |= flag; }
	inline void resetFlag(u32 flag) { mFlags &= ~flag; }
	inline bool isFlag(u32 flag) const { return mFlags & flag; }

	static bool useFixCollision;

	// _00		 = VTBL
	// _00-_B8 = CellObject
	Matrixf* mMatrix;          // _B8
	Matrixf mStaticCollMtx;    // _BC
	Platform* mPlatform;       // _EC
	Platform* mGlobalPlatform; // _F0, for use with traceMove_global
	BaseItem* mItem;           // _F4
	ID32 mId;                  // _F8
	int mOnCount;              // _104, increments each time traceMove gives a plat callback on a floor triangle
	u8 mFlags;                 // _108
};

struct PlatInstanceAttacher {
	PlatInstanceAttacher();

	void addToMgr(Creature*, ID32&, PlatAttacher*, bool);
	void fixCollision(bool);
	void fixCollision(bool, char*);
	void fixCollision(bool, u16);
	void setCode(ID32&, char*);
	void setCode(ID32&, u16);
	void setCollision(bool, char*);
	void setCollision(bool, u16);
	void setShapeVisibility();

	int mInstanceCount;            // _00
	PlatInstance** mPlatInstances; // _04
	PlatAttacher* mAttacher;       // _08
	SysShape::Model* mModel;       // _0C
};

struct PlatMgr : public NodeObjectMgr<PlatInstance> {
	PlatMgr();

	// virtual ~PlatMgr();                                       // _08 (weak)
	virtual void doDirectDraw(Graphics& gfx);                 // _78 (weak)
	virtual bool findRayIntersection(Sys::RayIntersectInfo&); // _80

	PlatInstance* addInstance(PlatAddInstanceArg&);
	void delInstance(PlatInstance*);
	void traceMove(MoveInfo&, f32);
	void getMinY(Vector3f&) const;
	void getCurrTri(CurrTriInfo&);
	void resetOnCount();

	static bool mUseCellMgr;

	// _00		 = VTBL
	// _00-_3C = NodeObjectMgr
};

struct PlatEvent {
	PlatInstance* mInstance; // _00
	Vector3f mNormal;        // _04
	Creature* mObj;          // _10
};

extern PlatMgr* platMgr;
} // namespace Game

#endif
