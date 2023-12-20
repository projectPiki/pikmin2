#include "types.h"
#include "Dolphin/gx.h"

/**
 * @note Address: 0x800E7F40
 * @note Size: 0x6C
 */
// modified from Open_RVL
void GXSetTevIndirect(GXTevStageID tevStage, GXIndTexStageID texStage, GXIndTexFormat texFmt, GXIndTexBiasSel biasSel, GXIndTexMtxID mtxId,
                      GXIndTexWrap wrapS, GXIndTexWrap wrapT, u8 addPrev, u8 utcLod, GXIndTexAlphaSel alphaSel)
{
	u32 field       = 0;
	const u32 stage = tevStage + 0x10;

	GX_SET_REG(field, texStage, GX_BP_INDTEV_STAGE_ST, GX_BP_INDTEV_STAGE_END);
	GX_SET_REG(field, texFmt, GX_BP_INDTEV_FMT_ST, GX_BP_INDTEV_FMT_END);
	GX_SET_REG(field, biasSel, GX_BP_INDTEV_BIAS_ST, GX_BP_INDTEV_BIAS_END);
	GX_SET_REG(field, alphaSel, GX_BP_INDTEV_ALPHA_ST, GX_BP_INDTEV_ALPHA_END);
	GX_SET_REG(field, mtxId, GX_BP_INDTEV_MTX_ST, GX_BP_INDTEV_MTX_END);
	GX_SET_REG(field, wrapS, GX_BP_INDTEV_WRAPS_ST, GX_BP_INDTEV_WRAPS_END);
	GX_SET_REG(field, wrapT, GX_BP_INDTEV_WRAPT_ST, GX_BP_INDTEV_WRAPT_END);
	GX_SET_REG(field, utcLod, GX_BP_INDTEV_UNMODTEXCOORD_ST, GX_BP_INDTEV_UNMODTEXCOORD_END);
	GX_SET_REG(field, addPrev, GX_BP_INDTEV_ADDPREV_ST, GX_BP_INDTEV_ADDPREV_END);
	GX_SET_REG(field, stage, 0, 7);

	GX_BP_LOAD_REG(field);
	gx->bpSentNot = GX_FALSE;
}

/**
 * @note Address: 0x800E7FAC
 * @note Size: 0x178
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
	GX_SET_REG(field, 1024.0f * mtx[0][0], GX_BP_INDMTX_M00_ST, GX_BP_INDMTX_M00_END);
	GX_SET_REG(field, 1024.0f * mtx[1][0], GX_BP_INDMTX_M10_ST, GX_BP_INDMTX_M10_END);
	GX_SET_REG(field, (scale_exp >> 0) & 3, GX_BP_INDMTX_EXP_ST, GX_BP_INDMTX_EXP_END);
	GX_SET_REG(field, val * 3 + 6, 0, 7);

	GX_BP_LOAD_REG(field);

	field = 0;
	GX_SET_REG(field, 1024.0f * mtx[0][1], GX_BP_INDMTX_M00_ST, GX_BP_INDMTX_M00_END);
	GX_SET_REG(field, 1024.0f * mtx[1][1], GX_BP_INDMTX_M10_ST, GX_BP_INDMTX_M10_END);
	GX_SET_REG(field, (scale_exp >> 2) & 3, GX_BP_INDMTX_EXP_ST, GX_BP_INDMTX_EXP_END);
	GX_SET_REG(field, val * 3 + 7, 0, 7);

	GX_BP_LOAD_REG(field);

	field = 0;
	GX_SET_REG(field, 1024.0f * mtx[0][2], GX_BP_INDMTX_M00_ST, GX_BP_INDMTX_M00_END);
	GX_SET_REG(field, 1024.0f * mtx[1][2], GX_BP_INDMTX_M10_ST, GX_BP_INDMTX_M10_END);
	GX_SET_REG(field, (scale_exp >> 4) & 3, GX_BP_INDMTX_EXP_ST, GX_BP_INDMTX_EXP_END);
	GX_SET_REG(field, val * 3 + 8, 0, 7);

	GX_BP_LOAD_REG(field);

	gx->bpSentNot = GX_FALSE;
}

/**
 * @note Address: 0x800E8124
 * @note Size: 0x144
 */
// modified from Open_RVL
void GXSetIndTexCoordScale(GXIndTexStageID stage, GXIndTexScale scaleS, GXIndTexScale scaleT)
{
	GXData* data;
	switch (stage) {
	case GX_IND_TEX_STAGE_0:
		GX_SET_REG(gx->IndTexScale0, scaleS, GX_BP_RAS1_SS0_S0_ST, GX_BP_RAS1_SS0_S0_END);
		GX_SET_REG(gx->IndTexScale0, scaleT, GX_BP_RAS1_SS0_T0_ST, GX_BP_RAS1_SS0_T0_END);
		GX_SET_REG(gx->IndTexScale0, 0x25, 0, 7);

		GX_BP_LOAD_REG(gx->IndTexScale0);
		break;

	case GX_IND_TEX_STAGE_1:
		GX_SET_REG(gx->IndTexScale0, scaleS, GX_BP_RAS1_SS0_S1_ST, GX_BP_RAS1_SS0_S1_END);
		GX_SET_REG(gx->IndTexScale0, scaleT, GX_BP_RAS1_SS0_T1_ST, GX_BP_RAS1_SS0_T1_END);
		GX_SET_REG(gx->IndTexScale0, 0x25, 0, 7);

		GX_BP_LOAD_REG(gx->IndTexScale0);
		break;

	case GX_IND_TEX_STAGE_2:
		GX_SET_REG(gx->IndTexScale1, scaleS, GX_BP_RAS1_SS1_S2_ST, GX_BP_RAS1_SS1_S2_END);
		GX_SET_REG(gx->IndTexScale1, scaleT, GX_BP_RAS1_SS1_T2_ST, GX_BP_RAS1_SS1_T2_END);
		GX_SET_REG(gx->IndTexScale1, 0x26, 0, 7);

		GX_BP_LOAD_REG(gx->IndTexScale1);
		break;

	case GX_IND_TEX_STAGE_3:
		GX_SET_REG(gx->IndTexScale1, scaleS, GX_BP_RAS1_SS1_S3_ST, GX_BP_RAS1_SS1_S3_END);
		GX_SET_REG(gx->IndTexScale1, scaleT, GX_BP_RAS1_SS1_T3_ST, GX_BP_RAS1_SS1_T3_END);
		GX_SET_REG(gx->IndTexScale1, 0x26, 0, 7);

		GX_BP_LOAD_REG(gx->IndTexScale1);
		break;
	}

	gx->bpSentNot = GX_FALSE;
}

/**
 * @note Address: 0x800E8268
 * @note Size: 0xEC
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
		GX_SET_REG(gx->iref, map, GX_BP_RAS1_IREF_MAP0_ST, GX_BP_RAS1_IREF_MAP0_END);
		GX_SET_REG(gx->iref, coord, GX_BP_RAS1_IREF_TXC0_ST, GX_BP_RAS1_IREF_TXC0_END);
		break;

	case GX_IND_TEX_STAGE_1:
		GX_SET_REG(gx->iref, map, GX_BP_RAS1_IREF_MAP1_ST, GX_BP_RAS1_IREF_MAP1_END);
		GX_SET_REG(gx->iref, coord, GX_BP_RAS1_IREF_TXC1_ST, GX_BP_RAS1_IREF_TXC1_END);
		break;

	case GX_IND_TEX_STAGE_2:
		GX_SET_REG(gx->iref, map, GX_BP_RAS1_IREF_MAP2_ST, GX_BP_RAS1_IREF_MAP2_END);
		GX_SET_REG(gx->iref, coord, GX_BP_RAS1_IREF_TXC2_ST, GX_BP_RAS1_IREF_TXC2_END);
		break;

	case GX_IND_TEX_STAGE_3:
		GX_SET_REG(gx->iref, map, GX_BP_RAS1_IREF_MAP3_ST, GX_BP_RAS1_IREF_MAP3_END);
		GX_SET_REG(gx->iref, coord, GX_BP_RAS1_IREF_TXC3_ST, GX_BP_RAS1_IREF_TXC3_END);
		break;
	}

	GX_BP_LOAD_REG(gx->iref);

	gx->dirtyState |= (GX_DIRTY_SU_TEX | GX_DIRTY_BP_MASK);
	gx->bpSentNot = GX_FALSE;
}

/**
 * @note Address: 0x800E8354
 * @note Size: 0x24
 */
// modified from Open_RVL
void GXSetNumIndStages(u8 num)
{
	GX_SET_REG(gx->genMode, num, GX_BP_GENMODE_NUMINDSTAGES_ST, GX_BP_GENMODE_NUMINDSTAGES_END);
	gx->dirtyState |= (GX_DIRTY_BP_MASK | GX_DIRTY_GEN_MODE);
}

/**
 * @note Address: 0x800E8378
 * @note Size: 0x48
 */
// modified from Open_RVL
void GXSetTevDirect(GXTevStageID stage)
{
	GXSetTevIndirect(stage, GX_IND_TEX_STAGE_0, GX_ITF_8, GX_ITB_NONE, GX_ITM_OFF, GX_ITW_OFF, GX_ITW_OFF, FALSE, FALSE, GX_ITBA_OFF);
}

/**
 * @note Address: 0x800E83C0
 * @note Size: 0x64
 */
void GXSetTevIndWarp(GXTevStageID stage, GXIndTexStageID indStage, GXBool doSignedBias, GXBool doWrap, GXIndTexMtxID mtxID)
{
	GXIndTexWrap wrapVal = ((doWrap) ? GX_ITW_0 : GX_ITW_OFF);

	GXSetTevIndirect(stage, indStage, GX_ITF_8, ((doSignedBias) ? GX_ITB_STU : GX_ITB_NONE), mtxID, wrapVal, wrapVal, FALSE, FALSE,
	                 GX_ITBA_OFF);
}

/**
 * @note Address: 0x800E8424
 * @note Size: 0x4
 */
void __GXUpdateBPMask() { }

/**
 * @note Address: 0x800E8428
 * @note Size: 0x30
 */
// modified from Open_RVL
void __GXSetIndirectMask(u32 mask)
{
	GX_SET_REG(gx->bpMask, mask, GX_BP_INDIMASK_ST, GX_BP_INDIMASK_END);
	GX_BP_LOAD_REG(gx->bpMask);
	gx->bpSentNot = GX_FALSE;
}

/**
 * @note Address: 0x800E8458
 * @note Size: 0x24
 */
void __GXFlushTextureState()
{
	GX_BP_LOAD_REG(gx->bpMask);
	gx->bpSentNot = GX_FALSE;
}
