#include "types.h"
#include "Dolphin/ansi_files.h"

/*
 * --INFO--
 * Address:	800C6610
 * Size:	000138
 */
int fflush(FILE* stream)
{
	int pos;

	if (stream == nullptr) {
		return __flush_all();
	}

	if (stream->m_state.error != 0 || stream->m_mode.file_kind == __closed_file) {
		return -1;
	}

	if (stream->m_mode.io_mode == 1) {
		return 0;
	}

	if (stream->m_state.io_state >= 3) {
		stream->m_state.io_state = 2;
	}

	if (stream->m_state.io_state == 2) {
		stream->m_bufferLength = 0;
	}

	if (stream->m_state.io_state != 1) {
		stream->m_state.io_state = 0;
		return 0;
	}

	if (stream->m_mode.file_kind != __disk_file) {
		pos = 0;
	} else {
		pos = ftell(stream);
	}

	if (__flush_buffer(stream, 0) != 0) {
		stream->m_state.error  = 1;
		stream->m_bufferLength = 0;
		return -1;
	}

	stream->m_state.io_state = 0;
	stream->m_position       = pos;
	stream->m_bufferLength   = 0;
	return 0;
}

/*
 * --INFO--
 * Address:	800C6748
 * Size:	0001BC
 */
// small issues near the end
int fclose(FILE* stream)
{
	int closeVal;
	s32 var_r29;
	s32 var_r30;
	s32 var_r3;
	u32 temp_r3;
	u8 temp_r3_2;
	u8 temp_r3_3;

	if (stream == nullptr) {
		return -1;
	}

	if (stream->m_mode.file_kind == __closed_file) {
		return 0;
	}

	if (stream == nullptr) {
		var_r29 = __flush_all();
	} else if ((stream->m_state.error != 0) || (stream->m_mode.file_kind == __closed_file)) {
		var_r29 = -1;
	} else if (stream->m_mode.io_mode == 1) {
		var_r29 = 0;
	} else {
		if (stream->m_state.io_state >= 3U) {
			stream->m_state.io_state = 2;
		}
		if (stream->m_state.io_state == 2) {
			stream->m_bufferLength = 0;
		}

		if (stream->m_state.io_state != 1) {
			var_r29                  = 0;
			stream->m_state.io_state = 0;
		} else {
			if (stream->m_mode.file_kind != __disk_file) {
				var_r30 = 0;
			} else {
				var_r30 = ftell(stream);
			}
			if (__flush_buffer(stream, 0) != 0) {
				stream->m_state.error  = 1;
				var_r29                = -1;
				stream->m_bufferLength = 0;
			} else {
				var_r29                  = 0;
				stream->m_state.io_state = 0;
				stream->m_position       = var_r30;
				stream->m_bufferLength   = 0;
			}
		}
	}

	closeVal                 = stream->closeFunc(stream->m_handle);
	stream->m_mode.file_kind = __closed_file;
	stream->m_handle         = 0;

	if (stream->m_state.free_buffer & 1) {
		free(stream->m_buffer);
	}

	return ((var_r29 != 0) || (closeVal != 0)) != 0;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr.       r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  bne-      .loc_0x28
	  li        r3, -0x1
	  b         .loc_0x1A0

	.loc_0x28:
	  lhz       r0, 0x4(r31)
	  rlwinm.   r3,r0,26,29,31
	  bne-      .loc_0x3C
	  li        r3, 0
	  b         .loc_0x1A0

	.loc_0x3C:
	  cmplwi    r31, 0
	  bne-      .loc_0x50
	  bl        -0x3D88
	  mr        r29, r3
	  b         .loc_0x140

	.loc_0x50:
	  lbz       r0, 0xA(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  cmplwi    r3, 0
	  bne-      .loc_0x6C

	.loc_0x64:
	  li        r29, -0x1
	  b         .loc_0x140

	.loc_0x6C:
	  lbz       r0, 0x4(r31)
	  rlwinm    r0,r0,29,29,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x84
	  li        r29, 0
	  b         .loc_0x140

	.loc_0x84:
	  lbz       r3, 0x8(r31)
	  rlwinm    r0,r3,27,29,31
	  cmplwi    r0, 0x3
	  blt-      .loc_0xA0
	  li        r0, 0x2
	  rlwimi    r3,r0,5,24,26
	  stb       r3, 0x8(r31)

	.loc_0xA0:
	  lbz       r0, 0x8(r31)
	  rlwinm    r0,r0,27,29,31
	  cmplwi    r0, 0x2
	  bne-      .loc_0xB8
	  li        r0, 0
	  stw       r0, 0x28(r31)

	.loc_0xB8:
	  lbz       r3, 0x8(r31)
	  rlwinm    r0,r3,27,29,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0xD8
	  li        r29, 0
	  rlwimi    r3,r29,5,24,26
	  stb       r3, 0x8(r31)
	  b         .loc_0x140

	.loc_0xD8:
	  lhz       r0, 0x4(r31)
	  rlwinm    r0,r0,26,29,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0xF0
	  li        r30, 0
	  b         .loc_0xFC

	.loc_0xF0:
	  mr        r3, r31
	  bl        0x3A4
	  mr        r30, r3

	.loc_0xFC:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x6EC
	  cmpwi     r3, 0
	  beq-      .loc_0x128
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0xA(r31)
	  li        r29, -0x1
	  stw       r0, 0x28(r31)
	  b         .loc_0x140

	.loc_0x128:
	  li        r29, 0
	  lbz       r0, 0x8(r31)
	  rlwimi    r0,r29,5,24,26
	  stb       r0, 0x8(r31)
	  stw       r30, 0x18(r31)
	  stw       r29, 0x28(r31)

	.loc_0x140:
	  lwz       r12, 0x44(r31)
	  lwz       r3, 0x0(r31)
	  mtctr     r12
	  bctrl
	  lhz       r0, 0x4(r31)
	  li        r4, 0
	  rlwimi    r0,r4,6,23,25
	  mr        r30, r3
	  sth       r0, 0x4(r31)
	  stw       r4, 0x0(r31)
	  lbz       r0, 0x8(r31)
	  rlwinm.   r0,r0,28,31,31
	  beq-      .loc_0x17C
	  lwz       r3, 0x1C(r31)
	  bl        -0x4370

	.loc_0x17C:
	  cmpwi     r29, 0
	  li        r3, 0
	  bne-      .loc_0x190
	  cmpwi     r30, 0
	  beq-      .loc_0x194

	.loc_0x190:
	  li        r3, 0x1

	.loc_0x194:
	  neg       r0, r3
	  or        r0, r0, r3
	  srawi     r3, r0, 0x1F

	.loc_0x1A0:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
