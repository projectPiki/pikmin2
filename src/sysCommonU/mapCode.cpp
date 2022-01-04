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
	return m_attribute;
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r3)
	  rlwinm    r3,r0,0,28,31
	  blr
	*/
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
u8 MapCode::Code::getSlipCode()
{
	return m_slipCode;
	// return m_attribute >> 4 & 3;
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r3)
	  rlwinm    r3,r0,28,30,31
	  blr
	*/
}

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
bool MapCode::Code::isBald()
{
	return m_isBald;
	// return m_attribute >> 6 & 1;
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r3)
	  rlwinm    r3,r0,26,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void MapCode::Code::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void MapCode::Code::read(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041C458
 * Size:	000024
 */
void MapCode::Code::setCode(int attribute, int slipCode, bool isBald)
{
	m_attribute = attribute;
	m_slipCode  = slipCode;
	m_isBald    = isBald;
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
 * --INFO--
 * Address:	8041C47C
 * Size:	00007C
 */
MapCode::Mgr::Mgr()
    : m_codeArray()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0xB100
	  lis       r4, 0x804B
	  lis       r3, 0x804F
	  subi      r0, r4, 0x5324
	  lis       r4, 0x804F
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x4650
	  lis       r3, 0x804F
	  li        r6, 0
	  stw       r0, 0x0(r31)
	  subi      r5, r4, 0x4698
	  li        r4, 0x1
	  subi      r0, r3, 0x46E0
	  stb       r6, 0x18(r31)
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stb       r4, 0x18(r31)
	  stw       r6, 0x20(r31)
	  stw       r6, 0x1C(r31)
	  stw       r6, 0x24(r31)
	  stw       r0, 0x0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

inline MapCode::Mgr::CodeArray::CodeArray()
    : ArrayContainer<MapCode::Code>()
{
}

/*
 * --INFO--
 * Address:	8041C4F8
 * Size:	000090
 */
MapCode::Mgr::CodeArray::~CodeArray(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8041C56C
	lis      r4, __vt__Q37MapCode3Mgr9CodeArray@ha
	addi     r0, r4, __vt__Q37MapCode3Mgr9CodeArray@l
	stw      r0, 0(r30)
	beq      lbl_8041C55C
	lis      r4, "__vt__31ArrayContainer<Q27MapCode4Code>"@ha
	addi     r0, r4, "__vt__31ArrayContainer<Q27MapCode4Code>"@l
	stw      r0, 0(r30)
	beq      lbl_8041C55C
	lis      r4, "__vt__26Container<Q27MapCode4Code>"@ha
	addi     r0, r4, "__vt__26Container<Q27MapCode4Code>"@l
	stw      r0, 0(r30)
	beq      lbl_8041C55C
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8041C55C:
	extsh.   r0, r31
	ble      lbl_8041C56C
	mr       r3, r30
	bl       __dl__FPv

lbl_8041C56C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8041C588
 * Size:	000080
 */
ArrayContainer<MapCode::Code>::~ArrayContainer()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8041C5EC
	lis      r4, "__vt__31ArrayContainer<Q27MapCode4Code>"@ha
	addi     r0, r4, "__vt__31ArrayContainer<Q27MapCode4Code>"@l
	stw      r0, 0(r30)
	beq      lbl_8041C5DC
	lis      r4, "__vt__26Container<Q27MapCode4Code>"@ha
	addi     r0, r4, "__vt__26Container<Q27MapCode4Code>"@l
	stw      r0, 0(r30)
	beq      lbl_8041C5DC
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8041C5DC:
	extsh.   r0, r31
	ble      lbl_8041C5EC
	mr       r3, r30
	bl       __dl__FPv

lbl_8041C5EC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8041C608
 * Size:	000070
 */
Container<MapCode::Code>::~Container()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8041C65C
	lis      r4, "__vt__26Container<Q27MapCode4Code>"@ha
	addi     r0, r4, "__vt__26Container<Q27MapCode4Code>"@l
	stw      r0, 0(r30)
	beq      lbl_8041C64C
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8041C64C:
	extsh.   r0, r31
	ble      lbl_8041C65C
	mr       r3, r30
	bl       __dl__FPv

lbl_8041C65C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

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
	m_codeArray.write(stream);
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041C678
 * Size:	0000E4
 */
template <> void ArrayContainer<MapCode::Code>::write(Stream& stream)
{
	stream.textBeginGroup(m_name);
	stream.addTab();
	stream.writeInt(m_count);
	stream.textWriteText("\r\n");
	for (int i = 0; i < m_count; i++) {
		stream.addTab();
		writeObject(stream, m_objects[i]);
		stream.textWriteText("# %d/%d\r\n", i, m_count);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r4, 0x14(r3)
	  mr        r3, r29
	  bl        -0x8688
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        -0x827C
	  lwz       r4, 0x20(r28)
	  mr        r3, r29
	  bl        -0x6EFC
	  mr        r3, r29
	  addi      r4, r2, 0x2048
	  crclr     6, 0x6
	  bl        -0x84F0
	  lis       r3, 0x804A
	  li        r30, 0
	  subi      r31, r3, 0x6848
	  b         .loc_0xB0

	.loc_0x68:
	  lwz       r4, 0x414(r29)
	  mr        r3, r29
	  bl        -0x82B4
	  mr        r3, r28
	  lwz       r0, 0x24(r28)
	  lwz       r12, 0x0(r28)
	  mr        r4, r29
	  add       r5, r0, r30
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r6, 0x20(r28)
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r30
	  crclr     6, 0x6
	  bl        -0x8544
	  addi      r30, r30, 0x1

	.loc_0xB0:
	  lwz       r0, 0x20(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x68
	  mr        r3, r29
	  bl        -0x8698
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041C75C
 * Size:	000004
 */
template <>
void ArrayContainer<MapCode::Code>::writeObject(Stream&, MapCode::Code&)
{
}

/*
 * --INFO--
 * Address:	8041C760
 * Size:	00002C
 */
void MapCode::Mgr::read(Stream& stream)
{
	m_codeArray.read(stream);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041C78C
 * Size:	0000A0
 */
template <> void ArrayContainer<MapCode::Code>::read(Stream& stream)
{
	m_count = stream.readInt();
	alloc(m_count);
	m_endIndex = m_count;
	for (int i = 0; i < m_count; ++i) {
		readObject(stream, m_objects[i]);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r30
	  bl        -0x7D20
	  stw       r3, 0x20(r29)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r4, 0x20(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x20(r29)
	  li        r31, 0
	  stw       r0, 0x1C(r29)
	  b         .loc_0x78

	.loc_0x54:
	  mr        r3, r29
	  lwz       r0, 0x24(r29)
	  lwz       r12, 0x0(r29)
	  mr        r4, r30
	  add       r5, r0, r31
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x1

	.loc_0x78:
	  lwz       r0, 0x20(r29)
	  cmpw      r31, r0
	  blt+      .loc_0x54
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041C82C
 * Size:	000004
 */
void ArrayContainer<MapCode::Code>::readObject(Stream&, MapCode::Code&) { }

/*
 * --INFO--
 * Address:	8041C830
 * Size:	00004C
 */
void ArrayContainer<MapCode::Code>::alloc(int count)
{
	m_objects  = new MapCode::Code[count];
	m_count    = count;
	m_endIndex = 0;
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x3F88A4
	  stw       r3, 0x24(r30)
	  li        r0, 0
	  stw       r31, 0x20(r30)
	  stw       r0, 0x1C(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041C87C
 * Size:	000044
 */
void MapCode::Mgr::attachCodes(Sys::TriangleTable* table)
{
	for (int i = 0; i < m_codeArray.m_count; i++) {
		table->m_objects[i].m_code = m_codeArray.m_objects[i];
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  li        r8, 0
	  li        r7, 0
	  b         .loc_0x30

	.loc_0x10:
	  lwz       r6, 0x24(r3)
	  addi      r0, r7, 0x5C
	  lwz       r5, 0x24(r4)
	  addi      r7, r7, 0x60
	  lbzx      r6, r6, r8
	  addi      r8, r8, 0x1
	  stb       r6, 0x8(r1)
	  stbx      r6, r5, r0

	.loc_0x30:
	  lwz       r0, 0x20(r3)
	  cmpw      r8, r0
	  blt+      .loc_0x10
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041C8C0
 * Size:	00002C
 */
void MapCode::Mgr::CodeArray::writeObject(Stream& stream, MapCode::Code& object)
{
	stream.writeByte(object.m_contents);
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
 * --INFO--
 * Address:	8041C8EC
 * Size:	000034
 */
void MapCode::Mgr::CodeArray::readObject(Stream& stream, MapCode::Code& object)
{
	object.m_contents = stream.readByte();
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  bl        -0x8468
	  stb       r3, 0x0(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041C920
 * Size:	000028
 */
template <> void ArrayContainer<MapCode::Code>::addOne(MapCode::Code& object)
{
	if (m_count <= m_endIndex) {
		return;
	}
	m_objects[m_endIndex++].m_contents = m_objects->m_contents;
	/*
	.loc_0x0:
	  lwz       r6, 0x1C(r3)
	  lwz       r0, 0x20(r3)
	  cmpw      r6, r0
	  bgelr-
	  lwz       r5, 0x24(r3)
	  addi      r0, r6, 0x1
	  stw       r0, 0x1C(r3)
	  lbz       r0, 0x0(r4)
	  stbx      r0, r5, r6
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041C948
 * Size:	000010
 */
template <>
void ArrayContainer<MapCode::Code>::setArray(MapCode::Code* objects, int count)
{
	m_objects  = objects;
	m_count    = count;
	m_endIndex = count;
	/*
	.loc_0x0:
	  stw       r4, 0x24(r3)
	  stw       r5, 0x20(r3)
	  stw       r5, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041C958
 * Size:	00000C
 */
template <> MapCode::Code* ArrayContainer<MapCode::Code>::get(void* index)
{
	return &m_objects[(ulong)index];
	/*
	.loc_0x0:
	  lwz       r0, 0x24(r3)
	  add       r3, r0, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041C964
 * Size:	000008
 */
template <> int ArrayContainer<MapCode::Code>::getNext(void* index)
{
	return ((ulong)index) + 1;

	/*
	.loc_0x0:
	  addi      r3, r4, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041C96C
 * Size:	000008
 */
template <> u32 ArrayContainer<MapCode::Code>::getStart() { return 0x0; }

/*
 * --INFO--
 * Address:	8041C974
 * Size:	000008
 */
template <> int ArrayContainer<MapCode::Code>::getEnd()
{
	return m_endIndex;
	/*
	.loc_0x0:
	  lwz       r3, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041C97C
 * Size:	00000C
 */
template <> MapCode::Code* ArrayContainer<MapCode::Code>::getAt(int index)
{
	return &m_objects[index];
	/*
	.loc_0x0:
	  lwz       r0, 0x24(r3)
	  add       r3, r0, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041C988
 * Size:	000008
 */
template <> int ArrayContainer<MapCode::Code>::getTo()
{
	return m_count;
	/*
	.loc_0x0:
	  lwz       r3, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041C990
 * Size:	00002C
 */
template <> MapCode::Code* Container<MapCode::Code>::getObject(void* index)
{
	return get((ulong)index);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8041C9BC
 * Size:	000008
 */
template <> u32 Container<MapCode::Code>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	8041C9C4
 * Size:	000008
 */
template <> u32 Container<MapCode::Code>::getTo() { return 0x0; }
