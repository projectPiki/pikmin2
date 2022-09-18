#include "JSystem/JKR/JKRFileLoader.h"
#include "Dolphin/ctype.h"
#include "Dolphin/string.h"
#include "JSystem/JKR/JKRArchive.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JKRFileLoader_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__13JKRFileLoader
    __vt__13JKRFileLoader:
        .4byte 0
        .4byte 0
        .4byte __dt__13JKRFileLoaderFv
        .4byte unmount__13JKRFileLoaderFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sVolumeList__13JKRFileLoader
    sVolumeList__13JKRFileLoader:
        .skip 0xC

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global rootPath$2747
    rootPath$2747:
        .byte 0x2f
        .skip 0x3

    .section .sbss # 0x80514D80 - 0x80516360
    .global sCurrentVolume__13JKRFileLoader
    sCurrentVolume__13JKRFileLoader:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516528
    lbl_80516528:
        .4byte 0x2F000000
        .4byte 0x00000000
*/

static const char* rootPath = "/";
JSUList<JKRFileLoader> JKRFileLoader::sVolumeList;

/*
 * --INFO--
 * Address:	80022E98
 * Size:	000058
 */
JKRFileLoader::JKRFileLoader()
    : JKRDisposer()
    , _18(this)
    , _28(nullptr)
    , m_magicWord(0)
    , m_mountCount(0)
{
}

/*
 * --INFO--
 * Address:	80022EF0
 * Size:	00008C
 * __dt__13JKRFileLoaderFv
 */
JKRFileLoader::~JKRFileLoader()
{
	if (sCurrentVolume == this) {
		sCurrentVolume = nullptr;
	}
}

/*
 * --INFO--
 * Address:	80022F7C
 * Size:	000050
 */
void JKRFileLoader::unmount()
{
	if (m_mountCount != 0) {
		if (--m_mountCount == 0) {
			delete this;
		}
	}
}

/*
 * --INFO--
 * Address:	80022FCC
 * Size:	00004C
 * getGlbResource__13JKRFileLoaderFPCc
 */
void* JKRFileLoader::getGlbResource(const char* path)
{
	const char* components[2];
	components[0]         = path;
	JKRFileLoader* loader = findVolume(components);
	return (loader == nullptr) ? nullptr : loader->getResource(components[0]);
}

/*
 * --INFO--
 * Address:	80023018
 * Size:	000098
 * getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
 */
void* JKRFileLoader::getGlbResource(const char* p1, JKRFileLoader* p2)
{
	void* resource = nullptr;
	if (p2) {
		resource = p2->getResource(0, p1);
	} else {
		for (JSULink<JKRFileLoader>* link = sVolumeList.getFirst(); link != nullptr; link = link->getNext()) {
			resource = link->getObject()->getResource(0, p1);
			if (resource) {
				break;
			}
		}
	}
	return resource;
}

/*
 * --INFO--
 * Address:	800230B0
 * Size:	00008C
 */
JKRFileLoader* JKRFileLoader::findVolume(const char** components)
{
	// TODO: Should this be 0x101 or 0x102?
	char nameBuffer[0x104];
	if (*components[0] != '/') {
		return sCurrentVolume;
	}
	fetchVolumeName(nameBuffer, 0x101, components[0]);
	components[0] = nameBuffer;
	// TODO: Link shenanigans
	for (JSULink<JKRFileLoader>* link = sVolumeList.getFirst(); link != nullptr; link = link->getNext()) {
		if (strcmp(nameBuffer, link->getObject()->_28) == 0) {
			return link->getObject();
		}
	}
	return nullptr;
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stw      r31, 0x11c(r1)
	mr       r31, r3
	lwz      r5, 0(r3)
	lbz      r0, 0(r5)
	cmpwi    r0, 0x2f
	beq      lbl_800230DC
	lwz      r3, sCurrentVolume__13JKRFileLoader@sda21(r13)
	b        lbl_80023128

lbl_800230DC:
	addi     r3, r1, 8
	li       r4, 0x101
	bl       fetchVolumeName__13JKRFileLoaderFPclPCc
	stw      r3, 0(r31)
	lis      r4, sVolumeList__13JKRFileLoader@ha
	lwz      r31, sVolumeList__13JKRFileLoader@l(r4)
	b        lbl_8002311C

lbl_800230F8:
	lwz      r4, 0(r31)
	addi     r3, r1, 8
	lwz      r4, 0x28(r4)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80023118
	lwz      r3, 0(r31)
	b        lbl_80023128

lbl_80023118:
	lwz      r31, 0xc(r31)

lbl_8002311C:
	cmplwi   r31, 0
	bne      lbl_800230F8
	li       r3, 0

lbl_80023128:
	lwz      r0, 0x124(r1)
	lwz      r31, 0x11c(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002313C
 * Size:	0000E0
 */
void JKRFileLoader::fetchVolumeName(char* nameBuffer, long bufferLength, const char* path)
{
	if (strcmp(path, "/") == 0) {
		strcpy(nameBuffer, rootPath);
	} else {
		for (const char* v1 = path + 1; *v1 != '\0' && *v1 != '/'; v1++) {
			if (1 < bufferLength) {
				*nameBuffer = (*v1 == -1) ? -1 : tolower(*v1);
				nameBuffer++;
				bufferLength--;
			}
		}
		*nameBuffer = '\0';
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	addi     r4, r2, lbl_80516528@sda21
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r31
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80023188
	mr       r3, r29
	addi     r4, r13, rootPath$2747@sda21
	bl       strcpy
	addi     r3, r13, rootPath$2747@sda21
	b        lbl_80023200

lbl_80023188:
	lis      r3, __lower_map@ha
	addi     r31, r31, 1
	addi     r3, r3, __lower_map@l
	b        lbl_800231CC

lbl_80023198:
	cmpwi    r30, 1
	ble      lbl_800231C8
	extsb    r0, r4
	cmpwi    r0, -1
	bne      lbl_800231B4
	li       r0, -1
	b        lbl_800231BC

lbl_800231B4:
	clrlwi   r0, r0, 0x18
	lbzx     r0, r3, r0

lbl_800231BC:
	stb      r0, 0(r29)
	addi     r29, r29, 1
	addi     r30, r30, -1

lbl_800231C8:
	addi     r31, r31, 1

lbl_800231CC:
	lbz      r4, 0(r31)
	extsb.   r0, r4
	beq      lbl_800231E4
	extsb    r0, r4
	cmpwi    r0, 0x2f
	bne      lbl_80023198

lbl_800231E4:
	li       r0, 0
	stb      r0, 0(r29)
	lbz      r0, 0(r31)
	extsb.   r0, r0
	bne      lbl_800231FC
	addi     r31, r13, rootPath$2747@sda21

lbl_800231FC:
	mr       r3, r31

lbl_80023200:
	lwz      r0, 0x24(r1)
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
 * Address:	8002321C
 * Size:	000044
 */
// void __sinit_JKRFileLoader_cpp(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	lis      r3, sVolumeList__13JKRFileLoader@ha
// 	stw      r0, 0x14(r1)
// 	addi     r3, r3, sVolumeList__13JKRFileLoader@l
// 	bl       initiate__10JSUPtrListFv
// 	lis      r3, sVolumeList__13JKRFileLoader@ha
// 	lis      r4, "__dt__24JSUList<13JKRFileLoader>Fv"@ha
// 	lis      r5, lbl_804EFFA0@ha
// 	addi     r3, r3, sVolumeList__13JKRFileLoader@l
// 	addi     r4, r4, "__dt__24JSUList<13JKRFileLoader>Fv"@l
// 	addi     r5, r5, lbl_804EFFA0@l
// 	bl       __register_global_object
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80023260
 * Size:	000054
 */
// void JSUList<JKRFileLoader>::~JSUList()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_80023298
// 	li       r4, 0
// 	bl       __dt__10JSUPtrListFv
// 	extsh.   r0, r31
// 	ble      lbl_80023298
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_80023298:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }
