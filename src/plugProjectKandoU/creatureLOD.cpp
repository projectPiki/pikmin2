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
				pos0          = pos0 - lodSphere.mPosition;
				pos1          = pos1 - lodSphere.mPosition;

				if (pos0.sqrLength() < pos1.sqrLength()) {
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
