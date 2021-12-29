#ifndef _GAME_ENEMYGENERATORBASE_H
#define _GAME_ENEMYGENERATORBASE_H

/*
    __vt__Q24Game18EnemyGeneratorBase:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game18EnemyGeneratorBaseFv
    .4byte getChildCount__5CNodeFv
    .4byte doWrite__Q24Game18EnemyGeneratorBaseFR6Stream
    .4byte doRead__Q24Game18EnemyGeneratorBaseFR6Stream
    .4byte getLatestVersion__Q24Game18EnemyGeneratorBaseFv
    .4byte draw__Q24Game18EnemyGeneratorBaseFR8GraphicsPQ24Game9Generator
    .4byte getInitialParam__Q24Game18EnemyGeneratorBaseFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct EnemyGeneratorBase : public CNode {
	virtual ~EnemyGeneratorBase();            // _00
	virtual void getChildCount();             // _04
	virtual void doWrite(Stream&);            // _08
	virtual void doRead(Stream&);             // _0C
	virtual void getLatestVersion();          // _10
	virtual void draw(Graphics&, Generator*); // _14
	virtual void getInitialParam();           // _18

	// _00 VTBL
};
} // namespace Game

#endif
