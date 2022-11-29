#include "Game/Entities/Pom.h"
#include "Game/Entities/ItemPikihead.h"
#include "Game/gamePlayData.h"
#include "Game/Stickers.h"
#include "Game/BirthMgr.h"
#include "efx/TOnyon.h"
#include "efx/TPonDead.h"
#include "efx/TEnemyDownSmoke.h"
#include "efx/TEnemyDownWat.h"
#include "Iterator.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Pom {

/*
 * --INFO--
 * Address:	802547A4
 * Size:	000138
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	802548DC
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802548E0
 * Size:	000114
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	if (isBirthTypeDropGroup()) {
		resetEvent(0, EB_Vulnerable);
		setEvent(0, EB_Flying);
		hardConstraintOff();
	} else {
		setEvent(0, EB_Vulnerable);
		resetEvent(0, EB_Flying);
		hardConstraintOn();
	}

	resetEvent(0, EB_13);
	resetEvent(0, EB_LeaveCarcass);
	resetEvent(0, EB_9);
	resetEvent(0, EB_LifegaugeVisible);
	setEvent(0, EB_BitterImmune);
	setEmotionNone();

	shadowMgr->killShadow(this);
	setPomParms();
	m_canTouchToClose = false;
	m_canSwallowPiki  = false;
	m_usedSlotCount   = 0;
	m_swingTimer      = 0.0f;
	m_queenColorTimer = 0.0f;

	m_FSM->start(this, 0, nullptr);
}

/*
 * --INFO--
 * Address:	802549F4
 * Size:	000088
 */
void Obj::doUpdate()
{
	m_FSM->exec(this);
	m_mouthSlots.update();
	if (isEvent(0, EB_Flying) && m_curTriangle) {
		if (isEvent(0, EB_HardConstraint)) {
			setEvent(0, EB_Vulnerable);
			resetEvent(0, EB_Flying);
		} else {
			hardConstraintOn();
		}
	}
}

/*
 * --INFO--
 * Address:	80254A7C
 * Size:	000110
 */
void Obj::changeMaterial()
{
	J3DModel* j3dModel      = m_model->m_j3dModel;
	J3DModelData* modelData = j3dModel->m_modelData;

	u16 nameIdx           = j3dModel->m_modelData->m_materialTable._0C->getIndex("hanabira1_v");
	J3DMaterial* material = modelData->m_materialTable.m_materials1[nameIdx];
	material->m_tevBlock->setTevColor(0, m_rgbColor);
	j3dModel->calcMaterial();

	for (u16 i = 0; i < modelData->m_materialTable.m_count1; i++) {
		J3DMatPacket& packet = j3dModel->m_matPackets[i];
		j3dSys.m_matPacket   = &j3dModel->m_matPackets[i];
		modelData->m_materialTable.m_materials1[i]->diff(packet._2C->_34);
	}
}

/*
 * --INFO--
 * Address:	80254B8C
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80254B90
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80254BB0
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	m_FSM = fsm;
	m_FSM->init(this);
	m_currentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	80254BFC
 * Size:	000044
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.m_position.x                = m_position.x;
	shadowParam.m_position.y                = m_position.y + 2.0f;
	shadowParam.m_position.z                = m_position.z;
	shadowParam.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.m_boundingSphere.m_radius   = 0.1f;
	shadowParam.m_size                      = 0.1f;
}

/*
 * --INFO--
 * Address:	80254C40
 * Size:	00012C
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && creature->isPiki() && collpart) {
		if (collpart->m_currentID == 'slot' && m_canSwallowPiki && m_usedSlotCount < m_totalSlotCount) {
			MouthCollPart* slot = m_mouthSlots.getSlot(0);
			InteractSwallow swallow(this, 1.0f, slot, 0);
			if (creature->stimulate(swallow)) {
				m_usedSlotCount++;
			}
			m_swingTimer = 0.0f;
			createSwingSmokeEffect();
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	80254D6C
 * Size:	00002C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart) { return pressCallBack(creature, damage, collpart); }

/*
 * --INFO--
 * Address:	80254D98
 * Size:	0000A8
 */
void Obj::collisionCallback(CollEvent& collEvent)
{
	if (collEvent.m_collidingCreature) {
		if (collEvent.m_collidingCreature->isPiki() || collEvent.m_collidingCreature->isNavi() || collEvent.m_collidingCreature->isTeki()) {
			setCollEvent(collEvent);
		}
	}
}

/*
 * --INFO--
 * Address:	80254E40
 * Size:	00004C
 */
void Obj::initMouthSlots()
{
	m_mouthSlots.alloc(1);
	m_mouthSlots.setup(0, m_model, "jnt_center");
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void Obj::setPomColor(int pikiKind)
{
	m_pikiKind = (EPikiKind)pikiKind;
	switch (m_pikiKind) {
	case Blue:
		m_rgbColor.r = m_rgbColor.g = 50;
		m_rgbColor.b                = 255;
		break;
	case Red:
		m_rgbColor.r = 255;
		m_rgbColor.g = m_rgbColor.b = 20;
		break;
	case Yellow:
		m_rgbColor.r = m_rgbColor.g = 255;
		m_rgbColor.b                = 20;
		break;
	case Purple:
		m_rgbColor.r = 28;
		m_rgbColor.g = 0;
		m_rgbColor.b = 52;
		break;
	case White:
		m_rgbColor.r = 200;
		m_rgbColor.g = 255;
		m_rgbColor.b = 220;
		break;
	}
}

/*
 * --INFO--
 * Address:	80254E8C
 * Size:	000510
 */
void Obj::setPomParms()
{
	EnemyTypeID::EEnemyTypeID id = getEnemyTypeID();

	switch (id) {
	case EnemyTypeID::EnemyID_BluePom:
		setPomColor(Blue);
		break;
	case EnemyTypeID::EnemyID_RedPom:
		setPomColor(Red);
		break;
	case EnemyTypeID::EnemyID_YellowPom:
		setPomColor(Yellow);
		break;
	case EnemyTypeID::EnemyID_BlackPom:
		setPomColor(Purple);
		break;
	case EnemyTypeID::EnemyID_WhitePom:
		setPomColor(White);
		break;
	case EnemyTypeID::EnemyID_RandPom:
		setPomColor(Red);
		break;
	}

	if (getEnemyTypeID() != EnemyTypeID::EnemyID_RandPom) {
		m_totalSlotCount = C_PROPERPARMS.m_normalMaxSlots.m_value;
		m_shotMultiplier = 1;
		m_rgbColor.a     = 0;
	} else {
		m_totalSlotCount = C_PROPERPARMS.m_queenMaxSlots.m_value;
		m_shotMultiplier = C_PROPERPARMS.m_queenShotMultiplier.m_value;
		m_rgbColor.a     = 255;
	}
}

/*
 * --INFO--
 * Address:	802553A4
 * Size:	0004AC
 */
void Obj::shotPikmin()
{
	Vector3f pos = getPosition();
	pos.y += 50.0f;

	int val = m_stuckPikminCount * m_shotMultiplier;
	Stickers stickers(this);
	Iterator<Creature> iter(&stickers);

	CI_LOOP(iter)
	{
		Creature* creature = (*iter);
		if (creature->isPiki() && creature->isStickToMouth()) {
			int pikiKind = static_cast<Piki*>(creature)->m_pikiKind;
			if (pikiKind < Bulbmin) {
				BirthMgr::dec(pikiKind);
				if (getEnemyTypeID() != EnemyTypeID::EnemyID_RandPom && static_cast<Piki*>(creature)->m_pikiKind == m_pikiKind) {
					m_usedSlotCount--;
				}
			}
			CreatureKillArg killArg(1);
			InteractKill kill(this, &killArg);
			creature->stimulate(kill);
		}
	}

	for (int i = 0; i < val; i++) {
		ItemPikihead::Item* sprout = static_cast<ItemPikihead::Item*>(ItemPikihead::mgr->birth());
		if (sprout) {
			f32 randAngle = randWeightFloat(TAU);

			Vector3f initPos = Vector3f(110.0f * pikmin2_cosf(randAngle), 750.0f, 110.0f * pikmin2_sinf(randAngle));
			ItemPikihead::InitArg initArg((EPikiKind)m_pikiKind, initPos);

			sprout->init(&initArg);
			sprout->setPosition(pos, false);
			BirthMgr::inc(m_pikiKind);
		}
	}

	createShotEffect();
	setZukanVisible(false);
}

/*
 * --INFO--
 * Address:	80255850
 * Size:	00019C
 */
void Obj::changePomColor()
{
	if (getEnemyTypeID() == EnemyTypeID::EnemyID_RandPom) {
		if (m_queenColorTimer > C_PROPERPARMS.m_colorChangeTime.m_value) {
			int limit     = m_pikiKind + 3; // more than 3 and we loop back
			int nextColor = m_pikiKind + 1; // first potential next color to try (Blue->Red->Yellow)

			int choosableColors[] = { Blue, Red, Yellow, 0, 0 }; // only set Blue, Red, Yellow as queen options

			for (nextColor; nextColor < limit; nextColor++) {
				int colorIndex = nextColor; // color to try
				if (nextColor > 2) {        // only allow Blue (0), Red (1), Yellow (2)
					colorIndex = nextColor - 3;
				}

				// if color is unlocked, set color of dots + output piki, reset timer + return
				// NB: colors for purple and white are here, probably disabled before release
				if (playData->hasMetPikmin(choosableColors[colorIndex])) {
					setPomColor(colorIndex);
					m_queenColorTimer = 0.0f;
					return;
				}
			}
		} else {
			m_queenColorTimer += sys->m_deltaTime;
		}
	}
}

/*
 * --INFO--
 * Address:	802559EC
 * Size:	000184
 */
void Obj::createSwingSmokeEffect()
{
	if (m_waterBox) {
		Vector3f pos = m_position;
		pos.y        = *m_waterBox->getSeaHeightPtr();
		efx::ArgScale argScale(pos, 0.7f);
		efx::TEnemyDownWat waterFX;

		waterFX.create(&argScale);

	} else {
		efx::Arg arg(m_position.x, m_position.y - 5.0f, m_position.z);
		efx::TEnemyDownSmoke smokeFX;

		smokeFX._0C = 0.7f;
		smokeFX.create(&arg);
	}
}

/*
 * --INFO--
 * Address:	80255B70
 * Size:	000094
 */
void Obj::createShotEffect()
{
	Vector3f pos = m_position;
	pos.y -= 60.0f;

	efx::Arg arg(pos);
	efx::TOnyonLay laySeed;

	laySeed.create(&arg);
}

/*
 * --INFO--
 * Address:	80255C04
 * Size:	000080
 */
void Obj::createPomDeadEffect()
{
	efx::Arg arg(m_position);
	efx::TPonDead deadFX;

	deadFX.create(&arg);
}

} // namespace Pom
} // namespace Game
