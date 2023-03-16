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
	PikiMgr();

	// vtable 1
	virtual ~PikiMgr(); // _08 (weak)
	// vtable 2
	virtual void doAnimation();           // _64 (weak)
	virtual void doEntry();               // _68 (weak)
	virtual Piki* birth();                // _7C
	virtual void resetMgr();              // _80 (weak)
	virtual void onAlloc();               // _88
	virtual void doSimpleDraw(Viewport*); // _8C (weak)
	virtual u32 getMatrixLoadType();      // _90 (weak)
	virtual char* getMgrName();           // _94 (weak)
	virtual void loadResources();         // _98 (weak)
	virtual void loadResources(int);      // _9C

	void init();
	void setupPiki(Piki*);
	void load(int);
	void loadBmd(int, char*);
	void createModelCallback(SysShape::Model*);
	SysShape::Model* createModel(int, int);
	SysShape::Model* createLeafModel(int, int);
	void setMovieDraw(bool);
	void debugShapeDL(char*);
	void setVsXlu(int, bool);
	void setupSoundViewerAndBas();
	int getColorTransportScale(int);
	void allocStorePikmins();
	void clearStorePikmins();
	void saveStorePikmins(Condition<Piki>*);
	void getStorePikmin(int, int);
	void moveAllPikmins(Vector3f&, f32, Condition<Piki>*);
	void forceEnterPikmins(u8);
	void killDayEndPikmins(PikiContainer&);
	void killAllPikmins();
	void caveSaveFormationPikmins(bool);
	void caveSaveAllPikmins(bool, bool);
	void saveFormationPikmins(PikiContainer&);
	void saveAllPikmins(PikiContainer&);

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
	J3DModelData* mLeafModel;      // _58
	J3DModelData* mBudModel;       // _5C
	J3DModelData* mFlowerModel;    // _60
	J3DModelData* mRedBudModel;    // _64
	J3DModelData* mRedFlowerModel; // _68
	PikiParms* mParms;             // _6C
	SysShape::ModelMgr* mModelMgr; // _70
	UpdateMgr* mUpdateMgr;         // _74
	UpdateMgr* mUpdateMgr2;        // _78, unsure of type
	JKRArchive* mModelArchive;     // _7C
};

extern PikiMgr* pikiMgr;
} // namespace Game

#endif
