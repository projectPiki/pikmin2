#ifndef _TINYPIKMINMGR_H
#define _TINYPIKMINMGR_H

#include "types.h"

struct JKRArchive;
struct TinyPikmin;
struct J2DPicture;

// the logo will always have either the first or second total Pikmin (in theory you could do way more)
#define TINYPIKMINMGR_LOWERCOUNT  10
#define TINYPIKMINMGR_HIGHERCOUNT 100
// probability (between 0 and 1 for the lower count to be used, aka 0.8 = 80% for 10 pikmin)
#define TINYPIKMINMGR_HIGHCOUNT_CHANCE 0.8f

struct TinyPikminMgr {
	TinyPikminMgr();

	void init();

	void loadResource(JKRArchive*);
	void update();
	void draw();
	void appear();
	void disappear();

	TinyPikmin* mPikis; // _00
	int mMode;
	bool _08;
	bool mDoSlamPikmin; // _09

	static u32 sTinyPikminNum;
	static J2DPicture* sPikminTex[6];
};

static TinyPikminMgr* sTinyPikminMgr;

#endif
