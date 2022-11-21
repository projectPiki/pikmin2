#ifndef _ID32_H
#define _ID32_H

#include "Dolphin/runtime.h"
#include "types.h"
#include "stream.h"

class ID32 {
private:
	char m_str[5]; // _00
	union {
		char strView[4];
		u32 intView;
	} m_id; // _08

	void updateString();

public:
	ID32();
	ID32(u32);

	inline ID32& operator=(const ID32& other)
	{
		__copy(m_str, const_cast<char*>(other.m_str), 5);
		m_id = other.m_id;
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

	inline char* getStrID() { return m_id.strView; }
	inline u32 getID() { return m_id.intView; }
	inline char* getStr() { return m_str; }

	static ID32 eof; // BSS
};

#endif
