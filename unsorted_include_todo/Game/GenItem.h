#ifndef _GAME_GENITEM_H
#define _GAME_GENITEM_H

/*
    __vt__Q24Game7GenItem:
    .4byte 0
    .4byte 0
    .4byte doWrite__Q24Game7GenItemFR6Stream
    .4byte ramSaveParameters__Q24Game7GenItemFR6Stream
    .4byte ramLoadParameters__Q24Game7GenItemFR6Stream
    .4byte doEvent__Q24Game7GenItemFUl
    .4byte doRead__Q24Game7GenItemFR6Stream
    .4byte update__Q24Game9GenObjectFPQ24Game9Generator
    .4byte render__Q24Game9GenObjectFR8GraphicsPQ24Game9Generator
    .4byte getLatestVersion__Q24Game9GenObjectFv
    .4byte getShape__Q24Game7GenItemFv
    .4byte updateUseList__Q24Game7GenItemFPQ24Game9Generatori
    .4byte generate__Q24Game7GenItemFPQ24Game9Generator
    .4byte birth__Q24Game7GenItemFPQ24Game6GenArg
    .4byte "generatorMakeMatrix__Q24Game7GenItemFR7MatrixfR10Vector3<f>"
    .4byte getDebugInfo__Q24Game9GenObjectFPc
*/

namespace Game {
struct GenObject {
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

namespace Game {
struct GenItem : public GenObject {
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
