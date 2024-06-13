#ifndef _MORIMURA_SCROLLLIST_H
#define _MORIMURA_SCROLLLIST_H

#include "Morimura/Bases.h"

namespace Morimura {
struct TScaleUpCounter;
struct TScrollList;

struct TIndexGroup {
	TIndexGroup();

	bool downIndex();
	bool upIndex();

	// unused/inlined
	void speedUpdate(bool);
	bool offsetUpdate(f32);
	void rollSpUp();

	inline void reset()
	{
		mScrollOffset = 0.0f;
		mStateID      = IDGroup_Idle;
	}

	enum StateID {
		IDGroup_Idle = 0,
		IDGroup_Down = 1,
		IDGroup_Up   = 2,
	};

	inline bool isActive() const { return mStateID == IDGroup_Idle; }
	inline bool isState(u8 state) const { return mStateID == state; }

	inline f32 getHeight() { return mHeight; }

	f32 mMaxRollSpeed;        // _00, maximum scroll speed when holding up/down
	f32 mSpeedSlowdownFactor; // _04, rate of deceleration near end of movement
	f32 mRollSpeedMod;        // _08, base speed modifier
	f32 mSpeedSpeedupFactor;  // _0C, base rate of acceleration
	f32 mInitialRollSpeed;    // _10, starting vertical speed when input is entered
	f32 mScrollOffset;        // _14, distance from current position to goal position
	f32 mHeight;              // _18, vertical distance between each row
	f32 mRollSpeed;           // _1C, current vertical movement speed
	int mStateID;             // _20, see StateID enum
	bool mIsActiveSpeedUp;    // _24, enabled when moving while input is still held
	f32 mMoveDirection;       // _28, 1.0f when moving up, -1.0f when moving down
	f32 mOffsetDifference;    // _2C
};

struct TIconInfo {
	TIconInfo();

	void startScaleUp(f32 scale);
	void setInfo(int id, const ResTIMG* timg);
	void init(TScaleUpCounter* counter, J2DPane* pane1, J2DPane* pane2);
	void update(f32 base);

	int mCategoryID;                 // _00
	J2DPictureEx* mPic;              // _04
	TScaleUpCounter* mCounter;       // _08
	J2DPane* mPane2;                 // _0C
	J2DPane* mPane;                  // _10
	og::Screen::ScaleMgr* mScaleMgr; // _14
	u32 mParentIndex;                // _18
};

struct TIndexPane {
	TIndexPane(TScrollList* owner, P2DScreen::Mgr_tuning* scrn, u64 tag)
	{
		J2DPane* pane = scrn->search(tag);
		mIndex        = 0;
		mPane         = pane;
		mPane2        = nullptr;
		mSizeType     = Size_Small;
		mIconCount    = 0;
		mPaneSize     = 0.0f;
		mIconInfos    = nullptr;
		mOwner        = owner;
		mYOffset      = mPane->mOffset.y;
	}

	void setIndex(int index);
	int getIndex();
	int getListIndex();
	void createIconInfo(int num, int entries);
	void update();

	void doIconOffsetY();

	inline void setPaneOffset(f32 offset) { mPane->setOffsetY(mYOffset + offset); }

	inline f32 getPaneYOffset() const { return mYOffset; }

	inline f32 getPaneOffsetY() const { return mPane->getOffsetY(); }

	inline TIconInfo* getIconInfo(int idx) const { return mIconInfos[idx]; }

	inline J2DPane* getMainPane() const { return mPane; }
	inline J2DPane* getSubPane() const { return mPane2; }

	enum SizeType {
		Size_Small  = 0, // small icons in piklopedia, supports 3 icons per row
		Size_Small2 = 1, // also small icons in piklopedia?
		Size_Big    = 2, // used for boss icons in piklopedia
		Size_Big2   = 3, // also used for boss icons in piklopedia?
	};

	int mIndex;             // _00
	J2DPane* mPane;         // _04
	J2DPane* mPane2;        // _08
	int mSizeType;          // _0C
	int mIconCount;         // _10, Number of entries per row; 3 in Piklopedia's case
	int mMaxTextureId;      // _14
	f32 mPaneSize;          // _18, 0.0f for small icons, anything else for big
	f32 mYOffset;           // _1C
	TIconInfo** mIconInfos; // _20
	TScrollList* mOwner;    // _24
};

struct TListScreen : public TScreenBase {
	TListScreen(JKRArchive* arc, int id)
	    : TScreenBase(arc, id)
	{
	}
	virtual void create(const char* filename, u32 flag); // _08

	// _00     = VTBL
	// _00-_18 = TScreenBase
};

struct TScrollList : public TTestBase {
	TScrollList(char* name);

	virtual ~TScrollList() { }                               // _08 (weak)
	virtual bool isListShow(int) { return true; }            // _7C (weak)
	virtual void paneInit()       = 0;                       // _80
	virtual void changePaneInfo() = 0;                       // _84
	virtual int getIdMax()        = 0;                       // _88
	virtual u64 getNameID(int)    = 0;                       // _8C
	virtual void getUpdateIndex(int& id, bool doScrollDown); // _90
	virtual void setShortenIndex(int, int, bool) { }         // _94 (weak)
	virtual void doUpdateIn() { }                            // _98 (weak)
	virtual void doUpdateOut() { }                           // _9C (weak)
	virtual void changeTextTevBlock(int) { }                 // _A0 (weak)
	virtual void updateIndex(bool);                          // _A4
	virtual void setPaneCharacter(int) { }                   // _A8 (weak)

	bool updateList();
	void changeIndex();

	inline TIndexPane* getIndexPane(int i) const { return mIndexPaneList[i]; }

	inline void updateIDPaneYOffset(int id, f32 yoffs)
	{
		// should be using r4 instead of r3
		getIndexPane(id)->setPaneOffset(yoffs);
		getIndexPane(id)->mYOffset = getIndexPane(id)->getPaneOffsetY();
	}

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* mArchive;        // _78
	TScreenBase* mMainScreen;    // _7C
	Controller* mController;     // _80
	TIndexGroup* mIndexGroup;    // _84
	TIndexPane** mIndexPaneList; // _88
	bool mDoEnableBigIcon;       // _8C, used for bosses in piklopedia
	s16 mNumActiveRows;          // _8E, number of active panes at a given time
	int mCurrMinActiveRow;       // _90, out of the currently active panes, this is the index of the upper-most one
	int mCurrActiveRowSel;       // _94, out of the currently active panes, this is the index of the selected one
	int mCurrMaxActiveRow;       // _98, out of the currently active panes, this is the index of the bottom-most one
	int mRowSize;                // _9C, number of entries per row
	f32 mMinSelYOffset;          // _A0, Y position of top of list
	f32 mMaxSelYOffset;          // _A4, Y position of bottom of list
	f32 mSelectionYOffset;       // _A8, Y position of the selected row
	f32 mCursorSelectionYOffset; // _AC, Y position of detection for what is currently selected (mSelectionYOffset with an offset)
	u8 _B0;                      // _B0, enabled for hiScore2D, but doesn't do anything?

	static int mRightOffset;
	static bool mForceResetParm;
	static bool mWideWindow;
};
} // namespace Morimura

#endif
