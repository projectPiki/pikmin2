#include "Dolphin/stl.h"
#include "JSystem/JUT/JUTException.h"
#include "LoadResource.h"
#include "og/Floor.h"
#include "og/newScreen/ogUtil.h"
#include "og/Screen/ogScreen.h"
#include "Screen/Enums.h"
#include "System.h"
#include "types.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048EC80
    lbl_8048EC80:
        .4byte 0x6F675363
        .4byte 0x656E6546
        .4byte 0x6C6F6F72
        .4byte 0x2E637070
        .4byte 0x00000000
        .4byte 0x7265735F
        .4byte 0x666C6F6F
        .4byte 0x725F6E61
        .4byte 0x6D655F6A
        .4byte 0x706E2E73
        .4byte 0x7A730000
        .4byte 0x7265735F
        .4byte 0x666C6F6F
        .4byte 0x725F6E61
        .4byte 0x6D655F65
        .4byte 0x6E675F70
        .4byte 0x616C2E73
        .4byte 0x7A730000
        .4byte 0x61726320
        .4byte 0x6973204E
        .4byte 0x554C4C21
        .4byte 0x210A0000
        .4byte 0x6E6F6465
        .4byte 0x20697320
        .4byte 0x4E554C4C
        .4byte 0x21210A00
        .4byte 0x666C6F6F
        .4byte 0x72207363
        .4byte 0x7265656E
        .4byte 0x00000000
        .4byte 0x44697370
        .4byte 0x4D656D62
        .4byte 0x65722069
        .4byte 0x73206E6F
        .4byte 0x74202746
        .4byte 0x4C4F4F52
        .4byte 0x27210000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og9newScreen5Floor
    __vt__Q32og9newScreen5Floor:
        .4byte 0
        .4byte 0
        .4byte getSceneType__Q32og9newScreen5FloorFv
        .4byte getOwnerID__Q32og9newScreen5FloorFv
        .4byte getMemberID__Q32og9newScreen5FloorFv
        .4byte isUseBackupSceneInfo__Q26Screen9SceneBaseFv
        .4byte isDrawInDemo__Q26Screen9SceneBaseCFv
        .4byte getResName__Q32og9newScreen5FloorCFv
        .4byte doCreateObj__Q32og9newScreen5FloorFP10JKRArchive
        .4byte
   doUserCallBackFunc__Q32og9newScreen5FloorFPQ28Resource10MgrCommand .4byte
   setPort__Q26Screen9SceneBaseFR8Graphics .4byte
   doUpdateActive__Q26Screen9SceneBaseFv .4byte
   doConfirmSetScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doConfirmStartScene__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doConfirmEndScene__Q26Screen9SceneBaseFRPQ26Screen11EndSceneArg .4byte
   doStart__Q26Screen9SceneBaseFPQ26Screen13StartSceneArg .4byte
   doEnd__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg .4byte
   setDefaultDispMember__Q26Screen9SceneBaseFv .4byte
   doSetBackupScene__Q26Screen9SceneBaseFRQ26Screen11SetSceneArg .4byte
   doGetFinishState__Q26Screen9SceneBaseFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DBB8
    lbl_8051DBB8:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
inline static void _Print(char* format, ...)
{
	char buffer[512];
	va_list args;
	va_start(args, format);
	sprintf(buffer, "%s: %s", __FILE__, buffer);
	vprintf(buffer, args);
}

const char fakeMatchFileName[] = __FILE__;

namespace og {

namespace newScreen {

/*
 * --INFO--
 * Address:	8031BE60
 * Size:	00003C
 */
Floor::Floor()
    : SceneBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q26Screen9SceneBaseFv
	lis      r4, __vt__Q32og9newScreen5Floor@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q32og9newScreen5Floor@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
Floor::~Floor() { }

/*
 * --INFO--
 * Address:	8031BE9C
 * Size:	00013C
 */
void Floor::doUserCallBackFunc(Resource::MgrCommand*)
{
	if (((Screen::DispMemberBase*)m_dispMemberBuffer)->isID(OWNER_OGA, MEMBER_FLOOR)) {
		const char* path = (sys->m_region == System::LANG_JAPANESE) ? "res_floor_name_jpn.szs" : "res_floor_name_eng_pal.szs";
		og::newScreen::makeLanguageResName(m_name, path);
		LoadResource::Arg resArg(m_name);
		LoadResource::Node* resNode = gLoadResourceMgr->mountArchive(resArg);
		// JUT_ASSERTLINE(96, resNode != nullptr, "node is NULL!!\n");
		// JKRArchive* archive = resNode->m_archive;
		// // TODO: How could this possibly be an earlier line than both
		// previous asserts?? JUT_ASSERTLINE(91, archive != nullptr, "arc is
		// NULL!!\n"); ObjFloor* obj = new ObjFloor("floor screen");
		// registObj(obj, archive);
		// setColorBG(0, 0, 0, 0);
		JKRArchive* archive = nullptr;
		if (resNode != nullptr) {
			// archive = resNode->m_archive;
			if (resNode->m_archive == nullptr) {
				JUTException::panic_f(fakeMatchFileName, 91, "arc is NULL!!\n");
			} else {
				archive = resNode->m_archive;
			}
			// archive = resNode->m_archive;
			// if (archive == nullptr) {
			// 	JUTException::panic_f(fakeMatchFileName, 91, "arc is NULL!!\n");
			// }
			// JUT_ASSERTLINE(91, archive != nullptr, "arc is NULL!!\n");
		} else {
			JUTException::panic_f(fakeMatchFileName, 96, "node is NULL!!\n");
			// JUT_PANICLINE(96, "node is NULL!!\n");
		}
		ObjFloor* obj = new ObjFloor("floor screen");
		registObj(obj, archive);
		setColorBG(0, 0, 0, 0);
		// JKRArchive* archive = resNode->m_archive;
		// if (archive == nullptr) {
		// 	JUT_PANICLINE(91, "arc is NULL!!\n");
		// } else {
		// 	ObjFloor* obj = new ObjFloor("floor screen");
		// 	registObj(obj, archive);
		// 	setColorBG(0, 0, 0, 0);
		// }
	} else {
		JUTException::panic_f(fakeMatchFileName, 111, "DispMember is not \'FLOOR\'!");
		// JUT_PANICLINE(111, "DispMember is not \'FLOOR\'!");
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r4, 0x004F4741@ha
	lis      r6, lbl_8048EC80@ha
	stw      r0, 0x54(r1)
	lis      r5, 0x4C4F4F52@ha
	addi     r4, r4, 0x004F4741@l
	stw      r31, 0x4c(r1)
	addi     r31, r6, lbl_8048EC80@l
	addi     r6, r5, 0x4C4F4F52@l
	li       r5, 0x46
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r29, r3
	lwz      r3, 0x21c(r3)
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8031BFA8
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x2c
	lwz      r0, 0xd4(r3)
	cmpwi    r0, 5
	bne      lbl_8031BEFC
	addi     r4, r31, 0x14

lbl_8031BEFC:
	addi     r3, r29, 4
	bl       makeLanguageResName__Q22og9newScreenFPcPCc
	addi     r3, r1, 8
	addi     r4, r29, 4
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 8
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	li       r30, 0
	beq      lbl_8031BF50
	lwz      r0, 0x34(r3)
	cmplwi   r0, 0
	mr       r30, r0
	bne      lbl_8031BF64
	addi     r3, r31, 0
	addi     r5, r31, 0x48
	li       r4, 0x5b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8031BF64

lbl_8031BF50:
	addi     r3, r31, 0
	addi     r5, r31, 0x58
	li       r4, 0x60
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031BF64:
	li       r3, 0xbc
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8031BF80
	addi     r4, r31, 0x68
	bl       __ct__Q32og9newScreen8ObjFloorFPCc
	mr       r4, r3

lbl_8031BF80:
	mr       r3, r29
	mr       r5, r30
	bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
	mr       r3, r29
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	bl       setColorBG__Q26Screen9SceneBaseFUcUcUcUc
	b        lbl_8031BFBC

lbl_8031BFA8:
	addi     r3, r31, 0
	addi     r5, r31, 0x78
	li       r4, 0x6f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031BFBC:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031BFD8
 * Size:	000004
 */
void Floor::doCreateObj(JKRArchive*) { }

/*
 * --INFO--
 * Address:	8031BFDC
 * Size:	000008
 */
const char* Floor::getResName() const { return ""; }

/*
 * --INFO--
 * Address:	8031BFE4
 * Size:	000008
 */
SceneType Floor::getSceneType() { return SCENE_FLOOR; }

/*
 * --INFO--
 * Address:	8031BFEC
 * Size:	00000C
 */
ScreenOwnerID Floor::getOwnerID()
{
	return OWNER_OGA;
	/*
	lis      r3, 0x004F4741@ha
	addi     r3, r3, 0x004F4741@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8031BFF8
 * Size:	000010
 */
ScreenMemberID Floor::getMemberID()
{
	return MEMBER_FLOOR;
	/*
	lis      r4, 0x4C4F4F52@ha
	li       r3, 0x46
	addi     r4, r4, 0x4C4F4F52@l
	blr
	*/
}
} // namespace newScreen
} // namespace og
