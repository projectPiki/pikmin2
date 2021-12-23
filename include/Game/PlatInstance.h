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
};
struct PlatInstance : public CellObject {
	void setCollision(bool);
	Vector3f getPosition();
	void getBoundingSphere(Sys::Sphere&);
	void getMinY(Vector3f&) const;
	void getCurrTri(CurrTriInfo&);
	void traceMove(MoveInfo&, float);
	void constructor();
	void checkCollision(CellObject*);
	void doAnimation();
	void doEntry();
	void doSetView(int);
	void doViewCalc();
	void doSimulation(float);
	void doDirectDraw(Graphics&);
	char* getTypeName();
	ushort getObjType();
	bool collisionUpdatable();

	Matrixf* _B8;
	Matrixf _BC;
	Platform* _EC;
	Platform* _F0;
	BaseItem* _F4;
	ID32 m_id;
	u32 _104;
	u8 _108;    // _108
	u8 _109[3]; // _109, manual padding
	u8 _10C;    // _10C // I don't think this should be here...
};

struct PlatInstanceAttacher {
	PlatInstanceAttacher();
	void addToMgr(Creature*, ID32&, PlatAttacher*, bool);
	void fixCollision(bool);
	void fixCollision(bool, char*);
	void fixCollision(bool, ushort);
	void setCode(ID32&, char*);
	void setCode(ID32&, ushort);
	void setCollision(bool, char*);
	void setCollision(bool, ushort);
	void setShapeVisibility();

	int m_instanceCount;            // _00
	PlatInstance** m_platInstances; // _04
	PlatAttacher* m_attacher;       // _08
	SysShape::Model* m_model;       // _0C
};

struct PlatMgr : public NodeObjectMgr<PlatInstance> {
	PlatMgr();
	virtual ~PlatMgr();
	void addInstance(PlatAddInstanceArg&);
	void delInstance(PlatInstance*);
	void traceMove(MoveInfo&, float);
	void getMinY(Vector3f&) const;
	void getCurrTri(CurrTriInfo&);
	void findRayIntersection(Sys::RayIntersectInfo&);
	void resetOnCount();
	void doDirectDraw(Graphics&);
};
} // namespace Game

#endif
