#include "JSystem/JAudio/JAS/JASBNKParser.h"
#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASDrumSet.h"
#include "JSystem/JAudio/JAS/JASInst.h"
#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JSupport/JSU.h"

static size_t JASBNKParser::sUsedHeapSize = 0;

namespace JASBNKParser {

// forward declare statics
static JASOscillator::Data* findOscPtr(JASBasicBank*, THeader*, TOsc*);
static s16* getOscTableEndPtr(s16*);

/**
 * @note Address: 0x8009A7DC
 * @note Size: 0x6D0
 */
JASBasicBank* JASBNKParser::createBasicBank(void* stream)
{
	JKRHeap* heap      = JASBank::getCurrentHeap();
	const u32 freeSize = heap->getFreeSize();
	THeader* header    = static_cast<THeader*>(stream);

	JASBasicBank* bank = new (heap, 0) JASBasicBank;
	if (bank == nullptr) {
		return nullptr;
	}

	bank->setInstCount(JASBank_INSTRUMENT_SLOTS);

	/// Populate insts:
	for (int i = 0; i < JASBank_MAX_INSTRUMENT; i++) {
		TInst* instRaw = header->mInstOffsets[i].ptr(header);
		if (instRaw) {
			JASBasicInst* inst = new (heap, 0) JASBasicInst;
			inst->mVolume      = instRaw->mVolume;
			inst->mPitch       = instRaw->mPitch;

			/// Populate inst oscillators:
			inst->setOscCount(TInst_MAX_OSCILLATORS);
			for (int oscIndex = 0, j = 0; j < TInst_MAX_OSCILLATORS; j++) {
				TOsc* oscRaw = instRaw->mOscOffsets[j].ptr(header);
				if (oscRaw != nullptr) {
					JASOscillator::Data* oscData = findOscPtr(bank, header, oscRaw);
					if (oscData == nullptr) {
						oscData          = new (heap, 0) JASOscillator::Data;
						oscData->mTarget = oscRaw->mTarget;
						oscData->mRate   = oscRaw->mRate;
						s16* oscTable    = oscRaw->mAttack.ptr(header);
						if (oscTable != nullptr) {
							u32 tableLength = (getOscTableEndPtr(oscTable) - oscTable) * sizeof(s16);
							u8* tableCopy   = new (heap, 0) u8[tableLength];
							JASCalc::bcopy(oscTable, tableCopy, tableLength);
							oscData->mAttack = (s16*)tableCopy;
						} else {
							oscData->mAttack = nullptr;
						}
						oscTable = oscRaw->mRelease.ptr(header);
						if (oscTable != nullptr) {
							u32 tableLength = (getOscTableEndPtr(oscTable) - oscTable) * sizeof(s16);
							u8* tableCopy   = new (heap, 0) u8[tableLength];
							JASCalc::bcopy(oscTable, tableCopy, tableLength);
							oscData->mRelease = (s16*)tableCopy;
						} else {
							oscData->mRelease = nullptr;
						}
						oscData->mWidth  = oscRaw->mWidth;
						oscData->mVertex = oscRaw->mVertex;
					}
					inst->setOsc(oscIndex, oscData);
					oscIndex++;
				}
			}

			/// Populate inst effects (2 rand + 2 sense)
			inst->setEffectCount(TInst_MAX_RAND + TInst_MAX_SENSE);
			for (int j = 0; j < TInst_MAX_RAND; j++) {
				TRand* randRaw = instRaw->mRandOffsets[j].ptr(header);
				if (randRaw != nullptr) {
					JASInstRand* rand = new (heap, 0) JASInstRand;
					rand->setTarget(randRaw->mTarget);
					rand->mFloor   = randRaw->mFloor;
					rand->mCeiling = randRaw->mCeiling;
					inst->setEffect(j, rand);
				}
			}

			for (int j = 0; j < TInst_MAX_SENSE; j++) {
				TSense* senseRaw = instRaw->mSenseOffsets[j].ptr(header);
				if (senseRaw != nullptr) {
					JASInstSense* sense = new (heap, 0) JASInstSense;
					sense->setTarget(senseRaw->mTarget);
					sense->setParams(senseRaw->mRegister, senseRaw->mKey, senseRaw->mFloor, senseRaw->mCeiling);
					inst->setEffect(j + TInst_MAX_RAND, sense);
				}
			}

			/// Populate inst key regions:
			inst->setKeyRegionCount(instRaw->mKeyRegionCount);
			for (int j = 0; j < instRaw->mKeyRegionCount; j++) {
				JASBasicInst::TKeymap* instKeymap = inst->getKeyRegion(j);
				TKeymap* keymapRaw                = instRaw->mKeymapOffsets[j].ptr(header);
				instKeymap->mBaseKey              = keymapRaw->mBaseKey;
				instKeymap->setVeloRegionCount(keymapRaw->mVelRegCount);
				for (int k = 0; k < keymapRaw->mVelRegCount; k++) {
					JASBasicInst::TVeloRegion* instVeloRegion = instKeymap->getVeloRegion(k);
					TVmap* vmapRaw                            = keymapRaw->mVmapOffsets[k].ptr(header);
					instVeloRegion->mVelocity                 = vmapRaw->mVelocity;
					instVeloRegion->mWaveID                   = vmapRaw->mWaveID & 0xFFFF;
					instVeloRegion->mVolume                   = vmapRaw->mVolume;
					instVeloRegion->mPitch                    = vmapRaw->mPitch;
				}
			}
			bank->setInst(i, inst);
		}
	}

	for (int i = 0; i < JASBank_MAX_PERCUSSION; i++) {
		TPerc* percRaw = header->mPercOffsets[i].ptr(header);
		if (percRaw != nullptr) {
			JASDrumSet* drumSet = new (heap, 0) JASDrumSet;
			for (int j = 0; j < TPerc_MAX_ENTRIES; j++) {
				TPmap* pmapRaw = percRaw->mPmapOffsets[j].ptr(header);
				if (pmapRaw != nullptr) {
					JASDrumSet::TPerc* drumSetPerc = drumSet->getPerc(j);
					drumSetPerc->mPitch            = pmapRaw->mPitch;
					drumSetPerc->mVolume           = pmapRaw->mVolume;
					if (percRaw->mMagic == 'PER2') {
						drumSetPerc->mPanning = percRaw->mPanning[j] / 127.0f;
						drumSetPerc->setRelease(percRaw->mRelease[j]);
					}
					drumSetPerc->setEffectCount(TPerc_MAX_RAND);
					for (int effectIndex = 0, k = 0; k < TPerc_MAX_RAND; k++) {
						TRand* randRaw = pmapRaw->mRandOffsets[k].ptr(header);
						if (randRaw != nullptr) {
							JASInstRand* rand = new (heap, 0) JASInstRand;
							rand->setTarget(randRaw->mTarget);
							rand->mFloor   = randRaw->mFloor;
							rand->mCeiling = randRaw->mCeiling;
							drumSetPerc->setEffect(effectIndex, rand);
							effectIndex++;
						}
					}
					drumSetPerc->setVeloRegionCount(pmapRaw->mVeloRegionCount);
					for (int k = 0; k < pmapRaw->mVeloRegionCount; k++) {
						JASBasicInst::TVeloRegion* instVeloRegion = drumSetPerc->getVeloRegion(k);
						TVmap* vmapRaw                            = pmapRaw->mVeloRegionOffsets[k].ptr(header);
						instVeloRegion->mVelocity                 = vmapRaw->mVelocity;
						instVeloRegion->mWaveID                   = vmapRaw->mWaveID & 0xFFFF;
						instVeloRegion->mVolume                   = vmapRaw->mVolume;
						instVeloRegion->mPitch                    = vmapRaw->mPitch;
					}
				}
			}
			bank->setInst(i + 0xE4, drumSet); // TODO: Why +0xE4?
		}
	}
	sUsedHeapSize += freeSize - heap->getFreeSize();
	return bank;
}

/**
 * @note Address: 0x8009AEAC
 * @note Size: 0x120
 */
JASOscillator::Data* JASBNKParser::findOscPtr(JASBasicBank* bank, JASBNKParser::THeader* header, JASBNKParser::TOsc* oscPtr)
{
	TOffset<TInst>* instOffsets = header->mInstOffsets - 1;
	for (int i = 0; i < TPerc_MAX_ENTRIES; i++) {
		TInst* instRaw = instOffsets[i + 1].ptr(header);
		if (instRaw) {
			// look through both oscillators
			for (int j = 0; j < TInst_MAX_OSCILLATORS; j++) {
				TOsc* oscRaw = instRaw->mOscOffsets[j].ptr(header);
				if (oscRaw == oscPtr) {
					JASInst* inst = bank->getInst(i);
					if (inst) {
						// check we have that oscillator for this instrument
						JASInstParam param;
						inst->getParam(60, 127, &param);
						if (j < param.mOscCount) {
							return param.mOscData[j];
						}
					}
				}
			}
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8009AFCC
 * @note Size: 0x14
 */
s16* JASBNKParser::getOscTableEndPtr(s16* p1)
{
	s16 v1;
	do {
		v1 = *p1;
		p1 += 3;
	} while (v1 <= 0xa);
	return p1;
}
} // namespace JASBNKParser
