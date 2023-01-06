#include "efx/TEnemyPiyo.h"
#include "efx/TEnemyPoison.h"
#include "efx/TSekika.h"
#include "efx/TEnemyDead.h"
#include "efx/TEnemyWalkSmoke.h"
#include "efx/TEnemyDownSmoke.h"
#include "efx/TEnemyDownWat.h"
#include "efx/TEnemyDive.h"
#include "efx/TEnemyBomb.h"
#include "efx/TEnemyApsmoke.h"
#include "efx/TEnemyHamon.h"

namespace efx {

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

/*
 * --INFO--
 * Address:	803C7834
 * Size:	000274
 */
bool TEnemyPiyo::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgEnemyType", arg->getName()) == 0;
	P2ASSERTLINE(17, nameCheck);

	efx::ArgEnemyType* argt = static_cast<efx::ArgEnemyType*>(arg);

	bool docreate;
	f32 scale;
	switch (argt->m_typeID) {
	case Game::EnemyTypeID::EnemyID_Chappy:
	case Game::EnemyTypeID::EnemyID_BlueChappy:
	case Game::EnemyTypeID::EnemyID_YellowChappy:
	case Game::EnemyTypeID::EnemyID_KumaChappy:
		scale = 1.75f;
		break;

	case Game::EnemyTypeID::EnemyID_Kochappy:
	case Game::EnemyTypeID::EnemyID_BlueKochappy:
	case Game::EnemyTypeID::EnemyID_YellowKochappy:
	case Game::EnemyTypeID::EnemyID_KumaKochappy:
		scale = 0.65f;
		break;

	case Game::EnemyTypeID::EnemyID_LeafChappy:
		scale = 0.96f;
		break;

	case Game::EnemyTypeID::EnemyID_FireChappy:
		scale = 1.9f;
		break;

	case Game::EnemyTypeID::EnemyID_Baby:
		scale = 0.6f;
		break;

	case Game::EnemyTypeID::EnemyID_Tank:
	case Game::EnemyTypeID::EnemyID_Wtank:
		scale = 0.88f;
		break;

	case Game::EnemyTypeID::EnemyID_Frog:
		scale = 1.0f;
		break;

	case Game::EnemyTypeID::EnemyID_MaroFrog:
		scale = 0.93f;
		break;

	case Game::EnemyTypeID::EnemyID_Tadpole:
		scale = 0.53f;
		break;

	case Game::EnemyTypeID::EnemyID_Sarai:
	case Game::EnemyTypeID::EnemyID_Demon:
		scale = 0.78f;
		break;

	case Game::EnemyTypeID::EnemyID_BombSarai:
		scale = 0.75f;
		break;

	case Game::EnemyTypeID::EnemyID_ElecBug:
		docreate = false;
		return docreate;

	case Game::EnemyTypeID::EnemyID_Catfish:
		scale = 1.1f;
		break;

	case Game::EnemyTypeID::EnemyID_UjiA:
	case Game::EnemyTypeID::EnemyID_UjiB:
	case Game::EnemyTypeID::EnemyID_Tobi:
		scale = 0.45f;
		break;

	case Game::EnemyTypeID::EnemyID_Qurione:
		docreate = false;
		return docreate;

	case Game::EnemyTypeID::EnemyID_Egg:
		docreate = false;
		return docreate;

	case Game::EnemyTypeID::EnemyID_Armor:
		scale = 1.15f;
		break;

	case Game::EnemyTypeID::EnemyID_PanModoki:
		scale = 0.8f;
		break;

	case Game::EnemyTypeID::EnemyID_Miulin:
		scale = 1.25f;
		break;

	case Game::EnemyTypeID::EnemyID_Imomushi:
		scale = 0.62f;
		break;

	case Game::EnemyTypeID::EnemyID_TamagoMushi:
		docreate = false;
		return docreate;

	case Game::EnemyTypeID::EnemyID_Jigumo:
		scale = 0.75f;
		break;

	case Game::EnemyTypeID::EnemyID_FireOtakara:
	case Game::EnemyTypeID::EnemyID_WaterOtakara:
	case Game::EnemyTypeID::EnemyID_GasOtakara:
	case Game::EnemyTypeID::EnemyID_ElecOtakara:
		scale = 0.65f;
		break;

	case Game::EnemyTypeID::EnemyID_Fuefuki:
		scale = 0.77f;
		break;

	case Game::EnemyTypeID::EnemyID_Mar:
		scale = 0.21f;
		break;

	case Game::EnemyTypeID::EnemyID_Hanachirashi:
		scale = 1.35f;
		break;

	case Game::EnemyTypeID::EnemyID_Kurage:
		scale = 1.3f;
		break;

	case Game::EnemyTypeID::EnemyID_OniKurage:
		scale = 1.9f;
		break;

	case Game::EnemyTypeID::EnemyID_ShijimiChou:
		scale = 0.65f;
		break;

	case Game::EnemyTypeID::EnemyID_SnakeCrow:
		docreate = false;
		return docreate;

	case Game::EnemyTypeID::EnemyID_SnakeWhole:
		scale = 1.25f;
		break;

	case Game::EnemyTypeID::EnemyID_KingChappy:
		scale = 2.15f;
		break;

	case Game::EnemyTypeID::EnemyID_MiniHoudai:
	case Game::EnemyTypeID::EnemyID_FminiHoudai:
		scale = 1.45f;
		break;

	case Game::EnemyTypeID::EnemyID_Hana:
		scale = 1.45f;
		break;

	case Game::EnemyTypeID::EnemyID_Kabuto:
	case Game::EnemyTypeID::EnemyID_Rkabuto:
	case Game::EnemyTypeID::EnemyID_Fkabuto:
		scale = 1.4f;
		break;

	case Game::EnemyTypeID::EnemyID_Sokkuri:
		scale = 0.85f;
		break;

	case Game::EnemyTypeID::EnemyID_OoPanModoki:
		scale = 1.55f;
		break;

	case Game::EnemyTypeID::EnemyID_UmiMushi:
		scale = 2.45f;
		break;

	case Game::EnemyTypeID::EnemyID_Kogane:
	case Game::EnemyTypeID::EnemyID_Wealthy:
	case Game::EnemyTypeID::EnemyID_Fart:
		docreate = false;
		return docreate;

	case Game::EnemyTypeID::EnemyID_BombOtakara:
		scale = 0.65f;
		break;

	case Game::EnemyTypeID::EnemyID_BluePom:
	case Game::EnemyTypeID::EnemyID_RedPom:
	case Game::EnemyTypeID::EnemyID_YellowPom:
	case Game::EnemyTypeID::EnemyID_BlackPom:
	case Game::EnemyTypeID::EnemyID_WhitePom:
	case Game::EnemyTypeID::EnemyID_RandPom:
	case Game::EnemyTypeID::EnemyID_Hiba:
	case Game::EnemyTypeID::EnemyID_GasHiba:
	case Game::EnemyTypeID::EnemyID_ElecHiba:
	case Game::EnemyTypeID::EnemyID_Bomb:
	case Game::EnemyTypeID::EnemyID_DangoMushi:
	case Game::EnemyTypeID::EnemyID_Tyre:
	case Game::EnemyTypeID::EnemyID_BlackMan:
		docreate = false;
		return docreate;

	default:
		docreate = false;
		return docreate;
	}

	scale *= argt->m_scale;

	if (TSync::create(arg)) {
		docreate = true;
		m_emitter->setScaleOnly(scale);
		f32 offs = (scale - 1.0f) * 0.5f + 1.0f;
		volatile Vector3f vec1, vec2; // dumb way to get the stack in here.
		vec1.x = scale;
		vec1.y = scale;
		vec1.z = scale;
		vec2.x = offs;
		vec2.y = offs;
		vec2.z = offs;
		m_emitter->setGlobalScale(offs);

	} else {
		docreate = false;
	}

	return docreate;
}

/*
 * --INFO--
 * Address:	803C7AA8
 * Size:	0000DC
 */
bool TEnemyPoisonL::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(199, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSimple1::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
	} else {
		docreate = false;
	}

	return docreate;
}

/*
 * --INFO--
 * Address:	803C7B84
 * Size:	0000DC
 */
bool TEnemyPoisonS::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(214, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSimple1::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C7C60
 * Size:	0000DC
 */
bool TSekikaLOff::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(231, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSimple1::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C7D3C
 * Size:	0000DC
 */
bool TSekikaLOn::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(246, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSimple1::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C7E18
 * Size:	0000DC
 */
bool TSekikaSOff::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(261, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSimple1::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C7EF4
 * Size:	0000DC
 */
bool TSekikaSOn::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(276, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSimple1::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C7FD0
 * Size:	0000DC
 */
bool TEnemyDead_ArgScale::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(295, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSimple1::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C80AC
 * Size:	00024C
 */
bool TEnemyDead::create(efx::Arg* arg)
{
	bool docreate;
	bool nameCheck = strcmp("ArgEnemyType", arg->getName()) == 0;
	P2ASSERTLINE(312, nameCheck);

	efx::ArgEnemyType* argt = static_cast<efx::ArgEnemyType*>(arg);

	f32 scale;
	switch (argt->m_typeID) {
	case Game::EnemyTypeID::EnemyID_Chappy:
	case Game::EnemyTypeID::EnemyID_BlueChappy:
	case Game::EnemyTypeID::EnemyID_YellowChappy:
	case Game::EnemyTypeID::EnemyID_KumaChappy:
		scale = 1.8f;
		break;

	case Game::EnemyTypeID::EnemyID_Kochappy:
	case Game::EnemyTypeID::EnemyID_BlueKochappy:
	case Game::EnemyTypeID::EnemyID_YellowKochappy:
	case Game::EnemyTypeID::EnemyID_KumaKochappy:
		scale = 0.85f;
		break;

	case Game::EnemyTypeID::EnemyID_LeafChappy:
		scale = 0.9f;
		break;

	case Game::EnemyTypeID::EnemyID_FireChappy:
		scale = 1.8f;
		break;

	case Game::EnemyTypeID::EnemyID_Baby:
		scale = 0.8f;
		break;

	case Game::EnemyTypeID::EnemyID_Tank:
	case Game::EnemyTypeID::EnemyID_Wtank:
		scale = 1.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Frog:
		scale = 1.0f;
		break;

	case Game::EnemyTypeID::EnemyID_MaroFrog:
		scale = 1.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Tadpole:
		scale = 0.75f;
		break;

	case Game::EnemyTypeID::EnemyID_Sarai:
	case Game::EnemyTypeID::EnemyID_Demon:
		scale = 0.9f;
		break;

	case Game::EnemyTypeID::EnemyID_BombSarai:
		scale = 1.35f;
		break;

	case Game::EnemyTypeID::EnemyID_ElecBug:
		scale = 0.9f;
		break;

	case Game::EnemyTypeID::EnemyID_Catfish:
		scale = 1.3f;
		break;

	case Game::EnemyTypeID::EnemyID_UjiA:
	case Game::EnemyTypeID::EnemyID_UjiB:
	case Game::EnemyTypeID::EnemyID_Tobi:
		scale = 0.6f;
		break;

	case Game::EnemyTypeID::EnemyID_Qurione:
		scale = 0.6f;
		break;

	case Game::EnemyTypeID::EnemyID_Egg:
		docreate = false;
		return docreate;

	case Game::EnemyTypeID::EnemyID_Armor:
		scale = 1.45f;
		break;

	case Game::EnemyTypeID::EnemyID_PanModoki:
		scale = 0.95f;
		break;

	case Game::EnemyTypeID::EnemyID_Miulin:
		scale = 1.5f;
		break;

	case Game::EnemyTypeID::EnemyID_Imomushi:
		docreate = false;
		return docreate;

	case Game::EnemyTypeID::EnemyID_TamagoMushi:
		scale = 0.7f;
		break;

	case Game::EnemyTypeID::EnemyID_Jigumo:
		scale = 1.0f;
		break;

	case Game::EnemyTypeID::EnemyID_FireOtakara:
	case Game::EnemyTypeID::EnemyID_WaterOtakara:
	case Game::EnemyTypeID::EnemyID_GasOtakara:
	case Game::EnemyTypeID::EnemyID_ElecOtakara:
		scale = 0.7f;
		break;

	case Game::EnemyTypeID::EnemyID_Fuefuki:
		scale = 0.85f;
		break;

	case Game::EnemyTypeID::EnemyID_Mar:
	case Game::EnemyTypeID::EnemyID_Hanachirashi:
	case Game::EnemyTypeID::EnemyID_Kurage:
	case Game::EnemyTypeID::EnemyID_OniKurage:
		docreate = false;
		return docreate;

	case Game::EnemyTypeID::EnemyID_ShijimiChou:
		scale = 0.55f;
		break;

	case Game::EnemyTypeID::EnemyID_SnakeCrow:
		scale = 1.5f;
		break;

	case Game::EnemyTypeID::EnemyID_SnakeWhole:
		scale = 1.5f;
		break;

	case Game::EnemyTypeID::EnemyID_KingChappy:
		scale = 2.0f;
		break;

	case Game::EnemyTypeID::EnemyID_MiniHoudai:
	case Game::EnemyTypeID::EnemyID_FminiHoudai:
		scale = 1.6f;
		break;

	case Game::EnemyTypeID::EnemyID_Hana:
		scale = 1.45f;
		break;

	case Game::EnemyTypeID::EnemyID_Kabuto:
	case Game::EnemyTypeID::EnemyID_Rkabuto:
	case Game::EnemyTypeID::EnemyID_Fkabuto:
		scale = 1.5f;
		break;

	case Game::EnemyTypeID::EnemyID_Sokkuri:
		scale = 0.9f;
		break;

	case Game::EnemyTypeID::EnemyID_OoPanModoki:
		scale = 1.7f;
		break;

	case Game::EnemyTypeID::EnemyID_UmiMushi:
		docreate = false;
		return docreate;

	case Game::EnemyTypeID::EnemyID_Kogane:
	case Game::EnemyTypeID::EnemyID_Wealthy:
	case Game::EnemyTypeID::EnemyID_Fart:
		scale = 0.94f;
		break;

	case Game::EnemyTypeID::EnemyID_BombOtakara:
		scale = 0.7f;
		break;

	case Game::EnemyTypeID::EnemyID_Tyre:
	case Game::EnemyTypeID::EnemyID_BlackMan:
		docreate = false;
		return docreate;

	case Game::EnemyTypeID::EnemyID_DangoMushi:
		scale = 2.5f;
		break;

	case Game::EnemyTypeID::EnemyID_BluePom:
	case Game::EnemyTypeID::EnemyID_RedPom:
	case Game::EnemyTypeID::EnemyID_YellowPom:
	case Game::EnemyTypeID::EnemyID_BlackPom:
	case Game::EnemyTypeID::EnemyID_WhitePom:
	case Game::EnemyTypeID::EnemyID_RandPom:
	case Game::EnemyTypeID::EnemyID_Hiba:
	case Game::EnemyTypeID::EnemyID_GasHiba:
	case Game::EnemyTypeID::EnemyID_ElecHiba:
	case Game::EnemyTypeID::EnemyID_Bomb:
		docreate = false;
		return docreate;

	default:
		docreate = false;
		return docreate;
	}

	scale *= argt->m_scale;

	if (TSimple1::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C82F8
 * Size:	000318
 */
bool TEnemyWalkSmoke::create(efx::Arg* arg)
{
	int isSmall;
	bool nameCheck = strcmp("ArgEnemyType", arg->getName()) == 0;
	P2ASSERTLINE(491, nameCheck);

	efx::ArgEnemyType* argt = static_cast<efx::ArgEnemyType*>(arg);
	Vector3f pos            = arg->m_position;

	f32 scale;
	switch (argt->m_typeID) {
	case Game::EnemyTypeID::EnemyID_Chappy:
	case Game::EnemyTypeID::EnemyID_BlueChappy:
	case Game::EnemyTypeID::EnemyID_YellowChappy:
	case Game::EnemyTypeID::EnemyID_KumaChappy:
		scale   = 1.4f;
		isSmall = false;
		break;

	case Game::EnemyTypeID::EnemyID_Kochappy:
	case Game::EnemyTypeID::EnemyID_BlueKochappy:
	case Game::EnemyTypeID::EnemyID_YellowKochappy:
	case Game::EnemyTypeID::EnemyID_KumaKochappy:
		scale   = 1.0f;
		isSmall = true;
		break;

	case Game::EnemyTypeID::EnemyID_LeafChappy:
		scale   = 0.6f;
		isSmall = false;
		break;

	case Game::EnemyTypeID::EnemyID_FireChappy:
		scale   = 1.4f;
		isSmall = false;
		break;

	case Game::EnemyTypeID::EnemyID_Baby:
		return false;

	case Game::EnemyTypeID::EnemyID_Tank:
	case Game::EnemyTypeID::EnemyID_Wtank:
		scale   = 1.0f;
		isSmall = true;
		break;

	case Game::EnemyTypeID::EnemyID_Frog:
		return false;

	case Game::EnemyTypeID::EnemyID_MaroFrog:
		return false;

	case Game::EnemyTypeID::EnemyID_Tadpole:
		return false;

	case Game::EnemyTypeID::EnemyID_Sarai:
	case Game::EnemyTypeID::EnemyID_Demon:
		return false;

	case Game::EnemyTypeID::EnemyID_BombSarai:
		return false;

	case Game::EnemyTypeID::EnemyID_ElecBug:
		return false;

	case Game::EnemyTypeID::EnemyID_Catfish:
		return false;

	case Game::EnemyTypeID::EnemyID_UjiA:
	case Game::EnemyTypeID::EnemyID_UjiB:
	case Game::EnemyTypeID::EnemyID_Tobi:
		return false;

	case Game::EnemyTypeID::EnemyID_Qurione:
		return false;

	case Game::EnemyTypeID::EnemyID_Egg:
		return false;

	case Game::EnemyTypeID::EnemyID_Armor:
		return false;

	case Game::EnemyTypeID::EnemyID_PanModoki:
		scale   = 1.3f;
		isSmall = true;
		break;

	case Game::EnemyTypeID::EnemyID_Miulin:
		scale   = 0.9f;
		isSmall = false;
		break;

	case Game::EnemyTypeID::EnemyID_Imomushi:
		return false;

	case Game::EnemyTypeID::EnemyID_TamagoMushi:
		return false;

	case Game::EnemyTypeID::EnemyID_Jigumo:
		return false;

	case Game::EnemyTypeID::EnemyID_FireOtakara:
	case Game::EnemyTypeID::EnemyID_WaterOtakara:
	case Game::EnemyTypeID::EnemyID_GasOtakara:
	case Game::EnemyTypeID::EnemyID_ElecOtakara:
		scale   = 1.3f;
		isSmall = true;
		break;

	case Game::EnemyTypeID::EnemyID_Fuefuki:
		scale   = 1.5f;
		isSmall = true;
		break;

	case Game::EnemyTypeID::EnemyID_Mar:
	case Game::EnemyTypeID::EnemyID_SnakeCrow:
	case Game::EnemyTypeID::EnemyID_Hanachirashi:
	case Game::EnemyTypeID::EnemyID_Kurage:
	case Game::EnemyTypeID::EnemyID_SnakeWhole:
	case Game::EnemyTypeID::EnemyID_OniKurage:
	case Game::EnemyTypeID::EnemyID_ShijimiChou:
		return false;

	case Game::EnemyTypeID::EnemyID_KingChappy:
		scale   = 1.25f;
		isSmall = false;
		break;

	case Game::EnemyTypeID::EnemyID_MiniHoudai:
	case Game::EnemyTypeID::EnemyID_FminiHoudai:
		scale   = 1.0f;
		isSmall = false;
		break;

	case Game::EnemyTypeID::EnemyID_Hana:
		scale   = 1.6f;
		isSmall = true;
		break;

	case Game::EnemyTypeID::EnemyID_Kabuto:
	case Game::EnemyTypeID::EnemyID_Rkabuto:
	case Game::EnemyTypeID::EnemyID_Fkabuto:
		scale   = 1.6f;
		isSmall = true;
		break;

	case Game::EnemyTypeID::EnemyID_Sokkuri:
		return false;

	case Game::EnemyTypeID::EnemyID_OoPanModoki:
		scale   = 1.0f;
		isSmall = false;
		break;

	case Game::EnemyTypeID::EnemyID_Kogane:
	case Game::EnemyTypeID::EnemyID_Wealthy:
	case Game::EnemyTypeID::EnemyID_Fart:
	case Game::EnemyTypeID::EnemyID_UmiMushi:
		return false;

	case Game::EnemyTypeID::EnemyID_BombOtakara:
		scale   = 1.3f;
		isSmall = true;
		break;

	case Game::EnemyTypeID::EnemyID_BlackMan:
		scale   = 1.0;
		isSmall = false;
		break;

	case Game::EnemyTypeID::EnemyID_Tyre:
		return false;

	case Game::EnemyTypeID::EnemyID_DangoMushi:
		scale   = 1.35f;
		isSmall = false;
		break;

	case Game::EnemyTypeID::EnemyID_BluePom:
	case Game::EnemyTypeID::EnemyID_RedPom:
	case Game::EnemyTypeID::EnemyID_YellowPom:
	case Game::EnemyTypeID::EnemyID_BlackPom:
	case Game::EnemyTypeID::EnemyID_WhitePom:
	case Game::EnemyTypeID::EnemyID_RandPom:
	case Game::EnemyTypeID::EnemyID_Hiba:
	case Game::EnemyTypeID::EnemyID_GasHiba:
	case Game::EnemyTypeID::EnemyID_ElecHiba:
	case Game::EnemyTypeID::EnemyID_Bomb:
		return false;

	default:
		return false;
	}

	scale *= argt->m_scale;
	efx::ArgScale args(pos, scale);
	if (isSmall == 0) {
		efx::TEnemyWalkSmokeM effect(PID_EnemyWalkSmokeM);
		return effect.create(&args);
	} else if (isSmall == 1) {
		efx::TEnemyWalkSmokeS effect(PID_EnemyWalkSmokeS);
		return effect.create(&args);
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	803C8610
 * Size:	0000DC
 */
bool TEnemyWalkSmokeM::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(686, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSimple1::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C86EC
 * Size:	000078
 */
bool TEnemyWalkSmokeS::create(efx::Arg* arg)
{
	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);
	f32 scale           = args->m_scale;
	bool docreate;

	if (TSimple1::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C8764
 * Size:	000068
 */
bool TEnemyDownSmoke::create(efx::Arg* arg)
{
	bool docreate;
	if (TSimple1::create(arg)) {
		f32 scale = m_scale;
		docreate  = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C87CC
 * Size:	00010C
 */
bool TEnemyDownWat::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(734, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSimple3::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
		m_emitters[1]->setScale(scale);
		m_emitters[2]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C88D8
 * Size:	0000F4
 */
bool TEnemyDive::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(750, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSimple2::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
		m_emitters[1]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C89CC
 * Size:	0003B8
 */
TEnemyBombScaleTable::TEnemyBombScaleTable(Game::EnemyTypeID::EEnemyTypeID id)
{
	switch (id) {
	case Game::EnemyTypeID::EnemyID_Chappy:
	case Game::EnemyTypeID::EnemyID_BlueChappy:
	case Game::EnemyTypeID::EnemyID_YellowChappy:
	case Game::EnemyTypeID::EnemyID_KumaChappy:
		m_type  = 1;
		m_scale = 0.92f;
		break;

	case Game::EnemyTypeID::EnemyID_Kochappy:
	case Game::EnemyTypeID::EnemyID_BlueKochappy:
	case Game::EnemyTypeID::EnemyID_YellowKochappy:
	case Game::EnemyTypeID::EnemyID_KumaKochappy:
		m_type  = 2;
		m_scale = 1.4f;
		break;

	case Game::EnemyTypeID::EnemyID_LeafChappy:
		m_type  = 2;
		m_scale = 1.65f;
		break;

	case Game::EnemyTypeID::EnemyID_FireChappy:
		m_type  = 1;
		m_scale = 0.92f;
		break;

	case Game::EnemyTypeID::EnemyID_Baby:
		m_type  = 2;
		m_scale = 1.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Tank:
	case Game::EnemyTypeID::EnemyID_Wtank:
		m_type  = 1;
		m_scale = 0.6f;
		break;

	case Game::EnemyTypeID::EnemyID_Frog:
		m_type  = 1;
		m_scale = 0.7f;
		break;
	case Game::EnemyTypeID::EnemyID_MaroFrog:
		m_type  = 1;
		m_scale = 0.6f;
		break;

	case Game::EnemyTypeID::EnemyID_Tadpole:
		m_type  = 2;
		m_scale = 1.2f;
		break;

	case Game::EnemyTypeID::EnemyID_Sarai:
	case Game::EnemyTypeID::EnemyID_Demon:
		m_type  = 1;
		m_scale = 0.65f;
		break;

	case Game::EnemyTypeID::EnemyID_BombSarai:
		m_type  = 1;
		m_scale = 0.8f;
		break;

	case Game::EnemyTypeID::EnemyID_ElecBug:
		m_type  = 1;
		m_scale = 0.65f;
		break;

	case Game::EnemyTypeID::EnemyID_Catfish:
		m_type  = 1;
		m_scale = 0.75f;
		break;

	case Game::EnemyTypeID::EnemyID_UjiA:
	case Game::EnemyTypeID::EnemyID_UjiB:
	case Game::EnemyTypeID::EnemyID_Tobi:
		m_type  = 2;
		m_scale = 1.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Qurione:
		m_type  = 2;
		m_scale = 1.1f;
		break;

	case Game::EnemyTypeID::EnemyID_Egg:
		m_type  = 2;
		m_scale = 1.5f;
		break;

	case Game::EnemyTypeID::EnemyID_Armor:
		m_type  = 1;
		m_scale = 0.85f;
		break;

	case Game::EnemyTypeID::EnemyID_PanModoki:
		m_type  = 2;
		m_scale = 1.6f;
		break;

	case Game::EnemyTypeID::EnemyID_Miulin:
		m_type  = 1;
		m_scale = 0.8f;
		break;

	case Game::EnemyTypeID::EnemyID_Imomushi:
		m_type  = 0;
		m_scale = 0.0f;
		break;

	case Game::EnemyTypeID::EnemyID_TamagoMushi:
		m_type  = 2;
		m_scale = 1.2f;
		break;

	case Game::EnemyTypeID::EnemyID_Jigumo:
		m_type  = 2;
		m_scale = 1.5f;
		break;

	case Game::EnemyTypeID::EnemyID_FireOtakara:
	case Game::EnemyTypeID::EnemyID_WaterOtakara:
	case Game::EnemyTypeID::EnemyID_GasOtakara:
	case Game::EnemyTypeID::EnemyID_ElecOtakara:
		m_type  = 2;
		m_scale = 1.3f;
		break;

	case Game::EnemyTypeID::EnemyID_Fuefuki:
		m_type  = 2;
		m_scale = 1.4f;
		break;

	case Game::EnemyTypeID::EnemyID_Mar:
		m_type  = 1;
		m_scale = 1.2f;
		break;

	case Game::EnemyTypeID::EnemyID_Hanachirashi:
		m_type  = 1;
		m_scale = 0.72f;
		break;

	case Game::EnemyTypeID::EnemyID_Kurage:
		m_type  = 1;
		m_scale = 0.7f;
		break;

	case Game::EnemyTypeID::EnemyID_OniKurage:
		m_type  = 1;
		m_scale = 0.9f;
		break;

	case Game::EnemyTypeID::EnemyID_ShijimiChou:
		m_type  = 2;
		m_scale = 0.9f;
		break;

	case Game::EnemyTypeID::EnemyID_SnakeCrow:
	case Game::EnemyTypeID::EnemyID_SnakeWhole:
		m_type  = 0;
		m_scale = 0.0f;
		break;

	case Game::EnemyTypeID::EnemyID_KingChappy:
		m_type  = 1;
		m_scale = 1.25f;
		break;

	case Game::EnemyTypeID::EnemyID_MiniHoudai:
	case Game::EnemyTypeID::EnemyID_FminiHoudai:
		m_type  = 1;
		m_scale = 0.85f;
		break;

	case Game::EnemyTypeID::EnemyID_Hana:
		m_type  = 1;
		m_scale = 0.9f;
		break;

	case Game::EnemyTypeID::EnemyID_Kabuto:
	case Game::EnemyTypeID::EnemyID_Rkabuto:
	case Game::EnemyTypeID::EnemyID_Fkabuto:
		m_type  = 1;
		m_scale = 0.8f;
		break;

	case Game::EnemyTypeID::EnemyID_Sokkuri:
		m_type  = 2;
		m_scale = 1.4f;
		break;

	case Game::EnemyTypeID::EnemyID_OoPanModoki:
		m_type  = 1;
		m_scale = 0.85f;
		break;

	case Game::EnemyTypeID::EnemyID_UmiMushi:
		m_type  = 1;
		m_scale = 1.2f;
		break;

	case Game::EnemyTypeID::EnemyID_Kogane:
	case Game::EnemyTypeID::EnemyID_Wealthy:
	case Game::EnemyTypeID::EnemyID_Fart:
		m_type  = 2;
		m_scale = 1.25f;
		break;

	case Game::EnemyTypeID::EnemyID_BombOtakara:
		m_type  = 2;
		m_scale = 1.3f;
		break;

	case Game::EnemyTypeID::EnemyID_BlackMan:
		m_type  = 1;
		m_scale = 0.75f;
		break;

	case Game::EnemyTypeID::EnemyID_Tyre:
		m_type  = 0;
		m_scale = 0.0f;
		break;

	case Game::EnemyTypeID::EnemyID_DangoMushi:
		m_type  = 1;
		m_scale = 1.45f;
		break;

	case Game::EnemyTypeID::EnemyID_Hiba:
	case Game::EnemyTypeID::EnemyID_GasHiba:
	case Game::EnemyTypeID::EnemyID_ElecHiba:
		m_type  = 2;
		m_scale = 1.0f;
		break;

	case Game::EnemyTypeID::EnemyID_BluePom:
	case Game::EnemyTypeID::EnemyID_RedPom:
	case Game::EnemyTypeID::EnemyID_YellowPom:
	case Game::EnemyTypeID::EnemyID_BlackPom:
	case Game::EnemyTypeID::EnemyID_WhitePom:
	case Game::EnemyTypeID::EnemyID_RandPom:
		m_type  = 1;
		m_scale = 1.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Bomb:
		m_type  = 1;
		m_scale = 0.65f;
		break;

	default:
		m_type  = 0;
		m_scale = 0.0f;
		break;
	}
}

/*
 * --INFO--
 * Address:	803C8D84
 * Size:	0001EC
 */
bool TEnemyBomb::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgEnemyType", arg->getName()) == 0;
	P2ASSERTLINE(987, nameCheck);

	efx::ArgEnemyType* argt = static_cast<efx::ArgEnemyType*>(arg);

	Vector3f pos = arg->m_position;
	TEnemyBombScaleTable data(argt->m_typeID);
	f32 scale = argt->m_scale * data.m_scale;

	efx::ArgScale args(pos, scale);

	if (data.m_type == 0) {
		return false;
	} else {
		if (data.m_type == 1) {
			efx::TEnemyBombM effect;
			return effect.create(&args);
		} else if (data.m_type == 2) {
			efx::TEnemyBombS effect;
			return effect.create(&args);
		} else {
			return false;
		}
	}
}

/*
 * --INFO--
 * Address:	803C8F70
 * Size:	000124
 */
bool TEnemyBombM::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(1012, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSimple4::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
		m_emitters[1]->setScale(scale);
		m_emitters[2]->setScale(scale);
		m_emitters[3]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C9094
 * Size:	000124
 */
bool TEnemyBombS::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(1029, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSimple4::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
		m_emitters[1]->setScale(scale);
		m_emitters[2]->setScale(scale);
		m_emitters[3]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C91B8
 * Size:	0001A4
 */
bool TEnemyApsmoke::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgEnemyType", arg->getName()) == 0;
	P2ASSERTLINE(1047, nameCheck);

	efx::ArgEnemyType* argt = static_cast<efx::ArgEnemyType*>(arg);

	Vector3f pos = arg->m_position;
	TEnemyBombScaleTable data(argt->m_typeID);
	f32 scale = argt->m_scale * data.m_scale;

	efx::ArgScale args(pos, scale);

	if (data.m_type == 0) {
		return false;
	} else {
		if (data.m_type == 1) {
			efx::TEnemyApsmokeM effect;
			return effect.create(&args);
		} else if (data.m_type == 2) {
			efx::TEnemyApsmokeS effect;
			return effect.create(&args);
		} else {
			return false;
		}
	}
}

/*
 * --INFO--
 * Address:	803C935C
 * Size:	0000DC
 */
bool TEnemyApsmokeM::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(1072, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSimple1::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
	} else {
		docreate = false;
	}

	return docreate;
}

/*
 * --INFO--
 * Address:	803C9438
 * Size:	0000DC
 */
bool TEnemyApsmokeS::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(1089, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSimple1::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitters[0]->setScale(scale);
	} else {
		docreate = false;
	}

	return docreate;
}

/*
 * --INFO--
 * Address:	803C9514
 * Size:	0000DC
 */
bool TEnemyHamonM::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(1108, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSync::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitter->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C95F0
 * Size:	0000DC
 */
bool TEnemyHamonMInd::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(1122, nameCheck);

	efx::ArgScale* args = static_cast<efx::ArgScale*>(arg);

	f32 scale = args->m_scale;
	bool docreate;

	if (TSync::create(arg)) {
		docreate = true;
		volatile Vector3f scaleVec; // dumb.
		scaleVec.x = scale;
		scaleVec.y = scale;
		scaleVec.z = scale;
		m_emitter->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
}

/*
 * --INFO--
 * Address:	803C96CC
 * Size:	0002FC
 */
bool TEnemyHamonChasePos::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgEnemyType", arg->getName()) == 0;
	P2ASSERTLINE(1136, nameCheck);

	efx::ArgEnemyType* argt = static_cast<efx::ArgEnemyType*>(arg);

	Vector3f pos = arg->m_position;

	bool docreate;
	f32 scale;
	switch (argt->m_typeID) {
	case Game::EnemyTypeID::EnemyID_Chappy:
	case Game::EnemyTypeID::EnemyID_BlueChappy:
	case Game::EnemyTypeID::EnemyID_YellowChappy:
	case Game::EnemyTypeID::EnemyID_KumaChappy:
		scale = 1.3f;
		break;

	case Game::EnemyTypeID::EnemyID_Kochappy:
	case Game::EnemyTypeID::EnemyID_BlueKochappy:
	case Game::EnemyTypeID::EnemyID_YellowKochappy:
	case Game::EnemyTypeID::EnemyID_KumaKochappy:
		scale = 0.45f;
		break;

	case Game::EnemyTypeID::EnemyID_LeafChappy:
		scale = 0.75f;
		break;

	case Game::EnemyTypeID::EnemyID_FireChappy:
		scale = 1.3f;
		break;

	case Game::EnemyTypeID::EnemyID_Baby:
		scale = 0.65f;
		break;

	case Game::EnemyTypeID::EnemyID_Tank:
	case Game::EnemyTypeID::EnemyID_Wtank:
		scale = 0.8f;
		break;

	case Game::EnemyTypeID::EnemyID_Frog:
		scale = 1.00f;
		break;

	case Game::EnemyTypeID::EnemyID_MaroFrog:
		scale = 1.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Tadpole:
		scale = 0.55f;
		break;

	case Game::EnemyTypeID::EnemyID_Sarai:
	case Game::EnemyTypeID::EnemyID_Demon:
		scale = 0.9f;
		break;

	case Game::EnemyTypeID::EnemyID_BombSarai:
		scale = 1.4f;
		break;

	case Game::EnemyTypeID::EnemyID_ElecBug:
		scale = 0.9f;
		break;

	case Game::EnemyTypeID::EnemyID_Catfish:
		scale = 1.0f;
		break;

	case Game::EnemyTypeID::EnemyID_UjiA:
	case Game::EnemyTypeID::EnemyID_UjiB:
	case Game::EnemyTypeID::EnemyID_Tobi:
		scale = 0.45f;
		break;

	case Game::EnemyTypeID::EnemyID_Qurione:
		docreate = false;
		return docreate;

	case Game::EnemyTypeID::EnemyID_Egg:
		scale = 0.65f;
		break;

	case Game::EnemyTypeID::EnemyID_Armor:
		scale = 1.4f;
		break;

	case Game::EnemyTypeID::EnemyID_PanModoki:
		scale = 0.8f;
		break;

	case Game::EnemyTypeID::EnemyID_Miulin:
		scale = 1.15f;
		break;

	case Game::EnemyTypeID::EnemyID_Imomushi:
		scale = 0.6f;
		break;

	case Game::EnemyTypeID::EnemyID_TamagoMushi:
		scale = 0.6f;
		break;

	case Game::EnemyTypeID::EnemyID_Jigumo:
		scale = 0.9f;
		break;

	case Game::EnemyTypeID::EnemyID_FireOtakara:
	case Game::EnemyTypeID::EnemyID_WaterOtakara:
	case Game::EnemyTypeID::EnemyID_GasOtakara:
	case Game::EnemyTypeID::EnemyID_ElecOtakara:
		scale = 1.1f;
		break;

	case Game::EnemyTypeID::EnemyID_Fuefuki:
		scale = 1.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Mar:
		scale = 2.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Hanachirashi:
		scale = 1.5f;
		break;

	case Game::EnemyTypeID::EnemyID_Kurage:
		scale = 1.35f;
		break;

	case Game::EnemyTypeID::EnemyID_OniKurage:
		scale = 2.0f;
		break;

	case Game::EnemyTypeID::EnemyID_ShijimiChou:
		scale = 0.9f;
		break;

	case Game::EnemyTypeID::EnemyID_SnakeCrow:
		scale = 1.3f;
		break;

	case Game::EnemyTypeID::EnemyID_SnakeWhole:
		scale = 1.3f;
		break;

	case Game::EnemyTypeID::EnemyID_KingChappy:
		scale = 1.85f;
		break;

	case Game::EnemyTypeID::EnemyID_MiniHoudai:
	case Game::EnemyTypeID::EnemyID_FminiHoudai:
		scale = 1.35f;
		break;

	case Game::EnemyTypeID::EnemyID_Hana:
		scale = 1.8f;
		break;

	case Game::EnemyTypeID::EnemyID_Kabuto:
	case Game::EnemyTypeID::EnemyID_Rkabuto:
	case Game::EnemyTypeID::EnemyID_Fkabuto:
		scale = 1.3f;
		break;

	case Game::EnemyTypeID::EnemyID_Sokkuri:
		scale = 1.0f;
		break;

	case Game::EnemyTypeID::EnemyID_OoPanModoki:
		scale = 1.35f;
		break;

	case Game::EnemyTypeID::EnemyID_UmiMushi:
		docreate = false;
		return docreate;

	case Game::EnemyTypeID::EnemyID_Kogane:
		scale = 0.75f;
		break;

	case Game::EnemyTypeID::EnemyID_Wealthy:
		scale = 0.7f;
		break;

	case Game::EnemyTypeID::EnemyID_Fart:
		scale = 0.7f;
		break;

	case Game::EnemyTypeID::EnemyID_BombOtakara:
		scale = 1.1f;
		break;

	case Game::EnemyTypeID::EnemyID_BlackMan:
		scale = 1.5f;
		break;

	case Game::EnemyTypeID::EnemyID_Tyre:
		scale = 1.5f;
		break;

	case Game::EnemyTypeID::EnemyID_DangoMushi:
		scale = 2.8f;
		break;

	case Game::EnemyTypeID::EnemyID_BluePom:
	case Game::EnemyTypeID::EnemyID_RedPom:
	case Game::EnemyTypeID::EnemyID_YellowPom:
	case Game::EnemyTypeID::EnemyID_BlackPom:
	case Game::EnemyTypeID::EnemyID_WhitePom:
	case Game::EnemyTypeID::EnemyID_RandPom:
	case Game::EnemyTypeID::EnemyID_Hiba:
	case Game::EnemyTypeID::EnemyID_GasHiba:
	case Game::EnemyTypeID::EnemyID_ElecHiba:
	case Game::EnemyTypeID::EnemyID_Bomb:
		docreate = false;
		return docreate;

	default:
		docreate = false;
		return docreate;
	}

	scale *= argt->m_scale;
	ArgScale arg2(pos, scale);

	if (!m_hamonM.create(&arg2)) {
		return false;
	} else if (scale > 0.75 && !m_hamonMInd.create(&arg2)) {
		return false;
	} else {
		return true;
	}
}

/*
 * --INFO--
 * Address:	803C99C8
 * Size:	000138
 */
void TEnemyHamon::update(Vector3f& pos)
{
	if (m_seaHeightPtr && m_active) {
		f32 y  = *m_seaHeightPtr - pos.y;
		f32 y2 = m_scale * getLimitDepth_();

		if ((0.0f <= y) && y < y2) {
			m_position = Vector3f(pos.x, *m_seaHeightPtr, pos.z);
			efx::ArgEnemyType arg(Vector3f::zero, m_enemyID, m_scale);
			m_hamonChasePos.create(&arg);
		} else {
			m_hamonChasePos.fade();
		}
	}
}

/*
 * --INFO--
 * Address:	803C9B00
 * Size:	0000A0
 */
bool TEnemyHamon::create(efx::Arg* arg)
{
	bool nameCheck = strcmp("ArgEnemyType", arg->getName()) == 0;
	P2ASSERTLINE(1351, nameCheck);

	efx::ArgEnemyType* argt = static_cast<efx::ArgEnemyType*>(arg);

	m_enemyID = argt->m_typeID;
	m_scale   = argt->m_scale;
	m_active  = true;
	return true;
}

/*
 * --INFO--
 * Address:	803C9BA0
 * Size:	000140
 */
f32 TEnemyHamon::getLimitDepth_()
{
	f32 depth = 10000.0f;

	switch (m_enemyID) {
	case Game::EnemyTypeID::EnemyID_Chappy:
	case Game::EnemyTypeID::EnemyID_KumaChappy:
	case Game::EnemyTypeID::EnemyID_BlueChappy:
	case Game::EnemyTypeID::EnemyID_YellowChappy:
		depth = 80.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Kochappy:
	case Game::EnemyTypeID::EnemyID_BlueKochappy:
	case Game::EnemyTypeID::EnemyID_YellowKochappy:
	case Game::EnemyTypeID::EnemyID_KumaKochappy:
		depth = 27.0f;
		break;

	case Game::EnemyTypeID::EnemyID_LeafChappy:
		depth = 20.0f;
		break;

	case Game::EnemyTypeID::EnemyID_FireChappy:
		depth = 80.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Baby:
		depth = 20.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Tank:
	case Game::EnemyTypeID::EnemyID_Wtank:
		depth = 34.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Frog:
		depth = 40.0f;
		break;

	case Game::EnemyTypeID::EnemyID_MaroFrog:
		depth = 30.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Tadpole:
		depth = 17.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Sarai:
	case Game::EnemyTypeID::EnemyID_Demon:
		depth = 40.0f;
		break;

	case Game::EnemyTypeID::EnemyID_BombSarai:
		depth = 110.0f;
		break;

	case Game::EnemyTypeID::EnemyID_ElecBug:
		depth = 27.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Catfish:
		depth = 30.0f;
		break;

	case Game::EnemyTypeID::EnemyID_UjiA:
	case Game::EnemyTypeID::EnemyID_UjiB:
	case Game::EnemyTypeID::EnemyID_Tobi:
		depth = 12.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Egg:
		depth = 26.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Armor:
		depth = 40.0f;
		break;

	case Game::EnemyTypeID::EnemyID_PanModoki:
		depth = 35.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Miulin:
		depth = 60.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Imomushi:
		depth = 15.0f;
		break;

	case Game::EnemyTypeID::EnemyID_TamagoMushi:
		depth = 20.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Jigumo:
		depth = 40.0f;
		break;

	case Game::EnemyTypeID::EnemyID_FireOtakara:
	case Game::EnemyTypeID::EnemyID_WaterOtakara:
	case Game::EnemyTypeID::EnemyID_GasOtakara:
	case Game::EnemyTypeID::EnemyID_ElecOtakara:
		depth = 45.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Fuefuki:
		depth = 40.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Mar:
		depth = 80.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Hanachirashi:
		depth = 50.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Kurage:
		depth = 60.0f;
		break;

	case Game::EnemyTypeID::EnemyID_OniKurage:
		depth = 100.0f;
		break;

	case Game::EnemyTypeID::EnemyID_ShijimiChou:
		depth = 20.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Kabuto:
	case Game::EnemyTypeID::EnemyID_Fkabuto:
	case Game::EnemyTypeID::EnemyID_Rkabuto:
		depth = 55.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Sokkuri:
		depth = 12.0f;
		break;

	case Game::EnemyTypeID::EnemyID_OoPanModoki:
		depth = 80.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Kogane:
		depth = 20.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Wealthy:
		depth = 15.0f;
		break;

	case Game::EnemyTypeID::EnemyID_Fart:
		depth = 15.0f;
		break;

	case Game::EnemyTypeID::EnemyID_BombOtakara:
		depth = 45.0f;
		break;

	case Game::EnemyTypeID::EnemyID_BluePom:
	case Game::EnemyTypeID::EnemyID_RedPom:
	case Game::EnemyTypeID::EnemyID_YellowPom:
	case Game::EnemyTypeID::EnemyID_BlackPom:
	case Game::EnemyTypeID::EnemyID_WhitePom:
	case Game::EnemyTypeID::EnemyID_RandPom:
	case Game::EnemyTypeID::EnemyID_Qurione:
	case Game::EnemyTypeID::EnemyID_SnakeCrow:
	case Game::EnemyTypeID::EnemyID_SnakeWhole:
	case Game::EnemyTypeID::EnemyID_KingChappy:
	case Game::EnemyTypeID::EnemyID_MiniHoudai:
	case Game::EnemyTypeID::EnemyID_FminiHoudai:
	case Game::EnemyTypeID::EnemyID_Hana:
	case Game::EnemyTypeID::EnemyID_UmiMushi:
	case Game::EnemyTypeID::EnemyID_Tyre:
	case Game::EnemyTypeID::EnemyID_BlackMan:
	case Game::EnemyTypeID::EnemyID_DangoMushi:
		break;
	}

	return depth;
}

} // namespace efx
