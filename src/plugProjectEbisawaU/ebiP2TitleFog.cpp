#include "types.h"
#include "Camera.h"
#include "Dolphin/gx.h"
#include "System.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_ebiP2TitleFog_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804E9FA8
    lbl_804E9FA8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516110
    lbl_80516110:
        .skip 0x4
    .global lbl_80516114
    lbl_80516114:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FE30
    lbl_8051FE30:
        .float 0.0
*/

namespace ebi {

namespace title {

struct TTitleFogMgr {
	void setGX(Camera&);

	u8 _00[36];
	s32* _24;
	u8 _28[36];
	u8 _4C;
	u8 _4D[27];
	f32 _68;
	u8 _6C[36];
	f32 _90;
	u8 _94[36];
	s32 _B8;
	u8 _BC[36];
	s32 _E0;
	u8 _E4[36];
	s32 _108;
	u8 _10C[36];
	s32 _130;
};

/*
 * --INFO--
 * Address:	803EB1A4
 * Size:	000118
 */
// TODO: non-matching!
void TTitleFogMgr::setGX(Camera& camera)
{
	if (_4C) {
		struct {
			s8 _00;
			s8 _01;
			s8 _02;
			s8 _03;
		} v16Obj;

		v16Obj._03 = _B8;
		v16Obj._01 = _E0;
		v16Obj._02 = _108;
		v16Obj._00 = _130;

		GXSetFog(GX_FOG_LINEAR, (void*)&v16Obj, _68, _90, camera.getNear(),
		         camera.getFar());

		GXFogAdjTable table;
		GXInitFogAdjTable(&table, System::getRenderModeObj()->fbWidth,
		                  camera._B4);
		GXSetFogRangeAdj(TRUE, System::getRenderModeObj()->fbWidth >> 1,
		                 &table);
	} else {
		GXSetFog(GX_FOG_NONE, _24, 0.0f, 0.0f, 0.0f, 0.0f);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void TTitleFogMgr::offGX(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EB2BC
 * Size:	00007C
 */
void TTitleFogMgr::loadSettingFile(JKRArchive*, char*)
{
	/*
stwu     r1, -0x430(r1)
mflr     r0
stw      r0, 0x434(r1)
stw      r31, 0x42c(r1)
mr       r31, r3
mr       r3, r4
lwz      r12, 0(r4)
mr       r4, r5
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
cmplwi   r3, 0
beq      lbl_803EB324
mr       r4, r3
addi     r3, r1, 8
li       r5, -1
bl       __ct__9RamStreamFPvi
li       r0, 1
cmpwi    r0, 1
stw      r0, 0x14(r1)
bne      lbl_803EB318
li       r0, 0
stw      r0, 0x41c(r1)

lbl_803EB318:
addi     r3, r31, 0x28
addi     r4, r1, 8
bl       read__10ParametersFR6Stream

lbl_803EB324:
lwz      r0, 0x434(r1)
lwz      r31, 0x42c(r1)
mtlr     r0
addi     r1, r1, 0x430
blr
	*/
}

} // namespace title

} // namespace ebi

/*
 * --INFO--
 * Address:	803EB338
 * Size:	000028
 */
void __sinit_ebiP2TitleFog_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804E9FA8@ha
	stw      r0, lbl_80516110@sda21(r13)
	stfsu    f0, lbl_804E9FA8@l(r3)
	stfs     f0, lbl_80516114@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
