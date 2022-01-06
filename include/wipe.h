#ifndef _WIPE_H
#define _WIPE_H

#include "CNode.h"
#include "JSystem/JUtility.h"
#include "Vector2.h"

struct Graphics;

struct WipeBase : public CNode {
	WipeBase();

	/**
	 * @reifiedAddress{8014B09C}
	 * @reifiedFile{plugProjectKandoU/baseGameSection.cpp}
	 */
	virtual ~WipeBase() { } // _00
	virtual void update();  // _08
	virtual void draw();    // _0C
	/**
	 * @reifiedAddress{8042C578}
	 * @reifiedFile{sysGCU/wipe.cpp}
	 */
	virtual bool isWhite() // _10
	{
		return false;
	}
	/**
	 * @reifiedAddress{8042C580}
	 * @reifiedFile{sysGCU/wipe.cpp}
	 */
	virtual bool isBlack() // _14
	{
		return false;
	}
	/**
	 * @reifiedAddress{8042BDA8}
	 * @reifiedFile{sysGCU/wipe.cpp}
	 */
	virtual void on_start() { } // _18
	/**
	 * @reifiedAddress{8042BE84}
	 * @reifiedFile{sysGCU/wipe.cpp}
	 */
	virtual void do_draw(float) { } // _1C

	void start(float);

	float _18; // _18
	float _1C; // _1C
	bool _20;  // _20
	u8 _21;    // _21
};

/**
 * @size{0x28}
 */
struct WipeInFader : public WipeBase {
	WipeInFader();

	/**
	 * @reifiedAddress{8014AFBC}
	 * @reifiedFile{plugProjectKandoU/baseGameSection.cpp}
	 */
	virtual ~WipeInFader() { }   // _00
	virtual bool isWhite();      // _10
	virtual bool isBlack();      // _14
	virtual void do_draw(float); // _1C

	JUtility::TColor _24; // _24
};

/**
 * @size{0x28}
 */
struct WipeOutFader : public WipeBase {
	WipeOutFader();

	/**
	 * @reifiedAddress{8014B02C}
	 * @reifiedFile{plugProjectKandoU/baseGameSection.cpp}
	 */
	virtual ~WipeOutFader() { }  // _00
	virtual bool isWhite();      // _10
	virtual bool isBlack();      // _14
	virtual void on_start();     // _18
	virtual void do_draw(float); // _1C

	JUtility::TColor _24; // _24
};

/**
 * @size{0x78}
 */
struct WipeOutInFader : public WipeBase {

	/**
	 * @reifiedAddress{8042C5F8}
	 * @reifiedFile{sysGCU/wipe.cpp}
	 */
	virtual ~WipeOutInFader() { } // _00
	virtual bool isWhite();       // _10
	virtual bool isBlack();       // _14
	virtual void on_start();      // _18
	virtual void do_draw(float);  // _1C

	WipeOutFader m_wipeOutFader; // _24
	WipeInFader m_wipeInFader;   // _4C
	u8 _74;                      // _74
};

struct BlackFader : public WipeBase {
	BlackFader();

	/**
	 * @reifiedAddress{8042C588}
	 * @reifiedFile{sysGCU/wipe.cpp}
	 */
	virtual ~BlackFader() {};    // _00
	virtual bool isWhite();      // _10
	virtual bool isBlack();      // _14
	virtual void do_draw(float); // _1C

	JUtility::TColor _24; // _24
	bool _28;             // _28
};

struct BallFader : public WipeBase {
	struct Ball {
		Ball();
	};

	BallFader(int);

	virtual ~BallFader();        // _00
	virtual bool isWhite();      // _10
	virtual bool isBlack();      // _14
	virtual void on_start();     // _18
	virtual void do_draw(float); // _1C

	// Unused/inlined:
	void computeForces();
	void emitBalls(float);
	void drawBall(Graphics&, Vector2f, float);
	void drawBall2(Graphics&, Vector2f, float);
	void drawAll();
	void simulate();
	void resolveCollision();
	void birth();
};

#endif
