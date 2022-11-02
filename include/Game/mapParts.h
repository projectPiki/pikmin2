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
		m_dist     = 0.0f;
		m_tekiFlag = 1;
	}

	virtual ~DoorLink(); // _08 (weak)

	void read(Stream&);
	void write(Stream&);

	f32 m_dist;    // _18
	u32 m_doorID;  // _1C
	u8 m_tekiFlag; // _20
};

// Size: 0x50
struct Door : public CNode {
	Door()
	{
		m_linkCount = 0;
		m_dir       = 0;
		m_offs      = 0;
	}

	virtual ~Door(); // _08 (weak)

	DoorLink* getLink(int);
	void read(Stream&);
	void write(Stream&);

	inline int getLinkCount() { return m_linkCount; }

	u32 m_index;         // _18
	int m_linkCount;     // _1C
	DoorLink m_rootLink; // _20
	u32 m_dir;           // _44
	u32 m_offs;          // _48
	u32 m_wpIndex;       // _4C
};

// Size: 0x10
struct RoomDoorInfo {
	RoomDoorInfo();
};

struct RoomLink : public CNode {
	virtual ~RoomLink(); // _08 (weak)
};

// Size: 0xF0
struct MapUnit {
	MapUnit();

	virtual void constructor();                 // _08 (weak)
	virtual void doAnimation();                 // _0C (weak)
	virtual void doEntry();                     // _10 (weak)
	virtual void doSetView(int viewportNumber); // _14 (weak)
	virtual void doViewCalc();                  // _18 (weak)
	virtual void doSimulation(f32);             // _1C (weak)
	virtual void doDirectDraw(Graphics& gfx);   // _20 (weak)

	void load(Stream&);
	void save(Stream&);
	void setupSizeInfo();

	short _04;                          // _04
	char* m_name;                       // _08
	J3DModelData* m_modelData;          // _0C
	MapCollision m_collision;           // _10
	JUTTexture* m_texture;              // _2C
	ResTIMG* m_imgResource;             // _30
	SeaMgr m_seaMgr;                    // _34
	BoundBox m_boundingBox;             // _7C
	Vector2<short> m_cellSize;          // _94
	u8 _98[0x10];                       // _98
	u8 _A8;                             // _A8
	EditorRouteMgr m_routeMgr;          // _AC
	int m_animationCount;               // _E8
	Sys::MatTexAnimation* m_animations; // _EC
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

	MapUnit* m_mapUnit;       // _018
	SysShape::Model* m_model; // _01C
	Mtx _20;                  // _020
	f32 _50;                  // _050
	f32 _54;                  // _054
	u32 _58;                  // _058
	u32 _5C;                  // _05C
	u32 _60;                  // _060
	u8 _64[8];                // _064

	// 0=dead end, 1=room, 2=hallway ??? NOT SURE
	s16 m_unitKind;               // _06C
	BitFlag<u16> _6E;             // _06E
	EditorRouteMgr m_routeMgr;    // _070
	AStarContext m_aStarContext;  // _0AC
	AStarPathfinder m_pathFinder; // _110
	int m_doorCount;              // _114
	Door m_door;                  // _118
	Cave::BaseGen* m_baseGen;     // _168
};

struct MapUnitInterface : public PartsView {
	MapUnitInterface();

	virtual ~MapUnitInterface(); // _08 (weak)

	inline int getDoorCount() { return m_doorCount; }

	Door* getDoor(int);
	void getCellSize(int&, int&);
};

struct MapUnitMgr : public NodeObjectMgr<MapUnit> {
	MapUnitMgr();

	virtual ~MapUnitMgr();       // _08 (weak)
	virtual MapUnit* getAt(int); // _24

	void findMapUnit(char*);
	void load(char*);
	void loadShape(char*);
	void makeUnit(MapUnit*, char*);
	void testConstruct();
};

// Size: 0x1A0
struct MapRoom : public CellObject {
	MapRoom();

	virtual Vector3f getPosition();               // _08 (weak)
	virtual void getBoundingSphere(Sys::Sphere&); // _10 (weak)
	virtual bool collisionUpdatable();            // _14 (weak)
	virtual char* getTypeName();                  // _24 (weak)
	virtual u16 getObjType();                     // _28 (weak)
	virtual void constructor();                   // _2C (weak)
	virtual void doAnimation();                   // _30
	virtual void doEntry();                       // _34
	virtual void doSetView(int);                  // _38
	virtual void doViewCalc();                    // _3C
	virtual void doSimulation(f32);               // _40
	virtual void doDirectDraw(Graphics&);         // _44

	void placeObjects(Cave::FloorInfo*, bool);

	// _00     = VTBL
	// _00-_B8 = CellObject
	MapCollision* m_collision;              // _0B8
	u8 _0BC;                                // _0BC
	MapUnitInterface* m_interface;          // _0C0
	Cave::ObjectLayout* m_objectLayoutInfo; // _0C4
	u8 _0C8[4];                             // _0C8
	Sys::MatLoopAnimator* m_animators;      // _0CC
	int m_doorNum;                          // _0D0
	RoomDoorInfo* m_doorInfos;              // _0D4
	Matrixf _0D8;                           // _0D8
	Matrixf _108;                           // _108
	MapUnit* m_unit;                        // _138
	SysShape::Model* m_model;               // _13C
	Sys::Sphere m_boundingSphere;           // _140
	Sys::Sphere _150;                       // _150
	Sys::Cylinder _160;                     // _160
	RoomLink* m_link;                       // _180
	s16 _184;                               // _184
	u16 m_unitKind;                         // _186
	u8 _188[2];                             // _188
	int* m_wpIndices;                       // _18C
	Sys::Sphere _190;                       // _190
};

struct RoomMapMgr : public MapMgr {
	RoomMapMgr(Cave::CaveInfo*);

	virtual bool hasHiddenCollision();                        // _08
	virtual void constraintBoundBox(Sys::Sphere&);            // _0C
	virtual void getStartPosition(Vector3f&, int);            // _10 (weak)
	virtual void getDemoMatrix();                             // _14 (weak)
	virtual void getBoundBox2d(BoundBox2d&);                  // _18
	virtual void getBoundBox(BoundBox&);                      // _1C
	virtual void findRayIntersection(Sys::RayIntersectInfo&); // _20
	virtual void traceMove(MoveInfo&, f32);                   // _24
	virtual f32 getMinY(Vector3f&);                           // _28
	virtual void getCurrTri(CurrTriInfo&);                    // _2C
	virtual void createTriangles(Sys::CreateTriangleArg&);    // _30
	virtual void setupJUTTextures();                          // _34
	virtual void drawCollision(Graphics&, Sys::Sphere&);      // _44
	virtual void doSimulation(f32);                           // _48 (weak)
	virtual void doDirectDraw(Graphics&);                     // _4C (weak)
	virtual void doAnimation();                               // _50 (weak)
	virtual void doEntry();                                   // _54 (weak)
	virtual void doSetView(int);                              // _58 (weak)
	virtual void doViewCalc();                                // _5C (weak)
	virtual void traceMove_new(MoveInfo&, f32);               // _60
	virtual void traceMove_original(MoveInfo&, f32);          // _64

	void getMapRoom(s16);
	void createRandomMap(int, Cave::EditMapUnit*);
	void completeUnitData();
	void useUnit(char*);
	JUTTexture* getTexture(char*);
	void allocRooms(int);
	void makeRoom(char*, f32, f32, int, int, RoomLink*, ObjectLayoutInfo*);
	void placeObjects();
	void entryToMapRoomCellMgr();
	void findRoomIndex(Sys::Sphere&);
	void createGlobalCollision();
	void makeOneRoom(f32, f32, f32, char*, s16, RoomLink*, ObjectLayoutInfo*);
	void deleteTemp();
	void getMUI(MapUnit*);
	void nishimuraCreateRandomMap(MapUnitInterface*, int, Cave::FloorInfo*, bool, Cave::EditMapUnit*);
	void nishimuraPlaceRooms();
	void nishimuraSetTexture();

	// _00     = GenericObjectMgr
	// _04     = VTBL
	// _00-_24 = MapMgr
	SysShape::Model* _24;                 // _24, m_modelOrCaveVRBoxOrBothMaybe
	Cave::CaveInfo* m_caveInfo;           // _28
	Cave::FloorInfo* m_floorInfo;         // _2C
	int _30;                              // _30
	MapCollision* m_mapCollision;         // _34
	u32 _38;                              // _38
	void* _3C;                            // _3C
	u8 _40[0x60];                         // _40, triangle?
	int m_count;                          // _A0
	void* _A4;                            // _A4
	MapUnitMgr* m_mapUnitMgr;             // _A8
	u8 _AC[0x30];                         // _AC, mono?
	BoundBox m_boundbox;                  // _DC
	uint m_mapUnitInterfaceCount;         // _F4
	MapUnitInterface* m_mapUnitInterface; // _F8
	Vector3f m_startPositions[2];         // _FC
	Game::BlackMan::Obj* m_blackMan;      // _114
	u32* m_118;                           // _118
	u32 m_11C;                            // _11C
};

struct CaveVRBox {
};
} // namespace Game

#endif
