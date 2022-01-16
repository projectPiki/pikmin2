#ifndef _SYS_DRAWBUFFERS_H
#define _SYS_DRAWBUFFERS_H

#include "CNode.h"
#include "JSystem/J3D/J3DDrawBuffer.h"
#include "Vector3.h"

namespace Sys {

/**
 * @size{0x2C}
 */
struct DrawBuffer : public CNode {
	struct CreateArg {
		u32 _00;            // _00
		u16 _04;            // _04
		const char* m_name; // _08
	};

	DrawBuffer();

	virtual ~DrawBuffer(); // _00

	void draw();
	void create(CreateArg&);
	void frameInit();

	u8 _18;             // _18
	u8 _19;             // _19
	J3DDrawBuffer* _1C; // _1C
	int _20;            // _20
	u32 _24;            // _24
	u32 _28;            // _28
};

/**
 * @size{0x20}
 */
struct DrawBuffers : public CNode {
	DrawBuffers();

	virtual ~DrawBuffers(); // _00

	void allocate(int);
	void frameInitAll();
	DrawBuffer* get(int);

	DrawBuffer* m_buffers; // _18
	int m_count;           // _1C
};
} // namespace Sys

#endif
