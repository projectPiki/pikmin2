#include "CNode.h"
#include "JSystem/JUT/JUTException.h"
#include "Screen/Bases.h"
#include "Screen/screenObj.h"
#include "og/Screen/ogScreen.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049BA58
    lbl_8049BA58:
        .4byte 0x73637265
        .4byte 0x656E4F62
        .4byte 0x6A2E6370
        .4byte 0x70000000
    .global lbl_8049BA68
    lbl_8049BA68:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x00000000

    .section .data, "wa"	# 0x8049E220 - 0x804EFC20
    .global __vt__Q26Screen7ObjBase
    __vt__Q26Screen7ObjBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q26Screen7ObjBaseFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q26Screen7ObjBaseFv"
        .4byte update__Q26Screen7ObjBaseFv
        .4byte draw__Q26Screen7ObjBaseFR8Graphics
        .4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
        .4byte getOwner__Q26Screen7ObjBaseCFv
        .4byte create__Q26Screen7ObjBaseFP10JKRArchive
        .4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
        .4byte doStart__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
        .4byte doEnd__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
        .4byte doCreate__Q26Screen7ObjBaseFP10JKRArchive
        .4byte doUpdateFadein__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeinFinish__Q26Screen7ObjBaseFv
        .4byte doUpdate__Q26Screen7ObjBaseFv
        .4byte doUpdateFinish__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeout__Q26Screen7ObjBaseFv
        .4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
        .4byte doDraw__Q26Screen7ObjBaseFR8Graphics
        .4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
        .4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
        .4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520B88
    lbl_80520B88:
        .4byte 0x4E6F204E
        .4byte 0x616D6500
    .global lbl_80520B90
    lbl_80520B90:
        .4byte 0x00000000
    .global lbl_80520B94
    lbl_80520B94:
        .4byte 0x42C80000
*/

namespace Screen {

/*
 * --INFO--
 * Address:	80453AE8
 * Size:	000090
 */
ObjBase::ObjBase(void)
    : IObjBase()
{
	_30     = 0;
	m_owner = nullptr;
}

/*
 * --INFO--
 * Address:	80453B78
 * Size:	00002C
 */
void ObjBase::create(JKRArchive* archive) { doCreate(archive); }

/*
 * --INFO--
 * Address:	80453BA4
 * Size:	0000AC
 */
bool ObjBase::start(Screen::StartSceneArg const* arg)
{
	switch (_30) {
	case 0:
		if (doStart(arg)) {
			_30 = 1;
			return true;
		}
		return false;
	case 1:
		return true;
	case 2:
	case 3:
		return false;
	default:
		JUT_PANICLINE(97, "P2Assert");
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x30(r3)
	cmpwi    r0, 1
	beq      lbl_80453C10
	bge      lbl_80453BDC
	cmpwi    r0, 0
	bge      lbl_80453BE8
	b        lbl_80453C18

lbl_80453BDC:
	cmpwi    r0, 4
	bge      lbl_80453C18
	b        lbl_80453C34

lbl_80453BE8:
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80453C34
	li       r0, 1
	li       r31, 1
	stw      r0, 0x30(r30)
	b        lbl_80453C34

lbl_80453C10:
	li       r31, 1
	b        lbl_80453C34

lbl_80453C18:
	lis      r3, lbl_8049BA58@ha
	lis      r5, lbl_8049BA68@ha
	addi     r3, r3, lbl_8049BA58@l
	li       r4, 0x61
	addi     r5, r5, lbl_8049BA68@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80453C34:
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
 * Address:	80453C50
 * Size:	000138
 */
bool ObjBase::end(Screen::EndSceneArg const*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x30(r3)
	cmpwi    r0, 2
	beq      lbl_80453CA0
	bge      lbl_80453C94
	cmpwi    r0, 0
	beq      lbl_80453D10
	bge      lbl_80453D68
	b        lbl_80453D4C

lbl_80453C94:
	cmpwi    r0, 4
	bge      lbl_80453D4C
	b        lbl_80453D18

lbl_80453CA0:
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80453D68
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	cmplwi   r30, 0
	beq      lbl_80453D00
	lbz      r0, 4(r30)
	cmplwi   r0, 0
	beq      lbl_80453D00
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x30(r29)
	b        lbl_80453D08

lbl_80453D00:
	li       r0, 3
	stw      r0, 0x30(r29)

lbl_80453D08:
	li       r31, 1
	b        lbl_80453D68

lbl_80453D10:
	li       r31, 1
	b        lbl_80453D68

lbl_80453D18:
	cmplwi   r30, 0
	beq      lbl_80453D44
	lbz      r0, 4(r30)
	cmplwi   r0, 0
	beq      lbl_80453D44
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x30(r29)

lbl_80453D44:
	li       r31, 1
	b        lbl_80453D68

lbl_80453D4C:
	lis      r3, lbl_8049BA58@ha
	lis      r5, lbl_8049BA68@ha
	addi     r3, r3, lbl_8049BA58@l
	li       r4, 0x91
	addi     r5, r5, lbl_8049BA68@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80453D68:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80453D88
 * Size:	000110
 */
bool ObjBase::update(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x30(r3)
	cmpwi    r0, 2
	beq      lbl_80453E10
	bge      lbl_80453DC4
	cmpwi    r0, 0
	beq      lbl_80453DD0
	bge      lbl_80453DD8
	b        lbl_80453E7C

lbl_80453DC4:
	cmpwi    r0, 4
	bge      lbl_80453E7C
	b        lbl_80453E48

lbl_80453DD0:
	li       r31, 1
	b        lbl_80453E7C

lbl_80453DD8:
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80453E7C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	stw      r0, 0x30(r30)
	b        lbl_80453E7C

lbl_80453E10:
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80453E7C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	li       r0, 3
	stw      r0, 0x30(r30)
	b        lbl_80453E7C

lbl_80453E48:
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80453E7C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x30(r30)

lbl_80453E7C:
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
 * Address:	80453E98
 * Size:	000038
 */
void ObjBase::draw(Graphics& gfx)
{
	if (_30 != 0) {
		doDraw(gfx);
	}
}

/*
 * --INFO--
 * Address:	80453ED0
 * Size:	0000D8
 */
void ObjBase::doDraw(Graphics& gfx)
{
	// J2DPrint print(JFWSystem::systemFont, 0.0f);
	// print.initiate();
	// print._40.r = 0xFF;
	// print._40.g = 0xFF;
	// print._40.b = 0xFF;
	// print._40.a = 0xFF;
	// print._44.r = 0xFF;
	// print._44.g = 0xFF;
	// print._44.b = 0xFF;
	// print._44.a = 0xFF;
	// print.print(100.0f, m_name); // TODO: What's the other double param?
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	lfs      f1, lbl_80520B90@sda21(r2)
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r3
	addi     r3, r1, 0x18
	lwz      r4, systemFont__9JFWSystem@sda21(r13)
	bl       __ct__8J2DPrintFP7JUTFontf
	addi     r3, r1, 0x18
	bl       initiate__8J2DPrintFv
	li       r5, 0xff
	lfs      f1, lbl_80520B94@sda21(r2)
	stb      r5, 0x10(r1)
	addi     r3, r1, 0x18
	fmr      f2, f1
	stb      r5, 0x11(r1)
	stb      r5, 0x12(r1)
	stb      r5, 0x13(r1)
	lwz      r0, 0x10(r1)
	stb      r5, 8(r1)
	stw      r0, 0x14(r1)
	lbz      r4, 0x14(r1)
	lbz      r9, 0x15(r1)
	lbz      r8, 0x16(r1)
	lbz      r7, 0x17(r1)
	stb      r5, 9(r1)
	stb      r5, 0xa(r1)
	stb      r5, 0xb(r1)
	lwz      r0, 8(r1)
	stb      r4, 0x58(r1)
	stw      r0, 0xc(r1)
	lbz      r6, 0xc(r1)
	lbz      r5, 0xd(r1)
	lbz      r4, 0xe(r1)
	lbz      r0, 0xf(r1)
	stb      r9, 0x59(r1)
	stb      r8, 0x5a(r1)
	stb      r7, 0x5b(r1)
	stb      r6, 0x5c(r1)
	stb      r5, 0x5d(r1)
	stb      r4, 0x5e(r1)
	stb      r0, 0x5f(r1)
	lwz      r4, 0x14(r31)
	crset    6
	bl       print__8J2DPrintFffPCce
	addi     r3, r1, 0x18
	li       r4, -1
	bl       __dt__8J2DPrintFv
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80453FA8
 * Size:	00000C
 */
og::Screen::DispMemberBase* ObjBase::getDispMember() { return m_owner->m_dispMember; }

/*
 * --INFO--
 * Address:	80453FB4
 * Size:	00002C
 */
bool ObjBase::confirmSetScene(Screen::SetSceneArg& arg) { return doConfirmSetScene(arg); }

/*
 * --INFO--
 * Address:	80453FE0
 * Size:	00002C
 */
bool ObjBase::confirmStartScene(Screen::StartSceneArg* arg) { return doConfirmStartScene(arg); }

/*
 * --INFO--
 * Address:	8045400C
 * Size:	000034
 */
bool ObjBase::confirmEndScene(Screen::EndSceneArg* arg) { return doConfirmEndScene(arg); }

/*
 * --INFO--
 * Address:	80454040
 * Size:	000030
 */
Controller* ObjBase::getGamePad() const { return getOwner()->getGamePad(); }

/*
 * --INFO--
 * Address:	80454070
 * Size:	000044
 */
ObjMgrBase::ObjMgrBase()
    : _00()
{
	_00.clearRelations();
}

/*
 * --INFO--
 * Address:	804540B4
 * Size:	000058
 */
void ObjMgrBase::registObj(Screen::IObjBase* obj, Screen::SceneBase* scene)
{
	obj->setOwner(scene);
	_00.add(obj);
}

/*
 * update__Q26Screen10ObjMgrBaseFv
 * --INFO--
 * Address:	8045410C
 * Size:	000068
 */
bool ObjMgrBase::update(void)
{
	bool result = true;
	for (IObjBase* obj = (IObjBase*)_00.m_child; obj != nullptr; obj = (IObjBase*)obj->m_next) {
		if (!obj->update()) {
			result = false;
		}
	}
	return result;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 1
	stw      r30, 8(r1)
	lwz      r3, 0x10(r3)
	b        lbl_80454150

lbl_8045412C:
	lwz      r12, 0(r3)
	lwz      r30, 4(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8045414C
	li       r31, 0

lbl_8045414C:
	mr       r3, r30

lbl_80454150:
	cmplwi   r3, 0
	bne      lbl_8045412C
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
 * draw__Q26Screen10ObjMgrBaseFR8Graphics
 * --INFO--
 * Address:	80454174
 * Size:	00005C
 */
void ObjMgrBase::draw(Graphics& gfx)
{
	for (IObjBase* obj = (IObjBase*)_00.m_child; obj != nullptr; obj = (IObjBase*)obj->m_next) {
		obj->draw(gfx);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r3, 0x10(r3)
	b        lbl_804541B0

lbl_80454194:
	lwz      r12, 0(r3)
	mr       r4, r30
	lwz      r31, 4(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r3, r31

lbl_804541B0:
	cmplwi   r3, 0
	bne      lbl_80454194
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
 * Address:	804541D0
 * Size:	000098
 */
IObjBase* ObjMgrBase::search(Screen::SceneBase*, char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r4
	lwz      r31, 0x10(r3)
	b        lbl_8045423C

lbl_804541FC:
	mr       r3, r31
	lwz      r30, 4(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	cmplw    r3, r28
	bne      lbl_80454238
	lwz      r3, 0x14(r31)
	mr       r4, r29
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80454238
	mr       r3, r31
	b        lbl_80454248

lbl_80454238:
	mr       r31, r30

lbl_8045423C:
	cmplwi   r31, 0
	bne      lbl_804541FC
	li       r3, 0

lbl_80454248:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80454268
 * Size:	000078
 */
bool ObjMgrBase::start(Screen::StartSceneArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 1
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r3, 0x10(r3)
	b        lbl_804542B8

lbl_80454290:
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r30, 4(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_804542B4
	li       r31, 0

lbl_804542B4:
	mr       r3, r30

lbl_804542B8:
	cmplwi   r3, 0
	bne      lbl_80454290
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	804542E0
 * Size:	000078
 */
bool ObjMgrBase::end(Screen::EndSceneArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 1
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r3, 0x10(r3)
	b        lbl_80454330

lbl_80454308:
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r30, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8045432C
	li       r31, 0

lbl_8045432C:
	mr       r3, r30

lbl_80454330:
	cmplwi   r3, 0
	bne      lbl_80454308
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80454358
 * Size:	00007C
 */
bool ObjMgrBase::confirmSetScene(Screen::SetSceneArg&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 1
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r3, 0x10(r3)
	b        lbl_804543AC

lbl_80454380:
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r30, 4(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_804543A8
	li       r31, 0
	b        lbl_804543B4

lbl_804543A8:
	mr       r3, r30

lbl_804543AC:
	cmplwi   r3, 0
	bne      lbl_80454380

lbl_804543B4:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	804543D4
 * Size:	00007C
 */
bool ObjMgrBase::confirmStartScene(Screen::StartSceneArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 1
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r3, 0x10(r3)
	b        lbl_80454428

lbl_804543FC:
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r30, 4(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80454424
	li       r31, 0
	b        lbl_80454430

lbl_80454424:
	mr       r3, r30

lbl_80454428:
	cmplwi   r3, 0
	bne      lbl_804543FC

lbl_80454430:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80454450
 * Size:	00007C
 */
bool ObjMgrBase::confirmEndScene(Screen::EndSceneArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 1
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lwz      r3, 0x10(r3)
	b        lbl_804544A4

lbl_80454478:
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r30, 4(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_804544A0
	li       r31, 0
	b        lbl_804544AC

lbl_804544A0:
	mr       r3, r30

lbl_804544A4:
	cmplwi   r3, 0
	bne      lbl_80454478

lbl_804544AC:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	804544CC
//  * Size:	000008
//  */
// @24 @Screen::ObjBase::~ObjBase(void)
// {
// 	/*
// 	addi     r3, r3, -24
// 	b        __dt__Q26Screen7ObjBaseFv
// 	*/
// }
} // namespace Screen
