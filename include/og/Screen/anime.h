#ifndef _OG_SCREEN_ANIME_H
#define _OG_SCREEN_ANIME_H

#include "Screen/screenObj.h"
#include "og/Screen/ogScreen.h"
#include "types.h"

struct J2DAnmBase;
struct J2DPane;
struct J2DScreen;

namespace og {
namespace Screen {
struct AnimBaseBase {
	AnimBaseBase();

	virtual void start()    = 0; // _08
	virtual void moveAnim() = 0; // _0C

	void init(JKRArchive*, char*);
	void setArea(f32, f32);
	void setAllArea();
	void start(f32);
	bool update();
	bool updateSub();

	// _00 = VTBL
	int mType;            // _04 1 =AnimScreen, 2 = AnimPane
	bool mIsInStartDelay; // _08
	f32 mTimer;           // _0C
	u8 mDoDelayUpdate;    // _10
	u8 mAlpha;            // _11
	bool mDoSetAlpha;     // _12
	J2DAnmBase* mAnm;     // _14
	f32 mCurrentFrame;    // _18
	f32 mLastFrame;       // _1C
	f32 mSpeed;           // _20
	f32 mSpeedSub;        // _24
	f32 mDeltaTime;       // _28
	f32 mMinFrame;        // _2C
	f32 mArea;            // _30
	f32 mLength;          // _34
	bool mIsRepeating;    // _38
	bool mUnusedFlag;     // _39
	char* mResourcePath;  // _3C
};

struct AnimScreen : public AnimBaseBase {
	AnimScreen();

	virtual void start();    // _08
	virtual void moveAnim(); // _0C

	void init(JKRArchive*, J2DScreen*, char*);

	inline void updateScreen(J2DScreen* screen, J2DAnmBase* anm)
	{
		mScreen = screen;
		mScreen->setAnimation(anm);
		anm->searchUpdateMaterialID(screen);
	}

	// _00     = VTBL
	// _00-_40 = AnimBaseBase
	J2DScreen* mScreen; // _40
};

struct AnimPane : public AnimBaseBase {
	AnimPane();

	virtual void start();    // _08
	virtual void moveAnim(); // _0C

	void init(JKRArchive*, J2DScreen*, u64, char*);

	inline void updatePane(J2DScreen* screen, u64 tag, J2DAnmBase* anm)
	{
		mPane = TagSearch(screen, tag);
		mPane->setAnimation(anm);
		anm->searchUpdateMaterialID(screen);
	}

	// _00     = VTBL
	// _00-_40 = AnimBaseBase
	J2DPane* mPane; // _40
};

struct AnimGroup {
	AnimGroup(int);

	f32 getFrame();
	f32 getLastFrame();
	void reservAnim(f32, f32, f32);
	void setAllArea();
	void setAlpha(u8);
	void setAnim(AnimBaseBase*);
	void setArea(f32, f32);
	void setFrame(f32);
	void setRepeat(bool);
	void setSpeed(f32);
	void start();
	bool update();

	inline f32 getVal() { return _10; }

	AnimBaseBase** mAnimPanes; // _00
	int mPaneCount;            // _04
	int mPaneLimit;            // _08
	u8 mNeedRestart;           // _0C
	f32 _10;                   // _10
	f32 mMinFrame;             // _14
	f32 mMaxFrame;             // _18
};

struct AnimList {
	AnimList(u16);

	void addAnim(AnimScreen*);
	void nextAnim(f32);
	void start();
	void update();
};
} // namespace Screen
} // namespace og

#endif
