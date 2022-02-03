#include "types.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JKR/JKRFile.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JAI/JAIBasic.h"
#include "JSystem/JAI/JAInter.h"

extern JKRSolidHeap* JASDram;
/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JAIConst_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global dummyZeroVec__Q27JAInter5Const
    dummyZeroVec__Q27JAInter5Const:
        .float 0.0
        .float 0.0
        .float 0.0
    .global sCInfos_0__Q27JAInter5Const
    sCInfos_0__Q27JAInter5Const:
        .4byte 0x04020402
        .4byte 0x04020402
        .4byte 0x04020402
        .4byte 0x04020402
        .4byte 0x04020402
        .4byte 0x04020402
        .4byte 0x04020402
        .4byte 0x04020402

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global nullCamera__Q27JAInter5Const
    nullCamera__Q27JAInter5Const:
        .skip 0x68
    .global nullActor__Q27JAInter5Const
    nullActor__Q27JAInter5Const:
        .skip 0x14
    .global camMtx__Q27JAInter5Const
    camMtx__Q27JAInter5Const:
        .skip 0x30
    .global camTrans__Q27JAInter5Const
    camTrans__Q27JAInter5Const:
        .skip 0xC
    .global camPreTrans__Q27JAInter5Const
    camPreTrans__Q27JAInter5Const:
        .skip 0xC

    .section .sbss # 0x80514D80 - 0x80516360
    .global random__Q27JAInter5Const
    random__Q27JAInter5Const:
        .skip 0x4
*/
namespace JAInter {
/*
 * --INFO--
 * Address:	800AD1C4
 * Size:	0000F4
 */

u8* transInitDataFile(u8* param_1, u32 param_2)
{
	u8* charptr;
	charptr = new (JAIBasic::msCurrentHeap, 0x20) u8[param_2];
	if (charptr) {
		for (int i = 0; i < param_2; i++) {
			charptr[i] = param_1[i];
		}
	}
	return charptr;
}

/*
 * --INFO--
 * Address:	800AD2B8
 * Size:	0000E4
 */
void loadTmpDVDFile(char* filename, u8** param_2)
{
	JKRDvdFile JStack256;

	if (!(JStack256.open(filename) & -1)) {
		param_2[0] = 0;
		return;
	} else if (JStack256.m_dvdPlayer.m_fileSize == 0) {
		param_2[0] = 0;
		return;
	} else {
		param_2[0] = (u8*)JASDram->alloc(JStack256.m_dvdPlayer.m_fileSize, -0x20);
		if (JKRDvdRipper::loadToMainRAM(filename, *param_2, Switch_0, 0, 0, JKRDvdRipper::ALLOC_DIR_TOP, 0, 0, 0) == nullptr) {
			param_2[0] = 0;
		}
	}
	return;
}

/*
 * --INFO--
 * Address:	800AD39C
 * Size:	000030
 */
void deleteTmpDVDFile(u8** bing)
{
	if (bing[0] != 0)
		JASDram->freeTail();
}

/*
 * --INFO--
 * Address:	800AD3CC
 * Size:	000040
 */
u32 routeToTrack(u32 param_1)
{
	u32 uVar2;
	uVar2 = 0;
	if ((param_1 & 0xf0000000) == 0) {
		return 0;
	}
	if ((param_1 & 0xf0000000) == 0x10000000) {
		uVar2 = 0xf;
	} else if ((param_1 & 0xf0000000) == 0x20000000) {
		uVar2 = 0xff;
	}
	return param_1 & uVar2;
}

/*
 * --INFO--
 * Address:	800AD40C
 * Size:	000084
 */
// void __sinit_JAIConst_cpp(void)
//{
/*
stwu     r1, -0x10(r1)
mflr     r0
lis      r7, camTrans__Q27JAInter5Const@ha
lis      r5, camPreTrans__Q27JAInter5Const@ha
stw      r0, 0x14(r1)
li       r0, 0
addi     r7, r7, camTrans__Q27JAInter5Const@l
lis      r6, nullCamera__Q27JAInter5Const@ha
lis      r4, camMtx__Q27JAInter5Const@ha
lis      r3, nullActor__Q27JAInter5Const@ha
stwu     r0, nullActor__Q27JAInter5Const@l(r3)
addi     r5, r5, camPreTrans__Q27JAInter5Const@l
addi     r4, r4, camMtx__Q27JAInter5Const@l
cmplwi   r0, 0
stwu     r7, nullCamera__Q27JAInter5Const@l(r6)
stw      r5, 4(r6)
stw      r4, 8(r6)
stw      r0, 4(r3)
stw      r0, 8(r3)
stw      r0, 0xc(r3)
bne      lbl_800AD46C
li       r0, 1
stb      r0, 0x10(r3)
b        lbl_800AD474

lbl_800AD46C:
li       r0, 1
stb      r0, 0x10(r3)

lbl_800AD474:
addi     r3, r13, random__Q27JAInter5Const@sda21
li       r4, 0
bl       __ct__Q25JMath13TRandom_fast_FUl
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
*/
//}
} // namespace JAInter
