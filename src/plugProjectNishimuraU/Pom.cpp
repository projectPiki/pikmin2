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

	u16 nameIdx           = j3dModel->m_modelData->m_materialTable._0C->getIndex("hanabiral_v");
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
	shadowParam._1C                         = 0.1f;
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

			// doesn't quite match here, but probably functionally equivalent?
			Vector3f initPos = Vector3f(110.0f * pikmin2_cosf(randAngle), 750.0f, 110.0f * pikmin2_sinf(randAngle));
			ItemPikihead::InitArg initArg((EPikiKind)m_pikiKind, initPos);

			sprout->init(&initArg);
			sprout->setPosition(pos, false);
			BirthMgr::inc(m_pikiKind);
		}
	}

	createShotEffect();
	setZukanVisible(false);
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	stw      r28, 0xa0(r1)
	mr       r28, r3
	addi     r3, r1, 0x10
	lwz      r12, 0(r28)
	mr       r4, r28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	mr       r4, r28
	lfs      f0, lbl_8051A9B8@sda21(r2)
	addi     r3, r1, 0x64
	lfs      f3, 0x10(r1)
	lfs      f1, 0x18(r1)
	fadds    f0, f2, f0
	stfs     f2, 0x3c(r1)
	stfs     f3, 0x38(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x3c(r1)
	lwz      r5, 0x1f4(r28)
	lwz      r0, 0x2cc(r28)
	mullw    r30, r5, r0
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x64
	cmplwi   r0, 0
	stw      r4, 0x28(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x2c(r1)
	stw      r3, 0x30(r1)
	bne      lbl_80255458
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_80255678

lbl_80255458:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_802554C4

lbl_80255470:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80255678
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_802554C4:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80255470
	b        lbl_80255678

lbl_802554E4:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802555BC
	mr       r3, r31
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802555BC
	lbz      r3, 0x2b8(r31)
	cmpwi    r3, 5
	bge      lbl_8025556C
	bl       dec__Q24Game8BirthMgrFi
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 8
	beq      lbl_8025556C
	lbz      r3, 0x2b8(r31)
	lwz      r0, 0x2d8(r28)
	cmpw     r3, r0
	bne      lbl_8025556C
	lwz      r3, 0x2c4(r28)
	addi     r0, r3, -1
	stw      r0, 0x2c4(r28)

lbl_8025556C:
	lis      r3, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game15CreatureKillArg@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game12InteractKill@ha
	stw      r0, 0x1c(r1)
	addi     r4, r4, __vt__Q24Game15CreatureKillArg@l
	addi     r5, r3, __vt__Q24Game12InteractKill@l
	addi     r0, r1, 8
	li       r6, 1
	stw      r4, 8(r1)
	mr       r3, r31
	addi     r4, r1, 0x1c
	stw      r6, 0xc(r1)
	stw      r28, 0x20(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x24(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802555BC:
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	bne      lbl_802555E8
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_80255678

lbl_802555E8:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_8025565C

lbl_80255608:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80255678
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_8025565C:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80255608

lbl_80255678:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2c(r1)
	cmplw    r4, r3
	bne      lbl_802554E4
	li       r31, 0
	b        lbl_80255808

lbl_802556A0:
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	beq      lbl_80255804
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x84(r1)
	lfd      f2, lbl_8051A9D8@sda21(r2)
	stw      r0, 0x80(r1)
	lfs      f3, lbl_8051A9BC@sda21(r2)
	lfd      f0, 0x80(r1)
	lfs      f1, lbl_8051A9C0@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f0, lbl_8051A9A8@sda21(r2)
	lfs      f2, lbl_8051A9C4@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f3, f3, f1
	fcmpo    cr0, f3, f0
	bge      lbl_80255728
	lfs      f0, lbl_8051A9C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_8025574C

lbl_80255728:
	lfs      f0, lbl_8051A9CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_8025574C:
	lfs      f0, lbl_8051A9A8@sda21(r2)
	fmuls    f4, f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_80255760
	fneg     f3, f3

lbl_80255760:
	lfs      f0, lbl_8051A9CC@sda21(r2)
	lis      r3, __vt__Q24Game15CreatureInitArg@ha
	lwz      r9, 0x2d8(r28)
	addi     r5, r3, __vt__Q24Game15CreatureInitArg@l
	fmuls    f0, f3, f0
	li       r0, 0
	lis      r6, sincosTable___5JMath@ha
	lfs      f1, lbl_8051A9D0@sda21(r2)
	lis      r4, __vt__Q24Game11ItemInitArg@ha
	stw      r5, 0x44(r1)
	fctiwz   f2, f0
	addi     r7, r6, sincosTable___5JMath@l
	addi     r6, r4, __vt__Q24Game11ItemInitArg@l
	lis      r3, __vt__Q34Game12ItemPikihead7InitArg@ha
	lfs      f0, lbl_8051A9D4@sda21(r2)
	addi     r5, r3, __vt__Q34Game12ItemPikihead7InitArg@l
	stfd     f2, 0x98(r1)
	mr       r3, r29
	lfs      f3, lbl_8051A9C4@sda21(r2)
	addi     r4, r1, 0x44
	stw      r6, 0x44(r1)
	lwz      r8, 0x9c(r1)
	stw      r5, 0x44(r1)
	rlwinm   r6, r8, 3, 0x12, 0x1c
	add      r6, r7, r6
	stw      r9, 0x48(r1)
	lfs      f2, 4(r6)
	stfs     f1, 0x50(r1)
	fmuls    f2, f3, f2
	stfs     f4, 0x54(r1)
	stfs     f2, 0x4c(r1)
	stb      r0, 0x58(r1)
	stw      r0, 0x5c(r1)
	stfs     f0, 0x60(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r29
	addi     r4, r1, 0x38
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r3, 0x2d8(r28)
	bl       inc__Q24Game8BirthMgrFi

lbl_80255804:
	addi     r31, r31, 1

lbl_80255808:
	cmpw     r31, r30
	blt      lbl_802556A0
	mr       r3, r28
	bl       createShotEffect__Q34Game3Pom3ObjFv
	mr       r3, r28
	li       r4, 0
	bl       setZukanVisible__Q24Game9EnemyBaseFb
	addi     r3, r1, 0x64
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	lwz      r0, 0xb4(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	lwz      r28, 0xa0(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
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
