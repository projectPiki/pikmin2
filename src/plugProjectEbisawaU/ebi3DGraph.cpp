#include "types.h"
#include "ebi/E3DGraph.h"
/*
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80496408:
    .asciz "ebi3DGraph.cpp"
.balign 4
lbl_80496418:
    .asciz "P2Assert"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051F9D8:
    .float 0.0
lbl_8051F9DC:
    .float 2.0
lbl_8051F9E0:
    .float 0.5
lbl_8051F9E4:
    .float 60.0
.balign 8
lbl_8051F9E8:
    .4byte 0x43300000
    .4byte 0x80000000
*/

namespace ebi {

/*
 * --INFO--
 * Address:	803C9D10
 * Size:	000104
 */
void E3DAnimRes::load(J3DModelData* param_1, JKRArchive* param_2, char* param_3)

{
	void* pvVar1 = param_2->getResource(param_3);

	P2ASSERTLINE(20, pvVar1);
	pAnmTransform_0x0 = (J3DAnmTransform*)J3DAnmLoaderDataBase::load(pvVar1);
	pMtxCalcAnm_0x4   = J3DNewMtxCalcAnm((param_1->m_jointTree).m_08 & 0xf, pAnmTransform_0x0);
	float_0x8         = 0.0f;
	float_0xC         = pAnmTransform_0x0->m_06 - 2.0f;
	float_0x10        = float_0x8;
	float_0x14        = float_0xC;
	float_0x18        = sys->m_secondsPerFrame * 60.0f * 0.5f;
	int_0x1C          = 0;
}

/*
 * --INFO--
 * Address:	803C9E14
 * Size:	000058
 */
void E3DAnimCtrl::setAnimFolder(E3DAnimFolderBase* param_1)
{
	P2ASSERTLINE(40, param_1);
	pAnimFolder_0x10 = param_1;
}

/*
 * --INFO--
 * Address:	803C9E6C
 * Size:	0000A4
 */
void E3DAnimCtrl::init(long, float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	fmr      f31, f1
	lwz      r0, 0x10(r3)
	mr       r31, r4
	cmplwi   r0, 0
	bne      lbl_803C9EBC
	lis      r3, lbl_80496408@ha
	lis      r5, lbl_80496418@ha
	addi     r3, r3, lbl_80496408@l
	li       r4, 0x2f
	addi     r5, r5, lbl_80496418@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C9EBC:
	lwz      r3, 0x10(r30)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r30)
	li       r0, 0
	stfs     f31, 4(r30)
	lwz      r3, 0xc(r30)
	lfs      f0, 8(r3)
	stfs     f0, 0(r30)
	stw      r0, 8(r30)
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void E3DAnimCtrl::setStartFrame(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C9F10
 * Size:	000080
 */
void E3DAnimCtrl::play(void)
{
	P2ASSERTLINE(63, _0C);
	if (_08 != 3)
		_0C->int_0x1C == 1 ? _08 = 1 : _08 = 2;
}

/*
 * --INFO--
 * Address:	803C9F90
 * Size:	000064
 */
void E3DAnimCtrl::playStopEnd(void)
{
	P2ASSERTLINE(76, _0C);
	if (_08 != 3)
		_08 = 2;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void E3DAnimCtrl::stop(void)
{
	// UNUSED FUNCTION
}
} // namespace ebi
