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
	virtual void doAnimation();           // _08 (inline)
	virtual void doEntry();               // _0C (inline)
	virtual void doSetView(int);          // _10 (inline)
	virtual void doViewCalc();            // _14 (inline)
	virtual void doSimulation(float);     // _18 (inline)
	virtual void doDirectDraw(Graphics&); // _1C (inline)
	virtual void doSimpleDraw(Viewport*); // _20 (inline)
	virtual void loadResources();         // _24
	virtual void resetMgr();              // _28 (inline)
	virtual void pausable();              // _2C (inline)
	virtual void frozenable();            // _30 (inline)
	virtual void getMatrixLoadType();     // _34 (inline)
};

namespace Game {
struct BaseItemMgr : public GenericObjectMgr {
	virtual void doAnimation();                                       // _08 (inline)
	virtual void doEntry();                                           // _0C (inline)
	virtual void doSetView(int);                                      // _10 (inline)
	virtual void doViewCalc();                                        // _14 (inline)
	virtual void doSimulation(float);                                 // _18 (inline)
	virtual void doDirectDraw(Graphics&);                             // _1C (inline)
	virtual void loadResources();                                     // _24
	virtual void _38() = 0;                                           // _38
	virtual void killAll();                                           // _3C (inline)
	virtual void setup(BaseItem*);                                    // _40 (inline)
	virtual void setupSoundViewerAndBas();                            // _44
	virtual void onLoadResources();                                   // _48 (inline)
	virtual void loadEverytime();                                     // _4C (inline)
	virtual void updateUseList(GenItemParm*, int);                    // _50
	virtual void onUpdateUseList(GenItemParm*, int);                  // _54 (inline)
	virtual void _58() = 0;                                           // _58
	virtual void _5C() = 0;                                           // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);               // _60 (inline)
	virtual void generatorRead(Stream&, GenItemParm*, unsigned long); // _64 (inline)
	virtual void generatorLocalVersion();                             // _68 (inline)
	virtual void generatorGetShape(GenItemParm*);                     // _6C
	virtual void generatorNewItemParm();                              // _70

	BaseItemMgr(int);
	void setModelSize(int);
	void loadArchive(char*);
	void loadBmd(char*, int, unsigned long);
	void loadAnimMgr(JKRFileLoader*, char*);
	void loadCollision(JKRFileLoader*, char*);
	void getModelData(int);
	void openTextArc(char*);
	void closeTextArc(JKRArchive*);
	void loadPlatform(JKRFileLoader*, char*);
	void loadPlatAttacher(JKRFileLoader*, char*);
};
} // namespace Game

#endif
