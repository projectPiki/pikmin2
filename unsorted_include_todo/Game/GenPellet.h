#ifndef _GAME_GENPELLET_H
#define _GAME_GENPELLET_H

namespace Game {
struct GenObject {
	virtual void _00() = 0;                     // _00
	virtual void _04() = 0;                     // _04
	virtual void _08() = 0;                     // _08
	virtual void _0C() = 0;                     // _0C
	virtual void _10() = 0;                     // _10
	virtual void update(Generator*);            // _14
	virtual void render(Graphics&, Generator*); // _18
	virtual void getLatestVersion();            // _1C

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct GenPellet : public GenObject {
	virtual void doWrite(Stream&);                               // _00
	virtual void ramSaveParameters(Stream&);                     // _04
	virtual void ramLoadParameters(Stream&);                     // _08
	virtual void doEvent(unsigned long);                         // _0C
	virtual void doRead(Stream&);                                // _10
	virtual void update(Generator*);                             // _14
	virtual void render(Graphics&, Generator*);                  // _18
	virtual void getLatestVersion();                             // _1C
	virtual void getShape();                                     // _20
	virtual void updateUseList(Generator*, int);                 // _24
	virtual void generate(Generator*);                           // _28
	virtual void birth(GenArg*);                                 // _2C
	virtual void generatorMakeMatrix(Matrixf&, Vector3<float>&); // _30
	virtual void getDebugInfo(char*);                            // _34

	// _00 VTBL
};
} // namespace Game

#endif
