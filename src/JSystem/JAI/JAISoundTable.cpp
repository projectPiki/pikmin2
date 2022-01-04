#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JAI/JAIBasic.h"
#include "JSystem/JAI/JAInter.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global mVersion__Q27JAInter10SoundTable
    mVersion__Q27JAInter10SoundTable:
        .skip 0x1
    .global mCategotyMax__Q27JAInter10SoundTable
    mCategotyMax__Q27JAInter10SoundTable:
        .skip 0x3
    .global mSoundMax__Q27JAInter10SoundTable
    mSoundMax__Q27JAInter10SoundTable:
        .skip 0x4
    .global mDatasize__Q27JAInter10SoundTable
    mDatasize__Q27JAInter10SoundTable:
        .skip 0x4
    .global mPointerCategory__Q27JAInter10SoundTable
    mPointerCategory__Q27JAInter10SoundTable:
        .skip 0x4
    .global mAddress__Q27JAInter10SoundTable
    mAddress__Q27JAInter10SoundTable:
        .skip 0x8
*/

/*
 * --INFO--
 * Address:	800B744C
 * Size:	0000CC
 */
void JAInter::SoundTable::init(u8* data, u32 dataSize)
{
	mVersion         = data[3];
	mDataSize        = dataSize;
	mAddress         = data;
	mSoundMax        = new (JAIBasic::msCurrentHeap, 4) u16[0x12];
	mPointerCategory = new (JAIBasic::msCurrentHeap, 4) SoundInfo*[0x12];
	for (u8 i = 0; i < 0x12; i++) {
		mSoundMax[i]        = *(u16*)(mAddress + (i * 4) + 6);
		mPointerCategory[i] = *(
		    SoundInfo**)(mAddress + *(u16*)(mAddress + (i * 4) + 8) * 0x10
		                 + 0x50);
		if (i < 0x10 && mSoundMax[i] != 0) {
			mCategotyMax = i + 1;
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 4
	stw      r0, 0x14(r1)
	stw      r4, mDatasize__Q27JAInter10SoundTable@sda21(r13)
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	stw      r3, mAddress__Q27JAInter10SoundTable@sda21(r13)
	lbz      r0, 3(r3)
	li       r3, 0x24
	stb      r0, mVersion__Q27JAInter10SoundTable@sda21(r13)
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, mSoundMax__Q27JAInter10SoundTable@sda21(r13)
	li       r3, 0x48
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	li       r5, 4
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, mPointerCategory__Q27JAInter10SoundTable@sda21(r13)
	li       r9, 0
	b        lbl_800B74FC

lbl_800B7498:
	lwz      r0, mAddress__Q27JAInter10SoundTable@sda21(r13)
	rlwinm   r5, r9, 2, 0x16, 0x1d
	clrlwi   r8, r9, 0x18
	lwz      r3, mSoundMax__Q27JAInter10SoundTable@sda21(r13)
	add      r4, r5, r0
	rlwinm   r7, r9, 1, 0x17, 0x1e
	lhz      r0, 6(r4)
	cmplwi   r8, 0x10
	sthx     r0, r3, r7
	lwz      r6, mAddress__Q27JAInter10SoundTable@sda21(r13)
	lwz      r3, mPointerCategory__Q27JAInter10SoundTable@sda21(r13)
	add      r4, r5, r6
	lhz      r0, 8(r4)
	slwi     r0, r0, 4
	add      r4, r6, r0
	addi     r0, r4, 0x50
	stwx     r0, r3, r5
	bge      lbl_800B74F8
	lwz      r3, mSoundMax__Q27JAInter10SoundTable@sda21(r13)
	lhzx     r0, r3, r7
	cmplwi   r0, 0
	beq      lbl_800B74F8
	addi     r0, r8, 1
	stb      r0, mCategotyMax__Q27JAInter10SoundTable@sda21(r13)

lbl_800B74F8:
	addi     r9, r9, 1

lbl_800B74FC:
	clrlwi   r0, r9, 0x18
	cmplwi   r0, 0x12
	blt      lbl_800B7498
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B7518
 * Size:	0000C4
 */
JAInter::SoundInfo* JAInter::SoundTable::getInfoPointer(u32 soundID)
{
	i32 maskedID   = soundID & 0xC0000000;
	SoundInfo* info = nullptr;
	i32 category   = 0;
	if (maskedID == 0xC0000000) {
		category = 0x11;
	} else {
		if (maskedID < 0xC0000000) {
			if (maskedID < 0x80000001) {
				category = 0x10;
			}
		} else {
			if (maskedID == 0) {
				category = (soundID >> 0xC) & 0xFF;
				JAIGlobalParameter::getParamSeCategoryMax();
			}
		}
	}
	if (mAddress != nullptr && (soundID & 0x3FF) < (uint)mSoundMax[category]) {
		info = mPointerCategory[category] + (soundID & 0x3FF);
	}
	return info;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	rlwinm   r4, r3, 0, 0, 1
	stw      r0, 0x24(r1)
	lis      r0, 0xc000
	cmpw     r4, r0
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	beq      lbl_800B7580
	bge      lbl_800B7560
	lis      r3, 0x80000001@ha
	addi     r0, r3, 0x80000001@l
	cmpw     r4, r0
	bge      lbl_800B7584
	b        lbl_800B7578

lbl_800B7560:
	cmpwi    r4, 0
	beq      lbl_800B756C
	b        lbl_800B7584

lbl_800B756C:
	rlwinm   r30, r29, 0x14, 0x18, 0x1f
	bl       getParamSeCategoryMax__18JAIGlobalParameterFv
	b        lbl_800B7584

lbl_800B7578:
	li       r30, 0x10
	b        lbl_800B7584

lbl_800B7580:
	li       r30, 0x11

lbl_800B7584:
	lwz      r0, mAddress__Q27JAInter10SoundTable@sda21(r13)
	clrlwi   r5, r29, 0x16
	cmplwi   r0, 0
	beq      lbl_800B75BC
	lwz      r3, mSoundMax__Q27JAInter10SoundTable@sda21(r13)
	slwi     r0, r30, 1
	lhzx     r0, r3, r0
	cmplw    r5, r0
	bge      lbl_800B75BC
	lwz      r4, mPointerCategory__Q27JAInter10SoundTable@sda21(r13)
	slwi     r3, r30, 2
	slwi     r0, r5, 4
	lwzx     r3, r4, r3
	add      r31, r3, r0

lbl_800B75BC:
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	800B75DC
 * Size:	000058
 */
void JAInter::SoundTable::getInfoFormat(unsigned long)
{
	/*
	rlwinm   r5, r3, 0, 0, 1
	lis      r0, 0xc000
	cmpw     r5, r0
	li       r3, 0
	beq      lbl_800B7628
	bge      lbl_800B7608
	lis      r4, 0x80000001@ha
	addi     r0, r4, 0x80000001@l
	cmpw     r5, r0
	bgelr
	b        lbl_800B761C

lbl_800B7608:
	cmpwi    r5, 0
	bnelr
	lwz      r3, mAddress__Q27JAInter10SoundTable@sda21(r13)
	lbz      r3, 0(r3)
	blr

lbl_800B761C:
	lwz      r3, mAddress__Q27JAInter10SoundTable@sda21(r13)
	lbz      r3, 1(r3)
	blr

lbl_800B7628:
	lwz      r3, mAddress__Q27JAInter10SoundTable@sda21(r13)
	lbz      r3, 2(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void JAInter::SoundTable::setInfoTrack(unsigned long, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B7634
 * Size:	000008
 */
u8 JAInter::SoundTable::getCategotyMax(void)
{
	/*
	lbz      r3, mCategotyMax__Q27JAInter10SoundTable@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B763C
 * Size:	000010
 */
void JAInter::SoundTable::getSoundMax(unsigned char)
{
	/*
	lwz      r4, mSoundMax__Q27JAInter10SoundTable@sda21(r13)
	rlwinm   r0, r3, 1, 0x17, 0x1e
	lhzx     r3, r4, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::SoundTable::getSoundTablePointer(void)
{
	// UNUSED FUNCTION
}
