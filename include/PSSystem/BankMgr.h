#ifndef _PSSYSTEM_BANKMGR_H
#define _PSSYSTEM_BANKMGR_H

namespace PSSystem {
struct BankMgr {
	~BankMgr();
	BankMgr();

	void createInstance();
	void firstLoadS();
	void init();
	void initS();
	void preInit();
	void secondLoadS();
	void setBankDataS(unsigned long*);
	void setWsDataS(unsigned long*);
};
} // namespace PSSystem

#endif
