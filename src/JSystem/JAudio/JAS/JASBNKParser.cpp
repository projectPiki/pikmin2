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

	bank->setInstCount(0x100);

	/// Populate insts:
	for (int i = 0; i < 0x80; i++) {
		TInst* instRaw = JSUConvertOffsetToPtr<TInst>(header, header->mInstOffsets[i + 1]); // problem with mInstOffsets again
		if (instRaw) {
			JASBasicInst* inst = new (heap, 0) JASBasicInst;
			inst->mVolume      = instRaw->mVolume;
			inst->mPitch       = instRaw->mPitch;

			/// Populate inst oscillators:
			inst->setOscCount(2);
			for (int oscIndex = 0, j = 0; j < 2; j++) {
				TOsc* oscRaw = JSUConvertOffsetToPtr<TOsc>(header, instRaw->mOscOffsets[j]);
				if (oscRaw != nullptr) {
					JASOscillator::Data* oscData = findOscPtr(bank, header, oscRaw);
					if (oscData == nullptr) {
						oscData          = new (heap, 0) JASOscillator::Data;
						oscData->mTarget = oscRaw->mTarget;
						oscData->mRate   = oscRaw->mRate;
						s16* oscTable    = JSUConvertOffsetToPtr<s16>(header, oscRaw->mAttack);
						if (oscTable != nullptr) {
							u32 tableLength = (getOscTableEndPtr(oscTable) - oscTable) * sizeof(s16);
							u8* tableCopy   = new (heap, 0) u8[tableLength];
							JASCalc::bcopy(oscTable, tableCopy, tableLength);
							oscData->mAttack = (s16*)tableCopy;
						} else {
							oscData->mAttack = nullptr;
						}
						oscTable = JSUConvertOffsetToPtr<s16>(header, oscRaw->mRelease);
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

			/// Populate inst effects:
			inst->setEffectCount(4);
			for (int j = 0; j < 2; j++) {
				TRand* randRaw = JSUConvertOffsetToPtr<TRand>(header, instRaw->mRandOffsets[j]);
				if (randRaw != nullptr) {
					JASInstRand* rand = new (heap, 0) JASInstRand;
					rand->setTarget(randRaw->mTarget);
					rand->mFloor   = randRaw->mFloor;
					rand->mCeiling = randRaw->mCeiling;
					inst->setEffect(j, rand);
				}
			}
			for (int j = 0; j < 2; j++) {
				TSense* senseRaw = JSUConvertOffsetToPtr<TSense>(header, instRaw->mSenseOffsets[j]);
				if (senseRaw != nullptr) {
					JASInstSense* sense = new (heap, 0) JASInstSense;
					sense->setTarget(senseRaw->mTarget);
					sense->setParams(senseRaw->mRegister, senseRaw->mKey, senseRaw->mFloor, senseRaw->mCeiling);
					inst->setEffect(j + 2, sense);
				}
			}

			/// Populate inst key regions:
			inst->setKeyRegionCount(instRaw->mKeyRegionCount);
			for (int j = 0; j < instRaw->mKeyRegionCount; j++) {
				JASBasicInst::TKeymap* instKeymap = inst->getKeyRegion(j);
				TKeymap* keymapRaw                = JSUConvertOffsetToPtr<TKeymap>(header, instRaw->mKeymapOffsets[j]);
				instKeymap->mBaseKey              = keymapRaw->mBaseKey;
				instKeymap->setVeloRegionCount(keymapRaw->mVelRegCount);
				for (int k = 0; k < keymapRaw->mVelRegCount; k++) {
					JASBasicInst::TVeloRegion* instVeloRegion = instKeymap->getVeloRegion(k);
					TVmap* vmapRaw                            = JSUConvertOffsetToPtr<TVmap>(header, keymapRaw->mVmapOffsets[k]);
					instVeloRegion->mVelocity                 = vmapRaw->mVelocity;
					instVeloRegion->mWaveID                   = vmapRaw->mWaveID & 0xFFFF;
					instVeloRegion->mVolume                   = vmapRaw->mVolume;
					instVeloRegion->mPitch                    = vmapRaw->mPitch;
				}
			}
			bank->setInst(i, inst);
		}
	}

	for (int i = 0; i < 12; i++) {
		TPerc* percRaw = JSUConvertOffsetToPtr<TPerc>(header, header->mPercOffsets[i + 1]);
		if (percRaw != nullptr) {
			JASDrumSet* drumSet = new (heap, 0) JASDrumSet;
			for (int j = 0; j < 0x80; j++) {
				TPmap* pmapRaw = JSUConvertOffsetToPtr<TPmap>(header, percRaw->mPmapOffsets[j]);
				if (pmapRaw != nullptr) {
					JASDrumSet::TPerc* drumSetPerc = drumSet->getPerc(j);
					drumSetPerc->mPitch            = pmapRaw->mPitch;
					drumSetPerc->mVolume           = pmapRaw->mVolume;
					if (percRaw->mMagic == 'PER2') {
						drumSetPerc->mPanning = percRaw->mPanning[j] / 127.0f;
						drumSetPerc->setRelease(percRaw->_308[j]);
					}
					drumSetPerc->setEffectCount(2);
					for (int effectIndex = 0, k = 0; k < 2; k++) {
						TRand* randRaw = JSUConvertOffsetToPtr<TRand>(header, pmapRaw->mRandOffsets[k]);
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
						TVmap* vmapRaw                            = JSUConvertOffsetToPtr<TVmap>(header, pmapRaw->mVeloRegionOffsets[k]);
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
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stmw     r14, 0x18(r1)
	mr       r15, r3
	bl       getCurrentHeap__7JASBankFv
	mr       r30, r3
	bl       getFreeSize__7JKRHeapFv
	mr       r14, r3
	mr       r31, r15
	mr       r4, r30
	li       r3, 0x10
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r29, r3, r3
	beq      lbl_8009A824
	bl       __ct__12JASBasicBankFv
	mr       r29, r3

lbl_8009A824:
	cmplwi   r29, 0
	bne      lbl_8009A834
	li       r3, 0
	b        lbl_8009AE98

lbl_8009A834:
	mr       r3, r29
	li       r4, 0x100
	bl       setInstCount__12JASBasicBankFUl
	li       r21, 0
	mr       r24, r31

lbl_8009A848:
	lwz      r4, 0x24(r24)
	mr       r3, r31
	bl       "JSUConvertOffsetToPtr<Q212JASBNKParser5TInst>__FPCvUl"
	or.      r16, r3, r3
	beq      lbl_8009AC1C
	mr       r4, r30
	li       r3, 0x24
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r15, r3, r3
	beq      lbl_8009A87C
	bl       __ct__12JASBasicInstFv
	mr       r15, r3

lbl_8009A87C:
	lfs      f0, 8(r16)
	mr       r3, r15
	li       r4, 2
	stfs     f0, 4(r15)
	lfs      f0, 0xc(r16)
	stfs     f0, 8(r15)
	bl       setOscCount__12JASBasicInstFUl
	mr       r17, r16
	li       r18, 0
	li       r19, 0

lbl_8009A8A4:
	lwz      r4, 0x10(r17)
	mr       r3, r31
	bl       "JSUConvertOffsetToPtr<Q212JASBNKParser4TOsc>__FPCvUl"
	or.      r20, r3, r3
	beq      lbl_8009A9E0
	mr       r3, r29
	mr       r4, r31
	mr       r5, r20
	bl
findOscPtr__12JASBNKParserFP12JASBasicBankPQ212JASBNKParser7THeaderPQ212JASBNKParser4TOsc
	or.      r23, r3, r3
	bne      lbl_8009A9CC
	mr       r4, r30
	li       r3, 0x18
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	lbz      r0, 0(r20)
	mr       r23, r3
	mr       r3, r31
	stw      r0, 0(r23)
	lfs      f0, 4(r20)
	stfs     f0, 4(r23)
	lwz      r4, 8(r20)
	bl       "JSUConvertOffsetToPtr<s>__FPCvUl"
	or.      r22, r3, r3
	beq      lbl_8009A950
	bl       getOscTableEndPtr__12JASBNKParserFPs
	subf     r3, r22, r3
	mr       r4, r30
	srwi     r0, r3, 0x1f
	li       r5, 0
	add      r0, r0, r3
	srawi    r0, r0, 1
	slwi     r25, r0, 1
	mr       r3, r25
	bl       __nwa__FUlP7JKRHeapi
	mr       r0, r3
	mr       r3, r22
	mr       r22, r0
	mr       r5, r25
	mr       r4, r22
	bl       bcopy__7JASCalcFPCvPvUl
	stw      r22, 8(r23)
	b        lbl_8009A958

lbl_8009A950:
	li       r0, 0
	stw      r0, 8(r23)

lbl_8009A958:
	lwz      r4, 0xc(r20)
	mr       r3, r31
	bl       "JSUConvertOffsetToPtr<s>__FPCvUl"
	or.      r22, r3, r3
	beq      lbl_8009A9B4
	bl       getOscTableEndPtr__12JASBNKParserFPs
	subf     r3, r22, r3
	mr       r4, r30
	srwi     r0, r3, 0x1f
	li       r5, 0
	add      r0, r0, r3
	srawi    r0, r0, 1
	slwi     r25, r0, 1
	mr       r3, r25
	bl       __nwa__FUlP7JKRHeapi
	mr       r0, r3
	mr       r3, r22
	mr       r22, r0
	mr       r5, r25
	mr       r4, r22
	bl       bcopy__7JASCalcFPCvPvUl
	stw      r22, 0xc(r23)
	b        lbl_8009A9BC

lbl_8009A9B4:
	li       r0, 0
	stw      r0, 0xc(r23)

lbl_8009A9BC:
	lfs      f0, 0x10(r20)
	stfs     f0, 0x10(r23)
	lfs      f0, 0x14(r20)
	stfs     f0, 0x14(r23)

lbl_8009A9CC:
	mr       r3, r15
	mr       r4, r18
	mr       r5, r23
	bl       setOsc__12JASBasicInstFiPQ213JASOscillator4Data
	addi     r18, r18, 1

lbl_8009A9E0:
	addi     r19, r19, 1
	addi     r17, r17, 4
	cmpwi    r19, 2
	blt      lbl_8009A8A4
	mr       r3, r15
	li       r4, 4
	bl       setEffectCount__12JASBasicInstFUl
	li       r18, 0
	mr       r17, r16

lbl_8009AA04:
	lwz      r4, 0x18(r17)
	mr       r3, r31
	bl       "JSUConvertOffsetToPtr<Q212JASBNKParser5TRand>__FPCvUl"
	or.      r19, r3, r3
	beq      lbl_8009AA8C
	mr       r4, r30
	li       r3, 0x10
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r20, r3, r3
	beq      lbl_8009AA60
	lis      r4, __vt__13JASInstEffect@ha
	lis      r3, __vt__11JASInstRand@ha
	addi     r0, r4, __vt__13JASInstEffect@l
	li       r4, 0
	stw      r0, 0(r20)
	addi     r0, r3, __vt__11JASInstRand@l
	lfs      f1, lbl_80516CB8@sda21(r2)
	stb      r4, 4(r20)
	lfs      f0, lbl_80516CBC@sda21(r2)
	stw      r0, 0(r20)
	stfs     f1, 8(r20)
	stfs     f0, 0xc(r20)

lbl_8009AA60:
	lbz      r4, 0(r19)
	mr       r3, r20
	bl       setTarget__13JASInstEffectFi
	lfs      f0, 4(r19)
	mr       r3, r15
	mr       r4, r18
	mr       r5, r20
	stfs     f0, 8(r20)
	lfs      f0, 8(r19)
	stfs     f0, 0xc(r20)
	bl       setEffect__12JASBasicInstFiP13JASInstEffect

lbl_8009AA8C:
	addi     r18, r18, 1
	addi     r17, r17, 4
	cmpwi    r18, 2
	blt      lbl_8009AA04
	li       r20, 0
	mr       r19, r16

lbl_8009AAA4:
	lwz      r4, 0x20(r19)
	mr       r3, r31
	bl       "JSUConvertOffsetToPtr<Q212JASBNKParser6TSense>__FPCvUl"
	or.      r17, r3, r3
	beq      lbl_8009AB3C
	mr       r4, r30
	li       r3, 0x14
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r18, r3, r3
	beq      lbl_8009AB08
	lis      r4, __vt__13JASInstEffect@ha
	lis      r3, __vt__12JASInstSense@ha
	addi     r0, r4, __vt__13JASInstEffect@l
	li       r4, 0
	stw      r0, 0(r18)
	addi     r3, r3, __vt__12JASInstSense@l
	li       r0, 0x3c
	lfs      f0, lbl_80516CB8@sda21(r2)
	stb      r4, 4(r18)
	stw      r3, 0(r18)
	stb      r4, 8(r18)
	stb      r0, 9(r18)
	stfs     f0, 0xc(r18)
	stfs     f0, 0x10(r18)

lbl_8009AB08:
	lbz      r4, 0(r17)
	mr       r3, r18
	bl       setTarget__13JASInstEffectFi
	lbz      r4, 1(r17)
	mr       r3, r18
	lbz      r5, 2(r17)
	lfs      f1, 4(r17)
	lfs      f2, 8(r17)
	bl       setParams__12JASInstSenseFiiff
	mr       r3, r15
	mr       r5, r18
	addi     r4, r20, 2
	bl       setEffect__12JASBasicInstFiP13JASInstEffect

lbl_8009AB3C:
	addi     r20, r20, 1
	addi     r19, r19, 4
	cmpwi    r20, 2
	blt      lbl_8009AAA4
	lwz      r4, 0x28(r16)
	mr       r3, r15
	bl       setKeyRegionCount__12JASBasicInstFUl
	mr       r20, r16
	li       r22, 0
	b        lbl_8009AC00

lbl_8009AB64:
	mr       r3, r15
	mr       r4, r22
	bl       getKeyRegion__12JASBasicInstFi
	lwz      r4, 0x2c(r20)
	mr       r23, r3
	mr       r3, r31
	bl       "JSUConvertOffsetToPtr<Q212JASBNKParser7TKeymap>__FPCvUl"
	mr       r18, r3
	mr       r3, r23
	lbz      r0, 0(r18)
	stw      r0, 0(r23)
	lwz      r4, 4(r18)
	bl       setVeloRegionCount__Q212JASBasicInst7TKeymapFUl
	mr       r19, r18
	li       r25, 0
	b        lbl_8009ABEC

lbl_8009ABA4:
	mr       r3, r23
	mr       r4, r25
	bl       getVeloRegion__Q212JASBasicInst7TKeymapFi
	lwz      r4, 8(r19)
	mr       r17, r3
	mr       r3, r31
	bl       "JSUConvertOffsetToPtr<Q212JASBNKParser5TVmap>__FPCvUl"
	lbz      r0, 0(r3)
	addi     r19, r19, 4
	addi     r25, r25, 1
	stw      r0, 0(r17)
	lwz      r0, 4(r3)
	clrlwi   r0, r0, 0x10
	stw      r0, 4(r17)
	lfs      f0, 8(r3)
	stfs     f0, 8(r17)
	lfs      f0, 0xc(r3)
	stfs     f0, 0xc(r17)

lbl_8009ABEC:
	lwz      r0, 4(r18)
	cmplw    r25, r0
	blt      lbl_8009ABA4
	addi     r20, r20, 4
	addi     r22, r22, 1

lbl_8009AC00:
	lwz      r0, 0x28(r16)
	cmplw    r22, r0
	blt      lbl_8009AB64
	mr       r3, r29
	mr       r4, r21
	mr       r5, r15
	bl       setInst__12JASBasicBankFiP7JASInst

lbl_8009AC1C:
	addi     r21, r21, 1
	addi     r24, r24, 4
	cmpwi    r21, 0x80
	blt      lbl_8009A848
	li       r27, 0
	mr       r28, r31

lbl_8009AC34:
	lwz      r4, 0x3b4(r28)
	mr       r3, r31
	bl       "JSUConvertOffsetToPtr<Q212JASBNKParser5TPerc>__FPCvUl"
	or.      r25, r3, r3
	beq      lbl_8009AE6C
	mr       r4, r30
	li       r3, 0x1004
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r26, r3, r3
	beq      lbl_8009AC9C
	lis      r4, __vt__7JASInst@ha
	lis      r3, __vt__10JASDrumSet@ha
	addi     r0, r4, __vt__7JASInst@l
	mr       r6, r26
	stw      r0, 0(r26)
	addi     r0, r3, __vt__10JASDrumSet@l
	lis      r4, __ct__Q210JASDrumSet5TPercFv@ha
	lis      r3, __dt__Q210JASDrumSet5TPercFv@ha
	stw      r0, 0(r26)
	addi     r5, r3, __dt__Q210JASDrumSet5TPercFv@l
	addi     r3, r6, 4
	addi     r4, r4, __ct__Q210JASDrumSet5TPercFv@l
	li       r6, 0x20
	li       r7, 0x80
	bl       __construct_array

lbl_8009AC9C:
	mr       r22, r25
	mr       r21, r25
	li       r20, 0

lbl_8009ACA8:
	lwz      r4, 0x88(r22)
	mr       r3, r31
	bl       "JSUConvertOffsetToPtr<Q212JASBNKParser5TPmap>__FPCvUl"
	or.      r24, r3, r3
	beq      lbl_8009AE48
	mr       r3, r26
	mr       r4, r20
	bl       getPerc__10JASDrumSetFi
	lfs      f0, 0(r24)
	mr       r19, r3
	stfs     f0, 0(r3)
	lfs      f0, 4(r24)
	stfs     f0, 4(r3)
	lwz      r4, 0(r25)
	addis    r0, r4, 0xafbb
	cmplwi   r0, 0x5232
	bne      lbl_8009AD28
	addi     r4, r20, 0x288
	lis      r0, 0x4330
	lbzx     r4, r25, r4
	stw      r0, 8(r1)
	extsb    r0, r4
	lfd      f2, lbl_80516CC8@sda21(r2)
	xoris    r0, r0, 0x8000
	lfs      f0, lbl_80516CC0@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 8(r19)
	lhz      r4, 0x308(r21)
	bl       setRelease__Q210JASDrumSet5TPercFUl

lbl_8009AD28:
	mr       r3, r19
	li       r4, 2
	bl       setEffectCount__Q210JASDrumSet5TPercFUl
	mr       r23, r24
	li       r18, 0
	li       r17, 0

lbl_8009AD40:
	lwz      r4, 8(r23)
	mr       r3, r31
	bl       "JSUConvertOffsetToPtr<Q212JASBNKParser5TRand>__FPCvUl"
	or.      r16, r3, r3
	beq      lbl_8009ADCC
	mr       r4, r30
	li       r3, 0x10
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r15, r3, r3
	beq      lbl_8009AD9C
	lis      r4, __vt__13JASInstEffect@ha
	lis      r3, __vt__11JASInstRand@ha
	addi     r0, r4, __vt__13JASInstEffect@l
	li       r4, 0
	stw      r0, 0(r15)
	addi     r0, r3, __vt__11JASInstRand@l
	lfs      f1, lbl_80516CB8@sda21(r2)
	stb      r4, 4(r15)
	lfs      f0, lbl_80516CBC@sda21(r2)
	stw      r0, 0(r15)
	stfs     f1, 8(r15)
	stfs     f0, 0xc(r15)

lbl_8009AD9C:
	lbz      r4, 0(r16)
	mr       r3, r15
	bl       setTarget__13JASInstEffectFi
	lfs      f0, 4(r16)
	mr       r3, r19
	mr       r4, r18
	mr       r5, r15
	stfs     f0, 8(r15)
	lfs      f0, 8(r16)
	stfs     f0, 0xc(r15)
	bl       setEffect__Q210JASDrumSet5TPercFiP13JASInstEffect
	addi     r18, r18, 1

lbl_8009ADCC:
	addi     r17, r17, 1
	addi     r23, r23, 4
	cmpwi    r17, 2
	blt      lbl_8009AD40
	lwz      r4, 0x10(r24)
	mr       r3, r19
	bl       setVeloRegionCount__Q210JASDrumSet5TPercFUl
	mr       r16, r24
	li       r17, 0
	b        lbl_8009AE3C

lbl_8009ADF4:
	mr       r3, r19
	mr       r4, r17
	bl       getVeloRegion__Q210JASDrumSet5TPercFi
	lwz      r4, 0x14(r16)
	mr       r15, r3
	mr       r3, r31
	bl       "JSUConvertOffsetToPtr<Q212JASBNKParser5TVmap>__FPCvUl"
	lbz      r0, 0(r3)
	addi     r16, r16, 4
	addi     r17, r17, 1
	stw      r0, 0(r15)
	lwz      r0, 4(r3)
	clrlwi   r0, r0, 0x10
	stw      r0, 4(r15)
	lfs      f0, 8(r3)
	stfs     f0, 8(r15)
	lfs      f0, 0xc(r3)
	stfs     f0, 0xc(r15)

lbl_8009AE3C:
	lwz      r0, 0x10(r24)
	cmplw    r17, r0
	blt      lbl_8009ADF4

lbl_8009AE48:
	addi     r20, r20, 1
	addi     r21, r21, 2
	cmpwi    r20, 0x80
	addi     r22, r22, 4
	blt      lbl_8009ACA8
	mr       r3, r29
	mr       r5, r26
	addi     r4, r27, 0xe4
	bl       setInst__12JASBasicBankFiP7JASInst

lbl_8009AE6C:
	addi     r27, r27, 1
	addi     r28, r28, 4
	cmpwi    r27, 0xc
	blt      lbl_8009AC34
	mr       r3, r30
	bl       getFreeSize__7JKRHeapFv
	lwz      r0, sUsedHeapSize__12JASBNKParser@sda21(r13)
	subf     r4, r3, r14
	mr       r3, r29
	add      r0, r0, r4
	stw      r0, sUsedHeapSize__12JASBNKParser@sda21(r13)

lbl_8009AE98:
	lmw      r14, 0x18(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x8009AEAC
 * @note Size: 0x120
 */
JASOscillator::Data* JASBNKParser::findOscPtr(JASBasicBank* bank, JASBNKParser::THeader* header, JASBNKParser::TOsc* oscPtr)
{
	u32* instOffsets = header->mInstOffsets;
	for (int i = 0; i < 128; i++) {
		TInst* instRaw = JSUConvertOffsetToPtr<TInst>(header, instOffsets[i + 1]); // first inst offset is always 0
		if (instRaw) {
			// look through both oscillators
			for (int j = 0; j < 2; j++) {
				TOsc* oscRaw = JSUConvertOffsetToPtr<TOsc>(header, instRaw->mOscOffsets[j]);
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
