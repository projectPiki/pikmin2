#include "Dolphin/runtime.h"
#include "JSystem/JGeometry.h"
#include "ebi/E2DGraph.h"
#include "ebi/Screen/TOption.h"
#include "Game/Data.h"
#include "JSystem/JUT/JUTException.h"
#include "og/newScreen/ogUtil.h"
#include "P2DScreen.h"
#include "System.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80496448
    lbl_80496448:
        .4byte 0x65626953
        .4byte 0x63726565
        .4byte 0x6E4F7074
        .4byte 0x696F6E00
        .4byte 0x53637265
        .4byte 0x656E3A3A
        .4byte 0x544F7074
        .4byte 0x696F6E3A
        .4byte 0x3A736574
        .4byte 0x41726368
        .4byte 0x69766500
        .4byte 0x53637265
        .4byte 0x656E3A3A
        .4byte 0x544F7074
        .4byte 0x696F6E3A
        .4byte 0x3A736574
        .4byte 0x5F626C6F
        .4byte 0x5F503244
        .4byte 0x53637265
        .4byte 0x656E3A3A
        .4byte 0x4D677200
        .4byte 0x6F707469
        .4byte 0x6F6E2E62
        .4byte 0x6C6F0000
        .4byte 0x53637265
        .4byte 0x656E3A3A
        .4byte 0x544F7074
        .4byte 0x696F6E3A
        .4byte 0x3A6E6577
        .4byte 0x5F6F6743
        .4byte 0x616C6C42
        .4byte 0x61636B00
        .4byte 0x6F707469
        .4byte 0x6F6E2E62
        .4byte 0x636B0000
        .4byte 0x544F7074
        .4byte 0x696F6E3A
        .4byte 0x3A6C6F61
        .4byte 0x64526573
        .4byte 0x6F757263
        .4byte 0x65000000
        .4byte 0x6F707469
        .4byte 0x6F6E5F75
        .4byte 0x732E737A
        .4byte 0x73000000
        .4byte 0x65626953
        .4byte 0x63726565
        .4byte 0x6E4F7074
        .4byte 0x696F6E2E
        .4byte 0x63707000
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804E8750
    lbl_804E8750:
        .4byte lbl_803CC0F4
        .4byte lbl_803CBCD0
        .4byte lbl_803CBDC4
        .4byte lbl_803CBE8C
        .4byte lbl_803CBF50
        .4byte lbl_803CBFD8
        .4byte lbl_803CC0CC
    .global lbl_804E876C
    lbl_804E876C:
        .4byte lbl_803CD6B8
        .4byte lbl_803CD5C4
        .4byte lbl_803CD5F0
        .4byte lbl_803CD610
        .4byte lbl_803CD640
        .4byte lbl_803CD670
        .4byte lbl_803CD69C
    .global __vt__Q33ebi6Screen7TOption
    __vt__Q33ebi6Screen7TOption:
        .4byte 0
        .4byte 0
        .4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
        .4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
        .4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
        .4byte killScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte update__Q33ebi6Screen11TScreenBaseFv
        .4byte draw__Q33ebi6Screen11TScreenBaseFv
        .4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doSetArchive__Q33ebi6Screen7TOptionFP10JKRArchive
        .4byte doOpenScreen__Q33ebi6Screen7TOptionFPQ33ebi6Screen7ArgOpen
        .4byte doCloseScreen__Q33ebi6Screen7TOptionFPQ33ebi6Screen8ArgClose
        .4byte doKillScreen__Q33ebi6Screen11TScreenBaseFv
        .4byte doInitWaitState__Q33ebi6Screen7TOptionFv
        .4byte doUpdateStateOpen__Q33ebi6Screen7TOptionFv
        .4byte doUpdateStateWait__Q33ebi6Screen7TOptionFv
        .4byte doUpdateStateClose__Q33ebi6Screen7TOptionFv
        .4byte doDraw__Q33ebi6Screen7TOptionFv
        .4byte getName__Q33ebi6Screen7TOptionFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FA00
    lbl_8051FA00:
        .4byte 0x41200000
    .global lbl_8051FA04
    lbl_8051FA04:
        .4byte 0x437F0000
    .global lbl_8051FA08
    lbl_8051FA08:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051FA10
    lbl_8051FA10:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051FA18
    lbl_8051FA18:
        .4byte 0x40555555
    .global lbl_8051FA1C
    lbl_8051FA1C:
        .4byte 0x00000000
    .global lbl_8051FA20
    lbl_8051FA20:
        .4byte 0x42700000
    .global lbl_8051FA24
    lbl_8051FA24:
        .float 0.1
    .global lbl_8051FA28
    lbl_8051FA28:
        .4byte 0x41F00000
    .global lbl_8051FA2C
    lbl_8051FA2C:
        .4byte 0x3F19999A
    .global lbl_8051FA30
    lbl_8051FA30:
        .4byte 0x3FD55555
    .global lbl_8051FA34
    lbl_8051FA34:
        .float 0.5
    .global lbl_8051FA38
    lbl_8051FA38:
        .4byte 0x3E4CCCCD
    .global lbl_8051FA3C
    lbl_8051FA3C:
        .4byte 0xBF000000
    .global lbl_8051FA40
    lbl_8051FA40:
        .float 1.0
    .global lbl_8051FA44
    lbl_8051FA44:
        .4byte 0x3F28F5C3
    .global lbl_8051FA48
    lbl_8051FA48:
        .float 0.15
    .global lbl_8051FA4C
    lbl_8051FA4C:
        .4byte 0x544F7074
        .4byte 0x696F6E00
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char* name, ...) { OSReport("ebiScreenOption"); }

namespace ebi {
namespace Screen {

/*
 * --INFO--
 * Address:	803CADC8
 * Size:	000100
 */
void TOptionParameter::loadRam(void)
{
	Game::CommonSaveData::Mgr* mgr = sys->m_playData;
	_00                            = mgr->_3C;
	_01                            = mgr->_3B;
	switch (mgr->m_soundMode) {
	case 0:
		if (true) {
			m_soundMode = 0;
		}
		break;
	case 1:
		m_soundMode = 1;
		break;
	case 2:
		m_soundMode = 2;
		break;
	}
	m_bgmVolume   = (float)mgr->_39 / 255.0f * 10.0f;
	m_seVolume    = (float)mgr->_3A / 255.0f * 10.0f;
	m_isDeflicker = mgr->_3D;
}

/*
 * --INFO--
 * Address:	803CAEC8
 * Size:	0000FC
 */
void TOptionParameter::saveRam(void)
{
	Game::CommonSaveData::Mgr* mgr = sys->m_playData;
	mgr->_3C                       = _00;
	mgr->_3B                       = _01;
	switch (m_soundMode) {
	case 0:
		mgr->setSoundModeMono();
		break;
	case 1:
		mgr->setSoundModeStereo();
		break;
	case 2:
		mgr->setSoundModeSurround();
		break;
	}
	mgr->setBgmVolume(m_bgmVolume / 10.0f);
	mgr->setSeVolume(m_seVolume / 10.0f);
	mgr->setDeflicker(m_isDeflicker);

	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
mr       r30, r3
lwz      r4, sys@sda21(r13)
lbz      r0, 0(r3)
lwz      r31, 0x60(r4)
stb      r0, 0x3c(r31)
lbz      r0, 1(r3)
stb      r0, 0x3b(r31)
lwz      r0, 4(r3)
cmpwi    r0, 1
beq      lbl_803CAF2C
bge      lbl_803CAF14
cmpwi    r0, 0
bge      lbl_803CAF20
b        lbl_803CAF40

lbl_803CAF14:
cmpwi    r0, 3
bge      lbl_803CAF40
b        lbl_803CAF38

lbl_803CAF20:
mr       r3, r31
bl       setSoundModeMono__Q34Game14CommonSaveData3MgrFv
b        lbl_803CAF40

lbl_803CAF2C:
mr       r3, r31
bl       setSoundModeStereo__Q34Game14CommonSaveData3MgrFv
b        lbl_803CAF40

lbl_803CAF38:
mr       r3, r31
bl       setSoundModeSurround__Q34Game14CommonSaveData3MgrFv

lbl_803CAF40:
lwz      r4, 8(r30)
lis      r0, 0x4330
stw      r0, 8(r1)
mr       r3, r31
xoris    r0, r4, 0x8000
lfd      f2, lbl_8051FA10@sda21(r2)
stw      r0, 0xc(r1)
lfs      f0, lbl_8051FA00@sda21(r2)
lfd      f1, 8(r1)
fsubs    f1, f1, f2
fdivs    f1, f1, f0
bl       setBgmVolume__Q34Game14CommonSaveData3MgrFf
lwz      r4, 0xc(r30)
lis      r0, 0x4330
stw      r0, 0x10(r1)
mr       r3, r31
xoris    r0, r4, 0x8000
lfd      f2, lbl_8051FA10@sda21(r2)
stw      r0, 0x14(r1)
lfs      f0, lbl_8051FA00@sda21(r2)
lfd      f1, 0x10(r1)
fsubs    f1, f1, f2
fdivs    f1, f1, f0
bl       setSeVolume__Q34Game14CommonSaveData3MgrFf
lbz      r4, 0x10(r30)
mr       r3, r31
bl       setDeflicker__Q34Game14CommonSaveData3MgrFb
lwz      r0, 0x24(r1)
lwz      r31, 0x1c(r1)
lwz      r30, 0x18(r1)
mtlr     r0
addi     r1, r1, 0x20
blr
	*/
}

/*
 * --INFO--
 * Address:	803CAFC4
 * Size:	000024
 */
void TOptionParameter::initParamForTest(void)
{
	_00           = false;
	_01           = false;
	m_soundMode   = 0;
	m_bgmVolume   = 1;
	m_seVolume    = 1;
	m_isDeflicker = false;
}

/*
 * --INFO--
 * Address:	803CAFE8
 * Size:	0008D4
 */
void TOption::doSetArchive(JKRArchive* archive)
{
	sys->heapStatusStart("Screen::TOption::setArchive", nullptr);
	sys->heapStatusStart("Screen::TOption::set_blo_P2DScreen::Mgr", nullptr);
	_10C = new P2DScreen::Mgr_tuning();
	_10C->set("option.blo", 0x1100000, archive);
	sys->heapStatusEnd("Screen::TOption::set_blo_P2DScreen::Mgr");
	_110 = (J2DTextBox*)E2DScreen_searchAssert(_10C, 'Tsin_y');
	_114 = (J2DTextBox*)E2DScreen_searchAssert(_10C, 'Tsin_n');
	_118 = (J2DTextBox*)E2DScreen_searchAssert(_10C, 'Tmon');
	_11C = (J2DTextBox*)E2DScreen_searchAssert(_10C, 'Tste');
	_120 = (J2DTextBox*)E2DScreen_searchAssert(_10C, 'Tsro');
	_124 = (J2DTextBox*)E2DScreen_searchAssert(_10C, 'Tdef_y');
	_128 = (J2DTextBox*)E2DScreen_searchAssert(_10C, 'Tdef_n');
	for (int i = 0; i < 10; i++) {
		_154[i] = E2DScreen_searchAssert(_10C, 'Pbgmm00' + i);
		_12C[i] = E2DScreen_searchAssert(_10C, 'Psem00' + i);
	}
	_17C    = E2DScreen_searchAssert(_10C, 'NDEF');
	_180[7] = E2DScreen_searchAssert(_10C, 'Tdefmg0');
	_180[8] = E2DScreen_searchAssert(_10C, 'Tdefmg0s');
	_180[0] = E2DScreen_searchAssert(_10C, 'Ngrpfri');
	_180[1] = E2DScreen_searchAssert(_10C, 'Ngrpsin');
	_180[2] = E2DScreen_searchAssert(_10C, 'Ngrpsou');
	_180[3] = E2DScreen_searchAssert(_10C, 'Ngrpbgm');
	_180[4] = E2DScreen_searchAssert(_10C, 'Ngrpse');
	_180[5] = E2DScreen_searchAssert(_10C, 'Ngrpdef');
	_180[6] = E2DScreen_searchAssert(_10C, 'Ngrpsav');
	_180[9] = E2DScreen_searchAssert(_10C, 'Wselctw');
	_1A8    = E2DScreen_searchAssert(_10C, 'Wsetfri');
	_1AC    = E2DScreen_searchAssert(_10C, 'Wsetsin');
	_1B0    = E2DScreen_searchAssert(_10C, 'Wsetsro');
	_1B4    = E2DScreen_searchAssert(_10C, 'Wsetbgm');
	_1B8    = E2DScreen_searchAssert(_10C, 'Wsetse');
	_1BC    = E2DScreen_searchAssert(_10C, 'Wsetdef');
	_1C0    = E2DScreen_searchAssert(_10C, 'Wsetsav');
	sys->heapStatusStart("Screen::TOption::new_ogCallBack", nullptr);
	E2DPane_setTreeCallBackMessage(_10C, _10C);
	sys->heapStatusEnd("Screen::TOption::new_ogCallBack");
	_10C->addCallBackPane(_10C, &_1E4);
	_10C->addCallBackPane(_10C, &_220);
	_1E4.loadAnm("option.bck", archive, 0x14, 0x29);
	_10C->addCallBack('Psin_yc', &_2EC[0]);
	_10C->addCallBack('Psin_nc', &_2EC[1]);
	_10C->addCallBack('Pmonc', &_2EC[2]);
	_10C->addCallBack('Pstec', &_2EC[3]);
	_10C->addCallBack('Psroc', &_2EC[4]);
	_10C->addCallBack('Pdef_yc', &_2EC[5]);
	_10C->addCallBack('Pdef_nc', &_2EC[6]);
	for (int i = 0; i < 10; i++) {
		_10C->addCallBack('Pbgmm00' + i, &_4AC[i]);
		_10C->addCallBack('Pbgmm00c' + i * 0x100, &_72C[i]);
		_10C->addCallBack('Psem00' + i, &_9AC[i]);
		_10C->addCallBack('Psem00c' + i * 0x100, &_C2C[i]);
	}
	J2DTextBox* tb = (J2DTextBox*)E2DScreen_searchAssert(_10C, 'Tsin_y');
	_1C4._00       = tb->_104;
	_1C4._04       = tb->_108;
	_1C4.m_white   = tb->getWhite();
	_1C4.m_black   = tb->getBlack();
	tb             = (J2DTextBox*)E2DScreen_searchAssert(_10C, 'Thscolor');
	_1D4._00       = tb->_104;
	_1D4._04       = tb->_108;
	_1D4.m_white   = tb->getWhite();
	_1D4.m_black   = tb->getBlack();
	_240.set((J2DTextBox*)E2DScreen_searchAssert(_10C, 'Tsin_y'), (J2DTextBox*)E2DScreen_searchAssert(_10C, 'Tscolor'));
	_240._1C = 1;
	_240._44 = sys->m_deltaTime * 3.3333333f;
	_240._40 = 0.0f;
	_240._48 = 1;
	_240._49 = 0;
	_10C->addCallBackPane(nullptr, &_240);
	_10C->addCallBackPane(nullptr, &_28C);
	_28C._2C       = 0xff;
	_28C._2D       = 0x55;
	_28C._1C       = 1;
	_28C._24       = sys->m_deltaTime * 3.3333333f;
	_28C._20       = 0.0f;
	_28C._28       = 1;
	_28C._29       = 0;
	J2DPane* Nbotn = E2DScreen_searchAssert(_10C, 'Nbotn');
	_10C->addCallBackPane(Nbotn, &_2BC);
	E2DPane_setTreeInfluencedAlpha(Nbotn, true);
	_10C->addCallBack('Wselctw', &_EAC[0]);
	E2DPane_setTreeShow(_10C);
	E2DScreen_searchAssert(_10C, 'Ngrpwset')->setAlpha(0);
	for (int i = 0; i < 7; i++) {
		E2DPane_setTreeInfluencedAlpha(&_1A8[i], true);
		_1A8[i].setAlpha(0);
	}
	E2DPane_setTreeHide(E2DScreen_searchAssert(_10C, 'DATA'));
	E2DPane_setTreeInfluencedAlpha(_17C, true);
	_17C->setAlpha(0);
	sys->heapStatusEnd("Screen::TOption::setArchive");
	/*
stwu     r1, -0x60(r1)
mflr     r0
lis      r5, lbl_80496448@ha
stw      r0, 0x64(r1)
stmw     r19, 0x2c(r1)
mr       r31, r3
addi     r19, r5, lbl_80496448@l
mr       r20, r4
li       r5, 0
addi     r4, r19, 0x10
lwz      r3, sys@sda21(r13)
bl       heapStatusStart__6SystemFPcP7JKRHeap
lwz      r3, sys@sda21(r13)
addi     r4, r19, 0x2c
li       r5, 0
bl       heapStatusStart__6SystemFPcP7JKRHeap
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_803CB040
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_803CB040:
stw      r0, 0x10c(r31)
mr       r6, r20
addi     r4, r19, 0x54
lis      r5, 0x110
lwz      r3, 0x10c(r31)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, sys@sda21(r13)
addi     r4, r19, 0x2c
bl       heapStatusEnd__6SystemFPc
lis      r4, 0x696E5F79@ha
lwz      r3, 0x10c(r31)
addi     r6, r4, 0x696E5F79@l
li       r5, 0x5473
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x110(r31)
lis      r3, 0x696E5F6E@ha
addi     r6, r3, 0x696E5F6E@l
li       r5, 0x5473
lwz      r3, 0x10c(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x114(r31)
lis      r3, 0x546D6F6E@ha
addi     r6, r3, 0x546D6F6E@l
li       r5, 0
lwz      r3, 0x10c(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x118(r31)
lis      r3, 0x54737465@ha
addi     r6, r3, 0x54737465@l
li       r5, 0
lwz      r3, 0x10c(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x11c(r31)
lis      r3, 0x5473726F@ha
addi     r6, r3, 0x5473726F@l
li       r5, 0
lwz      r3, 0x10c(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x120(r31)
lis      r3, 0x65665F79@ha
addi     r6, r3, 0x65665F79@l
li       r5, 0x5464
lwz      r3, 0x10c(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x124(r31)
lis      r3, 0x65665F6E@ha
addi     r6, r3, 0x65665F6E@l
li       r5, 0x5464
lwz      r3, 0x10c(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
lis      r6, 0x6D6D3030@ha
lis      r5, 0x00506267@ha
lis      r4, 0x656D3030@ha
stw      r3, 0x128(r31)
mr       r25, r31
addi     r24, r6, 0x6D6D3030@l
addi     r23, r5, 0x00506267@l
addi     r22, r4, 0x656D3030@l
li       r27, 0
li       r21, 0x5073

lbl_803CB130:
srawi    r26, r27, 0x1f
lwz      r3, 0x10c(r31)
addc     r6, r27, r24
adde     r5, r26, r23
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x154(r25)
addc     r6, r27, r22
adde     r5, r26, r21
lwz      r3, 0x10c(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
addi     r27, r27, 1
stw      r3, 0x12c(r25)
cmpwi    r27, 0xa
addi     r25, r25, 4
blt      lbl_803CB130
lis      r4, 0x4E444546@ha
lwz      r3, 0x10c(r31)
addi     r6, r4, 0x4E444546@l
li       r5, 0
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x17c(r31)
lis      r5, 0x666D6730@ha
lis      r4, 0x00546465@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x666D6730@l
addi     r5, r4, 0x00546465@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x19c(r31)
lis      r5, 0x6D673073@ha
lis      r4, 0x54646566@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x6D673073@l
addi     r5, r4, 0x54646566@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x1a0(r31)
lis      r5, 0x70667269@ha
lis      r4, 0x004E6772@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x70667269@l
addi     r5, r4, 0x004E6772@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x180(r31)
lis      r5, 0x7073696E@ha
lis      r4, 0x004E6772@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x7073696E@l
addi     r5, r4, 0x004E6772@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x184(r31)
lis      r5, 0x70736F75@ha
lis      r4, 0x004E6772@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x70736F75@l
addi     r5, r4, 0x004E6772@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x188(r31)
lis      r5, 0x7062676D@ha
lis      r4, 0x004E6772@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x7062676D@l
addi     r5, r4, 0x004E6772@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x18c(r31)
lis      r3, 0x72707365@ha
addi     r6, r3, 0x72707365@l
li       r5, 0x4e67
lwz      r3, 0x10c(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x190(r31)
lis      r5, 0x70646566@ha
lis      r4, 0x004E6772@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x70646566@l
addi     r5, r4, 0x004E6772@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x194(r31)
lis      r5, 0x70736176@ha
lis      r4, 0x004E6772@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x70736176@l
addi     r5, r4, 0x004E6772@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x198(r31)
lis      r5, 0x6C637477@ha
lis      r4, 0x00577365@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x6C637477@l
addi     r5, r4, 0x00577365@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x1a4(r31)
lis      r5, 0x74667269@ha
lis      r4, 0x00577365@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x74667269@l
addi     r5, r4, 0x00577365@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x1a8(r31)
lis      r5, 0x7473696E@ha
lis      r4, 0x00577365@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x7473696E@l
addi     r5, r4, 0x00577365@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x1ac(r31)
lis      r5, 0x7473726F@ha
lis      r4, 0x00577365@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x7473726F@l
addi     r5, r4, 0x00577365@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x1b0(r31)
lis      r5, 0x7462676D@ha
lis      r4, 0x00577365@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x7462676D@l
addi     r5, r4, 0x00577365@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x1b4(r31)
lis      r3, 0x65747365@ha
addi     r6, r3, 0x65747365@l
li       r5, 0x5773
lwz      r3, 0x10c(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x1b8(r31)
lis      r5, 0x74646566@ha
lis      r4, 0x00577365@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x74646566@l
addi     r5, r4, 0x00577365@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x1bc(r31)
lis      r5, 0x74736176@ha
lis      r4, 0x00577365@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x74736176@l
addi     r5, r4, 0x00577365@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
stw      r3, 0x1c0(r31)
addi     r4, r19, 0x60
li       r5, 0
lwz      r3, sys@sda21(r13)
bl       heapStatusStart__6SystemFPcP7JKRHeap
lwz      r3, 0x10c(r31)
mr       r4, r3
bl       E2DPane_setTreeCallBackMessage__3ebiFPQ29P2DScreen3MgrP7J2DPane
lwz      r3, sys@sda21(r13)
addi     r4, r19, 0x60
bl       heapStatusEnd__6SystemFPc
lwz      r3, 0x10c(r31)
addi     r5, r31, 0x1e4
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0x10c(r31)
addi     r5, r31, 0x220
mr       r4, r3
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
mr       r5, r20
addi     r3, r31, 0x1e4
addi     r4, r19, 0x80
li       r6, 0x14
li       r7, 0x29
bl       loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
lis      r5, 0x6E5F7963@ha
lis      r4, 0x00507369@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x6E5F7963@l
addi     r5, r4, 0x00507369@l
addi     r7, r31, 0x2ec
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r5, 0x6E5F6E63@ha
lis      r4, 0x00507369@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x6E5F6E63@l
addi     r5, r4, 0x00507369@l
addi     r7, r31, 0x32c
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r4, 0x6D6F6E63@ha
lwz      r3, 0x10c(r31)
addi     r6, r4, 0x6D6F6E63@l
addi     r7, r31, 0x36c
li       r5, 0x50
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r4, 0x73746563@ha
lwz      r3, 0x10c(r31)
addi     r6, r4, 0x73746563@l
addi     r7, r31, 0x3ac
li       r5, 0x50
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r4, 0x73726F63@ha
lwz      r3, 0x10c(r31)
addi     r6, r4, 0x73726F63@l
addi     r7, r31, 0x3ec
li       r5, 0x50
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r5, 0x665F7963@ha
lis      r4, 0x00506465@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x665F7963@l
addi     r5, r4, 0x00506465@l
addi     r7, r31, 0x42c
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r5, 0x665F6E63@ha
lis      r4, 0x00506465@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x665F6E63@l
addi     r5, r4, 0x00506465@l
addi     r7, r31, 0x46c
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lis      r6, 0x00506267@ha
lis      r7, 0x6D6D3030@ha
lis      r5, 0x6D303063@ha
lis      r4, 0x5062676D@ha
lis      r3, 0x656D3030@ha
mr       r25, r31
addi     r26, r7, 0x6D6D3030@l
addi     r27, r6, 0x00506267@l
addi     r28, r5, 0x6D303063@l
addi     r29, r4, 0x5062676D@l
addi     r30, r3, 0x656D3030@l
addi     r22, r6, 0x7365
li       r23, 0
li       r24, 0

lbl_803CB4A8:
srawi    r21, r23, 0x1f
lwz      r3, 0x10c(r31)
addc     r6, r23, r26
addi     r7, r25, 0x4ac
adde     r5, r21, r27
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
srawi    r20, r24, 0x1f
lwz      r3, 0x10c(r31)
addc     r6, r24, r28
addi     r7, r25, 0x72c
adde     r5, r20, r29
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
addc     r6, r23, r30
li       r0, 0x5073
lwz      r3, 0x10c(r31)
adde     r5, r21, r0
addi     r7, r25, 0x9ac
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
addc     r6, r24, r28
lwz      r3, 0x10c(r31)
adde     r5, r20, r22
addi     r7, r25, 0xc2c
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
addi     r23, r23, 1
addi     r24, r24, 0x100
cmpwi    r23, 0xa
addi     r25, r25, 0x40
blt      lbl_803CB4A8
lis      r4, 0x696E5F79@ha
lwz      r3, 0x10c(r31)
addi     r6, r4, 0x696E5F79@l
li       r5, 0x5473
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
mr       r20, r3
addi     r3, r1, 0x20
lwz      r0, 0x104(r20)
mr       r4, r20
stw      r0, 0x18(r1)
lbz      r5, 0x18(r1)
lbz      r0, 0x19(r1)
stb      r5, 0x1c4(r31)
lbz      r5, 0x1a(r1)
stb      r0, 0x1c5(r31)
lbz      r0, 0x1b(r1)
stb      r5, 0x1c6(r31)
stb      r0, 0x1c7(r31)
lwz      r0, 0x108(r20)
stw      r0, 0x1c(r1)
lbz      r5, 0x1c(r1)
lbz      r0, 0x1d(r1)
stb      r5, 0x1c8(r31)
lbz      r5, 0x1e(r1)
stb      r0, 0x1c9(r31)
lbz      r0, 0x1f(r1)
stb      r5, 0x1ca(r31)
stb      r0, 0x1cb(r31)
lwz      r12, 0(r20)
lwz      r12, 0xb4(r12)
mtctr    r12
bctrl
lbz      r0, 0x20(r1)
mr       r4, r20
addi     r3, r1, 0x24
stb      r0, 0x1cc(r31)
lbz      r0, 0x21(r1)
stb      r0, 0x1cd(r31)
lbz      r0, 0x22(r1)
stb      r0, 0x1ce(r31)
lbz      r0, 0x23(r1)
stb      r0, 0x1cf(r31)
lwz      r12, 0(r20)
lwz      r12, 0xb0(r12)
mtctr    r12
bctrl
lbz      r0, 0x24(r1)
lis      r4, 0x6F6C6F72@ha
lis      r3, 0x54687363@ha
stb      r0, 0x1d0(r31)
addi     r6, r4, 0x6F6C6F72@l
addi     r5, r3, 0x54687363@l
lbz      r0, 0x25(r1)
stb      r0, 0x1d1(r31)
lbz      r0, 0x26(r1)
stb      r0, 0x1d2(r31)
lbz      r0, 0x27(r1)
stb      r0, 0x1d3(r31)
lwz      r3, 0x10c(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
mr       r20, r3
addi     r3, r1, 0x10
lwz      r0, 0x104(r20)
mr       r4, r20
stw      r0, 8(r1)
lbz      r5, 8(r1)
lbz      r0, 9(r1)
stb      r5, 0x1d4(r31)
lbz      r5, 0xa(r1)
stb      r0, 0x1d5(r31)
lbz      r0, 0xb(r1)
stb      r5, 0x1d6(r31)
stb      r0, 0x1d7(r31)
lwz      r0, 0x108(r20)
stw      r0, 0xc(r1)
lbz      r5, 0xc(r1)
lbz      r0, 0xd(r1)
stb      r5, 0x1d8(r31)
lbz      r5, 0xe(r1)
stb      r0, 0x1d9(r31)
lbz      r0, 0xf(r1)
stb      r5, 0x1da(r31)
stb      r0, 0x1db(r31)
lwz      r12, 0(r20)
lwz      r12, 0xb4(r12)
mtctr    r12
bctrl
lbz      r0, 0x10(r1)
mr       r4, r20
addi     r3, r1, 0x14
stb      r0, 0x1dc(r31)
lbz      r0, 0x11(r1)
stb      r0, 0x1dd(r31)
lbz      r0, 0x12(r1)
stb      r0, 0x1de(r31)
lbz      r0, 0x13(r1)
stb      r0, 0x1df(r31)
lwz      r12, 0(r20)
lwz      r12, 0xb0(r12)
mtctr    r12
bctrl
lbz      r0, 0x14(r1)
lis      r4, 0x6F6C6F72@ha
lis      r3, 0x00547363@ha
stb      r0, 0x1e0(r31)
addi     r6, r4, 0x6F6C6F72@l
addi     r5, r3, 0x00547363@l
lbz      r0, 0x15(r1)
stb      r0, 0x1e1(r31)
lbz      r0, 0x16(r1)
stb      r0, 0x1e2(r31)
lbz      r0, 0x17(r1)
stb      r0, 0x1e3(r31)
lwz      r3, 0x10c(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
mr       r20, r3
lis      r4, 0x696E5F79@ha
lwz      r3, 0x10c(r31)
addi     r6, r4, 0x696E5F79@l
li       r5, 0x5473
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
mr       r4, r3
mr       r5, r20
addi     r3, r31, 0x240
bl       set__Q23ebi26E2DCallBack_BlinkFontColorFP10J2DTextBoxP10J2DTextBox
li       r6, 1
lfs      f2, lbl_8051FA18@sda21(r2)
stb      r6, 0x25c(r31)
li       r0, 0
lfs      f0, lbl_8051FA1C@sda21(r2)
addi     r5, r31, 0x240
lwz      r3, sys@sda21(r13)
li       r4, 0
lfs      f1, 0x54(r3)
fmuls    f1, f2, f1
stfs     f1, 0x284(r31)
stfs     f0, 0x280(r31)
stb      r6, 0x288(r31)
stb      r0, 0x289(r31)
lwz      r3, 0x10c(r31)
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
lwz      r3, 0x10c(r31)
addi     r5, r31, 0x28c
li       r4, 0
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
li       r0, 0xff
lis      r3, 0x626F746E@ha
stb      r0, 0x2b8(r31)
li       r0, 0x55
li       r4, 1
lfs      f2, lbl_8051FA18@sda21(r2)
stb      r0, 0x2b9(r31)
li       r0, 0
lfs      f0, lbl_8051FA1C@sda21(r2)
addi     r6, r3, 0x626F746E@l
stb      r4, 0x2a8(r31)
li       r5, 0x4e
lwz      r3, sys@sda21(r13)
lfs      f1, 0x54(r3)
fmuls    f1, f2, f1
stfs     f1, 0x2b0(r31)
stfs     f0, 0x2ac(r31)
stb      r4, 0x2b4(r31)
stb      r0, 0x2b5(r31)
lwz      r3, 0x10c(r31)
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
mr       r0, r3
lwz      r3, 0x10c(r31)
mr       r20, r0
addi     r5, r31, 0x2bc
mr       r4, r20
bl       addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
mr       r3, r20
li       r4, 1
bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
lis      r5, 0x6C637477@ha
lis      r4, 0x00577365@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x6C637477@l
addi     r5, r4, 0x00577365@l
addi     r7, r31, 0xeac
bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
lwz      r3, 0x10c(r31)
bl       E2DPane_setTreeShow__3ebiFP7J2DPane
lis      r5, 0x77736574@ha
lis      r4, 0x4E677270@ha
lwz      r3, 0x10c(r31)
addi     r6, r5, 0x77736574@l
addi     r5, r4, 0x4E677270@l
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
li       r21, 0
mr       r20, r31

lbl_803CB82C:
lwz      r3, 0x1a8(r20)
li       r4, 1
bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
lwz      r3, 0x1a8(r20)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r21, r21, 1
addi     r20, r20, 4
cmpwi    r21, 7
blt      lbl_803CB82C
lis      r4, 0x44415441@ha
lwz      r3, 0x10c(r31)
addi     r6, r4, 0x44415441@l
li       r5, 0
bl       E2DScreen_searchAssert__3ebiFP9J2DScreenUx
bl       E2DPane_setTreeHide__3ebiFP7J2DPane
lwz      r3, 0x17c(r31)
li       r4, 1
bl       E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
lwz      r3, 0x17c(r31)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
lwz      r3, sys@sda21(r13)
addi     r4, r19, 0x10
bl       heapStatusEnd__6SystemFPc
lmw      r19, 0x2c(r1)
lwz      r0, 0x64(r1)
mtlr     r0
addi     r1, r1, 0x60
blr
	*/
}

/*
 * --INFO--
 * Address:	803CB8BC
 * Size:	000134
 */
void TOption::doOpenScreen(ebi::Screen::ArgOpen*)
{
	_1E4.play(60.0f * sys->m_deltaTime, J3DAA_UNKNOWN_0, true);
	setOptionParamToScreen_();
	u32 uVar2                 = __cvt_fp2unsigned(E2DFader::kFadeTime / sys->m_deltaTime);
	_0FC                      = uVar2;
	_100                      = uVar2;
	_0F8                      = 1;
	_104                      = 1;
	_108                      = 1;
	_180[0]->m_isVisible      = false;
	JGeometry::TBox2f* bounds = _1A8[_104].getBounds();
	uVar2                     = __cvt_fp2unsigned(0.1f / sys->m_deltaTime);
	_EAC->_40                 = uVar2;
	_EAC->_44                 = uVar2;
	_EAC->_20                 = *bounds;
	_EAC->_30                 = *bounds;
	_EAC->_1C                 = 1;
	_EAC->_68                 = _180[_104];
	initScreen_();
	/*
stwu     r1, -0x30(r1)
mflr     r0
lfs      f1, lbl_8051FA20@sda21(r2)
li       r5, 1
stw      r0, 0x34(r1)
stw      r31, 0x2c(r1)
mr       r31, r3
addi     r3, r31, 0x1e4
lwz      r4, sys@sda21(r13)
lfs      f0, 0x54(r4)
li       r4, 0
fmuls    f1, f1, f0
bl       play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
mr       r3, r31
bl       setOptionParamToScreen___Q33ebi6Screen7TOptionFv
lwz      r3, sys@sda21(r13)
lfs      f1, kFadeTime__Q23ebi8E2DFader@sda21(r2)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0xfc(r31)
li       r4, 1
li       r0, 0
stw      r3, 0x100(r31)
stw      r4, 0xf8(r31)
stw      r4, 0x104(r31)
stw      r4, 0x108(r31)
lwz      r3, 0x180(r31)
stb      r0, 0xb0(r3)
lwz      r0, 0x104(r31)
slwi     r0, r0, 2
add      r3, r31, r0
lwz      r3, 0x1a8(r3)
bl       getBounds__7J2DPaneFv
lwz      r4, sys@sda21(r13)
lwz      r6, 0(r3)
lfs      f1, lbl_8051FA24@sda21(r2)
lfs      f0, 0x54(r4)
lwz      r5, 4(r3)
fdivs    f1, f1, f0
lwz      r4, 8(r3)
lwz      r0, 0xc(r3)
stw      r6, 0x10(r1)
stw      r5, 0x14(r1)
stw      r4, 0x18(r1)
stw      r0, 0x1c(r1)
bl       __cvt_fp2unsigned
stw      r3, 0xeec(r31)
li       r0, 1
lwz      r4, 0x18(r1)
stw      r3, 0xef0(r31)
mr       r3, r31
lwz      r7, 0x10(r1)
lwz      r6, 0x14(r1)
stw      r7, 0xecc(r31)
lwz      r5, 0x1c(r1)
stw      r6, 0xed0(r31)
stw      r4, 0xed4(r31)
stw      r5, 0xed8(r31)
stw      r7, 0xedc(r31)
stw      r6, 0xee0(r31)
stw      r4, 0xee4(r31)
stw      r5, 0xee8(r31)
stb      r0, 0xec8(r31)
lwz      r0, 0x104(r31)
stw      r4, 8(r1)
slwi     r0, r0, 2
add      r4, r31, r0
stw      r5, 0xc(r1)
lwz      r0, 0x180(r4)
stw      r0, 0xf14(r31)
bl       initScreen___Q33ebi6Screen7TOptionFv
lwz      r0, 0x34(r1)
lwz      r31, 0x2c(r1)
mtlr     r0
addi     r1, r1, 0x30
blr
	*/
}

/*
 * --INFO--
 * Address:	803CB9F0
 * Size:	00004C
 */
void TOption::doCloseScreen(ebi::Screen::ArgClose*)
{
	u32 v1 = __cvt_fp2unsigned((float)E2DFader::kFadeTime / sys->m_deltaTime);
	_0FC   = v1;
	_100   = v1;
	_0F8   = 2;
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f1, kFadeTime__Q23ebi8E2DFader@sda21(r2)
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r4, sys@sda21(r13)
lfs      f0, 0x54(r4)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0xfc(r31)
li       r0, 2
stw      r3, 0x100(r31)
stw      r0, 0xf8(r31)
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803CBA3C
 * Size:	000024
 */
void TOption::doInitWaitState() { _1E4.stop(); }

/*
 * --INFO--
 * Address:	803CBA60
 * Size:	000084
 */
bool TOption::doUpdateStateOpen(void)
{
	if (_0F8 != 0 && _0FC != 0) {
		_0FC--;
	}
	_10C->update();
	return (_1E4.isFinish() && _0FC == 0);
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r0, 0xf8(r3)
cmpwi    r0, 0
beq      lbl_803CBA94
lwz      r3, 0xfc(r31)
cmplwi   r3, 0
beq      lbl_803CBA94
addi     r0, r3, -1
stw      r0, 0xfc(r31)

lbl_803CBA94:
lwz      r3, 0x10c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
addi     r3, r31, 0x1e4
bl       isFinish__Q23ebi19E2DCallBack_AnmBaseFv
clrlwi.  r0, r3, 0x18
beq      lbl_803CBACC
lwz      r0, 0xfc(r31)
cmplwi   r0, 0
bne      lbl_803CBACC
li       r3, 1
b        lbl_803CBAD0

lbl_803CBACC:
li       r3, 0

lbl_803CBAD0:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803CBAE4
 * Size:	0009B4
 */
bool TOption::doUpdateStateWait(void)
{
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
stw      r31, 0x3c(r1)
mr       r31, r3
stw      r30, 0x38(r1)
stw      r29, 0x34(r1)
bl       setOptionParamToScreen___Q33ebi6Screen7TOptionFv
lwz      r3, 0x10c(r31)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lbz      r0, 0x10(r31)
cmplwi   r0, 0
beq      lbl_803CBC64
addi     r3, r31, 0x98
bl       update__Q23ebi24EUTPadInterface_countNumFv
lbz      r0, 0xa5(r31)
cmplwi   r0, 0
beq      lbl_803CBC64
lwz      r0, 0xb4(r31)
stw      r0, 0x108(r31)
lwz      r0, 0x104(r31)
cmpwi    r0, 0
bne      lbl_803CBB54
li       r0, 1
stw      r0, 0x104(r31)

lbl_803CBB54:
lwz      r0, 0x108(r31)
lwz      r3, 0x104(r31)
cmpw     r0, r3
beq      lbl_803CBC08
slwi     r0, r3, 2
add      r3, r31, r0
lwz      r3, 0x1a8(r3)
bl       getBounds__7J2DPaneFv
lwz      r8, 0(r3)
lwz      r7, 4(r3)
lwz      r6, 8(r3)
lwz      r5, 0xc(r3)
addi     r3, r31, 0xef4
lwz      r4, 0xedc(r31)
lwz      r0, 0xee0(r31)
stw      r8, 8(r1)
lfs      f1, lbl_8051FA24@sda21(r2)
stw      r4, 0xecc(r31)
lfs      f2, lbl_8051FA28@sda21(r2)
stw      r0, 0xed0(r31)
lfs      f3, lbl_8051FA2C@sda21(r2)
lwz      r4, 0xee4(r31)
lwz      r0, 0xee8(r31)
stw      r7, 0xc(r1)
lfs      f4, lbl_8051FA1C@sda21(r2)
stw      r4, 0xed4(r31)
stw      r0, 0xed8(r31)
stw      r8, 0xedc(r31)
stw      r7, 0xee0(r31)
stw      r6, 0xee4(r31)
stw      r5, 0xee8(r31)
lwz      r0, 0xef0(r31)
stw      r6, 0x10(r1)
stw      r5, 0x14(r1)
stw      r0, 0xeec(r31)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r0, 0x104(r31)
li       r4, 0x1802
li       r5, 0
slwi     r0, r0, 2
add      r3, r31, r0
lwz      r0, 0x180(r3)
stw      r0, 0xf14(r31)
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_803CBC08:
lwz      r0, 0x104(r31)
cmpwi    r0, 6
bne      lbl_803CBC48
li       r4, 1
lfs      f2, lbl_8051FA30@sda21(r2)
stb      r4, 0x2d8(r31)
li       r0, 0
lfs      f0, lbl_8051FA1C@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x54(r3)
fmuls    f1, f2, f1
stfs     f1, 0x2e0(r31)
stfs     f0, 0x2dc(r31)
stb      r4, 0x2e4(r31)
stb      r0, 0x2e5(r31)
b        lbl_803CBC64

lbl_803CBC48:
lwz      r0, 0x108(r31)
cmpwi    r0, 6
bne      lbl_803CBC64
li       r3, 0
li       r0, 1
stb      r3, 0x2e4(r31)
stb      r0, 0x2e5(r31)

lbl_803CBC64:
li       r0, 0
stw      r0, 0xc4(r31)
lbz      r0, 0x10(r31)
cmplwi   r0, 0
beq      lbl_803CC0F4
lwz      r0, 0xeec(r31)
cmplwi   r0, 0
bne      lbl_803CC0F4
lwz      r3, 0xc(r31)
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x16, 0x16
beq      lbl_803CBCAC
li       r0, 9
li       r4, 0x1801
stw      r0, 0xc4(r31)
li       r5, 0
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_803CBCAC:
lwz      r0, 0x104(r31)
cmplwi   r0, 6
bgt      lbl_803CC0F4
lis      r3, lbl_804E8750@ha
slwi     r0, r0, 2
addi     r3, r3, lbl_804E8750@l
lwzx     r0, r3, r0
mtctr    r0
bctr
.global  lbl_803CBCD0

lbl_803CBCD0:
lwz      r3, 0xc(r31)
lwz      r0, 0x18(r3)
rlwinm.  r0, r0, 0, 0x1e, 0x1e
bne      lbl_803CBCF0
lfs      f1, 0x48(r3)
lfs      f0, lbl_8051FA34@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_803CBCF8

lbl_803CBCF0:
li       r0, 1
b        lbl_803CBCFC

lbl_803CBCF8:
li       r0, 0

lbl_803CBCFC:
clrlwi.  r0, r0, 0x18
beq      lbl_803CBD4C
lbz      r0, 0xc9(r31)
cmplwi   r0, 1
bne      lbl_803CC0F4
li       r0, 0
lfs      f1, lbl_8051FA38@sda21(r2)
stb      r0, 0xc9(r31)
addi     r3, r31, 0x34c
lfs      f2, lbl_8051FA28@sda21(r2)
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
li       r0, 2
li       r4, 0x180e
stw      r0, 0xc4(r31)
li       r5, 0
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803CC0F4

lbl_803CBD4C:
lwz      r0, 0x18(r3)
clrlwi.  r0, r0, 0x1f
bne      lbl_803CBD68
lfs      f1, 0x48(r3)
lfs      f0, lbl_8051FA3C@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_803CBD70

lbl_803CBD68:
li       r0, 1
b        lbl_803CBD74

lbl_803CBD70:
li       r0, 0

lbl_803CBD74:
clrlwi.  r0, r0, 0x18
beq      lbl_803CC0F4
lbz      r0, 0xc9(r31)
cmplwi   r0, 0
bne      lbl_803CC0F4
li       r0, 1
lfs      f1, lbl_8051FA38@sda21(r2)
stb      r0, 0xc9(r31)
addi     r3, r31, 0x30c
lfs      f2, lbl_8051FA28@sda21(r2)
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
li       r0, 2
li       r4, 0x180e
stw      r0, 0xc4(r31)
li       r5, 0
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803CC0F4
.global  lbl_803CBDC4

lbl_803CBDC4:
addi     r3, r31, 0x6c
bl       update__Q23ebi24EUTPadInterface_countNumFv
lbz      r0, 0x79(r31)
cmplwi   r0, 0
beq      lbl_803CC0F4
li       r0, 3
stw      r0, 0xc4(r31)
lwz      r0, 0xcc(r31)
cmpwi    r0, 1
beq      lbl_803CBE34
bge      lbl_803CBDFC
cmpwi    r0, 0
bge      lbl_803CBE08
b        lbl_803CC0F4

lbl_803CBDFC:
cmpwi    r0, 3
bge      lbl_803CC0F4
b        lbl_803CBE60

lbl_803CBE08:
lfs      f1, lbl_8051FA38@sda21(r2)
addi     r3, r31, 0x38c
lfs      f2, lbl_8051FA28@sda21(r2)
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180e
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803CC0F4

lbl_803CBE34:
lfs      f1, lbl_8051FA38@sda21(r2)
addi     r3, r31, 0x3cc
lfs      f2, lbl_8051FA28@sda21(r2)
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180e
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803CC0F4

lbl_803CBE60:
lfs      f1, lbl_8051FA38@sda21(r2)
addi     r3, r31, 0x40c
lfs      f2, lbl_8051FA28@sda21(r2)
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180e
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803CC0F4
.global  lbl_803CBE8C

lbl_803CBE8C:
addi     r3, r31, 0x14
bl       update__Q23ebi24EUTPadInterface_countNumFv
lbz      r0, 0x21(r31)
cmplwi   r0, 0
beq      lbl_803CC0F4
li       r0, 4
stw      r0, 0xc4(r31)
lwz      r3, 0xd0(r31)
cmpwi    r3, 0
beq      lbl_803CBF00
addi     r0, r3, -1
lfs      f1, lbl_8051FA34@sda21(r2)
slwi     r3, r0, 6
lfs      f2, lbl_8051FA28@sda21(r2)
addi     r3, r3, 0x4cc
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
add      r3, r31, r3
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r3, 0xd0(r31)
lfs      f1, lbl_8051FA34@sda21(r2)
addi     r0, r3, -1
lfs      f2, lbl_8051FA28@sda21(r2)
slwi     r3, r0, 6
lfs      f3, lbl_8051FA2C@sda21(r2)
addi     r3, r3, 0x74c
lfs      f4, lbl_8051FA1C@sda21(r2)
add      r3, r31, r3
bl       up__Q32og6Screen8ScaleMgrFffff

lbl_803CBF00:
mr       r30, r31
li       r29, 0
b        lbl_803CBF2C

lbl_803CBF0C:
lwz      r3, 0x154(r30)
li       r4, 0xff
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r30, r30, 4
addi     r29, r29, 1

lbl_803CBF2C:
lwz      r3, 0xd0(r31)
addi     r0, r3, -1
cmpw     r29, r0
blt      lbl_803CBF0C
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180e
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803CC0F4
.global  lbl_803CBF50

lbl_803CBF50:
addi     r3, r31, 0x40
bl       update__Q23ebi24EUTPadInterface_countNumFv
lbz      r0, 0x4d(r31)
cmplwi   r0, 0
beq      lbl_803CC0F4
li       r0, 5
stw      r0, 0xc4(r31)
lwz      r3, 0xd4(r31)
cmpwi    r3, 0
beq      lbl_803CBFC4
addi     r0, r3, -1
lfs      f1, lbl_8051FA34@sda21(r2)
slwi     r3, r0, 6
lfs      f2, lbl_8051FA28@sda21(r2)
addi     r3, r3, 0x9cc
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
add      r3, r31, r3
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r3, 0xd4(r31)
lfs      f1, lbl_8051FA34@sda21(r2)
addi     r0, r3, -1
lfs      f2, lbl_8051FA28@sda21(r2)
slwi     r3, r0, 6
lfs      f3, lbl_8051FA2C@sda21(r2)
addi     r3, r3, 0xc4c
lfs      f4, lbl_8051FA1C@sda21(r2)
add      r3, r31, r3
bl       up__Q32og6Screen8ScaleMgrFffff

lbl_803CBFC4:
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180e
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
b        lbl_803CC0F4
.global  lbl_803CBFD8

lbl_803CBFD8:
lwz      r3, 0xc(r31)
lwz      r0, 0x18(r3)
rlwinm.  r0, r0, 0, 0x1e, 0x1e
bne      lbl_803CBFF8
lfs      f1, 0x48(r3)
lfs      f0, lbl_8051FA34@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_803CC000

lbl_803CBFF8:
li       r0, 1
b        lbl_803CC004

lbl_803CC000:
li       r0, 0

lbl_803CC004:
clrlwi.  r0, r0, 0x18
beq      lbl_803CC054
lbz      r0, 0xd8(r31)
cmplwi   r0, 1
bne      lbl_803CC0F4
li       r0, 0
lfs      f1, lbl_8051FA38@sda21(r2)
stb      r0, 0xd8(r31)
addi     r3, r31, 0x48c
lfs      f2, lbl_8051FA28@sda21(r2)
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180e
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r0, 6
stw      r0, 0xc4(r31)
b        lbl_803CC0F4

lbl_803CC054:
lwz      r0, 0x18(r3)
clrlwi.  r0, r0, 0x1f
bne      lbl_803CC070
lfs      f1, 0x48(r3)
lfs      f0, lbl_8051FA3C@sda21(r2)
fcmpo    cr0, f1, f0
bge      lbl_803CC078

lbl_803CC070:
li       r0, 1
b        lbl_803CC07C

lbl_803CC078:
li       r0, 0

lbl_803CC07C:
clrlwi.  r0, r0, 0x18
beq      lbl_803CC0F4
lbz      r0, 0xd8(r31)
cmplwi   r0, 0
bne      lbl_803CC0F4
li       r0, 1
lfs      f1, lbl_8051FA38@sda21(r2)
stb      r0, 0xd8(r31)
addi     r3, r31, 0x44c
lfs      f2, lbl_8051FA28@sda21(r2)
lfs      f3, lbl_8051FA2C@sda21(r2)
lfs      f4, lbl_8051FA1C@sda21(r2)
bl       up__Q32og6Screen8ScaleMgrFffff
lwz      r3, spSysIF__8PSSystem@sda21(r13)
li       r4, 0x180e
li       r5, 0
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
li       r0, 6
stw      r0, 0xc4(r31)
b        lbl_803CC0F4
.global  lbl_803CC0CC

lbl_803CC0CC:
lwz      r3, 0xc(r31)
lwz      r0, 0x1c(r3)
rlwinm.  r0, r0, 0, 0x17, 0x17
beq      lbl_803CC0F4
li       r0, 7
li       r4, 0x1800
stw      r0, 0xc4(r31)
li       r5, 0
lwz      r3, spSysIF__8PSSystem@sda21(r13)
bl       playSystemSe__Q28PSSystem5SysIFFUlUl
.global  lbl_803CC0F4

lbl_803CC0F4:
lbz      r0, 0xd8(r31)
cmplwi   r0, 1
bne      lbl_803CC114
lis      r4, 0x355F3030@ha
lis      r3, 0x00383333@ha
addi     r4, r4, 0x355F3030@l
addi     r0, r3, 0x00383333@l
b        lbl_803CC124

lbl_803CC114:
lis      r4, 0x365F3030@ha
lis      r3, 0x00383333@ha
addi     r4, r4, 0x365F3030@l
addi     r0, r3, 0x00383333@l

lbl_803CC124:
lwz      r3, 0x19c(r31)
stw      r4, 0x1c(r3)
stw      r0, 0x18(r3)
lwz      r3, 0x1a0(r31)
stw      r4, 0x1c(r3)
stw      r0, 0x18(r3)
lwz      r0, 0x104(r31)
cmpwi    r0, 5
bne      lbl_803CC280
li       r3, 0
li       r0, 0
cmpwi    r3, 5
beq      lbl_803CC168
cmpwi    r3, 6
beq      lbl_803CC168
lwz      r3, 0x180(r31)
stb      r0, 0xb0(r3)

lbl_803CC168:
li       r3, 1
cmpwi    r3, 5
beq      lbl_803CC184
cmpwi    r3, 6
beq      lbl_803CC184
lwz      r3, 0x184(r31)
stb      r0, 0xb0(r3)

lbl_803CC184:
li       r3, 2
cmpwi    r3, 5
beq      lbl_803CC1A0
cmpwi    r3, 6
beq      lbl_803CC1A0
lwz      r3, 0x188(r31)
stb      r0, 0xb0(r3)

lbl_803CC1A0:
li       r3, 3
cmpwi    r3, 5
beq      lbl_803CC1BC
cmpwi    r3, 6
beq      lbl_803CC1BC
lwz      r3, 0x18c(r31)
stb      r0, 0xb0(r3)

lbl_803CC1BC:
li       r3, 4
cmpwi    r3, 5
beq      lbl_803CC1D8
cmpwi    r3, 6
beq      lbl_803CC1D8
lwz      r3, 0x190(r31)
stb      r0, 0xb0(r3)

lbl_803CC1D8:
li       r3, 5
b        lbl_803CC1EC
beq      lbl_803CC1EC
lwz      r3, 0x194(r31)
stb      r0, 0xb0(r3)

lbl_803CC1EC:
li       r3, 6
cmpwi    r3, 5
beq      lbl_803CC208
cmpwi    r3, 6
beq      lbl_803CC208
lwz      r3, 0x198(r31)
stb      r0, 0xb0(r3)

lbl_803CC208:
lwz      r4, 0xef0(r31)
cmplwi   r4, 0
beq      lbl_803CC248
lwz      r3, 0xeec(r31)
lis      r0, 0x4330
stw      r0, 0x18(r1)
lfd      f2, lbl_8051FA08@sda21(r2)
stw      r3, 0x1c(r1)
lfd      f0, 0x18(r1)
stw      r4, 0x24(r1)
fsubs    f1, f0, f2
stw      r0, 0x20(r1)
lfd      f0, 0x20(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803CC24C

lbl_803CC248:
lfs      f1, lbl_8051FA1C@sda21(r2)

lbl_803CC24C:
lfs      f0, lbl_8051FA40@sda21(r2)
lwz      r3, 0x17c(r31)
fsubs    f0, f0, f1
lfs      f1, lbl_8051FA04@sda21(r2)
lwz      r12, 0(r3)
fmuls    f0, f1, f0
lwz      r12, 0x24(r12)
fctiwz   f0, f0
stfd     f0, 0x28(r1)
lwz      r4, 0x2c(r1)
mtctr    r12
bctrl
b        lbl_803CC398

lbl_803CC280:
lwz      r0, 0x108(r31)
cmpwi    r0, 5
bne      lbl_803CC380
li       r3, 0
li       r0, 1
cmpwi    r3, 5
beq      lbl_803CC2A4
lwz      r3, 0x180(r31)
stb      r0, 0xb0(r3)

lbl_803CC2A4:
li       r3, 1
cmpwi    r3, 5
beq      lbl_803CC2B8
lwz      r3, 0x184(r31)
stb      r0, 0xb0(r3)

lbl_803CC2B8:
li       r3, 2
cmpwi    r3, 5
beq      lbl_803CC2CC
lwz      r3, 0x188(r31)
stb      r0, 0xb0(r3)

lbl_803CC2CC:
li       r3, 3
cmpwi    r3, 5
beq      lbl_803CC2E0
lwz      r3, 0x18c(r31)
stb      r0, 0xb0(r3)

lbl_803CC2E0:
li       r3, 4
cmpwi    r3, 5
beq      lbl_803CC2FC
lwz      r3, 0x190(r31)
stb      r0, 0xb0(r3)
b        lbl_803CC2FC
stb      r0, 0xb0(r3)

lbl_803CC2FC:
li       r3, 6
cmpwi    r3, 5
beq      lbl_803CC310
lwz      r3, 0x198(r31)
stb      r0, 0xb0(r3)

lbl_803CC310:
lwz      r4, 0xef0(r31)
cmplwi   r4, 0
beq      lbl_803CC350
lwz      r3, 0xeec(r31)
lis      r0, 0x4330
stw      r0, 0x28(r1)
lfd      f2, lbl_8051FA08@sda21(r2)
stw      r3, 0x2c(r1)
lfd      f0, 0x28(r1)
stw      r4, 0x24(r1)
fsubs    f1, f0, f2
stw      r0, 0x20(r1)
lfd      f0, 0x20(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803CC354

lbl_803CC350:
lfs      f1, lbl_8051FA1C@sda21(r2)

lbl_803CC354:
lfs      f0, lbl_8051FA04@sda21(r2)
lwz      r3, 0x17c(r31)
fmuls    f0, f0, f1
lwz      r12, 0(r3)
fctiwz   f0, f0
lwz      r12, 0x24(r12)
stfd     f0, 0x18(r1)
lwz      r4, 0x1c(r1)
mtctr    r12
bctrl
b        lbl_803CC398

lbl_803CC380:
lwz      r3, 0x17c(r31)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl

lbl_803CC398:
lwz      r3, 0x110(r31)
lfs      f0, 0x328(r31)
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x114(r31)
lfs      f0, 0x368(r31)
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x118(r31)
lfs      f0, 0x3a8(r31)
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x11c(r31)
lfs      f0, 0x3e8(r31)
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x120(r31)
lfs      f0, 0x428(r31)
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x124(r31)
lfs      f0, 0x468(r31)
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x128(r31)
lfs      f0, 0x4a8(r31)
stfs     f0, 0xcc(r3)
stfs     f0, 0xd0(r3)
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r0, 0x44(r1)
li       r3, 0
lwz      r31, 0x3c(r1)
lwz      r30, 0x38(r1)
lwz      r29, 0x34(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}

/*
 * --INFO--
 * Address:	803CC498
 * Size:	000074
 */
bool TOption::doUpdateStateClose(void)
{
	_10C->update();
	if (_0F8 != 0 && _0FC != 0) {
		_0FC--;
	}
	if (_0FC == 0) {
		return true;
	} else {
		return false;
	}
	// return (_0FC != 0) ? false : true;
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 0x10c(r3)
lwz      r12, 0(r3)
lwz      r12, 0x30(r12)
mtctr    r12
bctrl
lwz      r0, 0xf8(r31)
cmpwi    r0, 0
beq      lbl_803CC4E0
lwz      r3, 0xfc(r31)
cmplwi   r3, 0
beq      lbl_803CC4E0
addi     r0, r3, -1
stw      r0, 0xfc(r31)

lbl_803CC4E0:
lwz      r0, 0xfc(r31)
cmplwi   r0, 0
bne      lbl_803CC4F4
li       r3, 1
b        lbl_803CC4F8

lbl_803CC4F4:
li       r3, 0

lbl_803CC4F8:
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803CC50C
 * Size:	000244
 */
void TOption::doDraw(void)
{
	/*
stwu     r1, -0x60(r1)
mflr     r0
stw      r0, 0x64(r1)
stw      r31, 0x5c(r1)
stw      r30, 0x58(r1)
stw      r29, 0x54(r1)
mr       r29, r3
lwz      r4, sys@sda21(r13)
lwz      r30, 0x24(r4)
addi     r31, r30, 0x190
lwz      r12, 0(r31)
mr       r3, r31
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r3, 0x10c(r29)
mr       r4, r30
mr       r5, r31
lwz      r12, 0(r3)
lwz      r12, 0x9c(r12)
mtctr    r12
bctrl
lwz      r0, 0xf8(r29)
cmpwi    r0, 0
beq      lbl_803CC734
lwz      r3, sys@sda21(r13)
lwz      r3, 0x24(r3)
addi     r31, r3, 0x190
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
lwz      r0, 0xf8(r29)
lwz      r3, 0xf0(r29)
cmpwi    r0, 2
stw      r3, 0x18(r1)
beq      lbl_803CC62C
bge      lbl_803CC6A8
cmpwi    r0, 1
bge      lbl_803CC5B4
b        lbl_803CC6A8

lbl_803CC5B4:
lwz      r4, 0x100(r29)
cmplwi   r4, 0
beq      lbl_803CC5F4
lwz      r3, 0xfc(r29)
lis      r0, 0x4330
stw      r0, 0x30(r1)
lfd      f2, lbl_8051FA08@sda21(r2)
stw      r3, 0x34(r1)
lfd      f0, 0x30(r1)
stw      r4, 0x3c(r1)
fsubs    f1, f0, f2
stw      r0, 0x38(r1)
lfd      f0, 0x38(r1)
fsubs    f0, f0, f2
fdivs    f2, f1, f0
b        lbl_803CC5F8

lbl_803CC5F4:
lfs      f2, lbl_8051FA1C@sda21(r2)

lbl_803CC5F8:
lbz      r3, 0xf4(r29)
lis      r0, 0x4330
stw      r0, 0x40(r1)
lfd      f1, lbl_8051FA08@sda21(r2)
stw      r3, 0x44(r1)
lfd      f0, 0x40(r1)
fsubs    f0, f0, f1
fmuls    f0, f0, f2
fctiwz   f0, f0
stfd     f0, 0x48(r1)
lwz      r0, 0x4c(r1)
stb      r0, 0x1b(r1)
b        lbl_803CC6A8

lbl_803CC62C:
lwz      r4, 0x100(r29)
cmplwi   r4, 0
beq      lbl_803CC66C
lwz      r3, 0xfc(r29)
lis      r0, 0x4330
stw      r0, 0x48(r1)
lfd      f2, lbl_8051FA08@sda21(r2)
stw      r3, 0x4c(r1)
lfd      f0, 0x48(r1)
stw      r4, 0x44(r1)
fsubs    f1, f0, f2
stw      r0, 0x40(r1)
lfd      f0, 0x40(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803CC670

lbl_803CC66C:
lfs      f1, lbl_8051FA1C@sda21(r2)

lbl_803CC670:
lbz      r3, 0xf4(r29)
lis      r0, 0x4330
lfs      f0, lbl_8051FA40@sda21(r2)
stw      r3, 0x3c(r1)
lfd      f2, lbl_8051FA08@sda21(r2)
fsubs    f0, f0, f1
stw      r0, 0x38(r1)
lfd      f1, 0x38(r1)
fsubs    f1, f1, f2
fmuls    f0, f1, f0
fctiwz   f0, f0
stfd     f0, 0x30(r1)
lwz      r0, 0x34(r1)
stb      r0, 0x1b(r1)

lbl_803CC6A8:
lwz      r0, 0x18(r1)
mr       r3, r31
addi     r4, r1, 8
addi     r5, r1, 0xc
stw      r0, 0x14(r1)
addi     r6, r1, 0x10
addi     r7, r1, 0x14
stw      r0, 0x10(r1)
stw      r0, 0xc(r1)
stw      r0, 8(r1)
bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
bl       getRenderModeObj__6SystemFv
lhz      r30, 6(r3)
bl       getRenderModeObj__6SystemFv
lhz      r4, 4(r3)
lis      r0, 0x4330
lfs      f3, lbl_8051FA1C@sda21(r2)
mr       r3, r31
stw      r4, 0x4c(r1)
addi     r4, r1, 0x1c
lfd      f2, lbl_8051FA08@sda21(r2)
stw      r0, 0x48(r1)
lfd      f0, 0x48(r1)
stw      r30, 0x44(r1)
fsubs    f1, f0, f2
stw      r0, 0x40(r1)
lfd      f0, 0x40(r1)
fadds    f1, f3, f1
stfs     f3, 0x1c(r1)
fsubs    f0, f0, f2
stfs     f3, 0x20(r1)
fadds    f0, f3, f0
stfs     f1, 0x24(r1)
stfs     f0, 0x28(r1)
bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"

lbl_803CC734:
lwz      r0, 0x64(r1)
lwz      r31, 0x5c(r1)
lwz      r30, 0x58(r1)
lwz      r29, 0x54(r1)
mtlr     r0
addi     r1, r1, 0x60
blr
	*/
}

/*
 * --INFO--
 * Address:	803CC750
 * Size:	0000B0
 */
void TOption::loadResource(void)
{
	char resName[256];
	sys->heapStatusStart("TOption::loadResource", nullptr);
	og::newScreen::makeLanguageResName(resName, "option_us.szs");
	JKRArchive* archive = JKRArchive::mount(resName, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Unk1);
	P2ASSERTLINE(757, (archive != nullptr));
	sys->heapStatusEnd("TOption::loadResource");
	setArchive(archive);
}

/*
 * --INFO--
 * Address:	803CC800
 * Size:	0000BC
 */
void TOption::setController(Controller* controller)
{
	m_controller = controller;
	m_padInterfaces[0].init(controller, 0, 10, &_0C8.m_bgmVolume, EUTPadInterface_countNum::MODE_UNKNOWN_1, 0.66f, 0.15f);
	m_padInterfaces[1].init(controller, 0, 10, &_0C8.m_seVolume, EUTPadInterface_countNum::MODE_UNKNOWN_1, 0.66f, 0.15f);
	m_padInterfaces[2].init(controller, 0, 2, &_0C8.m_soundMode, EUTPadInterface_countNum::MODE_UNKNOWN_1, 0.66f, 0.15f);
	m_padInterfaces[3].init(controller, 0, 6, &_104, EUTPadInterface_countNum::MODE_UNKNOWN_3, 0.66f, 0.15f);
	/*
stwu     r1, -0x10(r1)
mflr     r0
lfs      f1, lbl_8051FA44@sda21(r2)
li       r5, 0
stw      r0, 0x14(r1)
li       r6, 0xa
lfs      f2, lbl_8051FA48@sda21(r2)
li       r8, 1
stw      r31, 0xc(r1)
mr       r31, r3
addi     r7, r31, 0xd0
stw      r4, 0xc(r3)
addi     r3, r31, 0x14
lwz      r4, 0xc(r31)
bl
init__Q23ebi24EUTPadInterface_countNumFP10ControllerllPlQ33ebi24EUTPadInterface_countNum8enumModeff
lwz      r4, 0xc(r31)
addi     r3, r31, 0x40
lfs      f1, lbl_8051FA44@sda21(r2)
addi     r7, r31, 0xd4
lfs      f2, lbl_8051FA48@sda21(r2)
li       r5, 0
li       r6, 0xa
li       r8, 1
bl
init__Q23ebi24EUTPadInterface_countNumFP10ControllerllPlQ33ebi24EUTPadInterface_countNum8enumModeff
lwz      r4, 0xc(r31)
addi     r3, r31, 0x6c
lfs      f1, lbl_8051FA44@sda21(r2)
addi     r7, r31, 0xcc
lfs      f2, lbl_8051FA48@sda21(r2)
li       r5, 0
li       r6, 2
li       r8, 1
bl
init__Q23ebi24EUTPadInterface_countNumFP10ControllerllPlQ33ebi24EUTPadInterface_countNum8enumModeff
lwz      r4, 0xc(r31)
addi     r3, r31, 0x98
lfs      f1, lbl_8051FA44@sda21(r2)
addi     r7, r31, 0x104
lfs      f2, lbl_8051FA48@sda21(r2)
li       r5, 0
li       r6, 6
li       r8, 3
bl
init__Q23ebi24EUTPadInterface_countNumFP10ControllerllPlQ33ebi24EUTPadInterface_countNum8enumModeff
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803CC8BC
 * Size:	000174
 */
void TOption::initScreen_(void) const
{
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
li       r0, 0
stw      r31, 0x1c(r1)
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
mr       r29, r3
stw      r0, 0x258(r3)
stw      r0, 0x2a4(r3)
stb      r0, 0x2d8(r3)
lwz      r3, 0x2d4(r3)
cmplwi   r3, 0
beq      lbl_803CC908
lwz      r12, 0(r3)
li       r4, 0
lwz      r12, 0x24(r12)
mtctr    r12
bctrl

lbl_803CC908:
mr       r31, r29
li       r30, 0
b        lbl_803CC934

lbl_803CC914:
lwz      r3, 0x154(r31)
li       r4, 0xff
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r31, r31, 4
addi     r30, r30, 1

lbl_803CC934:
lwz      r0, 0xd0(r29)
cmpw     r30, r0
blt      lbl_803CC914
mr       r31, r29
li       r30, 0
b        lbl_803CC96C

lbl_803CC94C:
lwz      r3, 0x12c(r31)
li       r4, 0xff
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
addi     r31, r31, 4
addi     r30, r30, 1

lbl_803CC96C:
lwz      r0, 0xd4(r29)
cmpw     r30, r0
blt      lbl_803CC94C
li       r3, 0
li       r0, 1
cmpwi    r3, 5
beq      lbl_803CC990
lwz      r3, 0x180(r29)
stb      r0, 0xb0(r3)

lbl_803CC990:
li       r3, 1
cmpwi    r3, 5
beq      lbl_803CC9A4
lwz      r3, 0x184(r29)
stb      r0, 0xb0(r3)

lbl_803CC9A4:
li       r3, 2
cmpwi    r3, 5
beq      lbl_803CC9B8
lwz      r3, 0x188(r29)
stb      r0, 0xb0(r3)

lbl_803CC9B8:
li       r3, 3
cmpwi    r3, 5
beq      lbl_803CC9CC
lwz      r3, 0x18c(r29)
stb      r0, 0xb0(r3)

lbl_803CC9CC:
li       r3, 4
cmpwi    r3, 5
beq      lbl_803CC9E8
lwz      r3, 0x190(r29)
stb      r0, 0xb0(r3)
b        lbl_803CC9E8
stb      r0, 0xb0(r3)

lbl_803CC9E8:
li       r3, 6
cmpwi    r3, 5
beq      lbl_803CC9FC
lwz      r3, 0x198(r29)
stb      r0, 0xb0(r3)

lbl_803CC9FC:
lwz      r3, 0x17c(r29)
li       r4, 0
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
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
 * Address:	803CCA30
 * Size:	000C9C
 */
void TOption::setOptionParamToScreen_(void)
{
#if !MATCHING
	// if (_0C8._01) {
	// 	_110->_104.channels = JUtility::TColor(_1C4._00).channels;
	// 	_110->_108.channels = JUtility::TColor(_1C4._04).channels;
	// 	_110->setWhite(JUtility::TColor(_1C4.m_white));
	// 	_110->setBlack(JUtility::TColor(_1C4.m_black));
	// 	_114->_104.channels = JUtility::TColor(_1D4._00).channels;
	// 	_114->_108.channels = JUtility::TColor(_1D4._04).channels;
	// 	_114->setWhite(JUtility::TColor(_1D4.m_white));
	// 	_114->setBlack(JUtility::TColor(_1D4.m_black));
	// } else {
	// 	_110->_104.channels = JUtility::TColor(_1D4._00).channels;
	// 	_110->_108.channels = JUtility::TColor(_1D4._04).channels;
	// 	_110->setWhite(JUtility::TColor(_1D4.m_white));
	// 	_110->setBlack(JUtility::TColor(_1D4.m_black));
	// 	_114->_104.channels = JUtility::TColor(_1C4._00).channels;
	// 	_114->_108.channels = JUtility::TColor(_1C4._04).channels;
	// 	_114->setWhite(JUtility::TColor(_1C4.m_white));
	// 	_114->setBlack(JUtility::TColor(_1C4.m_black));
	// }
	// switch (_0C8.m_soundMode) {
	// case 0:
	// 	_118->_104.channels = JUtility::TColor(_1C4._00).channels;
	// 	_118->_108.channels = JUtility::TColor(_1C4._04).channels;
	// 	_118->setWhite(JUtility::TColor(_1C4.m_white));
	// 	_118->setBlack(JUtility::TColor(_1C4.m_black));
	// 	_11C->_104.channels = JUtility::TColor(_1D4._00).channels;
	// 	_11C->_108.channels = JUtility::TColor(_1D4._04).channels;
	// 	_11C->setWhite(JUtility::TColor(_1D4.m_white));
	// 	_11C->setBlack(JUtility::TColor(_1D4.m_black));
	// 	_120->_104.channels = JUtility::TColor(_1D4._00).channels;
	// 	_120->_108.channels = JUtility::TColor(_1D4._04).channels;
	// 	_120->setWhite(JUtility::TColor(_1D4.m_white));
	// 	_120->setBlack(JUtility::TColor(_1D4.m_black));
	// 	break;
	// case 1:
	// 	_118->_104.channels = JUtility::TColor(_1D4._00).channels;
	// 	_118->_108.channels = JUtility::TColor(_1D4._04).channels;
	// 	_118->setWhite(JUtility::TColor(_1D4.m_white));
	// 	_118->setBlack(JUtility::TColor(_1D4.m_black));
	// 	_11C->_104.channels = JUtility::TColor(_1C4._00).channels;
	// 	_11C->_108.channels = JUtility::TColor(_1C4._04).channels;
	// 	_11C->setWhite(JUtility::TColor(_1C4.m_white));
	// 	_11C->setBlack(JUtility::TColor(_1C4.m_black));
	// 	_120->_104.channels = JUtility::TColor(_1D4._00).channels;
	// 	_120->_108.channels = JUtility::TColor(_1D4._04).channels;
	// 	_120->setWhite(JUtility::TColor(_1D4.m_white));
	// 	_120->setBlack(JUtility::TColor(_1D4.m_black));
	// 	break;
	// case 2:
	// 	_118->_104.channels = JUtility::TColor(_1D4._00).channels;
	// 	_118->_108.channels = JUtility::TColor(_1D4._04).channels;
	// 	_118->setWhite(JUtility::TColor(_1D4.m_white));
	// 	_118->setBlack(JUtility::TColor(_1D4.m_black));
	// 	_11C->_104.channels = JUtility::TColor(_1D4._00).channels;
	// 	_11C->_108.channels = JUtility::TColor(_1D4._04).channels;
	// 	_11C->setWhite(JUtility::TColor(_1D4.m_white));
	// 	_11C->setBlack(JUtility::TColor(_1D4.m_black));
	// 	_120->_104.channels = JUtility::TColor(_1C4._00).channels;
	// 	_120->_108.channels = JUtility::TColor(_1C4._04).channels;
	// 	_120->setWhite(JUtility::TColor(_1C4.m_white));
	// 	_120->setBlack(JUtility::TColor(_1C4.m_black));
	// 	break;
	// default:
	// 	break;
	// }

	// if (_0C8._01) {
	// 	_110->_104.channels = _1C4._00.channels;
	// 	_110->_108.channels = _1C4._04.channels;
	// 	_110->setWhite(_1C4.m_white);
	// 	_110->setBlack(_1C4.m_black);
	// 	_114->_104.channels = _1D4._00.channels;
	// 	_114->_108.channels = _1D4._04.channels;
	// 	_114->setWhite(_1D4.m_white);
	// 	_114->setBlack(_1D4.m_black);
	// } else {
	// 	_110->_104.channels = _1D4._00.channels;
	// 	_110->_108.channels = _1D4._04.channels;
	// 	_110->setWhite(_1D4.m_white);
	// 	_110->setBlack(_1D4.m_black);
	// 	_114->_104.channels = _1C4._00.channels;
	// 	_114->_108.channels = _1C4._04.channels;
	// 	_114->setWhite(_1C4.m_white);
	// 	_114->setBlack(_1C4.m_black);
	// }
	// switch (_0C8.m_soundMode) {
	// case 0:
	// 	_118->_104.channels = _1C4._00.channels;
	// 	_118->_108.channels = _1C4._04.channels;
	// 	_118->setWhite(_1C4.m_white);
	// 	_118->setBlack(_1C4.m_black);
	// 	_11C->_104.channels = _1D4._00.channels;
	// 	_11C->_108.channels = _1D4._04.channels;
	// 	_11C->setWhite(_1D4.m_white);
	// 	_11C->setBlack(_1D4.m_black);
	// 	_120->_104.channels = _1D4._00.channels;
	// 	_120->_108.channels = _1D4._04.channels;
	// 	_120->setWhite(_1D4.m_white);
	// 	_120->setBlack(_1D4.m_black);
	// 	break;
	// case 1:
	// 	_118->_104.channels = _1D4._00.channels;
	// 	_118->_108.channels = _1D4._04.channels;
	// 	_118->setWhite(_1D4.m_white);
	// 	_118->setBlack(_1D4.m_black);
	// 	_11C->_104.channels = _1C4._00.channels;
	// 	_11C->_108.channels = _1C4._04.channels;
	// 	_11C->setWhite(_1C4.m_white);
	// 	_11C->setBlack(_1C4.m_black);
	// 	_120->_104.channels = _1D4._00.channels;
	// 	_120->_108.channels = _1D4._04.channels;
	// 	_120->setWhite(_1D4.m_white);
	// 	_120->setBlack(_1D4.m_black);
	// 	break;
	// case 2:
	// 	_118->_104.channels = _1D4._00.channels;
	// 	_118->_108.channels = _1D4._04.channels;
	// 	_118->setWhite(_1D4.m_white);
	// 	_118->setBlack(_1D4.m_black);
	// 	_11C->_104.channels = _1D4._00.channels;
	// 	_11C->_108.channels = _1D4._04.channels;
	// 	_11C->setWhite(_1D4.m_white);
	// 	_11C->setBlack(_1D4.m_black);
	// 	_120->_104.channels = _1C4._00.channels;
	// 	_120->_108.channels = _1C4._04.channels;
	// 	_120->setWhite(_1C4.m_white);
	// 	_120->setBlack(_1C4.m_black);
	// 	break;
	// default:
	// 	break;
	// }

	// if (_0C8._01) {
	// 	_110->_104.channels.r = _1C4._00.channels.r;
	// 	_110->_104.channels.g = _1C4._00.channels.g;
	// 	_110->_104.channels.b = _1C4._00.channels.b;
	// 	_110->_104.channels.a = _1C4._00.channels.a;
	// 	_110->_108.channels.r = _1C4._04.channels.r;
	// 	_110->_108.channels.g = _1C4._04.channels.g;
	// 	_110->_108.channels.b = _1C4._04.channels.b;
	// 	_110->_108.channels.a = _1C4._04.channels.a;
	// 	_110->setWhite(_1C4.m_white);
	// 	_110->setBlack(_1C4.m_black);
	// 	_114->_104.channels.r = _1D4._00.channels.r;
	// 	_114->_104.channels.g = _1D4._00.channels.g;
	// 	_114->_104.channels.b = _1D4._00.channels.b;
	// 	_114->_104.channels.a = _1D4._00.channels.a;
	// 	_114->_108.channels.r = _1D4._04.channels.r;
	// 	_114->_108.channels.g = _1D4._04.channels.g;
	// 	_114->_108.channels.b = _1D4._04.channels.b;
	// 	_114->_108.channels.a = _1D4._04.channels.a;
	// 	_114->setWhite(_1D4.m_white);
	// 	_114->setBlack(_1D4.m_black);
	// } else {
	// 	_110->_104.channels.r = _1D4._00.channels.r;
	// 	_110->_104.channels.g = _1D4._00.channels.g;
	// 	_110->_104.channels.b = _1D4._00.channels.b;
	// 	_110->_104.channels.a = _1D4._00.channels.a;
	// 	_110->_108.channels.r = _1D4._04.channels.r;
	// 	_110->_108.channels.g = _1D4._04.channels.g;
	// 	_110->_108.channels.b = _1D4._04.channels.b;
	// 	_110->_108.channels.a = _1D4._04.channels.a;
	// 	_110->setWhite(_1D4.m_white);
	// 	_110->setBlack(_1D4.m_black);
	// 	_114->_104.channels.r = _1C4._00.channels.r;
	// 	_114->_104.channels.g = _1C4._00.channels.g;
	// 	_114->_104.channels.b = _1C4._00.channels.b;
	// 	_114->_104.channels.a = _1C4._00.channels.a;
	// 	_114->_108.channels.r = _1C4._04.channels.r;
	// 	_114->_108.channels.g = _1C4._04.channels.g;
	// 	_114->_108.channels.b = _1C4._04.channels.b;
	// 	_114->_108.channels.a = _1C4._04.channels.a;
	// 	_114->setWhite(_1C4.m_white);
	// 	_114->setBlack(_1C4.m_black);
	// }
	// switch (_0C8.m_soundMode) {
	// case 0:
	// 	_118->_104.channels.r = _1C4._00.channels.r;
	// 	_118->_104.channels.g = _1C4._00.channels.g;
	// 	_118->_104.channels.b = _1C4._00.channels.b;
	// 	_118->_104.channels.a = _1C4._00.channels.a;
	// 	_118->_108.channels.r = _1C4._04.channels.r;
	// 	_118->_108.channels.g = _1C4._04.channels.g;
	// 	_118->_108.channels.b = _1C4._04.channels.b;
	// 	_118->_108.channels.a = _1C4._04.channels.a;
	// 	_118->setWhite(_1C4.m_white);
	// 	_118->setBlack(_1C4.m_black);
	// 	_11C->_104.channels.r = _1D4._00.channels.r;
	// 	_11C->_104.channels.g = _1D4._00.channels.g;
	// 	_11C->_104.channels.b = _1D4._00.channels.b;
	// 	_11C->_104.channels.a = _1D4._00.channels.a;
	// 	_11C->_108.channels.r = _1D4._04.channels.r;
	// 	_11C->_108.channels.g = _1D4._04.channels.g;
	// 	_11C->_108.channels.b = _1D4._04.channels.b;
	// 	_11C->_108.channels.a = _1D4._04.channels.a;
	// 	_11C->setWhite(_1D4.m_white);
	// 	_11C->setBlack(_1D4.m_black);
	// 	_120->_104.channels.r = _1D4._00.channels.r;
	// 	_120->_104.channels.g = _1D4._00.channels.g;
	// 	_120->_104.channels.b = _1D4._00.channels.b;
	// 	_120->_104.channels.a = _1D4._00.channels.a;
	// 	_120->_108.channels.r = _1D4._04.channels.r;
	// 	_120->_108.channels.g = _1D4._04.channels.g;
	// 	_120->_108.channels.b = _1D4._04.channels.b;
	// 	_120->_108.channels.a = _1D4._04.channels.a;
	// 	_120->setWhite(_1D4.m_white);
	// 	_120->setBlack(_1D4.m_black);
	// 	break;
	// case 1:
	// 	_118->_104.channels.r = _1D4._00.channels.r;
	// 	_118->_104.channels.g = _1D4._00.channels.g;
	// 	_118->_104.channels.b = _1D4._00.channels.b;
	// 	_118->_104.channels.a = _1D4._00.channels.a;
	// 	_118->_108.channels.r = _1D4._04.channels.r;
	// 	_118->_108.channels.g = _1D4._04.channels.g;
	// 	_118->_108.channels.b = _1D4._04.channels.b;
	// 	_118->_108.channels.a = _1D4._04.channels.a;
	// 	_118->setWhite(_1D4.m_white);
	// 	_118->setBlack(_1D4.m_black);
	// 	_11C->_104.channels.r = _1C4._00.channels.r;
	// 	_11C->_104.channels.g = _1C4._00.channels.g;
	// 	_11C->_104.channels.b = _1C4._00.channels.b;
	// 	_11C->_104.channels.a = _1C4._00.channels.a;
	// 	_11C->_108.channels.r = _1C4._04.channels.r;
	// 	_11C->_108.channels.g = _1C4._04.channels.g;
	// 	_11C->_108.channels.b = _1C4._04.channels.b;
	// 	_11C->_108.channels.a = _1C4._04.channels.a;
	// 	_11C->setWhite(_1C4.m_white);
	// 	_11C->setBlack(_1C4.m_black);
	// 	_120->_104.channels.r = _1D4._00.channels.r;
	// 	_120->_104.channels.g = _1D4._00.channels.g;
	// 	_120->_104.channels.b = _1D4._00.channels.b;
	// 	_120->_104.channels.a = _1D4._00.channels.a;
	// 	_120->_108.channels.r = _1D4._04.channels.r;
	// 	_120->_108.channels.g = _1D4._04.channels.g;
	// 	_120->_108.channels.b = _1D4._04.channels.b;
	// 	_120->_108.channels.a = _1D4._04.channels.a;
	// 	_120->setWhite(_1D4.m_white);
	// 	_120->setBlack(_1D4.m_black);
	// 	break;
	// case 2:
	// 	_118->_104.channels.r = _1D4._00.channels.r;
	// 	_118->_104.channels.g = _1D4._00.channels.g;
	// 	_118->_104.channels.b = _1D4._00.channels.b;
	// 	_118->_104.channels.a = _1D4._00.channels.a;
	// 	_118->_108.channels.r = _1D4._04.channels.r;
	// 	_118->_108.channels.g = _1D4._04.channels.g;
	// 	_118->_108.channels.b = _1D4._04.channels.b;
	// 	_118->_108.channels.a = _1D4._04.channels.a;
	// 	_118->setWhite(_1D4.m_white);
	// 	_118->setBlack(_1D4.m_black);
	// 	_11C->_104.channels.r = _1D4._00.channels.r;
	// 	_11C->_104.channels.g = _1D4._00.channels.g;
	// 	_11C->_104.channels.b = _1D4._00.channels.b;
	// 	_11C->_104.channels.a = _1D4._00.channels.a;
	// 	_11C->_108.channels.r = _1D4._04.channels.r;
	// 	_11C->_108.channels.g = _1D4._04.channels.g;
	// 	_11C->_108.channels.b = _1D4._04.channels.b;
	// 	_11C->_108.channels.a = _1D4._04.channels.a;
	// 	_11C->setWhite(_1D4.m_white);
	// 	_11C->setBlack(_1D4.m_black);
	// 	_120->_104.channels.r = _1C4._00.channels.r;
	// 	_120->_104.channels.g = _1C4._00.channels.g;
	// 	_120->_104.channels.b = _1C4._00.channels.b;
	// 	_120->_104.channels.a = _1C4._00.channels.a;
	// 	_120->_108.channels.r = _1C4._04.channels.r;
	// 	_120->_108.channels.g = _1C4._04.channels.g;
	// 	_120->_108.channels.b = _1C4._04.channels.b;
	// 	_120->_108.channels.a = _1C4._04.channels.a;
	// 	_120->setWhite(_1C4.m_white);
	// 	_120->setBlack(_1C4.m_black);
	// 	break;
	// default:
	// 	break;
	// }
#else
	if (_0C8._01) {
		_110->_104 = _1C4._00;
		_110->_108 = _1C4._04;
		_110->setWhite(_1C4.m_white);
		_110->setBlack(_1C4.m_black);
		_114->_104 = _1D4._00;
		_114->_108 = _1D4._04;
		_114->setWhite(_1D4.m_white);
		_114->setBlack(_1D4.m_black);
	} else {
		_110->_104 = _1D4._00;
		_110->_108 = _1D4._04;
		_110->setWhite(_1D4.m_white);
		_110->setBlack(_1D4.m_black);
		_114->_104 = _1C4._00;
		_114->_108 = _1C4._04;
		_114->setWhite(_1C4.m_white);
		_114->setBlack(_1C4.m_black);
	}
	switch (_0C8.m_soundMode) {
	case 0:
		_118->_104 = _1C4._00;
		_118->_108 = _1C4._04;
		_118->setWhite(_1C4.m_white);
		_118->setBlack(_1C4.m_black);
		_11C->_104 = _1D4._00;
		_11C->_108 = _1D4._04;
		_11C->setWhite(_1D4.m_white);
		_11C->setBlack(_1D4.m_black);
		_120->_104 = _1D4._00;
		_120->_108 = _1D4._04;
		_120->setWhite(_1D4.m_white);
		_120->setBlack(_1D4.m_black);
		break;
	case 1:
		_118->_104 = _1D4._00;
		_118->_108 = _1D4._04;
		_118->setWhite(_1D4.m_white);
		_118->setBlack(_1D4.m_black);
		_11C->_104 = _1C4._00;
		_11C->_108 = _1C4._04;
		_11C->setWhite(_1C4.m_white);
		_11C->setBlack(_1C4.m_black);
		_120->_104 = _1D4._00;
		_120->_108 = _1D4._04;
		_120->setWhite(_1D4.m_white);
		_120->setBlack(_1D4.m_black);
		break;
	case 2:
		_118->_104 = _1D4._00;
		_118->_108 = _1D4._04;
		_118->setWhite(_1D4.m_white);
		_118->setBlack(_1D4.m_black);
		_11C->_104 = _1D4._00;
		_11C->_108 = _1D4._04;
		_11C->setWhite(_1D4.m_white);
		_11C->setBlack(_1D4.m_black);
		_120->_104 = _1C4._00;
		_120->_108 = _1C4._04;
		_120->setWhite(_1C4.m_white);
		_120->setBlack(_1C4.m_black);
		break;
	default:
		break;
	}
#endif
	for (int i = 0; i < 10; i++) {
		if (i < _0C8.m_bgmVolume) {
			_154[i]->m_isVisible = true;
			_154[i]->setAlpha(0xff);
		} else {
			_154[i]->m_isVisible = false;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (i < _0C8.m_seVolume) {
			_12C[i]->m_isVisible = true;
			_12C[i]->setAlpha(0xff);
		} else {
			_12C[i]->m_isVisible = false;
		}
	}
	// if (_0C8.m_isDeflicker) {
	// 	_124->_104.channels = JUtility::TColor(_1C4._00).channels;
	// 	_124->_108.channels = JUtility::TColor(_1C4._04).channels;
	// 	_124->setWhite(JUtility::TColor(_1C4.m_white));
	// 	_124->setBlack(JUtility::TColor(_1C4.m_black));
	// 	_128->_104.channels = JUtility::TColor(_1D4._00).channels;
	// 	_128->_108.channels = JUtility::TColor(_1D4._04).channels;
	// 	_128->setWhite(JUtility::TColor(_1D4.m_white));
	// 	_128->setBlack(JUtility::TColor(_1D4.m_black));
	// } else {
	// 	_124->_104.channels = JUtility::TColor(_1D4._00).channels;
	// 	_124->_108.channels = JUtility::TColor(_1D4._04).channels;
	// 	_124->setWhite(JUtility::TColor(_1D4.m_white));
	// 	_124->setBlack(JUtility::TColor(_1D4.m_black));
	// 	_128->_104.channels = JUtility::TColor(_1C4._00).channels;
	// 	_128->_108.channels = JUtility::TColor(_1C4._04).channels;
	// 	_128->setWhite(JUtility::TColor(_1C4.m_white));
	// 	_128->setBlack(JUtility::TColor(_1C4.m_black));
	// }
	if (_0C8.m_isDeflicker) {
		_124->_104 = _1C4._00;
		_124->_108 = _1C4._04;
		_124->setWhite(_1C4.m_white);
		_124->setBlack(_1C4.m_black);
		_128->_104 = _1D4._00;
		_128->_108 = _1D4._04;
		_128->setWhite(_1D4.m_white);
		_128->setBlack(_1D4.m_black);
	} else {
		_124->_104 = _1D4._00;
		_124->_108 = _1D4._04;
		_124->setWhite(_1D4.m_white);
		_124->setBlack(_1D4.m_black);
		_128->_104 = _1C4._00;
		_128->_108 = _1C4._04;
		_128->setWhite(_1C4.m_white);
		_128->setBlack(_1C4.m_black);
	}
	switch (_104) {
	case 0:
		break;
	case 1:
		if (_0C8._01) {
			_240._18 = _110;
		} else {
			_240._18 = _114;
		}
		_28C._18 = nullptr;
		break;
	case 2:
		_240._18 = _118 + _0C8.m_soundMode;
		_28C._18 = nullptr;
		break;
	case 3:
		_240._18 = nullptr;
		if (_0C8.m_bgmVolume == 0) {
			_28C._18 = nullptr;
		} else {
			_28C._18 = _12C[9 + _0C8.m_bgmVolume];
		}
		break;
	case 4:
		_240._18 = nullptr;
		if (_0C8.m_seVolume == 0) {
			_28C._18 = nullptr;
		} else {
			_28C._18 = _128 + _0C8.m_seVolume;
		}
		break;
	case 5:
		if (_0C8.m_isDeflicker) {
			_240._18 = _124;
		} else {
			_240._18 = _128;
		}
		_28C._18 = nullptr;
		break;
	case 6:
		_240._18 = nullptr;
		_28C._18 = nullptr;
		break;
	default:
		_240._18 = nullptr;
		_28C._18 = nullptr;
	}
	/*
stwu     r1, -0x1c0(r1)
mflr     r0
stw      r0, 0x1c4(r1)
stmw     r27, 0x1ac(r1)
mr       r31, r3
lbz      r0, 0xc9(r3)
cmplwi   r0, 0
beq      lbl_803CCB8C
lwz      r7, 0x1c4(r31)
addi     r4, r1, 0x198
lwz      r29, 0x110(r31)
stw      r7, 0x8c(r1)
mr       r3, r29
lbz      r5, 0x8c(r1)
lbz      r0, 0x8d(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x8e(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x8f(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1c8(r31)
stw      r7, 0x190(r1)
stw      r6, 0x88(r1)
lbz      r5, 0x88(r1)
lbz      r0, 0x89(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x8a(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x8b(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1cc(r31)
stw      r6, 0x194(r1)
stw      r0, 0x198(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1d0(r31)
mr       r3, r29
addi     r4, r1, 0x19c
stw      r0, 0x19c(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lwz      r7, 0x1d4(r31)
addi     r4, r1, 0x188
lwz      r29, 0x114(r31)
stw      r7, 0x84(r1)
mr       r3, r29
lbz      r5, 0x84(r1)
lbz      r0, 0x85(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x86(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x87(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1d8(r31)
stw      r7, 0x180(r1)
stw      r6, 0x80(r1)
lbz      r5, 0x80(r1)
lbz      r0, 0x81(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x82(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x83(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1dc(r31)
stw      r6, 0x184(r1)
stw      r0, 0x188(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1e0(r31)
mr       r3, r29
addi     r4, r1, 0x18c
stw      r0, 0x18c(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
b        lbl_803CCCC4

lbl_803CCB8C:
lwz      r7, 0x1d4(r31)
addi     r4, r1, 0x178
lwz      r29, 0x110(r31)
stw      r7, 0x7c(r1)
mr       r3, r29
lbz      r5, 0x7c(r1)
lbz      r0, 0x7d(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x7e(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x7f(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1d8(r31)
stw      r7, 0x170(r1)
stw      r6, 0x78(r1)
lbz      r5, 0x78(r1)
lbz      r0, 0x79(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x7a(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x7b(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1dc(r31)
stw      r6, 0x174(r1)
stw      r0, 0x178(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1e0(r31)
mr       r3, r29
addi     r4, r1, 0x17c
stw      r0, 0x17c(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lwz      r7, 0x1c4(r31)
addi     r4, r1, 0x168
lwz      r29, 0x114(r31)
stw      r7, 0x74(r1)
mr       r3, r29
lbz      r5, 0x74(r1)
lbz      r0, 0x75(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x76(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x77(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1c8(r31)
stw      r7, 0x160(r1)
stw      r6, 0x70(r1)
lbz      r5, 0x70(r1)
lbz      r0, 0x71(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x72(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x73(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1cc(r31)
stw      r6, 0x164(r1)
stw      r0, 0x168(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1d0(r31)
mr       r3, r29
addi     r4, r1, 0x16c
stw      r0, 0x16c(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803CCCC4:
lwz      r0, 0xcc(r31)
cmpwi    r0, 1
beq      lbl_803CCEC4
bge      lbl_803CCCE0
cmpwi    r0, 0
bge      lbl_803CCCEC
b        lbl_803CD270

lbl_803CCCE0:
cmpwi    r0, 3
bge      lbl_803CD270
b        lbl_803CD09C

lbl_803CCCEC:
lwz      r7, 0x1c4(r31)
addi     r4, r1, 0x158
lwz      r29, 0x118(r31)
stw      r7, 0x6c(r1)
mr       r3, r29
lbz      r5, 0x6c(r1)
lbz      r0, 0x6d(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x6e(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x6f(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1c8(r31)
stw      r7, 0x150(r1)
stw      r6, 0x68(r1)
lbz      r5, 0x68(r1)
lbz      r0, 0x69(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x6a(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x6b(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1cc(r31)
stw      r6, 0x154(r1)
stw      r0, 0x158(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1d0(r31)
mr       r3, r29
addi     r4, r1, 0x15c
stw      r0, 0x15c(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lwz      r7, 0x1d4(r31)
addi     r4, r1, 0x148
lwz      r29, 0x11c(r31)
stw      r7, 0x64(r1)
mr       r3, r29
lbz      r5, 0x64(r1)
lbz      r0, 0x65(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x66(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x67(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1d8(r31)
stw      r7, 0x140(r1)
stw      r6, 0x60(r1)
lbz      r5, 0x60(r1)
lbz      r0, 0x61(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x62(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x63(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1dc(r31)
stw      r6, 0x144(r1)
stw      r0, 0x148(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1e0(r31)
mr       r3, r29
addi     r4, r1, 0x14c
stw      r0, 0x14c(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lwz      r7, 0x1d4(r31)
addi     r4, r1, 0x138
lwz      r29, 0x120(r31)
stw      r7, 0x5c(r1)
mr       r3, r29
lbz      r5, 0x5c(r1)
lbz      r0, 0x5d(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x5e(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x5f(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1d8(r31)
stw      r7, 0x130(r1)
stw      r6, 0x58(r1)
lbz      r5, 0x58(r1)
lbz      r0, 0x59(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x5a(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x5b(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1dc(r31)
stw      r6, 0x134(r1)
stw      r0, 0x138(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1e0(r31)
mr       r3, r29
addi     r4, r1, 0x13c
stw      r0, 0x13c(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
b        lbl_803CD270

lbl_803CCEC4:
lwz      r7, 0x1d4(r31)
addi     r4, r1, 0x128
lwz      r29, 0x118(r31)
stw      r7, 0x54(r1)
mr       r3, r29
lbz      r5, 0x54(r1)
lbz      r0, 0x55(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x56(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x57(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1d8(r31)
stw      r7, 0x120(r1)
stw      r6, 0x50(r1)
lbz      r5, 0x50(r1)
lbz      r0, 0x51(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x52(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x53(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1dc(r31)
stw      r6, 0x124(r1)
stw      r0, 0x128(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1e0(r31)
mr       r3, r29
addi     r4, r1, 0x12c
stw      r0, 0x12c(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lwz      r7, 0x1c4(r31)
addi     r4, r1, 0x118
lwz      r29, 0x11c(r31)
stw      r7, 0x4c(r1)
mr       r3, r29
lbz      r5, 0x4c(r1)
lbz      r0, 0x4d(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x4e(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x4f(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1c8(r31)
stw      r7, 0x110(r1)
stw      r6, 0x48(r1)
lbz      r5, 0x48(r1)
lbz      r0, 0x49(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x4a(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x4b(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1cc(r31)
stw      r6, 0x114(r1)
stw      r0, 0x118(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1d0(r31)
mr       r3, r29
addi     r4, r1, 0x11c
stw      r0, 0x11c(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lwz      r7, 0x1d4(r31)
addi     r4, r1, 0x108
lwz      r29, 0x120(r31)
stw      r7, 0x44(r1)
mr       r3, r29
lbz      r5, 0x44(r1)
lbz      r0, 0x45(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x46(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x47(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1d8(r31)
stw      r7, 0x100(r1)
stw      r6, 0x40(r1)
lbz      r5, 0x40(r1)
lbz      r0, 0x41(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x42(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x43(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1dc(r31)
stw      r6, 0x104(r1)
stw      r0, 0x108(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1e0(r31)
mr       r3, r29
addi     r4, r1, 0x10c
stw      r0, 0x10c(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
b        lbl_803CD270

lbl_803CD09C:
lwz      r7, 0x1d4(r31)
addi     r4, r1, 0xf8
lwz      r29, 0x118(r31)
stw      r7, 0x3c(r1)
mr       r3, r29
lbz      r5, 0x3c(r1)
lbz      r0, 0x3d(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x3e(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x3f(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1d8(r31)
stw      r7, 0xf0(r1)
stw      r6, 0x38(r1)
lbz      r5, 0x38(r1)
lbz      r0, 0x39(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x3a(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x3b(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1dc(r31)
stw      r6, 0xf4(r1)
stw      r0, 0xf8(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1e0(r31)
mr       r3, r29
addi     r4, r1, 0xfc
stw      r0, 0xfc(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lwz      r7, 0x1d4(r31)
addi     r4, r1, 0xe8
lwz      r29, 0x11c(r31)
stw      r7, 0x34(r1)
mr       r3, r29
lbz      r5, 0x34(r1)
lbz      r0, 0x35(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x36(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x37(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1d8(r31)
stw      r7, 0xe0(r1)
stw      r6, 0x30(r1)
lbz      r5, 0x30(r1)
lbz      r0, 0x31(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x32(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x33(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1dc(r31)
stw      r6, 0xe4(r1)
stw      r0, 0xe8(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1e0(r31)
mr       r3, r29
addi     r4, r1, 0xec
stw      r0, 0xec(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lwz      r7, 0x1c4(r31)
addi     r4, r1, 0xd8
lwz      r29, 0x120(r31)
stw      r7, 0x2c(r1)
mr       r3, r29
lbz      r5, 0x2c(r1)
lbz      r0, 0x2d(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x2e(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x2f(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1c8(r31)
stw      r7, 0xd0(r1)
stw      r6, 0x28(r1)
lbz      r5, 0x28(r1)
lbz      r0, 0x29(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x2a(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x2b(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1cc(r31)
stw      r6, 0xd4(r1)
stw      r0, 0xd8(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1d0(r31)
mr       r3, r29
addi     r4, r1, 0xdc
stw      r0, 0xdc(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803CD270:
mr       r28, r31
li       r27, 0
li       r30, 1
li       r29, 0

lbl_803CD280:
lwz      r0, 0xd0(r31)
cmpw     r27, r0
bge      lbl_803CD2B0
lwz      r3, 0x154(r28)
li       r4, 0xff
stb      r30, 0xb0(r3)
lwz      r3, 0x154(r28)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
b        lbl_803CD2B8

lbl_803CD2B0:
lwz      r3, 0x154(r28)
stb      r29, 0xb0(r3)

lbl_803CD2B8:
addi     r27, r27, 1
addi     r28, r28, 4
cmpwi    r27, 0xa
blt      lbl_803CD280
mr       r28, r31
li       r27, 0
li       r29, 1
li       r30, 0

lbl_803CD2D8:
lwz      r0, 0xd4(r31)
cmpw     r27, r0
bge      lbl_803CD308
lwz      r3, 0x12c(r28)
li       r4, 0xff
stb      r29, 0xb0(r3)
lwz      r3, 0x12c(r28)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
b        lbl_803CD310

lbl_803CD308:
lwz      r3, 0x12c(r28)
stb      r30, 0xb0(r3)

lbl_803CD310:
addi     r27, r27, 1
addi     r28, r28, 4
cmpwi    r27, 0xa
blt      lbl_803CD2D8
lbz      r0, 0xd8(r31)
cmplwi   r0, 0
beq      lbl_803CD468
lwz      r7, 0x1c4(r31)
addi     r4, r1, 0xc8
lwz      r29, 0x124(r31)
stw      r7, 0x24(r1)
mr       r3, r29
lbz      r5, 0x24(r1)
lbz      r0, 0x25(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x26(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x27(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1c8(r31)
stw      r7, 0xc0(r1)
stw      r6, 0x20(r1)
lbz      r5, 0x20(r1)
lbz      r0, 0x21(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x22(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x23(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1cc(r31)
stw      r6, 0xc4(r1)
stw      r0, 0xc8(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1d0(r31)
mr       r3, r29
addi     r4, r1, 0xcc
stw      r0, 0xcc(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lwz      r7, 0x1d4(r31)
addi     r4, r1, 0xb8
lwz      r29, 0x128(r31)
stw      r7, 0x1c(r1)
mr       r3, r29
lbz      r5, 0x1c(r1)
lbz      r0, 0x1d(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x1e(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x1f(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1d8(r31)
stw      r7, 0xb0(r1)
stw      r6, 0x18(r1)
lbz      r5, 0x18(r1)
lbz      r0, 0x19(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x1a(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x1b(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1dc(r31)
stw      r6, 0xb4(r1)
stw      r0, 0xb8(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1e0(r31)
mr       r3, r29
addi     r4, r1, 0xbc
stw      r0, 0xbc(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
b        lbl_803CD5A0

lbl_803CD468:
lwz      r7, 0x1d4(r31)
addi     r4, r1, 0xa8
lwz      r29, 0x124(r31)
stw      r7, 0x14(r1)
mr       r3, r29
lbz      r5, 0x14(r1)
lbz      r0, 0x15(r1)
stb      r5, 0x104(r29)
lbz      r5, 0x16(r1)
stb      r0, 0x105(r29)
lbz      r0, 0x17(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1d8(r31)
stw      r7, 0xa0(r1)
stw      r6, 0x10(r1)
lbz      r5, 0x10(r1)
lbz      r0, 0x11(r1)
stb      r5, 0x108(r29)
lbz      r5, 0x12(r1)
stb      r0, 0x109(r29)
lbz      r0, 0x13(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1dc(r31)
stw      r6, 0xa4(r1)
stw      r0, 0xa8(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1e0(r31)
mr       r3, r29
addi     r4, r1, 0xac
stw      r0, 0xac(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl
lwz      r7, 0x1c4(r31)
addi     r4, r1, 0x98
lwz      r29, 0x128(r31)
stw      r7, 0xc(r1)
mr       r3, r29
lbz      r5, 0xc(r1)
lbz      r0, 0xd(r1)
stb      r5, 0x104(r29)
lbz      r5, 0xe(r1)
stb      r0, 0x105(r29)
lbz      r0, 0xf(r1)
stb      r5, 0x106(r29)
stb      r0, 0x107(r29)
lwz      r6, 0x1c8(r31)
stw      r7, 0x90(r1)
stw      r6, 8(r1)
lbz      r5, 8(r1)
lbz      r0, 9(r1)
stb      r5, 0x108(r29)
lbz      r5, 0xa(r1)
stb      r0, 0x109(r29)
lbz      r0, 0xb(r1)
stb      r5, 0x10a(r29)
stb      r0, 0x10b(r29)
lwz      r0, 0x1cc(r31)
stw      r6, 0x94(r1)
stw      r0, 0x98(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa8(r12)
mtctr    r12
bctrl
lwz      r0, 0x1d0(r31)
mr       r3, r29
addi     r4, r1, 0x9c
stw      r0, 0x9c(r1)
lwz      r12, 0(r29)
lwz      r12, 0xa4(r12)
mtctr    r12
bctrl

lbl_803CD5A0:
lwz      r0, 0x104(r31)
cmplwi   r0, 6
bgt      lbl_803CD6AC
lis      r3, lbl_804E876C@ha
slwi     r0, r0, 2
addi     r3, r3, lbl_804E876C@l
lwzx     r0, r3, r0
mtctr    r0
bctr
.global  lbl_803CD5C4

lbl_803CD5C4:
lbz      r0, 0xc9(r31)
cmplwi   r0, 0
beq      lbl_803CD5DC
lwz      r0, 0x110(r31)
stw      r0, 0x258(r31)
b        lbl_803CD5E4

lbl_803CD5DC:
lwz      r0, 0x114(r31)
stw      r0, 0x258(r31)

lbl_803CD5E4:
li       r0, 0
stw      r0, 0x2a4(r31)
b        lbl_803CD6B8
.global  lbl_803CD5F0

lbl_803CD5F0:
lwz      r3, 0xcc(r31)
li       r0, 0
slwi     r3, r3, 2
add      r3, r31, r3
lwz      r3, 0x118(r3)
stw      r3, 0x258(r31)
stw      r0, 0x2a4(r31)
b        lbl_803CD6B8
.global  lbl_803CD610

lbl_803CD610:
li       r3, 0
stw      r3, 0x258(r31)
lwz      r0, 0xd0(r31)
cmpwi    r0, 0
bne      lbl_803CD62C
stw      r3, 0x2a4(r31)
b        lbl_803CD6B8

lbl_803CD62C:
slwi     r0, r0, 2
add      r3, r31, r0
lwz      r0, 0x150(r3)
stw      r0, 0x2a4(r31)
b        lbl_803CD6B8
.global  lbl_803CD640

lbl_803CD640:
li       r3, 0
stw      r3, 0x258(r31)
lwz      r0, 0xd4(r31)
cmpwi    r0, 0
bne      lbl_803CD65C
stw      r3, 0x2a4(r31)
b        lbl_803CD6B8

lbl_803CD65C:
slwi     r0, r0, 2
add      r3, r31, r0
lwz      r0, 0x128(r3)
stw      r0, 0x2a4(r31)
b        lbl_803CD6B8
.global  lbl_803CD670

lbl_803CD670:
lbz      r0, 0xd8(r31)
cmplwi   r0, 0
beq      lbl_803CD688
lwz      r0, 0x124(r31)
stw      r0, 0x258(r31)
b        lbl_803CD690

lbl_803CD688:
lwz      r0, 0x128(r31)
stw      r0, 0x258(r31)

lbl_803CD690:
li       r0, 0
stw      r0, 0x2a4(r31)
b        lbl_803CD6B8
.global  lbl_803CD69C

lbl_803CD69C:
li       r0, 0
stw      r0, 0x258(r31)
stw      r0, 0x2a4(r31)
b        lbl_803CD6B8

lbl_803CD6AC:
li       r0, 0
stw      r0, 0x258(r31)
stw      r0, 0x2a4(r31)
.global  lbl_803CD6B8

lbl_803CD6B8:
lmw      r27, 0x1ac(r1)
lwz      r0, 0x1c4(r1)
mtlr     r0
addi     r1, r1, 0x1c0
blr
	*/
}

/*
 * --INFO--
 * Address:	803CD6CC
 * Size:	000008
 */
char* TOption::getName(void)
{
	return "TOption";
	/*
addi     r3, r2, lbl_8051FA4C@sda21
blr
	*/
}

/*
 * --INFO--
 * Address:	803CD6D4
 * Size:	000004
 */
void TScreenBase::doKillScreen(void) { }
} // namespace Screen
} // namespace ebi
