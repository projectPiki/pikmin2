#ifndef _ID32_H
#define _ID32_H

#include "types.h"
#include "stream.h"

class ID32 {
public:
	char m_str[5]; // _00
	union {
		char strView[4];
		u32 intView;
	} m_id; // _08

	bool isEof();
	ID32();
	ID32(u32);
	bool match(u32, char);
	void operator=(u32);
	bool operator==(u32);
	bool operator!=(u32);
	void setID(u32);
	void updateID();
	void read(Stream&);
	void write(Stream&);
	void sprint(char*);
	void print();

	static ID32 eof;

private:
	void updateString(); // done
};

#endif
