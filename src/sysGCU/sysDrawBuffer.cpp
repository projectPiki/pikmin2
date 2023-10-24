#include "JSystem/J3D/J3DDrawBuffer.h"
#include "JSystem/J3D/J3DSys.h"
#include "P2Macros.h"
#include "Sys/DrawBuffers.h"

namespace Sys {

/*
 * --INFO--
 * Address:	80455700
 * Size:	00005C
 */
DrawBuffer::DrawBuffer()
{
	mFlags.clear();
	mBuffer = nullptr;
	mIndex  = -1;
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
void DrawBuffer::create(CreateArg& arg)
{
	u32 bufferSize = arg.mSize;
	setFlag(arg.mFlags.typeView);
	mName = arg.mName;
	P2ASSERTLINE(42, mBuffer == nullptr);
	mBuffer            = new J3DDrawBuffer(bufferSize);
	mBuffer->mSortType = arg.mSortType;
	mBuffer->mDrawType = arg.mDrawType;
	mDrawType          = mBuffer->mDrawType;
	mSortType          = mBuffer->mSortType;
}

/*
 * draw__Q23Sys10DrawBufferFv
 * --INFO--
 * Address:	80455898
 * Size:	000088
 */
void DrawBuffer::draw()
{
	P2ASSERTLINE(57, mBuffer != nullptr);
	if (isFlag(DRAWBUFF_Unk1)) {
		j3dSys.mDrawMode = J3DSys::SYSDRAW_Unk4;
	} else {
		j3dSys.mDrawMode = J3DSys::SYSDRAW_Unk3;
	}

	mBuffer->draw();
}

/*
 * --INFO--
 * Address:	80455920
 * Size:	000058
 */
void DrawBuffer::frameInit()
{
	P2ASSERTLINE(69, mBuffer != nullptr);
	mBuffer->frameInit();
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
		get(i)->mIndex = i;
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
