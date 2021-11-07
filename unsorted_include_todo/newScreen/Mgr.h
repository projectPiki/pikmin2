#ifndef _NEWSCREEN_MGR_H
#define _NEWSCREEN_MGR_H

namespace newScreen {
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
} // namespace newScreen

#endif
