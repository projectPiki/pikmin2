#ifndef _GAME_BASEPELLETMGR_H
#define _GAME_BASEPELLETMGR_H

/*
    __vt__Q24Game13BasePelletMgr:
    .4byte 0
    .4byte 0
    .4byte doAnimation__Q24Game13BasePelletMgrFv
    .4byte doEntry__Q24Game13BasePelletMgrFv
    .4byte doSetView__Q24Game13BasePelletMgrFi
    .4byte doViewCalc__Q24Game13BasePelletMgrFv
    .4byte doSimulation__Q24Game13BasePelletMgrFf
    .4byte doDirectDraw__Q24Game13BasePelletMgrFR8Graphics
    .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
    .4byte loadResources__16GenericObjectMgrFv
    .4byte 0
    .4byte pausable__16GenericObjectMgrFv
    .4byte frozenable__16GenericObjectMgrFv
    .4byte getMatrixLoadType__16GenericObjectMgrFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte onCreateModel__Q24Game13BasePelletMgrFPQ28SysShape5Model
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte createShape__Q24Game13BasePelletMgrFii
    .4byte "generatorBirth__Q24Game13BasePelletMgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm"
    .4byte generatorWrite__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParm
    .4byte generatorRead__Q24Game13BasePelletMgrFR6StreamPQ24Game13GenPelletParmUl
    .4byte generatorLocalVersion__Q24Game13BasePelletMgrFv
    .4byte generatorGetShape__Q24Game13BasePelletMgrFPQ24Game13GenPelletParm
    .4byte generatorNewPelletParm__Q24Game13BasePelletMgrFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct GenericObjectMgr {
	virtual void doAnimation();           // _08 (weak)
	virtual void doEntry();               // _0C (weak)
	virtual void doSetView(int);          // _10 (weak)
	virtual void doViewCalc();            // _14 (weak)
	virtual void doSimulation(float);     // _18 (weak)
	virtual void doDirectDraw(Graphics&); // _1C (weak)
	virtual void doSimpleDraw(Viewport*); // _20 (weak)
	virtual void loadResources();         // _24 (weak)
	virtual void _28() = 0;               // _28
	virtual void pausable();              // _2C (weak)
	virtual void frozenable();            // _30 (weak)
	virtual void getMatrixLoadType();     // _34 (weak)
};

namespace Game {
struct BasePelletMgr : public GenericObjectMgr {
	virtual void doAnimation();                                                    // _08 (weak)
	virtual void doEntry();                                                        // _0C (weak)
	virtual void doSetView(int);                                                   // _10 (weak)
	virtual void doViewCalc();                                                     // _14 (weak)
	virtual void doSimulation(float);                                              // _18 (weak)
	virtual void doDirectDraw(Graphics&);                                          // _1C (weak)
	virtual void _28() = 0;                                                        // _28
	virtual void _38() = 0;                                                        // _38
	virtual void _3C() = 0;                                                        // _3C
	virtual void _40() = 0;                                                        // _40
	virtual void _44() = 0;                                                        // _44
	virtual void _48() = 0;                                                        // _48
	virtual void _4C() = 0;                                                        // _4C
	virtual void _50() = 0;                                                        // _50
	virtual void onCreateModel(SysShape::Model*);                                  // _54 (weak)
	virtual void _58() = 0;                                                        // _58
	virtual void _5C() = 0;                                                        // _5C
	virtual void _60() = 0;                                                        // _60
	virtual void _64() = 0;                                                        // _64
	virtual void _68() = 0;                                                        // _68
	virtual void createShape(int, int);                                            // _6C
	virtual void generatorBirth(Vector3<float>&, Vector3<float>&, GenPelletParm*); // _70 (weak)
	virtual void generatorWrite(Stream&, GenPelletParm*);                          // _74 (weak)
	virtual void generatorRead(Stream&, GenPelletParm*, unsigned long);            // _78 (weak)
	virtual void generatorLocalVersion();                                          // _7C (weak)
	virtual void generatorGetShape(GenPelletParm*);                                // _80
	virtual void generatorNewPelletParm();                                         // _84
	virtual void _88() = 0;                                                        // _88
	virtual void _8C() = 0;                                                        // _8C
	virtual void _90() = 0;                                                        // _90
	virtual void _94() = 0;                                                        // _94

	BasePelletMgr(Game::PelletList::cKind);
	void getPelletConfig(int);
	void setUse(int);
	void load();
	void load_texArc(char*);
	void openTextArc(char*);
	void closeTextArc(JKRArchive*);
	void useModelMgr(int, unsigned long);
	void createModelCallback(SysShape::Model*);
	void setCollTree(Game::Pellet*, int);
};
} // namespace Game

#endif
