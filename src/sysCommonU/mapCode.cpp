#include "types.h"
#include "mapCode.h"
#include "Sys/TriangleTable.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804997B8
    lbl_804997B8:
        .asciz "# %d/%d\r\n"
        .skip 0x6

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q37MapCode3Mgr9CodeArray
    __vt__Q37MapCode3Mgr9CodeArray:
        .4byte 0
        .4byte 0
        .4byte __dt__Q37MapCode3Mgr9CodeArrayFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__26Container<Q27MapCode4Code>FPv"
        .4byte "getNext__31ArrayContainer<Q27MapCode4Code>FPv"
        .4byte "getStart__31ArrayContainer<Q27MapCode4Code>Fv"
        .4byte "getEnd__31ArrayContainer<Q27MapCode4Code>Fv"
        .4byte "get__31ArrayContainer<Q27MapCode4Code>FPv"
        .4byte "getAt__31ArrayContainer<Q27MapCode4Code>Fi"
        .4byte "getTo__31ArrayContainer<Q27MapCode4Code>Fv"
        .4byte writeObject__Q37MapCode3Mgr9CodeArrayFR6StreamRQ27MapCode4Code
        .4byte readObject__Q37MapCode3Mgr9CodeArrayFR6StreamRQ27MapCode4Code
        .4byte "write__31ArrayContainer<Q27MapCode4Code>FR6Stream"
        .4byte "read__31ArrayContainer<Q27MapCode4Code>FR6Stream"
        .4byte "alloc__31ArrayContainer<Q27MapCode4Code>Fi"
        .4byte "addOne__31ArrayContainer<Q27MapCode4Code>FRQ27MapCode4Code"
        .4byte "setArray__31ArrayContainer<Q27MapCode4Code>FPQ27MapCode4Codei"
    .global "__vt__31ArrayContainer<Q27MapCode4Code>"
    "__vt__31ArrayContainer<Q27MapCode4Code>":
        .4byte 0
        .4byte 0
        .4byte "__dt__31ArrayContainer<Q27MapCode4Code>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__26Container<Q27MapCode4Code>FPv"
        .4byte "getNext__31ArrayContainer<Q27MapCode4Code>FPv"
        .4byte "getStart__31ArrayContainer<Q27MapCode4Code>Fv"
        .4byte "getEnd__31ArrayContainer<Q27MapCode4Code>Fv"
        .4byte "get__31ArrayContainer<Q27MapCode4Code>FPv"
        .4byte "getAt__31ArrayContainer<Q27MapCode4Code>Fi"
        .4byte "getTo__31ArrayContainer<Q27MapCode4Code>Fv"
        .4byte
   "writeObject__31ArrayContainer<Q27MapCode4Code>FR6StreamRQ27MapCode4Code"
        .4byte
   "readObject__31ArrayContainer<Q27MapCode4Code>FR6StreamRQ27MapCode4Code"
        .4byte "write__31ArrayContainer<Q27MapCode4Code>FR6Stream"
        .4byte "read__31ArrayContainer<Q27MapCode4Code>FR6Stream"
        .4byte "alloc__31ArrayContainer<Q27MapCode4Code>Fi"
        .4byte "addOne__31ArrayContainer<Q27MapCode4Code>FRQ27MapCode4Code"
        .4byte "setArray__31ArrayContainer<Q27MapCode4Code>FPQ27MapCode4Codei"
    .global "__vt__26Container<Q27MapCode4Code>"
    "__vt__26Container<Q27MapCode4Code>":
        .4byte 0
        .4byte 0
        .4byte "__dt__26Container<Q27MapCode4Code>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__26Container<Q27MapCode4Code>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__26Container<Q27MapCode4Code>Fi"
        .4byte "getTo__26Container<Q27MapCode4Code>Fv"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805203A8
    lbl_805203A8:
        .asciz "\r\n"
        .skip 0x1
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8041C434
 * Size:	00000C
 */
u8 MapCode::Code::getAttribute(void)
{
	// return m_attribute & 0xf;
	return m_contents & ATTR_MASK;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
char* MapCode::Code::getAttributeName()
{
	// UNUSED FUNCTION
	return nullptr;
}

/*
 * --INFO--
 * Address:	8041C440
 * Size:	00000C
 */
u8 MapCode::Code::getSlipCode() { return m_contents >> 4 & SLIPCODE_MASK; }

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
char* MapCode::Code::getSlipCodeName()
{
	// UNUSED FUNCTION
	return nullptr;
}

/*
 * --INFO--
 * Address:	8041C44C
 * Size:	00000C
 */
bool MapCode::Code::isBald() { return m_contents >> 6 & 1; }

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void MapCode::Code::write(Stream& output)
{
	// UNUSED FUNCTION
	output.writeByte(m_contents);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void MapCode::Code::read(Stream& input)
{
	// UNUSED FUNCTION
	m_contents = input.readByte();
}

/*
 * --INFO--
 * Address:	8041C458
 * Size:	000024
 */
void MapCode::Code::setCode(int attribute, int slipCode, bool isBald)
{
	m_contents = (attribute & ATTR_MASK) | (u8)(slipCode << 4) | (u8)(isBald << 6);
	/*
	.loc_0x0:
	  rlwinm    r6,r6,0,24,31
	  rlwinm    r5,r5,4,0,27
	  neg       r0, r6
	  or        r0, r0, r6
	  rlwimi    r5,r4,0,28,31
	  rlwinm    r0,r0,7,25,25
	  or        r0, r5, r0
	  stb       r0, 0x0(r3)
	  blr
	*/
}

/*
 * __ct__Q27MapCode3MgrFv
 * --INFO--
 * Address:	8041C47C
 * Size:	00007C
 */
MapCode::Mgr::Mgr()
    : m_codeArray()
{
}

/**
 * @generated{__dt__Q37MapCode3Mgr9CodeArrayFv}
 * @generated{__dt__31ArrayContainer<Q27MapCode4Code>Fv}
 * @generated{__dt__26Container<Q27MapCode4Code>Fv}
 */

// /*
//  * --INFO--
//  * Address:	8041C4F8
//  * Size:	000090
//  */
// MapCode::Mgr::CodeArray::~CodeArray(void)
// {
// }

// /*
//  * --INFO--
//  * Address:	8041C588
//  * Size:	000080
//  */
// ArrayContainer<MapCode::Code>::~ArrayContainer()
// {
// }

// /*
//  * --INFO--
//  * Address:	8041C608
//  * Size:	000070
//  */
// Container<MapCode::Code>::~Container()
// {
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
inline MapCode::Mgr::~Mgr(void)
{
	// UNUSED FUNCTION
}

/*
 * TODO
 *
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void MapCode::Mgr::write(Stream& stream)
{
	// UNUSED FUNCTION
	m_codeArray.write(stream);
}

/**
 * @generated{write__31ArrayContainer<Q27MapCode4Code>FR6Stream}
 * @generated{writeObject__31ArrayContainer<Q27MapCode4Code>FR6StreamRQ27MapCode4Code}
 */

/*
 * --INFO--
 * Address:	8041C678
 * Size:	0000E4
 */
// template <> void ArrayContainer<MapCode::Code>::write(Stream& stream)
// {
// 	stream.textBeginGroup(m_name);
// 	stream.addTab();
// 	stream.writeInt(m_count);
// 	stream.textWriteText("\r\n");
// 	for (int i = 0; i < m_count; i++) {
// 		stream.addTab();
// 		writeObject(stream, m_objects[i]);
// 		stream.textWriteText("# %d/%d\r\n", i, m_count);
// 	}
// }

/*
 * --INFO--
 * Address:	8041C75C
 * Size:	000004
 */
// template <> void ArrayContainer<MapCode::Code>::writeObject(Stream&, MapCode::Code&) { }

/*
 * read__Q27MapCode3MgrFR6Stream
 * --INFO--
 * Address:	8041C760
 * Size:	00002C
 */
void MapCode::Mgr::read(Stream& stream) { m_codeArray.read(stream); }

/**
 * @generated{read__31ArrayContainer<Q27MapCode4Code>FR6Stream}
 * @generated{readObject__31ArrayContainer<Q27MapCode4Code>FR6StreamRQ27MapCode4Code}
 * @generated{alloc__31ArrayContainer<Q27MapCode4Code>Fi}
 */

// /*
//  * --INFO--
//  * Address:	8041C78C
//  * Size:	0000A0
//  */
// template <> void ArrayContainer<MapCode::Code>::read(Stream& stream)
// {
// 	m_limit = stream.readInt();
// 	alloc(m_limit);
// 	m_count = m_limit;
// 	for (int i = 0; i < m_limit; ++i) {
// 		readObject(stream, m_objects[i]);
// 	}
// }

// /*
//  * --INFO--
//  * Address:	8041C82C
//  * Size:	000004
//  */
// void ArrayContainer<MapCode::Code>::readObject(Stream&, MapCode::Code&) { }

// /*
//  * --INFO--
//  * Address:	8041C830
//  * Size:	00004C
//  */
// void ArrayContainer<MapCode::Code>::alloc(int count)
// {
// 	m_objects  = new MapCode::Code[count];
// 	m_limit    = count;
// 	m_count = 0;
// }

/*
 * --INFO--
 * Address:	8041C87C
 * Size:	000044
 */
void MapCode::Mgr::attachCodes(Sys::TriangleTable* table)
{
	for (int i = 0; i < m_codeArray.m_limit; i++) {
		Code obj                   = m_codeArray.m_objects[i];
		table->m_objects[i].m_code = obj;
	}
}

/*
 * writeObject__Q37MapCode3Mgr9CodeArrayFR6StreamRQ27MapCode4Code
 * --INFO--
 * Address:	8041C8C0
 * Size:	00002C
 */
void MapCode::Mgr::CodeArray::writeObject(Stream& output, MapCode::Code& object)
{
	object.write(output);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x0(r5)
	  mr        r4, r0
	  bl        -0x7268
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * readObject__Q37MapCode3Mgr9CodeArrayFR6StreamRQ27MapCode4Code
 * --INFO--
 * Address:	8041C8EC
 * Size:	000034
 */
void MapCode::Mgr::CodeArray::readObject(Stream& input, MapCode::Code& object) { object.read(input); }

/**
 * @generated{addOne__31ArrayContainer<Q27MapCode4Code>FRQ27MapCode4Code}
 * @generated{setArray__31ArrayContainer<Q27MapCode4Code>FPQ27MapCode4Codei}
 * @generated{get__31ArrayContainer<Q27MapCode4Code>FPv}
 * @generated{getNext__31ArrayContainer<Q27MapCode4Code>FPv}
 * @generated{getStart__31ArrayContainer<Q27MapCode4Code>Fv}
 * @generated{getEnd__31ArrayContainer<Q27MapCode4Code>Fv}
 * @generated{getAt__31ArrayContainer<Q27MapCode4Code>Fi}
 * @generated{getTo__31ArrayContainer<Q27MapCode4Code>Fv}
 * @generated{getObject__26Container<Q27MapCode4Code>FPv}
 * @generated{getAt__26Container<Q27MapCode4Code>Fi}
 * @generated{getTo__26Container<Q27MapCode4Code>Fv}
 */

// /*
//  * --INFO--
//  * Address:	8041C920
//  * Size:	000028
//  */
// template <> void ArrayContainer<MapCode::Code>::addOne(MapCode::Code& object)
// {
// }

// /*
//  * --INFO--
//  * Address:	8041C948
//  * Size:	000010
//  */
// template <>
// void ArrayContainer<MapCode::Code>::setArray(MapCode::Code* objects, int count)
// {
// }

// /*
//  * --INFO--
//  * Address:	8041C958
//  * Size:	00000C
//  */
// template <> MapCode::Code* ArrayContainer<MapCode::Code>::get(void* index)
// {
// }

// /*
//  * --INFO--
//  * Address:	8041C964
//  * Size:	000008
//  */
// template <> int ArrayContainer<MapCode::Code>::getNext(void* index)
// {
// }

// /*
//  * --INFO--
//  * Address:	8041C96C
//  * Size:	000008
//  */
// template <> u32 ArrayContainer<MapCode::Code>::getStart() { return 0x0; }

// /*
//  * --INFO--
//  * Address:	8041C974
//  * Size:	000008
//  */
// template <> int ArrayContainer<MapCode::Code>::getEnd()
// {
// }

// /*
//  * --INFO--
//  * Address:	8041C97C
//  * Size:	00000C
//  */
// template <> MapCode::Code* ArrayContainer<MapCode::Code>::getAt(int index)
// {
// }

// /*
//  * --INFO--
//  * Address:	8041C988
//  * Size:	000008
//  */
// template <> int ArrayContainer<MapCode::Code>::getTo()
// {
// }

// /*
//  * --INFO--
//  * Address:	8041C990
//  * Size:	00002C
//  */
// template <> MapCode::Code* Container<MapCode::Code>::getObject(void* index)
// {
// }

// /*
//  * --INFO--
//  * Address:	8041C9BC
//  * Size:	000008
//  */
// template <> u32 Container<MapCode::Code>::getAt(int) { return 0x0; }

// /*
//  * --INFO--
//  * Address:	8041C9C4
//  * Size:	000008
//  */
// template <> u32 Container<MapCode::Code>::getTo() { return 0x0; }
