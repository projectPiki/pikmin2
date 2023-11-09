#include "JSystem/JAudio/JAS/JASBNKParser.h"
#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASDrumSet.h"
#include "JSystem/JAudio/JAS/JASInst.h"
#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JSupport/JSU.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__13JASInstEffect
    __vt__13JASInstEffect:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global sUsedHeapSize__12JASBNKParser
    sUsedHeapSize__12JASBNKParser:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516CB8
    lbl_80516CB8:
        .float 1.0
    .global lbl_80516CBC
    lbl_80516CBC:
        .4byte 0x00000000
    .global lbl_80516CC0
    lbl_80516CC0:
        .4byte 0x42FE0000
        .4byte 0x00000000
    .global lbl_80516CC8
    lbl_80516CC8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516CD0
    lbl_80516CD0:
        .float 0.5
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8009A7DC
 * Size:	0006D0
 */
JASBasicBank* JASBNKParser::createBasicBank(void* stream)
{
	JKRHeap* heap      = JASBank::getCurrentHeap();
	const u32 freeSize = heap->getFreeSize();
	JASBasicBank* bank = new (heap, 0) JASBasicBank();
	if (bank == nullptr) {
		return nullptr;
	}
	bank->setInstCount(0x100);
	THeader* header = static_cast<THeader*>(stream);

	/// Populate insts:
	for (int i = 0; i < 0x80; i++) {
		TInst* instRaw = JSUConvertOffsetToPtr<TInst>(header, header->mInstOffsets[i]); // problem with mInstOffsets again
		if (instRaw != nullptr) {
			JASBasicInst* inst = new (heap, 0) JASBasicInst();
			inst->_04          = instRaw->_08;
			inst->_08          = instRaw->_0C;

			/// Populate inst oscillators:
			inst->setOscCount(2);
			for (int oscIndex = 0, j = 0; j < 2; j++) {
				TOsc* oscRaw = JSUConvertOffsetToPtr<TOsc>(header, instRaw->mOscOffsets[j]);
				if (oscRaw != nullptr) {
					JASOscillator::Data* oscData = findOscPtr(bank, header, oscRaw);
					if (oscData == nullptr) {
						oscData         = new (heap, 0) JASOscillator::Data();
						oscData->_00    = oscRaw->_00;
						oscData->_04    = oscRaw->_04;
						short* oscTable = JSUConvertOffsetToPtr<short>(header, oscRaw->_08);
						if (oscTable != nullptr) {
							u32 tableLength  = getOscTableEndPtr(oscTable) - oscTable;
							short* tableCopy = new (heap, 0) short[tableLength];
							JASCalc::bcopy(oscTable, tableCopy, tableLength * sizeof(short));
							oscData->_08 = tableCopy;
						} else {
							oscData->_08 = nullptr;
						}
						oscTable = JSUConvertOffsetToPtr<short>(header, oscRaw->_0C);
						if (oscTable != nullptr) {
							u32 tableLength  = getOscTableEndPtr(oscTable) - oscTable;
							short* tableCopy = new (heap, 0) short[tableLength];
							JASCalc::bcopy(oscTable, tableCopy, tableLength * sizeof(short));
							oscData->_0C = tableCopy;
						} else {
							oscData->_0C = nullptr;
						}
						oscData->_10 = oscRaw->_10;
						oscData->_14 = oscRaw->_14;
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
					JASInstRand* rand = new (heap, 0) JASInstRand();
					rand->setTarget(randRaw->_00);
					rand->_08 = randRaw->_04;
					rand->_0C = randRaw->_08;
					inst->setEffect(j, rand);
				}
			}
			for (int j = 0; j < 2; j++) {
				TSense* senseRaw = JSUConvertOffsetToPtr<TSense>(header, instRaw->mSenseOffsets[j]);
				if (senseRaw != nullptr) {
					JASInstSense* sense = new (heap, 0) JASInstSense();
					sense->setTarget(senseRaw->_00);
					sense->setParams(senseRaw->_01, senseRaw->_02, senseRaw->_04, senseRaw->_08);
					inst->setEffect(j + 2, sense);
				}
			}

			/// Populate inst key regions:
			inst->setKeyRegionCount(instRaw->mKeyRegionCount);
			for (int j = 0; j < instRaw->mKeyRegionCount; j++) {
				JASBasicInst::TKeymap* instKeymap = inst->getKeyRegion(j);
				TKeymap* keymapRaw                = JSUConvertOffsetToPtr<TKeymap>(header, instRaw->mKeymapOffsets[j]);
				instKeymap->_00                   = keymapRaw->_00;
				instKeymap->setVeloRegionCount(keymapRaw->_04);
				for (int k = 0; k < keymapRaw->_04; k++) {
					JASBasicInst::TVeloRegion* instVeloRegion = instKeymap->getVeloRegion(k);
					TVmap* vmapRaw                            = JSUConvertOffsetToPtr<TVmap>(header, keymapRaw->mVmapOffsets[k]);
					instVeloRegion->_00                       = vmapRaw->_00;
					instVeloRegion->_04                       = vmapRaw->_04 & 0xFFFF;
					instVeloRegion->_08                       = vmapRaw->_08;
					instVeloRegion->_0C                       = vmapRaw->_0C;
				}
			}
			bank->setInst(i, inst);
		}
	}

	for (int i = 0; i < 12; i++) {
		TPerc* percRaw = JSUConvertOffsetToPtr<TPerc>(header, header->mPercOffsets[i]);
		if (percRaw != nullptr) {
			JASDrumSet* drumSet = new (heap, 0) JASDrumSet();
			for (int j = 0; j < 0x80; j++) {
				TPmap* pmapRaw = JSUConvertOffsetToPtr<TPmap>(header, percRaw->mPmapOffsets[j]);
				if (pmapRaw != nullptr) {
					JASDrumSet::TPerc* drumSetPerc = drumSet->getPerc(j);
					drumSetPerc->_00               = pmapRaw->_00;
					drumSetPerc->_04               = pmapRaw->_04;
					if (percRaw->mMagic == 'PER2') {
						drumSetPerc->_08 = percRaw->_288[j] / 127.0f;
						drumSetPerc->setRelease(percRaw->_308[j]);
					}
					drumSetPerc->setEffectCount(2);
					for (int effectIndex = 0, k = 0; k < 2; k++) {
						TRand* randRaw = JSUConvertOffsetToPtr<TRand>(header, pmapRaw->mRandOffsets[k]);
						if (randRaw != nullptr) {
							JASInstRand* rand = new (heap, 0) JASInstRand();
							rand->setTarget(randRaw->_00);
							rand->_08 = randRaw->_04;
							rand->_0C = randRaw->_08;
							drumSetPerc->setEffect(effectIndex, rand);
							effectIndex++;
						}
					}
					drumSetPerc->setVeloRegionCount(pmapRaw->mVeloRegionCount);
					for (int k = 0; k < pmapRaw->mVeloRegionCount; k++) {
						JASBasicInst::TVeloRegion* instVeloRegion = drumSetPerc->getVeloRegion(k);
						TVmap* vmapRaw                            = JSUConvertOffsetToPtr<TVmap>(header, pmapRaw->mVeloRegionOffsets[k]);
						instVeloRegion->_00                       = vmapRaw->_00;
						instVeloRegion->_04                       = vmapRaw->_04 & 0xFFFF;
						instVeloRegion->_08                       = vmapRaw->_08;
						instVeloRegion->_0C                       = vmapRaw->_0C;
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

/*
 * --INFO--
 * Address:	8009AEAC
 * Size:	000120
 */
JASOscillator::Data* JASBNKParser::findOscPtr(JASBasicBank* bank, JASBNKParser::THeader* header, JASBNKParser::TOsc* oscPtr)
{
	for (int i = 0; i < 128; i++) {
		TInst* instRaw = JSUConvertOffsetToPtr<TInst>(header, header->mInstOffsets[i]); // mismatch here
		if (instRaw != nullptr) {
			for (int j = 0; j < 2; j++) {
				TOsc* oscRaw = JSUConvertOffsetToPtr<TOsc>(header, instRaw->mOscOffsets[j]);
				if (oscRaw == oscPtr) {
					JASInst* inst = bank->getInst(i);
					if (inst != nullptr) {
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
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r25, 0x34(r1)
	  mr        r26, r4
	  mr        r25, r3
	  mr        r27, r5
	  li        r29, 0
	  addi      r30, r26, 0x20

	.loc_0x24:
	  lwz       r4, 0x4(r30)
	  mr        r3, r26
	  bl        0x1C8
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  li        r28, 0
	  mr        r31, r3

	.loc_0x40:
	  lwz       r4, 0x10(r31)
	  mr        r3, r26
	  bl        0x194
	  cmplw     r3, r27
	  bne-      .loc_0xE8
	  mr        r3, r25
	  mr        r4, r29
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xE8
	  lfs       f2, -0x76A8(r2)
	  li        r0, 0
	  lfs       f0, -0x76A4(r2)
	  addi      r6, r1, 0x8
	  lfs       f1, -0x7690(r2)
	  li        r4, 0x3C
	  stb       r0, 0x8(r1)
	  li        r5, 0x7F
	  stw       r0, 0xC(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  stb       r0, 0x2C(r1)
	  sth       r0, 0x2E(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplw     r28, r0
	  bge-      .loc_0xE8
	  lwz       r3, 0x10(r1)
	  rlwinm    r0,r28,2,0,29
	  lwzx      r3, r3, r0
	  b         .loc_0x10C

	.loc_0xE8:
	  addi      r28, r28, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r28, 0x2
	  blt+      .loc_0x40

	.loc_0xF8:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x80
	  blt+      .loc_0x24
	  li        r3, 0

	.loc_0x10C:
	  lmw       r25, 0x34(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009AFCC
 * Size:	000014
 */
short* JASBNKParser::getOscTableEndPtr(short* p1)
{
	short v1;
	do {
		v1 = *p1;
		p1 += 3;
	} while (v1 <= 0xa);
	return p1;
}
