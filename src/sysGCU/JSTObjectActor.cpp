#include "Game/P2JST/ObjectActor.h"
#include "Game/MoviePlayer.h"
#include "JSystem/J3D/J3DAnmLoader.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "Game/GameSystem.h"
#include "JSystem/JStudio/stb-data.h"
#include "nans.h"

static const u32 filler[]    = { 0, 0, 0 };
static const char filename[] = "JSTObjectActor";

namespace Game {

namespace P2JST {

/*
 * --INFO--
 * Address:	8042E960
 * Size:	0000D0
 */
ObjectActor::ObjectActor(char const* name, MoviePlayer* movie)
    : ObjectBase(name, movie)
{
	mModelData    = nullptr;
	mModel        = nullptr;
	mAnmTransform = nullptr;
	mMtxCalcAnm   = nullptr;
	mArchive      = nullptr;

	reset();
	mArchive = MoviePlayer::mArchive;
	/*
	lis      r6, __vt__Q26JStage7TObject@ha
	lis      r8, __vt__Q26JStage6TActor@ha
	addi     r0, r6, __vt__Q26JStage7TObject@l
	lis      r7, __vt__Q34Game5P2JST10ObjectBase@ha
	stw      r0, 0(r3)
	addi     r0, r8, __vt__Q26JStage6TActor@l
	lis      r6, __vt__Q34Game5P2JST11ObjectActor@ha
	li       r11, 0
	stw      r0, 0(r3)
	addi     r9, r6, __vt__Q34Game5P2JST11ObjectActor@l
	addi     r0, r7, __vt__Q34Game5P2JST10ObjectBase@l
	lis      r6, lbl_804EC018@ha
	stw      r0, 4(r3)
	addi     r7, r6, lbl_804EC018@l
	li       r10, -1
	addi     r8, r9, 0x8c
	stw      r5, 8(r3)
	lwz      r6, 0(r7)
	stw      r4, 0xc(r3)
	lwz      r5, 4(r7)
	stw      r11, 0x10(r3)
	lwz      r4, 8(r7)
	stw      r10, 0x14(r3)
	lwz      r0, lbl_805161D8@sda21(r13)
	stw      r11, 0x18(r3)
	lfs      f0, lbl_805161DC@sda21(r13)
	stw      r11, 0x1c(r3)
	stw      r9, 0(r3)
	stw      r8, 4(r3)
	stw      r11, 0x20(r3)
	stw      r11, 0x24(r3)
	stw      r11, 0x28(r3)
	stw      r11, 0x2c(r3)
	stw      r11, 0x30(r3)
	stw      r6, 0x34(r3)
	stw      r5, 0x38(r3)
	stw      r4, 0x3c(r3)
	stw      r6, 0x40(r3)
	stw      r5, 0x44(r3)
	stw      r4, 0x48(r3)
	stw      r6, 0x4c(r3)
	stw      r5, 0x50(r3)
	stw      r4, 0x54(r3)
	stw      r0, 0x58(r3)
	stw      r0, 0x5c(r3)
	stfs     f0, 0x60(r3)
	stfs     f0, 0x64(r3)
	stw      r0, 0x68(r3)
	stw      r0, 0x6c(r3)
	lwz      r0, mArchive__Q24Game11MoviePlayer@sda21(r13)
	stw      r0, 0x30(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042EA30
 * Size:	000068
 */
ObjectActor::~ObjectActor() { }

/*
 * --INFO--
 * Address:	8042EA98
 * Size:	000070
 */
void ObjectActor::reset()
{
	Vector3f z;
	z.x              = govNAN_[0];
	z.y              = govNAN_[1];
	z.z              = govNAN_[2];
	u32 a            = gu32NAN_.a;
	f32 f            = gfNAN_;
	mTranslation     = z;
	mRotation        = z;
	mScaling         = z;
	mShape           = a;
	mAnimation       = a;
	mAnimFrame       = f;
	mAnimFrameMax    = f;
	mModelFileId     = a;
	mAnimationFileId = a;
	mScaling         = 1.0f;
	mAnimFrame       = 0.0f;
	/*
	lis      r4, lbl_804EC018@ha
	lfsu     f5, lbl_804EC018@l(r4)
	lwz      r0, lbl_805161D8@sda21(r13)
	lfs      f4, 4(r4)
	stfs     f5, 0x34(r3)
	lfs      f3, 8(r4)
	stfs     f4, 0x38(r3)
	lfs      f2, lbl_805161DC@sda21(r13)
	stfs     f3, 0x3c(r3)
	lfs      f1, lbl_80520678@sda21(r2)
	stfs     f5, 0x40(r3)
	lfs      f0, lbl_8052067C@sda21(r2)
	stfs     f4, 0x44(r3)
	stfs     f3, 0x48(r3)
	stfs     f5, 0x4c(r3)
	stfs     f4, 0x50(r3)
	stfs     f3, 0x54(r3)
	stw      r0, 0x58(r3)
	stw      r0, 0x5c(r3)
	stfs     f2, 0x60(r3)
	stfs     f2, 0x64(r3)
	stw      r0, 0x68(r3)
	stw      r0, 0x6c(r3)
	stfs     f1, 0x54(r3)
	stfs     f1, 0x50(r3)
	stfs     f1, 0x4c(r3)
	stfs     f0, 0x60(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042EB08
 * Size:	000390
 */
void ObjectActor::update()
{
	if (mShape != mModelFileId) {
		setShape();
	}
	if (mAnimation != mAnimationFileId) {
		setAnim();
	}
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stw      r31, 0xfc(r1)
	stw      r30, 0xf8(r1)
	mr       r31, r3
	lwz      r4, 0x58(r3)
	lwz      r0, 0x68(r3)
	cmplw    r4, r0
	beq      lbl_8042EB50
	lwz      r12, 0(r3)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl

lbl_8042EB50:
	lwz      r3, 0x5c(r31)
	lwz      r0, 0x6c(r31)
	cmplw    r3, r0
	beq      lbl_8042EB74
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xc0(r12)
	mtctr    r12
	bctrl

lbl_8042EB74:
	addi     r3, r1, 0x98
	bl       PSMTXIdentity
	lfs      f2, 0x38(r31)
	lfs      f3, 0x3c(r31)
	lfs      f0, 0x34(r31)
	lfs      f1, lbl_80520680@sda21(r2)
	stfs     f0, 0xa4(r1)
	stfs     f2, 0xb4(r1)
	stfs     f3, 0xc4(r1)
	lfs      f0, 0x48(r31)
	fmuls    f31, f1, f0
	fmr      f1, f31
	bl       sin
	frsp     f30, f1
	fmr      f1, f31
	bl       cos
	frsp     f3, f1
	lfs      f0, lbl_8052067C@sda21(r2)
	fneg     f2, f30
	lfs      f1, lbl_80520678@sda21(r2)
	stfs     f30, 0xd8(r1)
	addi     r3, r1, 0x98
	stfs     f3, 0xc8(r1)
	addi     r4, r1, 0xc8
	addi     r5, r1, 0x68
	stfs     f2, 0xcc(r1)
	stfs     f3, 0xdc(r1)
	stfs     f1, 0xf0(r1)
	stfs     f0, 0xec(r1)
	stfs     f0, 0xe0(r1)
	stfs     f0, 0xe8(r1)
	stfs     f0, 0xd0(r1)
	stfs     f0, 0xd4(r1)
	stfs     f0, 0xe4(r1)
	stfs     f0, 0xf4(r1)
	bl       PSMTXConcat
	lfs      f1, lbl_80520680@sda21(r2)
	lfs      f0, 0x44(r31)
	fmuls    f31, f1, f0
	fmr      f1, f31
	bl       sin
	frsp     f30, f1
	fmr      f1, f31
	bl       cos
	frsp     f3, f1
	lfs      f0, lbl_8052067C@sda21(r2)
	fneg     f1, f30
	lfs      f2, lbl_80520678@sda21(r2)
	stfs     f30, 0xd0(r1)
	addi     r3, r1, 0x68
	stfs     f2, 0xdc(r1)
	addi     r4, r1, 0xc8
	addi     r5, r1, 0x98
	stfs     f3, 0xc8(r1)
	stfs     f1, 0xe8(r1)
	stfs     f3, 0xf0(r1)
	stfs     f0, 0xec(r1)
	stfs     f0, 0xe0(r1)
	stfs     f0, 0xd8(r1)
	stfs     f0, 0xcc(r1)
	stfs     f0, 0xd4(r1)
	stfs     f0, 0xe4(r1)
	stfs     f0, 0xf4(r1)
	bl       PSMTXConcat
	lfs      f1, lbl_80520680@sda21(r2)
	lfs      f0, 0x40(r31)
	fmuls    f31, f1, f0
	fmr      f1, f31
	bl       sin
	frsp     f30, f1
	fmr      f1, f31
	bl       cos
	frsp     f3, f1
	lfs      f0, lbl_8052067C@sda21(r2)
	fneg     f1, f30
	lfs      f2, lbl_80520678@sda21(r2)
	stfs     f30, 0xec(r1)
	addi     r3, r1, 0x98
	stfs     f2, 0xc8(r1)
	addi     r4, r1, 0xc8
	addi     r5, r1, 0x68
	stfs     f3, 0xdc(r1)
	stfs     f1, 0xe0(r1)
	stfs     f3, 0xf0(r1)
	stfs     f0, 0xe8(r1)
	stfs     f0, 0xd0(r1)
	stfs     f0, 0xd8(r1)
	stfs     f0, 0xcc(r1)
	stfs     f0, 0xd4(r1)
	stfs     f0, 0xe4(r1)
	stfs     f0, 0xf4(r1)
	bl       PSMTXConcat
	lwz      r4, 0x24(r31)
	cmplwi   r4, 0
	beq      lbl_8042EE70
	addi     r3, r1, 0x68
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x24(r31)
	lfs      f0, 0x4c(r31)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x50(r31)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x54(r31)
	stfs     f0, 0x20(r3)
	lwz      r0, 0x28(r31)
	cmplwi   r0, 0
	beq      lbl_8042ED54
	lfs      f1, 0x60(r31)
	lfs      f0, lbl_80520678@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x60(r31)
	lfs      f0, 0x60(r31)
	lfs      f1, 0x64(r31)
	fcmpo    cr0, f0, f1
	ble      lbl_8042ED48
	stfs     f1, 0x60(r31)

lbl_8042ED48:
	lfs      f0, 0x60(r31)
	lwz      r3, 0x28(r31)
	stfs     f0, 8(r3)

lbl_8042ED54:
	bl       setViewCalcModeInd__Q28SysShape5ModelFv
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r30, 0x198(r3)
	cmplwi   r30, 0
	beq      lbl_8042ED84
	mr       r3, r30
	li       r4, 0
	bl       setJ3DViewMtx__8ViewportFb
	mr       r3, r30
	bl       setViewport__8ViewportFv
	mr       r3, r30
	bl       setProjection__8ViewportFv

lbl_8042ED84:
	lfs      f0, 0x34(r31)
	addi     r3, r1, 0x38
	lfs      f1, lbl_80520688@sda21(r2)
	addi     r4, r1, 0x2c
	stfs     f0, 0x2c(r1)
	addi     r5, r1, 0x20
	lfs      f2, lbl_80520684@sda21(r2)
	lfs      f0, 0x38(r31)
	stfs     f0, 0x30(r1)
	lfs      f0, 0x3c(r31)
	stfs     f0, 0x34(r1)
	lfs      f0, 0x40(r31)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x20(r1)
	lfs      f0, 0x44(r31)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x24(r1)
	lfs      f0, 0x48(r31)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x28(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lwz      r4, 0x24(r31)
	addi     r3, r1, 0x38
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lfs      f0, lbl_80520678@sda21(r2)
	lwz      r4, 0x24(r31)
	stfs     f0, 8(r1)
	stfs     f0, 0xc(r1)
	lwz      r0, 8(r1)
	stfs     f0, 0x10(r1)
	lwz      r3, 0xc(r1)
	stw      r0, 0x14(r1)
	lwz      r0, 0x10(r1)
	stw      r3, 0x18(r1)
	lfs      f0, 0x14(r1)
	stw      r0, 0x1c(r1)
	lfs      f1, 0x18(r1)
	stfs     f0, 0x18(r4)
	lfs      f0, 0x1c(r1)
	stfs     f1, 0x1c(r4)
	stfs     f0, 0x20(r4)
	lwz      r3, 0x24(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24(r31)
	li       r0, 0
	lwz      r3, 0x84(r3)
	stw      r0, 0x30(r3)
	lwz      r3, 0x24(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8042EE70:
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	lwz      r31, 0xfc(r1)
	lwz      r0, 0x124(r1)
	lwz      r30, 0xf8(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042EE98
 * Size:	000068
 */
void ObjectActor::entry()
{
	if (mModel) {
		gameSystem->mSection->setDrawBuffer(2);
		mModel->entry();
		gameSystem->mSection->setDrawBuffer(0);
	}
}

/*
 * --INFO--
 * Address:	8042EF00
 * Size:	0001A4
 */
bool ObjectActor::setShape()
{
	if (!(moviePlayer->isFlag(MVP_IsFinished))) {
		sys->startChangeCurrentHeap(moviePlayer->mMovieHeap);
		int id = mShape;
		if (id == gu32NAN_.a) {
			sys->endChangeCurrentHeap();
			return false;
		} else if (id == mModelFileId) {
			sys->endChangeCurrentHeap();
			return true;
		} else {
			void* file = mArchive->getIdxResource(id);
			if (!file) {
				sys->endChangeCurrentHeap();
				return false;
			} else {
				u32 flag = 0x240000;
				// use different flags for the day results background model (makes it ignore fog)
				if (strcmp(mName, "bg")) {
					flag |= 0x20000000;
				} else {
					flag |= 0x10000000;
				}
				mModelData = J3DModelLoaderDataBase::load(file, flag);
				JUT_ASSERTLINE(281, mModelData, "ModelData null");
				if (!mModelData) {
					sys->endChangeCurrentHeap();
					return false;
				} else {
					mModel = new J3DModel(mModelData, 0, 1);
					JUT_ASSERTLINE(290, mModel, "pModel_ null");
					mModelFileId = mShape;
					sys->endChangeCurrentHeap();
					return true;
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8042F0A4
 * Size:	000128
 */
bool ObjectActor::setAnim()
{
	if (!(moviePlayer->isFlag(MVP_IsFinished))) {
		sys->startChangeCurrentHeap(moviePlayer->mMovieHeap);
		int id = mAnimation;
		if (id == gu32NAN_.a) {
			sys->endChangeCurrentHeap();
			return false;
		} else if (id == mAnimationFileId) {
			sys->endChangeCurrentHeap();
			return true;
		} else {
			void* file = mArchive->getIdxResource(id);
			if (!file) {
				sys->endChangeCurrentHeap();
				return false;
			} else {
				mAnmTransform = static_cast<J3DAnmTransform*>(J3DAnmLoaderDataBase::load(file));
				if (!mAnmTransform) {
					sys->endChangeCurrentHeap();
					return false;
				} else {
					mMtxCalcAnm                                 = J3DNewMtxCalcAnm(mModelData->mJointTree.mFlags & 0xf, mAnmTransform);
					mModelData->mJointTree.mJoints[0]->mMtxCalc = mMtxCalcAnm;
					mAnimFrameMax                               = mAnmTransform->mMaxFrame;
					mAnimationFileId                            = mAnimation;
					sys->endChangeCurrentHeap();
					return true;
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8042F1CC
 * Size:	000038
 */
void ObjectActor::mountArchive() { JUT_PANICLINE(359, "DON\'T CALL THIS !\n"); }

/*
 * --INFO--
 * Address:	8042F204
 * Size:	000260
 */
void ObjectActor::parseUserData_(u32 p1, void const* p2)
{
	OSReport("data-ID : %u (0x%08x)\n", p1, p2);
	JStudio::stb::data::TParse_TParagraph_data v1;
	v1.stbData = p2;
	JStudio::stb::data::TParse_TParagraph_data::TData v2;
	v1.getData(&v2);
	if (v2.status == 0) {
		return;
	}
	if (v2.fileCount == 0 || v2.status != 0x22 || v2._10 == nullptr) {
		return;
	}

	OSReport("int16:%d,%d,%d\n");
	OSReport("char:%d,%c,%c\n");
	OSReport("string:%u,%s\n");
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	lis      r3, lbl_8049A158@ha
	stw      r0, 0xb4(r1)
	stw      r31, 0xac(r1)
	addi     r31, r3, lbl_8049A158@l
	addi     r3, r31, 0x64
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	mr       r29, r5
	crclr    6
	bl       OSReport
	stw      r29, 0x20(r1)
	addi     r3, r1, 0x20
	addi     r4, r1, 0x8c
	bl
getData__Q47JStudio3stb4data22TParse_TParagraph_dataCFPQ57JStudio3stb4data22TParse_TParagraph_data5TData
	lbz      r0, 0x8c(r1)
	cmplwi   r0, 0
	beq      lbl_8042F448
	lwz      r4, 0x98(r1)
	li       r3, 0
	cmplwi   r4, 0
	beq      lbl_8042F278
	cmplwi   r0, 0x22
	bne      lbl_8042F278
	lwz      r0, 0x9c(r1)
	cmplwi   r0, 0
	beq      lbl_8042F278
	li       r3, 1

lbl_8042F278:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8042F448
	stw      r4, 0x60(r1)
	b        lbl_8042F2D8

lbl_8042F288:
	lwz      r8, 0x60(r1)
	addi     r3, r31, 0x7c
	lwz      r4, 0x60(r1)
	subf     r7, r9, r8
	stw      r9, 0x58(r1)
	rlwinm   r0, r7, 0, 0, 0x1e
	lha      r5, 0(r4)
	lhax     r6, r9, r0
	srwi     r4, r7, 1
	stw      r8, 0x48(r1)
	stw      r9, 0x44(r1)
	stw      r9, 0x1c(r1)
	stw      r8, 0x18(r1)
	stw      r9, 0x40(r1)
	stw      r9, 0x3c(r1)
	crclr    6
	bl       OSReport
	lwz      r3, 0x60(r1)
	addi     r0, r3, 2
	stw      r0, 0x60(r1)

lbl_8042F2D8:
	lwz      r0, 0x94(r1)
	lwz      r9, 0x98(r1)
	slwi     r3, r0, 1
	lwz      r0, 0x60(r1)
	add      r3, r9, r3
	cmplw    r0, r3
	stw      r3, 0x54(r1)
	stw      r3, 0x38(r1)
	stw      r0, 0x34(r1)
	bne      lbl_8042F288
	lwz      r0, 0x60(r1)
	addi     r3, r1, 0x14
	addi     r4, r1, 0x78
	stw      r0, 0x14(r1)
	bl
getData__Q47JStudio3stb4data22TParse_TParagraph_dataCFPQ57JStudio3stb4data22TParse_TParagraph_data5TData
	lbz      r0, 0x78(r1)
	cmplwi   r0, 0
	beq      lbl_8042F448
	lwz      r4, 0x84(r1)
	li       r3, 0
	cmplwi   r4, 0
	beq      lbl_8042F348
	cmplwi   r0, 0x51
	bne      lbl_8042F348
	lwz      r0, 0x88(r1)
	cmplwi   r0, 0
	beq      lbl_8042F348
	li       r3, 1

lbl_8042F348:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8042F448
	stw      r4, 0x5c(r1)
	b        lbl_8042F3A0

lbl_8042F358:
	lwz      r7, 0x5c(r1)
	addi     r3, r31, 0x8c
	lwz      r5, 0x5c(r1)
	subf     r4, r8, r7
	stw      r8, 0x50(r1)
	lbz      r5, 0(r5)
	lbzx     r0, r8, r4
	stw      r8, 0x10(r1)
	extsb    r5, r5
	extsb    r6, r0
	stw      r7, 0xc(r1)
	stw      r8, 0x30(r1)
	stw      r8, 0x2c(r1)
	crclr    6
	bl       OSReport
	lwz      r3, 0x5c(r1)
	addi     r0, r3, 1
	stw      r0, 0x5c(r1)

lbl_8042F3A0:
	lwz      r8, 0x84(r1)
	lwz      r3, 0x80(r1)
	lwz      r0, 0x5c(r1)
	add      r3, r8, r3
	cmplw    r0, r3
	stw      r3, 0x4c(r1)
	stw      r3, 0x28(r1)
	stw      r0, 0x24(r1)
	bne      lbl_8042F358
	lwz      r0, 0x5c(r1)
	addi     r3, r1, 8
	addi     r4, r1, 0x64
	stw      r0, 8(r1)
	bl
getData__Q47JStudio3stb4data22TParse_TParagraph_dataCFPQ57JStudio3stb4data22TParse_TParagraph_data5TData
	lbz      r3, 0x64(r1)
	cmplwi   r3, 0
	beq      lbl_8042F448
	lwz      r4, 0x70(r1)
	li       r0, 0
	cmplwi   r4, 0
	beq      lbl_8042F400
	cmplwi   r3, 0x60
	bne      lbl_8042F400
	li       r0, 1

lbl_8042F400:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8042F448
	mr       r30, r4
	li       r29, 0
	b        lbl_8042F43C

lbl_8042F414:
	mr       r4, r29
	mr       r5, r30
	addi     r3, r31, 0x9c
	crclr    6
	bl       OSReport
	mr       r3, r30
	li       r4, 0
	addi     r29, r29, 1
	bl       strchr
	addi     r30, r3, 1

lbl_8042F43C:
	lwz      r0, 0x6c(r1)
	cmplw    r29, r0
	blt      lbl_8042F414

lbl_8042F448:
	lwz      r0, 0xb4(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042F464
 * Size:	00006C
 */
int ObjectActor::JSGFindNodeID(char const* name) const
{
	P2ASSERTLINE(428, mModelData);
	return mModelData->mJointTree.mNametab->getIndex(name);
}

/*
 * --INFO--
 * Address:	8042F4D0
 * Size:	00008C
 */
bool ObjectActor::JSGGetNodeTransformation(u32 id, Mtx mtx) const
{
	P2ASSERTLINE(434, mModel);
	PSMTXCopy(mModel->mMtxBuffer->mWorldMatrices[(u16)id], mtx);
	return true;
}

/*
 * --INFO--
 * Address:	8042F55C
 * Size:	000008
 */
char const* ObjectActor::JSGGetName() const { return mName; }

/*
 * --INFO--
 * Address:	8042F564
 * Size:	000008
 */
void ObjectActor::JSGSetFlag(u32 a1) { mFlags = a1; }

/*
 * --INFO--
 * Address:	8042F56C
 * Size:	000008
 */
u32 ObjectActor::JSGGetFlag() const { return mFlags; }

/*
 * --INFO--
 * Address:	8042F574
 * Size:	000038
 */
void ObjectActor::JSGSetData(u32 data1, void const* data2, u32 data3)
{
	_14 = data1;
	_18 = data2;
	_1C = data3;
	parseUserData_(data1, data2);
}

/*
 * --INFO--
 * Address:	8042F5AC
 * Size:	00001C
 */
void ObjectActor::JSGSetTranslation(Vec const& translate) { mTranslation = translate; }

/*
 * --INFO--
 * Address:	8042F5C8
 * Size:	00001C
 */
void ObjectActor::JSGGetTranslation(Vec* translate) const
{
	translate->x = mTranslation.x;
	translate->y = mTranslation.y;
	translate->z = mTranslation.z;
}

/*
 * --INFO--
 * Address:	8042F5E4
 * Size:	00001C
 */
void ObjectActor::JSGSetRotation(Vec const& rotate) { mRotation = rotate; }

/*
 * --INFO--
 * Address:	8042F600
 * Size:	00001C
 */
void ObjectActor::JSGGetRotation(Vec* rotate) const
{
	rotate->x = mRotation.x;
	rotate->y = mRotation.y;
	rotate->z = mRotation.z;
}

/*
 * --INFO--
 * Address:	8042F61C
 * Size:	00001C
 */
void ObjectActor::JSGSetScaling(Vec const& scale) { mScaling = scale; }

/*
 * --INFO--
 * Address:	8042F638
 * Size:	00001C
 */
void ObjectActor::JSGGetScaling(Vec* scale) const
{
	scale->x = mScaling.x;
	scale->y = mScaling.y;
	scale->z = mScaling.z;
}

/*
 * --INFO--
 * Address:	8042F654
 * Size:	000008
 */
void ObjectActor::JSGSetShape(u32 a1) { mShape = a1; }

/*
 * --INFO--
 * Address:	8042F65C
 * Size:	000008
 */
int ObjectActor::JSGGetShape() const { return mShape; }

/*
 * --INFO--
 * Address:	8042F664
 * Size:	000008
 */
void ObjectActor::JSGSetAnimation(u32 a1) { mAnimation = a1; }

/*
 * --INFO--
 * Address:	8042F66C
 * Size:	000008
 */
int ObjectActor::JSGGetAnimation() const { return mAnimation; }

/*
 * --INFO--
 * Address:	8042F674
 * Size:	000008
 */
f32 ObjectActor::JSGGetAnimationFrameMax() const { return mAnimFrameMax; }

/*
 * --INFO--
 * Address:	8042F67C
 * Size:	000004
 */
void ObjectActor::JSGSetAnimationFrame(f32) { }

/*
 * --INFO--
 * Address:	8042F680
 * Size:	000008
 */
f32 ObjectActor::JSGGetAnimationFrame() const { return mAnimFrame; }

} // namespace P2JST
} // namespace Game
