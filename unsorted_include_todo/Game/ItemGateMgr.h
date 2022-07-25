#ifndef _GAME_ITEMGATEMGR_H
#define _GAME_ITEMGATEMGR_H

/*
    __vt__Q24Game11ItemGateMgr:
    .4byte 0
    .4byte 0
    .4byte doAnimation__Q24Game11ItemGateMgrFv
    .4byte doEntry__Q24Game11ItemGateMgrFv
    .4byte doSetView__Q24Game11ItemGateMgrFi
    .4byte doViewCalc__Q24Game11ItemGateMgrFv
    .4byte doSimulation__Q24Game11ItemGateMgrFf
    .4byte doDirectDraw__Q24Game11ItemGateMgrFR8Graphics
    .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
    .4byte loadResources__Q24Game11BaseItemMgrFv
    .4byte resetMgr__16GenericObjectMgrFv
    .4byte pausable__16GenericObjectMgrFv
    .4byte frozenable__16GenericObjectMgrFv
    .4byte getMatrixLoadType__16GenericObjectMgrFv
    .4byte initDependency__Q24Game11ItemGateMgrFv
    .4byte killAll__Q24Game11BaseItemMgrFv
    .4byte setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem
    .4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
    .4byte onLoadResources__Q24Game11BaseItemMgrFv
    .4byte loadEverytime__Q24Game11BaseItemMgrFv
    .4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
    .4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
    .4byte generatorGetID__Q24Game11ItemGateMgrFv
    .4byte "generatorBirth__Q24Game11ItemGateMgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
    .4byte generatorWrite__Q24Game11ItemGateMgrFR6StreamPQ24Game11GenItemParm
    .4byte generatorRead__Q24Game11ItemGateMgrFR6StreamPQ24Game11GenItemParmUl
    .4byte generatorLocalVersion__Q24Game11ItemGateMgrFv
    .4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
    .4byte generatorNewItemParm__Q24Game11ItemGateMgrFv
    .4byte getCaveName__Q24Game11ItemGateMgrFi
    .4byte getCaveID__Q24Game11ItemGateMgrFPc
*/

struct GenericObjectMgr {
	virtual void doAnimation();           // _08 (weak)
	virtual void doEntry();               // _0C (weak)
	virtual void doSetView(int);          // _10 (weak)
	virtual void doViewCalc();            // _14 (weak)
	virtual void doSimulation(float);     // _18 (weak)
	virtual void doDirectDraw(Graphics&); // _1C (weak)
	virtual void doSimpleDraw(Viewport*); // _20 (weak)
	virtual void _24() = 0;               // _24
	virtual void resetMgr();              // _28 (weak)
	virtual void pausable();              // _2C (weak)
	virtual void frozenable();            // _30 (weak)
	virtual void getMatrixLoadType();     // _34 (weak)
};

namespace Game {
struct BaseItemMgr {
	virtual void doAnimation();                                                  // _08 (weak)
	virtual void doEntry();                                                      // _0C (weak)
	virtual void doSetView(int);                                                 // _10 (weak)
	virtual void doViewCalc();                                                   // _14 (weak)
	virtual void doSimulation(float);                                            // _18 (weak)
	virtual void doDirectDraw(Graphics&);                                        // _1C (weak)
	virtual void _20() = 0;                                                      // _20
	virtual void loadResources();                                                // _24
	virtual void _28() = 0;                                                      // _28
	virtual void _2C() = 0;                                                      // _2C
	virtual void _30() = 0;                                                      // _30
	virtual void _34() = 0;                                                      // _34
	virtual void initDependency();                                               // _38
	virtual void killAll();                                                      // _3C (weak)
	virtual void setup(BaseItem*);                                               // _40 (weak)
	virtual void setupSoundViewerAndBas();                                       // _44
	virtual void onLoadResources();                                              // _48 (weak)
	virtual void loadEverytime();                                                // _4C (weak)
	virtual void updateUseList(GenItemParm*, int);                               // _50
	virtual void onUpdateUseList(GenItemParm*, int);                             // _54 (weak)
	virtual void generatorGetID();                                               // _58 (weak)
	virtual void generatorBirth(Vector3<float>&, Vector3<float>&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                          // _60
	virtual void generatorRead(Stream&, GenItemParm*, unsigned long);            // _64
	virtual void generatorLocalVersion();                                        // _68 (weak)
	virtual void generatorGetShape(GenItemParm*);                                // _6C
};
} // namespace Game

namespace Game {
struct ItemGateMgr : public GenericObjectMgr, public BaseItemMgr {
	virtual void doAnimation();                                                  // _08 (weak)
	virtual void doEntry();                                                      // _0C (weak)
	virtual void doSetView(int);                                                 // _10 (weak)
	virtual void doViewCalc();                                                   // _14 (weak)
	virtual void doSimulation(float);                                            // _18 (weak)
	virtual void doDirectDraw(Graphics&);                                        // _1C (weak)
	virtual void initDependency();                                               // _38
	virtual void generatorGetID();                                               // _58 (weak)
	virtual void generatorBirth(Vector3<float>&, Vector3<float>&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                          // _60
	virtual void generatorRead(Stream&, GenItemParm*, unsigned long);            // _64
	virtual void generatorLocalVersion();                                        // _68 (weak)
	virtual void generatorNewItemParm();                                         // _70
	virtual void getCaveName(int);                                               // _74
	virtual void getCaveID(char*);                                               // _78

	ItemGateMgr();
	void setupGate(Game::ItemGate*);
	void setupPlatform(Game::ItemGate*);
	void birth();
};
} // namespace Game

#endif
