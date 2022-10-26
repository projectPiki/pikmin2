#ifndef _GAME_PLATINSTANCE_H
#define _GAME_PLATINSTANCE_H

#include "ObjectMgr.h"
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

	BaseItem* m_item;     // _00
	ID32 m_id;            // _04
	Platform* m_platform; // _10
	Matrixf* m_matrix;    // _14
	bool _18;             // _18
	f32 _1C;              // _1C
};

struct PlatInstance : public CellObject {
	inline PlatInstance()
	    : CellObject()
	{
		_B8 = nullptr;
		_EC = nullptr;
		_F4 = nullptr;
		m_id.setID('none');
		_F0  = nullptr;
		_108 = 1;
	}

	virtual Vector3f getPosition();                           // _08
	virtual void checkCollision(CellObject* other);           // _0C (weak)
	virtual void getBoundingSphere(Sys::Sphere& boundSphere); // _10
	virtual bool collisionUpdatable();                        // _14 (weak)
	virtual char* getTypeName();                              // _24 (weak)
	virtual u16 getObjType();                                 // _28 (weak)
	virtual void constructor();                               // _2C (weak)
	virtual void doAnimation();                               // _30 (weak)
	virtual void doEntry();                                   // _34 (weak)
	virtual void doSetView(int viewportNumber);               // _38 (weak)
	virtual void doViewCalc();                                // _3C (weak)
	virtual void doSimulation(f32);                           // _40 (weak)
	virtual void doDirectDraw(Graphics& gfx);                 // _44 (weak)

	void setCollision(bool);
	void getCurrTri(CurrTriInfo&);
	void traceMove(MoveInfo&, f32);

	// _00		 = VTBL
	// _00-_B8 = CellObject
	Matrixf* _B8;  // _B8
	Matrixf _BC;   // _BC
	Platform* _EC; // _EC
	Platform* _F0; // _F0
	BaseItem* _F4; // _F4
	ID32 m_id;     // _F8
	u32 _104;      // _104
	u8 _108;       // _108
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

	int m_instanceCount;            // _00
	PlatInstance** m_platInstances; // _04
	PlatAttacher* m_attacher;       // _08
	SysShape::Model* m_model;       // _0C
};

struct PlatMgr : public NodeObjectMgr<PlatInstance> {
	PlatMgr();

	virtual ~PlatMgr();                                       // _08 (weak)
	virtual void doDirectDraw(Graphics& gfx);                 // _78 (weak)
	virtual void findRayIntersection(Sys::RayIntersectInfo&); // _80

	PlatInstance* addInstance(PlatAddInstanceArg&);
	void delInstance(PlatInstance*);
	void traceMove(MoveInfo&, f32);
	void getMinY(Vector3f&) const;
	void getCurrTri(CurrTriInfo&);
	void resetOnCount();

	// _00		 = VTBL
	// _00-_3C = NodeObjectMgr
};

struct PlatEvent {
	PlatInstance* m_instance; // _00
	f32 _04;                  // _04
	f32 _08;                  // _08
	f32 _0C;                  // _0C
	BaseItem* m_item;         // _10
};

extern PlatMgr* platMgr;
} // namespace Game

#endif
