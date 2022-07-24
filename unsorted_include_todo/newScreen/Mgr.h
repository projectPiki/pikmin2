#ifndef _NEWSCREEN_MGR_H
#define _NEWSCREEN_MGR_H

/*
    __vt__Q29newScreen3Mgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q29newScreen3MgrFv
    .4byte setScene__Q26Screen3MgrFRQ26Screen11SetSceneArg
    .4byte startScene__Q26Screen3MgrFPQ26Screen13StartSceneArg
    .4byte endScene__Q26Screen3MgrFPQ26Screen11EndSceneArg
    .4byte reset__Q29newScreen3MgrFv
    .4byte setColorBG__Q29newScreen3MgrFRQ28JUtility6TColor
    .4byte setBGMode__Q29newScreen3MgrFi
    .4byte doGetSceneBase__Q29newScreen3MgrFl
    .4byte drawBG__Q29newScreen3MgrFR8Graphics
    .4byte drawWipe__Q26Screen3MgrFR8Graphics
*/

namespace newScreen {
struct Mgr {
	virtual ~Mgr();                             // _08 (inline)
	virtual void setScene(SetSceneArg&);        // _0C
	virtual void startScene(StartSceneArg*);    // _10
	virtual void endScene(EndSceneArg*);        // _14
	virtual void reset();                       // _18
	virtual void setColorBG(JUtility::TColor&); // _1C (inline)
	virtual void setBGMode(int);                // _20 (inline)
	virtual void doGetSceneBase(long);          // _24
	virtual void drawBG(Graphics&);             // _28
	virtual void drawWipe(Graphics&);           // _2C (inline)

	void create();
};
} // namespace newScreen

#endif
