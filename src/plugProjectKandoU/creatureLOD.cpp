#include "Game/AILOD.h"
#include "Game/Creature.h"
#include "Game/GameSystem.h"
#include "Sys/Sphere.h"
#include "Sys/Cylinder.h"
#include "Viewport.h"
#include "nans.h"

namespace Game {

bool AILOD::drawInfo;

/**
 * @note Address: 0x801D7808
 * @note Size: 0x1C
 */
AILODParm::AILODParm()
    : mFar(0.07f)
    , mClose(0.02f)
    , mIsCylinder(false)
{
}

/**
 * @note Address: 0x801D7824
 * @note Size: 0x18
 */
AILOD::AILOD()
    : mFlags(AILOD_NULL)
    , mSoundVPID(0)
{
	mFlags = AILOD_IsVisVP0;
}

/**
 * @note Address: 0x801D783C
 * @note Size: 0x3A8
 */
void Creature::updateLOD(Game::AILODParm& parm)
{
	Sys::Sphere lodSphere;
	Sys::Cylinder lodCylinder;
	getLODSphere(lodSphere);
	if (parm.mIsCylinder) {
		getLODCylinder(lodCylinder);
	}

	int vpStats[2];
	mLod.mFlags       = AILOD_NULL;
	Graphics* gfx     = sys->getGfx();
	int viewportCount = gfx->getViewportNum();
	bool shouldCull   = true; // set to false if visible on any viewport
	int currFlag      = AILOD_IsFar;

	for (int i = 0; i < viewportCount; i++) {
		Viewport* vp = gfx->getViewport(i);
		if (!vp->viewable()) {
			vpStats[i] = AILOD_IsFar;
			continue;
		}

		Camera* camera = vp->getCamera();
		if (parm.mIsCylinder) {
			if (camera->isCylinderVisible(lodCylinder)) {
				shouldCull = false;
				mLod.setVPVisible(i);
			}
		} else if (camera->isVisible(lodSphere)) {
			shouldCull = false;
			mLod.setVPVisible(i);
		}

		f32 screenSize = camera->calcScreenSize(lodSphere);
		if (screenSize > parm.mFar) {
			vpStats[i] = AILOD_NULL;
		} else if (screenSize > parm.mClose) {
			vpStats[i] = AILOD_IsMid;
		} else {
			vpStats[i] = AILOD_IsFar;
		}

		if (vpStats[i] < currFlag) {
			currFlag = vpStats[i];
		}
	}

	if (!(gameSystem->isMultiplayerMode() && (2 <= viewportCount))) {
		mLod.mSoundVPID = 0;
	} else {
		Viewport* vp0 = gfx->getViewport(PLAYER1_VIEWPORT);
		Viewport* vp1 = gfx->getViewport(PLAYER2_VIEWPORT);
		if (!vp0->viewable()) {
			mLod.mSoundVPID = 1;
		} else {
			if (!vp1->viewable()) {
				mLod.mSoundVPID = 0;
			} else {
				P2ASSERTLINE(175, vp0->getCamera());
				P2ASSERTLINE(176, vp1->getCamera());

				Vector3f pos0 = *vp0->getCamera()->getSoundPositionPtr();
				Vector3f pos1 = *vp1->getCamera()->getSoundPositionPtr();
				// problem with these
				f32 dist0 = pos0.sqrDistance(lodSphere.mPosition);
				f32 dist1 = pos1.sqrDistance(lodSphere.mPosition);

				if (dist0 < dist1) {
					mLod.mSoundVPID = 0;
				} else {
					mLod.mSoundVPID = 1;
				}
			}
		}
	}

	for (int i = 0; i < viewportCount; i++) {
		gfx->getViewport(i)->viewable();
	}

	mLod.setFlag((u8)currFlag);

	if (!shouldCull) {
		mLod.setFlag(AILOD_IsVisible);
	} else {
		mLod.mFlags = (AILOD_IsFar);
	}

	if (0 < getCellPikiCount()) {
		mLod.setFlag(AILOD_PikiInCell);
	}

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
	stmw     r23, 0x4c(r1)
	lwz      r12, 0(r3)
	mr       r24, r4
	mr       r23, r3
	addi     r4, r1, 0x10
	lwz      r12, 0x140(r12)
	mtctr    r12
	bctrl
	lbz      r0, 8(r24)
	cmplwi   r0, 0
	beq      lbl_801D78A4
	mr       r3, r23
	addi     r4, r1, 0x20
	lwz      r12, 0(r23)
	lwz      r12, 0x144(r12)
	mtctr    r12
	bctrl

lbl_801D78A4:
	li       r0, 0
	addi     r28, r1, 8
	stb      r0, 0xd8(r23)
	li       r27, 1
	li       r26, 2
	li       r25, 0
	lwz      r3, sys@sda21(r13)
	lwz      r31, 0x24(r3)
	lwz      r30, 0x264(r31)
	b        lbl_801D79BC

lbl_801D78CC:
	mr       r3, r31
	mr       r4, r25
	bl       getViewport__8GraphicsFi
	mr       r29, r3
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801D78F4
	li       r0, 2
	stw      r0, 0(r28)
	b        lbl_801D79B4

lbl_801D78F4:
	lbz      r0, 8(r24)
	lwz      r29, 0x44(r29)
	cmplwi   r0, 0
	beq      lbl_801D7934
	mr       r3, r29
	addi     r4, r1, 0x20
	bl       isCylinderVisible__9CullPlaneFRQ23Sys8Cylinder
	clrlwi.  r0, r3, 0x18
	beq      lbl_801D7960
	li       r0, 0x10
	lbz      r3, 0xd8(r23)
	slw      r0, r0, r25
	li       r27, 0
	or       r0, r3, r0
	stb      r0, 0xd8(r23)
	b        lbl_801D7960

lbl_801D7934:
	mr       r3, r29
	addi     r4, r1, 0x10
	bl       isVisible__9CullPlaneFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_801D7960
	li       r0, 0x10
	lbz      r3, 0xd8(r23)
	slw      r0, r0, r25
	li       r27, 0
	or       r0, r3, r0
	stb      r0, 0xd8(r23)

lbl_801D7960:
	mr       r3, r29
	addi     r4, r1, 0x10
	bl       calcScreenSize__6CameraFRQ23Sys6Sphere
	lfs      f0, 0(r24)
	fcmpo    cr0, f1, f0
	ble      lbl_801D7984
	li       r0, 0
	stw      r0, 0(r28)
	b        lbl_801D79A4

lbl_801D7984:
	lfs      f0, 4(r24)
	fcmpo    cr0, f1, f0
	ble      lbl_801D799C
	li       r0, 1
	stw      r0, 0(r28)
	b        lbl_801D79A4

lbl_801D799C:
	li       r0, 2
	stw      r0, 0(r28)

lbl_801D79A4:
	lwz      r0, 0(r28)
	cmpw     r0, r26
	bge      lbl_801D79B4
	mr       r26, r0

lbl_801D79B4:
	addi     r28, r28, 4
	addi     r25, r25, 1

lbl_801D79BC:
	cmpw     r25, r30
	blt      lbl_801D78CC
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_801D79E0
	cmpwi    r0, 3
	bne      lbl_801D79E4

lbl_801D79E0:
	li       r3, 1

lbl_801D79E4:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801D79F4
	cmpwi    r30, 2
	bge      lbl_801D7A00

lbl_801D79F4:
	li       r0, 0
	stb      r0, 0xd9(r23)
	b        lbl_801D7B48

lbl_801D7A00:
	mr       r3, r31
	li       r4, 0
	bl       getViewport__8GraphicsFi
	mr       r0, r3
	mr       r3, r31
	mr       r25, r0
	li       r4, 1
	bl       getViewport__8GraphicsFi
	mr       r0, r3
	mr       r3, r25
	mr       r28, r0
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801D7A44
	li       r0, 1
	stb      r0, 0xd9(r23)
	b        lbl_801D7B48

lbl_801D7A44:
	mr       r3, r28
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801D7A60
	li       r0, 0
	stb      r0, 0xd9(r23)
	b        lbl_801D7B48

lbl_801D7A60:
	lwz      r0, 0x44(r25)
	cmplwi   r0, 0
	bne      lbl_801D7A88
	lis      r3, lbl_804807C8@ha
	lis      r5, lbl_804807D8@ha
	addi     r3, r3, lbl_804807C8@l
	li       r4, 0xaf
	addi     r5, r5, lbl_804807D8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D7A88:
	lwz      r0, 0x44(r28)
	cmplwi   r0, 0
	bne      lbl_801D7AB0
	lis      r3, lbl_804807C8@ha
	lis      r5, lbl_804807D8@ha
	addi     r3, r3, lbl_804807C8@l
	li       r4, 0xb0
	addi     r5, r5, lbl_804807D8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D7AB0:
	lwz      r3, 0x44(r25)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0(r3)
	lfs      f30, 4(r3)
	lfs      f29, 8(r3)
	lwz      r3, 0x44(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	lfs      f1, 4(r3)
	fsubs    f0, f30, f2
	lfs      f6, 0x10(r1)
	fsubs    f7, f1, f2
	lfs      f3, 0(r3)
	lfs      f5, 0x18(r1)
	fsubs    f2, f31, f6
	fmuls    f1, f0, f0
	lfs      f4, 8(r3)
	fsubs    f6, f3, f6
	fmuls    f0, f7, f7
	fsubs    f3, f29, f5
	fmadds   f1, f2, f2, f1
	fsubs    f2, f4, f5
	fmadds   f0, f6, f6, f0
	fmadds   f1, f3, f3, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f1, f0
	bge      lbl_801D7B40
	li       r0, 0
	stb      r0, 0xd9(r23)
	b        lbl_801D7B48

lbl_801D7B40:
	li       r0, 1
	stb      r0, 0xd9(r23)

lbl_801D7B48:
	li       r24, 0
	b        lbl_801D7B64

lbl_801D7B50:
	mr       r3, r31
	mr       r4, r24
	bl       getViewport__8GraphicsFi
	bl       viewable__8ViewportFv
	addi     r24, r24, 1

lbl_801D7B64:
	cmpw     r24, r30
	blt      lbl_801D7B50
	lbz      r4, 0xd8(r23)
	clrlwi   r3, r26, 0x18
	clrlwi.  r0, r27, 0x18
	or       r3, r4, r3
	stb      r3, 0xd8(r23)
	bne      lbl_801D7B94
	lbz      r0, 0xd8(r23)
	ori      r0, r0, 4
	stb      r0, 0xd8(r23)
	b        lbl_801D7B9C

lbl_801D7B94:
	li       r0, 2
	stb      r0, 0xd8(r23)

lbl_801D7B9C:
	mr       r3, r23
	bl       getCellPikiCount__Q24Game8CreatureFv
	cmpwi    r3, 0
	ble      lbl_801D7BB8
	lbz      r0, 0xd8(r23)
	ori      r0, r0, 8
	stb      r0, 0xd8(r23)

lbl_801D7BB8:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	lmw      r23, 0x4c(r1)
	lwz      r0, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/**
 * @note Address: 0x801D7BE4
 * @note Size: 0x258
 */
void Creature::drawLODInfo(Graphics& gfx, Vector3f& position)
{
	if (AILOD::drawInfo) {
		PerspPrintfInfo info;
		gfx.initPerspPrintf(gfx.mCurrentViewport);
		const char* nearnessLabels[] = { "near", "mid", "far" };

		int nearness = mLod.isFlag(AILOD_IsMid | AILOD_IsFar);
		switch (nearness) {
		case AILOD_NULL:
			info.mColorA.set(0, 10, 255, 255);
			info.mColorB.set(200, 200, 200, 255);
			break;
		case AILOD_IsMid:
			info.mColorA.set(200, 200, 0, 255);
			info.mColorB.set(200, 200, 200, 255);
			break;
		case AILOD_IsFar:
			info.mColorA.set(255, 10, 0, 255);
			info.mColorB.set(200, 200, 200, 255);
			break;
		}

		gfx.perspPrintf(info, position, "[%s%s %s %s]", (mLod.isFlag(AILOD_IsVisVP0)) ? "v" : "x",
		                (mLod.isFlag(AILOD_IsVisVP1)) ? "v" : "x", (mLod.isFlag(AILOD_PikiInCell)) ? "p" : "_", nearnessLabels[nearness]);

		Camera* camera0 = sys->mGfx->getViewport(PLAYER1_VIEWPORT)->mCamera;
		Vector3f sizeOnScreenTextPosition;
		sizeOnScreenTextPosition = position;
		sizeOnScreenTextPosition.y += 15.0f;

		Sys::Sphere lodSphere;
		getLODSphere(lodSphere);
		gfx.perspPrintf(info, sizeOnScreenTextPosition, "<%f>", camera0->calcScreenSize(lodSphere));
	}
}

} // namespace Game
