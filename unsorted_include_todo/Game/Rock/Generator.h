#ifndef _GAME_ROCK_GENERATOR_H
#define _GAME_ROCK_GENERATOR_H

/*
    __vt__Q34Game4Rock9Generator:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Rock9GeneratorFv
    .4byte getChildCount__5CNodeFv
    .4byte doWrite__Q34Game4Rock9GeneratorFR6Stream
    .4byte doRead__Q34Game4Rock9GeneratorFR6Stream
    .4byte getLatestVersion__Q34Game4Rock9GeneratorFv
    .4byte draw__Q24Game18EnemyGeneratorBaseFR8GraphicsPQ24Game9Generator
    .4byte getInitialParam__Q34Game4Rock9GeneratorFv
*/

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
namespace Rock {
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
} // namespace Rock
} // namespace Game

#endif
