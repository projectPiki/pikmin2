#ifndef _GAME_MAPPARTS_H
#define _GAME_MAPPARTS_H

#include "BoundBox.h"
#include "types.h"
#include "CNode.h"
#include "cellPyramid.h"
#include "Game/Cave/RandMapUnit.h"
#include "Game/PartsView.h"
#include "Game/routeMgr.h"
#include "Game/seaMgr.h"
#include "MapCollision.h"
#include "MapMgr.h"
#include "Matrixf.h"
#include "ObjectMgr.h"
#include "Sys/Cylinder.h"
#include "Sys/Sphere.h"
#include "Vector3.h"

struct Graphics;
struct J3DModelData;
struct JUTTexture;
struct ResTIMG;
namespace Game {
	struct RoomLink;
	namespace Cave {
		struct EditMapUnit;
		struct FloorInfo;
	}
}
namespace Sys {
	struct MatLoopAnimator;
	struct MatTexAnimation;
}

namespace Game {
	// Size: 0x24
	struct DoorLink : public CNode {
		void read(Stream&);
		void write(Stream&);

		float m_dist; // _18
		uint m_doorID; // _1C
		u8 m_tekiFlag; // _20
	};

	// Size: 0x50
	struct Door : public CNode {
		DoorLink* getLink(int);
		void read(Stream&);
		void write(Stream&);

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

	// Size: 0xF0
	struct MapUnit {
		MapUnit();

		virtual void constructor();           // _00
		virtual void doAnimation();           // _04
		virtual void doEntry();               // _08
		virtual void doSetView(int);          // _0C
		virtual void doViewCalc();            // _10
		virtual void doSimulation(float);     // _14
		virtual void doDirectDraw(Graphics&); // _18

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

	struct MapUnitInterface : public PartsView {
		MapUnitInterface();
		Door* getDoor(int);
		void getCellSize(int&, int&);
	};

	struct MapUnitMgr : public NodeObjectMgr<MapUnit> {
		MapUnitMgr();
		void findMapUnit(char*);
		void load(char*);
		void loadShape(char*);
		void makeUnit(MapUnit*, char*);
		void testConstruct();
	};

	// Size: 0x1A0
	struct MapRoom : public CellObject {
		MapRoom();

		virtual void constructor();                   // _24
		virtual void doAnimation();                   // _28
		virtual void doEntry();                       // _2C
		virtual void doSetView(int);                  // _30
		virtual void doViewCalc();                    // _34
		virtual void doSimulation(float);             // _38
		virtual void doDirectDraw(Graphics&);         // _3C

		void countEnemys();
		void countItems();
		void create(MapUnit*, Matrixf&);
		void createDoorInfo(MapUnitInterface*);
		void createGlobalCollision();
		void getBoundingSphere(Sys::Sphere&);
		// getCenterPosition__Q24Game7MapRoomFR10Vector3f
		void getCenterPosition(Vector3f&);
		void placeObjects(Cave::FloorInfo*, bool);

		MapCollision* m_collision;         // _0B8
		u8 _0BC;                           // _0BC
		MapUnitInterface* m_interface;     // _0C0
		ObjectLayout* m_objectLayoutInfo;  // _0C4
		u8 _0C8[4];                        // _0C8
		Sys::MatLoopAnimator* m_animators; // _0CC
		int m_doorNum;                     // _0D0
		RoomDoorInfo* m_doorInfos;         // _0D4
		Matrixf _0D8;                      // _0D8
		Matrixf _108;                      // _108
		MapUnit* m_unit;                   // _138
		SysShape::Model* m_model;          // _13C
		Sys::Sphere m_boundingSphere;      // _140
		Sys::Sphere _150;                  // _150
		Sys::Cylinder _160;                // _160
		RoomLink* m_link;                  // _180
		short _184;                        // _184
		u16 m_unitKind;                    // _186
		u8 _188[2];                        // _188
		int* m_wpIndices;                  // _18C
		Sys::Sphere _190;                  // _190
	};

	struct ObjectLayoutNode : public CNode {
		virtual int getObjectId();
		virtual u8 getObjectType();
		virtual int getBirthCount();
		virtual double getDirection();
		virtual int getBirthDoorIndex();
		virtual void getBirthPosition(float&, float&);
		virtual u32 getExtraCode();
		virtual bool isFixedBattery();
	};

	struct RoomMapMgr : public MapMgr {
		void getMinY(Vector3f&);
		// void getStartPosition__Q24Game10RoomMapMgrFR10Vector3f i(void)
		void getStartPosition(Vector3f&, int);
		void nishimuraCreateRandomMap(MapUnitInterface*, int, Cave::FloorInfo*,
		                              bool, Cave::EditMapUnit*);
		void nishimuraPlaceRooms();
		void nishimuraSetTexture();
	};

	struct CaveVRBox {
	};
} // namespace Game


#endif
