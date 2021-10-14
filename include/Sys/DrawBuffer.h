#ifndef _SYS_DRAWBUFFER_H
#define _SYS_DRAWBUFFER_H

namespace Sys {
struct Triangle;

struct DrawBuffer {
	struct CreateArg {
	};

	DrawBuffer();
	~DrawBuffer();

	void draw();
	void create(Sys::DrawBuffer::CreateArg&);
	void frameInit();
};
} // namespace Sys

#endif