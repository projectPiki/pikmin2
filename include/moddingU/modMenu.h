#ifndef _MODDINGU_MODMENU_H
#define _MODDINGU_MODMENU_H

#include "types.h"

struct Controller;
struct Graphics;

namespace moddingU {

enum ModSliderKind {
	kModSlider_Float,   // edits a f32*
	kModSlider_Int,     // edits an int*
	kModSlider_Action,  // one-shot, calls action fn
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

	enum { kMaxSliders = 40 };
	enum { kVisibleRows = 24 }; // rows drawn on-screen at a time; rest off-scroll

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

// Install / tear down from BaseGameSection::init / exit
void ensureCreated();
void teardown();

// The two hook functions called from baseGameSection.cpp — safe even if gModMenu is null.
void onBaseGameUpdate(Controller* p1);
void onBaseGameDraw(Graphics& gfx);

} // namespace moddingU

#endif
