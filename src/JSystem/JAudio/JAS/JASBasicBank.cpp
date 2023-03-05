#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASInst.h"
#include "types.h"

/*
 * --INFO--
 * Address:	800996FC
 * Size:	00002C
 * __ct__12JASBasicBankFv
 */
JASBasicBank::JASBasicBank()
    : JASBank()
    , mInsts(nullptr)
    , mInstCount(0)
{
}

/*
 * --INFO--
 * Address:	80099770
 * Size:	000074
 * __dt__12JASBasicBankFv
 */
JASBasicBank::~JASBasicBank() { delete[] mInsts; }

/*
 * --INFO--
 * Address:	800997E4
 * Size:	000064
 * setInstCount__12JASBasicBankFUl
 */
void JASBasicBank::setInstCount(u32 count)
{
	delete[] mInsts;
	mInsts = new (getCurrentHeap(), 0) JASInst*[count];
	JASCalc::bzero(mInsts, sizeof(JASInst*) * count);
	mInstCount = count;
}

/*
 * --INFO--
 * Address:	80099848
 * Size:	000010
 * setInst__12JASBasicBankFiP7JASInst
 */
void JASBasicBank::setInst(int index, JASInst* inst) { mInsts[index] = inst; }

/*
 * --INFO--
 * Address:	80099858
 * Size:	000024
 * getInst__12JASBasicBankCFi
 */
JASInst* JASBasicBank::getInst(int index) const { return (index >= mInstCount) ? nullptr : mInsts[index]; }
