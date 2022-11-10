#include "Game/Entities/TamagoMushi.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "Dolphin/rand.h"

namespace Game {
namespace TamagoMushi {

static const char tamagoMushiMgrName[] = "tamagoMushiMgr";

/*
 * --INFO--
 * Address:	8036D988
 * Size:	000050
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	m_name = "タマゴムシマネージャ"; // egg bug manager
}

/*
 * --INFO--
 * Address:	8036D9D8
 * Size:	000100
 */
void Mgr::doAlloc()
{
	init(new Parms);
	m_mtxCacheRef = new J3DUMtxCacheRef<J3DUMtxAnmCacheTable>(getCacheTable(getModel(), getTransform()));
}

/*
 * --INFO--
 * Address:	8036DD90
 * Size:	000048
 */
EnemyBase* Mgr::birth(EnemyBirthArg& birthArg)
{
	Obj* tamagomushi = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
	if (tamagomushi) {
		tamagomushi->init(nullptr);
		tamagomushi->setLeader(tamagomushi);
	}
	return tamagomushi;
}

/*
 * --INFO--
 * Address:	8036DDD8
 * Size:	000058
 */
void Mgr::fetch(J3DModel* model, f32 p1)
{
	if (m_mtxCacheRef) {
		m_mtxCacheRef->m_cache->_00 = 0.5f + p1;
		m_mtxCacheRef->fetch(model);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 * --INLINED--
 */
int Mgr::getFreeNum()
{
	int freeSlots = 0;
	for (int i = freeSlots; i < getMaxObjects(); i++) {
		EnemyBase* enemy = getEnemy(i);
		if (!enemy->isEvent(0, EB_Alive)) {
			freeSlots++;
		}
	}
	return freeSlots;
}

/*
 * --INFO--
 * Address:	8036DE30
 * Size:	0000F8
 */
Obj* Mgr::createGroup(EnemyBirthArg& birthArg, int count, Vector3f& velocity)
{
	Obj* leader;
	int freeSlots = getFreeNum();

	if (freeSlots < count) {
		return nullptr;
	} else {
		EnemyBase* newEnemy = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
		if (newEnemy) {
			leader = static_cast<Obj*>(newEnemy);
			leader->init(nullptr);
			leader->setTypeBall();
			leader->setVelocity(velocity);
			createGroup(leader, count, true);
			return leader;
		} else {
			return nullptr;
		}
	}
}

/*
 * --INFO--
 * Address:	8036DF28
 * Size:	0000B0
 */
Obj* Mgr::createGroupByBigFoot(EnemyBirthArg& birthArg, int count, Vector3f& velocity, f32 p1)
{
	EnemyBase* enemy = EnemyMgrBase::birth(birthArg);
	if (enemy) {
		Obj* leader = static_cast<Obj*>(enemy);
		leader->init(nullptr);
		leader->setTypeBall();
		leader->setVelocity(velocity);
		createGroupByBigFoot(leader, count, true, p1);
		return leader;

	} else {
		return nullptr;
	}
}

/*
 * --INFO--
 * Address:	8036DFD8
 * Size:	0003AC
 */
void Mgr::createGroup(Obj* leader, int count, bool check)
{
	f32 factor1 = 45.0f;
	if (check) {
		factor1 = -10.0f;
	}

	P2ASSERTLINE(170, leader);
	leader->setLeader(leader);

	EnemyBirthArg birthArg;
	Vector3f leaderPos = leader->getPosition();

	f32 factor2 = 0.5f * randFloat() + 0.5f;
	if (check) {
		factor2 = 1.0f;
	}

	birthArg.m_faceDir  = 0.0f;
	birthArg.m_position = leaderPos;

	leader->onSetPosition(birthArg.m_position);

	leader->m_faceDir    = birthArg.m_faceDir;
	leader->m_rotation.y = leader->m_faceDir;

	for (int i = 0; i < count - 1; i++) {
		if (!check) {
			factor2 = 0.8f * randFloat() + 0.2f;
		}
		birthArg.m_position = leaderPos;
		birthArg.m_faceDir  = (TAU * (i)) / ((f32)count);

		f32 sinComp = factor1 * pikmin2_sinf(birthArg.m_faceDir);
		birthArg.m_position.x += factor2 * sinComp;
		f32 cosComp = factor1 * pikmin2_cosf(birthArg.m_faceDir);
		birthArg.m_position.z += factor2 * cosComp;

		if (check || (int)(i % 2) == 1) {
			birthArg.m_faceDir *= -1.0f;
		}

		EnemyBase* enemy = EnemyMgrBase::birth(birthArg);
		if (enemy) {
			Obj* tamagomushi = static_cast<Obj*>(enemy);
			tamagomushi->init(nullptr);
			if (check) {
				Vector3f leaderVelocity = leader->getVelocity();
				tamagomushi->setVelocity(leaderVelocity);
			}
			tamagomushi->setLeader(leader);
		}
	}
}

/*
 * --INFO--
 * Address:	8036E384
 * Size:	000484
 */
void Mgr::createGroupByBigFoot(Obj* leader, int count, bool check, f32 p1)
{
	P2ASSERTLINE(223, leader);
	leader->setLeader(leader);

	EnemyBirthArg birthArg;
	Vector3f leaderPos = leader->getPosition();

	birthArg.m_faceDir  = 0.0f;
	birthArg.m_position = leaderPos;

	leader->onSetPosition(birthArg.m_position);

	leader->m_faceDir    = birthArg.m_faceDir;
	leader->m_rotation.y = leader->m_faceDir;

	for (int i = 0; i < count - 1; i++) {
		f32 factor = 0.8f * randFloat() + 0.2f;

		f32 angle           = TAU * randFloat() * i;
		birthArg.m_faceDir  = TAU * angle;
		birthArg.m_position = leaderPos;
		angle /= count;

		birthArg.m_position.x += (factor * pikmin2_sinf(angle)) / 2;
		birthArg.m_position.z += (factor * pikmin2_cosf(angle)) / 2;

		Obj* tamagomushi = static_cast<Obj*>(EnemyMgrBase::birth(birthArg));
		if (tamagomushi) {
			tamagomushi->init(nullptr);
			if (check) {
				Vector3f leaderVelocity = leader->getVelocity();
				if (i - (i / 3 * 3)) {
					leaderVelocity.y -= p1 * randFloat();
				} else {
					leaderVelocity.y += p1 * randFloat();
				}

				tamagomushi->setVelocity(leaderVelocity);
			}
			tamagomushi->setLeader(leader);

			tamagomushi->m_rotation = Vector3f(TAU * randFloat(), birthArg.m_faceDir, TAU * randFloat());
		}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x1A0(r1)
	  mflr      r0
	  stw       r0, 0x1A4(r1)
	  stfd      f31, 0x190(r1)
	  psq_st    f31,0x198(r1),0,0
	  stfd      f30, 0x180(r1)
	  psq_st    f30,0x188(r1),0,0
	  stfd      f29, 0x170(r1)
	  psq_st    f29,0x178(r1),0,0
	  stfd      f28, 0x160(r1)
	  psq_st    f28,0x168(r1),0,0
	  stfd      f27, 0x150(r1)
	  psq_st    f27,0x158(r1),0,0
	  stfd      f26, 0x140(r1)
	  psq_st    f26,0x148(r1),0,0
	  stfd      f25, 0x130(r1)
	  psq_st    f25,0x138(r1),0,0
	  stfd      f24, 0x120(r1)
	  psq_st    f24,0x128(r1),0,0
	  stfd      f23, 0x110(r1)
	  psq_st    f23,0x118(r1),0,0
	  stfd      f22, 0x100(r1)
	  psq_st    f22,0x108(r1),0,0
	  stfd      f21, 0xF0(r1)
	  psq_st    f21,0xF8(r1),0,0
	  stfd      f20, 0xE0(r1)
	  psq_st    f20,0xE8(r1),0,0
	  stfd      f19, 0xD0(r1)
	  psq_st    f19,0xD8(r1),0,0
	  stfd      f18, 0xC0(r1)
	  psq_st    f18,0xC8(r1),0,0
	  stmw      r23, 0x9C(r1)
	  mr.       r25, r4
	  fmr       f19, f1
	  mr        r24, r3
	  mr        r23, r5
	  mr        r26, r6
	  bne-      .loc_0xB4
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x24C4
	  li        r4, 0xDF
	  addi      r5, r5, 0x24D8
	  crclr     6, 0x6
	  bl        -0x343DF4

	.loc_0xB4:
	  mr        r3, r25
	  mr        r4, r25
	  bl        0x1DA8
	  addi      r3, r1, 0x2C
	  bl        -0x23F824
	  mr        r4, r25
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f20, 0x14(r1)
	  mr        r3, r25
	  lfs       f22, 0x18(r1)
	  addi      r4, r1, 0x2C
	  lfs       f21, 0x1C(r1)
	  lfs       f0, 0x6F4(r2)
	  stfs      f20, 0x2C(r1)
	  stfs      f0, 0x38(r1)
	  stfs      f22, 0x30(r1)
	  stfs      f21, 0x34(r1)
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x38(r1)
	  lis       r3, 0x8050
	  lfd       f24, 0x748(r2)
	  xoris     r30, r23, 0x8000
	  stfs      f0, 0x1FC(r25)
	  addi      r31, r3, 0x71A0
	  lfs       f25, 0x730(r2)
	  subi      r23, r23, 0x1
	  lfs       f0, 0x1FC(r25)
	  li        r28, 0
	  lfs       f26, 0x734(r2)
	  lis       r29, 0x4330
	  stfs      f0, 0x1A8(r25)
	  lfs       f27, 0x714(r2)
	  lfs       f28, 0x738(r2)
	  lfs       f29, 0x718(r2)
	  lfs       f30, 0x6F4(r2)
	  lfs       f31, 0x740(r2)
	  b         .loc_0x3F8

	.loc_0x164:
	  bl        -0x2A4F48
	  xoris     r0, r3, 0x8000
	  stw       r29, 0x60(r1)
	  stw       r0, 0x64(r1)
	  lfd       f0, 0x60(r1)
	  fsubs     f0, f0, f24
	  fdivs     f0, f0, f25
	  fmadds    f23, f26, f0, f27
	  bl        -0x2A4F68
	  xoris     r0, r28, 0x8000
	  xoris     r3, r3, 0x8000
	  stw       r0, 0x74(r1)
	  stw       r29, 0x70(r1)
	  lfd       f0, 0x70(r1)
	  stw       r3, 0x6C(r1)
	  fsubs     f0, f0, f24
	  stw       r29, 0x68(r1)
	  lfd       f2, 0x68(r1)
	  fmuls     f1, f28, f0
	  stw       r30, 0x7C(r1)
	  fsubs     f2, f2, f24
	  stw       r29, 0x78(r1)
	  lfd       f0, 0x78(r1)
	  fdivs     f2, f2, f25
	  stfs      f20, 0x2C(r1)
	  stfs      f22, 0x30(r1)
	  stfs      f21, 0x34(r1)
	  fsubs     f0, f0, f24
	  fmuls     f2, f28, f2
	  fdivs     f3, f1, f0
	  stfs      f2, 0x38(r1)
	  fcmpo     cr0, f3, f30
	  bge-      .loc_0x214
	  lfs       f0, 0x73C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x80(r1)
	  lwz       r0, 0x84(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x238

	.loc_0x214:
	  lfs       f0, 0x740(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x88(r1)
	  lwz       r0, 0x8C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x238:
	  fmuls     f1, f29, f0
	  lfs       f0, 0x2C(r1)
	  fmr       f2, f3
	  fcmpo     cr0, f3, f30
	  fmadds    f0, f23, f1, f0
	  stfs      f0, 0x2C(r1)
	  bge-      .loc_0x258
	  fneg      f2, f3

	.loc_0x258:
	  fmuls     f1, f2, f31
	  lfs       f0, 0x34(r1)
	  mr        r3, r24
	  addi      r4, r1, 0x2C
	  fctiwz    f1, f1
	  stfd      f1, 0x90(r1)
	  lwz       r0, 0x94(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r5, r31, r0
	  lfs       f1, 0x4(r5)
	  fmuls     f1, f29, f1
	  fmadds    f0, f23, f1, f0
	  stfs      f0, 0x34(r1)
	  bl        -0x23F248
	  mr.       r27, r3
	  beq-      .loc_0x3F4
	  li        r4, 0
	  bl        -0x233658
	  rlwinm.   r0,r26,0,24,31
	  beq-      .loc_0x37C
	  mr        r4, r25
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x5555
	  lfs       f2, 0x8(r1)
	  addi      r0, r3, 0x5556
	  lfs       f1, 0xC(r1)
	  mulhw     r3, r0, r28
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  rlwinm    r0,r3,1,31,31
	  stfs      f0, 0x28(r1)
	  add       r0, r3, r0
	  mulli     r0, r0, 0x3
	  sub.      r0, r28, r0
	  beq-      .loc_0x330
	  bl        -0x2A50DC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x94(r1)
	  lfd       f3, 0x748(r2)
	  stw       r0, 0x90(r1)
	  lfs       f1, 0x730(r2)
	  lfd       f2, 0x90(r1)
	  lfs       f0, 0x24(r1)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fnmsubs   f0, f19, f1, f0
	  stfs      f0, 0x24(r1)
	  b         .loc_0x364

	.loc_0x330:
	  bl        -0x2A5114
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x94(r1)
	  lfd       f3, 0x748(r2)
	  stw       r0, 0x90(r1)
	  lfs       f1, 0x730(r2)
	  lfd       f2, 0x90(r1)
	  lfs       f0, 0x24(r1)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmadds    f0, f19, f1, f0
	  stfs      f0, 0x24(r1)

	.loc_0x364:
	  mr        r3, r27
	  addi      r4, r1, 0x20
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x37C:
	  mr        r3, r27
	  mr        r4, r25
	  bl        0x1AE0
	  bl        -0x2A516C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x94(r1)
	  lfd       f2, 0x748(r2)
	  stw       r0, 0x90(r1)
	  lfs       f0, 0x730(r2)
	  lfd       f1, 0x90(r1)
	  lfs       f23, 0x38(r1)
	  fsubs     f1, f1, f2
	  fdivs     f18, f1, f0
	  bl        -0x2A5198
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x8C(r1)
	  lfs       f1, 0x738(r2)
	  stw       r0, 0x88(r1)
	  lfd       f4, 0x748(r2)
	  fmuls     f0, f1, f18
	  lfd       f3, 0x88(r1)
	  lfs       f2, 0x730(r2)
	  fsubs     f3, f3, f4
	  fdivs     f2, f3, f2
	  fmuls     f1, f1, f2
	  stfs      f1, 0x1A4(r27)
	  stfs      f23, 0x1A8(r27)
	  stfs      f0, 0x1AC(r27)

	.loc_0x3F4:
	  addi      r28, r28, 0x1

	.loc_0x3F8:
	  cmpw      r28, r23
	  blt+      .loc_0x164
	  psq_l     f31,0x198(r1),0,0
	  lfd       f31, 0x190(r1)
	  psq_l     f30,0x188(r1),0,0
	  lfd       f30, 0x180(r1)
	  psq_l     f29,0x178(r1),0,0
	  lfd       f29, 0x170(r1)
	  psq_l     f28,0x168(r1),0,0
	  lfd       f28, 0x160(r1)
	  psq_l     f27,0x158(r1),0,0
	  lfd       f27, 0x150(r1)
	  psq_l     f26,0x148(r1),0,0
	  lfd       f26, 0x140(r1)
	  psq_l     f25,0x138(r1),0,0
	  lfd       f25, 0x130(r1)
	  psq_l     f24,0x128(r1),0,0
	  lfd       f24, 0x120(r1)
	  psq_l     f23,0x118(r1),0,0
	  lfd       f23, 0x110(r1)
	  psq_l     f22,0x108(r1),0,0
	  lfd       f22, 0x100(r1)
	  psq_l     f21,0xF8(r1),0,0
	  lfd       f21, 0xF0(r1)
	  psq_l     f20,0xE8(r1),0,0
	  lfd       f20, 0xE0(r1)
	  psq_l     f19,0xD8(r1),0,0
	  lfd       f19, 0xD0(r1)
	  psq_l     f18,0xC8(r1),0,0
	  lfd       f18, 0xC0(r1)
	  lmw       r23, 0x9C(r1)
	  lwz       r0, 0x1A4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1A0
	  blr
	*/
}

} // namespace TamagoMushi
} // namespace Game
