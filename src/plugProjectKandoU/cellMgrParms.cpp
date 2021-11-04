#include "types.h"

#include "CellMgrParms.h"

#pragma text_encoding "SHIFT_JIS"

CellMgrParms* CellMgrParms::mInstance;

/*
 * --INFO--
 * Address:	........
 * Size:	00015C
 */
inline CellMgrParms::CellMgrParms()
    : Parameters(&m_end, nullptr, "CellMgr")
    , JKRDisposer()
    , m_p000(this, 0x70303030, "�o�b�t�@���g��", false, false, true)
    , m_p001(this, 0x70303031, "�}�W�b�N�i���o�[", true, false, true)
    , m_p002(this, 0x70303032, "G-Half", false, false, true)
    , m_p003(this, 0x70303033, "UpdateMgr", false, false, true)
{
}

/*
 * --INFO--
 * Address:	8022E188
 * Size:	000074
 */
CellMgrParms::~CellMgrParms()
{
	mInstance = nullptr;
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x58
	  lis       r3, 0x804C
	  li        r0, 0
	  addi      r4, r3, 0x1140
	  addi      r3, r30, 0xC
	  stw       r4, 0x94(r30)
	  addi      r5, r4, 0x8
	  li        r4, 0
	  stw       r5, 0xC(r30)
	  stw       r0, -0x69F8(r13)
	  bl        -0x211198
	  extsh.    r0, r31
	  ble-      .loc_0x58
	  mr        r3, r30
	  bl        -0x20A128

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8022E1FC
 * Size:	000168
 */
void CellMgrParms::globalInstance()
{
	if (mInstance == nullptr) {
		mInstance = new CellMgrParms();
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x37E8
	  stw       r30, 0x8(r1)
	  lwz       r0, -0x69F8(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x150
	  li        r3, 0x9C
	  bl        -0x20A384
	  mr.       r30, r3
	  beq-      .loc_0x14C
	  addi      r0, r30, 0x98
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  subi      r0, r2, 0x4070
	  addi      r3, r30, 0xC
	  stw       r4, 0x4(r30)
	  stw       r0, 0x8(r30)
	  bl        -0x211284
	  lis       r3, 0x804C
	  lis       r5, 0x7030
	  addi      r3, r3, 0x1140
	  mr        r4, r30
	  stw       r3, 0x94(r30)
	  addi      r0, r3, 0x8
	  addi      r3, r30, 0x24
	  addi      r5, r5, 0x3030
	  stw       r0, 0xC(r30)
	  addi      r6, r31, 0x10
	  bl        0x1E53DC
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  addi      r0, r3, 0x80
	  li        r7, 0
	  stw       r0, 0x24(r30)
	  li        r0, 0x1
	  mr        r4, r30
	  addi      r3, r30, 0x40
	  stb       r7, 0x3C(r30)
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x20
	  stb       r7, 0x3E(r30)
	  stb       r0, 0x3F(r30)
	  bl        0x1E53A4
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  addi      r0, r3, 0x80
	  li        r7, 0x1
	  stw       r0, 0x40(r30)
	  li        r0, 0
	  mr        r4, r30
	  addi      r3, r30, 0x5C
	  stb       r7, 0x58(r30)
	  addi      r5, r5, 0x3032
	  subi      r6, r2, 0x4068
	  stb       r0, 0x5A(r30)
	  stb       r7, 0x5B(r30)
	  bl        0x1E536C
	  lis       r3, 0x804B
	  lis       r5, 0x7030
	  addi      r0, r3, 0x80
	  li        r7, 0
	  stw       r0, 0x5C(r30)
	  li        r0, 0x1
	  mr        r4, r30
	  addi      r3, r30, 0x78
	  stb       r7, 0x74(r30)
	  addi      r5, r5, 0x3033
	  addi      r6, r31, 0x34
	  stb       r7, 0x76(r30)
	  stb       r0, 0x77(r30)
	  bl        0x1E5334
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x80
	  li        r0, 0x1
	  stw       r4, 0x78(r30)
	  stb       r3, 0x90(r30)
	  stb       r3, 0x92(r30)
	  stb       r0, 0x93(r30)

	.loc_0x14C:
	  stw       r30, -0x69F8(r13)

	.loc_0x150:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

#pragma text_encoding reset
