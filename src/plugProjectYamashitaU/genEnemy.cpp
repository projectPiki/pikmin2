#include "Game/generalEnemyMgr.h"

#include "Game/Entities/Pelplant.h"
#include "Game/Entities/Qurione.h"
#include "Game/Entities/Rock.h"
#include "Game/Entities/ElecHiba.h"

namespace Game {

/*
 * --INFO--
 * Address:	80124778
 * Size:	00003C
 */
GenObject* makeObjectEnemy() { return new GenObjectEnemy; }

/*
 * --INFO--
 * Address:	801247B4
 * Size:	0000D0
 * Nearly matches; only mismatch is a misordered pair of epilogue instructions.
 * https://decomp.me/scratch/O7lwP
 * SOLVED: use true instead of 1
 */
GenObjectEnemy::GenObjectEnemy()
    : GenObject('teki', "object type", "敵をセット")
    , mEnemyID(EnemyTypeID::EnemyID_Pelplant)
    , mSpawnType(1)
    , mTekiBirthType(0)
    , mTekiNum(1)
    , mAppearRadius(100.0f)
    , mDirection(0)
    , mEnemySize(0)
    , mOtakaraItemCode(0)
    , mEnemyGenerator(nullptr)
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
	if (metafactory->mCount >= metafactory->mLimit) {
		return;
	}

	// Initialise the new factory with default teki parameters
	metafactory->mFactories[metafactory->mCount].mTypeID       = 'teki';
	metafactory->mFactories[metafactory->mCount].mMakeFunction = &makeObjectEnemy;
	metafactory->mFactories[metafactory->mCount].mName         = "敵を発生";
	metafactory->mFactories[metafactory->mCount].mVersion      = '0005';
	metafactory->mCount++;
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
Creature* GenObjectEnemy::generate(Game::Generator* generator)
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
u32 EnemyGeneratorBase::getLatestVersion() { return '????'; }

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

#define GENERATOR_CASE(id, name)                        \
	case id: {                                          \
		mEnemyGenerator = new EnemyGeneratorBase(name); \
		break;                                          \
	}

/*
 * --INFO--
 * Address:	8012592C
 * Size:	000E38
 * TODO: The EnemyGeneratorBase ctor shouldn't be inlined
 */
void GenObjectEnemy::createEnemyGenerator()
{
	switch (mEnemyID) {
	case EnemyTypeID::EnemyID_Pelplant:
		mEnemyGenerator = new Pelplant::Generator();
		break;

		GENERATOR_CASE(EnemyTypeID::EnemyID_Kochappy, "赤コチャッピー")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Chappy, "赤チャッピー")
		GENERATOR_CASE(EnemyTypeID::EnemyID_BluePom, "青ポンガシ草")
		GENERATOR_CASE(EnemyTypeID::EnemyID_RedPom, "赤ポンガシ草")
		GENERATOR_CASE(EnemyTypeID::EnemyID_YellowPom, "黄ポンガシ草")
		GENERATOR_CASE(EnemyTypeID::EnemyID_BlackPom, "黒ポンガシ草")
		GENERATOR_CASE(EnemyTypeID::EnemyID_WhitePom, "白ポンガシ草")
		GENERATOR_CASE(EnemyTypeID::EnemyID_RandPom, "ポポガシ草")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Kogane, "コガネ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Wealthy, "オオガネモチ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Fart, "ババコガネ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_UjiA, "ウジンコ♀")
		GENERATOR_CASE(EnemyTypeID::EnemyID_UjiB, "ウジンコ♂")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Tobi, "トビンコ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Armor, "ヨロイムシ")

	case EnemyTypeID::EnemyID_Qurione:
		mEnemyGenerator = new Qurione::Generator();
		break;

		GENERATOR_CASE(EnemyTypeID::EnemyID_Frog, "イモガエル")
		GENERATOR_CASE(EnemyTypeID::EnemyID_MaroFrog, "マロガエル")

	case EnemyTypeID::EnemyID_Rock:
		mEnemyGenerator = new Game::Rock::Generator();
		break;

		GENERATOR_CASE(EnemyTypeID::EnemyID_Hiba, "ヒバ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_GasHiba, "ガスヒバ")

	case EnemyTypeID::EnemyID_ElecHiba:
		mEnemyGenerator = new Game::ElecHiba::Generator();
		break;

		GENERATOR_CASE(EnemyTypeID::EnemyID_Sarai, "サライムシ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Tank, "ブタドックリ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Wtank, "ミズブタドックリ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Catfish, "ナマズ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Tadpole, "オタマ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_ElecBug, "デンキムシ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Mar, "フウセンドックリ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Queen, "クイーンチャッピー")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Baby, "ベビーチャッピー")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Demon, "オニサライ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_FireChappy, "ヤキチャッピー")
		GENERATOR_CASE(EnemyTypeID::EnemyID_SnakeCrow, "ヘビガラス")
		GENERATOR_CASE(EnemyTypeID::EnemyID_KumaChappy, "クマチャッピー")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Bomb, "バクダン")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Egg, "ハテナタマゴ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_PanModoki, "パンモドキ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_PanModokiNest, "パンモドキ巣")
		GENERATOR_CASE(EnemyTypeID::EnemyID_OoPanModoki, "大パンモドキ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Fuefuki, "フエフキ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_BlueChappy, "青チャッピー")
		GENERATOR_CASE(EnemyTypeID::EnemyID_YellowChappy, "黄チャッピー")
		GENERATOR_CASE(EnemyTypeID::EnemyID_BlueKochappy, "青コチャッピー")
		GENERATOR_CASE(EnemyTypeID::EnemyID_YellowKochappy, "黄コチャッピー")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Tanpopo, "タンポポ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Clover, "クローバー")
		GENERATOR_CASE(EnemyTypeID::EnemyID_HikariKinoko, "ヒカリキノコ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Ooinu_s, "おおいぬふぐり（小）")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Ooinu_l, "おおいぬふぐり（大）")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Wakame_s, "若芽（小）")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Wakame_l, "若芽（大）")
		GENERATOR_CASE(EnemyTypeID::EnemyID_KingChappy, "キングチャッピー")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Miulin, "ミウリン")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Hanachirashi, "フウセンハナチラシ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Damagumo, "ダマグモ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Kurage, "クラゲドックリ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_BombSarai, "バクダンサライ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_FireOtakara, "火オタカラムシ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_WaterOtakara, "水オタカラムシ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_GasOtakara, "ガスオタカラムシ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_ElecOtakara, "電気オタカラムシ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Jigumo, "ジグモ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Imomushi, "イモムシ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Houdai, "ホウダイダマグモ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_LeafChappy, "ハッパチャッピー")
		GENERATOR_CASE(EnemyTypeID::EnemyID_TamagoMushi, "タマゴムシ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_BigFoot, "オオアシダマグモ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_SnakeWhole, "ヘビガラス全身")
		GENERATOR_CASE(EnemyTypeID::EnemyID_UmiMushi, "ウミムシ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_OniKurage, "オニクラゲ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_BigTreasure, "オオオタカラムシ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Stone, "グリーンカブト幼虫")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Kabuto, "グリーンカブト幼虫")
		GENERATOR_CASE(EnemyTypeID::EnemyID_KumaKochappy, "クマコチャッピー")
		GENERATOR_CASE(EnemyTypeID::EnemyID_ShijimiChou, "シジミ蝶")
		GENERATOR_CASE(EnemyTypeID::EnemyID_MiniHoudai, "チビホウダイ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Sokkuri, "ソックリ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Tukushi, "つくし")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Watage, "わたげ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Hana, "ハナドックリ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_DaiodoRed, "赤ダイオード")
		GENERATOR_CASE(EnemyTypeID::EnemyID_DaiodoGreen, "青ダイオード")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Magaret, "マーガレット")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Nekojarashi, "ねこじゃらし")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Chiyogami, "千代紙")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Zenmai, "ぜんまい")
		GENERATOR_CASE(EnemyTypeID::EnemyID_KareOoinu_s, "枯れおおいぬふぐり（小）")
		GENERATOR_CASE(EnemyTypeID::EnemyID_KareOoinu_l, "枯れおおいぬふぐり（大）")
		GENERATOR_CASE(EnemyTypeID::EnemyID_BombOtakara, "爆弾オタカラムシ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_DangoMushi, "ダンゴムシ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Rkabuto, "レッドカブト幼虫")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Fkabuto, "固定カブト幼虫")
		GENERATOR_CASE(EnemyTypeID::EnemyID_FminiHoudai, "固定チビホウダイ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_Tyre, "黒い人タイヤ")
		GENERATOR_CASE(EnemyTypeID::EnemyID_BlackMan, "黒い人")
		GENERATOR_CASE(EnemyTypeID::EnemyID_UmiMushiBlind, "目なしウミムシ")
	default:
		mEnemyGenerator = new EnemyGeneratorBase("未登録");
		break;
	}
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
J3DModelData* GenObjectEnemy::getShape() { return generalEnemyMgr->getJ3DModelData((int)mEnemyID); }

/*
 * --INFO--
 * Address:	801267FC
 * Size:	000040
 */
void GenObjectEnemy::updateUseList(Game::Generator* gen, int listIdx)
{
	if (generalEnemyMgr) {
		generalEnemyMgr->addEnemyNum((int)mEnemyID, (u8)mTekiNum, this);
	}
}

/*
 * --INFO--
 * Address:	8012683C
 * Size:	00031C
 * TODO
 */
void GenObjectEnemy::render(Graphics& gfx, Game::Generator* gen)
{
	if (IS_FLAG(_4C, 1)) {
		Vector3f position = gen->mPosition + gen->mOffset;

		gfx.initPrimDraw(nullptr);
		GXSetLineWidth(18, GX_TO_ZERO);

		gfx._084 = 115;
		gfx._085 = 16;
		gfx._086 = 16;
		gfx._087 = -1;

		float dirRadians = mDirection * DEG2RAD * PI;
		Vector3f rotation(0.0f, dirRadians, 0.0f);

		Matrixf rotationMtx;
		rotationMtx.makeTR(position, rotation);

		gfx.mViewport->getMatrix(false);

		Matrixf* gfxMatrix = gfx.mViewport->getMatrix(false);

		Mtx finalMtx;
		PSMTXConcat(gfxMatrix->mMatrix.mtxView, rotationMtx.mMatrix.mtxView, finalMtx);
		GXLoadPosMtxImm(finalMtx, 0);

		Vector3f pos1(0.0f, 100.0f, 0.0f);
		Vector3f pos2(0.0f, 100.0f, 50.0f);
		gfx.drawLine(pos1, pos2);

		pos1 = Vector3f(10.0f, 100.0f, 40.0f);
		gfx.drawLine(pos1, pos2);

		pos1 = Vector3f(-10.0f, 100.0f, 40.0f);
		gfx.drawLine(pos1, pos2);

		GXSetLineWidth(6, GX_TO_ZERO);

		rotationMtx.makeT(position);

		if (mSpawnType == 2) { // Circle spawn type
			gfx._084 = -1;
			gfx._085 = -1;
			gfx._086 = -1;
			gfx._087 = -101;
			gfx.drawSphere(mAppearRadius, &rotationMtx);
		}

		PerspPrintfInfo info(0.5f);

		gfx.initPrimDraw(nullptr);
		Viewport* vp = gfx.getViewport(0);
		gfx.initPerspPrintf(vp);

		Vector3f perspPos = gen->mPosition + gen->mOffset;
		perspPos.y += 100.0f;

		gfx.perspPrintf(info, perspPos, "%s x %d", gEnemyInfo[(u8)mEnemyID], mTekiNum);

		if (mEnemyGenerator) {
			update(gen);
		}
	}
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
// /*
//  * --INFO--
//  * Address:	80126BBC
//  * Size:	000008
//  */
// u32 EnemyGeneratorBase::getInitialParam() { return 0x0; }

/*
 * --INFO--
 * Address:	80126BC4
 * Size:	000008
 */
const char* GenArg::getName() { return "GenArg"; }

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
void GenObject::generatorMakeMatrix(Matrixf& genMtx, Vector3f& position) { genMtx.makeT(position); }

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
