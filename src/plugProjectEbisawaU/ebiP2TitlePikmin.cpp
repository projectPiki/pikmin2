#include "ebi/title/Entities/TPikmin.h"
#include "ebi/title/TTitle.h"
#include "types.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "nans.h"
#include "Dolphin/rand.h"

namespace ebi {
namespace title {

static const int unusedArray[]            = { 0, 0, 0 };
static const char unusedPikminTitleName[] = "ebiP2TitlePikmin";

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
Pikmin::TBoidParamMgr::TBoidParamMgr()
    : CNode("TBoidParamMgr")
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
/* void Pikmin::TBoidParamMgr::startState((ebi::title::Pikmin::TBoidParamMgr::enumState, float))
{
    // UNUSED FUNCTION
} */

/*
 * --INFO--
 * Address:	........
 * Size:	000130
 */
/* void Pikmin::TBoidParamMgr::update()
{
    // UNUSED FUNCTION
} */

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
/* Pikmin::TAnimator::TAnimator()
{
    // UNUSED FUNCTION
} */

/*
 * --INFO--
 * Address:	803E3DE8
 * Size:	0002D8
 */
void Pikmin::TAnimator::setArchive(JKRArchive* arc)
{
	void* file;
	file = arc->getResource("pikmin/title_red_piki.bmd");
	P2ASSERTLINE(0xb0, file);
	pModelDataRed = J3DModelLoaderDataBase::load(file, 0x20100000);
	file          = arc->getResource("pikmin/title_yellow_piki.bmd");
	P2ASSERTLINE(0xba, file);
	pModelDataYellow = J3DModelLoaderDataBase::load(file, 0x20100000);
	file             = arc->getResource("pikmin/title_blue_piki.bmd");
	P2ASSERTLINE(0xc4, file);
	pModelDataBlue = J3DModelLoaderDataBase::load(file, 0x20100000);
	file           = arc->getResource("pikmin/title_black_piki.bmd");
	P2ASSERTLINE(0xce, file);
	pModelDataPurple = J3DModelLoaderDataBase::load(file, 0x20100000);
	file             = arc->getResource("pikmin/title_white_piki.bmd");
	P2ASSERTLINE(0xd8, file);
	pModelDataWhite = J3DModelLoaderDataBase::load(file, 0x20100000);
	file            = arc->getResource("pikmin/wait.bck");
	P2ASSERTLINE(0xe4, file);
	_14  = (J3DAnmTransform*)J3DAnmLoaderDataBase::load(file);
	file = arc->getResource("pikmin/wave.bck");
	P2ASSERTLINE(0xe9, file);
	_18                 = (J3DAnmTransform*)J3DAnmLoaderDataBase::load(file);
	_1C                 = J3DNewMtxCalcAnm(pModelDataRed->mJointTree.mFlags & 0xf, _14);
	_20                 = J3DUNewMtxCalcAnm(pModelDataRed->mJointTree.mFlags & 0xf, _14, _18, nullptr, nullptr, (J3DMtxCalcFlag)0);
	J3DModelData* model = pModelDataBlue;
	model->doMakeShared();
	pModelDataRed->doMakeShared();
	pModelDataYellow->doMakeShared();
	pModelDataPurple->doMakeShared();
	pModelDataWhite->doMakeShared();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
/* void Pikmin::TAnimator::setAnmWait(J3DModel*, float)
{
    // UNUSED FUNCTION
} */

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
/* void Pikmin::TAnimator::setAnmWave(J3DModel*, float, float, float)
{
    // UNUSED FUNCTION
} */

/*
 * --INFO--
 * Address:	........
 * Size:	000218
 */
/* void Pikmin::TAnimator::newJ3DModel(long)
{
    // UNUSED FUNCTION
} */

/*
 * --INFO--
 * Address:	803E40C0
 * Size:	000198
 */
Pikmin::TMgr::TMgr()
    : CNode("PikminMgr")
{
	mCounter          = 0;
	mCounter2         = 0;
	_960              = 0;
	_964              = 0;
	_968              = 0;
	_96C              = 0;
	_970              = 0;
	_974              = 0;
	_978              = 0;
	_97C              = 0;
	u32 time          = 0.0f / sys->mDeltaTime;
	mCounter          = time;
	mCounter2         = time;
	mBoidParamMgr._1C = 0;
	mBoidParamMgr._18 = 0;
	mModelData        = (J3DModelData*)new TruncatedJ3DModelData;
	pUnits            = new TUnit[500];
	_998              = 0.0f;
	_99C              = 0.0f;
	add((CNode*)&mBoidParamMgr);
}

/*
 * --INFO--
 * Address:	803E42CC
 * Size:	0000D8
 */
void Pikmin::TMgr::setArchive(JKRArchive* arc)
{
	mParams.loadSettingFile(arc, "param/param_pikmin.txt");
	((TAnimator*)mModelData)->setArchive(arc);
	void* file = arc->getResource("param/param_boid.txt");
	if (file != nullptr) {
		RamStream stream(file, -1);
		stream.resetPosition(STREAM_MODE_TEXT, true);
		mBoidParamMgr.mParams[0].read(stream);
		mBoidParamMgr.mParams[1].read(stream);
		mBoidParamMgr.mParams[2].read(stream);
		mBoidParamMgr.mParams[3].read(stream);
		mBoidParamMgr.mParams[4].read(stream);
	}
}

/*
 * --INFO--
 * Address:	803E43A4
 * Size:	00011C
 */
void Pikmin::TMgr::initUnit()
{
	for (int i = 0; i < 100; i++) {
		(pUnits[i]).init(this, 0);
	}
	for (int i = 100; i < 200; i++) {
		(pUnits[i]).init(this, 1);
	}
	for (int i = 200; i < 300; i++) {
		(pUnits[i]).init(this, 2);
	}
	for (int i = 300; i < 400; i++) {
		(pUnits[i]).init(this, 3);
	}
	for (int i = 400; i < 500; i++) {
		(pUnits[i]).init(this, 4);
	}
}

/*
 * --INFO--
 * Address:	803E44C0
 * Size:	0001A8
 */
void Pikmin::TMgr::update()
{
	if (mCounter != 0) {
		mCounter--;
	}

	// Annoying float + double arithmetic

	/* if (mCounter2 != 0) {
	    u32 var = 0x4430;
	    u32 count = mCounter;
	    u32 count2 = mCounter2;


	}
	else {

	} */
	updateCalcBoid_();
	for (int i = 0; i < 500; i++) {
		(pUnits[i]).update();
	}
	for (int i = 0; i < 500; i++) {
		titleMgr->inField((TObjBase*)&pUnits[i]);
	}
}

/*
 * --INFO--
 * Address:	803E4930
 * Size:	0000C0
 */
void Pikmin::TMgr::forceArriveDest()
{
	for (int i = 0; i < 500; i++) {
		(pUnits[i]).alive();
	}
	mBoidParamMgr._1C = mBoidParamMgr._18;
	mBoidParamMgr._18 = 0;
	u32 time          = 0.0f / sys->mDeltaTime;
	mCounter          = time;
	mCounter2         = time;
	for (int i = 0; i < 500; i++) {
		TUnit* unit     = &pUnits[i];
		unit->mPosition = unit->destPos;
		unit->startState((Pikmin::TUnit::enumState)1);
	}
}

/*
 * --INFO--
 * Address:	803E49F0
 * Size:	000088
 */
void Pikmin::TMgr::assemble()
{
	mBoidParamMgr._1C = mBoidParamMgr._18;
	mBoidParamMgr._18 = 0;
	u32 time          = 2.0f / sys->mDeltaTime;
	mCounter          = time;
	mCounter2         = time;
	for (int i = 0; i < 500; i++) {
		pUnits[i].goDestination();
	}
}

/*
 * --INFO--
 * Address:	803E4A78
 * Size:	000088
 */
void Pikmin::TMgr::quickAssemble()
{
	mBoidParamMgr._1C = mBoidParamMgr._18;
	mBoidParamMgr._18 = 1;
	u32 time          = 1.0f / sys->mDeltaTime;
	mCounter          = time;
	mCounter2         = time;
	for (int i = 0; i < 500; i++) {
		pUnits[i].goDestination();
	}
}

/*
 * --INFO--
 * Address:	803E4B00
 * Size:	000090
 */
void Pikmin::TMgr::startBoid1(f32 arg)
{
	mBoidParamMgr._1C = mBoidParamMgr._18;
	mBoidParamMgr._18 = 2;
	u32 time          = (arg / 2) / sys->mDeltaTime;
	mCounter          = time;
	mCounter2         = time;
	for (int i = 0; i < 500; i++) {
		pUnits[i].startState((Pikmin::TUnit::enumState)4);
	}
}

/*
 * --INFO--
 * Address:	803E4B90
 * Size:	000090
 */
void Pikmin::TMgr::startBoid2(f32 arg)
{
	mBoidParamMgr._1C = mBoidParamMgr._18;
	mBoidParamMgr._18 = 3;
	u32 time          = (arg / 2) / sys->mDeltaTime;
	mCounter          = time;
	mCounter2         = time;
	for (int i = 0; i < 500; i++) {
		pUnits[i].startState((Pikmin::TUnit::enumState)4);
	}
}

/*
 * --INFO--
 * Address:	803E4C20
 * Size:	000090
 */
void Pikmin::TMgr::startBoid3(f32 arg)
{
	mBoidParamMgr._1C = mBoidParamMgr._18;
	mBoidParamMgr._18 = 4;
	u32 time          = (arg / 2) / sys->mDeltaTime;
	mCounter          = time;
	mCounter2         = time;
	for (int i = 0; i < 500; i++) {
		pUnits[i].startState((Pikmin::TUnit::enumState)4);
	}
}

/*
 * --INFO--
 * Address:	803E4CB0
 * Size:	00009C
 */
void Pikmin::TMgr::startWindBlow(ebi::EGEBox2f& box)
{
	for (int i = 0; i < 500; i++) {
		TUnit* unit = &pUnits[i];
		if (unit->isCalc()) {
			Vector2f unitPos = Vector2f(unit->mPosition.x, unit->mPosition.y);
			if (!box.isOut(unitPos)) {
				(pUnits[i]).startState((Pikmin::TUnit::enumState)3);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	803E4D4C
 * Size:	0000AC
 */
void Pikmin::TMgr::startDemo()
{
	for (int i = 0; i < 500; i++) {
		pUnits[i].alive();
	}
	quickAssemble();
}

/*
 * --INFO--
 * Address:	803E4DF8
 * Size:	00006C
 */
void Pikmin::TMgr::enemyPushOut(ebi::title::TObjBase* obj)
{
	for (int i = 0; i < 500; i++) {
		pUnits[i].pushOut(obj);
	}
}

/*
 * --INFO--
 * Address:	803E4E64
 * Size:	0003B8
 */
void Pikmin::TMgr::updateCalcBoid_() { }

/*
 * --INFO--
 * Address:	803E521C
 * Size:	000070
 */
bool Pikmin::TMgr::isAssemble()
{

	for (int i = 0; i < 500; i++) {
		TUnit* unit = &pUnits[i];
		if (!unit->isAssemble()) {
			return false;
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	803E528C
 * Size:	000010
 */
Pikmin::TUnit* Pikmin::TMgr::getUnit(long idx) { return &pUnits[idx]; }

/*
 * --INFO--
 * Address:	803E529C
 * Size:	000360
 */
void Pikmin::TUnit::init(ebi::title::Pikmin::TMgr* mgr, long colour)
{
	mManager = mgr;
	mManager->mParams.mAnimMaxWaitTime.mValue;
	mManager->mParams.mAnimMinWaitTime.mValue;
	/*
stwu     r1, -0x50(r1)
mflr     r0
stw      r0, 0x54(r1)
stfd     f31, 0x40(r1)
psq_st   f31, 72(r1), 0, qr0
stfd     f30, 0x30(r1)
psq_st   f30, 56(r1), 0, qr0
stw      r31, 0x2c(r1)
stw      r30, 0x28(r1)
stw      r29, 0x24(r1)
mr       r30, r3
mr       r29, r5
stw      r4, 0x34(r3)
lwz      r3, 0x34(r3)
lfs      f30, 0x1a8(r3)
lfs      f31, 0x1d0(r3)
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0xc(r1)
fsubs    f0, f30, f31
lfd      f3, lbl_8051FCD8@sda21(r2)
cmpwi    r29, 0
stw      r0, 8(r1)
li       r0, 0
lfs      f1, lbl_8051FCE0@sda21(r2)
lfd      f2, 8(r1)
fsubs    f2, f2, f3
fdivs    f1, f2, f1
fmadds   f0, f0, f1, f31
stfs     f0, 0x60(r30)
lwz      r3, 0x34(r30)
lwz      r31, 0x18(r3)
blt      lbl_803E5330
cmpwi    r29, 5
bge      lbl_803E5330
li       r0, 1

lbl_803E5330:
clrlwi.  r0, r0, 0x18
bne      lbl_803E5354
lis      r3, lbl_80497278@ha
lis      r5, lbl_80497290@ha
addi     r3, r3, lbl_80497278@l
li       r4, 0x124
addi     r5, r5, lbl_80497290@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803E5354:
cmpwi    r29, 2
beq      lbl_803E53C8
bge      lbl_803E5370
cmpwi    r29, 0
beq      lbl_803E5410
bge      lbl_803E5380
b        lbl_803E54E8

lbl_803E5370:
cmpwi    r29, 4
beq      lbl_803E54A0
bge      lbl_803E54E8
b        lbl_803E5458

lbl_803E5380:
li       r3, 0xdc
bl       __nw__FUl
or.      r29, r3, r3
beq      lbl_803E54EC
lis      r3, __vt__8J3DModel@ha
lwz      r31, 0(r31)
addi     r0, r3, __vt__8J3DModel@l
stw      r0, 0(r29)
addi     r3, r29, 0x88
bl       init__15J3DVertexBufferFv
mr       r3, r29
bl       initialize__8J3DModelFv
mr       r3, r29
mr       r4, r31
lis      r5, 2
li       r6, 1
bl       entryModelData__8J3DModelFP12J3DModelDataUlUl
b        lbl_803E54EC

lbl_803E53C8:
li       r3, 0xdc
bl       __nw__FUl
or.      r29, r3, r3
beq      lbl_803E54EC
lis      r3, __vt__8J3DModel@ha
lwz      r31, 4(r31)
addi     r0, r3, __vt__8J3DModel@l
stw      r0, 0(r29)
addi     r3, r29, 0x88
bl       init__15J3DVertexBufferFv
mr       r3, r29
bl       initialize__8J3DModelFv
mr       r3, r29
mr       r4, r31
lis      r5, 2
li       r6, 1
bl       entryModelData__8J3DModelFP12J3DModelDataUlUl
b        lbl_803E54EC

lbl_803E5410:
li       r3, 0xdc
bl       __nw__FUl
or.      r29, r3, r3
beq      lbl_803E54EC
lis      r3, __vt__8J3DModel@ha
lwz      r31, 8(r31)
addi     r0, r3, __vt__8J3DModel@l
stw      r0, 0(r29)
addi     r3, r29, 0x88
bl       init__15J3DVertexBufferFv
mr       r3, r29
bl       initialize__8J3DModelFv
mr       r3, r29
mr       r4, r31
lis      r5, 2
li       r6, 1
bl       entryModelData__8J3DModelFP12J3DModelDataUlUl
b        lbl_803E54EC

lbl_803E5458:
li       r3, 0xdc
bl       __nw__FUl
or.      r29, r3, r3
beq      lbl_803E54EC
lis      r3, __vt__8J3DModel@ha
lwz      r31, 0xc(r31)
addi     r0, r3, __vt__8J3DModel@l
stw      r0, 0(r29)
addi     r3, r29, 0x88
bl       init__15J3DVertexBufferFv
mr       r3, r29
bl       initialize__8J3DModelFv
mr       r3, r29
mr       r4, r31
lis      r5, 2
li       r6, 1
bl       entryModelData__8J3DModelFP12J3DModelDataUlUl
b        lbl_803E54EC

lbl_803E54A0:
li       r3, 0xdc
bl       __nw__FUl
or.      r29, r3, r3
beq      lbl_803E54EC
lis      r3, __vt__8J3DModel@ha
lwz      r31, 0x10(r31)
addi     r0, r3, __vt__8J3DModel@l
stw      r0, 0(r29)
addi     r3, r29, 0x88
bl       init__15J3DVertexBufferFv
mr       r3, r29
bl       initialize__8J3DModelFv
mr       r3, r29
mr       r4, r31
lis      r5, 2
li       r6, 1
bl       entryModelData__8J3DModelFP12J3DModelDataUlUl
b        lbl_803E54EC

lbl_803E54E8:
li       r29, 0

lbl_803E54EC:
stw      r29, 0x28(r30)
addi     r3, r30, 0x38
lwz      r4, 0x34(r30)
lwz      r4, 0x18(r4)
lwz      r4, 0x14(r4)
lha      r4, 6(r4)
bl       init__12J3DFrameCtrlFs
lwz      r4, 0x34(r30)
addi     r3, r30, 0x4c
lwz      r4, 0x18(r4)
lwz      r4, 0x18(r4)
lha      r4, 6(r4)
bl       init__12J3DFrameCtrlFs
lwz      r3, sys@sda21(r13)
lwz      r0, 0xd4(r3)
cmpwi    r0, 5
beq      lbl_803E5534
b        lbl_803E5544

lbl_803E5534:
lwz      r3, 0x34(r30)
lfs      f0, 0x68(r3)
stfs     f0, 0x18(r30)
b        lbl_803E5550

lbl_803E5544:
lwz      r3, 0x34(r30)
lfs      f0, 0x40(r3)
stfs     f0, 0x18(r30)

lbl_803E5550:
lwz      r3, 0x34(r30)
lfs      f0, 0x90(r3)
stfs     f0, 0x1c(r30)
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0xc(r1)
lfd      f3, lbl_8051FCD8@sda21(r2)
stw      r0, 8(r1)
lfs      f1, lbl_8051FCE0@sda21(r2)
lfd      f2, 8(r1)
lfs      f0, lbl_8051FCB4@sda21(r2)
fsubs    f2, f2, f3
fdivs    f1, f2, f1
fmuls    f0, f0, f1
stfs     f0, 0x48(r30)
bl       rand
xoris    r0, r3, 0x8000
lis      r3, 0x43300030@ha
stw      r0, 0x14(r1)
li       r0, 0
lfd      f3, lbl_8051FCD8@sda21(r2)
stw      r3, 0x10(r1)
lfs      f2, lbl_8051FCE0@sda21(r2)
lfd      f0, 0x10(r1)
lfs      f1, lbl_8051FCE8@sda21(r2)
fsubs    f3, f0, f3
lfs      f0, lbl_8051FCE4@sda21(r2)
fdivs    f2, f3, f2
fmadds   f0, f1, f2, f0
stfs     f0, 0x64(r30)
stb      r0, 0x94(r30)
psq_l    f31, 72(r1), 0, qr0
lfd      f31, 0x40(r1)
psq_l    f30, 56(r1), 0, qr0
lfd      f30, 0x30(r1)
lwz      r31, 0x2c(r1)
lwz      r30, 0x28(r1)
lwz      r0, 0x54(r1)
lwz      r29, 0x24(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

/*
 * --INFO--
 * Address:	803E55FC
 * Size:	000098
 */
void Pikmin::TUnit::goDestination()
{
	Vector2f Diff(destPos.x - mPosition.x, destPos.y - mPosition.y);
	f32 comp = _lenVec2D(Diff);
	if (comp < mManager->mParams.mStopDist.mValue) {
		startState((enumState)1);
		return;
	}

	if (comp < mManager->mParams.mConvDist.mValue) {
		startState((enumState)2);
		return;
	}
	startState((enumState)2);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
/* void Pikmin::TUnit::chaseKogane(ebi::title::TObjBase*)
{
    // UNUSED FUNCTION
} */

/*
 * --INFO--
 * Address:	803E5694
 * Size:	00006C
 */
bool Pikmin::TUnit::beAttacked()
{
	if (_94 != false) {
		return 0;
	}
	_94       = true;
	_84       = 0;
	mPosition = titleMgr->getPosOutOfViewField();
	return 1;
}

/*
 * --INFO--
 * Address:	803E5700
 * Size:	00000C
 */
void Pikmin::TUnit::alive() { _94 = false; }

/*
 * --INFO--
 * Address:	803E570C
 * Size:	000014
 */
bool Pikmin::TUnit::isCalc() { return (bool)(_84); }

/*
 * --INFO--
 * Address:	803E5720
 * Size:	000024
 */
bool Pikmin::TUnit::isAssemble()
{
	if ((_84 == 0) || (_84 == 1)) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803E5744
 * Size:	000024
 */
bool Pikmin::TUnit::isWalk()
{
	if ((_84 == 2) || (_84 == 4)) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
/* void Pikmin::TUnit::isBoid()
{
    // UNUSED FUNCTION
} */

/*
 * --INFO--
 * Address:	803E5768
 * Size:	000150
 */
void Pikmin::TUnit::startState(ebi::title::Pikmin::TUnit::enumState)
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
mr       r31, r3
lwz      r3, 0x84(r3)
cmpw     r4, r3
beq      lbl_803E58A4
lbz      r0, 0x94(r31)
cmplwi   r0, 1
bne      lbl_803E57A0
li       r0, 0
stw      r0, 0x84(r31)
b        lbl_803E57A8

lbl_803E57A0:
stw      r3, 0x88(r31)
stw      r4, 0x84(r31)

lbl_803E57A8:
lwz      r0, 0x84(r31)
cmpwi    r0, 2
beq      lbl_803E58A4
bge      lbl_803E57C8
cmpwi    r0, 0
beq      lbl_803E57D4
bge      lbl_803E5878
b        lbl_803E58A4

lbl_803E57C8:
cmpwi    r0, 4
bge      lbl_803E58A4
b        lbl_803E57E8

lbl_803E57D4:
lfs      f0, 0x2c(r31)
stfs     f0, 4(r31)
lfs      f0, 0x30(r31)
stfs     f0, 8(r31)
b        lbl_803E58A4

lbl_803E57E8:
lfs      f1, lbl_8051FC90@sda21(r2)
lfs      f0, lbl_8051FC60@sda21(r2)
stfs     f1, 0xc(r31)
stfs     f0, 0x10(r31)
lwz      r4, 0x34(r31)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x270(r4)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x8c(r31)
stw      r3, 0x90(r31)
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0xc(r1)
lfd      f2, lbl_8051FCD8@sda21(r2)
stw      r0, 8(r1)
lfs      f3, lbl_8051FCE0@sda21(r2)
lfd      f1, 8(r1)
lfs      f0, lbl_8051FCB4@sda21(r2)
fsubs    f4, f1, f2
lfs      f1, lbl_8051FCEC@sda21(r2)
lfs      f2, lbl_8051FCC0@sda21(r2)
fdivs    f3, f4, f3
fmuls    f0, f0, f3
stfs     f0, 0x5c(r31)
lwz      r3, sys@sda21(r13)
lwz      r4, 0x34(r31)
lfs      f0, 0x54(r3)
lfs      f3, 0x180(r4)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x58(r31)
b        lbl_803E58A4

lbl_803E5878:
lfs      f0, lbl_8051FC60@sda21(r2)
lfs      f1, lbl_8051FCEC@sda21(r2)
stfs     f0, 0x14(r31)
lfs      f2, lbl_8051FCC0@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f3, 0x60(r31)
lfs      f0, 0x54(r3)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x44(r31)

lbl_803E58A4:
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803E58B8
 * Size:	000DD4
 */
void Pikmin::TUnit::update()
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
stw      r31, 0x4c(r1)
stw      r30, 0x48(r1)
stw      r29, 0x44(r1)
mr       r31, r3
lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
mr       r4, r31
bl       isOutViewField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase
clrlwi.  r0, r3, 0x18
beq      lbl_803E5A54
lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
addi     r4, r31, 0x2c
lfs      f1, lbl_8051FC60@sda21(r2)
bl       "isOutViewField__Q33ebi5title9TTitleMgrFR10Vector2<f>f"
clrlwi.  r0, r3, 0x18
beq      lbl_803E5A54
lwz      r3, 0x84(r31)
cmpwi    r3, 0
beq      lbl_803E5A54
lbz      r0, 0x94(r31)
cmplwi   r0, 1
bne      lbl_803E594C
li       r0, 0
stw      r0, 0x84(r31)
b        lbl_803E5958

lbl_803E594C:
stw      r3, 0x88(r31)
li       r0, 0
stw      r0, 0x84(r31)

lbl_803E5958:
lwz      r0, 0x84(r31)
cmpwi    r0, 2
beq      lbl_803E5A54
bge      lbl_803E5978
cmpwi    r0, 0
beq      lbl_803E5984
bge      lbl_803E5A28
b        lbl_803E5A54

lbl_803E5978:
cmpwi    r0, 4
bge      lbl_803E5A54
b        lbl_803E5998

lbl_803E5984:
lfs      f0, 0x2c(r31)
stfs     f0, 4(r31)
lfs      f0, 0x30(r31)
stfs     f0, 8(r31)
b        lbl_803E5A54

lbl_803E5998:
lfs      f1, lbl_8051FC90@sda21(r2)
lfs      f0, lbl_8051FC60@sda21(r2)
stfs     f1, 0xc(r31)
stfs     f0, 0x10(r31)
lwz      r4, 0x34(r31)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x270(r4)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x8c(r31)
stw      r3, 0x90(r31)
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0x2c(r1)
lfd      f2, lbl_8051FCD8@sda21(r2)
stw      r0, 0x28(r1)
lfs      f3, lbl_8051FCE0@sda21(r2)
lfd      f1, 0x28(r1)
lfs      f0, lbl_8051FCB4@sda21(r2)
fsubs    f4, f1, f2
lfs      f1, lbl_8051FCEC@sda21(r2)
lfs      f2, lbl_8051FCC0@sda21(r2)
fdivs    f3, f4, f3
fmuls    f0, f0, f3
stfs     f0, 0x5c(r31)
lwz      r3, sys@sda21(r13)
lwz      r4, 0x34(r31)
lfs      f0, 0x54(r3)
lfs      f3, 0x180(r4)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x58(r31)
b        lbl_803E5A54

lbl_803E5A28:
lfs      f0, lbl_8051FC60@sda21(r2)
lfs      f1, lbl_8051FCEC@sda21(r2)
stfs     f0, 0x14(r31)
lfs      f2, lbl_8051FCC0@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f3, 0x60(r31)
lfs      f0, 0x54(r3)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x44(r31)

lbl_803E5A54:
lwz      r0, 0x84(r31)
lwz      r3, 0x34(r31)
cmpwi    r0, 3
lfs      f7, 0x96c(r3)
lfs      f9, 0x970(r3)
lfs      f31, 0x974(r3)
beq      lbl_803E5A94
bge      lbl_803E5A84
cmpwi    r0, 1
beq      lbl_803E5BE4
bge      lbl_803E5CA8
b        lbl_803E63C8

lbl_803E5A84:
cmpwi    r0, 5
beq      lbl_803E5FD4
bge      lbl_803E63C8
b        lbl_803E6348

lbl_803E5A94:
lwz      r3, 0x8c(r31)
cmplwi   r3, 0
beq      lbl_803E5AA8
addi     r0, r3, -1
stw      r0, 0x8c(r31)

lbl_803E5AA8:
lwz      r0, 0x8c(r31)
cmplwi   r0, 0
bne      lbl_803E63C8
lwz      r3, 0x84(r31)
cmpwi    r3, 1
beq      lbl_803E63C8
lbz      r0, 0x94(r31)
cmplwi   r0, 1
bne      lbl_803E5AD8
li       r0, 0
stw      r0, 0x84(r31)
b        lbl_803E5AE4

lbl_803E5AD8:
stw      r3, 0x88(r31)
li       r0, 1
stw      r0, 0x84(r31)

lbl_803E5AE4:
lwz      r0, 0x84(r31)
cmpwi    r0, 2
beq      lbl_803E63C8
bge      lbl_803E5B04
cmpwi    r0, 0
beq      lbl_803E5B10
bge      lbl_803E5BB4
b        lbl_803E63C8

lbl_803E5B04:
cmpwi    r0, 4
bge      lbl_803E63C8
b        lbl_803E5B24

lbl_803E5B10:
lfs      f0, 0x2c(r31)
stfs     f0, 4(r31)
lfs      f0, 0x30(r31)
stfs     f0, 8(r31)
b        lbl_803E63C8

lbl_803E5B24:
lfs      f1, lbl_8051FC90@sda21(r2)
lfs      f0, lbl_8051FC60@sda21(r2)
stfs     f1, 0xc(r31)
stfs     f0, 0x10(r31)
lwz      r4, 0x34(r31)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x270(r4)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x8c(r31)
stw      r3, 0x90(r31)
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0x2c(r1)
lfd      f2, lbl_8051FCD8@sda21(r2)
stw      r0, 0x28(r1)
lfs      f3, lbl_8051FCE0@sda21(r2)
lfd      f1, 0x28(r1)
lfs      f0, lbl_8051FCB4@sda21(r2)
fsubs    f4, f1, f2
lfs      f1, lbl_8051FCEC@sda21(r2)
lfs      f2, lbl_8051FCC0@sda21(r2)
fdivs    f3, f4, f3
fmuls    f0, f0, f3
stfs     f0, 0x5c(r31)
lwz      r3, sys@sda21(r13)
lwz      r4, 0x34(r31)
lfs      f0, 0x54(r3)
lfs      f3, 0x180(r4)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x58(r31)
b        lbl_803E63C8

lbl_803E5BB4:
lfs      f0, lbl_8051FC60@sda21(r2)
lfs      f1, lbl_8051FCEC@sda21(r2)
stfs     f0, 0x14(r31)
lfs      f2, lbl_8051FCC0@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f3, 0x60(r31)
lfs      f0, 0x54(r3)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x44(r31)
b        lbl_803E63C8

lbl_803E5BE4:
lfs      f1, 0xc(r31)
lfs      f0, lbl_8051FC64@sda21(r2)
lfs      f2, 0x10(r31)
fadds    f0, f1, f0
lfs      f1, lbl_8051FC60@sda21(r2)
fadds    f2, f2, f1
stfs     f0, 0xc(r31)
stfs     f2, 0x10(r31)
lfs      f3, 0xc(r31)
lfs      f2, 0x10(r31)
fmuls    f0, f3, f3
fmuls    f2, f2, f2
fadds    f0, f0, f2
fcmpo    cr0, f0, f1
ble      lbl_803E5C38
fmadds   f2, f3, f3, f2
fcmpo    cr0, f2, f1
ble      lbl_803E5C3C
frsqrte  f0, f2
fmuls    f2, f0, f2
b        lbl_803E5C3C

lbl_803E5C38:
fmr      f2, f1

lbl_803E5C3C:
lfs      f0, lbl_8051FC60@sda21(r2)
fcmpu    cr0, f0, f2
beq      lbl_803E5C68
lfs      f1, lbl_8051FC90@sda21(r2)
lfs      f0, 0xc(r31)
fdivs    f1, f1, f2
fmuls    f0, f0, f1
stfs     f0, 0xc(r31)
lfs      f0, 0x10(r31)
fmuls    f0, f0, f1
stfs     f0, 0x10(r31)

lbl_803E5C68:
lfs      f0, 0x2c(r31)
mr       r3, r31
lfs      f5, 4(r31)
lfs      f1, 0x30(r31)
lfs      f4, 8(r31)
fsubs    f2, f0, f5
lfs      f0, lbl_8051FCF0@sda21(r2)
fsubs    f3, f1, f4
fmuls    f1, f2, f0
fmuls    f0, f3, f0
fadds    f1, f5, f1
fadds    f0, f4, f0
stfs     f1, 4(r31)
stfs     f0, 8(r31)
bl       updateEnemyReaction___Q43ebi5title6Pikmin5TUnitFv
b        lbl_803E63C8

lbl_803E5CA8:
lfs      f2, 0x30(r31)
lfs      f0, 8(r31)
lfs      f1, 0x2c(r31)
fsubs    f29, f2, f0
lfs      f0, 4(r31)
lfs      f31, lbl_8051FC60@sda21(r2)
fsubs    f30, f1, f0
fmuls    f28, f29, f29
fmadds   f27, f30, f30, f28
fcmpo    cr0, f27, f31
ble      lbl_803E5CE8
ble      lbl_803E5CE4
frsqrte  f0, f27
fmuls    f31, f0, f27
b        lbl_803E5CE8

lbl_803E5CE4:
fmr      f31, f27

lbl_803E5CE8:
lfs      f0, 0xb8(r3)
fcmpo    cr0, f31, f0
bge      lbl_803E5E24
cmpwi    r0, 1
beq      lbl_803E5F5C
lbz      r0, 0x94(r31)
cmplwi   r0, 1
bne      lbl_803E5D14
li       r0, 0
stw      r0, 0x84(r31)
b        lbl_803E5D24

lbl_803E5D14:
lwz      r3, 0x84(r31)
li       r0, 1
stw      r3, 0x88(r31)
stw      r0, 0x84(r31)

lbl_803E5D24:
lwz      r0, 0x84(r31)
cmpwi    r0, 2
beq      lbl_803E5F5C
bge      lbl_803E5D44
cmpwi    r0, 0
beq      lbl_803E5D50
bge      lbl_803E5DF4
b        lbl_803E5F5C

lbl_803E5D44:
cmpwi    r0, 4
bge      lbl_803E5F5C
b        lbl_803E5D64

lbl_803E5D50:
lfs      f0, 0x2c(r31)
stfs     f0, 4(r31)
lfs      f0, 0x30(r31)
stfs     f0, 8(r31)
b        lbl_803E5F5C

lbl_803E5D64:
lfs      f1, lbl_8051FC90@sda21(r2)
lfs      f0, lbl_8051FC60@sda21(r2)
stfs     f1, 0xc(r31)
stfs     f0, 0x10(r31)
lwz      r4, 0x34(r31)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x270(r4)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x8c(r31)
stw      r3, 0x90(r31)
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0x2c(r1)
lfd      f2, lbl_8051FCD8@sda21(r2)
stw      r0, 0x28(r1)
lfs      f3, lbl_8051FCE0@sda21(r2)
lfd      f1, 0x28(r1)
lfs      f0, lbl_8051FCB4@sda21(r2)
fsubs    f4, f1, f2
lfs      f1, lbl_8051FCEC@sda21(r2)
lfs      f2, lbl_8051FCC0@sda21(r2)
fdivs    f3, f4, f3
fmuls    f0, f0, f3
stfs     f0, 0x5c(r31)
lwz      r3, sys@sda21(r13)
lwz      r4, 0x34(r31)
lfs      f0, 0x54(r3)
lfs      f3, 0x180(r4)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x58(r31)
b        lbl_803E5F5C

lbl_803E5DF4:
lfs      f0, lbl_8051FC60@sda21(r2)
lfs      f1, lbl_8051FCEC@sda21(r2)
stfs     f0, 0x14(r31)
lfs      f2, lbl_8051FCC0@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f3, 0x60(r31)
lfs      f0, 0x54(r3)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x44(r31)
b        lbl_803E5F5C

lbl_803E5E24:
lfs      f0, 0xe0(r3)
fcmpo    cr0, f31, f0
bge      lbl_803E5F5C
cmpwi    r0, 2
beq      lbl_803E5F5C
lbz      r0, 0x94(r31)
cmplwi   r0, 1
bne      lbl_803E5E50
li       r0, 0
stw      r0, 0x84(r31)
b        lbl_803E5E60

lbl_803E5E50:
lwz      r3, 0x84(r31)
li       r0, 2
stw      r3, 0x88(r31)
stw      r0, 0x84(r31)

lbl_803E5E60:
lwz      r0, 0x84(r31)
cmpwi    r0, 2
beq      lbl_803E5F5C
bge      lbl_803E5E80
cmpwi    r0, 0
beq      lbl_803E5E8C
bge      lbl_803E5F30
b        lbl_803E5F5C

lbl_803E5E80:
cmpwi    r0, 4
bge      lbl_803E5F5C
b        lbl_803E5EA0

lbl_803E5E8C:
lfs      f0, 0x2c(r31)
stfs     f0, 4(r31)
lfs      f0, 0x30(r31)
stfs     f0, 8(r31)
b        lbl_803E5F5C

lbl_803E5EA0:
lfs      f1, lbl_8051FC90@sda21(r2)
lfs      f0, lbl_8051FC60@sda21(r2)
stfs     f1, 0xc(r31)
stfs     f0, 0x10(r31)
lwz      r4, 0x34(r31)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x270(r4)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x8c(r31)
stw      r3, 0x90(r31)
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0x2c(r1)
lfd      f2, lbl_8051FCD8@sda21(r2)
stw      r0, 0x28(r1)
lfs      f3, lbl_8051FCE0@sda21(r2)
lfd      f1, 0x28(r1)
lfs      f0, lbl_8051FCB4@sda21(r2)
fsubs    f4, f1, f2
lfs      f1, lbl_8051FCEC@sda21(r2)
lfs      f2, lbl_8051FCC0@sda21(r2)
fdivs    f3, f4, f3
fmuls    f0, f0, f3
stfs     f0, 0x5c(r31)
lwz      r3, sys@sda21(r13)
lwz      r4, 0x34(r31)
lfs      f0, 0x54(r3)
lfs      f3, 0x180(r4)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x58(r31)
b        lbl_803E5F5C

lbl_803E5F30:
lfs      f0, lbl_8051FC60@sda21(r2)
lfs      f1, lbl_8051FCEC@sda21(r2)
stfs     f0, 0x14(r31)
lfs      f2, lbl_8051FCC0@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f3, 0x60(r31)
lfs      f0, 0x54(r3)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x44(r31)

lbl_803E5F5C:
lwz      r3, 0x34(r31)
lfs      f0, lbl_8051FC60@sda21(r2)
lfs      f1, 0x298(r3)
fcmpo    cr0, f27, f0
fmuls    f2, f31, f1
ble      lbl_803E5F8C
fmadds   f1, f30, f30, f28
fcmpo    cr0, f1, f0
ble      lbl_803E5F90
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_803E5F90

lbl_803E5F8C:
fmr      f1, f0

lbl_803E5F90:
lfs      f0, lbl_8051FC60@sda21(r2)
fcmpu    cr0, f0, f1
beq      lbl_803E5FAC
lfs      f0, lbl_8051FC90@sda21(r2)
fdivs    f0, f0, f1
fmuls    f30, f30, f0
fmuls    f29, f29, f0

lbl_803E5FAC:
fmuls    f1, f30, f2
mr       r3, r31
fmuls    f0, f29, f2
addi     r4, r1, 0x20
stfs     f1, 0x20(r1)
stfs     f0, 0x24(r1)
bl       "updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<f>"
mr       r3, r31
bl       updateEnemyReaction___Q43ebi5title6Pikmin5TUnitFv
b        lbl_803E63C8

lbl_803E5FD4:
lfs      f1, 0x30(r31)
lfs      f0, 8(r31)
lfs      f2, 0x2c(r31)
fsubs    f3, f1, f0
lfs      f1, 4(r31)
lfs      f0, lbl_8051FC60@sda21(r2)
fsubs    f1, f2, f1
fmuls    f2, f3, f3
fmadds   f1, f1, f1, f2
fcmpo    cr0, f1, f0
ble      lbl_803E6010
ble      lbl_803E6014
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_803E6014

lbl_803E6010:
fmr      f1, f0

lbl_803E6014:
lfs      f0, 0x248(r3)
fcmpo    cr0, f1, f0
ble      lbl_803E6028
li       r0, 0
stw      r0, 0x68(r31)

lbl_803E6028:
lwz      r3, 0x68(r31)
cmplwi   r3, 0
beq      lbl_803E6218
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_803E620C
lwz      r3, 0x68(r31)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
cmpwi    r3, 5
beq      lbl_803E6084
bge      lbl_803E6078
cmpwi    r3, -1
beq      lbl_803E63C8
b        lbl_803E63C8

lbl_803E6078:
cmpwi    r3, 7
bge      lbl_803E63C8
b        lbl_803E6148

lbl_803E6084:
lwz      r3, 0x68(r31)
lfs      f0, 8(r31)
lfs      f1, 8(r3)
lfs      f2, 4(r3)
fsubs    f3, f1, f0
lfs      f1, 4(r31)
lfs      f0, lbl_8051FC60@sda21(r2)
fsubs    f6, f2, f1
fmuls    f1, f3, f3
fmadds   f1, f6, f6, f1
fcmpo    cr0, f1, f0
ble      lbl_803E60C4
ble      lbl_803E60C8
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_803E60C8

lbl_803E60C4:
fmr      f1, f0

lbl_803E60C8:
lfs      f0, lbl_8051FC60@sda21(r2)
fcmpu    cr0, f0, f1
beq      lbl_803E60E4
lfs      f0, lbl_8051FC90@sda21(r2)
fdivs    f0, f0, f1
fmuls    f6, f6, f0
fmuls    f3, f3, f0

lbl_803E60E4:
lwz      r5, 0x34(r31)
mr       r3, r31
lfs      f5, 0x14(r31)
addi     r4, r1, 0x18
lfs      f4, 0x1f8(r5)
lfs      f1, 0x10(r31)
lfs      f0, 0xc(r31)
fmuls    f2, f3, f4
fmuls    f3, f1, f5
fmuls    f1, f0, f5
fmuls    f0, f6, f4
fadds    f3, f3, f2
fadds    f2, f1, f0
stfs     f3, 0x1c(r1)
stfs     f2, 0x18(r1)
lfs      f1, 0x80(r31)
lfs      f0, 0x7c(r31)
fmuls    f1, f1, f31
fmuls    f0, f0, f31
fadds    f1, f3, f1
fadds    f0, f2, f0
stfs     f1, 0x1c(r1)
stfs     f0, 0x18(r1)
bl       "updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<f>"
b        lbl_803E63C8

lbl_803E6148:
lwz      r3, 0x68(r31)
lfs      f0, 8(r31)
lfs      f1, 8(r3)
lfs      f2, 4(r3)
fsubs    f3, f1, f0
lfs      f1, 4(r31)
lfs      f0, lbl_8051FC60@sda21(r2)
fsubs    f6, f2, f1
fmuls    f1, f3, f3
fmadds   f1, f6, f6, f1
fcmpo    cr0, f1, f0
ble      lbl_803E6188
ble      lbl_803E618C
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_803E618C

lbl_803E6188:
fmr      f1, f0

lbl_803E618C:
lfs      f0, lbl_8051FC60@sda21(r2)
fcmpu    cr0, f0, f1
beq      lbl_803E61A8
lfs      f0, lbl_8051FC90@sda21(r2)
fdivs    f0, f0, f1
fmuls    f6, f6, f0
fmuls    f3, f3, f0

lbl_803E61A8:
lwz      r5, 0x34(r31)
mr       r3, r31
lfs      f5, 0x14(r31)
addi     r4, r1, 0x10
lfs      f4, 0x220(r5)
lfs      f1, 0x10(r31)
lfs      f0, 0xc(r31)
fmuls    f2, f3, f4
fmuls    f3, f1, f5
fmuls    f1, f0, f5
fmuls    f0, f6, f4
fadds    f3, f3, f2
fadds    f2, f1, f0
stfs     f3, 0x14(r1)
stfs     f2, 0x10(r1)
lfs      f1, 0x80(r31)
lfs      f0, 0x7c(r31)
fmuls    f1, f1, f31
fmuls    f0, f0, f31
fadds    f1, f3, f1
fadds    f0, f2, f0
stfs     f1, 0x14(r1)
stfs     f0, 0x10(r1)
bl       "updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<f>"
b        lbl_803E63C8

lbl_803E620C:
li       r0, 0
stw      r0, 0x68(r31)
b        lbl_803E63C8

lbl_803E6218:
lwz      r3, 0x84(r31)
cmpwi    r3, 2
beq      lbl_803E63C8
lbz      r0, 0x94(r31)
cmplwi   r0, 1
bne      lbl_803E623C
li       r0, 0
stw      r0, 0x84(r31)
b        lbl_803E6248

lbl_803E623C:
stw      r3, 0x88(r31)
li       r0, 2
stw      r0, 0x84(r31)

lbl_803E6248:
lwz      r0, 0x84(r31)
cmpwi    r0, 2
beq      lbl_803E63C8
bge      lbl_803E6268
cmpwi    r0, 0
beq      lbl_803E6274
bge      lbl_803E6318
b        lbl_803E63C8

lbl_803E6268:
cmpwi    r0, 4
bge      lbl_803E63C8
b        lbl_803E6288

lbl_803E6274:
lfs      f0, 0x2c(r31)
stfs     f0, 4(r31)
lfs      f0, 0x30(r31)
stfs     f0, 8(r31)
b        lbl_803E63C8

lbl_803E6288:
lfs      f1, lbl_8051FC90@sda21(r2)
lfs      f0, lbl_8051FC60@sda21(r2)
stfs     f1, 0xc(r31)
stfs     f0, 0x10(r31)
lwz      r4, 0x34(r31)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x270(r4)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x8c(r31)
stw      r3, 0x90(r31)
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0x2c(r1)
lfd      f2, lbl_8051FCD8@sda21(r2)
stw      r0, 0x28(r1)
lfs      f3, lbl_8051FCE0@sda21(r2)
lfd      f1, 0x28(r1)
lfs      f0, lbl_8051FCB4@sda21(r2)
fsubs    f4, f1, f2
lfs      f1, lbl_8051FCEC@sda21(r2)
lfs      f2, lbl_8051FCC0@sda21(r2)
fdivs    f3, f4, f3
fmuls    f0, f0, f3
stfs     f0, 0x5c(r31)
lwz      r3, sys@sda21(r13)
lwz      r4, 0x34(r31)
lfs      f0, 0x54(r3)
lfs      f3, 0x180(r4)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x58(r31)
b        lbl_803E63C8

lbl_803E6318:
lfs      f0, lbl_8051FC60@sda21(r2)
lfs      f1, lbl_8051FCEC@sda21(r2)
stfs     f0, 0x14(r31)
lfs      f2, lbl_8051FCC0@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f3, 0x60(r31)
lfs      f0, 0x54(r3)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x44(r31)
b        lbl_803E63C8

lbl_803E6348:
lfs      f3, 0x70(r31)
mr       r3, r31
lfs      f2, 8(r31)
addi     r4, r1, 8
lfs      f1, 0x6c(r31)
lfs      f0, 4(r31)
fsubs    f5, f3, f2
lfs      f3, 0x78(r31)
fsubs    f2, f1, f0
lfs      f1, 0x74(r31)
lfs      f4, 0x80(r31)
fmuls    f6, f5, f7
fmuls    f5, f3, f9
lfs      f0, 0x7c(r31)
fmuls    f2, f2, f7
lfs      f8, 0x14(r31)
fmuls    f1, f1, f9
lfs      f7, 0x10(r31)
lfs      f3, 0xc(r31)
fadds    f5, f6, f5
fmuls    f4, f4, f31
fadds    f1, f2, f1
fmuls    f0, f0, f31
fmuls    f6, f7, f8
fadds    f4, f5, f4
fmuls    f2, f3, f8
fadds    f0, f1, f0
fadds    f1, f6, f4
fadds    f0, f2, f0
stfs     f1, 0xc(r1)
stfs     f0, 8(r1)
bl       "updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<f>"

lbl_803E63C8:
lwz      r0, 0x84(r31)
cmpwi    r0, 0
beq      lbl_803E6648
mr       r3, r31
bl       calcModelBaseMtx___Q33ebi5title8TObjBaseFv
lwz      r0, 0x84(r31)
cmpwi    r0, 2
beq      lbl_803E6550
bge      lbl_803E63FC
cmpwi    r0, 0
beq      lbl_803E65BC
bge      lbl_803E6518
b        lbl_803E65BC

lbl_803E63FC:
cmpwi    r0, 6
bge      lbl_803E65BC
cmpwi    r0, 4
bge      lbl_803E6550
addi     r3, r31, 0x4c
bl       update__12J3DFrameCtrlFv
addi     r3, r31, 0x38
bl       update__12J3DFrameCtrlFv
lwz      r4, 0x90(r31)
cmplwi   r4, 0
beq      lbl_803E645C
lwz      r3, 0x8c(r31)
lis      r0, 0x4330
stw      r0, 0x28(r1)
lfd      f2, lbl_8051FC98@sda21(r2)
stw      r3, 0x2c(r1)
lfd      f0, 0x28(r1)
stw      r4, 0x34(r1)
fsubs    f1, f0, f2
stw      r0, 0x30(r1)
lfd      f0, 0x30(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803E6460

lbl_803E645C:
lfs      f1, lbl_8051FC60@sda21(r2)

lbl_803E6460:
lfs      f27, lbl_8051FC90@sda21(r2)
lfs      f0, lbl_8051FC64@sda21(r2)
fsubs    f2, f27, f1
fcmpo    cr0, f2, f0
cror     2, 0, 2
bne      lbl_803E6480
fdivs    f27, f2, f0
b        lbl_803E64A0

lbl_803E6480:
lfs      f0, lbl_8051FCC0@sda21(r2)
fcmpo    cr0, f2, f0
cror     2, 0, 2
bne      lbl_803E6494
b        lbl_803E64A0

lbl_803E6494:
lfs      f1, lbl_8051FCF4@sda21(r2)
fneg     f0, f1
fmadds   f27, f1, f2, f0

lbl_803E64A0:
lwz      r3, 0x34(r31)
li       r4, 0
lfs      f0, lbl_8051FC90@sda21(r2)
lwz      r5, 0x18(r3)
lfs      f2, 0x48(r31)
fsubs    f1, f0, f27
lwz      r29, 0x28(r31)
lfs      f0, 0x5c(r31)
lwz      r3, 0x18(r5)
stfs     f0, 8(r3)
lwz      r3, 0x14(r5)
stfs     f2, 8(r3)
lwz      r30, 0x20(r5)
mr       r3, r30
lwz      r12, 0(r30)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
mr       r3, r30
fmr      f1, f27
lwz      r12, 0(r30)
li       r4, 1
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r3, 4(r29)
lwz      r3, 0x28(r3)
lwz      r3, 0(r3)
stw      r30, 0x54(r3)
b        lbl_803E65BC

lbl_803E6518:
addi     r3, r31, 0x38
bl       update__12J3DFrameCtrlFv
lwz      r3, 0x34(r31)
lwz      r4, 0x28(r31)
lwz      r5, 0x18(r3)
lfs      f0, 0x48(r31)
lwz      r3, 0x14(r5)
stfs     f0, 8(r3)
lwz      r3, 4(r4)
lwz      r0, 0x1c(r5)
lwz      r3, 0x28(r3)
lwz      r3, 0(r3)
stw      r0, 0x54(r3)
b        lbl_803E65BC

lbl_803E6550:
lwz      r5, 0x34(r31)
addi     r3, r31, 0x38
lwz      r4, sys@sda21(r13)
lfs      f3, 0x14(r31)
lfs      f2, 0x158(r5)
lfs      f1, lbl_8051FCEC@sda21(r2)
lfs      f0, 0x54(r4)
fmuls    f2, f3, f2
lfs      f3, 0x64(r31)
fmuls    f0, f1, f0
lfs      f1, lbl_8051FCC0@sda21(r2)
fmuls    f2, f3, f2
fmuls    f0, f1, f0
fmuls    f0, f2, f0
stfs     f0, 0x44(r31)
bl       update__12J3DFrameCtrlFv
lwz      r3, 0x34(r31)
lwz      r4, 0x28(r31)
lwz      r5, 0x18(r3)
lfs      f0, 0x48(r31)
lwz      r3, 0x14(r5)
stfs     f0, 8(r3)
lwz      r3, 4(r4)
lwz      r0, 0x1c(r5)
lwz      r3, 0x28(r3)
lwz      r3, 0(r3)
stw      r0, 0x54(r3)

lbl_803E65BC:
lwz      r3, 0x28(r31)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r31)
addi     r4, r2, lbl_8051FCF8@sda21
lwz      r3, 4(r3)
lwz      r3, 0x54(r3)
bl       getIndex__10JUTNameTabCFPCc
lwz      r4, 0x28(r31)
mulli    r0, r3, 0x30
lwz      r3, 0x34(r31)
lwz      r4, 0x84(r4)
lfs      f0, 0x108(r3)
lwz      r3, 0xc(r4)
add      r4, r3, r0
lfs      f1, 0xc(r4)
fadds    f0, f1, f0
stfs     f0, 0xc(r4)
lwz      r3, 0x34(r31)
lfs      f1, 0x2c(r4)
lfs      f0, 0x130(r3)
fadds    f0, f1, f0
stfs     f0, 0x2c(r4)
lwz      r3, 0x28(r31)
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r31)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl

lbl_803E6648:
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
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r0, 0xa4(r1)
lwz      r29, 0x44(r1)
mtlr     r0
addi     r1, r1, 0xa0
blr
	*/
}

/*
 * --INFO--
 * Address:	803E4668
 * Size:	000164
 */
void Pikmin::TMgr::setStartPos(Vector2f* pos)
{
	for (int i = 0; i < 500; i++) {
		TUnit* unit       = &pUnits[i];
		unit->mPosition.x = pos[i].x;
		unit->mPosition.y = pos[i].y;
	}
}

/*
 * --INFO--
 * Address:	803E47CC
 * Size:	000164
 */
void Pikmin::TMgr::setDestPos(Vector2f* pos)
{
	for (int i = 0; i < 500; i++) {
		TUnit* unit     = &pUnits[i];
		unit->destPos.x = pos[i].x;
		unit->destPos.y = pos[i].y;
	}
}

} // namespace title
} // namespace ebi

namespace ebi {
namespace title {
/*
 * --INFO--
 * Address:	803E668C
 * Size:	000200
 */
void Pikmin::TUnit::updateSmoothWalk_(Vector2f& arg)
{
	// Still needs to be matched
	f32 _964  = mManager->_964;
	f32 _968  = mManager->_968;
	f32 _960  = mManager->_960;
	f32 param = arg.length();
	if (param > _960) {
		param = _960;
	} else if (param < 0.0f) {
		param = 0.0f;
	}
	mParms[0] = param;
	Vector2f pos(arg);
	f32 len = _sqrtf((pos.x * pos.x) + (pos.y * pos.y));
	if (len != 0.0f) {
		f32 norm = 1.0f / len;
		pos      = pos * norm;
	}
	pos      = pos * _964;
	f32 sqt  = pos.x * pos.x + pos.y * pos.y;
	f32 len2 = _sqrtf(sqt);

	Vector2f newpos;
	if (len2 > _968) {

		f32 sqt2 = pos.x * pos.x + pos.y * pos.y;
		f32 len  = _sqrtf(sqt2);
		if (len != 0.0f) {
			f32 norm = 1.0f / len;
			pos      = pos * norm;
		}
		newpos = pos * _968;
	}

	mAngle = mAngle + newpos;
	mAngle.normalise();
	mPosition = mPosition + mAngle * mParms[0];
}

/*
 * --INFO--
 * Address:	803E688C
 * Size:	000350
 */
void Pikmin::TUnit::updateEnemyReaction_()
{
	if (mEnemyObj != nullptr && mEnemyObj->isCalc()) {
		Vector2f diff = mEnemyObj->mPosition - mPosition;
		f32 len       = _lenVec2D(diff);
		switch (mEnemyObj->getCreatureType()) {
		case 5: // Kogane
			if (len < mEnemyObj->mParms[3] && _84 != 5) {
				if (_94 == 1) {
					_84 = 0;
				} else {
					_88 = _84;
					_84 = 5;
				}
				switch (_84) {
				case 0:
					mPosition = destPos;
					break;
				case 3:
					mAngle = Vector2f(1.0f, 0.0f);

					u32 time              = mManager->mParams.mWindTimer.mValue / sys->mDeltaTime;
					mCounter              = time;
					mCounter2             = time;
					mFrameControlB.mFrame = 5.0f * randEbisawaFloat();
					mFrameControlB.mRate  = sys->mDeltaTime * mManager->mParams.mAnimSpeedStyle.mValue * 60.f * 0.5f;
					break;
				case 1:
					mParms[0]            = 0.0f;
					mFrameControlA.mRate = _60.x * sys->mDeltaTime * 60.0f * 0.5f;
					break;
				}
			}
			break;
		case 6:
			if (len < mEnemyObj->mParms[3] && _84 != 5) {
				if (_94 == 1) {
					_84 = 0;
				} else {
					_88 = _84;
					_84 = 5;
				}
				switch (_84) {
				case 0:
					mPosition = destPos;
					break;
				case 3:
					mAngle = Vector2f(1.0f, 0.0f);

					u32 time              = mManager->mParams.mWindTimer.mValue / sys->mDeltaTime;
					mCounter              = time;
					mCounter2             = time;
					mFrameControlB.mFrame = 5.0f * randEbisawaFloat();
					mFrameControlB.mRate  = sys->mDeltaTime * mManager->mParams.mAnimSpeedStyle.mValue * 60.f * 0.5f;
					break;
				case 1:
					mParms[0]            = 0.0f;
					mFrameControlA.mRate = _60.x * sys->mDeltaTime * 60.0f * 0.5f;
					break;
				}
			}
			break;
		case -1:
			break;
		}
	}
}

} // namespace title
} // namespace ebi
