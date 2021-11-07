#ifndef _GAME_GENOBJECTNAVI_H
#define _GAME_GENOBJECTNAVI_H

namespace Game {
struct GenBase {
	virtual void doWrite(Stream&);       // _00
	virtual void _04() = 0;              // _04
	virtual void _08() = 0;              // _08
	virtual void doEvent(unsigned long); // _0C
	virtual void doRead(Stream&);        // _10
	virtual void _14() = 0;              // _14
	virtual void _18() = 0;              // _18
	virtual void _1C() = 0;              // _1C
	virtual void getShape();             // _20

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct GenObject {
	virtual void _00() = 0;                                      // _00
	virtual void _04() = 0;                                      // _04
	virtual void _08() = 0;                                      // _08
	virtual void _0C() = 0;                                      // _0C
	virtual void _10() = 0;                                      // _10
	virtual void update(Generator*);                             // _14
	virtual void render(Graphics&, Generator*);                  // _18
	virtual void getLatestVersion();                             // _1C
	virtual void _20() = 0;                                      // _20
	virtual void updateUseList(Generator*, int);                 // _24
	virtual void _28() = 0;                                      // _28
	virtual void _2C() = 0;                                      // _2C
	virtual void generatorMakeMatrix(Matrixf&, Vector3<float>&); // _30
	virtual void getDebugInfo(char*);                            // _34

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct GenObjectNavi : public GenBase, public GenObject {
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
