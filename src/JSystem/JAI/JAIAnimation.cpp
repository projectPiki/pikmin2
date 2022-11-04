#include "JSystem/JAI/JAIAnimeSound.h"
#include "JSystem/JAI/JAIBasic.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__13JAIAnimeSound
    __vt__13JAIAnimeSound:
        .4byte 0
        .4byte 0
        .4byte __dt__13JAIAnimeSoundFv
        .4byte startSound__Q27JAInter6ObjectFUlUl
        .4byte startSound__Q27JAInter10ObjectBaseFUcUlUl
        .4byte startSound__Q27JAInter10ObjectBaseFPP8JAISoundUlUl
        .4byte stopAllSound__Q27JAInter10ObjectBaseFv
        .4byte stopSound__Q27JAInter10ObjectBaseFUlUl
        .4byte enable__Q27JAInter10ObjectBaseFv
        .4byte disable__Q27JAInter6ObjectFv
        .4byte dispose__Q27JAInter10ObjectBaseFv
        .4byte getFreeSoundHandlePointer__Q27JAInter10ObjectBaseFv
        .4byte getUseSoundHandlePointer__Q27JAInter10ObjectBaseFUl
        .4byte handleStop__13JAIAnimeSoundFUcUl
        .4byte loop__Q27JAInter6ObjectFv
        .4byte playActorAnimSound__13JAIAnimeSoundFPQ27JAInter5ActorfUc
        .4byte startAnimSound__13JAIAnimeSoundFUlPP8JAISoundPQ27JAInter5ActorUc
        .4byte
   setSpeedModifySound__13JAIAnimeSoundFP8JAISoundP22JAIAnimeFrameSoundDataf

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516ED8
    lbl_80516ED8:
        .4byte 0x00000000
    .global lbl_80516EDC
    lbl_80516EDC:
        .float -1.0
    .global lbl_80516EE0
    lbl_80516EE0:
        .4byte 0x42FE0000
    .global lbl_80516EE4
    lbl_80516EE4:
        .float 1.0
    .global lbl_80516EE8
    lbl_80516EE8:
        .4byte 0x3D000000
        .4byte 0x00000000
    .global lbl_80516EF0
    lbl_80516EF0:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516EF8
    lbl_80516EF8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516F00
    lbl_80516F00:
        .4byte 0x40000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800AB0EC
 * Size:	00003C
 */
void JAIAnimeSound::handleStop(u8 handleNo, u32 p2)
{
	_40[handleNo] = 0;
	_44[handleNo] = nullptr;
	ObjectBase::handleStop(handleNo, p2);
}

/*
 * --INFO--
 * Address:	800AB128
 * Size:	000188
 */
JAIAnimeSound::JAIAnimeSound(Vec* p1, JKRHeap* heap, u8 p3)
    : Object(p1, heap, p3)
    , _48(0)
    , _4C(0)
    , _50(0)
    , _54(0)
    , _58(_4C ? 1 : 0)
    , _68(0)
    , _6C(0)
    , m_soundData(nullptr)
{
	// if (_4C) {
	// 	_58 = 1;
	// } else {
	// 	_58 = 0;
	// }
	// _68 = 0;
	// _6C = 0;

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r5
	bl       __ct__Q27JAInter6ObjectFP3VecP7JKRHeapUc
	lis      r4, __vt__13JAIAnimeSound@ha
	li       r3, 0
	addi     r0, r4, __vt__13JAIAnimeSound@l
	stw      r0, 0(r30)
	stw      r3, 0x48(r30)
	stw      r3, 0x4c(r30)
	stw      r3, 0x50(r30)
	stw      r3, 0x54(r30)
	lwz      r0, 0x4c(r30)
	cmplwi   r0, 0
	bne      lbl_800AB18C
	li       r0, 1
	stb      r0, 0x58(r30)
	b        lbl_800AB190

lbl_800AB18C:
	stb      r3, 0x58(r30)

lbl_800AB190:
	li       r0, 0
	clrlwi   r29, r31, 0x18
	stw      r0, 0x68(r30)
	mr       r3, r29
	mr       r4, r28
	li       r5, 0
	stw      r0, 0x6c(r30)
	stw      r0, 0x78(r30)
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x40(r30)
	mr       r4, r28
	slwi     r3, r29, 2
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	mr       r0, r29
	stw      r3, 0x44(r30)
	cmplwi   r0, 0
	li       r3, 0
	ble      lbl_800AB28C
	cmplwi   r0, 8
	addi     r0, r31, -8
	ble      lbl_800AB264
	clrlwi   r0, r0, 0x18
	b        lbl_800AB258

lbl_800AB1F0:
	lwz      r4, 0x44(r30)
	rlwinm   r12, r3, 2, 0x16, 0x1d
	li       r11, 0
	addi     r3, r3, 8
	stwx     r11, r4, r12
	addi     r4, r12, 4
	addi     r9, r12, 8
	addi     r8, r12, 0xc
	lwz      r10, 0x44(r30)
	addi     r7, r12, 0x10
	addi     r6, r12, 0x14
	addi     r5, r12, 0x18
	stwx     r11, r10, r4
	addi     r4, r12, 0x1c
	lwz      r10, 0x44(r30)
	stwx     r11, r10, r9
	lwz      r9, 0x44(r30)
	stwx     r11, r9, r8
	lwz      r8, 0x44(r30)
	stwx     r11, r8, r7
	lwz      r7, 0x44(r30)
	stwx     r11, r7, r6
	lwz      r6, 0x44(r30)
	stwx     r11, r6, r5
	lwz      r5, 0x44(r30)
	stwx     r11, r5, r4

lbl_800AB258:
	clrlwi   r4, r3, 0x18
	cmplw    r4, r0
	blt      lbl_800AB1F0

lbl_800AB264:
	clrlwi   r0, r31, 0x18
	li       r6, 0
	b        lbl_800AB280

lbl_800AB270:
	lwz      r5, 0x44(r30)
	rlwinm   r4, r3, 2, 0x16, 0x1d
	addi     r3, r3, 1
	stwx     r6, r5, r4

lbl_800AB280:
	clrlwi   r4, r3, 0x18
	cmplw    r4, r0
	blt      lbl_800AB270

lbl_800AB28C:
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JAIAnimeSound::initActorAnimSound(JAIAnimeSoundData*, JAInter::Actor, unsigned long, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AB2B0
 * Size:	000194
 */
void JAIAnimeSound::initActorAnimSound(JAIAnimeSoundData*, unsigned long, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r30, r3
	  fmr       f31, f2
	  stw       r4, 0x78(r3)
	  mr        r29, r5
	  lwz       r0, 0x78(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xA0
	  li        r0, 0
	  stw       r0, 0x68(r30)
	  stw       r29, 0x5C(r30)
	  lwz       r4, 0x78(r30)
	  lhz       r31, 0x0(r4)
	  bl        .loc_0x194
	  fmr       f1, f31
	  stw       r3, 0x60(r30)
	  mr        r3, r30
	  bl        0x174
	  cmplwi    r29, 0x1
	  stw       r3, 0x64(r30)
	  bne-      .loc_0x88
	  li        r0, 0
	  lfs       f0, -0x7488(r2)
	  stw       r0, 0x68(r30)
	  stfs      f0, 0x70(r30)
	  stw       r0, 0x6C(r30)
	  b         .loc_0xA0

	.loc_0x88:
	  subi      r0, r31, 0x1
	  lfs       f0, -0x7484(r2)
	  stw       r0, 0x68(r30)
	  li        r0, -0x1
	  stfs      f0, 0x70(r30)
	  stw       r0, 0x6C(r30)

	.loc_0xA0:
	  li        r31, 0
	  b         .loc_0x160

	.loc_0xA8:
	  lwz       r4, 0x1C(r30)
	  rlwinm    r5,r31,2,22,29
	  lwz       r3, 0x44(r30)
	  rlwinm    r6,r31,0,24,31
	  lwzx      r4, r4, r5
	  lwzx      r3, r3, r5
	  cmplwi    r4, 0
	  bne-      .loc_0xE0
	  lwz       r3, 0x40(r30)
	  li        r0, 0
	  stbx      r0, r3, r6
	  lwz       r3, 0x44(r30)
	  stwx      r0, r3, r5
	  b         .loc_0x15C

	.loc_0xE0:
	  cmplwi    r3, 0
	  beq-      .loc_0x114
	  lwz       r0, 0x10(r3)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x114
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x15C

	.loc_0x114:
	  lwz       r0, 0x20(r4)
	  rlwinm.   r0,r0,0,20,21
	  bne-      .loc_0x150
	  lwz       r3, 0x40(r30)
	  lbzx      r0, r3, r6
	  cmplwi    r0, 0
	  beq-      .loc_0x150
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x15C

	.loc_0x150:
	  lwz       r3, 0x40(r30)
	  li        r0, 0x2
	  stbx      r0, r3, r6

	.loc_0x15C:
	  addi      r31, r31, 0x1

	.loc_0x160:
	  lbz       r0, 0x19(r30)
	  rlwinm    r3,r31,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0xA8
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x194:
	*/
}

/*
 * --INFO--
 * Address:	800AB444
 * Size:	000040
 */
int JAIAnimeSound::checkLoopStartCount(float p1)
{
	u32 i = 0;
	// if (m_soundData->_00 == 0) {
	// 	return i;
	// }
	for (; i < m_soundData->_00; i++) {
		if (p1 <= m_soundData->_0C[i]._00) {
			return i;
		}
	}
	return i;
	/*
	lwz      r5, 0x78(r3)
	li       r3, 0
	li       r4, 0
	lhz      r0, 0(r5)
	mtctr    r0
	cmplwi   r0, 0
	blelr

lbl_800AB460:
	addi     r0, r4, 0xc
	lfsx     f0, r5, r0
	fcmpo    cr0, f0, f1
	cror     2, 1, 2
	beqlr
	addi     r4, r4, 0x20
	addi     r3, r3, 1
	bdnz     lbl_800AB460
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AB484
 * Size:	000048
 */
void JAIAnimeSound::checkLoopEndCount(float)
{
	/*
	lwz      r5, 0x78(r3)
	li       r3, 0
	li       r4, 0
	lhz      r6, 0(r5)
	mtctr    r6
	cmplwi   r6, 0
	ble      lbl_800AB4BC

lbl_800AB4A0:
	addi     r0, r4, 0xc
	lfsx     f0, r5, r0
	fcmpo    cr0, f0, f1
	bgt      lbl_800AB4BC
	addi     r4, r4, 0x20
	addi     r3, r3, 1
	bdnz     lbl_800AB4A0

lbl_800AB4BC:
	cmplwi   r3, 0
	bnelr
	mr       r3, r6
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JAIAnimeSound::setLoopStartFrame(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JAIAnimeSound::setLoopEndFrame(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JAIAnimeSound::setLoopFrame(float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JAIAnimeSound::setAnimSound(float, float, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JAIAnimeSound::setAnimSound(JAIBasic*, float, float, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JAIAnimeSound::setAnimObjectSound(float, float, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JAIAnimeSound::setAnimSoundVec(Vec*, float, float, unsigned long, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JAIAnimeSound::setAnimSoundVec(JAIBasic*, Vec*, float, float, unsigned long, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AB4CC
 * Size:	000504
 */
void JAIAnimeSound::setAnimSoundActor(JAInter::Actor*, float, float, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stfd      f30, 0x30(r1)
	  psq_st    f30,0x38(r1),0,0
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  fmr       f30, f1
	  lwz       r0, 0x78(r3)
	  fmr       f31, f2
	  mr        r26, r4
	  mr        r27, r5
	  cmplwi    r0, 0
	  beq-      .loc_0x4E0
	  lfs       f1, 0x70(r25)
	  lfs       f0, -0x7488(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x54
	  stfs      f30, 0x70(r25)

	.loc_0x54:
	  stfs      f31, 0x74(r25)
	  lwz       r0, 0x5C(r25)
	  lwz       r3, 0x78(r25)
	  cmplwi    r0, 0x1
	  lhz       r31, 0x0(r3)
	  bne-      .loc_0x288
	  lfs       f0, 0x70(r25)
	  fcmpo     cr0, f0, f30
	  ble-      .loc_0xCC
	  b         .loc_0x9C

	.loc_0x7C:
	  mr        r3, r25
	  fmr       f1, f31
	  lwz       r12, 0x0(r25)
	  mr        r4, r26
	  mr        r5, r27
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x9C:
	  lwz       r3, 0x68(r25)
	  lwz       r0, 0x64(r25)
	  cmplw     r3, r0
	  blt+      .loc_0x7C
	  lwz       r0, 0x60(r25)
	  stw       r0, 0x68(r25)
	  stfs      f30, 0x70(r25)
	  lwz       r3, 0x6C(r25)
	  cmplwi    r3, 0x100
	  bge-      .loc_0xCC
	  addi      r0, r3, 0x1
	  stw       r0, 0x6C(r25)

	.loc_0xCC:
	  li        r30, 0
	  b         .loc_0x228

	.loc_0xD4:
	  lwz       r5, 0x40(r25)
	  rlwinm    r6,r30,0,24,31
	  lwz       r3, 0x1C(r25)
	  rlwinm    r7,r30,2,22,29
	  lbzx      r0, r5, r6
	  add       r29, r3, r7
	  cmplwi    r0, 0x1
	  bne-      .loc_0x224
	  lwz       r3, 0x44(r25)
	  lwzx      r28, r3, r7
	  lwz       r4, 0x0(r28)
	  rlwinm.   r0,r4,0,20,21
	  bne-      .loc_0x1A8
	  lfs       f0, -0x7488(r2)
	  fcmpu     cr0, f0, f31
	  bne-      .loc_0x120
	  lwz       r0, 0x10(r28)
	  rlwinm.   r0,r0,0,26,26
	  bne-      .loc_0x1C4

	.loc_0x120:
	  lfs       f1, 0x4(r28)
	  lfs       f0, 0x8(r28)
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0x164
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x14C
	  fcmpo     cr0, f0, f30
	  ble-      .loc_0x14C
	  fcmpo     cr0, f1, f30
	  cror      2, 0, 0x2
	  beq-      .loc_0x164

	.loc_0x14C:
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x188
	  fcmpo     cr0, f0, f30
	  bgt-      .loc_0x164
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0x188

	.loc_0x164:
	  lwz       r12, 0x0(r25)
	  mr        r3, r25
	  mr        r5, r29
	  mr        r6, r26
	  lwz       r12, 0x40(r12)
	  mr        r7, r27
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C4

	.loc_0x188:
	  mr        r3, r25
	  mr        r4, r30
	  lwz       r12, 0x0(r25)
	  li        r5, 0
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C4

	.loc_0x1A8:
	  lwz       r0, 0x0(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C4
	  li        r0, 0
	  stbx      r0, r5, r6
	  lwz       r3, 0x44(r25)
	  stwx      r0, r3, r7

	.loc_0x1C4:
	  lwz       r4, 0x0(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x224
	  lwz       r12, 0x0(r25)
	  fmr       f1, f31
	  mr        r3, r25
	  mr        r5, r28
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x10(r28)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x224
	  lfs       f0, 0x8(r28)
	  fcmpo     cr0, f0, f30
	  cror      2, 0, 0x2
	  bne-      .loc_0x224
	  mr        r3, r25
	  mr        r4, r30
	  lwz       r12, 0x0(r25)
	  li        r5, 0
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl

	.loc_0x224:
	  addi      r30, r30, 0x1

	.loc_0x228:
	  lbz       r0, 0x19(r25)
	  rlwinm    r3,r30,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0xD4
	  b         .loc_0x25C

	.loc_0x23C:
	  mr        r3, r25
	  fmr       f1, f31
	  lwz       r12, 0x0(r25)
	  mr        r4, r26
	  mr        r5, r27
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x25C:
	  lwz       r0, 0x68(r25)
	  cmplw     r0, r31
	  bge-      .loc_0x4DC
	  rlwinm    r3,r0,5,0,26
	  lwz       r4, 0x78(r25)
	  addi      r0, r3, 0xC
	  lfsx      f0, r4, r0
	  fcmpo     cr0, f0, f30
	  cror      2, 0, 0x2
	  beq+      .loc_0x23C
	  b         .loc_0x4DC

	.loc_0x288:
	  lfs       f0, 0x70(r25)
	  fcmpo     cr0, f0, f30
	  bge-      .loc_0x324
	  b         .loc_0x2B8

	.loc_0x298:
	  mr        r3, r25
	  fmr       f1, f31
	  lwz       r12, 0x0(r25)
	  mr        r4, r26
	  mr        r5, r27
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2B8:
	  lwz       r3, 0x68(r25)
	  lwz       r4, 0x60(r25)
	  cmplw     r3, r4
	  blt-      .loc_0x2F0
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x2F0
	  rlwinm    r3,r4,5,0,26
	  lwz       r4, 0x78(r25)
	  addi      r0, r3, 0xC
	  lfs       f1, 0x70(r25)
	  lfsx      f0, r4, r0
	  fcmpu     cr0, f1, f0
	  bne+      .loc_0x298

	.loc_0x2F0:
	  lwz       r3, 0x64(r25)
	  subi      r0, r3, 0x1
	  stw       r0, 0x68(r25)
	  stfs      f30, 0x70(r25)
	  lwz       r3, 0x6C(r25)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x318
	  cmplwi    r3, 0x100
	  bge-      .loc_0x324

	.loc_0x318:
	  lwz       r3, 0x6C(r25)
	  addi      r0, r3, 0x1
	  stw       r0, 0x6C(r25)

	.loc_0x324:
	  li        r28, 0
	  b         .loc_0x480

	.loc_0x32C:
	  lwz       r5, 0x40(r25)
	  rlwinm    r6,r28,0,24,31
	  lwz       r3, 0x1C(r25)
	  rlwinm    r7,r28,2,22,29
	  lbzx      r0, r5, r6
	  add       r29, r3, r7
	  cmplwi    r0, 0x1
	  bne-      .loc_0x47C
	  lwz       r3, 0x44(r25)
	  lwzx      r30, r3, r7
	  lwz       r4, 0x0(r30)
	  rlwinm.   r0,r4,0,20,21
	  bne-      .loc_0x400
	  lfs       f0, -0x7488(r2)
	  fcmpu     cr0, f0, f31
	  bne-      .loc_0x378
	  lwz       r0, 0x10(r30)
	  rlwinm.   r0,r0,0,26,26
	  bne-      .loc_0x41C

	.loc_0x378:
	  lfs       f1, 0x4(r30)
	  lfs       f0, 0x8(r30)
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0x3BC
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3A4
	  fcmpo     cr0, f0, f30
	  bge-      .loc_0x3A4
	  fcmpo     cr0, f1, f30
	  cror      2, 0x1, 0x2
	  beq-      .loc_0x3BC

	.loc_0x3A4:
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3E0
	  fcmpo     cr0, f0, f30
	  blt-      .loc_0x3BC
	  fcmpo     cr0, f1, f30
	  ble-      .loc_0x3E0

	.loc_0x3BC:
	  lwz       r12, 0x0(r25)
	  mr        r3, r25
	  mr        r5, r29
	  mr        r6, r26
	  lwz       r12, 0x40(r12)
	  mr        r7, r27
	  mtctr     r12
	  bctrl
	  b         .loc_0x41C

	.loc_0x3E0:
	  mr        r3, r25
	  mr        r4, r28
	  lwz       r12, 0x0(r25)
	  li        r5, 0
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x41C

	.loc_0x400:
	  lwz       r0, 0x0(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x41C
	  li        r0, 0
	  stbx      r0, r5, r6
	  lwz       r3, 0x44(r25)
	  stwx      r0, r3, r7

	.loc_0x41C:
	  lwz       r4, 0x0(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x47C
	  lwz       r12, 0x0(r25)
	  fmr       f1, f31
	  mr        r3, r25
	  mr        r5, r30
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x10(r30)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x47C
	  lfs       f0, 0x8(r30)
	  fcmpo     cr0, f0, f30
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x47C
	  mr        r3, r25
	  mr        r4, r28
	  lwz       r12, 0x0(r25)
	  li        r5, 0
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl

	.loc_0x47C:
	  addi      r28, r28, 0x1

	.loc_0x480:
	  lbz       r0, 0x19(r25)
	  rlwinm    r3,r28,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x32C
	  b         .loc_0x4B4

	.loc_0x494:
	  mr        r3, r25
	  fmr       f1, f31
	  lwz       r12, 0x0(r25)
	  mr        r4, r26
	  mr        r5, r27
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4B4:
	  lwz       r0, 0x68(r25)
	  cmplw     r0, r31
	  bge-      .loc_0x4DC
	  rlwinm    r3,r0,5,0,26
	  lwz       r4, 0x78(r25)
	  addi      r0, r3, 0xC
	  lfsx      f0, r4, r0
	  fcmpo     cr0, f0, f30
	  cror      2, 0x1, 0x2
	  beq+      .loc_0x494

	.loc_0x4DC:
	  stfs      f30, 0x70(r25)

	.loc_0x4E0:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AB9D0
 * Size:	000280
 */
void JAIAnimeSound::playActorAnimSound(JAInter::Actor*, float, unsigned char)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stmw     r27, 0x2c(r1)
	lwz      r0, 0x68(r3)
	mr       r29, r3
	lwz      r6, 0x78(r3)
	fmr      f31, f1
	slwi     r3, r0, 5
	lbz      r9, 0x19(r29)
	addi     r31, r3, 8
	mr       r7, r5
	add      r31, r6, r31
	li       r8, 0
	li       r3, 1
	b        lbl_800ABA9C

lbl_800ABA18:
	lwz      r6, 0x40(r29)
	clrlwi   r10, r8, 0x18
	lbzx     r0, r6, r10
	cmplwi   r0, 0
	beq      lbl_800ABA88
	lwz      r5, 0x1c(r29)
	slwi     r11, r10, 2
	lwzx     r12, r5, r11
	cmplwi   r12, 0
	beq      lbl_800ABA54
	li       r0, 0
	stbx     r0, r6, r10
	lwz      r3, 0x44(r29)
	stwx     r0, r3, r11
	b        lbl_800ABAA8

lbl_800ABA54:
	lwz      r5, 0(r31)
	lwz      r0, 0x20(r12)
	cmplw    r5, r0
	beq      lbl_800ABA6C
	addi     r8, r8, 1
	b        lbl_800ABA9C

lbl_800ABA6C:
	rlwinm.  r0, r5, 0, 0x14, 0x15
	bne      lbl_800ABAA8
	lwz      r3, 0x68(r29)
	lwz      r0, 0x5c(r29)
	add      r0, r3, r0
	stw      r0, 0x68(r29)
	b        lbl_800ABC34

lbl_800ABA88:
	lwz      r5, 0x20(r29)
	slw      r0, r3, r10
	and.     r0, r5, r0
	beq      lbl_800ABAA8
	addi     r8, r8, 1

lbl_800ABA9C:
	clrlwi   r0, r8, 0x18
	cmplw    r0, r9
	blt      lbl_800ABA18

lbl_800ABAA8:
	lbz      r0, 0x19(r29)
	clrlwi   r3, r8, 0x18
	cmplw    r3, r0
	beq      lbl_800ABC24
	lwz      r5, 0x10(r31)
	rlwinm.  r0, r5, 0, 0x1c, 0x1c
	beq      lbl_800ABAD4
	lwz      r3, 0x6c(r29)
	lbz      r0, 0x16(r31)
	cmplw    r3, r0
	bne      lbl_800ABC24

lbl_800ABAD4:
	lwz      r3, 0x5c(r29)
	cmplwi   r3, 1
	bne      lbl_800ABAE8
	rlwinm.  r0, r5, 0, 0x1e, 0x1e
	beq      lbl_800ABAFC

lbl_800ABAE8:
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_800ABC24
	clrlwi.  r0, r5, 0x1f
	bne      lbl_800ABC24

lbl_800ABAFC:
	lwz      r12, 0(r29)
	mr       r6, r4
	lwz      r0, 0x1c(r29)
	rlwinm   r28, r8, 2, 0x16, 0x1d
	lwz      r12, 0x40(r12)
	mr       r3, r29
	add      r30, r0, r28
	clrlwi   r27, r8, 0x18
	mr       r5, r30
	lwz      r4, 0(r31)
	mtctr    r12
	bctrl
	lwz      r0, 0(r30)
	cmplwi   r0, 0
	beq      lbl_800ABC24
	lwz      r3, 0x44(r29)
	lis      r0, 0x4330
	li       r6, 1
	stw      r0, 8(r1)
	lfd      f2, lbl_80516EF0@sda21(r2)
	li       r4, 0
	stwx     r31, r3, r28
	li       r5, 5
	lfs      f0, lbl_80516EE0@sda21(r2)
	lwz      r3, 0x40(r29)
	stbx     r6, r3, r27
	lbz      r0, 0x14(r31)
	lwz      r3, 0(r30)
	stw      r0, 0xc(r1)
	lwz      r12, 0x10(r3)
	lfd      f1, 8(r1)
	lwz      r12, 0x1c(r12)
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	mtctr    r12
	bctrl
	lbz      r3, 0x15(r31)
	lis      r0, 0x4330
	lfs      f0, lbl_80516EE4@sda21(r2)
	li       r4, 0
	extsb    r5, r3
	lwz      r3, 0(r30)
	xoris    r5, r5, 0x8000
	stw      r0, 0x10(r1)
	lwz      r12, 0x10(r3)
	fsubs    f2, f31, f0
	stw      r5, 0x14(r1)
	li       r5, 5
	lfd      f3, lbl_80516EF8@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_80516EE8@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, 0xc(r31)
	lwz      r12, 0x2c(r12)
	fmuls    f2, f3, f2
	fmadds   f1, f2, f1, f0
	mtctr    r12
	bctrl
	lbz      r5, 0x17(r31)
	lis      r0, 0x4330
	lwz      r3, 0(r30)
	li       r4, 0
	stw      r5, 0x1c(r1)
	li       r5, 5
	lwz      r12, 0x10(r3)
	stw      r0, 0x18(r1)
	lfd      f2, lbl_80516EF0@sda21(r2)
	lfd      f1, 0x18(r1)
	lfs      f0, lbl_80516EE0@sda21(r2)
	fsubs    f1, f1, f2
	lwz      r12, 0x24(r12)
	fdivs    f1, f1, f0
	mtctr    r12
	bctrl

lbl_800ABC24:
	lwz      r3, 0x68(r29)
	lwz      r0, 0x5c(r29)
	add      r0, r3, r0
	stw      r0, 0x68(r29)

lbl_800ABC34:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ABC50
 * Size:	00004C
 */
void JAIAnimeSound::startAnimSound(unsigned long id, JAISound** handlePtr, JAInter::Actor* actor, unsigned char p4)
{
	JAIBasic::msBasic->startSoundActorT(id, handlePtr, actor, 0, p4);
	if (*handlePtr != nullptr) {
		(*handlePtr)->_1A = 1;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r8, r7
	  li        r7, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  lwz       r3, -0x7498(r13)
	  bl        -0x963A4
	  lwz       r3, 0x0(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  li        r0, 0x1
	  stb       r0, 0x1A(r3)

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ABC9C
 * Size:	00013C
 */
void JAIAnimeSound::setSpeedModifySound(JAISound*, JAIAnimeFrameSoundData*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r31, r5
	  fmr       f31, f1
	  lbz       r3, 0x15(r5)
	  mr        r30, r4
	  lfs       f1, 0xC(r5)
	  extsb.    r0, r3
	  beq-      .loc_0x6C
	  extsb     r3, r3
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  lfs       f0, -0x747C(r2)
	  stw       r3, 0xC(r1)
	  lfd       f4, -0x7468(r2)
	  fsubs     f2, f31, f0
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x7478(r2)
	  lfd       f3, 0x8(r1)
	  fsubs     f3, f3, f4
	  fmuls     f2, f3, f2
	  fmadds    f1, f2, f0, f1

	.loc_0x6C:
	  lwz       r12, 0x10(r30)
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0x5
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r3, 0x18(r31)
	  lbz       r4, 0x14(r31)
	  extsb.    r0, r3
	  beq-      .loc_0xFC
	  extsb     r3, r3
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  lfs       f0, -0x747C(r2)
	  stw       r3, 0xC(r1)
	  lfd       f2, -0x7468(r2)
	  fsubs     f0, f31, f0
	  stw       r0, 0x8(r1)
	  lfs       f3, -0x7460(r2)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fmuls     f1, f3, f1
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  add       r4, r4, r0
	  extsh     r0, r4
	  cmpwi     r0, 0x7F
	  ble-      .loc_0xF0
	  li        r4, 0x7F
	  b         .loc_0xFC

	.loc_0xF0:
	  extsh.    r0, r4
	  bge-      .loc_0xFC
	  li        r4, 0

	.loc_0xFC:
	  mr        r3, r30
	  rlwinm    r4,r4,0,24,31
	  lwz       r12, 0x10(r30)
	  li        r5, 0
	  li        r6, 0x5
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ABDD8
 * Size:	000060
 */
// JAIAnimeSound::~JAIAnimeSound()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_800ABE1C
// 	lis      r5, __vt__13JAIAnimeSound@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__13JAIAnimeSound@l
// 	stw      r0, 0(r30)
// 	bl       __dt__Q27JAInter6ObjectFv
// 	extsh.   r0, r31
// 	ble      lbl_800ABE1C
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_800ABE1C:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	800ABE38
 * Size:	00000C
 */
// void JAInter::ObjectBase::enable(void)
// {
// 	// Generated from stb r0, 0x18(r3)
// 	_18 = 1;
// }
