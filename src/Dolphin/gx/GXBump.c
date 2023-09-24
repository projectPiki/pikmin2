#include "types.h"
#include "Dolphin/gx.h"

/*
 * --INFO--
 * Address:	800E7F40
 * Size:	00006C
 */
// modified from Open_RVL
void GXSetTevIndirect(GXTevStageID tevStage, GXIndTexStageID texStage, GXIndTexFormat texFmt, GXIndTexBiasSel biasSel, GXIndTexMtxID mtxId,
                      GXIndTexWrap wrapS, GXIndTexWrap wrapT, u8 addPrev, u8 utcLod, GXIndTexAlphaSel alphaSel)
{
	u32 field       = 0;
	const u32 stage = tevStage + 0x10;

	GX_BITFIELD_SET(field, 30, 2, texStage);
	GX_BITFIELD_SET(field, 28, 2, texFmt);
	GX_BITFIELD_SET(field, 25, 3, biasSel);
	GX_BITFIELD_SET(field, 23, 2, alphaSel);
	GX_BITFIELD_SET(field, 19, 4, mtxId);
	GX_BITFIELD_SET(field, 16, 3, wrapS);
	GX_BITFIELD_SET(field, 13, 3, wrapT);
	GX_BITFIELD_SET(field, 12, 1, utcLod);
	GX_BITFIELD_SET(field, 11, 1, addPrev);
	GX_BITFIELD_SET(field, 0, 8, stage);

	GXWGFifo.u8         = 0x61;
	GXWGFifo.s32        = field;
	__GXData->_000.s[1] = 0;
}

/*
 * --INFO--
 * Address:	800E7FAC
 * Size:	000178
 */
// modified from Open_RVL
void GXSetIndTexMtx(GXIndTexMtxID id, const Mtx23 mtx, s8 scale_exp)
{
	u32 val;
	u32 field;
	f32 mtx2[6];

	// scale_exp range is -17..46
	// we need it in range 0..63
	scale_exp += 17;

	switch (id) {
	case GX_ITM_0:
	case GX_ITM_1:
	case GX_ITM_2:
		val = id - 1;
		break;
	case GX_ITM_S0:
	case GX_ITM_S1:
	case GX_ITM_S2:
		val = id - 5;
		break;
	case GX_ITM_T0:
	case GX_ITM_T1:
	case GX_ITM_T2:
		val = id - 9;
		break;
	default:
		val = 0;
	}

	field = 0;
	GX_BITFIELD_SET(field, 21, 11, 1024.0f * mtx[0][0]);
	GX_BITFIELD_SET(field, 10, 11, 1024.0f * mtx[1][0]);
	GX_BITFIELD_SET(field, 8, 2, (scale_exp >> 0) & 3);
	GX_BITFIELD_SET(field, 0, 8, val * 3 + 6);
	GXWGFifo.s8  = 0x61;
	GXWGFifo.s32 = field;

	field = 0;
	GX_BITFIELD_SET(field, 21, 11, 1024.0f * mtx[0][1]);
	GX_BITFIELD_SET(field, 10, 11, 1024.0f * mtx[1][1]);
	GX_BITFIELD_SET(field, 8, 2, (scale_exp >> 2) & 3);
	GX_BITFIELD_SET(field, 0, 8, val * 3 + 7);
	GXWGFifo.u8  = 0x61;
	GXWGFifo.s32 = field;

	field = 0;
	GX_BITFIELD_SET(field, 21, 11, 1024.0f * mtx[0][2]);
	GX_BITFIELD_SET(field, 10, 11, 1024.0f * mtx[1][2]);
	GX_BITFIELD_SET(field, 8, 2, (scale_exp >> 4) & 3);
	GX_BITFIELD_SET(field, 0, 8, val * 3 + 8);
	GXWGFifo.u8  = 0x61;
	GXWGFifo.s32 = field;

	__GXData->_000.s[1] = 0;
}

/*
 * --INFO--
 * Address:	800E8124
 * Size:	000144
 */
// modified from Open_RVL
void GXSetIndTexCoordScale(GXIndTexStageID stage, GXIndTexScale scaleS, GXIndTexScale scaleT)
{
	GXData* data;
	switch (stage) {
	case GX_IND_TEX_STAGE_0:
		data = __GXData;
		GX_BITFIELD_SET(data->_128, 28, 4, scaleS);
		GX_BITFIELD_SET(data->_128, 24, 4, scaleT);
		GX_BITFIELD_SET(data->_128, 0, 8, 0x25);
		GXWGFifo.u8  = 0x61;
		GXWGFifo.s32 = data->_128;
		break;
	case GX_IND_TEX_STAGE_1:
		data = __GXData;
		GX_BITFIELD_SET(data->_128, 20, 4, scaleS);
		GX_BITFIELD_SET(data->_128, 16, 4, scaleT);
		GX_BITFIELD_SET(data->_128, 0, 8, 0x25);
		GXWGFifo.u8  = 0x61;
		GXWGFifo.s32 = data->_128;
		break;
	case GX_IND_TEX_STAGE_2:
		data = __GXData;
		GX_BITFIELD_SET(data->_12C, 28, 4, scaleS);
		GX_BITFIELD_SET(data->_12C, 24, 4, scaleT);
		GX_BITFIELD_SET(data->_12C, 0, 8, 0x26);
		GXWGFifo.u8  = 0x61;
		GXWGFifo.s32 = data->_12C;
		break;
	case GX_IND_TEX_STAGE_3:
		data = __GXData;
		GX_BITFIELD_SET(data->_12C, 20, 4, scaleS);
		GX_BITFIELD_SET(data->_12C, 16, 4, scaleT);
		GX_BITFIELD_SET(data->_12C, 0, 8, 0x26);
		GXWGFifo.u8  = 0x61;
		GXWGFifo.s32 = data->_12C;
		break;
	}

	__GXData->_000.s[1] = 0;
}

/*
 * --INFO--
 * Address:	800E8268
 * Size:	0000EC
 */
// modified from Open_RVL
void GXSetIndTexOrder(GXIndTexStageID stage, GXTexCoordID coord, GXTexMapID map)
{
	GXData* data;
	if (map == 0xFF) {
		map = GX_TEXMAP0;
	}

	if (coord == 0xFF) {
		coord = GX_TEXCOORD0;
	}

	switch (stage) {
	case GX_IND_TEX_STAGE_0:
		data = __GXData;
		GX_BITFIELD_SET(data->_120, 29, 3, map);
		GX_BITFIELD_SET(data->_120, 26, 3, coord);
		break;
	case GX_IND_TEX_STAGE_1:
		data = __GXData;
		GX_BITFIELD_SET(data->_120, 23, 3, map);
		GX_BITFIELD_SET(data->_120, 20, 3, coord);
		break;
	case GX_IND_TEX_STAGE_2:
		data = __GXData;
		GX_BITFIELD_SET(data->_120, 17, 3, map);
		GX_BITFIELD_SET(data->_120, 14, 3, coord);
		break;
	case GX_IND_TEX_STAGE_3:
		data = __GXData;
		GX_BITFIELD_SET(data->_120, 11, 3, map);
		GX_BITFIELD_SET(data->_120, 8, 3, coord);
		break;
	}

	GXWGFifo.u8  = 0x61;
	GXWGFifo.s32 = __GXData->_120;
	GXSetWasteFlags();
}

/*
 * --INFO--
 * Address:	800E8354
 * Size:	000024
 */
// modified from Open_RVL
void GXSetNumIndStages(u8 num)
{
	GXData* data = __GXData;
	GX_BITFIELD_SET(data->_204, 13, 3, num);
	data->_5AC |= 0x6;
}

/*
 * --INFO--
 * Address:	800E8378
 * Size:	000048
 */
// modified from Open_RVL
void GXSetTevDirect(GXTevStageID stage)
{
	GXSetTevIndirect(stage, GX_IND_TEX_STAGE_0, GX_ITF_8, GX_ITB_NONE, GX_ITM_OFF, GX_ITW_OFF, GX_ITW_OFF, FALSE, FALSE, GX_ITBA_OFF);
}

/*
 * --INFO--
 * Address:	800E83C0
 * Size:	000064
 */
void GXSetTevIndWarp(GXTevStageID stage, GXIndTexStageID indStage, u8 arg2, u8 arg3, GXIndTexMtxID arg4)
{
	GXIndTexWrap wrapVal = (GXIndTexWrap)((arg3) ? 6 : 0);

	GXSetTevIndirect(stage, indStage, GX_ITF_8, (GXIndTexBiasSel)((arg2) ? 7 : 0), arg4, wrapVal, wrapVal, FALSE, FALSE, GX_ITBA_OFF);
}

/*
 * --INFO--
 * Address:	800E8424
 * Size:	000004
 */
void __GXUpdateBPMask() { }

/*
 * --INFO--
 * Address:	800E8428
 * Size:	000030
 */
// modified from Open_RVL
void __GXSetIndirectMask(u32 mask)
{
	GXData* data = __GXData;
	GX_BITFIELD_SET(data->_124, 24, 8, mask);
	GXWGFifo.u8     = 0x61;
	GXWGFifo.s32    = data->_124;
	data->_000.s[1] = 0;
}

/*
 * --INFO--
 * Address:	800E8458
 * Size:	000024
 */
void __GXFlushTextureState()
{
	GXWGFifo.u8         = 0x61;
	GXWGFifo.s32        = __GXData->_124;
	__GXData->_000.s[1] = 0;
}
