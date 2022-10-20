#include "types.h"
#include "Game/gameGenerator.h"
#include "Game/MapMgr.h"
#include "Dolphin/rand.h"
#include "sysMath.h"
#include "Game/Creature.h"

namespace Game {

/*
 * --INFO--
 * Address:	80124778
 * Size:	00003C
 */
GenObject* makeObjectEnemy(void) { return new GenObjectEnemy; }

/*
 * --INFO--
 * Address:	801247B4
 * Size:	0000D0
 * Nearly matches; only mismatch is a misordered pair of epilogue instructions.
 * https://decomp.me/scratch/O7lwP
 * SOLVED: use true instead of 1
 */
GenObjectEnemy::GenObjectEnemy()
    : GenObject('teki', "object type", "“G‚ðƒZƒbƒg")
    , m_enemyID(EnemyTypeID::EnemyID_Pelplant)
    , m_spawnType(1)
    , m_tekiBirthType(0)
    , m_tekiNum(1)
    , m_appearRadius(100.0f)
    , m_direction(0)
    , m_enemySize(0)
    , m_otakaraItemCode(0)
    , m_enemyGenerator(nullptr)
    , _4C(false)
{
	createEnemyGenerator();
	_4C |= true;
}

/*
 * --INFO--
 * Address:	80124884
 * Size:	00008C
 */
void GenObjectEnemy::initialise()
{
	GenObjectFactoryFactory* metafactory = GenObjectFactory::factory;

	// Make sure we don't create a new factory over the limit
	if (metafactory->m_count >= metafactory->m_limit) {
		return;
	}

	// Initialise the new factory with default teki parameters
	metafactory->m_factories[metafactory->m_count].m_typeID       = 'teki';
	metafactory->m_factories[metafactory->m_count].m_makeFunction = &makeObjectEnemy;
	metafactory->m_factories[metafactory->m_count].m_name         = "“G‚ð”­¶";
	metafactory->m_factories[metafactory->m_count].m_version      = '0005';
	metafactory->m_count++;
}

/*
 * --INFO--
 * Address:	80124910
 * Size:	000004
 */
void GenObjectEnemy::ramSaveParameters(Stream&) { }

/*
 * --INFO--
 * Address:	80124914
 * Size:	000004
 */
void GenObjectEnemy::ramLoadParameters(Stream&) { }

/*
 * --INFO--
 * Address:	80124918
 * Size:	0006B4
 */
Creature* GenObjectEnemy::generate(Game::Generator*)
{
	return nullptr; // placeholder
	                /*
	                stwu     r1, -0x1b0(r1)
	                mflr     r0
	                stw      r0, 0x1b4(r1)
	                stfd     f31, 0x1a0(r1)
	                psq_st   f31, 424(r1), 0, qr0
	                stfd     f30, 0x190(r1)
	                psq_st   f30, 408(r1), 0, qr0
	                stfd     f29, 0x180(r1)
	                psq_st   f29, 392(r1), 0, qr0
	                stfd     f28, 0x170(r1)
	                psq_st   f28, 376(r1), 0, qr0
	                stfd     f27, 0x160(r1)
	                psq_st   f27, 360(r1), 0, qr0
	                stfd     f26, 0x150(r1)
	                psq_st   f26, 344(r1), 0, qr0
	                stmw     r20, 0x120(r1)
	                lfs      f1, 0x94(r4)
	                mr       r27, r4
	                lfs      f0, 0xa0(r4)
	                mr       r26, r3
	                lfs      f3, 0x98(r27)
	                lis      r3, "__ct__10Vector3<f>Fv"@ha
	                fadds    f31, f1, f0
	                lfs      f2, 0xa4(r27)
	                lfs      f1, 0x9c(r27)
	                addi     r4, r3, "__ct__10Vector3<f>Fv"@l
	                lfs      f0, 0xa8(r27)
	                fadds    f30, f3, f2
	                lwz      r7, 0x74(r27)
	                fadds    f29, f1, f0
	                lha      r0, 0x2a(r26)
	                addi     r3, r1, 0x90
	                li       r5, 0
	                li       r6, 0xc
	                subf     r29, r7, r0
	                li       r7, 0xa
	                bl       __construct_array
	                lis      r4, "__ct__10Vector3<f>Fv"@ha
	                addi     r3, r1, 0x18
	                addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	                li       r5, 0
	                li       r6, 0xc
	                li       r7, 0xa
	                bl       __construct_array
	                addi     r31, r1, 0x90
	                li       r22, 0
	                mr       r28, r31
	                b        lbl_80124AA8
	            
	            lbl_801249D8:
	                lbz      r0, 0x28(r26)
	                cmplwi   r0, 1
	                bne      lbl_801249F4
	                stfs     f31, 0(r28)
	                stfs     f30, 4(r28)
	                stfs     f29, 8(r28)
	                b        lbl_80124AA0
	            
	            lbl_801249F4:
	                bl       rand
	                xoris    r3, r3, 0x8000
	                lis      r0, 0x4330
	                stw      r3, 0x10c(r1)
	                lfd      f3, lbl_80517EC8@sda21(r2)
	                stw      r0, 0x108(r1)
	                lfs      f1, lbl_80517EB0@sda21(r2)
	                lfd      f2, 0x108(r1)
	                lfs      f0, lbl_80517EB4@sda21(r2)
	                fsubs    f2, f2, f3
	                fdivs    f1, f2, f1
	                fmuls    f26, f0, f1
	                bl       rand
	                xoris    r3, r3, 0x8000
	                lis      r0, 0x4330
	                stw      r3, 0x114(r1)
	                fmr      f1, f26
	                lfd      f4, lbl_80517EC8@sda21(r2)
	                stw      r0, 0x110(r1)
	                lfs      f2, lbl_80517EB0@sda21(r2)
	                lfd      f3, 0x110(r1)
	                lfs      f0, 0x2c(r26)
	                fsubs    f3, f3, f4
	                fdivs    f2, f3, f2
	                fmuls    f28, f0, f2
	                bl       pikmin2_cosf__Ff
	                fmuls    f27, f28, f1
	                fmr      f1, f26
	                bl       pikmin2_sinf__Ff
	                fmuls    f1, f28, f1
	                lfs      f0, lbl_80517EAC@sda21(r2)
	                stfs     f1, 0(r28)
	                stfs     f0, 4(r28)
	                stfs     f27, 8(r28)
	                lfs      f0, 0(r28)
	                lfs      f1, 4(r28)
	                fadds    f0, f0, f31
	                lfs      f2, 8(r28)
	                fadds    f1, f1, f30
	                fadds    f2, f2, f29
	                stfs     f0, 0(r28)
	                stfs     f1, 4(r28)
	                stfs     f2, 8(r28)
	            
	            lbl_80124AA0:
	                addi     r28, r28, 0xc
	                addi     r22, r22, 1
	            
	            lbl_80124AA8:
	                cmpw     r22, r29
	                blt      lbl_801249D8
	                lfs      f1, 0x34(r26)
	                lfs      f0, lbl_80517EAC@sda21(r2)
	                lfs      f28, lbl_80517EB8@sda21(r2)
	                fcmpo    cr0, f1, f0
	                ble      lbl_80124AC8
	                fmr      f28, f1
	            
	            lbl_80124AC8:
	                li       r28, 0
	                addi     r30, r1, 0x18
	            
	            lbl_80124AD0:
	                cmpwi    r29, 0
	                li       r5, 0
	                ble      lbl_80124BA8
	                cmpwi    r29, 8
	                addi     r3, r29, -8
	                ble      lbl_80124B70
	                addi     r0, r3, 7
	                addi     r4, r1, 0x18
	                srwi     r0, r0, 3
	                lfs      f0, lbl_80517EAC@sda21(r2)
	                mtctr    r0
	                cmpwi    r3, 0
	                ble      lbl_80124B70
	            
	            lbl_80124B04:
	                stfs     f0, 8(r4)
	                addi     r5, r5, 8
	                stfs     f0, 4(r4)
	                stfs     f0, 0(r4)
	                stfs     f0, 0x14(r4)
	                stfs     f0, 0x10(r4)
	                stfs     f0, 0xc(r4)
	                stfs     f0, 0x20(r4)
	                stfs     f0, 0x1c(r4)
	                stfs     f0, 0x18(r4)
	                stfs     f0, 0x2c(r4)
	                stfs     f0, 0x28(r4)
	                stfs     f0, 0x24(r4)
	                stfs     f0, 0x38(r4)
	                stfs     f0, 0x34(r4)
	                stfs     f0, 0x30(r4)
	                stfs     f0, 0x44(r4)
	                stfs     f0, 0x40(r4)
	                stfs     f0, 0x3c(r4)
	                stfs     f0, 0x50(r4)
	                stfs     f0, 0x4c(r4)
	                stfs     f0, 0x48(r4)
	                stfs     f0, 0x5c(r4)
	                stfs     f0, 0x58(r4)
	                stfs     f0, 0x54(r4)
	                addi     r4, r4, 0x60
	                bdnz     lbl_80124B04
	            
	            lbl_80124B70:
	                mulli    r3, r5, 0xc
	                addi     r4, r1, 0x18
	                subf     r0, r5, r29
	                lfs      f0, lbl_80517EAC@sda21(r2)
	                add      r4, r4, r3
	                mtctr    r0
	                cmpw     r5, r29
	                bge      lbl_80124BA8
	            
	            lbl_80124B90:
	                stfs     f0, 8(r4)
	                addi     r5, r5, 1
	                stfs     f0, 4(r4)
	                stfs     f0, 0(r4)
	                addi     r4, r4, 0xc
	                bdnz     lbl_80124B90
	            
	            lbl_80124BA8:
	                mr       r23, r31
	                mr       r22, r30
	                li       r21, 0
	                b        lbl_80124CC0
	            
	            lbl_80124BB8:
	                addi     r20, r21, 1
	                addi     r25, r1, 0x90
	                mulli    r0, r20, 0xc
	                addi     r24, r1, 0x18
	                add      r25, r25, r0
	                add      r24, r24, r0
	                b        lbl_80124CAC
	            
	            lbl_80124BD4:
	                lfs      f2, 4(r23)
	                lfs      f0, 4(r25)
	                lfs      f1, 0(r23)
	                fsubs    f30, f2, f0
	                lfs      f0, 0(r25)
	                lfs      f2, 8(r23)
	                fsubs    f29, f1, f0
	                lfs      f1, 8(r25)
	                fmuls    f0, f30, f30
	                fsubs    f31, f2, f1
	                fmadds   f0, f29, f29, f0
	                fmadds   f26, f31, f31, f0
	                fmr      f1, f26
	                bl       pikmin2_sqrtf__Ff
	                fmr      f27, f1
	                fcmpo    cr0, f27, f28
	                bge      lbl_80124CA0
	                fmr      f1, f26
	                bl       pikmin2_sqrtf__Ff
	                lfs      f0, lbl_80517EAC@sda21(r2)
	                fcmpo    cr0, f1, f0
	                ble      lbl_80124C40
	                lfs      f0, lbl_80517EBC@sda21(r2)
	                fdivs    f0, f0, f1
	                fmuls    f29, f29, f0
	                fmuls    f30, f30, f0
	                fmuls    f31, f31, f0
	            
	            lbl_80124C40:
	                fsubs    f1, f28, f27
	                lfs      f2, lbl_80517EC0@sda21(r2)
	                lfs      f0, 0(r22)
	                fmuls    f1, f2, f1
	                fmuls    f29, f29, f1
	                fmuls    f30, f30, f1
	                fmuls    f31, f31, f1
	                fadds    f0, f0, f29
	                stfs     f0, 0(r22)
	                lfs      f0, 4(r22)
	                fadds    f0, f0, f30
	                stfs     f0, 4(r22)
	                lfs      f0, 8(r22)
	                fadds    f0, f0, f31
	                stfs     f0, 8(r22)
	                lfs      f0, 0(r24)
	                fsubs    f0, f0, f29
	                stfs     f0, 0(r24)
	                lfs      f0, 4(r24)
	                fsubs    f0, f0, f30
	                stfs     f0, 4(r24)
	                lfs      f0, 8(r24)
	                fsubs    f0, f0, f31
	                stfs     f0, 8(r24)
	            
	            lbl_80124CA0:
	                addi     r25, r25, 0xc
	                addi     r24, r24, 0xc
	                addi     r20, r20, 1
	            
	            lbl_80124CAC:
	                cmpw     r20, r29
	                blt      lbl_80124BD4
	                addi     r23, r23, 0xc
	                addi     r22, r22, 0xc
	                addi     r21, r21, 1
	            
	            lbl_80124CC0:
	                cmpw     r21, r29
	                blt      lbl_80124BB8
	                cmpwi    r29, 0
	                li       r6, 0
	                ble      lbl_80124EF0
	                cmpwi    r29, 8
	                addi     r3, r29, -8
	                ble      lbl_80124E8C
	                addi     r0, r3, 7
	                mr       r4, r30
	                srwi     r0, r0, 3
	                mr       r5, r31
	                mtctr    r0
	                cmpwi    r3, 0
	                ble      lbl_80124E8C
	            
	            lbl_80124CFC:
	                lfs      f1, 0(r5)
	                addi     r6, r6, 8
	                lfs      f0, 0(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0(r5)
	                lfs      f1, 4(r5)
	                lfs      f0, 4(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 4(r5)
	                lfs      f1, 8(r5)
	                lfs      f0, 8(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 8(r5)
	                lfs      f1, 0xc(r5)
	                lfs      f0, 0xc(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0xc(r5)
	                lfs      f1, 0x10(r5)
	                lfs      f0, 0x10(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x10(r5)
	                lfs      f1, 0x14(r5)
	                lfs      f0, 0x14(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x14(r5)
	                lfs      f1, 0x18(r5)
	                lfs      f0, 0x18(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x18(r5)
	                lfs      f1, 0x1c(r5)
	                lfs      f0, 0x1c(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x1c(r5)
	                lfs      f1, 0x20(r5)
	                lfs      f0, 0x20(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x20(r5)
	                lfs      f1, 0x24(r5)
	                lfs      f0, 0x24(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x24(r5)
	                lfs      f1, 0x28(r5)
	                lfs      f0, 0x28(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x28(r5)
	                lfs      f1, 0x2c(r5)
	                lfs      f0, 0x2c(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x2c(r5)
	                lfs      f1, 0x30(r5)
	                lfs      f0, 0x30(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x30(r5)
	                lfs      f1, 0x34(r5)
	                lfs      f0, 0x34(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x34(r5)
	                lfs      f1, 0x38(r5)
	                lfs      f0, 0x38(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x38(r5)
	                lfs      f1, 0x3c(r5)
	                lfs      f0, 0x3c(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x3c(r5)
	                lfs      f1, 0x40(r5)
	                lfs      f0, 0x40(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x40(r5)
	                lfs      f1, 0x44(r5)
	                lfs      f0, 0x44(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x44(r5)
	                lfs      f1, 0x48(r5)
	                lfs      f0, 0x48(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x48(r5)
	                lfs      f1, 0x4c(r5)
	                lfs      f0, 0x4c(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x4c(r5)
	                lfs      f1, 0x50(r5)
	                lfs      f0, 0x50(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x50(r5)
	                lfs      f1, 0x54(r5)
	                lfs      f0, 0x54(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x54(r5)
	                lfs      f1, 0x58(r5)
	                lfs      f0, 0x58(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 0x58(r5)
	                lfs      f0, 0x5c(r4)
	                addi     r4, r4, 0x60
	                lfs      f1, 0x5c(r5)
	                fadds    f0, f1, f0
	                stfs     f0, 0x5c(r5)
	                addi     r5, r5, 0x60
	                bdnz     lbl_80124CFC
	            
	            lbl_80124E8C:
	                mulli    r5, r6, 0xc
	                addi     r3, r1, 0x18
	                addi     r4, r1, 0x90
	                subf     r0, r6, r29
	                add      r3, r3, r5
	                add      r4, r4, r5
	                mtctr    r0
	                cmpw     r6, r29
	                bge      lbl_80124EF0
	            
	            lbl_80124EB0:
	                lfs      f2, 0(r4)
	                addi     r6, r6, 1
	                lfs      f0, 0(r3)
	                lfs      f1, 4(r3)
	                fadds    f2, f2, f0
	                lfs      f0, 8(r3)
	                addi     r3, r3, 0xc
	                stfs     f2, 0(r4)
	                lfs      f2, 4(r4)
	                fadds    f1, f2, f1
	                stfs     f1, 4(r4)
	                lfs      f1, 8(r4)
	                fadds    f0, f1, f0
	                stfs     f0, 8(r4)
	                addi     r4, r4, 0xc
	                bdnz     lbl_80124EB0
	            
	            lbl_80124EF0:
	                addi     r28, r28, 1
	                cmpwi    r28, 5
	                blt      lbl_80124AD0
	                lis      r4, __vt__Q24Game15CreatureInitArg@ha
	                lis      r3, __vt__Q24Game6GenArg@ha
	                li       r20, 0
	                addi     r30, r4, __vt__Q24Game15CreatureInitArg@l
	                addi     r28, r3, __vt__Q24Game6GenArg@l
	                b        lbl_80124F7C
	            
	            lbl_80124F14:
	                lwz      r3, mapMgr__4Game@sda21(r13)
	                cmplwi   r3, 0
	                beq      lbl_80124F38
	                lwz      r12, 4(r3)
	                mr       r4, r31
	                lwz      r12, 0x28(r12)
	                mtctr    r12
	                bctrl
	                stfs     f1, 4(r31)
	            
	            lbl_80124F38:
	                stw      r30, 8(r1)
	                mr       r3, r26
	                lfs      f2, 0(r31)
	                addi     r4, r1, 8
	                lfs      f1, 4(r31)
	                lfs      f0, 8(r31)
	                stw      r28, 8(r1)
	                stfs     f2, 0xc(r1)
	                stfs     f1, 0x10(r1)
	                stfs     f0, 0x14(r1)
	                lwz      r12, 0xc(r26)
	                lwz      r12, 0x34(r12)
	                mtctr    r12
	                bctrl
	                stw      r27, 0xc4(r3)
	                addi     r31, r31, 0xc
	                addi     r20, r20, 1
	            
	            lbl_80124F7C:
	                cmpw     r20, r29
	                blt      lbl_80124F14
	                li       r3, 0
	                psq_l    f31, 424(r1), 0, qr0
	                lfd      f31, 0x1a0(r1)
	                psq_l    f30, 408(r1), 0, qr0
	                lfd      f30, 0x190(r1)
	                psq_l    f29, 392(r1), 0, qr0
	                lfd      f29, 0x180(r1)
	                psq_l    f28, 376(r1), 0, qr0
	                lfd      f28, 0x170(r1)
	                psq_l    f27, 360(r1), 0, qr0
	                lfd      f27, 0x160(r1)
	                psq_l    f26, 344(r1), 0, qr0
	                lfd      f26, 0x150(r1)
	                lmw      r20, 0x120(r1)
	                lwz      r0, 0x1b4(r1)
	                mtlr     r0
	                addi     r1, r1, 0x1b0
	                blr
	                */
}

/*
 * --INFO--
 * Address:	80124FCC
 * Size:	0000E0
 */
Creature* GenObjectEnemy::birth(Game::GenArg*)
{
	return nullptr; // placeholder
	                /*
	                stwu     r1, -0x50(r1)
	                mflr     r0
	                stw      r0, 0x54(r1)
	                stw      r31, 0x4c(r1)
	                mr       r31, r4
	                stw      r30, 0x48(r1)
	                mr       r30, r3
	                lwz      r12, 0xc(r3)
	                lwz      r12, 0x24(r12)
	                mtctr    r12
	                bctrl
	                addi     r3, r1, 8
	                bl       __ct__Q24Game13EnemyBirthArgFv
	                lfs      f0, 4(r31)
	                addi     r5, r1, 8
	                lfs      f1, lbl_80517ED4@sda21(r2)
	                stfs     f0, 8(r1)
	                lfs      f2, lbl_80517ED0@sda21(r2)
	                lfs      f0, 8(r31)
	                lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	                stfs     f0, 0xc(r1)
	                lfs      f0, 0xc(r31)
	                stfs     f0, 0x10(r1)
	                lfs      f0, 0x30(r30)
	                fmuls    f0, f1, f0
	                fmuls    f0, f2, f0
	                stfs     f0, 0x14(r1)
	                lbz      r0, 0x29(r30)
	                stb      r0, 0x18(r1)
	                lwz      r0, 0x48(r30)
	                stw      r0, 0x1c(r1)
	                lha      r0, 0x38(r30)
	                sth      r0, 0x20(r1)
	                lbz      r0, 0x3c(r30)
	                stb      r0, 0x24(r1)
	                lbz      r0, 0x3d(r30)
	                stb      r0, 0x25(r1)
	                lbz      r0, 0x3e(r30)
	                stb      r0, 0x26(r1)
	                lbz      r0, 0x3f(r30)
	                stb      r0, 0x27(r1)
	                lfs      f0, 0x40(r30)
	                stfs     f0, 0x28(r1)
	                lwz      r4, 0x24(r30)
	                bl       birth__Q24Game15GeneralEnemyMgrFiRQ24Game13EnemyBirthArg
	                or.      r31, r3, r3
	                beq      lbl_80125090
	                li       r4, 0
	                bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	            
	            lbl_80125090:
	                lwz      r0, 0x54(r1)
	                mr       r3, r31
	                lwz      r31, 0x4c(r1)
	                lwz      r30, 0x48(r1)
	                mtlr     r0
	                addi     r1, r1, 0x50
	                blr
	                */
}

/*
 * --INFO--
 * Address:	801250AC
 * Size:	000218
 */
void GenObjectEnemy::doWrite(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8047B750@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r5, lbl_8047B750@l
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r4
	mr       r3, r29
	lwz      r4, 0x414(r4)
	bl       textWriteTab__6StreamFi
	lwz      r0, 0x24(r30)
	mr       r3, r29
	clrlwi   r0, r0, 0x10
	extsh    r4, r0
	bl       writeShort__6StreamFs
	mr       r3, r29
	addi     r4, r31, 0x30
	addi     r5, r2, lbl_80517ED8@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lbz      r4, 0x29(r30)
	mr       r3, r29
	bl       writeByte__6StreamFUc
	mr       r3, r29
	addi     r4, r31, 0x30
	addi     r5, r31, 0x3c
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lha      r0, 0x2a(r30)
	mr       r3, r29
	clrlwi   r0, r0, 0x10
	extsh    r4, r0
	bl       writeShort__6StreamFs
	mr       r3, r29
	addi     r4, r31, 0x30
	addi     r5, r31, 0x4c
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lfs      f1, 0x30(r30)
	mr       r3, r29
	bl       writeFloat__6StreamFf
	mr       r3, r29
	addi     r4, r31, 0x30
	addi     r5, r31, 0x58
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lbz      r4, 0x28(r30)
	mr       r3, r29
	bl       writeByte__6StreamFUc
	mr       r3, r29
	addi     r4, r31, 0x30
	addi     r5, r31, 0x68
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lfs      f1, 0x2c(r30)
	mr       r3, r29
	bl       writeFloat__6StreamFf
	mr       r3, r29
	addi     r4, r31, 0x30
	addi     r5, r31, 0x7c
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lfs      f1, 0x34(r30)
	mr       r3, r29
	bl       writeFloat__6StreamFf
	mr       r3, r29
	addi     r4, r31, 0x30
	addi     r5, r31, 0x8c
	crclr    6
	bl       textWriteText__6StreamFPce
	mr       r4, r29
	addi     r3, r30, 0x38
	bl       write__Q34Game9PelletMgr15OtakaraItemCodeFR6Stream
	addi     r3, r30, 0x3c
	mr       r4, r29
	lwz      r12, 0x44(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r30, 0x48(r30)
	cmplwi   r30, 0
	beq      lbl_801252A8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r30, 0x18
	bl       __as__4ID32FUl
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	mr       r4, r29
	addi     r3, r30, 0x18
	bl       write__4ID32FR6Stream
	mr       r3, r29
	addi     r4, r31, 0x98
	crclr    6
	bl       textWriteText__6StreamFPce
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801252A8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801252C4
 * Size:	000004
 */
void EnemyGeneratorBase::doWrite(Stream&) { }

/*
 * --INFO--
 * Address:	801252C8
 * Size:	00000C
 */
u32 EnemyGeneratorBase::getLatestVersion()
{
	return '????';
	/*
	lis      r3, 0x3F3F3F3F@ha
	addi     r3, r3, 0x3F3F3F3F@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801252D4
 * Size:	0001E4
 */
void GenObjectEnemy::doRead(Stream&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	li       r5, 0
	lfs      f1, lbl_80517EAC@sda21(r2)
	stw      r0, 0x44(r1)
	li       r0, 1
	lfs      f0, lbl_80517EA8@sda21(r2)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r29, r4
	stw      r5, 0x24(r3)
	sth      r0, 0x2a(r3)
	stb      r5, 0x29(r3)
	stfs     f1, 0x30(r3)
	stb      r0, 0x28(r3)
	stfs     f0, 0x2c(r3)
	stfs     f1, 0x34(r3)
	lwz      r12, 0xc(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r31)
	cmplw    r0, r3
	bne      lbl_80125490
	mr       r3, r29
	bl       readShort__6StreamFv
	clrlwi   r0, r3, 0x10
	mr       r3, r29
	stw      r0, 0x24(r31)
	bl       readByte__6StreamFv
	stb      r3, 0x29(r31)
	mr       r3, r29
	bl       readShort__6StreamFv
	sth      r3, 0x2a(r31)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x30(r31)
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x28(r31)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x2c(r31)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x34(r31)
	mr       r4, r29
	addi     r3, r31, 0x38
	bl       read__Q34Game9PelletMgr15OtakaraItemCodeFR6Stream
	addi     r3, r31, 0x3c
	mr       r4, r29
	lwz      r12, 0x44(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createEnemyGenerator__Q24Game14GenObjectEnemyFv
	lwz      r30, 0x48(r31)
	cmplwi   r30, 0
	beq      lbl_801253F0
	mr       r4, r29
	addi     r3, r30, 0x18
	bl       read__4ID32FR6Stream
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_801253F0:
	lwz      r3, pelletMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8012549C
	lis      r4, __vt__Q24Game15CreatureInitArg@ha
	li       r8, 0
	addi     r5, r4, __vt__Q24Game15CreatureInitArg@l
	li       r0, -1
	lis      r4, __vt__Q24Game13PelletInitArg@ha
	stw      r5, 8(r1)
	addi     r4, r4, __vt__Q24Game13PelletInitArg@l
	li       r7, 0xff
	li       r6, 1
	stw      r4, 8(r1)
	addi     r4, r1, 8
	addi     r5, r31, 0x38
	stb      r8, 0x24(r1)
	sth      r8, 0x1c(r1)
	stb      r7, 0x1e(r1)
	stw      r8, 0x20(r1)
	stb      r8, 0x1f(r1)
	stb      r6, 0xc(r1)
	stb      r8, 0x25(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x28(r1)
	stb      r8, 0x26(r1)
	stb      r8, 0x27(r1)
	bl
makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgRQ34Game9PelletMgr15OtakaraItemCode
	clrlwi.  r0, r3, 0x18
	beq      lbl_8012549C
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 8
	bl       setUse__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_80125484
	addi     r3, r1, 8
	bl       entry__Q24Game17PelletBirthBufferFRQ24Game13PelletInitArg
	b        lbl_8012549C

lbl_80125484:
	li       r0, 0
	sth      r0, 0x38(r31)
	b        lbl_8012549C

lbl_80125490:
	mr       r3, r31
	mr       r4, r29
	bl       doReadOldVersion__Q24Game14GenObjectEnemyFR6Stream

lbl_8012549C:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	801254B8
 * Size:	000004
 */
void EnemyGeneratorBase::doRead(Stream&) { }

/*
 * --INFO--
 * Address:	801254BC
 * Size:	000470
 */
void GenObjectEnemy::doReadOldVersion(Stream&)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	mr       r31, r3
	lis      r3, 0x30303032@ha
	stw      r30, 0x68(r1)
	addi     r0, r3, 0x30303032@l
	stw      r29, 0x64(r1)
	mr       r29, r4
	lwz      r5, 0x14(r31)
	cmpw     r5, r0
	beq      lbl_801255CC
	bge      lbl_80125508
	addi     r0, r3, 0x3030
	cmpw     r5, r0
	beq      lbl_8012551C
	bge      lbl_80125530
	b        lbl_80125910

lbl_80125508:
	addi     r0, r3, 0x3034
	cmpw     r5, r0
	beq      lbl_801257C4
	bge      lbl_80125910
	b        lbl_80125674

lbl_8012551C:
	mr       r3, r29
	bl       readShort__6StreamFv
	clrlwi   r0, r3, 0x10
	stw      r0, 0x24(r31)
	b        lbl_80125910

lbl_80125530:
	mr       r3, r29
	bl       readShort__6StreamFv
	clrlwi   r0, r3, 0x10
	mr       r3, r29
	stw      r0, 0x24(r31)
	bl       readShort__6StreamFv
	sth      r3, 0x2a(r31)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x30(r31)
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x28(r31)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x2c(r31)
	mr       r3, r31
	bl       createEnemyGenerator__Q24Game14GenObjectEnemyFv
	lwz      r30, 0x48(r31)
	cmplwi   r30, 0
	beq      lbl_801255A8
	mr       r4, r29
	addi     r3, r30, 0x18
	bl       read__4ID32FR6Stream
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_801255A8:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80125910
	lha      r0, 0x2a(r31)
	li       r6, 0
	lwz      r4, 0x24(r31)
	clrlwi   r5, r0, 0x18
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy
	b        lbl_80125910

lbl_801255CC:
	mr       r3, r29
	bl       readShort__6StreamFv
	clrlwi   r0, r3, 0x10
	mr       r3, r29
	stw      r0, 0x24(r31)
	bl       readShort__6StreamFv
	sth      r3, 0x2a(r31)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x30(r31)
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x28(r31)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x2c(r31)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x34(r31)
	mr       r3, r31
	bl       createEnemyGenerator__Q24Game14GenObjectEnemyFv
	lwz      r30, 0x48(r31)
	cmplwi   r30, 0
	beq      lbl_80125650
	mr       r4, r29
	addi     r3, r30, 0x18
	bl       read__4ID32FR6Stream
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80125650:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80125910
	lha      r0, 0x2a(r31)
	li       r6, 0
	lwz      r4, 0x24(r31)
	clrlwi   r5, r0, 0x18
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy
	b        lbl_80125910

lbl_80125674:
	mr       r3, r29
	bl       readShort__6StreamFv
	clrlwi   r0, r3, 0x10
	mr       r3, r29
	stw      r0, 0x24(r31)
	bl       readShort__6StreamFv
	sth      r3, 0x2a(r31)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x30(r31)
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x28(r31)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x2c(r31)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x34(r31)
	mr       r4, r29
	addi     r3, r31, 0x38
	bl       read__Q34Game9PelletMgr15OtakaraItemCodeFR6Stream
	mr       r3, r31
	bl       createEnemyGenerator__Q24Game14GenObjectEnemyFv
	lwz      r30, 0x48(r31)
	cmplwi   r30, 0
	beq      lbl_80125704
	mr       r4, r29
	addi     r3, r30, 0x18
	bl       read__4ID32FR6Stream
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80125704:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80125724
	lha      r0, 0x2a(r31)
	li       r6, 0
	lwz      r4, 0x24(r31)
	clrlwi   r5, r0, 0x18
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy

lbl_80125724:
	lwz      r3, pelletMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80125910
	lis      r4, __vt__Q24Game15CreatureInitArg@ha
	li       r8, 0
	addi     r5, r4, __vt__Q24Game15CreatureInitArg@l
	li       r0, -1
	lis      r4, __vt__Q24Game13PelletInitArg@ha
	stw      r5, 0x30(r1)
	addi     r4, r4, __vt__Q24Game13PelletInitArg@l
	li       r7, 0xff
	li       r6, 1
	stw      r4, 0x30(r1)
	addi     r4, r1, 0x30
	addi     r5, r31, 0x38
	stb      r8, 0x4c(r1)
	sth      r8, 0x44(r1)
	stb      r7, 0x46(r1)
	stw      r8, 0x48(r1)
	stb      r8, 0x47(r1)
	stb      r6, 0x34(r1)
	stb      r8, 0x4d(r1)
	stw      r0, 0x54(r1)
	stw      r0, 0x50(r1)
	stb      r8, 0x4e(r1)
	stb      r8, 0x4f(r1)
	bl
makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgRQ34Game9PelletMgr15OtakaraItemCode
	clrlwi.  r0, r3, 0x18
	beq      lbl_80125910
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x30
	bl       setUse__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_801257B8
	addi     r3, r1, 0x30
	bl       entry__Q24Game17PelletBirthBufferFRQ24Game13PelletInitArg
	b        lbl_80125910

lbl_801257B8:
	li       r0, 0
	sth      r0, 0x38(r31)
	b        lbl_80125910

lbl_801257C4:
	mr       r3, r29
	bl       readShort__6StreamFv
	clrlwi   r3, r3, 0x10
	li       r0, 0
	stw      r3, 0x24(r31)
	mr       r3, r29
	stb      r0, 0x29(r31)
	bl       readShort__6StreamFv
	sth      r3, 0x2a(r31)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x30(r31)
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0x28(r31)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x2c(r31)
	mr       r3, r29
	bl       readFloat__6StreamFv
	stfs     f1, 0x34(r31)
	mr       r4, r29
	addi     r3, r31, 0x38
	bl       read__Q34Game9PelletMgr15OtakaraItemCodeFR6Stream
	addi     r3, r31, 0x3c
	mr       r4, r29
	lwz      r12, 0x44(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createEnemyGenerator__Q24Game14GenObjectEnemyFv
	lwz      r30, 0x48(r31)
	cmplwi   r30, 0
	beq      lbl_80125874
	mr       r4, r29
	addi     r3, r30, 0x18
	bl       read__4ID32FR6Stream
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80125874:
	lwz      r3, pelletMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80125910
	lis      r4, __vt__Q24Game15CreatureInitArg@ha
	li       r8, 0
	addi     r5, r4, __vt__Q24Game15CreatureInitArg@l
	li       r0, -1
	lis      r4, __vt__Q24Game13PelletInitArg@ha
	stw      r5, 8(r1)
	addi     r4, r4, __vt__Q24Game13PelletInitArg@l
	li       r7, 0xff
	li       r6, 1
	stw      r4, 8(r1)
	addi     r4, r1, 8
	addi     r5, r31, 0x38
	stb      r8, 0x24(r1)
	sth      r8, 0x1c(r1)
	stb      r7, 0x1e(r1)
	stw      r8, 0x20(r1)
	stb      r8, 0x1f(r1)
	stb      r6, 0xc(r1)
	stb      r8, 0x25(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x28(r1)
	stb      r8, 0x26(r1)
	stb      r8, 0x27(r1)
	bl
makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgRQ34Game9PelletMgr15OtakaraItemCode
	clrlwi.  r0, r3, 0x18
	beq      lbl_80125910
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 8
	bl       setUse__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_80125908
	addi     r3, r1, 8
	bl       entry__Q24Game17PelletBirthBufferFRQ24Game13PelletInitArg
	b        lbl_80125910

lbl_80125908:
	li       r0, 0
	sth      r0, 0x38(r31)

lbl_80125910:
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012592C
 * Size:	000E38
 */
void GenObjectEnemy::createEnemyGenerator()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, lbl_8047B750@ha
	lwz      r0, 0x24(r30)
	addi     r31, r3, lbl_8047B750@l
	cmplwi   r0, 0x65
	bgt      lbl_80126728
	lis      r3, lbl_804ADA18@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804ADA18@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80125970

lbl_80125970:
	li       r3, 0x28
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125988
	bl       __ct__Q34Game8Pelplant9GeneratorFv
	mr       r0, r3

lbl_80125988:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125990

lbl_80125990:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801259AC
	addi     r4, r31, 0xa8
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801259AC:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801259B4

lbl_801259B4:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801259D0
	addi     r4, r31, 0xb8
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801259D0:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801259D8

lbl_801259D8:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801259F4
	addi     r4, r31, 0xc8
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801259F4:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801259FC

lbl_801259FC:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125A18
	addi     r4, r31, 0xd8
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125A18:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125A20

lbl_80125A20:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125A3C
	addi     r4, r31, 0xe8
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125A3C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125A44

lbl_80125A44:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125A60
	addi     r4, r31, 0xf8
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125A60:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125A68

lbl_80125A68:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125A84
	addi     r4, r31, 0x108
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125A84:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125A8C

lbl_80125A8C:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125AA8
	addi     r4, r31, 0x118
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125AA8:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125AB0

lbl_80125AB0:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125ACC
	addi     r4, r31, 0x128
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125ACC:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125AD4

lbl_80125AD4:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125AF0
	addi     r4, r31, 0x138
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125AF0:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125AF8

lbl_80125AF8:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125B14
	addi     r4, r31, 0x148
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125B14:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125B1C

lbl_80125B1C:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125B38
	addi     r4, r31, 0x158
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125B38:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125B40

lbl_80125B40:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125B5C
	addi     r4, r2, lbl_80517EE0@sda21
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125B5C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125B64

lbl_80125B64:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125B80
	addi     r4, r31, 0x164
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125B80:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125B88

lbl_80125B88:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125BA4
	addi     r4, r31, 0x174
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125BA4:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125BAC

lbl_80125BAC:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125BC8
	addi     r4, r31, 0x180
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125BC8:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125BD0

lbl_80125BD0:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125BEC
	addi     r4, r31, 0x18c
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125BEC:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125BF4

lbl_80125BF4:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125C10
	addi     r4, r31, 0x198
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125C10:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125C18

lbl_80125C18:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125C34
	addi     r4, r31, 0x1a4
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125C34:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125C3C

lbl_80125C3C:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125C58
	addi     r4, r31, 0x1b0
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125C58:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125C60

lbl_80125C60:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125C7C
	addi     r4, r31, 0x1bc
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125C7C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125C84

lbl_80125C84:
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125C9C
	bl       __ct__Q34Game7Qurione9GeneratorFv
	mr       r0, r3

lbl_80125C9C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125CA4

lbl_80125CA4:
	li       r3, 0x30
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125CBC
	bl       __ct__Q34Game4Rock9GeneratorFv
	mr       r0, r3

lbl_80125CBC:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125CC4

lbl_80125CC4:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125CE0
	addi     r4, r2, lbl_80517EE8@sda21
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125CE0:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125CE8

lbl_80125CE8:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125D04
	addi     r4, r31, 0x1c8
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125D04:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125D0C

lbl_80125D0C:
	li       r3, 0x28
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125D24
	bl       __ct__Q34Game8ElecHiba9GeneratorFv
	mr       r0, r3

lbl_80125D24:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125D2C

lbl_80125D2C:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125D48
	addi     r4, r31, 0x1d4
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125D48:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125D50

lbl_80125D50:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125D6C
	addi     r4, r31, 0x1e0
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125D6C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125D74

lbl_80125D74:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125D90
	addi     r4, r31, 0x1f0
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125D90:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125D98

lbl_80125D98:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125DB4
	addi     r4, r2, lbl_80517EF0@sda21
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125DB4:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125DBC

lbl_80125DBC:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125DD8
	addi     r4, r2, lbl_80517EF8@sda21
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125DD8:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125DE0

lbl_80125DE0:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125DFC
	addi     r4, r31, 0x204
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125DFC:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125E04

lbl_80125E04:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125E20
	addi     r4, r31, 0x210
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125E20:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125E28

lbl_80125E28:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125E44
	addi     r4, r31, 0x224
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125E44:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125E4C

lbl_80125E4C:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125E68
	addi     r4, r31, 0x238
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125E68:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125E70

lbl_80125E70:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125E8C
	addi     r4, r31, 0x24c
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125E8C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125E94

lbl_80125E94:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125EB0
	addi     r4, r31, 0x258
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125EB0:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125EB8

lbl_80125EB8:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125ED4
	addi     r4, r31, 0x268
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125ED4:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125EDC

lbl_80125EDC:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125EF8
	addi     r4, r31, 0x274
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125EF8:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125F00

lbl_80125F00:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125F1C
	addi     r4, r31, 0x284
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125F1C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125F24

lbl_80125F24:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125F40
	addi     r4, r31, 0x290
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125F40:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125F48

lbl_80125F48:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125F64
	addi     r4, r31, 0x2a0
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125F64:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125F6C

lbl_80125F6C:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125F88
	addi     r4, r31, 0x2ac
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125F88:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125F90

lbl_80125F90:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125FAC
	addi     r4, r31, 0x2bc
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125FAC:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125FB4

lbl_80125FB4:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125FD0
	addi     r4, r31, 0x2cc
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125FD0:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125FD8

lbl_80125FD8:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80125FF4
	addi     r4, r31, 0x2d8
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80125FF4:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80125FFC

lbl_80125FFC:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126018
	addi     r4, r2, lbl_80517F00@sda21
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126018:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126020

lbl_80126020:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8012603C
	addi     r4, r31, 0x2e4
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_8012603C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126044

lbl_80126044:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126060
	addi     r4, r31, 0x2f0
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126060:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126068

lbl_80126068:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126084
	addi     r4, r31, 0x300
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126084:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_8012608C

lbl_8012608C:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801260A8
	addi     r4, r31, 0x318
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801260A8:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801260B0

lbl_801260B0:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801260CC
	addi     r4, r31, 0x334
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801260CC:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801260D4

lbl_801260D4:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801260F0
	addi     r4, r31, 0x34c
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801260F0:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801260F8

lbl_801260F8:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126114
	addi     r4, r31, 0x368
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126114:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_8012611C

lbl_8012611C:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126138
	addi     r4, r31, 0x374
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126138:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126140

lbl_80126140:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8012615C
	addi     r4, r2, lbl_80517F08@sda21
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_8012615C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126164

lbl_80126164:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126180
	addi     r4, r31, 0x380
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126180:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126188

lbl_80126188:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801261A4
	addi     r4, r31, 0x390
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801261A4:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801261AC

lbl_801261AC:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801261C8
	addi     r4, r31, 0x3a0
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801261C8:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801261D0

lbl_801261D0:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801261EC
	addi     r4, r31, 0x3b0
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801261EC:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801261F4

lbl_801261F4:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126210
	addi     r4, r2, lbl_80517F10@sda21
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126210:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126218

lbl_80126218:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126234
	addi     r4, r31, 0x3c0
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126234:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_8012623C

lbl_8012623C:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126258
	addi     r4, r31, 0x3cc
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126258:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126260

lbl_80126260:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8012627C
	addi     r4, r31, 0x3e0
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_8012627C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126284

lbl_80126284:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801262A0
	addi     r4, r31, 0x3ec
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801262A0:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801262A8

lbl_801262A8:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801262C4
	addi     r4, r31, 0x400
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801262C4:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801262CC

lbl_801262CC:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801262E8
	addi     r4, r31, 0x40c
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801262E8:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801262F0

lbl_801262F0:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8012630C
	addi     r4, r31, 0x41c
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_8012630C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126314

lbl_80126314:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126330
	addi     r4, r31, 0x42c
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126330:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126338

lbl_80126338:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126354
	addi     r4, r31, 0x43c
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126354:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_8012635C

lbl_8012635C:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126378
	addi     r4, r31, 0x44c
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126378:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126380

lbl_80126380:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8012639C
	addi     r4, r31, 0x460
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_8012639C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801263A4

lbl_801263A4:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801263C0
	addi     r4, r31, 0x474
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801263C0:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801263C8

lbl_801263C8:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801263E4
	addi     r4, r2, lbl_80517F18@sda21
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801263E4:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801263EC

lbl_801263EC:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126408
	addi     r4, r31, 0x488
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126408:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126410

lbl_80126410:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8012642C
	addi     r4, r31, 0x494
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_8012642C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126434

lbl_80126434:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126450
	addi     r4, r31, 0x4a0
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126450:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126458

lbl_80126458:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126474
	addi     r4, r31, 0x4b4
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126474:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_8012647C

lbl_8012647C:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126498
	addi     r4, r31, 0x4c8
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126498:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801264A0

lbl_801264A0:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801264BC
	addi     r4, r31, 0x4d4
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801264BC:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801264C4

lbl_801264C4:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801264E0
	addi     r4, r31, 0x4e8
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801264E0:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801264E8

lbl_801264E8:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126504
	addi     r4, r31, 0x4f8
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126504:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_8012650C

lbl_8012650C:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126528
	addi     r4, r31, 0x504
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126528:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126530

lbl_80126530:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8012654C
	addi     r4, r31, 0x514
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_8012654C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126554

lbl_80126554:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126570
	addi     r4, r31, 0x520
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126570:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126578

lbl_80126578:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126594
	addi     r4, r31, 0x534
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126594:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_8012659C

lbl_8012659C:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801265B8
	addi     r4, r31, 0x548
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801265B8:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801265C0

lbl_801265C0:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801265DC
	addi     r4, r31, 0x55c
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801265DC:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801265E4

lbl_801265E4:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126600
	addi     r4, r31, 0x56c
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126600:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126608

lbl_80126608:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126624
	addi     r4, r31, 0x580
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126624:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_8012662C

lbl_8012662C:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126648
	addi     r4, r31, 0x58c
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126648:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126650

lbl_80126650:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8012666C
	addi     r4, r31, 0x59c
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_8012666C:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126674

lbl_80126674:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126690
	addi     r4, r31, 0x5b0
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126690:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126698

lbl_80126698:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801266B4
	addi     r4, r31, 0x5bc
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801266B4:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801266BC

lbl_801266BC:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801266D8
	addi     r4, r2, lbl_80517F20@sda21
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801266D8:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_801266E0

lbl_801266E0:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801266FC
	addi     r4, r31, 0x5cc
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_801266FC:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126704

lbl_80126704:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126720
	addi     r4, r31, 0x5dc
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126720:
	stw      r0, 0x48(r30)
	b        lbl_80126748
	.global  lbl_80126728

lbl_80126728:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80126744
	addi     r4, r2, lbl_80517F28@sda21
	bl       __ct__Q24Game18EnemyGeneratorBaseFPc
	mr       r0, r3

lbl_80126744:
	stw      r0, 0x48(r30)

lbl_80126748:
	lwz      r0, 0x14(r1)
	lwz      r3, 0x48(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80126764
 * Size:	00006C
 * Weak function. Matched.
 * EnemyGeneratorBase::EnemyGeneratorBase(char*)
 */

/*
 * --INFO--
 * Address:	801267D0
 * Size:	00002C
 */
J3DModelData* GenObjectEnemy::getShape()
{
	return nullptr; // placeholder
	                /*
	                stwu     r1, -0x10(r1)
	                mflr     r0
	                mr       r4, r3
	                stw      r0, 0x14(r1)
	                lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	                lwz      r4, 0x24(r4)
	                bl       getJ3DModelData__Q24Game15GeneralEnemyMgrFi
	                lwz      r0, 0x14(r1)
	                mtlr     r0
	                addi     r1, r1, 0x10
	                blr
	                */
}

/*
 * --INFO--
 * Address:	801267FC
 * Size:	000040
 */
void GenObjectEnemy::updateUseList(Game::Generator*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	stw      r0, 0x14(r1)
	lwz      r4, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_8012682C
	lha      r0, 0x2a(r6)
	mr       r3, r4
	lwz      r4, 0x24(r6)
	clrlwi   r5, r0, 0x18
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy

lbl_8012682C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012683C
 * Size:	00031C
 */
void GenObjectEnemy::render(Graphics&, Game::Generator*)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stw      r31, 0xcc(r1)
	mr       r31, r5
	stw      r30, 0xc8(r1)
	mr       r30, r4
	stw      r29, 0xc4(r1)
	mr       r29, r3
	lbz      r0, 0x4c(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80126B3C
	lfs      f1, 0x9c(r31)
	mr       r3, r30
	lfs      f0, 0xa8(r31)
	li       r4, 0
	lfs      f3, 0x98(r31)
	lfs      f2, 0xa4(r31)
	fadds    f4, f1, f0
	lfs      f1, 0x94(r31)
	lfs      f0, 0xa0(r31)
	fadds    f2, f3, f2
	fadds    f0, f1, f0
	stfs     f4, 0x40(r1)
	stfs     f2, 0x3c(r1)
	stfs     f0, 0x38(r1)
	bl       initPrimDraw__8GraphicsFP7Matrixf
	li       r3, 0x12
	li       r4, 0
	bl       GXSetLineWidth
	li       r0, 0x73
	li       r6, 0x10
	stb      r0, 0x84(r30)
	li       r0, 0xff
	lfs      f2, lbl_80517ED4@sda21(r2)
	addi     r3, r1, 0x90
	stb      r6, 0x85(r30)
	addi     r4, r1, 0x38
	lfs      f3, lbl_80517ED0@sda21(r2)
	addi     r5, r1, 0x2c
	stb      r6, 0x86(r30)
	lfs      f0, lbl_80517EAC@sda21(r2)
	stb      r0, 0x87(r30)
	lfs      f1, 0x30(r29)
	fmuls    f1, f2, f1
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x34(r1)
	fmuls    f0, f3, f1
	stfs     f0, 0x30(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lwz      r3, 0x25c(r30)
	li       r4, 0
	bl       getMatrix__8ViewportFb
	lwz      r3, 0x25c(r30)
	li       r4, 0
	bl       getMatrix__8ViewportFb
	addi     r4, r1, 0x90
	addi     r5, r1, 0x60
	bl       PSMTXConcat
	addi     r3, r1, 0x60
	li       r4, 0
	bl       GXLoadPosMtxImm
	lfs      f2, lbl_80517EAC@sda21(r2)
	mr       r3, r30
	lfs      f1, lbl_80517EA8@sda21(r2)
	addi     r4, r1, 0x20
	lfs      f0, lbl_80517F30@sda21(r2)
	addi     r5, r1, 0x14
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f2, 0x28(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "drawLine__8GraphicsFR10Vector3<f>R10Vector3<f>"
	lfs      f2, lbl_80517F34@sda21(r2)
	mr       r3, r30
	lfs      f1, lbl_80517EA8@sda21(r2)
	addi     r4, r1, 0x20
	lfs      f0, lbl_80517F38@sda21(r2)
	addi     r5, r1, 0x14
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "drawLine__8GraphicsFR10Vector3<f>R10Vector3<f>"
	lfs      f2, lbl_80517F3C@sda21(r2)
	mr       r3, r30
	lfs      f1, lbl_80517EA8@sda21(r2)
	addi     r4, r1, 0x20
	lfs      f0, lbl_80517F38@sda21(r2)
	addi     r5, r1, 0x14
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "drawLine__8GraphicsFR10Vector3<f>R10Vector3<f>"
	li       r3, 6
	li       r4, 0
	bl       GXSetLineWidth
	addi     r3, r1, 0x90
	addi     r4, r1, 0x38
	bl       "makeT__7MatrixfFR10Vector3<f>"
	lbz      r0, 0x28(r29)
	cmplwi   r0, 2
	bne      lbl_80126A04
	li       r5, 0xff
	li       r0, 0x9b
	stb      r5, 0x84(r30)
	mr       r3, r30
	addi     r4, r1, 0x90
	stb      r5, 0x85(r30)
	stb      r5, 0x86(r30)
	stb      r0, 0x87(r30)
	lfs      f1, 0x2c(r29)
	bl       drawSphere__8GraphicsFfP7Matrixf

lbl_80126A04:
	lfs      f0, lbl_80517EBC@sda21(r2)
	li       r7, 0
	li       r0, 0xff
	li       r6, 0x66
	lwz      r8, systemFont__9JFWSystem@sda21(r13)
	li       r5, 0x99
	stfs     f0, 0x54(r1)
	mr       r3, r30
	lfs      f0, lbl_80517EC0@sda21(r2)
	li       r4, 0
	stw      r8, 0x44(r1)
	stw      r7, 0x48(r1)
	stw      r7, 0x4c(r1)
	stw      r7, 0x50(r1)
	stb      r6, 0x58(r1)
	stb      r5, 0x59(r1)
	stb      r0, 0x5a(r1)
	stb      r0, 0x5b(r1)
	stb      r7, 0x5c(r1)
	stb      r6, 0x5d(r1)
	stb      r0, 0x5e(r1)
	stb      r0, 0x5f(r1)
	stfs     f0, 0x54(r1)
	bl       initPrimDraw__8GraphicsFP7Matrixf
	li       r7, 0x32
	li       r5, 0xff
	li       r6, 0x64
	li       r0, 0x96
	stb      r7, 0x58(r1)
	mr       r3, r30
	li       r4, 0
	stb      r6, 0x59(r1)
	stb      r5, 0x5a(r1)
	stb      r5, 0x5b(r1)
	stb      r7, 0x5c(r1)
	stb      r7, 0x5d(r1)
	stb      r0, 0x5e(r1)
	stb      r5, 0x5f(r1)
	bl       getViewport__8GraphicsFi
	mr       r4, r3
	mr       r3, r30
	bl       initPerspPrintf__8GraphicsFP8Viewport
	lfs      f1, 0x98(r31)
	lis      r3, gEnemyInfo__4Game@ha
	lfs      f0, 0xa4(r31)
	addi     r7, r3, gEnemyInfo__4Game@l
	lfs      f4, 0x9c(r31)
	mr       r3, r30
	lfs      f3, 0xa8(r31)
	fadds    f5, f1, f0
	lfs      f0, lbl_80517EA8@sda21(r2)
	addi     r4, r1, 0x44
	lfs      f2, 0x94(r31)
	fadds    f3, f4, f3
	lfs      f1, 0xa0(r31)
	fadds    f0, f5, f0
	addi     r5, r1, 8
	fadds    f1, f2, f1
	stfs     f5, 0xc(r1)
	addi     r6, r2, lbl_80517F40@sda21
	stfs     f3, 0x10(r1)
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	lwz      r0, 0x24(r29)
	lha      r8, 0x2a(r29)
	mulli    r0, r0, 0x34
	lwzx     r7, r7, r0
	crclr    6
	bl       "perspPrintf__8GraphicsFR15PerspPrintfInfoR10Vector3<f>Pce"
	lwz      r3, 0x48(r29)
	cmplwi   r3, 0
	beq      lbl_80126B3C
	lwz      r12, 0(r3)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80126B3C:
	lwz      r0, 0xd4(r1)
	lwz      r31, 0xcc(r1)
	lwz      r30, 0xc8(r1)
	lwz      r29, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80126B58
 * Size:	000004
 */
void EnemyGeneratorBase::draw(Graphics&, Game::Generator*) { }

/*
 * --INFO--
 * Address:	80126B5C
 * Size:	000060
 * EnemyGeneratorBase::~EnemyGeneratorBase()
 * Weak function.
 */
/*
 * --INFO--
 * Address:	80126BBC
 * Size:	000008
 */
u32 EnemyGeneratorBase::getInitialParam() { return 0x0; }

/*
 * --INFO--
 * Address:	80126BC4
 * Size:	000008
 */
const char* GenArg::getName()
{
	return nullptr; // placeholder
	                /*
	                addi     r3, r2, lbl_80517F48@sda21
	                blr
	                */
}

/*
 * --INFO--
 * Address:	80126BCC
 * Size:	000004
 */
void GenObject::update(Game::Generator*) { }

/*
 * --INFO--
 * Address:	80126BD0
 * Size:	000028
 */
void GenObject::generatorMakeMatrix(Matrixf&, Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	mr       r4, r5
	stw      r0, 0x14(r1)
	bl       "makeT__7MatrixfFR10Vector3<f>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80126BF8
 * Size:	000004
 */
void GenObject::getDebugInfo(char*) { }

/*
 * --INFO--
 * Address:	80126BFC
 * Size:	000004
 */
void GenBase::doEvent(unsigned long) { }
} // namespace Game
