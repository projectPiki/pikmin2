#ifndef _BOOTSECTION_H
#define _BOOTSECTION_H

#include "DvdThreadCommand.h"
#include "Game/BaseHIO.h"
#include "System.h"

#define NINTENDOLOGO_XPOS   117.0f
#define NINTENDOLOGO_YPOS   154.0f
#define NINTENDOLOGO_WIDTH  376.0f
#define NINTENDOLOGO_HEIGHT 104.0f

// Nintendo logo is blue in japanese, red elsewhere
#define NINTENDOLOGO_COLOR_JP (0, 70, 255, 255)
#define NINTENDOLOGO_COLOR_US (220, 0, 0, 255)

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

/**
 * @brief The BootSection is responsible for booting and initializing the game.
 *
 * It inherits from the BaseHIOSection class and provides functionality for loading resources, displaying logos,
 * setting display modes, and handling user input during the boot process.
 */
struct BootSection : public Game::BaseHIOSection {
	/**
	 * @brief Pointer to a member function of the BootSection class that returns a bool and takes no arguments.
	 * This type is used as a callback for running and waiting operations.
	 */
	typedef bool (BootSection::*RunWaitCallback)();

	/**
	 * @brief Enumeration representing the different state IDs in the boot section.
	 */
	enum StateID {
		SID_LoadResourceFirst     = 0,  /**< State ID for loading resources first */
		SID_LoadMemoryCard        = 1,  /**< State ID for loading memory card */
		SID_InitNintendoLogo      = 2,  /**< State ID for initializing Nintendo logo */
		SID_Unused3               = 3,  /**< Unused state ID */
		SID_NintendoLogo          = 4,  /**< State ID for displaying Nintendo logo */
		SID_WaitProgressive       = 5,  /**< State ID for waiting for progressive scan */
		SID_UpdateWaitProgressive = 6,  /**< State ID for updating wait for progressive scan */
		SID_SetInterlace          = 7,  /**< State ID for setting interlace */
		SID_UpdateSetInterlace    = 8,  /**< State ID for updating set interlace */
		SID_DolbyLogo             = 9,  /**< State ID for displaying Dolby logo */
		SID_EndState              = 10, /**< State ID for end state */

		SID_FirstState = 0, /**< First state ID */
		SID_NullState  = -1 /**< Null state ID */
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

	inline int getFadeSpeed() { return ROUND_F32_TO_U8(0.5f / sys->getDeltaTime()); }

	StateID mStateID;                       // _48
	StateID mChangeStateID;                 // _4C
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
