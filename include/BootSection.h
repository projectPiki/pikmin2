#ifndef _BOOTSECTION_H
#define _BOOTSECTION_H

#include "DvdThreadCommand.h"
#include "Game/BaseHIO.h"

struct Graphics;
template <typename T>
struct IDelegate1;
struct JKRHeap;
struct JUTTexture;
struct TinyPikmin;

namespace ebi {
struct TScreenProgre;
}

struct BootSection : public Game::BaseHIOSection {
	typedef bool RunWaitCallback(const void*, void*);

	enum StateID {
		SID_LOAD_RESOURCE_FIRST = 0,
		SID_LOAD_MEMORY_CARD,
		SID_INIT_NINTENDO_LOGO_MAYBE,
		SID_UNUSED_3,
		SID_NINTENDO_LOGO,
		SID_WAIT_PROGRESSIVE,
		SID_SET_INTERLACE,
		SID_SET_PROGRESSIVE,
		SID_DOLBY_LOGO_1,
		SID_DOLBY_LOGO_2
	};

	BootSection(JKRHeap*);

	virtual ~BootSection();             // _08
	virtual void run();                 // _0C
	virtual void init();                // _18
	virtual bool forceReset();          // _2C (weak)
	virtual bool doUpdate();            // _3C
	virtual void doDraw(Graphics& gfx); // _40

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
	void waitLoadResource();

	StateID mStateID;                         // _48
	int _4C;                                  // _4C
	f32 _50;                                  // _50
	JUTTexture* mWarningTexture;              // _54
	JUTTexture* mWarningPressStartTexture;    // _58
	JUTTexture* mNintendoLogoTexture;         // _5C
	JUTTexture* mDolbyMarkTexture;            // _60
	DvdThreadCommand mThreadCommand;          // _64
	IDelegate1<BootSection>* mButtonCallback; // _D0
	Controller* mController;                  // _D4
	ebi::TScreenProgre* _D8;                  // _D8
	bool _DC;                                 // _DC, previously mInProgreSet <-- the fuck does that mean?
	u8 _DD;                                   // _DD
	TinyPikmin* mTinyPikis;                   // _E0
	f32 _E4;                                  // _E4, scale of sorts
};

#endif
