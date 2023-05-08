#include "types.h"
#include "mapCode.h"
#include "Sys/TriangleTable.h"

/*
 * Returns 'attribute' component of code.
 *
 * --INFO--
 * Address:	8041C434
 * Size:	00000C
 */
int MapCode::Code::getAttribute() { return mContents & ATTR_MASK; }

/*
 * Returns 'Slip Code' component of code.
 *
 * --INFO--
 * Address:	8041C440
 * Size:	00000C
 */
int MapCode::Code::getSlipCode() { return mContents >> 4 & SLIPCODE_MASK; }

/*
 * Returns 'is bald' component of code.
 *
 * --INFO--
 * Address:	8041C44C
 * Size:	00000C
 */
bool MapCode::Code::isBald() { return mContents >> 6 & 1; }

/* --INLINE--
 * Writes contents of code to stream.
 *
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
inline void MapCode::Code::write(Stream& output) { output.writeByte((u8)getContents()); }

/* --INLINE--
 * Reads contents of stream into code.
 *
 * --INFO--
 * Address:	........
 * Size:	000034
 */
inline void MapCode::Code::read(Stream& input) { mContents = input.readByte(); }

/*
 * Sets code given 'attribute', 'slip code' and 'is bald' components.
 *
 * --INFO--
 * Address:	8041C458
 * Size:	000024
 */
void MapCode::Code::setCode(int attribute, int slipCode, bool isBald)
{
	bool baldCode = (isBald > 0);
	baldCode &= SLIPCODE_MASK;
	int temp  = (attribute & ATTR_MASK) | (slipCode << 4);
	mContents = temp | (baldCode << 6);
}

/*
 * MapCode Mgr constructor.
 *
 * --INFO--
 * Address:	8041C47C
 * Size:	00007C
 */
MapCode::Mgr::Mgr() { }

/* --UNUSED--
 * Writes contents of code array to stream.
 * NB: required to generate weak functions in the correct place.
 *
 * --INFO--
 * Address:	8041C47C
 * Size:	00007C
 */
void MapCode::Mgr::write(Stream& stream) { mCodeArray.write(stream); }

/*
 * Reads contents of stream into code array.
 *
 * --INFO--
 * Address:	8041C760
 * Size:	00002C
 */
void MapCode::Mgr::read(Stream& stream) { mCodeArray.read(stream); }

/*
 * Adds codes from code array into code slot of TriangleTable triangles.
 *
 * --INFO--
 * Address:	8041C87C
 * Size:	000044
 */
void MapCode::Mgr::attachCodes(Sys::TriangleTable* table)
{
	for (int i = 0; i < mCodeArray.mLimit; i++) {
		Code obj                 = mCodeArray.mObjects[i];
		table->mObjects[i].mCode = obj;
	}
}

/*
 * Writes contents of input code object to stream.
 *
 * --INFO--
 * Address:	8041C8C0
 * Size:	00002C
 */
void MapCode::Mgr::CodeArray::writeObject(Stream& output, MapCode::Code& object) { object.write(output); }

/*
 * Reads contents of stream into input code object.
 *
 * --INFO--
 * Address:	8041C8EC
 * Size:	000034
 */
void MapCode::Mgr::CodeArray::readObject(Stream& input, MapCode::Code& object) { object.read(input); }

/* --UNUSED--
 * Fake function required to generate weak functions in correct order.
 * (Likely due to inlined/unused functions that have not been re-created)
 *
 * --INFO--
 * Address:	--------
 * Size:	000000
 */
void fakeFunction(ArrayContainer<MapCode::Code>* container, MapCode::Code* code)
{
	container->get(nullptr);
	container->setArray(0, 0);
	container->addOne(*code);
}
