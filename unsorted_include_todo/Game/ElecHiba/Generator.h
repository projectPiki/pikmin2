#ifndef _GAME_ELECHIBA_GENERATOR_H
#define _GAME_ELECHIBA_GENERATOR_H

/*
    __vt__Q34Game8ElecHiba9Generator:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game8ElecHiba9GeneratorFv
    .4byte getChildCount__5CNodeFv
    .4byte doWrite__Q34Game8ElecHiba9GeneratorFR6Stream
    .4byte doRead__Q34Game8ElecHiba9GeneratorFR6Stream
    .4byte getLatestVersion__Q34Game8ElecHiba9GeneratorFv
    .4byte draw__Q24Game18EnemyGeneratorBaseFR8GraphicsPQ24Game9Generator
    .4byte getInitialParam__Q34Game8ElecHiba9GeneratorFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct EnemyGeneratorBase {
	virtual ~EnemyGeneratorBase();            // _08 (weak)
	virtual void _0C() = 0;                   // _0C
	virtual void doWrite(Stream&);            // _10
	virtual void doRead(Stream&);             // _14
	virtual void getLatestVersion();          // _18
	virtual void draw(Graphics&, Generator*); // _1C (weak)
};
} // namespace Game

namespace Game {
namespace ElecHiba {
struct Generator : public CNode, public EnemyGeneratorBase {
	virtual ~Generator();            // _08 (weak)
	virtual void doWrite(Stream&);   // _10
	virtual void doRead(Stream&);    // _14
	virtual void getLatestVersion(); // _18
	virtual void getInitialParam();  // _20 (weak)

	Generator();
	void doReadLatestVersion(Stream&);
	void doReadOldVersion(Stream&);
};
} // namespace ElecHiba
} // namespace Game

#endif
