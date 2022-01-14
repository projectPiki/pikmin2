#ifndef _SECTION_H
#define _SECTION_H

#include "JSystem/JKR/JKRDisposer.h"

struct Graphics;
struct JFWDisplay;
struct JKRHeap;
struct JUTFader;

struct ISection : public JKRDisposer {
	virtual ~ISection();              // _00
	virtual void run()           = 0; // _04
	virtual bool update()        = 0; // _08
	virtual void draw(Graphics&) = 0; // _0C
	virtual void init()          = 0; // _10
};

struct Section : public ISection {
	enum EDrawInitMode { Zero = 0, One = 1, Two = 2 };

	Section(JFWDisplay*, JKRHeap*, bool);

	virtual ~Section();                              // _00
	virtual void run();                              // _04
	virtual bool update();                           // _08
	virtual void draw(Graphics&);                    // _0C
	virtual void init();                             // _10
	virtual void drawInit(Graphics&);                // _14
	virtual void drawInit(Graphics&, EDrawInitMode); // _18
	virtual void doExit();                           // _1C
	virtual bool forceFinish();                      // _20
	virtual bool forceReset();                       // _24
	virtual Section* getCurrentSection();            // _28
	virtual void doLoadingStart();                   // _2C
	virtual bool doLoading();                        // _30
	virtual bool doUpdate()        = 0;              // _34
	virtual void doDraw(Graphics&) = 0;              // _38
	virtual bool isFinishable();                     // _3C

	bool beginFrame();
	void beginRender();
	void endFrame();
	void endRender();
	void exit();

	// Unused/inlined:
	void loading();
	void fadeIn();
	void main();
	void fadeOut();

	u32 _18;                // _18
	JKRHeap* _1C;           // _1C
	JKRHeap* _20;           // _20
	JFWDisplay* m_display;  // _24
	JUTFader* m_fader;      // _28
	Graphics* m_graphics;   // _2C
	float _30;              // _30
	u8 _34;                 // _34
	u8 _35;                 // _35
	u8 _36;                 // _36
	bool m_isFinishedMaybe; // _37
	u8 _38;                 // _38
};

#endif
