#include "Graphics.h"
#include "System.h"
#include "wipe.h"
#include "nans.h"

/*
 * --INFO--
 * Address:	8042BD0C
 * Size:	00005C
 */
WipeBase::WipeBase()
{
	mTimer    = 0.0f;
	mSpeed    = 1.0f;
	mIsActive = false;
	_21       = 1;
}

/*
 * --INFO--
 * Address:	8042BD68
 * Size:	000040
 */
void WipeBase::start(f32 p1)
{
	mTimer    = 0.0f;
	mSpeed    = p1;
	mIsActive = true;
	on_start();
}

/*
 * --INFO--
 * Address:	8042BDAC
 * Size:	000078
 */
void WipeBase::update()
{
	draw();
	if (mIsActive) {
		mTimer += sys->mDeltaTime / mSpeed;
		if (mTimer >= 1.0f) {
			mTimer = 1.0f;
		}
	}
}

/*
 * --INFO--
 * Address:	8042BE24
 * Size:	000060
 */
void WipeBase::draw()
{
	if (mIsActive) {
		do_draw(mTimer);
		if (mTimer == 1.0f) {
			mIsActive = false;
		}
	}
}

/*
 * --INFO--
 * Address:	8042BE88
 * Size:	000018
 */
bool WipeInFader::isWhite() { return mTimer > 0.5f; }

/*
 * --INFO--
 * Address:	8042BEA0
 * Size:	000018
 */
bool WipeInFader::isBlack() { return mTimer < 0.5f; }

/*
 * __ct__11WipeInFaderFv
 * --INFO--
 * Address:	8042BEB8
 * Size:	000078
 */
WipeInFader::WipeInFader()
    : mColor(0, 0, 0, 0)
{
}

/*
 * do_draw__11WipeInFaderFf
 * --INFO--
 * Address:	8042BF30
 * Size:	000144
 */
void WipeInFader::do_draw(f32 rate)
{
	Graphics* gfx = sys->mGfx;
	gfx->mOrthoGraph.setPort();
	J2DOrthoGraph* graf = &gfx->mOrthoGraph;

	f32 calc;
	if (rate < 0.2f) {
		calc = 0.0f;
	} else {
		calc = (rate - 0.2f) / 0.8f;
	}
	u8 alpha = calc * 255.0f;
	JUtility::TColor color(mColor.r, mColor.g, mColor.b, 255 - alpha);
	graf->setColor(color);

	u32 y    = System::getRenderModeObj()->efbHeight;
	u32 x    = System::getRenderModeObj()->fbWidth;
	f32 zero = 0.0f;
	JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
	graf->fillBox(box);
}

/*
 * __ct__12WipeOutFaderFv
 * --INFO--
 * Address:	8042C074
 * Size:	000078
 */
WipeOutFader::WipeOutFader()
    : mColor(0, 0, 0, 0)
{
}

/*
 * --INFO--
 * Address:	8042C0EC
 * Size:	000004
 */
void WipeOutFader::on_start() { }

/*
 * isWhite__12WipeOutFaderFv
 * --INFO--
 * Address:	8042C0F0
 * Size:	000018
 */
bool WipeOutFader::isWhite() { return mTimer < 0.5f; }

/*
 * isBlack__12WipeOutFaderFv
 * --INFO--
 * Address:	8042C108
 * Size:	000018
 */
bool WipeOutFader::isBlack() { return mTimer > 0.5f; }

/*
 * doDraw__12WipeOutFaderFf
 * --INFO--
 * Address:	8042C120
 * Size:	000138
 */
void WipeOutFader::do_draw(f32 rate)
{
	f32 calc;
	if (rate > 0.8f) {
		calc = 1.0f;
	} else {
		calc = rate * 1.25f;
	}

	Graphics* gfx = sys->mGfx;
	gfx->mOrthoGraph.setPort();
	J2DOrthoGraph* graf = &gfx->mOrthoGraph;

	u8 alpha = calc * 255.0f;
	JUtility::TColor color(mColor.r, mColor.g, mColor.b, alpha - 0); // yes the - 0 is needed
	graf->setColor(color);

	u32 y    = System::getRenderModeObj()->efbHeight;
	u32 x    = System::getRenderModeObj()->fbWidth;
	f32 zero = 0.0f;
	JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
	graf->fillBox(box);
}

/*
 * on_start__14WipeOutInFaderFv
 * --INFO--
 * Address:	8042C258
 * Size:	000050
 */
void WipeOutInFader::on_start()
{
	mState                  = 1;
	mWipeOutFader.mTimer    = 0.0f;
	mWipeOutFader.mSpeed    = 0.1f;
	mWipeOutFader.mIsActive = true;
	mWipeOutFader.on_start();
}

/*
 * isWhite__14WipeOutInFaderFv
 * --INFO--
 * Address:	8042C2A8
 * Size:	00003C
 */
bool WipeOutInFader::isWhite() { return (mState ? mTimer < 0.5f : mTimer > 0.5f); }

bool WipeOutInFader::isBlack() { return !isWhite(); }

/*
 * do_draw__14WipeOutInFaderFf
 * --INFO--
 * Address:	8042C31C
 * Size:	0000A8
 */
void WipeOutInFader::do_draw(f32)
{
	if (mState) {
		if (!mWipeOutFader.mIsActive) {
			mState                 = 0;
			f32 v1                 = mSpeed - 0.1f;
			mWipeInFader.mTimer    = 0.0f;
			mWipeInFader.mSpeed    = v1;
			mWipeInFader.mIsActive = true;
			mWipeInFader.on_start();
		}
		mWipeOutFader.update();
	} else {
		mWipeInFader.update();
	}
}

/*
 * __ct__10BlackFaderFv
 * --INFO--
 * Address:	8042C3C4
 * Size:	00007C
 */
BlackFader::BlackFader()
    : mColor(0, 0, 0, 0)
{
	mIsBlack = true;
}

/*
 * isWhite__10BlackFaderFv
 * --INFO--
 * Address:	8042C440
 * Size:	000010
 */
bool BlackFader::isWhite() { return !mIsBlack; }

/*
 * isBlack__10BlackFaderFv
 * --INFO--
 * Address:	8042C450
 * Size:	000008
 */
bool BlackFader::isBlack() { return mIsBlack; }

/*
 * do_draw__10BlackFaderFf
 * --INFO--
 * Address:	8042C458
 * Size:	000120
 */
void BlackFader::do_draw(f32 rate)
{
	Graphics* gfx = sys->mGfx;
	gfx->mOrthoGraph.setPort();
	J2DOrthoGraph* graf = &gfx->mOrthoGraph;

	const u8 alpha = 255;
	JUtility::TColor color(mColor.r, mColor.g, mColor.b, alpha);
	if (!mIsBlack) {
		color.r = mColor.r;
		color.g = mColor.g;
		color.b = mColor.b;
		color.a = 0;
	}
	graf->setColor(color);

	u32 y    = System::getRenderModeObj()->efbHeight;
	u32 x    = System::getRenderModeObj()->fbWidth;
	f32 zero = 0.0f;
	JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
	graf->fillBox(box);
}

// Note:: All of BallFader went unused and has been stripped

/*
 * --INFO--
 * Address:	........
 * Size:	000164
 */
BallFader::BallFader(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
BallFader::Ball::Ball()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void BallFader::on_start()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void BallFader::do_draw(f32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void BallFader::computeForces()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000180
 */
void BallFader::emitBalls(f32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00017C
 */
void drawBall(Graphics&, Vector2f, f32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000334
 */
void drawBall2(Graphics&, Vector2f, f32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void BallFader::drawAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void BallFader::simulate()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000324
 */
void BallFader::resolveCollision()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void BallFader::birth()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
BallFader::~BallFader()
{
	// UNUSED FUNCTION
}
