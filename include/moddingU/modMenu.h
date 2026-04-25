#ifndef _MODDINGU_MODMENU_H
#define _MODDINGU_MODMENU_H

#include "types.h"

struct Controller;
struct Graphics;

namespace moddingU {

enum ModSliderKind {
	kModSlider_Float,      // edits a f32*
	kModSlider_Int,        // edits an int*
	kModSlider_Action,     // one-shot, calls action fn
	kModSlider_TimeOfDay,  // live-synced elapsed seconds; A applies via TimeMgr::setTime
	
};

struct ModSlider {
	const char*   mLabel;
	ModSliderKind mKind;
	void*         mTarget;       // f32* or int*, null for action
	f32           mMin;
	f32           mMax;
	f32           mStep;
	void (*mAction)();           // for kModSlider_Action
	f32           mOriginal;     // snapshot for restore
	f32           mPendingValue; // value shown in menu; written to game only on A press
	bool          mEnabled;      // for kModSlider_Action: toggles On/Off on each A press
	bool          mDirty;        // true when game value != mOriginal (applied and changed)
	bool          mGreenLabel;       // label column always renders green (ignores cursor/state)
	bool          mNoValue;          // suppress the value column entirely
	bool          mOrangeIfMenuDirty; // label is orange when any menu item is modified, else white
	int         (*mGetDisplayInt)(); // if non-null, action shows this value instead of On/Off
};

struct ModMenu {
	ModMenu();

	void update(Controller* pad);    // called each frame from BaseGameSection::doUpdate
	void draw(Graphics& gfx);        // called each frame from BaseGameSection::doDraw

	bool isOpen() const { return mOpen; }
	void toggle();

	void snapshotOriginals();
	void restoreAll();

private:
	void buildSliders();
	void bumpCurrent(f32 direction);    // +/- step with hold-to-repeat
	f32  readValue(const ModSlider& s) const;
	void writeValue(ModSlider& s, f32 v);
	bool isMenuDirty() const;

	enum { kMaxSliders = 40 };
	enum { kVisibleRows = 13 }; // rows drawn on-screen at a time; rest off-scroll

	bool      mOpen;
	bool      mInitialized;
	int       mCursor;
	int       mSliderCount;
	int       mHoldFrames;         // for analog-style repeat when holding L/R
	ModSlider mSliders[kMaxSliders];
};

extern ModMenu* gModMenu;

// Whistle-cap override. Patched into naviState.cpp where MAX_PIKI_COUNT is stamped
// into mMaxPikiOnField. Does NOT raise the hard allocation cap (still 100).
extern u32 gFieldCap;

// Purple lift multiplier — replaces the hardcoded 10 in PikiMgr::getColorTransportScale.
// Controls how many pikmin-worth one purple counts toward the minimum carry threshold.
extern u32 gPurpleLiftScale;

// Install / tear down from BaseGameSection::init / exit
void ensureCreated();
void teardown();

// The two hook functions called from baseGameSection.cpp — safe even if gModMenu is null.
void onBaseGameUpdate(Controller* p1);
void onBaseGameDraw(Graphics& gfx);

} // namespace moddingU

#endif
