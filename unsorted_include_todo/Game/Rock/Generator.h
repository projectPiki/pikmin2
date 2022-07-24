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
	virtual void _08() = 0;       // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct EnemyGeneratorBase {
	virtual void _08() = 0;                   // _08
	virtual void _0C() = 0;                   // _0C
	virtual void _10() = 0;                   // _10
	virtual void _14() = 0;                   // _14
	virtual void _18() = 0;                   // _18
	virtual void draw(Graphics&, Generator*); // _1C

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace Rock {
struct Generator : public CNode, public EnemyGeneratorBase {
	virtual ~Generator();            // _08
	virtual void doWrite(Stream&);   // _10
	virtual void doRead(Stream&);    // _14
	virtual void getLatestVersion(); // _18
	virtual void getInitialParam();  // _20

	// _00 VTBL
};
} // namespace Rock
} // namespace Game

#endif
