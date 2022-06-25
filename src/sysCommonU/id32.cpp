#include "id32.h"

/*
 * --INFO--
 * Address:	80413254
 * Size:	00001C
 */
bool ID32::isEof() { return m_id.intView == '_eof'; }

/*
 * --INFO--
 * Address:	80413270
 * Size:	000038
 */
ID32::ID32() { setID('none'); }

/*
 * --INFO--
 * Address:	804132A8
 * Size:	000030
 */
ID32::ID32(u32 id) { setID(id); }

/*
 * --INFO--
 * Address:	804132D8
 * Size:	000024
 */
void ID32::setID(u32 set_id)
{
	m_id.intView = set_id;
	updateString();
}

/*
 * --INFO--
 * Address:	804132FC
 * Size:	0000B8
 */
bool ID32::match(u32 _id, char exception)
{
	char* p_id = reinterpret_cast<char*>(&_id);
	char* c_id = reinterpret_cast<char*>(&m_id.intView);

	for (int i = 0; i < 4; i++) {
		if (p_id[i] != exception && p_id[i] != c_id[i]) {
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
	for (int i = 0; i < 4; i++) {
		m_id.strView[i] = m_str[i];
	}
}

/*
 * --INFO--
 * Address:	804133D8
 * Size:	00002C
 */
void ID32::updateString()
{
	char* c_id = reinterpret_cast<char*>(&m_id.intView);

	for (int i = 0; i < 4; i++) {
		m_str[i] = c_id[i];
	}
	m_str[4] = '\0';
}

/*
 * --INFO--
 * Address:	80413404
 * Size:	000030
 */
void ID32::operator=(u32 _id)
{
	m_id.intView = _id;
	updateString();
}
/*
 * --INFO--
 * Address:	80413434
 * Size:	000014
 */
bool ID32::operator==(u32 target) { return m_id.intView == target; }

/*
 * --INFO--
 * Address:	80413448
 * Size:	000018
 */
bool ID32::operator!=(u32 _id) { return m_id.intView != _id; }

/*
 * --INFO--
 * Address:	80413460
 * Size:	000090
 */
void ID32::write(Stream& stream)
{
	if (stream.m_mode == STREAM_MODE_TEXT) {
		char str[0x10];
		sprint(str);
		stream.printf("{%s} ", str);
		return;
	}

	stream.writeByte(m_id.strView[3]);
	stream.writeByte(m_id.strView[2]);
	stream.writeByte(m_id.strView[1]);
	stream.writeByte(m_id.strView[0]);
}

/*
 * --INFO--
 * Address:	804134F0
 * Size:	0000EC
 */
void ID32::read(Stream& stream)
{
	if (stream.m_mode == STREAM_MODE_TEXT) {
		char* token     = stream.getNextToken();
		m_id.strView[3] = token[3];
		m_id.strView[2] = token[2];
		m_id.strView[1] = token[1];
		m_id.strView[0] = token[0];
		updateString();
		return;
	}

	m_id.strView[3] = stream.readByte();
	m_id.strView[2] = stream.readByte();
	m_id.strView[1] = stream.readByte();
	m_id.strView[0] = stream.readByte();
	updateString();
}

/*
 * --INFO--
 * Address:	804135DC
 * Size:	000004
 */
void ID32::print() { }

/*
 * --INFO--
 * Address:	804135E0
 * Size:	000038
 */
void ID32::sprint(char* str)
{
	str[0] = m_id.intView >> 24;
	str[1] = static_cast<u8>(m_id.intView >> 16);
	str[2] = static_cast<u8>(m_id.intView >> 8);
	str[3] = static_cast<u8>(m_id.intView);
	str[4] = '\0';
}
extern ID32 eof__4ID32;
// static initializer
// ID32 ID32::eof('_eof');
// the above line is correct, but we do the following to satisfy BSS order
// bss jank:
// clang-format off
extern "C"{
asm void __sinit_id32_cpp(void)
{
	nofralloc
	
	lis      r4,24421
	lis      r3,eof__4ID32@ha
	addi     r4,r4,28518
	li       r0,0
	addi     r7,r3,eof__4ID32@l
	stw      r4,8(r7)
	lbz      r6,8(r7)
	lbz      r5,9(r7)
	lbz      r4,10(r7)
	lbz      r3,11(r7)
	stb      r6,0(r7)
	stb      r5,1(r7)
	stb      r4,2(r7)
	stb      r3,3(r7)
	stb      r0,4(r7)
	blr
}
}
// clang-format on
