#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DGD.h"
#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "JSystem/J3D/J3DPacket.h"
#include "JSystem/J3D/J3DShape.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTexGenBlock.h"
#include "JSystem/J3D/J3DTexMtx.h"
#include "JSystem/J3D/J3DTransform.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_J3DShapeMtx_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804A2C98
    lbl_804A2C98:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadMtxIndx_PNGP__11J3DShapeMtxCFiUs
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadMtxIndx_PCPU__11J3DShapeMtxCFiUs
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadMtxIndx_NCPU__11J3DShapeMtxCFiUs
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadMtxIndx_PNCPU__11J3DShapeMtxCFiUs
    .global sMtxLoadPipeline__11J3DShapeMtx
    sMtxLoadPipeline__11J3DShapeMtx:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadMtxConcatView_PNGP__21J3DShapeMtxConcatViewCFiUs
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadMtxConcatView_PCPU__21J3DShapeMtxConcatViewCFiUs
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadMtxConcatView_NCPU__21J3DShapeMtxConcatViewCFiUs
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadMtxConcatView_PNCPU__21J3DShapeMtxConcatViewCFiUs
    .global sMtxLoadPipeline__21J3DShapeMtxConcatView
    sMtxLoadPipeline__21J3DShapeMtxConcatView:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadMtxConcatView_PNGP_LOD__21J3DShapeMtxConcatViewCFiUs
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadMtxConcatView_PCPU__21J3DShapeMtxConcatViewCFiUs
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadMtxConcatView_NCPU__21J3DShapeMtxConcatViewCFiUs
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadMtxConcatView_PNCPU__21J3DShapeMtxConcatViewCFiUs
    .global sMtxLoadLODPipeline__21J3DShapeMtxConcatView
    sMtxLoadLODPipeline__21J3DShapeMtxConcatView:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global qMtx$1532
    qMtx$1532:
        .float 0.5
        .4byte 0x00000000
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0xBF000000
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
    .global qMtx2$1533
    qMtx2$1533:
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .float 0.5
        .4byte 0x00000000
        .4byte 0xBF000000
        .4byte 0x00000000
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
    .global lbl_804A2E18
    lbl_804A2E18:
        .4byte lbl_800867CC
        .4byte lbl_800865A8
        .4byte lbl_800865E4
        .4byte lbl_80086588
        .4byte lbl_800867CC
        .4byte lbl_800865F4
        .4byte lbl_800865A8
        .4byte lbl_800865A8
        .4byte lbl_800865E4
        .4byte lbl_80086588
        .4byte lbl_80086728
        .4byte lbl_80086684
    .global lbl_804A2E48
    lbl_804A2E48:
        .4byte lbl_80086504
        .4byte lbl_8008631C
        .4byte lbl_8008632C
        .4byte lbl_8008630C
        .4byte lbl_80086504
        .4byte lbl_8008635C
        .4byte lbl_8008631C
        .4byte lbl_8008631C
        .4byte lbl_8008632C
        .4byte lbl_8008630C
        .4byte lbl_80086470
        .4byte lbl_800863DC
    .global mtxCache$1887
    mtxCache$1887:
        .4byte 0xFFFFFFFF
        .4byte 0xFFFFFFFF
        .4byte 0xFFFFFFFF
        .4byte 0xFFFFFFFF
        .4byte 0xFFFFFFFF
    .global __vt__28J3DShapeMtxYBBoardConcatView
    __vt__28J3DShapeMtxYBBoardConcatView:
        .4byte 0
        .4byte 0
        .4byte __dt__28J3DShapeMtxYBBoardConcatViewFv
        .4byte getType__28J3DShapeMtxYBBoardConcatViewCFv
        .4byte getUseMtxNum__11J3DShapeMtxCFv
        .4byte getUseMtxIndex__11J3DShapeMtxCFUs
        .4byte load__28J3DShapeMtxYBBoardConcatViewCFv
        .4byte calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f
        .4byte loadNrmMtx__21J3DShapeMtxConcatViewCFiUs
        .4byte loadNrmMtx__21J3DShapeMtxConcatViewCFiUsPA4_f
    .global __vt__27J3DShapeMtxBBoardConcatView
    __vt__27J3DShapeMtxBBoardConcatView:
        .4byte 0
        .4byte 0
        .4byte __dt__27J3DShapeMtxBBoardConcatViewFv
        .4byte getType__27J3DShapeMtxBBoardConcatViewCFv
        .4byte getUseMtxNum__11J3DShapeMtxCFv
        .4byte getUseMtxIndex__11J3DShapeMtxCFUs
        .4byte load__27J3DShapeMtxBBoardConcatViewCFv
        .4byte calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f
        .4byte loadNrmMtx__21J3DShapeMtxConcatViewCFiUs
        .4byte loadNrmMtx__21J3DShapeMtxConcatViewCFiUsPA4_f
    .global __vt__26J3DShapeMtxMultiConcatView
    __vt__26J3DShapeMtxMultiConcatView:
        .4byte 0
        .4byte 0
        .4byte __dt__26J3DShapeMtxMultiConcatViewFv
        .4byte getType__26J3DShapeMtxMultiConcatViewCFv
        .4byte getUseMtxNum__26J3DShapeMtxMultiConcatViewCFv
        .4byte getUseMtxIndex__26J3DShapeMtxMultiConcatViewCFUs
        .4byte load__26J3DShapeMtxMultiConcatViewCFv
        .4byte calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f
        .4byte loadNrmMtx__26J3DShapeMtxMultiConcatViewCFiUs
        .4byte loadNrmMtx__26J3DShapeMtxMultiConcatViewCFiUsPA4_f
    .global __vt__16J3DShapeMtxMulti
    __vt__16J3DShapeMtxMulti:
        .4byte 0
        .4byte 0
        .4byte __dt__16J3DShapeMtxMultiFv
        .4byte getType__16J3DShapeMtxMultiCFv
        .4byte getUseMtxNum__16J3DShapeMtxMultiCFv
        .4byte getUseMtxIndex__16J3DShapeMtxMultiCFUs
        .4byte load__16J3DShapeMtxMultiCFv
        .4byte calcNBTScale__16J3DShapeMtxMultiFRC3VecPA3_A3_fPA3_A3_f
    .global __vt__21J3DShapeMtxConcatView
    __vt__21J3DShapeMtxConcatView:
        .4byte 0
        .4byte 0
        .4byte __dt__21J3DShapeMtxConcatViewFv
        .4byte getType__21J3DShapeMtxConcatViewCFv
        .4byte getUseMtxNum__11J3DShapeMtxCFv
        .4byte getUseMtxIndex__11J3DShapeMtxCFUs
        .4byte load__21J3DShapeMtxConcatViewCFv
        .4byte calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f
        .4byte loadNrmMtx__21J3DShapeMtxConcatViewCFiUs
        .4byte loadNrmMtx__21J3DShapeMtxConcatViewCFiUsPA4_f
    .global __vt__11J3DShapeMtx
    __vt__11J3DShapeMtx:
        .4byte 0
        .4byte 0
        .4byte __dt__11J3DShapeMtxFv
        .4byte getType__11J3DShapeMtxCFv
        .4byte getUseMtxNum__11J3DShapeMtxCFv
        .4byte getUseMtxIndex__11J3DShapeMtxCFUs
        .4byte load__11J3DShapeMtxCFv
        .4byte calcNBTScale__11J3DShapeMtxFRC3VecPA3_A3_fPA3_A3_f
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sMtxLoadCache__11J3DShapeMtx
    sMtxLoadCache__11J3DShapeMtx:
        .skip 0x14

    .section .sbss # 0x80514D80 - 0x80516360
    .global sCurrentPipeline__11J3DShapeMtx
    sCurrentPipeline__11J3DShapeMtx:
        .skip 0x4
    .global sCurrentScaleFlag__11J3DShapeMtx
    sCurrentScaleFlag__11J3DShapeMtx:
        .skip 0x4
    .global sNBTFlag__11J3DShapeMtx
    sNBTFlag__11J3DShapeMtx:
        .skip 0x1
    .global sLODFlag__11J3DShapeMtx
    sLODFlag__11J3DShapeMtx:
        .skip 0x3
    .global sTexMtxLoadType__11J3DShapeMtx
    sTexMtxLoadType__11J3DShapeMtx:
        .skip 0x4
    .global sMtxPtrTbl__21J3DShapeMtxConcatView
    sMtxPtrTbl__21J3DShapeMtxConcatView:
        .skip 0x8
    .global sTexGenBlock__17J3DDifferedTexMtx
    sTexGenBlock__17J3DDifferedTexMtx:
        .skip 0x4
    .global sTexMtxObj__17J3DDifferedTexMtx
    sTexMtxObj__17J3DDifferedTexMtx:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516AE8
    lbl_80516AE8:
        .4byte 0x00000000
    .global lbl_80516AEC
    lbl_80516AEC:
        .float 1.0
*/

J3DShapeMtx::LoadMtxIndxFunction J3DShapeMtx::sMtxLoadPipeline[4] = {
	&J3DShapeMtx::loadMtxIndx_PNGP,
	&J3DShapeMtx::loadMtxIndx_PCPU,
	&J3DShapeMtx::loadMtxIndx_NCPU,
	&J3DShapeMtx::loadMtxIndx_PNCPU,
};
J3DShapeMtxConcatView::LoadMtxConcatViewFunction J3DShapeMtxConcatView::sMtxLoadPipeline[4] = {
	&J3DShapeMtxConcatView::loadMtxConcatView_PNGP,
	&J3DShapeMtxConcatView::loadMtxConcatView_PCPU,
	&J3DShapeMtxConcatView::loadMtxConcatView_NCPU,
	&J3DShapeMtxConcatView::loadMtxConcatView_PNCPU,
};

J3DShapeMtxConcatView::LoadMtxConcatViewFunction J3DShapeMtxConcatView::sMtxLoadLODPipeline[4] = {
	&J3DShapeMtxConcatView::loadMtxConcatView_PNGP_LOD,
	&J3DShapeMtxConcatView::loadMtxConcatView_PCPU,
	&J3DShapeMtxConcatView::loadMtxConcatView_NCPU,
	&J3DShapeMtxConcatView::loadMtxConcatView_PNCPU,
};

u32 J3DShapeMtx::sCurrentPipeline;
u8* J3DShapeMtx::sCurrentScaleFlag;
u32 J3DShapeMtx::sTexMtxLoadType;
bool J3DShapeMtx::sNBTFlag;
bool J3DShapeMtx::sLODFlag;
Mtx* J3DShapeMtxConcatView::sMtxPtrTbl[2];
J3DTexGenBlock* J3DDifferedTexMtx::sTexGenBlock;
// J3DShapePacket* J3DDifferedTexMtx::sTexMtxObj;

/*
 * --INFO--
 * Address:	80086104
 * Size:	00003C
 */
void J3DShapeMtx::resetMtxLoadCache()
{
	for (int i = 9; i >= 0; i--) {
		sMtxLoadCache[i] = 0xFFFF;
	}
	/*
	lis      r4, 0x0000FFFF@ha
	lis      r3, sMtxLoadCache__11J3DShapeMtx@ha
	addi     r0, r4, 0x0000FFFF@l
	addi     r3, r3, sMtxLoadCache__11J3DShapeMtx@l
	sth      r0, 0x12(r3)
	sth      r0, 0x10(r3)
	sth      r0, 0xe(r3)
	sth      r0, 0xc(r3)
	sth      r0, 0xa(r3)
	sth      r0, 8(r3)
	sth      r0, 6(r3)
	sth      r0, 4(r3)
	sth      r0, 2(r3)
	sth      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80086140
 * Size:	000044
 */
void J3DShapeMtx::loadMtxIndx_PNGP(int p1, u16 p2) const
{
	GXWGFifo.u8  = 0x20;
	GXWGFifo.u16 = p2;
	GXWGFifo.u16 = p1 * 0xC | 0xB000;
	GXWGFifo.u8  = 0x28;
	GXWGFifo.u16 = p2;
	GXWGFifo.u16 = p1 * 0x9 + 0x400 | 0x8000;
	/*
	mulli    r3, r4, 0xc
	li       r0, 0x20
	lis      r7, 0xCC008000@ha
	stb      r0, 0xCC008000@l(r7)
	li       r0, 0x28
	clrlwi   r3, r3, 0x10
	ori      r6, r3, 0xb000
	sth      r5, -0x8000(r7)
	mulli    r3, r4, 9
	sth      r6, -0x8000(r7)
	stb      r0, -0x8000(r7)
	addi     r0, r3, 0x400
	clrlwi   r0, r0, 0x10
	sth      r5, -0x8000(r7)
	ori      r0, r0, 0x8000
	sth      r0, -0x8000(r7)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80086184
 * Size:	000060
 */
void J3DShapeMtx::loadMtxIndx_PCPU(int p1, u16 p2) const
{
	J3DFifoLoadPosMtxImm(*j3dSys.mShapePacket->mBaseMtxPtr, p1 * 3);
	j3dSys.loadNrmMtxIndx(p1, p2);
}

/*
 * --INFO--
 * Address:	800861E4
 * Size:	00004C
 */
void J3DShapeMtx::loadMtxIndx_NCPU(int p1, u16 p2) const
{
	j3dSys.loadPosMtxIndx(p1, p2);
	J3DFifoLoadNrmMtxImm(*j3dSys.mShapePacket->mBaseMtxPtr, p1 * 3);
}

/*
 * --INFO--
 * Address:	80086230
 * Size:	000058
 */
void J3DShapeMtx::loadMtxIndx_PNCPU(int p1, u16 p2) const
{
	J3DFifoLoadPosMtxImm(*j3dSys.mShapePacket->mBaseMtxPtr, p1 * 3);
	J3DFifoLoadNrmMtxImm(*j3dSys.mShapePacket->mBaseMtxPtr, p1 * 3);
}

/*
 * --INFO--
 * Address:	80086288
 * Size:	000588
 */
void J3DDifferedTexMtx::loadExecute(const float (*p1)[4])
{
	J3DShapePacket* tmo   = (J3DShapePacket*)sTexMtxObj;
	J3DTexGenBlock* block = sTexGenBlock;
	Mtx v88;
	Mtx* mtxToLoad;
	static Mtx qMtx  = { { 0.5f, 0.0f, 0.5f, 0.0f }, { 0.0f, -0.5f, 0.5f, 0.0f }, { 0.0f, 0.0f, 1.0f, 0.0f } };
	static Mtx qMtx2 = { { 0.5f, 0.0f, 0.0f, 0.5f }, { 0.0f, -0.5f, 0.0f, 0.5f }, { 0.0f, 0.0f, 1.0f, 0.0f } };

	if ((j3dSys.mFlags & 0x40000000) != 0) {

	} else {
		for (u16 i = 0; i < tmo->mUserArea; i++) {
			J3DTexMtx* blockTexMtx = block->getTexMtx(i);
			switch (blockTexMtx->mFlags & 0x3F) {
			case 3:
			case 9:
				PSMTXConcat(tmo->mBaseMtxPtr[i], p1, v88);
				mtxToLoad = &v88;
				break;
			case 1:
			case 6:
			case 7: {
				Mtx v152;
				PSMTXCopy(p1, v152);
				// zero-out the translation vector
				v152[2][3] = 0.0f;
				v152[1][3] = 0.0f;
				v152[0][3] = 0.0f;
				PSMTXConcat(tmo->mBaseMtxPtr[i], v152, v88);
				mtxToLoad = &v88;
				break;
			}
			case 2:
			case 8:
				mtxToLoad = tmo->mBaseMtxPtr + i;
				break;
			case 5: {
				Mtx v216;
				if ((blockTexMtx->mFlags & 0x80) == 0) {
					J3DGetTextureMtxOld(blockTexMtx->mSrtInfo, blockTexMtx->_04, v216);
				} else if ((blockTexMtx->mFlags & 0x80) == 1) {
					J3DGetTextureMtxMayaOld(blockTexMtx->mSrtInfo, v216);
				}
				J3DMtxProjConcat(v216, tmo->mBaseMtxPtr[i * 2], v88);
				Mtx v152;
				PSMTXInverse(j3dSys.mViewMtx, v152);
				PSMTXConcat(v88, v152, v88);
				PSMTXConcat(v88, p1, v88);
				mtxToLoad = &v88;
				v88[2][3] = 0.0f;
				v88[1][3] = 0.0f;
				v88[0][3] = 0.0f;
				break;
			}
			case 11: {
				Mtx v216;
				if ((blockTexMtx->mFlags & 0x80) == 0) {
					J3DGetTextureMtx(blockTexMtx->mSrtInfo, blockTexMtx->_04, v216);
				} else if ((blockTexMtx->mFlags & 0x80) == 1) {
					J3DGetTextureMtxMaya(blockTexMtx->mSrtInfo, v216);
				}
				PSMTXConcat(v216, qMtx, v216);
				J3DMtxProjConcat(v216, tmo->mBaseMtxPtr[i * 2], v88);
				Mtx v152;
				PSMTXInverse(j3dSys.mViewMtx, v152);
				PSMTXConcat(v88, v152, v88);
				PSMTXConcat(v88, p1, v88);
				mtxToLoad = &v88;
				v88[2][3] = 0.0f;
				v88[1][3] = 0.0f;
				v88[0][3] = 0.0f;
				break;
			}
			case 10: {
				Mtx v216;
				if ((blockTexMtx->mFlags & 0x80) == 0) {
					J3DGetTextureMtx(blockTexMtx->mSrtInfo, blockTexMtx->_04, v216);
				} else if ((blockTexMtx->mFlags & 0x80) == 1) {
					J3DGetTextureMtxMaya(blockTexMtx->mSrtInfo, v216);
				}
				PSMTXConcat(v216, qMtx2, v216);
				J3DMtxProjConcat(v216, tmo->mBaseMtxPtr[i * 2], v88);
				Mtx v152;
				PSMTXInverse(j3dSys.mViewMtx, v152);
				PSMTXConcat(v88, v152, v88);
				PSMTXConcat(v88, p1, v88);
				mtxToLoad = &v88;
				v88[2][3] = 0.0f;
				v88[1][3] = 0.0f;
				v88[0][3] = 0.0f;
				break;
			}
			case 0:
			case 4:
			default:
				mtxToLoad = tmo->mBaseMtxPtr + i;
				break;
			}
			GXLoadTexMtxImm(*mtxToLoad, i * 3 + 30, (GXTexMtxType)blockTexMtx->_00);
		}
	}
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	stw      r0, 0xe4(r1)
	addi     r4, r4, j3dSys@l
	stmw     r25, 0xc4(r1)
	mr       r25, r3
	lwz      r0, 0x34(r4)
	lwz      r28, sTexMtxObj__17J3DDifferedTexMtx@sda21(r13)
	rlwinm.  r0, r0, 0, 1, 1
	lwz      r31, sTexGenBlock__17J3DDifferedTexMtx@sda21(r13)
	lhz      r29, 8(r28)
	beq      lbl_80086538
	li       r27, 0
	b        lbl_80086528

lbl_800862C4:
	mr       r3, r31
	clrlwi   r30, r27, 0x10
	lwz      r12, 0(r31)
	mr       r4, r30
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lbz      r5, 1(r3)
	clrlwi   r0, r5, 0x1a
	cmplwi   r0, 0xb
	bgt      lbl_80086504
	lis      r3, lbl_804A2E48@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804A2E48@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_8008630C

lbl_8008630C:
	mulli    r0, r30, 0x30
	lwz      r3, 0(r28)
	add      r3, r3, r0
	b        lbl_80086510
	.global  lbl_8008631C

lbl_8008631C:
	mulli    r0, r30, 0x30
	lwz      r3, 0(r28)
	add      r3, r3, r0
	b        lbl_80086510
	.global  lbl_8008632C

lbl_8008632C:
	lis      r3, j3dSys@ha
	addi     r4, r1, 0x88
	addi     r3, r3, j3dSys@l
	bl       PSMTXInverse
	mulli    r0, r30, 0x30
	lwz      r3, 0(r28)
	addi     r4, r1, 0x88
	mr       r5, r4
	add      r3, r3, r0
	bl       PSMTXConcat
	addi     r3, r1, 0x88
	b        lbl_80086510
	.global  lbl_8008635C

lbl_8008635C:
	rlwinm.  r0, r5, 0x19, 0x1f, 0x1f
	bne      lbl_80086378
	addi     r3, r4, 0x10
	addi     r4, r4, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_8008638C

lbl_80086378:
	cmplwi   r0, 1
	bne      lbl_8008638C
	addi     r3, r4, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f

lbl_8008638C:
	lwz      r4, 4(r28)
	slwi     r0, r30, 6
	addi     r3, r1, 8
	addi     r5, r1, 0x88
	add      r4, r4, r0
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	lis      r3, j3dSys@ha
	addi     r4, r1, 0x48
	addi     r3, r3, j3dSys@l
	bl       PSMTXInverse
	addi     r3, r1, 0x88
	addi     r4, r1, 0x48
	mr       r5, r3
	bl       PSMTXConcat
	lfs      f0, lbl_80516AE8@sda21(r2)
	addi     r3, r1, 0x88
	stfs     f0, 0xb4(r1)
	stfs     f0, 0xa4(r1)
	stfs     f0, 0x94(r1)
	b        lbl_80086510
	.global  lbl_800863DC

lbl_800863DC:
	rlwinm.  r0, r5, 0x19, 0x1f, 0x1f
	bne      lbl_800863F8
	addi     r3, r4, 0x10
	addi     r4, r4, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_8008640C

lbl_800863F8:
	cmplwi   r0, 1
	bne      lbl_8008640C
	addi     r3, r4, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f

lbl_8008640C:
	lis      r4, qMtx$1532@ha
	addi     r3, r1, 8
	addi     r4, r4, qMtx$1532@l
	mr       r5, r3
	bl       PSMTXConcat
	lwz      r4, 4(r28)
	slwi     r0, r30, 6
	addi     r3, r1, 8
	addi     r5, r1, 0x88
	add      r4, r4, r0
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	lis      r3, j3dSys@ha
	addi     r4, r1, 0x48
	addi     r3, r3, j3dSys@l
	bl       PSMTXInverse
	addi     r3, r1, 0x88
	addi     r4, r1, 0x48
	mr       r5, r3
	bl       PSMTXConcat
	lfs      f0, lbl_80516AE8@sda21(r2)
	addi     r3, r1, 0x88
	stfs     f0, 0xb4(r1)
	stfs     f0, 0xa4(r1)
	stfs     f0, 0x94(r1)
	b        lbl_80086510
	.global  lbl_80086470

lbl_80086470:
	rlwinm.  r0, r5, 0x19, 0x1f, 0x1f
	bne      lbl_8008648C
	addi     r3, r4, 0x10
	addi     r4, r4, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_800864A0

lbl_8008648C:
	cmplwi   r0, 1
	bne      lbl_800864A0
	addi     r3, r4, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f

lbl_800864A0:
	lis      r4, qMtx2$1533@ha
	addi     r3, r1, 8
	addi     r4, r4, qMtx2$1533@l
	mr       r5, r3
	bl       PSMTXConcat
	lwz      r4, 4(r28)
	slwi     r0, r30, 6
	addi     r3, r1, 8
	addi     r5, r1, 0x88
	add      r4, r4, r0
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	lis      r3, j3dSys@ha
	addi     r4, r1, 0x48
	addi     r3, r3, j3dSys@l
	bl       PSMTXInverse
	addi     r3, r1, 0x88
	addi     r4, r1, 0x48
	mr       r5, r3
	bl       PSMTXConcat
	lfs      f0, lbl_80516AE8@sda21(r2)
	addi     r3, r1, 0x88
	stfs     f0, 0xb4(r1)
	stfs     f0, 0xa4(r1)
	stfs     f0, 0x94(r1)
	b        lbl_80086510
	.global  lbl_80086504

lbl_80086504:
	mulli    r0, r30, 0x30
	lwz      r3, 0(r28)
	add      r3, r3, r0

lbl_80086510:
	clrlwi   r0, r27, 0x10
	li       r5, 0
	mulli    r4, r0, 3
	addi     r4, r4, 0x40
	bl       GXLoadTexMtxImm
	addi     r27, r27, 1

lbl_80086528:
	clrlwi   r0, r27, 0x10
	cmplw    r0, r29
	blt      lbl_800862C4
	b        lbl_800867FC

lbl_80086538:
	li       r26, 0
	b        lbl_800867F0

lbl_80086540:
	mr       r3, r31
	clrlwi   r27, r26, 0x10
	lwz      r12, 0(r31)
	mr       r4, r27
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	lbz      r4, 1(r3)
	clrlwi   r0, r4, 0x1a
	cmplwi   r0, 0xb
	bgt      lbl_800867CC
	lis      r3, lbl_804A2E18@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804A2E18@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80086588

lbl_80086588:
	mulli    r0, r27, 0x30
	lwz      r3, 0(r28)
	mr       r4, r25
	addi     r5, r1, 0x88
	add      r3, r3, r0
	bl       PSMTXConcat
	addi     r3, r1, 0x88
	b        lbl_800867D8
	.global  lbl_800865A8

lbl_800865A8:
	mr       r3, r25
	addi     r4, r1, 0x48
	bl       PSMTXCopy
	lfs      f0, lbl_80516AE8@sda21(r2)
	mulli    r0, r27, 0x30
	addi     r4, r1, 0x48
	stfs     f0, 0x74(r1)
	addi     r5, r1, 0x88
	stfs     f0, 0x64(r1)
	stfs     f0, 0x54(r1)
	lwz      r3, 0(r28)
	add      r3, r3, r0
	bl       PSMTXConcat
	addi     r3, r1, 0x88
	b        lbl_800867D8
	.global  lbl_800865E4

lbl_800865E4:
	mulli    r0, r27, 0x30
	lwz      r3, 0(r28)
	add      r3, r3, r0
	b        lbl_800867D8
	.global  lbl_800865F4

lbl_800865F4:
	rlwinm.  r0, r4, 0x19, 0x1f, 0x1f
	bne      lbl_80086610
	addi     r3, r30, 0x10
	addi     r4, r30, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80086624

lbl_80086610:
	cmplwi   r0, 1
	bne      lbl_80086624
	addi     r3, r30, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f

lbl_80086624:
	lwz      r4, 4(r28)
	slwi     r0, r27, 6
	addi     r3, r1, 8
	addi     r5, r1, 0x88
	add      r4, r4, r0
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	lis      r3, j3dSys@ha
	addi     r4, r1, 0x48
	addi     r3, r3, j3dSys@l
	bl       PSMTXInverse
	addi     r3, r1, 0x88
	addi     r4, r1, 0x48
	mr       r5, r3
	bl       PSMTXConcat
	addi     r3, r1, 0x88
	mr       r4, r25
	mr       r5, r3
	bl       PSMTXConcat
	lfs      f0, lbl_80516AE8@sda21(r2)
	addi     r3, r1, 0x88
	stfs     f0, 0xb4(r1)
	stfs     f0, 0xa4(r1)
	stfs     f0, 0x94(r1)
	b        lbl_800867D8
	.global  lbl_80086684

lbl_80086684:
	rlwinm.  r0, r4, 0x19, 0x1f, 0x1f
	bne      lbl_800866A0
	addi     r3, r30, 0x10
	addi     r4, r30, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_800866B4

lbl_800866A0:
	cmplwi   r0, 1
	bne      lbl_800866B4
	addi     r3, r30, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f

lbl_800866B4:
	lis      r4, qMtx$1532@ha
	addi     r3, r1, 8
	addi     r4, r4, qMtx$1532@l
	mr       r5, r3
	bl       PSMTXConcat
	lwz      r4, 4(r28)
	slwi     r0, r27, 6
	addi     r3, r1, 8
	addi     r5, r1, 0x88
	add      r4, r4, r0
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	lis      r3, j3dSys@ha
	addi     r4, r1, 0x48
	addi     r3, r3, j3dSys@l
	bl       PSMTXInverse
	addi     r3, r1, 0x88
	addi     r4, r1, 0x48
	mr       r5, r3
	bl       PSMTXConcat
	addi     r3, r1, 0x88
	mr       r4, r25
	mr       r5, r3
	bl       PSMTXConcat
	lfs      f0, lbl_80516AE8@sda21(r2)
	addi     r3, r1, 0x88
	stfs     f0, 0xb4(r1)
	stfs     f0, 0xa4(r1)
	stfs     f0, 0x94(r1)
	b        lbl_800867D8
	.global  lbl_80086728

lbl_80086728:
	rlwinm.  r0, r4, 0x19, 0x1f, 0x1f
	bne      lbl_80086744
	addi     r3, r30, 0x10
	addi     r4, r30, 4
	addi     r5, r1, 8
	bl       J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f
	b        lbl_80086758

lbl_80086744:
	cmplwi   r0, 1
	bne      lbl_80086758
	addi     r3, r30, 0x10
	addi     r4, r1, 8
	bl       J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f

lbl_80086758:
	lis      r4, qMtx2$1533@ha
	addi     r3, r1, 8
	addi     r4, r4, qMtx2$1533@l
	mr       r5, r3
	bl       PSMTXConcat
	lwz      r4, 4(r28)
	slwi     r0, r27, 6
	addi     r3, r1, 8
	addi     r5, r1, 0x88
	add      r4, r4, r0
	bl       J3DMtxProjConcat__FPA4_fPA4_fPA4_f
	lis      r3, j3dSys@ha
	addi     r4, r1, 0x48
	addi     r3, r3, j3dSys@l
	bl       PSMTXInverse
	addi     r3, r1, 0x88
	addi     r4, r1, 0x48
	mr       r5, r3
	bl       PSMTXConcat
	addi     r3, r1, 0x88
	mr       r4, r25
	mr       r5, r3
	bl       PSMTXConcat
	lfs      f0, lbl_80516AE8@sda21(r2)
	addi     r3, r1, 0x88
	stfs     f0, 0xb4(r1)
	stfs     f0, 0xa4(r1)
	stfs     f0, 0x94(r1)
	b        lbl_800867D8
	.global  lbl_800867CC

lbl_800867CC:
	mulli    r0, r27, 0x30
	lwz      r3, 0(r28)
	add      r3, r3, r0

lbl_800867D8:
	clrlwi   r0, r26, 0x10
	lbz      r5, 0(r30)
	mulli    r4, r0, 3
	addi     r4, r4, 0x1e
	bl       GXLoadTexMtxImm
	addi     r26, r26, 1

lbl_800867F0:
	clrlwi   r0, r26, 0x10
	cmplw    r0, r29
	blt      lbl_80086540

lbl_800867FC:
	lmw      r25, 0xc4(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80086810
 * Size:	0000A8
 */
void J3DShapeMtxConcatView::loadMtxConcatView_PNGP(int p1, u16 p2) const
{
	Mtx v1;
	PSMTXConcat(*j3dSys.mShapePacket->mBaseMtxPtr, j3dSys.mModelDrawMtx[p2], v1);
	if (J3DDifferedTexMtx::sTexGenBlock != nullptr) {
		J3DDifferedTexMtx::loadExecute(v1);
	}
	J3DFifoLoadPosMtxImm(v1, p1 * 3);
	loadNrmMtx(p1, p2, v1);
}

/*
 * --INFO--
 * Address:	800868B8
 * Size:	0000B4
 */
void J3DShapeMtxConcatView::loadMtxConcatView_PCPU(int p1, u16 p2) const
{
	Mtx v1;
	PSMTXConcat(*j3dSys.mShapePacket->mBaseMtxPtr, j3dSys.mModelDrawMtx[p2], v1);
	if (J3DDifferedTexMtx::sTexGenBlock != nullptr) {
		J3DDifferedTexMtx::loadExecute(v1);
	}
	J3DFifoLoadPosMtxImm(*j3dSys.mShapePacket->mBaseMtxPtr, p1 * 3);
	loadNrmMtx(p1, p2, v1);
}

/*
 * --INFO--
 * Address:	8008696C
 * Size:	0000A8
 */
void J3DShapeMtxConcatView::loadMtxConcatView_NCPU(int p1, u16 p2) const
{
	Mtx v1;
	PSMTXConcat(*j3dSys.mShapePacket->mBaseMtxPtr, j3dSys.mModelDrawMtx[p2], v1);
	if (J3DDifferedTexMtx::sTexGenBlock != nullptr) {
		J3DDifferedTexMtx::loadExecute(v1);
	}
	J3DFifoLoadPosMtxImm(v1, p1 * 3);
	J3DFifoLoadNrmMtxImm(*j3dSys.mShapePacket->mBaseMtxPtr, p1 * 3);
	if (sTexMtxLoadType == 0x2000) {
		J3DFifoLoadNrmMtxToTexMtx(*j3dSys.mShapePacket->mBaseMtxPtr, p1 * 3 + 0x1E);
	}
}

/*
 * --INFO--
 * Address:	80086A14
 * Size:	0000B4
 */
void J3DShapeMtxConcatView::loadMtxConcatView_PNCPU(int p1, u16 p2) const
{
	if (J3DDifferedTexMtx::sTexGenBlock != nullptr) {
		Mtx v1;
		PSMTXConcat(*j3dSys.mShapePacket->mBaseMtxPtr, j3dSys.mModelDrawMtx[p2], v1);
		J3DDifferedTexMtx::loadExecute(v1);
	}
	J3DFifoLoadPosMtxImm(*j3dSys.mShapePacket->mBaseMtxPtr, p1 * 3);
	J3DFifoLoadNrmMtxImm(*j3dSys.mShapePacket->mBaseMtxPtr, p1 * 3);
	if (sTexMtxLoadType == 0x2000) {
		J3DFifoLoadNrmMtxToTexMtx(*j3dSys.mShapePacket->mBaseMtxPtr, p1 * 3 + 0x1E);
	}
}

/*
 * --INFO--
 * Address:	80086AC8
 * Size:	0000D4
 */
void J3DShapeMtxConcatView::loadMtxConcatView_PNGP_LOD(int p1, u16 p2) const
{
	Mtx v1;
	PSMTXConcat(*j3dSys.mShapePacket->mBaseMtxPtr, j3dSys.mModelDrawMtx[p2], v1);
	PSMTXConcat(v1, j3dSys.mModel->mModelData->mJointTree.mInvJointMtx[p2], v1);
	if (J3DDifferedTexMtx::sTexGenBlock != nullptr) {
		J3DDifferedTexMtx::loadExecute(v1);
	}
	J3DFifoLoadPosMtxImm(v1, p1 * 3);
	loadNrmMtx(p1, p2, v1);

	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r5
	  lis       r5, 0x8051
	  stw       r30, 0x48(r1)
	  rlwinm    r0,r31,0,16,31
	  subi      r5, r5, 0xDD0
	  mr        r30, r4
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  mulli     r0, r0, 0x30
	  lwz       r3, 0x40(r5)
	  lwz       r6, 0x104(r5)
	  addi      r5, r1, 0x8
	  lwz       r3, 0x30(r3)
	  add       r4, r6, r0
	  bl        0x637F0
	  lis       r3, 0x8051
	  rlwinm    r0,r31,0,16,31
	  subi      r4, r3, 0xDD0
	  addi      r3, r1, 0x8
	  lwz       r4, 0x38(r4)
	  mulli     r0, r0, 0x30
	  mr        r5, r3
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x3C(r4)
	  add       r4, r4, r0
	  bl        0x637C4
	  lwz       r0, -0x7640(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x8C
	  addi      r3, r1, 0x8
	  bl        -0x8C8

	.loc_0x8C:
	  mulli     r4, r30, 0x3
	  addi      r3, r1, 0x8
	  bl        -0xFCA4
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  mr        r5, r31
	  addi      r6, r1, 0x8
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086B9C
 * Size:	00005C
 */
void J3DShapeMtx::load() const
{
	LoadMtxIndxFunction function = sMtxLoadPipeline[sCurrentPipeline];
	(this->*function)(0, mUseMtxIndex);
}

/*
 * --INFO--
 * Address:	80086BF8
 * Size:	000064
 */
void J3DShapeMtx::calcNBTScale(const Vec& p1, Mtx33 p2, Mtx33 p3)
{
	J3DPSMtx33Copy((p2 + mUseMtxIndex), (p3 + mUseMtxIndex));
	J3DScaleNrmMtx33((p3 + mUseMtxIndex), p1);
}

/*
 * --INFO--
 * Address:	80086C5C
 * Size:	0000D4
 */
void J3DShapeMtxConcatView::load() const
{
	sMtxPtrTbl[0]                      = j3dSys.mModel->mMtxBuffer->mWorldMatrices;
	sMtxPtrTbl[1]                      = j3dSys.mModel->mMtxBuffer->mWeightEnvelopeMatrices;
	LoadMtxConcatViewFunction function = sMtxLoadPipeline[sCurrentPipeline];
	j3dSys.mModelDrawMtx               = sMtxPtrTbl[j3dSys.mModel->mModelData->mJointTree.mMtxData.mDrawMtxFlag[mUseMtxIndex]];
	GXSetArray(GX_POS_MTX_ARRAY, j3dSys.mModelDrawMtx, sizeof(Mtx));
	(this->*function)(0, j3dSys.mModel->mModelData->mJointTree.mMtxData.mDrawMtxIdx[mUseMtxIndex]);
}

/*
 * --INFO--
 * Address:	80086D30
 * Size:	000124
 */
void J3DShapeMtxConcatView::loadNrmMtx(int, u16, float (*)[4]) const
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	clrlwi   r0, r5, 0x10
	stw      r31, 0x5c(r1)
	mr       r31, r6
	lwz      r3, sCurrentScaleFlag__11J3DShapeMtx@sda21(r13)
	lbzx     r0, r3, r0
	cmplwi   r0, 1
	bne      lbl_80086DE0
	lwz      r0, sTexMtxLoadType__11J3DShapeMtx@sda21(r13)
	cmplwi   r0, 0x2000
	bne      lbl_80086D70
	mr       r3, r31
	li       r4, 0x1e
	bl       J3DFifoLoadNrmMtxToTexMtx__FPA4_fUl

lbl_80086D70:
	lbz      r0, sNBTFlag__11J3DShapeMtx@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80086D8C
	mr       r3, r31
	li       r4, 0
	bl       J3DFifoLoadNrmMtxImm__FPA4_fUl
	b        lbl_80086E40

lbl_80086D8C:
	lis      r4, j3dSys@ha
	psq_l    f5, 0(r31), 0, qr0
	addi     r4, r4, j3dSys@l
	lfs      f4, 8(r31)
	psq_l    f3, 16(r31), 0, qr0
	addi     r3, r1, 0x2c
	lfs      f2, 0x18(r31)
	psq_l    f1, 32(r31), 0, qr0
	lfs      f0, 0x28(r31)
	lwz      r4, 0x118(r4)
	psq_st   f5, 0(r3), 0, qr0
	stfs     f4, 0x34(r1)
	psq_st   f3, 12(r3), 0, qr0
	stfs     f2, 0x40(r1)
	psq_st   f1, 24(r3), 0, qr0
	stfs     f0, 0x4c(r1)
	bl       J3DScaleNrmMtx33__FPA3_fRC3Vec
	addi     r3, r1, 0x2c
	li       r4, 0
	bl       J3DFifoLoadNrmMtxImm3x3__FPA3_fUl
	b        lbl_80086E40

lbl_80086DE0:
	mr       r3, r31
	addi     r4, r1, 8
	bl       J3DPSCalcInverseTranspose__FPA4_fPA3_f
	lwz      r0, sTexMtxLoadType__11J3DShapeMtx@sda21(r13)
	cmplwi   r0, 0x2000
	bne      lbl_80086E04
	addi     r3, r1, 8
	li       r4, 0x1e
	bl       J3DFifoLoadNrmMtxToTexMtx3x3__FPA3_fUl

lbl_80086E04:
	lbz      r0, sNBTFlag__11J3DShapeMtx@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80086E20
	addi     r3, r1, 8
	li       r4, 0
	bl       J3DFifoLoadNrmMtxImm3x3__FPA3_fUl
	b        lbl_80086E40

lbl_80086E20:
	lis      r4, j3dSys@ha
	addi     r3, r1, 8
	addi     r4, r4, j3dSys@l
	lwz      r4, 0x118(r4)
	bl       J3DScaleNrmMtx33__FPA3_fRC3Vec
	addi     r3, r1, 8
	li       r4, 0
	bl       J3DFifoLoadNrmMtxImm3x3__FPA3_fUl

lbl_80086E40:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80086E54
 * Size:	0000AC
 */
void J3DShapeMtxMulti::load() const
{
	LoadMtxIndxFunction function = sMtxLoadPipeline[sCurrentPipeline];
	u16 count                    = mUseMtxNum;
	for (int i = 0; i < count; i++) {
		if (mUseMtxIndexTable[i] != 0xFFFF) {
			(this->*function)(i, mUseMtxIndexTable[i]);
		}
	}
}

/*
 * --INFO--
 * Address:	80086F00
 * Size:	0000B0
 */
void J3DShapeMtxMulti::calcNBTScale(const Vec& p1, Mtx33 p2, Mtx33 p3)
{
	u16 count = mUseMtxNum;
	for (int i = 0; i < count; i++) {
		if (mUseMtxIndexTable[i] != 0xFFFF) {
			J3DPSMtx33Copy((p2 + mUseMtxIndexTable[i]), (p3 + mUseMtxIndexTable[i]));
			J3DScaleNrmMtx33((p3 + mUseMtxIndexTable[i]), p1);
		}
	}
}

/*
 * --INFO--
 * Address:	80086FB0
 * Size:	0001EC
 */
void J3DShapeMtxMultiConcatView::load() const
{
	sMtxPtrTbl[0] = j3dSys.mModel->mMtxBuffer->mWorldMatrices;
	sMtxPtrTbl[1] = j3dSys.mModel->mMtxBuffer->mWeightEnvelopeMatrices;
	if (sLODFlag == false) {
		LoadMtxConcatViewFunction function = sMtxLoadPipeline[sCurrentPipeline];
		u16 count                          = mUseMtxNum;
		for (int i = 0; i < count; i++) {
			if (mUseMtxIndexTable[i] != 0xFFFF) {
				j3dSys.mModelDrawMtx = sMtxPtrTbl[j3dSys.mModel->mModelData->mJointTree.mMtxData.mDrawMtxFlag[mUseMtxIndexTable[i]]];
				GXSetArray(GX_POS_MTX_ARRAY, j3dSys.mModelDrawMtx, sizeof(Mtx));
				(this->*function)(i, mUseMtxIndexTable[i]);
			}
		}
	} else {
		u16* v1              = j3dSys.mModel->mModelData->mJointTree.mEnvelopeImptIdx;
		j3dSys.mModelDrawMtx = sMtxPtrTbl[0];
		GXSetArray(GX_POS_MTX_ARRAY, sMtxPtrTbl[0], sizeof(Mtx));
		u16 count = mUseMtxNum;
		for (int i = 0; i < count; i++) {
			LoadMtxConcatViewFunction function = sMtxLoadLODPipeline[sCurrentPipeline];
			u16 v2                             = mUseMtxIndexTable[i];
			if (v2 != 0xFFFF && v1[v2] != sMtxLoadCache[i]) {
				if (j3dSys.mModel->mModelData->mJointTree.mMtxData.mDrawMtxFlag[v2] == 0) {
					function = sMtxLoadPipeline[sCurrentPipeline];
				}
				(this->*function)(i, v2);
				sMtxLoadCache[i] = v1[v2];
			}
		}
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r4, j3dSys@ha
	addi     r5, r13, sMtxPtrTbl__21J3DShapeMtxConcatView@sda21
	stw      r0, 0x54(r1)
	stmw     r23, 0x2c(r1)
	addi     r30, r4, j3dSys@l
	mr       r24, r3
	lwz      r6, 0x38(r30)
	lbz      r0, sLODFlag__11J3DShapeMtx@sda21(r13)
	lwz      r3, 0x84(r6)
	cmplwi   r0, 0
	lwz      r4, 0xc(r3)
	stw      r4, sMtxPtrTbl__21J3DShapeMtxConcatView@sda21(r13)
	lwz      r0, 0x10(r3)
	stw      r0, 4(r5)
	bne      lbl_800870A0
	lwz      r4, sCurrentPipeline__11J3DShapeMtx@sda21(r13)
	lis      r3, sMtxLoadPipeline__21J3DShapeMtxConcatView@ha
	addi     r0, r3, sMtxLoadPipeline__21J3DShapeMtxConcatView@l
	lwz      r23, 0xc(r24)
	mulli    r3, r4, 0xc
	lhz      r28, 8(r24)
	li       r29, 0
	add      r5, r0, r3
	lwz      r4, 0(r5)
	lwz      r3, 4(r5)
	lwz      r0, 8(r5)
	stw      r4, 0x14(r1)
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)
	b        lbl_80087094

lbl_80087030:
	lhz      r0, 0(r23)
	cmplwi   r0, 0xffff
	beq      lbl_8008708C
	lwz      r5, 0x38(r30)
	rlwinm   r7, r0, 1, 0xf, 0x1e
	addi     r4, r13, sMtxPtrTbl__21J3DShapeMtxConcatView@sda21
	li       r3, 0x15
	lwz      r8, 4(r5)
	li       r5, 0x30
	lwz      r6, 0x48(r8)
	lwz      r8, 0x4c(r8)
	lbzx     r0, r6, r0
	lhzx     r25, r8, r7
	slwi     r0, r0, 2
	lwzx     r4, r4, r0
	stw      r4, 0x104(r30)
	bl       GXSetArray
	mr       r3, r24
	mr       r4, r29
	mr       r5, r25
	addi     r12, r1, 0x14
	bl       __ptmf_scall
	nop

lbl_8008708C:
	addi     r23, r23, 2
	addi     r29, r29, 1

lbl_80087094:
	cmpw     r29, r28
	blt      lbl_80087030
	b        lbl_80087188

lbl_800870A0:
	lwz      r6, 4(r6)
	li       r3, 0x15
	li       r5, 0x30
	lwz      r29, 0x40(r6)
	stw      r4, 0x104(r30)
	bl       GXSetArray
	lis      r3, sMtxLoadCache__11J3DShapeMtx@ha
	lwz      r23, 0xc(r24)
	addi     r28, r3, sMtxLoadCache__11J3DShapeMtx@l
	lhz      r27, 8(r24)
	lis      r3, sMtxLoadLODPipeline__21J3DShapeMtxConcatView@ha
	li       r26, 0
	addi     r31, r3, sMtxLoadLODPipeline__21J3DShapeMtxConcatView@l
	b        lbl_80087180

lbl_800870D8:
	lwz      r0, sCurrentPipeline__11J3DShapeMtx@sda21(r13)
	mulli    r6, r0, 0xc
	add      r5, r31, r6
	lwz      r4, 0(r5)
	lwz      r3, 4(r5)
	lwz      r0, 8(r5)
	stw      r4, 8(r1)
	stw      r3, 0xc(r1)
	stw      r0, 0x10(r1)
	lhz      r4, 0(r23)
	cmplwi   r4, 0xffff
	beq      lbl_80087174
	rlwinm   r3, r4, 1, 0xf, 0x1e
	lhz      r0, 0(r28)
	lhzx     r25, r29, r3
	cmplw    r25, r0
	beq      lbl_80087174
	lwz      r3, 0x38(r30)
	lwz      r3, 4(r3)
	lwz      r3, 0x48(r3)
	lbzx     r0, r3, r4
	cmplwi   r0, 0
	bne      lbl_80087158
	lis      r3, sMtxLoadPipeline__21J3DShapeMtxConcatView@ha
	addi     r0, r3, sMtxLoadPipeline__21J3DShapeMtxConcatView@l
	add      r5, r0, r6
	lwz      r4, 0(r5)
	lwz      r3, 4(r5)
	lwz      r0, 8(r5)
	stw      r4, 8(r1)
	stw      r3, 0xc(r1)
	stw      r0, 0x10(r1)

lbl_80087158:
	mr       r3, r24
	mr       r4, r26
	mr       r5, r25
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop
	sth      r25, 0(r28)

lbl_80087174:
	addi     r23, r23, 2
	addi     r28, r28, 2
	addi     r26, r26, 1

lbl_80087180:
	cmpw     r26, r27
	blt      lbl_800870D8

lbl_80087188:
	lmw      r23, 0x2c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008719C
 * Size:	000138
 */
void J3DShapeMtxMultiConcatView::loadNrmMtx(int, u16, Mtx*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  rlwinm    r0,r5,0,16,31
	  stw       r31, 0x5C(r1)
	  mr        r31, r6
	  stw       r30, 0x58(r1)
	  mr        r30, r4
	  lwz       r3, -0x7654(r13)
	  lbzx      r0, r3, r0
	  cmplwi    r0, 0x1
	  bne-      .loc_0xBC
	  lwz       r0, -0x764C(r13)
	  cmplwi    r0, 0x2000
	  bne-      .loc_0x4C
	  mulli     r4, r30, 0x3
	  mr        r3, r31
	  addi      r4, r4, 0x1E
	  bl        -0x101D4

	.loc_0x4C:
	  lbz       r0, -0x7650(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  mulli     r4, r30, 0x3
	  mr        r3, r31
	  bl        -0x102C4
	  b         .loc_0x120

	.loc_0x68:
	  lis       r4, 0x8051
	  psq_l     f5,0x0(r31),0,0
	  subi      r4, r4, 0xDD0
	  lfs       f4, 0x8(r31)
	  psq_l     f3,0x10(r31),0,0
	  addi      r3, r1, 0x2C
	  lfs       f2, 0x18(r31)
	  psq_l     f1,0x20(r31),0,0
	  lfs       f0, 0x28(r31)
	  lwz       r4, 0x118(r4)
	  psq_st    f5,0x0(r3),0,0
	  stfs      f4, 0x34(r1)
	  psq_st    f3,0xC(r3),0,0
	  stfs      f2, 0x40(r1)
	  psq_st    f1,0x18(r3),0,0
	  stfs      f0, 0x4C(r1)
	  bl        -0x27C6C
	  addi      r3, r1, 0x2C
	  li        r4, 0
	  bl        -0x102AC
	  b         .loc_0x120

	.loc_0xBC:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x281BC
	  lwz       r0, -0x764C(r13)
	  cmplwi    r0, 0x2000
	  bne-      .loc_0xE4
	  mulli     r4, r30, 0x3
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x1E
	  bl        -0x101D4

	.loc_0xE4:
	  lbz       r0, -0x7650(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x100
	  mulli     r4, r30, 0x3
	  addi      r3, r1, 0x8
	  bl        -0x102F0
	  b         .loc_0x120

	.loc_0x100:
	  lis       r4, 0x8051
	  addi      r3, r1, 0x8
	  subi      r4, r4, 0xDD0
	  lwz       r4, 0x118(r4)
	  bl        -0x27CD4
	  mulli     r4, r30, 0x3
	  addi      r3, r1, 0x8
	  bl        -0x10314

	.loc_0x120:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800872D4
 * Size:	000134
 */
void J3DShapeMtxBBoardConcatView::load() const
{
	Mtx v1;
	u16 v2 = j3dSys.mModel->mModelData->mJointTree.mMtxData.mDrawMtxIdx[mUseMtxIndex];
	if (j3dSys.mModel->mModelData->mJointTree.mMtxData.mDrawMtxFlag[mUseMtxIndex] == 0) {
		PSMTXConcat(j3dSys.mViewMtx, j3dSys.mModel->mMtxBuffer->mWorldMatrices[v2], v1);
	} else {
		PSMTXConcat(j3dSys.mViewMtx, j3dSys.mModel->mMtxBuffer->mWeightEnvelopeMatrices[v2], v1);
	}
	J3DCalcBBoardMtx(v1);
	J3DFifoLoadPosMtxImm(v1, 0);
	if (v1[0][0] != 0.0f) {
		v1[0][0] = 1.0f / v1[0][0];
	}
	if (v1[1][1] != 0.0f) {
		v1[1][1] = 1.0f / v1[1][1];
	}
	if (v1[2][2] != 0.0f) {
		v1[2][2] = 1.0f / v1[2][2];
	}
	v1[0][3] = 0.0f;
	v1[1][3] = 0.0f;
	v1[2][3] = 0.0f;
	if (sNBTFlag == false) {
		J3DFifoLoadNrmMtxImm(v1, 0);
	} else {
		J3DScaleNrmMtx(v1, *j3dSys.mNBTScale);
		J3DFifoLoadNrmMtxImm(v1, 0);
	}
}

/*
 * --INFO--
 * Address:	80087408
 * Size:	00013C
 */
void J3DShapeMtxYBBoardConcatView::load() const
{
	Mtx v1;
	u16 v2 = j3dSys.mModel->mModelData->mJointTree.mMtxData.mDrawMtxIdx[mUseMtxIndex];
	if (j3dSys.mModel->mModelData->mJointTree.mMtxData.mDrawMtxFlag[mUseMtxIndex] == 0) {
		PSMTXConcat(j3dSys.mViewMtx, j3dSys.mModel->mMtxBuffer->mWorldMatrices[v2], v1);
	} else {
		PSMTXConcat(j3dSys.mViewMtx, j3dSys.mModel->mMtxBuffer->mWeightEnvelopeMatrices[v2], v1);
	}
	J3DCalcYBBoardMtx(v1);
	J3DFifoLoadPosMtxImm(v1, 0);
	if (sCurrentScaleFlag[mUseMtxIndex] == 1) {
		if (sNBTFlag == false) {
			J3DFifoLoadNrmMtxImm(v1, 0);
		} else {
			J3DScaleNrmMtx(v1, *j3dSys.mNBTScale);
			J3DFifoLoadNrmMtxImm(v1, 0);
		}
	} else {
		Mtx33 v3;
		J3DPSCalcInverseTranspose(v1, v3);
		if (sNBTFlag == false) {
			J3DFifoLoadNrmMtxImm3x3(v3, 0);
		} else {
			J3DScaleNrmMtx33(v3, *j3dSys.mNBTScale);
			J3DFifoLoadNrmMtxImm3x3(v3, 0);
		}
	}
}

/*
 * --INFO--
 * Address:	80087544
 * Size:	00006C
 */
// J3DShapeMtxYBBoardConcatView::~J3DShapeMtxYBBoardConcatView()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	or.      r31, r3, r3
// 	beq      lbl_80087598
// 	lis      r3, __vt__28J3DShapeMtxYBBoardConcatView@ha
// 	addi     r0, r3, __vt__28J3DShapeMtxYBBoardConcatView@l
// 	stw      r0, 0(r31)
// 	beq      lbl_80087588
// 	lis      r3, __vt__21J3DShapeMtxConcatView@ha
// 	addi     r0, r3, __vt__21J3DShapeMtxConcatView@l
// 	stw      r0, 0(r31)
// 	beq      lbl_80087588
// 	lis      r3, __vt__11J3DShapeMtx@ha
// 	addi     r0, r3, __vt__11J3DShapeMtx@l
// 	stw      r0, 0(r31)

// lbl_80087588:
// 	extsh.   r0, r4
// 	ble      lbl_80087598
// 	mr       r3, r31
// 	bl       __dl__FPv

// lbl_80087598:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r31
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	800875B0
 * Size:	00000C
 */
// int J3DShapeMtxYBBoardConcatView::getType() const { return 'SMYB'; }

/*
 * --INFO--
 * Address:	800875BC
 * Size:	000004
 */
void J3DShapeMtxConcatView::loadNrmMtx(int, u16) const { }

/*
 * --INFO--
 * Address:	800875C0
 * Size:	00006C
 */
// J3DShapeMtxBBoardConcatView::~J3DShapeMtxBBoardConcatView()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	or.      r31, r3, r3
// 	beq      lbl_80087614
// 	lis      r3, __vt__27J3DShapeMtxBBoardConcatView@ha
// 	addi     r0, r3, __vt__27J3DShapeMtxBBoardConcatView@l
// 	stw      r0, 0(r31)
// 	beq      lbl_80087604
// 	lis      r3, __vt__21J3DShapeMtxConcatView@ha
// 	addi     r0, r3, __vt__21J3DShapeMtxConcatView@l
// 	stw      r0, 0(r31)
// 	beq      lbl_80087604
// 	lis      r3, __vt__11J3DShapeMtx@ha
// 	addi     r0, r3, __vt__11J3DShapeMtx@l
// 	stw      r0, 0(r31)

// lbl_80087604:
// 	extsh.   r0, r4
// 	ble      lbl_80087614
// 	mr       r3, r31
// 	bl       __dl__FPv

// lbl_80087614:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r31
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8008762C
 * Size:	00000C
 */
// int J3DShapeMtxBBoardConcatView::getType() const { return 'SMBB'; }

/*
 * --INFO--
 * Address:	80087638
 * Size:	00006C
 */
// J3DShapeMtxMultiConcatView::~J3DShapeMtxMultiConcatView()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	or.      r31, r3, r3
// 	beq      lbl_8008768C
// 	lis      r3, __vt__26J3DShapeMtxMultiConcatView@ha
// 	addi     r0, r3, __vt__26J3DShapeMtxMultiConcatView@l
// 	stw      r0, 0(r31)
// 	beq      lbl_8008767C
// 	lis      r3, __vt__21J3DShapeMtxConcatView@ha
// 	addi     r0, r3, __vt__21J3DShapeMtxConcatView@l
// 	stw      r0, 0(r31)
// 	beq      lbl_8008767C
// 	lis      r3, __vt__11J3DShapeMtx@ha
// 	addi     r0, r3, __vt__11J3DShapeMtx@l
// 	stw      r0, 0(r31)

// lbl_8008767C:
// 	extsh.   r0, r4
// 	ble      lbl_8008768C
// 	mr       r3, r31
// 	bl       __dl__FPv

// lbl_8008768C:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r31
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	800876A4
 * Size:	00000C
 */
// int J3DShapeMtxMultiConcatView::getType() const { return 'SMMC'; }

/*
 * --INFO--
 * Address:	800876B0
 * Size:	000008
 */
// int J3DShapeMtxMultiConcatView::getUseMtxNum() const { return mUseMtxNum; }

/*
 * --INFO--
 * Address:	800876B8
 * Size:	000010
 */
// u16 J3DShapeMtxMultiConcatView::getUseMtxIndex(u16 index) const { return _0C[index]; }

/*
 * --INFO--
 * Address:	800876C8
 * Size:	000004
 */
void J3DShapeMtxMultiConcatView::loadNrmMtx(int, u16) const { }

/*
 * --INFO--
 * Address:	800876CC
 * Size:	00005C
 */
// J3DShapeMtxMulti::~J3DShapeMtxMulti()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	or.      r31, r3, r3
// 	beq      lbl_80087710
// 	lis      r3, __vt__16J3DShapeMtxMulti@ha
// 	addi     r0, r3, __vt__16J3DShapeMtxMulti@l
// 	stw      r0, 0(r31)
// 	beq      lbl_80087700
// 	lis      r3, __vt__11J3DShapeMtx@ha
// 	addi     r0, r3, __vt__11J3DShapeMtx@l
// 	stw      r0, 0(r31)

// lbl_80087700:
// 	extsh.   r0, r4
// 	ble      lbl_80087710
// 	mr       r3, r31
// 	bl       __dl__FPv

// lbl_80087710:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r31
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80087728
 * Size:	00000C
 */
// int J3DShapeMtxMulti::getType() const { return 'SMML'; }

/*
 * --INFO--
 * Address:	80087734
 * Size:	000008
 */
// int J3DShapeMtxMulti::getUseMtxNum() const { return mUseMtxIndex; }

/*
 * --INFO--
 * Address:	8008773C
 * Size:	000010
 */
// u16 J3DShapeMtxMulti::getUseMtxIndex(u16 p1) const { return _0C[p1]; }

/*
 * --INFO--
 * Address:	8008774C
 * Size:	00000C
 */
// int J3DShapeMtxConcatView::getType() const { return 'SMCV'; }

/*
 * --INFO--
 * Address:	80087758
 * Size:	0001A8
 */
// void __sinit_J3DShapeMtx_cpp() { }
