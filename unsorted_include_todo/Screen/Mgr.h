#ifndef _SCREEN_MGR_H
#define _SCREEN_MGR_H

/*
    __vt__Q26Screen3Mgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q26Screen3MgrFv
    .4byte setScene__Q26Screen3MgrFRQ26Screen11SetSceneArg
    .4byte startScene__Q26Screen3MgrFPQ26Screen13StartSceneArg
    .4byte endScene__Q26Screen3MgrFPQ26Screen11EndSceneArg
    .4byte reset__Q26Screen3MgrFv
    .4byte setColorBG__Q26Screen3MgrFRQ28JUtility6TColor
    .4byte setBGMode__Q26Screen3MgrFi
    .4byte doGetSceneBase__Q26Screen3MgrFl
    .4byte drawBG__Q26Screen3MgrFR8Graphics
    .4byte drawWipe__Q26Screen3MgrFR8Graphics
*/

namespace Screen {
struct Mgr {
	virtual ~Mgr();                             // _00
	virtual void setScene(SetSceneArg&);        // _04
	virtual void startScene(StartSceneArg*);    // _08
	virtual void endScene(EndSceneArg*);        // _0C
	virtual void reset();                       // _10
	virtual void setColorBG(JUtility::TColor&); // _14
	virtual void setBGMode(int);                // _18
	virtual void doGetSceneBase(long);          // _1C
	virtual void drawBG(Graphics&);             // _20
	virtual void drawWipe(Graphics&);           // _24

	// _00 VTBL
};
} // namespace Screen

#endif
