#ifndef _GAME_MAPPARTS_H
#define _GAME_MAPPARTS_H

#include "BoundBox.h"
#include "CNode.h"
#include "Game/cellPyramid.h"
#include "Dolphin/mtx.h"
#include "Game/pathfinder.h"
#include "Game/routeMgr.h"
#include "Game/MapMgr.h"
#include "Game/seaMgr.h"
#include "MapCollision.h"
#include "Matrixf.h"
#include "ObjectMgr.h"
#include "Sys/Cylinder.h"
#include "Sys/Sphere.h"
#include "types.h"
#include "Vector3.h"
#include "Game/Cave/Info.h"
#include "Game/Cave/ObjectLayout.h"
#include "Game/Entities/BlackMan.h"

struct Graphics;
struct J3DModelData;
struct JUTTexture;
struct ResTIMG;

namespace Sys {
struct MatLoopAnimator;
struct MatTexAnimation;
} // namespace Sys

namespace SysShape {
struct Model;
} // namespace SysShape

namespace Game {
namespace Cave {
struct EditMapUnit;
} // namespace Cave

// Size: 0x24
struct DoorLink : public CNode {
	DoorLink()
	{
		mDistance  = 0.0f;
		mTekiFlags = 1;
	}

	virtual ~DoorLink() { } // _08 (weak)

	void read(Stream&);
	void write(Stream&);

	f32 mDistance; // _18
	u32 mDoorID;   // _1C
	u8 mTekiFlags; // _20
};

// Size: 0x50
struct Door : public CNode {
	Door()
	{
		mLinkCount = 0;
		mDir       = 0;
		mOffs      = 0;
	}

	virtual ~Door() { } // _08 (weak)

	DoorLink* getLink(int);
	void read(Stream&);
	void write(Stream&);

	inline int getLinkCount() { return mLinkCount; }

	u32 mIndex;         // _18
	int mLinkCount;     // _1C
	DoorLink mRootLink; // _20
	u32 mDir;           // _44
	u32 mOffs;          // _48
	u32 mWpIndex;       // _4C
};

// Size: 0x10
struct RoomDoorInfo {
	RoomDoorInfo();
	WayPoint* mWaypoint; // _00
	Vector3f mLookAtPos; // _04
};

struct RoomLink : public CNode {
	virtual ~RoomLink() { } // _08 (weak)

	// _00     = VTBL
	// _00-_18 = CNode
	u16 mLinkIndex;      // _18
	u16 mBirthDoorIndex; // _1A
	s16 mAliveMapIndex;  // _1C
};

// Size: 0xF0
struct MapUnit {
	MapUnit();

	virtual void constructor() { }                 // _08 (weak)
	virtual void doAnimation() { }                 // _0C (weak)
	virtual void doEntry() { }                     // _10 (weak)
	virtual void doSetView(int viewportNumber) { } // _14 (weak)
	virtual void doViewCalc() { }                  // _18 (weak)
	virtual void doSimulation(f32) { }             // _1C (weak)
	virtual void doDirectDraw(Graphics& gfx) { }   // _20 (weak)

	void load(Stream&);
	void save(Stream&);
	void setupSizeInfo();

	s16 mUnusedIdx;                    // _04
	char* mName;                       // _08
	J3DModelData* mModelData;          // _0C
	MapCollision mCollision;           // _10
	JUTTexture* mTexture;              // _2C
	ResTIMG* mImgResource;             // _30
	SeaMgr mSeaMgr;                    // _34
	BoundBox mBoundingBox;             // _7C
	Vector2<u16> mCellSize;            // _94
	u8 _98[0x10];                      // _98
	u8 mHasCollision;                  // _A8, not used?
	EditorRouteMgr mRouteMgr;          // _AC
	int mAnimationCount;               // _E8
	Sys::MatTexAnimation* mAnimations; // _EC
};

struct PartsView : public CNode {
	PartsView();
	PartsView(MapUnit*, u8*);

	virtual ~PartsView() { }                    // _08 (weak)
	virtual void constructor() { }              // _10 (weak)
	virtual void doAnimation();                 // _14
	virtual void doEntry();                     // _18
	virtual void doSetView(int viewportNumber); // _1C
	virtual void doViewCalc();                  // _20
	virtual void doSimulation(f32) { }          // _24 (weak)
	virtual void doDirectDraw(Graphics& gfx);   // _28

	void getHalfX();
	void getOffset();
	void read(Stream&);
	void write(Stream&);

	MapUnit* mMapUnit;           // _018
	SysShape::Model* mModel;     // _01C
	Mtx _20;                     // _020
	f32 _50;                     // _050
	f32 _54;                     // _054
	u32 _58;                     // _058
	u32 _5C;                     // _05C
	u32 _60;                     // _060
	u8 _64[8];                   // _064
	s16 mUnitKind;               // _06C, 0=cap, 1=room, 2=corridor
	BitFlag<u16> mFlags;         // _06E
	EditorRouteMgr mRouteMgr;    // _070
	AStarContext mAStarContext;  // _0AC
	AStarPathfinder mPathFinder; // _110
	int mDoorCount;              // _114
	Door mDoor;                  // _118
	Cave::BaseGen* mBaseGen;     // _168
};

struct MapUnitInterface : public PartsView {
	MapUnitInterface() { }

	virtual ~MapUnitInterface() { } // _08 (weak)

	inline int getDoorCount() { return mDoorCount; }

	Door* getDoor(int);
	void getCellSize(int&, int&);
};

struct MapUnitMgr : public NodeObjectMgr<MapUnit> {
	MapUnitMgr();

	virtual ~MapUnitMgr() { }    // _08 (weak)
	virtual MapUnit* getAt(int); // _24

	MapUnit* findMapUnit(char* unitName);
	void load(char*);
	void loadShape(char*);
	void makeUnit(MapUnit*, char*);
	void testConstruct();
};

// Size: 0x1A0
struct MapRoom : public CellObject {
	MapRoom();

	virtual Vector3f getPosition() { return mBoundingSphere.mPosition; }              // _08 (weak)
	virtual void getBoundingSphere(Sys::Sphere& sphere) { sphere = mBoundingSphere; } // _10 (weak)
	virtual bool collisionUpdatable() { return false; }                               // _14 (weak)
	virtual char* getTypeName() { return "room"; }                                    // _24 (weak)
	virtual u16 getObjType() { return 0xAAAA; }                                       // _28 (weak)
	virtual void constructor() { }                                                    // _2C (weak)
	virtual void doAnimation();                                                       // _30
	virtual void doEntry();                                                           // _34
	virtual void doSetView(int viewportNumber);                                       // _38
	virtual void doViewCalc();                                                        // _3C
	virtual void doSimulation(f32);                                                   // _40
	virtual void doDirectDraw(Graphics&);                                             // _44

	void placeObjects(Cave::FloorInfo* floorInfo, bool isFinalFloor);
	void countItems();
	void countEnemys();

	void create(MapUnit*, Matrixf&);
	RoomDoorInfo* createDoorInfo(MapUnitInterface*);
	void createGlobalCollision();

	void getCenterPosition(Vector3f&);

	// _00     = VTBL
	// _00-_B8 = CellObject
	MapCollision* mCollision;              // _0B8
	bool mIsVisited;                       // _0BC
	MapUnitInterface* mInterface;          // _0C0
	Cave::ObjectLayout* mObjectLayoutInfo; // _0C4
	int mAnimationCount;                   // _0C8
	Sys::MatLoopAnimator* mAnimators;      // _0CC
	int mDoorNum;                          // _0D0
	RoomDoorInfo* mDoorInfos;              // _0D4
	Matrixf mRoomSpaceMtx;                 // _0D8
	Matrixf mInvRoomSpaceMtx;              // _108
	MapUnit* mUnit;                        // _138
	SysShape::Model* mModel;               // _13C
	Sys::Sphere mBoundingSphere;           // _140
	Sys::Sphere mRoomVisibilitySphere;     // _150, rendering bounding sphere
	Sys::Cylinder mRoomVisibilityCylinder; // _160, rendering  bounding cylinder
	RoomLink* mLink;                       // _180
	s16 mIndex;                            // _184
	s16 mUnitKind;                         // _186
	BitFlag<u16> mFlags;                   // _188
	int* mWpIndices;                       // _18C
	Sys::Sphere _190;                      // _190
};

struct CaveVRBox {
	CaveVRBox();

	void create(char*);

	SysShape::Model* mModel; // _00, probably?
};

struct RoomMapMgr : public MapMgr {
	RoomMapMgr(Cave::CaveInfo*);

	virtual bool hasHiddenCollision();                                                    // _08
	virtual void constraintBoundBox(Sys::Sphere&);                                        // _0C
	virtual void getStartPosition(Vector3f& pos, int idx) { pos = mStartPositions[idx]; } // _10 (weak)
	virtual Matrixf* getDemoMatrix() { return nullptr; }                                  // _14 (weak)
	virtual void getBoundBox2d(BoundBox2d&);                                              // _18
	virtual void getBoundBox(BoundBox&);                                                  // _1C
	virtual bool findRayIntersection(Sys::RayIntersectInfo&);                             // _20
	virtual Sys::TriIndexList* traceMove(MoveInfo&, f32);                                 // _24
	virtual f32 getMinY(Vector3f&);                                                       // _28
	virtual void getCurrTri(CurrTriInfo&);                                                // _2C
	virtual void createTriangles(Sys::CreateTriangleArg&);                                // _30
	virtual void setupJUTTextures();                                                      // _34
	virtual void drawCollision(Graphics&, Sys::Sphere&);                                  // _44
	virtual void doSimulation(f32);                                                       // _48
	virtual void doDirectDraw(Graphics&);                                                 // _4C
	virtual void doAnimation();                                                           // _50
	virtual void doEntry();                                                               // _54
	virtual void doSetView(int viewportNumber);                                           // _58
	virtual void doViewCalc();                                                            // _5C
	virtual Sys::TriIndexList* traceMove_new(MoveInfo&, f32);                             // _60
	virtual Sys::TriIndexList* traceMove_original(MoveInfo&, f32);                        // _64

	MapRoom* getMapRoom(s16 roomIdx);
	void createRandomMap(int floorNum, Cave::EditMapUnit* editInfo);
	void completeUnitData();
	void useUnit(char* unitName);
	JUTTexture* getTexture(char* unitName);
	void allocRooms(int count);
	void makeRoom(char* unitName, f32 centreX, f32 centreY, int direction, int roomIdx, RoomLink* link, ObjectLayoutInfo* layoutInfo);
	void placeObjects();
	void entryToMapRoomCellMgr();
	s16 findRoomIndex(Sys::Sphere&);
	void createGlobalCollision();
	void makeOneRoom(f32 centreX, f32 centreY, f32 direction, char* unitName, s16 roomIdx, RoomLink* link, ObjectLayoutInfo* layoutInfo);
	void deleteTemp();
	MapUnitInterface* getMUI(MapUnit* unit);
	void nishimuraCreateRandomMap(MapUnitInterface* interfaces, int interfaceCount, Cave::FloorInfo* floorInfo, bool isLastFloor,
	                              Cave::EditMapUnit* editInfo);
	void nishimuraPlaceRooms();
	void nishimuraSetTexture();

	static int numRoomCulled;
	static bool mUseCylinderViewCulling;

	// _00     = GenericObjectMgr
	// _04     = VTBL
	// _00-_24 = MapMgr
	CaveVRBox mVRBox;                    // _24
	Cave::CaveInfo* mCaveInfo;           // _28
	Cave::FloorInfo* mFloorInfo;         // _2C
	int mSublevel;                       // _30
	MapCollision* mMapCollision;         // _34
	int mTriCount;                       // _38
	int* mRoomTriIndices;                // _3C
	Sys::Triangle mTriangle;             // _40
	int mCount;                          // _A0
	MapRoom** mRoomList;                 // _A4
	MapUnitMgr* mMapUnitMgr;             // _A8
	MonoObjectMgr<MapRoom> mRoomMgr;     // _AC
	BoundBox mBoundbox;                  // _DC
	int mMapUnitInterfaceCount;          // _F4
	MapUnitInterface* mMapUnitInterface; // _F8
	Vector3f mStartPositions[2];         // _FC
	Game::BlackMan::Obj* mWraith;        // _114
};

} // namespace Game

#endif
