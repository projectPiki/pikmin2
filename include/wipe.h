#ifndef _WIPE_H
#define _WIPE_H

#include "CNode.h"
#include "JSystem/JUtility/TColor.h"
#include "Vector2.h"

struct Graphics;

struct WipeBase : public CNode {
	WipeBase();

	// virtual ~WipeBase() { }                  // _08 (weak)
	virtual void update();                   // _10
	virtual void draw();                     // _14
	virtual bool isWhite() { return false; } // _18 (weak)
	virtual bool isBlack() { return false; } // _1C (weak)
	virtual void on_start() { }              // _20 (weak)
	virtual void do_draw(f32) { }            // _24 (weak)

	void start(f32);

	f32 mTimer;     // _18
	f32 mSpeed;     // _1C
	bool mIsActive; // _20
	u8 mUnused;     // _21, seems to not be used for anything
};

/**
 * @size{0x28}
 */
struct WipeInFader : public WipeBase {
	WipeInFader();

	// virtual ~WipeInFader() { } // _08 (weak)
	virtual bool isWhite();    // _18
	virtual bool isBlack();    // _1C
	virtual void do_draw(f32); // _24

	JUtility::TColor mColor; // _24
};

/**
 * @size{0x28}
 */
struct WipeOutFader : public WipeBase {
	WipeOutFader();

	// virtual ~WipeOutFader() { } // _08 (weak)
	virtual bool isWhite();    // _18
	virtual bool isBlack();    // _1C
	virtual void on_start();   // _20
	virtual void do_draw(f32); // _24

	JUtility::TColor mColor; // _24
};

/**
 * @size{0x78}
 */
struct WipeOutInFader : public WipeBase {

	// virtual ~WipeOutInFader() { } // _08 (weak)
	virtual bool isWhite();    // _18
	virtual bool isBlack();    // _1C
	virtual void on_start();   // _20
	virtual void do_draw(f32); // _24

	WipeOutFader mWipeOutFader; // _24
	WipeInFader mWipeInFader;   // _4C
	u8 mState;                  // _74
};

struct BlackFader : public WipeBase {
	BlackFader();

	// virtual ~BlackFader() { }  // _08 (weak)
	virtual bool isWhite();    // _18
	virtual bool isBlack();    // _1C
	virtual void do_draw(f32); // _24

	JUtility::TColor mColor; // _24
	bool mIsBlack;           // _28, (1 = black, 0 = white)
};

struct BallFader : public WipeBase {
	// (this struct is entirely unused)

	struct Ball {
		Ball();
	};

	BallFader(int);

	// virtual ~BallFader();      // _08
	virtual bool isWhite();    // _18
	virtual bool isBlack();    // _1C
	virtual void on_start();   // _20
	virtual void do_draw(f32); // _24

	// Unused/inlined:
	void computeForces();
	void emitBalls(f32);
	void drawBall(Graphics&, Vector2f, f32);
	void drawBall2(Graphics&, Vector2f, f32);
	void drawAll();
	void simulate();
	void resolveCollision();
	void birth();
};

#endif
