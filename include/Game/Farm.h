#ifndef _GAME_FARM_H
#define _GAME_FARM_H

#include "JSystem/J3D/J3DModel.h"
#include "types.h"
#include "CNode.h"
#include "Game/FieldVtxColorMgr.h"
#include "GenericObjectMgr.h"
#include "SysShape/Model.h"
#include "Vector3.h"
#include "Game/Creature.h"

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

	virtual ~Farm(); // _08 (weak)

	void loadResource(u32, void*);
	void update();
	void doAnimation();
	void doEntry();
	void doSetView(u32);
	void doViewCalc();
	Obstacle* addObstacle(Creature*, f32, f32);
	Obstacle* createNewObstacle(Creature*, f32, f32);
	Plant* addPlant(Creature*);
	Plant* createNewPlant(Creature*);
	void updateObjectRelation(bool);
	void doDebugDraw(Graphics&);
	void initAllObjectNodes();

	Vector3f mPosition;             // _18
	J3DModelData* mModelData;       // _24
	SysShape::Model* mModel;        // _28
	FieldVtxColorMgr* mVtxColorMgr; // _2C
	CNode mObstacleRootNode;        // _30
	CNode mPlantRootNode;           // _48
};

/**
 * @size{0x24}
 */
struct Obstacle : public CNode {
	Obstacle(Farm* farm, FieldVtxColorMgr* vtxColorMgr, Game::Creature* creature, f32 p2, f32 p3);

	virtual ~Obstacle(); // _08 (weak)

	void setPower(f32);

	// Unused/inlined:
	void doDebugDraw(Graphics&);

	Farm* mFarm;                            // _18
	Creature* mCreature;                    // _1C
	FieldVtxColorControl* mVtxColorControl; // _20
};

/**
 * @size{0x20}
 */
struct Plant : public CNode {
	Plant(Game::Creature* creature);

	virtual ~Plant(); // _08 (weak)

	// Unused/inlined:
	void sendInteraction();
	void doDebugDraw(Graphics&);

	Creature* mCreature; // _18
	int mCurrentPower;   // _1C
};

struct FarmMgr : public GenericObjectMgr, public CNode {
	FarmMgr(u32);

	// vtable 1 (GenericObjectMgr)
	virtual void doAnimation();                 // _08
	virtual void doEntry();                     // _0C
	virtual void doSetView(int viewportNumber); // _10
	virtual void doViewCalc();                  // _14
	virtual void doSimulation(f32);             // _18
	virtual void doDirectDraw(Graphics& gfx);   // _1C
	// vtable 2 (CNode+self)
	virtual void doDebugDraw(Graphics& gfx); // _48
	virtual ~FarmMgr();                      // _4C (thunked at _40)

	void setupSound();
	void addFarmBmd(void*);
	Farm* createNewFarm(void*);
	Obstacle* addObstacle(Creature*, f32, f32);
	Plant* addPlant(Creature*);
	void initAllFarmObjectNodes();

	// Unused/inlined:
	inline Farm* getNearestFarm(Vector3f&);

	u32 mModelType;                         // _1C
	CNode mFarmsRootNode;                   // _20
	PSM::DirectorUpdator* mDirectorUpdator; // _38
	u8 mUnused1;                            // _3C
	u8 mUnused2;                            // _3D
};

extern FarmMgr* farmMgr;
} // namespace Farm
} // namespace Game

#endif
