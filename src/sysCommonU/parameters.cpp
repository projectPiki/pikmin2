#include "Parameters.h"
#include "stream.h"
#include "BaseParm.h"
#include "Dolphin/string.h"

extern

    /*
     * --INFO--
     * Address:	80413658
     * Size:	0000AC
     */
    BaseParm::BaseParm(Parameters* parameters, ulong rawID, char* comment)
    : m_id()
    , m_comment(comment)
{
	BaseParm* parm1;
	BaseParm* parm2 = nullptr;
	for (parm1 = parameters->m_parmsHead; parm1 != NULL;
	     parm1 = parm2->m_next) {
		parm2 = parm1;
	}
	if (parm2 != nullptr) {
		parm2->m_next = this;
	} else {
		parameters->m_parmsHead = this;
	}
	m_id   = rawID;
	m_next = nullptr;
}

/*
 * --INFO--
 * Address:	80413704
 * Size:	0000EC
 */
void Parameters::write(Stream& stream)
{
	stream.textBeginGroup(m_name);
	for (BaseParm* parm = m_parmsHead; parm != nullptr; parm = parm->m_next) {
		stream.textWriteTab(stream.m_tabCount);
		parm->m_id.write(stream);
		stream.writeInt(parm->size());
		parm->write(stream);
		stream.textWriteText("\t# %s\r\n", parm->m_comment);
	}
	stream.textWriteTab(stream.m_tabCount);
	ID32::eof.write(stream);
	stream.textWriteText("\r\n");
	stream.textEndGroup();
}

/*
 * --INFO--
 * Address:	804137F0
 * Size:	000004
 */
void BaseParm::write(Stream& stream) { return; }

/*
 * --INFO--
 * Address:	804137F4
 * Size:	0000C8
 */
void Parameters::read(Stream& stream)
{
	BaseParm* currentParm;
	while (true) {
		ID32 currentID;
		currentID.read(stream);
		if (currentID.isEof()) {
			return;
		}
		char buffer[256];
		currentID.sprint(buffer);
		int parmSize = stream.readInt();
		currentParm  = findParm(currentID.m_id.raw);
		if (currentParm != nullptr) {
			currentParm->read(stream);
		} else {
			if (parmSize != -1) {
				stream.skipReading(parmSize);
			} else {
				stream.skipReadingText();
			}
		}
	}
}

/*
 * --INFO--
 * Address:	804138BC
 * Size:	000004
 */
void BaseParm::read(Stream& stream) { return; }

/*
 * --INFO--
 * Address:	804138C0
 * Size:	000064
 */
BaseParm* Parameters::findParm(ulong rawID)
{
	for (BaseParm* parm = m_parmsHead; parm != nullptr; parm = parm->m_next) {
		if (parm->m_id == rawID) {
			return parm;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	80413924
 * Size:	000034
 */
template <> void Parm<int>::read(Stream& stream) { m_value = stream.readInt(); }

/*
 * --INFO--
 * Address:	80413958
 * Size:	00002C
 */
template <> void Parm<int>::write(Stream& stream) { stream.writeInt(m_value); }

/*
 * --INFO--
 * Address:	80413984
 * Size:	000034
 */
template <> void Parm<unsigned char>::read(Stream& stream)
{
	m_value = stream.readByte();
}

/*
 * --INFO--
 * Address:	804139B8
 * Size:	00002C
 */
template <> void Parm<unsigned char>::write(Stream& stream)
{
	stream.writeByte((u8)m_value);
}

/*
 * --INFO--
 * Address:	804139E4
 * Size:	000044
 */
template <> void Parm<bool>::read(Stream& stream)
{
	m_value = (bool)stream.readByte();
}

/*
 * --INFO--
 * Address:	80413A28
 * Size:	000034
 */
template <> void Parm<bool>::write(Stream& stream)
{
	stream.writeByte(m_value ? 1 : 0);
}

/*
 * --INFO--
 * Address:	80413A5C
 * Size:	000034
 */
template <> void Parm<float>::read(Stream& stream)
{
	m_value = stream.readFloat();
}

/*
 * --INFO--
 * Address:	80413A90
 * Size:	000028
 */
template <> void Parm<float>::write(Stream& stream)
{
	stream.writeFloat(m_value);
}

#ifdef NOPE

/*
 * --INFO--
 * Address:	80413AB8
 * Size:	0001B0
 */
ParmString::ParmString(Parameters* parameters, char* value, int length,
                       ulong rawID, char* comment)
    : BaseParm(parameters, rawID, comment)
    , m_length(length)
{
	char* buffer     = new char[m_length + 1];
	m_value          = buffer;
	int actualLength = strlen(value);
	int i;
	for (i = 0; i < actualLength; ++i) {
		m_value[i] = value[i];
	}
	m_value[i] = '\0';
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r9, 0x804F
	  stw       r0, 0x24(r1)
	  subi      r0, r9, 0x4A88
	  stmw      r26, 0x8(r1)
	  mr        r30, r3
	  mr        r26, r4
	  mr        r31, r5
	  mr        r27, r6
	  mr        r28, r7
	  mr        r29, r8
	  stw       r0, 0x0(r3)
	  addi      r3, r30, 0x4
	  bl        -0x880
	  stw       r29, 0x14(r30)
	  li        r3, 0
	  lwz       r4, 0x4(r26)
	  b         .loc_0x54

	.loc_0x4C:
	  mr        r3, r4
	  lwz       r4, 0x10(r4)

	.loc_0x54:
	  cmplwi    r4, 0
	  bne+      .loc_0x4C
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  stw       r30, 0x10(r3)
	  b         .loc_0x70

	.loc_0x6C:
	  stw       r30, 0x4(r26)

	.loc_0x70:
	  mr        r4, r28
	  addi      r3, r30, 0x4
	  bl        -0x72C
	  li        r0, 0
	  lis       r3, 0x804F
	  stw       r0, 0x10(r30)
	  subi      r0, r3, 0x4A9C
	  stw       r0, 0x0(r30)
	  stw       r27, 0x1C(r30)
	  lwz       r3, 0x1C(r30)
	  addi      r3, r3, 0x1
	  bl        -0x3EFBA8
	  stw       r3, 0x18(r30)
	  mr        r3, r31
	  bl        -0x349250
	  cmpwi     r3, 0
	  li        r4, 0
	  ble-      .loc_0x18C
	  cmpwi     r3, 0x8
	  subi      r5, r3, 0x8
	  ble-      .loc_0x160
	  addi      r0, r5, 0x7
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r5, 0
	  ble-      .loc_0x160

	.loc_0xD8:
	  add       r29, r31, r4
	  lwz       r5, 0x18(r30)
	  lbz       r0, 0x0(r29)
	  addi      r10, r4, 0x1
	  addi      r9, r4, 0x2
	  addi      r8, r4, 0x3
	  stbx      r0, r5, r4
	  addi      r7, r4, 0x4
	  addi      r6, r4, 0x5
	  addi      r5, r4, 0x6
	  lbz       r12, 0x1(r29)
	  addi      r0, r4, 0x7
	  lwz       r11, 0x18(r30)
	  addi      r4, r4, 0x8
	  stbx      r12, r11, r10
	  lbz       r11, 0x2(r29)
	  lwz       r10, 0x18(r30)
	  stbx      r11, r10, r9
	  lbz       r10, 0x3(r29)
	  lwz       r9, 0x18(r30)
	  stbx      r10, r9, r8
	  lbz       r9, 0x4(r29)
	  lwz       r8, 0x18(r30)
	  stbx      r9, r8, r7
	  lbz       r8, 0x5(r29)
	  lwz       r7, 0x18(r30)
	  stbx      r8, r7, r6
	  lbz       r7, 0x6(r29)
	  lwz       r6, 0x18(r30)
	  stbx      r7, r6, r5
	  lbz       r6, 0x7(r29)
	  lwz       r5, 0x18(r30)
	  stbx      r6, r5, r0
	  bdnz+     .loc_0xD8

	.loc_0x160:
	  sub       r0, r3, r4
	  add       r5, r31, r4
	  mtctr     r0
	  cmpw      r4, r3
	  bge-      .loc_0x18C

	.loc_0x174:
	  lbz       r0, 0x0(r5)
	  addi      r5, r5, 0x1
	  lwz       r3, 0x18(r30)
	  stbx      r0, r3, r4
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x174

	.loc_0x18C:
	  lwz       r5, 0x18(r30)
	  li        r0, 0
	  mr        r3, r30
	  stbx      r0, r5, r4
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80413C68
 * Size:	00002C
 */
void ParmString::write(Stream&) { Stream::writeString(stream, this->m_value); }

/*
 * --INFO--
 * Address:	80413C94
 * Size:	000030
 */
void ParmString::read(Stream&)
{
	Stream::readString(stream, this->value, this->characterCount_0x1c);
}

/*
 * --INFO--
 * Address:	80413CC4
 * Size:	0000B8
 */
void ParmEnum::ParmEnum(Parameters*, char**, unsigned long, int, long, char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r10, 0x804F
	  stw       r0, 0x34(r1)
	  subi      r0, r10, 0x4A88
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  mr        r26, r4
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r7
	  mr        r30, r8
	  mr        r31, r9
	  stw       r0, 0x0(r3)
	  addi      r3, r25, 0x4
	  bl        -0xA90
	  stw       r31, 0x14(r25)
	  li        r3, 0
	  lwz       r4, 0x4(r26)
	  b         .loc_0x58

	.loc_0x50:
	  mr        r3, r4
	  lwz       r4, 0x10(r4)

	.loc_0x58:
	  cmplwi    r4, 0
	  bne+      .loc_0x50
	  cmplwi    r3, 0
	  beq-      .loc_0x70
	  stw       r25, 0x10(r3)
	  b         .loc_0x74

	.loc_0x70:
	  stw       r25, 0x4(r26)

	.loc_0x74:
	  mr        r4, r30
	  addi      r3, r25, 0x4
	  bl        -0x93C
	  li        r0, 0
	  lis       r3, 0x804F
	  stw       r0, 0x10(r25)
	  subi      r0, r3, 0x4AB0
	  mr        r3, r25
	  stw       r0, 0x0(r25)
	  stw       r28, 0x18(r25)
	  stw       r29, 0x1C(r25)
	  stw       r27, 0x20(r25)
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80413D7C
 * Size:	00002C
 */
void ParmEnum::write(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r4
	  lwz       r4, 0x18(r3)
	  mr        r3, r0
	  bl        0x1A2C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80413DA8
 * Size:	000034
 */
void ParmEnum::read(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r3, r4
	  bl        0xCD0
	  stw       r3, 0x18(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80413DDC
 * Size:	000008
 */
int ParmEnum::size() { return 4; }

/*
 * --INFO--
 * Address:	80413DE4
 * Size:	000008
 */
int ParmString::size() { return -1; }

#endif
