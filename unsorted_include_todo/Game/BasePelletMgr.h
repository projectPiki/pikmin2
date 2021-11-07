#ifndef _GAME_BASEPELLETMGR_H
#define _GAME_BASEPELLETMGR_H

struct GenericObjectMgr {
	virtual void _00() = 0;               // _00
	virtual void _04() = 0;               // _04
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void _10() = 0;               // _10
	virtual void _14() = 0;               // _14
	virtual void doSimpleDraw(Viewport*); // _18
	virtual void loadResources();         // _1C
	virtual void _20() = 0;               // _20
	virtual void pausable();              // _24
	virtual void frozenable();            // _28
	virtual void getMatrixLoadType();     // _2C

	// _00 VTBL
};

namespace Game {
struct BasePelletMgr : public GenericObjectMgr {
	virtual void doAnimation();                   // _00
	virtual void doEntry();                       // _04
	virtual void doSetView(int);                  // _08
	virtual void doViewCalc();                    // _0C
	virtual void doSimulation(float);             // _10
	virtual void doDirectDraw(Graphics&);         // _14
	virtual void doSimpleDraw(Viewport*);         // _18
	virtual void loadResources();                 // _1C
	virtual void _20() = 0;                       // _20
	virtual void pausable();                      // _24
	virtual void frozenable();                    // _28
	virtual void getMatrixLoadType();             // _2C
	virtual void _30() = 0;                       // _30
	virtual void _34() = 0;                       // _34
	virtual void _38() = 0;                       // _38
	virtual void _3C() = 0;                       // _3C
	virtual void _40() = 0;                       // _40
	virtual void _44() = 0;                       // _44
	virtual void _48() = 0;                       // _48
	virtual void onCreateModel(SysShape::Model*); // _4C
	virtual void _50() = 0;                       // _50
	virtual void _54() = 0;                       // _54
	virtual void _58() = 0;                       // _58
	virtual void _5C() = 0;                       // _5C
	virtual void _60() = 0;                       // _60
	virtual void createShape(int, int);           // _64
	virtual void generatorBirth(Vector3<float>&, Vector3<float>&,
	                            GenPelletParm*);                        // _68
	virtual void generatorWrite(Stream&, GenPelletParm*);               // _6C
	virtual void generatorRead(Stream&, GenPelletParm*, unsigned long); // _70
	virtual void generatorLocalVersion();                               // _74
	virtual void generatorGetShape(GenPelletParm*);                     // _78
	virtual void generatorNewPelletParm();                              // _7C
	virtual void _80() = 0;                                             // _80
	virtual void _84() = 0;                                             // _84
	virtual void _88() = 0;                                             // _88
	virtual void _8C() = 0;                                             // _8C

	// _00 VTBL
};
} // namespace Game

#endif
