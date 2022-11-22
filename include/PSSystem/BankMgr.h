#ifndef _PSSYSTEM_BANKMGR_H
#define _PSSYSTEM_BANKMGR_H

#include "types.h"
#include "JSystem/JKR/JKRDisposer.h"

namespace PSSystem {
struct BankMgr : public JKRDisposer {
	BankMgr();

	virtual ~BankMgr(); // _08

	BankMgr* createInstance();
	void preInit();
	void init();

	static void setBankDataS(u32*);
	static void setWsDataS(u32*);
	static void initS();
	static void firstLoadS();
	static void secondLoadS();

	u8 _18;    // _18
	u8 _19;    // _19
	u8 _1A;    // _1A
	u8 _1B;    // _1B
	u32** _1C; // _1C, array of u32* ptrs, in groups of 3
	u8 _20;    // _20 - "bank count"?
	u32** _24; // _24, array of u32* ptrs, in groups of 3

	static BankMgr* sBankMgr;
};
} // namespace PSSystem

#endif
