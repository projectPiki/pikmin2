#include "Game/Entities/FireChappy.h"
#include "efx/THanacho.h"

namespace Game {
namespace FireChappy {

/*
 * --INFO--
 * Address:	8028F62C
 * Size:	0000AC
 */
Obj::Obj()
{
	createEffect();
	createMaterialAnimation();
}

/*
 * --INFO--
 * Address:	8028F6D8
 * Size:	000058
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	ChappyBase::Obj::onInit(initArg);
	setupEffect();
	m_onFire = false;
	startFireState();
	startMaterialAnimation();
}

/*
 * --INFO--
 * Address:	8028F730
 * Size:	000048
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishFireState(false);
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	8028F778
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	8028F77C
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8028F79C
 * Size:	0000C0
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = m_model->m_j3dModel;
	modelData          = j3dModel->m_modelData;
	j3dModel->calcMaterial();
	updateMaterialAnimation();

	for (u16 i = 0; i < modelData->m_materialTable.m_count1; i++) {
		J3DMatPacket* packet  = &j3dModel->m_matPackets[i];
		j3dSys.m_matPacket    = packet;
		J3DMaterial* material = modelData->m_materialTable.m_materials1[i];
		material->diff(packet->_2C->_34);
	}
}

/*
 * --INFO--
 * Address:	8028F85C
 * Size:	000034
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateFireState();
}

/*
 * --INFO--
 * Address:	8028F890
 * Size:	0000A0
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* worldMat      = m_shadowJoint->getWorldMatrix();
	shadowParam.m_position = Vector3f(worldMat->m_matrix.mtxView[0][3], worldMat->m_matrix.mtxView[1][3], worldMat->m_matrix.mtxView[2][3]);
	shadowParam.m_position.y                = m_position.y + 5.0f;
	shadowParam.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);

	if (isEvent(1, EB2_1)) {
		shadowParam.m_boundingSphere.m_radius = 75.0f;
	} else {
		shadowParam.m_boundingSphere.m_radius = 50.0f;
	}

	shadowParam.m_size = 32.0f;
}

/*
 * --INFO--
 * Address:	8028F930
 * Size:	0000E0
 */
void Obj::collisionCallback(CollEvent& collEvent)
{
	ChappyBase::Obj::collisionCallback(collEvent);
	if (m_onFire && collEvent.m_collidingCreature && collEvent.m_collidingCreature->isAlive()
	    && (collEvent.m_collidingCreature->isPiki() || collEvent.m_collidingCreature->isNavi())) {
		InteractFire fire(this, static_cast<ChappyBase::Parms*>(m_parms)->m_general.m_attackDamage.m_value);
		collEvent.m_collidingCreature->stimulate(fire);
	}
}

/*
 * --INFO--
 * Address:	8028FA10
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	8028FA44
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	8028FA78
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	8028FA98
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8028FAB8
 * Size:	000048
 */
void Obj::startFireState()
{
	if (!m_onFire) {
		m_onFire = true;
		startBodyEffect();
	}
	_2F8 = 30.0f;
}

/*
 * --INFO--
 * Address:	8028FB00
 * Size:	000094
 */
void Obj::finishFireState(bool check)
{
	if (m_onFire) {
		m_onFire = false;
		finishBodyEffect();
		if (check) {
			createDeadSteamEffect();
		} else {
			createDeadSmokeEffect();
		}
		getJAIObject()->startSound(PSSE_EN_FIRE_CHAPPY_F_END, 0);
	}
}

/*
 * --INFO--
 * Address:	8028FB94
 * Size:	00010C
 */
void Obj::updateFireState()
{
	if (m_onFire) {
		getJAIObject()->startSound(PSSE_EN_FIRE_CHAPPY_FLAME, 0);
		updateEfxLod();

		if (m_waterBox && m_onFire) {
			m_onFire = false;
			finishBodyEffect();
			createDeadSteamEffect();
			getJAIObject()->startSound(PSSE_EN_FIRE_CHAPPY_F_END, 0);
		}
		return;
	}

	if (isAlive() && !m_waterBox) {
		if (!m_onFire) {
			m_onFire = true;
			startBodyEffect();
		}

		_2F8 = 30.0f;
	}
}

/*
 * --INFO--
 * Address:	8028FCA0
 * Size:	00004C
 */
void Obj::createMaterialAnimation() { m_loopAnimators = new Sys::MatLoopAnimator[2]; }

/*
 * --INFO--
 * Address:	8028FCEC
 * Size:	000060
 */
void Obj::startMaterialAnimation()
{
	Sys::MatLoopAnimator* texLoopAnimator = &m_loopAnimators[0];
	Sys::MatTexAnimation* texAnimation    = static_cast<Mgr*>(m_mgr)->m_texAnimation;
	texLoopAnimator->start(texAnimation);

	Sys::MatLoopAnimator* tevRegLoopAnimator = &m_loopAnimators[1];
	Sys::MatTevRegAnimation* tevRegAnimation = static_cast<Mgr*>(m_mgr)->m_tevRegAnimation;
	tevRegLoopAnimator->start(tevRegAnimation);
}

/*
 * --INFO--
 * Address:	8028FD4C
 * Size:	000108
 */
void Obj::updateMaterialAnimation()
{
	f32 p1 = 30.0f;
	if (!m_onFire) {
		Sys::MatBaseAnimation* animation = m_loopAnimators[0].m_animation;
		f32 p2                           = m_loopAnimators[0]._08;
		f32 frameMax                     = (animation) ? animation->getFrameMax() : 0.0f;
		frameMax -= 30.0f;

		if (_2F8 == 30.0f) {
			if (p2 >= frameMax - 1.0f && p2 <= frameMax) {
				_2F8 -= 0.5f;
			}
		} else {
			_2F8 -= 0.5f;
			if (_2F8 < 0.0f) {
				_2F8 = 0.0f;
			}
		}

		if (_2F8 <= 0.0f) {
			p1 = 0.0f;
		} else {
			p1 = _2F8;
		}
	}

	m_loopAnimators[0].animate(p1);
	m_loopAnimators[1].animate(p1);
}

/*
 * --INFO--
 * Address:	8028FE54
 * Size:	00002C
 */
void Obj::updateEfxLod() { m_efxBody->setRateLOD(m_lod.m_flags & (AILOD_FLAG_IS_MID + AILOD_FLAG_IS_FAR)); }

/*
 * --INFO--
 * Address:	8028FE80
 * Size:	000288
 */
void Obj::createEffect()
{
	m_efxBody      = new efx::TYakiBody;
	m_efxHanacho   = new efx::THanachoY;
	m_efxFlick     = new efx::TYakiFlick;
	m_efxDeadsmoke = new efx::TYakiDeadsmoke;
	m_efxSteam     = new efx::TYakiSteam;
}

/*
 * --INFO--
 * Address:	80290108
 * Size:	000084
 */
void Obj::setupEffect()
{
	Matrixf* bodyMat = m_model->getJoint("body")->getWorldMatrix();
	m_efxBody->setMtxptr(bodyMat->m_matrix.mtxView);
	m_efxFlick->m_mtx     = bodyMat;
	m_efxDeadsmoke->m_mtx = bodyMat;
	m_efxSteam->m_mtx     = bodyMat;

	Matrixf* headMat    = m_model->getJoint("head")->getWorldMatrix();
	m_efxHanacho->m_mtx = headMat;
}

/*
 * --INFO--
 * Address:	8029018C
 * Size:	000034
 */
void Obj::startSleepEffect() { m_efxHanacho->create(nullptr); }

/*
 * --INFO--
 * Address:	802901C0
 * Size:	000030
 */
void Obj::finishSleepEffect() { m_efxHanacho->fade(); }

/*
 * --INFO--
 * Address:	802901F0
 * Size:	000034
 */
void Obj::startBodyEffect() { m_efxBody->create(nullptr); }

/*
 * --INFO--
 * Address:	80290224
 * Size:	000030
 */
void Obj::finishBodyEffect() { m_efxBody->fade(); }

/*
 * --INFO--
 * Address:	80290254
 * Size:	000040
 */
void Obj::createFlickEffect()
{
	if (m_onFire) {
		m_efxFlick->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	80290294
 * Size:	000034
 */
void Obj::createDeadSmokeEffect() { m_efxDeadsmoke->create(nullptr); }

/*
 * --INFO--
 * Address:	802902C8
 * Size:	000034
 */
void Obj::createDeadSteamEffect() { m_efxSteam->create(nullptr); }

/*
 * --INFO--
 * Address:	802902FC
 * Size:	00008C
 */
void Obj::effectDrawOn()
{
	m_efxBody->endDemoDrawOn();
	m_efxFlick->endDemoDrawOn();
	m_efxDeadsmoke->endDemoDrawOn();
	m_efxSteam->endDemoDrawOn();
	m_efxHanacho->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	80290388
 * Size:	00008C
 */
void Obj::effectDrawOff()
{
	m_efxBody->startDemoDrawOff();
	m_efxFlick->startDemoDrawOff();
	m_efxDeadsmoke->startDemoDrawOff();
	m_efxSteam->startDemoDrawOff();
	m_efxHanacho->startDemoDrawOff();
}

} // namespace FireChappy
} // namespace Game
