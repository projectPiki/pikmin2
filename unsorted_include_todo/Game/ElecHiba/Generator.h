#ifndef _GAME_ELECHIBA_GENERATOR_H
#define _GAME_ELECHIBA_GENERATOR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct EnemyGeneratorBase {
	virtual void _00() = 0;                   // _00
	virtual void _04() = 0;                   // _04
	virtual void _08() = 0;                   // _08
	virtual void _0C() = 0;                   // _0C
	virtual void _10() = 0;                   // _10
	virtual void draw(Graphics&, Generator*); // _14

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace ElecHiba {
	struct Generator : public CNode, public EnemyGeneratorBase {
		virtual ~Generator();                     // _00
		virtual void getChildCount();             // _04
		virtual void doWrite(Stream&);            // _08
		virtual void doRead(Stream&);             // _0C
		virtual void getLatestVersion();          // _10
		virtual void draw(Graphics&, Generator*); // _14
		virtual void getInitialParam();           // _18

		// _00 VTBL
	};
} // namespace ElecHiba
} // namespace Game

#endif
