#include "JSystem/JAS/JASTrack.h"
#include "Dolphin/math.h"
#include "JSystem/JAS/JASCalc.h"
#include "JSystem/JAS/JASChannel.h"
#include "JSystem/JMath.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global zz_80514788
    zz_80514788:
        .double 0.0078125

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804A4350
    lbl_804A4350:
        .4byte lbl_800A184C
        .4byte lbl_800A185C
        .4byte lbl_800A186C
        .4byte lbl_800A19FC
        .4byte lbl_800A19FC
        .4byte lbl_800A19FC
        .4byte lbl_800A19FC
        .4byte lbl_800A19FC
        .4byte lbl_800A19FC
        .4byte lbl_800A19FC
        .4byte lbl_800A19FC
        .4byte lbl_800A19FC
        .4byte lbl_800A188C
        .4byte lbl_800A1940
        .4byte lbl_800A19FC
        .4byte lbl_800A19FC
        .4byte lbl_800A19D4
    .global lbl_804A4394
    lbl_804A4394:
        .4byte lbl_800A1C3C
        .4byte lbl_800A1CBC
        .4byte lbl_800A1CBC
        .4byte lbl_800A1CBC
        .4byte lbl_800A1C5C
        .4byte lbl_800A1CBC
        .4byte lbl_800A1CBC
        .4byte lbl_800A1CBC
        .4byte lbl_800A1C80
        .4byte lbl_800A1CBC
        .4byte lbl_800A1CBC
        .4byte lbl_800A1CBC
        .4byte lbl_800A1C70
        .4byte lbl_800A1CBC
        .4byte lbl_800A1CBC
        .4byte lbl_800A1CBC
        .4byte lbl_800A1CB8

    .section .sbss # 0x80514D80 - 0x80516360
    .global sCallBackFunc__8JASTrack
    sCallBackFunc__8JASTrack:
        .skip 0x4
    .global sParser__8JASTrack
    sParser__8JASTrack:
        .skip 0x4
    .global sFreeList__8JASTrack
    sFreeList__8JASTrack:
        .skip 0x4
    .global sFreeListEnd__8JASTrack
    sFreeListEnd__8JASTrack:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516D78
    lbl_80516D78:
        .4byte 0x00000000
    .global lbl_80516D7C
    lbl_80516D7C:
        .float 1.0
    .global lbl_80516D80
    lbl_80516D80:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516D88
    lbl_80516D88:
        .float 0.5
    .global lbl_80516D8C
    lbl_80516D8C:
        .4byte 0x46FFFE00
    .global lbl_80516D90
    lbl_80516D90:
        .4byte 0x43000000
    .global lbl_80516D94
    lbl_80516D94:
        .4byte 0x3FAAAAAB
    .global lbl_80516D98
    lbl_80516D98:
        .4byte 0x42C80000
    .global lbl_80516D9C
    lbl_80516D9C:
        .4byte 0x42F00000
    .global lbl_80516DA0
    lbl_80516DA0:
        .4byte 0x41200000
        .4byte 0x00000000
    .global lbl_80516DA8
    lbl_80516DA8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516DB0
    lbl_80516DB0:
        .4byte 0x3D638E39
        .4byte 0x00000000
    .global lbl_80516DB8
    lbl_80516DB8:
        .4byte 0x40100000
        .4byte 0x00000000
    .global lbl_80516DC0
    lbl_80516DC0:
        .4byte 0x40800000
    .global lbl_80516DC4
    lbl_80516DC4:
        .4byte 0x3FC90FDB
    .global lbl_80516DC8
    lbl_80516DC8:
        .4byte 0xC3A2F983
    .global lbl_80516DCC
    lbl_80516DCC:
        .4byte 0x43A2F983
    .global lbl_80516DD0
    lbl_80516DD0:
        .4byte 0x41400000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8009EF94
 * Size:	00012C
 * TODO: needs JASPlayer
 */
JASTrack::JASTrack()
    : JSUList<JASChannel>()
    , m_vibrate()
    , m_channelUpdater()
    , _144(nullptr)
    , m_timedParam()
    , m_registerParam()
    , _2F8(nullptr)
    , _340(0.0f)
    , _344(0.0f)
    , _348(0)
    , _34C(0)
    , _350(0)
    , _352(0x78)
    , _354(0x78)
    , _356(0)
    , _357(0)
    , _358(0)
    , m_volumeMode(0)
    , _35A(0)
    , _35B(0)
    , _362(false)
    , _363(0)
    , _364(0)
    , _365(0)
    , _366(0)
{
	m_channelUpdater.init();
	// for (int i = 0; i < 12; i++) {
	// 	_2E0[i] = JASPlayer::sAdsTable[i];
	// }
	JASCalc::bzero(&m_timedParam, sizeof(TimedParam_));
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       initiate__10JSUPtrListFv
	addi     r3, r31, 0xe8
	bl       __ct__10JASVibrateFv
	addi     r3, r31, 0xf4
	bl       __ct__17JASChannelUpdaterFv
	li       r0, 0
	addi     r3, r31, 0x148
	stw      r0, 0x144(r31)
	bl       __ct__Q28JASTrack11TimedParam_Fv
	addi     r3, r31, 0x268
	bl       __ct__16JASRegisterParamFv
	li       r4, 0
	lfs      f0, lbl_80516D78@sda21(r2)
	stw      r4, 0x2f8(r31)
	li       r0, 0x78
	addi     r3, r31, 0xf4
	stfs     f0, 0x340(r31)
	stfs     f0, 0x344(r31)
	stw      r4, 0x348(r31)
	stw      r4, 0x34c(r31)
	sth      r4, 0x350(r31)
	sth      r0, 0x352(r31)
	sth      r0, 0x354(r31)
	stb      r4, 0x356(r31)
	stb      r4, 0x357(r31)
	stb      r4, 0x358(r31)
	stb      r4, 0x359(r31)
	stb      r4, 0x35a(r31)
	stb      r4, 0x35b(r31)
	stb      r4, 0x362(r31)
	stb      r4, 0x363(r31)
	stb      r4, 0x364(r31)
	stb      r4, 0x365(r31)
	stb      r4, 0x366(r31)
	bl       init__17JASChannelUpdaterFv
	lis      r4, sAdsTable__9JASPlayer@ha
	addi     r3, r31, 0x148
	addi     r5, r4, sAdsTable__9JASPlayer@l
	lha      r0, 0(r5)
	li       r4, 0x120
	sth      r0, 0x2e0(r31)
	lha      r0, 2(r5)
	sth      r0, 0x2e2(r31)
	lha      r0, 4(r5)
	sth      r0, 0x2e4(r31)
	lha      r0, 6(r5)
	sth      r0, 0x2e6(r31)
	lha      r0, 8(r5)
	sth      r0, 0x2e8(r31)
	lha      r0, 0xa(r5)
	sth      r0, 0x2ea(r31)
	lha      r0, 0xc(r5)
	sth      r0, 0x2ec(r31)
	lha      r0, 0xe(r5)
	sth      r0, 0x2ee(r31)
	lha      r0, 0x10(r5)
	sth      r0, 0x2f0(r31)
	lha      r0, 0x12(r5)
	sth      r0, 0x2f2(r31)
	lha      r0, 0x14(r5)
	sth      r0, 0x2f4(r31)
	lha      r0, 0x16(r5)
	sth      r0, 0x2f6(r31)
	bl       bzero__7JASCalcFPvUl
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009F0C0
 * Size:	00004C
 * TODO: How to force reconstruction?
 */
JASTrack::TimedParam_::TimedParam_()
    : AInnerParam_()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q28JASTrack12AInnerParam_Fv
	lis      r4, __ct__Q28JASTrack10MoveParam_Fv@ha
	mr       r3, r31
	addi     r4, r4, __ct__Q28JASTrack10MoveParam_Fv@l
	li       r5, 0
	li       r6, 0x10
	li       r7, 0x12
	bl       __construct_array
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009F10C
 * Size:	000018
 */
JASTrack::MoveParam_::MoveParam_(void)
    : _00(0.0f)
    , _04(0.0f)
    , _08(0.0f)
    , _0C(0.0f)
{
}

/*
 * --INFO--
 * Address:	8009F124
 * Size:	000130
 */
JASTrack::AInnerParam_::AInnerParam_(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80516D78@sda21(r2)
	li       r5, 0
	stw      r0, 0x14(r1)
	li       r6, 0x10
	li       r7, 4
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, __ct__Q28JASTrack10MoveParam_Fv@ha
	stfs     f0, 0(r31)
	addi     r4, r3, __ct__Q28JASTrack10MoveParam_Fv@l
	addi     r3, r31, 0xc0
	stfs     f0, 4(r31)
	stfs     f0, 8(r31)
	stfs     f0, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f0, 0x14(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x1c(r31)
	stfs     f0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x2c(r31)
	stfs     f0, 0x30(r31)
	stfs     f0, 0x34(r31)
	stfs     f0, 0x38(r31)
	stfs     f0, 0x3c(r31)
	stfs     f0, 0x40(r31)
	stfs     f0, 0x44(r31)
	stfs     f0, 0x48(r31)
	stfs     f0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stfs     f0, 0x58(r31)
	stfs     f0, 0x5c(r31)
	stfs     f0, 0x60(r31)
	stfs     f0, 0x64(r31)
	stfs     f0, 0x68(r31)
	stfs     f0, 0x6c(r31)
	stfs     f0, 0x70(r31)
	stfs     f0, 0x74(r31)
	stfs     f0, 0x78(r31)
	stfs     f0, 0x7c(r31)
	stfs     f0, 0x80(r31)
	stfs     f0, 0x84(r31)
	stfs     f0, 0x88(r31)
	stfs     f0, 0x8c(r31)
	stfs     f0, 0x90(r31)
	stfs     f0, 0x94(r31)
	stfs     f0, 0x98(r31)
	stfs     f0, 0x9c(r31)
	stfs     f0, 0xa0(r31)
	stfs     f0, 0xa4(r31)
	stfs     f0, 0xa8(r31)
	stfs     f0, 0xac(r31)
	stfs     f0, 0xb0(r31)
	stfs     f0, 0xb4(r31)
	stfs     f0, 0xb8(r31)
	stfs     f0, 0xbc(r31)
	bl       __construct_array
	lfs      f0, lbl_80516D78@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x100(r31)
	stfs     f0, 0x104(r31)
	stfs     f0, 0x108(r31)
	stfs     f0, 0x10c(r31)
	stfs     f0, 0x110(r31)
	stfs     f0, 0x114(r31)
	stfs     f0, 0x118(r31)
	stfs     f0, 0x11c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSUList<JASChannel>::~JSUList()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
JASTrack::~JASTrack()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009F254
 * Size:	0001E8
 * TODO: needs JASPlayer
 */
void JASTrack::init()
{
	m_seqCtrl.init();
	m_trackPort.init();
	m_intrMgr.init();
	_E0 = 0;
	_E4 = 0;
	_E5 = 0;
	_E6 = 0;
	for (int i = 0; i < 8; i++) {
		_C0[i] = nullptr;
	}
	m_channelUpdater.init();
	_144 = nullptr;
	initTimed();
	m_registerParam.init();

	_2D8 = 15;
	_2A8 = 0;
	_2AC = 1.0f;
	_2B0 = nullptr;
	// _2B4 = JASPlayer::sRelTable;
	_2B8 = 1.0f;
	_2BC = 0.0f;

	_2DC = 15;
	_2C0 = 0;
	_2C4 = 1.0f;
	_2C8 = nullptr;
	// _2CC = JASPlayer::sRelTable;
	_2D0 = 1.0f;
	_2D4 = 0.0f;

	_2F8    = nullptr;
	_2FC[0] = nullptr;

	for (int i = 1; i < 16; i++) {
		_2FC[i] = 0;
	}
	if (m_extBuffer) {
		m_extBuffer->initExtBuffer();
	}
	_340 = 0.0f;
	_344 = 1.0f;
	_348 = 0;
	m_vibrate.init();
	_34C = 0;
	_350 = 0;
	_352 = 0x78;
	_354 = 0x30;
	updateTempo();
	_356         = 0;
	_357         = 0;
	_358         = 10;
	m_volumeMode = 0;
	_35A         = 0;
	_35B         = 0;

	_35C                 = 0;
	_35F                 = 0;
	m_channelUpdater._4A = 0xD;

	_35D                 = 0;
	_360                 = 0;
	m_channelUpdater._4B = 0xD;

	_35E                 = 0;
	_361                 = 0;
	m_channelUpdater._4C = 0xD;

	_362 = false;
	_363 = 0;
	_364 = 1;
	_365 = 0;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0xc
	bl       init__10JASSeqCtrlFv
	addi     r3, r31, 0x54
	bl       init__12JASTrackPortFv
	addi     r3, r31, 0x94
	bl       init__10JASIntrMgrFv
	li       r0, 0
	addi     r3, r31, 0xf4
	stw      r0, 0xe0(r31)
	stb      r0, 0xe4(r31)
	stb      r0, 0xe5(r31)
	stb      r0, 0xe6(r31)
	stw      r0, 0xc0(r31)
	stw      r0, 0xc4(r31)
	stw      r0, 0xc8(r31)
	stw      r0, 0xcc(r31)
	stw      r0, 0xd0(r31)
	stw      r0, 0xd4(r31)
	stw      r0, 0xd8(r31)
	stw      r0, 0xdc(r31)
	bl       init__17JASChannelUpdaterFv
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x144(r31)
	bl       initTimed__8JASTrackFv
	addi     r3, r31, 0x268
	bl       init__16JASRegisterParamFv
	lis      r3, sEnvelopeDef__9JASPlayer@ha
	li       r7, 0xf
	addi     r6, r3, sEnvelopeDef__9JASPlayer@l
	stw      r7, 0x2d8(r31)
	lwz      r5, 0(r6)
	li       r0, 0
	lfs      f2, 4(r6)
	stw      r5, 0x2a8(r31)
	lwz      r4, 8(r6)
	stfs     f2, 0x2ac(r31)
	lwz      r3, 0xc(r6)
	stw      r4, 0x2b0(r31)
	lfs      f1, 0x10(r6)
	stw      r3, 0x2b4(r31)
	lfs      f0, 0x14(r6)
	stfs     f1, 0x2b8(r31)
	stfs     f0, 0x2bc(r31)
	stw      r7, 0x2dc(r31)
	stw      r5, 0x2c0(r31)
	stfs     f2, 0x2c4(r31)
	stw      r4, 0x2c8(r31)
	stw      r3, 0x2cc(r31)
	stfs     f1, 0x2d0(r31)
	stfs     f0, 0x2d4(r31)
	stw      r0, 0x2f8(r31)
	stw      r0, 0x2fc(r31)
	stw      r0, 0x300(r31)
	stw      r0, 0x304(r31)
	stw      r0, 0x308(r31)
	stw      r0, 0x30c(r31)
	stw      r0, 0x310(r31)
	stw      r0, 0x314(r31)
	stw      r0, 0x318(r31)
	stw      r0, 0x31c(r31)
	stw      r0, 0x320(r31)
	stw      r0, 0x324(r31)
	stw      r0, 0x328(r31)
	stw      r0, 0x32c(r31)
	stw      r0, 0x330(r31)
	stw      r0, 0x334(r31)
	stw      r0, 0x338(r31)
	lwz      r3, 0x33c(r31)
	cmplwi   r3, 0
	beq      lbl_8009F388
	bl       initExtBuffer__13JASOuterParamFv

lbl_8009F388:
	lfs      f1, lbl_80516D78@sda21(r2)
	li       r0, 0
	lfs      f0, lbl_80516D7C@sda21(r2)
	addi     r3, r31, 0xe8
	stfs     f1, 0x340(r31)
	stfs     f0, 0x344(r31)
	stw      r0, 0x348(r31)
	bl       init__10JASVibrateFv
	li       r5, 0
	li       r4, 0x78
	stw      r5, 0x34c(r31)
	li       r0, 0x30
	mr       r3, r31
	sth      r5, 0x350(r31)
	sth      r4, 0x352(r31)
	sth      r0, 0x354(r31)
	bl       updateTempo__8JASTrackFv
	li       r5, 0
	li       r4, 0xa
	stb      r5, 0x356(r31)
	li       r3, 0xd
	li       r0, 1
	stb      r5, 0x357(r31)
	stb      r4, 0x358(r31)
	stb      r5, 0x359(r31)
	stb      r5, 0x35a(r31)
	stb      r5, 0x35b(r31)
	stb      r5, 0x35c(r31)
	stb      r5, 0x35f(r31)
	stb      r3, 0x13e(r31)
	stb      r5, 0x35d(r31)
	stb      r5, 0x360(r31)
	stb      r3, 0x13f(r31)
	stb      r5, 0x35e(r31)
	stb      r5, 0x361(r31)
	stb      r3, 0x140(r31)
	stb      r5, 0x362(r31)
	stb      r5, 0x363(r31)
	stb      r0, 0x364(r31)
	stb      r5, 0x365(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000120
 */
void JASTrack::inherit()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009F43C
 * Size:	00020C
 */
void JASTrack::mainProc()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	lbz      r0, 0x365(r3)
	cmplwi   r0, 0
	beq      lbl_8009F4E8
	lwz      r5, 0x2f8(r31)
	cmplwi   r5, 0
	beq      lbl_8009F4E8
	lhz      r4, 0x352(r31)
	lis      r3, 0x4330
	lhz      r0, 0x352(r5)
	stw      r4, 0xc(r1)
	lfd      f2, lbl_80516D80@sda21(r2)
	stw      r3, 8(r1)
	lfs      f0, lbl_80516D7C@sda21(r2)
	lfd      f1, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f3, f1, f2
	stw      r3, 0x10(r1)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fdivs    f3, f3, f1
	fcmpo    cr0, f3, f0
	ble      lbl_8009F4BC
	fmr      f3, f0

lbl_8009F4BC:
	lfs      f1, 0x340(r31)
	lfs      f0, lbl_80516D7C@sda21(r2)
	fadds    f1, f1, f3
	stfs     f1, 0x340(r31)
	lfs      f1, 0x340(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_8009F4E0
	li       r3, 0
	b        lbl_8009F628

lbl_8009F4E0:
	fsubs    f0, f1, f0
	stfs     f0, 0x340(r31)

lbl_8009F4E8:
	addi     r3, r31, 0x94
	li       r4, 7
	bl       request__10JASIntrMgrFUl
	addi     r3, r31, 0x94
	bl       timerProcess__10JASIntrMgrFv
	mr       r3, r31
	bl       tryInterrupt__8JASTrackFv
	lbz      r0, 0x362(r31)
	cmplwi   r0, 0
	beq      lbl_8009F51C
	lbz      r0, 0x358(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_8009F5B0

lbl_8009F51C:
	lwz      r0, 0x14(r31)
	cmpwi    r0, -1
	bne      lbl_8009F544
	mr       r3, r31
	li       r4, 0
	bl       checkNoteStop__8JASTrackFl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8009F5A8
	li       r0, 0
	stw      r0, 0x14(r31)

lbl_8009F544:
	lwz      r3, 0x4c(r31)
	cmpwi    r3, 0
	ble      lbl_8009F558
	addi     r0, r3, -1
	stw      r0, 0x4c(r31)

lbl_8009F558:
	lwz      r0, 0x14(r31)
	cmpwi    r0, 0
	ble      lbl_8009F598
	addi     r3, r31, 0xc
	bl       waitCountDown__10JASSeqCtrlFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8009F5A8
	lwz      r3, 0xe0(r31)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	beq      lbl_8009F598
	lbz      r0, 0xe4(r31)
	cmplwi   r0, 0
	bne      lbl_8009F598
	li       r0, 0
	stw      r0, 0xc0(r31)

lbl_8009F598:
	mr       r4, r31
	addi     r3, r13, sParser__8JASTrack@sda21
	bl       parseSeq__12JASSeqParserFP8JASTrack
	mr       r30, r3

lbl_8009F5A8:
	mr       r3, r31
	bl       updateTimedParam__8JASTrackFv

lbl_8009F5B0:
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl       updateSeq__8JASTrackFUlb
	cmpwi    r30, 0
	bge      lbl_8009F5D0
	li       r3, -1
	b        lbl_8009F628

lbl_8009F5D0:
	mr       r30, r31
	li       r29, 0
	li       r31, 0

lbl_8009F5DC:
	lwz      r28, 0x2fc(r30)
	cmplwi   r28, 0
	beq      lbl_8009F614
	lbz      r0, 0x35b(r28)
	cmplwi   r0, 0
	beq      lbl_8009F614
	mr       r3, r28
	bl       mainProc__8JASTrackFv
	extsb    r0, r3
	cmpwi    r0, -1
	bne      lbl_8009F614
	mr       r3, r28
	bl       close__8JASTrackFv
	stw      r31, 0x2fc(r30)

lbl_8009F614:
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 0x10
	blt      lbl_8009F5DC
	li       r3, 0

lbl_8009F628:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009F648
 * Size:	000028
 */
void JASTrack::setInterrupt(u16 interrupt)
{
	m_intrMgr.request(interrupt);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x94
	clrlwi   r4, r4, 0x10
	stw      r0, 0x14(r1)
	bl       request__10JASIntrMgrFUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009F670
 * Size:	000060
 */
bool JASTrack::tryInterrupt()
{
	if (m_seqCtrl._44 != 0) {
		return false;
	}
	void* intr = m_intrMgr.checkIntr();
	if (intr == nullptr) {
		return false;
	} else {
		return m_seqCtrl.callIntr(intr);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JASTrack::setBankNumber(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009F6D0
 * Size:	000008
 */
void JASTrack::assignExtBuffer(JASOuterParam* a1)
{
	// Generated from stw r4, 0x33C(r3)
	m_extBuffer = a1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JASTrack::setPanSwitchExt(unsigned char, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JASTrack::setPanSwitchParent(unsigned char, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JASTrack::setPanSwitchJcs(unsigned char, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASTrack::getBank() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASTrack::getProgramNumber() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASTrack::getVolume() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASTrack::getPitch() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASTrack::getPan() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASTrack::getFxmix() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASTrack::getDolby() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009F6D8
 * Size:	0000CC
 */
void JASTrack::initTimed()
{
	for (u8 i = 0; i < 18; i++) {
		m_timedParam._00[i]._08 = 0.0f;
		m_timedParam._00[i]._00 = 1.0f;
		m_timedParam._00[i]._04 = 1.0f;
	}
	m_timedParam._00[1]._00  = 0.0f;
	m_timedParam._00[1]._04  = 0.0f;
	m_timedParam._00[3]._00  = 0.5f;
	m_timedParam._00[3]._04  = 0.5f;
	m_timedParam._00[16]._00 = 0.5f;
	m_timedParam._00[16]._04 = 0.5f;
	m_timedParam._00[17]._00 = 0.0f;
	m_timedParam._00[17]._04 = 0.0f;
	m_timedParam._00[2]._00  = 0.0f;
	m_timedParam._00[2]._04  = 0.0f;
	m_timedParam._00[4]._00  = 0.0f;
	m_timedParam._00[4]._04  = 0.0f;
	m_timedParam._00[13]._00 = 0.0f;
	m_timedParam._00[13]._04 = 0.0f;
	m_timedParam._00[14]._00 = 0.0f;
	m_timedParam._00[14]._04 = 0.0f;
	m_timedParam._00[15]._00 = 0.0f;
	m_timedParam._00[15]._04 = 0.0f;
	m_timedParam._00[5]._00  = 0.0f;
	m_timedParam._00[5]._04  = 0.0f;
}

/*
 * --INFO--
 * Address:	8009F7A4
 * Size:	000010
 */
void JASTrack::connectBus(int p1, int p2) { m_channelUpdater._36[p1] = p2; }

/*
 * --INFO--
 * Address:	8009F7B4
 * Size:	0001A4
 */
void JASTrack::noteOn(u8 p1, long p2, long p3, long p4, u32 p5)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	mr       r26, r3
	mr       r27, r4
	mr       r28, r5
	mr       r29, r6
	mr       r30, r7
	mr       r31, r8
	lbz      r0, 0x363(r3)
	cmplwi   r0, 0
	beq      lbl_8009F7FC
	lbz      r0, 0x358(r26)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	beq      lbl_8009F7FC
	li       r3, -1
	b        lbl_8009F944

lbl_8009F7FC:
	clrlwi   r0, r27, 0x18
	li       r3, 1
	lbz      r4, 0x35a(r26)
	slw      r0, r3, r0
	and.     r0, r4, r0
	beq      lbl_8009F81C
	li       r3, -1
	b        lbl_8009F944

lbl_8009F81C:
	mr       r3, r26
	mr       r4, r27
	li       r5, 0
	bl       noteOff__8JASTrackFUcUs
	addi     r3, r26, 0x268
	bl       getBankNumber__16JASRegisterParamCFv
	clrlwi   r3, r3, 0x18
	bl       getPhysicalNumber__10JASBankMgrFUs
	clrlwi   r25, r3, 0x18
	addi     r3, r26, 0x268
	bl       getProgramNumber__16JASRegisterParamCFv
	lwz      r12, 0x144(r26)
	mr       r5, r3
	cmplwi   r12, 0
	bne      lbl_8009F884
	lis      r3,
channelUpdateCallback__8JASTrackFUlP10JASChannelPQ26JASDsp8TChannelPv@ha lhz r7,
0x282(r26) addi     r8, r3,
channelUpdateCallback__8JASTrackFUlP10JASChannelPQ26JASDsp8TChannelPv@l clrlwi
r4, r5, 0x18 mr       r3, r25 mr       r9, r26 clrlwi   r5, r28, 0x18 clrlwi r6,
r29, 0x18 bl
noteOn__10JASBankMgrFiiUcUcUsPFUlP10JASChannelPQ26JASDsp8TChannelPv_vPv mr r28,
r3 b        lbl_8009F8A4

lbl_8009F884:
	mr       r3, r26
	mr       r4, r25
	clrlwi   r6, r28, 0x18
	clrlwi   r7, r29, 0x18
	lhz      r8, 0x282(r26)
	mtctr    r12
	bctrl
	mr       r28, r3

lbl_8009F8A4:
	cmplwi   r28, 0
	bne      lbl_8009F8B4
	li       r3, -1
	b        lbl_8009F944

lbl_8009F8B4:
	stw      r30, 0x2c(r28)
	mr       r3, r26
	mr       r4, r28
	bl       append__10JSUPtrListFP10JSUPtrLink
	rlwinm   r0, r27, 2, 0x16, 0x1d
	lis      r5, 0x4330
	add      r4, r26, r0
	stw      r5, 8(r1)
	lfd      f3, lbl_80516D80@sda21(r2)
	mr       r3, r28
	stw      r28, 0xc0(r4)
	stw      r31, 0xc8(r28)
	lhz      r6, 0x278(r26)
	lhz      r4, 0x27a(r26)
	stw      r6, 0xc(r1)
	lhz      r0, 0x27c(r26)
	lfd      f0, 8(r1)
	stw      r4, 0x14(r1)
	fsubs    f1, f0, f3
	stw      r5, 0x10(r1)
	lfd      f0, 0x10(r1)
	stw      r0, 0x1c(r1)
	fsubs    f2, f0, f3
	stw      r5, 0x18(r1)
	lfd      f0, 0x18(r1)
	fsubs    f3, f0, f3
	bl       setPanPower__10JASChannelFfff
	mr       r3, r26
	mr       r4, r28
	bl       overwriteOsc__8JASTrackFP10JASChannel
	lhz      r4, 0x350(r26)
	cmplwi   r4, 0
	beq      lbl_8009F940
	mr       r3, r28
	bl       directReleaseOsc__10JASChannelFUs

lbl_8009F940:
	li       r3, 0

lbl_8009F944:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009F958
 * Size:	0000A4
 */
void JASTrack::overwriteOsc(JASChannel*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r4
	mr       r30, r3
	li       r28, 0
	mr       r29, r3

lbl_8009F978:
	lwz      r3, 0x2d8(r30)
	cmplwi   r3, 0xf
	beq      lbl_8009F9D4
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	clrlwi   r31, r3, 0x1e
	beq      lbl_8009F9A4
	mr       r3, r26
	mr       r4, r31
	addi     r5, r29, 0x2a8
	bl       copyOsc__10JASChannelFiPQ213JASOscillator4Data
	b        lbl_8009F9C4

lbl_8009F9A4:
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_8009F9C4
	lwz      r27, 0x2b4(r29)
	mr       r3, r26
	mr       r4, r31
	addi     r5, r29, 0x2a8
	bl       copyOsc__10JASChannelFiPQ213JASOscillator4Data
	stw      r27, 0x2b4(r29)

lbl_8009F9C4:
	mr       r3, r26
	mr       r4, r31
	addi     r5, r29, 0x2a8
	bl       overwriteOsc__10JASChannelFiPQ213JASOscillator4Data

lbl_8009F9D4:
	addi     r28, r28, 1
	addi     r29, r29, 0x18
	cmpwi    r28, 2
	addi     r30, r30, 4
	blt      lbl_8009F978
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009F9FC
 * Size:	000068
 */
void JASTrack::noteOff(unsigned char, unsigned short)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm   r0, r4, 2, 0x16, 0x1d
	stw      r31, 0xc(r1)
	add      r31, r3, r0
	lwz      r3, 0xc0(r31)
	cmplwi   r3, 0
	bne      lbl_8009FA28
	li       r3, 0
	b        lbl_8009FA50

lbl_8009FA28:
	clrlwi.  r0, r5, 0x10
	bne      lbl_8009FA3C
	li       r4, 0
	bl       release__10JASChannelFUs
	b        lbl_8009FA44

lbl_8009FA3C:
	mr       r4, r5
	bl       release__10JASChannelFUs

lbl_8009FA44:
	li       r0, 0
	li       r3, 1
	stw      r0, 0xc0(r31)

lbl_8009FA50:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009FA64
 * Size:	000064
 * TODO: Requires JASBankMgr.
 */
int JASTrack::gateOn(u8 p1, long p2, long p3, long p4)
{
	// JASChannel* channel = _C0[p1];
	// if (channel == nullptr) {
	// 	return -1;
	// }
	// JASBankMgr::gateOn(channel, p2, p3);
	// channel->_2C = p4;
	// return 0;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm   r0, r4, 2, 0x16, 0x1d
	add      r3, r3, r0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r7
	lwz      r31, 0xc0(r3)
	cmplwi   r31, 0
	bne      lbl_8009FA98
	li       r3, -1
	b        lbl_8009FAB0

lbl_8009FA98:
	clrlwi   r4, r5, 0x18
	mr       r3, r31
	clrlwi   r5, r6, 0x18
	bl       gateOn__10JASBankMgrFP10JASChannelUcUc
	stw      r30, 0x2c(r31)
	li       r3, 0

lbl_8009FAB0:
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
 * Address:	8009FAC8
 * Size:	00002C
 */
bool JASTrack::checkNoteStop(long p1)
{
	if (_C0[p1] == nullptr) {
		return true;
	}
	return _C0[p1]->_18 == 0;
	/*
	slwi     r0, r4, 2
	add      r3, r3, r0
	lwz      r3, 0xc0(r3)
	cmplwi   r3, 0
	bne      lbl_8009FAE4
	li       r3, 1
	blr

lbl_8009FAE4:
	lwz      r0, 0x18(r3)
	cntlzw   r0, r0
	rlwinm   r3, r0, 0x1b, 0x18, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009FAF4
 * Size:	0000E0
 */
void JASTrack::oscSetupFull(unsigned char, unsigned long, unsigned long)
{
	/*
	rlwinm.  r0, r4, 0x19, 0x1f, 0x1f
	rlwinm   r8, r4, 0x1c, 0x1f, 0x1f
	clrlwi   r12, r4, 0x1c
	rlwinm   r9, r4, 0x1a, 0x1f, 0x1f
	rlwinm   r10, r4, 0x1b, 0x1f, 0x1f
	beq      lbl_8009FB64
	mulli    r11, r8, 0x18
	lis      r4, sEnvelopeDef__9JASPlayer@ha
	cmpwi    r12, 1
	addi     r7, r4, sEnvelopeDef__9JASPlayer@l
	lwz      r0, 0(r7)
	add      r11, r3, r11
	lfs      f0, 4(r7)
	stw      r0, 0x2a8(r11)
	lwz      r4, 8(r7)
	stfs     f0, 0x2ac(r11)
	lwz      r0, 0xc(r7)
	stw      r4, 0x2b0(r11)
	lfs      f1, 0x10(r7)
	stw      r0, 0x2b4(r11)
	lfs      f0, 0x14(r7)
	stfs     f1, 0x2b8(r11)
	stfs     f0, 0x2bc(r11)
	stw      r12, 0x2a8(r11)
	beq      lbl_8009FB5C
	b        lbl_8009FB64

lbl_8009FB5C:
	lfs      f0, lbl_80516D7C@sda21(r2)
	stfs     f0, 0x2bc(r11)

lbl_8009FB64:
	cmplwi   r9, 0
	beq      lbl_8009FB98
	cmplwi   r5, 0
	bne      lbl_8009FB84
	mulli    r0, r8, 0x18
	li       r7, 0
	add      r4, r3, r0
	stw      r7, 0x2b0(r4)

lbl_8009FB84:
	mulli    r0, r8, 0x18
	lwz      r4, 0xc(r3)
	add      r5, r4, r5
	add      r4, r3, r0
	stw      r5, 0x2b0(r4)

lbl_8009FB98:
	cmplwi   r10, 0
	beqlr
	cmplwi   r6, 0
	bne      lbl_8009FBBC
	mulli    r0, r8, 0x18
	lis      r4, sRelTable__9JASPlayer@ha
	addi     r5, r4, sRelTable__9JASPlayer@l
	add      r4, r3, r0
	stw      r5, 0x2b4(r4)

lbl_8009FBBC:
	mulli    r0, r8, 0x18
	lwz      r4, 0xc(r3)
	add      r4, r4, r6
	add      r3, r3, r0
	stw      r4, 0x2b4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009FBD4
 * Size:	000070
 */
void JASTrack::oscSetupSimpleEnv(unsigned char, unsigned long)
{
	/*
	clrlwi   r0, r4, 0x18
	cmpwi    r0, 1
	beq      lbl_8009FC34
	bgelr
	cmpwi    r0, 0
	bltlr
	lis      r4, sEnvelopeDef__9JASPlayer@ha
	addi     r6, r4, sEnvelopeDef__9JASPlayer@l
	lwz      r0, 0(r6)
	lfs      f0, 4(r6)
	stw      r0, 0x2a8(r3)
	lwz      r4, 8(r6)
	stfs     f0, 0x2ac(r3)
	lwz      r0, 0xc(r6)
	stw      r4, 0x2b0(r3)
	lfs      f1, 0x10(r6)
	stw      r0, 0x2b4(r3)
	lfs      f0, 0x14(r6)
	stfs     f1, 0x2b8(r3)
	stfs     f0, 0x2bc(r3)
	lwz      r0, 0xc(r3)
	add      r0, r0, r5
	stw      r0, 0x2b0(r3)
	blr

lbl_8009FC34:
	lwz      r0, 0xc(r3)
	add      r0, r0, r5
	stw      r0, 0x2b4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void JASTrack::updateOscParam(int, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009FC44
 * Size:	0000DC
 */
void JASTrack::oscSetupSimple(unsigned char)
{
	/*
	clrlwi   r0, r4, 0x18
	cmpwi    r0, 1
	beq      lbl_8009FCA8
	bge      lbl_8009FC60
	cmpwi    r0, 0
	bge      lbl_8009FC6C
	blr

lbl_8009FC60:
	cmpwi    r0, 3
	bgelr
	b        lbl_8009FCE4

lbl_8009FC6C:
	lis      r4, sVibratoDef__9JASPlayer@ha
	addi     r5, r4, sVibratoDef__9JASPlayer@l
	lwz      r0, 0(r5)
	lfs      f0, 4(r5)
	stw      r0, 0x2c0(r3)
	lwz      r4, 8(r5)
	stfs     f0, 0x2c4(r3)
	lwz      r0, 0xc(r5)
	stw      r4, 0x2c8(r3)
	lfs      f1, 0x10(r5)
	stw      r0, 0x2cc(r3)
	lfs      f0, 0x14(r5)
	stfs     f1, 0x2d0(r3)
	stfs     f0, 0x2d4(r3)
	blr

lbl_8009FCA8:
	lis      r4, sTremoroDef__9JASPlayer@ha
	addi     r5, r4, sTremoroDef__9JASPlayer@l
	lwz      r0, 0(r5)
	lfs      f0, 4(r5)
	stw      r0, 0x2a8(r3)
	lwz      r4, 8(r5)
	stfs     f0, 0x2ac(r3)
	lwz      r0, 0xc(r5)
	stw      r4, 0x2b0(r3)
	lfs      f1, 0x10(r5)
	stw      r0, 0x2b4(r3)
	lfs      f0, 0x14(r5)
	stfs     f1, 0x2b8(r3)
	stfs     f0, 0x2bc(r3)
	blr

lbl_8009FCE4:
	lis      r4, sTremoroDef__9JASPlayer@ha
	addi     r5, r4, sTremoroDef__9JASPlayer@l
	lwz      r0, 0(r5)
	lfs      f0, 4(r5)
	stw      r0, 0x2c0(r3)
	lwz      r4, 8(r5)
	stfs     f0, 0x2c4(r3)
	lwz      r0, 0xc(r5)
	stw      r4, 0x2c8(r3)
	lfs      f1, 0x10(r5)
	stw      r0, 0x2cc(r3)
	lfs      f0, 0x14(r5)
	stfs     f1, 0x2d0(r3)
	stfs     f0, 0x2d4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009FD20
 * Size:	0000E8
 */
void JASTrack::updateTimedParam()
{
	/*
	li       r0, 0x12
	mr       r5, r3
	lfs      f3, lbl_80516D78@sda21(r2)
	li       r6, 0
	mtctr    r0

lbl_8009FD34:
	lfs      f0, 0x150(r5)
	fcmpo    cr0, f0, f3
	ble      lbl_8009FDEC
	lfs      f2, 0x148(r5)
	cmpwi    r6, 5
	lfs      f1, 0x154(r5)
	lfs      f0, lbl_80516D7C@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x148(r5)
	lfs      f1, 0x150(r5)
	fsubs    f0, f1, f0
	stfs     f0, 0x150(r5)
	ble      lbl_8009FD70
	cmpwi    r6, 0xb
	blt      lbl_8009FD88

lbl_8009FD70:
	li       r0, 1
	lwz      r4, 0x34c(r3)
	slw      r0, r0, r6
	or       r0, r4, r0
	stw      r0, 0x34c(r3)
	b        lbl_8009FDEC

lbl_8009FD88:
	cmpwi    r6, 9
	lfs      f0, 0x148(r5)
	beq      lbl_8009FDD8
	bge      lbl_8009FDB0
	cmpwi    r6, 7
	beq      lbl_8009FDC8
	bge      lbl_8009FDD0
	cmpwi    r6, 6
	bge      lbl_8009FDC0
	b        lbl_8009FDEC

lbl_8009FDB0:
	cmpwi    r6, 0xb
	beq      lbl_8009FDE8
	bge      lbl_8009FDEC
	b        lbl_8009FDE0

lbl_8009FDC0:
	stfs     f0, 0x2b8(r3)
	b        lbl_8009FDEC

lbl_8009FDC8:
	stfs     f0, 0x2ac(r3)
	b        lbl_8009FDEC

lbl_8009FDD0:
	stfs     f0, 0x2bc(r3)
	b        lbl_8009FDEC

lbl_8009FDD8:
	stfs     f0, 0x2d0(r3)
	b        lbl_8009FDEC

lbl_8009FDE0:
	stfs     f0, 0x2c4(r3)
	b        lbl_8009FDEC

lbl_8009FDE8:
	stfs     f0, 0x2d4(r3)

lbl_8009FDEC:
	addi     r5, r5, 0x10
	addi     r6, r6, 1
	bdnz     lbl_8009FD34
	lwz      r0, 0x34c(r3)
	ori      r0, r0, 2
	stw      r0, 0x34c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009FE08
 * Size:	0003E8
 */
void JASTrack::updateTrackAll()
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stfd     f27, 0x50(r1)
	psq_st   f27, 88(r1), 0, qr0
	stfd     f26, 0x40(r1)
	psq_st   f26, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r31, r3
	lis      r0, 0x4330
	lhz      r3, 0x27e(r3)
	li       r4, 0
	stw      r0, 0x10(r1)
	lfd      f3, lbl_80516D80@sda21(r2)
	stw      r3, 0x14(r1)
	lfs      f2, lbl_80516D8C@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_80516D90@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, 0x258(r31)
	fmuls    f4, f1, f0
	fdivs    f29, f3, f2
	psq_st   f4, 8(r1), 1, qr4
	lbz      r3, 8(r1)
	extsb    r3, r3
	extsb.   r0, r3
	bge      lbl_8009FEA4
	neg      r0, r3
	li       r3, 0
	extsb    r4, r0

lbl_8009FEA4:
	li       r0, 0x10
	stb      r0, 0x13c(r31)
	stb      r4, 0x136(r31)
	stb      r3, 0x137(r31)
	lbz      r0, 0x359(r31)
	lfs      f28, 0x148(r31)
	cmplwi   r0, 0
	bne      lbl_8009FEC8
	fmuls    f28, f28, f28

lbl_8009FEC8:
	lbz      r0, 0x363(r31)
	cmplwi   r0, 0
	beq      lbl_8009FED8
	lfs      f28, lbl_80516D78@sda21(r2)

lbl_8009FED8:
	lhz      r3, 0x276(r31)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lfd      f2, lbl_80516D80@sda21(r2)
	stw      r3, 0x14(r1)
	lfs      f1, 0x158(r31)
	lfd      f0, 0x10(r1)
	fsubs    f2, f0, f2
	bl       pitchToCent__9JASPlayerFff
	fmr      f30, f1
	addi     r3, r31, 0xe8
	bl       getValue__10JASVibrateCFv
	lwz      r3, 0x33c(r31)
	fmuls    f27, f30, f1
	lfs      f26, 0x178(r31)
	cmplwi   r3, 0
	lfs      f31, 0x168(r31)
	lfs      f30, 0x188(r31)
	beq      lbl_8009FFFC
	li       r4, 1
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_8009FF40
	lwz      r3, 0x33c(r31)
	lfs      f0, 4(r3)
	fmuls    f28, f28, f0

lbl_8009FF40:
	lwz      r3, 0x33c(r31)
	li       r4, 2
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_8009FF60
	lwz      r3, 0x33c(r31)
	lfs      f0, 8(r3)
	fmuls    f27, f27, f0

lbl_8009FF60:
	lwz      r3, 0x33c(r31)
	li       r4, 4
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_8009FF94
	lwz      r3, 0x33c(r31)
	fmr      f1, f31
	fmr      f3, f29
	lbz      r4, 0x35d(r31)
	lfs      f2, 0xc(r3)
	mr       r3, r31
	bl       panCalc__8JASTrackFfffUc
	fmr      f31, f1

lbl_8009FF94:
	lwz      r3, 0x33c(r31)
	li       r4, 0x10
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_8009FFC8
	lwz      r3, 0x33c(r31)
	fmr      f1, f30
	fmr      f3, f29
	lbz      r4, 0x35e(r31)
	lfs      f2, 0x10(r3)
	mr       r3, r31
	bl       panCalc__8JASTrackFfffUc
	fmr      f30, f1

lbl_8009FFC8:
	lwz      r3, 0x33c(r31)
	li       r4, 8
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_8009FFFC
	lwz      r3, 0x33c(r31)
	fmr      f1, f26
	fmr      f3, f29
	lbz      r4, 0x35c(r31)
	lfs      f2, 0x14(r3)
	mr       r3, r31
	bl       panCalc__8JASTrackFfffUc
	fmr      f26, f1

lbl_8009FFFC:
	lwz      r4, 0x2f8(r31)
	cmplwi   r4, 0
	beq      lbl_800A0014
	lbz      r0, 0x357(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_800A002C

lbl_800A0014:
	stfs     f28, 0xf4(r31)
	stfs     f27, 0xf8(r31)
	stfs     f26, 0xfc(r31)
	stfs     f31, 0x100(r31)
	stfs     f30, 0x104(r31)
	b        lbl_800A01A8

lbl_800A002C:
	lhz      r3, 0x280(r31)
	lis      r0, 0x4330
	lfs      f0, 0xf4(r4)
	fmr      f1, f26
	stw      r3, 0x14(r1)
	mr       r3, r31
	fmuls    f0, f0, f28
	lfd      f4, lbl_80516D80@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_80516D8C@sda21(r2)
	lfd      f3, 0x10(r1)
	stfs     f0, 0xf4(r31)
	fsubs    f0, f3, f4
	lwz      r4, 0x2f8(r31)
	fdivs    f29, f0, f2
	lfs      f0, 0xf8(r4)
	fmuls    f0, f0, f27
	fmr      f3, f29
	stfs     f0, 0xf8(r31)
	lwz      r5, 0x2f8(r31)
	lbz      r4, 0x35f(r31)
	lfs      f2, 0xfc(r5)
	bl       panCalc__8JASTrackFfffUc
	stfs     f1, 0xfc(r31)
	fmr      f1, f31
	fmr      f3, f29
	mr       r3, r31
	lwz      r5, 0x2f8(r31)
	lbz      r4, 0x360(r31)
	lfs      f2, 0x100(r5)
	bl       panCalc__8JASTrackFfffUc
	stfs     f1, 0x100(r31)
	fmr      f1, f30
	fmr      f3, f29
	mr       r3, r31
	lwz      r5, 0x2f8(r31)
	lbz      r4, 0x361(r31)
	lfs      f2, 0x104(r5)
	bl       panCalc__8JASTrackFfffUc
	stfs     f1, 0x104(r31)
	lwz      r3, 0x33c(r31)
	cmplwi   r3, 0
	beq      lbl_800A0120
	li       r4, 0x80
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_800A0120
	li       r30, 0
	b        lbl_800A010C

lbl_800A00F0:
	lwz      r3, 0x33c(r31)
	mr       r4, r30
	bl       getIntFirFilter__13JASOuterParamFUc
	rlwinm   r4, r30, 1, 0x17, 0x1e
	addi     r30, r30, 1
	addi     r0, r4, 0x108
	sthx     r3, r31, r0

lbl_800A010C:
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 8
	blt      lbl_800A00F0
	li       r0, 8
	stb      r0, 0x13d(r31)

lbl_800A0120:
	lfs      f1, lbl_80516D8C@sda21(r2)
	lfs      f0, 0x208(r31)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	sth      r0, 0x118(r31)
	lfs      f0, 0x218(r31)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	sth      r0, 0x11a(r31)
	lfs      f0, 0x228(r31)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	sth      r0, 0x11c(r31)
	lfs      f0, 0x238(r31)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	sth      r0, 0x11e(r31)
	lbz      r0, 0x13d(r31)
	ori      r0, r0, 0x20
	stb      r0, 0x13d(r31)
	lfs      f0, 0x198(r31)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	sth      r0, 0x128(r31)

lbl_800A01A8:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	psq_l    f27, 88(r1), 0, qr0
	lfd      f27, 0x50(r1)
	psq_l    f26, 72(r1), 0, qr0
	lfd      f26, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0xa4(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A01F0
 * Size:	0004E0
 */
void JASTrack::updateTrack(unsigned long)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stfd     f26, 0x50(r1)
	psq_st   f26, 88(r1), 0, qr0
	stmw     r24, 0x30(r1)
	mr       r25, r3
	lis      r3, 0x4330
	lhz      r5, 0x27e(r25)
	rlwinm.  r0, r4, 0, 0xe, 0xe
	stw      r3, 0x10(r1)
	mr       r26, r4
	lfd      f2, lbl_80516D80@sda21(r2)
	stw      r5, 0x14(r1)
	lfs      f0, lbl_80516D8C@sda21(r2)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fdivs    f26, f1, f0
	beq      lbl_800A029C
	lfs      f1, lbl_80516D90@sda21(r2)
	li       r4, 0
	lfs      f0, 0x258(r25)
	fmuls    f3, f1, f0
	psq_st   f3, 8(r1), 1, qr4
	lbz      r3, 8(r1)
	extsb    r3, r3
	extsb.   r0, r3
	bge      lbl_800A0294
	neg      r0, r3
	li       r3, 0
	extsb    r4, r0

lbl_800A0294:
	stb      r4, 0x136(r25)
	stb      r3, 0x137(r25)

lbl_800A029C:
	rlwinm.  r0, r26, 0, 0x19, 0x19
	beq      lbl_800A02B8
	lwz      r0, 0x2f8(r25)
	cmplwi   r0, 0
	bne      lbl_800A02B8
	mr       r3, r25
	bl       updateTempo__8JASTrackFv

lbl_800A02B8:
	clrlwi.  r31, r26, 0x1f
	lfs      f30, lbl_80516D7C@sda21(r2)
	beq      lbl_800A0330
	lbz      r0, 0x359(r25)
	lfs      f31, 0x148(r25)
	cmplwi   r0, 0
	bne      lbl_800A02D8
	fmuls    f31, f31, f31

lbl_800A02D8:
	lbz      r0, 0x363(r25)
	cmplwi   r0, 0
	beq      lbl_800A02E8
	lfs      f31, lbl_80516D78@sda21(r2)

lbl_800A02E8:
	lwz      r3, 0x33c(r25)
	cmplwi   r3, 0
	beq      lbl_800A0310
	li       r4, 1
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_800A0310
	lwz      r3, 0x33c(r25)
	lfs      f0, 4(r3)
	fmuls    f31, f31, f0

lbl_800A0310:
	lbz      r0, 0x362(r25)
	cmplwi   r0, 0
	beq      lbl_800A0330
	lbz      r0, 0x358(r25)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_800A0330
	lfs      f0, 0x248(r25)
	fmuls    f31, f31, f0

lbl_800A0330:
	rlwinm.  r30, r26, 0, 0x1e, 0x1e
	beq      lbl_800A0394
	lhz      r3, 0x276(r25)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lfd      f2, lbl_80516D80@sda21(r2)
	stw      r3, 0x14(r1)
	lfs      f1, 0x158(r25)
	lfd      f0, 0x10(r1)
	fsubs    f2, f0, f2
	bl       pitchToCent__9JASPlayerFff
	fmr      f30, f1
	addi     r3, r25, 0xe8
	bl       getValue__10JASVibrateCFv
	lwz      r3, 0x33c(r25)
	fmuls    f30, f30, f1
	cmplwi   r3, 0
	beq      lbl_800A0394
	li       r4, 2
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_800A0394
	lwz      r3, 0x33c(r25)
	lfs      f0, 8(r3)
	fmuls    f30, f30, f0

lbl_800A0394:
	rlwinm.  r29, r26, 0, 0x1c, 0x1c
	beq      lbl_800A03DC
	lwz      r3, 0x33c(r25)
	lfs      f29, 0x178(r25)
	cmplwi   r3, 0
	beq      lbl_800A03DC
	li       r4, 8
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_800A03DC
	lwz      r3, 0x33c(r25)
	fmr      f1, f29
	fmr      f3, f26
	lbz      r4, 0x35c(r25)
	lfs      f2, 0x14(r3)
	mr       r3, r25
	bl       panCalc__8JASTrackFfffUc
	fmr      f29, f1

lbl_800A03DC:
	rlwinm.  r28, r26, 0, 0x1d, 0x1d
	beq      lbl_800A0424
	lwz      r3, 0x33c(r25)
	lfs      f28, 0x168(r25)
	cmplwi   r3, 0
	beq      lbl_800A0424
	li       r4, 4
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_800A0424
	lwz      r3, 0x33c(r25)
	fmr      f1, f28
	fmr      f3, f26
	lbz      r4, 0x35d(r25)
	lfs      f2, 0xc(r3)
	mr       r3, r25
	bl       panCalc__8JASTrackFfffUc
	fmr      f28, f1

lbl_800A0424:
	rlwinm.  r27, r26, 0, 0x1b, 0x1b
	beq      lbl_800A046C
	lwz      r3, 0x33c(r25)
	lfs      f27, 0x188(r25)
	cmplwi   r3, 0
	beq      lbl_800A046C
	li       r4, 0x10
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_800A046C
	lwz      r3, 0x33c(r25)
	fmr      f1, f27
	fmr      f3, f26
	lbz      r4, 0x35e(r25)
	lfs      f2, 0x10(r3)
	mr       r3, r25
	bl       panCalc__8JASTrackFfffUc
	fmr      f27, f1

lbl_800A046C:
	rlwinm.  r0, r26, 0, 0x10, 0x13
	beq      lbl_800A04E4
	lfs      f1, lbl_80516D8C@sda21(r2)
	lfs      f0, 0x208(r25)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	sth      r0, 0x118(r25)
	lfs      f0, 0x218(r25)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	sth      r0, 0x11a(r25)
	lfs      f0, 0x228(r25)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	sth      r0, 0x11c(r25)
	lfs      f0, 0x238(r25)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	sth      r0, 0x11e(r25)
	lbz      r0, 0x13d(r25)
	ori      r0, r0, 0x20
	stb      r0, 0x13d(r25)

lbl_800A04E4:
	lwz      r3, 0x33c(r25)
	cmplwi   r3, 0
	beq      lbl_800A0548
	rlwinm.  r0, r26, 0, 0x18, 0x18
	beq      lbl_800A0548
	li       r4, 0x80
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_800A0548
	li       r24, 0
	b        lbl_800A052C

lbl_800A0510:
	lwz      r3, 0x33c(r25)
	mr       r4, r24
	bl       getIntFirFilter__13JASOuterParamFUc
	rlwinm   r4, r24, 1, 0x17, 0x1e
	addi     r24, r24, 1
	addi     r0, r4, 0x108
	sthx     r3, r25, r0

lbl_800A052C:
	clrlwi   r0, r24, 0x18
	cmplwi   r0, 8
	blt      lbl_800A0510
	lbz      r0, 0x13d(r25)
	rlwinm   r3, r0, 0, 0x1a, 0x1a
	addi     r0, r3, 8
	stb      r0, 0x13d(r25)

lbl_800A0548:
	rlwinm.  r0, r26, 0, 0x1a, 0x1a
	beq      lbl_800A056C
	lfs      f1, lbl_80516D8C@sda21(r2)
	lfs      f0, 0x198(r25)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	sth      r0, 0x128(r25)

lbl_800A056C:
	lwz      r4, 0x2f8(r25)
	cmplwi   r4, 0
	beq      lbl_800A0584
	lbz      r0, 0x357(r25)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_800A05C4

lbl_800A0584:
	cmplwi   r31, 0
	beq      lbl_800A0590
	stfs     f31, 0xf4(r25)

lbl_800A0590:
	cmplwi   r30, 0
	beq      lbl_800A059C
	stfs     f30, 0xf8(r25)

lbl_800A059C:
	cmplwi   r29, 0
	beq      lbl_800A05A8
	stfs     f29, 0xfc(r25)

lbl_800A05A8:
	cmplwi   r28, 0
	beq      lbl_800A05B4
	stfs     f28, 0x100(r25)

lbl_800A05B4:
	cmplwi   r27, 0
	beq      lbl_800A068C
	stfs     f27, 0x104(r25)
	b        lbl_800A068C

lbl_800A05C4:
	lhz      r3, 0x280(r25)
	lis      r0, 0x4330
	stw      r0, 0x28(r1)
	cmplwi   r31, 0
	lfd      f2, lbl_80516D80@sda21(r2)
	stw      r3, 0x2c(r1)
	lfs      f0, lbl_80516D8C@sda21(r2)
	lfd      f1, 0x28(r1)
	fsubs    f1, f1, f2
	fdivs    f26, f1, f0
	beq      lbl_800A05FC
	lfs      f0, 0xf4(r4)
	fmuls    f0, f0, f31
	stfs     f0, 0xf4(r25)

lbl_800A05FC:
	cmplwi   r30, 0
	beq      lbl_800A0614
	lwz      r3, 0x2f8(r25)
	lfs      f0, 0xf8(r3)
	fmuls    f0, f0, f30
	stfs     f0, 0xf8(r25)

lbl_800A0614:
	cmplwi   r29, 0
	beq      lbl_800A063C
	lwz      r3, 0x2f8(r25)
	fmr      f1, f29
	fmr      f3, f26
	lbz      r4, 0x35f(r25)
	lfs      f2, 0xfc(r3)
	mr       r3, r25
	bl       panCalc__8JASTrackFfffUc
	stfs     f1, 0xfc(r25)

lbl_800A063C:
	cmplwi   r28, 0
	beq      lbl_800A0664
	lwz      r3, 0x2f8(r25)
	fmr      f1, f28
	fmr      f3, f26
	lbz      r4, 0x360(r25)
	lfs      f2, 0x100(r3)
	mr       r3, r25
	bl       panCalc__8JASTrackFfffUc
	stfs     f1, 0x100(r25)

lbl_800A0664:
	cmplwi   r27, 0
	beq      lbl_800A068C
	lwz      r3, 0x2f8(r25)
	fmr      f1, f27
	fmr      f3, f26
	lbz      r4, 0x361(r25)
	lfs      f2, 0x104(r3)
	mr       r3, r25
	bl       panCalc__8JASTrackFfffUc
	stfs     f1, 0x104(r25)

lbl_800A068C:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	psq_l    f26, 88(r1), 0, qr0
	lfd      f26, 0x50(r1)
	lmw      r24, 0x30(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A06D0
 * Size:	0003B4
 */
void JASTrack::updateTempo()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r24, 0x20(r1)
	mr       r24, r3
	lwz      r3, 0x2f8(r3)
	cmplwi   r3, 0
	bne      lbl_800A0784
	lhz      r3, 0x354(r24)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f2, lbl_80516D80@sda21(r2)
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r0, 0x10(r1)
	fsubs    f0, f0, f2
	stfs     f0, 0x344(r24)
	lhz      r0, 0x352(r24)
	lfs      f1, 0x344(r24)
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f1, f0
	stfs     f0, 0x344(r24)
	bl       getDacRate__9JASDriverFv
	lfs      f2, 0x344(r24)
	lfs      f0, lbl_80516D94@sda21(r2)
	fdivs    f1, f2, f1
	stfs     f1, 0x344(r24)
	lfs      f1, 0x344(r24)
	fmuls    f0, f1, f0
	stfs     f0, 0x344(r24)
	lwz      r3, 0x33c(r24)
	cmplwi   r3, 0
	beq      lbl_800A0798
	li       r4, 0x40
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_800A0798
	lwz      r3, 0x33c(r24)
	lfs      f1, 0x344(r24)
	lfs      f0, 0x18(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x344(r24)
	b        lbl_800A0798

lbl_800A0784:
	lfs      f0, 0x344(r3)
	stfs     f0, 0x344(r24)
	lwz      r3, 0x2f8(r24)
	lhz      r0, 0x354(r3)
	sth      r0, 0x354(r24)

lbl_800A0798:
	li       r25, 0
	mr       r26, r24

lbl_800A07A0:
	lwz      r24, 0x2fc(r26)
	cmplwi   r24, 0
	beq      lbl_800A0A60
	lbz      r0, 0x35b(r24)
	cmplwi   r0, 0
	beq      lbl_800A0A60
	lwz      r3, 0x2f8(r24)
	cmplwi   r3, 0
	bne      lbl_800A0858
	lhz      r3, 0x354(r24)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lfd      f2, lbl_80516D80@sda21(r2)
	stw      r3, 0x14(r1)
	lfd      f0, 0x10(r1)
	stw      r0, 8(r1)
	fsubs    f0, f0, f2
	stfs     f0, 0x344(r24)
	lhz      r0, 0x352(r24)
	lfs      f1, 0x344(r24)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f1, f0
	stfs     f0, 0x344(r24)
	bl       getDacRate__9JASDriverFv
	lfs      f2, 0x344(r24)
	lfs      f0, lbl_80516D94@sda21(r2)
	fdivs    f1, f2, f1
	stfs     f1, 0x344(r24)
	lfs      f1, 0x344(r24)
	fmuls    f0, f1, f0
	stfs     f0, 0x344(r24)
	lwz      r3, 0x33c(r24)
	cmplwi   r3, 0
	beq      lbl_800A086C
	li       r4, 0x40
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_800A086C
	lwz      r3, 0x33c(r24)
	lfs      f1, 0x344(r24)
	lfs      f0, 0x18(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x344(r24)
	b        lbl_800A086C

lbl_800A0858:
	lfs      f0, 0x344(r3)
	stfs     f0, 0x344(r24)
	lwz      r3, 0x2f8(r24)
	lhz      r0, 0x354(r3)
	sth      r0, 0x354(r24)

lbl_800A086C:
	li       r31, 0
	mr       r27, r24

lbl_800A0874:
	lwz      r28, 0x2fc(r27)
	cmplwi   r28, 0
	beq      lbl_800A0A50
	lbz      r0, 0x35b(r28)
	cmplwi   r0, 0
	beq      lbl_800A0A50
	lwz      r3, 0x2f8(r28)
	cmplwi   r3, 0
	bne      lbl_800A092C
	lhz      r3, 0x354(r28)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lfd      f2, lbl_80516D80@sda21(r2)
	stw      r3, 0x14(r1)
	lfd      f0, 0x10(r1)
	stw      r0, 8(r1)
	fsubs    f0, f0, f2
	stfs     f0, 0x344(r28)
	lhz      r0, 0x352(r28)
	lfs      f1, 0x344(r28)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f1, f0
	stfs     f0, 0x344(r28)
	bl       getDacRate__9JASDriverFv
	lfs      f2, 0x344(r28)
	lfs      f0, lbl_80516D94@sda21(r2)
	fdivs    f1, f2, f1
	stfs     f1, 0x344(r28)
	lfs      f1, 0x344(r28)
	fmuls    f0, f1, f0
	stfs     f0, 0x344(r28)
	lwz      r3, 0x33c(r28)
	cmplwi   r3, 0
	beq      lbl_800A0940
	li       r4, 0x40
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_800A0940
	lwz      r3, 0x33c(r28)
	lfs      f1, 0x344(r28)
	lfs      f0, 0x18(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x344(r28)
	b        lbl_800A0940

lbl_800A092C:
	lfs      f0, 0x344(r3)
	stfs     f0, 0x344(r28)
	lwz      r3, 0x2f8(r28)
	lhz      r0, 0x354(r3)
	sth      r0, 0x354(r28)

lbl_800A0940:
	li       r30, 0

lbl_800A0944:
	lwz      r29, 0x2fc(r28)
	cmplwi   r29, 0
	beq      lbl_800A0A40
	lbz      r0, 0x35b(r29)
	cmplwi   r0, 0
	beq      lbl_800A0A40
	lwz      r3, 0x2f8(r29)
	cmplwi   r3, 0
	bne      lbl_800A09FC
	lhz      r3, 0x354(r29)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lfd      f2, lbl_80516D80@sda21(r2)
	stw      r3, 0x14(r1)
	lfd      f0, 0x10(r1)
	stw      r0, 8(r1)
	fsubs    f0, f0, f2
	stfs     f0, 0x344(r29)
	lhz      r0, 0x352(r29)
	lfs      f1, 0x344(r29)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f1, f0
	stfs     f0, 0x344(r29)
	bl       getDacRate__9JASDriverFv
	lfs      f2, 0x344(r29)
	lfs      f0, lbl_80516D94@sda21(r2)
	fdivs    f1, f2, f1
	stfs     f1, 0x344(r29)
	lfs      f1, 0x344(r29)
	fmuls    f0, f1, f0
	stfs     f0, 0x344(r29)
	lwz      r3, 0x33c(r29)
	cmplwi   r3, 0
	beq      lbl_800A0A10
	li       r4, 0x40
	bl       checkOuterSwitch__13JASOuterParamFUs
	clrlwi.  r0, r3, 0x18
	beq      lbl_800A0A10
	lwz      r3, 0x33c(r29)
	bl       getTempo__13JASOuterParamCFv
	lfs      f0, 0x344(r29)
	fmuls    f0, f0, f1
	stfs     f0, 0x344(r29)
	b        lbl_800A0A10

lbl_800A09FC:
	lfs      f0, 0x344(r3)
	stfs     f0, 0x344(r29)
	lwz      r3, 0x2f8(r29)
	lhz      r0, 0x354(r3)
	sth      r0, 0x354(r29)

lbl_800A0A10:
	li       r24, 0

lbl_800A0A14:
	lwz      r3, 0x2fc(r29)
	cmplwi   r3, 0
	beq      lbl_800A0A30
	lbz      r0, 0x35b(r3)
	cmplwi   r0, 0
	beq      lbl_800A0A30
	bl       updateTempo__8JASTrackFv

lbl_800A0A30:
	addi     r24, r24, 1
	addi     r29, r29, 4
	cmpwi    r24, 0x10
	blt      lbl_800A0A14

lbl_800A0A40:
	addi     r30, r30, 1
	addi     r28, r28, 4
	cmpwi    r30, 0x10
	blt      lbl_800A0944

lbl_800A0A50:
	addi     r31, r31, 1
	addi     r27, r27, 4
	cmpwi    r31, 0x10
	blt      lbl_800A0874

lbl_800A0A60:
	addi     r25, r25, 1
	addi     r26, r26, 4
	cmpwi    r25, 0x10
	blt      lbl_800A07A0
	lmw      r24, 0x20(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A0A84
 * Size:	000008
 */
f32 JASOuterParam::getTempo() const
{
	return _18;
	/*
	lfs      f1, 0x18(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A0A8C
 * Size:	000294
 */
void JASTrack::updateSeq(unsigned long, bool)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r18, 8(r1)
	mr       r18, r3
	mr       r31, r5
	lwz      r3, 0x33c(r3)
	lwz      r0, 0x34c(r18)
	cmplwi   r3, 0
	or       r21, r4, r0
	beq      lbl_800A0AD0
	bl       getOuterUpdate__13JASOuterParamFv
	clrlwi   r0, r3, 0x10
	lwz      r3, 0x33c(r18)
	or       r21, r21, r0
	li       r4, 0
	bl       setOuterUpdate__13JASOuterParamFUs

lbl_800A0AD0:
	addi     r3, r18, 0xe8
	bl       incCounter__10JASVibrateFv
	li       r0, 0
	cmplwi   r21, 0
	stw      r0, 0x34c(r18)
	beq      lbl_800A0AF4
	mr       r3, r18
	mr       r4, r21
	bl       updateTrack__8JASTrackFUl

lbl_800A0AF4:
	li       r20, 0
	mr       r22, r18

lbl_800A0AFC:
	lwz      r18, 0x2fc(r22)
	cmplwi   r18, 0
	beq      lbl_800A0CFC
	lbz      r0, 0x35b(r18)
	cmplwi   r0, 0
	beq      lbl_800A0CFC
	clrlwi.  r0, r31, 0x18
	beq      lbl_800A0CF0
	lwz      r3, 0x33c(r18)
	lwz      r0, 0x34c(r18)
	cmplwi   r3, 0
	or       r29, r21, r0
	beq      lbl_800A0B48
	bl       getOuterUpdate__13JASOuterParamFv
	clrlwi   r0, r3, 0x10
	lwz      r3, 0x33c(r18)
	or       r29, r29, r0
	li       r4, 0
	bl       setOuterUpdate__13JASOuterParamFUs

lbl_800A0B48:
	addi     r3, r18, 0xe8
	bl       incCounter__10JASVibrateFv
	li       r0, 0
	cmplwi   r29, 0
	stw      r0, 0x34c(r18)
	beq      lbl_800A0B6C
	mr       r3, r18
	mr       r4, r29
	bl       updateTrack__8JASTrackFUl

lbl_800A0B6C:
	li       r30, 0
	mr       r23, r18

lbl_800A0B74:
	lwz      r24, 0x2fc(r23)
	cmplwi   r24, 0
	beq      lbl_800A0CDC
	lbz      r0, 0x35b(r24)
	cmplwi   r0, 0
	beq      lbl_800A0CDC
	clrlwi.  r0, r31, 0x18
	beq      lbl_800A0CD0
	lwz      r3, 0x33c(r24)
	lwz      r0, 0x34c(r24)
	cmplwi   r3, 0
	or       r27, r29, r0
	beq      lbl_800A0BC0
	bl       getOuterUpdate__13JASOuterParamFv
	clrlwi   r0, r3, 0x10
	lwz      r3, 0x33c(r24)
	or       r27, r27, r0
	li       r4, 0
	bl       setOuterUpdate__13JASOuterParamFUs

lbl_800A0BC0:
	addi     r3, r24, 0xe8
	bl       incCounter__10JASVibrateFv
	li       r0, 0
	cmplwi   r27, 0
	stw      r0, 0x34c(r24)
	beq      lbl_800A0BE4
	mr       r3, r24
	mr       r4, r27
	bl       updateTrack__8JASTrackFUl

lbl_800A0BE4:
	li       r28, 0

lbl_800A0BE8:
	lwz      r25, 0x2fc(r24)
	cmplwi   r25, 0
	beq      lbl_800A0CBC
	lbz      r0, 0x35b(r25)
	cmplwi   r0, 0
	beq      lbl_800A0CBC
	clrlwi.  r0, r31, 0x18
	beq      lbl_800A0CB0
	lwz      r3, 0x33c(r25)
	lwz      r0, 0x34c(r25)
	cmplwi   r3, 0
	or       r26, r27, r0
	beq      lbl_800A0C34
	bl       getOuterUpdate__13JASOuterParamFv
	clrlwi   r0, r3, 0x10
	lwz      r3, 0x33c(r25)
	or       r26, r26, r0
	li       r4, 0
	bl       setOuterUpdate__13JASOuterParamFUs

lbl_800A0C34:
	addi     r3, r25, 0xe8
	bl       incCounter__10JASVibrateFv
	li       r0, 0
	cmplwi   r26, 0
	stw      r0, 0x34c(r25)
	beq      lbl_800A0C58
	mr       r3, r25
	mr       r4, r26
	bl       updateTrack__8JASTrackFUl

lbl_800A0C58:
	clrlwi   r19, r31, 0x18
	li       r18, 0

lbl_800A0C60:
	lwz      r3, 0x2fc(r25)
	cmplwi   r3, 0
	beq      lbl_800A0C9C
	lbz      r0, 0x35b(r3)
	cmplwi   r0, 0
	beq      lbl_800A0C9C
	cmplwi   r19, 0
	beq      lbl_800A0C90
	mr       r4, r26
	mr       r5, r31
	bl       updateSeq__8JASTrackFUlb
	b        lbl_800A0C9C

lbl_800A0C90:
	lwz      r0, 0x34c(r3)
	or       r0, r0, r26
	stw      r0, 0x34c(r3)

lbl_800A0C9C:
	addi     r18, r18, 1
	addi     r25, r25, 4
	cmpwi    r18, 0x10
	blt      lbl_800A0C60
	b        lbl_800A0CBC

lbl_800A0CB0:
	lwz      r0, 0x34c(r25)
	or       r0, r0, r27
	stw      r0, 0x34c(r25)

lbl_800A0CBC:
	addi     r28, r28, 1
	addi     r24, r24, 4
	cmpwi    r28, 0x10
	blt      lbl_800A0BE8
	b        lbl_800A0CDC

lbl_800A0CD0:
	lwz      r0, 0x34c(r24)
	or       r0, r0, r29
	stw      r0, 0x34c(r24)

lbl_800A0CDC:
	addi     r30, r30, 1
	addi     r23, r23, 4
	cmpwi    r30, 0x10
	blt      lbl_800A0B74
	b        lbl_800A0CFC

lbl_800A0CF0:
	lwz      r0, 0x34c(r18)
	or       r0, r0, r21
	stw      r0, 0x34c(r18)

lbl_800A0CFC:
	addi     r20, r20, 1
	addi     r22, r22, 4
	cmpwi    r20, 0x10
	blt      lbl_800A0AFC
	lmw      r18, 8(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A0D20
 * Size:	0000D8
 */
void JASTrack::seqTimeToDspTime(long, unsigned char)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	lis      r6, 0x4330
	xoris    r0, r4, 0x8000
	clrlwi   r4, r5, 0x18
	stw      r0, 0xc(r1)
	lbz      r0, 0x364(r3)
	stw      r6, 8(r1)
	lfd      f1, lbl_80516DA8@sda21(r2)
	cmplwi   r0, 0
	lfd      f0, 8(r1)
	stw      r4, 0x14(r1)
	lfd      f2, lbl_80516D80@sda21(r2)
	fsubs    f31, f0, f1
	stw      r6, 0x10(r1)
	lfs      f0, lbl_80516D98@sda21(r2)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fmuls    f31, f31, f1
	fdivs    f31, f31, f0
	beq      lbl_800A0D8C
	lfs      f0, 0x344(r3)
	fdivs    f31, f31, f0
	b        lbl_800A0DD4

lbl_800A0D8C:
	lhz      r0, 0x354(r3)
	stw      r6, 0x10(r1)
	lfs      f1, lbl_80516D9C@sda21(r2)
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f0, f1, f0
	fmuls    f31, f31, f0
	bl       getSubFrames__9JASDriverFv
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_80516D80@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_80516DA0@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fmuls    f31, f31, f0

lbl_800A0DD4:
	fctiwz   f0, f31
	stfd     f0, 0x10(r1)
	lwz      r3, 0x14(r1)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A0DF8
 * Size:	000084
 */
void JASTrack::setParam(int, float, int)
{
	/*
	slwi     r4, r4, 4
	stwu     r1, -0x20(r1)
	addi     r4, r4, 0x148
	cmpwi    r5, 0
	add      r4, r3, r4
	stfs     f1, 4(r4)
	bgt      lbl_800A0E30
	lfs      f0, 4(r4)
	lfs      f1, lbl_80516D78@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f0, lbl_80516D7C@sda21(r2)
	stfs     f1, 0xc(r4)
	stfs     f0, 8(r4)
	b        lbl_800A0E74

lbl_800A0E30:
	xoris    r3, r5, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f3, 4(r4)
	stw      r0, 8(r1)
	lfs      f1, 0(r4)
	lfd      f2, lbl_80516DA8@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f1, f3, f1
	stw      r3, 0x14(r1)
	fsubs    f0, f0, f2
	stw      r0, 0x10(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	stfs     f1, 0xc(r4)
	stfs     f0, 8(r4)

lbl_800A0E74:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A0E7C
 * Size:	000064
 */
bool JASTrack::setSeqData(u8* p1, long p2)
{
	init();
	_357 = 3;
	m_seqCtrl.start(p1, 0);
	updateTrackAll();
	_35B = 2;
	return true;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       init__8JASTrackFv
	li       r0, 3
	mr       r4, r31
	stb      r0, 0x357(r30)
	addi     r3, r30, 0xc
	li       r5, 0
	bl       start__10JASSeqCtrlFPvUl
	mr       r3, r30
	bl       updateTrackAll__8JASTrackFv
	li       r0, 2
	li       r3, 1
	stb      r0, 0x35b(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A0EE0
 * Size:	000078
 */
void JASTrack::startSeq()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x35b(r3)
	cmpwi    r0, 2
	beq      lbl_800A0F30
	bge      lbl_800A0F0C
	cmpwi    r0, 0
	beq      lbl_800A0F18
	bge      lbl_800A0F20
	b        lbl_800A0F38

lbl_800A0F0C:
	cmpwi    r0, 4
	bge      lbl_800A0F38
	b        lbl_800A0F28

lbl_800A0F18:
	li       r3, 0
	b        lbl_800A0F48

lbl_800A0F20:
	li       r3, 0
	b        lbl_800A0F48

lbl_800A0F28:
	li       r3, 0
	b        lbl_800A0F48

lbl_800A0F30:
	li       r0, 1
	stb      r0, 0x35b(r3)

lbl_800A0F38:
	lis      r5, rootCallback__8JASTrackFPv@ha
	mr       r4, r3
	addi     r3, r5, rootCallback__8JASTrackFPv@l
	bl       registerSubFrameCallback__9JASDriverFPFPv_lPv

lbl_800A0F48:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A0F58
 * Size:	0000FC
 */
void JASTrack::stopSeq()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lbz      r0, 0x35b(r3)
	cmpwi    r0, 1
	beq      lbl_800A102C
	bge      lbl_800A0F90
	cmpwi    r0, 0
	bge      lbl_800A1034
	b        lbl_800A102C

lbl_800A0F90:
	cmpwi    r0, 3
	bge      lbl_800A102C
	li       r0, 0
	stb      r0, 0x35b(r29)
	lbz      r0, 0x366(r29)
	cmplwi   r0, 0
	beq      lbl_800A1034
	cmplwi   r29, 0
	beq      lbl_800A1034
	lwz      r30, 0(r29)
	b        lbl_800A0FE8

lbl_800A0FBC:
	lwz      r3, 0(r30)
	li       r4, 0
	lwz      r31, 0xc(r3)
	bl       release__10JASChannelFUs
	lwz      r3, 0(r30)
	bl       free__10JASChannelFv
	lwz      r4, 0(r30)
	mr       r3, r29
	lwz      r4, 0(r4)
	bl       remove__10JSUPtrListFP10JSUPtrLink
	mr       r30, r31

lbl_800A0FE8:
	cmplwi   r30, 0
	bne      lbl_800A0FBC
	cmplwi   r29, 0
	beq      lbl_800A1004
	mr       r3, r29
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_800A1004:
	li       r0, 0
	stw      r0, 0(r29)
	lwz      r3, sFreeListEnd__8JASTrack@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_800A1020
	stw      r29, 0(r3)
	b        lbl_800A1024

lbl_800A1020:
	stw      r29, sFreeList__8JASTrack@sda21(r13)

lbl_800A1024:
	stw      r29, sFreeListEnd__8JASTrack@sda21(r13)
	b        lbl_800A1034

lbl_800A102C:
	li       r0, 3
	stb      r0, 0x35b(r29)

lbl_800A1034:
	lwz      r0, 0x24(r1)
	li       r3, 1
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
 * Address:	800A1054
 * Size:	00003C
 */
void JASTrack::stopSeqMain()
{
	updateSeq(0, true);
	close();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	li       r5, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       updateSeq__8JASTrackFUlb
	mr       r3, r31
	bl       close__8JASTrackFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A1090
 * Size:	0001D4
 */
void JASTrack::close()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lbz      r0, 0x35b(r3)
	cmplwi   r0, 0
	beq      lbl_800A1244
	lwz      r0, 0x2f8(r31)
	cmplwi   r0, 0
	bne      lbl_800A1108
	li       r28, 0
	li       r30, 0
	b        lbl_800A10F8

lbl_800A10D4:
	rlwinm   r3, r28, 2, 0x16, 0x1d
	addi     r29, r3, 0xc0
	lwzx     r3, r31, r29
	cmplwi   r3, 0
	beq      lbl_800A10F4
	li       r4, 0xa
	bl       release__10JASChannelFUs
	stwx     r30, r31, r29

lbl_800A10F4:
	addi     r28, r28, 1

lbl_800A10F8:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 8
	blt      lbl_800A10D4
	b        lbl_800A1144

lbl_800A1108:
	li       r28, 0
	li       r30, 0
	b        lbl_800A1138

lbl_800A1114:
	rlwinm   r3, r28, 2, 0x16, 0x1d
	addi     r29, r3, 0xc0
	lwzx     r3, r31, r29
	cmplwi   r3, 0
	beq      lbl_800A1134
	li       r4, 0
	bl       release__10JASChannelFUs
	stwx     r30, r31, r29

lbl_800A1134:
	addi     r28, r28, 1

lbl_800A1138:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 8
	blt      lbl_800A1114

lbl_800A1144:
	li       r30, 0
	mr       r29, r31
	stb      r30, 0x35b(r31)
	li       r28, 0

lbl_800A1154:
	lwz      r3, 0x2fc(r29)
	cmplwi   r3, 0
	beq      lbl_800A1168
	bl       close__8JASTrackFv
	stw      r30, 0x2fc(r29)

lbl_800A1168:
	addi     r28, r28, 1
	addi     r29, r29, 4
	cmpwi    r28, 0x10
	blt      lbl_800A1154
	li       r0, 0
	stb      r0, 0x363(r31)
	lwz      r29, 0(r31)
	b        lbl_800A11B4

lbl_800A1188:
	lwz      r3, 0(r29)
	li       r4, 0
	lwz      r30, 0xc(r3)
	bl       release__10JASChannelFUs
	lwz      r3, 0(r29)
	bl       free__10JASChannelFv
	lwz      r4, 0(r29)
	mr       r3, r31
	lwz      r4, 0(r4)
	bl       remove__10JSUPtrListFP10JSUPtrLink
	mr       r29, r30

lbl_800A11B4:
	cmplwi   r29, 0
	bne      lbl_800A1188
	lbz      r0, 0x366(r31)
	cmplwi   r0, 0
	beq      lbl_800A1244
	cmplwi   r31, 0
	beq      lbl_800A1244
	lwz      r29, 0(r31)
	b        lbl_800A1204

lbl_800A11D8:
	lwz      r3, 0(r29)
	li       r4, 0
	lwz      r30, 0xc(r3)
	bl       release__10JASChannelFUs
	lwz      r3, 0(r29)
	bl       free__10JASChannelFv
	lwz      r4, 0(r29)
	mr       r3, r31
	lwz      r4, 0(r4)
	bl       remove__10JSUPtrListFP10JSUPtrLink
	mr       r29, r30

lbl_800A1204:
	cmplwi   r29, 0
	bne      lbl_800A11D8
	cmplwi   r31, 0
	beq      lbl_800A1220
	mr       r3, r31
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_800A1220:
	li       r0, 0
	stw      r0, 0(r31)
	lwz      r3, sFreeListEnd__8JASTrack@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_800A123C
	stw      r31, 0(r3)
	b        lbl_800A1240

lbl_800A123C:
	stw      r31, sFreeList__8JASTrack@sda21(r13)

lbl_800A1240:
	stw      r31, sFreeListEnd__8JASTrack@sda21(r13)

lbl_800A1244:
	lwz      r0, 0x24(r1)
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
 * Address:	800A1264
 * Size:	000080
 */
void JASTrack::setNoteMask(u8 noteMask)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	clrlwi   r29, r4, 0x18
	li       r27, 0
	li       r30, 1
	li       r31, 0
	stb      r4, 0x35a(r3)
	b        lbl_800A12C4

lbl_800A1290:
	clrlwi   r0, r27, 0x18
	slw      r0, r30, r0
	and.     r0, r29, r0
	beq      lbl_800A12C0
	rlwinm   r3, r27, 2, 0x16, 0x1d
	addi     r28, r3, 0xc0
	lwzx     r3, r26, r28
	cmplwi   r3, 0
	beq      lbl_800A12C0
	li       r4, 0xa
	bl       release__10JASChannelFUs
	stwx     r31, r26, r28

lbl_800A12C0:
	addi     r27, r27, 1

lbl_800A12C4:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 8
	blt      lbl_800A1290
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A12E4
 * Size:	000234
 */
void JASTrack::muteTrack(bool)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r23, 0xc(r1)
	mr       r26, r4
	mr       r28, r3
	stb      r26, 0x363(r3)
	lwz      r0, 0x34c(r3)
	ori      r0, r0, 1
	stw      r0, 0x34c(r3)
	lbz      r0, 0x363(r3)
	cmplwi   r0, 0
	beq      lbl_800A1360
	lbz      r0, 0x358(r28)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_800A1360
	li       r24, 0
	li       r25, 0
	b        lbl_800A1354

lbl_800A1330:
	rlwinm   r3, r24, 2, 0x16, 0x1d
	addi     r23, r3, 0xc0
	lwzx     r3, r28, r23
	cmplwi   r3, 0
	beq      lbl_800A1350
	li       r4, 0xa
	bl       release__10JASChannelFUs
	stwx     r25, r28, r23

lbl_800A1350:
	addi     r24, r24, 1

lbl_800A1354:
	clrlwi   r0, r24, 0x18
	cmplwi   r0, 8
	blt      lbl_800A1330

lbl_800A1360:
	li       r27, 0

lbl_800A1364:
	lwz      r24, 0x2fc(r28)
	cmplwi   r24, 0
	beq      lbl_800A14F4
	stb      r26, 0x363(r24)
	lwz      r0, 0x34c(r24)
	ori      r0, r0, 1
	stw      r0, 0x34c(r24)
	lbz      r0, 0x363(r24)
	cmplwi   r0, 0
	beq      lbl_800A13D4
	lbz      r0, 0x358(r24)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_800A13D4
	li       r29, 0
	mr       r25, r29
	b        lbl_800A13C8

lbl_800A13A4:
	rlwinm   r3, r29, 2, 0x16, 0x1d
	addi     r23, r3, 0xc0
	lwzx     r3, r24, r23
	cmplwi   r3, 0
	beq      lbl_800A13C4
	li       r4, 0xa
	bl       release__10JASChannelFUs
	stwx     r25, r24, r23

lbl_800A13C4:
	addi     r29, r29, 1

lbl_800A13C8:
	clrlwi   r0, r29, 0x18
	cmplwi   r0, 8
	blt      lbl_800A13A4

lbl_800A13D4:
	li       r31, 0
	mr       r29, r24

lbl_800A13DC:
	lwz      r30, 0x2fc(r29)
	cmplwi   r30, 0
	beq      lbl_800A14E4
	stb      r26, 0x363(r30)
	lwz      r0, 0x34c(r30)
	ori      r0, r0, 1
	stw      r0, 0x34c(r30)
	lbz      r0, 0x363(r30)
	cmplwi   r0, 0
	beq      lbl_800A144C
	lbz      r0, 0x358(r30)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_800A144C
	li       r24, 0
	mr       r25, r24
	b        lbl_800A1440

lbl_800A141C:
	rlwinm   r3, r24, 2, 0x16, 0x1d
	addi     r23, r3, 0xc0
	lwzx     r3, r30, r23
	cmplwi   r3, 0
	beq      lbl_800A143C
	li       r4, 0xa
	bl       release__10JASChannelFUs
	stwx     r25, r30, r23

lbl_800A143C:
	addi     r24, r24, 1

lbl_800A1440:
	clrlwi   r0, r24, 0x18
	cmplwi   r0, 8
	blt      lbl_800A141C

lbl_800A144C:
	li       r25, 0

lbl_800A1450:
	lwz      r23, 0x2fc(r30)
	cmplwi   r23, 0
	beq      lbl_800A14D4
	stb      r26, 0x363(r23)
	lwz      r0, 0x34c(r23)
	ori      r0, r0, 1
	stw      r0, 0x34c(r23)
	lbz      r0, 0x363(r23)
	cmplwi   r0, 0
	beq      lbl_800A14AC
	lbz      r0, 0x358(r23)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_800A14AC
	li       r24, 0
	b        lbl_800A14A0

lbl_800A148C:
	mr       r3, r23
	mr       r4, r24
	li       r5, 0xa
	bl       noteOff__8JASTrackFUcUs
	addi     r24, r24, 1

lbl_800A14A0:
	clrlwi   r0, r24, 0x18
	cmplwi   r0, 8
	blt      lbl_800A148C

lbl_800A14AC:
	li       r24, 0

lbl_800A14B0:
	lwz      r3, 0x2fc(r23)
	cmplwi   r3, 0
	beq      lbl_800A14C4
	mr       r4, r26
	bl       muteTrack__8JASTrackFb

lbl_800A14C4:
	addi     r24, r24, 1
	addi     r23, r23, 4
	cmpwi    r24, 0x10
	blt      lbl_800A14B0

lbl_800A14D4:
	addi     r25, r25, 1
	addi     r30, r30, 4
	cmpwi    r25, 0x10
	blt      lbl_800A1450

lbl_800A14E4:
	addi     r31, r31, 1
	addi     r29, r29, 4
	cmpwi    r31, 0x10
	blt      lbl_800A13DC

lbl_800A14F4:
	addi     r27, r27, 1
	addi     r28, r28, 4
	cmpwi    r27, 0x10
	blt      lbl_800A1364
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void JASTrack::muteChildTracks(unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A1518
 * Size:	000044
 */
bool JASTrack::start(void* p1, u32 p2)
{
	m_seqCtrl.start(p1, p2);
	_35B = 1;
	updateTrackAll();
	return false;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0xc
	bl       start__10JASSeqCtrlFPvUl
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x35b(r31)
	bl       updateTrackAll__8JASTrackFv
	lwz      r0, 0x14(r1)
	li       r3, 0
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A155C
 * Size:	0001DC
 */
void JASTrack::openChild(unsigned char, unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	rlwinm   r0, r4, 2, 0x16, 0x1d
	stmw     r27, 0xc(r1)
	mr       r27, r3
	add      r30, r27, r0
	mr       r28, r4
	mr       r29, r5
	lwz      r3, 0x2fc(r30)
	cmplwi   r3, 0
	beq      lbl_800A1598
	bl       close__8JASTrackFv
	li       r0, 0
	stw      r0, 0x2fc(r30)

lbl_800A1598:
	lwz      r31, sFreeList__8JASTrack@sda21(r13)
	cmplwi   r31, 0
	bne      lbl_800A15AC
	li       r31, 0
	b        lbl_800A15C4

lbl_800A15AC:
	lwz      r0, 0(r31)
	cmplwi   r0, 0
	stw      r0, sFreeList__8JASTrack@sda21(r13)
	bne      lbl_800A15C4
	li       r0, 0
	stw      r0, sFreeListEnd__8JASTrack@sda21(r13)

lbl_800A15C4:
	cmplwi   r31, 0
	beq      lbl_800A15D8
	mr       r3, r31
	bl       __ct__8JASTrackFv
	mr       r31, r3

lbl_800A15D8:
	cmplwi   r31, 0
	bne      lbl_800A15E8
	li       r3, 0
	b        lbl_800A1724

lbl_800A15E8:
	mr       r3, r31
	bl       init__8JASTrackFv
	li       r3, 1
	clrlwi   r0, r28, 0x18
	stb      r3, 0x366(r31)
	stw      r27, 0x2f8(r31)
	stb      r29, 0x357(r31)
	lwz      r4, 0x348(r27)
	slwi     r3, r4, 4
	rlwinm   r4, r4, 0, 0, 3
	or       r0, r3, r0
	addis    r3, r4, 0x1000
	clrlwi   r0, r0, 4
	or       r0, r3, r0
	stw      r0, 0x348(r31)
	stw      r31, 0x2fc(r30)
	lwz      r3, 0x2f8(r31)
	cmplwi   r3, 0
	beq      lbl_800A1720
	lhz      r3, 0x352(r3)
	li       r0, 0
	sth      r3, 0x352(r31)
	stb      r0, 0x365(r31)
	lwz      r3, 0x2f8(r31)
	lfs      f0, 0x344(r3)
	stfs     f0, 0x344(r31)
	lwz      r3, 0x2f8(r31)
	lhz      r0, 0x354(r3)
	sth      r0, 0x354(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x364(r3)
	stb      r0, 0x364(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x362(r3)
	stb      r0, 0x362(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x358(r3)
	stb      r0, 0x358(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x359(r3)
	stb      r0, 0x359(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x363(r3)
	stb      r0, 0x363(r31)
	lbz      r0, 0x357(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_800A1720
	lwz      r4, 0x2f8(r31)
	addi     r3, r31, 0x268
	addi     r4, r4, 0x268
	bl       inherit__16JASRegisterParamFRC16JASRegisterParam
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x35c(r3)
	stb      r0, 0x35c(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x35f(r3)
	stb      r0, 0x35f(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x13e(r3)
	stb      r0, 0x13e(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x35d(r3)
	stb      r0, 0x35d(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x360(r3)
	stb      r0, 0x360(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x13f(r3)
	stb      r0, 0x13f(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x35e(r3)
	stb      r0, 0x35e(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x361(r3)
	stb      r0, 0x361(r31)
	lwz      r3, 0x2f8(r31)
	lbz      r0, 0x140(r3)
	stb      r0, 0x140(r31)

lbl_800A1720:
	mr       r3, r31

lbl_800A1724:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void JASTrack::loadTbl(unsigned long, unsigned long, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A1738
 * Size:	000040
 */
void JASTrack::exchangeRegisterValue(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 0x40
	bge      lbl_800A1758
	bl       readReg32__8JASTrackFUc
	b        lbl_800A1768

lbl_800A1758:
	addi     r0, r4, -64
	rlwinm   r0, r0, 1, 0x17, 0x1e
	add      r3, r3, r0
	lhz      r3, 0x74(r3)

lbl_800A1768:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A1778
 * Size:	000094
 */
void JASTrack::readReg32(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi   r0, r4, 0x18
	cmpwi    r0, 0x28
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bge      lbl_800A17A8
	cmpwi    r0, 0x23
	beq      lbl_800A17C0
	b        lbl_800A17E4

lbl_800A17A8:
	cmpwi    r0, 0x2c
	bge      lbl_800A17E4
	slwi     r0, r0, 2
	add      r3, r30, r0
	lwz      r31, 0x1e8(r3)
	b        lbl_800A17F0

lbl_800A17C0:
	li       r4, 4
	bl       readReg16__8JASTrackFUc
	slwi     r31, r3, 0x10
	li       r4, 5
	mr       r3, r30
	bl       readReg16__8JASTrackFUc
	clrlwi   r0, r3, 0x10
	or       r31, r31, r0
	b        lbl_800A17F0

lbl_800A17E4:
	mr       r3, r30
	bl       readReg16__8JASTrackFUc
	clrlwi   r31, r3, 0x10

lbl_800A17F0:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A180C
 * Size:	000218
 */
void JASTrack::readReg16(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	clrlwi   r5, r4, 0x18
	stw      r0, 0x14(r1)
	addi     r0, r5, -32
	cmplwi   r0, 0x10
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	bgt      lbl_800A19FC
	lis      r5, lbl_804A4350@ha
	slwi     r0, r0, 2
	addi     r5, r5, lbl_804A4350@l
	lwzx     r0, r5, r0
	mtctr    r0
	bctr
	.global  lbl_800A184C

lbl_800A184C:
	addi     r3, r30, 0x268
	bl       getBankNumber__16JASRegisterParamCFv
	clrlwi   r31, r3, 0x18
	b        lbl_800A1A08
	.global  lbl_800A185C

lbl_800A185C:
	addi     r3, r30, 0x268
	bl       getProgramNumber__16JASRegisterParamCFv
	clrlwi   r31, r3, 0x18
	b        lbl_800A1A08
	.global  lbl_800A186C

lbl_800A186C:
	li       r4, 0
	bl       readReg16__8JASTrackFUc
	rlwinm   r31, r3, 8, 0x10, 0x17
	mr       r3, r30
	li       r4, 1
	bl       readReg16__8JASTrackFUc
	or       r31, r31, r3
	b        lbl_800A1A08
	.global  lbl_800A188C

lbl_800A188C:
	li       r0, 4
	addi     r3, r30, 0x3c
	li       r31, 0
	li       r5, 0xf
	mtctr    r0

lbl_800A18A0:
	lwz      r4, 0x2fc(r3)
	rlwinm   r31, r31, 1, 0x10, 0x1e
	cmplwi   r4, 0
	beq      lbl_800A18C4
	lbz      r0, 0x35b(r4)
	cmplwi   r0, 0
	beq      lbl_800A18C4
	ori      r0, r31, 1
	clrlwi   r31, r0, 0x10

lbl_800A18C4:
	lwz      r4, 0x2f8(r3)
	rlwinm   r31, r31, 1, 0x10, 0x1e
	cmplwi   r4, 0
	beq      lbl_800A18E8
	lbz      r0, 0x35b(r4)
	cmplwi   r0, 0
	beq      lbl_800A18E8
	ori      r0, r31, 1
	clrlwi   r31, r0, 0x10

lbl_800A18E8:
	lwz      r4, 0x2f4(r3)
	rlwinm   r31, r31, 1, 0x10, 0x1e
	cmplwi   r4, 0
	beq      lbl_800A190C
	lbz      r0, 0x35b(r4)
	cmplwi   r0, 0
	beq      lbl_800A190C
	ori      r0, r31, 1
	clrlwi   r31, r0, 0x10

lbl_800A190C:
	lwz      r4, 0x2f0(r3)
	rlwinm   r31, r31, 1, 0x10, 0x1e
	cmplwi   r4, 0
	beq      lbl_800A1930
	lbz      r0, 0x35b(r4)
	cmplwi   r0, 0
	beq      lbl_800A1930
	ori      r0, r31, 1
	clrlwi   r31, r0, 0x10

lbl_800A1930:
	addi     r3, r3, -16
	addi     r5, r5, -3
	bdnz     lbl_800A18A0
	b        lbl_800A1A08
	.global  lbl_800A1940

lbl_800A1940:
	li       r0, 4
	addi     r4, r30, 0x1c
	li       r31, 0
	li       r5, 7
	mtctr    r0

lbl_800A1954:
	lwz      r3, 0xc0(r4)
	rlwinm   r31, r31, 1, 0x10, 0x1e
	cmplwi   r3, 0
	bne      lbl_800A196C
	li       r0, 1
	b        lbl_800A1984

lbl_800A196C:
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_800A1980
	li       r0, 1
	b        lbl_800A1984

lbl_800A1980:
	li       r0, 0

lbl_800A1984:
	lwz      r3, 0xbc(r4)
	clrlwi   r0, r0, 0x18
	or       r31, r31, r0
	cmplwi   r3, 0
	rlwinm   r31, r31, 1, 0x10, 0x1e
	bne      lbl_800A19A4
	li       r0, 1
	b        lbl_800A19BC

lbl_800A19A4:
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_800A19B8
	li       r0, 1
	b        lbl_800A19BC

lbl_800A19B8:
	li       r0, 0

lbl_800A19BC:
	clrlwi   r0, r0, 0x18
	addi     r5, r5, -1
	or       r31, r31, r0
	addi     r4, r4, -8
	bdnz     lbl_800A1954
	b        lbl_800A1A08
	.global  lbl_800A19D4

lbl_800A19D4:
	lwz      r0, 0x18(r30)
	cmplwi   r0, 0
	bne      lbl_800A19E8
	li       r0, 0
	b        lbl_800A19F4

lbl_800A19E8:
	slwi     r0, r0, 1
	add      r3, r30, r0
	lhz      r0, 0x3a(r3)

lbl_800A19F4:
	mr       r31, r0
	b        lbl_800A1A08
	.global  lbl_800A19FC

lbl_800A19FC:
	rlwinm   r0, r4, 1, 0x17, 0x1e
	add      r3, r30, r0
	lhz      r31, 0x268(r3)

lbl_800A1A08:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A1A24
 * Size:	0000D0
 */
void JASTrack::writeRegDirect(unsigned char, unsigned short)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi   r0, r4, 0x18
	cmpwi    r0, 0x20
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r3
	bge      lbl_800A1A6C
	cmpwi    r0, 3
	bge      lbl_800A1AC0
	cmpwi    r0, 0
	bge      lbl_800A1A7C
	b        lbl_800A1AC0

lbl_800A1A6C:
	cmpwi    r0, 0x22
	beq      lbl_800A1A94
	bge      lbl_800A1AC0
	b        lbl_800A1AD4

lbl_800A1A7C:
	clrlwi   r3, r29, 0x18
	mr       r29, r3
	bl       extend8to16__9JASPlayerFUc
	clrlwi   r4, r3, 0x10
	b        lbl_800A1AC4
	b        lbl_800A1AD4

lbl_800A1A94:
	rlwinm   r31, r29, 0x18, 0x18, 0x1f
	clrlwi   r30, r29, 0x10
	mr       r3, r31
	bl       extend8to16__9JASPlayerFUc
	sth      r31, 0x268(r28)
	clrlwi   r0, r30, 0x18
	mr       r4, r29
	li       r30, 1
	sth      r3, 0x26e(r28)
	mr       r29, r0
	b        lbl_800A1AC4

lbl_800A1AC0:
	mr       r4, r29

lbl_800A1AC4:
	rlwinm   r0, r30, 1, 0x17, 0x1e
	add      r3, r28, r0
	sth      r29, 0x268(r3)
	sth      r4, 0x26e(r28)

lbl_800A1AD4:
	lwz      r0, 0x24(r1)
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
 * Size:	000008
 */
void JASRegisterParam::setFlag(unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JSULoByte(unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A1AF4
 * Size:	0005B0
 */
void JASTrack::writeRegParam(unsigned char)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	clrlwi   r0, r4, 0x1c
	cmpwi    r0, 0xa
	stmw     r22, 8(r1)
	mr       r31, r3
	clrlwi   r3, r4, 0x18
	beq      lbl_800A1B3C
	bge      lbl_800A1B28
	cmpwi    r0, 9
	bge      lbl_800A1B60
	b        lbl_800A1B88

lbl_800A1B28:
	cmpwi    r0, 0xc
	bge      lbl_800A1B88
	li       r27, 0
	li       r26, 0xb
	b        lbl_800A1B90

lbl_800A1B3C:
	lwz      r3, 0x10(r31)
	li       r26, 0xa
	addi     r0, r3, 1
	stw      r0, 0x10(r31)
	lbz      r0, 0(r3)
	rlwinm   r3, r0, 0x1c, 0x1c, 0x1f
	rlwinm   r27, r0, 0, 0x1c, 0x1d
	addi     r25, r3, 4
	b        lbl_800A1B90

lbl_800A1B60:
	lwz      r3, 0x10(r31)
	addi     r0, r3, 1
	stw      r0, 0x10(r31)
	lbz      r0, 0(r3)
	rlwinm   r27, r0, 0, 0x1c, 0x1d
	rlwinm   r26, r0, 0, 0x18, 0x1b
	cmplwi   r27, 8
	bne      lbl_800A1B90
	li       r27, 0x10
	b        lbl_800A1B90

lbl_800A1B88:
	rlwinm   r27, r3, 0, 0x1c, 0x1d
	clrlwi   r26, r3, 0x1e

lbl_800A1B90:
	lwz      r3, 0x10(r31)
	cmplwi   r26, 0xa
	addi     r0, r3, 1
	stw      r0, 0x10(r31)
	lbz      r30, 0(r3)
	bne      lbl_800A1C1C
	lwz      r3, 0x10(r31)
	addi     r0, r3, 1
	stw      r0, 0x10(r31)
	lbz      r4, 0(r3)
	cmpwi    r4, 0x28
	bge      lbl_800A1BCC
	cmpwi    r4, 0x23
	beq      lbl_800A1BE4
	b        lbl_800A1C0C

lbl_800A1BCC:
	cmpwi    r4, 0x2c
	bge      lbl_800A1C0C
	slwi     r0, r4, 2
	add      r3, r31, r0
	lwz      r22, 0x1e8(r3)
	b        lbl_800A1C18

lbl_800A1BE4:
	mr       r3, r31
	li       r4, 4
	bl       readReg16__8JASTrackFUc
	slwi     r22, r3, 0x10
	li       r4, 5
	mr       r3, r31
	bl       readReg16__8JASTrackFUc
	clrlwi   r0, r3, 0x10
	or       r22, r22, r0
	b        lbl_800A1C18

lbl_800A1C0C:
	mr       r3, r31
	bl       readReg16__8JASTrackFUc
	clrlwi   r22, r3, 0x10

lbl_800A1C18:
	mr       r24, r22

lbl_800A1C1C:
	cmplwi   r27, 0x10
	bgt      lbl_800A1CBC
	lis      r3, lbl_804A4394@ha
	slwi     r0, r27, 2
	addi     r3, r3, lbl_804A4394@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_800A1C3C

lbl_800A1C3C:
	lwz      r4, 0x10(r31)
	mr       r3, r31
	addi     r0, r4, 1
	stw      r0, 0x10(r31)
	lbz      r4, 0(r4)
	bl       readReg16__8JASTrackFUc
	extsh    r23, r3
	b        lbl_800A1CBC
	.global  lbl_800A1C5C

lbl_800A1C5C:
	lwz      r3, 0x10(r31)
	addi     r0, r3, 1
	stw      r0, 0x10(r31)
	lbz      r23, 0(r3)
	b        lbl_800A1CBC
	.global  lbl_800A1C70

lbl_800A1C70:
	addi     r3, r31, 0xc
	bl       read16__10JASSeqCtrlFv
	extsh    r23, r3
	b        lbl_800A1CBC
	.global  lbl_800A1C80

lbl_800A1C80:
	lwz      r3, 0x10(r31)
	addi     r0, r3, 1
	stw      r0, 0x10(r31)
	lbz      r4, 0(r3)
	rlwinm.  r0, r4, 0, 0x18, 0x18
	beq      lbl_800A1CA4
	slwi     r0, r4, 8
	extsh    r23, r0
	b        lbl_800A1CBC

lbl_800A1CA4:
	slwi     r3, r4, 8
	slwi     r0, r4, 1
	or       r0, r3, r0
	extsh    r23, r0
	b        lbl_800A1CBC
	.global  lbl_800A1CB8

lbl_800A1CB8:
	li       r23, -1
	.global  lbl_800A1CBC

lbl_800A1CBC:
	mr       r3, r31
	mr       r4, r30
	bl       readReg16__8JASTrackFUc
	cmpwi    r26, 0x20
	extsh    r22, r3
	beq      lbl_800A1E08
	bge      lbl_800A1D24
	cmpwi    r26, 0xa
	beq      lbl_800A1E8C
	bge      lbl_800A1D0C
	cmpwi    r26, 2
	beq      lbl_800A1D7C
	bge      lbl_800A1D00
	cmpwi    r26, 0
	beq      lbl_800A1F30
	bge      lbl_800A1D60
	b        lbl_800A1F30

lbl_800A1D00:
	cmpwi    r26, 4
	bge      lbl_800A1F30
	b        lbl_800A1DA8

lbl_800A1D0C:
	cmpwi    r26, 0x10
	beq      lbl_800A1DC0
	bge      lbl_800A1F30
	cmpwi    r26, 0xc
	bge      lbl_800A1F30
	b        lbl_800A1DB4

lbl_800A1D24:
	cmpwi    r26, 0x50
	beq      lbl_800A1E58
	bge      lbl_800A1D48
	cmpwi    r26, 0x40
	beq      lbl_800A1E50
	bge      lbl_800A1F30
	cmpwi    r26, 0x30
	beq      lbl_800A1E48
	b        lbl_800A1F30

lbl_800A1D48:
	cmpwi    r26, 0x90
	beq      lbl_800A1E6C
	bge      lbl_800A1F30
	cmpwi    r26, 0x60
	beq      lbl_800A1E60
	b        lbl_800A1F30

lbl_800A1D60:
	cmplwi   r27, 4
	bne      lbl_800A1D74
	clrlwi   r3, r23, 0x18
	bl       extend8to16__9JASPlayerFUc
	mr       r23, r3

lbl_800A1D74:
	add      r23, r23, r22
	b        lbl_800A1F30

lbl_800A1D7C:
	extsh    r0, r23
	mr       r3, r31
	mullw    r22, r22, r0
	li       r4, 4
	srwi     r5, r22, 0x10
	bl       writeRegDirect__8JASTrackFUcUs
	clrlwi   r5, r22, 0x10
	mr       r3, r31
	li       r4, 5
	bl       writeRegDirect__8JASTrackFUcUs
	b        lbl_800A2090

lbl_800A1DA8:
	subf     r0, r23, r22
	sth      r0, 0x26e(r31)
	b        lbl_800A2090

lbl_800A1DB4:
	subf     r0, r23, r22
	extsh    r23, r0
	b        lbl_800A1F30

lbl_800A1DC0:
	cmplwi   r27, 4
	bne      lbl_800A1DD4
	clrlwi   r3, r23, 0x18
	bl       extend8to16__9JASPlayerFUc
	mr       r23, r3

lbl_800A1DD4:
	extsh.   r0, r23
	bge      lbl_800A1DF4
	extsh    r0, r23
	clrlwi   r3, r22, 0x10
	neg      r0, r0
	sraw     r0, r3, r0
	extsh    r23, r0
	b        lbl_800A1F30

lbl_800A1DF4:
	clrlwi   r3, r22, 0x10
	extsh    r0, r23
	slw      r0, r3, r0
	extsh    r23, r0
	b        lbl_800A1F30

lbl_800A1E08:
	cmplwi   r27, 4
	bne      lbl_800A1E1C
	clrlwi   r3, r23, 0x18
	bl       extend8to16__9JASPlayerFUc
	mr       r23, r3

lbl_800A1E1C:
	extsh.   r0, r23
	bge      lbl_800A1E38
	extsh    r0, r23
	neg      r0, r0
	sraw     r0, r22, r0
	extsh    r23, r0
	b        lbl_800A1F30

lbl_800A1E38:
	extsh    r0, r23
	slw      r0, r22, r0
	extsh    r23, r0
	b        lbl_800A1F30

lbl_800A1E48:
	and      r23, r23, r22
	b        lbl_800A1F30

lbl_800A1E50:
	or       r23, r23, r22
	b        lbl_800A1F30

lbl_800A1E58:
	xor      r23, r23, r22
	b        lbl_800A1F30

lbl_800A1E60:
	neg      r0, r22
	extsh    r23, r0
	b        lbl_800A1F30

lbl_800A1E6C:
	bl       getRandomS32__9JASPlayerFv
	clrlwi   r4, r23, 0x10
	mr       r28, r3
	divwu    r0, r28, r4
	mullw    r0, r0, r4
	subf     r0, r0, r28
	extsh    r23, r0
	b        lbl_800A1F30

lbl_800A1E8C:
	cmpwi    r25, 6
	extsh    r4, r23
	beq      lbl_800A1EE4
	bge      lbl_800A1EAC
	cmpwi    r25, 4
	beq      lbl_800A1EBC
	bge      lbl_800A1ECC
	b        lbl_800A1F28

lbl_800A1EAC:
	cmpwi    r25, 8
	beq      lbl_800A1F18
	bge      lbl_800A1F28
	b        lbl_800A1F00

lbl_800A1EBC:
	lwz      r3, 0xc(r31)
	add      r0, r24, r4
	lbzx     r28, r3, r0
	b        lbl_800A1F28

lbl_800A1ECC:
	slwi     r0, r4, 1
	addi     r3, r31, 0xc
	add      r4, r24, r0
	bl       get16__10JASSeqCtrlCFUl
	clrlwi   r28, r3, 0x10
	b        lbl_800A1F28

lbl_800A1EE4:
	slwi     r0, r4, 1
	addi     r3, r31, 0xc
	add      r4, r4, r0
	add      r4, r24, r4
	bl       get24__10JASSeqCtrlCFUl
	mr       r28, r3
	b        lbl_800A1F28

lbl_800A1F00:
	slwi     r0, r4, 2
	addi     r3, r31, 0xc
	add      r4, r24, r0
	bl       get32__10JASSeqCtrlCFUl
	mr       r28, r3
	b        lbl_800A1F28

lbl_800A1F18:
	addi     r3, r31, 0xc
	add      r4, r24, r4
	bl       get32__10JASSeqCtrlCFUl
	mr       r28, r3

lbl_800A1F28:
	clrlwi   r0, r28, 0x10
	extsh    r23, r0

lbl_800A1F30:
	cmpwi    r30, 0x22
	beq      lbl_800A2008
	bge      lbl_800A1F5C
	cmpwi    r30, 0x20
	beq      lbl_800A1FB8
	bge      lbl_800A1F9C
	cmpwi    r30, 3
	bge      lbl_800A2044
	cmpwi    r30, 0
	bge      lbl_800A1F88
	b        lbl_800A2044

lbl_800A1F5C:
	cmpwi    r30, 0x2e
	beq      lbl_800A1FD8
	bge      lbl_800A1F7C
	cmpwi    r30, 0x2c
	bge      lbl_800A2044
	cmpwi    r30, 0x28
	bge      lbl_800A2034
	b        lbl_800A2044

lbl_800A1F7C:
	cmpwi    r30, 0x30
	bge      lbl_800A2044
	b        lbl_800A1FF0

lbl_800A1F88:
	clrlwi   r3, r23, 0x18
	mr       r23, r3
	bl       extend8to16__9JASPlayerFUc
	clrlwi   r29, r3, 0x10
	b        lbl_800A2048

lbl_800A1F9C:
	addi     r3, r31, 0x268
	bl       getBankNumber__16JASRegisterParamCFv
	clrlwi   r0, r23, 0x18
	li       r30, 6
	rlwimi   r0, r3, 8, 0x10, 0x17
	extsh    r23, r0
	b        lbl_800A2048

lbl_800A1FB8:
	addi     r3, r31, 0x268
	bl       getProgramNumber__16JASRegisterParamCFv
	extsh    r0, r23
	li       r30, 6
	slwi     r0, r0, 8
	rlwimi   r0, r3, 0, 0x18, 0x1f
	extsh    r23, r0
	b        lbl_800A2048

lbl_800A1FD8:
	lhz      r3, 0x282(r31)
	clrlwi   r0, r23, 0x18
	li       r30, 0xd
	rlwimi   r0, r3, 0, 0x10, 0x17
	extsh    r23, r0
	b        lbl_800A2048

lbl_800A1FF0:
	lhz      r0, 0x282(r31)
	extsh    r3, r23
	rlwimi   r0, r3, 8, 0, 0x17
	li       r30, 0xd
	extsh    r23, r0
	b        lbl_800A2048

lbl_800A2008:
	extsh    r22, r23
	mr       r3, r31
	srawi    r0, r22, 8
	li       r4, 0
	clrlwi   r5, r0, 0x10
	bl       writeRegDirect__8JASTrackFUcUs
	clrlwi   r0, r22, 0x18
	li       r30, 1
	mr       r23, r0
	mr       r29, r0
	b        lbl_800A2048

lbl_800A2034:
	slwi     r0, r30, 2
	add      r3, r31, r0
	stw      r28, 0x1e8(r3)
	b        lbl_800A2090

lbl_800A2044:
	clrlwi   r29, r23, 0x10

lbl_800A2048:
	rlwinm   r0, r30, 1, 0x17, 0x1e
	clrlwi   r4, r30, 0x18
	add      r3, r31, r0
	sth      r23, 0x268(r3)
	cmpwi    r4, 7
	sth      r29, 0x26e(r31)
	beq      lbl_800A2084
	bge      lbl_800A2090
	cmpwi    r4, 6
	bge      lbl_800A2074
	b        lbl_800A2090

lbl_800A2074:
	li       r0, 0xf
	stw      r0, 0x2d8(r31)
	stw      r0, 0x2dc(r31)
	b        lbl_800A2090

lbl_800A2084:
	lwz      r0, 0x34c(r31)
	ori      r0, r0, 2
	stw      r0, 0x34c(r31)

lbl_800A2090:
	lmw      r22, 8(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A20A4
 * Size:	000024
 */
u16 JASTrack::readSelfPort(int portNumber) { return m_trackPort.readImport(portNumber); }

/*
 * --INFO--
 * Address:	800A20C8
 * Size:	000024
 */
void JASTrack::writeSelfPort(int portNumber, u16 value) { m_trackPort.writeExport(portNumber, value); }

/*
 * --INFO--
 * Address:	800A20EC
 * Size:	000068
 */
bool JASTrack::writePortAppDirect(u32 p1, u16 value)
{
	m_trackPort.writeImport(p1, value);
	if (p1 == 0 || p1 == 1) {
		JASIntrMgr* intrMgr = &m_intrMgr;
		u32 v1              = 4;
		if (p1 == 0) {
			v1 = 3;
		}
		intrMgr->request(v1);
	}
	return true;
}

/*
 * --INFO--
 * Address:	800A2154
 * Size:	000038
 */
bool JASTrack::readPortAppDirect(u32 p1, u16* value)
{
	*value = m_trackPort.readExport(p1);
	return true;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JASTrack::routeTrack(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JASTrack::routeTrack(unsigned long) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A218C
 * Size:	0000B4
 */
void JASTrack::writePortApp(unsigned long, unsigned short)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r7, r4
	stw      r0, 0x14(r1)
	srwi     r0, r4, 0x1c
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_800A21D8

lbl_800A21B4:
	rlwinm   r6, r7, 2, 0x1a, 0x1d
	addi     r0, r6, 0x2fc
	lwzx     r3, r3, r0
	cmplwi   r3, 0
	bne      lbl_800A21D0
	li       r31, 0
	b        lbl_800A21DC

lbl_800A21D0:
	srwi     r7, r7, 4
	bdnz     lbl_800A21B4

lbl_800A21D8:
	mr       r31, r3

lbl_800A21DC:
	cmplwi   r31, 0
	bne      lbl_800A21EC
	li       r3, 0
	b        lbl_800A2228

lbl_800A21EC:
	rlwinm   r30, r4, 0x10, 0x18, 0x1f
	addi     r3, r31, 0x54
	mr       r4, r30
	bl       writeImport__12JASTrackPortFiUs
	cmplwi   r30, 0
	beq      lbl_800A220C
	cmplwi   r30, 1
	bne      lbl_800A2224

lbl_800A220C:
	cmplwi   r30, 0
	addi     r3, r31, 0x94
	li       r4, 4
	bne      lbl_800A2220
	li       r4, 3

lbl_800A2220:
	bl       request__10JASIntrMgrFUl

lbl_800A2224:
	li       r3, 1

lbl_800A2228:
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
 * Address:	800A2240
 * Size:	000084
 */
void JASTrack::readPortApp(unsigned long, unsigned short*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r4
	stw      r0, 0x14(r1)
	srwi     r0, r4, 0x1c
	stw      r31, 0xc(r1)
	mr       r31, r5
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_800A228C

lbl_800A2268:
	rlwinm   r5, r6, 2, 0x1a, 0x1d
	addi     r0, r5, 0x2fc
	lwzx     r3, r3, r0
	cmplwi   r3, 0
	bne      lbl_800A2284
	li       r3, 0
	b        lbl_800A228C

lbl_800A2284:
	srwi     r6, r6, 4
	bdnz     lbl_800A2268

lbl_800A228C:
	cmplwi   r3, 0
	bne      lbl_800A229C
	li       r3, 0
	b        lbl_800A22B0

lbl_800A229C:
	addi     r3, r3, 0x54
	rlwinm   r4, r4, 0x10, 0x18, 0x1f
	bl       readExport__12JASTrackPortFi
	sth      r3, 0(r31)
	li       r3, 1

lbl_800A22B0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JASTrack::checkExportApp(unsigned long) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JASTrack::checkImportApp(unsigned long) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A22C4
 * Size:	000168
 */
void JASTrack::pause(bool, bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi.  r0, r4, 0x18
	stmw     r26, 8(r1)
	mr       r30, r4
	mr       r29, r3
	mr       r31, r5
	stb      r30, 0x362(r3)
	beq      lbl_800A2388
	lbz      r0, 0x358(r29)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_800A2304
	lwz      r0, 0x34c(r29)
	ori      r0, r0, 1
	stw      r0, 0x34c(r29)

lbl_800A2304:
	lbz      r0, 0x358(r29)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_800A234C
	li       r26, 0
	li       r28, 0
	b        lbl_800A2340

lbl_800A231C:
	rlwinm   r3, r26, 2, 0x16, 0x1d
	addi     r27, r3, 0xc0
	lwzx     r3, r29, r27
	cmplwi   r3, 0
	beq      lbl_800A233C
	li       r4, 0xa
	bl       release__10JASChannelFUs
	stwx     r28, r29, r27

lbl_800A233C:
	addi     r26, r26, 1

lbl_800A2340:
	clrlwi   r0, r26, 0x18
	cmplwi   r0, 8
	blt      lbl_800A231C

lbl_800A234C:
	lbz      r0, 0x358(r29)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_800A23C0
	li       r26, 0
	mr       r28, r29

lbl_800A2360:
	lwz      r3, 0xc0(r28)
	cmplwi   r3, 0
	beq      lbl_800A2374
	li       r4, 1
	bl       setPauseFlag__10JASChannelFb

lbl_800A2374:
	addi     r26, r26, 1
	addi     r28, r28, 4
	cmpwi    r26, 8
	blt      lbl_800A2360
	b        lbl_800A23C0

lbl_800A2388:
	lwz      r0, 0x34c(r29)
	mr       r28, r29
	li       r26, 0
	ori      r0, r0, 1
	stw      r0, 0x34c(r29)

lbl_800A239C:
	lwz      r3, 0xc0(r28)
	cmplwi   r3, 0
	beq      lbl_800A23B0
	li       r4, 0
	bl       setPauseFlag__10JASChannelFb

lbl_800A23B0:
	addi     r26, r26, 1
	addi     r28, r28, 4
	cmpwi    r26, 8
	blt      lbl_800A239C

lbl_800A23C0:
	clrlwi   r0, r30, 0x18
	addi     r3, r29, 0x94
	cntlzw   r0, r0
	srwi     r4, r0, 5
	bl       request__10JASIntrMgrFUl
	clrlwi.  r0, r31, 0x18
	beq      lbl_800A2418
	li       r26, 0
	mr       r28, r29

lbl_800A23E4:
	lwz      r3, 0x2fc(r28)
	cmplwi   r3, 0
	beq      lbl_800A2408
	lbz      r0, 0x35b(r3)
	cmplwi   r0, 0
	beq      lbl_800A2408
	mr       r4, r30
	li       r5, 1
	bl       pause__8JASTrackFbb

lbl_800A2408:
	addi     r26, r26, 1
	addi     r28, r28, 4
	cmpwi    r26, 0x10
	blt      lbl_800A23E4

lbl_800A2418:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A242C
 * Size:	000170
 */
int JASTrack::getTranspose() const
{
	JASTrack* v1 = _2F8;
	if (v1) {
		return _356 + v1->getTranspose();
	}
	return _356;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r23, 0xc(r1)
	mr       r28, r3
	lwz      r31, 0x2f8(r3)
	cmplwi   r31, 0
	beq      lbl_800A2580
	lwz      r30, 0x2f8(r31)
	cmplwi   r30, 0
	beq      lbl_800A2568
	lwz      r29, 0x2f8(r30)
	cmplwi   r29, 0
	beq      lbl_800A2550
	lwz      r27, 0x2f8(r29)
	cmplwi   r27, 0
	beq      lbl_800A2538
	lwz      r26, 0x2f8(r27)
	cmplwi   r26, 0
	beq      lbl_800A2520
	lwz      r25, 0x2f8(r26)
	cmplwi   r25, 0
	beq      lbl_800A2508
	lwz      r24, 0x2f8(r25)
	cmplwi   r24, 0
	beq      lbl_800A24F0
	lwz      r23, 0x2f8(r24)
	cmplwi   r23, 0
	beq      lbl_800A24D8
	lwz      r3, 0x2f8(r23)
	cmplwi   r3, 0
	beq      lbl_800A24C0
	bl       getTranspose__8JASTrackCFv
	lbz      r0, 0x356(r23)
	extsb    r0, r0
	add      r3, r0, r3
	b        lbl_800A24C8

lbl_800A24C0:
	lbz      r3, 0x356(r23)
	extsb    r3, r3

lbl_800A24C8:
	lbz      r0, 0x356(r24)
	extsb    r0, r0
	add      r3, r0, r3
	b        lbl_800A24E0

lbl_800A24D8:
	lbz      r3, 0x356(r24)
	extsb    r3, r3

lbl_800A24E0:
	lbz      r0, 0x356(r25)
	extsb    r0, r0
	add      r3, r0, r3
	b        lbl_800A24F8

lbl_800A24F0:
	lbz      r3, 0x356(r25)
	extsb    r3, r3

lbl_800A24F8:
	lbz      r0, 0x356(r26)
	extsb    r0, r0
	add      r3, r0, r3
	b        lbl_800A2510

lbl_800A2508:
	lbz      r3, 0x356(r26)
	extsb    r3, r3

lbl_800A2510:
	lbz      r0, 0x356(r27)
	extsb    r0, r0
	add      r3, r0, r3
	b        lbl_800A2528

lbl_800A2520:
	lbz      r3, 0x356(r27)
	extsb    r3, r3

lbl_800A2528:
	lbz      r0, 0x356(r29)
	extsb    r0, r0
	add      r3, r0, r3
	b        lbl_800A2540

lbl_800A2538:
	lbz      r3, 0x356(r29)
	extsb    r3, r3

lbl_800A2540:
	lbz      r0, 0x356(r30)
	extsb    r0, r0
	add      r3, r0, r3
	b        lbl_800A2558

lbl_800A2550:
	lbz      r3, 0x356(r30)
	extsb    r3, r3

lbl_800A2558:
	lbz      r0, 0x356(r31)
	extsb    r0, r0
	add      r3, r0, r3
	b        lbl_800A2570

lbl_800A2568:
	lbz      r3, 0x356(r31)
	extsb    r3, r3

lbl_800A2570:
	lbz      r0, 0x356(r28)
	extsb    r0, r0
	add      r3, r0, r3
	b        lbl_800A2588

lbl_800A2580:
	lbz      r3, 0x356(r28)
	extsb    r3, r3

lbl_800A2588:
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A259C
 * Size:	00003C
 */
void JASTrack::setTempo(u16 tempo)
{
	_352 = tempo;
	if (_2F8 == nullptr) {
		updateTempo();
	} else {
		_365 = 1;
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	sth      r4, 0x352(r3)
	lwz      r0, 0x2f8(r3)
	cmplwi   r0, 0
	bne      lbl_800A25C0
	bl       updateTempo__8JASTrackFv
	b        lbl_800A25C8

lbl_800A25C0:
	li       r0, 1
	stb      r0, 0x365(r3)

lbl_800A25C8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A25D8
 * Size:	000030
 */
void JASTrack::setTimebase(u16 timebase)
{
	_354 = timebase;
	if (_2F8 == nullptr) {
		updateTempo();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	sth      r4, 0x354(r3)
	lwz      r0, 0x2f8(r3)
	cmplwi   r0, 0
	bne      lbl_800A25F8
	bl       updateTempo__8JASTrackFv

lbl_800A25F8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A2608
 * Size:	000050
 */
float JASTrack::panCalc(float p1, float p2, float p3, u8 p4)
{
	switch (p4) {
	case 1:
		return p2;
		break;
	case 2:
		return (p1 * (1.0f - p3) + (p2 * p3));
		break;
	case 0:
		return p1;
		break;
	}
	return 0.0f;
	/*
	clrlwi   r0, r4, 0x18
	cmpwi    r0, 1
	beq      lbl_800A2634
	bge      lbl_800A2624
	cmpwi    r0, 0
	bgelr
	b        lbl_800A2650

lbl_800A2624:
	cmpwi    r0, 3
	bge      lbl_800A2650
	b        lbl_800A263C
	blr

lbl_800A2634:
	fmr      f1, f2
	blr

lbl_800A263C:
	lfs      f4, lbl_80516D7C@sda21(r2)
	fmuls    f0, f2, f3
	fsubs    f2, f4, f3
	fmadds   f1, f1, f2, f0
	blr

lbl_800A2650:
	lfs      f1, lbl_80516D78@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A2658
 * Size:	0000F4
 */
void JASTrack::rootCallback(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	bne      lbl_800A2678
	li       r3, -1
	b        lbl_800A2738

lbl_800A2678:
	lbz      r0, 0x35b(r31)
	cmplwi   r0, 0
	bne      lbl_800A268C
	li       r3, -1
	b        lbl_800A2738

lbl_800A268C:
	cmplwi   r0, 3
	bne      lbl_800A26A0
	bl       stopSeqMain__8JASTrackFv
	li       r3, -1
	b        lbl_800A2738

lbl_800A26A0:
	lfs      f1, 0x340(r31)
	addi     r3, r13, zz_80514788@sda21
	lfs      f0, 0x344(r31)
	li       r4, 4
	fadds    f0, f1, f0
	stfs     f0, 0x340(r31)
	bl       DCInvalidateRange
	lfs      f1, 0x340(r31)
	lfs      f0, zz_80514788@sda21(r13)
	fcmpo    cr0, f1, f0
	bge      lbl_800A2720
	mr       r3, r31
	li       r4, 0
	li       r5, 1
	bl       updateSeq__8JASTrackFUlb
	b        lbl_800A2734

lbl_800A26E0:
	addi     r3, r13, zz_80514788@sda21
	li       r4, 4
	bl       DCInvalidateRange
	lfs      f1, 0x340(r31)
	mr       r3, r31
	lfs      f0, zz_80514788@sda21(r13)
	fsubs    f0, f1, f0
	stfs     f0, 0x340(r31)
	bl       mainProc__8JASTrackFv
	extsb    r0, r3
	cmpwi    r0, -1
	bne      lbl_800A2720
	mr       r3, r31
	bl       stopSeqMain__8JASTrackFv
	li       r3, -1
	b        lbl_800A2738

lbl_800A2720:
	lfs      f1, 0x340(r31)
	lfs      f0, zz_80514788@sda21(r13)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	beq      lbl_800A26E0

lbl_800A2734:
	li       r3, 0

lbl_800A2738:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A274C
 * Size:	000008
 */
void JASTrack::registerSeqCallback(unsigned short (*cb)(JASTrack*, unsigned short))
{
	// sCallBackFunc = cb;
	/*
	.loc_0x0:
	  stw       r3, -0x7590(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A2754
 * Size:	0000D4
 */
void JASTrack::newMemPool(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0x368
	lwz      r4, JASDram@sda21(r13)
	bl       __nwa__FUlP7JKRHeapi
	lwz      r4, JASDram@sda21(r13)
	mr       r31, r3
	li       r3, 0x2c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800A27A4
	bl       __ct__13JASOuterParamFv
	mr       r0, r3

lbl_800A27A4:
	stw      r0, 0x33c(r31)
	li       r30, 1
	stw      r31, sFreeList__8JASTrack@sda21(r13)
	b        lbl_800A27FC

lbl_800A27B4:
	lwz      r4, JASDram@sda21(r13)
	li       r3, 0x368
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0(r31)
	li       r3, 0x2c
	li       r5, 0
	lwz      r4, JASDram@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_800A27E8
	bl       __ct__13JASOuterParamFv
	mr       r0, r3

lbl_800A27E8:
	lwz      r3, 0(r31)
	addi     r30, r30, 1
	stw      r0, 0x33c(r3)
	lwz      r31, 0(r31)
	stw      r31, sFreeListEnd__8JASTrack@sda21(r13)

lbl_800A27FC:
	cmpw     r30, r29
	blt      lbl_800A27B4
	li       r0, 0
	stw      r0, 0(r31)
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
 * Address:	........
 * Size:	00004C
 */
int JASTrack::getFreeMemCount()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A2828
 * Size:	000030
 */
JASVibrate::JASVibrate() { init(); }

/*
 * --INFO--
 * Address:	800A2858
 * Size:	000018
 */
void JASVibrate::init()
{
	// TODO: Might be wrong value
	_08 = 0.055f;
	_04 = 0.0f;
	_00 = 0.0f;
	/*
	lfs      f1, lbl_80516DB0@sda21(r2)
	lfs      f0, lbl_80516D78@sda21(r2)
	stfs     f1, 8(r3)
	stfs     f0, 4(r3)
	stfs     f0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A2870
 * Size:	000034
 */
void JASVibrate::incCounter()
{
	_00 += _08;
	if (_00 >= 4.0) { // intentional double
		_00 -= 4.0f;
	}
}

/*
 * --INFO--
 * Address:	800A28A4
 * Size:	0000A4
 */
f32 JASVibrate::getValue() const
{
	// float result;
	// if (_04 == 0.0f) {
	// 	result = 1.0f;
	// } else {
	// 	result = _00 * HALF_PI;
	// 	result = JMath::getSinCosTable()->cos(result);
	// 	result = JASPlayer::pitchToCent(result * _04, 12.0f);
	// }
	// return result;

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f2, lbl_80516D78@sda21(r2)
	lfs      f3, 4(r3)
	stw      r0, 0x24(r1)
	fcmpu    cr0, f2, f3
	bne      lbl_800A28C8
	lfs      f1, lbl_80516D7C@sda21(r2)
	b        lbl_800A2938

lbl_800A28C8:
	lfs      f1, lbl_80516DC4@sda21(r2)
	lfs      f0, 0(r3)
	fmuls    f1, f1, f0
	fcmpo    cr0, f1, f2
	bge      lbl_800A2908
	lfs      f0, lbl_80516DC8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_800A292C

lbl_800A2908:
	lfs      f0, lbl_80516DCC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_800A292C:
	fmuls    f1, f1, f3
	lfs      f2, lbl_80516DD0@sda21(r2)
	bl       pitchToCent__9JASPlayerFff

lbl_800A2938:
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A2948
 * Size:	0000B0
 */
void JASTrack::channelUpdateCallback(u32 p1, JASChannel* p2, JASDsp::TChannel* p3, void* p4)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r3, 0x2
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x5C
	  bge-      .loc_0x28
	  cmpwi     r3, 0
	  beq-      .loc_0x34
	  bge-      .loc_0x40
	  b         .loc_0xA0

	.loc_0x28:
	  cmpwi     r3, 0x4
	  bge-      .loc_0xA0
	  b         .loc_0x4C

	.loc_0x34:
	  addi      r3, r6, 0xF4
	  bl        0x5DD8
	  b         .loc_0xA0

	.loc_0x40:
	  addi      r3, r6, 0xF4
	  bl        0x5C68
	  b         .loc_0xA0

	.loc_0x4C:
	  mr        r3, r4
	  li        r4, 0
	  bl        0xE2C
	  b         .loc_0xA0

	.loc_0x5C:
	  li        r0, 0x8
	  mr        r3, r6
	  li        r5, 0
	  mtctr     r0

	.loc_0x6C:
	  lwz       r0, 0xC0(r3)
	  cmplw     r4, r0
	  bne-      .loc_0x8C
	  rlwinm    r0,r5,2,0,29
	  li        r5, 0
	  add       r3, r6, r0
	  stw       r5, 0xC0(r3)
	  b         .loc_0x98

	.loc_0x8C:
	  addi      r3, r3, 0x4
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0x6C

	.loc_0x98:
	  mr        r3, r6
	  bl        -0x7BDC0

	.loc_0xA0:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
int JASTrack::getChannelCount() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
int JASTrack::getReleaseChannelCount() const
{
	// UNUSED FUNCTION
}
