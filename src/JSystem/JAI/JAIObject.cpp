#include "Dolphin/vec.h"
#include "JSystem/JAI/JAIBasic.h"
#include "JSystem/JAI/JAISound.h"
#include "JSystem/JAI/JAInter.h"
#include "JSystem/JAI/JAInter/Object.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q27JAInter6Object
    __vt__Q27JAInter6Object:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JAInter6ObjectFv
        .4byte startSound__Q27JAInter6ObjectFUlUl
        .4byte startSound__Q27JAInter10ObjectBaseFUcUlUl
        .4byte startSound__Q27JAInter10ObjectBaseFPP8JAISoundUlUl
        .4byte stopAllSound__Q27JAInter10ObjectBaseFv
        .4byte stopSound__Q27JAInter10ObjectBaseFUlUl
        .4byte enable__Q27JAInter10ObjectBaseFv
        .4byte disable__Q27JAInter6ObjectFv
        .4byte dispose__Q27JAInter10ObjectBaseFv
        .4byte getFreeSoundHandlePointer__Q27JAInter10ObjectBaseFv
        .4byte getUseSoundHandlePointer__Q27JAInter10ObjectBaseFUl
        .4byte handleStop__Q27JAInter10ObjectBaseFUcUl
        .4byte loop__Q27JAInter6ObjectFv
    .global __vt__Q27JAInter10ObjectBase
    __vt__Q27JAInter10ObjectBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JAInter10ObjectBaseFv
        .4byte startSound__Q27JAInter10ObjectBaseFUlUl
        .4byte startSound__Q27JAInter10ObjectBaseFUcUlUl
        .4byte startSound__Q27JAInter10ObjectBaseFPP8JAISoundUlUl
        .4byte stopAllSound__Q27JAInter10ObjectBaseFv
        .4byte stopSound__Q27JAInter10ObjectBaseFUlUl
        .4byte enable__Q27JAInter10ObjectBaseFv
        .4byte disable__Q27JAInter10ObjectBaseFv
        .4byte dispose__Q27JAInter10ObjectBaseFv
        .4byte getFreeSoundHandlePointer__Q27JAInter10ObjectBaseFv
        .4byte getUseSoundHandlePointer__Q27JAInter10ObjectBaseFUl
        .4byte handleStop__Q27JAInter10ObjectBaseFUcUl
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80517058
    lbl_80517058:
        .4byte 0x00000000
    .global lbl_8051705C
    lbl_8051705C:
        .float 0.5
    .global lbl_80517060
    lbl_80517060:
        .4byte 0x3FE00000
        .4byte 0x00000000
    .global lbl_80517068
    lbl_80517068:
        .4byte 0x40080000
        .4byte 0x00000000
    .global lbl_80517070
    lbl_80517070:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
JAInter::ObjectBase::ObjectBase(Vec* p1, JKRHeap* heap, unsigned char handleCount)
    : JKRDisposer()
{
	// UNUSED FUNCTION
	if (heap == nullptr) {
		heap = JKRHeap::sCurrentHeap;
	}
	m_handleCount = handleCount;
	m_sounds      = new (heap, 0) JAISound*[m_handleCount];
	for (u8 i = 0; i < m_handleCount; i++) {
		m_sounds[i] = nullptr;
	}
	_24 = p1;
	_20 = 0;
	_18 = 1;
}

/*
 * --INFO--
 * Address:	800B95FC
 * Size:	000074
 * __dt__Q27JAInter10ObjectBaseFv
 */
JAInter::ObjectBase::~ObjectBase() { dispose(); }

/*
 * --INFO--
 * Address:	800B9670
 * Size:	000164
 */
JAISound* JAInter::ObjectBase::startSound(unsigned long id, unsigned long p2)
{
	JAISound** handlePtr = nullptr;
	if (IsJAISoundIDInUse(id)) {
		handlePtr = getUseSoundHandlePointer(id);
	}
	if (handlePtr == nullptr) {
		handlePtr = getFreeSoundHandlePointer();
	}
	if (handlePtr != nullptr) {
		JAIBasic::msBasic->startSoundVecT(id, handlePtr, _24, p2, 0, 4);
		return *handlePtr;
	}
	u8 v1       = 0xFF;
	u8 handleNo = 0xFF;
	for (u8 i = 0; i < m_handleCount; i++) {
		if (m_sounds[i]->m_soundInfo->count.v2[0] <= v1) {
			v1       = m_sounds[i]->m_soundInfo->count.v2[0];
			handleNo = i;
		}
	}
	if (handleNo == 0xFF || SoundTable::getInfoPointer(id)->count.v2[0] < v1) {
		return nullptr;
	}
	handleStop(handleNo, 0);
	JAIBasic::msBasic->startSoundVecT(id, m_sounds + handleNo, _24, p2, 0, 4);
	return m_sounds[handleNo];
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	rlwinm.  r0, r4, 0, 0x14, 0x14
	stmw     r27, 0xc(r1)
	mr       r30, r4
	mr       r29, r3
	mr       r31, r5
	li       r28, 0
	bne      lbl_800B96AC
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	mr       r28, r3

lbl_800B96AC:
	cmplwi   r28, 0
	bne      lbl_800B96CC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r28, r3

lbl_800B96CC:
	cmplwi   r28, 0
	beq      lbl_800B96FC
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	mr       r4, r30
	lwz      r6, 0x24(r29)
	mr       r5, r28
	mr       r7, r31
	li       r8, 0
	li       r9, 4
	bl       "startSoundVecT<8JAISound>__8JAIBasicFUlPP8JAISoundP3VecUlUlUc"
	lwz      r3, 0(r28)
	b        lbl_800B97C0

lbl_800B96FC:
	lbz      r5, 0x19(r29)
	li       r28, 0xff
	li       r27, 0xff
	li       r6, 0
	b        lbl_800B973C

lbl_800B9710:
	lwz      r4, 0x1c(r29)
	rlwinm   r3, r6, 2, 0x16, 0x1d
	clrlwi   r0, r28, 0x18
	lwzx     r3, r4, r3
	lwz      r3, 0x44(r3)
	lbz      r3, 4(r3)
	cmplw    r3, r0
	bgt      lbl_800B9738
	mr       r28, r3
	mr       r27, r6

lbl_800B9738:
	addi     r6, r6, 1

lbl_800B973C:
	clrlwi   r0, r6, 0x18
	cmplw    r0, r5
	blt      lbl_800B9710
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 0xff
	beq      lbl_800B97BC
	mr       r3, r30
	bl       getInfoPointer__Q27JAInter10SoundTableFUl
	lbz      r3, 4(r3)
	clrlwi   r0, r28, 0x18
	cmplw    r3, r0
	blt      lbl_800B97BC
	mr       r3, r29
	mr       r4, r27
	lwz      r12, 0(r29)
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1c(r29)
	rlwinm   r28, r27, 2, 0x16, 0x1d
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	mr       r4, r30
	lwz      r6, 0x24(r29)
	mr       r7, r31
	add      r5, r0, r28
	li       r8, 0
	li       r9, 4
	bl       "startSoundVecT<8JAISound>__8JAIBasicFUlPP8JAISoundP3VecUlUlUc"
	lwz      r3, 0x1c(r29)
	lwzx     r3, r3, r28
	b        lbl_800B97C0

lbl_800B97BC:
	li       r3, 0

lbl_800B97C0:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B97D4
 * Size:	000044
 */
void JAInter::ObjectBase::handleStop(unsigned char handleNo, unsigned long p2)
{
	if (m_sounds[handleNo] != nullptr) {
		m_sounds[handleNo]->stop(p2);
	}
}

/*
 * --INFO--
 * Address:	800B9818
 * Size:	000048
 */
void JAInter::ObjectBase::startSound(unsigned char handleNo, unsigned long id, unsigned long p3)
{
	JAIBasic::msBasic->startSoundVecT(id, m_sounds + handleNo, _24, p3, 0, 4);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r9, r3
	  mr        r7, r6
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,2,22,29
	  mr        r4, r5
	  lwz       r8, 0x1C(r3)
	  lwz       r6, 0x24(r9)
	  li        r9, 0x4
	  add       r5, r8, r0
	  lwz       r3, -0x7498(r13)
	  li        r8, 0
	  bl        -0xA3FE0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B9860
 * Size:	000044
 */
void JAInter::ObjectBase::startSound(JAISound** handlePtr, unsigned long id, unsigned long p3)
{
	JAIBasic::msBasic->startSoundVecT(id, handlePtr, _24, p3, 0, 4);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r8, r3
	mr       r7, r6
	stw      r0, 0x14(r1)
	mr       r0, r4
	mr       r4, r5
	li       r9, 4
	lwz      r6, 0x24(r8)
	mr       r5, r0
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	li       r8, 0
	bl       "startSoundVecT<8JAISound>__8JAIBasicFUlPP8JAISoundP3VecUlUlUc"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B98A4
 * Size:	000060
 */
void JAInter::ObjectBase::stopSound(unsigned long id, unsigned long p2)
{
	u8 handleNo = getUseSoundHandleNo(id);
	if (handleNo != 0xFF) {
		handleStop(handleNo, p2);
	}
}

/*
 * --INFO--
 * Address:	800B9904
 * Size:	000068
 */
void JAInter::ObjectBase::stopAllSound()
{
	for (u8 i = 0; i < m_handleCount; i++) {
		handleStop(i, 0);
	}
}

/*
 * --INFO--
 * Address:	800B996C
 * Size:	000044
 */
void JAInter::ObjectBase::disable()
{
	stopAllSound();
	_18 = 0;
	_20 = 0;
}

/*
 * --INFO--
 * Address:	800B99B0
 * Size:	000040
 */
void JAInter::ObjectBase::dispose()
{
	disable();
	delete[] m_sounds;
}

/*
 * --INFO--
 * Address:	800B99F0
 * Size:	00005C
 */
JAISound** JAInter::ObjectBase::getFreeSoundHandlePointer()
{
	for (u32 i = 0; i < m_handleCount; i++) {
		if (m_sounds[i] == nullptr && (_20 & 1 << i) == 0) {
			return m_sounds + i;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
u8 JAInter::ObjectBase::getFreeSoundHandleNo()
{
	// UNUSED FUNCTION
	for (u8 i = 0; i < m_handleCount; i++) {
		if (m_sounds[i] == nullptr && (_20 & 1 << i) == 0) {
			return i;
		}
	}
	return 0xFF;
}

/*
 * --INFO--
 * Address:	800B9A4C
 * Size:	000054
 */
JAISound** JAInter::ObjectBase::getUseSoundHandlePointer(unsigned long id)
{
	for (u32 i = 0; i < m_handleCount; i++) {
		if (m_sounds[i] != nullptr && id == m_sounds[i]->m_soundID) {
			return m_sounds + i;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	800B9AA0
 * Size:	00004C
 */
u8 JAInter::ObjectBase::getUseSoundHandleNo(unsigned long id)
{
	for (u8 i = 0; i < m_handleCount; i++) {
		if (m_sounds[i] != nullptr && id == m_sounds[i]->m_soundID) {
			return i;
		}
	}
	return 0xFF;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JAInter::ObjectBase::reserveSoundHandle(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JAInter::ObjectBase::cancelSoundHandle(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B9AEC
 * Size:	0000F4
 * __ct__Q27JAInter6ObjectFP3VecP7JKRHeapUc
 */
JAInter::Object::Object(Vec* p1, JKRHeap* heap, unsigned char handleCount)
    : ObjectBase(p1, heap, handleCount)
{
	_28.x = 0.0f;
	_28.y = 0.0f;
	_28.z = 0.0f;
	_34   = 0.0f;
	_38   = 0.5f;
	_3C   = 0.0f;
}

/*
 * --INFO--
 * Address:	800B9BE0
 * Size:	000084
 * __dt__Q27JAInter6ObjectFv
 */
JAInter::Object::~Object() { }

/*
 * --INFO--
 * Address:	800B9C64
 * Size:	00021C
 */
JAISound* JAInter::Object::startSound(unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	rlwinm.  r0, r4, 0, 0x14, 0x14
	stmw     r27, 0x3c(r1)
	mr       r28, r4
	mr       r27, r3
	mr       r29, r5
	li       r30, 0
	bne      lbl_800B9CA0
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	mr       r30, r3

lbl_800B9CA0:
	cmplwi   r30, 0
	bne      lbl_800B9CC0
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r30, r3

lbl_800B9CC0:
	cmplwi   r30, 0
	beq      lbl_800B9D34
	cmplwi   r27, 0
	lwz      r4, 0x24(r27)
	bne      lbl_800B9CDC
	mr       r3, r4
	b        lbl_800B9CE0

lbl_800B9CDC:
	mr       r3, r27

lbl_800B9CE0:
	li       r0, 0
	cmplwi   r4, 0
	stw      r3, 0x1c(r1)
	stw      r4, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r0, 0x28(r1)
	bne      lbl_800B9D08
	li       r0, 1
	stb      r0, 0x2c(r1)
	b        lbl_800B9D10

lbl_800B9D08:
	li       r0, 1
	stb      r0, 0x2c(r1)

lbl_800B9D10:
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	mr       r4, r28
	mr       r5, r30
	mr       r7, r29
	addi     r6, r1, 0x1c
	li       r8, 4
	bl
"startSoundActorT<8JAISound>__8JAIBasicFUlPP8JAISoundPQ27JAInter5ActorUlUc" lwz
r3, 0(r30) b        lbl_800B9E6C

lbl_800B9D34:
	lbz      r6, 0x19(r27)
	li       r31, 0xff
	li       r30, 0xff
	li       r7, 0
	li       r5, 1
	b        lbl_800B9D8C

lbl_800B9D4C:
	clrlwi   r0, r7, 0x18
	lwz      r3, 0x20(r27)
	slw      r0, r5, r0
	and.     r0, r3, r0
	bne      lbl_800B9D88
	lwz      r4, 0x1c(r27)
	rlwinm   r3, r7, 2, 0x16, 0x1d
	clrlwi   r0, r31, 0x18
	lwzx     r3, r4, r3
	lwz      r3, 0x44(r3)
	lbz      r3, 4(r3)
	cmplw    r3, r0
	bgt      lbl_800B9D88
	mr       r31, r3
	mr       r30, r7

lbl_800B9D88:
	addi     r7, r7, 1

lbl_800B9D8C:
	clrlwi   r0, r7, 0x18
	cmplw    r0, r6
	blt      lbl_800B9D4C
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 0xff
	beq      lbl_800B9E68
	mr       r3, r28
	bl       getInfoPointer__Q27JAInter10SoundTableFUl
	lbz      r3, 4(r3)
	clrlwi   r0, r31, 0x18
	cmplw    r3, r0
	blt      lbl_800B9E68
	mr       r3, r27
	li       r4, 0
	lwz      r12, 0(r27)
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	cmplwi   r27, 0
	lwz      r4, 0x24(r27)
	bne      lbl_800B9DEC
	mr       r3, r4
	b        lbl_800B9DF0

lbl_800B9DEC:
	mr       r3, r27

lbl_800B9DF0:
	li       r0, 0
	cmplwi   r4, 0
	stw      r3, 8(r1)
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x14(r1)
	bne      lbl_800B9E18
	li       r0, 1
	stb      r0, 0x18(r1)
	b        lbl_800B9E20

lbl_800B9E18:
	li       r0, 1
	stb      r0, 0x18(r1)

lbl_800B9E20:
	lwz      r0, 0x1c(r27)
	rlwinm   r30, r30, 2, 0x16, 0x1d
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	mr       r4, r28
	mr       r7, r29
	add      r5, r0, r30
	addi     r6, r1, 8
	li       r8, 4
	bl
"startSoundActorT<8JAISound>__8JAIBasicFUlPP8JAISoundPQ27JAInter5ActorUlUc" lwz
r3, 0x1c(r27) lwzx     r3, r3, r30 cmplwi   r3, 0 beq      lbl_800B9E5C li r0, 1
	stb      r0, 0x1a(r3)

lbl_800B9E5C:
	lwz      r3, 0x1c(r27)
	lwzx     r3, r3, r30
	b        lbl_800B9E6C

lbl_800B9E68:
	li       r3, 0

lbl_800B9E6C:
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B9E80
 * Size:	000158
 */
void JAInter::Object::disable(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_800B9FA0

lbl_800B9EAC:
	lwz      r3, 0x1c(r28)
	rlwinm   r31, r29, 2, 0x16, 0x1d
	lwzx     r3, r3, r31
	cmplwi   r3, 0
	beq      lbl_800B9F9C
	lwz      r0, 0x20(r3)
	rlwinm.  r0, r0, 0, 0, 1
	bne      lbl_800B9F80
	lis      r4, 0x00008000@ha
	addi     r4, r4, 0x00008000@l
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	beq      lbl_800B9F80
	cmplwi   r30, 0
	bne      lbl_800B9EF4
	bl       getParamDummyObjectLifeTime__18JAIGlobalParameterFv
	bl       getPointer__Q27JAInter14DummyObjectMgrFUl
	mr       r30, r3

lbl_800B9EF4:
	cmplwi   r30, 0
	beq      lbl_800B9F60
	lwz      r3, 0x24(r28)
	li       r5, 0
	addi     r4, r30, 0xc
	addi     r0, r30, 8
	lfs      f0, 0(r3)
	stfs     f0, 0xc(r30)
	lfs      f0, 4(r3)
	stfs     f0, 0x10(r30)
	lfs      f0, 8(r3)
	stfs     f0, 0x14(r30)
	lwz      r3, 0x1c(r28)
	lwzx     r3, r3, r31
	stw      r3, 8(r30)
	lwz      r3, 0x1c(r28)
	lwzx     r3, r3, r31
	stb      r5, 0x1a(r3)
	lwz      r3, 0x1c(r28)
	lwzx     r3, r3, r31
	stw      r4, 0x3c(r3)
	lwz      r3, 0x1c(r28)
	lwzx     r3, r3, r31
	stw      r0, 0x40(r3)
	lwz      r3, 0x1c(r28)
	stwx     r5, r3, r31
	b        lbl_800B9F9C

lbl_800B9F60:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	b        lbl_800B9F9C

lbl_800B9F80:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_800B9F9C:
	addi     r29, r29, 1

lbl_800B9FA0:
	lbz      r0, 0x19(r28)
	clrlwi   r3, r29, 0x18
	cmplw    r3, r0
	blt      lbl_800B9EAC
	li       r0, 0
	stb      r0, 0x18(r28)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B9FD8
 * Size:	000214
 */
void JAInter::Object::loop(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_800BA1C0

lbl_800BA008:
	lwz      r3, 0x1c(r28)
	lwzx     r0, r3, r31
	cmplwi   r0, 0
	beq      lbl_800BA1B8
	clrlwi.  r0, r30, 0x18
	bne      lbl_800BA13C
	lwz      r4, 0x24(r28)
	cmplwi   r4, 0
	beq      lbl_800BA13C
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	addi     r5, r28, 0x28
	lwz      r3, 4(r3)
	lwz      r3, 8(r3)
	bl       PSMTXMultVec
	lfs      f1, 0x28(r28)
	lfs      f0, 0x2c(r28)
	fmuls    f2, f1, f1
	lfs      f3, 0x30(r28)
	fmuls    f1, f0, f0
	lfs      f0, lbl_80517058@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f1, f2, f1
	fadds    f4, f3, f1
	fcmpo    cr0, f4, f0
	ble      lbl_800BA0B4
	frsqrte  f1, f4
	lfd      f3, lbl_80517060@sda21(r2)
	lfd      f2, lbl_80517068@sda21(r2)
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f0, f1, f0
	fmul     f4, f4, f0
	frsp     f4, f4
	b        lbl_800BA138

lbl_800BA0B4:
	lfd      f0, lbl_80517070@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_800BA0CC
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)
	b        lbl_800BA138

lbl_800BA0CC:
	stfs     f4, 8(r1)
	lis      r0, 0x7f80
	lwz      r4, 8(r1)
	rlwinm   r3, r4, 0, 1, 8
	cmpw     r3, r0
	beq      lbl_800BA0F4
	bge      lbl_800BA124
	cmpwi    r3, 0
	beq      lbl_800BA10C
	b        lbl_800BA124

lbl_800BA0F4:
	clrlwi.  r0, r4, 9
	beq      lbl_800BA104
	li       r0, 1
	b        lbl_800BA128

lbl_800BA104:
	li       r0, 2
	b        lbl_800BA128

lbl_800BA10C:
	clrlwi.  r0, r4, 9
	beq      lbl_800BA11C
	li       r0, 5
	b        lbl_800BA128

lbl_800BA11C:
	li       r0, 3
	b        lbl_800BA128

lbl_800BA124:
	li       r0, 4

lbl_800BA128:
	cmpwi    r0, 1
	bne      lbl_800BA138
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)

lbl_800BA138:
	stfs     f4, 0x34(r28)

lbl_800BA13C:
	lwz      r3, 0x1c(r28)
	clrlwi.  r0, r30, 0x18
	lfs      f0, 0x28(r28)
	lwzx     r3, r3, r31
	lwz      r3, 0x34(r3)
	stfs     f0, 0(r3)
	lfs      f0, 0x2c(r28)
	stfs     f0, 4(r3)
	lfs      f0, 0x30(r28)
	stfs     f0, 8(r3)
	lfs      f0, 0x34(r28)
	stfs     f0, 0x18(r3)
	bne      lbl_800BA1B8
	lwz      r0, 0x24(r28)
	cmplwi   r0, 0
	beq      lbl_800BA1B4
	lwz      r3, 0x1c(r28)
	lwzx     r3, r3, r31
	lwz      r12, 0x10(r3)
	lwz      r12, 0xc0(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x38(r28)
	lwz      r3, 0x1c(r28)
	lwzx     r3, r3, r31
	lwz      r12, 0x10(r3)
	lwz      r12, 0xc4(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x3c(r28)

lbl_800BA1B4:
	li       r30, 1

lbl_800BA1B8:
	addi     r31, r31, 4
	addi     r29, r29, 1

lbl_800BA1C0:
	lbz      r0, 0x19(r28)
	cmplw    r29, r0
	blt      lbl_800BA008
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
