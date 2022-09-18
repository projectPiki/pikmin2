#include "JSystem/JAS/JASBank.h"
#include "JSystem/JAS/JASCalc.h"
#include "JSystem/JAS/JASInst.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12JASBasicBank
    __vt__12JASBasicBank:
        .4byte 0
        .4byte 0
        .4byte __dt__12JASBasicBankFv
        .4byte getInst__12JASBasicBankCFi
        .4byte getType__12JASBasicBankCFv
    .global __vt__7JASBank
    __vt__7JASBank:
        .4byte 0
        .4byte 0
        .4byte __dt__7JASBankFv
        .4byte 0
        .4byte 0
*/

/*
 * --INFO--
 * Address:	800996FC
 * Size:	00002C
 * __ct__12JASBasicBankFv
 */
JASBasicBank::JASBasicBank()
    : JASBank()
    , m_insts(nullptr)
    , m_instCount(0)
{
}

/*
 * --INFO--
 * Address:	80099728
 * Size:	000048
 * __dt__7JASBankFv
 */
// JASBank::~JASBank()
// {
// }

/*
 * --INFO--
 * Address:	80099770
 * Size:	000074
 * __dt__12JASBasicBankFv
 */
JASBasicBank::~JASBasicBank() { delete[] m_insts; }

/*
 * --INFO--
 * Address:	800997E4
 * Size:	000064
 * setInstCount__12JASBasicBankFUl
 */
void JASBasicBank::setInstCount(u32 count)
{
	delete[] m_insts;
	m_insts = new (getCurrentHeap(), 0) JASInst*[count];
	JASCalc::bzero(m_insts, sizeof(JASInst*) * count);
	m_instCount = count;
}

/*
 * --INFO--
 * Address:	80099848
 * Size:	000010
 * setInst__12JASBasicBankFiP7JASInst
 */
void JASBasicBank::setInst(int index, JASInst* inst) { m_insts[index] = inst; }

/*
 * --INFO--
 * Address:	80099858
 * Size:	000024
 * getInst__12JASBasicBankCFi
 */
JASInst* JASBasicBank::getInst(int index) const { return (index >= m_instCount) ? nullptr : m_insts[index]; }

/*
 * --INFO--
 * Address:	8009987C
 * Size:	00000C
 * getType__12JASBasicBankCFv
 */
// u32 JASBasicBank::getType() const
// {
// }
