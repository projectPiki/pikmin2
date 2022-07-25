#ifndef _GAME_SHADOWMGR_H
#define _GAME_SHADOWMGR_H

/*
    __vt__Q24Game9ShadowMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game9ShadowMgrFv
    .4byte getChildCount__5CNodeFv
    .4byte getSize__Q24Game9ShadowMgrFv
    .4byte getMax__Q24Game9ShadowMgrFv
    .4byte getCreature__Q24Game9ShadowMgrFi
    .4byte getFirst__Q24Game9ShadowMgrFv
    .4byte getNext__Q24Game9ShadowMgrFi
    .4byte isDone__Q24Game9ShadowMgrFi
    .4byte write__Q24Game9ShadowMgrFR6Stream
    .4byte read__Q24Game9ShadowMgrFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct ShadowMgr : public CNode {
	virtual ~ShadowMgr();          // _08 (weak)
	virtual void getSize();        // _10
	virtual void getMax();         // _14
	virtual void getCreature(int); // _18
	virtual void getFirst();       // _1C
	virtual void getNext(int);     // _20
	virtual void isDone(int);      // _24
	virtual void write(Stream&);   // _28
	virtual void read(Stream&);    // _2C

	ShadowMgr(int);
	void loadResource();
	void init();
	void setViewport(Viewport*, int);
	void setShadowColor(Color4*);
	void update();
	void draw(Graphics&, int);
	void createShadow(Game::Creature*);
	void killAll();
	void killShadow(Game::Creature*);
	void addShadow(Game::Creature*);
	void delShadow(Game::Creature*);
	void addNormalShadow(Game::Creature*);
	void addJointShadow(Game::Creature*);
	void delNormalShadow(Game::Creature*);
	void delJointShadow(Game::Creature*);
	void killNormalShadow(Game::Creature*);
	void killJointShadow(Game::Creature*);
	void setJointShadowRootNode(Game::JointShadowRootNode*);
	void setForceVisible(Game::Creature*, bool);
	void getShadowMaskType(int, int);
	void getShadowType(int, int);
	void isDrawNormalShadow(Game::ShadowNode*, int);
	void isDrawJointShadow(Game::JointShadowRootNode*, int);
	void readShadowParms(char*);
};
} // namespace Game

#endif
