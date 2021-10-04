#ifndef _ID32_H
#define _ID32_H

#include "stream.h"

class ID32 {
public:
    char m_str[5];
     union {
        struct {
            u8 a, b, c, d;
        } byteView;

        u32 raw; // _08
    } m_id;
    bool isEof();                    // done
    ID32();                          // done
    ID32(unsigned long);             // done
    bool match(unsigned long, char); // done
    void operator=(unsigned long);   // done, but could use cleaning
    bool operator==(unsigned long);  // done
    bool operator!=(unsigned long);  // done
    void setID(unsigned long);       // done
    void updateID();                 // done
    void read(Stream &);
    void write(Stream &);
    void sprint(char*); //verify
    void print(); //done
private:
    void updateString(); // done
};

#endif