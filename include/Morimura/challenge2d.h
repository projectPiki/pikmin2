#ifndef _MORIMURA_CHALLENGE_H
#define _MORIMURA_CHALLENGE_H

#include "Morimura/Bases.h"

// this could be merged with mrUtil, maybe?

namespace Morimura {

struct TChallengeScreen : public TScreenBase {
	TChallengeScreen(JKRArchive*, int);

	virtual void create(const char*, u32); // _08
	virtual void update();                 // _0C
	virtual void createAnimPane(char*);    // _14
	virtual void updateBckPane();          // _18

	bool isRandAnimStart();

	// _00     = VTBL
	// _00-_18 = TScreenBase
	int mAnimPaneCount;                // _18
	og::Screen::AnimPane** mAnimPanes; // _1C
	int mCounter;                      // _20
	int mCounterMax;                   // _24
	bool _28;                          // _28
};

struct TChallengePiki {
	struct PosInfo {
		PosInfo() { }
		int mState;
		int _04[9];
	};

	TChallengePiki(J2DPane*, J2DPane*, J2DPane*);

	void reset();
	void jumpStart(f32);
	void update();
	void draw();
	void setGoalPos(Vector2f&);
	bool isDemoEnd();

	J2DPane* mPanes[3]; // _00
	f32 _0C;
	f32 _10;
	JGeometry::TVec2f mVec[2];
	PosInfo mPosInfo[50];
	int mMaxPiki;
	f32 _730;
};

struct TChallengeDoping {
	TChallengeDoping(J2DPane*, J2DPane*, J2DPane*, J2DPane*);

	void setLevel(int);
	void update();
};

struct TChallengePanel {
	TChallengePanel(J2DPictureEx*, J2DPane*, J2DPane*);
	void stateInitialize(JKRArchive*, int, int);
	void changeState();
	void addAlpha();
	void decAlpha();
	void alphaUpdate(f32);
	bool canSelect();
	void update(int, bool);
	void startScaleUp();

	int _00;
	J2DPictureEx* mPane1;
	J2DPane* mPane2;
	J2DPane* mPane3;
	og::Screen::ScaleMgr* mScaleMgr;
	f32 _14;
	f32 _18;
	int _1C;
	int _20;
	bool _24;
	f32 _28;
	f32 _2C;
	int _30;
	f32 _34;
};

} // namespace Morimura

#endif
