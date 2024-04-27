#ifndef _PSSYSTEM_BANKMGR_H
#define _PSSYSTEM_BANKMGR_H

#include "types.h"
#include "JSystem/JKernel/JKRDisposer.h"

struct PSBankData {
	u8 mData[3]; // _00
};

struct PSWsData {
	u8 mData[2]; // _00
};

namespace PSSystem {
struct BankMgr : public JKRDisposer {
	BankMgr();

	virtual ~BankMgr() // _08
	{
		if (sBankMgr) {
			delete sBankMgr;
			sBankMgr = nullptr;
		}
	}

	static BankMgr* createInstance();
	void preInit();
	void init();
	void setBankData(u32* data);
	void setWsData(u32* data);

	static void setBankDataS(u32* data) { sBankMgr->setBankData(data); }
	static void setWsDataS(u32* data) { sBankMgr->setWsData(data); }
	static void initS() { sBankMgr->init(); }
	static void firstLoadS() { }
	static void secondLoadS() { }

	u8 mIsPreInitialized; // _18
	u8 mIsInitialized;    // _19
	u8 mInstBankNum;      // _1A, number of instrument banks
	u32** mBankData;      // _1C, array of u32* ptrs, in groups of 3
	u8 mWaveBankNum;      // _20, number of wave banks
	u32** mWsData;        // _24, array of u32* ptrs, in groups of 3

	static BankMgr* sBankMgr;
};
} // namespace PSSystem

#endif
