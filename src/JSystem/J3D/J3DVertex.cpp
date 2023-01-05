#include "Dolphin/os.h"
#include "Dolphin/stl.h"
#include "JSystem/J3D/J3DDrawMtxData.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DVertexBuffer.h"
#include "JSystem/J3D/J3DVertexData.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	8005EB80
 * Size:	000068
 */
J3DVertexData::J3DVertexData()
// : _00(0)
// , _04(0)
// , _08(0)
// , _0C(0)
// , _10(0)
// , _14(nullptr)
// , _18(nullptr)
// , _1C(nullptr)
// , _20(nullptr)
// , _24(nullptr)
// , _28(nullptr)
// , _2C(static_cast<(int*)[8]>(nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr))
// , _4C(0)
// , _50(4)
// , _54(0)
// , _58(4)
{
	_00 = 0;
	_04 = 0;
	_08 = 0;
	_0C = 0;
	_10 = 0;
	_14 = nullptr;
	_18 = nullptr;
	_1C = nullptr;
	_20 = nullptr;
	_24 = nullptr;
	_28 = nullptr;
	for (int i = 0; i < 8; i++) {
		_2C[i] = nullptr;
	}
	_4C = 0;
	_50 = 4;
	_54 = 0;
	_58 = 4;
}

/*
 * --INFO--
 * Address:	8005EBE8
 * Size:	000060
 */
void J3DVertexBuffer::setVertexData(J3DVertexData* data)
{
	_00    = data;
	_04    = data->_18;
	_0C    = data->_1C;
	_14[0] = data->_24;
	_08    = 0;
	_10    = 0;
	_14[1] = nullptr;
	_1C    = data->_18;
	_24    = data->_1C;
	_20    = 0;
	_28    = 0;
	_2C    = _04;
	_30    = _0C;
	_34    = _14[0];
}

/*
 * --INFO--
 * Address:	8005EC48
 * Size:	000058
 */
void J3DVertexBuffer::init()
{
	_00    = nullptr;
	_08    = 0;
	_04    = nullptr;
	_10    = 0;
	_0C    = nullptr;
	_14[1] = nullptr;
	_14[0] = nullptr;
	_20    = 0;
	_1C    = nullptr;
	_28    = 0;
	_24    = nullptr;
	_2C    = nullptr;
	_30    = nullptr;
	_34    = nullptr;
	_2C    = _04;
	_30    = _0C;
	_34    = _14[0];
}

/*
 * --INFO--
 * Address:	8005ECA0
 * Size:	00003C
 */
J3DVertexBuffer::~J3DVertexBuffer() { }

/*
 * --INFO--
 * Address:	8005ECDC
 * Size:	000024
 */
void J3DVertexBuffer::setArray() const
{
	j3dSys._10C = (u32)_2C;
	j3dSys._110 = (u32)_30;
	j3dSys._114 = (u32)_34;
}

/*
 * --INFO--
 * Address:	8005ED00
 * Size:	000128
 */
void J3DVertexBuffer::copyVtxColorArray(J3DDeformAttachFlag flag)
{
	if (_14[0] == 0 || _14[1] == nullptr) {
		if (flag & DeformAttach_1) {
			for (int i = 0; i < 2; i++) {
				if (i == 0 || _14[i] == nullptr) {
					_14[i] = new (0x20) void*[_00->_08];
					memcpy(_14[i], _00->_24, _00->_08 << 2);
					DCStoreRange(_14[i], _00->_08 << 2);
				}
			}
		} else {
			_14[0] = _00->_24;
			if (_14[1] == nullptr) {
				_14[1] = new (0x20) void*[_00->_08];
			}
			memcpy(_14[1], _00->_24, _00->_08 << 2);
			DCStoreRange(_14[1], _00->_08 << 2);
		}
	}
}

/*
 * --INFO--
 * Address:	8005EE28
 * Size:	000014
 */
J3DDrawMtxData::J3DDrawMtxData()
    : m_count(0)
    , _04(nullptr)
    , _08(nullptr)
{
}

/*
 * --INFO--
 * Address:	8005EE3C
 * Size:	00003C
 */
J3DDrawMtxData::~J3DDrawMtxData() { }
