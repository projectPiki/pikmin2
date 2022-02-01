#ifndef _SYS_DRAWBUFFERS_H
#define _SYS_DRAWBUFFERS_H

#include "BitFlag.h"
#include "CNode.h"
#include "JSystem/J3D/J3DDrawBuffer.h"
#include "types.h"
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
		unknown _0C;        // _0C
		unknown _10;        // _10
	};

	DrawBuffer();

	virtual ~DrawBuffer(); // _00

	void draw();
	void create(CreateArg&);
	void frameInit();

	BitFlag<unsigned short> _18; // _18
	J3DDrawBuffer* _1C;          // _1C
	int _20;                     // _20
	u32 _24;                     // _24
	u32 _28;                     // _28
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
