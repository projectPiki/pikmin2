#include "JSystem/J3D/J3DDrawBuffer.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/JUT/JUTException.h"
#include "Sys/DrawBuffers.h"
#include "types.h"

namespace Sys {

/*
 * --INFO--
 * Address:	80455700
 * Size:	00005C
 */
DrawBuffer::DrawBuffer()
{
	_18.clear();
	_1C = nullptr;
	_20 = -1;
}

/*
 * __dt__Q23Sys10DrawBufferFv
 * --INFO--
 * Address:	8045575C
 * Size:	000060
 */
DrawBuffer::~DrawBuffer() { }

/*
 * --INFO--
 * Address:	804557BC
 * Size:	0000DC
 */
void DrawBuffer::create(Sys::DrawBuffer::CreateArg& arg)
{
	u32 bufferSize = arg._00;
	_18.typeView |= arg._04;
	mName = arg.mName;
	P2ASSERTLINE(42, _1C == nullptr);
	_1C      = new J3DDrawBuffer(bufferSize);
	_1C->_0C = arg._0C;
	_1C->_08 = arg._10;
	_28      = _1C->_08;
	_24      = _1C->_0C;
}

/*
 * draw__Q23Sys10DrawBufferFv
 * --INFO--
 * Address:	80455898
 * Size:	000088
 */
void DrawBuffer::draw()
{
	P2ASSERTLINE(57, _1C != nullptr);
	if ((_18.typeView & 1) != 0) {
		j3dSys._50 = 4;
	} else {
		j3dSys._50 = 3;
	}

	_1C->draw();
}

/*
 * --INFO--
 * Address:	80455920
 * Size:	000058
 */
void DrawBuffer::frameInit()
{
	P2ASSERTLINE(69, _1C != nullptr);
	_1C->frameInit();
}

/*
 * --INFO--
 * Address:	80455978
 * Size:	000054
 */
DrawBuffers::DrawBuffers()
{
	mBuffers = nullptr;
	mCount   = 0;
	setName("DrawBuffer");
}

/*
 * __dt__Q23Sys11DrawBuffersFv
 * --INFO--
 * Address:	804559CC
 * Size:	000060
 */
DrawBuffers::~DrawBuffers() { }

/*
 * --INFO--
 * Address:	80455A2C
 * Size:	000098
 */
void DrawBuffers::allocate(int count)
{
	mBuffers = new DrawBuffer[count];
	mCount   = count;
	for (int i = 0; i < mCount; i++) {
		get(i)->_20 = i;
	}
}

/*
 * --INFO--
 * Address:	80455AC4
 * Size:	00008C
 */
DrawBuffer* DrawBuffers::get(int index)
{
	bool check = false;
	if (mBuffers != nullptr && 0 <= index && index < mCount) {
		check = true;
	}
	P2ASSERTLINE(148, check);
	return &mBuffers[index];
}

/*
 * --INFO--
 * Address:	80455B50
 * Size:	0000E0
 */
void DrawBuffers::frameInitAll()
{
	for (int i = 0; i < mCount; i++) {
		get(i)->frameInit();
	}
}
} // namespace Sys
