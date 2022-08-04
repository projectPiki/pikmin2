#include "types.h"
#include "Dolphin/gx.h"

/*
 * --INFO--
 * Address:	800E7F40
 * Size:	00006C
 */
// modified from Open_RVL
void GXSetTevIndirect(GXTevStageID tevStage, GXIndTexStageID texStage,
                      GXIndTexFormat texFmt, GXIndTexBiasSel biasSel,
                      GXIndTexMtxID mtxId, GXIndTexWrap wrapS,
                      GXIndTexWrap wrapT, u8 addPrev, u8 utcLod,
                      GXIndTexAlphaSel alphaSel) 
{
    u32 field = 0;
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

    GXWGFifo.u8 = 0x61;
    GXWGFifo.s32 = field;
    __GXData->_000[1] = 0;
}

/*
 * --INFO--
 * Address:	800E7FAC
 * Size:	000178
 */
// WIP: https://decomp.me/scratch/dsTgU 
void GXSetIndTexMtx(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  cmpwi     r3, 0x8
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  beq-      .loc_0x58
	  bge-      .loc_0x34
	  cmpwi     r3, 0x4
	  beq-      .loc_0x58
	  bge-      .loc_0x48
	  cmpwi     r3, 0x1
	  bge-      .loc_0x40
	  b         .loc_0x58

	.loc_0x34:
	  cmpwi     r3, 0xC
	  bge-      .loc_0x58
	  b         .loc_0x50

	.loc_0x40:
	  subi      r0, r3, 0x1
	  b         .loc_0x5C

	.loc_0x48:
	  subi      r0, r3, 0x5
	  b         .loc_0x5C

	.loc_0x50:
	  subi      r0, r3, 0x9
	  b         .loc_0x5C

	.loc_0x58:
	  li        r0, 0

	.loc_0x5C:
	  lfs       f2, -0x6CC8(r2)
	  mulli     r31, r0, 0x3
	  lfs       f1, 0x0(r4)
	  lfs       f0, 0xC(r4)
	  fmuls     f1, f2, f1
	  addi      r10, r5, 0x11
	  fmuls     f0, f2, f0
	  extsb     r10, r10
	  li        r12, 0x61
	  fctiwz    f1, f1
	  lis       r11, 0xCC01
	  fctiwz    f0, f0
	  li        r30, 0
	  addi      r0, r31, 0x6
	  stfd      f1, 0x58(r1)
	  rlwinm    r8,r10,30,30,31
	  addi      r7, r31, 0x7
	  lwz       r3, -0x6D70(r2)
	  stfd      f0, 0x50(r1)
	  lwz       r9, 0x5C(r1)
	  li        r29, 0
	  lwz       r6, 0x54(r1)
	  addi      r5, r31, 0x8
	  rlwimi    r30,r9,0,21,31
	  addi      r9, r30, 0
	  stb       r12, -0x8000(r11)
	  rlwimi    r9,r6,11,10,20
	  rlwimi    r9,r10,22,8,9
	  rlwimi    r9,r0,24,0,7
	  stw       r9, -0x8000(r11)
	  rlwinm    r6,r10,28,30,31
	  li        r30, 0
	  lfs       f1, 0x4(r4)
	  li        r0, 0
	  lfs       f0, 0x10(r4)
	  fmuls     f1, f2, f1
	  fmuls     f0, f2, f0
	  stb       r12, -0x8000(r11)
	  fctiwz    f1, f1
	  fctiwz    f0, f0
	  stfd      f1, 0x48(r1)
	  stfd      f0, 0x40(r1)
	  lwz       r10, 0x4C(r1)
	  lwz       r9, 0x44(r1)
	  rlwimi    r29,r10,0,21,31
	  rlwimi    r29,r9,11,10,20
	  rlwimi    r29,r8,22,8,9
	  rlwimi    r29,r7,24,0,7
	  stw       r29, -0x8000(r11)
	  lfs       f1, 0x8(r4)
	  lfs       f0, 0x14(r4)
	  fmuls     f1, f2, f1
	  fmuls     f0, f2, f0
	  stb       r12, -0x8000(r11)
	  fctiwz    f1, f1
	  fctiwz    f0, f0
	  stfd      f1, 0x38(r1)
	  stfd      f0, 0x30(r1)
	  lwz       r7, 0x3C(r1)
	  lwz       r4, 0x34(r1)
	  rlwimi    r30,r7,0,21,31
	  rlwimi    r30,r4,11,10,20
	  rlwimi    r30,r6,22,8,9
	  rlwimi    r30,r5,24,0,7
	  stw       r30, -0x8000(r11)
	  sth       r0, 0x2(r3)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8124
 * Size:	000144
 */
// modified from Open_RVL
void GXSetIndTexCoordScale(GXIndTexStageID stage, GXIndTexScale scaleS,
                           GXIndTexScale scaleT) 
{
    GXData* data;
    switch (stage) {
    case GX_IND_TEX_STAGE_ID_0:
        data = __GXData;
        GX_BITFIELD_SET(data->_128, 28, 4, scaleS);
        GX_BITFIELD_SET(data->_128, 24, 4, scaleT);
        GX_BITFIELD_SET(data->_128, 0, 8, 0x25);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.s32 = data->_128;
        break;
    case GX_IND_TEX_STAGE_ID_1:
        data = __GXData;
        GX_BITFIELD_SET(data->_128, 20, 4, scaleS);
        GX_BITFIELD_SET(data->_128, 16, 4, scaleT);
        GX_BITFIELD_SET(data->_128, 0, 8, 0x25);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.s32 = data->_128;
        break;
    case GX_IND_TEX_STAGE_ID_2:
        data = __GXData;
        GX_BITFIELD_SET(data->_12C, 28, 4, scaleS);
        GX_BITFIELD_SET(data->_12C, 24, 4, scaleT);
        GX_BITFIELD_SET(data->_12C, 0, 8, 0x26);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.s32 = data->_12C;
        break;
    case GX_IND_TEX_STAGE_ID_3:
        data = __GXData;
        GX_BITFIELD_SET(data->_12C, 20, 4, scaleS);
        GX_BITFIELD_SET(data->_12C, 16, 4, scaleT);
        GX_BITFIELD_SET(data->_12C, 0, 8, 0x26);
        GXWGFifo.u8 = 0x61;
        GXWGFifo.s32 = data->_12C;
        break;
    }

    __GXData->_000[1] = 0;
}

/*
 * --INFO--
 * Address:	800E8268
 * Size:	0000EC
 */
// WIP: https://decomp.me/scratch/m4XhD 
void GXSetIndTexOrder(void)
{
	/*
	.loc_0x0:
	  cmpwi     r5, 0xFF
	  bne-      .loc_0xC
	  li        r5, 0

	.loc_0xC:
	  cmpwi     r4, 0xFF
	  bne-      .loc_0x18
	  li        r4, 0

	.loc_0x18:
	  cmpwi     r3, 0x2
	  beq-      .loc_0x80
	  bge-      .loc_0x34
	  cmpwi     r3, 0
	  beq-      .loc_0x40
	  bge-      .loc_0x60
	  b         .loc_0xBC

	.loc_0x34:
	  cmpwi     r3, 0x4
	  bge-      .loc_0xBC
	  b         .loc_0xA0

	.loc_0x40:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x120(r3)
	  rlwimi    r0,r5,0,29,31
	  stw       r0, 0x120(r3)
	  lwz       r0, 0x120(r3)
	  rlwimi    r0,r4,3,26,28
	  stw       r0, 0x120(r3)
	  b         .loc_0xBC

	.loc_0x60:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x120(r3)
	  rlwimi    r0,r5,6,23,25
	  stw       r0, 0x120(r3)
	  lwz       r0, 0x120(r3)
	  rlwimi    r0,r4,9,20,22
	  stw       r0, 0x120(r3)
	  b         .loc_0xBC

	.loc_0x80:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x120(r3)
	  rlwimi    r0,r5,12,17,19
	  stw       r0, 0x120(r3)
	  lwz       r0, 0x120(r3)
	  rlwimi    r0,r4,15,14,16
	  stw       r0, 0x120(r3)
	  b         .loc_0xBC

	.loc_0xA0:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x120(r3)
	  rlwimi    r0,r5,18,11,13
	  stw       r0, 0x120(r3)
	  lwz       r0, 0x120(r3)
	  rlwimi    r0,r4,21,8,10
	  stw       r0, 0x120(r3)

	.loc_0xBC:
	  li        r0, 0x61
	  lwz       r4, -0x6D70(r2)
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r0, 0
	  lwz       r3, 0x120(r4)
	  stw       r3, -0x8000(r5)
	  lwz       r3, 0x5AC(r4)
	  ori       r3, r3, 0x3
	  stw       r3, 0x5AC(r4)
	  sth       r0, 0x2(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E8354
 * Size:	000024
 */
// modified from Open_RVL
void GXSetNumIndStages(u8 num) {
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
void GXSetTevDirect(GXTevStageID stage) {
    GXSetTevIndirect(stage, GX_IND_TEX_STAGE_ID_0, GX_IND_TEX_FMT_0,
                     GX_IND_TEX_BIAS_SEL_0, GX_IND_TEX_MTX_ID_0,
                     GX_IND_TEX_WRAP_0, GX_IND_TEX_WRAP_0, FALSE, FALSE,
                     GX_IND_TEX_ALPHA_SEL_0);
}

/*
 * --INFO--
 * Address:	800E83C0
 * Size:	000064
 */
// WIP: https://decomp.me/scratch/7r4LH 
void GXSetTevIndWarp(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  rlwinm.   r0,r6,0,24,31
	  stwu      r1, -0x20(r1)
	  beq-      .loc_0x1C
	  li        r6, 0x6
	  b         .loc_0x20

	.loc_0x1C:
	  li        r6, 0

	.loc_0x20:
	  rlwinm.   r0,r5,0,24,31
	  addi      r8, r6, 0
	  beq-      .loc_0x34
	  li        r6, 0x7
	  b         .loc_0x38

	.loc_0x34:
	  li        r6, 0

	.loc_0x38:
	  li        r0, 0
	  stw       r0, 0x8(r1)
	  addi      r9, r8, 0
	  li        r5, 0
	  stw       r0, 0xC(r1)
	  li        r10, 0
	  bl        -0x4D0
	  lwz       r0, 0x24(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001AC
 */
// void GXSetTevIndTile(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
// void GXSetTevIndBumpST(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
// void GXSetTevIndBumpXYZ(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
// void GXSetTevIndRepeat(void)
// {
// 	// UNUSED FUNCTION
// }

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
    GXWGFifo.u8 = 0x61;
    GXWGFifo.s32 = data->_124;
    data->_000[1] = 0;
}


/*
 * --INFO--
 * Address:	800E8458
 * Size:	000024
 */
void __GXFlushTextureState() 
{
    GXWGFifo.u8 = 0x61;
    GXWGFifo.s32 = __GXData->_124;
    __GXData->_000[1] = 0;
}