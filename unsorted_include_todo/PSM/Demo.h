#ifndef _PSM_DEMO_H
#define _PSM_DEMO_H

namespace PSM {
struct Demo {
	virtual ~Demo();                                      // _00
	virtual void init(Vec*, Vec*, float (*)[4], DemoArg); // _04
	virtual void initiate(DemoArg, unsigned char*);       // _08
	virtual void initDemoScene(DemoArg&, Scene_Demo*);    // _0C

	// _00 VTBL
};
} // namespace PSM

#endif
