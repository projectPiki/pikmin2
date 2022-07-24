#ifndef _GAME_QURIONE_GENERATOR_H
#define _GAME_QURIONE_GENERATOR_H

/*
    __vt__Q34Game7Qurione9Generator:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game7Qurione9GeneratorFv
    .4byte getChildCount__5CNodeFv
    .4byte doWrite__Q34Game7Qurione9GeneratorFR6Stream
    .4byte doRead__Q34Game7Qurione9GeneratorFR6Stream
    .4byte getLatestVersion__Q34Game7Qurione9GeneratorFv
    .4byte draw__Q24Game18EnemyGeneratorBaseFR8GraphicsPQ24Game9Generator
    .4byte getInitialParam__Q34Game7Qurione9GeneratorFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct EnemyGeneratorBase {
	virtual ~EnemyGeneratorBase();            // _08 (inline)
	virtual void _0C() = 0;                   // _0C
	virtual void doWrite(Stream&);            // _10
	virtual void doRead(Stream&);             // _14
	virtual void getLatestVersion();          // _18
	virtual void draw(Graphics&, Generator*); // _1C (inline)
};
} // namespace Game

namespace Game {
namespace Qurione {
struct Generator : public CNode, public EnemyGeneratorBase {
	virtual ~Generator();            // _08 (inline)
	virtual void doWrite(Stream&);   // _10
	virtual void doRead(Stream&);    // _14
	virtual void getLatestVersion(); // _18
	virtual void getInitialParam();  // _20 (inline)

	Generator();
	void doReadLatestVersion(Stream&);
	void doReadOldVersion(Stream&);
};
} // namespace Qurione
} // namespace Game

#endif
