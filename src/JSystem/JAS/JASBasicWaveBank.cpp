#include "Dolphin/os.h"
#include "JSystem/JAS/JASCalc.h"
#include "JSystem/JAS/JASMutexLock.h"
#include "JSystem/JAS/JASWave.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q216JASBasicWaveBank10TWaveGroup
    __vt__Q216JASBasicWaveBank10TWaveGroup:
        .4byte 0
        .4byte 0
        .4byte onDispose__10JASWaveArcFv
        .4byte onLoadDone__Q216JASBasicWaveBank10TWaveGroupFv
        .4byte onEraseDone__Q216JASBasicWaveBank10TWaveGroupFv
    .global __vt__13JASWaveHandle
    __vt__13JASWaveHandle:
        .4byte 0
        .4byte 0
        .4byte __dt__13JASWaveHandleFv
        .4byte 0
        .4byte 0
    .global __vt__Q216JASBasicWaveBank11TWaveHandle
    __vt__Q216JASBasicWaveBank11TWaveHandle:
        .4byte 0
        .4byte 0
        .4byte __dt__Q216JASBasicWaveBank11TWaveHandleFv
        .4byte getWaveInfo__Q216JASBasicWaveBank11TWaveHandleCFv
        .4byte getWavePtr__Q216JASBasicWaveBank11TWaveHandleCFv
    .global __vt__16JASBasicWaveBank
    __vt__16JASBasicWaveBank:
        .4byte 0
        .4byte 0
        .4byte __dt__16JASBasicWaveBankFv
        .4byte getWaveHandle__16JASBasicWaveBankCFUl
        .4byte getWaveArc__16JASBasicWaveBankFi
    .global __vt__11JASWaveBank
    __vt__11JASWaveBank:
        .4byte 0
        .4byte 0
        .4byte __dt__11JASWaveBankFv
        .4byte 0
        .4byte 0
        .4byte 0
*/

/*
 * --INFO--
 * Address:	80099E60
 * Size:	000060
 */
JASBasicWaveBank::JASBasicWaveBank()
    : JASWaveBank()
    , m_handles(nullptr)
    , m_tableSize(0)
    , m_groups(nullptr)
    , m_groupCount(0)
{
	OSInitMutex(&m_mutex);
}

/*
 * --INFO--
 * Address:	80099EC0
 * Size:	000048
 * __dt__11JASWaveBankFv
 */
JASWaveBank::~JASWaveBank() { }

/*
 * --INFO--
 * Address:	80099F08
 * Size:	0000BC
 * __dt__16JASBasicWaveBankFv
 */
JASBasicWaveBank::~JASBasicWaveBank()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	or.      r28, r3, r3
	beq      lbl_80099FA0
	lis      r3, __vt__16JASBasicWaveBank@ha
	addi     r0, r3, __vt__16JASBasicWaveBank@l
	stw      r0, 0(r28)
	lwz      r3, 0x1c(r28)
	bl       __dla__FPv
	li       r30, 0
	li       r31, 0
	b        lbl_80099F68

lbl_80099F50:
	lwz      r3, 0x24(r28)
	li       r4, 1
	lwzx     r3, r3, r31
	bl       __dt__Q216JASBasicWaveBank10TWaveGroupFv
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_80099F68:
	lwz      r0, 0x28(r28)
	cmplw    r30, r0
	blt      lbl_80099F50
	lwz      r3, 0x24(r28)
	bl       __dla__FPv
	cmplwi   r28, 0
	beq      lbl_80099F90
	lis      r3, __vt__11JASWaveBank@ha
	addi     r0, r3, __vt__11JASWaveBank@l
	stw      r0, 0(r28)

lbl_80099F90:
	extsh.   r0, r29
	ble      lbl_80099FA0
	mr       r3, r28
	bl       __dl__FPv

lbl_80099FA0:
	lwz      r0, 0x24(r1)
	mr       r3, r28
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
 * Address:	80099FC4
 * Size:	000024
 */
JASBasicWaveBank::TWaveGroup* JASBasicWaveBank::getWaveGroup(int groupIndex)
{
	if (groupIndex >= m_groupCount) {
		return nullptr;
	}
	return m_groups[groupIndex];
}

/*
 * --INFO--
 * Address:	80099FE8
 * Size:	0000E8
 */
void JASBasicWaveBank::setGroupCount(unsigned long)
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
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8009A030

lbl_8009A018:
	lwz      r3, 0x24(r28)
	li       r4, 1
	lwzx     r3, r3, r31
	bl       __dt__Q216JASBasicWaveBank10TWaveGroupFv
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_8009A030:
	lwz      r0, 0x28(r28)
	cmplw    r30, r0
	blt      lbl_8009A018
	lwz      r3, 0x24(r28)
	bl       __dla__FPv
	stw      r29, 0x28(r28)
	bl       getCurrentHeap__11JASWaveBankFv
	mr       r4, r3
	slwi     r3, r29, 2
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x24(r28)
	li       r30, 0
	li       r31, 0
	b        lbl_8009A0A4

lbl_8009A06C:
	bl       getCurrentHeap__11JASWaveBankFv
	mr       r4, r3
	li       r3, 0x68
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_8009A094
	mr       r4, r28
	bl       __ct__Q216JASBasicWaveBank10TWaveGroupFP16JASBasicWaveBank
	mr       r0, r3

lbl_8009A094:
	lwz      r3, 0x24(r28)
	addi     r30, r30, 1
	stwx     r0, r3, r31
	addi     r31, r31, 4

lbl_8009A0A4:
	lwz      r0, 0x28(r28)
	cmplw    r30, r0
	blt      lbl_8009A06C
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
 * Address:	8009A0D0
 * Size:	000064
 */
void JASBasicWaveBank::setWaveTableSize(unsigned long tableSize)
{
	delete[] m_handles;
	m_handles = new (JASWaveBank::getCurrentHeap(), 0) TWaveHandle*[tableSize];
	JASCalc::bzero(m_handles, tableSize * sizeof(TWaveHandle*));
	m_tableSize = tableSize;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x1c(r3)
	bl       __dla__FPv
	bl       getCurrentHeap__11JASWaveBankFv
	mr       r4, r3
	slwi     r3, r31, 2
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x1c(r30)
	slwi     r4, r31, 2
	lwz      r3, 0x1c(r30)
	bl       bzero__7JASCalcFPvUl
	stw      r31, 0x20(r30)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JASBasicWaveBank::incWaveTable(const JASBasicWaveBank::TWaveGroup*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
JASMutexLock::~JASMutexLock()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void JASBasicWaveBank::decWaveTable(const JASBasicWaveBank::TWaveGroup*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009A134
 * Size:	000030
 */
JASWaveHandle* JASBasicWaveBank::getWaveHandle(unsigned long handleIndex) const
{
	if (handleIndex >= m_tableSize) {
		return nullptr;
	}
	if (m_handles[handleIndex] == nullptr) {
		return nullptr;
	}
	return m_handles[handleIndex];
}

/*
 * --INFO--
 * Address:	8009A164
 * Size:	000058
 * __ct__Q216JASBasicWaveBank10TWaveGroupFP16JASBasicWaveBank
 */
JASBasicWaveBank::TWaveGroup::TWaveGroup(JASBasicWaveBank* bank)
    : JASWaveArc()
    , m_bank(bank)
    , m_info(nullptr)
    , m_infoCount(0)
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 * __dt__10JASWaveArcFv
 */
// JASWaveArc::~JASWaveArc()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8009A1BC
 * Size:	0000B4
 * __dt__Q216JASBasicWaveBank10TWaveGroupFv
 */
JASBasicWaveBank::TWaveGroup::~TWaveGroup(void) { delete[] m_info; }

/*
 * --INFO--
 * Address:	8009A270
 * Size:	000060
 * __dt__Q216JASBasicWaveBank9TWaveInfoFv
 */
// JASBasicWaveBank::TWaveInfo::~TWaveInfo(void) { }

/*
 * --INFO--
 * Address:	8009A2D0
 * Size:	0001BC
 */
void JASBasicWaveBank::TWaveGroup::setWaveCount(unsigned long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r23, 0xc(r1)
	mr       r30, r3
	lis      r3, __dt__Q216JASBasicWaveBank9TWaveInfoFv@ha
	mr       r31, r4
	addi     r0, r3, __dt__Q216JASBasicWaveBank9TWaveInfoFv@l
	mr       r4, r0
	lwz      r3, 0x60(r30)
	bl       __destroy_new_array
	stw      r31, 0x64(r30)
	bl       getCurrentHeap__11JASWaveBankFv
	mulli    r6, r31, 0x3c
	mr       r4, r3
	li       r5, 0
	addi     r3, r6, 0x10
	bl       __nwa__FUlP7JKRHeapi
	lis      r4, __ct__Q216JASBasicWaveBank9TWaveInfoFv@ha
	lis      r5, __dt__Q216JASBasicWaveBank9TWaveInfoFv@ha
	addi     r4, r4, __ct__Q216JASBasicWaveBank9TWaveInfoFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q216JASBasicWaveBank9TWaveInfoFv@l
	li       r6, 0x3c
	bl       __construct_new_array
	cmplwi   r31, 0
	stw      r3, 0x60(r30)
	li       r5, 0
	ble      lbl_8009A478
	cmplwi   r31, 8
	addi     r7, r31, -8
	ble      lbl_8009A43C
	addi     r6, r7, 7
	addi     r3, r30, 4
	srwi     r6, r6, 3
	addi     r0, r30, 0x48
	li       r4, 0
	mtctr    r6
	cmplwi   r7, 0
	ble      lbl_8009A43C

lbl_8009A370:
	lwz      r9, 0x60(r30)
	addi     r8, r4, 0x2c
	addi     r7, r4, 0x28
	addi     r6, r4, 0x68
	stwx     r3, r9, r8
	addi     r24, r4, 0x64
	addi     r25, r4, 0xa4
	addi     r26, r4, 0xa0
	lwz      r8, 0x60(r30)
	addi     r27, r4, 0xe0
	addi     r28, r4, 0xdc
	addi     r29, r4, 0x11c
	stwx     r0, r8, r7
	addi     r12, r4, 0x118
	addi     r11, r4, 0x158
	addi     r10, r4, 0x154
	lwz      r23, 0x60(r30)
	addi     r9, r4, 0x194
	addi     r8, r4, 0x190
	addi     r7, r4, 0x1d0
	stwx     r3, r23, r6
	addi     r6, r4, 0x1cc
	addi     r4, r4, 0x1e0
	addi     r5, r5, 8
	lwz      r23, 0x60(r30)
	stwx     r0, r23, r24
	lwz      r24, 0x60(r30)
	stwx     r3, r24, r25
	lwz      r25, 0x60(r30)
	stwx     r0, r25, r26
	lwz      r26, 0x60(r30)
	stwx     r3, r26, r27
	lwz      r27, 0x60(r30)
	stwx     r0, r27, r28
	lwz      r28, 0x60(r30)
	stwx     r3, r28, r29
	lwz      r29, 0x60(r30)
	stwx     r0, r29, r12
	lwz      r12, 0x60(r30)
	stwx     r3, r12, r11
	lwz      r11, 0x60(r30)
	stwx     r0, r11, r10
	lwz      r10, 0x60(r30)
	stwx     r3, r10, r9
	lwz      r9, 0x60(r30)
	stwx     r0, r9, r8
	lwz      r8, 0x60(r30)
	stwx     r3, r8, r7
	lwz      r7, 0x60(r30)
	stwx     r0, r7, r6
	bdnz     lbl_8009A370

lbl_8009A43C:
	subf     r0, r5, r31
	addi     r6, r30, 4
	mulli    r7, r5, 0x3c
	addi     r4, r30, 0x48
	mtctr    r0
	cmplw    r5, r31
	bge      lbl_8009A478

lbl_8009A458:
	lwz      r5, 0x60(r30)
	addi     r3, r7, 0x2c
	addi     r0, r7, 0x28
	addi     r7, r7, 0x3c
	stwx     r6, r5, r3
	lwz      r3, 0x60(r30)
	stwx     r4, r3, r0
	bdnz     lbl_8009A458

lbl_8009A478:
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009A48C
 * Size:	000030
 * __ct__Q216JASBasicWaveBank9TWaveInfoFv
 */
JASBasicWaveBank::TWaveInfo::TWaveInfo(void)
    : m_handle()
    , _34(0)
    , _38(0)
{
}

/*
 * --INFO--
 * Address:	8009A4BC
 * Size:	00005C
 * __dt__Q216JASBasicWaveBank11TWaveHandleFv
 */
// JASBasicWaveBank::TWaveHandle::~TWaveHandle() { }

/*
 * --INFO--
 * Address:	8009A518
 * Size:	000048
 * __dt__13JASWaveHandleFv
 */
// JASWaveHandle::~JASWaveHandle() { }

/*
 * --INFO--
 * Address:	8009A560
 * Size:	000090
 */
void JASBasicWaveBank::TWaveGroup::setWaveInfo(int, unsigned long, JASWaveInfo const&)
{
	/*
	.loc_0x0:
	  mulli     r11, r4, 0x3C
	  lwz       r7, 0x60(r3)
	  lbz       r9, 0x0(r6)
	  addi      r4, r3, 0x48
	  lbz       r0, 0x1(r6)
	  add       r7, r7, r11
	  stw       r5, 0x30(r7)
	  addi      r10, r11, 0x4
	  lfs       f0, 0x4(r6)
	  lwz       r5, 0x60(r3)
	  lwz       r8, 0x8(r6)
	  add       r10, r5, r10
	  lwz       r7, 0xC(r6)
	  stb       r9, 0x0(r10)
	  lwz       r5, 0x10(r6)
	  stb       r0, 0x1(r10)
	  lwz       r0, 0x14(r6)
	  stfs      f0, 0x4(r10)
	  lwz       r9, 0x18(r6)
	  stw       r8, 0x8(r10)
	  lwz       r8, 0x1C(r6)
	  stw       r7, 0xC(r10)
	  lha       r7, 0x20(r6)
	  stw       r5, 0x10(r10)
	  lha       r5, 0x22(r6)
	  stw       r0, 0x14(r10)
	  lwz       r0, 0x24(r6)
	  stw       r9, 0x18(r10)
	  stw       r8, 0x1C(r10)
	  sth       r7, 0x20(r10)
	  sth       r5, 0x22(r10)
	  stw       r0, 0x24(r10)
	  lwz       r0, 0x60(r3)
	  add       r3, r0, r11
	  stw       r4, 0x28(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009A5F0
 * Size:	0000A0
 */
void JASBasicWaveBank::TWaveGroup::onLoadDone(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	lwz      r29, 0x5c(r3)
	addi     r3, r29, 4
	stw      r3, 8(r1)
	bl       OSLockMutex
	li       r30, 0
	mr       r28, r30
	mr       r31, r30
	b        lbl_8009A668

lbl_8009A624:
	mr       r3, r27
	mr       r4, r30
	bl       getWaveID__Q216JASBasicWaveBank10TWaveGroupCFi
	lwz      r0, 0x60(r27)
	slwi     r4, r3, 2
	lwz      r3, 0x1c(r29)
	add      r5, r0, r28
	stw      r31, 0x38(r5)
	lwzx     r0, r3, r4
	stw      r0, 0x34(r5)
	lwzx     r6, r3, r4
	cmplwi   r6, 0
	beq      lbl_8009A65C
	stw      r5, 0x38(r6)

lbl_8009A65C:
	stwx     r5, r3, r4
	addi     r28, r28, 0x3c
	addi     r30, r30, 1

lbl_8009A668:
	lwz      r0, 0x64(r27)
	cmplw    r30, r0
	blt      lbl_8009A624
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009A690
 * Size:	0000E8
 */
void JASBasicWaveBank::TWaveGroup::onEraseDone(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r30, 0x5c(r3)
	addi     r3, r30, 4
	stw      r3, 8(r1)
	bl       OSLockMutex
	li       r31, 0
	mr       r29, r31
	b        lbl_8009A744

lbl_8009A6CC:
	mr       r3, r28
	mr       r4, r31
	bl       getWaveID__Q216JASBasicWaveBank10TWaveGroupCFi
	lwz      r4, 0x1c(r30)
	slwi     r3, r3, 2
	lwz      r0, 0x60(r28)
	lwzx     r5, r4, r3
	add      r0, r0, r29
	b        lbl_8009A734

lbl_8009A6F0:
	cmplw    r5, r0
	bne      lbl_8009A730
	lwz      r6, 0x38(r5)
	cmplwi   r6, 0
	bne      lbl_8009A710
	lwz      r0, 0x34(r5)
	stwx     r0, r4, r3
	b        lbl_8009A718

lbl_8009A710:
	lwz      r0, 0x34(r5)
	stw      r0, 0x34(r6)

lbl_8009A718:
	lwz      r3, 0x34(r5)
	cmplwi   r3, 0
	beq      lbl_8009A73C
	lwz      r0, 0x38(r5)
	stw      r0, 0x38(r3)
	b        lbl_8009A73C

lbl_8009A730:
	lwz      r5, 0x34(r5)

lbl_8009A734:
	cmplwi   r5, 0
	bne      lbl_8009A6F0

lbl_8009A73C:
	addi     r29, r29, 0x3c
	addi     r31, r31, 1

lbl_8009A744:
	lwz      r0, 0x64(r28)
	cmplw    r31, r0
	blt      lbl_8009A6CC
	lwz      r3, 8(r1)
	bl       OSUnlockMutex
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
 * Address:	8009A778
 * Size:	000014
 */
u32 JASBasicWaveBank::TWaveGroup::getWaveID(int infoIndex) const { return m_info[infoIndex].m_handle._30; }

/*
 * --INFO--
 * Address:	8009A78C
 * Size:	000008
 */
// const JASWaveInfo* JASBasicWaveBank::TWaveHandle::getWaveInfo() const { return &m_info; }

/*
 * --INFO--
 * Address:	8009A794
 * Size:	000024
 */
void* JASBasicWaveBank::TWaveHandle::getWavePtr() const
{
	if (m_heap->_38 == nullptr) {
		return nullptr;
	}
	return m_heap->_38 + m_info._08;
}

/*
 * --INFO--
 * Address:	8009A7B8
 * Size:	000024
 */
JASWaveArc* JASBasicWaveBank::getWaveArc(int groupIndex)
{
	if (groupIndex >= m_groupCount) {
		return nullptr;
	}
	return m_groups[groupIndex];
}
