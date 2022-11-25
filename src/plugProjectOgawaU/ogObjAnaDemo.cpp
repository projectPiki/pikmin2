#include "types.h"
#include "og/newScreen/TitleMsg.h"

namespace og {
namespace newScreen {
// should be static once the file is finished!
// clang-format off
CaveTitleMsg CaveTitleMsg [45] = {
//   id, filler, msg,      fire,  elec,  water, poison, filler
    {'t_01', 0, '8395_00', false, false, false, false, 0},
    {'t_02', 0, '8399_00', true , true , false, true , 0},
    {'t_03', 0, '8400_00', true , true , true , true , 0},
    {'f_01', 0, '8396_00', true , false, false, false, 0},
    {'f_02', 0, '8398_00', true , false, false, true , 0},
    {'f_03', 0, '8401_00', true , true , false, false, 0},
    {'f_04', 0, '8410_00', false, true , true , true , 0},
    {'y_01', 0, '8397_00', true , true , false, false, 0},
    {'y_02', 0, '8402_00', false, true , false, false, 0},
    {'y_03', 0, '8403_00', true , true , true , true , 0},
    {'y_04', 0, '8411_00', true , true , true , true , 0},
    {'l_01', 0, '8412_00', true , true , true , true , 0},
    {'l_02', 0, '8413_00', true , true , true , true , 0},
    {'l_03', 0, '8414_00', true , true , true , true , 0},
    {'c_00', 0, '8395_00', false, false, false, false, 0},
    {'c_01', 0, '8395_00', false, false, false, false, 0},
    {'c_02', 0, '8395_00', false, false, false, false, 0},
    {'c_03', 0, '8395_00', false, false, false, false, 0},
    {'c_04', 0, '8395_00', false, false, false, false, 0},
    {'c_05', 0, '8395_00', false, false, false, false, 0},
    {'c_06', 0, '8395_00', false, false, false, false, 0},
    {'c_07', 0, '8395_00', false, false, false, false, 0},
    {'c_08', 0, '8395_00', false, false, false, false, 0},
    {'c_09', 0, '8395_00', false, false, false, false, 0},
    {'c_10', 0, '8395_00', false, false, false, false, 0},
    {'c_11', 0, '8395_00', false, false, false, false, 0},
    {'c_12', 0, '8395_00', false, false, false, false, 0},
    {'c_13', 0, '8395_00', false, false, false, false, 0},
    {'c_14', 0, '8395_00', false, false, false, false, 0},
    {'c_15', 0, '8395_00', false, false, false, false, 0},
    {'c_16', 0, '8395_00', false, false, false, false, 0},
    {'c_17', 0, '8395_00', false, false, false, false, 0},
    {'c_18', 0, '8395_00', false, false, false, false, 0},
    {'c_19', 0, '8395_00', false, false, false, false, 0},
    {'c_20', 0, '8395_00', false, false, false, false, 0},
    {'c_21', 0, '8395_00', false, false, false, false, 0},
    {'c_22', 0, '8395_00', false, false, false, false, 0},
    {'c_23', 0, '8395_00', false, false, false, false, 0},
    {'c_24', 0, '8395_00', false, false, false, false, 0},
    {'c_25', 0, '8395_00', false, false, false, false, 0},
    {'c_26', 0, '8395_00', false, false, false, false, 0},
    {'c_27', 0, '8395_00', false, false, false, false, 0},
    {'c_28', 0, '8395_00', false, false, false, false, 0},
    {'c_29', 0, '8395_00', false, false, false, false, 0},
    {'END' , 0, 'END'    , false, false, false, false, 0},
};
// clang-format on
} // namespace newScreen
} // namespace og

namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	8031CD80
 * Size:	00009C
 */
void caveIDtoMsgID(unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, CaveTitleMsg__Q22og9newScreen@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	addi     r4, r4, CaveTitleMsg__Q22og9newScreen@l
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0

lbl_8031CDA8:
	lwz      r6, 0(r4)
	addis    r0, r6, 0xffbb
	cmplwi   r0, 0x4e44
	bne      lbl_8031CDCC
	mr       r4, r3
	addi     r5, r1, 8
	li       r3, 0
	bl       TagToName__Q22og6ScreenFUxPc
	b        lbl_8031CDFC

lbl_8031CDCC:
	cmplw    r6, r3
	bne      lbl_8031CDF0
	mulli    r0, r5, 0x18
	lis      r3, CaveTitleMsg__Q22og9newScreen@ha
	addi     r3, r3, CaveTitleMsg__Q22og9newScreen@l
	add      r3, r3, r0
	lwz      r31, 8(r3)
	lwz      r30, 0xc(r3)
	b        lbl_8031CDFC

lbl_8031CDF0:
	addi     r4, r4, 0x18
	addi     r5, r5, 1
	b        lbl_8031CDA8

lbl_8031CDFC:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	mr       r4, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void caveIDtoATB(unsigned long, bool*, bool*, bool*, bool*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031CE1C
 * Size:	0000BC
 */
ObjAnaDemo::ObjAnaDemo(char const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q26Screen7ObjBaseFv
	lis      r3, __vt__Q32og9newScreen10ObjAnaDemo@ha
	li       r4, 0
	addi     r3, r3, __vt__Q32og9newScreen10ObjAnaDemo@l
	lfs      f0, lbl_8051DC10@sda21(r2)
	stw      r3, 0(r30)
	addi     r5, r3, 0x10
	li       r0, 0xff
	mr       r3, r30
	stw      r5, 0x18(r30)
	stw      r31, 0x14(r30)
	stw      r4, 0x38(r30)
	stw      r4, 0x3c(r30)
	stw      r4, 0x40(r30)
	stw      r4, 0x44(r30)
	stw      r4, 0x48(r30)
	stw      r4, 0x4c(r30)
	stw      r4, 0x50(r30)
	stw      r4, 0x64(r30)
	stw      r4, 0x54(r30)
	stw      r4, 0x58(r30)
	stw      r4, 0x5c(r30)
	stw      r4, 0x60(r30)
	stfs     f0, 0x68(r30)
	stw      r4, 0x6c(r30)
	stw      r4, 0x70(r30)
	stw      r4, 0x88(r30)
	stfs     f0, 0x8c(r30)
	stfs     f0, 0x90(r30)
	stfs     f0, 0x74(r30)
	stb      r0, 0x7c(r30)
	stfs     f0, 0x78(r30)
	stfs     f0, 0x80(r30)
	stfs     f0, 0x84(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031CED8
 * Size:	0000AC
 */
ObjAnaDemo::~ObjAnaDemo(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8031CF68
	lis      r4, __vt__Q32og9newScreen10ObjAnaDemo@ha
	addi     r4, r4, __vt__Q32og9newScreen10ObjAnaDemo@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_8031CF58
	lis      r4, __vt__Q26Screen7ObjBase@ha
	addi     r4, r4, __vt__Q26Screen7ObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	beq      lbl_8031CF58
	lis      r4, __vt__Q26Screen8IObjBase@ha
	addi     r4, r4, __vt__Q26Screen8IObjBase@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x10
	stw      r0, 0x18(r30)
	bl       del__5CNodeFv
	addi     r3, r30, 0x18
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_8031CF58:
	extsh.   r0, r31
	ble      lbl_8031CF68
	mr       r3, r30
	bl       __dl__FPv

lbl_8031CF68:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void ObjAnaDemo::setWindowMsg(unsigned long long, unsigned long long, unsigned long long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031CF84
 * Size:	001120
 */
void ObjAnaDemo::doCreate(JKRArchive*)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	lis      r5, lbl_8048EDD8@ha
	stw      r0, 0x94(r1)
	stmw     r17, 0x54(r1)
	mr       r31, r3
	mr       r30, r4
	addi     r29, r5, lbl_8048EDD8@l
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x44454D4F@ha
	lis      r5, 0x414E415F@ha
	mr       r22, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x44454D4F@l
	addi     r5, r5, 0x414E415F@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031CFE0
	stw      r22, 0x38(r31)
	li       r0, 0
	stw      r0, 0x3c(r31)
	b        lbl_8031D164

lbl_8031CFE0:
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4B455455@ha
	lis      r5, 0x004B414E@ha
	mr       r3, r22
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4B455455@l
	addi     r5, r5, 0x004B414E@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031D05C
	stw      r22, 0x38(r31)
	lbz      r0, 0x26(r22)
	cmplwi   r0, 0
	beq      lbl_8031D024
	li       r0, 3
	stw      r0, 0x3c(r31)
	b        lbl_8031D02C

lbl_8031D024:
	li       r0, 1
	stw      r0, 0x3c(r31)

lbl_8031D02C:
	lbz      r0, 0x25(r22)
	cmplwi   r0, 0
	beq      lbl_8031D044
	li       r0, 2
	stw      r0, 0x44(r31)
	b        lbl_8031D164

lbl_8031D044:
	lbz      r0, 0x24(r22)
	cmplwi   r0, 0
	beq      lbl_8031D164
	li       r0, 1
	stw      r0, 0x44(r31)
	b        lbl_8031D164

lbl_8031D05C:
	lis      r4, 0x004F4741@ha
	lis      r6, 0x4D4F5245@ha
	lis      r5, 0x43415645@ha
	mr       r3, r22
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x4D4F5245@l
	addi     r5, r5, 0x43415645@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031D0BC
	stw      r22, 0x38(r31)
	li       r3, 2
	stw      r3, 0x3c(r31)
	lbz      r0, 0x25(r22)
	cmplwi   r0, 0
	beq      lbl_8031D0A4
	stw      r3, 0x44(r31)
	b        lbl_8031D164

lbl_8031D0A4:
	lbz      r0, 0x24(r22)
	cmplwi   r0, 0
	beq      lbl_8031D164
	li       r0, 1
	stw      r0, 0x44(r31)
	b        lbl_8031D164

lbl_8031D0BC:
	lis      r4, 0x004F4741@ha
	lis      r6, 0x554D4D59@ha
	mr       r3, r22
	li       r5, 0x44
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x554D4D59@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031D150
	li       r3, 0x24
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8031D148
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r5, __vt__Q32og6Screen17DispMemberAnaDemo@ha
	addi     r0, r4, __vt__Q32og6Screen14DispMemberBase@l
	lis      r4, 0x745F3031@ha
	stw      r0, 0(r3)
	li       r9, 0
	addi     r8, r5, __vt__Q32og6Screen17DispMemberAnaDemo@l
	li       r7, 0x18
	stw      r9, 4(r3)
	li       r6, 0x45
	li       r5, 1
	addi     r0, r4, 0x745F3031@l
	stw      r8, 0(r3)
	stw      r9, 0x20(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stb      r5, 0x1f(r3)
	stw      r5, 0x10(r3)
	stw      r5, 0x14(r3)
	stw      r0, 0x18(r3)
	stb      r9, 0x1c(r3)
	stb      r9, 0x1d(r3)

lbl_8031D148:
	stw      r3, 0x38(r31)
	b        lbl_8031D164

lbl_8031D150:
	addi     r3, r29, 0
	addi     r5, r29, 0x14
	li       r4, 0x1af
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031D164:
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031D17C
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8031D17C:
	stw      r0, 0x4c(r31)
	lwz      r0, 0x3c(r31)
	cmpwi    r0, 0
	bne      lbl_8031D1A4
	lwz      r3, 0x4c(r31)
	mr       r6, r30
	addi     r4, r29, 0x38
	lis      r5, 0x104
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	b        lbl_8031D280

lbl_8031D1A4:
	lwz      r0, 0x44(r31)
	cmpwi    r0, 2
	beq      lbl_8031D1B8
	cmpwi    r0, 1
	bne      lbl_8031D22C

lbl_8031D1B8:
	lwz      r3, 0x4c(r31)
	mr       r6, r30
	addi     r4, r29, 0x48
	lis      r5, 0x104
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lis      r5, 0x6E753031@ha
	lis      r4, 0x004E6D65@ha
	lwz      r3, 0x4c(r31)
	addi     r6, r5, 0x6E753031@l
	addi     r5, r4, 0x004E6D65@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	li       r0, 0
	lis      r5, 0x6E753032@ha
	stb      r0, 0xb0(r3)
	lis      r4, 0x004E6D65@ha
	addi     r6, r5, 0x6E753032@l
	lwz      r3, 0x4c(r31)
	addi     r5, r4, 0x004E6D65@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	li       r0, 0
	lis      r4, 0x72726F72@ha
	stb      r0, 0xb0(r3)
	addi     r6, r4, 0x72726F72@l
	li       r5, 0x4e65
	lwz      r3, 0x4c(r31)
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	li       r0, 0
	stb      r0, 0xb0(r3)
	b        lbl_8031D280

lbl_8031D22C:
	lwz      r3, 0x4c(r31)
	mr       r6, r30
	addi     r4, r29, 0x5c
	lis      r5, 0x104
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lis      r5, 0x6E753031@ha
	lis      r4, 0x004E6D65@ha
	lwz      r3, 0x4c(r31)
	addi     r6, r5, 0x6E753031@l
	addi     r5, r4, 0x004E6D65@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	li       r0, 0
	lis      r5, 0x6E753032@ha
	stb      r0, 0xb0(r3)
	lis      r4, 0x004E6D65@ha
	addi     r6, r5, 0x6E753032@l
	lwz      r3, 0x4c(r31)
	addi     r5, r4, 0x004E6D65@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	li       r0, 0
	stb      r0, 0xb0(r3)

lbl_8031D280:
	lwz      r3, 0x4c(r31)
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
	lwz      r3, 0x4c(r31)
	bl       setFurikoScreen__Q22og6ScreenFPQ29P2DScreen3Mgr
	lwz      r0, 0x3c(r31)
	cmpwi    r0, 0
	beq      lbl_8031D8C8
	lwz      r3, 0x44(r31)
	cmpwi    r3, 2
	bne      lbl_8031D418
	lis      r5, 0x6E753030@ha
	lis      r4, 0x004E6D65@ha
	lwz      r3, 0x4c(r31)
	addi     r6, r5, 0x6E753030@l
	addi     r5, r4, 0x004E6D65@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	li       r0, 0
	lis      r4, 0x6D303071@ha
	stb      r0, 0xb0(r3)
	addi     r6, r4, 0x6D303071@l
	li       r5, 0x54
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x395F3030@ha
	lis      r5, 0x00393939@ha
	addi     r0, r4, 0x395F3030@l
	lis      r4, 0x6D303079@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00393939@l
	addi     r6, r4, 0x6D303079@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x395F3030@ha
	lis      r5, 0x00393939@ha
	addi     r0, r4, 0x395F3030@l
	lis      r4, 0x6D30306E@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00393939@l
	addi     r6, r4, 0x6D30306E@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x395F3030@ha
	lis      r4, 0x00393939@ha
	addi     r0, r5, 0x395F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00393939@l
	stw      r0, 0x18(r3)
	lwz      r0, 0x3c(r31)
	cmpwi    r0, 2
	bne      lbl_8031D3BC
	lwz      r3, 0x4c(r31)
	lis      r5, 0x746C6531@ha
	lis      r4, 0x545F7469@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x746C6531@l
	addi     r5, r4, 0x545F7469@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x305F3030@ha
	lis      r4, 0x00383630@ha
	addi     r0, r5, 0x305F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00383630@l
	stw      r0, 0x18(r3)
	b        lbl_8031D3F8

lbl_8031D3BC:
	lwz      r3, 0x4c(r31)
	lis      r5, 0x746C6531@ha
	lis      r4, 0x545F7469@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x746C6531@l
	addi     r5, r4, 0x545F7469@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x355F3030@ha
	lis      r4, 0x00383630@ha
	addi     r0, r5, 0x355F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00383630@l
	stw      r0, 0x18(r3)

lbl_8031D3F8:
	lis      r4, 0x72726F72@ha
	lwz      r3, 0x4c(r31)
	addi     r6, r4, 0x72726F72@l
	li       r5, 0x4e65
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	li       r0, 1
	stb      r0, 0xb0(r3)
	b        lbl_8031D8C8

lbl_8031D418:
	cmpwi    r0, 2
	beq      lbl_8031D6F8
	bge      lbl_8031D430
	cmpwi    r0, 1
	bge      lbl_8031D598
	b        lbl_8031D858

lbl_8031D430:
	cmpwi    r0, 4
	bge      lbl_8031D858
	cmpwi    r3, 1
	bne      lbl_8031D4EC
	lwz      r3, 0x4c(r31)
	lis      r4, 0x6D303071@ha
	addi     r6, r4, 0x6D303071@l
	li       r5, 0x54
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x365F3030@ha
	lis      r5, 0x00383630@ha
	addi     r0, r4, 0x365F3030@l
	lis      r4, 0x6D303079@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383630@l
	addi     r6, r4, 0x6D303079@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x375F3030@ha
	lis      r5, 0x00383630@ha
	addi     r0, r4, 0x375F3030@l
	lis      r4, 0x6D30306E@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383630@l
	addi     r6, r4, 0x6D30306E@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x385F3030@ha
	lis      r4, 0x00383630@ha
	addi     r0, r5, 0x385F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00383630@l
	stw      r0, 0x18(r3)
	b        lbl_8031D8C8

lbl_8031D4EC:
	lwz      r3, 0x4c(r31)
	lis      r4, 0x6D303071@ha
	addi     r6, r4, 0x6D303071@l
	li       r5, 0x54
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x335F3030@ha
	lis      r5, 0x00383338@ha
	addi     r0, r4, 0x335F3030@l
	lis      r4, 0x6D303079@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383338@l
	addi     r6, r4, 0x6D303079@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x345F3030@ha
	lis      r5, 0x00383338@ha
	addi     r0, r4, 0x345F3030@l
	lis      r4, 0x6D30306E@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383338@l
	addi     r6, r4, 0x6D30306E@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x355F3030@ha
	lis      r4, 0x00383338@ha
	addi     r0, r5, 0x355F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00383338@l
	stw      r0, 0x18(r3)
	b        lbl_8031D8C8

lbl_8031D598:
	cmpwi    r3, 1
	bne      lbl_8031D64C
	lwz      r3, 0x4c(r31)
	lis      r4, 0x6D303071@ha
	addi     r6, r4, 0x6D303071@l
	li       r5, 0x54
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x365F3030@ha
	lis      r5, 0x00383630@ha
	addi     r0, r4, 0x365F3030@l
	lis      r4, 0x6D303079@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383630@l
	addi     r6, r4, 0x6D303079@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x375F3030@ha
	lis      r5, 0x00383630@ha
	addi     r0, r4, 0x375F3030@l
	lis      r4, 0x6D30306E@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383630@l
	addi     r6, r4, 0x6D30306E@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x385F3030@ha
	lis      r4, 0x00383630@ha
	addi     r0, r5, 0x385F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00383630@l
	stw      r0, 0x18(r3)
	b        lbl_8031D8C8

lbl_8031D64C:
	lwz      r3, 0x4c(r31)
	lis      r4, 0x6D303071@ha
	addi     r6, r4, 0x6D303071@l
	li       r5, 0x54
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x345F3030@ha
	lis      r5, 0x00383336@ha
	addi     r0, r4, 0x345F3030@l
	lis      r4, 0x6D303079@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383336@l
	addi     r6, r4, 0x6D303079@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x355F3030@ha
	lis      r5, 0x00383336@ha
	addi     r0, r4, 0x355F3030@l
	lis      r4, 0x6D30306E@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383336@l
	addi     r6, r4, 0x6D30306E@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x365F3030@ha
	lis      r4, 0x00383336@ha
	addi     r0, r5, 0x365F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00383336@l
	stw      r0, 0x18(r3)
	b        lbl_8031D8C8

lbl_8031D6F8:
	cmpwi    r3, 1
	bne      lbl_8031D7AC
	lwz      r3, 0x4c(r31)
	lis      r4, 0x6D303071@ha
	addi     r6, r4, 0x6D303071@l
	li       r5, 0x54
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x315F3030@ha
	lis      r5, 0x00383630@ha
	addi     r0, r4, 0x315F3030@l
	lis      r4, 0x6D303079@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383630@l
	addi     r6, r4, 0x6D303079@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x325F3030@ha
	lis      r5, 0x00383630@ha
	addi     r0, r4, 0x325F3030@l
	lis      r4, 0x6D30306E@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383630@l
	addi     r6, r4, 0x6D30306E@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x335F3030@ha
	lis      r4, 0x00383630@ha
	addi     r0, r5, 0x335F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00383630@l
	stw      r0, 0x18(r3)
	b        lbl_8031D8C8

lbl_8031D7AC:
	lwz      r3, 0x4c(r31)
	lis      r4, 0x6D303071@ha
	addi     r6, r4, 0x6D303071@l
	li       r5, 0x54
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x375F3030@ha
	lis      r5, 0x00383336@ha
	addi     r0, r4, 0x375F3030@l
	lis      r4, 0x6D303079@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383336@l
	addi     r6, r4, 0x6D303079@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x385F3030@ha
	lis      r5, 0x00383336@ha
	addi     r0, r4, 0x385F3030@l
	lis      r4, 0x6D30306E@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383336@l
	addi     r6, r4, 0x6D30306E@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x395F3030@ha
	lis      r4, 0x00383336@ha
	addi     r0, r5, 0x395F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00383336@l
	stw      r0, 0x18(r3)
	b        lbl_8031D8C8

lbl_8031D858:
	lwz      r3, 0x4c(r31)
	lis      r4, 0x6D303079@ha
	addi     r6, r4, 0x6D303079@l
	li       r5, 0x54
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x385F3030@ha
	lis      r5, 0x00383336@ha
	addi     r0, r4, 0x385F3030@l
	lis      r4, 0x6D30306E@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383336@l
	addi     r6, r4, 0x6D30306E@l
	li       r5, 0x54
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lis      r5, 0x395F3030@ha
	lis      r4, 0x00383336@ha
	addi     r0, r5, 0x395F3030@l
	stw      r0, 0x1c(r3)
	addi     r0, r4, 0x00383336@l
	stw      r0, 0x18(r3)

lbl_8031D8C8:
	lwz      r3, 0x4c(r31)
	bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
	lwz      r0, 0x3c(r31)
	cmpwi    r0, 0
	bne      lbl_8031D9A8
	lwz      r3, 0x4c(r31)
	lis      r5, 0x6E616D65@ha
	lis      r4, 0x616E615F@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x6E616D65@l
	addi     r5, r4, 0x616E615F@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x38(r31)
	lis      r4, CaveTitleMsg__Q22og9newScreen@ha
	li       r22, 0
	mr       r24, r3
	addi     r6, r4, CaveTitleMsg__Q22og9newScreen@l
	lwz      r4, 0x18(r5)
	mr       r23, r22
	mr       r5, r22

lbl_8031D920:
	lwz      r3, 0(r6)
	addis    r0, r3, 0xffbb
	cmplwi   r0, 0x4e44
	bne      lbl_8031D940
	addi     r5, r1, 0x3c
	li       r3, 0
	bl       TagToName__Q22og6ScreenFUxPc
	b        lbl_8031D970

lbl_8031D940:
	cmplw    r3, r4
	bne      lbl_8031D964
	mulli    r0, r5, 0x18
	lis      r3, CaveTitleMsg__Q22og9newScreen@ha
	addi     r3, r3, CaveTitleMsg__Q22og9newScreen@l
	add      r3, r3, r0
	lwz      r23, 8(r3)
	lwz      r22, 0xc(r3)
	b        lbl_8031D970

lbl_8031D964:
	addi     r6, r6, 0x18
	addi     r5, r5, 1
	b        lbl_8031D920

lbl_8031D970:
	li       r0, 0
	xor      r3, r22, r0
	xor      r0, r23, r0
	or.      r0, r3, r0
	beq      lbl_8031D990
	stw      r22, 0x1c(r24)
	stw      r23, 0x18(r24)
	b        lbl_8031D9A8

lbl_8031D990:
	lis      r3, CaveTitleMsg__Q22og9newScreen@ha
	addi     r3, r3, CaveTitleMsg__Q22og9newScreen@l
	lwz      r0, 8(r3)
	lwz      r3, 0xc(r3)
	stw      r3, 0x1c(r24)
	stw      r0, 0x18(r24)

lbl_8031D9A8:
	lwz      r0, 0x3c(r31)
	cmpwi    r0, 0
	bne      lbl_8031DB6C
	lwz      r3, 0x4c(r31)
	lis      r5, 0x6F6E3030@ha
	lis      r4, 0x00506963@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x6F6E3030@l
	addi     r5, r4, 0x00506963@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, 0x4c(r31)
	lis      r5, 0x6F6E3031@ha
	lis      r4, 0x00506963@ha
	lwz      r12, 0(r3)
	mr       r22, r0
	addi     r6, r5, 0x6F6E3031@l
	addi     r5, r4, 0x00506963@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, 0x4c(r31)
	lis      r5, 0x6F6E3032@ha
	lis      r4, 0x00506963@ha
	lwz      r12, 0(r3)
	mr       r23, r0
	addi     r6, r5, 0x6F6E3032@l
	addi     r5, r4, 0x00506963@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, 0x4c(r31)
	lis      r5, 0x6F6E3033@ha
	lis      r4, 0x00506963@ha
	lwz      r12, 0(r3)
	mr       r24, r0
	addi     r6, r5, 0x6F6E3033@l
	addi     r5, r4, 0x00506963@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x38(r31)
	lis      r4, CaveTitleMsg__Q22og9newScreen@ha
	addi     r6, r4, CaveTitleMsg__Q22og9newScreen@l
	li       r20, 0x20
	lwz      r4, 0x18(r5)
	mr       r21, r3
	li       r19, 0x20
	li       r18, 0x20
	li       r17, 0x20
	li       r5, 0

lbl_8031DA84:
	lwz      r3, 0(r6)
	addis    r0, r3, 0xffbb
	cmplwi   r0, 0x4e44
	bne      lbl_8031DAA4
	addi     r5, r1, 0x30
	li       r3, 0
	bl       TagToName__Q22og6ScreenFUxPc
	b        lbl_8031DADC

lbl_8031DAA4:
	cmplw    r3, r4
	bne      lbl_8031DAD0
	mulli    r4, r5, 0x18
	lis      r3, CaveTitleMsg__Q22og9newScreen@ha
	addi     r0, r3, CaveTitleMsg__Q22og9newScreen@l
	add      r3, r0, r4
	lbz      r28, 0x10(r3)
	lbz      r27, 0x11(r3)
	lbz      r26, 0x12(r3)
	lbz      r25, 0x13(r3)
	b        lbl_8031DADC

lbl_8031DAD0:
	addi     r6, r6, 0x18
	addi     r5, r5, 1
	b        lbl_8031DA84

lbl_8031DADC:
	cmplwi   r28, 0
	beq      lbl_8031DAE8
	li       r20, 0xff

lbl_8031DAE8:
	cmplwi   r27, 0
	beq      lbl_8031DAF4
	li       r19, 0xff

lbl_8031DAF4:
	cmplwi   r26, 0
	beq      lbl_8031DB00
	li       r18, 0xff

lbl_8031DB00:
	cmplwi   r25, 0
	beq      lbl_8031DB0C
	li       r17, 0xff

lbl_8031DB0C:
	mr       r3, r22
	mr       r4, r20
	lwz      r12, 0(r22)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r3, r24
	mr       r4, r19
	lwz      r12, 0(r24)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r3, r23
	mr       r4, r18
	lwz      r12, 0(r23)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r3, r21
	mr       r4, r17
	lwz      r12, 0(r21)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_8031DB6C:
	lwz      r0, 0x3c(r31)
	cmpwi    r0, 0
	bne      lbl_8031DBE4
	lis      r5, 0x69746C65@ha
	lis      r4, 0x00685F74@ha
	lwz      r3, 0x4c(r31)
	addi     r6, r5, 0x69746C65@l
	addi     r5, r4, 0x00685F74@l
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	lis      r4, 0x315F3030@ha
	lis      r5, 0x00383336@ha
	addi     r0, r4, 0x315F3030@l
	lis      r4, 0x72726F72@ha
	stw      r0, 0x1c(r3)
	addi     r0, r5, 0x00383336@l
	addi     r6, r4, 0x72726F72@l
	li       r5, 0x4e65
	stw      r0, 0x18(r3)
	lwz      r3, 0x4c(r31)
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x70(r31)
	li       r4, 0
	lwz      r3, 0x70(r31)
	lbz      r0, 0xb2(r3)
	stb      r0, 0x7c(r31)
	lwz      r3, 0x70(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_8031DBE4:
	lwz      r0, 0x3c(r31)
	cmpwi    r0, 0
	bne      lbl_8031DC4C
	lis      r6, 0x69746C65@ha
	lis      r5, 0x00685F74@ha
	lwz      r4, 0x4c(r31)
	mr       r3, r30
	addi     r6, r6, 0x69746C65@l
	addi     r5, r5, 0x00685F74@l
	bl setMenuTitleScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx stw
r3, 0x58(r31) lis      r6, 0x685F3030@ha mr       r3, r30 li       r5, 0 lwz
r4, 0x4c(r31) addi     r6, r6, 0x685F3030@l bl
setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx stw      r3,
0x5c(r31) lis      r6, 0x685F3031@ha mr       r3, r30 li       r5, 0 lwz r4,
0x4c(r31) addi     r6, r6, 0x685F3031@l bl
setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx stw      r3,
0x60(r31) b        lbl_8031DCAC

lbl_8031DC4C:
	lwz      r0, 0x44(r31)
	cmpwi    r0, 2
	beq      lbl_8031DCAC
	lis      r6, 0x6D303071@ha
	lwz      r4, 0x4c(r31)
	mr       r3, r30
	li       r5, 0x54
	addi     r6, r6, 0x6D303071@l
	bl setMenuTitleScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx stw
r3, 0x58(r31) lis      r6, 0x6D303079@ha mr       r3, r30 li       r5, 0x54
	lwz      r4, 0x4c(r31)
	addi     r6, r6, 0x6D303079@l
	bl       setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
	stw      r3, 0x5c(r31)
	lis      r6, 0x6D30306E@ha
	mr       r3, r30
	li       r5, 0x54
	lwz      r4, 0x4c(r31)
	addi     r6, r6, 0x6D30306E@l
	bl       setMenuScreen__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
	stw      r3, 0x60(r31)

lbl_8031DCAC:
	lwz      r3, 0x58(r31)
	cmplwi   r3, 0
	beq      lbl_8031DD00
	lwz      r4, 0x38(r31)
	lbz      r0, 0x1c(r4)
	cmplwi   r0, 0
	beq      lbl_8031DCE0
	bl       stop__Q32og6Screen15AnimText_ScreenFv
	lwz      r3, 0x5c(r31)
	bl       stop__Q32og6Screen15AnimText_ScreenFv
	lwz      r3, 0x60(r31)
	bl       stop__Q32og6Screen15AnimText_ScreenFv
	b        lbl_8031DD00

lbl_8031DCE0:
	lfs      f1, lbl_8051DC14@sda21(r2)
	bl       open__Q32og6Screen15AnimText_ScreenFf
	lwz      r3, 0x5c(r31)
	lfs      f1, lbl_8051DC18@sda21(r2)
	bl       open__Q32og6Screen15AnimText_ScreenFf
	lwz      r3, 0x60(r31)
	lfs      f1, lbl_8051DC1C@sda21(r2)
	bl       open__Q32og6Screen15AnimText_ScreenFf

lbl_8031DD00:
	li       r0, 0
	stw      r0, 0x48(r31)
	lwz      r0, 0x44(r31)
	cmpwi    r0, 1
	bne      lbl_8031DD1C
	li       r0, 1
	stw      r0, 0x48(r31)

lbl_8031DD1C:
	lwz      r0, 0x44(r31)
	cmpwi    r0, 2
	beq      lbl_8031DE3C
	li       r3, 0x78
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031DD40
	bl       __ct__Q32og6Screen7MenuMgrFv
	mr       r0, r3

lbl_8031DD40:
	stw      r0, 0x50(r31)
	lwz      r0, 0x3c(r31)
	cmpwi    r0, 0
	bne      lbl_8031DDB0
	lis      r3, 0x735F3030@ha
	lis      r6, 0x696C3030@ha
	addi     r0, r3, 0x735F3030@l
	lis      r5, 0x69723030@ha
	stw      r0, 0xc(r1)
	li       r11, 0
	lis      r4, 0x755F3030@ha
	lis      r3, 0x685F3030@ha
	stw      r11, 8(r1)
	addi     r6, r6, 0x696C3030@l
	addi     r0, r5, 0x69723030@l
	addi     r8, r4, 0x755F3030@l
	stw      r6, 0x14(r1)
	addi     r10, r3, 0x685F3030@l
	li       r5, 2
	li       r7, 0x6e
	stw      r11, 0x10(r1)
	li       r9, 0
	stw      r0, 0x1c(r1)
	stw      r11, 0x18(r1)
	lwz      r3, 0x50(r31)
	lwz      r4, 0x4c(r31)
	bl       init__Q32og6Screen7MenuMgrFP9J2DScreenUsUxUxUxUxUx
	b        lbl_8031DE24

lbl_8031DDB0:
	lis      r10, 0x795F6972@ha
	lis      r4, 0x6D303079@ha
	addi     r0, r10, 0x795F6972@l
	lis      r5, 0x506D3030@ha
	stw      r0, 0xc(r1)
	addi     r9, r5, 0x506D3030@l
	lis      r3, 0x6E5F696C@ha
	addi     r6, r4, 0x6D303079@l
	stw      r9, 8(r1)
	addi     r7, r4, 0x306e
	li       r5, 0x4e
	li       r11, 0x54
	stw      r7, 0x14(r1)
	addi     r4, r3, 0x6E5F696C@l
	addi     r0, r3, 0x6972
	mr       r8, r6
	stw      r5, 0x10(r1)
	addi     r10, r10, 0x696c
	li       r5, 0x4e
	stw      r7, 0x1c(r1)
	li       r7, 0x54
	stw      r11, 0x18(r1)
	stw      r4, 0x24(r1)
	stw      r9, 0x20(r1)
	stw      r0, 0x2c(r1)
	stw      r9, 0x28(r1)
	lwz      r3, 0x50(r31)
	lwz      r4, 0x4c(r31)
	bl init2takuTitle__Q32og6Screen7MenuMgrFP9J2DScreenUxUxUxUxUxUxUxUx

lbl_8031DE24:
	lwz      r0, 0x48(r31)
	lwz      r3, 0x50(r31)
	clrlwi   r4, r0, 0x10
	bl       initSelNum__Q32og6Screen7MenuMgrFUs
	mr       r3, r31
	bl       setBlinkMenu__Q32og9newScreen10ObjAnaDemoFv

lbl_8031DE3C:
	lwz      r0, 0x3c(r31)
	cmpwi    r0, 0
	bne      lbl_8031DEB0
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8031DE64
	li       r4, 3
	bl       __ct__Q32og6Screen9AnimGroupFi
	mr       r0, r3

lbl_8031DE64:
	stw      r0, 0x64(r31)
	mr       r4, r30
	lfs      f1, lbl_8051DC20@sda21(r2)
	addi     r6, r29, 0x6c
	lwz      r3, 0x64(r31)
	lwz      r5, 0x4c(r31)
	bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
	lwz      r3, 0x64(r31)
	mr       r4, r30
	lwz      r5, 0x4c(r31)
	addi     r6, r29, 0x7c
	lfs      f1, lbl_8051DC20@sda21(r2)
	bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
	lwz      r3, 0x64(r31)
	mr       r4, r30
	lwz      r5, 0x4c(r31)
	addi     r6, r29, 0x8c
	lfs      f1, lbl_8051DC20@sda21(r2)
	bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf

lbl_8031DEB0:
	lwz      r0, 0x3c(r31)
	cmpwi    r0, 0
	bne      lbl_8031E080
	lwz      r3, 0x38(r31)
	addi     r7, r3, 8
	lwz      r0, 8(r3)
	cmpwi    r0, 0
	blt      lbl_8031E080
	lwz      r0, 0xc(r3)
	cmpwi    r0, 0
	blt      lbl_8031E080
	stw      r30, 8(r1)
	lis      r5, 0x6D5F3031@ha
	lis      r4, 0x00697465@ha
	li       r8, 3
	lwz      r3, 0x4c(r31)
	addi     r6, r5, 0x6D5F3031@l
	addi     r5, r4, 0x00697465@l
	li       r9, 0
	li       r10, 1
	bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
stw r30, 8(r1) lis      r6, 0x656D3031@ha lis      r5, 0x00546974@ha mr r17,
r3 lwz      r4, 0x38(r31) addi     r6, r6, 0x656D3031@l lwz      r3,
0x4c(r31) addi     r5, r5, 0x00546974@l addi     r7, r4, 0xc li       r8, 3
	li       r9, 0
	li       r10, 1
	bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
stw r30, 8(r1) lis      r6, 0x6B693031@ha lis      r5, 0x00507069@ha mr r18,
r3 lwz      r4, 0x38(r31) addi     r6, r6, 0x6B693031@l lwz      r3,
0x4c(r31) addi     r5, r5, 0x00507069@l addi     r7, r4, 0x10 li       r8, 3
	li       r9, 0
	li       r10, 1
	bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
stw r30, 8(r1) lis      r6, 0x6B693031@ha lis      r5, 0x50617069@ha mr r19,
r3 lwz      r4, 0x38(r31) addi     r6, r6, 0x6B693031@l lwz      r3,
0x4c(r31) addi     r5, r5, 0x50617069@l addi     r7, r4, 0x14 li       r8, 3
	li       r9, 0
	li       r10, 1
	bl
setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
mr r0, r3 mr       r3, r17 mr       r20, r0 li       r4, 0 bl
setCenteringMode__Q32og6Screen18CallBack_CounterRVFQ42og6Screen18CallBack_CounterRV17EnumCenteringMode
	mr       r3, r18
	li       r4, 2
	bl
setCenteringMode__Q32og6Screen18CallBack_CounterRVFQ42og6Screen18CallBack_CounterRV17EnumCenteringMode
	mr       r3, r19
	li       r4, 0
	bl
setCenteringMode__Q32og6Screen18CallBack_CounterRVFQ42og6Screen18CallBack_CounterRV17EnumCenteringMode
	mr       r3, r20
	li       r4, 2
	bl
setCenteringMode__Q32og6Screen18CallBack_CounterRVFQ42og6Screen18CallBack_CounterRV17EnumCenteringMode
	lwz      r4, 0x38(r31)
	lbz      r0, 0x1d(r4)
	cmplwi   r0, 0
	bne      lbl_8031DFF8
	lwz      r3, 8(r4)
	lwz      r0, 0xc(r4)
	cmplw    r3, r0
	bne      lbl_8031E010

lbl_8031DFF8:
	mr       r3, r18
	lwz      r12, 0(r18)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	b        lbl_8031E080

lbl_8031E010:
	mr       r3, r17
	li       r4, 1
	bl
setCenteringMode__Q32og6Screen18CallBack_CounterRVFQ42og6Screen18CallBack_CounterRV17EnumCenteringMode
	mr       r3, r18
	lwz      r12, 0(r18)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r3, r17
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	lwz      r12, 0(r3)
	lis      r4, msVal__Q32og9newScreen10ObjAnaDemo@ha
	addi     r4, r4, msVal__Q32og9newScreen10ObjAnaDemo@l
	lfs      f2, lbl_8051DC10@sda21(r2)
	lwz      r12, 0x10(r12)
	lfs      f1, 4(r4)
	mtctr    r12
	bctrl
	lwz      r3, 0x4c(r31)
	lis      r4, 0x73757261@ha
	addi     r6, r4, 0x73757261@l
	li       r5, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0xb0(r3)

lbl_8031E080:
	li       r0, 1
	stw      r0, 0x40(r31)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setOpenDoukutu__Q22og5SoundFv
	lmw      r17, 0x54(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031E0A4
 * Size:	000094
 */
void ObjAnaDemo::setBlinkMenu(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x58(r3)
	cmplwi   r0, 0
	beq      lbl_8031E124
	lwz      r0, 0x48(r31)
	cmpwi    r0, 1
	beq      lbl_8031E104
	bge      lbl_8031E124
	cmpwi    r0, 0
	bge      lbl_8031E0E0
	b        lbl_8031E124

lbl_8031E0E0:
	lwz      r3, 0x5c(r31)
	lfs      f1, lbl_8051DC18@sda21(r2)
	lfs      f2, lbl_8051DC10@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lfs      f1, lbl_8051DC10@sda21(r2)
	lwz      r3, 0x60(r31)
	fmr      f2, f1
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	b        lbl_8031E124

lbl_8031E104:
	lfs      f1, lbl_8051DC10@sda21(r2)
	lwz      r3, 0x5c(r31)
	fmr      f2, f1
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lwz      r3, 0x60(r31)
	lfs      f1, lbl_8051DC18@sda21(r2)
	lfs      f2, lbl_8051DC10@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff

lbl_8031E124:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031E138
 * Size:	0005D4
 */
void ObjAnaDemo::doUpdate(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r3
	bl       commonUpdate__Q32og9newScreen10ObjAnaDemoFv
	mr       r3, r30
	bl       getGamePad__Q26Screen7ObjBaseCFv
	lwz      r0, 0x40(r30)
	cmplwi   r0, 6
	bgt      lbl_8031E6F0
	lis      r4, lbl_804D93D8@ha
	slwi     r0, r0, 2
	addi     r4, r4, lbl_804D93D8@l
	lwzx     r0, r4, r0
	mtctr    r0
	bctr
	.global  lbl_8031E184

lbl_8031E184:
	li       r0, 2
	lis      r3, msVal__Q32og9newScreen10ObjAnaDemo@ha
	stw      r0, 0x40(r30)
	addi     r3, r3, msVal__Q32og9newScreen10ObjAnaDemo@l
	lfs      f0, 8(r3)
	stfs     f0, 0x80(r30)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x84(r30)
	b        lbl_8031E6F0
	.global  lbl_8031E1A8

lbl_8031E1A8:
	lfs      f2, 0x84(r30)
	lfs      f1, lbl_8051DC10@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_8031E1FC
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0x84(r30)
	lfs      f0, 0x84(r30)
	fcmpo    cr0, f0, f1
	bge      lbl_8031E1FC
	lwz      r0, 0x44(r30)
	cmpwi    r0, 1
	bne      lbl_8031E1EC
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setWarning__Q22og5SoundFv
	b        lbl_8031E1FC

lbl_8031E1EC:
	cmpwi    r0, 2
	bne      lbl_8031E1FC
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setError__Q22og5SoundFv

lbl_8031E1FC:
	lfs      f2, 0x80(r30)
	lfs      f1, lbl_8051DC10@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_8031E6F0
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f2, f0
	stfs     f0, 0x80(r30)
	lfs      f0, 0x80(r30)
	fcmpo    cr0, f0, f1
	bge      lbl_8031E6F0
	lwz      r3, 0x50(r30)
	cmplwi   r3, 0
	beq      lbl_8031E238
	bl       startCursor__Q32og6Screen7MenuMgrFf

lbl_8031E238:
	lwz      r0, 0x44(r30)
	cmpwi    r0, 2
	bne      lbl_8031E250
	li       r0, 6
	stw      r0, 0x40(r30)
	b        lbl_8031E6F0

lbl_8031E250:
	li       r0, 3
	stw      r0, 0x40(r30)
	b        lbl_8031E6F0
	.global  lbl_8031E25C

lbl_8031E25C:
	lis      r4, 0x08000008@ha
	lwz      r5, 0x1c(r3)
	addi     r0, r4, 0x08000008@l
	and.     r0, r5, r0
	beq      lbl_8031E30C
	lwz      r3, 0x48(r30)
	cmpwi    r3, 0
	ble      lbl_8031E6F0
	addi     r0, r3, -1
	stw      r0, 0x48(r30)
	lwz      r3, 0x50(r30)
	cmplwi   r3, 0
	beq      lbl_8031E29C
	lwz      r0, 0x48(r30)
	clrlwi   r4, r0, 0x10
	bl       select__Q32og6Screen7MenuMgrFUs

lbl_8031E29C:
	lwz      r0, 0x58(r30)
	cmplwi   r0, 0
	beq      lbl_8031E6F0
	lwz      r0, 0x48(r30)
	cmpwi    r0, 1
	beq      lbl_8031E2E8
	bge      lbl_8031E6F0
	cmpwi    r0, 0
	bge      lbl_8031E2C4
	b        lbl_8031E6F0

lbl_8031E2C4:
	lwz      r3, 0x5c(r30)
	lfs      f1, lbl_8051DC18@sda21(r2)
	lfs      f2, lbl_8051DC10@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lfs      f1, lbl_8051DC10@sda21(r2)
	lwz      r3, 0x60(r30)
	fmr      f2, f1
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	b        lbl_8031E6F0

lbl_8031E2E8:
	lfs      f1, lbl_8051DC10@sda21(r2)
	lwz      r3, 0x5c(r30)
	fmr      f2, f1
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lwz      r3, 0x60(r30)
	lfs      f1, lbl_8051DC18@sda21(r2)
	lfs      f2, lbl_8051DC10@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	b        lbl_8031E6F0

lbl_8031E30C:
	lis      r3, 0x04000004@ha
	addi     r0, r3, 0x04000004@l
	and.     r0, r5, r0
	beq      lbl_8031E3B8
	lwz      r3, 0x48(r30)
	cmpwi    r3, 1
	bge      lbl_8031E6F0
	addi     r0, r3, 1
	stw      r0, 0x48(r30)
	lwz      r3, 0x50(r30)
	cmplwi   r3, 0
	beq      lbl_8031E348
	lwz      r0, 0x48(r30)
	clrlwi   r4, r0, 0x10
	bl       select__Q32og6Screen7MenuMgrFUs

lbl_8031E348:
	lwz      r0, 0x58(r30)
	cmplwi   r0, 0
	beq      lbl_8031E6F0
	lwz      r0, 0x48(r30)
	cmpwi    r0, 1
	beq      lbl_8031E394
	bge      lbl_8031E6F0
	cmpwi    r0, 0
	bge      lbl_8031E370
	b        lbl_8031E6F0

lbl_8031E370:
	lwz      r3, 0x5c(r30)
	lfs      f1, lbl_8051DC18@sda21(r2)
	lfs      f2, lbl_8051DC10@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lfs      f1, lbl_8051DC10@sda21(r2)
	lwz      r3, 0x60(r30)
	fmr      f2, f1
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	b        lbl_8031E6F0

lbl_8031E394:
	lfs      f1, lbl_8051DC10@sda21(r2)
	lwz      r3, 0x5c(r30)
	fmr      f2, f1
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	lwz      r3, 0x60(r30)
	lfs      f1, lbl_8051DC18@sda21(r2)
	lfs      f2, lbl_8051DC10@sda21(r2)
	bl       blink__Q32og6Screen15AnimText_ScreenFff
	b        lbl_8031E6F0

lbl_8031E3B8:
	rlwinm.  r0, r5, 0, 0x17, 0x17
	beq      lbl_8031E4DC
	lwz      r3, 0x50(r30)
	cmplwi   r3, 0
	beq      lbl_8031E3D0
	bl       killCursor__Q32og6Screen7MenuMgrFv

lbl_8031E3D0:
	lwz      r0, 0x48(r30)
	cmpwi    r0, 0
	bne      lbl_8031E4B4
	lwz      r3, 0x38(r30)
	li       r0, 1
	stb      r0, 0x1e(r3)
	lwz      r0, 0x58(r30)
	cmplwi   r0, 0
	beq      lbl_8031E404
	lwz      r3, 0x5c(r30)
	bl       close__Q32og6Screen15AnimText_ScreenFv
	lwz      r3, 0x60(r30)
	bl       close__Q32og6Screen15AnimText_ScreenFv

lbl_8031E404:
	lwz      r3, 0x38(r30)
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	bne      lbl_8031E468
	lwz      r3, 0x50(r30)
	cmplwi   r3, 0
	beq      lbl_8031E424
	bl       killCursor__Q32og6Screen7MenuMgrFv

lbl_8031E424:
	li       r0, 5
	lfs      f0, lbl_8051DC14@sda21(r2)
	stw      r0, 0x40(r30)
	stfs     f0, 0x78(r30)
	lwz      r3, 0x58(r30)
	cmplwi   r3, 0
	beq      lbl_8031E444
	stfs     f0, 0x6c(r3)

lbl_8031E444:
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setError__Q22og5SoundFv
	lwz      r3, 0x70(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_8031E6F0

lbl_8031E468:
	lwz      r0, 0x3c(r30)
	cmpwi    r0, 1
	bne      lbl_8031E490
	li       r0, 4
	lfs      f0, lbl_8051DC10@sda21(r2)
	stw      r0, 0x40(r30)
	stfs     f0, 0x90(r30)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setDecide__Q22og5SoundFv
	b        lbl_8031E6F0

lbl_8031E490:
	lfs      f0, lbl_8051DC14@sda21(r2)
	stfs     f0, 0x68(r30)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setDecide__Q22og5SoundFv
	li       r0, 4
	lfs      f0, lbl_8051DC10@sda21(r2)
	stw      r0, 0x40(r30)
	stfs     f0, 0x90(r30)
	b        lbl_8031E6F0

lbl_8031E4B4:
	lwz      r3, 0x38(r30)
	li       r4, 0
	li       r0, 4
	lfs      f0, lbl_8051DC10@sda21(r2)
	stb      r4, 0x1e(r3)
	stw      r0, 0x40(r30)
	stfs     f0, 0x90(r30)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setDecide__Q22og5SoundFv
	b        lbl_8031E6F0

lbl_8031E4DC:
	rlwinm.  r0, r5, 0, 0x16, 0x16
	beq      lbl_8031E6F0
	lwz      r3, 0x50(r30)
	cmplwi   r3, 0
	beq      lbl_8031E4F4
	bl       killCursor__Q32og6Screen7MenuMgrFv

lbl_8031E4F4:
	lwz      r3, 0x38(r30)
	li       r4, 0
	li       r0, 4
	lfs      f0, lbl_8051DC10@sda21(r2)
	stb      r4, 0x1e(r3)
	stw      r0, 0x40(r30)
	stfs     f0, 0x90(r30)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setClose__Q22og5SoundFv
	b        lbl_8031E6F0
	.global  lbl_8031E51C

lbl_8031E51C:
	lwz      r4, 0x1c(r3)
	li       r3, 0
	rlwinm.  r0, r4, 0, 0x17, 0x17
	bne      lbl_8031E54C
	rlwinm.  r0, r4, 0, 0x16, 0x16
	bne      lbl_8031E54C
	rlwinm.  r0, r4, 0, 0x15, 0x15
	bne      lbl_8031E54C
	rlwinm.  r0, r4, 0, 0x14, 0x14
	bne      lbl_8031E54C
	rlwinm.  r0, r4, 0, 0x13, 0x13
	beq      lbl_8031E550

lbl_8031E54C:
	li       r3, 1

lbl_8031E550:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031E6F0
	li       r0, 4
	lfs      f0, lbl_8051DC10@sda21(r2)
	stw      r0, 0x40(r30)
	li       r0, 0
	stfs     f0, 0x90(r30)
	lwz      r3, 0x38(r30)
	stb      r0, 0x1e(r3)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setClose__Q22og5SoundFv
	b        lbl_8031E6F0
	.global  lbl_8031E580

lbl_8031E580:
	lfs      f2, 0x74(r30)
	lfs      f0, lbl_8051DC20@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8031E5F8
	lwz      r4, 0x1c(r3)
	li       r3, 0
	rlwinm.  r0, r4, 0, 0x17, 0x17
	bne      lbl_8031E5C4
	rlwinm.  r0, r4, 0, 0x16, 0x16
	bne      lbl_8031E5C4
	rlwinm.  r0, r4, 0, 0x15, 0x15
	bne      lbl_8031E5C4
	rlwinm.  r0, r4, 0, 0x14, 0x14
	bne      lbl_8031E5C4
	rlwinm.  r0, r4, 0, 0x13, 0x13
	beq      lbl_8031E5C8

lbl_8031E5C4:
	li       r3, 1

lbl_8031E5C8:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031E6F0
	li       r0, 4
	lfs      f0, lbl_8051DC10@sda21(r2)
	stw      r0, 0x40(r30)
	li       r0, 0
	stfs     f0, 0x90(r30)
	lwz      r3, 0x38(r30)
	stb      r0, 0x1e(r3)
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setClose__Q22og5SoundFv
	b        lbl_8031E6F0

lbl_8031E5F8:
	lfs      f1, 0x78(r30)
	lfs      f0, lbl_8051DC10@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8031E61C
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x78(r30)
	b        lbl_8031E6F0

lbl_8031E61C:
	lbz      r4, 0x7c(r30)
	lis      r0, 0x4330
	lwz      r3, 0x70(r30)
	stw      r4, 0xc(r1)
	lwz      r12, 0(r3)
	stw      r0, 8(r1)
	lfd      f1, lbl_8051DC30@sda21(r2)
	lfd      f0, 8(r1)
	lwz      r12, 0x24(r12)
	fsubs    f0, f0, f1
	fmuls    f0, f0, f2
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_8051DC28@sda21(r2)
	lfs      f0, 0x54(r3)
	lfs      f3, lbl_8051DC24@sda21(r2)
	fmuls    f2, f1, f0
	lfs      f1, 0x74(r30)
	lfs      f0, lbl_8051DC20@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x74(r30)
	lfs      f1, 0x74(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_8031E6F0
	stfs     f0, 0x74(r30)
	b        lbl_8031E6F0
	.global  lbl_8031E694

lbl_8031E694:
	lwz      r4, sys@sda21(r13)
	lis      r3, msVal__Q32og9newScreen10ObjAnaDemo@ha
	lfs      f1, 0x90(r30)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x90(r30)
	lfs      f1, 0x90(r30)
	lfs      f2, msVal__Q32og9newScreen10ObjAnaDemo@l(r3)
	bl       calcSmooth0to1__Q22og6ScreenFff
	lfs      f0, lbl_8051DC2C@sda21(r2)
	lis      r3, msVal__Q32og9newScreen10ObjAnaDemo@ha
	fmuls    f0, f0, f1
	stfs     f0, 0x8c(r30)
	lfs      f1, 0x90(r30)
	lfs      f0, msVal__Q32og9newScreen10ObjAnaDemo@l(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8031E6F0
	lwz      r3, 0x38(r30)
	li       r0, 0
	li       r31, 1
	stb      r0, 0x1f(r3)
	stw      r0, 0x40(r30)
	.global  lbl_8031E6F0

lbl_8031E6F0:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031E70C
 * Size:	000080
 */
void ObjAnaDemo::commonUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x50(r3)
	cmplwi   r3, 0
	beq      lbl_8031E730
	bl       update__Q32og6Screen7MenuMgrFv

lbl_8031E730:
	lwz      r3, 0x64(r31)
	cmplwi   r3, 0
	beq      lbl_8031E740
	bl       update__Q32og6Screen9AnimGroupFv

lbl_8031E740:
	lfs      f3, 0x8c(r31)
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f1, lbl_8051DC10@sda21(r2)
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f2, f3, f2
	lwz      r3, 0x4c(r31)
	fadds    f0, f1, f0
	stfs     f2, 0x140(r3)
	stfs     f0, 0x144(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031E78C
 * Size:	000074
 */
void ObjAnaDemo::doDraw(Graphics& gfx)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x40(r3)
	cmpwi    r0, 0
	beq      lbl_8031E7E8
	lwz      r3, 0x4c(r30)
	addi     r31, r4, 0x190
	cmplwi   r3, 0
	beq      lbl_8031E7D4
	lwz      r12, 0(r3)
	mr       r5, r31
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl

lbl_8031E7D4:
	lwz      r3, 0x50(r30)
	cmplwi   r3, 0
	beq      lbl_8031E7E8
	mr       r4, r31
	bl       draw__Q32og6Screen7MenuMgrFP14J2DGrafContext

lbl_8031E7E8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031E800
 * Size:	000018
 */
void ObjAnaDemo::doStart(Screen::StartSceneArg const*)
{
	/*
	lfs      f1, lbl_8051DC10@sda21(r2)
	lfs      f0, lbl_8051DC38@sda21(r2)
	stfs     f1, 0x90(r3)
	stfs     f0, 0x8c(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031E818
 * Size:	000008
 */
u32 ObjAnaDemo::doEnd(Screen::EndSceneArg const*) { return 0x1; }

/*
 * --INFO--
 * Address:	8031E820
 * Size:	000004
 */
void ObjAnaDemo::doUpdateFadeinFinish(void) { }

/*
 * --INFO--
 * Address:	8031E824
 * Size:	00000C
 */
void ObjAnaDemo::doUpdateFinish(void)
{
	/*
	lfs      f0, lbl_8051DC10@sda21(r2)
	stfs     f0, 0x90(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031E830
 * Size:	000094
 */
void ObjAnaDemo::doUpdateFadeoutFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x38(r31)
	mr       r31, r3
	lbz      r0, 0x1e(r4)
	cmplwi   r0, 0
	beq      lbl_8031E874
	li       r4, 0
	bl       endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	b        lbl_8031E8B0

lbl_8031E874:
	bl       setBackupScene__Q26Screen9SceneBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031E8B0
	mr       r3, r31
	li       r4, 0
	bl       startScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg
	clrlwi.  r0, r3, 0x18
	bne      lbl_8031E8B0
	lis      r3, lbl_8048EDD8@ha
	lis      r5, lbl_8048EE74@ha
	addi     r3, r3, lbl_8048EDD8@l
	li       r4, 0x3e2
	addi     r5, r5, lbl_8048EE74@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031E8B0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031E8C4
 * Size:	0000E4
 */
void ObjAnaDemo::doUpdateFadein(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x50(r3)
	cmplwi   r3, 0
	beq      lbl_8031E8F0
	bl       update__Q32og6Screen7MenuMgrFv

lbl_8031E8F0:
	lwz      r3, 0x64(r30)
	cmplwi   r3, 0
	beq      lbl_8031E900
	bl       update__Q32og6Screen9AnimGroupFv

lbl_8031E900:
	lfs      f3, 0x8c(r30)
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f1, lbl_8051DC10@sda21(r2)
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f2, f3, f2
	lwz      r3, 0x4c(r30)
	fadds    f0, f1, f0
	stfs     f2, 0x140(r3)
	stfs     f0, 0x144(r3)
	lwz      r3, 0x4c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r4, sys@sda21(r13)
	lis      r3, msVal__Q32og9newScreen10ObjAnaDemo@ha
	lfs      f1, 0x90(r30)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x90(r30)
	lfs      f1, 0x90(r30)
	lfs      f2, msVal__Q32og9newScreen10ObjAnaDemo@l(r3)
	bl       calcSmooth0to1__Q22og6ScreenFff
	lfs      f2, lbl_8051DC20@sda21(r2)
	lis      r3, msVal__Q32og9newScreen10ObjAnaDemo@ha
	lfs      f0, lbl_8051DC38@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x8c(r30)
	lfs      f1, 0x90(r30)
	lfs      f0, msVal__Q32og9newScreen10ObjAnaDemo@l(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8031E98C
	li       r31, 1

lbl_8031E98C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031E9A8
 * Size:	000084
 */
void ObjAnaDemo::doUpdateFadeout(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x50(r3)
	cmplwi   r3, 0
	beq      lbl_8031E9CC
	bl       update__Q32og6Screen7MenuMgrFv

lbl_8031E9CC:
	lwz      r3, 0x64(r31)
	cmplwi   r3, 0
	beq      lbl_8031E9DC
	bl       update__Q32og6Screen9AnimGroupFv

lbl_8031E9DC:
	lfs      f3, 0x8c(r31)
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f1, lbl_8051DC10@sda21(r2)
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f2, f3, f2
	lwz      r3, 0x4c(r31)
	fadds    f0, f1, f0
	stfs     f2, 0x140(r3)
	stfs     f0, 0x144(r3)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	li       r3, 1
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace newScreen

} // namespace og

/*
 * --INFO--
 * Address:	8031EA2C
 * Size:	000024
 */
void __sinit_ogObjAnaDemo_cpp(void)
{
	/*
	lfs      f2, lbl_8051DC3C@sda21(r2)
	lis      r3, msVal__Q32og9newScreen10ObjAnaDemo@ha
	lfs      f1, lbl_8051DC40@sda21(r2)
	stfsu    f2, msVal__Q32og9newScreen10ObjAnaDemo@l(r3)
	lfs      f0, lbl_8051DC20@sda21(r2)
	stfs     f1, 4(r3)
	stfs     f0, 8(r3)
	stfs     f2, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031EA50
 * Size:	000008
 */
@24 @og::newScreen::ObjAnaDemo::~ObjAnaDemo(void)
{
	/*
	addi     r3, r3, -24
	b        __dt__Q32og9newScreen10ObjAnaDemoFv
	*/
}
