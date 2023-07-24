#ifndef _BOOTSECTION_H
#define _BOOTSECTION_H

#include "DvdThreadCommand.h"
#include "Game/BaseHIO.h"

#define NINTENDOLOGO_XPOS   117.0f
#define NINTENDOLOGO_YPOS   154.0f
#define NINTENDOLOGO_WIDTH  376.0f
#define NINTENDOLOGO_HEIGHT 104.0f

// Nintendo logo is blue in japanese, red elsewhere
#define NINTENDOLOGO_COLOR_JP 0, 0, 70, 255
#define NINTENDOLOGO_COLOR_US 220, 0, 0, 255

#define DOLBYLOGO_XPOS   189.0f
#define DOLBYLOGO_YPOS   150.0f
#define DOLBYLOGO_WIDTH  232.0f
#define DOLBYLOGO_HEIGHT 112.0f
#define DOLBYLOGO_COLOR  255, 255, 255, 255

struct Graphics;
template <typename T>
struct Delegate;
struct JKRHeap;
struct JUTTexture;
struct TinyPikminMgr;

namespace ebi {
struct TScreenProgre;
}

struct BootSection : public Game::BaseHIOSection {
	typedef bool RunWaitCallback(const void*, void*);

	enum StateID {
		SID_LOAD_RESOURCE_FIRST = 0,
		SID_LOAD_MEMORY_CARD,
		SID_INIT_NINTENDO_LOGO,
		SID_UNUSED_3,
		SID_NINTENDO_LOGO,
		SID_WAIT_PROGRESSIVE,
		SID_SET_INTERLACE,
		SID_SET_PROGRESSIVE,
		SID_DOLBY_LOGO_1,
		SID_DOLBY_LOGO_2,
		SID_NULL = -1
	};

	BootSection(JKRHeap*);

	virtual ~BootSection();                     // _08
	virtual void run();                         // _0C
	virtual void init();                        // _18
	virtual bool forceReset() { return false; } // _2C (weak)
	virtual bool doUpdate();                    // _3C
	virtual void doDraw(Graphics& gfx);         // _40

	void drawDolbyLogo(Graphics&);
	void drawEpilepsy(Graphics&);
	void drawNintendoLogo(Graphics&);
	void drawProgressive(Graphics&);
	void drawSetInterlace(Graphics&);
	void drawSetProgressive(Graphics&);

	void load2DResource();
	void loadBootResource();
	void loadResident();

	void runWait(RunWaitCallback);

	void setMode(int);
	void setModeEpilepsy();

	void updateLoadMemoryCard();
	void updateLoadResourceFirst();
	void updateNintendoLogo();
	void updateProgressive();
	void updateWaitProgressive();
	bool waitLoadResource();

	void drawScreenProgre(Graphics&);
	void drawDebugInfo(Graphics&);
	void changeRenderModeProgressive();
	void waitLoadGameOption();
	void waitSystemDvdLoad();
	void getModeEpilepsy();

	StateID mStateID;                       // _48
	int mChangeStateID;                     // _4C
	f32 mFadeTimer;                         // _50
	JUTTexture* mWarningTexture;            // _54
	JUTTexture* mWarningPressStartTexture;  // _58
	JUTTexture* mNintendoLogoTexture;       // _5C
	JUTTexture* mDolbyMarkTexture;          // _60
	DvdThreadCommand mThreadCommand;        // _64
	Delegate<BootSection>* mButtonCallback; // _D0
	Controller* mController;                // _D4
	ebi::TScreenProgre* mProgressiveScreen; // _D8
	bool mProgressiveActive;                // _DC
	bool mDoOpenProgressive;                // _DD
	TinyPikminMgr* mPikiMgr;                // _E0
	f32 mLogoShakeStrength;                 // _E4
};

static BootSection* sBootSection;

#endif
