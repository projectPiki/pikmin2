#include "types.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DVtxColorCalc.h"
#include "JSystem/J3D/J3DAnmVtxColor.h"

/*
 * --INFO--
 * Address:	80088658
 * Size:	000088
 */
void J3DSkinDeform::deform(J3DModel* model)
{
	if (IS_FLAG(model->_08.typeView, 4)) {
		SET_FLAG(_14.typeView, 2);
	} else {
		RESET_FLAG(_14.typeView, 2);
	}

	if (IS_FLAG(model->_08.typeView, 8)) {
		SET_FLAG(_14.typeView, 1);
	} else {
		RESET_FLAG(_14.typeView, 1);
	}
	deform(&model->m_vertexBuffer, model->m_mtxBuffer);
}

/*
 * --INFO--
 * Address:	800886E0
 * Size:	000030
 */
void J3DVtxColorCalc::calc(J3DModel* model) { calc(&model->m_vertexBuffer); }

/*
 * --INFO--
 * Address:	80088710
 * Size:	0000F4
 */
void J3DVtxColorCalc::calc(J3DVertexBuffer* buffer)
{
	if (_04 & 1 && m_AnmVtxColor) {
		void* prev     = buffer->_14[0];
		buffer->_14[0] = buffer->_14[1];
		buffer->_14[1] = prev;
		u16 cnt        = m_AnmVtxColor->_0C;
		u32* var2      = (u32*)buffer->_14[0];

		for (u16 i = 0; i < (u32)cnt; i++) {
			u32 color;
			m_AnmVtxColor->getColor(0, i, reinterpret_cast<GXColor*>(&color));
			J3DAnmVtxColorIndexData* idxData = &m_AnmVtxColor->_10[i];
			int var3                         = 0;
			for (u32 j = 0; j < idxData->_00; j++) {
				var2[reinterpret_cast<u16*>(idxData->_04)[var3]] = color; // _04 may be u16*
				var3 += 1;
			}
		}
		DCStoreRange(var2, buffer->_00->_08 * 4);
		buffer->_34 = var2;
	}
}
