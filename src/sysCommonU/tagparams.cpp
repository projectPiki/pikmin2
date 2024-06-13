#include "Vector3.h"
#include "types.h"

#include "TagParm.h"
#include "string.h"

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void TagParm::read(Stream& input) { doRead(input); }

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void TagParm::write(Stream& output) { doWrite(output); }

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void TagParm::dump() { doDump(); }

/**
 * @note Address: 0x8041BD38
 * @note Size: 0x34
 */
template <>
void PrimTagParm<int>::doRead(Stream& stream)
{
	mData = stream.readInt();
}

/**
 * @note Address: 0x8041BD6C
 * @note Size: 0x2C
 */
template <>
void PrimTagParm<int>::doWrite(Stream& stream)
{
	stream.writeInt(mData);
}

/**
 * @note Address: 0x8041BD98
 * @note Size: 0x4
 */
template <>
void PrimTagParm<int>::doDump()
{
}

/**
 * @note Address: 0x8041BD9C
 * @note Size: 0x34
 */
template <>
void PrimTagParm<u16>::doRead(Stream& stream)
{
	mData = stream.readShort();
}

/**
 * @note Address: 0x8041BDD0
 * @note Size: 0x2C
 */
template <>
void PrimTagParm<u16>::doWrite(Stream& stream)
{
	stream.writeShort(mData);
}

/**
 * @note Address: 0x8041BDFC
 * @note Size: 0x4
 */
template <>
void PrimTagParm<u16>::doDump()
{
}

/**
 * @note Address: 0x8041BE00
 * @note Size: 0x78
 */
template <>
void PrimTagParm<u64>::doRead(Stream& stream)
{
	char* str = stream.readString(nullptr, 0);
	for (int i = 0; i < 8; i++) {
		((char*)&mData)[i] = str[i];
	}
}

/**
 * @note Address: 0x8041BE78
 * @note Size: 0x6C
 */
template <>
void PrimTagParm<u64>::doWrite(Stream& stream)
{
	char data[8];
	for (int i = 0; i < 8; i++) {
		data[i] = ((char*)&mData)[i];
	}
	stream.writeString(data);
}

/**
 * @note Address: 0x8041BEE4
 * @note Size: 0x4
 */
template <>
void PrimTagParm<u64>::doDump()
{
}

/**
 * @note Address: 0x8041BEE8
 * @note Size: 0x34
 */
template <>
void PrimTagParm<f32>::doRead(Stream& stream)
{
	mData = stream.readFloat();
}

/**
 * @note Address: 0x8041BF1C
 * @note Size: 0x28
 */
template <>
void PrimTagParm<f32>::doWrite(Stream& stream)
{
	stream.writeFloat(mData);
}

/**
 * @note Address: 0x8041BF44
 * @note Size: 0x4
 */
template <>
void PrimTagParm<f32>::doDump()
{
}

/**
 * @note Address: 0x8041BF48
 * @note Size: 0x24
 */
template <>
void PrimTagParm<Vector3f>::doRead(Stream& stream)
{
	mData.read(stream);
}

/**
 * @note Address: 0x8041BF6C
 * @note Size: 0x24
 */
template <>
void PrimTagParm<Vector3f>::doWrite(Stream& stream)
{
	mData.write(stream);
}

/**
 * @note Address: 0x8041BF90
 * @note Size: 0x4
 */
template <>
void PrimTagParm<Vector3f>::doDump()
{
}

/**
 * @note Address: 0x8041BF94
 * @note Size: 0x44
 */
StringTagParm::StringTagParm(TagParameters* params, char* name)
    : TagParm(params, name)
{
	mData = nullptr;
}

/**
 * @note Address: 0x8041BFD8
 * @note Size: 0x4
 */
void StringTagParm::flushValue() { }

/**
 * @note Address: 0x8041BFDC
 * @note Size: 0x3C
 */
void StringTagParm::doRead(Stream& stream) { mData = stream.readString(nullptr, 0); }

/**
 * @note Address: 0x8041C018
 * @note Size: 0x2C
 */
void StringTagParm::doWrite(Stream& stream) { stream.writeString(mData); }

/**
 * @note Address: 0x8041C044
 * @note Size: 0x4
 */
void StringTagParm::doDump() { }

/**
 * @note Address: 0x8041C048
 * @note Size: 0x54
 */
TagParameters::TagParameters(char* name)
{
	mHead = nullptr;
	mName = name;
}

/**
 * @matchedSize
 * @note Address: N/A
 * @note Size: 0x48
 */
// bool TagParameters::isEndToken(char* token) {

// }

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void TagParameters::add(TagParm*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8041C09C
 * @note Size: 0x38
 */
TagParm::TagParm(TagParameters* container, char* name)
{
	mName = name;
	mNext = nullptr;
	if (container->mHead) {
		mNext            = container->mHead;
		container->mHead = this;
		return;
	}

	container->mHead = this;
}

/**
 * TODO: This probably uses isEndToken, but IDK how.
 * @note Address: 0x8041C0D4
 * @note Size: 0xD4
 */
void TagParameters::read(Stream& stream)
{
	while (true) {
		char* str  = stream.readString(nullptr, 0);
		int strLen = strlen("end");
		bool isEnd = IS_SAME_STRING_N("end", str, strLen);

		if (isEnd) {
			break;
		}

		for (TagParm* node = mHead; node; node = node->mNext) {
			strLen          = strlen(str);
			int nodeNameLen = strlen(node->mName);
			if (strLen != nodeNameLen) {
				continue;
			}

			strLen = strlen(str);
			if (IS_SAME_STRING_N(node->mName, str, strLen)) {
				node->doRead(stream);
			}
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
void TagParameters::write(Stream&)
{
	// Unused/inlined
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void TagParameters::dump()
{
	// Unused/inlined
}
