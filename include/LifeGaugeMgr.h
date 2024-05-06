#ifndef _LIFEGAUGEMGR_H
#define _LIFEGAUGEMGR_H

#include "Color4.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "Game/Creature.h"
#include "Vector3.h"
#include "types.h"

#define MAX_LIFEGAUGE_SEGMENTS (32) // (More segments = more detailed hp wheel, also changes slower)

#define RED_LIFEGAUGE_RATIO    (0.2f) // 0 < health < this ratio = "red"
#define YELLOW_LIFEGAUGE_RATIO (0.5f) // red ratio <= health < this ratio = "yellow"

#define RED_LIFEGAUGE_COLOR    (Color4(255, 0, 0, 255))   // red (for when 0 < health < red ratio)
#define YELLOW_LIFEGAUGE_COLOR (Color4(255, 255, 0, 255)) // yellow (for when red ratio <= health < yellow ratio)
#define GREEN_LIFEGAUGE_COLOR  (Color4(0, 255, 0, 255))   // green (for when health >= yellow ratio)

struct Graphics;
struct JUTTexture;

struct LifeGauge {
	LifeGauge();

	void draw(f32 radius, f32 centerX, f32 centerY);
	void drawOneTri(Vector3f* vertices, Color4& lifeGaugeColor);
	void init(u8 maxSegmentNum);
	void update(f32 healthRatio);

	static void initLifeGaugeDraw();

	f32 mTimer;             // _00
	Color4 mLifeGaugeColor; // _04
	u8 mCurrentSegmentNum;  // _08
	u8 mMaxSegmentNum;      // _09
};

/**
 * @size{0x48}
 */
struct LifeGaugeList : public JKRDisposer {
	inline LifeGaugeList(Game::Creature* obj = nullptr)
	    : mParam()
	{
		mGameObject          = obj;
		mNext                = nullptr;
		mPrev                = nullptr;
		mParam.mIsGaugeShown = false;

		mLifeGauge.mTimer             = 0.0f;
		mLifeGauge.mMaxSegmentNum     = 32;
		mLifeGauge.mCurrentSegmentNum = 32;
	}

	virtual ~LifeGaugeList() { clearRelations(); } // _08 (weak)

	inline void clearRelations()
	{
		if (mPrev) {
			mPrev->mNext = mNext;
		}
		if (mNext) {
			mNext->mPrev = mPrev;
		}
		mNext = nullptr;
		mPrev = nullptr;
	}

	inline LifeGaugeList* search(Game::Creature* obj)
	{
		for (LifeGaugeList* list = mNext; list; list = list->mNext) {
			if (list->mGameObject != obj) {
				continue;
			}

			return list;
		}

		return nullptr;
	}

	void draw(Graphics& gfx);

	LifeGaugeList* mPrev;        // _18
	LifeGaugeList* mNext;        // _1C
	Game::Creature* mGameObject; // _20, what this is a life gauge for
	Game::LifeGaugeParam mParam; // _24
	LifeGauge mLifeGauge;        // _28
};

/**
 * @todo This is so close to being an InfoMgr.
 * @size{0x94}
 */
struct LifeGaugeMgr {
	LifeGaugeMgr();

	LifeGaugeList* createLifeGauge(Game::Creature* obj);
	void activeLifeGauge(Game::Creature* obj, f32 healthRatio);
	void inactiveLifeGauge(Game::Creature* obj);
	void loadResource();
	void update();
	void draw(Graphics& gfx);

	LifeGaugeList mListActive;   // _00
	LifeGaugeList mListInactive; // _04
	JUTTexture* mTexture;        // _90
};

extern LifeGaugeMgr* lifeGaugeMgr;

#endif
