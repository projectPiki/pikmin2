#ifndef _GAME_GENPELLET_H
#define _GAME_GENPELLET_H

/*
    __vt__Q24Game9GenPellet:
    .4byte 0
    .4byte 0
    .4byte doWrite__Q24Game9GenPelletFR6Stream
    .4byte ramSaveParameters__Q24Game9GenPelletFR6Stream
    .4byte ramLoadParameters__Q24Game9GenPelletFR6Stream
    .4byte doEvent__Q24Game9GenPelletFUl
    .4byte doRead__Q24Game9GenPelletFR6Stream
    .4byte update__Q24Game9GenObjectFPQ24Game9Generator
    .4byte render__Q24Game9GenObjectFR8GraphicsPQ24Game9Generator
    .4byte getLatestVersion__Q24Game9GenObjectFv
    .4byte getShape__Q24Game9GenPelletFv
    .4byte updateUseList__Q24Game9GenPelletFPQ24Game9Generatori
    .4byte generate__Q24Game9GenPelletFPQ24Game9Generator
    .4byte birth__Q24Game9GenPelletFPQ24Game6GenArg
    .4byte "generatorMakeMatrix__Q24Game9GenPelletFR7MatrixfR10Vector3<f>"
    .4byte getDebugInfo__Q24Game9GenPelletFPc
*/

namespace Game {
struct GenObject {
	virtual void doWrite(Stream&);              // _08
	virtual void ramSaveParameters(Stream&);    // _0C
	virtual void ramLoadParameters(Stream&);    // _10
	virtual void doEvent(unsigned long);        // _14
	virtual void doRead(Stream&);               // _18
	virtual void update(Generator*);            // _1C
	virtual void render(Graphics&, Generator*); // _20
	virtual void getLatestVersion();            // _24

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct GenPellet : public GenObject {
	virtual void doWrite(Stream&);                               // _08
	virtual void ramSaveParameters(Stream&);                     // _0C
	virtual void ramLoadParameters(Stream&);                     // _10
	virtual void doEvent(unsigned long);                         // _14
	virtual void doRead(Stream&);                                // _18
	virtual void getShape();                                     // _28
	virtual void updateUseList(Generator*, int);                 // _2C
	virtual void generate(Generator*);                           // _30
	virtual void birth(GenArg*);                                 // _34
	virtual void generatorMakeMatrix(Matrixf&, Vector3<float>&); // _38
	virtual void getDebugInfo(char*);                            // _3C

	// _00 VTBL
};
} // namespace Game

#endif
