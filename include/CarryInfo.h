#ifndef _CARRYINFO_H
#define _CARRYINFO_H

#include "CNode.h"
#include "InfoList.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "types.h"
#include "Vector3.h"

#define MAX_POKOINFO 5

struct Color4;
struct Graphics;
struct CarryInfoList;
struct CarryInfoParam;

enum cCarryInfoState {
	CINFO_Appear    = 0,
	CINFO_Disappear = 1,
	CINFO_Hidden    = 2,
};

enum cCarryInfoUseType {
	CINFOTYPE_Table = 0, // used for normal carry numbers
	CINFOTYPE_Scale = 1, // used for poko collection
};

enum cCarryInfoColors {
	CINFOCOLOR_Blue      = 0,
	CINFOCOLOR_Red       = 1,
	CINFOCOLOR_Yellow    = 2,
	CINFOCOLOR_Ship      = 3,
	CINFOCOLOR_Pod       = 4,
	CINFOCOLOR_Struggle  = 5,
	CINFOCOLOR_DownFloor = 6,
	CINFOCOLOR_ColorCount, // 7
};

struct CarryInfo {
	CarryInfo();

	void disappear();
	void draw(Graphics& gfx, CarryInfoParam& param);
	f32 drawNumber(Graphics& gfx, f32 x, f32 y, int dispNum, Color4& color, f32 scale);
	void drawNumberPrim(Graphics& gfx, f32 x, f32 y, int digit, Color4& color, f32 scale);
	void update(const CarryInfoParam& param);

	void appear();

	f32 mGrowRate; // _00
	f32 mYOffset;  // _04
	f32 mScale;    // _08
	u8 mState;     // _0C
	u8 mAlpha;     // _0D
	u8 mCounter;   // _0E
};

struct CarryInfoParam {
	CarryInfoParam()
	    : mUseType(CINFOTYPE_Table)
	    , mPosition(Vector3f::zero)
	    , mYOffsetMax(50.0f)
	    , mUnused(0)
	    , mColor(CINFOCOLOR_DownFloor)
	    , mCurrentWeight(0)
	    , mMaxWeight(0)
	    , mIsTopFirst(FALSE)
	    , mValue(0)
	    , mCarryInfo()
	{
	}

	u32 mUseType;         // _00, 1 means color by scale, 0 means color by coded table
	Vector3f mPosition;   // _04
	f32 mYOffsetMax;      // _10
	u8 mUnused;           // _14
	u8 mColor;            // _15
	u16 mCurrentWeight;   // _16
	u16 mMaxWeight;       // _18
	BOOL mIsTopFirst;     // _1C, 0 means value1 on bottom, 1 means value2 on bottom
	int mValue;           // _20
	CarryInfo mCarryInfo; // _24
};

struct CarryInfoOwner {
	virtual void getCarryInfoParam(CarryInfoParam&) = 0; // _08

	// _00 VTBL
};

/**
 * @size{0x34}
 */
struct PokoInfoOwner : public CarryInfoOwner, public CNode {
	PokoInfoOwner()
	    : CNode("")
	{
		mTimer    = 0.0f;
		mList     = nullptr;
		mPosition = Vector3f::zero;
		mValue    = 0;
	}

	virtual void getCarryInfoParam(CarryInfoParam& param); // _08
	virtual ~PokoInfoOwner() { }                           // _1C (thunked at _14) (weak)

	// unused/inlined:
	bool update();
	void start(CarryInfoList*, const Vector3f&, int);

	// _00     = VTBL 1
	// _04     = VTBL 2
	// _04-_1C = CNode
	f32 mTimer;           // _1C
	CarryInfoList* mList; // _20
	Vector3f mPosition;   // _24
	int mValue;           // _30
};

/**
 * @size(0x58)
 */
struct CarryInfoList : public InfoListBase<CarryInfoOwner, CarryInfoList> {

	virtual ~CarryInfoList() { }                                                   // _08 (weak)
	virtual void init();                                                           // _0C
	virtual void update();                                                         // _10
	virtual void draw(Graphics& gfx);                                              // _14
	virtual bool isFinish() { return (mParam.mCarryInfo.mState == CINFO_Hidden); } // _18 (weak)

	// _00     = VTBL
	// _00-_24 = InfoListBase
	CarryInfoParam mParam; // _24
};

/**
 * @size(0xEC)
 */
struct CarryInfoMgr : public InfoMgr<CarryInfoOwner, CarryInfoList> {
	CarryInfoMgr(int);

	virtual ~CarryInfoMgr();                                                                                               // _08
	virtual void loadResource();                                                                                           // _0C
	virtual void update();                                                                                                 // _10
	virtual void draw(Graphics& gfx);                                                                                      // _14
	virtual CarryInfoList* regist(CarryInfoOwner* owner) { return InfoMgr<CarryInfoOwner, CarryInfoList>::regist(owner); } // _18 (weak)
	virtual void scratch(CarryInfoOwner* owner) { InfoMgr<CarryInfoOwner, CarryInfoList>::scratch(owner); }                // _1C (weak)

	CarryInfoList* appear(CarryInfoOwner* owner);
	void appearPoko(const Vector3f& pos, int value);
	void updatePokoInfoOwners();

	// _00     = VTBL
	// _00-_B8 = InfoMgr
	JUTTexture* mTexture; // _B8
	CNode mNode1;         // _BC
	CNode mPoko_node;     // _D4
};

extern CarryInfoMgr* carryInfoMgr;

#endif
