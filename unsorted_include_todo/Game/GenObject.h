#ifndef _GAME_GENOBJECT_H
#define _GAME_GENOBJECT_H

/*
    __vt__Q24Game9GenObject:
    .4byte 0
    .4byte 0
    .4byte doWrite__Q24Game7GenBaseFR6Stream
    .4byte ramSaveParameters__Q24Game7GenBaseFR6Stream
    .4byte ramLoadParameters__Q24Game7GenBaseFR6Stream
    .4byte doEvent__Q24Game7GenBaseFUl
    .4byte doRead__Q24Game7GenBaseFR6Stream
    .4byte update__Q24Game9GenObjectFPQ24Game9Generator
    .4byte render__Q24Game9GenObjectFR8GraphicsPQ24Game9Generator
    .4byte getLatestVersion__Q24Game9GenObjectFv
    .4byte getShape__Q24Game7GenBaseFv
    .4byte updateUseList__Q24Game9GenObjectFPQ24Game9Generatori
    .4byte generate__Q24Game9GenObjectFPQ24Game9Generator
    .4byte 0
    .4byte "generatorMakeMatrix__Q24Game9GenObjectFR7MatrixfR10Vector3<f>"
    .4byte getDebugInfo__Q24Game9GenObjectFPc
*/

namespace Game {
struct GenBase {
	virtual void doWrite(Stream&);              // _00
	virtual void ramSaveParameters(Stream&);    // _04
	virtual void ramLoadParameters(Stream&);    // _08
	virtual void doEvent(unsigned long);        // _0C
	virtual void doRead(Stream&);               // _10
	virtual void update(Generator*);            // _14
	virtual void render(Graphics&, Generator*); // _18
	virtual void getLatestVersion();            // _1C
	virtual void getShape();                    // _20

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct GenObject : public GenBase {
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
	virtual void _2C() = 0;                                      // _2C
	virtual void generatorMakeMatrix(Matrixf&, Vector3<float>&); // _30
	virtual void getDebugInfo(char*);                            // _34

	// _00 VTBL
};
} // namespace Game

#endif
