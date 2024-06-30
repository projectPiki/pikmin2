#include "efx/TOtakara.h"
#include "efx/TTsuyuGrow.h"
#include "efx/Container.h"
#include "efx/TEgate.h"
#include "efx/TKouhai.h"
#include "efx/TPelkira.h"
#include "efx/WarpZone.h"
#include "JSystem/JParticle/JPAMath.h"
#include "Game/Entities/ItemOnyon.h"

namespace efx {

static void _Printf(char* format) { OSReport(format, __FILE__); }

/**
 * @note Address: 0x803B57BC
 * @note Size: 0x108
 */
bool TOtakaraDive::create(Arg* arg)
{
	bool argCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(123, argCheck);
	f32 scale = static_cast<ArgScale*>(arg)->mScale;
	scale     = scale / 35.0f;

	if (TSimple3::create(arg)) {
		for (int i = 0; i < 3; i++) {
			mEmitters[i]->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B58C4
 * @note Size: 0x108
 */
bool TTsuyuGrow0::create(Arg* arg)
{
	bool argCheck = strcmp("ArgRotY", static_cast<ArgRotY*>(arg)->getName()) == 0;
	P2ASSERTLINE(143, argCheck);
	Matrixf mtxRot;
	Vector3f pos = arg->mPosition;
	PSMTXRotRad(mtxRot.mMatrix.mtxView, 'y', static_cast<ArgRotY*>(arg)->mFaceDir);
	mtxRot.setColumn(3, pos);

	if (TSimple1::create(arg)) {
		mEmitters[0]->setGlobalRTMatrix(mtxRot.mMatrix.mtxView);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B59CC
 * @note Size: 0x100
 */
bool TOtakaraApL::create(Arg* arg)
{
	bool argCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(166, argCheck);
	ArgScale* argScale = static_cast<ArgScale*>(arg);
	f32 scale          = argScale->mScale;

	if (TSimple3::create(argScale)) {
		for (int i = 0; i < 3; i++) {
			mEmitters[i]->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B5ACC
 * @note Size: 0xE8
 */
bool TOtakaraApS::create(Arg* arg)
{
	bool argCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(183, argCheck);
	ArgScale* argScale = static_cast<ArgScale*>(arg);
	f32 scale          = argScale->mScale;

	if (TSimple2::create(argScale)) {
		for (int i = 0; i < 2; i++) {
			mEmitters[i]->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B5BB4
 * @note Size: 0x314
 */
bool TOtakaraAp::create(Arg* arg)
{
	bool argCheck = strcmp("ArgScale", static_cast<ArgScale*>(arg)->getName()) == 0;
	P2ASSERTLINE(200, argCheck);
	f32 oldScale = static_cast<ArgScale*>(arg)->mScale;
	Vector3f pos = arg->mPosition;
	f32 newScale = oldScale / 35.0f;

	if (oldScale < 35.0f) {
		TOtakaraApS apS;
		ArgScale argScaleS(pos, newScale);
		return apS.create(&argScaleS);

	} else {
		TOtakaraApL apL;
		ArgScale argScaleL(pos, newScale);
		return apL.create(&argScaleL);
	}
}

/**
 * @note Address: 0x803B5EC8
 * @note Size: 0x124
 */
bool TEgateBC::create(Arg* arg)
{
	bool argCheck = strcmp("ArgRotY", static_cast<ArgRotY*>(arg)->getName()) == 0;
	P2ASSERTLINE(223, argCheck);
	Matrixf mtxRot;
	Vector3f pos = arg->mPosition;
	PSMTXRotRad(mtxRot.mMatrix.mtxView, 'y', static_cast<ArgRotY*>(arg)->mFaceDir);
	mtxRot.setColumn(3, pos);

	if (TForever2::create(arg)) {
		for (int i = 0; i < (int)ARRAY_SIZE(mItems); i++) {
			if (mItems[i].mEmitter) {
				mItems[i].mEmitter->setGlobalRTMatrix(mtxRot.mMatrix.mtxView);
			}
		}
		return true;
	} else {
		return false;
	}
}

/**
 * @note Address: 0x803B5FEC
 * @note Size: 0x124
 */
bool TKouhaiDamage::create(Arg* arg)
{
	bool argCheck = strcmp("ArgKouhai", static_cast<ArgKouhai*>(arg)->getName()) == 0;
	P2ASSERTLINE(249, argCheck);

	ArgKouhai* argKouhai = static_cast<ArgKouhai*>(arg);
	int size             = argKouhai->mSize;

	if (TSimple1::create(argKouhai)) {
		JGeometry::TVec3f scale;
		switch (size) {
		case 0:
			scale.set(0.35f, 0.35f, 0.35f);
			break;
		case 1:
			scale.set(0.6f, 0.6f, 0.6f);
			break;
		case 2:
			scale.set(1.0f, 1.0f, 1.0f);
			break;
		}

		for (int i = 0; i < 1; i++) {
			mEmitters[i]->setScale(scale);
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B6110
 * @note Size: 0xE8
 */
bool TPelkira_ver01::create(Arg* arg)
{
	bool argCheck = strcmp("ArgPelType", static_cast<ArgPelType*>(arg)->getName()) == 0;
	P2ASSERTLINE(275, argCheck);

	ArgPelType* argpel = static_cast<ArgPelType*>(arg);

	switch (argpel->mType) {
	case 0:
		mEffectID = PID_PelKira_1;
		break;
	case 1:
		mEffectID = PID_PelKira_4;
		break;
	case 2:
		mEffectID = PID_PelKira_2;
		break;
	case 3:
		mEffectID = PID_PelKira_3;
		break;
	}
	return TSync::create(argpel);
}

/**
 * @note Address: 0x803B61F8
 * @note Size: 0xD0
 */
bool Container::create(efx::Arg* arg)
{
	bool argCheck = strcmp("ArgType", static_cast<ArgType*>(arg)->getName()) == 0;
	P2ASSERTLINE(301, argCheck);

	ArgType* argtype = static_cast<ArgType*>(arg);

	switch (argtype->mType) {
	case ONYON_TYPE_BLUE:
		mEffectID = PID_Container_Blue;
		break;
	case ONYON_TYPE_RED:
		mEffectID = PID_Container_Red;
		break;
	case ONYON_TYPE_YELLOW:
		mEffectID = PID_Container_Yellow;
		break;
	}
	return TSync::create(argtype);
}

/**
 * @note Address: 0x803B62C8
 * @note Size: 0xE8
 */
bool ContainerAct::create(efx::Arg* arg)
{
	bool argCheck = strcmp("ArgType", static_cast<ArgType*>(arg)->getName()) == 0;
	P2ASSERTLINE(322, argCheck);

	ArgType* argtype = static_cast<ArgType*>(arg);

	switch (argtype->mType) {
	case ONYON_TYPE_BLUE:
		mItems[0].mEffectID = PID_ContainerAct_Blue_1;
		mItems[1].mEffectID = PID_ContainerAct_Blue_2;
		break;
	case ONYON_TYPE_RED:
		mItems[0].mEffectID = PID_ContainerAct_Red_1;
		mItems[1].mEffectID = PID_ContainerAct_Red_2;
		break;
	case ONYON_TYPE_YELLOW:
		mItems[0].mEffectID = PID_ContainerAct_Yellow_1;
		mItems[1].mEffectID = PID_ContainerAct_Yellow_2;
		break;
	}
	return TSyncGroup2<TForever>::create(argtype);
}

/**
 * @note Address: 0x803B63B0
 * @note Size: 0x1B0
 */
void WarpZone::setRateLOD(int id, bool flag)
{
	if (!flag) {
		f32 lods[4][3] = {
			{ 0.3f, 0.25f, 0.15f },
			{ 0.06f, 0.05f, 0.04f },
			{ 0.225f, 0.2f, 0.15f },
			{ 0.1f, 0.08f, 0.06f },
		};
		for (int i = 0; i < 4; i++) {
			JPABaseEmitter* emitter = mItems[i].getEmitter();
			if (emitter) {
				emitter->setRate(lods[i][id]);
			}
		}
	} else {
		f32 lods[4][3] = {
			{ 0.3f, 0.25f, 0.15f },
			{ 0.06f, 0.05f, 0.04f },
			{ 0.0f, 0.0f, 0.0f },
			{ 0.1f, 0.08f, 0.06f },
		};

		for (int i = 0; i < 4; i++) {
			JPABaseEmitter* emitter = mItems[i].getEmitter();
			if (emitter) {
				emitter->setRate(lods[i][id]);
			}
		}
	}
}

} // namespace efx
