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
		_14      = 0.0f;
		mStateID = 0;
	}

	inline f32 getHeight() { return mHeight; }

	f32 mMaxRollSpeed; // _00
	f32 _04;           // _04
	f32 mRollSpeedMod; // _08
	f32 _0C;           // _0C
	f32 _10;           // _10
	f32 _14;           // _14
	f32 mHeight;       // _18
	f32 mRollSpeed;    // _1C
	int mStateID;      // _20
	u8 _24;            // _24
	f32 mMoveTimer;    // _28
	f32 _2C;           // _2C
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
		mSizeType     = 0;
		mIconCount    = 0;
		_18           = 0.0f;
		mIconInfos    = nullptr;
		mOwner        = owner;
		_1C           = mPane->mOffset.y;
	}

	void setIndex(int index);
	int getIndex();
	int getListIndex();
	void createIconInfo(int num, int entries);
	void update();

	void doIconOffsetY();

	inline void setPaneOffset(f32 offset) { mPane->setOffsetY(_1C + offset); }

	int mIndex;             // _00
	J2DPane* mPane;         // _04
	J2DPane* mPane2;        // _08
	int mSizeType;          // _0C
	int mIconCount;         // _10, number of entries, per row, 3 in piklopedias case
	int mMaxTextureId;      // _14
	f32 _18;                // _18
	f32 _1C;                // _1C
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

	virtual ~TScrollList() { }                       // _08 (weak)
	virtual bool isListShow(int) { return true; }    // _7C (weak)
	virtual void paneInit()       = 0;               // _80
	virtual void changePaneInfo() = 0;               // _84
	virtual int getIdMax()        = 0;               // _88
	virtual u64 getNameID(int)    = 0;               // _8C
	virtual void getUpdateIndex(int& id, bool flag); // _90
	virtual void setShortenIndex(int, int, bool) { } // _94 (weak)
	virtual void doUpdateIn() { }                    // _98 (weak)
	virtual void doUpdateOut() { }                   // _9C (weak)
	virtual void changeTextTevBlock(int) { }         // _A0 (weak)
	virtual void updateIndex(bool);                  // _A4
	virtual void setPaneCharacter(int) { }           // _A8 (weak)

	bool updateList();
	void changeIndex();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* mArchive;        // _78
	TScreenBase* mMainScreen;    // _7C
	Controller* mController;     // _80
	TIndexGroup* mIndexGroup;    // _84
	TIndexPane** mIndexPaneList; // _88
	bool mDoEnableBigIcon;       // _8C
	s16 mMaxSelect;              // _8E
	int _90;                     // _90
	int mCurrentSelect;          // _94
	int _98;                     // _98
	int mRowSize;                // _9C
	f32 _A0;                     // _A0
	f32 _A4;                     // _A4
	f32 mYOffset;                // _A8
	f32 _AC;                     // _AC
	u8 _B0;                      // _B0

	static int mRightOffset;
	static bool mForceResetParm;
	static bool mWideWindow;
};
} // namespace Morimura

#endif
