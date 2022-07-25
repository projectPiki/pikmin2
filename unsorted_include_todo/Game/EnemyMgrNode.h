#ifndef _GAME_ENEMYMGRNODE_H
#define _GAME_ENEMYMGRNODE_H

/*
    __vt__Q24Game12EnemyMgrNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game12EnemyMgrNodeFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
    .4byte 0
    .4byte "@24@doAnimation__Q24Game12EnemyMgrNodeFv"
    .4byte "@24@doEntry__Q24Game12EnemyMgrNodeFv"
    .4byte "@24@doSetView__Q24Game12EnemyMgrNodeFi"
    .4byte "@24@doViewCalc__Q24Game12EnemyMgrNodeFv"
    .4byte "@24@doSimulation__Q24Game12EnemyMgrNodeFf"
    .4byte "@24@doDirectDraw__Q24Game12EnemyMgrNodeFR8Graphics"
    .4byte "@24@doSimpleDraw__Q24Game12EnemyMgrNodeFP8Viewport"
    .4byte loadResources__16GenericObjectMgrFv
    .4byte resetMgr__16GenericObjectMgrFv
    .4byte pausable__16GenericObjectMgrFv
    .4byte frozenable__16GenericObjectMgrFv
    .4byte "@24@getMatrixLoadType__Q24Game12EnemyMgrNodeFv"
    .4byte doAnimation__Q24Game12EnemyMgrNodeFv
    .4byte doEntry__Q24Game12EnemyMgrNodeFv
    .4byte doSetView__Q24Game12EnemyMgrNodeFi
    .4byte doViewCalc__Q24Game12EnemyMgrNodeFv
    .4byte doSimulation__Q24Game12EnemyMgrNodeFf
    .4byte doDirectDraw__Q24Game12EnemyMgrNodeFR8Graphics
    .4byte doSimpleDraw__Q24Game12EnemyMgrNodeFP8Viewport
    .4byte killAll__Q24Game12EnemyMgrNodeFPQ24Game15CreatureKillArg
    .4byte setupSoundViewerAndBas__Q24Game12EnemyMgrNodeFv
    .4byte setDebugParm__Q24Game12EnemyMgrNodeFUl
    .4byte resetDebugParm__Q24Game12EnemyMgrNodeFUl
    .4byte startMovie__Q24Game12EnemyMgrNodeFv
    .4byte endMovie__Q24Game12EnemyMgrNodeFv
    .4byte getMatrixLoadType__Q24Game12EnemyMgrNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

struct GenericObjectMgr {
	virtual ~GenericObjectMgr();  // _08 (weak)
	virtual void _0C() = 0;       // _0C
	virtual void _10() = 0;       // _10
	virtual void _14() = 0;       // _14
	virtual void _18() = 0;       // _18
	virtual void _1C() = 0;       // _1C
	virtual void _20() = 0;       // _20
	virtual void _24() = 0;       // _24
	virtual void _28() = 0;       // _28
	virtual void _2C() = 0;       // _2C
	virtual void _30() = 0;       // _30
	virtual void loadResources(); // _34 (weak)
	virtual void resetMgr();      // _38 (weak)
	virtual void pausable();      // _3C (weak)
	virtual void frozenable();    // _40 (weak)
};

namespace Game {
struct EnemyMgrNode : public CNode, public GenericObjectMgr {
	virtual ~EnemyMgrNode();                    // _08 (weak)
	virtual void _10() = 0;                     // _10
	virtual void _14() = 0;                     // _14
	virtual void doAnimation();                 // _48 (weak)
	virtual void doEntry();                     // _4C (weak)
	virtual void doSetView(int);                // _50 (weak)
	virtual void doViewCalc();                  // _54 (weak)
	virtual void doSimulation(float);           // _58 (weak)
	virtual void doDirectDraw(Graphics&);       // _5C (weak)
	virtual void doSimpleDraw(Viewport*);       // _60 (weak)
	virtual void killAll(CreatureKillArg*);     // _64 (weak)
	virtual void setupSoundViewerAndBas();      // _68 (weak)
	virtual void setDebugParm(unsigned long);   // _6C (weak)
	virtual void resetDebugParm(unsigned long); // _70 (weak)
	virtual void startMovie();                  // _74 (weak)
	virtual void endMovie();                    // _78 (weak)
	virtual void getMatrixLoadType();           // _7C (weak)
};
} // namespace Game

#endif
