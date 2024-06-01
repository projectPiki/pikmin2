#include "JSystem/JParticle/JPAMath.h"
#include "efx2d/T2DCursor.h"
#include "efx2d/T2DCountKira.h"
#include "efx2d/T2DSensor.h"
#include "efx2d/T2DSprayset.h"
#include "efx2d/FileSelect.h"
#include "efx2d/WorldMap.h"
#include "System.h"
#include "JSystem/JParticle/JPAMath.h"
#include "Matrixf.h"

static const char name[] = "efx2dEffect";

namespace efx2d {
/**
 * @note Address: 0x803BA18C
 * @note Size: 0x7C
 */
bool T2DCursor::create(Arg* arg)
{
	if (sys->mDeltaTime < 0.016949152f) {
		mEfxID = PID_RocketA;
	}

	if (TChasePos::create(arg)) {
		mEmitter->setScale(mScale);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803BA208
 * @note Size: 0x5C
 */
bool T2DCountKira::create(Arg* arg)
{
	if (TForever::create(arg)) {
		mEmitter->setScale(mScale);
		return true;
	}
	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0xE8
 */
bool T2DSensorAct_forVS::create(Arg*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803BA264
 * @note Size: 0xD8
 */
bool T2DSensorGet_forVS::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(59, nameCheck);
	ArgScale* args = static_cast<ArgScale*>(arg);

	if (TSimple2::create(arg)) {
		f32 scale = args->mScale;
		mEmitters[0]->setScale(scale);
		mEmitters[1]->setScale(scale);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803BA33C
 * @note Size: 0x140
 */
bool T2DSprayset_forVS::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScaleColorColor", arg->getName()) == 0;
	P2ASSERTLINE(79, nameCheck);
	ArgScaleColorColor* args = static_cast<ArgScaleColorColor*>(arg);

	if (TSimple2::create(arg)) {
		JUtility::TColor col1 = args->mColor1;
		JUtility::TColor col2 = args->mColor2;
		f32 scale             = args->mScale;

		for (int i = 0; i < 2; i++) {
			mEmitters[i]->setScale(scale);
			mEmitters[i]->setPrmColorRGB(col1);
			mEmitters[i]->setColorRGB(col2);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803BA47C
 * @note Size: 0xC8
 */
bool FileSelect::T2DFilecopied::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgColor", arg->getName()) == 0;
	P2ASSERTLINE(111, nameCheck);
	ArgColor* args = static_cast<ArgColor*>(arg);

	JUtility::TColor col = args->mColor;
	if (TSimple1::create(arg)) {
		mEmitters[0]->setColorRGB(col);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803BA544
 * @note Size: 0xC8
 */
bool FileSelect::T2DFiledelete::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgColor", arg->getName()) == 0;
	P2ASSERTLINE(127, nameCheck);
	ArgColor* args = static_cast<ArgColor*>(arg);

	JUtility::TColor col = args->mColor;
	if (TSimple1::create(arg)) {
		mEmitters[0]->setColorRGB(col);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803BA60C
 * @note Size: 0xC8
 */
bool FileSelect::T2DFiledeleteM::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgColor", arg->getName()) == 0;
	P2ASSERTLINE(143, nameCheck);
	ArgColor* args = static_cast<ArgColor*>(arg);

	JUtility::TColor col = args->mColor;
	if (TSimple1::create(arg)) {
		mEmitters[0]->setColorRGB(col);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803BA6D4
 * @note Size: 0x1CC
 */
bool FileSelect::T2DFilecopyBase::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgFilecopy", arg->getName()) == 0;
	P2ASSERTLINE(160, nameCheck);
	ArgFilecopy* args    = static_cast<ArgFilecopy*>(arg);
	JUtility::TColor col = args->mColor;
	Vector2f argVec      = *arg;
	Vector2f sep         = args->mAltPosition - argVec;

	f32 scale = sep.length() / 200.0f;

	Vector3f test(sep.x, sep.y, 0.0f);
	test.normalise();

	Mtx mtx;
	mtx[0][0] = test.x;
	mtx[0][1] = -test.y;
	mtx[0][2] = 0.0f;
	mtx[0][3] = argVec.x;

	mtx[1][0] = test.y;
	mtx[1][1] = test.x;
	mtx[1][2] = 0.0f;
	mtx[1][3] = argVec.y;

	mtx[2][0] = test.z;
	mtx[2][1] = 0.0f;
	mtx[2][2] = 1.0f;
	mtx[2][3] = 0.0f;

	if (TForever::create(arg)) {
		mEmitter->setColorRGB(col);
		JPASetRMtxfromMtx(mtx, mEmitter->mGlobalRot);
		mEmitter->setScaleOnly(scale);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803BA8A0
 * @note Size: 0xDC
 */
bool WorldMap::T2DShstar2::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(201, nameCheck);
	ArgScale* args = static_cast<ArgScale*>(arg);

	f32 scale = args->mScale;
	if (TSimple1::create(arg)) {
		volatile Vector3f idk = scale;

		mEmitters[0]->setScale(scale);

		return true;
	}
	return false;
}

/**
 * @note Address: 0x803BA97C
 * @note Size: 0xF4
 */
bool WorldMap::T2DNewmap::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(219, nameCheck);
	ArgScale* args = static_cast<ArgScale*>(arg);

	f32 scale = args->mScale;
	if (TSimple2::create(arg)) {
		volatile Vector3f idk = scale;

		mEmitters[0]->setScale(scale);
		mEmitters[1]->setScale(scale);

		return true;
	}
	return false;
}

/**
 * @note Address: 0x803BAA70
 * @note Size: 0xAC
 */
bool WorldMap::TSimple_ArgDirScale::create(Arg* arg)
{
	ArgDirScale* args = static_cast<ArgDirScale*>(arg);

	f32 x     = args->mDir.x;
	f32 y     = args->mDir.y;
	f32 scale = args->mScale;
	if (TSimple1::create(arg)) {

		mEmitters[0]->setGlobalScale(scale);
		mEmitters[0]->setScaleOnly(scale);
		mEmitters[0]->setAngle(x, y, 0.0f);

		return true;
	}
	return false;
}

/**
 * @note Address: 0x803BAB1C
 * @note Size: 0x5C
 */
bool WorldMap::T2DOnyonKira::create(Arg* arg)
{
	if (TChasePosDir::create(arg)) {
		JGeometry::TVec3f* vec = &mEmitter->mLocalScl;
		mPosition.x            = vec->x;
		mPosition.y            = vec->y;
		mPosition.z            = vec->z;
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803BAB78
 * @note Size: 0x40
 */
void WorldMap::T2DOnyonKira::setGlobalParticleScale(f32 scale)
{
	JPABaseEmitter* emit = mEmitter;
	if (!emit)
		return;
	Vector3f test;
	test.x = mPosition.x;
	test.y = mPosition.y;
	test.z = mPosition.z;

	emit->setGlobalScale(scale);
	test = test * scale;
	mEmitter->setScaleMain(test.x, test.y, test.z);
}

/**
 * @note Address: 0x803BABB8
 * @note Size: 0x18
 */
void WorldMap::T2DRocketGlow::setGlobalParticleScale(f32 scale)
{
	JPABaseEmitter* emit = mEmitter;
	if (!emit)
		return;

	emit->setGlobalScale(scale);
}

/**
 * @note Address: 0x803BABD0
 * @note Size: 0x5C
 */
bool WorldMap::T2DRocketB::create(Arg* arg)
{
	if (TChasePosDir::create(arg)) {
		JGeometry::TVec3f* vec = &mEmitter->mLocalScl;
		mScale.x               = vec->x;
		mScale.y               = vec->y;
		mScale.z               = vec->z;
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803BAC2C
 * @note Size: 0x40
 */
void WorldMap::T2DRocketB::setGlobalParticleScale(f32 scale)
{
	JPABaseEmitter* emit = mEmitter;
	if (!emit)
		return;
	Vector3f test;
	test.x = mScale.x;
	test.y = mScale.y;
	test.z = mScale.z;

	emit->setGlobalScale(scale);
	test = test * scale;
	mEmitter->setScaleMain(test.x, test.y, test.z);
}

} // namespace efx2d
