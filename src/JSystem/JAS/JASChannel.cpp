#include "JSystem/JAS/JASChannel.h"
#include "JSystem/JAS/JASDsp.h"
#include "JSystem/JAS/JASOscillator.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global calc_sw_table__10JASChannel
    calc_sw_table__10JASChannel:
        .4byte 0x00000000
        .4byte 0x00010000
        .4byte 0x01000100
        .4byte 0x00010100
        .4byte 0x01020001
        .4byte 0x00000201
        .4byte 0x00020201
        .4byte 0x00000100
        .4byte 0x01010002
        .4byte 0x01010001
        .4byte 0x01010101
        .4byte 0x02010200
        .4byte 0x01020101
        .4byte 0x02020100
        .4byte 0x00020001
        .4byte 0x02000202
        .4byte 0x01000201
        .4byte 0x01020102
        .4byte 0x02020002
        .4byte 0x02010202
        .4byte 0x02000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804A43D8
    lbl_804A43D8:
        .4byte lbl_800A4580
        .4byte lbl_800A4554
        .4byte lbl_800A455C
        .4byte lbl_800A4564
        .4byte lbl_800A4580
        .4byte lbl_800A456C
        .4byte lbl_800A4574
        .4byte lbl_800A457C
    .global lbl_804A43F8
    lbl_804A43F8:
        .4byte lbl_800A44A0
        .4byte lbl_800A4474
        .4byte lbl_800A447C
        .4byte lbl_800A4484
        .4byte lbl_800A44A0
        .4byte lbl_800A448C
        .4byte lbl_800A4494
        .4byte lbl_800A449C
    .global __vt__10JASChannel
    __vt__10JASChannel:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@16@__dt__10JASChannelFv"
        .4byte __dt__10JASChannelFv
    .global
   "__vt__109JASPoolAllocObject<10JASChannel,Q217JASCreationPolicy15NewFromRootHeap,Q217JASThreadingModel14SingleThreaded>"
    "__vt__109JASPoolAllocObject<10JASChannel,Q217JASCreationPolicy15NewFromRootHeap,Q217JASThreadingModel14SingleThreaded>":
        .4byte 0
        .4byte 0
        .4byte
   "__dt__109JASPoolAllocObject<10JASChannel,Q217JASCreationPolicy15NewFromRootHeap,Q217JASThreadingModel14SingleThreaded>Fv"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516E10
    lbl_80516E10:
        .float 1.0
    .global lbl_80516E14
    lbl_80516E14:
        .float 0.5
    .global lbl_80516E18
    lbl_80516E18:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80516E20
    lbl_80516E20:
        .4byte 0x3FE00000
        .4byte 0x00000000
    .global lbl_80516E28
    lbl_80516E28:
        .4byte 0x45800000
    .global lbl_80516E2C
    lbl_80516E2C:
        .4byte 0x42FF0000
    .global lbl_80516E30
    lbl_80516E30:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516E38
    lbl_80516E38:
        .4byte 0xC3A2F983
    .global lbl_80516E3C
    lbl_80516E3C:
        .4byte 0x43A2F983
    .global lbl_80516E40
    lbl_80516E40:
        .4byte 0x3FC90FDB
    .global lbl_80516E44
    lbl_80516E44:
        .4byte 0x3EA6F933
    .global lbl_80516E48
    lbl_80516E48:
        .4byte 0x3EB20D99
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800A3204
 * Size:	000160
 */
JASChannel::JASChannel(Callback* callback, void* p2)
    : JSUPtrLink(this)
    , _18(0)
    , _20(nullptr)
    , _24(callback)
    , _28(p2)
    , _2C(0)
    , _30()
    , _C0(1.0f)
    , _C4(0)
    , _C8(0)
    , _F8(1.0f)
    , _FC(1.0f)
{
	_E8    = nullptr;
	_E4    = 0;
	_EC    = 0;
	_CC    = 0.5f;
	_D4    = 0.0f;
	_DC    = 0.0f;
	_D0    = 0.5f;
	_D8    = 0.0f;
	_E0    = 0.0f;
	_B0[0] = 0x150;
	_B2    = 0x210;
	_B4    = 0x352;
	_B6    = 0x412;
	_B8    = 0;
	_BA    = 0;
	_BC    = 0x13F;
	_108   = 0x1A;
	_109   = 1;
	_10A   = 1;
	for (u32 i = 0; i < 4; i++) {
		_30[i].init();
	}
	_100 = 1.0f;
	_104 = 1.0f;
	_1C  = 0;
}

/*
 * --INFO--
 * Address:	800A3364
 * Size:	000030
 */
JASOscillator::JASOscillator() { init(); }

/*
 * --INFO--
 * Address:	800A3394
 * Size:	0000A4
 */
// void JASPoolAllocObject<JASChannel, JASCreationPolicy::NewFromRootHeap, JASThreadingModel::SingleThreaded>::~JASPoolAllocObject()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  stw       r0, 0x24(r1)
// 	  stw       r31, 0x1C(r1)
// 	  stw       r30, 0x18(r1)
// 	  mr.       r30, r3
// 	  beq-      .loc_0x88
// 	  lis       r3, 0x804A
// 	  extsh.    r0, r4
// 	  addi      r0, r3, 0x4430
// 	  stw       r0, 0x0(r30)
// 	  ble-      .loc_0x88
// 	  lwz       r0, -0x75DC(r13)
// 	  cmplwi    r0, 0
// 	  bne-      .loc_0x78
// 	  bl        0x4B868
// 	  lwz       r0, -0x75DC(r13)
// 	  stw       r3, 0x8(r1)
// 	  cmplwi    r0, 0
// 	  bne-      .loc_0x70
// 	  lwz       r4, -0x7548(r13)
// 	  li        r3, 0xC
// 	  li        r5, 0
// 	  bl        -0x7F4B0
// 	  mr.       r31, r3
// 	  beq-      .loc_0x6C
// 	  bl        0x3D88

// 	.loc_0x6C:
// 	  stw       r31, -0x75DC(r13)

// 	.loc_0x70:
// 	  lwz       r3, 0x8(r1)
// 	  bl        0x4B858

// 	.loc_0x78:
// 	  lwz       r3, -0x75DC(r13)
// 	  mr        r4, r30
// 	  li        r5, 0x4
// 	  bl        0x3E58

// 	.loc_0x88:
// 	  lwz       r0, 0x24(r1)
// 	  mr        r3, r30
// 	  lwz       r31, 0x1C(r1)
// 	  lwz       r30, 0x18(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSULink<JASChannel>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	800A3438
 * Size:	00010C
 */
JASChannel::~JASChannel()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	or.      r30, r3, r3
	beq      lbl_800A3528
	lis      r3, __vt__10JASChannel@ha
	addi     r3, r3, __vt__10JASChannel@l
	stw      r3, 0x14(r30)
	addi     r0, r3, 8
	stw      r0, 0x10(r30)
	lwz      r3, 0x20(r30)
	cmplwi   r3, 0
	beq      lbl_800A347C
	bl       drop__13JASDSPChannelFv

lbl_800A347C:
	lwz      r12, 0x24(r30)
	cmplwi   r12, 0
	beq      lbl_800A34A0
	mr       r4, r30
	lwz      r6, 0x28(r30)
	li       r3, 2
	li       r5, 0
	mtctr    r12
	bctrl

lbl_800A34A0:
	addic.   r0, r30, 0x10
	beq      lbl_800A34B4
	lis      r3,
"__vt__109JASPoolAllocObject<10JASChannel,Q217JASCreationPolicy15NewFromRootHeap,Q217JASThreadingModel14SingleThreaded>"@ha
	addi     r0, r3,
"__vt__109JASPoolAllocObject<10JASChannel,Q217JASCreationPolicy15NewFromRootHeap,Q217JASThreadingModel14SingleThreaded>"@l
	stw      r0, 0x10(r30)

lbl_800A34B4:
	cmplwi   r30, 0
	beq      lbl_800A34C8
	mr       r3, r30
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_800A34C8:
	extsh.   r0, r31
	ble      lbl_800A3528
	lwz      r0,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_800A3518
	bl       OSDisableInterrupts
	lwz      r0,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	stw      r3, 8(r1)
	cmplwi   r0, 0
	bne      lbl_800A3510
	lwz      r4, JASDram@sda21(r13)
	li       r3, 0xc
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r31, r3, r3
	beq      lbl_800A350C
	bl       __ct__17JASGenericMemPoolFv

lbl_800A350C:
	stw      r31,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)

lbl_800A3510:
	lwz      r3, 8(r1)
	bl       OSRestoreInterrupts

lbl_800A3518:
	lwz      r3,
"sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"@sda21(r13)
	mr       r4, r30
	li       r5, 0x118
	bl       free__17JASGenericMemPoolFPvUl

lbl_800A3528:
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A3544
 * Size:	000034
 */
void JASChannel::setOscInit(int index, const JASOscillator::Data* data) { _30[index].initStart(data); }

/*
 * --INFO--
 * Address:	800A3578
 * Size:	000010
 */
void JASChannel::setMixConfig(int index, unsigned short mixConfig) { _B0[index] = mixConfig; }

/*
 * --INFO--
 * Address:	800A3588
 * Size:	000008
 */
void JASChannel::directReleaseOsc(unsigned short a1)
{
	// Generated from sth r4, 0x4A(r3)
	_30[0]._1A = a1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void JASChannel::effectOsc(int index, EffectOscParam* param)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A3590
 * Size:	000048
 */
void JASChannel::copyOsc(int index, JASOscillator::Data* toData)
{
	const JASOscillator::Data* fromData = _30[index].m_data;
	if (!fromData) {
		return;
	}
	toData->_00 = fromData->_00;
	toData->_04 = fromData->_04;
	toData->_08 = fromData->_08;
	toData->_0C = fromData->_0C;
	toData->_10 = fromData->_10;
	toData->_14 = fromData->_14;
}

/*
 * --INFO--
 * Address:	800A35D8
 * Size:	000034
 */
void JASChannel::overwriteOsc(int index, JASOscillator::Data* data) { _30[index].initStart(data); }

/*
 * --INFO--
 * Address:	800A360C
 * Size:	000088
 */
void JASChannel::setKeySweepTarget(unsigned char, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0xe4(r3)
	cmplwi   r0, 2
	beq      lbl_800A3640
	lwz      r5, 0xe8(r30)
	cmplwi   r5, 0
	bne      lbl_800A3648

lbl_800A3640:
	clrlwi   r3, r4, 0x18
	b        lbl_800A3658

lbl_800A3648:
	clrlwi   r3, r4, 0x18
	lbz      r4, 1(r5)
	addi     r0, r3, 0x3c
	subf     r3, r4, r0

lbl_800A3658:
	bl       key2pitch_c5__9JASDriverFi
	lfs      f0, 0xf0(r30)
	cmplwi   r31, 0
	fmuls    f0, f1, f0
	bne      lbl_800A3674
	stfs     f0, 0xf8(r30)
	b        lbl_800A3678

lbl_800A3674:
	stfs     f0, 0xc0(r30)

lbl_800A3678:
	stw      r31, 0xc4(r30)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A3694
 * Size:	000008
 */
void JASChannel::setPauseFlag(bool a1)
{
	// Generated from stb r4, 0x1C(r3)
	_1C = a1;
}

/*
 * --INFO--
 * Address:	800A369C
 * Size:	000024
 */
void JASChannel::setPanPower(float p1, float p2, float p3)
{
	float divisor = p1 + p2 + p3;
	_10C          = p1 / divisor;
	_110          = p2 / divisor;
	_114          = p3 / divisor;
}

/*
 * --INFO--
 * Address:	800A36C0
 * Size:	000084
 */
bool JASChannel::play()
{
	JASDSPChannel* dspChannel = JASDSPChannel::alloc(_BC, dspUpdateCallback, this);
	if (dspChannel == nullptr) {
		delete this;
		return false;
	}
	_20 = dspChannel;
	dspChannel->start();
	_18 = 1;
	return true;
}

/*
 * --INFO--
 * Address:	800A3744
 * Size:	000084
 */
bool JASChannel::playForce()
{
	JASDSPChannel* dspChannel = JASDSPChannel::allocForce(_BC, dspUpdateCallback, this);
	if (dspChannel == nullptr) {
		delete this;
		return false;
	}
	_20 = dspChannel;
	dspChannel->start();
	_18 = 1;
	return true;
}

/*
 * --INFO--
 * Address:	800A37C8
 * Size:	000098
 */
void JASChannel::release(unsigned short p1)
{
	if (_18 != 1) {
		return;
	}
	if (p1 != 0) {
		_30[0]._1A = p1;
	}
	for (u32 i = 0; i < 4; i++) {
		if (_30[i].m_data != nullptr) {
			_30[i].release();
		}
	}
	_20->setPriority(_BC >> 8);
	_18 = 2;
}

/*
 * --INFO--
 * Address:	800A3860
 * Size:	00025C
 */
void JASChannel::updateEffectorParam(JASDsp::TChannel*, unsigned short*, const JASChannel::EffectOscParam&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  mr        r28, r3
	  mr        r31, r6
	  lfs       f0, 0xCC(r3)
	  mr        r29, r4
	  lfs       f2, 0x8(r6)
	  mr        r30, r5
	  stfs      f0, 0x20(r1)
	  lfs       f1, 0xC(r6)
	  lfs       f3, 0xD0(r3)
	  lfs       f0, 0x10(r6)
	  stfs      f3, 0x28(r1)
	  lfs       f29, -0x7548(r2)
	  stfs      f2, 0x24(r1)
	  lfs       f2, 0xD4(r3)
	  stfs      f2, 0x14(r1)
	  lfs       f2, 0xD8(r3)
	  stfs      f2, 0x1C(r1)
	  stfs      f1, 0x18(r1)
	  lfs       f1, 0xDC(r3)
	  stfs      f1, 0x8(r1)
	  lfs       f1, 0xE0(r3)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0xC(r1)
	  bl        0x1050
	  cmpwi     r3, 0x1
	  beq-      .loc_0xD8
	  bge-      .loc_0xAC
	  cmpwi     r3, 0
	  bge-      .loc_0xB8
	  b         .loc_0x164

	.loc_0xAC:
	  cmpwi     r3, 0x3
	  bge-      .loc_0x164
	  b         .loc_0x118

	.loc_0xB8:
	  lfs       f31, -0x754C(r2)
	  addi      r3, r1, 0x14
	  lfs       f29, -0x7548(r2)
	  addi      r4, r28, 0x10C
	  lbz       r5, 0x109(r28)
	  bl        0x790
	  fmr       f30, f1
	  b         .loc_0x164

	.loc_0xD8:
	  lbz       r5, 0x108(r28)
	  cmplwi    r5, 0
	  bne-      .loc_0xEC
	  lfs       f1, -0x754C(r2)
	  b         .loc_0xF8

	.loc_0xEC:
	  addi      r3, r1, 0x20
	  addi      r4, r28, 0x10C
	  bl        0x828

	.loc_0xF8:
	  fmr       f31, f1
	  lbz       r5, 0x109(r28)
	  addi      r3, r1, 0x14
	  addi      r4, r28, 0x10C
	  bl        0x754
	  fmr       f30, f1
	  lfs       f29, -0x7548(r2)
	  b         .loc_0x164

	.loc_0x118:
	  lbz       r5, 0x108(r28)
	  cmplwi    r5, 0
	  bne-      .loc_0x12C
	  lfs       f1, -0x754C(r2)
	  b         .loc_0x138

	.loc_0x12C:
	  addi      r3, r1, 0x20
	  addi      r4, r28, 0x10C
	  bl        0x7E8

	.loc_0x138:
	  fmr       f31, f1
	  lbz       r5, 0x109(r28)
	  addi      r3, r1, 0x14
	  addi      r4, r28, 0x10C
	  bl        0x714
	  fmr       f30, f1
	  lbz       r5, 0x10A(r28)
	  addi      r3, r1, 0x8
	  addi      r4, r28, 0x10C
	  bl        0x700
	  fmr       f29, f1

	.loc_0x164:
	  lfs       f1, 0xFC(r28)
	  lfs       f0, 0x0(r31)
	  lfs       f2, -0x7548(r2)
	  fmuls     f0, f1, f0
	  lfs       f1, 0x100(r28)
	  fcmpo     cr0, f31, f2
	  fmuls     f1, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x18C
	  b         .loc_0x1A4

	.loc_0x18C:
	  lfs       f2, -0x7550(r2)
	  fcmpo     cr0, f31, f2
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1A0
	  b         .loc_0x1A4

	.loc_0x1A0:
	  fmr       f2, f31

	.loc_0x1A4:
	  lfs       f3, -0x7548(r2)
	  fcmpo     cr0, f30, f3
	  cror      2, 0, 0x2
	  bne-      .loc_0x1B8
	  b         .loc_0x1D0

	.loc_0x1B8:
	  lfs       f3, -0x7550(r2)
	  fcmpo     cr0, f30, f3
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1CC
	  b         .loc_0x1D0

	.loc_0x1CC:
	  fmr       f3, f30

	.loc_0x1D0:
	  lfs       f4, -0x7548(r2)
	  fcmpo     cr0, f29, f4
	  cror      2, 0, 0x2
	  bne-      .loc_0x1E4
	  b         .loc_0x1FC

	.loc_0x1E4:
	  lfs       f4, -0x7550(r2)
	  fcmpo     cr0, f29, f4
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1F8
	  b         .loc_0x1FC

	.loc_0x1F8:
	  fmr       f4, f29

	.loc_0x1FC:
	  lhz       r0, 0xB0(r28)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x218
	  mr        r3, r28
	  mr        r4, r30
	  bl        0x928
	  b         .loc_0x224

	.loc_0x218:
	  mr        r3, r28
	  mr        r4, r29
	  bl        0x7F8

	.loc_0x224:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A3ABC
 * Size:	0000A0
 */
long JASChannel::dspUpdateCallback(unsigned long p1, JASDsp::TChannel* p2, void* p3)
{
	JASChannel* channel = static_cast<JASChannel*>(p3);
	switch (p1) {
	case 0:
		return channel->updateDSPChannel(p2);
	case 1:
		channel->initialUpdateDSPChannel(p2);
		break;
	case 2:
	case 3:
		channel->_20->free();
		channel->_20 = nullptr;
		delete channel;
		return -1;
	}
	return 0;
}

/*
 * --INFO--
 * Address:	800A3B5C
 * Size:	0002A4
 */
void JASChannel::initialUpdateDSPChannel(JASDsp::TChannel*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	stw      r29, 0x44(r1)
	stw      r28, 0x40(r1)
	lwz      r12, 0x24(r3)
	cmplwi   r12, 0
	beq      lbl_800A3BA4
	mr       r4, r30
	mr       r5, r31
	lwz      r6, 0x28(r30)
	li       r3, 1
	mtctr    r12
	bctrl

lbl_800A3BA4:
	lbz      r0, 0xe4(r30)
	cmpwi    r0, 1
	beq      lbl_800A3BF0
	bge      lbl_800A3BC0
	cmpwi    r0, 0
	bge      lbl_800A3BCC
	b        lbl_800A3BF0

lbl_800A3BC0:
	cmpwi    r0, 3
	bge      lbl_800A3BF0
	b        lbl_800A3BE4

lbl_800A3BCC:
	lwz      r4, 0xe8(r30)
	mr       r3, r31
	lwz      r5, 0xec(r30)
	lwz      r6, 0xc8(r30)
	bl       setWaveInfo__Q26JASDsp8TChannelFRC11JASWaveInfoUlUl
	b        lbl_800A3BF0

lbl_800A3BE4:
	lwz      r4, 0xec(r30)
	mr       r3, r31
	bl       setOscInfo__Q26JASDsp8TChannelFUl

lbl_800A3BF0:
	li       r29, 0
	b        lbl_800A3C78

lbl_800A3BF8:
	rlwinm   r3, r29, 1, 0x17, 0x1e
	addi     r0, r3, 0xb0
	lhzx     r0, r30, r0
	sth      r0, 8(r1)
	bl       getOutputMode__9JASDriverFv
	cmplwi   r3, 0
	bne      lbl_800A3C48
	lbz      r0, 8(r1)
	cmpwi    r0, 9
	beq      lbl_800A3C3C
	bge      lbl_800A3C64
	cmpwi    r0, 8
	bge      lbl_800A3C30
	b        lbl_800A3C64

lbl_800A3C30:
	li       r0, 0xb
	stb      r0, 8(r1)
	b        lbl_800A3C64

lbl_800A3C3C:
	li       r0, 2
	stb      r0, 8(r1)
	b        lbl_800A3C64

lbl_800A3C48:
	cmplwi   r3, 1
	bne      lbl_800A3C64
	lbz      r0, 8(r1)
	cmplwi   r0, 8
	bne      lbl_800A3C64
	li       r0, 0xb
	stb      r0, 8(r1)

lbl_800A3C64:
	lbz      r5, 8(r1)
	mr       r3, r31
	mr       r4, r29
	bl       setBusConnect__Q26JASDsp8TChannelFUcUc
	addi     r29, r29, 1

lbl_800A3C78:
	clrlwi   r0, r29, 0x18
	cmplwi   r0, 6
	blt      lbl_800A3BF8
	lfs      f2, lbl_80516E10@sda21(r2)
	mr       r29, r30
	lfs      f0, lbl_80516E18@sda21(r2)
	li       r28, 0
	lfs      f1, lbl_80516E14@sda21(r2)
	stfs     f2, 0x18(r1)
	stfs     f2, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x28(r1)

lbl_800A3CAC:
	lwz      r0, 0x30(r29)
	cmplwi   r0, 0
	beq      lbl_800A3D4C
	addi     r3, r29, 0x30
	bl       getValue__13JASOscillatorCFv
	lwz      r3, 0x30(r29)
	lwz      r0, 0(r3)
	cmpwi    r0, 2
	beq      lbl_800A3D14
	bge      lbl_800A3CE4
	cmpwi    r0, 0
	beq      lbl_800A3D04
	bge      lbl_800A3CF4
	b        lbl_800A3D4C

lbl_800A3CE4:
	cmpwi    r0, 4
	beq      lbl_800A3D40
	bge      lbl_800A3D4C
	b        lbl_800A3D30

lbl_800A3CF4:
	lfs      f0, 0x1c(r1)
	fmuls    f0, f0, f1
	stfs     f0, 0x1c(r1)
	b        lbl_800A3D4C

lbl_800A3D04:
	lfs      f0, 0x18(r1)
	fmuls    f0, f0, f1
	stfs     f0, 0x18(r1)
	b        lbl_800A3D4C

lbl_800A3D14:
	lfd      f2, lbl_80516E20@sda21(r2)
	lfs      f0, 0x20(r1)
	fsub     f1, f1, f2
	frsp     f1, f1
	fadds    f0, f0, f1
	stfs     f0, 0x20(r1)
	b        lbl_800A3D4C

lbl_800A3D30:
	lfs      f0, 0x24(r1)
	fadds    f0, f0, f1
	stfs     f0, 0x24(r1)
	b        lbl_800A3D4C

lbl_800A3D40:
	lfs      f0, 0x28(r1)
	fadds    f0, f0, f1
	stfs     f0, 0x28(r1)

lbl_800A3D4C:
	addi     r28, r28, 1
	addi     r29, r29, 0x20
	cmpwi    r28, 4
	blt      lbl_800A3CAC
	mr       r3, r30
	mr       r4, r31
	addi     r5, r1, 0xc
	addi     r6, r1, 0x18
	bl
updateEffectorParam__10JASChannelFPQ26JASDsp8TChannelPUsRCQ210JASChannel14EffectOscParam
	addi     r29, r1, 0xc
	li       r28, 0
	b        lbl_800A3D98

lbl_800A3D7C:
	rlwinm   r0, r28, 1, 0x17, 0x1e
	mr       r3, r31
	lhzx     r0, r29, r0
	mr       r4, r28
	extsh    r5, r0
	bl       setMixerInitVolume__Q26JASDsp8TChannelFUcs
	addi     r28, r28, 1

lbl_800A3D98:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 6
	blt      lbl_800A3D7C
	lfs      f1, 0xf8(r30)
	mr       r3, r31
	lfs      f0, 0x1c(r1)
	lfs      f2, 0x104(r30)
	fmuls    f0, f1, f0
	lfs      f1, lbl_80516E28@sda21(r2)
	fmuls    f0, f2, f0
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r4, 0x34(r1)
	bl       setPitch__Q26JASDsp8TChannelFUs
	lbz      r4, 0x1c(r30)
	mr       r3, r31
	bl       setPauseFlag__Q26JASDsp8TChannelFUc
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	lwz      r28, 0x40(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A3E00
 * Size:	0002BC
 */
long JASChannel::updateDSPChannel(JASDsp::TChannel*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	lwz      r3, 0xe8(r3)
	cmplwi   r3, 0
	beq      lbl_800A3E78
	lwz      r3, 0x24(r3)
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_800A3E78
	lwz      r3, 0x20(r30)
	bl       free__13JASDSPChannelFv
	li       r0, 0
	cmplwi   r30, 0
	stw      r0, 0x20(r30)
	beq      lbl_800A3E70
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0x14(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_800A3E70:
	li       r3, -1
	b        lbl_800A409C

lbl_800A3E78:
	lwz      r12, 0x24(r30)
	cmplwi   r12, 0
	beq      lbl_800A3E9C
	mr       r4, r30
	mr       r5, r31
	lwz      r6, 0x28(r30)
	li       r3, 0
	mtctr    r12
	bctrl

lbl_800A3E9C:
	lwz      r3, 0x2c(r30)
	cmplwi   r3, 0
	beq      lbl_800A3EE0
	addi     r0, r3, -1
	stw      r0, 0x2c(r30)
	lwz      r0, 0x2c(r30)
	cmplwi   r0, 0
	bne      lbl_800A3EE0
	lwz      r12, 0x24(r30)
	cmplwi   r12, 0
	beq      lbl_800A3EE0
	mr       r4, r30
	mr       r5, r31
	lwz      r6, 0x28(r30)
	li       r3, 3
	mtctr    r12
	bctrl

lbl_800A3EE0:
	lfs      f2, lbl_80516E10@sda21(r2)
	mr       r29, r30
	lfs      f0, lbl_80516E18@sda21(r2)
	li       r28, 0
	lfs      f1, lbl_80516E14@sda21(r2)
	stfs     f2, 0x14(r1)
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f0, 0x24(r1)

lbl_800A3F08:
	lwz      r0, 0x30(r29)
	cmplwi   r0, 0
	beq      lbl_800A3FFC
	addi     r3, r29, 0x30
	bl       incCounter__13JASOscillatorFv
	addi     r3, r29, 0x30
	bl       getValue__13JASOscillatorCFv
	lwz      r3, 0x30(r29)
	lwz      r0, 0(r3)
	cmpwi    r0, 2
	beq      lbl_800A3F78
	bge      lbl_800A3F48
	cmpwi    r0, 0
	beq      lbl_800A3F68
	bge      lbl_800A3F58
	b        lbl_800A3FB0

lbl_800A3F48:
	cmpwi    r0, 4
	beq      lbl_800A3FA4
	bge      lbl_800A3FB0
	b        lbl_800A3F94

lbl_800A3F58:
	lfs      f0, 0x18(r1)
	fmuls    f0, f0, f1
	stfs     f0, 0x18(r1)
	b        lbl_800A3FB0

lbl_800A3F68:
	lfs      f0, 0x14(r1)
	fmuls    f0, f0, f1
	stfs     f0, 0x14(r1)
	b        lbl_800A3FB0

lbl_800A3F78:
	lfd      f2, lbl_80516E20@sda21(r2)
	lfs      f0, 0x1c(r1)
	fsub     f1, f1, f2
	frsp     f1, f1
	fadds    f0, f0, f1
	stfs     f0, 0x1c(r1)
	b        lbl_800A3FB0

lbl_800A3F94:
	lfs      f0, 0x20(r1)
	fadds    f0, f0, f1
	stfs     f0, 0x20(r1)
	b        lbl_800A3FB0

lbl_800A3FA4:
	lfs      f0, 0x24(r1)
	fadds    f0, f0, f1
	stfs     f0, 0x24(r1)

lbl_800A3FB0:
	cmpwi    r28, 0
	bne      lbl_800A3FFC
	lbz      r0, 0x4c(r29)
	cmplwi   r0, 0
	bne      lbl_800A3FFC
	lwz      r3, 0x20(r30)
	bl       free__13JASDSPChannelFv
	li       r0, 0
	cmplwi   r30, 0
	stw      r0, 0x20(r30)
	beq      lbl_800A3FF4
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0x14(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_800A3FF4:
	li       r3, -1
	b        lbl_800A409C

lbl_800A3FFC:
	addi     r28, r28, 1
	addi     r29, r29, 0x20
	cmpwi    r28, 4
	blt      lbl_800A3F08
	mr       r3, r30
	mr       r4, r31
	addi     r5, r1, 8
	addi     r6, r1, 0x14
	bl
updateEffectorParam__10JASChannelFPQ26JASDsp8TChannelPUsRCQ210JASChannel14EffectOscParam
	mr       r3, r30
	bl       sweepProc__10JASChannelFv
	addi     r29, r1, 8
	li       r28, 0
	b        lbl_800A4050

lbl_800A4034:
	rlwinm   r0, r28, 1, 0x17, 0x1e
	mr       r3, r31
	lhzx     r0, r29, r0
	mr       r4, r28
	extsh    r5, r0
	bl       setMixerVolume__Q26JASDsp8TChannelFUcs
	addi     r28, r28, 1

lbl_800A4050:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 6
	blt      lbl_800A4034
	lfs      f1, 0xf8(r30)
	mr       r3, r31
	lfs      f0, 0x18(r1)
	lfs      f2, 0x104(r30)
	fmuls    f0, f1, f0
	lfs      f1, lbl_80516E28@sda21(r2)
	fmuls    f0, f2, f0
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r4, 0x2c(r1)
	bl       setPitch__Q26JASDsp8TChannelFUs
	lbz      r4, 0x1c(r30)
	mr       r3, r31
	bl       setPauseFlag__Q26JASDsp8TChannelFUc
	li       r3, 0

lbl_800A409C:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A40BC
 * Size:	0000C0
 */
void JASChannel::calcEffect(const JASChannel::PanVector*, const JASChannel::PanVector*, unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r5,0,24,31
	  lis       r5, 0x8048
	  mulli     r6, r0, 0x3
	  lfs       f1, -0x7548(r2)
	  subi      r0, r5, 0x71E8
	  add       r5, r0, r6
	  lbz       r0, 0x0(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x38
	  bge-      .loc_0x2C
	  b         .loc_0x50

	.loc_0x2C:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x50
	  b         .loc_0x44

	.loc_0x38:
	  lfs       f0, 0x0(r3)
	  fadds     f1, f1, f0
	  b         .loc_0x50

	.loc_0x44:
	  lfs       f2, 0x0(r3)
	  lfs       f0, 0x0(r4)
	  fmadds    f1, f2, f0, f1

	.loc_0x50:
	  lbz       r0, 0x1(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x70
	  bge-      .loc_0x64
	  b         .loc_0x88

	.loc_0x64:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x88
	  b         .loc_0x7C

	.loc_0x70:
	  lfs       f0, 0x4(r3)
	  fadds     f1, f1, f0
	  b         .loc_0x88

	.loc_0x7C:
	  lfs       f2, 0x4(r3)
	  lfs       f0, 0x4(r4)
	  fmadds    f1, f2, f0, f1

	.loc_0x88:
	  lbz       r0, 0x2(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xA4
	  bltlr-
	  cmpwi     r0, 0x3
	  bgelr-
	  b         .loc_0xB0

	.loc_0xA4:
	  lfs       f0, 0x8(r3)
	  fadds     f1, f1, f0
	  blr

	.loc_0xB0:
	  lfs       f2, 0x8(r3)
	  lfs       f0, 0x8(r4)
	  fmadds    f1, f2, f0, f1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A417C
 * Size:	0000FC
 */
void JASChannel::calcPan(const JASChannel::PanVector*, const JASChannel::PanVector*, unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r5,0,24,31
	  lis       r5, 0x8048
	  mulli     r6, r0, 0x3
	  lfs       f1, -0x7548(r2)
	  subi      r0, r5, 0x71E8
	  add       r5, r0, r6
	  lbz       r0, 0x0(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x38
	  bge-      .loc_0x2C
	  b         .loc_0x60

	.loc_0x2C:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x60
	  b         .loc_0x4C

	.loc_0x38:
	  lfs       f2, 0x0(r3)
	  lfs       f0, -0x754C(r2)
	  fsubs     f0, f2, f0
	  fadds     f1, f1, f0
	  b         .loc_0x60

	.loc_0x4C:
	  lfs       f3, 0x0(r3)
	  lfs       f2, -0x754C(r2)
	  lfs       f0, 0x0(r4)
	  fsubs     f2, f3, f2
	  fmadds    f1, f2, f0, f1

	.loc_0x60:
	  lbz       r0, 0x1(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x80
	  bge-      .loc_0x74
	  b         .loc_0xA8

	.loc_0x74:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xA8
	  b         .loc_0x94

	.loc_0x80:
	  lfs       f2, 0x4(r3)
	  lfs       f0, -0x754C(r2)
	  fsubs     f0, f2, f0
	  fadds     f1, f1, f0
	  b         .loc_0xA8

	.loc_0x94:
	  lfs       f3, 0x4(r3)
	  lfs       f2, -0x754C(r2)
	  lfs       f0, 0x4(r4)
	  fsubs     f2, f3, f2
	  fmadds    f1, f2, f0, f1

	.loc_0xA8:
	  lbz       r0, 0x2(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xC8
	  bge-      .loc_0xBC
	  b         .loc_0xF0

	.loc_0xBC:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xF0
	  b         .loc_0xDC

	.loc_0xC8:
	  lfs       f2, 0x8(r3)
	  lfs       f0, -0x754C(r2)
	  fsubs     f0, f2, f0
	  fadds     f1, f1, f0
	  b         .loc_0xF0

	.loc_0xDC:
	  lfs       f3, 0x8(r3)
	  lfs       f2, -0x754C(r2)
	  lfs       f0, 0x8(r4)
	  fsubs     f2, f3, f2
	  fmadds    f1, f2, f0, f1

	.loc_0xF0:
	  lfs       f0, -0x754C(r2)
	  fadds     f1, f1, f0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A4278
 * Size:	000120
 */
void JASChannel::updateAutoMixer(JASDsp::TChannel*, float, float, float, float)
{

	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	lfs      f31, lbl_80516E18@sda21(r2)
	fmr      f28, f2
	fmr      f29, f3
	mr       r30, r3
	fcmpo    cr0, f1, f31
	mr       r31, r4
	fmr      f30, f4
	cror     2, 0, 2
	bne      lbl_800A42D4
	b        lbl_800A42EC

lbl_800A42D4:
	lfs      f31, lbl_80516E10@sda21(r2)
	fcmpo    cr0, f1, f31
	cror     2, 1, 2
	bne      lbl_800A42E8
	b        lbl_800A42EC

lbl_800A42E8:
	fmr      f31, f1

lbl_800A42EC:
	bl       getAutoLevel__9JASDriverFv
	clrlwi   r3, r3, 0x10
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	mr       r3, r31
	lfs      f0, lbl_80516E2C@sda21(r2)
	stw      r0, 8(r1)
	lfd      f4, lbl_80516E30@sda21(r2)
	fmuls    f2, f0, f28
	lfd      f3, 8(r1)
	fmuls    f1, f0, f30
	fmuls    f0, f0, f29
	lhz      r0, 0xb2(r30)
	fsubs    f3, f3, f4
	fctiwz   f2, f2
	clrlwi   r8, r0, 0x18
	fctiwz   f1, f1
	fmuls    f3, f31, f3
	stfd     f2, 0x18(r1)
	fctiwz   f0, f0
	fctiwz   f2, f3
	stfd     f1, 0x20(r1)
	lwz      r5, 0x1c(r1)
	stfd     f0, 0x28(r1)
	lwz      r6, 0x24(r1)
	stfd     f2, 0x10(r1)
	lwz      r7, 0x2c(r1)
	lwz      r4, 0x14(r1)
	bl       setAutoMixer__Q26JASDsp8TChannelFUsUcUcUcUc
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A4398
 * Size:	0003D4
 */
void JASChannel::updateMixer(float, float, float, float, unsigned short*)
{
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stfd     f28, 0x80(r1)
	psq_st   f28, 136(r1), 0, qr0
	stfd     f27, 0x70(r1)
	psq_st   f27, 120(r1), 0, qr0
	stfd     f26, 0x60(r1)
	psq_st   f26, 104(r1), 0, qr0
	stfd     f25, 0x50(r1)
	psq_st   f25, 88(r1), 0, qr0
	stfd     f24, 0x40(r1)
	psq_st   f24, 72(r1), 0, qr0
	stfd     f23, 0x30(r1)
	psq_st   f23, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	fmr      f25, f2
	lfs      f0, lbl_80516E10@sda21(r2)
	fmr      f26, f3
	mr       r31, r3
	fmr      f27, f4
	mr       r30, r4
	fmr      f24, f1
	li       r29, 0
	fsubs    f31, f0, f25
	fsubs    f30, f0, f26
	fsubs    f29, f0, f27

lbl_800A4424:
	lhz      r0, 0xb0(r31)
	fmr      f0, f24
	sth      r0, 8(r1)
	lbz      r0, 8(r1)
	cmplwi   r0, 0
	bne      lbl_800A4448
	li       r0, 0
	sth      r0, 0(r30)
	b        lbl_800A46F4

lbl_800A4448:
	lbz      r0, 9(r1)
	rlwinm.  r4, r0, 0x1c, 0x1c, 0x1f
	beq      lbl_800A4528
	cmplwi   r4, 7
	bgt      lbl_800A44A0
	lis      r3, lbl_804A43F8@ha
	slwi     r0, r4, 2
	addi     r3, r3, lbl_804A43F8@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_800A4474

lbl_800A4474:
	fmr      f28, f25
	b        lbl_800A44A0
	.global  lbl_800A447C

lbl_800A447C:
	fmr      f28, f26
	b        lbl_800A44A0
	.global  lbl_800A4484

lbl_800A4484:
	fmr      f28, f27
	b        lbl_800A44A0
	.global  lbl_800A448C

lbl_800A448C:
	fmr      f28, f31
	b        lbl_800A44A0
	.global  lbl_800A4494

lbl_800A4494:
	fmr      f28, f30
	b        lbl_800A44A0
	.global  lbl_800A449C

lbl_800A449C:
	fmr      f28, f29
	.global  lbl_800A44A0

lbl_800A44A0:
	cmpwi    r4, 6
	beq      lbl_800A44B8
	bge      lbl_800A44C0
	cmpwi    r4, 2
	beq      lbl_800A44B8
	b        lbl_800A44C0

lbl_800A44B8:
	fmuls    f0, f0, f28
	b        lbl_800A4528

lbl_800A44C0:
	lfs      f2, lbl_80516E40@sda21(r2)
	lfs      f1, lbl_80516E18@sda21(r2)
	fmuls    f2, f2, f28
	fcmpo    cr0, f2, f1
	bge      lbl_800A4500
	lfs      f1, lbl_80516E38@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0
	fneg     f1, f1
	b        lbl_800A4524

lbl_800A4500:
	lfs      f1, lbl_80516E3C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_800A4524:
	fmuls    f0, f0, f1

lbl_800A4528:
	lbz      r0, 9(r1)
	clrlwi.  r4, r0, 0x1c
	beq      lbl_800A4694
	cmplwi   r4, 7
	bgt      lbl_800A4580
	lis      r3, lbl_804A43D8@ha
	slwi     r0, r4, 2
	addi     r3, r3, lbl_804A43D8@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_800A4554

lbl_800A4554:
	fmr      f28, f25
	b        lbl_800A4580
	.global  lbl_800A455C

lbl_800A455C:
	fmr      f28, f26
	b        lbl_800A4580
	.global  lbl_800A4564

lbl_800A4564:
	fmr      f28, f27
	b        lbl_800A4580
	.global  lbl_800A456C

lbl_800A456C:
	fmr      f28, f31
	b        lbl_800A4580
	.global  lbl_800A4574

lbl_800A4574:
	fmr      f28, f30
	b        lbl_800A4580
	.global  lbl_800A457C

lbl_800A457C:
	fmr      f28, f29
	.global  lbl_800A4580

lbl_800A4580:
	cmpwi    r4, 6
	beq      lbl_800A4624
	bge      lbl_800A45A4
	cmpwi    r4, 3
	beq      lbl_800A45AC
	bge      lbl_800A462C
	cmpwi    r4, 2
	bge      lbl_800A4624
	b        lbl_800A462C

lbl_800A45A4:
	cmpwi    r4, 8
	bge      lbl_800A462C

lbl_800A45AC:
	lfs      f2, lbl_80516E48@sda21(r2)
	lfs      f1, lbl_80516E44@sda21(r2)
	lfs      f3, lbl_80516E40@sda21(r2)
	fmadds   f2, f2, f28, f1
	lfs      f1, lbl_80516E18@sda21(r2)
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f1
	bge      lbl_800A45F8
	lfs      f1, lbl_80516E38@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0
	fneg     f1, f1
	b        lbl_800A461C

lbl_800A45F8:
	lfs      f1, lbl_80516E3C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_800A461C:
	fmuls    f0, f0, f1
	b        lbl_800A4694

lbl_800A4624:
	fmuls    f0, f0, f28
	b        lbl_800A4694

lbl_800A462C:
	lfs      f2, lbl_80516E40@sda21(r2)
	lfs      f1, lbl_80516E18@sda21(r2)
	fmuls    f2, f2, f28
	fcmpo    cr0, f2, f1
	bge      lbl_800A466C
	lfs      f1, lbl_80516E38@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0
	fneg     f1, f1
	b        lbl_800A4690

lbl_800A466C:
	lfs      f1, lbl_80516E3C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_800A4690:
	fmuls    f0, f0, f1

lbl_800A4694:
	lfs      f23, lbl_80516E18@sda21(r2)
	fcmpo    cr0, f0, f23
	cror     2, 0, 2
	bne      lbl_800A46A8
	b        lbl_800A46C0

lbl_800A46A8:
	lfs      f23, lbl_80516E10@sda21(r2)
	fcmpo    cr0, f0, f23
	cror     2, 1, 2
	bne      lbl_800A46BC
	b        lbl_800A46C0

lbl_800A46BC:
	fmr      f23, f0

lbl_800A46C0:
	bl       getChannelLevel__9JASDriverFv
	clrlwi   r3, r3, 0x10
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f1, lbl_80516E30@sda21(r2)
	stw      r0, 0x18(r1)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f1
	fmuls    f0, f23, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	sth      r0, 0(r30)

lbl_800A46F4:
	addi     r29, r29, 1
	addi     r30, r30, 2
	cmplwi   r29, 6
	addi     r31, r31, 2
	blt      lbl_800A4424
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	psq_l    f27, 120(r1), 0, qr0
	lfd      f27, 0x70(r1)
	psq_l    f26, 104(r1), 0, qr0
	lfd      f26, 0x60(r1)
	psq_l    f25, 88(r1), 0, qr0
	lfd      f25, 0x50(r1)
	psq_l    f24, 72(r1), 0, qr0
	lfd      f24, 0x40(r1)
	psq_l    f23, 56(r1), 0, qr0
	lfd      f23, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r0, 0xc4(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A476C
 * Size:	000054
 */
void JASChannel::sweepProc()
{
	if (_C4 == 0) {
		return;
	}
	_F8 = _F8 + (_C0 - _F8) / _C4;
	_C4--;
	/*
	stwu     r1, -0x10(r1)
	lwz      r4, 0xc4(r3)
	cmplwi   r4, 0
	beq      lbl_800A47B8
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	lfs      f3, 0xc0(r3)
	stw      r0, 8(r1)
	lfs      f2, 0xf8(r3)
	lfd      f1, lbl_80516E30@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f3, f3, f2
	fsubs    f0, f0, f1
	fdivs    f3, f3, f0
	fadds    f0, f2, f3
	stfs     f0, 0xf8(r3)
	lwz      r4, 0xc4(r3)
	addi     r0, r4, -1
	stw      r0, 0xc4(r3)

lbl_800A47B8:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A47C0
 * Size:	000010
 */
void JASChannel::free()
{
	_24 = nullptr;
	_28 = nullptr;
}

/*
 * --INFO--
 * Address:	800A47D0
 * Size:	000008
 */
// void JASChannel::@16 @__dt()
// {
// 	/*
// 	addi     r3, r3, -16
// 	b        __dt__10JASChannelFv
// 	*/
// }
