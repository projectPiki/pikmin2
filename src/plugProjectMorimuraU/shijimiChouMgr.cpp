#include "Game/Entities/ShijimiChou.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "Dolphin/rand.h"

namespace Game {
namespace ShijimiChou {

static const char shijimiChouMgrName[] = "shijimiChouMgr";

/*
 * --INFO--
 * Address:	803884C0
 * Size:	00005C
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_updateMgr   = nullptr;
	m_groupLeader = nullptr;
	m_name        = "シジミ蝶マネージャ"; // clam butterfly manager
}

/*
 * --INFO--
 * Address:	8038851C
 * Size:	000150
 */
void Mgr::doAlloc()
{
	init(new Parms);
	m_updateMgr = new UpdateMgr;

	int updateCount = getMaxObjects() / 5;
	m_updateMgr->create(updateCount);

	// this is such a dumb stack of things.
	m_mtxCacheRef = new J3DUMtxCacheRef<J3DUMtxAnmCacheTable>(getCacheTable(getModel(), getTransform()));
}

/*
 * --INFO--
 * Address:	80388964
 * Size:	000038
 */
void ShijimiChou::Mgr::loadModelData()
{
	EnemyMgrBase::loadModelData();
	m_modelData->newSharedDisplayList(0x00040000);
}

/*
 * --INFO--
 * Address:	8038899C
 * Size:	000138
 */
SysShape::Model* ShijimiChou::Mgr::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x80000, m_modelType);
	P2ASSERTLINE(71, model);

	for (u16 i = 0; i < m_modelData->getMaterialCount1(); i++) {
		const char* name = m_modelData->m_materialTable._0C->getName(i);
		if (!strcmp(name, "mat_shijimi_hane_v")) {
			model->m_j3dModel->m_matPackets[i]._2C->newDifferedDisplayList(0x01000000);
		}
	}

	model->updateModel();
	return model;
}

/*
 * --INFO--
 * Address:	80388AD4
 * Size:	0000C8
 */
EnemyBase* ShijimiChou::Mgr::birth(EnemyBirthArg& birthArg)
{
	Obj* enemy = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
	if (enemy) {
		Obj* leader = static_cast<Obj*>(enemy);
		birthArg.m_position.y += CG_PROPERPARMS(leader).m_fp03.m_value;
		leader->m_homePosition = birthArg.m_position;
		leader->onSetPosition(birthArg.m_position);
		leader->m_groupLeader   = leader;
		leader->_32C            = CG_PARMS(leader)->_948;
		leader->m_spawningEnemy = nullptr;
		m_groupLeader           = leader;
		createGroup(leader, CG_PARMS(leader)->m_groupCount);
		return leader;
	} else {
		return nullptr;
	}
}

/*
 * --INFO--
 * Address:	80388B9C
 * Size:	000050
 */
void Mgr::doAnimation()
{
	EnemyMgrBase::doAnimation();
	if (m_groupLeader && CG_PARMS(m_groupLeader)->_949) {
		m_updateMgr->update();
	}
}

/*
 * --INFO--
 * Address:	80388BEC
 * Size:	000058
 */
void ShijimiChou::Mgr::fetch(J3DModel* model, f32 p1)
{
	if (m_mtxCacheRef) {
		m_mtxCacheRef->m_cache->_00 = 0.5f + p1;
		m_mtxCacheRef->fetch(model);
	}
}

/*
 * --INFO--
 * Address:	80388C44
 * Size:	0004BC
 */
void ShijimiChou::Mgr::createGroup(Obj* leader, int count)
{
	EnemyBirthArg birthArg;
	Vector3f leaderPos = leader->getPosition();
	leader->leaderInit();
	birthArg.m_position.x = leaderPos.x;
	birthArg.m_faceDir    = 0.0f;
	birthArg.m_position.y = leaderPos.y;
	birthArg.m_position.z = leaderPos.z;

	f32 factor = 20.0f;
	if (leader->m_spawnSource == 1) {
		factor = 120.0f;
	}
	rand();

	birthArg.m_position.x = factor * pikmin2_sinf(birthArg.m_faceDir) + birthArg.m_position.x;
	birthArg.m_position.z = factor * pikmin2_cosf(birthArg.m_faceDir) + birthArg.m_position.z;

	leader->m_faceDir    = birthArg.m_faceDir;
	leader->m_rotation.y = leader->m_faceDir;

	f32 randcall       = randFloat();
	leader->m_specType = SHIJIMITYPE_Red;
	if (randcall < 0.5f) {
		leader->m_specType = SHIJIMITYPE_Purple;
	}

	for (int i = 0; i < count - 1; i++) {
		// TODO: make each group member
	}
	/*
	stwu     r1, -0x170(r1)
	mflr     r0
	stw      r0, 0x174(r1)
	stfd     f31, 0x160(r1)
	psq_st   f31, 360(r1), 0, qr0
	stfd     f30, 0x150(r1)
	psq_st   f30, 344(r1), 0, qr0
	stfd     f29, 0x140(r1)
	psq_st   f29, 328(r1), 0, qr0
	stfd     f28, 0x130(r1)
	psq_st   f28, 312(r1), 0, qr0
	stfd     f27, 0x120(r1)
	psq_st   f27, 296(r1), 0, qr0
	stfd     f26, 0x110(r1)
	psq_st   f26, 280(r1), 0, qr0
	stfd     f25, 0x100(r1)
	psq_st   f25, 264(r1), 0, qr0
	stfd     f24, 0xf0(r1)
	psq_st   f24, 248(r1), 0, qr0
	stfd     f23, 0xe0(r1)
	psq_st   f23, 232(r1), 0, qr0
	stfd     f22, 0xd0(r1)
	psq_st   f22, 216(r1), 0, qr0
	stfd     f21, 0xc0(r1)
	psq_st   f21, 200(r1), 0, qr0
	stfd     f20, 0xb0(r1)
	psq_st   f20, 184(r1), 0, qr0
	stfd     f19, 0xa0(r1)
	psq_st   f19, 168(r1), 0, qr0
	stfd     f18, 0x90(r1)
	psq_st   f18, 152(r1), 0, qr0
	stmw     r25, 0x74(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	addi     r3, r1, 0x14
	bl       __ct__Q24Game13EnemyBirthArgFv
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f26, 8(r1)
	mr       r3, r28
	lfs      f25, 0xc(r1)
	lfs      f24, 0x10(r1)
	bl       leaderInit__Q34Game11ShijimiChou3ObjFv
	lfs      f0, lbl_8051EE9C@sda21(r2)
	stfs     f26, 0x14(r1)
	lfs      f20, lbl_8051EE80@sda21(r2)
	stfs     f0, 0x20(r1)
	stfs     f25, 0x18(r1)
	stfs     f24, 0x1c(r1)
	lwz      r0, 0x2c0(r28)
	cmpwi    r0, 1
	bne      lbl_80388D2C
	lfs      f20, lbl_8051EED0@sda21(r2)

lbl_80388D2C:
	bl       rand
	lfs      f1, 0x20(r1)
	lfs      f0, lbl_8051EE9C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80388D6C
	lfs      f0, lbl_8051EED4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_80388D90

lbl_80388D6C:
	lfs      f0, lbl_8051EED8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_80388D90:
	lfs      f0, 0x14(r1)
	lfs      f2, 0x20(r1)
	fmadds   f1, f20, f1, f0
	lfs      f0, lbl_8051EE9C@sda21(r2)
	fcmpo    cr0, f2, f0
	stfs     f1, 0x14(r1)
	bge      lbl_80388DB0
	fneg     f2, f2

lbl_80388DB0:
	lfs      f0, lbl_8051EED8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f1, 0x1c(r1)
	fmuls    f2, f2, f0
	lfs      f0, 0x20(r1)
	fctiwz   f2, f2
	stfd     f2, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f2, 4(r3)
	fmadds   f1, f20, f2, f1
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x1fc(r28)
	lfs      f0, 0x1fc(r28)
	stfs     f0, 0x1a8(r28)
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r3, 0x4330
	stw      r0, 0x64(r1)
	li       r0, 1
	lfd      f3, lbl_8051EEE8@sda21(r2)
	stw      r3, 0x60(r1)
	lfs      f1, lbl_8051EEDC@sda21(r2)
	lfd      f2, 0x60(r1)
	lfs      f0, lbl_8051EEC8@sda21(r2)
	fsubs    f2, f2, f3
	stw      r0, 0x2bc(r28)
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80388E38
	li       r0, 2
	stw      r0, 0x2bc(r28)

lbl_80388E38:
	lfs      f23, 0x198(r28)
	xoris    r31, r29, 0x8000
	lfs      f22, 0x19c(r28)
	addi     r26, r29, -1
	lfs      f21, 0x1a0(r28)
	li       r29, 0
	lfs      f27, lbl_8051EEE0@sda21(r2)
	lis      r30, 0x4330
	lfd      f28, lbl_8051EEE8@sda21(r2)
	lfs      f29, lbl_8051EEDC@sda21(r2)
	lfs      f30, lbl_8051EECC@sda21(r2)
	lfs      f31, lbl_8051EEE4@sda21(r2)
	b        lbl_80389074

lbl_80388E6C:
	addi     r0, r29, 1
	stw      r30, 0x60(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0x64(r1)
	lfd      f0, 0x60(r1)
	stw      r31, 0x5c(r1)
	fsubs    f1, f0, f28
	stw      r30, 0x58(r1)
	lfd      f0, 0x58(r1)
	fmuls    f1, f27, f1
	stfs     f26, 0x14(r1)
	fsubs    f0, f0, f28
	stfs     f25, 0x18(r1)
	fdivs    f1, f1, f0
	stfs     f24, 0x1c(r1)
	stfs     f1, 0x20(r1)
	lwz      r0, 0x2c0(r28)
	cmpwi    r0, 0
	bne      lbl_80388F68
	lfs      f0, lbl_8051EE9C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80388EF0
	lfs      f0, lbl_8051EED4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_80388F14

lbl_80388EF0:
	lfs      f0, lbl_8051EED8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_80388F14:
	lfs      f0, 0x14(r1)
	lfs      f2, 0x20(r1)
	fmadds   f1, f20, f1, f0
	lfs      f0, lbl_8051EE9C@sda21(r2)
	fcmpo    cr0, f2, f0
	stfs     f1, 0x14(r1)
	bge      lbl_80388F34
	fneg     f2, f2

lbl_80388F34:
	lfs      f1, lbl_8051EED8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r0, r3, sincosTable___5JMath@l
	lfs      f0, 0x1c(r1)
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x50(r1)
	lwz      r3, 0x54(r1)
	rlwinm   r3, r3, 3, 0x12, 0x1c
	add      r3, r0, r3
	lfs      f1, 4(r3)
	fmadds   f0, f20, f1, f0
	stfs     f0, 0x1c(r1)

lbl_80388F68:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r30, 0x60(r1)
	lfs      f1, 0x18(r1)
	mr       r3, r27
	stw      r0, 0x64(r1)
	addi     r4, r1, 0x14
	lfd      f0, 0x60(r1)
	fsubs    f0, f0, f28
	fdivs    f0, f0, f29
	fmsubs   f0, f30, f0, f31
	fadds    f0, f1, f0
	stfs     f0, 0x18(r1)
	lwz      r5, 0xc0(r28)
	lfs      f19, 0x90c(r5)
	lfs      f0, 0x934(r5)
	fadds    f18, f19, f0
	bl       birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
	cmplwi   r3, 0
	beq      lbl_80389070
	lwz      r0, 0x2c0(r28)
	mr       r25, r3
	stw      r0, 0x2c0(r3)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x64(r1)
	lfd      f2, lbl_8051EEE8@sda21(r2)
	stw      r0, 0x60(r1)
	lfs      f0, lbl_8051EEDC@sda21(r2)
	lfd      f1, 0x60(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpo    cr0, f0, f19
	bge      lbl_80389000
	li       r0, 1
	stw      r0, 0x2bc(r25)
	b        lbl_8038901C

lbl_80389000:
	fcmpo    cr0, f0, f18
	bge      lbl_80389014
	li       r0, 2
	stw      r0, 0x2bc(r25)
	b        lbl_8038901C

lbl_80389014:
	li       r0, 0
	stw      r0, 0x2bc(r25)

lbl_8038901C:
	lwz      r0, 0x2c0(r28)
	cmpwi    r0, 2
	bne      lbl_80389038
	mr       r3, r25
	bl       createAppearEffect__Q34Game11ShijimiChou3ObjFv
	li       r0, 0
	stw      r0, 0x2bc(r25)

lbl_80389038:
	stw      r28, 0x2e8(r25)
	mr       r3, r28
	bl       getFlyType__Q34Game11ShijimiChou3ObjFv
	stw      r3, 0x32c(r25)
	mr       r3, r25
	li       r4, 0
	stfs     f23, 0x198(r25)
	stfs     f22, 0x19c(r25)
	stfs     f21, 0x1a0(r25)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r3, 0x2c8(r28)
	addi     r0, r29, 1
	stw      r3, 0x2c8(r25)
	stw      r0, 0x328(r28)

lbl_80389070:
	addi     r29, r29, 1

lbl_80389074:
	cmpw     r29, r26
	blt      lbl_80388E6C
	psq_l    f31, 360(r1), 0, qr0
	lfd      f31, 0x160(r1)
	psq_l    f30, 344(r1), 0, qr0
	lfd      f30, 0x150(r1)
	psq_l    f29, 328(r1), 0, qr0
	lfd      f29, 0x140(r1)
	psq_l    f28, 312(r1), 0, qr0
	lfd      f28, 0x130(r1)
	psq_l    f27, 296(r1), 0, qr0
	lfd      f27, 0x120(r1)
	psq_l    f26, 280(r1), 0, qr0
	lfd      f26, 0x110(r1)
	psq_l    f25, 264(r1), 0, qr0
	lfd      f25, 0x100(r1)
	psq_l    f24, 248(r1), 0, qr0
	lfd      f24, 0xf0(r1)
	psq_l    f23, 232(r1), 0, qr0
	lfd      f23, 0xe0(r1)
	psq_l    f22, 216(r1), 0, qr0
	lfd      f22, 0xd0(r1)
	psq_l    f21, 200(r1), 0, qr0
	lfd      f21, 0xc0(r1)
	psq_l    f20, 184(r1), 0, qr0
	lfd      f20, 0xb0(r1)
	psq_l    f19, 168(r1), 0, qr0
	lfd      f19, 0xa0(r1)
	psq_l    f18, 152(r1), 0, qr0
	lfd      f18, 0x90(r1)
	lmw      r25, 0x74(r1)
	lwz      r0, 0x174(r1)
	mtlr     r0
	addi     r1, r1, 0x170
	blr
	*/
}

/*
 * --INFO--
 * Address:	80389100
 * Size:	0000B8
 */
void ShijimiChou::Mgr::createGroupByBigFoot(EnemyBirthArg& birthArg, int count)
{
	EnemyBase* enemy = EnemyMgrBase::birth(birthArg);
	if (enemy) {
		Obj* chou            = static_cast<Obj*>(enemy);
		m_groupLeader        = chou;
		chou->m_homePosition = birthArg.m_position;
		chou->onSetPosition(birthArg.m_position);
		chou->m_groupLeader = chou;
		chou->_32C          = 0;
		chou->init(nullptr);
		chou->m_spawnSource = SHIJIMISOURCE_BeadyLongLegs;
		createGroup(chou, count);
	}
}

/*
 * --INFO--
 * Address:	803891B8
 * Size:	0000B8
 */
void ShijimiChou::Mgr::createGroupByPlants(EnemyBirthArg& birthArg, int count)
{
	EnemyBase* enemy = EnemyMgrBase::birth(birthArg);
	if (enemy) {
		Obj* chou            = static_cast<Obj*>(enemy);
		m_groupLeader        = chou;
		chou->m_homePosition = birthArg.m_position;
		chou->onSetPosition(birthArg.m_position);
		chou->m_groupLeader = chou;
		chou->_32C          = 1;
		chou->init(nullptr);
		chou->m_spawnSource = SHIJIMISOURCE_Plants;
		createGroup(chou, count);
	}
}

/*
 * --INFO--
 * Address:	80389270
 * Size:	000198
 */
void ShijimiChou::Mgr::createGroupByEnemy(EnemyBirthArg& birthArg, EnemyBase* enemy, int count, bool check)
{
	Obj* chou = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
	if (chou) {
		Vector3f birthPos = birthArg.m_position;
		if (!check && enemy) {
			birthPos.x = -(75.0f * pikmin2_sinf(enemy->getFaceDir()) - birthPos.x);
			birthPos.z = -(75.0f * pikmin2_cosf(enemy->getFaceDir()) - birthPos.z);
		}
		m_groupLeader = chou;
		chou->onSetPosition(birthPos);
		chou->m_groupLeader = chou;
		chou->_32C          = 1;
		chou->init(nullptr);
		chou->m_spawnSource   = SHIJIMISOURCE_Enemy;
		chou->m_spawningEnemy = enemy;
		createGroup(chou, count);
	}
}

} // namespace ShijimiChou
} // namespace Game
