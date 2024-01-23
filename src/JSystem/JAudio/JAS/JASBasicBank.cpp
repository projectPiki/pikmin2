#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASInst.h"

/**
 * @note Address: 0x800996FC
 * @note Size: 0x2C
 * __ct__12JASBasicBankFv
 */
JASBasicBank::JASBasicBank()
    : JASBank()
    , mInsts(nullptr)
    , mInstCount(0)
{
}

/**
 * @note Address: 0x80099770
 * @note Size: 0x74
 * __dt__12JASBasicBankFv
 */
JASBasicBank::~JASBasicBank() { delete[] mInsts; }

/**
 * @note Address: 0x800997E4
 * @note Size: 0x64
 * setInstCount__12JASBasicBankFUl
 */
void JASBasicBank::setInstCount(u32 count)
{
	delete[] mInsts;
	mInsts = new (getCurrentHeap(), 0) JASInst*[count];
	JASCalc::bzero(mInsts, sizeof(JASInst*) * count);
	mInstCount = count;
}

/**
 * @note Address: 0x80099848
 * @note Size: 0x10
 * setInst__12JASBasicBankFiP7JASInst
 */
void JASBasicBank::setInst(int index, JASInst* inst) { mInsts[index] = inst; }

/**
 * @note Address: 0x80099858
 * @note Size: 0x24
 * getInst__12JASBasicBankCFi
 */
JASInst* JASBasicBank::getInst(int index) const { return (index >= mInstCount) ? nullptr : mInsts[index]; }
