#include "JSystem/J3D/J3DDrawBuffer.h"
#include "JSystem/J3D/J3DSys.h"
#include "P2Macros.h"
#include "Sys/DrawBuffers.h"

namespace Sys {

/**
 * @note Address: 0x80455700
 * @note Size: 0x5C
 */
DrawBuffer::DrawBuffer()
{
	mFlags.clear();
	mBuffer = nullptr;
	mIndex  = -1;
}

/**
 * __dt__Q23Sys10DrawBufferFv
 * @note Address: 0x8045575C
 * @note Size: 0x60
 */
DrawBuffer::~DrawBuffer() { }

/**
 * @note Address: 0x804557BC
 * @note Size: 0xDC
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

/**
 * draw__Q23Sys10DrawBufferFv
 * @note Address: 0x80455898
 * @note Size: 0x88
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

/**
 * @note Address: 0x80455920
 * @note Size: 0x58
 */
void DrawBuffer::frameInit()
{
	P2ASSERTLINE(69, mBuffer != nullptr);
	mBuffer->frameInit();
}

/**
 * @note Address: 0x80455978
 * @note Size: 0x54
 */
DrawBuffers::DrawBuffers()
{
	mBuffers = nullptr;
	mCount   = 0;
	setName("DrawBuffer");
}

/**
 * __dt__Q23Sys11DrawBuffersFv
 * @note Address: 0x804559CC
 * @note Size: 0x60
 */
DrawBuffers::~DrawBuffers() { }

/**
 * @note Address: 0x80455A2C
 * @note Size: 0x98
 */
void DrawBuffers::allocate(int count)
{
	mBuffers = new DrawBuffer[count];
	mCount   = count;
	for (int i = 0; i < mCount; i++) {
		get(i)->mIndex = i;
	}
}

/**
 * @note Address: 0x80455AC4
 * @note Size: 0x8C
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

/**
 * @note Address: 0x80455B50
 * @note Size: 0xE0
 */
void DrawBuffers::frameInitAll()
{
	for (int i = 0; i < mCount; i++) {
		get(i)->frameInit();
	}
}
} // namespace Sys
