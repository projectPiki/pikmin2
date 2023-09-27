#include "JSystem/JParticle/JPAMath.h"
#include "efx2d/T2DCursor.h"
#include "efx2d/T2DCountKira.h"
#include "efx2d/T2DSensor.h"
#include "efx2d/T2DSprayset.h"
#include "efx2d/FileSelect.h"
#include "efx2d/WorldMap.h"
#include "System.h"
#include "JSystem/JParticle/JPAMath.h"
#include "Matrixf.h"

static const char name[] = "efx2dEffect";

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80495B68
    lbl_80495B68:
        .4byte 0x65667832
        .4byte 0x64456666
        .4byte 0x65637400
        .4byte 0x41726753
        .4byte 0x63616C65
        .4byte 0x00000000
        .4byte 0x65667832
        .4byte 0x64456666
        .4byte 0x6563742E
        .4byte 0x63707000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x41726753
        .4byte 0x63616C65
        .4byte 0x436F6C6F
        .4byte 0x72436F6C
        .4byte 0x6F720000
        .4byte 0x41726743
        .4byte 0x6F6C6F72
        .4byte 0x00000000
        .4byte 0x41726746
        .4byte 0x696C6563
        .4byte 0x6F707900

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q35efx2d8WorldMap10T2DRocketB
    __vt__Q35efx2d8WorldMap10T2DRocketB:
        .4byte 0
        .4byte 0
        .4byte create__Q35efx2d8WorldMap10T2DRocketBFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TForeverFv
        .4byte fade__Q25efx2d8TForeverFv
        .4byte setGroup__Q25efx2d5TBaseFUc
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q35efx2d8WorldMap10T2DRocketBFv"
        .4byte "@8@execute__Q25efx2d12TChasePosDirFP14JPABaseEmitter"
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte __dt__Q35efx2d8WorldMap10T2DRocketBFv
        .4byte execute__Q25efx2d12TChasePosDirFP14JPABaseEmitter
    .global __vt__Q35efx2d8WorldMap12T2DOnyonKira
    __vt__Q35efx2d8WorldMap12T2DOnyonKira:
        .4byte 0
        .4byte 0
        .4byte create__Q35efx2d8WorldMap12T2DOnyonKiraFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TForeverFv
        .4byte fade__Q25efx2d8TForeverFv
        .4byte setGroup__Q25efx2d5TBaseFUc
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q35efx2d8WorldMap12T2DOnyonKiraFv"
        .4byte "@8@execute__Q25efx2d12TChasePosDirFP14JPABaseEmitter"
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte __dt__Q35efx2d8WorldMap12T2DOnyonKiraFv
        .4byte execute__Q25efx2d12TChasePosDirFP14JPABaseEmitter
    .global __vt__Q35efx2d8WorldMap19TSimple_ArgDirScale
    __vt__Q35efx2d8WorldMap19TSimple_ArgDirScale:
        .4byte 0
        .4byte 0
        .4byte create__Q35efx2d8WorldMap19TSimple_ArgDirScaleFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple1Fv
        .4byte fade__Q25efx2d8TSimple1Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q35efx2d8WorldMap9T2DNewmap
    __vt__Q35efx2d8WorldMap9T2DNewmap:
        .4byte 0
        .4byte 0
        .4byte create__Q35efx2d8WorldMap9T2DNewmapFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple2Fv
        .4byte fade__Q25efx2d8TSimple2Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q35efx2d8WorldMap10T2DShstar2
    __vt__Q35efx2d8WorldMap10T2DShstar2:
        .4byte 0
        .4byte 0
        .4byte create__Q35efx2d8WorldMap10T2DShstar2FPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple1Fv
        .4byte fade__Q25efx2d8TSimple1Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q35efx2d10FileSelect15T2DFilecopyBase
    __vt__Q35efx2d10FileSelect15T2DFilecopyBase:
        .4byte 0
        .4byte 0
        .4byte create__Q35efx2d10FileSelect15T2DFilecopyBaseFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TForeverFv
        .4byte fade__Q25efx2d8TForeverFv
        .4byte setGroup__Q25efx2d5TBaseFUc
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q35efx2d10FileSelect15T2DFilecopyBaseFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte __dt__Q35efx2d10FileSelect15T2DFilecopyBaseFv
    .global __vt__Q35efx2d10FileSelect14T2DFiledeleteM
    __vt__Q35efx2d10FileSelect14T2DFiledeleteM:
        .4byte 0
        .4byte 0
        .4byte create__Q35efx2d10FileSelect14T2DFiledeleteMFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple1Fv
        .4byte fade__Q25efx2d8TSimple1Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q35efx2d10FileSelect13T2DFiledelete
    __vt__Q35efx2d10FileSelect13T2DFiledelete:
        .4byte 0
        .4byte 0
        .4byte create__Q35efx2d10FileSelect13T2DFiledeleteFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple1Fv
        .4byte fade__Q25efx2d8TSimple1Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q35efx2d10FileSelect13T2DFilecopied
    __vt__Q35efx2d10FileSelect13T2DFilecopied:
        .4byte 0
        .4byte 0
        .4byte create__Q35efx2d10FileSelect13T2DFilecopiedFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple1Fv
        .4byte fade__Q25efx2d8TSimple1Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q25efx2d17T2DSprayset_forVS
    __vt__Q25efx2d17T2DSprayset_forVS:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d17T2DSprayset_forVSFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple2Fv
        .4byte fade__Q25efx2d8TSimple2Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q25efx2d18T2DSensorGet_forVS
    __vt__Q25efx2d18T2DSensorGet_forVS:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d18T2DSensorGet_forVSFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TSimple2Fv
        .4byte fade__Q25efx2d8TSimple2Fv
        .4byte setGroup__Q25efx2d5TBaseFUc
    .global __vt__Q25efx2d12T2DCountKira
    __vt__Q25efx2d12T2DCountKira:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d12T2DCountKiraFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TForeverFv
        .4byte fade__Q25efx2d8TForeverFv
        .4byte setGroup__Q25efx2d5TBaseFUc
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q25efx2d12T2DCountKiraFv"
        .4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte __dt__Q25efx2d12T2DCountKiraFv
    .global __vt__Q25efx2d9T2DCursor
    __vt__Q25efx2d9T2DCursor:
        .4byte 0
        .4byte 0
        .4byte create__Q25efx2d9T2DCursorFPQ25efx2d3Arg
        .4byte kill__Q25efx2d8TForeverFv
        .4byte fade__Q25efx2d8TForeverFv
        .4byte setGroup__Q25efx2d5TBaseFUc
        .4byte 0
        .4byte 0
        .4byte "@8@__dt__Q25efx2d9T2DCursorFv"
        .4byte "@8@execute__Q25efx2d9TChasePosFP14JPABaseEmitter"
        .4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte __dt__Q25efx2d9T2DCursorFv
        .4byte execute__Q25efx2d9TChasePosFP14JPABaseEmitter
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F6E0
    lbl_8051F6E0:
        .4byte 0x3C8AD8F3
    .global lbl_8051F6E4
    lbl_8051F6E4:
        .4byte 0x00000000
    .global lbl_8051F6E8
    lbl_8051F6E8:
        .4byte 0x43480000
    .global lbl_8051F6EC
    lbl_8051F6EC:
        .float 1.0
*/

namespace efx2d {
/*
 * --INFO--
 * Address:	803BA18C
 * Size:	00007C
 */
bool T2DCursor::create(Arg* arg)
{
	if (sys->mDeltaTime < 0.01694915f) {
		mEfxID = PID_RocketA;
	}

	if (TChasePos::create(arg)) {
		mEmitter->setScale(mScale);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803BA208
 * Size:	00005C
 */
bool T2DCountKira::create(Arg* arg)
{
	if (TForever::create(arg)) {
		mEmitter->setScale(mScale);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
bool T2DSensorAct_forVS::create(Arg*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BA264
 * Size:	0000D8
 */
bool T2DSensorGet_forVS::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(59, nameCheck);
	ArgScale* args = static_cast<ArgScale*>(arg);

	if (TSimple2::create(arg)) {
		f32 scale = args->mScale;
		mEmitters[0]->setScale(scale);
		mEmitters[1]->setScale(scale);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803BA33C
 * Size:	000140
 */
bool T2DSprayset_forVS::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScaleColorColor", arg->getName()) == 0;
	P2ASSERTLINE(79, nameCheck);
	ArgScaleColorColor* args = static_cast<ArgScaleColorColor*>(arg);

	if (TSimple2::create(arg)) {
		JUtility::TColor col1 = args->mColor1;
		JUtility::TColor col2 = args->mColor2;
		f32 scale             = args->mScale;

		for (int i = 0; i < 2; i++) {
			mEmitters[i]->setScale(scale);
			mEmitters[i]->setPrmColorRGB(col1);
			mEmitters[i]->setColorRGB(col2);
		}
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803BA47C
 * Size:	0000C8
 */
bool FileSelect::T2DFilecopied::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgColor", arg->getName()) == 0;
	P2ASSERTLINE(111, nameCheck);
	ArgColor* args = static_cast<ArgColor*>(arg);

	JUtility::TColor col = args->mColor;
	if (TSimple1::create(arg)) {
		mEmitters[0]->setColorRGB(col);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803BA544
 * Size:	0000C8
 */
bool FileSelect::T2DFiledelete::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgColor", arg->getName()) == 0;
	P2ASSERTLINE(127, nameCheck);
	ArgColor* args = static_cast<ArgColor*>(arg);

	JUtility::TColor col = args->mColor;
	if (TSimple1::create(arg)) {
		mEmitters[0]->setColorRGB(col);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803BA60C
 * Size:	0000C8
 */
bool FileSelect::T2DFiledeleteM::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgColor", arg->getName()) == 0;
	P2ASSERTLINE(143, nameCheck);
	ArgColor* args = static_cast<ArgColor*>(arg);

	JUtility::TColor col = args->mColor;
	if (TSimple1::create(arg)) {
		mEmitters[0]->setColorRGB(col);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803BA6D4
 * Size:	0001CC
 */
bool FileSelect::T2DFilecopyBase::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgFilecopy", arg->getName()) == 0;
	P2ASSERTLINE(160, nameCheck);
	ArgFilecopy* args = static_cast<ArgFilecopy*>(arg);
	f32 dist          = args->mAltPosition.distance(*args);
	f32 scale         = dist /= 200.0f;

	Vector3f test(args->mAltPosition.x - args->x, args->mAltPosition.y - args->y, 0.0f);
	test.normalise();
	JUtility::TColor col = args->mColor;

	Mtx mtx;
	mtx[0][0] = test.x;
	mtx[0][1] = test.x;
	mtx[0][2] = 0.0f;
	mtx[0][3] = test.y;
	mtx[1][0] = test.y;
	mtx[1][1] = test.x;
	mtx[1][2] = 0.0f;
	mtx[1][3] = test.y;
	mtx[2][0] = test.z;
	mtx[2][1] = 0.0f;
	mtx[2][2] = 1.0f;
	mtx[2][3] = 0.0f;
	if (TForever::create(arg)) {
		mEmitter->setColorRGB(col);
		JPASetRMtxfromMtx(mtx, mEmitter->mMatrix);
		mEmitter->setScaleOnly(scale);
		return true;
	}
	return false;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r30, r4
	mr       r29, r3
	mr       r3, r30
	lis      r4, lbl_80495B68@ha
	lwz      r12, 8(r30)
	addi     r31, r4, lbl_80495B68@l
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r31, 0x54
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_803BA744
	addi     r3, r31, 0x18
	addi     r5, r31, 0x28
	li       r4, 0xa0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803BA744:
	lfs      f4, 4(r30)
	lfs      f0, 0x10(r30)
	lwz      r0, 0x14(r30)
	fsubs    f6, f0, f4
	lfs      f3, 0(r30)
	lfs      f0, 0xc(r30)
	lfs      f1, lbl_8051F6E4@sda21(r2)
	fsubs    f5, f0, f3
	stw      r0, 8(r1)
	fmuls    f8, f6, f6
	fmadds   f2, f5, f5, f8
	fcmpo    cr0, f2, f1
	ble      lbl_803BA78C
	ble      lbl_803BA788
	frsqrte  f0, f2
	fmuls    f1, f0, f2
	b        lbl_803BA78C

lbl_803BA788:
	fmr      f1, f2

lbl_803BA78C:
	lfs      f0, lbl_8051F6E8@sda21(r2)
	lfs      f7, lbl_8051F6E4@sda21(r2)
	fdivs    f31, f1, f0
	fadds    f0, f7, f2
	fcmpo    cr0, f0, f7
	ble      lbl_803BA7C0
	fmadds   f0, f5, f5, f8
	fadds    f1, f7, f0
	fcmpo    cr0, f1, f7
	ble      lbl_803BA7C4
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_803BA7C4

lbl_803BA7C0:
	fmr      f1, f7

lbl_803BA7C4:
	lfs      f0, lbl_8051F6E4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803BA7E4
	lfs      f0, lbl_8051F6EC@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f5, f5, f0
	fmuls    f6, f6, f0
	fmuls    f7, f7, f0

lbl_803BA7E4:
	fneg     f2, f6
	lfs      f1, lbl_8051F6E4@sda21(r2)
	lfs      f0, lbl_8051F6EC@sda21(r2)
	mr       r3, r29
	stfs     f5, 0xc(r1)
	mr       r4, r30
	stfs     f2, 0x10(r1)
	stfs     f1, 0x14(r1)
	stfs     f3, 0x18(r1)
	stfs     f6, 0x1c(r1)
	stfs     f5, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f4, 0x28(r1)
	stfs     f7, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	stfs     f1, 0x38(r1)
	bl       create__Q25efx2d8TForeverFPQ25efx2d3Arg
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BA878
	lwz      r5, 0x10(r29)
	addi     r3, r1, 0xc
	lbz      r0, 8(r1)
	lbz      r4, 9(r1)
	stb      r0, 0xbc(r5)
	lbz      r0, 0xa(r1)
	stb      r4, 0xbd(r5)
	stb      r0, 0xbe(r5)
	lwz      r4, 0x10(r29)
	addi     r4, r4, 0x68
	bl       JPASetRMtxfromMtx__FPA4_CfPA4_f
	lwz      r4, 0x10(r29)
	li       r3, 1
	stfs     f31, 0x98(r4)
	stfs     f31, 0x9c(r4)
	stfs     f31, 0xa0(r4)
	b        lbl_803BA87C

lbl_803BA878:
	li       r3, 0

lbl_803BA87C:
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BA8A0
 * Size:	0000DC
 */
bool WorldMap::T2DShstar2::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(201, nameCheck);
	ArgScale* args = static_cast<ArgScale*>(arg);

	f32 scale = args->mScale;
	if (TSimple1::create(arg)) {
		volatile Vector3f idk = scale;

		mEmitters[0]->setScale(scale);

		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803BA97C
 * Size:	0000F4
 */
bool WorldMap::T2DNewmap::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgScale", arg->getName()) == 0;
	P2ASSERTLINE(219, nameCheck);
	ArgScale* args = static_cast<ArgScale*>(arg);

	f32 scale = args->mScale;
	if (TSimple2::create(arg)) {
		volatile Vector3f idk = scale;

		mEmitters[0]->setScale(scale);
		mEmitters[1]->setScale(scale);

		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803BAA70
 * Size:	0000AC
 */
bool WorldMap::TSimple_ArgDirScale::create(Arg* arg)
{
	ArgDirScale* args = static_cast<ArgDirScale*>(arg);

	f32 x     = args->mDir.x;
	f32 y     = args->mDir.y;
	f32 scale = args->mScale;
	if (TSimple1::create(arg)) {

		mEmitters[0]->setGlobalScale(scale);
		mEmitters[0]->setScaleOnly(scale);
		mEmitters[0]->setAngle(x, y, 0.0f);

		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803BAB1C
 * Size:	00005C
 */
bool WorldMap::T2DOnyonKira::create(Arg* arg)
{
	if (TChasePosDir::create(arg)) {
		Vector3f* vec = &mEmitter->mScale;
		mPosition.x   = vec->x;
		mPosition.y   = vec->y;
		mPosition.z   = vec->z;
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803BAB78
 * Size:	000040
 */
void WorldMap::T2DOnyonKira::setGlobalParticleScale(f32 scale)
{
	JPABaseEmitter* emit = mEmitter;
	if (!emit)
		return;
	Vector3f test;
	test.x = mPosition.x;
	test.y = mPosition.y;
	test.z = mPosition.z;

	emit->setGlobalScale(scale);
	test = test * scale;
	mEmitter->setScaleMain(test.x, test.y, test.z);
}

/*
 * --INFO--
 * Address:	803BABB8
 * Size:	000018
 */
void WorldMap::T2DRocketGlow::setGlobalParticleScale(f32 scale)
{
	JPABaseEmitter* emit = mEmitter;
	if (!emit)
		return;

	emit->setGlobalScale(scale);
}

/*
 * --INFO--
 * Address:	803BABD0
 * Size:	00005C
 */
bool WorldMap::T2DRocketB::create(Arg* arg)
{
	if (TChasePosDir::create(arg)) {
		Vector3f* vec = &mEmitter->mScale;
		_1C.x         = vec->x;
		_1C.y         = vec->y;
		_1C.z         = vec->z;
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803BAC2C
 * Size:	000040
 */
void WorldMap::T2DRocketB::setGlobalParticleScale(f32 scale)
{
	JPABaseEmitter* emit = mEmitter;
	if (!emit)
		return;
	Vector3f test;
	test.x = _1C.x;
	test.y = _1C.y;
	test.z = _1C.z;

	emit->setGlobalScale(scale);
	test = test * scale;
	mEmitter->setScaleMain(test.x, test.y, test.z);
}

} // namespace efx2d
