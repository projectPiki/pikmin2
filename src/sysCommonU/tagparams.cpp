#include "PrimTagParm.h"

/*
 * --INFO--
 * Address:	8041BD2C
 * Size:	000004
 */
void TagParm::doRead(Stream&) { }

/*
 * --INFO--
 * Address:	8041BD30
 * Size:	000004
 */
void TagParm::doWrite(Stream&) { }

/*
 * --INFO--
 * Address:	8041BD34
 * Size:	000004
 */
void TagParm::doDump() { }

/*
 * --INFO--
 * Address:	8041BD38
 * Size:	000034
 */
void PrimTagParm<int>::doRead(Stream& stream) { m_data = stream.readInt(); }

/*
 * --INFO--
 * Address:	8041BD6C
 * Size:	00002C
 */
void PrimTagParm<int>::doWrite(Stream& stream) { stream.writeInt(m_data); }

/*
 * --INFO--
 * Address:	8041BD98
 * Size:	000004
 */
void PrimTagParm<int>::doDump() { }

/*
 * --INFO--
 * Address:	8041BD9C
 * Size:	000034
 */
void PrimTagParm<u16>::doRead(Stream& stream) { m_data = stream.readShort(); }

/*
 * --INFO--
 * Address:	8041BDD0
 * Size:	00002C
 */
void PrimTagParm<u16>::doWrite(Stream& stream) { stream.writeShort(m_data); }

/*
 * --INFO--
 * Address:	8041BDFC
 * Size:	000004
 */
void PrimTagParm<u16>::doDump() { }

/*
 * --INFO--
 * Address: 8041BE00
 * Size:    000078
 */
void PrimTagParm<u64>::doRead(Stream& stream)
{
	char* str = stream.readString(nullptr, nullptr);
	for (int i = 0; i < 8; i++) {
		((char*)&m_data)[i] = str[i];
	}
}

/*
 * --INFO--
 * Address: 8041BE78
 * Size:    00006C
 */
void PrimTagParm<u64>::doWrite(Stream& stream)
{
	char data[8];
	for (int i = 0; i < 8; i++) {
		data[i] = ((char*)&m_data)[i];
	}
	stream.writeString(data);
}

/*
 * --INFO--
 * Address:	8041BEE4
 * Size:	000004
 */
void PrimTagParm<u64>::doDump() { }

/*
 * --INFO--
 * Address:	8041BEE8
 * Size:	000034
 */
void PrimTagParm<f32>::doRead(Stream& stream) { m_data = stream.readFloat(); }

/*
 * --INFO--
 * Address:	8041BF1C
 * Size:	000028
 */
void PrimTagParm<f32>::doWrite(Stream& stream) { stream.writeFloat(m_data); }

/*
 * --INFO--
 * Address:	8041BF44
 * Size:	000004
 */
void PrimTagParm<f32>::doDump() { }

/*
 * --INFO--
 * Address:	8041BF48
 * Size:	000024
 */
void PrimTagParm<Vector3f>::doRead(Stream& stream) { m_data.read(stream); }

/*
 * --INFO--
 * Address:	8041BF6C
 * Size:	000024
 */
void PrimTagParm<Vector3f>::doWrite(Stream& stream) { m_data.write(stream); }

/*
 * --INFO--
 * Address:	8041BF90
 * Size:	000004
 */
void PrimTagParm<Vector3f>::doDump() { }

/*
 * --INFO--
 * Address:	8041BF94
 * Size:	000044
 */
StringTagParm::StringTagParm(TagParameters* params, char* name)
    : TagParm(params, name)
{
	m_data = nullptr;
}

/*
 * --INFO--
 * Address:	8041BFD8
 * Size:	000004
 */
void StringTagParm::flushValue() { }

/*
 * --INFO--
 * Address:	8041BFDC
 * Size:	00003C
 */
void StringTagParm::doRead(Stream& stream)
{
	m_data = stream.readString(nullptr, 0);
}

/*
 * --INFO--
 * Address:	8041C018
 * Size:	00002C
 */
void StringTagParm::doWrite(Stream& stream) { stream.writeString(m_data); }

/*
 * --INFO--
 * Address:	8041C044
 * Size:	000004
 */
void StringTagParm::doDump() { }

/*
 * --INFO--
 * Address:	8041C048
 * Size:	000054
 */
TagParameters::TagParameters(char* name)
{
	head   = 0;
	m_name = name;
}

/*
 * --INFO--
 * Address:	8041C09C
 * Size:	000038
 */
TagParm::TagParm(TagParameters* container, char* name)
{
	m_name = name;
	m_next = nullptr;
	if (container->head != nullptr) {
		this->m_next    = container->head;
		container->head = this;
		return;
	}
	container->head = this;
	return;
}

/*
 * --INFO--
 * Address:	8041C0D4
 * Size:	0000D4
 */

/*
extern "C" {
extern size_t strlen(char*);
extern int strncmp(char*, char*, size_t);
}
void TagParameters::read(Stream& stream)
{

    uint uVar1;
    char* __s2;
    size_t sVar2;
    int iVar3;
    size_t sVar4;
    TagParm* pTVar5;

    while (true) {
        __s2  = Stream::readString(stream, (char*)0x0, 0);
        sVar2 = strlen("end");
        iVar3 = strncmp("end", __s2, sVar2);
        uVar1 = countLeadingZeros(iVar3);
        if ((uVar1 >> 5 & 0xff) != 0)
            break;
        for (pTVar5 = this->head; pTVar5 != (TagParm*)0x0;
             pTVar5 = pTVar5->next) {
            sVar2 = strlen(__s2);
            sVar4 = strlen(pTVar5->name);
            if (sVar2 == sVar4) {
                sVar2 = strlen(__s2);
                iVar3 = strncmp(pTVar5->name, __s2, sVar2);
                if (iVar3 == 0) {
                    *pTVar5->doRead(pTVar5, stream);
                }
            }
        }
    }
    return;
    */
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4

.loc_0x18:
  mr        r3, r28
  li        r4, 0
  li        r5, 0
  bl        -0x7024
  mr        r0, r3
  addi      r3, r2, 0x2040
  mr        r30, r0
  bl        -0x3517F8
  mr        r5, r3
  mr        r4, r30
  addi      r3, r2, 0x2040
  bl        -0x351A98
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0xC0
  lwz       r29, 0x18(r27)
  b         .loc_0xB4

.loc_0x5C:
  mr        r3, r30
  bl        -0x351824
  mr        r31, r3
  lwz       r3, 0x4(r29)
  bl        -0x351830
  cmpw      r31, r3
  bne-      .loc_0xB0
  mr        r3, r30
  bl        -0x351840
  mr        r5, r3
  lwz       r3, 0x4(r29)
  mr        r4, r30
  bl        -0x351AE0
  cmpwi     r3, 0
  bne-      .loc_0xB0
  mr        r3, r29
  mr        r4, r28
  lwz       r12, 0x0(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl

.loc_0xB0:
  lwz       r29, 0x8(r29)

.loc_0xB4:
  cmplwi    r29, 0
  bne+      .loc_0x5C
  b         .loc_0x18

.loc_0xC0:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
//}
