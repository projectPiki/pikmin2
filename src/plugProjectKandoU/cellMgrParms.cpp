#include "types.h"
#include "Dolphin/os.h"

#include "CellMgrParms.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804837E8
    lbl_804837E8:
        .4byte 0x43656C6C
        .4byte 0x4D677250
        .4byte 0x61726D73
        .4byte 0x00000000
        .4byte 0x836F8362
        .4byte 0x83748340
        .4byte 0x82F08E67
        .4byte 0x82A40000
        .4byte 0x837D8357
        .4byte 0x8362834E
        .4byte 0x83698393
        .4byte 0x836F815B
        .4byte 0x00000000
        .4byte 0x55706461
        .4byte 0x74654D67
        .4byte 0x72000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12CellMgrParms
    __vt__12CellMgrParms:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@12@__dt__12CellMgrParmsFv"
        .4byte __dt__12CellMgrParmsFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global mInstance__12CellMgrParms
    mInstance__12CellMgrParms:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A2F0
    lbl_8051A2F0:
        .4byte 0x43656C6C
        .4byte 0x4D677200
    .global lbl_8051A2F8
    lbl_8051A2F8:
        .4byte 0x472D4861
        .4byte 0x6C660000
*/

#pragma text_encoding "SHIFT_JIS"

CellMgrParms* CellMgrParms::mInstance;

// struct temp : CellMgrParms {
// 	void* m_end;
// };

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char* name, ...) { OSReport("CellMgrParms"); }

inline _CellParms::_CellParms(Parameters* p)
    : m_p000(p, 0x70303030, "?��o?��b?��t?��@?��?��?��g?��?��", false, false, true)
    , m_p001(p, 0x70303031, "?��}?��W?��b?��N?��i?��?��?��o?��[", true, false, true)
    , m_p002(p, 0x70303032, "G-Half", false, false, true)
    , m_p003(p, 0x70303033, "UpdateMgr", false, false, true)
{
}

/*
 * __ct__
 * TODO: This should be 87 (decimal) instructions long.
 *       Currently it is only 85.
 *
 * --INFO--
 * Address:	........
 * Size:	00015C
 */
inline CellMgrParms::CellMgrParms()
    : Parameters(&m_end, nullptr, "CellMgr")
    , JKRDisposer()
    , _CellParms(this)
// , _CellParms {
// 	.m_p000 = Parm<bool>(this, 0x70303030, "?��o?��b?��t?��@?��?��?��g?��?��",
// false, false, true), 	.m_p001 = Parm<bool>(this, 0x70303031,
// "?��}?��W?��b?��N?��i?��?��?��o?��[", true, false, true), 	.m_p002 =
// Parm<bool>(this, 0x70303032, "G-Half", false, false, true), 	.m_p003 =
// Parm<bool>(this, 0x70303033, "UpdateMgr", false, false, true)
// }
{
}
// , parms(this)
// : _CellMgrParms(m_end)
// : _CellMgrParms() {
// 	Parameters {
//     &m_end, nullptr, "CellMgr"
// 	}
// 	, JKRDisposer()
//     , Parm<bool>(this, 0x70303030, "?��o?��b?��t?��@?��?��?��g?��?��", false,
//     false, true) , Parm<bool>(this, 0x70303031,
//     "?��}?��W?��b?��N?��i?��?��?��o?��[", true, false, true) ,
//     Parm<bool>(this, 0x70303032, "G-Half", false, false, true) ,
//     Parm<bool>(this, 0x70303033, "UpdateMgr", false, false, true)
// }

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
