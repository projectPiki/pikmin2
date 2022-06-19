#ifndef _GAME_FARM_H
#define _GAME_FARM_H

#include "JSystem/J3D/J3DModel.h"
#include "types.h"
#include "CNode.h"
#include "Game/FieldVtxColorMgr.h"
#include "GenericObjectMgr.h"
#include "SysShape/Model.h"
#include "Vector3.h"

namespace PSM {
struct DirectorUpdator;
} // namespace PSM

namespace Game {
struct Creature;

namespace Farm {
struct FarmMgr;
struct Obstacle;
struct Plant;

struct Farm : public CNode {
	Farm();
	virtual ~Farm(); // _00

	void loadResource(unsigned long, void*);
	void update();
	void doAnimation();
	void doEntry();
	void doSetView(unsigned long);
	void doViewCalc();
	Obstacle* addObstacle(Game::Creature*, float, float);
	Obstacle* createNewObstacle(Game::Creature*, float, float);
	Plant* addPlant(Game::Creature*);
	Plant* createNewPlant(Game::Creature*);
	void updateObjectRelation(bool);
	void doDebugDraw(Graphics&);
	void initAllObjectNodes();

	Vector3f m_position;             // _18
	J3DModelData* m_modelData;       // _24
	SysShape::Model* m_model;        // _28
	FieldVtxColorMgr* m_vtxColorMgr; // _2C
	CNode m_obstacleRootNode;        // _30
	CNode m_plantRootNode;           // _48
};

/**
 * @size{0x24}
 */
struct Obstacle : public CNode {
	Obstacle(Farm*, FieldVtxColorMgr*, Game::Creature*, float, float); // unused/inlined

	virtual ~Obstacle(); // _00

	void setPower(float);

	// Unused/inlined:
	void doDebugDraw(Graphics&);

	Farm* m_farm;                            // _18
	Game::Creature* m_creature;              // _1C
	FieldVtxColorControl* m_vtxColorControl; // _20
};

/**
 * @size{0x20}
 */
struct Plant : public CNode {
	Plant(Game::Creature*);

	virtual ~Plant(); // _00

	// Unused/inlined:
	void sendInteraction();
	void doDebugDraw(Graphics&);

	Game::Creature* m_creature; // _18
	u8 _1C[4];                  // _1C
};

struct FarmMgr : public GenericObjectMgr, public CNode {
	// vtable 1 (GenericObjectMgr)
	virtual void doAnimation();           // _00
	virtual void doEntry();               // _04
	virtual void doSetView(int);          // _08
	virtual void doViewCalc();            // _0C
	virtual void doSimulation(float);     // _10
	virtual void doDirectDraw(Graphics&); // _14

	// vtable 2 (CNode+self)
	virtual void doDebugDraw(Graphics&); // _08
	virtual ~FarmMgr();                  // _0C (thunked at _00)
	virtual void _48() = 0;              // _10

	void setupSound();
	void addFarmBmd(void*);
	Farm* createNewFarm(void*);
	Obstacle* addObstacle(Game::Creature*, float, float);
	Plant* addPlant(Game::Creature*);
	void initAllFarmObjectNodes();

	// Unused/inlined:
	Farm* getNearestFarm(Vector3f&);

	u32 _1C;                                 // _1C
	CNode m_farmsRootNode;                   // _20
	PSM::DirectorUpdator* m_directorUpdator; // _38
	u8 _3C;                                  // _3C
	u8 _3D;                                  // _3D
};

extern FarmMgr* farmMgr;
} // namespace Farm
} // namespace Game

#endif
