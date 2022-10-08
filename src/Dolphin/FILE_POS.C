#include "types.h"
#include "Dolphin/critical_regions.h"
#include "Dolphin/FILE_POS.h"
#include "errno.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void rewind(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void fsetpos(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C6904
 * Size:	00006C
 */
int fseek(FILE* stream, u32 offset, int whence)
{
	int code;
	__begin_critical_region(2);
	code = _fseek(stream, offset, whence); // 0 if successful, -1 if error
	__end_critical_region(2);
	return code;
}

/*
 * --INFO--
 * Address:	800C6970
 * Size:	000270
 */
int _fseek(FILE* stream, u32 offset, int whence)
{
	int bufferCode;
	int pos;
	int adjust;
	u32 state;
	int buffLen;

	u8* ptr;

	if (stream->m_mode.file_kind != 1 || stream->m_state.error != 0) {
		errno = 0x28;
		return -1;
	}

	if (stream->m_state.io_state == 1) {
		if (__flush_buffer(stream, nullptr) != 0) {
			stream->m_state.error  = 1;
			stream->m_bufferLength = 0;
			errno                  = 0x28;
			return -1;
		}
	}

	if (whence == SEEK_CUR) {
		whence = SEEK_SET;
		adjust = 0;
		if ((stream->m_mode.file_kind != 1 && stream->m_mode.file_kind != 2) || stream->m_state.error != 0) {
			errno = 0x28;
			pos   = -1;
		} else {
			state = stream->m_state.io_state;
			if (state == 0) {
				pos = stream->m_position;
			} else {
				pos     = stream->m_bufferPosition;
				ptr     = stream->m_buffer;
				buffLen = (stream->m_bufferPtr - ptr);
				pos += buffLen;
				if ((state >= 3)) {
					adjust = (state - 2);
					pos -= adjust;
				}

				if (stream->m_mode.binary_io == 0) {
					for (int i = (buffLen - adjust); i != 0; i--) {
						u8 c = *ptr;
						ptr++;
						if (c == 10) {
							pos++;
						}
					}
				}
			}
		}
		offset += pos;
	}

	if ((whence != SEEK_END) && (stream->m_mode.io_mode != 3) && (stream->m_state.io_state == 2 || stream->m_state.io_state == 3)) {
		if ((offset >= stream->m_position) || !(offset >= stream->m_bufferPosition)) {
			stream->m_state.io_state = 0;
		} else {
			stream->m_bufferPtr      = stream->m_buffer + (offset - stream->m_bufferPosition);
			stream->m_bufferLength   = stream->m_position - offset;
			stream->m_state.io_state = 2;
		}
	} else {
		stream->m_state.io_state = 0;
	}

	if (stream->m_state.io_state == 0) {
		if (stream->positionFunc != nullptr && (int)stream->positionFunc(stream->m_handle, &offset, whence, stream->_48)) {
			stream->m_state.error  = 1;
			stream->m_bufferLength = 0;
			errno                  = 0x28;
			return -1;
		} else {
			stream->m_state.eof    = 0;
			stream->m_position     = offset;
			stream->m_bufferLength = 0;
		}
	}

	return 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F8
 */
void fgetpos(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C6BE0
 * Size:	0000E4
 */
// regswaps still: https://decomp.me/scratch/6R72q
int ftell(FILE* stream)
{
	int retval;
	int adjust;
	u32 state;
	int buffLen;
	u8* ptr;

	__begin_critical_region(2);
	adjust = 0;
	if ((stream->m_mode.file_kind != 1 && stream->m_mode.file_kind != 2) || stream->m_state.error != 0) {
		errno  = 0x28;
		retval = -1;
	} else {
		state = stream->m_state.io_state;
		if (state == 0) {
			retval = stream->m_position;
		} else {
			ptr     = stream->m_buffer;
			buffLen = (stream->m_bufferPtr - ptr);
			retval  = stream->m_bufferPosition + buffLen;
			if ((state >= 3)) {
				adjust = (state - 2);
				retval -= adjust;
			}

			if (stream->m_mode.binary_io == 0) {
				int i;
				for (i = (buffLen - adjust); i != 0; i--) {
					u8 c = *ptr;
					ptr++;
					if (c == 10) {
						retval++;
					}
				}
			}
		}
	}
	__end_critical_region(2);
	return retval;
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x2
	  bl        -0x9A0
	  lhz       r0, 0x4(r30)
	  li        r4, 0
	  rlwinm    r0,r0,26,29,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0x3C
	  cmplwi    r0, 0x2
	  bne-      .loc_0x48

	.loc_0x3C:
	  lbz       r0, 0xA(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x58

	.loc_0x48:
	  li        r0, 0x28
	  li        r31, -0x1
	  stw       r0, -0x7340(r13)
	  b         .loc_0xC0

	.loc_0x58:
	  lbz       r0, 0x8(r30)
	  rlwinm.   r5,r0,27,29,31
	  bne-      .loc_0x6C
	  lwz       r31, 0x18(r30)
	  b         .loc_0xC0

	.loc_0x6C:
	  lwz       r7, 0x1C(r30)
	  cmplwi    r5, 0x3
	  lwz       r0, 0x24(r30)
	  lwz       r3, 0x34(r30)
	  sub       r6, r0, r7
	  add       r31, r3, r6
	  blt-      .loc_0x90
	  subi      r4, r5, 0x2
	  sub       r31, r31, r4

	.loc_0x90:
	  lbz       r0, 0x5(r30)
	  rlwinm.   r0,r0,29,31,31
	  bne-      .loc_0xC0
	  sub.      r0, r6, r4
	  mtctr     r0
	  beq-      .loc_0xC0

	.loc_0xA8:
	  lbz       r0, 0x0(r7)
	  addi      r7, r7, 0x1
	  cmplwi    r0, 0xA
	  bne-      .loc_0xBC
	  addi      r31, r31, 0x1

	.loc_0xBC:
	  bdnz+     .loc_0xA8

	.loc_0xC0:
	  li        r3, 0x2
	  bl        -0xA4C
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void _ftell(void)
{
	// UNUSED FUNCTION
}
