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

	GX_WRITE_U8(0x61);
	GXWGFifo.s32  = field;
	gx->bpSentNot = GX_FALSE;
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
	GX_WRITE_U8(0x61);
	GXWGFifo.s32 = field;

	field = 0;
	GX_BITFIELD_SET(field, 21, 11, 1024.0f * mtx[0][1]);
	GX_BITFIELD_SET(field, 10, 11, 1024.0f * mtx[1][1]);
	GX_BITFIELD_SET(field, 8, 2, (scale_exp >> 2) & 3);
	GX_BITFIELD_SET(field, 0, 8, val * 3 + 7);
	GX_WRITE_U8(0x61);
	GXWGFifo.s32 = field;

	field = 0;
	GX_BITFIELD_SET(field, 21, 11, 1024.0f * mtx[0][2]);
	GX_BITFIELD_SET(field, 10, 11, 1024.0f * mtx[1][2]);
	GX_BITFIELD_SET(field, 8, 2, (scale_exp >> 4) & 3);
	GX_BITFIELD_SET(field, 0, 8, val * 3 + 8);
	GX_WRITE_U8(0x61);
	GXWGFifo.s32 = field;

	gx->bpSentNot = GX_FALSE;
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
		data = gx;
		GX_BITFIELD_SET(data->IndTexScale0, 28, 4, scaleS);
		GX_BITFIELD_SET(data->IndTexScale0, 24, 4, scaleT);
		GX_BITFIELD_SET(data->IndTexScale0, 0, 8, 0x25);
		GX_WRITE_U8(0x61);
		GXWGFifo.s32 = data->IndTexScale0;
		break;
	case GX_IND_TEX_STAGE_1:
		data = gx;
		GX_BITFIELD_SET(data->IndTexScale0, 20, 4, scaleS);
		GX_BITFIELD_SET(data->IndTexScale0, 16, 4, scaleT);
		GX_BITFIELD_SET(data->IndTexScale0, 0, 8, 0x25);
		GX_WRITE_U8(0x61);
		GXWGFifo.s32 = data->IndTexScale0;
		break;
	case GX_IND_TEX_STAGE_2:
		data = gx;
		GX_BITFIELD_SET(data->IndTexScale1, 28, 4, scaleS);
		GX_BITFIELD_SET(data->IndTexScale1, 24, 4, scaleT);
		GX_BITFIELD_SET(data->IndTexScale1, 0, 8, 0x26);
		GX_WRITE_U8(0x61);
		GXWGFifo.s32 = data->IndTexScale1;
		break;
	case GX_IND_TEX_STAGE_3:
		data = gx;
		GX_BITFIELD_SET(data->IndTexScale1, 20, 4, scaleS);
		GX_BITFIELD_SET(data->IndTexScale1, 16, 4, scaleT);
		GX_BITFIELD_SET(data->IndTexScale1, 0, 8, 0x26);
		GX_WRITE_U8(0x61);
		GXWGFifo.s32 = data->IndTexScale1;
		break;
	}

	gx->bpSentNot = GX_FALSE;
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
	if (map == GX_TEXMAP_NULL) {
		map = GX_TEXMAP0;
	}

	if (coord == GX_TEXCOORD_NULL) {
		coord = GX_TEXCOORD0;
	}

	switch (stage) {
	case GX_IND_TEX_STAGE_0:
		data = gx;
		GX_BITFIELD_SET(data->iref, 29, 3, map);
		GX_BITFIELD_SET(data->iref, 26, 3, coord);
		break;
	case GX_IND_TEX_STAGE_1:
		data = gx;
		GX_BITFIELD_SET(data->iref, 23, 3, map);
		GX_BITFIELD_SET(data->iref, 20, 3, coord);
		break;
	case GX_IND_TEX_STAGE_2:
		data = gx;
		GX_BITFIELD_SET(data->iref, 17, 3, map);
		GX_BITFIELD_SET(data->iref, 14, 3, coord);
		break;
	case GX_IND_TEX_STAGE_3:
		data = gx;
		GX_BITFIELD_SET(data->iref, 11, 3, map);
		GX_BITFIELD_SET(data->iref, 8, 3, coord);
		break;
	}

	GX_WRITE_U8(0x61);
	GXWGFifo.s32 = gx->iref;
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
	GXData* data = gx;
	GX_BITFIELD_SET(data->genMode, 13, 3, num);
	data->dirtyState |= 0x6;
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
void GXSetTevIndWarp(GXTevStageID stage, GXIndTexStageID indStage, GXBool doSignedBias, GXBool doWrap, GXIndTexMtxID mtxID)
{
	GXIndTexWrap wrapVal = ((doWrap) ? GX_ITW_0 : GX_ITW_OFF);

	GXSetTevIndirect(stage, indStage, GX_ITF_8, ((doSignedBias) ? GX_ITB_STU : GX_ITB_NONE), mtxID, wrapVal, wrapVal, FALSE, FALSE,
	                 GX_ITBA_OFF);
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
	GXData* data = gx;
	GX_BITFIELD_SET(data->bpMask, 24, 8, mask);
	GX_WRITE_U8(0x61);
	GXWGFifo.s32    = data->bpMask;
	data->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E8458
 * Size:	000024
 */
void __GXFlushTextureState()
{
	GX_WRITE_U8(0x61);
	GXWGFifo.s32  = gx->bpMask;
	gx->bpSentNot = GX_FALSE;
}
