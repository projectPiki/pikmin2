/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_pikiAI_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047FA28
    lbl_8047FA28:
        .4byte 0x696E766F
        .4byte 0x6B654149
        .4byte 0x2D660000
    .global lbl_8047FA34
    lbl_8047FA34:
        .4byte 0x70696B69
        .4byte 0x41492E63
        .4byte 0x70700000
    .global lbl_8047FA40
    lbl_8047FA40:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8047FA4C
    lbl_8047FA4C:
        .4byte 0x41637442
        .4byte 0x72696467
        .4byte 0x65417267
        .4byte 0x00000000
    .global lbl_8047FA5C
    lbl_8047FA5C:
        .4byte 0x41637442
        .4byte 0x7265616B
        .4byte 0x526F636B
        .4byte 0x41726700
    .global lbl_8047FA6C
    lbl_8047FA6C:
        .4byte 0x41637442
        .4byte 0x7265616B
        .4byte 0x47617465
        .4byte 0x41726700
    .global lbl_8047FA7C
    lbl_8047FA7C:
        .4byte 0x41637454
        .4byte 0x72616E73
        .4byte 0x706F7274
        .4byte 0x41726700
    .global lbl_8047FA8C
    lbl_8047FA8C:
        .4byte 0x41637441
        .4byte 0x74746163
        .4byte 0x6B417267
        .4byte 0x00000000
    .global lbl_8047FA9C
    lbl_8047FA9C:
        .4byte 0x41637457
        .4byte 0x65656441
        .4byte 0x72670000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B5A00
    lbl_804B5A00:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804B5A0C
    lbl_804B5A0C:
        .4byte lbl_801B3A04
        .4byte lbl_801B3A54
        .4byte lbl_801B3ABC
        .4byte lbl_801B3B58
        .4byte lbl_801B3B88
        .4byte lbl_801B3BB8
        .4byte lbl_801B3AEC
        .4byte lbl_801B3BE8
        .4byte lbl_801B3A8C
        .4byte lbl_801B399C
    .global __vt__Q26PikiAI12ActBridgeArg
    __vt__Q26PikiAI12ActBridgeArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI12ActBridgeArgFv
    .global __vt__Q26PikiAI15ActBreakRockArg
    __vt__Q26PikiAI15ActBreakRockArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI15ActBreakRockArgFv
    .global __vt__Q26PikiAI15ActBreakGateArg
    __vt__Q26PikiAI15ActBreakGateArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI15ActBreakGateArgFv
    .global __vt__Q26PikiAI15ActTransportArg
    __vt__Q26PikiAI15ActTransportArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI15ActTransportArgFv
    .global __vt__Q26PikiAI12ActAttackArg
    __vt__Q26PikiAI12ActAttackArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI12ActAttackArgFv
    .global __vt__Q26PikiAI10ActWeedArg
    __vt__Q26PikiAI10ActWeedArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI10ActWeedArgFv
    .global "__vt__26Iterator<Q24Game8ItemGate>"
    "__vt__26Iterator<Q24Game8ItemGate>":
        .4byte 0
        .4byte 0
        .4byte "first__26Iterator<Q24Game8ItemGate>Fv"
        .4byte "next__26Iterator<Q24Game8ItemGate>Fv"
        .4byte "isDone__26Iterator<Q24Game8ItemGate>Fv"
        .4byte "__ml__26Iterator<Q24Game8ItemGate>Fv"
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global sGraspSituationOptimise__Q24Game4Piki
    sGraspSituationOptimise__Q24Game4Piki:
        .4byte 0x01000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515A58
    lbl_80515A58:
        .skip 0x4
    .global lbl_80515A5C
    lbl_80515A5C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519348
    lbl_80519348:
        .4byte 0x43C80000
    .global lbl_8051934C
    lbl_8051934C:
        .4byte 0x43960000
    .global lbl_80519350
    lbl_80519350:
        .4byte 0x428C0000
    .global lbl_80519354
    lbl_80519354:
        .4byte 0x430C0000
    .global lbl_80519358
    lbl_80519358:
        .4byte 0x43000000
    .global lbl_8051935C
    lbl_8051935C:
        .4byte 0x00000000
    .global lbl_80519360
    lbl_80519360:
        .4byte 0x41F00000
    .global lbl_80519364
    lbl_80519364:
        .4byte 0x42C80000
    .global lbl_80519368
    lbl_80519368:
        .4byte 0x3E4CCCCD
*/

#include "types.h"
#include "nans.h"

#include "Game/Piki.h"
#include "Game/PikiMgr.h"
#include "Game/gamePlayData.h"
#include "Game/MoviePlayer.h"

namespace Game {

/*
 * --INFO--
 * Address:	801B07C0
 * Size:	000BA0
 */
int Piki::graspSituation_Fast(Game::Creature** localCreatures)
{
	if (moviePlayer && moviePlayer->m_demoState && (localCreatures[0] = nullptr, !isZikatu()) || playData->isDemoFlag(39)) {
		return -1;
	}

	Creature* cCreature = nullptr;
	f32 cDist           = 400.0f;
	int retVal          = -1;
	bool v10            = false;

	Sys::Sphere sp(m_shadowParam.m_position, 300.0f);
	CellIteratorArg cia(sp);
	cia._1D = true;

	CellIterator ci(cia);
	CI_LOOP(ci)
	{
		Creature* creature = (Creature*)*ci;
		switch (creature->m_objectTypeID) {
		case 1032:
			if (creature->isAlive()) {
				f32 dist = creature->getPosition().distance(m_shadowParam.m_position);

				if (dist < cDist && dist < pikiMgr->m_parms->m_pikiParms._9B8.m_value) {
					cDist     = dist;
					cCreature = creature;
					retVal    = 8;
				}
			}
			break;
		case 1038:
			if (!v10 && creature->isAlive()) { }
			break;
		default:
			break;
		}
	}
}

/*
stwu     r1, -0x180(r1)
mflr     r0
stw      r0, 0x184(r1)
stfd     f31, 0x170(r1)
psq_st   f31, 376(r1), 0, qr0
stfd     f30, 0x160(r1)
psq_st   f30, 360(r1), 0, qr0
stmw     r23, 0x13c(r1)
lwz      r5, moviePlayer__4Game@sda21(r13)
mr       r23, r3
mr       r24, r4
cmplwi   r5, 0
beq      lbl_801B083C
lwz      r0, 0x18(r5)
cmpwi    r0, 0
beq      lbl_801B083C
li       r0, 0
stw      r0, 0(r24)
lwz      r12, 0(r3)
lwz      r12, 0x1f4(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B0834
lwz      r3, playData__4Game@sda21(r13)
li       r4, 0x27
bl       isDemoFlag__Q24Game8PlayDataFi
clrlwi.  r0, r3, 0x18
beq      lbl_801B083C

lbl_801B0834:
li       r3, -1
b        lbl_801B133C

lbl_801B083C:
lbz      r0, 0x2b8(r23)
li       r30, 0
lfs      f31, lbl_80519348@sda21(r2)
li       r29, -1
cmpwi    r0, 0
li       r28, 0
li       r31, 1
beq      lbl_801B0868
cmpwi    r0, 5
beq      lbl_801B0868
li       r31, 0

lbl_801B0868:
lfs      f1, 0x20c(r23)
addi     r3, r1, 0x80
lfs      f0, lbl_8051934C@sda21(r2)
addi     r4, r1, 0x50
stfs     f1, 0x50(r1)
lfs      f1, 0x210(r23)
stfs     f1, 0x54(r1)
lfs      f1, 0x214(r23)
stfs     f1, 0x58(r1)
stfs     f0, 0x5c(r1)
bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
li       r0, 1
addi     r3, r1, 0xe8
stb      r0, 0x9c(r1)
addi     r4, r1, 0x80
bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
addi     r3, r1, 0xe8
bl       first__Q24Game12CellIteratorFv
b        lbl_801B1324

lbl_801B08B4:
addi     r3, r1, 0xe8
bl       __ml__Q24Game12CellIteratorFv
lhz      r0, 0x128(r3)
mr       r27, r3
cmpwi    r0, 0x408
beq      lbl_801B10AC
bge      lbl_801B090C
cmpwi    r0, 0x401
beq      lbl_801B0A4C
bge      lbl_801B0900
cmpwi    r0, 1
beq      lbl_801B1160
bge      lbl_801B08F4
cmpwi    r0, 0
bge      lbl_801B0948
b        lbl_801B131C

lbl_801B08F4:
cmpwi    r0, 3
bge      lbl_801B131C
b        lbl_801B1220

lbl_801B0900:
cmpwi    r0, 0x404
beq      lbl_801B0BB4
b        lbl_801B131C

lbl_801B090C:
cmpwi    r0, 0x40e
beq      lbl_801B0F10
bge      lbl_801B0930
cmpwi    r0, 0x40c
beq      lbl_801B0E28
bge      lbl_801B0D44
cmpwi    r0, 0x40a
bge      lbl_801B131C
b        lbl_801B0DC8

lbl_801B0930:
cmpwi    r0, 0x410
beq      lbl_801B0E88
blt      lbl_801B131C
cmpwi    r0, 0x413
bge      lbl_801B131C
b        lbl_801B0FA4

lbl_801B0948:
lwz      r4, gameSystem__4Game@sda21(r13)
mr       r25, r27
lwz      r0, 0x44(r4)
cmpwi    r0, 1
bne      lbl_801B09E8
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
mr       r3, r25
bl       canVsBattle__Q24Game4PikiFv
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
mr       r3, r25
bl       getVsBattlePiki__Q24Game4PikiFv
cmplwi   r3, 0
bne      lbl_801B131C
lbz      r3, 0x2b8(r25)
lbz      r0, 0x2b8(r23)
cmpw     r3, r0
beq      lbl_801B131C
mr       r3, r25
mr       r4, r23
bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
lfs      f0, lbl_80519350@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_801B131C
clrlwi.  r0, r28, 0x18
beq      lbl_801B09CC
fcmpo    cr0, f1, f31
blt      lbl_801B09D4

lbl_801B09CC:
clrlwi.  r0, r28, 0x18
bne      lbl_801B131C

lbl_801B09D4:
fmr      f31, f1
mr       r30, r25
li       r29, 0xd
li       r28, 1
b        lbl_801B131C

lbl_801B09E8:
lbz      r0, 0x2b8(r23)
cmpwi    r0, 0
bne      lbl_801B131C
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
mr       r3, r25
bl       getStateID__Q24Game4PikiFv
cmpwi    r3, 0xa
bne      lbl_801B131C
mr       r3, r25
mr       r4, r23
bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
fcmpo    cr0, f1, f31
bge      lbl_801B131C
lfs      f0, lbl_80519354@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_801B131C
fmr      f31, f1
mr       r30, r25
li       r29, 0xc
b        lbl_801B131C

lbl_801B0A4C:
lwz      r12, 0(r3)
li       r26, 1
lwz      r12, 0x1f4(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x18
cmplwi   r0, 4
bne      lbl_801B0AA0
lwz      r3, gameSystem__4Game@sda21(r13)
lwz      r0, 0x44(r3)
cmpwi    r0, 0
bne      lbl_801B0AA0
mr       r3, r27
bl       getConfigIndex__Q24Game6PelletFv
mr       r0, r3
lwz      r3, playData__4Game@sda21(r13)
mr       r4, r0
bl       isFindItemDemoFlag__Q24Game8PlayDataFi
clrlwi.  r0, r3, 0x18
bne      lbl_801B0AA0
li       r26, 0

lbl_801B0AA0:
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
lwz      r0, 0xb8(r27)
cmplwi   r0, 0
bne      lbl_801B131C
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 0x16c(r12)
mtctr    r12
bctrl
extsh    r0, r3
cmpwi    r0, -1
beq      lbl_801B131C
mr       r3, r27
bl       discoverDisabled__Q24Game6PelletFv
clrlwi.  r0, r3, 0x18
bne      lbl_801B131C
clrlwi.  r0, r31, 0x18
bne      lbl_801B0B20
bne      lbl_801B131C
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 0x8c(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B131C

lbl_801B0B20:
clrlwi.  r0, r26, 0x18
beq      lbl_801B131C
mr       r3, r23
lwz      r12, 0(r23)
lwz      r12, 0x1f4(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B131C
lwz      r3, gameSystem__4Game@sda21(r13)
lwz      r0, 0x44(r3)
cmpwi    r0, 1
bne      lbl_801B0B74
mr       r3, r27
lbz      r25, 0x2b8(r23)
lwz      r12, 0(r27)
lwz      r12, 0x1e8(r12)
mtctr    r12
bctrl
cmpw     r3, r25
beq      lbl_801B131C

lbl_801B0B74:
mr       r3, r27
mr       r4, r23
bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
clrlwi.  r0, r28, 0x18
bne      lbl_801B131C
fcmpo    cr0, f1, f31
bge      lbl_801B131C
lwz      r3, pikiMgr__4Game@sda21(r13)
lwz      r3, 0x6c(r3)
lfs      f0, 0x9a8(r3)
fcmpo    cr0, f1, f0
bge      lbl_801B131C
fmr      f31, f1
mr       r30, r27
li       r29, 4
b        lbl_801B131C

lbl_801B0BB4:
mr       r3, r23
bl       gasInvicible__Q24Game4PikiFv
clrlwi.  r0, r3, 0x18
bne      lbl_801B131C
lwz      r3, gameSystem__4Game@sda21(r13)
mr       r26, r27
li       r25, 1
lwz      r0, 0x44(r3)
cmpwi    r0, 0
bne      lbl_801B0CD4
lwz      r3, playData__4Game@sda21(r13)
li       r4, 4
bl       hasMetPikmin__Q24Game8PlayDataFi
clrlwi.  r0, r3, 0x18
bne      lbl_801B0CD4
lbz      r0, 0x2b8(r23)
cmpwi    r0, 4
beq      lbl_801B0CD4
mr       r4, r27
addi     r3, r1, 0x14
lwz      r12, 0(r27)
lwz      r12, 8(r12)
mtctr    r12
bctrl
lfs      f3, 0x14(r1)
addi     r3, r1, 0x60
lfs      f2, 0x18(r1)
addi     r4, r1, 0x40
lfs      f1, 0x1c(r1)
lfs      f0, lbl_80519358@sda21(r2)
stfs     f3, 0x40(r1)
stfs     f2, 0x44(r1)
stfs     f1, 0x48(r1)
stfs     f0, 0x4c(r1)
bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
addi     r3, r1, 0xa0
addi     r4, r1, 0x60
bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
addi     r3, r1, 0xa0
bl       first__Q24Game12CellIteratorFv
b        lbl_801B0CC4

lbl_801B0C58:
addi     r3, r1, 0xa0
bl       __ml__Q24Game12CellIteratorFv
lwz      r12, 0(r3)
mr       r27, r3
lwz      r12, 0x7c(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B0CBC
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B0CBC
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 0x258(r12)
mtctr    r12
bctrl
cmpwi    r3, 0x15
bne      lbl_801B0CBC
li       r25, 0
b        lbl_801B0CD4

lbl_801B0CBC:
addi     r3, r1, 0xa0
bl       next__Q24Game12CellIteratorFv

lbl_801B0CC4:
addi     r3, r1, 0xa0
bl       isDone__Q24Game12CellIteratorFv
clrlwi.  r0, r3, 0x18
beq      lbl_801B0C58

lbl_801B0CD4:
mr       r3, r26
lwz      r12, 0(r26)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
clrlwi.  r0, r25, 0x18
beq      lbl_801B131C
mr       r3, r26
addi     r4, r23, 0x218
lwz      r12, 0(r26)
lwz      r12, 0x208(r12)
mtctr    r12
bctrl
clrlwi.  r0, r28, 0x18
bne      lbl_801B131C
fcmpo    cr0, f1, f31
bge      lbl_801B131C
lwz      r3, pikiMgr__4Game@sda21(r13)
lwz      r3, 0x6c(r3)
lfs      f0, 0x9f8(r3)
fcmpo    cr0, f1, f0
bge      lbl_801B131C
fmr      f31, f1
mr       r30, r26
li       r29, 6
b        lbl_801B131C

lbl_801B0D44:
mr       r3, r23
bl       gasInvicible__Q24Game4PikiFv
clrlwi.  r0, r3, 0x18
bne      lbl_801B131C
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
mr       r3, r27
addi     r4, r23, 0x20c
bl       "workable__Q34Game10ItemBridge4ItemFR10Vector3<f>"
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
mr       r3, r27
addi     r4, r23, 0x218
lwz      r12, 0(r27)
lwz      r12, 0x208(r12)
mtctr    r12
bctrl
fcmpo    cr0, f1, f31
bge      lbl_801B131C
lwz      r3, pikiMgr__4Game@sda21(r13)
lwz      r3, 0x6c(r3)
lfs      f0, 0xa20(r3)
fcmpo    cr0, f1, f0
bge      lbl_801B131C
fmr      f31, f1
mr       r30, r27
li       r29, 0xa
b        lbl_801B131C

lbl_801B0DC8:
lwz      r12, 0(r3)
mr       r25, r27
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
mr       r3, r25
addi     r4, r23, 0x218
lwz      r12, 0(r25)
lwz      r12, 0x208(r12)
mtctr    r12
bctrl
fcmpo    cr0, f1, f31
bge      lbl_801B131C
lwz      r3, pikiMgr__4Game@sda21(r13)
lwz      r3, 0x6c(r3)
lfs      f0, 0x9d0(r3)
fcmpo    cr0, f1, f0
bge      lbl_801B131C
fmr      f31, f1
mr       r30, r25
li       r29, 7
b        lbl_801B131C

lbl_801B0E28:
lwz      r12, 0(r3)
mr       r25, r27
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
mr       r3, r25
addi     r4, r23, 0x218
lwz      r12, 0(r25)
lwz      r12, 0x208(r12)
mtctr    r12
bctrl
fcmpo    cr0, f1, f31
bge      lbl_801B131C
lwz      r3, pikiMgr__4Game@sda21(r13)
lwz      r3, 0x6c(r3)
lfs      f0, 0x9d0(r3)
fcmpo    cr0, f1, f0
bge      lbl_801B131C
fmr      f31, f1
mr       r30, r25
li       r29, 7
b        lbl_801B131C

lbl_801B0E88:
lwz      r12, 0(r3)
mr       r25, r27
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
clrlwi.  r0, r31, 0x18
bne      lbl_801B0ECC
bne      lbl_801B131C
mr       r3, r25
lwz      r12, 0(r25)
lwz      r12, 0x8c(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B131C

lbl_801B0ECC:
mr       r3, r25
addi     r4, r23, 0x218
lwz      r12, 0(r25)
lwz      r12, 0x208(r12)
mtctr    r12
bctrl
fcmpo    cr0, f1, f31
bge      lbl_801B131C
lwz      r3, pikiMgr__4Game@sda21(r13)
lwz      r3, 0x6c(r3)
lfs      f0, 0xa48(r3)
fcmpo    cr0, f1, f0
bge      lbl_801B131C
fmr      f31, f1
mr       r30, r25
li       r29, 7
b        lbl_801B131C

lbl_801B0F10:
clrlwi.  r0, r28, 0x18
mr       r25, r27
bne      lbl_801B131C
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
mr       r3, r25
bl       isVisible__Q34Game12ItemTreasure4ItemFv
clrlwi.  r0, r3, 0x18
bne      lbl_801B0F60
mr       r3, r25
bl       isVisible__Q34Game12ItemTreasure4ItemFv
clrlwi.  r0, r3, 0x18
bne      lbl_801B131C
lbz      r0, 0x2b8(r23)
cmpwi    r0, 4
bne      lbl_801B131C

lbl_801B0F60:
mr       r3, r25
addi     r4, r23, 0x218
lwz      r12, 0(r25)
lwz      r12, 0x208(r12)
mtctr    r12
bctrl
fcmpo    cr0, f1, f31
bge      lbl_801B131C
lwz      r3, pikiMgr__4Game@sda21(r13)
lwz      r3, 0x6c(r3)
lfs      f0, 0xa70(r3)
fcmpo    cr0, f1, f0
bge      lbl_801B131C
fmr      f31, f1
mr       r30, r25
li       r29, 7
b        lbl_801B131C

lbl_801B0FA4:
lwz      r12, 0(r3)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 0x90(r12)
mtctr    r12
bctrl
cmplwi   r3, 0
beq      lbl_801B131C
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 0x90(r12)
mtctr    r12
bctrl
lwz      r5, 4(r3)
li       r4, 0
cmpwi    r5, -1
beq      lbl_801B1008
lwz      r0, 8(r3)
cmpw     r0, r5
bge      lbl_801B100C

lbl_801B1008:
li       r4, 1

lbl_801B100C:
clrlwi.  r0, r4, 0x18
beq      lbl_801B131C
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 0x90(r12)
mtctr    r12
bctrl
lfs      f30, 0x18(r3)
mr       r3, r27
lwz      r12, 0(r27)
lwz      r12, 0x90(r12)
mtctr    r12
bctrl
lfs      f1, 0x10(r3)
lfs      f0, 0x210(r23)
lfs      f3, 0xc(r3)
fsubs    f4, f1, f0
lfs      f2, 0x20c(r23)
lfs      f1, 0x14(r3)
lfs      f0, 0x214(r23)
fsubs    f3, f3, f2
fmuls    f4, f4, f4
fsubs    f2, f1, f0
lfs      f0, lbl_8051935C@sda21(r2)
fmadds   f1, f3, f3, f4
fmuls    f2, f2, f2
fadds    f1, f2, f1
fcmpo    cr0, f1, f0
ble      lbl_801B1090
ble      lbl_801B1094
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_801B1094

lbl_801B1090:
fmr      f1, f0

lbl_801B1094:
fcmpo    cr0, f1, f30
bge      lbl_801B131C
fmr      f31, f1
mr       r30, r27
li       r29, 9
b        lbl_801B131C

lbl_801B10AC:
lwz      r12, 0(r3)
mr       r25, r27
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
mr       r4, r25
addi     r3, r1, 8
lwz      r12, 0(r25)
lwz      r12, 8(r12)
mtctr    r12
bctrl
lfs      f1, 0xc(r1)
lfs      f0, 0x21c(r23)
lfs      f3, 8(r1)
fsubs    f4, f1, f0
lfs      f2, 0x218(r23)
lfs      f1, 0x10(r1)
lfs      f0, 0x220(r23)
fsubs    f3, f3, f2
fmuls    f4, f4, f4
fsubs    f2, f1, f0
lfs      f0, lbl_8051935C@sda21(r2)
fmadds   f1, f3, f3, f4
fmuls    f2, f2, f2
fadds    f1, f2, f1
fcmpo    cr0, f1, f0
ble      lbl_801B1130
ble      lbl_801B1134
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_801B1134

lbl_801B1130:
fmr      f1, f0

lbl_801B1134:
fcmpo    cr0, f1, f31
bge      lbl_801B131C
lwz      r3, pikiMgr__4Game@sda21(r13)
lwz      r3, 0x6c(r3)
lfs      f0, 0x9d0(r3)
fcmpo    cr0, f1, f0
bge      lbl_801B131C
fmr      f31, f1
mr       r30, r25
li       r29, 8
b        lbl_801B131C

lbl_801B1160:
lwz      r4, gameSystem__4Game@sda21(r13)
lwz      r0, 0x44(r4)
cmpwi    r0, 1
bne      lbl_801B131C
lwz      r12, 0(r3)
mr       r25, r27
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
lhz      r3, 0x2dc(r25)
lbz      r0, 0x2b8(r23)
cmpw     r3, r0
bne      lbl_801B131C
mr       r3, r25
mr       r4, r23
bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
lwz      r12, 0(r25)
fmr      f30, f1
mr       r3, r25
addi     r4, r1, 0x30
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lfs      f2, 0x34(r1)
fcmpo    cr0, f30, f31
lfs      f0, 0x210(r23)
lfs      f1, 0x3c(r1)
fsubs    f2, f2, f0
lfs      f0, 0x224(r23)
fadds    f0, f1, f0
fabs     f1, f2
frsp     f1, f1
fsubs    f1, f1, f0
bge      lbl_801B131C
lwz      r3, pikiMgr__4Game@sda21(r13)
lwz      r3, 0x6c(r3)
lfs      f0, 0x980(r3)
fcmpo    cr0, f30, f0
bge      lbl_801B131C
lfs      f0, lbl_80519360@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_801B131C
fmr      f31, f30
mr       r30, r25
li       r29, 5
b        lbl_801B131C

lbl_801B1220:
lwz      r12, 0(r3)
mr       r25, r27
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
mr       r3, r25
lwz      r12, 0(r25)
lwz      r12, 0xcc(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B131C
mr       r3, r25
lwz      r12, 0(r25)
lwz      r12, 0xd4(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B131C
clrlwi.  r0, r31, 0x18
bne      lbl_801B129C
bne      lbl_801B131C
mr       r3, r25
lwz      r12, 0(r25)
lwz      r12, 0x8c(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B131C

lbl_801B129C:
mr       r3, r25
mr       r4, r23
bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
lwz      r12, 0(r25)
fmr      f30, f1
mr       r3, r25
addi     r4, r1, 0x20
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lfs      f2, 0x24(r1)
fcmpo    cr0, f30, f31
lfs      f0, 0x210(r23)
lfs      f1, 0x2c(r1)
fsubs    f2, f2, f0
lfs      f0, 0x224(r23)
fadds    f0, f1, f0
fabs     f1, f2
frsp     f1, f1
fsubs    f1, f1, f0
bge      lbl_801B131C
lwz      r3, pikiMgr__4Game@sda21(r13)
lwz      r3, 0x6c(r3)
lfs      f0, 0x980(r3)
fcmpo    cr0, f30, f0
bge      lbl_801B131C
lfs      f0, lbl_80519360@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_801B131C
fmr      f31, f30
mr       r30, r25
li       r29, 5

lbl_801B131C:
addi     r3, r1, 0xe8
bl       next__Q24Game12CellIteratorFv

lbl_801B1324:
addi     r3, r1, 0xe8
bl       isDone__Q24Game12CellIteratorFv
clrlwi.  r0, r3, 0x18
beq      lbl_801B08B4
stw      r30, 0(r24)
mr       r3, r29

lbl_801B133C:
psq_l    f31, 376(r1), 0, qr0
lfd      f31, 0x170(r1)
psq_l    f30, 360(r1), 0, qr0
lfd      f30, 0x160(r1)
lmw      r23, 0x13c(r1)
lwz      r0, 0x184(r1)
mtlr     r0
addi     r1, r1, 0x180
blr
*/
// }

/*
 * --INFO--
 * Address:	801B1360
 * Size:	001A04
 */
// void Piki::graspSituation(Game::Creature**)
// {
/*
stwu     r1, -0x120(r1)
mflr     r0
stw      r0, 0x124(r1)
stfd     f31, 0x110(r1)
psq_st   f31, 280(r1), 0, qr0
stfd     f30, 0x100(r1)
psq_st   f30, 264(r1), 0, qr0
stmw     r24, 0xe0(r1)
lwz      r5, moviePlayer__4Game@sda21(r13)
mr       r31, r3
mr       r28, r4
cmplwi   r5, 0
beq      lbl_801B13B0
lwz      r0, 0x18(r5)
cmpwi    r0, 0
beq      lbl_801B13B0
li       r0, 0
li       r3, -1
stw      r0, 0(r28)
b        lbl_801B2D40

lbl_801B13B0:
lwz      r3, gameSystem__4Game@sda21(r13)
li       r29, 0
lfs      f31, lbl_80519364@sda21(r2)
li       r30, -1
lwz      r0, 0x44(r3)
cmpwi    r0, 1
bne      lbl_801B1618
li       r0, 0
lwz      r3, pikiMgr__4Game@sda21(r13)
lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
stw      r0, 0xd0(r1)
addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
cmplwi   r0, 0
stw      r4, 0xc4(r1)
li       r27, 0
lfs      f30, lbl_80519350@sda21(r2)
stw      r0, 0xc8(r1)
stw      r3, 0xcc(r1)
bne      lbl_801B1414
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0xc8(r1)
b        lbl_801B15D8

lbl_801B1414:
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0xc8(r1)
b        lbl_801B1480

lbl_801B142C:
lwz      r3, 0xcc(r1)
lwz      r4, 0xc8(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0xd0(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B15D8
lwz      r3, 0xcc(r1)
lwz      r4, 0xc8(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0xc8(r1)

lbl_801B1480:
lwz      r12, 0xc4(r1)
addi     r3, r1, 0xc4
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B142C
b        lbl_801B15D8

lbl_801B14A0:
lwz      r3, 0xcc(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
mr       r26, r3
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B151C
mr       r3, r26
bl       canVsBattle__Q24Game4PikiFv
clrlwi.  r0, r3, 0x18
beq      lbl_801B151C
mr       r3, r26
bl       getVsBattlePiki__Q24Game4PikiFv
cmplwi   r3, 0
bne      lbl_801B151C
lbz      r3, 0x2b8(r26)
lbz      r0, 0x2b8(r31)
cmpw     r3, r0
beq      lbl_801B151C
mr       r3, r26
mr       r4, r31
bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
fcmpo    cr0, f1, f30
bge      lbl_801B151C
mr       r27, r26
fmr      f30, f1

lbl_801B151C:
lwz      r0, 0xd0(r1)
cmplwi   r0, 0
bne      lbl_801B1548
lwz      r3, 0xcc(r1)
lwz      r4, 0xc8(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0xc8(r1)
b        lbl_801B15D8

lbl_801B1548:
lwz      r3, 0xcc(r1)
lwz      r4, 0xc8(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0xc8(r1)
b        lbl_801B15BC

lbl_801B1568:
lwz      r3, 0xcc(r1)
lwz      r4, 0xc8(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0xd0(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B15D8
lwz      r3, 0xcc(r1)
lwz      r4, 0xc8(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0xc8(r1)

lbl_801B15BC:
lwz      r12, 0xc4(r1)
addi     r3, r1, 0xc4
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B1568

lbl_801B15D8:
lwz      r3, 0xcc(r1)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r4, 0xc8(r1)
cmplw    r4, r3
bne      lbl_801B14A0
cmplwi   r27, 0
beq      lbl_801B1618
lfs      f0, lbl_80519364@sda21(r2)
fcmpo    cr0, f30, f0
bge      lbl_801B1618
stw      r27, 0(r28)
li       r3, 0xd
b        lbl_801B2D40

lbl_801B1618:
lbz      r0, 0x2b8(r31)
cmpwi    r0, 0
bne      lbl_801B1850
li       r0, 0
lwz      r3, pikiMgr__4Game@sda21(r13)
lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
stw      r0, 0xc0(r1)
addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
cmplwi   r0, 0
stw      r4, 0xb4(r1)
li       r27, 0
lfs      f30, lbl_80519354@sda21(r2)
stw      r0, 0xb8(r1)
stw      r3, 0xbc(r1)
bne      lbl_801B166C
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0xb8(r1)
b        lbl_801B1810

lbl_801B166C:
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0xb8(r1)
b        lbl_801B16D8

lbl_801B1684:
lwz      r3, 0xbc(r1)
lwz      r4, 0xb8(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0xc0(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B1810
lwz      r3, 0xbc(r1)
lwz      r4, 0xb8(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0xb8(r1)

lbl_801B16D8:
lwz      r12, 0xb4(r1)
addi     r3, r1, 0xb4
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B1684
b        lbl_801B1810

lbl_801B16F8:
lwz      r3, 0xbc(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
mr       r26, r3
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B1754
mr       r3, r26
bl       getStateID__Q24Game4PikiFv
cmpwi    r3, 0xa
bne      lbl_801B1754
mr       r3, r26
mr       r4, r31
bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
fcmpo    cr0, f1, f30
bge      lbl_801B1754
mr       r27, r26
fmr      f30, f1

lbl_801B1754:
lwz      r0, 0xc0(r1)
cmplwi   r0, 0
bne      lbl_801B1780
lwz      r3, 0xbc(r1)
lwz      r4, 0xb8(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0xb8(r1)
b        lbl_801B1810

lbl_801B1780:
lwz      r3, 0xbc(r1)
lwz      r4, 0xb8(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0xb8(r1)
b        lbl_801B17F4

lbl_801B17A0:
lwz      r3, 0xbc(r1)
lwz      r4, 0xb8(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0xc0(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B1810
lwz      r3, 0xbc(r1)
lwz      r4, 0xb8(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0xb8(r1)

lbl_801B17F4:
lwz      r12, 0xb4(r1)
addi     r3, r1, 0xb4
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B17A0

lbl_801B1810:
lwz      r3, 0xbc(r1)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r4, 0xb8(r1)
cmplw    r4, r3
bne      lbl_801B16F8
cmplwi   r27, 0
beq      lbl_801B1850
lfs      f0, lbl_80519364@sda21(r2)
fcmpo    cr0, f30, f0
bge      lbl_801B1850
fmr      f31, f30
mr       r29, r27
li       r30, 0xc

lbl_801B1850:
lwz      r4, pikiMgr__4Game@sda21(r13)
addi     r3, r1, 0xa4
li       r27, 0
lwz      r4, 0x6c(r4)
lfs      f30, 0x9a8(r4)
bl       __ct__Q24Game14PelletIteratorFv
addi     r3, r1, 0xa4
bl       first__Q24Game14PelletIteratorFv
b        lbl_801B19A4

lbl_801B1874:
addi     r3, r1, 0xa4
bl       __ml__Q24Game14PelletIteratorFv
lwz      r12, 0(r3)
mr       r26, r3
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B199C
lwz      r0, 0xb8(r26)
cmplwi   r0, 0
bne      lbl_801B199C
mr       r3, r26
lwz      r12, 0(r26)
lwz      r12, 0x16c(r12)
mtctr    r12
bctrl
extsh    r0, r3
cmpwi    r0, -1
beq      lbl_801B199C
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x1f4(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B199C
mr       r3, r26
li       r24, 1
lwz      r12, 0(r26)
lwz      r12, 0x1f4(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x18
cmplwi   r0, 4
bne      lbl_801B1938
lwz      r3, gameSystem__4Game@sda21(r13)
lwz      r0, 0x44(r3)
cmpwi    r0, 0
bne      lbl_801B1938
mr       r3, r26
bl       getConfigIndex__Q24Game6PelletFv
mr       r0, r3
lwz      r3, playData__4Game@sda21(r13)
mr       r4, r0
bl       isFindItemDemoFlag__Q24Game8PlayDataFi
clrlwi.  r0, r3, 0x18
bne      lbl_801B1938
li       r24, 0

lbl_801B1938:
lwz      r3, gameSystem__4Game@sda21(r13)
lwz      r0, 0x44(r3)
cmpwi    r0, 1
bne      lbl_801B1968
mr       r3, r26
lbz      r25, 0x2b8(r31)
lwz      r12, 0(r26)
lwz      r12, 0x1e8(r12)
mtctr    r12
bctrl
cmpw     r3, r25
beq      lbl_801B199C

lbl_801B1968:
mr       r3, r26
bl       discoverDisabled__Q24Game6PelletFv
clrlwi.  r0, r3, 0x18
bne      lbl_801B199C
clrlwi.  r0, r24, 0x18
beq      lbl_801B199C
mr       r3, r26
mr       r4, r31
bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
fcmpo    cr0, f1, f30
bge      lbl_801B199C
mr       r27, r26
fmr      f30, f1

lbl_801B199C:
addi     r3, r1, 0xa4
bl       next__Q24Game14PelletIteratorFv

lbl_801B19A4:
addi     r3, r1, 0xa4
bl       isDone__Q24Game14PelletIteratorFv
clrlwi.  r0, r3, 0x18
beq      lbl_801B1874
cmplwi   r27, 0
beq      lbl_801B19D0
fcmpo    cr0, f30, f31
bge      lbl_801B19D0
fmr      f31, f30
mr       r29, r27
li       r30, 4

lbl_801B19D0:
lwz      r3, itemGateMgr__4Game@sda21(r13)
cmplwi   r3, 0
beq      lbl_801B1C08
lwz      r5, pikiMgr__4Game@sda21(r13)
lis      r4, "__vt__26Iterator<Q24Game8ItemGate>"@ha
li       r0, 0
addi     r3, r3, 0x30
lwz      r5, 0x6c(r5)
cmplwi   r0, 0
addi     r4, r4, "__vt__26Iterator<Q24Game8ItemGate>"@l
li       r26, 0
lfs      f30, 0x9f8(r5)
stw      r4, 0x94(r1)
stw      r0, 0xa0(r1)
stw      r0, 0x98(r1)
stw      r3, 0x9c(r1)
bne      lbl_801B1A2C
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x98(r1)
b        lbl_801B1BCC

lbl_801B1A2C:
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x98(r1)
b        lbl_801B1A98

lbl_801B1A44:
lwz      r3, 0x9c(r1)
lwz      r4, 0x98(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0xa0(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B1BCC
lwz      r3, 0x9c(r1)
lwz      r4, 0x98(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x98(r1)

lbl_801B1A98:
lwz      r12, 0x94(r1)
addi     r3, r1, 0x94
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B1A44
b        lbl_801B1BCC

lbl_801B1AB8:
lwz      r3, 0x9c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
mr       r25, r3
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B1B10
mr       r3, r25
addi     r4, r31, 0x218
lwz      r12, 0(r25)
lwz      r12, 0x208(r12)
mtctr    r12
bctrl
fcmpo    cr0, f1, f30
bge      lbl_801B1B10
mr       r26, r25
fmr      f30, f1

lbl_801B1B10:
lwz      r0, 0xa0(r1)
cmplwi   r0, 0
bne      lbl_801B1B3C
lwz      r3, 0x9c(r1)
lwz      r4, 0x98(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x98(r1)
b        lbl_801B1BCC

lbl_801B1B3C:
lwz      r3, 0x9c(r1)
lwz      r4, 0x98(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x98(r1)
b        lbl_801B1BB0

lbl_801B1B5C:
lwz      r3, 0x9c(r1)
lwz      r4, 0x98(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0xa0(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B1BCC
lwz      r3, 0x9c(r1)
lwz      r4, 0x98(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x98(r1)

lbl_801B1BB0:
lwz      r12, 0x94(r1)
addi     r3, r1, 0x94
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B1B5C

lbl_801B1BCC:
lwz      r3, 0x9c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r4, 0x98(r1)
cmplw    r4, r3
bne      lbl_801B1AB8
cmplwi   r26, 0
beq      lbl_801B1C08
fcmpo    cr0, f30, f31
bge      lbl_801B1C08
fmr      f31, f30
mr       r29, r26
li       r30, 6

lbl_801B1C08:
lwz      r3, mgr__Q24Game15ItemDengekiGate@sda21(r13)
cmplwi   r3, 0
beq      lbl_801B1E44
lwz      r4, pikiMgr__4Game@sda21(r13)
li       r26, 0
lwz      r4, 0x6c(r4)
lfs      f30, 0x9f8(r4)
beq      lbl_801B1C2C
addi     r3, r3, 0x30

lbl_801B1C2C:
li       r0, 0
lis      r4, "__vt__26Iterator<Q24Game8ItemGate>"@ha
addi     r4, r4, "__vt__26Iterator<Q24Game8ItemGate>"@l
stw      r0, 0x90(r1)
cmplwi   r0, 0
stw      r4, 0x84(r1)
stw      r0, 0x88(r1)
stw      r3, 0x8c(r1)
bne      lbl_801B1C68
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x88(r1)
b        lbl_801B1E08

lbl_801B1C68:
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x88(r1)
b        lbl_801B1CD4

lbl_801B1C80:
lwz      r3, 0x8c(r1)
lwz      r4, 0x88(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x90(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B1E08
lwz      r3, 0x8c(r1)
lwz      r4, 0x88(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x88(r1)

lbl_801B1CD4:
lwz      r12, 0x84(r1)
addi     r3, r1, 0x84
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B1C80
b        lbl_801B1E08

lbl_801B1CF4:
lwz      r3, 0x8c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
mr       r25, r3
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B1D4C
mr       r3, r25
addi     r4, r31, 0x218
lwz      r12, 0(r25)
lwz      r12, 0x208(r12)
mtctr    r12
bctrl
fcmpo    cr0, f1, f30
bge      lbl_801B1D4C
mr       r26, r25
fmr      f30, f1

lbl_801B1D4C:
lwz      r0, 0x90(r1)
cmplwi   r0, 0
bne      lbl_801B1D78
lwz      r3, 0x8c(r1)
lwz      r4, 0x88(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x88(r1)
b        lbl_801B1E08

lbl_801B1D78:
lwz      r3, 0x8c(r1)
lwz      r4, 0x88(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x88(r1)
b        lbl_801B1DEC

lbl_801B1D98:
lwz      r3, 0x8c(r1)
lwz      r4, 0x88(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x90(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B1E08
lwz      r3, 0x8c(r1)
lwz      r4, 0x88(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x88(r1)

lbl_801B1DEC:
lwz      r12, 0x84(r1)
addi     r3, r1, 0x84
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B1D98

lbl_801B1E08:
lwz      r3, 0x8c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r4, 0x88(r1)
cmplw    r4, r3
bne      lbl_801B1CF4
cmplwi   r26, 0
beq      lbl_801B1E44
fcmpo    cr0, f30, f31
bge      lbl_801B1E44
fmr      f31, f30
mr       r29, r26
li       r30, 6

lbl_801B1E44:
lwz      r3, mgr__Q24Game10ItemBridge@sda21(r13)
cmplwi   r3, 0
beq      lbl_801B2098
lwz      r4, pikiMgr__4Game@sda21(r13)
li       r26, 0
lwz      r4, 0x6c(r4)
lfs      f30, 0xa20(r4)
beq      lbl_801B1E68
addi     r3, r3, 0x30

lbl_801B1E68:
li       r0, 0
lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
stw      r0, 0x80(r1)
cmplwi   r0, 0
stw      r4, 0x74(r1)
stw      r0, 0x78(r1)
stw      r3, 0x7c(r1)
bne      lbl_801B1EA4
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x78(r1)
b        lbl_801B205C

lbl_801B1EA4:
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x78(r1)
b        lbl_801B1F10

lbl_801B1EBC:
lwz      r3, 0x7c(r1)
lwz      r4, 0x78(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x80(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B205C
lwz      r3, 0x7c(r1)
lwz      r4, 0x78(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x78(r1)

lbl_801B1F10:
lwz      r12, 0x74(r1)
addi     r3, r1, 0x74
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B1EBC
b        lbl_801B205C

lbl_801B1F30:
lwz      r3, 0x7c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
mr       r0, r3
mr       r24, r0
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B1FA0
mr       r3, r24
addi     r4, r31, 0x20c
bl       "workable__Q34Game10ItemBridge4ItemFR10Vector3<f>"
clrlwi.  r0, r3, 0x18
beq      lbl_801B1FA0
mr       r3, r24
addi     r4, r31, 0x218
lwz      r12, 0(r24)
lwz      r12, 0x208(r12)
mtctr    r12
bctrl
fcmpo    cr0, f1, f30
bge      lbl_801B1FA0
mr       r26, r24
fmr      f30, f1

lbl_801B1FA0:
lwz      r0, 0x80(r1)
cmplwi   r0, 0
bne      lbl_801B1FCC
lwz      r3, 0x7c(r1)
lwz      r4, 0x78(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x78(r1)
b        lbl_801B205C

lbl_801B1FCC:
lwz      r3, 0x7c(r1)
lwz      r4, 0x78(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x78(r1)
b        lbl_801B2040

lbl_801B1FEC:
lwz      r3, 0x7c(r1)
lwz      r4, 0x78(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x80(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B205C
lwz      r3, 0x7c(r1)
lwz      r4, 0x78(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x78(r1)

lbl_801B2040:
lwz      r12, 0x74(r1)
addi     r3, r1, 0x74
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B1FEC

lbl_801B205C:
lwz      r3, 0x7c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r4, 0x78(r1)
cmplw    r4, r3
bne      lbl_801B1F30
cmplwi   r26, 0
beq      lbl_801B2098
fcmpo    cr0, f30, f31
bge      lbl_801B2098
fmr      f31, f30
mr       r29, r26
li       r30, 0xa

lbl_801B2098:
lwz      r3, mgr__Q24Game8ItemRock@sda21(r13)
cmplwi   r3, 0
beq      lbl_801B22D8
lwz      r4, pikiMgr__4Game@sda21(r13)
li       r26, 0
lwz      r4, 0x6c(r4)
lfs      f30, 0x9d0(r4)
beq      lbl_801B20BC
addi     r3, r3, 0x30

lbl_801B20BC:
li       r0, 0
lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
stw      r0, 0x70(r1)
cmplwi   r0, 0
stw      r4, 0x64(r1)
stw      r0, 0x68(r1)
stw      r3, 0x6c(r1)
bne      lbl_801B20F8
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x68(r1)
b        lbl_801B229C

lbl_801B20F8:
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x68(r1)
b        lbl_801B2164

lbl_801B2110:
lwz      r3, 0x6c(r1)
lwz      r4, 0x68(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x70(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B229C
lwz      r3, 0x6c(r1)
lwz      r4, 0x68(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x68(r1)

lbl_801B2164:
lwz      r12, 0x64(r1)
addi     r3, r1, 0x64
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B2110
b        lbl_801B229C

lbl_801B2184:
lwz      r3, 0x6c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
mr       r0, r3
mr       r24, r0
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B21E0
mr       r3, r24
addi     r4, r31, 0x218
lwz      r12, 0(r24)
lwz      r12, 0x208(r12)
mtctr    r12
bctrl
fcmpo    cr0, f1, f30
bge      lbl_801B21E0
mr       r26, r24
fmr      f30, f1

lbl_801B21E0:
lwz      r0, 0x70(r1)
cmplwi   r0, 0
bne      lbl_801B220C
lwz      r3, 0x6c(r1)
lwz      r4, 0x68(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x68(r1)
b        lbl_801B229C

lbl_801B220C:
lwz      r3, 0x6c(r1)
lwz      r4, 0x68(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x68(r1)
b        lbl_801B2280

lbl_801B222C:
lwz      r3, 0x6c(r1)
lwz      r4, 0x68(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x70(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B229C
lwz      r3, 0x6c(r1)
lwz      r4, 0x68(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x68(r1)

lbl_801B2280:
lwz      r12, 0x64(r1)
addi     r3, r1, 0x64
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B222C

lbl_801B229C:
lwz      r3, 0x6c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r4, 0x68(r1)
cmplw    r4, r3
bne      lbl_801B2184
cmplwi   r26, 0
beq      lbl_801B22D8
fcmpo    cr0, f30, f31
bge      lbl_801B22D8
fmr      f31, f30
mr       r29, r26
li       r30, 7

lbl_801B22D8:
lwz      r3, mgr__Q24Game15ItemBigFountain@sda21(r13)
cmplwi   r3, 0
beq      lbl_801B2518
lwz      r4, pikiMgr__4Game@sda21(r13)
li       r26, 0
lwz      r4, 0x6c(r4)
lfs      f30, 0x9d0(r4)
beq      lbl_801B22FC
addi     r3, r3, 0x30

lbl_801B22FC:
li       r0, 0
lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
stw      r0, 0x60(r1)
cmplwi   r0, 0
stw      r4, 0x54(r1)
stw      r0, 0x58(r1)
stw      r3, 0x5c(r1)
bne      lbl_801B2338
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x58(r1)
b        lbl_801B24DC

lbl_801B2338:
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x58(r1)
b        lbl_801B23A4

lbl_801B2350:
lwz      r3, 0x5c(r1)
lwz      r4, 0x58(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x60(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B24DC
lwz      r3, 0x5c(r1)
lwz      r4, 0x58(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x58(r1)

lbl_801B23A4:
lwz      r12, 0x54(r1)
addi     r3, r1, 0x54
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B2350
b        lbl_801B24DC

lbl_801B23C4:
lwz      r3, 0x5c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
mr       r0, r3
mr       r24, r0
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B2420
mr       r3, r24
addi     r4, r31, 0x218
lwz      r12, 0(r24)
lwz      r12, 0x208(r12)
mtctr    r12
bctrl
fcmpo    cr0, f1, f30
bge      lbl_801B2420
mr       r26, r24
fmr      f30, f1

lbl_801B2420:
lwz      r0, 0x60(r1)
cmplwi   r0, 0
bne      lbl_801B244C
lwz      r3, 0x5c(r1)
lwz      r4, 0x58(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x58(r1)
b        lbl_801B24DC

lbl_801B244C:
lwz      r3, 0x5c(r1)
lwz      r4, 0x58(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x58(r1)
b        lbl_801B24C0

lbl_801B246C:
lwz      r3, 0x5c(r1)
lwz      r4, 0x58(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x60(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B24DC
lwz      r3, 0x5c(r1)
lwz      r4, 0x58(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x58(r1)

lbl_801B24C0:
lwz      r12, 0x54(r1)
addi     r3, r1, 0x54
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B246C

lbl_801B24DC:
lwz      r3, 0x5c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r4, 0x58(r1)
cmplw    r4, r3
bne      lbl_801B23C4
cmplwi   r26, 0
beq      lbl_801B2518
fcmpo    cr0, f30, f31
bge      lbl_801B2518
fmr      f31, f30
mr       r29, r26
li       r30, 7

lbl_801B2518:
lwz      r3, mgr__Q24Game10ItemBarrel@sda21(r13)
cmplwi   r3, 0
beq      lbl_801B2758
lwz      r4, pikiMgr__4Game@sda21(r13)
li       r26, 0
lwz      r4, 0x6c(r4)
lfs      f30, 0xa48(r4)
beq      lbl_801B253C
addi     r3, r3, 0x30

lbl_801B253C:
li       r0, 0
lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
stw      r0, 0x50(r1)
cmplwi   r0, 0
stw      r4, 0x44(r1)
stw      r0, 0x48(r1)
stw      r3, 0x4c(r1)
bne      lbl_801B2578
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x48(r1)
b        lbl_801B271C

lbl_801B2578:
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x48(r1)
b        lbl_801B25E4

lbl_801B2590:
lwz      r3, 0x4c(r1)
lwz      r4, 0x48(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x50(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B271C
lwz      r3, 0x4c(r1)
lwz      r4, 0x48(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x48(r1)

lbl_801B25E4:
lwz      r12, 0x44(r1)
addi     r3, r1, 0x44
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B2590
b        lbl_801B271C

lbl_801B2604:
lwz      r3, 0x4c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
mr       r0, r3
mr       r24, r0
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B2660
mr       r3, r24
addi     r4, r31, 0x218
lwz      r12, 0(r24)
lwz      r12, 0x208(r12)
mtctr    r12
bctrl
fcmpo    cr0, f1, f30
bge      lbl_801B2660
mr       r26, r24
fmr      f30, f1

lbl_801B2660:
lwz      r0, 0x50(r1)
cmplwi   r0, 0
bne      lbl_801B268C
lwz      r3, 0x4c(r1)
lwz      r4, 0x48(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x48(r1)
b        lbl_801B271C

lbl_801B268C:
lwz      r3, 0x4c(r1)
lwz      r4, 0x48(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x48(r1)
b        lbl_801B2700

lbl_801B26AC:
lwz      r3, 0x4c(r1)
lwz      r4, 0x48(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x50(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B271C
lwz      r3, 0x4c(r1)
lwz      r4, 0x48(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x48(r1)

lbl_801B2700:
lwz      r12, 0x44(r1)
addi     r3, r1, 0x44
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B26AC

lbl_801B271C:
lwz      r3, 0x4c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r4, 0x48(r1)
cmplw    r4, r3
bne      lbl_801B2604
cmplwi   r26, 0
beq      lbl_801B2758
fcmpo    cr0, f30, f31
bge      lbl_801B2758
fmr      f31, f30
mr       r29, r26
li       r30, 7

lbl_801B2758:
lwz      r3, mgr__Q24Game12ItemTreasure@sda21(r13)
cmplwi   r3, 0
beq      lbl_801B29B4
lwz      r4, pikiMgr__4Game@sda21(r13)
li       r26, 0
lwz      r4, 0x6c(r4)
lfs      f30, 0xa70(r4)
beq      lbl_801B277C
addi     r3, r3, 0x30

lbl_801B277C:
li       r0, 0
lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
stw      r0, 0x40(r1)
cmplwi   r0, 0
stw      r4, 0x34(r1)
stw      r0, 0x38(r1)
stw      r3, 0x3c(r1)
bne      lbl_801B27B8
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x38(r1)
b        lbl_801B2978

lbl_801B27B8:
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x38(r1)
b        lbl_801B2824

lbl_801B27D0:
lwz      r3, 0x3c(r1)
lwz      r4, 0x38(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x40(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B2978
lwz      r3, 0x3c(r1)
lwz      r4, 0x38(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x38(r1)

lbl_801B2824:
lwz      r12, 0x34(r1)
addi     r3, r1, 0x34
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B27D0
b        lbl_801B2978

lbl_801B2844:
lwz      r3, 0x3c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
mr       r0, r3
mr       r24, r0
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B28BC
lbz      r0, 0x2b8(r31)
cmpwi    r0, 4
beq      lbl_801B2894
mr       r3, r24
bl       isVisible__Q34Game12ItemTreasure4ItemFv
clrlwi.  r0, r3, 0x18
beq      lbl_801B28BC

lbl_801B2894:
mr       r3, r24
addi     r4, r31, 0x218
lwz      r12, 0(r24)
lwz      r12, 0x208(r12)
mtctr    r12
bctrl
fcmpo    cr0, f1, f30
bge      lbl_801B28BC
mr       r26, r24
fmr      f30, f1

lbl_801B28BC:
lwz      r0, 0x40(r1)
cmplwi   r0, 0
bne      lbl_801B28E8
lwz      r3, 0x3c(r1)
lwz      r4, 0x38(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x38(r1)
b        lbl_801B2978

lbl_801B28E8:
lwz      r3, 0x3c(r1)
lwz      r4, 0x38(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x38(r1)
b        lbl_801B295C

lbl_801B2908:
lwz      r3, 0x3c(r1)
lwz      r4, 0x38(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x40(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B2978
lwz      r3, 0x3c(r1)
lwz      r4, 0x38(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x38(r1)

lbl_801B295C:
lwz      r12, 0x34(r1)
addi     r3, r1, 0x34
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B2908

lbl_801B2978:
lwz      r3, 0x3c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r4, 0x38(r1)
cmplw    r4, r3
bne      lbl_801B2844
cmplwi   r26, 0
beq      lbl_801B29B4
fcmpo    cr0, f30, f31
bge      lbl_801B29B4
fmr      f31, f30
mr       r29, r26
li       r30, 7

lbl_801B29B4:
lwz      r3, mgr__Q24Game9ItemPlant@sda21(r13)
cmplwi   r3, 0
beq      lbl_801B2C48
lwz      r4, pikiMgr__4Game@sda21(r13)
li       r26, 0
lwz      r4, 0x6c(r4)
lfs      f30, 0xa98(r4)
beq      lbl_801B29D8
addi     r3, r3, 0x30

lbl_801B29D8:
li       r0, 0
lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
stw      r0, 0x30(r1)
cmplwi   r0, 0
stw      r4, 0x24(r1)
stw      r0, 0x28(r1)
stw      r3, 0x2c(r1)
bne      lbl_801B2A14
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x28(r1)
b        lbl_801B2C0C

lbl_801B2A14:
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
stw      r3, 0x28(r1)
b        lbl_801B2A80

lbl_801B2A2C:
lwz      r3, 0x2c(r1)
lwz      r4, 0x28(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x30(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B2C0C
lwz      r3, 0x2c(r1)
lwz      r4, 0x28(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x28(r1)

lbl_801B2A80:
lwz      r12, 0x24(r1)
addi     r3, r1, 0x24
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B2A2C
b        lbl_801B2C0C

lbl_801B2AA0:
lwz      r3, 0x2c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
mr       r0, r3
mr       r24, r0
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B2B50
mr       r4, r24
addi     r3, r1, 8
lwz      r12, 0(r24)
lwz      r12, 8(r12)
mtctr    r12
bctrl
lfs      f1, 0xc(r1)
lfs      f0, 0x21c(r31)
lfs      f3, 8(r1)
fsubs    f4, f1, f0
lfs      f2, 0x218(r31)
lfs      f1, 0x10(r1)
lfs      f0, 0x220(r31)
fsubs    f3, f3, f2
fmuls    f4, f4, f4
fsubs    f2, f1, f0
lfs      f0, lbl_8051935C@sda21(r2)
fmadds   f1, f3, f3, f4
fmuls    f2, f2, f2
fadds    f1, f2, f1
fcmpo    cr0, f1, f0
ble      lbl_801B2B3C
ble      lbl_801B2B40
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_801B2B40

lbl_801B2B3C:
fmr      f1, f0

lbl_801B2B40:
fcmpo    cr0, f1, f30
bge      lbl_801B2B50
mr       r26, r24
fmr      f30, f1

lbl_801B2B50:
lwz      r0, 0x30(r1)
cmplwi   r0, 0
bne      lbl_801B2B7C
lwz      r3, 0x2c(r1)
lwz      r4, 0x28(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x28(r1)
b        lbl_801B2C0C

lbl_801B2B7C:
lwz      r3, 0x2c(r1)
lwz      r4, 0x28(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x28(r1)
b        lbl_801B2BF0

lbl_801B2B9C:
lwz      r3, 0x2c(r1)
lwz      r4, 0x28(r1)
lwz      r12, 0(r3)
lwz      r12, 0x20(r12)
mtctr    r12
bctrl
mr       r4, r3
lwz      r3, 0x30(r1)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B2C0C
lwz      r3, 0x2c(r1)
lwz      r4, 0x28(r1)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
stw      r3, 0x28(r1)

lbl_801B2BF0:
lwz      r12, 0x24(r1)
addi     r3, r1, 0x24
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B2B9C

lbl_801B2C0C:
lwz      r3, 0x2c(r1)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r4, 0x28(r1)
cmplw    r4, r3
bne      lbl_801B2AA0
cmplwi   r26, 0
beq      lbl_801B2C48
fcmpo    cr0, f30, f31
bge      lbl_801B2C48
fmr      f31, f30
mr       r29, r26
li       r30, 8

lbl_801B2C48:
lwz      r3, pikiMgr__4Game@sda21(r13)
li       r24, 0
lwz      r4, generalEnemyMgr__4Game@sda21(r13)
lwz      r3, 0x6c(r3)
cmplwi   r4, 0
lfs      f30, 0x980(r3)
beq      lbl_801B2C68
addi     r4, r4, 4

lbl_801B2C68:
li       r0, 0
stw      r4, 0x1c(r1)
addi     r3, r1, 0x14
stw      r0, 0x20(r1)
stw      r0, 0x14(r1)
stw      r0, 0x18(r1)
bl       "first__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
b        lbl_801B2D14

lbl_801B2C88:
lwz      r12, 0(r3)
lwz      r4, 0x18(r1)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r12, 0(r3)
mr       r25, r3
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B2D0C
mr       r3, r25
lwz      r12, 0(r25)
lwz      r12, 0xcc(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B2D0C
mr       r3, r25
lwz      r12, 0(r25)
lwz      r12, 0xd4(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B2D0C
mr       r3, r25
mr       r4, r31
bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
fcmpo    cr0, f1, f30
bge      lbl_801B2D0C
mr       r24, r25
fmr      f30, f1

lbl_801B2D0C:
addi     r3, r1, 0x14
bl       "next__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"

lbl_801B2D14:
lwz      r3, 0x14(r1)
cmplwi   r3, 0
bne      lbl_801B2C88
cmplwi   r24, 0
beq      lbl_801B2D38
fcmpo    cr0, f30, f31
bge      lbl_801B2D38
mr       r29, r24
li       r30, 5

lbl_801B2D38:
stw      r29, 0(r28)
mr       r3, r30

lbl_801B2D40:
psq_l    f31, 280(r1), 0, qr0
lfd      f31, 0x110(r1)
psq_l    f30, 264(r1), 0, qr0
lfd      f30, 0x100(r1)
lmw      r24, 0xe0(r1)
lwz      r0, 0x124(r1)
mtlr     r0
addi     r1, r1, 0x120
blr
*/
// }

} // namespace Game

/*
 * --INFO--
 * Address:	801B2D64
 * Size:	00004C
 */
// void Iterator<Game::ItemGate>::isDone()
// {
/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r0, 4(r31)
subf     r0, r0, r3
cntlzw   r0, r0
srwi     r3, r0, 5
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
*/
// }

namespace Game {

/*
 * --INFO--
 * Address:	801B2DB0
 * Size:	0007D4
 */
// void Piki::invokeAI(Game::CollEvent*, bool)
// {
/*
stwu     r1, -0x120(r1)
mflr     r0
stw      r0, 0x124(r1)
stmw     r27, 0x10c(r1)
mr       r27, r4
mr       r30, r3
mr       r28, r5
li       r29, 1
lwz      r31, 0(r4)
bl       getCurrActionID__Q24Game4PikiFv
cmpwi    r3, 0
bne      lbl_801B2DF8
mr       r3, r30
bl       getCurrAction__Q24Game4PikiFv
lhz      r0, 0x28(r3)
cmplwi   r0, 1
beq      lbl_801B2DF8
li       r29, 0

lbl_801B2DF8:
clrlwi.  r0, r29, 0x18
beq      lbl_801B2EA4
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B2EA4
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x90(r12)
mtctr    r12
bctrl
cmplwi   r3, 0
beq      lbl_801B2EA4
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x90(r12)
mtctr    r12
bctrl
lwz      r5, 4(r3)
li       r4, 0
cmpwi    r5, -1
beq      lbl_801B2E68
lwz      r0, 8(r3)
cmpw     r0, r5
bge      lbl_801B2E6C

lbl_801B2E68:
li       r4, 1

lbl_801B2E6C:
clrlwi.  r0, r4, 0x18
beq      lbl_801B2EA4
lis      r4, __vt__Q26PikiAI9ActionArg@ha
lis      r3, __vt__Q26PikiAI10ActWeedArg@ha
addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
stw      r31, 0x40(r1)
addi     r0, r3, __vt__Q26PikiAI10ActWeedArg@l
addi     r5, r1, 0x3c
stw      r4, 0x3c(r1)
li       r4, 9
stw      r0, 0x3c(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3570

lbl_801B2EA4:
lhz      r3, 0x128(r31)
cmpwi    r3, 0x407
beq      lbl_801B356C
bge      lbl_801B2EFC
cmpwi    r3, 0x401
beq      lbl_801B30A0
bge      lbl_801B2EE4
cmpwi    r3, 1
beq      lbl_801B2F38
bge      lbl_801B2ED8
cmpwi    r3, 0
bge      lbl_801B3014
b        lbl_801B356C

lbl_801B2ED8:
cmpwi    r3, 3
bge      lbl_801B356C
b        lbl_801B31D8

lbl_801B2EE4:
cmpwi    r3, 0x405
beq      lbl_801B356C
bge      lbl_801B2FB4
cmpwi    r3, 0x404
bge      lbl_801B3284
b        lbl_801B356C

lbl_801B2EFC:
cmpwi    r3, 0x40d
beq      lbl_801B350C
bge      lbl_801B2F20
cmpwi    r3, 0x409
beq      lbl_801B33D0
blt      lbl_801B34D4
cmpwi    r3, 0x40c
bge      lbl_801B3480
b        lbl_801B356C

lbl_801B2F20:
cmpwi    r3, 0x410
beq      lbl_801B33D0
bge      lbl_801B356C
cmpwi    r3, 0x40f
bge      lbl_801B356C
b        lbl_801B33D0

lbl_801B2F38:
clrlwi.  r0, r28, 0x18
beq      lbl_801B356C
lwz      r3, gameSystem__4Game@sda21(r13)
lwz      r0, 0x44(r3)
cmpwi    r0, 1
bne      lbl_801B356C
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B356C
lhz      r3, 0x2dc(r31)
lbz      r0, 0x2b8(r30)
cmpw     r3, r0
bne      lbl_801B356C
lis      r4, __vt__Q26PikiAI9ActionArg@ha
lis      r3, __vt__Q26PikiAI12ActAttackArg@ha
addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
li       r0, 0
stw      r4, 0x78(r1)
addi     r3, r3, __vt__Q26PikiAI12ActAttackArg@l
addi     r5, r1, 0x78
li       r4, 5
stw      r3, 0x78(r1)
stw      r31, 0x7c(r1)
stw      r0, 0x80(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3570

lbl_801B2FB4:
lbz      r0, 0x2b9(r30)
cmpwi    r0, 2
beq      lbl_801B356C
lbz      r0, 0x1e0(r31)
cmplwi   r0, 0
bne      lbl_801B356C
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x228(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B356C
stw      r31, 8(r1)
mr       r4, r30
addi     r6, r1, 8
li       r5, 0xd
lwz      r3, 0x28c(r30)
lwz      r12, 0(r3)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
li       r3, 1
b        lbl_801B3570

lbl_801B3014:
lwz      r3, gameSystem__4Game@sda21(r13)
lwz      r0, 0x44(r3)
cmpwi    r0, 1
bne      lbl_801B356C
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B356C
mr       r3, r31
bl       canVsBattle__Q24Game4PikiFv
clrlwi.  r0, r3, 0x18
beq      lbl_801B356C
mr       r3, r31
bl       getVsBattlePiki__Q24Game4PikiFv
cmplwi   r3, 0
bne      lbl_801B356C
lbz      r3, 0x2b8(r31)
lbz      r0, 0x2b8(r30)
cmpw     r3, r0
beq      lbl_801B356C
lis      r4, __vt__Q26PikiAI9ActionArg@ha
lis      r3, __vt__Q26PikiAI12ActBattleArg@ha
addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
stw      r31, 0x70(r1)
addi     r0, r3, __vt__Q26PikiAI12ActBattleArg@l
addi     r5, r1, 0x6c
stw      r4, 0x6c(r1)
li       r4, 0xd
stw      r0, 0x6c(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3570

lbl_801B30A0:
clrlwi.  r0, r28, 0x18
beq      lbl_801B356C
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B356C
mr       r3, r30
lwz      r12, 0(r30)
lwz      r12, 0x1f4(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B356C
lwz      r3, gameSystem__4Game@sda21(r13)
lwz      r0, 0x44(r3)
cmpwi    r0, 1
bne      lbl_801B3110
mr       r3, r31
lbz      r29, 0x2b8(r30)
lwz      r12, 0(r31)
lwz      r12, 0x1e8(r12)
mtctr    r12
bctrl
cmpw     r3, r29
beq      lbl_801B356C

lbl_801B3110:
mr       r3, r31
bl       getPelletConfigMax__Q24Game6PelletFv
mr       r29, r3
mr       r3, r31
bl       getTotalPikmins__Q24Game6PelletFv
cmpw     r3, r29
bge      lbl_801B356C
mr       r3, r31
bl       discoverDisabled__Q24Game6PelletFv
clrlwi.  r0, r3, 0x18
bne      lbl_801B356C
mr       r3, r31
li       r29, 1
lwz      r12, 0(r31)
lwz      r12, 0x1f4(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x18
cmplwi   r0, 4
bne      lbl_801B3194
lwz      r3, gameSystem__4Game@sda21(r13)
lwz      r0, 0x44(r3)
cmpwi    r0, 0
bne      lbl_801B3194
mr       r3, r31
bl       getConfigIndex__Q24Game6PelletFv
mr       r0, r3
lwz      r3, playData__4Game@sda21(r13)
mr       r4, r0
bl       isFindItemDemoFlag__Q24Game8PlayDataFi
clrlwi.  r0, r3, 0x18
bne      lbl_801B3194
li       r29, 0

lbl_801B3194:
clrlwi.  r0, r29, 0x18
beq      lbl_801B356C
lis      r3, __vt__Q26PikiAI9ActionArg@ha
lis      r4, __vt__Q26PikiAI15ActTransportArg@ha
addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
mr       r3, r30
stw      r0, 0xa4(r1)
addi     r0, r4, __vt__Q26PikiAI15ActTransportArg@l
addi     r4, r1, 0xa4
stw      r0, 0xa4(r1)
bl       setActTransportArg__Q24Game4PikiFRQ26PikiAI15ActTransportArg
stw      r31, 0xa8(r1)
addi     r5, r1, 0xa4
li       r4, 4
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3570

lbl_801B31D8:
clrlwi.  r0, r28, 0x18
beq      lbl_801B3250
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0xd4(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B3250
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B3250
lwz      r6, 4(r27)
lis      r3, __vt__Q26PikiAI9ActionArg@ha
addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
lis      r3, __vt__Q26PikiAI12ActAttackArg@ha
stw      r0, 0x60(r1)
addi     r0, r3, __vt__Q26PikiAI12ActAttackArg@l
addi     r5, r1, 0x60
li       r4, 5
stw      r0, 0x60(r1)
stw      r31, 0x64(r1)
stw      r6, 0x68(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3570

lbl_801B3250:
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x258(r12)
mtctr    r12
bctrl
cmpwi    r3, 0x24
bne      lbl_801B356C
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
b        lbl_801B356C

lbl_801B3284:
clrlwi.  r0, r28, 0x18
beq      lbl_801B356C
lwz      r3, gameSystem__4Game@sda21(r13)
li       r29, 1
lwz      r0, 0x44(r3)
cmpwi    r0, 0
bne      lbl_801B3398
lwz      r3, playData__4Game@sda21(r13)
li       r4, 4
bl       hasMetPikmin__Q24Game8PlayDataFi
clrlwi.  r0, r3, 0x18
bne      lbl_801B3398
lbz      r0, 0x2b8(r30)
cmpwi    r0, 4
beq      lbl_801B3398
mr       r4, r31
addi     r3, r1, 0x44
lwz      r12, 0(r31)
lwz      r12, 8(r12)
mtctr    r12
bctrl
lfs      f3, 0x44(r1)
addi     r3, r1, 0x84
lfs      f2, 0x48(r1)
addi     r4, r1, 0x50
lfs      f1, 0x4c(r1)
lfs      f0, lbl_80519358@sda21(r2)
stfs     f3, 0x50(r1)
stfs     f2, 0x54(r1)
stfs     f1, 0x58(r1)
stfs     f0, 0x5c(r1)
bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
addi     r3, r1, 0xc0
addi     r4, r1, 0x84
bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
addi     r3, r1, 0xc0
bl       first__Q24Game12CellIteratorFv
b        lbl_801B3388

lbl_801B331C:
addi     r3, r1, 0xc0
bl       __ml__Q24Game12CellIteratorFv
lwz      r12, 0(r3)
mr       r28, r3
lwz      r12, 0x7c(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B3380
mr       r3, r28
lwz      r12, 0(r28)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B3380
mr       r3, r28
lwz      r12, 0(r28)
lwz      r12, 0x258(r12)
mtctr    r12
bctrl
cmpwi    r3, 0x15
bne      lbl_801B3380
li       r29, 0
b        lbl_801B3398

lbl_801B3380:
addi     r3, r1, 0xc0
bl       next__Q24Game12CellIteratorFv

lbl_801B3388:
addi     r3, r1, 0xc0
bl       isDone__Q24Game12CellIteratorFv
clrlwi.  r0, r3, 0x18
beq      lbl_801B331C

lbl_801B3398:
clrlwi.  r0, r29, 0x18
beq      lbl_801B356C
lis      r4, __vt__Q26PikiAI9ActionArg@ha
lis      r3, __vt__Q26PikiAI15ActBreakGateArg@ha
addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
stw      r31, 0x38(r1)
addi     r0, r3, __vt__Q26PikiAI15ActBreakGateArg@l
addi     r5, r1, 0x34
stw      r4, 0x34(r1)
li       r4, 6
stw      r0, 0x34(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3570

lbl_801B33D0:
clrlwi.  r0, r28, 0x18
beq      lbl_801B3434
cmplwi   r3, 0x40e
bne      lbl_801B3404
lbz      r0, 0x2b8(r30)
cmpwi    r0, 4
beq      lbl_801B3404
mr       r3, r31
bl       isVisible__Q34Game12ItemTreasure4ItemFv
clrlwi.  r0, r3, 0x18
bne      lbl_801B3404
li       r3, 0
b        lbl_801B3570

lbl_801B3404:
lis      r4, __vt__Q26PikiAI9ActionArg@ha
lis      r3, __vt__Q26PikiAI15ActBreakRockArg@ha
addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
stw      r31, 0x30(r1)
addi     r0, r3, __vt__Q26PikiAI15ActBreakRockArg@l
addi     r5, r1, 0x2c
stw      r4, 0x2c(r1)
li       r4, 7
stw      r0, 0x2c(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3570

lbl_801B3434:
cmplwi   r3, 0x40e
bne      lbl_801B356C
lbz      r0, 0x2b8(r30)
cmpwi    r0, 4
bne      lbl_801B356C
clrlwi.  r0, r29, 0x18
beq      lbl_801B356C
lis      r4, __vt__Q26PikiAI9ActionArg@ha
lis      r3, __vt__Q26PikiAI15ActBreakRockArg@ha
addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
stw      r31, 0x28(r1)
addi     r0, r3, __vt__Q26PikiAI15ActBreakRockArg@l
addi     r5, r1, 0x24
stw      r4, 0x24(r1)
li       r4, 7
stw      r0, 0x24(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3570

lbl_801B3480:
clrlwi.  r0, r28, 0x18
beq      lbl_801B356C
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B356C
lis      r4, __vt__Q26PikiAI9ActionArg@ha
lis      r3, __vt__Q26PikiAI15ActBreakRockArg@ha
addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
stw      r31, 0x20(r1)
addi     r0, r3, __vt__Q26PikiAI15ActBreakRockArg@l
addi     r5, r1, 0x1c
stw      r4, 0x1c(r1)
li       r4, 7
stw      r0, 0x1c(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3570

lbl_801B34D4:
clrlwi.  r0, r28, 0x18
beq      lbl_801B356C
lis      r4, __vt__Q26PikiAI9ActionArg@ha
lis      r3, __vt__Q26PikiAI10ActCropArg@ha
addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
stw      r31, 0x18(r1)
addi     r0, r3, __vt__Q26PikiAI10ActCropArg@l
addi     r5, r1, 0x14
stw      r4, 0x14(r1)
li       r4, 8
stw      r0, 0x14(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3570

lbl_801B350C:
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B356C
mr       r3, r31
addi     r4, r30, 0x20c
bl       "workable__Q34Game10ItemBridge4ItemFR10Vector3<f>"
clrlwi.  r0, r3, 0x18
beq      lbl_801B356C
lis      r4, __vt__Q26PikiAI9ActionArg@ha
lis      r3, __vt__Q26PikiAI15ActBreakRockArg@ha
addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
stw      r31, 0x10(r1)
addi     r0, r3, __vt__Q26PikiAI15ActBreakRockArg@l
addi     r5, r1, 0xc
stw      r4, 0xc(r1)
li       r4, 7
stw      r0, 0xc(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3570

lbl_801B356C:
li       r3, 0

lbl_801B3570:
lmw      r27, 0x10c(r1)
lwz      r0, 0x124(r1)
mtlr     r0
addi     r1, r1, 0x120
blr
*/
} // namespace Game

/*
 * --INFO--
 * Address:	801B3584
 * Size:	0002C4
 */
// void Piki::invokeAI(Game::PlatEvent*)
// {
/*
stwu     r1, -0xc0(r1)
mflr     r0
stw      r0, 0xc4(r1)
stw      r31, 0xbc(r1)
stw      r30, 0xb8(r1)
mr       r30, r3
stw      r29, 0xb4(r1)
mr       r29, r4
lwz      r3, 0(r4)
lwz      r31, 0xf4(r3)
lhz      r0, 0x128(r31)
cmpwi    r0, 0x40c
beq      lbl_801B37DC
bge      lbl_801B35C8
cmpwi    r0, 0x404
beq      lbl_801B35D4
b        lbl_801B3828

lbl_801B35C8:
cmpwi    r0, 0x40e
bge      lbl_801B3828
b        lbl_801B3760

lbl_801B35D4:
lis      r4, 0x67617465@ha
addi     r3, r3, 0xf8
addi     r4, r4, 0x67617465@l
li       r5, 0x2a
bl       match__4ID32FUlc
clrlwi.  r0, r3, 0x18
bne      lbl_801B3610
lwz      r6, 0(r29)
lis      r3, 0x656C6563@ha
addi     r4, r3, 0x656C6563@l
li       r5, 0x2a
addi     r3, r6, 0xf8
bl       match__4ID32FUlc
clrlwi.  r0, r3, 0x18
beq      lbl_801B3828

lbl_801B3610:
mr       r3, r30
bl       gasInvicible__Q24Game4PikiFv
clrlwi.  r0, r3, 0x18
beq      lbl_801B3628
li       r3, 0
b        lbl_801B382C

lbl_801B3628:
lwz      r3, gameSystem__4Game@sda21(r13)
lwz      r0, 0x44(r3)
cmpwi    r0, 0
bne      lbl_801B3730
lwz      r3, playData__4Game@sda21(r13)
li       r4, 4
bl       hasMetPikmin__Q24Game8PlayDataFi
clrlwi.  r0, r3, 0x18
bne      lbl_801B3730
lbz      r0, 0x2b8(r30)
cmpwi    r0, 4
beq      lbl_801B3730
mr       r4, r31
addi     r3, r1, 0x20
lwz      r12, 0(r31)
lwz      r12, 8(r12)
mtctr    r12
bctrl
lfs      f3, 0x20(r1)
addi     r3, r1, 0x3c
lfs      f2, 0x24(r1)
addi     r4, r1, 0x2c
lfs      f1, 0x28(r1)
lfs      f0, lbl_80519358@sda21(r2)
stfs     f3, 0x2c(r1)
stfs     f2, 0x30(r1)
stfs     f1, 0x34(r1)
stfs     f0, 0x38(r1)
bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
addi     r3, r1, 0x5c
addi     r4, r1, 0x3c
bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
addi     r3, r1, 0x5c
bl       first__Q24Game12CellIteratorFv
b        lbl_801B3720

lbl_801B36B4:
addi     r3, r1, 0x5c
bl       __ml__Q24Game12CellIteratorFv
lwz      r12, 0(r3)
mr       r29, r3
lwz      r12, 0x7c(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B3718
mr       r3, r29
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B3718
mr       r3, r29
lwz      r12, 0(r29)
lwz      r12, 0x258(r12)
mtctr    r12
bctrl
cmpwi    r3, 0x15
bne      lbl_801B3718
li       r3, 0
b        lbl_801B382C

lbl_801B3718:
addi     r3, r1, 0x5c
bl       next__Q24Game12CellIteratorFv

lbl_801B3720:
addi     r3, r1, 0x5c
bl       isDone__Q24Game12CellIteratorFv
clrlwi.  r0, r3, 0x18
beq      lbl_801B36B4

lbl_801B3730:
lis      r4, __vt__Q26PikiAI9ActionArg@ha
lis      r3, __vt__Q26PikiAI15ActBreakGateArg@ha
addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
stw      r31, 0x1c(r1)
addi     r0, r3, __vt__Q26PikiAI15ActBreakGateArg@l
addi     r5, r1, 0x18
stw      r4, 0x18(r1)
li       r4, 6
stw      r0, 0x18(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B382C

lbl_801B3760:
lfs      f1, 8(r29)
lfs      f0, lbl_80519368@sda21(r2)
fabs     f1, f1
frsp     f1, f1
fcmpo    cr0, f1, f0
bge      lbl_801B3828
mr       r3, r31
mr       r29, r31
lwz      r12, 0(r31)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B3828
mr       r3, r29
addi     r4, r30, 0x20c
bl       "workable__Q34Game10ItemBridge4ItemFR10Vector3<f>"
clrlwi.  r0, r3, 0x18
beq      lbl_801B3828
lis      r4, __vt__Q26PikiAI9ActionArg@ha
lis      r3, __vt__Q26PikiAI12ActBridgeArg@ha
addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
stw      r31, 0x14(r1)
addi     r0, r3, __vt__Q26PikiAI12ActBridgeArg@l
addi     r5, r1, 0x10
stw      r4, 0x10(r1)
li       r4, 0xa
stw      r0, 0x10(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B382C

lbl_801B37DC:
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B3828
lis      r4, __vt__Q26PikiAI9ActionArg@ha
lis      r3, __vt__Q26PikiAI15ActBreakRockArg@ha
addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
stw      r31, 0xc(r1)
addi     r0, r3, __vt__Q26PikiAI15ActBreakRockArg@l
addi     r5, r1, 8
stw      r4, 8(r1)
li       r4, 7
stw      r0, 8(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B382C

lbl_801B3828:
li       r3, 0

lbl_801B382C:
lwz      r0, 0xc4(r1)
lwz      r31, 0xbc(r1)
lwz      r30, 0xb8(r1)
lwz      r29, 0xb4(r1)
mtlr     r0
addi     r1, r1, 0xc0
blr
*/
// }

/*
 * --INFO--
 * Address:	801B3848
 * Size:	0000B0
 */
// void Piki::invokeAIFree(Game::Piki::InvokeAIFreeArg&)
// {
/*
stwu     r1, -0x10(r1)
mflr     r0
lis      r5, lbl_8047FA28@ha
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
addi     r4, r5, lbl_8047FA28@l
li       r5, 1
stw      r30, 8(r1)
mr       r30, r3
lwz      r6, sys@sda21(r13)
lwz      r3, 0x28(r6)
bl       _start__9SysTimersFPcb
lbz      r0, 0(r31)
cmplwi   r0, 0
bne      lbl_801B3898
addi     r3, r30, 0x298
bl       updatable__Q24Game13UpdateContextFv
clrlwi.  r0, r3, 0x18
beq      lbl_801B38C8

lbl_801B3898:
lbz      r4, 1(r31)
mr       r3, r30
bl       checkInvokeAI__Q24Game4PikiFb
lwz      r5, sys@sda21(r13)
mr       r0, r3
lis      r3, lbl_8047FA28@ha
addi     r4, r3, lbl_8047FA28@l
lwz      r3, 0x28(r5)
mr       r31, r0
bl       _stop__9SysTimersFPc
mr       r3, r31
b        lbl_801B38E0

lbl_801B38C8:
lwz      r5, sys@sda21(r13)
lis      r3, lbl_8047FA28@ha
addi     r4, r3, lbl_8047FA28@l
lwz      r3, 0x28(r5)
bl       _stop__9SysTimersFPc
li       r3, 0

lbl_801B38E0:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
*/
// }

/*
 * --INFO--
 * Address:	801B38F8
 * Size:	000310
 */
// void Piki::checkInvokeAI(bool)
// {
/*
stwu     r1, -0x80(r1)
mflr     r0
li       r5, 0
stw      r0, 0x84(r1)
stw      r31, 0x7c(r1)
stw      r30, 0x78(r1)
mr       r30, r3
stw      r29, 0x74(r1)
mr       r29, r4
lbz      r0, sGraspSituationOptimise__Q24Game4Piki@sda21(r13)
stw      r5, 8(r1)
cmplwi   r0, 0
beq      lbl_801B393C
addi     r4, r1, 8
bl       graspSituation_Fast__Q24Game4PikiFPPQ24Game8Creature
mr       r31, r3
b        lbl_801B3948

lbl_801B393C:
addi     r4, r1, 8
bl       graspSituation__Q24Game4PikiFPPQ24Game8Creature
mr       r31, r3

lbl_801B3948:
clrlwi.  r0, r29, 0x18
beq      lbl_801B3964
subfic   r3, r31, -1
addi     r0, r31, 1
or       r0, r3, r0
srwi     r3, r0, 0x1f
b        lbl_801B3BEC

lbl_801B3964:
lwz      r3, 8(r1)
cmplwi   r3, 0
bne      lbl_801B3978
li       r3, 0
b        lbl_801B3BEC

lbl_801B3978:
addi     r0, r31, -4
cmplwi   r0, 9
bgt      lbl_801B3BE8
lis      r4, lbl_804B5A0C@ha
slwi     r0, r0, 2
addi     r4, r4, lbl_804B5A0C@l
lwzx     r0, r4, r0
mtctr    r0
bctr
.global  lbl_801B399C

lbl_801B399C:
lwz      r12, 0(r3)
lwz      r12, 0x18(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
bne      lbl_801B39D0
lis      r3, lbl_8047FA34@ha
lis      r5, lbl_8047FA40@ha
addi     r3, r3, lbl_8047FA34@l
li       r4, 0x5f9
addi     r5, r5, lbl_8047FA40@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_801B39D0:
lis      r3, __vt__Q26PikiAI9ActionArg@ha
lwz      r0, 8(r1)
addi     r4, r3, __vt__Q26PikiAI9ActionArg@l
lis      r3, __vt__Q26PikiAI12ActBattleArg@ha
stw      r4, 0x48(r1)
addi     r3, r3, __vt__Q26PikiAI12ActBattleArg@l
mr       r4, r31
addi     r5, r1, 0x48
stw      r3, 0x48(r1)
stw      r0, 0x4c(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3BEC
.global  lbl_801B3A04

lbl_801B3A04:
lis      r3, __vt__Q26PikiAI9ActionArg@ha
lis      r4, __vt__Q26PikiAI15ActTransportArg@ha
addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
mr       r3, r30
stw      r0, 0x54(r1)
addi     r0, r4, __vt__Q26PikiAI15ActTransportArg@l
addi     r4, r1, 0x54
stw      r0, 0x54(r1)
bl       setActTransportArg__Q24Game4PikiFRQ26PikiAI15ActTransportArg
clrlwi.  r0, r3, 0x18
beq      lbl_801B3A4C
lwz      r0, 8(r1)
mr       r4, r31
addi     r5, r1, 0x54
stw      r0, 0x58(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3BEC

lbl_801B3A4C:
li       r3, 1
b        lbl_801B3BEC
.global  lbl_801B3A54

lbl_801B3A54:
lis      r5, __vt__Q26PikiAI9ActionArg@ha
lis      r4, __vt__Q26PikiAI12ActAttackArg@ha
addi     r5, r5, __vt__Q26PikiAI9ActionArg@l
li       r0, 0
stw      r5, 0x3c(r1)
addi     r6, r4, __vt__Q26PikiAI12ActAttackArg@l
mr       r4, r31
addi     r5, r1, 0x3c
stw      r6, 0x3c(r1)
stw      r3, 0x40(r1)
stw      r0, 0x44(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3BEC
.global  lbl_801B3A8C

lbl_801B3A8C:
lis      r5, __vt__Q26PikiAI9ActionArg@ha
lis      r4, __vt__Q26PikiAI17CreatureActionArg@ha
addi     r5, r5, __vt__Q26PikiAI9ActionArg@l
stw      r3, 0x38(r1)
addi     r0, r4, __vt__Q26PikiAI17CreatureActionArg@l
mr       r4, r31
stw      r5, 0x34(r1)
addi     r5, r1, 0x34
stw      r0, 0x34(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3BEC
.global  lbl_801B3ABC

lbl_801B3ABC:
lis      r5, __vt__Q26PikiAI9ActionArg@ha
lis      r4, __vt__Q26PikiAI15ActBreakGateArg@ha
addi     r6, r5, __vt__Q26PikiAI9ActionArg@l
stw      r3, 0x30(r1)
addi     r0, r4, __vt__Q26PikiAI15ActBreakGateArg@l
addi     r5, r1, 0x2c
stw      r6, 0x2c(r1)
li       r4, 6
stw      r0, 0x2c(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3BEC
.global  lbl_801B3AEC

lbl_801B3AEC:
lwz      r12, 0(r3)
mr       r31, r3
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_801B3B50
mr       r3, r31
addi     r4, r30, 0x20c
bl       "workable__Q34Game10ItemBridge4ItemFR10Vector3<f>"
clrlwi.  r0, r3, 0x18
beq      lbl_801B3B50
lis      r3, __vt__Q26PikiAI9ActionArg@ha
lwz      r0, 8(r1)
addi     r4, r3, __vt__Q26PikiAI9ActionArg@l
lis      r3, __vt__Q26PikiAI12ActBridgeArg@ha
stw      r4, 0x24(r1)
addi     r3, r3, __vt__Q26PikiAI12ActBridgeArg@l
addi     r5, r1, 0x24
li       r4, 0xa
stw      r3, 0x24(r1)
stw      r0, 0x28(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3BEC

lbl_801B3B50:
li       r3, 1
b        lbl_801B3BEC
.global  lbl_801B3B58

lbl_801B3B58:
lis      r5, __vt__Q26PikiAI9ActionArg@ha
lis      r4, __vt__Q26PikiAI15ActBreakRockArg@ha
addi     r6, r5, __vt__Q26PikiAI9ActionArg@l
stw      r3, 0x20(r1)
addi     r0, r4, __vt__Q26PikiAI15ActBreakRockArg@l
addi     r5, r1, 0x1c
stw      r6, 0x1c(r1)
li       r4, 7
stw      r0, 0x1c(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3BEC
.global  lbl_801B3B88

lbl_801B3B88:
lis      r5, __vt__Q26PikiAI9ActionArg@ha
lis      r4, __vt__Q26PikiAI10ActCropArg@ha
addi     r6, r5, __vt__Q26PikiAI9ActionArg@l
stw      r3, 0x18(r1)
addi     r0, r4, __vt__Q26PikiAI10ActCropArg@l
addi     r5, r1, 0x14
stw      r6, 0x14(r1)
li       r4, 8
stw      r0, 0x14(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3BEC
.global  lbl_801B3BB8

lbl_801B3BB8:
lis      r5, __vt__Q26PikiAI9ActionArg@ha
lis      r4, __vt__Q26PikiAI10ActWeedArg@ha
addi     r6, r5, __vt__Q26PikiAI9ActionArg@l
stw      r3, 0x10(r1)
addi     r0, r4, __vt__Q26PikiAI10ActWeedArg@l
addi     r5, r1, 0xc
stw      r6, 0xc(r1)
li       r4, 9
stw      r0, 0xc(r1)
lwz      r3, 0x294(r30)
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
b        lbl_801B3BEC
.global  lbl_801B3BE8

lbl_801B3BE8:
li       r3, 0

lbl_801B3BEC:
lwz      r0, 0x84(r1)
lwz      r31, 0x7c(r1)
lwz      r30, 0x78(r1)
lwz      r29, 0x74(r1)
mtlr     r0
addi     r1, r1, 0x80
blr
*/
// }

/*
 * --INFO--
 * Address:	801B3C08
 * Size:	000054
 */
// void Piki::invokeAI(void)
// {
/*
stwu     r1, -0x10(r1)
mflr     r0
li       r4, 0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
bl       checkInvokeAI__Q24Game4PikiFb
clrlwi.  r0, r3, 0x18
bne      lbl_801B3C44
lwz      r3, 0x294(r31)
li       r4, 1
li       r5, 0
bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
li       r3, 0
b        lbl_801B3C48

lbl_801B3C44:
li       r3, 1

lbl_801B3C48:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
*/
// }

/*
 * --INFO--
 * Address:	801B3C5C
 * Size:	000028
 */
// void Piki::setActTransportArg(PikiAI::ActTransportArg&)
// {
/*
li       r0, 0
lfs      f0, lbl_8051935C@sda21(r2)
stw      r0, 8(r4)
li       r0, -1
li       r3, 1
stfs     f0, 0xc(r4)
stfs     f0, 0x10(r4)
stfs     f0, 0x14(r4)
sth      r0, 0x18(r4)
blr
*/
// }

// } // namespace Game

/*
 * --INFO--
 * Address:	801B3C84
 * Size:	00000C
 */
// void PikiAI::ActBridgeArg::getName(void)
// {
// 	/*
// 	lis      r3, lbl_8047FA4C@ha
// 	addi     r3, r3, lbl_8047FA4C@l
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801B3C90
 * Size:	00000C
 */
// void PikiAI::ActBreakRockArg::getName(void)
// {
// 	/*
// 	lis      r3, lbl_8047FA5C@ha
// 	addi     r3, r3, lbl_8047FA5C@l
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801B3C9C
//  * Size:	00000C
//  */
// void PikiAI::ActBreakGateArg::getName(void)
// {
// 	/*
// 	lis      r3, lbl_8047FA6C@ha
// 	addi     r3, r3, lbl_8047FA6C@l
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801B3CA8
//  * Size:	00000C
//  */
// void PikiAI::ActTransportArg::getName(void)
// {
// 	/*
// 	lis      r3, lbl_8047FA7C@ha
// 	addi     r3, r3, lbl_8047FA7C@l
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801B3CB4
//  * Size:	00000C
//  */
// void PikiAI::ActAttackArg::getName(void)
// {
// 	/*
// 	lis      r3, lbl_8047FA8C@ha
// 	addi     r3, r3, lbl_8047FA8C@l
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801B3CC0
//  * Size:	00000C
//  */
// void PikiAI::ActWeedArg::getName(void)
// {
// 	/*
// 	lis      r3, lbl_8047FA9C@ha
// 	addi     r3, r3, lbl_8047FA9C@l
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801B3CCC
//  * Size:	000038
//  */
// void Iterator<Game::ItemGate>::operator*()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	mr       r4, r3
// 	stw      r0, 0x14(r1)
// 	lwz      r3, 8(r3)
// 	lwz      r4, 4(r4)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801B3D04
//  * Size:	0000E4
//  */
// void Iterator<Game::ItemGate>::next()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r0, 0xc(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_801B3D44
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_801B3DD4

// lbl_801B3D44:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_801B3DB8

// lbl_801B3D64:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0xc(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801B3DD4
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)

// lbl_801B3DB8:
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801B3D64

// lbl_801B3DD4:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801B3DE8
//  * Size:	0000DC
//  */
// void Iterator<Game::ItemGate>::first()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r0, 0xc(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_801B3E24
// 	lwz      r3, 8(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_801B3EB0

// lbl_801B3E24:
// 	lwz      r3, 8(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_801B3E94

// lbl_801B3E40:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0xc(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801B3EB0
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)

// lbl_801B3E94:
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801B3E40

// lbl_801B3EB0:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }
