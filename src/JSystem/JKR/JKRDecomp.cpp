#include "Dolphin/os.h"
#include "JSystem/JKR/JKRDecomp.h"
#include "JSystem/JKR/Aram.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global sMessageBuffer__9JKRDecomp
    sMessageBuffer__9JKRDecomp:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global sMessageQueue__9JKRDecomp
    sMessageQueue__9JKRDecomp:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__9JKRDecomp
    __vt__9JKRDecomp:
        .4byte 0
        .4byte 0
        .4byte __dt__9JKRDecompFv
        .4byte run__9JKRDecompFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global sDecompObject__9JKRDecomp
    sDecompObject__9JKRDecomp:
        .skip 0x8
*/

/*
 * --INFO--
 * Address:	8001C934
 * Size:	000060
 */
JKRDecomp* JKRDecomp::create(long p1)
{
	JKRDecomp* thread = sDecompObject;
	if (sDecompObject == nullptr) {
		thread = new (JKRHeap::sSystemHeap, 0) JKRDecomp(p1);
	}
	sDecompObject = thread;
	return sDecompObject;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, sDecompObject__9JKRDecomp@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8001C97C
	lwz      r4, sSystemHeap__7JKRHeap@sda21(r13)
	li       r3, 0x7c
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_8001C978
	mr       r4, r31
	bl       __ct__9JKRDecompFl
	mr       r0, r3

lbl_8001C978:
	stw      r0, sDecompObject__9JKRDecomp@sda21(r13)

lbl_8001C97C:
	lwz      r0, 0x14(r1)
	lwz      r3, sDecompObject__9JKRDecomp@sda21(r13)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001C994
 * Size:	000050
 * __ct
 */
JKRDecomp::JKRDecomp(long p1)
    : JKRThread(0x4000, 0x10, p1)
{
	OSResumeThread(m_thread);
}

/*
 * --INFO--
 * Address:	8001C9E4
 * Size:	000060
 */
JKRDecomp::~JKRDecomp()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8001CA28
	lis      r5, __vt__9JKRDecomp@ha
	li       r4, 0
	addi     r0, r5, __vt__9JKRDecomp@l
	stw      r0, 0(r30)
	bl       __dt__9JKRThreadFv
	extsh.   r0, r31
	ble      lbl_8001CA28
	mr       r3, r30
	bl       __dl__FPv

lbl_8001CA28:
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
 * Address:	8001CA44
 * Size:	0000C8
 */
void* JKRDecomp::run()
{
	void* inputBuffer[1];
	JKRDecompCommand* command;
	// int outMessage;
	OSInitMessageQueue(&sMessageQueue, sMessageBuffer, 4);
	while (true) {
		while (true) {
			while (true) {
				OSReceiveMessage(&sMessageQueue, inputBuffer, TRUE);
				command = static_cast<JKRDecompCommand*>(inputBuffer[0]);
				decode(command->_04, command->_08, command->_0C, command->_10);
				if (command->_20 == 0) {
					break;
				}
				if (command->_20 == 1) {
					JKRAramPiece::sendCommand(command->_24);
				}
			}
			if (command->m_callback == nullptr) {
				break;
			}
			command->m_callback(command);
		}
		if (command->_1C) {
			// outMessage = 1;
			OSSendMessage(command->_1C, (void*)1, FALSE);
		} else {
			// outMessage = 1;
			OSSendMessage(&command->_28, (void*)1, FALSE);
		}
	}
}

/*
 * --INFO--
 * Address:	8001CB0C
 * Size:	000030
 */
BOOL JKRDecomp::sendCommand(JKRDecompCommand* command) { return OSSendMessage(&sMessageQueue, command, TRUE); }

/*
 * --INFO--
 * Address:	8001CB3C
 * Size:	0000A0
 */
bool JKRDecomp::orderSync(u8* p1, u8* p2, u32 p3, u32 p4)
{
	JKRDecompCommand* command = new (JKRHeap::sSystemHeap, -4) JKRDecompCommand();
	command->_04              = p1;
	command->_08              = p2;
	command->_0C              = p3;
	command->_10              = p4;
	command->m_callback       = nullptr;
	OSSendMessage(&sMessageQueue, command, TRUE);
	void* inputBuffer[1];
	OSReceiveMessage(&command->_28, inputBuffer, TRUE);
	delete command;
	return true;
}

/*
 * --INFO--
 * Address:	8001CBDC
 * Size:	00008C
 */
void JKRDecomp::decode(u8* p1, u8* p2, u32 p3, u32 p4)
{
	switch (checkCompressed(p1)) {
	case YAY0:
		decodeSZP(p1, p2, p3, p4);
		break;
	case YAZ0:
		decodeSZS(p1, p2, p3, p4);
		break;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        0x2E8
	  cmpwi     r3, 0x1
	  bne-      .loc_0x50
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        .loc_0x8C
	  b         .loc_0x6C

	.loc_0x50:
	  cmpwi     r3, 0x2
	  bne-      .loc_0x6C
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  mr        r6, r31
	  bl        0x1C8

	.loc_0x6C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x8C:
	*/
}

#ifdef EXTRACT_TO_UINT
#error EXTRACT_TO_UINT already defined.
#else
/* Args are array variable, followed by indices of bytes from least- to
 * most-significant. */
#define EXTRACT_TO_UINT(array, i1, i2, i3, i4) ((uint)array[i1] | (uint)array[i2] << 8 | (uint)array[i3] << 16 | (uint)array[i4] << 24)

/*
 * --INFO--
 * Address:	8001CC68
 * Size:	0001A4
 */
void JKRDecomp::decodeSZP(u8* p1, u8* p2, u32 p3, u32 p4)
{
	// u32 v5 = (uint)p1[11] | (uint)p1[10] << 8 | (uint)p1[9] << 16 |
	// (uint)p1[8] << 24; u32 v2 = (uint)p1[7]  | (uint)p1[6]  << 8 |
	// (uint)p1[5] << 16 | (uint)p1[4] << 24;
	u32 v5 = EXTRACT_TO_UINT(p1, 11, 10, 9, 8);
	u32 v2 = EXTRACT_TO_UINT(p1, 7, 6, 5, 4);
	int v4 = 0;
	int v6 = 0;
	int v3 = 0x10;
	u32 vr;
	if (p3 != 0 && p4 <= v2) {
		// u8* v7 = p1 + ((uint)p1[15] | (uint)p1[14] << 8 | (uint)p1[13] <<
		// 16 | (uint)p1[12] << 24)
		u8* v7  = p1 + EXTRACT_TO_UINT(p1, 15, 14, 13, 12);
		u8* v13 = p2;
		do {
			if (v6 == 0) {
				u8* v9 = p1 + v3;
				v6     = 0x20;
				v3 += 4;
				vr = EXTRACT_TO_UINT(v9, 3, 2, 1, 0);
			}
			if ((vr & 0x80000000)) {
				if (p4 == 0) {
					p3--;
					*v13 = *v7;
					if (p3 == 0) {
						return;
					}
				} else {
					p4--;
				}
				v4++;
				v13++;
				v7++;
			} else {
				u16* v10 = reinterpret_cast<u16*>(p1 + v5);
				v5 += 2;
				int v8 = v4 - ((reinterpret_cast<u8*>(v10)[0] & 0xF) << 8) | (reinterpret_cast<u8*>(v10)[1]);
				u8 v1;
				int v11;
				if ((int)*v10 >> 0xC == 0) {
					v1 = *v7;
					v7++;
					v11 = v1 + 0x12;
				} else {
					v11 = ((int)*v10 >> 0xC) + 2;
				}
				if (v11 > v2 - v4) {
					v11 = v2 - v4;
				}
				u8* v12 = p2 + v4;
				if (0 < v11) {
					do {
						if (p4 == 0) {
							p3--;
							*v12 = p2[v8 - 1];
							if (p3 == 0) {
								return;
							}
						} else {
							p4--;
						}
						v4++;
						v13++;
						v12++;
						v8++;
					} while (--v11 != 0);
				}
			}
			vr <<= 1;
			v6--;
		} while (v4 < v2);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  cmplwi    r5, 0
	  stmw      r27, 0xC(r1)
	  lbz       r7, 0x9(r3)
	  lbz       r8, 0x5(r3)
	  lbz       r0, 0xD(r3)
	  rlwinm    r9,r7,16,0,15
	  lbz       r10, 0x8(r3)
	  rlwinm    r29,r8,16,0,15
	  lbz       r28, 0x4(r3)
	  rlwinm    r7,r0,16,0,15
	  lbz       r0, 0xC(r3)
	  rlwimi    r9,r10,24,0,7
	  lbz       r12, 0xA(r3)
	  rlwimi    r29,r28,24,0,7
	  lbz       r30, 0x6(r3)
	  rlwimi    r7,r0,24,0,7
	  lbz       r8, 0xE(r3)
	  rlwimi    r9,r12,8,16,23
	  lbz       r28, 0xB(r3)
	  rlwimi    r29,r30,8,16,23
	  lbz       r0, 0x7(r3)
	  rlwimi    r7,r8,8,16,23
	  lbz       r10, 0xF(r3)
	  or        r9, r28, r9
	  or        r0, r0, r29
	  li        r8, 0
	  or        r12, r10, r7
	  li        r10, 0
	  li        r7, 0x10
	  beq-      .loc_0x198
	  cmplw     r6, r0
	  bgt-      .loc_0x198
	  mr        r31, r4
	  add       r12, r3, r12

	.loc_0x8C:
	  cmplwi    r10, 0
	  bne-      .loc_0xC0
	  add       r28, r3, r7
	  li        r10, 0x20
	  lbz       r11, 0x1(r28)
	  addi      r7, r7, 0x4
	  lbz       r29, 0x0(r28)
	  lbz       r30, 0x2(r28)
	  rlwinm    r11,r11,16,0,15
	  rlwimi    r11,r29,24,0,7
	  lbz       r28, 0x3(r28)
	  rlwimi    r11,r30,8,16,23
	  or        r11, r28, r11

	.loc_0xC0:
	  rlwinm.   r29,r11,0,0,0
	  beq-      .loc_0xF8
	  cmplwi    r6, 0
	  bne-      .loc_0xE4
	  lbz       r29, 0x0(r12)
	  subic.    r5, r5, 0x1
	  stb       r29, 0x0(r31)
	  bne-      .loc_0xE8
	  b         .loc_0x198

	.loc_0xE4:
	  subi      r6, r6, 0x1

	.loc_0xE8:
	  addi      r8, r8, 0x1
	  addi      r31, r31, 0x1
	  addi      r12, r12, 0x1
	  b         .loc_0x188

	.loc_0xF8:
	  add       r28, r3, r9
	  addi      r9, r9, 0x2
	  lbz       r30, 0x0(r28)
	  lbz       r29, 0x1(r28)
	  rlwimi    r29,r30,8,16,23
	  srawi.    r28, r29, 0xC
	  rlwinm    r29,r29,0,20,31
	  sub       r27, r8, r29
	  bne-      .loc_0x12C
	  lbz       r29, 0x0(r12)
	  addi      r12, r12, 0x1
	  addi      r29, r29, 0x12
	  b         .loc_0x130

	.loc_0x12C:
	  addi      r29, r28, 0x2

	.loc_0x130:
	  sub       r28, r0, r8
	  cmpw      r29, r28
	  ble-      .loc_0x140
	  mr        r29, r28

	.loc_0x140:
	  add       r30, r4, r8
	  mtctr     r29
	  cmpwi     r29, 0
	  ble-      .loc_0x188

	.loc_0x150:
	  cmplwi    r6, 0
	  bne-      .loc_0x170
	  subi      r29, r27, 0x1
	  subic.    r5, r5, 0x1
	  lbzx      r29, r4, r29
	  stb       r29, 0x0(r30)
	  bne-      .loc_0x174
	  b         .loc_0x198

	.loc_0x170:
	  subi      r6, r6, 0x1

	.loc_0x174:
	  addi      r8, r8, 0x1
	  addi      r31, r31, 0x1
	  addi      r30, r30, 0x1
	  addi      r27, r27, 0x1
	  bdnz+     .loc_0x150

	.loc_0x188:
	  cmpw      r8, r0
	  rlwinm    r11,r11,1,0,30
	  subi      r10, r10, 0x1
	  blt+      .loc_0x8C

	.loc_0x198:
	  lmw       r27, 0xC(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}
#undef EXTRACT_TO_UINT
#endif

/*
 * --INFO--
 * Address:	8001CE0C
 * Size:	0000E4
 */
void JKRDecomp::decodeSZS(unsigned char*, unsigned char*, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x4(r3)
	  cmplwi    r5, 0
	  li        r10, 0
	  add       r0, r4, r0
	  sub       r8, r0, r6
	  beqlr-
	  lwz       r0, 0x0(r3)
	  cmplw     r6, r0
	  bgtlr-
	  addi      r12, r3, 0x10

	.loc_0x28:
	  cmpwi     r10, 0
	  bne-      .loc_0x3C
	  lbz       r11, 0x0(r12)
	  li        r10, 0x8
	  addi      r12, r12, 0x1

	.loc_0x3C:
	  rlwinm.   r0,r11,0,24,24
	  beq-      .loc_0x70
	  cmplwi    r6, 0
	  bne-      .loc_0x64
	  lbz       r0, 0x0(r12)
	  subic.    r5, r5, 0x1
	  stb       r0, 0x0(r4)
	  addi      r4, r4, 0x1
	  bne-      .loc_0x68
	  blr

	.loc_0x64:
	  subi      r6, r6, 0x1

	.loc_0x68:
	  addi      r12, r12, 0x1
	  b         .loc_0xD0

	.loc_0x70:
	  lbz       r3, 0x0(r12)
	  lbz       r0, 0x1(r12)
	  addi      r12, r12, 0x2
	  srawi.    r7, r3, 0x4
	  rlwimi    r0,r3,8,20,23
	  sub       r9, r4, r0
	  bne-      .loc_0x9C
	  lbz       r3, 0x0(r12)
	  addi      r12, r12, 0x1
	  addi      r3, r3, 0x12
	  b         .loc_0xA0

	.loc_0x9C:
	  addi      r3, r7, 0x2

	.loc_0xA0:
	  cmplwi    r6, 0
	  bne-      .loc_0xC0
	  lbz       r0, -0x1(r9)
	  subic.    r5, r5, 0x1
	  stb       r0, 0x0(r4)
	  addi      r4, r4, 0x1
	  bne-      .loc_0xC4
	  blr

	.loc_0xC0:
	  subi      r6, r6, 0x1

	.loc_0xC4:
	  subic.    r3, r3, 0x1
	  addi      r9, r9, 0x1
	  bne+      .loc_0xA0

	.loc_0xD0:
	  cmplw     r4, r8
	  rlwinm    r11,r11,1,0,30
	  subi      r10, r10, 0x1
	  bne+      .loc_0x28
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001CEF0
 * Size:	000050
 */
JKRDecomp::CompressionMode JKRDecomp::checkCompressed(u8* p1)
{
	if (p1[0] == 'Y' && p1[1] == 'a' && p1[3] == '0') {
		if (p1[2] == 'y') {
			return YAY0;
		}
		if (p1[2] == 'z') {
			return YAZ0;
		}
	}
	return NOT_COMPRESSED;
}

/*
 * --INFO--
 * Address:	8001CF40
 * Size:	000050
 */
JKRDecompCommand::JKRDecompCommand()
{
	OSInitMessageQueue(&_28, m_messageBuffer, 1);
	m_callback = nullptr;
	_1C        = nullptr;
	_18        = nullptr;
	_20        = 0;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x28
	addi     r4, r31, 0x48
	bl       OSInitMessageQueue
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x14(r31)
	stw      r0, 0x1c(r31)
	stw      r31, 0x18(r31)
	stw      r0, 0x20(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001CF90
 * Size:	00003C
 */
JKRDecompCommand::~JKRDecompCommand()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8001CFB4
	extsh.   r0, r4
	ble      lbl_8001CFB4
	bl       __dl__FPv

lbl_8001CFB4:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
