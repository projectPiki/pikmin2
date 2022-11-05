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

	StateID m_stateID;                      // _48
	int _4C;                                // _4C
	float _50;                              // _50
	JUTTexture* m_warningTexture;           // _54
	JUTTexture* m_warningPressStartTexture; // _58
	JUTTexture* m_nintendoLogoTexture;      // _5C
	JUTTexture* m_dolbyMarkTexture;         // _60
	DvdThreadCommand m_threadCommand;       // _64
	IDelegate1<BootSection>* _D0;           // _D0
	Controller* _D4;                        // _D4
	ebi::TScreenProgre* _D8;                // _D8
	bool m_inProgreSet;                     // _DC
	u8 _DD;                                 // _DD
	TinyPikmin* m_tinyPikis;                // _E0
	float m_unknownScaleE4;                 // _E4
};

#endif
