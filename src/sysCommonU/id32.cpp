#include "id32.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0

void _Print(char *, ...)
{
        // UNUSED FUNCTION
}


 * --INFO--
 * Address:	80413254
 * Size:	00001C
*/

bool ID32::isEof() { return this->m_id.raw == '_eof'; }
/*
 * --INFO--
 * Address:	80413270
 * Size:	000038
 */
ID32::ID32() { this->setID('none'); }

/*
 * --INFO--
 * Address:	804132A8
 * Size:	000030
 */
ID32::ID32(unsigned long id) { this->setID(id); }

/*
 * --INFO--
 * Address:	804132D8
 * Size:	000024
 */
void ID32::setID(unsigned long set_id)
{
    this->m_id.raw = set_id;
    this->updateString();
}

/*
 * --INFO--
 * Address:	804132FC
 * Size:	0000B8
 */
bool ID32::match(unsigned long _id, char exception)
{
    char* p_id = reinterpret_cast<char*>(&_id);
    char* m_id = reinterpret_cast<char*>(&this->m_id.raw);

    for (int i = 0; i < 4; i++) {
        if (p_id[i] != exception && p_id[i] != m_id[i]) {
            return false;
        }
    }
    return true;
}

/*
 * --INFO--
 * Address:	804133B4
 * Size:	000024
 */
void ID32::updateID()
{
    char* m_id = reinterpret_cast<char*>(&this->m_id.raw);

    for (int i = 0; i < 4; i++)
        m_id[i] = this->m_str[i];
}

/*
 * --INFO--
 * Address:	804133D8
 * Size:	00002C
 */
void ID32::updateString()
{
    char* m_id = reinterpret_cast<char*>(&this->m_id.raw);

    for (int i = 0; i < 4; i++)
        this->m_str[i] = m_id[i];
    m_str[4] = '\0';
}

/*
 * --INFO--
 * Address:	80413404
 * Size:	000030
 */
void ID32::operator=(unsigned long _id)
{
    this->m_id.raw = _id;
    this->m_str[0] = *(char*)&this->m_id.raw;
    this->m_str[1] = *(char*)((int)&this->m_id.raw + 1);
    this->m_str[2] = *(char*)((int)&this->m_id.raw + 2);
    this->m_str[3] = *(char*)((int)&this->m_id.raw + 3);
    this->m_str[4] = '\0';
}
/*
 * --INFO--
 * Address:	80413434
 * Size:	000014
 */
bool ID32::operator==(unsigned long target)
{
    return (this->m_id.raw == target);
}

/*
 * --INFO--
 * Address:	80413448
 * Size:	000018
 */
bool ID32::operator!=(unsigned long _id) { return (this->m_id.raw != _id); }

extern char lbl_805202C8[8]; // sd_StringSpecifier

/*
 * --INFO--
 * Address:	80413460
 * Size:	000090
 */
void ID32::write(Stream& stream)
{
    if (stream.isTextMode == TRUE) {
        char str[0x10];
        sprint(str);
        stream.printf(lbl_805202C8, str);
    } else {
        stream.writeByte(m_id.byteView.d);
        stream.writeByte(m_id.byteView.c);
        stream.writeByte(m_id.byteView.b);
        stream.writeByte(m_id.byteView.a);
    }
}

/*
 * --INFO--
 * Address:	804134F0
 * Size:	0000EC
 */
void ID32::read(Stream& stream)
{
    if (stream.isTextMode == TRUE) {
        char* token     = stream.getNextToken();
        m_id.byteView.d = token[3];
        m_id.byteView.c = token[2];
        m_id.byteView.b = token[1];
        m_id.byteView.a = token[0];

        m_str[0] = m_id.byteView.a;
        m_str[1] = m_id.byteView.b;
        m_str[2] = m_id.byteView.c;
        m_str[3] = m_id.byteView.d;
        m_str[4] = '\0';
    } else {
        m_id.byteView.d = stream.readByte();
        m_id.byteView.c = stream.readByte();
        m_id.byteView.b = stream.readByte();
        m_id.byteView.a = stream.readByte();

        m_str[0] = m_id.byteView.a;
        m_str[1] = m_id.byteView.b;
        m_str[2] = m_id.byteView.c;
        m_str[3] = m_id.byteView.d;
        m_str[4] = '\0';
    }
}

// /*
//  * --INFO--
//  * Address:	804135DC
//  * Size:	000004
//  */
void ID32::print() { return; }

/*
 * --INFO--
 * Address:	804135E0
 * Size:	000038
 */
void ID32::sprint(char* str)
{
    str[0] = m_id.raw >> 24;
    str[1] = (u8)(m_id.raw >> 16);
    str[2] = (u8)(m_id.raw >> 8);
    str[3] = (u8)(m_id.raw);
    str[4] = '\0';
}

// /*
//  * --INFO--
//  * Address:	80413618
//  * Size:	000040
//  */
// // void __sinit_id32_cpp(void)
// //{
// /*
// .loc_0x0:
//   lis       r4, 0x5F65
//   lis       r3, 0x8051
//   addi      r4, r4, 0x6F66
//   li        r0, 0
//   addi      r7, r3, 0x41F0
//   stw       r4, 0x8(r7)
//   lbz       r6, 0x8(r7)
//   lbz       r5, 0x9(r7)
//   lbz       r4, 0xA(r7)
//   lbz       r3, 0xB(r7)
//   stb       r6, 0x0(r7)
//   stb       r5, 0x1(r7)
//   stb       r4, 0x2(r7)
//   stb       r3, 0x3(r7)
//   stb       r0, 0x4(r7)
//   blr
// */
// //}