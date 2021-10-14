#ifndef _ID32_H
#define _ID32_H

#include "stream.h"

class ID32 {
public:
	char m_str[5]; // _00
	union {
		char str[4];
		u32 raw;
	} m_id; // _08

	bool isEof();                    // done
	ID32();                          // done
	ID32(unsigned long);             // done
	bool match(unsigned long, char); // done
	void operator=(unsigned long);   // done
	bool operator==(unsigned long);  // done
	bool operator!=(unsigned long);  // done
	void setID(unsigned long);       // done
	void updateID();                 // done
	void read(Stream&);              // done
	void write(Stream&);             // done
	void sprint(char*);              // done
	void print();                    // done

	static ID32 eof;

private:
	void updateString(); // done
};

#endif
