#include "types.h"
#include "mapCode.h"
#include "Sys/TriangleTable.h"

/**
 * Returns 'attribute' component of code.
 *
 * @note Address: 0x8041C434
 * @note Size: 0xC
 */
int MapCode::Code::getAttribute() { return mContents & ATTR_MASK; }

/**
 * Returns 'Slip Code' component of code.
 *
 * @note Address: 0x8041C440
 * @note Size: 0xC
 */
int MapCode::Code::getSlipCode() { return mContents >> 4 & SLIPCODE_MASK; }

/**
 * Returns 'is bald' component of code.
 *
 * @note Address: 0x8041C44C
 * @note Size: 0xC
 */
bool MapCode::Code::isBald() { return mContents >> 6 & 1; }

/* --INLINE--
 * Writes contents of code to stream.
 *
 * @note Address: N/A
 * @note Size: 0x2C
 */
inline void MapCode::Code::write(Stream& output) { output.writeByte((u8)getContents()); }

/* --INLINE--
 * Reads contents of stream into code.
 *
 * @note Address: N/A
 * @note Size: 0x34
 */
inline void MapCode::Code::read(Stream& input) { mContents = input.readByte(); }

/**
 * Sets code given 'attribute', 'slip code' and 'is bald' components.
 *
 * @note Address: 0x8041C458
 * @note Size: 0x24
 */
void MapCode::Code::setCode(int attribute, int slipCode, bool isBald)
{
	bool baldCode = (isBald > 0);
	baldCode &= SLIPCODE_MASK;
	int temp  = (attribute & ATTR_MASK) | (slipCode << 4);
	mContents = temp | (baldCode << 6);
}

/**
 * MapCode Mgr constructor.
 *
 * @note Address: 0x8041C47C
 * @note Size: 0x7C
 */
MapCode::Mgr::Mgr() { }

/* --UNUSED--
 * Writes contents of code array to stream.
 * NB: required to generate weak functions in the correct place.
 *
 * @note Address: 0x8041C47C
 * @note Size: 0x7C
 */
void MapCode::Mgr::write(Stream& stream) { mCodeArray.write(stream); }

/**
 * Reads contents of stream into code array.
 *
 * @note Address: 0x8041C760
 * @note Size: 0x2C
 */
void MapCode::Mgr::read(Stream& stream) { mCodeArray.read(stream); }

/**
 * Adds codes from code array into code slot of TriangleTable triangles.
 *
 * @note Address: 0x8041C87C
 * @note Size: 0x44
 */
void MapCode::Mgr::attachCodes(Sys::TriangleTable* table)
{
	for (int i = 0; i < mCodeArray.mLimit; i++) {
		Code obj                 = mCodeArray.mObjects[i];
		table->mObjects[i].mCode = obj;
	}
}

/**
 * Writes contents of input code object to stream.
 *
 * @note Address: 0x8041C8C0
 * @note Size: 0x2C
 */
void MapCode::Mgr::CodeArray::writeObject(Stream& output, MapCode::Code& object) { object.write(output); }

/**
 * Reads contents of stream into input code object.
 *
 * @note Address: 0x8041C8EC
 * @note Size: 0x34
 */
void MapCode::Mgr::CodeArray::readObject(Stream& input, MapCode::Code& object) { object.read(input); }

/* --UNUSED--
 * Fake function required to generate weak functions in correct order.
 * (Likely due to inlined/unused functions that have not been re-created)
 *
 * @note Address: 0x--------
 * @note Size: 0x
 */
void fakeFunction(ArrayContainer<MapCode::Code>* container, MapCode::Code* code)
{
	container->get(nullptr);
	container->setArray(0, 0);
	container->addOne(*code);
}
