#ifndef _GAME_PIKIMGR_H
#define _GAME_PIKIMGR_H

#include "types.h"

#include "Condition.h"
#include "CNode.h"
#include "MonoObjectMgr.h"

#include "Game/Piki.h"
#include "Game/PikiParms.h"

struct J3DModelData;
struct UpdateMgr;
struct JKRArchive;

namespace SysShape {
struct ModelMgr;
} // namespace SysShape

namespace Game {
struct PikiContainer;

struct PikiMgr : public MonoObjectMgr<Piki> {
	enum PikiSpawnMode {
		PSM_Normal,  // checks if we've hit 100 cap by active pikis or sprouts before spawning (wild pikis, out of onyons, etc)
		PSM_Force,   // does no checks, just spawns (plucking sprouts)
		PSM_Replace, // checks if we can spawn normally; if not, removes 'extra' wild bulbmin (when entering the next cave floor)
	};

	PikiMgr();

	// vtable 1
	virtual ~PikiMgr() { } // _08 (weak)
	// vtable 2
	virtual Piki* birth();                           // _7C
	virtual void doAnimation();                      // _64 (weak)
	virtual void doEntry();                          // _68 (weak)
	virtual void resetMgr();                         // _80 (weak)
	virtual void onAlloc();                          // _88
	virtual void doSimpleDraw(Viewport* vp);         // _8C (weak)
	virtual u32 getMatrixLoadType() { return 1; }    // _90 (weak)
	virtual char* getMgrName() { return "PikiMgr"; } // _94 (weak)
	virtual void loadResources() { }                 // _98 (weak)
	virtual void loadResources(int modelFlag);       // _9C

	void init();
	void setupPiki(Piki* piki);
	void load(int modelFlag);
	void loadBmd(int id, char* name);
	void createModelCallback(SysShape::Model* model);
	SysShape::Model* createModel(int id, int num);
	SysShape::Model* createLeafModel(int id, int num);
	void setMovieDraw(bool drawOn);
	void debugShapeDL(char* text);
	void setVsXlu(int naviIndex, bool ghostIconNotActive);
	void setupSoundViewerAndBas();
	int getColorTransportScale(int color);
	void allocStorePikmins();
	void clearStorePikmins();
	void saveStorePikmins(Condition<Piki>* cond);
	void getStorePikmin(int, int);
	void moveAllPikmins(Vector3f& pos, f32 radius, Condition<Piki>* cond);
	void forceEnterPikmins(u8 check);
	void killDayEndPikmins(PikiContainer& container);
	void killAllPikmins();
	void caveSaveFormationPikmins(bool doKill);
	void caveSaveAllPikmins(bool check1, bool check2);
	void saveFormationPikmins(PikiContainer& container);
	void saveAllPikmins(PikiContainer& container);

	inline void updateArrayAt(int i);

	static int mBirthMode;
	static bool throwPikiDebug;

	s32 mDopedPikis;               // _30
	s32* mStoredPikis;             // _34
	u8 mFlags[2];                  // _38
	J3DModelData* mBluPikiModel;   // _3C, blue
	J3DModelData* mRedPikiModel;   // _40, red
	J3DModelData* mYelPikiModel;   // _44, yellow
	J3DModelData* mPrpPikiModel;   // _48, purple
	J3DModelData* mWtePikiModel;   // _4C, white
	J3DModelData* mBlbPikiModel;   // _50, bulbmin
	J3DModelData* mCrtPikiModel;   // _54, carrot
	J3DModelData* mHappaModel[5];  // _58, indexed by EPikiHappa (leaf, bud, flower, red bud, red flower)
	PikiParms* mParms;             // _6C
	SysShape::ModelMgr* mModelMgr; // _70
	UpdateMgr* mUpdateMgr;         // _74
	UpdateMgr* mUpdateMgr2;        // _78, unsure of type
	JKRArchive* mModelArchive;     // _7C
};

extern PikiMgr* pikiMgr;
} // namespace Game

#endif
