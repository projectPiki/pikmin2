#ifndef _WIPE_H
#define _WIPE_H

#include "CNode.h"
#include "JSystem/JUT/TColor.h"
#include "Vector2.h"

struct Graphics;

struct WipeBase : public CNode {
	WipeBase();

	//////////////// VTABLE
	/**
	 * @reifiedAddress{8014B09C}
	 * @reifiedFile{plugProjectKandoU/baseGameSection.cpp}
	 */
	virtual ~WipeBase() { } // _08 (weak)
	virtual void update();  // _10
	virtual void draw();    // _14

	/**
	 * @reifiedAddress{8042C578}
	 * @reifiedFile{sysGCU/wipe.cpp}
	 */
	virtual bool isWhite() // _18 (weak)
	{
		return false;
	}

	/**
	 * @reifiedAddress{8042C580}
	 * @reifiedFile{sysGCU/wipe.cpp}
	 */
	virtual bool isBlack() // _1C (weak)
	{
		return false;
	}

	/**
	 * @reifiedAddress{8042BDA8}
	 * @reifiedFile{sysGCU/wipe.cpp}
	 */
	virtual void on_start() { } // _20 (weak)

	/**
	 * @reifiedAddress{8042BE84}
	 * @reifiedFile{sysGCU/wipe.cpp}
	 */
	virtual void do_draw(float) { } // _24 (weak)
	//////////////// END VTABLE

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
	virtual ~WipeInFader() { }   // _08 (weak)
	virtual bool isWhite();      // _18
	virtual bool isBlack();      // _1C
	virtual void do_draw(float); // _24

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
	virtual ~WipeOutFader() { }  // _08 (weak)
	virtual bool isWhite();      // _18
	virtual bool isBlack();      // _1C
	virtual void on_start();     // _20
	virtual void do_draw(float); // _24

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
	virtual ~WipeOutInFader() { } // _08 (weak)
	virtual bool isWhite();       // _18
	virtual bool isBlack();       // _1C
	virtual void on_start();      // _20
	virtual void do_draw(float);  // _24

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
	virtual ~BlackFader() { }    // _08 (weak)
	virtual bool isWhite();      // _18
	virtual bool isBlack();      // _1C
	virtual void do_draw(float); // _24

	JUtility::TColor _24; // _24
	bool _28;             // _28
};

struct BallFader : public WipeBase {
	// completely inlined/unused?

	struct Ball {
		Ball();
	};

	BallFader(int);

	virtual ~BallFader();        // _08
	virtual bool isWhite();      // _18
	virtual bool isBlack();      // _1C
	virtual void on_start();     // _20
	virtual void do_draw(float); // _24

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
