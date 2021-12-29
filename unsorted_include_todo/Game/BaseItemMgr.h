#ifndef _GAME_BASEITEMMGR_H
#define _GAME_BASEITEMMGR_H

/*
    __vt__Q24Game11BaseItemMgr:
    .4byte 0
    .4byte 0
    .4byte doAnimation__Q24Game11BaseItemMgrFv
    .4byte doEntry__Q24Game11BaseItemMgrFv
    .4byte doSetView__Q24Game11BaseItemMgrFi
    .4byte doViewCalc__Q24Game11BaseItemMgrFv
    .4byte doSimulation__Q24Game11BaseItemMgrFf
    .4byte doDirectDraw__Q24Game11BaseItemMgrFR8Graphics
    .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
    .4byte loadResources__Q24Game11BaseItemMgrFv
    .4byte resetMgr__16GenericObjectMgrFv
    .4byte pausable__16GenericObjectMgrFv
    .4byte frozenable__16GenericObjectMgrFv
    .4byte getMatrixLoadType__16GenericObjectMgrFv
    .4byte 0
    .4byte killAll__Q24Game11BaseItemMgrFv
    .4byte setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem
    .4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
    .4byte onLoadResources__Q24Game11BaseItemMgrFv
    .4byte loadEverytime__Q24Game11BaseItemMgrFv
    .4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
    .4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
    .4byte 0
    .4byte 0
    .4byte generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm
    .4byte generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl
    .4byte generatorLocalVersion__Q24Game11BaseItemMgrFv
    .4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
    .4byte generatorNewItemParm__Q24Game11BaseItemMgrFv
*/

struct GenericObjectMgr {
	virtual void doAnimation();           // _00
	virtual void doEntry();               // _04
	virtual void doSetView(int);          // _08
	virtual void doViewCalc();            // _0C
	virtual void doSimulation(float);     // _10
	virtual void doDirectDraw(Graphics&); // _14
	virtual void doSimpleDraw(Viewport*); // _18
	virtual void loadResources();         // _1C
	virtual void resetMgr();              // _20
	virtual void pausable();              // _24
	virtual void frozenable();            // _28
	virtual void getMatrixLoadType();     // _2C

	// _00 VTBL
};

namespace Game {
struct BaseItemMgr : public GenericObjectMgr {
	virtual void doAnimation();                                       // _00
	virtual void doEntry();                                           // _04
	virtual void doSetView(int);                                      // _08
	virtual void doViewCalc();                                        // _0C
	virtual void doSimulation(float);                                 // _10
	virtual void doDirectDraw(Graphics&);                             // _14
	virtual void doSimpleDraw(Viewport*);                             // _18
	virtual void loadResources();                                     // _1C
	virtual void resetMgr();                                          // _20
	virtual void pausable();                                          // _24
	virtual void frozenable();                                        // _28
	virtual void getMatrixLoadType();                                 // _2C
	virtual void _30() = 0;                                           // _30
	virtual void killAll();                                           // _34
	virtual void setup(BaseItem*);                                    // _38
	virtual void setupSoundViewerAndBas();                            // _3C
	virtual void onLoadResources();                                   // _40
	virtual void loadEverytime();                                     // _44
	virtual void updateUseList(GenItemParm*, int);                    // _48
	virtual void onUpdateUseList(GenItemParm*, int);                  // _4C
	virtual void _50() = 0;                                           // _50
	virtual void _54() = 0;                                           // _54
	virtual void generatorWrite(Stream&, GenItemParm*);               // _58
	virtual void generatorRead(Stream&, GenItemParm*, unsigned long); // _5C
	virtual void generatorLocalVersion();                             // _60
	virtual void generatorGetShape(GenItemParm*);                     // _64
	virtual void generatorNewItemParm();                              // _68

	// _00 VTBL
};
} // namespace Game

#endif
