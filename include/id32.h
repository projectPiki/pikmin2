#ifndef _ID32_H
#define _ID32_H

#include "PowerPC_EABI_Support/Runtime/runtime.h"
#include "types.h"
#include "stream.h"

class ID32 {
private:
	char mStr[5]; // _00
	union {
		char strView[4];
		u32 intView;
	} mId; // _08

	void updateString();

public:
	ID32();
	ID32(u32);

	inline ID32& operator=(const ID32& other)
	{
		__copy(mStr, const_cast<char*>(other.mStr), 5);
		mId = other.mId;
		return *this;
	}
	void operator=(u32);
	bool operator==(u32);
	bool operator!=(u32);

	bool match(u32, char);
	bool isEof();
	void setID(u32);
	void updateID();
	void read(Stream&);
	void write(Stream&);
	void sprint(char*);
	void print();

	inline char* getStrID() { return mId.strView; }
	inline u32 getID() { return mId.intView; }
	inline char* getStr() { return mStr; }

	static ID32 eof; // BSS
};

#endif
