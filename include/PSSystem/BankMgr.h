#ifndef _PSSYSTEM_BANKMGR_H
#define _PSSYSTEM_BANKMGR_H

#include "types.h"
#include "JSystem/JKR/JKRDisposer.h"

namespace PSSystem {
struct BankMgr : public JKRDisposer {
	BankMgr();

	virtual ~BankMgr(); // _08

	void createInstance();
	void preInit();
	void init();
	void secondLoadS();
	void firstLoadS();
	void initS();
	void setWsDataS(u32*);
	void setBankDataS(u32*);

	u8 _18;      // _18
	u8 _19;      // _19
	u8 _1A;      // _1A
	u8 _1B;      // _1B
	void* _1C;   // _1C - unknown pointer
	u8 _20[0x4]; // _20 - "bank count"?
	void* _24;   // _24 - unknown pointer

	static BankMgr* sBankMgr;
};
} // namespace PSSystem

#endif
