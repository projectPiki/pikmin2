#include "Graphics.h"
#include "System.h"
#include "wipe.h"
#include "nans.h"

/**
 * @note Address: 0x8042BD0C
 * @note Size: 0x5C
 */
WipeBase::WipeBase()
{
	mTimer    = 0.0f;
	mSpeed    = 1.0f;
	mIsActive = false;
	mUnused   = 1;
}

/**
 * @note Address: 0x8042BD68
 * @note Size: 0x40
 */
void WipeBase::start(f32 speed)
{
	mTimer    = 0.0f;
	mSpeed    = speed;
	mIsActive = true;
	on_start();
}

/**
 * @note Address: 0x8042BDAC
 * @note Size: 0x78
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

/**
 * @note Address: 0x8042BE24
 * @note Size: 0x60
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

/**
 * @note Address: 0x8042BE88
 * @note Size: 0x18
 */
bool WipeInFader::isWhite() { return mTimer > 0.5f; }

/**
 * @note Address: 0x8042BEA0
 * @note Size: 0x18
 */
bool WipeInFader::isBlack() { return mTimer < 0.5f; }

/**
 * __ct__11WipeInFaderFv
 * @note Address: 0x8042BEB8
 * @note Size: 0x78
 */
WipeInFader::WipeInFader()
    : mColor(0, 0, 0, 0)
{
}

/**
 * do_draw__11WipeInFaderFf
 * @note Address: 0x8042BF30
 * @note Size: 0x144
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

/**
 * __ct__12WipeOutFaderFv
 * @note Address: 0x8042C074
 * @note Size: 0x78
 */
WipeOutFader::WipeOutFader()
    : mColor(0, 0, 0, 0)
{
}

/**
 * @note Address: 0x8042C0EC
 * @note Size: 0x4
 */
void WipeOutFader::on_start() { }

/**
 * isWhite__12WipeOutFaderFv
 * @note Address: 0x8042C0F0
 * @note Size: 0x18
 */
bool WipeOutFader::isWhite() { return mTimer < 0.5f; }

/**
 * isBlack__12WipeOutFaderFv
 * @note Address: 0x8042C108
 * @note Size: 0x18
 */
bool WipeOutFader::isBlack() { return mTimer > 0.5f; }

/**
 * doDraw__12WipeOutFaderFf
 * @note Address: 0x8042C120
 * @note Size: 0x138
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

/**
 * on_start__14WipeOutInFaderFv
 * @note Address: 0x8042C258
 * @note Size: 0x50
 */
void WipeOutInFader::on_start()
{
	mState                  = 1;
	mWipeOutFader.mTimer    = 0.0f;
	mWipeOutFader.mSpeed    = 0.1f;
	mWipeOutFader.mIsActive = true;
	mWipeOutFader.on_start();
}

/**
 * isWhite__14WipeOutInFaderFv
 * @note Address: 0x8042C2A8
 * @note Size: 0x3C
 */
bool WipeOutInFader::isWhite() { return (mState ? mTimer < 0.5f : mTimer > 0.5f); }

bool WipeOutInFader::isBlack() { return !isWhite(); }

/**
 * do_draw__14WipeOutInFaderFf
 * @note Address: 0x8042C31C
 * @note Size: 0xA8
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

/**
 * __ct__10BlackFaderFv
 * @note Address: 0x8042C3C4
 * @note Size: 0x7C
 */
BlackFader::BlackFader()
    : mColor(0, 0, 0, 0)
{
	mIsBlack = true;
}

/**
 * isWhite__10BlackFaderFv
 * @note Address: 0x8042C440
 * @note Size: 0x10
 */
bool BlackFader::isWhite() { return !mIsBlack; }

/**
 * isBlack__10BlackFaderFv
 * @note Address: 0x8042C450
 * @note Size: 0x8
 */
bool BlackFader::isBlack() { return mIsBlack; }

/**
 * do_draw__10BlackFaderFf
 * @note Address: 0x8042C458
 * @note Size: 0x120
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

/**
 * @note Address: N/A
 * @note Size: 0x164
 */
BallFader::BallFader(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
BallFader::Ball::Ball()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void BallFader::on_start()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void BallFader::do_draw(f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void BallFader::computeForces()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x180
 */
void BallFader::emitBalls(f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x17C
 */
void drawBall(Graphics&, Vector2f, f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x334
 */
void drawBall2(Graphics&, Vector2f, f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
void BallFader::drawAll()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA8
 */
void BallFader::simulate()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x324
 */
void BallFader::resolveCollision()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void BallFader::birth()
{
	// this is just here to generate weak functions in the right order
	WipeBase* base;
	base->isBlack();
	base->isWhite();
	// UNUSED FUNCTION
}
