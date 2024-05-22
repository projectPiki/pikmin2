#include "PSM/THPDinamics.h"
#include "PSM/CreaturePrm.h"

namespace PSM {

THPDinamicsProc sTHPDinamicsProc;
CreaturePrm sInsReal;

// clang-format off
THPDemoDinamics sThpDemoDinamics[THP_COUNT]
	= { { 0.8f,  0.38f, 0.94f, true,  "Opening1" },
		{ 0.9f,  0.22f, 0.98f, true,  "Opening2" },
		{ 0.7f,  0.38f, 0.98f, true,  "Ending1" },
		{ 0.8f,  0.44f, 0.99f, true,  "Ending2" },
		{ 0.57f, 1.00f, 1.00f, false, "Staffroll" },
		{ 0.5f,  1.00f, 1.00f, false, "Play1" },
		{ 0.7f,  1.00f, 1.00f, false, "Play2" },
		{ 0.7f,  1.00f, 1.00f, false, "Play3" },
		{ 0.7f,  1.00f, 1.00f, false, "Play4" },
		{ 0.7f,  1.00f, 1.00f, false, "Play5" },
		{ 0.7f,  1.00f, 1.00f, false, "Play6" },
		{ 0.7f,  1.00f, 1.00f, false, "Crime" }, };
// clang-format on

/**
 * @note Address: 0x804724A0
 * @note Size: 0x70
 */
void THPDinamicsProc::setSetting(THP_ID id)
{
	P2ASSERTLINE(118, id < THP_COUNT);
	setSetting(&sThpDemoDinamics[id]);
}

const f32 CreaturePrm::cVolMaxDist_Kehai[7]            = { 150.0f, 100.0f, 500.0f, 500.0f, 600.0f, 800.0f, 300.0f };
const f32 CreaturePrm::cVolMaxDist_Battle[7]           = { 210.0f, 140.0f, 700.0f, 700.0f, 840.0f, 1120.0f, 420.0f };
const f32 CreaturePrm::cVolZeroDist_Kehai[7]           = { 300.0f, 200.0f, 1000.0f, 1000.0f, 1200.0f, 1600.0f, 600.0f };
const f32 CreaturePrm::cVolZeroDist_Battle[7]          = { 420.0f, 280.0f, 1400.0f, 1400.0f, 1680.0f, 2240.0f, 840.0f };
const f32 CreaturePrm::cVolZeroDist_InnerSize_Kehai[7] = { 233.99998f, 156.0f, 780.0f, 780.0f, 935.99996f, 1248.0f, 467.99998f };

f32 sCamFov           = 0.25f;
f32 sBoss_ViewDist    = 1300.0f;
f32 sBoss_ViewDistVol = 0.3f;
f32 sBoss_DistMax     = 4000.0f;

/**
 * @note Address: 0x80472510
 * @note Size: 0x110
 */
void THPDinamicsProc::setSetting(THPDemoDinamics* dyn)
{
	mDemoInfo = dyn;
	P2ASSERTLINE(125, dyn);
	P2ASSERTBOUNDSLINE2(126, 0.0f, dyn->_04, 1.0f);
	P2ASSERTBOUNDSLINE2(127, 0.0f, dyn->_08, 1.0f);
	P2ASSERTLINE(128, dyn->mBaseVolumeModifier > 0.0f);
}

/**
 * @note Address: 0x80472620
 * @note Size: 0x130
 */
f32 THPDinamicsProc::dinamics(f32 input)
{
	f32 input2 = input;
	P2ASSERTLINE(137, mDemoInfo);

	f32 volume = (mDemoInfo->mEnableDyn) ? mDemoInfo->calcDinamic(input2) : input;
	return volume * mDemoInfo->mBaseVolumeModifier;
}

CreaturePrm::CreaturePrm() { mPersp.set(1.0f, 400.0f, 0.8f, 700.0f, 0.0f); }

const f32 PSM::CreaturePrm::cNoukouDistance = 300.0f;
const f32 PSM::CreaturePrm::cSeFxMix        = 0.07f;
const f32 PSM::CreaturePrm::cSeFxMix_cave   = 1.0f;

} // namespace PSM
