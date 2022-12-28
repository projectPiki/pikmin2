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
		m_emitter->setOffs(offs, offs);

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

	case Game::EnemyTypeID::EnemyID_Kogane:
	case Game::EnemyTypeID::EnemyID_Wealthy:
	case Game::EnemyTypeID::EnemyID_Fart:
		scale = 0.94f;
		break;
	case Game::EnemyTypeID::EnemyID_UjiA:
	case Game::EnemyTypeID::EnemyID_UjiB:
	case Game::EnemyTypeID::EnemyID_Tobi:
		scale = 0.6f;
		break;
	case Game::EnemyTypeID::EnemyID_Armor:
		scale = 1.45f;
		break;
	case Game::EnemyTypeID::EnemyID_Qurione:
		scale = 0.6f;
		break;
	case Game::EnemyTypeID::EnemyID_Frog:
		scale = 1.0f;
		break;
	case Game::EnemyTypeID::EnemyID_MaroFrog:
		scale = 1.0f;
		break;
	case Game::EnemyTypeID::EnemyID_Sarai:
	case Game::EnemyTypeID::EnemyID_Demon:
		scale = 0.9f;
		break;
	case Game::EnemyTypeID::EnemyID_Tank:
	case Game::EnemyTypeID::EnemyID_Wtank:
		scale = 1.0f;
		break;
	case Game::EnemyTypeID::EnemyID_Catfish:
		scale = 1.3f;
		break;
	case Game::EnemyTypeID::EnemyID_Tadpole:
		scale = 0.75f;
		break;
	case Game::EnemyTypeID::EnemyID_ElecBug:
		scale = 0.9f;
		break;
	case Game::EnemyTypeID::EnemyID_Mar:
	case Game::EnemyTypeID::EnemyID_Hanachirashi:
	case Game::EnemyTypeID::EnemyID_Kurage:
	case Game::EnemyTypeID::EnemyID_OniKurage:
		docreate = false;
		return docreate;

	case Game::EnemyTypeID::EnemyID_SnakeCrow:
		scale = 1.5f;
		break;
	case Game::EnemyTypeID::EnemyID_Egg:
		docreate = false;
		return docreate;
	case Game::EnemyTypeID::EnemyID_PanModoki:
		scale = 0.95f;
		break;
	case Game::EnemyTypeID::EnemyID_OoPanModoki:
		scale = 1.7f;
		break;
	case Game::EnemyTypeID::EnemyID_Fuefuki:
		scale = 0.85f;
		break;
	case Game::EnemyTypeID::EnemyID_KingChappy:
		scale = 2.0f;
		break;
	case Game::EnemyTypeID::EnemyID_Miulin:
		scale = 1.5f;
		break;
	case Game::EnemyTypeID::EnemyID_BombSarai:
		scale = 1.35f;
		break;
	case Game::EnemyTypeID::EnemyID_FireOtakara:
	case Game::EnemyTypeID::EnemyID_WaterOtakara:
	case Game::EnemyTypeID::EnemyID_GasOtakara:
	case Game::EnemyTypeID::EnemyID_ElecOtakara:
		scale = 0.7f;
		break;
	case Game::EnemyTypeID::EnemyID_Jigumo:
		scale = 1.0f;
		break;
	case Game::EnemyTypeID::EnemyID_Imomushi:
		docreate = false;
		return docreate;
	case Game::EnemyTypeID::EnemyID_TamagoMushi:
		scale = 0.7f;
		break;
	case Game::EnemyTypeID::EnemyID_SnakeWhole:
		scale = 1.5f;
		break;
	case Game::EnemyTypeID::EnemyID_UmiMushi:
		docreate = false;
		return docreate;
	case Game::EnemyTypeID::EnemyID_Kabuto:
	case Game::EnemyTypeID::EnemyID_Rkabuto:
	case Game::EnemyTypeID::EnemyID_Fkabuto:
		scale = 1.5f;
		break;
	case Game::EnemyTypeID::EnemyID_ShijimiChou:
		scale = 0.55f;
		break;
	case Game::EnemyTypeID::EnemyID_MiniHoudai:
	case Game::EnemyTypeID::EnemyID_FminiHoudai:
		scale = 1.6f;
		break;
	case Game::EnemyTypeID::EnemyID_Sokkuri:
		scale = 0.9f;
		break;
	case Game::EnemyTypeID::EnemyID_Hana:
		scale = 1.45f;
		break;
	case Game::EnemyTypeID::EnemyID_BombOtakara:
		scale = 0.7f;
		break;
	case Game::EnemyTypeID::EnemyID_DangoMushi:
		scale = 2.5f;
		break;
	case Game::EnemyTypeID::EnemyID_Tyre:
	case Game::EnemyTypeID::EnemyID_BlackMan:
		docreate = false;
		return docreate;
	default:
		docreate = false;
		return docreate;
	}

	scale *= argt->m_scale;

	if (TSimple1::create(arg)) {
		docreate = true;
		m_emitters[0]->setScale(scale);
	} else {
		docreate = false;
	}
	return docreate;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r30, r4
	mr       r29, r3
	mr       r3, r30
	lis      r4, lbl_804963C8@ha
	lwz      r12, 0(r30)
	addi     r31, r4, lbl_804963C8@l
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r31, 0x14
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_803C811C
	addi     r3, r31, 0
	addi     r5, r31, 0x24
	li       r4, 0x138
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C811C:
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0x63
	bgt      lbl_803C8280
	lis      r3, lbl_804E7CE0@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804E7CE0@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_803C8140

lbl_803C8140:
	lfs      f31, lbl_8051F940@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8148

lbl_803C8148:
	lfs      f31, lbl_8051F930@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8150

lbl_803C8150:
	lfs      f31, lbl_8051F944@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8158

lbl_803C8158:
	lfs      f31, lbl_8051F940@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8160

lbl_803C8160:
	lfs      f31, lbl_8051F908@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8168

lbl_803C8168:
	lfs      f31, lbl_8051F8E8@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8170

lbl_803C8170:
	lfs      f31, lbl_8051F8E8@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8178

lbl_803C8178:
	lfs      f31, lbl_8051F8E8@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8180

lbl_803C8180:
	lfs      f31, lbl_8051F8F8@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8188

lbl_803C8188:
	lfs      f31, lbl_8051F944@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8190

lbl_803C8190:
	lfs      f31, lbl_8051F91C@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8198

lbl_803C8198:
	lfs      f31, lbl_8051F944@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C81A0

lbl_803C81A0:
	lfs      f31, lbl_8051F920@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C81A8

lbl_803C81A8:
	lfs      f31, lbl_8051F8E0@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C81B0

lbl_803C81B0:
	lfs      f31, lbl_8051F8E0@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C81B8

lbl_803C81B8:
	li       r3, 0
	b        lbl_803C82D4
	.global  lbl_803C81C0

lbl_803C81C0:
	lfs      f31, lbl_8051F928@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C81C8

lbl_803C81C8:
	lfs      f31, lbl_8051F948@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C81D0

lbl_803C81D0:
	lfs      f31, lbl_8051F94C@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C81D8

lbl_803C81D8:
	li       r3, 0
	b        lbl_803C82D4
	.global  lbl_803C81E0

lbl_803C81E0:
	lfs      f31, lbl_8051F950@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C81E8

lbl_803C81E8:
	lfs      f31, lbl_8051F8E8@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C81F0

lbl_803C81F0:
	lfs      f31, lbl_8051F950@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C81F8

lbl_803C81F8:
	lfs      f31, lbl_8051F930@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8200

lbl_803C8200:
	li       r3, 0
	b        lbl_803C82D4
	.global  lbl_803C8208

lbl_803C8208:
	lfs      f31, lbl_8051F954@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8210

lbl_803C8210:
	lfs      f31, lbl_8051F94C@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8218

lbl_803C8218:
	lfs      f31, lbl_8051F94C@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8220

lbl_803C8220:
	lfs      f31, lbl_8051F958@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8228

lbl_803C8228:
	lfs      f31, lbl_8051F95C@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8230

lbl_803C8230:
	lfs      f31, lbl_8051F928@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8238

lbl_803C8238:
	lfs      f31, lbl_8051F94C@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8240

lbl_803C8240:
	lfs      f31, lbl_8051F944@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8248

lbl_803C8248:
	lfs      f31, lbl_8051F960@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8250

lbl_803C8250:
	li       r3, 0
	b        lbl_803C82D4
	.global  lbl_803C8258

lbl_803C8258:
	lfs      f31, lbl_8051F964@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8260

lbl_803C8260:
	lfs      f31, lbl_8051F950@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8268

lbl_803C8268:
	li       r3, 0
	b        lbl_803C82D4
	.global  lbl_803C8270

lbl_803C8270:
	lfs      f31, lbl_8051F968@sda21(r2)
	b        lbl_803C8288
	.global  lbl_803C8278

lbl_803C8278:
	li       r3, 0
	b        lbl_803C82D4
	.global  lbl_803C8280

lbl_803C8280:
	li       r3, 0
	b        lbl_803C82D4

lbl_803C8288:
	lfs      f0, 0x14(r30)
	mr       r3, r29
	mr       r4, r30
	fmuls    f31, f31, f0
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	clrlwi.  r0, r3, 0x18
	beq      lbl_803C82D0
	lwz      r4, 8(r29)
	li       r3, 1
	stfs     f31, 8(r1)
	stfs     f31, 0x98(r4)
	stfs     f31, 0x9c(r4)
	stfs     f31, 0xa0(r4)
	stfs     f31, 0xb0(r4)
	stfs     f31, 0xc(r1)
	stfs     f31, 0x10(r1)
	stfs     f31, 0xb4(r4)
	b        lbl_803C82D4

lbl_803C82D0:
	li       r3, 0

lbl_803C82D4:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C82F8
 * Size:	000318
 */
bool TEnemyWalkSmoke::create(efx::Arg* arg)
{
	efx::ArgEnemyType* argt = static_cast<efx::ArgEnemyType*>(arg);
	P2ASSERTLINE(17, (u8)(strcmp(argt->getName(), "ArgEnemyType")) == 0);
	Vector3f pos = arg->m_position;

	bool isSmall;
	f32 scale;
	switch (argt->m_typeID) {
	case Game::EnemyTypeID::EnemyID_Kochappy:
	case Game::EnemyTypeID::EnemyID_BlueKochappy:
	case Game::EnemyTypeID::EnemyID_YellowKochappy:
	case Game::EnemyTypeID::EnemyID_KumaKochappy:
		scale   = 1.0f;
		isSmall = true;
		break;
	case Game::EnemyTypeID::EnemyID_Chappy:
	case Game::EnemyTypeID::EnemyID_BlueChappy:
	case Game::EnemyTypeID::EnemyID_YellowChappy:
	case Game::EnemyTypeID::EnemyID_KumaChappy:
		scale   = 1.4f;
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
		break;
	case Game::EnemyTypeID::EnemyID_Kogane:
	case Game::EnemyTypeID::EnemyID_Wealthy:
	case Game::EnemyTypeID::EnemyID_Fart:
		break;
	case Game::EnemyTypeID::EnemyID_UjiA:
	case Game::EnemyTypeID::EnemyID_UjiB:
	case Game::EnemyTypeID::EnemyID_Tobi:
		break;
	case Game::EnemyTypeID::EnemyID_Armor:
		break;
	case Game::EnemyTypeID::EnemyID_Qurione:
		break;
	case Game::EnemyTypeID::EnemyID_Frog:
		break;
	case Game::EnemyTypeID::EnemyID_MaroFrog:
		break;
	case Game::EnemyTypeID::EnemyID_Sarai:
	case Game::EnemyTypeID::EnemyID_Demon:
		break;
	case Game::EnemyTypeID::EnemyID_Tank:
	case Game::EnemyTypeID::EnemyID_Wtank:
		scale   = 1.0f;
		isSmall = true;
		break;
	case Game::EnemyTypeID::EnemyID_Catfish:
		scale = 1.3f;
		break;
	case Game::EnemyTypeID::EnemyID_Tadpole:
		break;
	case Game::EnemyTypeID::EnemyID_ElecBug:
		break;
	case Game::EnemyTypeID::EnemyID_Mar:
	case Game::EnemyTypeID::EnemyID_Hanachirashi:
	case Game::EnemyTypeID::EnemyID_Kurage:
	case Game::EnemyTypeID::EnemyID_OniKurage:
		break;
	case Game::EnemyTypeID::EnemyID_Baby:
		break;
	case Game::EnemyTypeID::EnemyID_FireChappy:
		scale   = 1.4f;
		isSmall = false;
		break;
	case Game::EnemyTypeID::EnemyID_SnakeCrow:
		scale = 1.5f;
		break;
	case Game::EnemyTypeID::EnemyID_Egg:
		break;
	case Game::EnemyTypeID::EnemyID_PanModoki:
		scale   = 1.3f;
		isSmall = true;
		break;
	case Game::EnemyTypeID::EnemyID_OoPanModoki:
		scale   = 1.0f;
		isSmall = false;
		break;
	case Game::EnemyTypeID::EnemyID_Fuefuki:
		scale   = 1.5f;
		isSmall = true;
		break;
	case Game::EnemyTypeID::EnemyID_KingChappy:
		scale   = 1.25f;
		isSmall = false;
		break;
	case Game::EnemyTypeID::EnemyID_Miulin:
		scale   = 0.9f;
		isSmall = false;
		break;
	case Game::EnemyTypeID::EnemyID_BombSarai:
		break;
	case Game::EnemyTypeID::EnemyID_FireOtakara:
	case Game::EnemyTypeID::EnemyID_WaterOtakara:
	case Game::EnemyTypeID::EnemyID_GasOtakara:
	case Game::EnemyTypeID::EnemyID_ElecOtakara:
		scale   = 1.3f;
		isSmall = true;
		break;
	case Game::EnemyTypeID::EnemyID_Jigumo:
		break;
	case Game::EnemyTypeID::EnemyID_Imomushi:
		break;
	case Game::EnemyTypeID::EnemyID_LeafChappy:
		scale   = 0.6f;
		isSmall = false;
		break;
	case Game::EnemyTypeID::EnemyID_TamagoMushi:
		break;
	case Game::EnemyTypeID::EnemyID_Kabuto:
	case Game::EnemyTypeID::EnemyID_Rkabuto:
	case Game::EnemyTypeID::EnemyID_Fkabuto:
		scale   = 1.6f;
		isSmall = false;
		break;
	case Game::EnemyTypeID::EnemyID_MiniHoudai:
	case Game::EnemyTypeID::EnemyID_FminiHoudai:
		scale   = 1.0f;
		isSmall = false;
		break;
	case Game::EnemyTypeID::EnemyID_Sokkuri:
		break;
	case Game::EnemyTypeID::EnemyID_Hana:
		scale   = 1.6f;
		isSmall = true;
		break;
	case Game::EnemyTypeID::EnemyID_BombOtakara:
		scale   = 1.3f;
		isSmall = true;
		break;
	case Game::EnemyTypeID::EnemyID_DangoMushi:
		scale   = 1.35f;
		isSmall = false;
		break;
	case Game::EnemyTypeID::EnemyID_Tyre:
		break;
	case Game::EnemyTypeID::EnemyID_BlackMan:
		scale   = 1.0;
		isSmall = false;
	}

	efx::ArgScale args(pos, scale * argt->m_scale);
	if (!isSmall) {
		efx::TEnemyWalkSmokeS effect(PID_EnemyWalkSmokeS);
		return effect.create(&args);
	} else if (isSmall) {
		efx::TEnemyWalkSmokeM effect(PID_EnemyWalkSmokeM);
		return effect.create(&args);
	}
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r4
	lis      r4, lbl_804963C8@ha
	stw      r30, 0x58(r1)
	mr       r3, r31
	addi     r30, r4, lbl_804963C8@l
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r30, 0x14
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_803C8358
	addi     r3, r30, 0
	addi     r5, r30, 0x24
	li       r4, 0x1eb
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C8358:
	lwz      r0, 0x10(r31)
	lfs      f2, 4(r31)
	lfs      f1, 8(r31)
	cmplwi   r0, 0x63
	lfs      f0, 0xc(r31)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	bgt      lbl_803C8500
	lis      r3, lbl_804E7E70@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804E7E70@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_803C8394

lbl_803C8394:
	lfs      f3, lbl_8051F92C@sda21(r2)
	li       r7, 0
	b        lbl_803C8508
	.global  lbl_803C83A0

lbl_803C83A0:
	lfs      f3, lbl_8051F8E8@sda21(r2)
	li       r7, 1
	b        lbl_803C8508
	.global  lbl_803C83AC

lbl_803C83AC:
	lfs      f3, lbl_8051F8E0@sda21(r2)
	li       r7, 0
	b        lbl_803C8508
	.global  lbl_803C83B8

lbl_803C83B8:
	lfs      f3, lbl_8051F92C@sda21(r2)
	li       r7, 0
	b        lbl_803C8508
	.global  lbl_803C83C4

lbl_803C83C4:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C83CC

lbl_803C83CC:
	lfs      f3, lbl_8051F8E8@sda21(r2)
	li       r7, 1
	b        lbl_803C8508
	.global  lbl_803C83D8

lbl_803C83D8:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C83E0

lbl_803C83E0:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C83E8

lbl_803C83E8:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C83F0

lbl_803C83F0:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C83F8

lbl_803C83F8:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C8400

lbl_803C8400:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C8408

lbl_803C8408:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C8410

lbl_803C8410:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C8418

lbl_803C8418:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C8420

lbl_803C8420:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C8428

lbl_803C8428:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C8430

lbl_803C8430:
	lfs      f3, lbl_8051F920@sda21(r2)
	li       r7, 1
	b        lbl_803C8508
	.global  lbl_803C843C

lbl_803C843C:
	lfs      f3, lbl_8051F944@sda21(r2)
	li       r7, 0
	b        lbl_803C8508
	.global  lbl_803C8448

lbl_803C8448:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C8450

lbl_803C8450:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C8458

lbl_803C8458:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C8460

lbl_803C8460:
	lfs      f3, lbl_8051F920@sda21(r2)
	li       r7, 1
	b        lbl_803C8508
	.global  lbl_803C846C

lbl_803C846C:
	lfs      f3, lbl_8051F94C@sda21(r2)
	li       r7, 1
	b        lbl_803C8508
	.global  lbl_803C8478

lbl_803C8478:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C8480

lbl_803C8480:
	lfs      f3, lbl_8051F90C@sda21(r2)
	li       r7, 0
	b        lbl_803C8508
	.global  lbl_803C848C

lbl_803C848C:
	lfs      f3, lbl_8051F8E8@sda21(r2)
	li       r7, 0
	b        lbl_803C8508
	.global  lbl_803C8498

lbl_803C8498:
	lfs      f3, lbl_8051F95C@sda21(r2)
	li       r7, 1
	b        lbl_803C8508
	.global  lbl_803C84A4

lbl_803C84A4:
	lfs      f3, lbl_8051F95C@sda21(r2)
	li       r7, 1
	b        lbl_803C8508
	.global  lbl_803C84B0

lbl_803C84B0:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C84B8

lbl_803C84B8:
	lfs      f3, lbl_8051F8E8@sda21(r2)
	li       r7, 0
	b        lbl_803C8508
	.global  lbl_803C84C4

lbl_803C84C4:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C84CC

lbl_803C84CC:
	lfs      f3, lbl_8051F920@sda21(r2)
	li       r7, 1
	b        lbl_803C8508
	.global  lbl_803C84D8

lbl_803C84D8:
	lfs      f3, lbl_8051F8E8@sda21(r2)
	li       r7, 0
	b        lbl_803C8508
	.global  lbl_803C84E4

lbl_803C84E4:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C84EC

lbl_803C84EC:
	lfs      f3, lbl_8051F91C@sda21(r2)
	li       r7, 0
	b        lbl_803C8508
	.global  lbl_803C84F8

lbl_803C84F8:
	li       r3, 0
	b        lbl_803C85F8
	.global  lbl_803C8500

lbl_803C8500:
	li       r3, 0
	b        lbl_803C85F8

lbl_803C8508:
	lwz      r0, 0x2c(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lwz      r6, 0x30(r1)
	lis      r3, __vt__Q23efx8ArgScale@ha
	lwz      r5, 0x34(r1)
	addi     r4, r4, __vt__Q23efx3Arg@l
	lfs      f0, 0x14(r31)
	cmpwi    r7, 0
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	fmuls    f3, f3, f0
	stw      r6, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r5, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r4, 0x38(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)
	stw      r0, 0x38(r1)
	stfs     f3, 0x48(r1)
	bne      lbl_803C85A8
	lis      r3, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx16TEnemyWalkSmokeM@ha
	stw      r0, 0x20(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	li       r6, 0x5a
	li       r5, 0
	stw      r0, 0x20(r1)
	addi     r0, r3, __vt__Q23efx16TEnemyWalkSmokeM@l
	addi     r3, r1, 0x20
	addi     r4, r1, 0x38
	sth      r6, 0x24(r1)
	stw      r5, 0x28(r1)
	stw      r0, 0x20(r1)
	bl       create__Q23efx16TEnemyWalkSmokeMFPQ23efx3Arg
	b        lbl_803C85F8

lbl_803C85A8:
	cmpwi    r7, 1
	bne      lbl_803C85F4
	lis      r3, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx16TEnemyWalkSmokeS@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	li       r6, 0x59
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx16TEnemyWalkSmokeS@l
	addi     r3, r1, 0x14
	addi     r4, r1, 0x38
	sth      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x14(r1)
	bl       create__Q23efx16TEnemyWalkSmokeSFPQ23efx3Arg
	b        lbl_803C85F8

lbl_803C85F4:
	li       r3, 0

lbl_803C85F8:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
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
		f32 scale = _0C;
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
	case Game::EnemyTypeID::EnemyID_Kochappy:
	case Game::EnemyTypeID::EnemyID_BlueKochappy:
	case Game::EnemyTypeID::EnemyID_YellowKochappy:
	case Game::EnemyTypeID::EnemyID_KumaKochappy:
		m_type  = 2;
		m_scale = 1.4f;
		break;
	case Game::EnemyTypeID::EnemyID_Chappy:
	case Game::EnemyTypeID::EnemyID_BlueChappy:
	case Game::EnemyTypeID::EnemyID_YellowChappy:
	case Game::EnemyTypeID::EnemyID_KumaChappy:
		m_type  = 1;
		m_scale = 0.92f;
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
	case Game::EnemyTypeID::EnemyID_Kogane:
	case Game::EnemyTypeID::EnemyID_Wealthy:
	case Game::EnemyTypeID::EnemyID_Fart:
		m_type  = 2;
		m_scale = 1.25f;
		break;
	case Game::EnemyTypeID::EnemyID_UjiA:
	case Game::EnemyTypeID::EnemyID_UjiB:
	case Game::EnemyTypeID::EnemyID_Tobi:
		m_type  = 2;
		m_scale = 1.0f;
		break;
	case Game::EnemyTypeID::EnemyID_Armor:
		m_type  = 1;
		m_scale = 0.85f;
		break;
	case Game::EnemyTypeID::EnemyID_Qurione:
		m_type  = 2;
		m_scale = 1.1f;
		break;
	case Game::EnemyTypeID::EnemyID_Frog:
		m_type  = 1;
		m_scale = 0.7f;
		break;
	case Game::EnemyTypeID::EnemyID_MaroFrog:
		m_type  = 1;
		m_scale = 0.6f;
		break;
	case Game::EnemyTypeID::EnemyID_Hiba:
	case Game::EnemyTypeID::EnemyID_GasHiba:
	case Game::EnemyTypeID::EnemyID_ElecHiba:
		m_type  = 2;
		m_scale = 1.0f;
		break;
	case Game::EnemyTypeID::EnemyID_Sarai:
	case Game::EnemyTypeID::EnemyID_Demon:
		m_type  = 1;
		m_scale = 0.65f;
		break;
	case Game::EnemyTypeID::EnemyID_Tank:
	case Game::EnemyTypeID::EnemyID_Wtank:
		m_type  = 1;
		m_scale = 0.6f;
		break;
	case Game::EnemyTypeID::EnemyID_Catfish:
		m_type  = 1;
		m_scale = 0.75f;
		break;
	case Game::EnemyTypeID::EnemyID_Tadpole:
		m_type  = 2;
		m_scale = 1.2f;
		break;
	case Game::EnemyTypeID::EnemyID_ElecBug:
		m_type  = 1;
		m_scale = 0.65f;
		break;
	case Game::EnemyTypeID::EnemyID_Mar:
		m_type  = 1;
		m_scale = 1.2f;
		break;
	case Game::EnemyTypeID::EnemyID_Baby:
		m_type  = 2;
		m_scale = 1.0f;
		break;
	case Game::EnemyTypeID::EnemyID_FireChappy:
		m_type  = 1;
		m_scale = 0.92f;
		break;
	case Game::EnemyTypeID::EnemyID_SnakeCrow:
	case Game::EnemyTypeID::EnemyID_SnakeWhole:
		m_type  = 0;
		m_scale = 0.0f;
		break;
	case Game::EnemyTypeID::EnemyID_Bomb:
		m_type  = 1;
		m_scale = 0.65f;
		break;
	case Game::EnemyTypeID::EnemyID_Egg:
		m_type  = 2;
		m_scale = 1.5f;
		break;
	case Game::EnemyTypeID::EnemyID_PanModoki:
		m_type  = 2;
		m_scale = 1.6f;
		break;
	case Game::EnemyTypeID::EnemyID_OoPanModoki:
		m_type  = 1;
		m_scale = 0.85f;
		break;
	case Game::EnemyTypeID::EnemyID_Fuefuki:
		m_type  = 2;
		m_scale = 1.4f;
		break;
	case Game::EnemyTypeID::EnemyID_KingChappy:
		m_type  = 1;
		m_scale = 1.25f;
		break;
	case Game::EnemyTypeID::EnemyID_Miulin:
		m_type  = 1;
		m_scale = 0.8f;
		break;
	case Game::EnemyTypeID::EnemyID_Hanachirashi:
		m_type  = 1;
		m_scale = 0.72f;
		break;
	case Game::EnemyTypeID::EnemyID_Kurage:
		m_type  = 1;
		m_scale = 0.7f;
		break;
	case Game::EnemyTypeID::EnemyID_BombSarai:
		m_type  = 1;
		m_scale = 0.8f;
		break;
	case Game::EnemyTypeID::EnemyID_FireOtakara:
	case Game::EnemyTypeID::EnemyID_WaterOtakara:
	case Game::EnemyTypeID::EnemyID_GasOtakara:
	case Game::EnemyTypeID::EnemyID_ElecOtakara:
		m_type  = 2;
		m_scale = 1.3f;
		break;
	case Game::EnemyTypeID::EnemyID_Jigumo:
		m_type  = 2;
		m_scale = 1.5f;
		break;
	case Game::EnemyTypeID::EnemyID_Imomushi:
		m_type  = 0;
		m_scale = 0.0f;
		break;
	case Game::EnemyTypeID::EnemyID_LeafChappy:
		m_type  = 2;
		m_scale = 1.65f;
		break;
	case Game::EnemyTypeID::EnemyID_TamagoMushi:
		m_type  = 2;
		m_scale = 1.2f;
		break;
	case Game::EnemyTypeID::EnemyID_UmiMushi:
		m_type  = 1;
		m_scale = 1.2f;
		break;
	case Game::EnemyTypeID::EnemyID_OniKurage:
		m_type  = 1;
		m_scale = 0.9f;
		break;
	case Game::EnemyTypeID::EnemyID_Kabuto:
	case Game::EnemyTypeID::EnemyID_Rkabuto:
	case Game::EnemyTypeID::EnemyID_Fkabuto:
		m_type  = 1;
		m_scale = 0.8f;
		break;
	case Game::EnemyTypeID::EnemyID_ShijimiChou:
		m_type  = 2;
		m_scale = 0.9f;
		break;
	case Game::EnemyTypeID::EnemyID_MiniHoudai:
	case Game::EnemyTypeID::EnemyID_FminiHoudai:
		m_type  = 1;
		m_scale = 0.85f;
		break;
	case Game::EnemyTypeID::EnemyID_Sokkuri:
		m_type  = 2;
		m_scale = 1.4f;
		break;
	case Game::EnemyTypeID::EnemyID_Hana:
		m_type  = 1;
		m_scale = 0.9f;
		break;
	case Game::EnemyTypeID::EnemyID_BombOtakara:
		m_type  = 2;
		m_scale = 1.3f;
		break;
	case Game::EnemyTypeID::EnemyID_DangoMushi:
		m_type  = 1;
		m_scale = 1.45f;
		break;
	case Game::EnemyTypeID::EnemyID_BlackMan:
		m_type  = 1;
		m_scale = 0.75f;
		break;
	default:
		m_type  = 0;
		m_scale = 0.0f;
		break;
	}
	/*
	cmplwi   r4, 0x63
	bgt      lbl_803C8D70
	lis      r5, lbl_804E8000@ha
	slwi     r0, r4, 2
	addi     r4, r5, lbl_804E8000@l
	lwzx     r0, r4, r0
	mtctr    r0
	bctr
	.global  lbl_803C89EC

lbl_803C89EC:
	li       r0, 1
	lfs      f0, lbl_8051F96C@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8A00

lbl_803C8A00:
	li       r0, 2
	lfs      f0, lbl_8051F92C@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8A14

lbl_803C8A14:
	li       r0, 2
	lfs      f0, lbl_8051F970@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8A28

lbl_803C8A28:
	li       r0, 1
	lfs      f0, lbl_8051F96C@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8A3C

lbl_803C8A3C:
	li       r0, 2
	lfs      f0, lbl_8051F8E8@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8A50

lbl_803C8A50:
	li       r0, 1
	lfs      f0, lbl_8051F8E0@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8A64

lbl_803C8A64:
	li       r0, 1
	lfs      f0, lbl_8051F950@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8A78

lbl_803C8A78:
	li       r0, 1
	lfs      f0, lbl_8051F8E0@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8A8C

lbl_803C8A8C:
	li       r0, 2
	lfs      f0, lbl_8051F974@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8AA0

lbl_803C8AA0:
	li       r0, 1
	lfs      f0, lbl_8051F8D4@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8AB4

lbl_803C8AB4:
	li       r0, 1
	lfs      f0, lbl_8051F908@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8AC8

lbl_803C8AC8:
	li       r0, 1
	lfs      f0, lbl_8051F8D4@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8ADC

lbl_803C8ADC:
	li       r0, 1
	lfs      f0, lbl_8051F8F8@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8AF0

lbl_803C8AF0:
	li       r0, 2
	lfs      f0, lbl_8051F8E8@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8B04

lbl_803C8B04:
	li       r0, 2
	lfs      f0, lbl_8051F8FC@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8B18

lbl_803C8B18:
	li       r0, 2
	lfs      f0, lbl_8051F94C@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8B2C

lbl_803C8B2C:
	li       r0, 1
	lfs      f0, lbl_8051F930@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8B40

lbl_803C8B40:
	li       r0, 2
	lfs      f0, lbl_8051F95C@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8B54

lbl_803C8B54:
	li       r0, 1
	lfs      f0, lbl_8051F908@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8B68

lbl_803C8B68:
	li       r0, 0
	lfs      f0, lbl_8051F978@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8B7C

lbl_803C8B7C:
	li       r0, 2
	lfs      f0, lbl_8051F974@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8B90

lbl_803C8B90:
	li       r0, 2
	lfs      f0, lbl_8051F94C@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8BA4

lbl_803C8BA4:
	li       r0, 2
	lfs      f0, lbl_8051F920@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8BB8

lbl_803C8BB8:
	li       r0, 2
	lfs      f0, lbl_8051F92C@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8BCC

lbl_803C8BCC:
	li       r0, 1
	lfs      f0, lbl_8051F974@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8BE0

lbl_803C8BE0:
	li       r0, 1
	lfs      f0, lbl_8051F97C@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8BF4

lbl_803C8BF4:
	li       r0, 1
	lfs      f0, lbl_8051F950@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8C08

lbl_803C8C08:
	li       r0, 1
	lfs      f0, lbl_8051F944@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8C1C

lbl_803C8C1C:
	li       r0, 2
	lfs      f0, lbl_8051F944@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8C30

lbl_803C8C30:
	li       r0, 0
	lfs      f0, lbl_8051F978@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8C44

lbl_803C8C44:
	li       r0, 1
	lfs      f0, lbl_8051F90C@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8C58

lbl_803C8C58:
	li       r0, 1
	lfs      f0, lbl_8051F930@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8C6C

lbl_803C8C6C:
	li       r0, 1
	lfs      f0, lbl_8051F944@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8C80

lbl_803C8C80:
	li       r0, 1
	lfs      f0, lbl_8051F908@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8C94

lbl_803C8C94:
	li       r0, 2
	lfs      f0, lbl_8051F92C@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8CA8

lbl_803C8CA8:
	li       r0, 1
	lfs      f0, lbl_8051F930@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8CBC

lbl_803C8CBC:
	li       r0, 1
	lfs      f0, lbl_8051F974@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8CD0

lbl_803C8CD0:
	li       r0, 2
	lfs      f0, lbl_8051F90C@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8CE4

lbl_803C8CE4:
	li       r0, 2
	lfs      f0, lbl_8051F920@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8CF8

lbl_803C8CF8:
	li       r0, 1
	lfs      f0, lbl_8051F8F8@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8D0C

lbl_803C8D0C:
	li       r0, 0
	lfs      f0, lbl_8051F978@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8D20

lbl_803C8D20:
	li       r0, 1
	lfs      f0, lbl_8051F928@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8D34

lbl_803C8D34:
	li       r0, 2
	lfs      f0, lbl_8051F8E8@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8D48

lbl_803C8D48:
	li       r0, 1
	lfs      f0, lbl_8051F8E8@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8D5C

lbl_803C8D5C:
	li       r0, 1
	lfs      f0, lbl_8051F8D4@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	.global  lbl_803C8D70

lbl_803C8D70:
	li       r0, 0
	lfs      f0, lbl_8051F978@sda21(r2)
	stw      r0, 0(r3)
	stfs     f0, 4(r3)
	blr
	*/
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
	case Game::EnemyTypeID::EnemyID_Kochappy:
	case Game::EnemyTypeID::EnemyID_BlueKochappy:
	case Game::EnemyTypeID::EnemyID_YellowKochappy:
	case Game::EnemyTypeID::EnemyID_KumaKochappy:
		scale = 0.45f;
		break;
	case Game::EnemyTypeID::EnemyID_Chappy:
	case Game::EnemyTypeID::EnemyID_BlueChappy:
	case Game::EnemyTypeID::EnemyID_YellowChappy:
	case Game::EnemyTypeID::EnemyID_KumaChappy:
		scale = 1.3f;
		break;
	case Game::EnemyTypeID::EnemyID_Kogane:
		scale = 0.75f;
		break;
	case Game::EnemyTypeID::EnemyID_Wealthy:
	case Game::EnemyTypeID::EnemyID_Fart:
		scale = 0.7f;
		break;
	case Game::EnemyTypeID::EnemyID_UjiA:
	case Game::EnemyTypeID::EnemyID_UjiB:
	case Game::EnemyTypeID::EnemyID_Tobi:
		scale = 0.45f;
		break;
	case Game::EnemyTypeID::EnemyID_Armor:
		scale = 1.4f;
		break;
	case Game::EnemyTypeID::EnemyID_Qurione:
		docreate = false;
		return docreate;
	case Game::EnemyTypeID::EnemyID_Frog:
		scale = 1.00f;
		break;
	case Game::EnemyTypeID::EnemyID_MaroFrog:
		scale = 1.0f;
		break;
	case Game::EnemyTypeID::EnemyID_Sarai:
	case Game::EnemyTypeID::EnemyID_Demon:
		scale = 0.9f;
		break;
	case Game::EnemyTypeID::EnemyID_Tank:
	case Game::EnemyTypeID::EnemyID_Wtank:
		scale = 0.8f;
		break;
	case Game::EnemyTypeID::EnemyID_Catfish:
		scale = 1.0f;
		break;
	case Game::EnemyTypeID::EnemyID_Tadpole:
		scale = 0.55f;
		break;
	case Game::EnemyTypeID::EnemyID_ElecBug:
		scale = 0.9f;
		break;
	case Game::EnemyTypeID::EnemyID_Mar:
		scale = 2.0f;
		break;
	case Game::EnemyTypeID::EnemyID_Baby:
		scale = 0.65f;
		break;
	case Game::EnemyTypeID::EnemyID_FireChappy:
		scale = 1.3f;
		break;
	case Game::EnemyTypeID::EnemyID_SnakeCrow:
		scale = 1.3f;
		break;
	case Game::EnemyTypeID::EnemyID_Egg:
		scale = 0.65f;
		break;
	case Game::EnemyTypeID::EnemyID_PanModoki:
		scale = 0.8f;
		break;
	case Game::EnemyTypeID::EnemyID_OoPanModoki:
		scale = 1.35f;
		break;
	case Game::EnemyTypeID::EnemyID_Fuefuki:
		scale = 1.0f;
		break;
	case Game::EnemyTypeID::EnemyID_KingChappy:
		scale = 1.85f;
		break;
	case Game::EnemyTypeID::EnemyID_Miulin:
		scale = 1.15f;
		break;
	case Game::EnemyTypeID::EnemyID_Hanachirashi:
		scale = 1.5f;
		break;
	case Game::EnemyTypeID::EnemyID_Kurage:
		scale = 1.35f;
		break;
	case Game::EnemyTypeID::EnemyID_BombSarai:
		scale = 1.4f;
		break;
	case Game::EnemyTypeID::EnemyID_FireOtakara:
	case Game::EnemyTypeID::EnemyID_WaterOtakara:
	case Game::EnemyTypeID::EnemyID_GasOtakara:
	case Game::EnemyTypeID::EnemyID_ElecOtakara:
		scale = 1.1f;
		break;
	case Game::EnemyTypeID::EnemyID_Jigumo:
		scale = 0.9f;
		break;
	case Game::EnemyTypeID::EnemyID_Imomushi:
		scale = 0.6f;
		break;
	case Game::EnemyTypeID::EnemyID_LeafChappy:
		scale = 0.75f;
		break;
	case Game::EnemyTypeID::EnemyID_TamagoMushi:
		scale = 0.6f;
		break;
	case Game::EnemyTypeID::EnemyID_SnakeWhole:
		scale = 1.3f;
		break;
	case Game::EnemyTypeID::EnemyID_UmiMushi:
		docreate = false;
		return docreate;
	case Game::EnemyTypeID::EnemyID_OniKurage:
		scale = 2.0f;
		break;
	case Game::EnemyTypeID::EnemyID_Kabuto:
	case Game::EnemyTypeID::EnemyID_Rkabuto:
	case Game::EnemyTypeID::EnemyID_Fkabuto:
		scale = 1.3f;
		break;
	case Game::EnemyTypeID::EnemyID_ShijimiChou:
		scale = 0.9f;
		break;
	case Game::EnemyTypeID::EnemyID_MiniHoudai:
	case Game::EnemyTypeID::EnemyID_FminiHoudai:
		scale = 1.35f;
		break;
	case Game::EnemyTypeID::EnemyID_Sokkuri:
		scale = 1.0f;
		break;
	case Game::EnemyTypeID::EnemyID_Hana:
		scale = 1.8f;
		break;
	case Game::EnemyTypeID::EnemyID_BombOtakara:
		scale = 1.1f;
		break;
	case Game::EnemyTypeID::EnemyID_DangoMushi:
		scale = 2.8f;
		break;
	case Game::EnemyTypeID::EnemyID_Tyre:
		scale = 1.5f;
		break;
	case Game::EnemyTypeID::EnemyID_BlackMan:
		scale = 1.5f;
		break;
	default:
		docreate = false;
		return docreate;
	}

	scale *= argt->m_scale;
	ArgScale arg2(pos, scale);
	if (!m_hamonM.create(&arg2)) {
		return false;
	} else if (scale < 0.75f || m_hamonMInd.create(&arg2)) {
		return true;
	} else {
		return false;
	}
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	lis      r4, lbl_804963C8@ha
	lwz      r12, 0(r31)
	addi     r29, r4, lbl_804963C8@l
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r29, 0x14
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_803C973C
	addi     r3, r29, 0
	addi     r5, r29, 0x24
	li       r4, 0x470
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C973C:
	lwz      r0, 0x10(r31)
	lfs      f2, 4(r31)
	lfs      f1, 8(r31)
	cmplwi   r0, 0x63
	lfs      f0, 0xc(r31)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bgt      lbl_803C98E8
	lis      r3, lbl_804E8190@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804E8190@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_803C9778

lbl_803C9778:
	lfs      f31, lbl_8051F920@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9780

lbl_803C9780:
	lfs      f31, lbl_8051F900@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9788

lbl_803C9788:
	lfs      f31, lbl_8051F8F8@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9790

lbl_803C9790:
	lfs      f31, lbl_8051F920@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9798

lbl_803C9798:
	lfs      f31, lbl_8051F8D4@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C97A0

lbl_803C97A0:
	lfs      f31, lbl_8051F908@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C97A8

lbl_803C97A8:
	lfs      f31, lbl_8051F8E8@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C97B0

lbl_803C97B0:
	lfs      f31, lbl_8051F8E8@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C97B8

lbl_803C97B8:
	lfs      f31, lbl_8051F954@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C97C0

lbl_803C97C0:
	lfs      f31, lbl_8051F944@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C97C8

lbl_803C97C8:
	lfs      f31, lbl_8051F92C@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C97D0

lbl_803C97D0:
	lfs      f31, lbl_8051F944@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C97D8

lbl_803C97D8:
	lfs      f31, lbl_8051F8E8@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C97E0

lbl_803C97E0:
	lfs      f31, lbl_8051F900@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C97E8

lbl_803C97E8:
	li       r3, 0
	b        lbl_803C99A4
	.global  lbl_803C97F0

lbl_803C97F0:
	lfs      f31, lbl_8051F8D4@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C97F8

lbl_803C97F8:
	lfs      f31, lbl_8051F92C@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9800

lbl_803C9800:
	lfs      f31, lbl_8051F908@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9808

lbl_803C9808:
	lfs      f31, lbl_8051F904@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9810

lbl_803C9810:
	lfs      f31, lbl_8051F8E0@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9818

lbl_803C9818:
	lfs      f31, lbl_8051F8E0@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9820

lbl_803C9820:
	lfs      f31, lbl_8051F944@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9828

lbl_803C9828:
	lfs      f31, lbl_8051F8FC@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9830

lbl_803C9830:
	lfs      f31, lbl_8051F8E8@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9838

lbl_803C9838:
	lfs      f31, lbl_8051F958@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9840

lbl_803C9840:
	lfs      f31, lbl_8051F94C@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9848

lbl_803C9848:
	lfs      f31, lbl_8051F91C@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9850

lbl_803C9850:
	lfs      f31, lbl_8051F958@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9858

lbl_803C9858:
	lfs      f31, lbl_8051F944@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9860

lbl_803C9860:
	lfs      f31, lbl_8051F920@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9868

lbl_803C9868:
	lfs      f31, lbl_8051F920@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9870

lbl_803C9870:
	lfs      f31, lbl_8051F980@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9878

lbl_803C9878:
	lfs      f31, lbl_8051F91C@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9880

lbl_803C9880:
	lfs      f31, lbl_8051F940@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9888

lbl_803C9888:
	lfs      f31, lbl_8051F920@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9890

lbl_803C9890:
	lfs      f31, lbl_8051F8E8@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C9898

lbl_803C9898:
	lfs      f31, lbl_8051F91C@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C98A0

lbl_803C98A0:
	li       r3, 0
	b        lbl_803C99A4
	.global  lbl_803C98A8

lbl_803C98A8:
	lfs      f31, lbl_8051F8F8@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C98B0

lbl_803C98B0:
	lfs      f31, lbl_8051F950@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C98B8

lbl_803C98B8:
	lfs      f31, lbl_8051F950@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C98C0

lbl_803C98C0:
	lfs      f31, lbl_8051F8FC@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C98C8

lbl_803C98C8:
	lfs      f31, lbl_8051F94C@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C98D0

lbl_803C98D0:
	lfs      f31, lbl_8051F94C@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C98D8

lbl_803C98D8:
	lfs      f31, lbl_8051F984@sda21(r2)
	b        lbl_803C98F0
	.global  lbl_803C98E0

lbl_803C98E0:
	li       r3, 0
	b        lbl_803C99A4
	.global  lbl_803C98E8

lbl_803C98E8:
	li       r3, 0
	b        lbl_803C99A4

lbl_803C98F0:
	lwz      r8, 0x14(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lwz      r7, 0x18(r1)
	lis      r3, __vt__Q23efx8ArgScale@ha
	lwz      r6, 0x1c(r1)
	addi     r5, r4, __vt__Q23efx3Arg@l
	lfs      f0, 0x14(r31)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	stw      r8, 8(r1)
	addi     r3, r30, 4
	fmuls    f31, f31, f0
	addi     r4, r1, 0x20
	stw      r7, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r6, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r5, 0x20(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	stw      r0, 0x20(r1)
	stfs     f31, 0x30(r1)
	lwz      r12, 4(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803C996C
	li       r3, 0
	b        lbl_803C99A4

lbl_803C996C:
	lfd      f0, lbl_8051F988@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_803C99A0
	addi     r3, r30, 0x18
	addi     r4, r1, 0x20
	lwz      r12, 0x18(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803C99A0
	li       r3, 0
	b        lbl_803C99A4

lbl_803C99A0:
	li       r3, 1

lbl_803C99A4:
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
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
	switch (m_enemyID) {
	case Game::EnemyTypeID::EnemyID_KumaKochappy:
		return 27.0f;
	case Game::EnemyTypeID::EnemyID_Chappy:
	case Game::EnemyTypeID::EnemyID_KumaChappy:
	case Game::EnemyTypeID::EnemyID_BlueChappy:
	case Game::EnemyTypeID::EnemyID_YellowChappy:
		return 80.0f;
	case Game::EnemyTypeID::EnemyID_Kogane:
		return 20.0f;
	case Game::EnemyTypeID::EnemyID_Wealthy:
		return 15.0f;
	case Game::EnemyTypeID::EnemyID_Fart:
		return 15.0f;
	case Game::EnemyTypeID::EnemyID_UjiA:
	case Game::EnemyTypeID::EnemyID_UjiB:
	case Game::EnemyTypeID::EnemyID_Tobi:
		return 12.0f;
	case Game::EnemyTypeID::EnemyID_Armor:
		return 40.0f;
	case Game::EnemyTypeID::EnemyID_Frog:
		return 40.0f;
	case Game::EnemyTypeID::EnemyID_MaroFrog:
		return 30.0f;
	case Game::EnemyTypeID::EnemyID_Sarai:
	case Game::EnemyTypeID::EnemyID_Demon:
		return 40.0f;
	case Game::EnemyTypeID::EnemyID_Tank:
	case Game::EnemyTypeID::EnemyID_Wtank:
		return 34.0f;
	case Game::EnemyTypeID::EnemyID_Catfish:
		return 30.0f;
	case Game::EnemyTypeID::EnemyID_Tadpole:
		return 17.0f;
	case Game::EnemyTypeID::EnemyID_ElecBug:
		return 27.0f;
	case Game::EnemyTypeID::EnemyID_Mar:
		return 80.0f;
	case Game::EnemyTypeID::EnemyID_Baby:
		return 20.0f;
	case Game::EnemyTypeID::EnemyID_FireChappy:
		return 80.0f;
	case Game::EnemyTypeID::EnemyID_Egg:
		return 26.0f;
	case Game::EnemyTypeID::EnemyID_PanModoki:
		return 35.0f;
	case Game::EnemyTypeID::EnemyID_OoPanModoki:
		return 80.0f;
	case Game::EnemyTypeID::EnemyID_Fuefuki:
		return 40.0f;
	case Game::EnemyTypeID::EnemyID_Miulin:
		return 60.0f;
	case Game::EnemyTypeID::EnemyID_Hanachirashi:
		return 50.0f;
	case Game::EnemyTypeID::EnemyID_Kurage:
		return 60.0f;
	case Game::EnemyTypeID::EnemyID_BombSarai:
		return 110.0f;
	case Game::EnemyTypeID::EnemyID_FireOtakara:
	case Game::EnemyTypeID::EnemyID_WaterOtakara:
	case Game::EnemyTypeID::EnemyID_GasOtakara:
	case Game::EnemyTypeID::EnemyID_ElecOtakara:
		return 45.0f;
	case Game::EnemyTypeID::EnemyID_Jigumo:
		return 40.0f;
	case Game::EnemyTypeID::EnemyID_Imomushi:
		return 15.0f;
	case Game::EnemyTypeID::EnemyID_LeafChappy:
		return 20.0f;
	case Game::EnemyTypeID::EnemyID_TamagoMushi:
		return 20.0f;
	case Game::EnemyTypeID::EnemyID_OniKurage:
		return 100.0f;
	case Game::EnemyTypeID::EnemyID_Kabuto:
	case Game::EnemyTypeID::EnemyID_Fkabuto:
	case Game::EnemyTypeID::EnemyID_Rkabuto:
		return 55.0f;
	case Game::EnemyTypeID::EnemyID_ShijimiChou:
		return 20.0f;
	case Game::EnemyTypeID::EnemyID_Sokkuri:
		return 12.0f;
	case Game::EnemyTypeID::EnemyID_BombOtakara:
		return 45.0f;
	default:
		return 10000.0f;
	}
	/*
	lwz      r0, 0x44(r3)
	lfs      f1, lbl_8051F990@sda21(r2)
	cmplwi   r0, 0x63
	bgtlr
	lis      r3, lbl_804E8320@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804E8320@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_803C9BC8

lbl_803C9BC8:
	lfs      f1, lbl_8051F994@sda21(r2)
	blr
	.global  lbl_803C9BD0

lbl_803C9BD0:
	lfs      f1, lbl_8051F998@sda21(r2)
	blr
	.global  lbl_803C9BD8

lbl_803C9BD8:
	lfs      f1, lbl_8051F99C@sda21(r2)
	blr
	.global  lbl_803C9BE0

lbl_803C9BE0:
	lfs      f1, lbl_8051F994@sda21(r2)
	blr
	.global  lbl_803C9BE8

lbl_803C9BE8:
	lfs      f1, lbl_8051F99C@sda21(r2)
	blr
	.global  lbl_803C9BF0

lbl_803C9BF0:
	lfs      f1, lbl_8051F9A0@sda21(r2)
	blr
	.global  lbl_803C9BF8

lbl_803C9BF8:
	lfs      f1, lbl_8051F9A4@sda21(r2)
	blr
	.global  lbl_803C9C00

lbl_803C9C00:
	lfs      f1, lbl_8051F9A8@sda21(r2)
	blr
	.global  lbl_803C9C08

lbl_803C9C08:
	lfs      f1, lbl_8051F9AC@sda21(r2)
	blr
	.global  lbl_803C9C10

lbl_803C9C10:
	lfs      f1, lbl_8051F9A4@sda21(r2)
	blr
	.global  lbl_803C9C18

lbl_803C9C18:
	lfs      f1, lbl_8051F9B0@sda21(r2)
	blr
	.global  lbl_803C9C20

lbl_803C9C20:
	lfs      f1, lbl_8051F998@sda21(r2)
	blr
	.global  lbl_803C9C28

lbl_803C9C28:
	lfs      f1, lbl_8051F9A8@sda21(r2)
	blr
	.global  lbl_803C9C30

lbl_803C9C30:
	lfs      f1, lbl_8051F9B4@sda21(r2)
	blr
	.global  lbl_803C9C38

lbl_803C9C38:
	lfs      f1, lbl_8051F9B8@sda21(r2)
	blr
	.global  lbl_803C9C40

lbl_803C9C40:
	lfs      f1, lbl_8051F9A4@sda21(r2)
	blr
	.global  lbl_803C9C48

lbl_803C9C48:
	lfs      f1, lbl_8051F9BC@sda21(r2)
	blr
	.global  lbl_803C9C50

lbl_803C9C50:
	lfs      f1, lbl_8051F9C0@sda21(r2)
	blr
	.global  lbl_803C9C58

lbl_803C9C58:
	lfs      f1, lbl_8051F9C4@sda21(r2)
	blr
	.global  lbl_803C9C60

lbl_803C9C60:
	lfs      f1, lbl_8051F99C@sda21(r2)
	blr
	.global  lbl_803C9C68

lbl_803C9C68:
	lfs      f1, lbl_8051F9A4@sda21(r2)
	blr
	.global  lbl_803C9C70

lbl_803C9C70:
	lfs      f1, lbl_8051F9C8@sda21(r2)
	blr
	.global  lbl_803C9C78

lbl_803C9C78:
	lfs      f1, lbl_8051F9A4@sda21(r2)
	blr
	.global  lbl_803C9C80

lbl_803C9C80:
	lfs      f1, lbl_8051F994@sda21(r2)
	blr
	.global  lbl_803C9C88

lbl_803C9C88:
	lfs      f1, lbl_8051F9CC@sda21(r2)
	blr
	.global  lbl_803C9C90

lbl_803C9C90:
	lfs      f1, lbl_8051F9C0@sda21(r2)
	blr
	.global  lbl_803C9C98

lbl_803C9C98:
	lfs      f1, lbl_8051F9D0@sda21(r2)
	blr
	.global  lbl_803C9CA0

lbl_803C9CA0:
	lfs      f1, lbl_8051F99C@sda21(r2)
	blr
	.global  lbl_803C9CA8

lbl_803C9CA8:
	lfs      f1, lbl_8051F9D4@sda21(r2)
	blr
	.global  lbl_803C9CB0

lbl_803C9CB0:
	lfs      f1, lbl_8051F9B4@sda21(r2)
	blr
	.global  lbl_803C9CB8

lbl_803C9CB8:
	lfs      f1, lbl_8051F994@sda21(r2)
	blr
	.global  lbl_803C9CC0

lbl_803C9CC0:
	lfs      f1, lbl_8051F99C@sda21(r2)
	blr
	.global  lbl_803C9CC8

lbl_803C9CC8:
	lfs      f1, lbl_8051F9C4@sda21(r2)
	blr
	.global  lbl_803C9CD0

lbl_803C9CD0:
	lfs      f1, lbl_8051F9C4@sda21(r2)
	blr
	.global  lbl_803C9CD8

lbl_803C9CD8:
	lfs      f1, lbl_8051F9C8@sda21(r2)
	.global  lbl_803C9CDC

lbl_803C9CDC:
	blr
	*/
}

/*
 * --INFO--
 * Address:	803C9CE0
 * Size:	000004
 */
void TEnemyApsmoke::forceKill() { }

/*
 * --INFO--
 * Address:	803C9CE4
 * Size:	000004
 */
void TEnemyApsmoke::fade() { }

/*
 * --INFO--
 * Address:	803C9CE8
 * Size:	000004
 */
void TEnemyBomb::forceKill() { }

/*
 * --INFO--
 * Address:	803C9CEC
 * Size:	000004
 */
void TEnemyBomb::fade() { }

/*
 * --INFO--
 * Address:	803C9CF0
 * Size:	000004
 */
void TEnemyWalkSmoke::forceKill() { }

/*
 * --INFO--
 * Address:	803C9CF4
 * Size:	000004
 */
void TEnemyWalkSmoke::fade() { }

/*
 * --INFO--
 * Address:	803C9CF8
 * Size:	000008
 */
//@4 @efx::TEnemyPiyo::~TEnemyPiyo()
//{
/*
addi     r3, r3, -4
b        __dt__Q23efx10TEnemyPiyoFv
*/
//}

/*
 * --INFO--
 * Address:	803C9D00
 * Size:	000008
 */
//@4 @efx::TEnemyHamonM::~TEnemyHamonM()
//{
/*
addi     r3, r3, -4
b        __dt__Q23efx12TEnemyHamonMFv
*/
//}

/*
 * --INFO--
 * Address:	803C9D08
 * Size:	000008
 */
//@4 @efx::TEnemyHamonMInd::~TEnemyHamonMInd()
//{
/*
addi     r3, r3, -4
b        __dt__Q23efx15TEnemyHamonMIndFv
*/
//}
} // namespace efx
