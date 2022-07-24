#ifndef _PSM_DEMO_H
#define _PSM_DEMO_H

/*
    __vt__Q23PSM4Demo:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23PSM4DemoFv
    .4byte init__Q23PSM4DemoFP3VecP3VecPA4_fQ23PSM7DemoArg
    .4byte initiate__Q23PSM4DemoFQ23PSM7DemoArgPUc
    .4byte initDemoScene__Q23PSM4DemoFRQ23PSM7DemoArgPQ23PSM10Scene_Demo
*/

namespace PSM {
struct Demo {
	virtual ~Demo();                                      // _08
	virtual void init(Vec*, Vec*, float (*)[4], DemoArg); // _0C
	virtual void initiate(DemoArg, unsigned char*);       // _10
	virtual void initDemoScene(DemoArg&, Scene_Demo*);    // _14

	// _00 VTBL
};
} // namespace PSM

#endif
