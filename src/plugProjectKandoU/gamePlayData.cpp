#include "Game/AIConstants.h"
#include "Game/BirthMgr.h"
#include "Game/DeathMgr.h"
#include "Game/Piki.h"
#include "Game/gameGeneratorCache.h"
#include "Game/gamePlayData.h"
#include "Game/gameStages.h"
#include "JSystem/JUT/JUTException.h"
#include "kh/MailSaveData.h"
#include "System.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80480E40
    lbl_80480E40:
        .4byte 0x506C6179
        .4byte 0x44617461
        .4byte 0x00000000
    .global lbl_80480E4C
    lbl_80480E4C:
        .4byte 0x67616D65
        .4byte 0x506C6179
        .4byte 0x44617461
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_80480E60
    lbl_80480E60:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x706C6179
        .4byte 0x44617461
        .4byte 0x00000000
        .4byte 0x67656E65
        .4byte 0x7261746F
        .4byte 0x72436163
        .4byte 0x68650000
        .4byte 0x6F74616B
        .4byte 0x61726120
        .4byte 0x6F722069
        .4byte 0x74656D20
        .4byte 0x21000000
        .4byte 0x6E6F2074
        .4byte 0x656B696E
        .4byte 0x616D6520
        .4byte 0x666F7220
        .4byte 0x25640A00
    .global lbl_80480EB0
    lbl_80480EB0:
        .4byte 0x6E6F2063
        .4byte 0x61766520
        .4byte 0x696E666F
        .4byte 0x203A2063
        .4byte 0x6F757273
        .4byte 0x65282564
        .4byte 0x293A5B25
        .4byte 0x735D0A00
    .global lbl_80480ED0
    lbl_80480ED0:
        .4byte 0x636F7572
        .4byte 0x73652069
        .4byte 0x6E646578
        .4byte 0x20657272
        .4byte 0x6F723A25
        .4byte 0x64202867
        .4byte 0x65744F74
        .4byte 0x616B6172
        .4byte 0x614E756D
        .4byte 0x5F2A290A
        .4byte 0x00000000
    .global lbl_80480EFC
    lbl_80480EFC:
        .4byte 0x819693B4
        .4byte 0x8C418FEE
        .4byte 0x95F18196
        .4byte 0x00000000
        .4byte 0x23206361
        .4byte 0x76659094
        .4byte 0x0D0A0000
        .4byte 0x23208CC2
        .4byte 0x90940D0A
        .4byte 0x00000000
        .4byte 0x23208FF3
        .4byte 0x91D40D0A
        .4byte 0x00000000
    .global lbl_80480F30
    lbl_80480F30:
        .4byte 0x835A815B
        .4byte 0x837582B5
        .4byte 0x82BD82C6
        .4byte 0x82AB82C6
        .4byte 0x93B48C41
        .4byte 0x82CC9094
        .4byte 0x82AA82A0
        .4byte 0x82A282DC
        .4byte 0x82B982F1
        .4byte 0x0A000000
    .global "repay_levs__26@unnamed@gamePlayData_cpp@"
    "repay_levs__26@unnamed@gamePlayData_cpp@":
        .4byte 0x41200000
        .4byte 0x41A00000
        .4byte 0x41F00000
        .4byte 0x42200000
        .4byte 0x42480000
        .4byte 0x42700000
        .4byte 0x428C0000
        .4byte 0x42A00000
        .4byte 0x42B40000
        .4byte 0x42C80000
        .4byte 0x819693B4
        .4byte 0x8C418FEE
        .4byte 0x95F1284F
        .4byte 0x6C642981
        .4byte 0x96000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game8PlayData
    __vt__Q24Game8PlayData:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game8PlayDataFv
        .4byte getChildCount__5CNodeFv
    .global __vt__Q24Game17PelletFirstMemory
    __vt__Q24Game17PelletFirstMemory:
        .4byte 0
        .4byte 0
        .4byte read__Q24Game16PelletCropMemoryFR6Stream
        .4byte write__Q24Game16PelletCropMemoryFR6Stream
        .4byte firstCarryPellet__Q24Game17PelletFirstMemoryFPQ24Game6Pellet
        .4byte obtainPellet__Q24Game17PelletFirstMemoryFPQ24Game13BasePelletMgri
        .4byte losePellet__Q24Game17PelletFirstMemoryFPQ24Game13BasePelletMgri
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global playData__4Game
    playData__4Game:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805199D0
    lbl_805199D0:
        .4byte 0x00000000
    .global lbl_805199D4
    lbl_805199D4:
        .4byte 0x42C80000
    .global lbl_805199D8
    lbl_805199D8:
        .4byte 0x43300000
        .4byte 0x80000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char* name, ...) { OSReport("PlayData"); }

namespace Game {

/*
 * --INFO--
 * Address:	801E5354
 * Size:	000010
 */
KindCounter::KindCounter()
    : m_numKinds(0)
    , m_kinds(nullptr)
{
}

/*
 * --INFO--
 * Address:	801E5364
 * Size:	000074
 */
void KindCounter::alloc(int numKinds)
{
	P2ASSERTLINE(299, m_kinds == nullptr);
	m_numKinds = numKinds;
	m_kinds    = new u8[m_numKinds];
	clear();
}

/*
 * --INFO--
 * Address:	801E53D8
 * Size:	000028
 */
void KindCounter::clear()
{
	for (int i = 0; i < m_numKinds; i++) {
		m_kinds[i] = 0;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void KindCounter::copyFrom(KindCounter& other)
{
	P2ASSERTLINE(314, m_numKinds == other.m_numKinds);
	for (int i = 0; i < m_numKinds; i++) {
		m_kinds[i] = other.m_kinds[i];
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void KindCounter::addTo(KindCounter& other) { }

/*
 * cl_
 * --INFO--
 * Address:	801E5400
 * Size:	000078
 */
u8* KindCounter::operator()(int index)
{
	bool isValidIndex = false;
	if (0 <= index && index < m_numKinds) {
		isValidIndex = true;
	}
	P2ASSERTLINE(330, isValidIndex);
	return &m_kinds[index];
}

/*
 * --INFO--
 * Address:	........
 * Size:	00018C
 */
PelletCropMemory::PelletCropMemory(int num1, int num2, int num3)
    : _04()
    , _0C()
    , _14()
{
	_04.alloc(num1);
	_0C.alloc(num2);
	_14.alloc(num3);
}

/*
 * --INFO--
 * Address:	801E5478
 * Size:	000280
 */
PelletCropMemory* PelletCropMemory::createClone()
{
	PelletCropMemory* clone
	    = new PelletCropMemory(_04.m_numKinds, _0C.m_numKinds, _14.m_numKinds);
	clone->_04.copyFrom(_04);
	clone->_0C.copyFrom(_0C);
	clone->_14.copyFrom(_14);
	return clone;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r28, r3
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_801E55E4
	lis      r3, __vt__Q24Game16PelletCropMemory@ha
	lhz      r30, 0x14(r28)
	lhz      r29, 0xc(r28)
	addi     r3, r3, __vt__Q24Game16PelletCropMemory@l
	lhz      r27, 4(r28)
	li       r0, 0
	stw      r3, 0(r31)
	sth      r0, 4(r31)
	stw      r0, 8(r31)
	sth      r0, 0xc(r31)
	stw      r0, 0x10(r31)
	sth      r0, 0x14(r31)
	stw      r0, 0x18(r31)
	lwz      r0, 8(r31)
	cmplwi   r0, 0
	beq      lbl_801E54F8
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x12b
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E54F8:
	sth      r27, 4(r31)
	lhz      r3, 4(r31)
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 8(r31)
	mr       r4, r5
	b        lbl_801E5520

lbl_801E5514:
	lwz      r3, 8(r31)
	stbx     r4, r3, r5
	addi     r5, r5, 1

lbl_801E5520:
	lhz      r0, 4(r31)
	cmpw     r5, r0
	blt      lbl_801E5514
	lwz      r0, 0x10(r31)
	cmplwi   r0, 0
	beq      lbl_801E5554
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x12b
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E5554:
	sth      r29, 0xc(r31)
	lhz      r3, 0xc(r31)
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 0x10(r31)
	mr       r4, r5
	b        lbl_801E557C

lbl_801E5570:
	lwz      r3, 0x10(r31)
	stbx     r4, r3, r5
	addi     r5, r5, 1

lbl_801E557C:
	lhz      r0, 0xc(r31)
	cmpw     r5, r0
	blt      lbl_801E5570
	lwz      r0, 0x18(r31)
	cmplwi   r0, 0
	beq      lbl_801E55B0
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x12b
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E55B0:
	sth      r30, 0x14(r31)
	lhz      r3, 0x14(r31)
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 0x18(r31)
	mr       r4, r5
	b        lbl_801E55D8

lbl_801E55CC:
	lwz      r3, 0x18(r31)
	stbx     r4, r3, r5
	addi     r5, r5, 1

lbl_801E55D8:
	lhz      r0, 0x14(r31)
	cmpw     r5, r0
	blt      lbl_801E55CC

lbl_801E55E4:
	lhz      r3, 4(r31)
	lhz      r0, 4(r28)
	cmplw    r3, r0
	beq      lbl_801E5610
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x13a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E5610:
	li       r5, 0
	b        lbl_801E562C

lbl_801E5618:
	lwz      r4, 8(r28)
	lwz      r3, 8(r31)
	lbzx     r0, r4, r5
	stbx     r0, r3, r5
	addi     r5, r5, 1

lbl_801E562C:
	lhz      r0, 4(r31)
	cmpw     r5, r0
	blt      lbl_801E5618
	lhz      r3, 0xc(r31)
	lhz      r0, 0xc(r28)
	cmplw    r3, r0
	beq      lbl_801E5664
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x13a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E5664:
	li       r5, 0
	b        lbl_801E5680

lbl_801E566C:
	lwz      r4, 0x10(r28)
	lwz      r3, 0x10(r31)
	lbzx     r0, r4, r5
	stbx     r0, r3, r5
	addi     r5, r5, 1

lbl_801E5680:
	lhz      r0, 0xc(r31)
	cmpw     r5, r0
	blt      lbl_801E566C
	lhz      r3, 0x14(r31)
	lhz      r0, 0x14(r28)
	cmplw    r3, r0
	beq      lbl_801E56B8
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x13a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E56B8:
	li       r5, 0
	b        lbl_801E56D4

lbl_801E56C0:
	lwz      r4, 0x18(r28)
	lwz      r3, 0x18(r31)
	lbzx     r0, r4, r5
	stbx     r0, r3, r5
	addi     r5, r5, 1

lbl_801E56D4:
	lhz      r0, 0x14(r31)
	cmpw     r5, r0
	blt      lbl_801E56C0
	mr       r3, r31
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E56F8
 * Size:	000148
 */
void PelletCropMemory::addTo(Game::PelletCropMemory*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lhz      r3, 4(r3)
	lhz      r0, 4(r4)
	cmplw    r3, r0
	beq      lbl_801E5740
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x142
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E5740:
	li       r6, 0
	b        lbl_801E5764

lbl_801E5748:
	lwz      r5, 8(r30)
	lwz      r3, 8(r31)
	lbzx     r4, r5, r6
	lbzx     r0, r3, r6
	add      r0, r4, r0
	stbx     r0, r5, r6
	addi     r6, r6, 1

lbl_801E5764:
	lhz      r0, 4(r30)
	cmpw     r6, r0
	blt      lbl_801E5748
	lhz      r3, 0xc(r30)
	lhz      r0, 0xc(r31)
	cmplw    r3, r0
	beq      lbl_801E579C
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x142
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E579C:
	li       r6, 0
	b        lbl_801E57C0

lbl_801E57A4:
	lwz      r5, 0x10(r30)
	lwz      r3, 0x10(r31)
	lbzx     r4, r5, r6
	lbzx     r0, r3, r6
	add      r0, r4, r0
	stbx     r0, r5, r6
	addi     r6, r6, 1

lbl_801E57C0:
	lhz      r0, 0xc(r30)
	cmpw     r6, r0
	blt      lbl_801E57A4
	lhz      r3, 0x14(r30)
	lhz      r0, 0x14(r31)
	cmplw    r3, r0
	beq      lbl_801E57F8
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x142
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E57F8:
	li       r6, 0
	b        lbl_801E581C

lbl_801E5800:
	lwz      r5, 0x18(r30)
	lwz      r3, 0x18(r31)
	lbzx     r4, r5, r6
	lbzx     r0, r3, r6
	add      r0, r4, r0
	stbx     r0, r5, r6
	addi     r6, r6, 1

lbl_801E581C:
	lhz      r0, 0x14(r30)
	cmpw     r6, r0
	blt      lbl_801E5800
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
 * Address:	801E5840
 * Size:	000070
 */
void PelletCropMemory::clear()
{
	/*
	li       r6, 0
	mr       r5, r6
	b        lbl_801E5858

lbl_801E584C:
	lwz      r4, 8(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_801E5858:
	lhz      r0, 4(r3)
	cmpw     r6, r0
	blt      lbl_801E584C
	li       r6, 0
	mr       r5, r6
	b        lbl_801E587C

lbl_801E5870:
	lwz      r4, 0x10(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_801E587C:
	lhz      r0, 0xc(r3)
	cmpw     r6, r0
	blt      lbl_801E5870
	li       r6, 0
	mr       r5, r6
	b        lbl_801E58A0

lbl_801E5894:
	lwz      r4, 0x18(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_801E58A0:
	lhz      r0, 0x14(r3)
	cmpw     r6, r0
	blt      lbl_801E5894
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000288
 */
void PelletCropMemory::obtainPellet(Pellet*) { }

/*
 * --INFO--
 * Address:	801E58B0
 * Size:	000048
 */
int PelletCropMemory::calcEarnKinds()
{
	return _04.getEarnKinds() + _0C.getEarnKinds();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
int PelletCropMemory::calcNumKinds() { }

/*
 * --INFO--
 * Address:	........
 * Size:	0000198
 */
PelletFirstMemory::PelletFirstMemory(int p1, int p2, int p3)
    : PelletCropMemory(p1, p2, p3)
{
}

/*
 * --INFO--
 * Address:	801E58F8
 * Size:	0002C8
 */
bool PelletFirstMemory::firstCarryPellet(Pellet* pellet)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_801E59F0
	mr       r3, r30
	bl       getConfigIndex__Q24Game6PelletFv
	or.      r31, r3, r3
	li       r3, 0
	blt      lbl_801E595C
	lhz      r0, 4(r29)
	cmpw     r31, r0
	bge      lbl_801E595C
	li       r3, 1

lbl_801E595C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E5980
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E5980:
	lwz      r3, 8(r29)
	lbzx     r0, r3, r31
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_801E5BA0
	cmpwi    r31, 0
	li       r3, 0
	blt      lbl_801E59AC
	lhz      r0, 4(r29)
	cmpw     r31, r0
	bge      lbl_801E59AC
	li       r3, 1

lbl_801E59AC:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E59D0
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E59D0:
	lwz      r4, 8(r29)
	mr       r3, r30
	lbzx     r0, r4, r31
	ori      r0, r0, 2
	stbx     r0, r4, r31
	bl       getConfigName__Q24Game6PelletFv
	li       r3, 1
	b        lbl_801E5BA4

lbl_801E59F0:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_801E5AC8
	mr       r3, r30
	bl       getConfigIndex__Q24Game6PelletFv
	or.      r31, r3, r3
	li       r3, 0
	blt      lbl_801E5A34
	lhz      r0, 0xc(r29)
	cmpw     r31, r0
	bge      lbl_801E5A34
	li       r3, 1

lbl_801E5A34:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E5A58
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E5A58:
	lwz      r3, 0x10(r29)
	lbzx     r0, r3, r31
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_801E5BA0
	cmpwi    r31, 0
	li       r3, 0
	blt      lbl_801E5A84
	lhz      r0, 0xc(r29)
	cmpw     r31, r0
	bge      lbl_801E5A84
	li       r3, 1

lbl_801E5A84:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E5AA8
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E5AA8:
	lwz      r4, 0x10(r29)
	mr       r3, r30
	lbzx     r0, r4, r31
	ori      r0, r0, 2
	stbx     r0, r4, r31
	bl       getConfigName__Q24Game6PelletFv
	li       r3, 1
	b        lbl_801E5BA4

lbl_801E5AC8:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_801E5BA0
	mr       r3, r30
	bl       getConfigIndex__Q24Game6PelletFv
	or.      r31, r3, r3
	li       r3, 0
	blt      lbl_801E5B0C
	lhz      r0, 0x14(r29)
	cmpw     r31, r0
	bge      lbl_801E5B0C
	li       r3, 1

lbl_801E5B0C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E5B30
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E5B30:
	lwz      r3, 0x18(r29)
	lbzx     r0, r3, r31
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_801E5BA0
	cmpwi    r31, 0
	li       r3, 0
	blt      lbl_801E5B5C
	lhz      r0, 0x14(r29)
	cmpw     r31, r0
	bge      lbl_801E5B5C
	li       r3, 1

lbl_801E5B5C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E5B80
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E5B80:
	lwz      r4, 0x18(r29)
	mr       r3, r30
	lbzx     r0, r4, r31
	ori      r0, r0, 2
	stbx     r0, r4, r31
	bl       getConfigName__Q24Game6PelletFv
	li       r3, 1
	b        lbl_801E5BA4

lbl_801E5BA0:
	li       r3, 0

lbl_801E5BA4:
	lwz      r0, 0x24(r1)
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
 * Address:	801E5BC0
 * Size:	000154
 */
void PelletFirstMemory::obtainPellet(Game::BasePelletMgr*, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_801E5C64
	cmpwi    r31, 0
	li       r3, 0
	blt      lbl_801E5C20
	lhz      r0, 4(r29)
	cmpw     r31, r0
	bge      lbl_801E5C20
	li       r3, 1

lbl_801E5C20:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E5C44
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E5C44:
	lwz      r5, 8(r29)
	mr       r3, r30
	mr       r4, r31
	lbzx     r0, r5, r31
	ori      r0, r0, 2
	stbx     r0, r5, r31
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	b        lbl_801E5CF8

lbl_801E5C64:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_801E5CE4
	cmpwi    r31, 0
	li       r3, 0
	blt      lbl_801E5CA0
	lhz      r0, 0xc(r29)
	cmpw     r31, r0
	bge      lbl_801E5CA0
	li       r3, 1

lbl_801E5CA0:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E5CC4
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E5CC4:
	lwz      r5, 0x10(r29)
	mr       r3, r30
	mr       r4, r31
	lbzx     r0, r5, r31
	ori      r0, r0, 2
	stbx     r0, r5, r31
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	b        lbl_801E5CF8

lbl_801E5CE4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl

lbl_801E5CF8:
	lwz      r0, 0x24(r1)
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
 * Address:	801E5D14
 * Size:	000154
 */
void PelletFirstMemory::losePellet(Game::BasePelletMgr*, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_801E5DB8
	cmpwi    r31, 0
	li       r3, 0
	blt      lbl_801E5D74
	lhz      r0, 4(r29)
	cmpw     r31, r0
	bge      lbl_801E5D74
	li       r3, 1

lbl_801E5D74:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E5D98
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E5D98:
	lwz      r5, 8(r29)
	mr       r3, r30
	mr       r4, r31
	lbzx     r0, r5, r31
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stbx     r0, r5, r31
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	b        lbl_801E5E4C

lbl_801E5DB8:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_801E5E38
	cmpwi    r31, 0
	li       r3, 0
	blt      lbl_801E5DF4
	lhz      r0, 0xc(r29)
	cmpw     r31, r0
	bge      lbl_801E5DF4
	li       r3, 1

lbl_801E5DF4:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E5E18
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E5E18:
	lwz      r5, 0x10(r29)
	mr       r3, r30
	mr       r4, r31
	lbzx     r0, r5, r31
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stbx     r0, r5, r31
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	b        lbl_801E5E4C

lbl_801E5E38:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl

lbl_801E5E4C:
	lwz      r0, 0x24(r1)
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
 * Address:	801E5E68
 * Size:	00004C
 */
bool PlayData::isCompletePelletTrigger()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r4, 0x2f(r3)
	clrlwi.  r0, r4, 0x1f
	beq      lbl_801E5EA0
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	bne      lbl_801E5EA0
	lwz      r3, 0xb0(r3)
	bl       completeAll__Q24Game16PelletCropMemoryFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801E5EA0
	li       r3, 1
	b        lbl_801E5EA4

lbl_801E5EA0:
	li       r3, 0

lbl_801E5EA4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * completeAll__Q24Game16PelletCropMemoryFv
 * --INFO--
 * Address:	801E5EB4
 * Size:	000058
 */
bool PelletCropMemory::completeAll()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 4
	bl       completeAll__Q24Game11KindCounterFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E5EE0
	li       r3, 0
	b        lbl_801E5EF8

lbl_801E5EE0:
	addi     r3, r31, 0xc
	bl       completeAll__Q24Game11KindCounterFv
	clrlwi   r3, r3, 0x18
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f

lbl_801E5EF8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * completeAll__Q24Game11KindCounterFv
 * --INFO--
 * Address:	801E5F0C
 * Size:	00003C
 */
bool KindCounter::completeAll()
{
	for (int i = 0; i < m_numKinds; ++i) {
		if (m_kinds[i] == 0)
			return false;
	}
	return true;
}

/*
 * --INFO--
 * Address:	801E5F48
 * Size:	00003C
 */
int KindCounter::getEarnKinds()
{
	int earnedKinds = 0;
	for (int i = 0; i < m_numKinds; i++) {
		if (m_kinds[i] & KCF_Earned) {
			earnedKinds++;
		}
	}
	return earnedKinds;
}

/*
 * --INFO--
 * Address:	801E5F84
 * Size:	00003C
 */
OlimarData::OlimarData()
{
	m_flags[0] = 0;
	m_flags[1] = 0;
	clear();
}

/*
 * --INFO--
 * Address:	801E5FC0
 * Size:	000010
 */
void OlimarData::clear()
{
	m_flags[0] = 0;
	m_flags[1] = 0;
	/*
	li       r0, 0
	stb      r0, 0(r3)
	stb      r0, 1(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E5FD0
 * Size:	000098
 */
bool OlimarData::hasItem(ItemIndex index)
{
	bool isValidIndex = false;
	if (ODII_FIRST_EXPLORATION_KIT_ITEM <= index
	    && index < ODII_FIRST_NON_EXPLORATION_KIT_ITEM) {
		isValidIndex = true;
	}
	P2ASSERTLINE(588, isValidIndex);
	return m_flags[index >> 3] & (1 << (index % 8));
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_801E6000
	cmpwi    r31, 0xc
	bge      lbl_801E6000
	li       r0, 1

lbl_801E6000:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801E6024
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x24c
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E6024:
	srawi    r0, r31, 3
	li       r4, 1
	slwi     r3, r0, 3
	subfic   r0, r0, 1
	subf     r3, r3, r31
	lbzx     r0, r30, r0
	slw      r3, r4, r3
	and      r3, r3, r0
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E6068
 * Size:	0000CC
 */
void OlimarData::getItem(ItemIndex index)
{
	bool isValidIndex = false;
	if (ODII_FIRST_EXPLORATION_KIT_ITEM <= index
	    && index < ODII_FIRST_NON_EXPLORATION_KIT_ITEM) {
		isValidIndex = true;
	}
	P2ASSERTLINE(601, isValidIndex);
	if (index < 0x10) {
		m_flags[index % 8] |= (1 << (index - (8 * (index >> 3))));
	}
	if (index == ODII_GeographicProjection) {
		playData->openCourse(2);
	} else if (index == ODII_SphericalAtlas) {
		playData->openCourse(1);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_801E6098
	cmpwi    r31, 0xc
	bge      lbl_801E6098
	li       r0, 1

lbl_801E6098:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801E60BC
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x259
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E60BC:
	cmpwi    r31, 0x10
	bge      lbl_801E60E8
	srawi    r0, r31, 3
	li       r3, 1
	subfic   r5, r0, 1
	slwi     r0, r0, 3
	lbzx     r4, r30, r5
	subf     r0, r0, r31
	slw      r0, r3, r0
	or       r0, r4, r0
	stbx     r0, r30, r5

lbl_801E60E8:
	cmpwi    r31, 0xb
	beq      lbl_801E6110
	bge      lbl_801E611C
	cmpwi    r31, 0xa
	bge      lbl_801E6100
	b        lbl_801E611C

lbl_801E6100:
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 1
	bl       openCourse__Q24Game8PlayDataFi
	b        lbl_801E611C

lbl_801E6110:
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 2
	bl       openCourse__Q24Game8PlayDataFi

lbl_801E611C:
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
 * Address:	801E6134
 * Size:	000084
 */
void PlayData::construct()
{
	P2ASSERTLINE(690, playData == nullptr);
	sys->heapStatusStart("playData", nullptr);
	playData = new PlayData();
	sys->heapStatusEnd("playData");
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_80480E40@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_80480E40@l
	lwz      r0, playData__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_801E616C
	addi     r3, r31, 0xc
	addi     r5, r31, 0x20
	li       r4, 0x2b2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E616C:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x2c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x130
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E6194
	bl       __ct__Q24Game8PlayDataFv
	mr       r0, r3

lbl_801E6194:
	stw      r0, playData__4Game@sda21(r13)
	addi     r4, r31, 0x2c
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E61B8
 * Size:	000854
 */
PlayData::PlayData()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_80480E40@ha
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	mr       r31, r3
	addi     r26, r4, lbl_80480E40@l
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game8PlayData@ha
	li       r0, 0
	addi     r4, r3, __vt__Q24Game8PlayData@l
	addi     r3, r31, 0x30
	stw      r4, 0(r31)
	stb      r0, 0x20(r31)
	stb      r0, 0x2f(r31)
	bl       __ct__8BitFlagsFv
	addi     r3, r31, 0x38
	bl       __ct__8BitFlagsFv
	addi     r3, r31, 0x40
	bl       __ct__Q34Game8TekiStat3MgrFv
	lis      r4, __ct__Q24Game10OlimarDataFv@ha
	addi     r3, r31, 0x48
	addi     r4, r4, __ct__Q24Game10OlimarDataFv@l
	li       r5, 0
	li       r6, 2
	li       r7, 2
	bl       __construct_array
	addi     r3, r31, 0x4c
	bl       __ct__Q24Game12CaveSaveDataFv
	li       r0, 0
	addi     r3, r31, 0xa8
	stb      r0, 0x84(r31)
	stb      r0, 0x85(r31)
	stb      r0, 0x86(r31)
	stb      r0, 0x87(r31)
	stb      r0, 0x88(r31)
	stb      r0, 0x89(r31)
	stb      r0, 0x8a(r31)
	stb      r0, 0x8b(r31)
	stb      r0, 0x8c(r31)
	stb      r0, 0x8d(r31)
	stb      r0, 0x8e(r31)
	stb      r0, 0x8f(r31)
	stb      r0, 0x90(r31)
	stb      r0, 0x91(r31)
	stb      r0, 0x92(r31)
	stb      r0, 0x93(r31)
	bl       __ct__Q24Game13PikiContainerFv
	li       r0, 0
	stb      r0, 0xf0(r31)
	stb      r0, 0xf1(r31)
	stw      r0, 0x1c(r31)
	lwz      r3, stageList__4Game@sda21(r13)
	lhz      r28, 0x100(r3)
	mr       r3, r28
	bl       __nwa__FUl
	stw      r3, 0xd8(r31)
	mr       r3, r28
	bl       __nwa__FUl
	stw      r3, 0xdc(r31)
	mr       r3, r28
	bl       __nwa__FUl
	cmpwi    r28, 0
	stw      r3, 0xf4(r31)
	li       r3, 0
	ble      lbl_801E63B4
	cmpwi    r28, 8
	addi     r4, r28, -8
	ble      lbl_801E6388
	addi     r0, r4, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_801E6388

lbl_801E62E0:
	lwz      r4, 0xdc(r31)
	li       r11, 0
	addi     r10, r3, 1
	addi     r9, r3, 2
	stbx     r11, r4, r3
	addi     r8, r3, 3
	addi     r7, r3, 4
	addi     r6, r3, 5
	lwz      r4, 0xf4(r31)
	addi     r5, r3, 6
	addi     r0, r3, 7
	stbx     r11, r4, r3
	addi     r3, r3, 8
	lwz      r4, 0xdc(r31)
	stbx     r11, r4, r10
	lwz      r4, 0xf4(r31)
	stbx     r11, r4, r10
	lwz      r4, 0xdc(r31)
	stbx     r11, r4, r9
	lwz      r4, 0xf4(r31)
	stbx     r11, r4, r9
	lwz      r4, 0xdc(r31)
	stbx     r11, r4, r8
	lwz      r4, 0xf4(r31)
	stbx     r11, r4, r8
	lwz      r4, 0xdc(r31)
	stbx     r11, r4, r7
	lwz      r4, 0xf4(r31)
	stbx     r11, r4, r7
	lwz      r4, 0xdc(r31)
	stbx     r11, r4, r6
	lwz      r4, 0xf4(r31)
	stbx     r11, r4, r6
	lwz      r4, 0xdc(r31)
	stbx     r11, r4, r5
	lwz      r4, 0xf4(r31)
	stbx     r11, r4, r5
	lwz      r4, 0xdc(r31)
	stbx     r11, r4, r0
	lwz      r4, 0xf4(r31)
	stbx     r11, r4, r0
	bdnz     lbl_801E62E0

lbl_801E6388:
	subf     r0, r3, r28
	li       r5, 0
	mtctr    r0
	cmpw     r3, r28
	bge      lbl_801E63B4

lbl_801E639C:
	lwz      r4, 0xdc(r31)
	stbx     r5, r4, r3
	lwz      r4, 0xf4(r31)
	stbx     r5, r4, r3
	addi     r3, r3, 1
	bdnz     lbl_801E639C

lbl_801E63B4:
	slwi     r3, r28, 4
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game8PlayData8LimitGenFv@ha
	mr       r7, r28
	addi     r4, r4, __ct__Q34Game8PlayData8LimitGenFv@l
	li       r5, 0
	li       r6, 0x10
	bl       __construct_new_array
	stw      r3, 0xe4(r31)
	li       r30, 0
	li       r29, 0
	b        lbl_801E6430

lbl_801E63E8:
	lwz      r0, 0xe4(r31)
	mr       r4, r30
	lwz      r3, stageList__4Game@sda21(r13)
	add      r25, r0, r29
	bl       getCourseInfo__Q24Game6StagesFi
	mr       r27, r3
	mr       r3, r25
	lwz      r0, 0x4c(r27)
	li       r5, 0
	clrlwi   r4, r0, 0x10
	bl       create__8BitFlagsFUsPUc
	lwz      r0, 0x74(r27)
	addi     r3, r25, 8
	li       r5, 0
	clrlwi   r4, r0, 0x10
	bl       create__8BitFlagsFUsPUc
	addi     r29, r29, 0x10
	addi     r30, r30, 1

lbl_801E6430:
	cmpw     r30, r28
	blt      lbl_801E63E8
	addi     r3, r31, 0x40
	li       r4, 0x66
	bl       allocate__Q34Game8TekiStat3MgrFi
	mulli    r3, r28, 0xc
	addi     r27, r3, 0x10
	mr       r3, r27
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game8PlayData11CaveOtakaraFv@ha
	mr       r7, r28
	addi     r4, r4, __ct__Q34Game8PlayData11CaveOtakaraFv@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	stw      r3, 0xe0(r31)
	mr       r3, r27
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game8PlayData11CaveOtakaraFv@ha
	mr       r7, r28
	addi     r4, r4, __ct__Q34Game8PlayData11CaveOtakaraFv@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	stw      r3, 0xf8(r31)
	li       r29, 0
	li       r27, 0
	b        lbl_801E659C

lbl_801E64A0:
	lwz      r0, 0xe0(r31)
	mr       r4, r29
	lwz      r3, stageList__4Game@sda21(r13)
	add      r25, r0, r27
	bl       getCourseInfo__Q24Game6StagesFi
	mr       r24, r3
	bl       getCaveNum__Q24Game10CourseInfoFv
	or.      r30, r3, r3
	ble      lbl_801E6520
	stb      r30, 0(r25)
	bl       __nwa__FUl
	stw      r3, 4(r25)
	slwi     r3, r30, 2
	bl       __nwa__FUl
	stw      r3, 8(r25)
	lbz      r0, 0(r25)
	cmplwi   r0, 0
	beq      lbl_801E6520
	li       r6, 0
	mr       r7, r6
	mr       r5, r6
	mr       r4, r6
	b        lbl_801E6514

lbl_801E64FC:
	lwz      r3, 4(r25)
	stbx     r5, r3, r6
	addi     r6, r6, 1
	lwz      r3, 8(r25)
	stwx     r4, r3, r7
	addi     r7, r7, 4

lbl_801E6514:
	lbz      r0, 0(r25)
	cmpw     r6, r0
	blt      lbl_801E64FC

lbl_801E6520:
	lwz      r0, 0xf8(r31)
	mr       r3, r24
	add      r24, r0, r27
	bl       getCaveNum__Q24Game10CourseInfoFv
	or.      r30, r3, r3
	ble      lbl_801E6594
	stb      r30, 0(r24)
	bl       __nwa__FUl
	stw      r3, 4(r24)
	slwi     r3, r30, 2
	bl       __nwa__FUl
	stw      r3, 8(r24)
	lbz      r0, 0(r24)
	cmplwi   r0, 0
	beq      lbl_801E6594
	li       r6, 0
	mr       r7, r6
	mr       r5, r6
	mr       r4, r6
	b        lbl_801E6588

lbl_801E6570:
	lwz      r3, 4(r24)
	stbx     r5, r3, r6
	addi     r6, r6, 1
	lwz      r3, 8(r24)
	stwx     r4, r3, r7
	addi     r7, r7, 4

lbl_801E6588:
	lbz      r0, 0(r24)
	cmpw     r6, r0
	blt      lbl_801E6570

lbl_801E6594:
	addi     r27, r27, 0xc
	addi     r29, r29, 1

lbl_801E659C:
	cmpw     r29, r28
	blt      lbl_801E64A0
	li       r3, 3
	bl       getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r27, r3
	li       r3, 4
	bl       getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r28, r3
	li       r3, 1
	bl       getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r29, r3
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_801E6708
	lis      r3, __vt__Q24Game16PelletCropMemory@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game16PelletCropMemory@l
	stw      r3, 0(r30)
	sth      r0, 4(r30)
	stw      r0, 8(r30)
	sth      r0, 0xc(r30)
	stw      r0, 0x10(r30)
	sth      r0, 0x14(r30)
	stw      r0, 0x18(r30)
	lwz      r0, 8(r30)
	cmplwi   r0, 0
	beq      lbl_801E6620
	addi     r3, r26, 0xc
	addi     r5, r26, 0x20
	li       r4, 0x12b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E6620:
	sth      r27, 4(r30)
	lhz      r3, 4(r30)
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 8(r30)
	mr       r4, r5
	b        lbl_801E6648

lbl_801E663C:
	lwz      r3, 8(r30)
	stbx     r4, r3, r5
	addi     r5, r5, 1

lbl_801E6648:
	lhz      r0, 4(r30)
	cmpw     r5, r0
	blt      lbl_801E663C
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_801E6674
	addi     r3, r26, 0xc
	addi     r5, r26, 0x20
	li       r4, 0x12b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E6674:
	sth      r28, 0xc(r30)
	lhz      r3, 0xc(r30)
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 0x10(r30)
	mr       r4, r5
	b        lbl_801E669C

lbl_801E6690:
	lwz      r3, 0x10(r30)
	stbx     r4, r3, r5
	addi     r5, r5, 1

lbl_801E669C:
	lhz      r0, 0xc(r30)
	cmpw     r5, r0
	blt      lbl_801E6690
	lwz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_801E66C8
	addi     r3, r26, 0xc
	addi     r5, r26, 0x20
	li       r4, 0x12b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E66C8:
	sth      r29, 0x14(r30)
	lhz      r3, 0x14(r30)
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 0x18(r30)
	mr       r4, r5
	b        lbl_801E66F0

lbl_801E66E4:
	lwz      r3, 0x18(r30)
	stbx     r4, r3, r5
	addi     r5, r5, 1

lbl_801E66F0:
	lhz      r0, 0x14(r30)
	cmpw     r5, r0
	blt      lbl_801E66E4
	lis      r3, __vt__Q24Game17PelletFirstMemory@ha
	addi     r0, r3, __vt__Q24Game17PelletFirstMemory@l
	stw      r0, 0(r30)

lbl_801E6708:
	stw      r30, 0xb0(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_801E6840
	lis      r3, __vt__Q24Game16PelletCropMemory@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game16PelletCropMemory@l
	stw      r3, 0(r30)
	sth      r0, 4(r30)
	stw      r0, 8(r30)
	sth      r0, 0xc(r30)
	stw      r0, 0x10(r30)
	sth      r0, 0x14(r30)
	stw      r0, 0x18(r30)
	lwz      r0, 8(r30)
	cmplwi   r0, 0
	beq      lbl_801E6764
	addi     r3, r26, 0xc
	addi     r5, r26, 0x20
	li       r4, 0x12b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E6764:
	sth      r27, 4(r30)
	lhz      r3, 4(r30)
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 8(r30)
	mr       r4, r5
	b        lbl_801E678C

lbl_801E6780:
	lwz      r3, 8(r30)
	stbx     r4, r3, r5
	addi     r5, r5, 1

lbl_801E678C:
	lhz      r0, 4(r30)
	cmpw     r5, r0
	blt      lbl_801E6780
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_801E67B8
	addi     r3, r26, 0xc
	addi     r5, r26, 0x20
	li       r4, 0x12b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E67B8:
	sth      r28, 0xc(r30)
	lhz      r3, 0xc(r30)
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 0x10(r30)
	mr       r4, r5
	b        lbl_801E67E0

lbl_801E67D4:
	lwz      r3, 0x10(r30)
	stbx     r4, r3, r5
	addi     r5, r5, 1

lbl_801E67E0:
	lhz      r0, 0xc(r30)
	cmpw     r5, r0
	blt      lbl_801E67D4
	lwz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_801E680C
	addi     r3, r26, 0xc
	addi     r5, r26, 0x20
	li       r4, 0x12b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E680C:
	sth      r29, 0x14(r30)
	lhz      r3, 0x14(r30)
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 0x18(r30)
	mr       r4, r5
	b        lbl_801E6834

lbl_801E6828:
	lwz      r3, 0x18(r30)
	stbx     r4, r3, r5
	addi     r5, r5, 1

lbl_801E6834:
	lhz      r0, 0x14(r30)
	cmpw     r5, r0
	blt      lbl_801E6828

lbl_801E6840:
	stw      r30, 0xb4(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_801E6978
	lis      r3, __vt__Q24Game16PelletCropMemory@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game16PelletCropMemory@l
	stw      r3, 0(r30)
	sth      r0, 4(r30)
	stw      r0, 8(r30)
	sth      r0, 0xc(r30)
	stw      r0, 0x10(r30)
	sth      r0, 0x14(r30)
	stw      r0, 0x18(r30)
	lwz      r0, 8(r30)
	cmplwi   r0, 0
	beq      lbl_801E689C
	addi     r3, r26, 0xc
	addi     r5, r26, 0x20
	li       r4, 0x12b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E689C:
	sth      r27, 4(r30)
	lhz      r3, 4(r30)
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 8(r30)
	mr       r4, r5
	b        lbl_801E68C4

lbl_801E68B8:
	lwz      r3, 8(r30)
	stbx     r4, r3, r5
	addi     r5, r5, 1

lbl_801E68C4:
	lhz      r0, 4(r30)
	cmpw     r5, r0
	blt      lbl_801E68B8
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_801E68F0
	addi     r3, r26, 0xc
	addi     r5, r26, 0x20
	li       r4, 0x12b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E68F0:
	sth      r28, 0xc(r30)
	lhz      r3, 0xc(r30)
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 0x10(r30)
	mr       r4, r5
	b        lbl_801E6918

lbl_801E690C:
	lwz      r3, 0x10(r30)
	stbx     r4, r3, r5
	addi     r5, r5, 1

lbl_801E6918:
	lhz      r0, 0xc(r30)
	cmpw     r5, r0
	blt      lbl_801E690C
	lwz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_801E6944
	addi     r3, r26, 0xc
	addi     r5, r26, 0x20
	li       r4, 0x12b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E6944:
	sth      r29, 0x14(r30)
	lhz      r3, 0x14(r30)
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 0x18(r30)
	mr       r4, r5
	b        lbl_801E696C

lbl_801E6960:
	lwz      r3, 0x18(r30)
	stbx     r4, r3, r5
	addi     r5, r5, 1

lbl_801E696C:
	lhz      r0, 0x14(r30)
	cmpw     r5, r0
	blt      lbl_801E6960

lbl_801E6978:
	stw      r30, 0xb8(r31)
	addi     r3, r31, 0x30
	li       r4, 0x39
	li       r5, 0
	bl       create__8BitFlagsFUsPUc
	addi     r3, r31, 0x30
	bl       reset__8BitFlagsFv
	li       r3, 4
	bl       getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	clrlwi   r4, r3, 0x10
	addi     r3, r31, 0x38
	li       r5, 0
	bl       create__8BitFlagsFUsPUc
	addi     r3, r31, 0x38
	bl       reset__8BitFlagsFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r26, 0x38
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x140
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E69DC
	bl       __ct__Q24Game14GeneratorCacheFv
	mr       r0, r3

lbl_801E69DC:
	stw      r0, generatorCache__4Game@sda21(r13)
	addi     r4, r26, 0x38
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r31
	bl       reset__Q24Game8PlayDataFv
	mr       r3, r31
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E6A0C
 * Size:	000014
 */
PlayData::CaveOtakara::CaveOtakara()
    : m_caveCount(0)
    , m_otakaraCountsOld(nullptr)
    , _08(nullptr)
{
}

/*
 * --INFO--
 * Address:	801E6A20
 * Size:	000038
 */
PlayData::LimitGen::LimitGen()
    : m_nonLoops()
    , m_loops()
{
}

} // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
// kh::Screen::MailSaveData::~MailSaveData() {

// }

namespace Game {

/*
 * --INFO--
 * Address:	801E6A58
 * Size:	000068
 */
PlayData::~PlayData()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801E6AA4
	lis      r4, __vt__Q24Game8PlayData@ha
	li       r0, 0
	addi     r5, r4, __vt__Q24Game8PlayData@l
	li       r4, 0
	stw      r5, 0(r30)
	stw      r0, playData__4Game@sda21(r13)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801E6AA4
	mr       r3, r30
	bl       __dl__FPv

lbl_801E6AA4:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E6AC0
 * Size:	0003D0
 */
void PlayData::reset()
{
	m_naviLifeMax[1] = 0.0f;
	m_naviLifeMax[0] = 0.0f;
	_20              = 0;
	ulonglong osTime = OSGetTime();
	m_osTimeLo       = (int)osTime;
	m_osTimeHi       = (int)(osTime >> 0x20);
	_18              = false;
	_19              = 0;
	_2F              = 0;
	_F0[0]           = 0;
	_F0[1]           = 0;
	for (int i = 0; i < 0; i++) {
		if (i < 0x10) {
			_F0[1 - (i >> 3)] |= 1 << (i - (8 * (i >> 3)));
		}
	}
	generatorCache->clearCache();
	m_pokoCount     = 0;
	_EC             = 0;
	m_pokoCountOld  = 0;
	_C0[0]          = 0;
	m_berryCount[0] = 0;
	_C0[1]          = 0;
	m_berryCount[1] = 0;
	m_pikiContainer.clear();
	initCourses(false);
	initLimitGens();
	initCaveOtakaras();
	m_mainCropMemory->clear();
	m_caveCropMemory->clear();
	_B0->clear();
	_BC = 0;
	for (int i = 0; i < stageList->m_courseCount; i++) {
		m_groundOtakaraCollected[i]    = 0;
		m_groundOtakaraCollectedOld[i] = 0;
	}
	resetContainerFlag();
	m_demoFlags.all_zero();
	m_findItemFlags.all_zero();
	m_tekiStatMgr.clear();
	m_olimarData[0].clear();
	m_olimarData[1].clear();
	m_caveSaveData.clear();
	m_mailSaveData.clear();
	for (int i = 0; i < 6; i++) {
		m_pikminToday[i]     = 0;
		m_pikminYesterday[i] = 0;
	}
	DeathMgr::clear();
	BirthMgr::clear();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_805199D0@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stfs     f0, 0x28(r3)
	stfs     f0, 0x24(r3)
	stb      r0, 0x20(r3)
	bl       OSGetTime
	stw      r4, 0xd4(r31)
	li       r0, 0
	li       r6, 0
	li       r4, 1
	stw      r3, 0xd0(r31)
	stb      r0, 0x18(r31)
	stb      r0, 0x19(r31)
	stb      r0, 0x2f(r31)
	stb      r0, 0xf0(r31)
	stb      r0, 0xf1(r31)
	b        lbl_801E6B48

lbl_801E6B18:
	cmpwi    r6, 0x10
	bge      lbl_801E6B44
	srawi    r3, r6, 3
	subfic   r0, r3, 1
	add      r5, r31, r0
	slwi     r0, r3, 3
	lbz      r3, 0xf0(r5)
	subf     r0, r0, r6
	slw      r0, r4, r0
	or       r0, r3, r0
	stb      r0, 0xf0(r5)

lbl_801E6B44:
	addi     r6, r6, 1

lbl_801E6B48:
	cmpwi    r6, -1
	ble      lbl_801E6B18
	lwz      r3, generatorCache__4Game@sda21(r13)
	bl       clearCache__Q24Game14GeneratorCacheFv
	li       r0, 0
	addi     r3, r31, 0xa8
	stw      r0, 0xe8(r31)
	stw      r0, 0xec(r31)
	stw      r0, 0xfc(r31)
	stw      r0, 0xc0(r31)
	stw      r0, 0xc8(r31)
	stw      r0, 0xc4(r31)
	stw      r0, 0xcc(r31)
	bl       clear__Q24Game13PikiContainerFv
	mr       r3, r31
	li       r4, 0
	bl       initCourses__Q24Game8PlayDataFb
	mr       r3, r31
	bl       initLimitGens__Q24Game8PlayDataFv
	mr       r3, r31
	bl       initCaveOtakaras__Q24Game8PlayDataFv
	lwz      r3, stageList__4Game@sda21(r13)
	li       r7, 0
	lwz      r6, 0xb4(r31)
	mr       r5, r7
	lhz      r3, 0x100(r3)
	b        lbl_801E6BC0

lbl_801E6BB4:
	lwz      r4, 8(r6)
	stbx     r5, r4, r7
	addi     r7, r7, 1

lbl_801E6BC0:
	lhz      r0, 4(r6)
	cmpw     r7, r0
	blt      lbl_801E6BB4
	li       r7, 0
	mr       r5, r7
	b        lbl_801E6BE4

lbl_801E6BD8:
	lwz      r4, 0x10(r6)
	stbx     r5, r4, r7
	addi     r7, r7, 1

lbl_801E6BE4:
	lhz      r0, 0xc(r6)
	cmpw     r7, r0
	blt      lbl_801E6BD8
	li       r7, 0
	mr       r5, r7
	b        lbl_801E6C08

lbl_801E6BFC:
	lwz      r4, 0x18(r6)
	stbx     r5, r4, r7
	addi     r7, r7, 1

lbl_801E6C08:
	lhz      r0, 0x14(r6)
	cmpw     r7, r0
	blt      lbl_801E6BFC
	li       r7, 0
	lwz      r6, 0xb8(r31)
	mr       r5, r7
	b        lbl_801E6C30

lbl_801E6C24:
	lwz      r4, 8(r6)
	stbx     r5, r4, r7
	addi     r7, r7, 1

lbl_801E6C30:
	lhz      r0, 4(r6)
	cmpw     r7, r0
	blt      lbl_801E6C24
	li       r7, 0
	mr       r5, r7
	b        lbl_801E6C54

lbl_801E6C48:
	lwz      r4, 0x10(r6)
	stbx     r5, r4, r7
	addi     r7, r7, 1

lbl_801E6C54:
	lhz      r0, 0xc(r6)
	cmpw     r7, r0
	blt      lbl_801E6C48
	li       r7, 0
	mr       r5, r7
	b        lbl_801E6C78

lbl_801E6C6C:
	lwz      r4, 0x18(r6)
	stbx     r5, r4, r7
	addi     r7, r7, 1

lbl_801E6C78:
	lhz      r0, 0x14(r6)
	cmpw     r7, r0
	blt      lbl_801E6C6C
	li       r7, 0
	lwz      r6, 0xb0(r31)
	mr       r5, r7
	b        lbl_801E6CA0

lbl_801E6C94:
	lwz      r4, 8(r6)
	stbx     r5, r4, r7
	addi     r7, r7, 1

lbl_801E6CA0:
	lhz      r0, 4(r6)
	cmpw     r7, r0
	blt      lbl_801E6C94
	li       r7, 0
	mr       r5, r7
	b        lbl_801E6CC4

lbl_801E6CB8:
	lwz      r4, 0x10(r6)
	stbx     r5, r4, r7
	addi     r7, r7, 1

lbl_801E6CC4:
	lhz      r0, 0xc(r6)
	cmpw     r7, r0
	blt      lbl_801E6CB8
	li       r7, 0
	mr       r5, r7
	b        lbl_801E6CE8

lbl_801E6CDC:
	lwz      r4, 0x18(r6)
	stbx     r5, r4, r7
	addi     r7, r7, 1

lbl_801E6CE8:
	lhz      r0, 0x14(r6)
	cmpw     r7, r0
	blt      lbl_801E6CDC
	li       r0, 0
	cmpwi    r3, 0
	stw      r0, 0xbc(r31)
	li       r4, 0
	ble      lbl_801E6DFC
	cmpwi    r3, 8
	addi     r5, r3, -8
	ble      lbl_801E6DD0
	addi     r0, r5, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r5, 0
	ble      lbl_801E6DD0

lbl_801E6D28:
	lwz      r5, 0xdc(r31)
	li       r12, 0
	addi     r11, r4, 1
	addi     r10, r4, 2
	stbx     r12, r5, r4
	addi     r9, r4, 3
	addi     r8, r4, 4
	addi     r7, r4, 5
	lwz      r5, 0xf4(r31)
	addi     r6, r4, 6
	addi     r0, r4, 7
	stbx     r12, r5, r4
	addi     r4, r4, 8
	lwz      r5, 0xdc(r31)
	stbx     r12, r5, r11
	lwz      r5, 0xf4(r31)
	stbx     r12, r5, r11
	lwz      r5, 0xdc(r31)
	stbx     r12, r5, r10
	lwz      r5, 0xf4(r31)
	stbx     r12, r5, r10
	lwz      r5, 0xdc(r31)
	stbx     r12, r5, r9
	lwz      r5, 0xf4(r31)
	stbx     r12, r5, r9
	lwz      r5, 0xdc(r31)
	stbx     r12, r5, r8
	lwz      r5, 0xf4(r31)
	stbx     r12, r5, r8
	lwz      r5, 0xdc(r31)
	stbx     r12, r5, r7
	lwz      r5, 0xf4(r31)
	stbx     r12, r5, r7
	lwz      r5, 0xdc(r31)
	stbx     r12, r5, r6
	lwz      r5, 0xf4(r31)
	stbx     r12, r5, r6
	lwz      r5, 0xdc(r31)
	stbx     r12, r5, r0
	lwz      r5, 0xf4(r31)
	stbx     r12, r5, r0
	bdnz     lbl_801E6D28

lbl_801E6DD0:
	subf     r0, r4, r3
	li       r5, 0
	mtctr    r0
	cmpw     r4, r3
	bge      lbl_801E6DFC

lbl_801E6DE4:
	lwz      r3, 0xdc(r31)
	stbx     r5, r3, r4
	lwz      r3, 0xf4(r31)
	stbx     r5, r3, r4
	addi     r4, r4, 1
	bdnz     lbl_801E6DE4

lbl_801E6DFC:
	mr       r3, r31
	bl       resetContainerFlag__Q24Game8PlayDataFv
	addi     r3, r31, 0x30
	bl       all_zero__8BitFlagsFv
	addi     r3, r31, 0x38
	bl       all_zero__8BitFlagsFv
	addi     r3, r31, 0x40
	bl       clear__Q34Game8TekiStat3MgrFv
	li       r0, 0
	addi     r3, r31, 0x4c
	stb      r0, 0x48(r31)
	stb      r0, 0x49(r31)
	stb      r0, 0x4a(r31)
	stb      r0, 0x4b(r31)
	bl       clear__Q24Game12CaveSaveDataFv
	addi     r3, r31, 0x84
	bl       clear__Q32kh6Screen12MailSaveDataFv
	li       r0, 0
	stw      r0, 0x118(r31)
	stw      r0, 0x100(r31)
	stw      r0, 0x11c(r31)
	stw      r0, 0x104(r31)
	stw      r0, 0x120(r31)
	stw      r0, 0x108(r31)
	stw      r0, 0x124(r31)
	stw      r0, 0x10c(r31)
	stw      r0, 0x128(r31)
	stw      r0, 0x110(r31)
	stw      r0, 0x12c(r31)
	stw      r0, 0x114(r31)
	bl       clear__Q24Game8DeathMgrFv
	bl       clear__Q24Game8BirthMgrFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E6E90
 * Size:	0000C8
 */
void PlayData::setDevelopSetting(bool p1, bool p2)
{
	_18 = p1;
	if (p1) {
		initCourses(true);
		debugSetContainerFlagOn();
		m_demoFlags.all_one();
		m_findItemFlags.all_one();
		m_olimarData[0].m_flags[0] |= 4;
		playData->openCourse(1);
		initCourses(true);
		if (!p2) {
			m_demoFlags.resetFlag(0x32);
			m_demoFlags.resetFlag(0x1B);
			m_demoFlags.resetFlag(0x1C);
			m_demoFlags.resetFlag(0x1D);
			m_demoFlags.resetFlag(0x1E);
		}
	}
}

/*
 * --INFO--
 * Address:	801E6F58
 * Size:	0000B4
 */
int PlayData::calcPlayMinutes()
{

	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	mr       r29, r3
	bl       OSGetTime
	mr       r30, r4
	mr       r31, r3
	addi     r5, r1, 0x58
	bl       OSTicksToCalendarTime
	lwz      r3, 0xd0(r29)
	addi     r5, r1, 0x30
	lwz      r4, 0xd4(r29)
	bl       OSTicksToCalendarTime
	lwz      r3, 0xd4(r29)
	addi     r5, r1, 8
	lwz      r0, 0xd0(r29)
	subfc    r30, r3, r30
	subfe    r31, r0, r31
	mr       r4, r30
	mr       r3, r31
	bl       OSTicksToCalendarTime
	lis      r4, 0x800000F8@ha
	mr       r3, r31
	lwz      r0, 0x800000F8@l(r4)
	mr       r4, r30
	li       r5, 0
	srwi     r6, r0, 2
	bl       __div2i
	lis      r3, 0x88888889@ha
	addi     r0, r3, 0x88888889@l
	mulhw    r0, r0, r4
	add      r0, r0, r4
	srawi    r0, r0, 5
	srwi     r3, r0, 0x1f
	add      r3, r0, r3
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E700C
 * Size:	000014
 */
void PlayData::resetContainerFlag()
{
	m_meetPikminFlags       = 0;
	m_hasBootContainerFlags = 0;
	m_hasContainerFlags     = 0;
}

/*
 * --INFO--
 * Address:	801E7020
 * Size:	000088
 */
bool PlayData::hasContainer(int pikminColor)
{
	bool isValidIndex = false;
	if (0 <= pikminColor && pikminColor < 5) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1002, isValidIndex);
	return m_hasContainerFlags & (1 << pikminColor);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_801E7050
	cmpwi    r31, 5
	bge      lbl_801E7050
	li       r0, 1

lbl_801E7050:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801E7074
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x3ea
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7074:
	li       r0, 1
	lbz      r3, 0x2c(r30)
	slw      r0, r0, r31
	and      r3, r3, r0
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E70A8
 * Size:	000030
 */
bool PlayData::hasMetPikmin(int pikminColor)
{
	if (pikminColor == Bulbmin) {
		return true;
	}
	return m_meetPikminFlags & (1 << pikminColor);
}

/*
 * --INFO--
 * Address:	801E70D8
 * Size:	0000A4
 */
bool PlayData::hasBootContainer(int pikminColor)
{
	bool isValidIndex;
	if (pikminColor == White || pikminColor == Purple) {
		return false;
	} else {
		isValidIndex = false;
		if (0 <= pikminColor && pikminColor <= 2) {
			isValidIndex = true;
		}
		P2ASSERTLINE(1018, isValidIndex);
		return m_hasBootContainerFlags & (1 << pikminColor);
	}
}

/*
 * --INFO--
 * Address:	801E717C
 * Size:	000080
 */
void PlayData::setContainer(int pikminColor)
{
	bool isValidIndex = false;
	if (0 <= pikminColor && pikminColor < 5) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1024, isValidIndex);
	m_hasContainerFlags |= (1 << pikminColor);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_801E71AC
	cmpwi    r31, 5
	bge      lbl_801E71AC
	li       r0, 1

lbl_801E71AC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801E71D0
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x400
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E71D0:
	li       r0, 1
	lbz      r3, 0x2c(r30)
	slw      r0, r0, r31
	or       r0, r3, r0
	stb      r0, 0x2c(r30)
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
 * Address:	801E71FC
 * Size:	000080
 */
void PlayData::setMeetPikmin(int pikminColor)
{
	bool isValidIndex = false;
	if (0 <= pikminColor && pikminColor < 5) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1030, isValidIndex);
	m_meetPikminFlags |= (1 << pikminColor);
}

/*
 * --INFO--
 * Address:	801E727C
 * Size:	000080
 */
void PlayData::setBootContainer(int pikminColor)
{
	bool isValidIndex = false;
	if (0 <= pikminColor && pikminColor <= 2) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1036, isValidIndex);
	m_hasBootContainerFlags |= (1 << pikminColor);
}

/*
 * --INFO--
 * Address:	801E72FC
 * Size:	0000A8
 */
void PlayData::debugSetContainerFlagOn()
{
	m_hasContainerFlags |= 0x01;
	m_hasContainerFlags |= 0x02;
	m_hasContainerFlags |= 0x04;
	m_hasContainerFlags |= 0x10;
	m_hasContainerFlags |= 0x08;
	m_hasBootContainerFlags |= 0x01;
	m_hasBootContainerFlags |= 0x02;
	m_hasBootContainerFlags |= 0x04;
	m_meetPikminFlags |= 0x01;
	m_meetPikminFlags |= 0x02;
	m_meetPikminFlags |= 0x04;
	m_meetPikminFlags |= 0x10;
	m_meetPikminFlags |= 0x08;
	_19 = 1;
}

/*
 * --INFO--
 * Address:	801E73A4
 * Size:	00003C
 */
void PlayData::setDemoFlag(int flag)
{
	m_demoFlags.setFlag(flag);
	m_demoFlags.dump();
}

/*
 * --INFO--
 * Address:	801E73E0
 * Size:	000028
 */
bool PlayData::isDemoFlag(int flag) { return m_demoFlags.isFlag(flag); }

/*
 * --INFO--
 * Address:	801E7408
 * Size:	00003C
 */
void PlayData::setFindItemDemoFlag(int flag)
{
	m_findItemFlags.setFlag(flag);
	m_findItemFlags.dump();
}

/*
 * --INFO--
 * Address:	801E7444
 * Size:	000028
 */
bool PlayData::isFindItemDemoFlag(int flag)
{
	return m_findItemFlags.isFlag(flag);
}

/*
 * --INFO--
 * Address:	801E746C
 * Size:	000008
 */
void PlayData::setCurrentCourse(int a1)
{
	// Generated from stw r4, 0x50(r3)
	m_caveSaveData.m_currentCourse = a1;
}

/*
 * --INFO--
 * Address:	801E7474
 * Size:	00000C
 */
void PlayData::clearCurrentCave()
{
	// Generated from stb r0, 0x4C(r3)
	m_caveSaveData.m_isInCave = false;
}

/*
 * --INFO--
 * Address:	801E7480
 * Size:	00004C
 */
void PlayData::setCurrentCave(ID32& caveID, int floor)
{
	m_caveSaveData.m_currentCaveID.setID(caveID.m_id.raw);
	m_caveSaveData.m_currentFloor = floor;
	m_caveSaveData.m_isInCave     = true;
}

/*
 * --INFO--
 * Address:	801E74CC
 * Size:	000010
 */
void PlayData::setCurrentCaveFloor(int floor)
{
	m_caveSaveData.m_currentFloor = floor;
	m_caveSaveData.m_isInCave     = true;
}

/*
 * --INFO--
 * Address:	801E74DC
 * Size:	000008
 */
int PlayData::getCurrentCourseIndex() { return m_caveSaveData.m_currentCourse; }

/*
 * --INFO--
 * Address:	801E74E4
 * Size:	000038
 */
CourseInfo* PlayData::getCurrentCourse()
{
	if (m_caveSaveData.m_currentCourse == -1) {
		return nullptr;
	}
	return stageList->getCourseInfo(m_caveSaveData.m_currentCourse);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x50(r3)
	cmpwi    r4, -1
	beq      lbl_801E7508
	lwz      r3, stageList__4Game@sda21(r13)
	bl       getCourseInfo__Q24Game6StagesFi
	b        lbl_801E750C

lbl_801E7508:
	li       r3, 0

lbl_801E750C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E751C
 * Size:	000048
 */
void PlayData::getCurrentCave(ID32& outCaveID, int& outCaveFloor)
{
	outCaveID.setID(m_caveSaveData.m_currentCaveID.m_id.raw);
	outCaveFloor = m_caveSaveData.m_currentFloor;
}

/*
 * --INFO--
 * Address:	801E7564
 * Size:	000030
 */
bool PlayData::firstCarryPellet(Game::Pellet* pellet)
{
	return _B0->firstCarryPellet(pellet);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0xb0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E7594
 * Size:	000030
 */
void PlayData::obtainPellet(BasePelletMgr* mgr, int p2)
{
	_B0->obtainPellet(mgr, p2);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0xb0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E75C4
 * Size:	000030
 */
void PlayData::losePellet(Game::BasePelletMgr* mgr, int p2)
{
	_B0->losePellet(mgr, p2);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0xb0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E75F4
 * Size:	000320
 */
void PlayData::obtainPellet_Main(Game::Pellet*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	stw      r28, 0x10(r1)
	lwz      r12, 0(r30)
	lwz      r31, 0xb4(r29)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_801E76E0
	mr       r3, r30
	bl       getConfigIndex__Q24Game6PelletFv
	or.      r28, r3, r3
	li       r3, 0
	blt      lbl_801E7660
	lhz      r0, 4(r31)
	cmpw     r28, r0
	bge      lbl_801E7660
	li       r3, 1

lbl_801E7660:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7684
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7684:
	lwz      r5, 8(r31)
	mr       r3, r30
	lbzx     r4, r5, r28
	addi     r0, r4, 1
	stbx     r0, r5, r28
	bl       getConfigName__Q24Game6PelletFv
	cmpwi    r28, 0
	li       r3, 0
	blt      lbl_801E76B8
	lhz      r0, 4(r31)
	cmpw     r28, r0
	bge      lbl_801E76B8
	li       r3, 1

lbl_801E76B8:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7864
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_801E7864

lbl_801E76E0:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_801E77A4
	mr       r3, r30
	bl       getConfigIndex__Q24Game6PelletFv
	or.      r28, r3, r3
	li       r3, 0
	blt      lbl_801E7724
	lhz      r0, 0xc(r31)
	cmpw     r28, r0
	bge      lbl_801E7724
	li       r3, 1

lbl_801E7724:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7748
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7748:
	lwz      r5, 0x10(r31)
	mr       r3, r30
	lbzx     r4, r5, r28
	addi     r0, r4, 1
	stbx     r0, r5, r28
	bl       getConfigName__Q24Game6PelletFv
	cmpwi    r28, 0
	li       r3, 0
	blt      lbl_801E777C
	lhz      r0, 0xc(r31)
	cmpw     r28, r0
	bge      lbl_801E777C
	li       r3, 1

lbl_801E777C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7864
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_801E7864

lbl_801E77A4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_801E7864
	mr       r3, r30
	bl       getConfigIndex__Q24Game6PelletFv
	or.      r28, r3, r3
	li       r3, 0
	blt      lbl_801E77E8
	lhz      r0, 0x14(r31)
	cmpw     r28, r0
	bge      lbl_801E77E8
	li       r3, 1

lbl_801E77E8:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E780C
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E780C:
	lwz      r5, 0x18(r31)
	mr       r3, r30
	lbzx     r4, r5, r28
	addi     r0, r4, 1
	stbx     r0, r5, r28
	bl       getConfigName__Q24Game6PelletFv
	cmpwi    r28, 0
	li       r3, 0
	blt      lbl_801E7840
	lhz      r0, 0x14(r31)
	cmpw     r28, r0
	bge      lbl_801E7840
	li       r3, 1

lbl_801E7840:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7864
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7864:
	mr       r3, r30
	li       r28, 0
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_801E7890
	lwz      r28, mgr__Q24Game13PelletOtakara@sda21(r13)
	b        lbl_801E78B4

lbl_801E7890:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_801E78B4
	lwz      r28, mgr__Q24Game10PelletItem@sda21(r13)

lbl_801E78B4:
	cmplwi   r28, 0
	beq      lbl_801E78E0
	mr       r3, r30
	bl       getConfigIndex__Q24Game6PelletFv
	mr       r5, r3
	lwz      r3, 0xb0(r29)
	mr       r4, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_801E78E0:
	lwz      r3, 0x35c(r30)
	lwz      r4, 0xe8(r29)
	lwz      r0, 0x170(r3)
	add      r0, r4, r0
	stw      r0, 0xe8(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E7914
 * Size:	000284
 */
void PlayData::obtainPellet_Cave(Game::Pellet*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	lwz      r12, 0(r30)
	lwz      r31, 0xb8(r3)
	mr       r3, r30
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_801E79F8
	mr       r3, r30
	bl       getConfigIndex__Q24Game6PelletFv
	or.      r29, r3, r3
	li       r3, 0
	blt      lbl_801E7978
	lhz      r0, 4(r31)
	cmpw     r29, r0
	bge      lbl_801E7978
	li       r3, 1

lbl_801E7978:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E799C
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E799C:
	lwz      r5, 8(r31)
	mr       r3, r30
	lbzx     r4, r5, r29
	addi     r0, r4, 1
	stbx     r0, r5, r29
	bl       getConfigName__Q24Game6PelletFv
	cmpwi    r29, 0
	li       r3, 0
	blt      lbl_801E79D0
	lhz      r0, 4(r31)
	cmpw     r29, r0
	bge      lbl_801E79D0
	li       r3, 1

lbl_801E79D0:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7B7C
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_801E7B7C

lbl_801E79F8:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_801E7ABC
	mr       r3, r30
	bl       getConfigIndex__Q24Game6PelletFv
	or.      r29, r3, r3
	li       r3, 0
	blt      lbl_801E7A3C
	lhz      r0, 0xc(r31)
	cmpw     r29, r0
	bge      lbl_801E7A3C
	li       r3, 1

lbl_801E7A3C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7A60
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7A60:
	lwz      r5, 0x10(r31)
	mr       r3, r30
	lbzx     r4, r5, r29
	addi     r0, r4, 1
	stbx     r0, r5, r29
	bl       getConfigName__Q24Game6PelletFv
	cmpwi    r29, 0
	li       r3, 0
	blt      lbl_801E7A94
	lhz      r0, 0xc(r31)
	cmpw     r29, r0
	bge      lbl_801E7A94
	li       r3, 1

lbl_801E7A94:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7B7C
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_801E7B7C

lbl_801E7ABC:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_801E7B7C
	mr       r3, r30
	bl       getConfigIndex__Q24Game6PelletFv
	or.      r29, r3, r3
	li       r3, 0
	blt      lbl_801E7B00
	lhz      r0, 0x14(r31)
	cmpw     r29, r0
	bge      lbl_801E7B00
	li       r3, 1

lbl_801E7B00:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7B24
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7B24:
	lwz      r5, 0x18(r31)
	mr       r3, r30
	lbzx     r4, r5, r29
	addi     r0, r4, 1
	stbx     r0, r5, r29
	bl       getConfigName__Q24Game6PelletFv
	cmpwi    r29, 0
	li       r3, 0
	blt      lbl_801E7B58
	lhz      r0, 0x14(r31)
	cmpw     r29, r0
	bge      lbl_801E7B58
	li       r3, 1

lbl_801E7B58:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7B7C
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7B7C:
	lwz      r0, 0x24(r1)
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
 * Address:	........
 * Size:	000004
 */
void PlayData::confirmCaveCropMemory() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
bool PlayData::isPelletEverGot(Pellet*) { }

/*
 * --INFO--
 * Address:	801E7B98
 * Size:	000104
 */
bool PlayData::isPelletEverGot(unsigned char, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi   r0, r4, 0x18
	lis      r4, lbl_80480E40@ha
	stw      r31, 0xc(r1)
	cmplwi   r0, 4
	addi     r4, r4, lbl_80480E40@l
	stw      r30, 8(r1)
	bne      lbl_801E7C14
	clrlwi.  r30, r5, 0x18
	lwz      r31, 0xb0(r3)
	li       r3, 0
	blt      lbl_801E7BE0
	lhz      r0, 0xc(r31)
	cmpw     r30, r0
	bge      lbl_801E7BE0
	li       r3, 1

lbl_801E7BE0:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7BFC
	addi     r3, r4, 0xc
	addi     r5, r4, 0x20
	li       r4, 0x14a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7BFC:
	lwz      r3, 0x10(r31)
	lbzx     r3, r3, r30
	neg      r0, r3
	andc     r0, r0, r3
	srwi     r3, r0, 0x1f
	b        lbl_801E7C84

lbl_801E7C14:
	cmplwi   r0, 3
	bne      lbl_801E7C70
	clrlwi.  r30, r5, 0x18
	lwz      r31, 0xb0(r3)
	li       r3, 0
	blt      lbl_801E7C3C
	lhz      r0, 4(r31)
	cmpw     r30, r0
	bge      lbl_801E7C3C
	li       r3, 1

lbl_801E7C3C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7C58
	addi     r3, r4, 0xc
	addi     r5, r4, 0x20
	li       r4, 0x14a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7C58:
	lwz      r3, 8(r31)
	lbzx     r3, r3, r30
	neg      r0, r3
	andc     r0, r0, r3
	srwi     r3, r0, 0x1f
	b        lbl_801E7C84

lbl_801E7C70:
	addi     r3, r4, 0xc
	addi     r5, r4, 0x48
	li       r4, 0x57e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7C84:
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
 * Address:	801E7C9C
 * Size:	000128
 */
bool PlayData::isPelletZukanVisible(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 3
	stw      r30, 8(r1)
	mr       r30, r4
	bl       getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r4, r30
	bl       getPelletConfig_ByDictionaryNo__Q24Game16PelletConfigListFi
	cmplwi   r3, 0
	beq      lbl_801E7D30
	lha      r30, 0x258(r3)
	li       r3, 0
	lwz      r31, 0xb0(r31)
	cmpwi    r30, 0
	blt      lbl_801E7CF4
	lhz      r0, 4(r31)
	cmpw     r30, r0
	bge      lbl_801E7CF4
	li       r3, 1

lbl_801E7CF4:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7D18
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7D18:
	lwz      r3, 8(r31)
	lbzx     r0, r3, r30
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_801E7DA8
	li       r3, 1
	b        lbl_801E7DAC

lbl_801E7D30:
	li       r3, 4
	bl       getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r4, r30
	bl       getPelletConfig_ByDictionaryNo__Q24Game16PelletConfigListFi
	cmplwi   r3, 0
	beq      lbl_801E7DA8
	lha      r30, 0x258(r3)
	li       r3, 0
	lwz      r31, 0xb0(r31)
	cmpwi    r30, 0
	blt      lbl_801E7D6C
	lhz      r0, 0xc(r31)
	cmpw     r30, r0
	bge      lbl_801E7D6C
	li       r3, 1

lbl_801E7D6C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7D90
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7D90:
	lwz      r3, 0x10(r31)
	lbzx     r0, r3, r30
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_801E7DA8
	li       r3, 1
	b        lbl_801E7DAC

lbl_801E7DA8:
	li       r3, 0

lbl_801E7DAC:
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
 * Address:	801E7DC4
 * Size:	000138
 */
bool PlayData::isPelletZukanWhatsNew(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 3
	stw      r30, 8(r1)
	mr       r30, r4
	bl       getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r4, r30
	bl       getPelletConfig_ByDictionaryNo__Q24Game16PelletConfigListFi
	cmplwi   r3, 0
	beq      lbl_801E7E60
	lha      r30, 0x258(r3)
	li       r3, 0
	lwz      r31, 0xb0(r31)
	cmpwi    r30, 0
	blt      lbl_801E7E1C
	lhz      r0, 4(r31)
	cmpw     r30, r0
	bge      lbl_801E7E1C
	li       r3, 1

lbl_801E7E1C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7E40
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7E40:
	lwz      r3, 8(r31)
	lbzx     r3, r3, r30
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_801E7EE0
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	bne      lbl_801E7EE0
	li       r3, 1
	b        lbl_801E7EE4

lbl_801E7E60:
	li       r3, 4
	bl       getConfigList__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r4, r30
	bl       getPelletConfig_ByDictionaryNo__Q24Game16PelletConfigListFi
	cmplwi   r3, 0
	beq      lbl_801E7EE0
	lha      r30, 0x258(r3)
	li       r3, 0
	lwz      r31, 0xb0(r31)
	cmpwi    r30, 0
	blt      lbl_801E7E9C
	lhz      r0, 0xc(r31)
	cmpw     r30, r0
	bge      lbl_801E7E9C
	li       r3, 1

lbl_801E7E9C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7EC0
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7EC0:
	lwz      r3, 0x10(r31)
	lbzx     r3, r3, r30
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_801E7EE0
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	bne      lbl_801E7EE0
	li       r3, 1
	b        lbl_801E7EE4

lbl_801E7EE0:
	li       r3, 0

lbl_801E7EE4:
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
 * Address:	801E7EFC
 * Size:	0001BC
 */
bool PlayData::hasPelletZukanWhatsNew()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 0xb0(r3)
	b        lbl_801E7FCC

lbl_801E7F24:
	cmpwi    r30, 0
	li       r0, 0
	blt      lbl_801E7F3C
	cmpw     r30, r3
	bge      lbl_801E7F3C
	li       r0, 1

lbl_801E7F3C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801E7F60
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7F60:
	lwz      r3, 8(r31)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	beq      lbl_801E7FC8
	cmpwi    r30, 0
	li       r3, 0
	blt      lbl_801E7F8C
	lhz      r0, 4(r31)
	cmpw     r30, r0
	bge      lbl_801E7F8C
	li       r3, 1

lbl_801E7F8C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E7FB0
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E7FB0:
	lwz      r3, 8(r31)
	lbzx     r0, r3, r30
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_801E7FC8
	li       r3, 1
	b        lbl_801E809C

lbl_801E7FC8:
	addi     r30, r30, 1

lbl_801E7FCC:
	lhz      r3, 4(r31)
	cmpw     r30, r3
	blt      lbl_801E7F24
	lwz      r31, 0xb0(r29)
	li       r30, 0
	b        lbl_801E808C

lbl_801E7FE4:
	cmpwi    r30, 0
	li       r0, 0
	blt      lbl_801E7FFC
	cmpw     r30, r3
	bge      lbl_801E7FFC
	li       r0, 1

lbl_801E7FFC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801E8020
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E8020:
	lwz      r3, 0x10(r31)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	beq      lbl_801E8088
	cmpwi    r30, 0
	li       r3, 0
	blt      lbl_801E804C
	lhz      r0, 0xc(r31)
	cmpw     r30, r0
	bge      lbl_801E804C
	li       r3, 1

lbl_801E804C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E8070
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E8070:
	lwz      r3, 0x10(r31)
	lbzx     r0, r3, r30
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_801E8088
	li       r3, 1
	b        lbl_801E809C

lbl_801E8088:
	addi     r30, r30, 1

lbl_801E808C:
	lhz      r3, 0xc(r31)
	cmpw     r30, r3
	blt      lbl_801E7FE4
	li       r3, 0

lbl_801E809C:
	lwz      r0, 0x24(r1)
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
 * Address:	801E80B8
 * Size:	0001A8
 */
void PlayData::setPelletZukanOutOfDateAll()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 0xb0(r3)
	b        lbl_801E8180

lbl_801E80E0:
	cmpwi    r30, 0
	li       r0, 0
	blt      lbl_801E80F8
	cmpw     r30, r3
	bge      lbl_801E80F8
	li       r0, 1

lbl_801E80F8:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801E811C
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E811C:
	lwz      r3, 8(r31)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	beq      lbl_801E817C
	cmpwi    r30, 0
	li       r3, 0
	blt      lbl_801E8148
	lhz      r0, 4(r31)
	cmpw     r30, r0
	bge      lbl_801E8148
	li       r3, 1

lbl_801E8148:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E816C
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E816C:
	lwz      r3, 8(r31)
	lbzx     r0, r3, r30
	ori      r0, r0, 4
	stbx     r0, r3, r30

lbl_801E817C:
	addi     r30, r30, 1

lbl_801E8180:
	lhz      r3, 4(r31)
	cmpw     r30, r3
	blt      lbl_801E80E0
	lwz      r31, 0xb0(r29)
	li       r30, 0
	b        lbl_801E8238

lbl_801E8198:
	cmpwi    r30, 0
	li       r0, 0
	blt      lbl_801E81B0
	cmpw     r30, r3
	bge      lbl_801E81B0
	li       r0, 1

lbl_801E81B0:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801E81D4
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E81D4:
	lwz      r3, 0x10(r31)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	beq      lbl_801E8234
	cmpwi    r30, 0
	li       r3, 0
	blt      lbl_801E8200
	lhz      r0, 0xc(r31)
	cmpw     r30, r0
	bge      lbl_801E8200
	li       r3, 1

lbl_801E8200:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E8224
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x14a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E8224:
	lwz      r3, 0x10(r31)
	lbzx     r0, r3, r30
	ori      r0, r0, 4
	stbx     r0, r3, r30

lbl_801E8234:
	addi     r30, r30, 1

lbl_801E8238:
	lhz      r3, 0xc(r31)
	cmpw     r30, r3
	blt      lbl_801E8198
	lwz      r0, 0x24(r1)
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
 * Address:	........
 * Size:	0000C4
 */
int PlayData::getTekiCarcassMoney(int) { }

/*
 * --INFO--
 * Address:	801E8260
 * Size:	00007C
 */
int PlayData::getGroundOtakaraNum(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_801E8298
	lwz      r3, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r3)
	cmpw     r31, r0
	bge      lbl_801E8298
	li       r4, 1

lbl_801E8298:
	clrlwi.  r0, r4, 0x18
	bne      lbl_801E82BC
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x607
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E82BC:
	lwz      r3, 0xdc(r30)
	lwz      r0, 0x14(r1)
	lbzx     r3, r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E82DC
 * Size:	000078
 */
int PlayData::getGroundOtakaraMax(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	li       r4, 0
	blt      lbl_801E830C
	lwz      r3, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r3)
	cmpw     r31, r0
	bge      lbl_801E830C
	li       r4, 1

lbl_801E830C:
	clrlwi.  r0, r4, 0x18
	bne      lbl_801E8330
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x60e
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E8330:
	lwz      r3, stageList__4Game@sda21(r13)
	mr       r4, r31
	bl       getCourseInfo__Q24Game6StagesFi
	lwz      r0, 0x14(r1)
	lwz      r3, 0xcc(r3)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E8354
 * Size:	000084
 */
void PlayData::incGroundOtakara(int index)
{
	bool isValidIndex = false;
	if (0 <= index && index < stageList->m_courseCount) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1558, isValidIndex);
	m_groundOtakaraCollected[index]++;
}

/*
 * --INFO--
 * Address:	801E83D8
 * Size:	000078
 */
int PlayData::getDopeCount(int sprayIndex)
{
	bool isValidIndex = false;
	if (0 <= sprayIndex && sprayIndex < 2) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1572, isValidIndex);
	return _C0[sprayIndex];
}

/*
 * --INFO--
 * Address:	801E8450
 * Size:	000084
 */
void PlayData::setDopeCount(int sprayIndex, int sprayCount)
{
	bool isValidIndex = false;
	if (0 <= sprayIndex && sprayIndex < 2) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1578, isValidIndex);
	_C0[sprayIndex] = sprayCount;
}

/*
 * --INFO--
 * Address:	801E84D4
 * Size:	000080
 */
void PlayData::incDopeCount(int sprayIndex)
{
	bool isValidIndex = false;
	if (0 <= sprayIndex && sprayIndex < 2) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1584, isValidIndex);
	_C0[sprayIndex]++;
}

/*
 * --INFO--
 * Address:	801E8554
 * Size:	000084
 */
bool PlayData::hasDope(int sprayIndex)
{
	bool isValidIndex = false;
	if (0 <= sprayIndex && sprayIndex < 2) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1590, isValidIndex);
	return (0 < _C0[sprayIndex]);
}

/*
 * --INFO--
 * Address:	801E85D8
 * Size:	000078
 */
int PlayData::getDopeFruitCount(int sprayIndex)
{
	bool isValidIndex = false;
	if (0 <= sprayIndex && sprayIndex < 2) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1596, isValidIndex);
	return m_berryCount[sprayIndex];
}

/*
 * --INFO--
 * Address:	801E8650
 * Size:	0000B4
 */
void PlayData::addDopeFruit(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_801E8680
	cmpwi    r31, 2
	bge      lbl_801E8680
	li       r0, 1

lbl_801E8680:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801E86A4
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x642
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E86A4:
	slwi     r0, r31, 2
	add      r5, r30, r0
	lwz      r3, 0xc8(r5)
	addi     r0, r3, 1
	stw      r0, 0xc8(r5)
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lwz      r4, 0xc8(r5)
	lwz      r0, 0x38(r3)
	cmpw     r4, r0
	blt      lbl_801E86E8
	li       r0, 0
	li       r3, 1
	stw      r0, 0xc8(r5)
	lwz      r4, 0xc0(r5)
	addi     r0, r4, 1
	stw      r0, 0xc0(r5)
	b        lbl_801E86EC

lbl_801E86E8:
	li       r3, 0

lbl_801E86EC:
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
 * Address:	801E8704
 * Size:	0000C4
 */
void PlayData::useDope(int sprayIndex)
{
	bool isValidIndex = false;
	if (0 <= sprayIndex && sprayIndex < 2) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1614, isValidIndex);
	if (hasDope(sprayIndex)) {
		_C0[sprayIndex]--;
	}
}

/*
 * --INFO--
 * Address:	801E87C8
 * Size:	0000DC
 */
bool PlayData::isCaveFirstTime(int courseIndex, ID32& caveID)
{
	CourseInfo* info = stageList->getCourseInfo(courseIndex);
	if (info) {
		// TODO
	}
	ID32 caveIDCopy;
	caveIDCopy.setID(caveID.m_id.raw);
	JUT_PANICLINE(1645, "no cave info : course(%d):[%s]\n", courseIndex,
	              caveID);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	mr       r30, r5
	stw      r29, 0x24(r1)
	mr       r29, r4
	lwz      r3, stageList__4Game@sda21(r13)
	bl       getCourseInfo__Q24Game6StagesFi
	cmplwi   r3, 0
	beq      lbl_801E884C
	mulli    r0, r29, 0xc
	lwz      r5, 0xe0(r31)
	mr       r4, r30
	add      r31, r5, r0
	bl       getCaveIndex_FromID__Q24Game10CourseInfoFR4ID32
	cmpwi    r3, -1
	beq      lbl_801E884C
	cmpwi    r3, 0
	blt      lbl_801E8844
	lbz      r0, 0(r31)
	cmpw     r3, r0
	bge      lbl_801E8844
	lwz      r4, 8(r31)
	slwi     r0, r3, 2
	lwzx     r0, r4, r0
	cntlzw   r0, r0
	srwi     r3, r0, 5
	b        lbl_801E8888

lbl_801E8844:
	li       r3, 0
	b        lbl_801E8888

lbl_801E884C:
	addi     r3, r1, 8
	bl       __ct__4ID32Fv
	lwz      r4, 8(r30)
	addi     r3, r1, 8
	bl       setID__4ID32FUl
	lis      r3, lbl_80480E4C@ha
	lis      r4, lbl_80480EB0@ha
	addi     r5, r4, lbl_80480EB0@l
	mr       r6, r29
	addi     r3, r3, lbl_80480E4C@l
	mr       r7, r30
	li       r4, 0x66d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_801E8888:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
bool PlayData::isCaveFirstReturn(int, ID32&) { }

/*
 * --INFO--
 * Address:	801E88A4
 * Size:	0000BC
 */
void PlayData::setCaveVisit(int, ID32&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r3, stageList__4Game@sda21(r13)
	bl       getCourseInfo__Q24Game6StagesFi
	cmplwi   r3, 0
	beq      lbl_801E8920
	mulli    r0, r29, 0xc
	lwz      r5, 0xe0(r31)
	mr       r4, r30
	add      r31, r5, r0
	bl       getCaveIndex_FromID__Q24Game10CourseInfoFR4ID32
	cmpwi    r3, -1
	beq      lbl_801E8920
	lwz      r4, 8(r31)
	slwi     r3, r3, 2
	lwzx     r0, r4, r3
	cmpwi    r0, 0
	bne      lbl_801E8914
	li       r0, 1
	stwx     r0, r4, r3
	b        lbl_801E8944

lbl_801E8914:
	li       r0, 2
	stwx     r0, r4, r3
	b        lbl_801E8944

lbl_801E8920:
	lis      r3, lbl_80480E4C@ha
	lis      r4, lbl_80480EB0@ha
	addi     r5, r4, lbl_80480EB0@l
	mr       r6, r29
	addi     r3, r3, lbl_80480E4C@l
	mr       r7, r30
	li       r4, 0x690
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E8944:
	lwz      r0, 0x24(r1)
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
 * Address:	801E8960
 * Size:	0000B8
 */
void PlayData::incCaveOtakara(int, ID32&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, stageList__4Game@sda21(r13)
	bl       getCourseInfo__Q24Game6StagesFi
	or.      r31, r3, r3
	beq      lbl_801E89F8
	mulli    r0, r29, 0xc
	lwz      r5, 0xe0(r28)
	mr       r4, r30
	add      r30, r5, r0
	bl       getCaveIndex_FromID__Q24Game10CourseInfoFR4ID32
	mr       r4, r3
	cmpwi    r4, -1
	beq      lbl_801E89F8
	cmpwi    r4, 0
	blt      lbl_801E89E4
	lbz      r0, 0(r30)
	cmpw     r4, r0
	bge      lbl_801E89E4
	lwz      r5, 4(r30)
	li       r6, 1
	lbzx     r3, r5, r4
	addi     r0, r3, 1
	stbx     r0, r5, r4
	b        lbl_801E89E8

lbl_801E89E4:
	li       r6, 0

lbl_801E89E8:
	clrlwi.  r0, r6, 0x18
	beq      lbl_801E89F8
	mr       r3, r31
	bl       getOtakaraNum__Q24Game10CourseInfoFi

lbl_801E89F8:
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
 * Address:	801E8A18
 * Size:	0000B8
 */
int PlayData::getOtakaraNum_Course_CaveID(int, ID32&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, stageList__4Game@sda21(r13)
	bl       getCourseInfo__Q24Game6StagesFi
	cmplwi   r3, 0
	beq      lbl_801E8A90
	mulli    r0, r30, 0xc
	lwz      r5, 0xe0(r29)
	mr       r4, r31
	add      r31, r5, r0
	bl       getCaveIndex_FromID__Q24Game10CourseInfoFR4ID32
	cmpwi    r3, -1
	beq      lbl_801E8AB0
	cmpwi    r3, 0
	blt      lbl_801E8A88
	lbz      r0, 0(r31)
	cmpw     r3, r0
	bge      lbl_801E8A88
	lwz      r4, 4(r31)
	lbzx     r3, r4, r3
	b        lbl_801E8AB4

lbl_801E8A88:
	li       r3, -1
	b        lbl_801E8AB4

lbl_801E8A90:
	lis      r3, lbl_80480E4C@ha
	lis      r4, lbl_80480ED0@ha
	addi     r5, r4, lbl_80480ED0@l
	mr       r6, r30
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x6bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E8AB0:
	li       r3, -1

lbl_801E8AB4:
	lwz      r0, 0x24(r1)
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
 * Address:	801E8AD0
 * Size:	000048
 */
int PlayData::getOtakaraMax_Course_CaveID(int, ID32&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	lwz      r3, stageList__4Game@sda21(r13)
	bl       getCourseInfo__Q24Game6StagesFi
	cmplwi   r3, 0
	beq      lbl_801E8B00
	mr       r4, r31
	bl       getOtakaraNum__Q24Game10CourseInfoFR4ID32
	b        lbl_801E8B04

lbl_801E8B00:
	li       r3, -1

lbl_801E8B04:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E8B18
 * Size:	0000D4
 */
void PlayData::initCaveOtakaras()
{
	/*
	lwz      r4, stageList__4Game@sda21(r13)
	li       r10, 0
	mr       r6, r10
	lhz      r8, 0x100(r4)
	mr       r5, r10
	mtctr    r8
	cmpwi    r8, 0
	ble      lbl_801E8B84

lbl_801E8B38:
	lwz      r0, 0xe0(r3)
	add      r11, r0, r10
	lbz      r0, 0(r11)
	cmplwi   r0, 0
	beq      lbl_801E8B7C
	li       r7, 0
	mr       r9, r7
	b        lbl_801E8B70

lbl_801E8B58:
	lwz      r4, 4(r11)
	stbx     r6, r4, r7
	addi     r7, r7, 1
	lwz      r4, 8(r11)
	stwx     r5, r4, r9
	addi     r9, r9, 4

lbl_801E8B70:
	lbz      r0, 0(r11)
	cmpw     r7, r0
	blt      lbl_801E8B58

lbl_801E8B7C:
	addi     r10, r10, 0xc
	bdnz     lbl_801E8B38

lbl_801E8B84:
	li       r9, 0
	mr       r6, r9
	mr       r5, r9
	mtctr    r8
	cmpwi    r8, 0
	blelr

lbl_801E8B9C:
	lwz      r0, 0xf8(r3)
	add      r10, r0, r9
	lbz      r0, 0(r10)
	cmplwi   r0, 0
	beq      lbl_801E8BE0
	li       r7, 0
	mr       r8, r7
	b        lbl_801E8BD4

lbl_801E8BBC:
	lwz      r4, 4(r10)
	stbx     r6, r4, r7
	addi     r7, r7, 1
	lwz      r4, 8(r10)
	stwx     r5, r4, r8
	addi     r8, r8, 4

lbl_801E8BD4:
	lbz      r0, 0(r10)
	cmpw     r7, r0
	blt      lbl_801E8BBC

lbl_801E8BE0:
	addi     r9, r9, 0xc
	bdnz     lbl_801E8B9C
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E8BEC
 * Size:	000060
 */
void PlayData::read_CaveOtakara(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	li       r29, 0
	li       r30, 0
	lwz      r5, stageList__4Game@sda21(r13)
	lhz      r31, 0x100(r5)
	b        lbl_801E8C30

lbl_801E8C18:
	lwz      r0, 0xe0(r27)
	mr       r4, r28
	add      r3, r0, r30
	bl       read__Q34Game8PlayData11CaveOtakaraFR6Stream
	addi     r30, r30, 0xc
	addi     r29, r29, 1

lbl_801E8C30:
	cmpw     r29, r31
	blt      lbl_801E8C18
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E8C4C
 * Size:	000078
 */
void PlayData::write_CaveOtakara(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_80480EFC@ha
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r28, r4
	mr       r27, r3
	addi     r4, r5, lbl_80480EFC@l
	mr       r3, r28
	bl       textBeginGroup__6StreamFPc
	lwz      r3, stageList__4Game@sda21(r13)
	li       r29, 0
	li       r30, 0
	lhz      r31, 0x100(r3)
	b        lbl_801E8CA0

lbl_801E8C88:
	lwz      r0, 0xe0(r27)
	mr       r4, r28
	add      r3, r0, r30
	bl       write__Q34Game8PlayData11CaveOtakaraFR6Stream
	addi     r30, r30, 0xc
	addi     r29, r29, 1

lbl_801E8CA0:
	cmpw     r29, r31
	blt      lbl_801E8C88
	mr       r3, r28
	bl       textEndGroup__6StreamFv
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E8CC4
 * Size:	0000D8
 */
void PlayData::CaveOtakara::write(Stream& output)
{
	output.textWriteTab(output.m_tabCount);
	output.writeByte(m_caveCount);
	output.textWriteText("# cave数\r\n");
	for (int i = 0; i < m_caveCount; i++) {
		output.textWriteTab(output.m_tabCount);
		output.writeByte(m_otakaraCountsOld[i]);
		output.textWriteText("# 個数\r\n");
		output.textWriteTab(output.m_tabCount);
		output.writeByte(_08[i]);
		output.textWriteText("# 状態\r\n");
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_80480E40@ha
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r28, r4
	mr       r27, r3
	addi     r31, r5, lbl_80480E40@l
	mr       r3, r28
	lwz      r4, 0x414(r4)
	bl       textWriteTab__6StreamFi
	lbz      r4, 0(r27)
	mr       r3, r28
	bl       writeByte__6StreamFUc
	mr       r3, r28
	addi     r4, r31, 0xcc
	crclr    6
	bl       textWriteText__6StreamFPce
	li       r29, 0
	li       r30, 0
	b        lbl_801E8D7C

lbl_801E8D18:
	lwz      r4, 0x414(r28)
	mr       r3, r28
	bl       textWriteTab__6StreamFi
	lwz      r4, 4(r27)
	mr       r3, r28
	lbzx     r4, r4, r29
	bl       writeByte__6StreamFUc
	mr       r3, r28
	addi     r4, r31, 0xd8
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r28)
	mr       r3, r28
	bl       textWriteTab__6StreamFi
	lwz      r4, 8(r27)
	mr       r3, r28
	lwzx     r0, r4, r30
	clrlwi   r4, r0, 0x18
	bl       writeByte__6StreamFUc
	mr       r3, r28
	addi     r4, r31, 0xe4
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_801E8D7C:
	lbz      r0, 0(r27)
	cmpw     r29, r0
	blt      lbl_801E8D18
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E8D9C
 * Size:	0000C0
 */
void PlayData::CaveOtakara::read(Stream& input)
{
	u8 existingCaveCount = m_caveCount;
	m_caveCount          = input.readByte();
	JUT_ASSERTLINE(1797, existingCaveCount == m_caveCount,
	               "セーブしたときと洞窟の数があいません\n");
	for (int i = 0; i < m_caveCount; i++) {
		m_otakaraCountsOld[i] = input.readByte();
		_08[i]                = input.readByte();
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lbz      r31, 0(r3)
	mr       r3, r29
	bl       readByte__6StreamFv
	stb      r3, 0(r28)
	lbz      r0, 0(r28)
	cmplw    r31, r0
	beq      lbl_801E8DF8
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480F30@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x705
	addi     r5, r5, lbl_80480F30@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E8DF8:
	li       r30, 0
	li       r31, 0
	b        lbl_801E8E30

lbl_801E8E04:
	mr       r3, r29
	bl       readByte__6StreamFv
	lwz      r4, 4(r28)
	stbx     r3, r4, r30
	mr       r3, r29
	bl       readByte__6StreamFv
	lwz      r4, 8(r28)
	clrlwi   r0, r3, 0x18
	addi     r30, r30, 1
	stwx     r0, r4, r31
	addi     r31, r31, 4

lbl_801E8E30:
	lbz      r0, 0(r28)
	cmpw     r30, r0
	blt      lbl_801E8E04
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
 * Address:	801E8E5C
 * Size:	000124
 */
int PlayData::getRepayLevel()
{
	/*
	stwu     r1, -0x20(r1)
	lis      r5, 0x4330
	lfd      f3, lbl_805199D8@sda21(r2)
	lwz      r4, _aiConstants__4Game@sda21(r13)
	lwz      r6, 0xe8(r3)
	lis      r3, "repay_levs__26@unnamed@gamePlayData_cpp@"@ha
	lwz      r0, 0x48(r4)
	xoris    r4, r6, 0x8000
	stw      r5, 8(r1)
	xoris    r0, r0, 0x8000
	lfs      f4, lbl_805199D4@sda21(r2)
	stw      r4, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f2, f0, f3
	lfsu     f0, "repay_levs__26@unnamed@gamePlayData_cpp@"@l(r3)
	stw      r5, 0x10(r1)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f3
	fdivs    f1, f2, f1
	fmuls    f1, f4, f1
	fcmpo    cr0, f0, f1
	ble      lbl_801E8EC0
	li       r3, -1
	b        lbl_801E8F78

lbl_801E8EC0:
	lfsu     f0, 4(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_801E8ED4
	li       r3, 0
	b        lbl_801E8F78

lbl_801E8ED4:
	lfsu     f0, 4(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_801E8EE8
	li       r3, 1
	b        lbl_801E8F78

lbl_801E8EE8:
	lfsu     f0, 4(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_801E8EFC
	li       r3, 2
	b        lbl_801E8F78

lbl_801E8EFC:
	lfsu     f0, 4(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_801E8F10
	li       r3, 3
	b        lbl_801E8F78

lbl_801E8F10:
	lfsu     f0, 4(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_801E8F24
	li       r3, 4
	b        lbl_801E8F78

lbl_801E8F24:
	lfsu     f0, 4(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_801E8F38
	li       r3, 5
	b        lbl_801E8F78

lbl_801E8F38:
	lfsu     f0, 4(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_801E8F4C
	li       r3, 6
	b        lbl_801E8F78

lbl_801E8F4C:
	lfsu     f0, 4(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_801E8F60
	li       r3, 7
	b        lbl_801E8F78

lbl_801E8F60:
	lfs      f0, 4(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_801E8F74
	li       r3, 8
	b        lbl_801E8F78

lbl_801E8F74:
	li       r3, 9

lbl_801E8F78:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E8F80
 * Size:	000044
 */
float PlayData::getRepayLevelPercent(int)
{
	/*
	cmpwi    r4, 0
	stwu     r1, -0x10(r1)
	blt      lbl_801E8FA0
	lis      r3, "repay_levs__26@unnamed@gamePlayData_cpp@"@ha
	slwi     r0, r4, 2
	addi     r3, r3, "repay_levs__26@unnamed@gamePlayData_cpp@"@l
	lfsx     f1, r3, r0
	b        lbl_801E8FBC

lbl_801E8FA0:
	xoris    r3, r4, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f1, lbl_805199D8@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f1, f0, f1

lbl_801E8FBC:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E8FC4
 * Size:	000160
 */
bool PlayData::checkRepayLevelFirstClear()
{
	/*
	stwu     r1, -0x20(r1)
	lis      r6, 0x4330
	lfd      f3, lbl_805199D8@sda21(r2)
	lis      r4, "repay_levs__26@unnamed@gamePlayData_cpp@"@ha
	lwz      r5, _aiConstants__4Game@sda21(r13)
	lwz      r7, 0xe8(r3)
	lwz      r0, 0x48(r5)
	xoris    r5, r7, 0x8000
	stw      r6, 8(r1)
	xoris    r0, r0, 0x8000
	lfs      f4, lbl_805199D4@sda21(r2)
	stw      r5, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f2, f0, f3
	lfsu     f0, "repay_levs__26@unnamed@gamePlayData_cpp@"@l(r4)
	stw      r6, 0x10(r1)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f3
	fdivs    f1, f2, f1
	fmuls    f1, f4, f1
	fcmpo    cr0, f0, f1
	ble      lbl_801E9028
	li       r6, -1
	b        lbl_801E90E0

lbl_801E9028:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E903C
	li       r6, 0
	b        lbl_801E90E0

lbl_801E903C:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E9050
	li       r6, 1
	b        lbl_801E90E0

lbl_801E9050:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E9064
	li       r6, 2
	b        lbl_801E90E0

lbl_801E9064:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E9078
	li       r6, 3
	b        lbl_801E90E0

lbl_801E9078:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E908C
	li       r6, 4
	b        lbl_801E90E0

lbl_801E908C:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E90A0
	li       r6, 5
	b        lbl_801E90E0

lbl_801E90A0:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E90B4
	li       r6, 6
	b        lbl_801E90E0

lbl_801E90B4:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E90C8
	li       r6, 7
	b        lbl_801E90E0

lbl_801E90C8:
	lfs      f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E90DC
	li       r6, 8
	b        lbl_801E90E0

lbl_801E90DC:
	li       r6, 9

lbl_801E90E0:
	cmpwi    r6, 0
	blt      lbl_801E9118
	srawi    r4, r6, 3
	li       r5, 1
	subfic   r0, r4, 1
	slwi     r4, r4, 3
	add      r3, r3, r0
	subf     r4, r4, r6
	lbz      r0, 0xf0(r3)
	slw      r3, r5, r4
	and.     r0, r3, r0
	bne      lbl_801E9118
	li       r3, 1
	b        lbl_801E911C

lbl_801E9118:
	li       r3, 0

lbl_801E911C:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E9124
 * Size:	000174
 */
void PlayData::experienceRepayLevelFirstClear()
{
	/*
	stwu     r1, -0x20(r1)
	lis      r6, 0x4330
	lfd      f3, lbl_805199D8@sda21(r2)
	lis      r4, "repay_levs__26@unnamed@gamePlayData_cpp@"@ha
	lwz      r5, _aiConstants__4Game@sda21(r13)
	lwz      r7, 0xe8(r3)
	lwz      r0, 0x48(r5)
	xoris    r5, r7, 0x8000
	stw      r6, 8(r1)
	xoris    r0, r0, 0x8000
	lfs      f4, lbl_805199D4@sda21(r2)
	stw      r5, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f2, f0, f3
	lfsu     f0, "repay_levs__26@unnamed@gamePlayData_cpp@"@l(r4)
	stw      r6, 0x10(r1)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f3
	fdivs    f1, f2, f1
	fmuls    f1, f4, f1
	fcmpo    cr0, f0, f1
	ble      lbl_801E9188
	li       r4, -1
	b        lbl_801E9240

lbl_801E9188:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E919C
	li       r4, 0
	b        lbl_801E9240

lbl_801E919C:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E91B0
	li       r4, 1
	b        lbl_801E9240

lbl_801E91B0:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E91C4
	li       r4, 2
	b        lbl_801E9240

lbl_801E91C4:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E91D8
	li       r4, 3
	b        lbl_801E9240

lbl_801E91D8:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E91EC
	li       r4, 4
	b        lbl_801E9240

lbl_801E91EC:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E9200
	li       r4, 5
	b        lbl_801E9240

lbl_801E9200:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E9214
	li       r4, 6
	b        lbl_801E9240

lbl_801E9214:
	lfsu     f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E9228
	li       r4, 7
	b        lbl_801E9240

lbl_801E9228:
	lfs      f0, 4(r4)
	fcmpo    cr0, f0, f1
	ble      lbl_801E923C
	li       r4, 8
	b        lbl_801E9240

lbl_801E923C:
	li       r4, 9

lbl_801E9240:
	cmpwi    r4, 0
	blt      lbl_801E9290
	addi     r0, r4, 1
	li       r7, 0
	li       r4, 1
	mtctr    r0
	blt      lbl_801E9290

lbl_801E925C:
	cmpwi    r7, 0x10
	bge      lbl_801E9288
	srawi    r5, r7, 3
	subfic   r0, r5, 1
	add      r6, r3, r0
	slwi     r0, r5, 3
	lbz      r5, 0xf0(r6)
	subf     r0, r0, r7
	slw      r0, r4, r0
	or       r0, r5, r0
	stb      r0, 0xf0(r6)

lbl_801E9288:
	addi     r7, r7, 1
	bdnz     lbl_801E925C

lbl_801E9290:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E9298
 * Size:	000064
 */
void PlayData::initLimitGens()
{
	u16 courseCount = stageList->m_courseCount;
	for (int i = 0; i < courseCount; i++) {
		LimitGen* limitGen = &m_limitGen[i];
		limitGen->m_nonLoops.reset();
		limitGen->m_loops.reset();
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	li       r29, 0
	li       r30, 0
	lwz      r4, stageList__4Game@sda21(r13)
	lhz      r31, 0x100(r4)
	b        lbl_801E92E0

lbl_801E92C0:
	lwz      r0, 0xe4(r27)
	add      r28, r0, r30
	mr       r3, r28
	bl       reset__8BitFlagsFv
	addi     r3, r28, 8
	bl       reset__8BitFlagsFv
	addi     r30, r30, 0x10
	addi     r29, r29, 1

lbl_801E92E0:
	cmpw     r29, r31
	blt      lbl_801E92C0
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E92FC
 * Size:	00006C
 */
void PlayData::initCourses(bool)
{
	/*
	clrlwi.  r0, r4, 0x18
	beq      lbl_801E9330
	li       r6, 0
	li       r5, 3
	b        lbl_801E931C

lbl_801E9310:
	lwz      r4, 0xd8(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_801E931C:
	lwz      r4, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r4)
	cmpw     r6, r0
	blt      lbl_801E9310
	blr

lbl_801E9330:
	li       r6, 0
	li       r5, 0
	b        lbl_801E9348

lbl_801E933C:
	lwz      r4, 0xd8(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_801E9348:
	lwz      r4, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r4)
	cmpw     r6, r0
	blt      lbl_801E933C
	lwz      r3, 0xd8(r3)
	li       r0, 3
	stb      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E9368
 * Size:	000094
 */
void PlayData::openCourse(int index)
{
	bool isValidIndex = false;
	if (0 <= index && index < stageList->m_courseCount) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1905, isValidIndex);
	if (!courseOpen(index)) {
		m_bitfieldPerCourse[index] = PDCF_Open;
	}
}

/*
 * --INFO--
 * Address:	801E93FC
 * Size:	000084
 */
void PlayData::visitCourse(int index)
{
	bool isValidIndex = false;
	if (0 <= index && index < stageList->m_courseCount) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1918, isValidIndex);
	m_bitfieldPerCourse[index] |= PDCF_Visited;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_801E9434
	lwz      r3, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r3)
	cmpw     r31, r0
	bge      lbl_801E9434
	li       r4, 1

lbl_801E9434:
	clrlwi.  r0, r4, 0x18
	bne      lbl_801E9458
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x77e
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E9458:
	lwz      r3, 0xd8(r30)
	lbzx     r0, r3, r31
	ori      r0, r0, 4
	stbx     r0, r3, r31
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

bool PlayData::closeCourse(int) { }

/*
 * --INFO--
 * Address:	801E9480
 * Size:	000080
 */
bool PlayData::courseOpen(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_801E94B8
	lwz      r3, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r3)
	cmpw     r31, r0
	bge      lbl_801E94B8
	li       r4, 1

lbl_801E94B8:
	clrlwi.  r0, r4, 0x18
	bne      lbl_801E94DC
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x78a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E94DC:
	lwz      r3, 0xd8(r30)
	lbzx     r0, r3, r31
	lwz      r31, 0xc(r1)
	clrlwi   r3, r0, 0x1f
	lwz      r0, 0x14(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E9500
 * Size:	0000E4
 */
bool PlayData::courseJustOpen(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_801E9538
	lwz      r3, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r3)
	cmpw     r31, r0
	bge      lbl_801E9538
	li       r4, 1

lbl_801E9538:
	clrlwi.  r0, r4, 0x18
	bne      lbl_801E955C
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x790
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E955C:
	cmpwi    r31, 0
	li       r4, 0
	blt      lbl_801E957C
	lwz      r3, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r3)
	cmpw     r31, r0
	bge      lbl_801E957C
	li       r4, 1

lbl_801E957C:
	clrlwi.  r0, r4, 0x18
	bne      lbl_801E95A0
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x78a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E95A0:
	lwz      r4, 0xd8(r30)
	lbzx     r3, r4, r31
	clrlwi.  r0, r3, 0x1f
	bne      lbl_801E95B8
	li       r3, 0
	b        lbl_801E95CC

lbl_801E95B8:
	rlwinm   r0, r3, 0, 0x1e, 0x1e
	ori      r3, r3, 2
	cntlzw   r0, r0
	stbx     r3, r4, r31
	srwi     r3, r0, 5

lbl_801E95CC:
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
 * Address:	801E95E4
 * Size:	0000DC
 */
bool PlayData::courseFirstTime(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_801E961C
	lwz      r3, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r3)
	cmpw     r31, r0
	bge      lbl_801E961C
	li       r4, 1

lbl_801E961C:
	clrlwi.  r0, r4, 0x18
	bne      lbl_801E9640
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x7a3
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E9640:
	cmpwi    r31, 0
	li       r4, 0
	blt      lbl_801E9660
	lwz      r3, stageList__4Game@sda21(r13)
	lhz      r0, 0x100(r3)
	cmpw     r31, r0
	bge      lbl_801E9660
	li       r4, 1

lbl_801E9660:
	clrlwi.  r0, r4, 0x18
	bne      lbl_801E9684
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480E60@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x78a
	addi     r5, r5, lbl_80480E60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E9684:
	lwz      r3, 0xd8(r30)
	lbzx     r3, r3, r31
	clrlwi.  r0, r3, 0x1f
	bne      lbl_801E969C
	li       r3, 0
	b        lbl_801E96A8

lbl_801E969C:
	rlwinm   r0, r3, 0, 0x1e, 0x1e
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_801E96A8:
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
 * Address:	801E96C0
 * Size:	000080
 */
bool PlayData::courseVisited(int index)
{
	bool isValidIndex = false;
	if (0 <= index && index < stageList->m_courseCount) {
		isValidIndex = true;
	}
	P2ASSERTLINE(1965, isValidIndex);
	return m_bitfieldPerCourse[index] & PDCF_Visited;
}

/*
 * --INFO--
 * Address:	801E9740
 * Size:	000084
 */
CaveSaveData::CaveSaveData()
    : m_currentCaveID()
    , _14()
    , _30()
{
	clear();
}

/*
 * --INFO--
 * Address:	801E97C4
 * Size:	000068
 */
// void CaveSaveData::clear()
// {
// 	_14.clear();
// 	m_time = 0.0f;
// 	m_isInCave = false;
// 	m_currentCourse = -1;
// 	m_currentCaveID.setID('none');
// 	m_isWaterwraithAlive = 1;
// 	m_waterwraithTimer = 0.0f;
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	addi     r3, r31, 0x14
// 	bl       clear__Q24Game13PikiContainerFv
// 	lfs      f0, lbl_805199D0@sda21(r2)
// 	lis      r4, 0x6E6F6E65@ha
// 	li       r5, 0
// 	li       r0, -1
// 	stfs     f0, 0x1c(r31)
// 	addi     r3, r31, 8
// 	addi     r4, r4, 0x6E6F6E65@l
// 	stb      r5, 0(r31)
// 	stw      r0, 4(r31)
// 	bl       setID__4ID32FUl
// 	li       r0, 1
// 	lfs      f0, lbl_805199D0@sda21(r2)
// 	stb      r0, 0x20(r31)
// 	stfs     f0, 0x24(r31)
// 	lwz      r31, 0xc(r1)
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801E982C
 * Size:	000194
 */
bool PlayData::doneWorldMapEffect()
{
	/*
	stwu     r1, -0x10(r1)
	li       r5, 0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lwz      r4, stageList__4Game@sda21(r13)
	lwz      r0, 0xe8(r3)
	lhz      r4, 0x100(r4)
	cmpwi    r4, 0
	stw      r0, 0xfc(r3)
	ble      lbl_801E9940
	cmpwi    r4, 8
	addi     r6, r4, -8
	ble      lbl_801E9918
	addi     r0, r6, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r6, 0
	ble      lbl_801E9918

lbl_801E9874:
	lwz      r7, 0xdc(r3)
	addi     r31, r5, 1
	lwz      r6, 0xf4(r3)
	addi     r12, r5, 2
	lbzx     r0, r7, r5
	addi     r11, r5, 3
	addi     r10, r5, 4
	addi     r9, r5, 5
	stbx     r0, r6, r5
	addi     r8, r5, 6
	addi     r7, r5, 7
	addi     r5, r5, 8
	lwz      r30, 0xdc(r3)
	lwz      r6, 0xf4(r3)
	lbzx     r0, r30, r31
	stbx     r0, r6, r31
	lwz      r31, 0xdc(r3)
	lwz      r6, 0xf4(r3)
	lbzx     r0, r31, r12
	stbx     r0, r6, r12
	lwz      r12, 0xdc(r3)
	lwz      r6, 0xf4(r3)
	lbzx     r0, r12, r11
	stbx     r0, r6, r11
	lwz      r11, 0xdc(r3)
	lwz      r6, 0xf4(r3)
	lbzx     r0, r11, r10
	stbx     r0, r6, r10
	lwz      r10, 0xdc(r3)
	lwz      r6, 0xf4(r3)
	lbzx     r0, r10, r9
	stbx     r0, r6, r9
	lwz      r9, 0xdc(r3)
	lwz      r6, 0xf4(r3)
	lbzx     r0, r9, r8
	stbx     r0, r6, r8
	lwz      r8, 0xdc(r3)
	lwz      r6, 0xf4(r3)
	lbzx     r0, r8, r7
	stbx     r0, r6, r7
	bdnz     lbl_801E9874

lbl_801E9918:
	subf     r0, r5, r4
	mtctr    r0
	cmpw     r5, r4
	bge      lbl_801E9940

lbl_801E9928:
	lwz      r7, 0xdc(r3)
	lwz      r6, 0xf4(r3)
	lbzx     r0, r7, r5
	stbx     r0, r6, r5
	addi     r5, r5, 1
	bdnz     lbl_801E9928

lbl_801E9940:
	li       r7, 0
	mtctr    r4
	cmpwi    r4, 0
	ble      lbl_801E99B0

lbl_801E9950:
	lwz      r0, 0xe0(r3)
	li       r10, 0
	lwz      r4, 0xf8(r3)
	li       r6, 0
	add      r8, r0, r7
	lbz      r0, 0(r8)
	add      r9, r4, r7
	stb      r0, 0(r9)
	b        lbl_801E999C

lbl_801E9974:
	lwz      r5, 4(r8)
	lwz      r4, 4(r9)
	lbzx     r0, r5, r10
	stbx     r0, r4, r10
	addi     r10, r10, 1
	lwz      r5, 8(r8)
	lwz      r4, 8(r9)
	lwzx     r0, r5, r6
	stwx     r0, r4, r6
	addi     r6, r6, 4

lbl_801E999C:
	lbz      r0, 0(r8)
	cmpw     r10, r0
	blt      lbl_801E9974
	addi     r7, r7, 0xc
	bdnz     lbl_801E9950

lbl_801E99B0:
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E99C0
 * Size:	00007C
 */
int PlayData::getGroundOtakaraNum_Old(int index)
{
	bool isValidIndex = false;
	if (0 <= index && index < stageList->m_courseCount) {
		isValidIndex = true;
	}
	P2ASSERTLINE(2040, isValidIndex);
	return m_groundOtakaraCollectedOld[index];
}

/*
 * --INFO--
 * Address:	801E9A3C
 * Size:	0000B8
 */
int PlayData::getOtakaraNum_Course_CaveID_Old(int, ID32&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, stageList__4Game@sda21(r13)
	bl       getCourseInfo__Q24Game6StagesFi
	cmplwi   r3, 0
	beq      lbl_801E9AB4
	mulli    r0, r30, 0xc
	lwz      r5, 0xf8(r29)
	mr       r4, r31
	add      r31, r5, r0
	bl       getCaveIndex_FromID__Q24Game10CourseInfoFR4ID32
	cmpwi    r3, -1
	beq      lbl_801E9AD4
	cmpwi    r3, 0
	blt      lbl_801E9AAC
	lbz      r0, 0(r31)
	cmpw     r3, r0
	bge      lbl_801E9AAC
	lwz      r4, 4(r31)
	lbzx     r3, r4, r3
	b        lbl_801E9AD8

lbl_801E9AAC:
	li       r3, -1
	b        lbl_801E9AD8

lbl_801E9AB4:
	lis      r3, lbl_80480E4C@ha
	lis      r4, lbl_80480ED0@ha
	addi     r5, r4, lbl_80480ED0@l
	mr       r6, r30
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x809
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E9AD4:
	li       r3, -1

lbl_801E9AD8:
	lwz      r0, 0x24(r1)
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
 * Address:	801E9AF4
 * Size:	000008
 */
int PlayData::getMoney_Old() { return m_pokoCountOld; }

/*
 * --INFO--
 * Address:	801E9AFC
 * Size:	0000A4
 */
bool PlayData::isCaveFirstTime_Old(int, ID32&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, stageList__4Game@sda21(r13)
	bl       getCourseInfo__Q24Game6StagesFi
	cmplwi   r3, 0
	beq      lbl_801E9B80
	mulli    r0, r30, 0xc
	lwz      r5, 0xf8(r29)
	mr       r4, r31
	add      r31, r5, r0
	bl       getCaveIndex_FromID__Q24Game10CourseInfoFR4ID32
	cmpwi    r3, -1
	beq      lbl_801E9B80
	cmpwi    r3, 0
	blt      lbl_801E9B78
	lbz      r0, 0(r31)
	cmpw     r3, r0
	bge      lbl_801E9B78
	lwz      r4, 8(r31)
	slwi     r0, r3, 2
	lwzx     r0, r4, r0
	cntlzw   r0, r0
	srwi     r3, r0, 5
	b        lbl_801E9B84

lbl_801E9B78:
	li       r3, 0
	b        lbl_801E9B84

lbl_801E9B80:
	li       r3, 0

lbl_801E9B84:
	lwz      r0, 0x24(r1)
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
 * Address:	801E9BA0
 * Size:	0000D4
 */
void PlayData::read_CaveOtakara_Old(Stream&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r24, 0x10(r1)
	mr       r29, r3
	mr       r30, r4
	li       r31, 0
	li       r25, 0
	lwz      r5, stageList__4Game@sda21(r13)
	lhz      r27, 0x100(r5)
	b        lbl_801E9C58

lbl_801E9BCC:
	lwz      r0, 0xf8(r29)
	mr       r3, r30
	add      r24, r0, r25
	lbz      r28, 0(r24)
	bl       readByte__6StreamFv
	stb      r3, 0(r24)
	lbz      r0, 0(r24)
	cmplw    r28, r0
	beq      lbl_801E9C0C
	lis      r3, lbl_80480E4C@ha
	lis      r5, lbl_80480F30@ha
	addi     r3, r3, lbl_80480E4C@l
	li       r4, 0x705
	addi     r5, r5, lbl_80480F30@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E9C0C:
	li       r28, 0
	mr       r26, r28
	b        lbl_801E9C44

lbl_801E9C18:
	mr       r3, r30
	bl       readByte__6StreamFv
	lwz      r4, 4(r24)
	stbx     r3, r4, r28
	mr       r3, r30
	bl       readByte__6StreamFv
	lwz      r4, 8(r24)
	clrlwi   r0, r3, 0x18
	addi     r28, r28, 1
	stwx     r0, r4, r26
	addi     r26, r26, 4

lbl_801E9C44:
	lbz      r0, 0(r24)
	cmpw     r28, r0
	blt      lbl_801E9C18
	addi     r25, r25, 0xc
	addi     r31, r31, 1

lbl_801E9C58:
	cmpw     r31, r27
	blt      lbl_801E9BCC
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E9C74
 * Size:	000118
 */
void PlayData::write_CaveOtakara_Old(Stream&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, lbl_80480E40@ha
	stw      r0, 0x34(r1)
	stmw     r23, 0xc(r1)
	mr       r24, r4
	addi     r31, r5, lbl_80480E40@l
	mr       r23, r3
	mr       r3, r24
	addi     r4, r31, 0x140
	bl       textBeginGroup__6StreamFPc
	lwz      r3, stageList__4Game@sda21(r13)
	li       r26, 0
	li       r27, 0
	lhz      r29, 0x100(r3)
	b        lbl_801E9D68

lbl_801E9CB4:
	lwz      r0, 0xf8(r23)
	mr       r3, r24
	lwz      r4, 0x414(r24)
	add      r25, r0, r27
	bl       textWriteTab__6StreamFi
	lbz      r4, 0(r25)
	mr       r3, r24
	bl       writeByte__6StreamFUc
	mr       r3, r24
	addi     r4, r31, 0xcc
	crclr    6
	bl       textWriteText__6StreamFPce
	li       r30, 0
	mr       r28, r30
	b        lbl_801E9D54

lbl_801E9CF0:
	lwz      r4, 0x414(r24)
	mr       r3, r24
	bl       textWriteTab__6StreamFi
	lwz      r4, 4(r25)
	mr       r3, r24
	lbzx     r4, r4, r30
	bl       writeByte__6StreamFUc
	mr       r3, r24
	addi     r4, r31, 0xd8
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r24)
	mr       r3, r24
	bl       textWriteTab__6StreamFi
	lwz      r4, 8(r25)
	mr       r3, r24
	lwzx     r0, r4, r28
	clrlwi   r4, r0, 0x18
	bl       writeByte__6StreamFUc
	mr       r3, r24
	addi     r4, r31, 0xe4
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r28, r28, 4
	addi     r30, r30, 1

lbl_801E9D54:
	lbz      r0, 0(r25)
	cmpw     r30, r0
	blt      lbl_801E9CF0
	addi     r27, r27, 0xc
	addi     r26, r26, 1

lbl_801E9D68:
	cmpw     r26, r29
	blt      lbl_801E9CB4
	mr       r3, r24
	bl       textEndGroup__6StreamFv
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E9D8C
 * Size:	000078
 */
int PlayData::getPikminCount_Today(int pikminColor)
{
	bool isValidIndex = false;
	if (0 <= pikminColor && pikminColor < 6) {
		isValidIndex = true;
	}
	P2ASSERTLINE(2114, isValidIndex);
	return m_pikminToday[pikminColor];
}

/*
 * --INFO--
 * Address:	801E9E04
 * Size:	000078
 */
int PlayData::getPikminCount_Yesterday(int pikminColor)
{
	bool isValidIndex = false;
	if (0 <= pikminColor && pikminColor < 6) {
		isValidIndex = true;
	}
	P2ASSERTLINE(2121, isValidIndex);
	return m_pikminYesterday[pikminColor];
}

/*
 * --INFO--
 * Address:	801E9E7C
 * Size:	000108
 */
void PlayData::setPikminCounts_Today()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r27, r3
	bl       account_today_adjust__Q24Game8BirthMgrFv
	bl       account_today__Q24Game8BirthMgrFv
	lis      r4, zikatuPikis__Q24Game8GameStat@ha
	lis      r3, alivePikis__Q24Game8GameStat@ha
	addi     r30, r4, zikatuPikis__Q24Game8GameStat@l
	mr       r31, r27
	addi     r29, r3, alivePikis__Q24Game8GameStat@l
	li       r28, 0

lbl_801E9EB0:
	cmpwi    r28, 5
	bne      lbl_801E9F1C
	lwz      r3, generatorCache__4Game@sda21(r13)
	bl       getTotalMePikmins__Q24Game14GeneratorCacheFv
	lis      r4, alivePikis__Q24Game8GameStat@ha
	mr       r25, r3
	addi     r3, r4, alivePikis__Q24Game8GameStat@l
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4, zikatuPikis__Q24Game8GameStat@ha
	mr       r26, r3
	addi     r3, r4, zikatuPikis__Q24Game8GameStat@l
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	subf.    r26, r3, r26
	bge      lbl_801E9F04
	li       r26, 0

lbl_801E9F04:
	addi     r3, r27, 0xa8
	bl       getTotalSum__Q24Game13PikiContainerFv
	add      r0, r26, r3
	add      r0, r25, r0
	stw      r0, 0x118(r31)
	b        lbl_801E9F58

lbl_801E9F1C:
	lwz      r3, generatorCache__4Game@sda21(r13)
	mr       r4, r28
	bl       getColorMePikmins__Q24Game14GeneratorCacheFi
	lwz      r4, 4(r30)
	mr       r26, r3
	lwz      r0, 4(r29)
	subf.    r25, r4, r0
	bge      lbl_801E9F40
	li       r25, 0

lbl_801E9F40:
	mr       r4, r28
	addi     r3, r27, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add      r0, r25, r3
	add      r0, r26, r0
	stw      r0, 0x118(r31)

lbl_801E9F58:
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 6
	addi     r29, r29, 4
	addi     r31, r31, 4
	blt      lbl_801E9EB0
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E9F84
 * Size:	000034
 */
void PlayData::setPikminCounts_Yesterday()
{
	m_pikminYesterday[0] = m_pikminToday[0];
	m_pikminYesterday[1] = m_pikminToday[1];
	m_pikminYesterday[2] = m_pikminToday[2];
	m_pikminYesterday[3] = m_pikminToday[3];
	m_pikminYesterday[4] = m_pikminToday[4];
	m_pikminYesterday[5] = m_pikminToday[5];
}
} // namespace Game
