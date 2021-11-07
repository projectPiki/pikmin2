#ifndef _GAME_ENEMYGENERATORBASE_H
#define _GAME_ENEMYGENERATORBASE_H

struct CNode {
	virtual void _00() = 0;       // _00
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
