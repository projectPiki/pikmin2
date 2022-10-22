#include "JSystem/JKR/JKRHeap.h"
#include "types.h"
#include "JSystem/JUT/JUTConsole.h"
#include "JSystem/JUT/JUTVideo.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JUT/JUTDirectPrint.h"
#include "Dolphin/string.h"
#include "Dolphin/stl.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .balign 8
    .global __vt__10JUTConsole
    __vt__10JUTConsole:
        .4byte 0
        .4byte 0
        .4byte __dt__10JUTConsoleFv

    .section .sbss # 0x80514D80 - 0x80516360
    .balign 8
    .global sManager__17JUTConsoleManager
    sManager__17JUTConsoleManager:
        .skip 0x4
    sReportConsole: # local object
        .skip 0x4
    sWarningConsole: # local object
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .balign 8
    lbl_80516568:
        .float 2.0
    lbl_8051656C:
        .float 0.0
    lbl_80516570:
        .float 640.0
    lbl_80516574:
        .float 480.0
    lbl_80516578:
        .float -1.0
    lbl_8051657C:
        .float 1.0
    lbl_80516580:
        .float 4.0
    .balign 8
    lbl_80516588:
        .4byte 0x43300000
        .4byte 0x00000000
    .balign 8
    lbl_80516590:
        .4byte 0x43300000
        .4byte 0x80000000
    .balign 4
    lbl_80516598:
        .asciz "%s"
*/

/*
 * --INFO--
 * Address:	800280DC
 * Size:	000088
 */
JUTConsole* JUTConsole::create(unsigned int param_0, unsigned int param_1, JKRHeap* param_2)
{
	JUTConsoleManager* mgr = JUTConsoleManager::sManager;
	u32 byteCount          = getObjectSizeFromBufferSize(param_0, param_1);
	void* buf              = JKRHeap::alloc(byteCount, 0, param_2);
	u8* mem                = (u8*)buf;
	JUTConsole* console    = new (mem) JUTConsole(param_0, param_1, true);
	console->mBuf          = mem + sizeof(JUTConsole);
	console->clear();

	mgr->appendConsole(console);
	return console;
}

/*
 * --INFO--
 * Address:	80028164
 * Size:	000098
 */
JUTConsole* JUTConsole::create(unsigned int param_0, void* param_1, u32 param_2)
{
	JUTConsoleManager* mgr = JUTConsoleManager::sManager;
	u32 byteCount          = getLineFromObjectSize(param_2, param_0);
	u8* mem                = (u8*)param_1;
	JUTConsole* console    = new (mem) JUTConsole(param_0, byteCount, false);
	console->mBuf          = mem + sizeof(JUTConsole);
	console->clear();

	mgr->appendConsole(console);
	return console;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
// void JUTConsole::destroy(JUTConsole*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	800281FC
 * Size:	000100
 */
JUTConsole::JUTConsole(unsigned int param_0, unsigned int param_1, bool param_2)
{
	field_0x2c = param_2;
	field_0x20 = param_0;
	field_0x24 = param_1;

	mPositionX = 30;
	mPositionY = 50;
	mHeight    = 20;

	if (mHeight > field_0x24) {
		mHeight = field_0x24;
	}

	mFont      = nullptr;
	mVisible   = true;
	field_0x69 = false;
	field_0x6a = false;
	field_0x6b = false;
	mOutput    = 1;

	field_0x5c.set(0, 0, 0, 100);
	field_0x60.set(0, 0, 0, 230);
	field_0x64 = 8;
}

/*
 * --INFO--
 * Address:	800282FC
 * Size:	000070
 */
JUTConsole::~JUTConsole() { JUTConsoleManager::sManager->JUTConsoleManager::removeConsole(this); };

/*
 * --INFO--
 * Address:	8002836C
 * Size:	000010
 */
size_t JUTConsole::getObjectSizeFromBufferSize(uint b1, uint b2) { return (b1 + 2) * b2 + sizeof(JUTConsole); }

/*
 * --INFO--
 * Address:	8002837C
 * Size:	000010
 */
size_t JUTConsole::getLineFromObjectSize(u32 param_1, uint param_2) { return (param_1 - sizeof(JUTConsole)) / (param_2 + 2); }

/*
 * --INFO--
 * Address:	8002838C
 * Size:	00005C
 */
void JUTConsole::clear()
{
	field_0x30 = 0;
	field_0x34 = 0;
	field_0x38 = 0;
	field_0x3c = 0;

	for (int i = 0; i < field_0x24; i++) {
		setLineAttr(i, 0);
	}
	mBuf[0] = 0xFF;
	mBuf[1] = 0;
}

/*
 * --INFO--
 * Address:	800283E8
 * Size:	00055C
 */
void JUTConsole::doDraw(JUTConsole::EConsoleType inputType) const
{
	f32 fontYOffset;
	s32 changeLine_1;
	s32 changeLine_2;

	if ((mVisible != false) && ((mFont != nullptr) || (inputType == 2))) {
		if (mHeight != 0) {
			bool testVal = (inputType == 0);
			fontYOffset  = 2.0f + mFontSizeY;

			if (inputType != 2) {
				if (JUTVideo::getManager() == nullptr) {
					J2DOrthoGraph ortho(0.0f, 0.0f, 640.0f, 480.0f, -1.0f, 1.0f);
					ortho.setPort();

				} else {
					J2DOrthoGraph ortho(0.0f, 0.0f, (f32)JUTVideo::getManager()->getFbWidth(), (f32)JUTVideo::getManager()->getEfbHeight(),
					                    -1.0f, 1.0f);
					ortho.setPort();
				}
				const JUtility::TColor* TColorChoice;

				if (testVal) {
					TColorChoice = &this->field_0x60;
				} else {
					TColorChoice = &this->field_0x5c;
				}

				J2DFillBox((f32)(mPositionX - 2), (f32)(s32)((f32)mPositionY - fontYOffset),
				           (f32)(s32)((mFontSizeX * (f32)field_0x20) + 4.0f), (f32)(s32)(fontYOffset * (f32)mHeight),
				           (JUtility::TColor)*TColorChoice);

				mFont->setGX();
				if (testVal) {
					int colordiff = field_0x38;
					int colorf30  = field_0x30;

					s32 s = colorCheck(diffIndex(colorf30, colordiff), mHeight);
					if (s <= 0) {
						mFont->setCharColor(JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF));

					} else if (colorf30 == (s32)field_0x34) {
						mFont->setCharColor(JUtility::TColor(0xFF, 0xE6, 0xE6, 0xFF));

					} else {
						mFont->setCharColor(JUtility::TColor(0xE6, 0xE6, 0xFF, 0xFF));
					}
				} else {
					mFont->setCharColor(JUtility::TColor(0xE6, 0xE6, 0xE6, 0xFF));
				}
			} else {
				JUTDirectPrint::sDirectPrint->erase(mPositionX - 3, mPositionY - 2, (field_0x20 * 6) + 6,
				                                    (s32)(fontYOffset * (f32)mHeight) + 4);
				JUTDirectPrint::sDirectPrint->setCharColor(JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF));
			}

			char* linePtr;
			s32 currLine = field_0x30;
			s32 yFactor  = 0;

			do {
				linePtr = (char*)getLinePtr(currLine); // getLinePtr was fixed, it was adding to the array index not to the address
				if ((u8)linePtr[-1]) {

					if (inputType != 2) {
						f32 f1, f2, f3, f4;
						f2             = (((f32)yFactor * fontYOffset) + (f32)mPositionY);
						f4             = mFontSizeY;
						f1             = mPositionX;
						f3             = mFontSizeX;
						JUTFont* pFont = mFont;
						u32 lineLength = strlen((char*)linePtr); // this is getting called too early still
						bool inputBool = true;

						pFont->drawString_size_scale(f1, f2, f3, f4, linePtr, lineLength, inputBool);

					} else {

						JUTDirectPrint::sDirectPrint->drawString((u16)mPositionX, (((f32)yFactor * fontYOffset) + (f32)mPositionY),
						                                         linePtr);
					}

					changeLine_1 = currLine + 1;
					yFactor += 1;
					changeLine_2 = changeLine_1 & ~(-((s32)field_0x24 <= (s32)changeLine_1));
					currLine     = changeLine_2;
				} else {
					break;
				}
			} while ((yFactor < mHeight) && (changeLine_2 != field_0x34));
		}
	}
}

/*
 * --INFO--
 * Address:	80028944
 * Size:	00005C
 */
// WEAK - in header
// J2DOrthoGraph::~J2DOrthoGraph() { }

/*
 * --INFO--
 * Address:	800289A0
 * Size:	00008C
 */
extern "C" {
void JUTConsole_print_f_va_(JUTConsole* console, const char* fmt, va_list args);
}

void JUTConsole::print_f(const char* format, ...)
{
	va_list args;
	va_start(args, format);

	JUTConsole_print_f_va_(this, format, args);
	va_end(args);
}

/*
 * --INFO--
 * Address:	80028A2C
 * Size:	000300
 */
void JUTConsole::print(const char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x58(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80028D10
	lwz      r5, 0x20(r29)
	mr       r31, r4
	lwz      r3, 0x38(r29)
	addi     r4, r5, 2
	lwz      r0, 0x3c(r29)
	mullw    r3, r4, r3
	lwz      r4, 0x28(r29)
	addi     r3, r3, 1
	add      r30, r3, r0
	add      r30, r4, r30
	b        lbl_80028CFC

lbl_80028A80:
	lbz      r0, 0x6a(r29)
	cmplwi   r0, 0
	beq      lbl_80028AB8
	lwz      r6, 0x38(r29)
	lwz      r3, 0x24(r29)
	addi     r6, r6, 1
	lwz      r0, 0x34(r29)
	xoris    r5, r3, 0x8000
	subf     r3, r3, r6
	addc     r3, r3, r5
	subfe    r3, r3, r3
	andc     r3, r6, r3
	cmpw     r0, r3
	beq      lbl_80028D08

lbl_80028AB8:
	cmpwi    r4, 0xa
	bne      lbl_80028AD0
	lwz      r0, 0x20(r29)
	addi     r31, r31, 1
	stw      r0, 0x3c(r29)
	b        lbl_80028BC8

lbl_80028AD0:
	cmpwi    r4, 9
	bne      lbl_80028B24
	li       r5, 0x20
	addi     r31, r31, 1
	b        lbl_80028B10

lbl_80028AE4:
	stb      r5, 0(r30)
	addi     r30, r30, 1
	lwz      r3, 0x3c(r29)
	addi     r0, r3, 1
	stw      r0, 0x3c(r29)
	lwz      r4, 0x3c(r29)
	lwz      r3, 0x64(r29)
	divw     r0, r4, r3
	mullw    r0, r0, r3
	subf.    r0, r0, r4
	beq      lbl_80028BC8

lbl_80028B10:
	lwz      r3, 0x3c(r29)
	lwz      r0, 0x20(r29)
	cmplw    r3, r0
	blt      lbl_80028AE4
	b        lbl_80028BC8

lbl_80028B24:
	lwz      r3, 0x4c(r29)
	cmplwi   r3, 0
	beq      lbl_80028BAC
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80028BAC
	lwz      r3, 0x3c(r29)
	lwz      r0, 0x20(r29)
	addi     r3, r3, 1
	cmplw    r3, r0
	bge      lbl_80028B90
	lbz      r3, 0(r31)
	lbz      r0, 1(r31)
	addi     r31, r31, 2
	stb      r3, 0(r30)
	stb      r0, 1(r30)
	addi     r30, r30, 2
	lwz      r3, 0x3c(r29)
	addi     r0, r3, 1
	stw      r0, 0x3c(r29)
	lwz      r3, 0x3c(r29)
	addi     r0, r3, 1
	stw      r0, 0x3c(r29)
	b        lbl_80028BC8

lbl_80028B90:
	li       r0, 0
	stb      r0, 0(r30)
	addi     r30, r30, 1
	lwz      r3, 0x3c(r29)
	addi     r0, r3, 1
	stw      r0, 0x3c(r29)
	b        lbl_80028BC8

lbl_80028BAC:
	lbz      r0, 0(r31)
	addi     r31, r31, 1
	stb      r0, 0(r30)
	addi     r30, r30, 1
	lwz      r3, 0x3c(r29)
	addi     r0, r3, 1
	stw      r0, 0x3c(r29)

lbl_80028BC8:
	lwz      r3, 0x3c(r29)
	lwz      r0, 0x20(r29)
	cmplw    r3, r0
	blt      lbl_80028CFC
	li       r6, 0
	li       r5, 0xff
	stb      r6, 0(r30)
	lwz      r4, 0x38(r29)
	lwz      r0, 0x24(r29)
	addi     r4, r4, 1
	xoris    r3, r0, 0x8000
	subf     r0, r0, r4
	addc     r0, r0, r3
	subfe    r0, r0, r0
	andc     r0, r4, r0
	stw      r0, 0x38(r29)
	stw      r6, 0x3c(r29)
	lwz      r3, 0x20(r29)
	lwz      r0, 0x38(r29)
	addi     r3, r3, 2
	lwz      r4, 0x28(r29)
	mullw    r0, r3, r0
	stbx     r5, r4, r0
	lwz      r3, 0x20(r29)
	lwz      r0, 0x38(r29)
	addi     r3, r3, 2
	lwz      r4, 0x28(r29)
	mullw    r3, r3, r0
	addi     r3, r3, 1
	add      r3, r4, r3
	stb      r6, 0(r3)
	mr       r30, r3
	lwz      r4, 0x30(r29)
	lwz      r0, 0x38(r29)
	subf.    r3, r4, r0
	blt      lbl_80028C5C
	b        lbl_80028C64

lbl_80028C5C:
	lwz      r0, 0x24(r29)
	add      r3, r3, r0

lbl_80028C64:
	lwz      r0, 0x48(r29)
	cmplw    r3, r0
	bne      lbl_80028C90
	lwz      r0, 0x24(r29)
	addi     r4, r4, 1
	xoris    r3, r0, 0x8000
	subf     r0, r0, r4
	addc     r0, r0, r3
	subfe    r0, r0, r0
	andc     r0, r4, r0
	stw      r0, 0x30(r29)

lbl_80028C90:
	lwz      r0, 0x38(r29)
	lwz      r3, 0x34(r29)
	cmpw     r0, r3
	bne      lbl_80028CC0
	lwz      r0, 0x24(r29)
	addi     r4, r3, 1
	xoris    r3, r0, 0x8000
	subf     r0, r0, r4
	addc     r0, r0, r3
	subfe    r0, r0, r0
	andc     r0, r4, r0
	stw      r0, 0x34(r29)

lbl_80028CC0:
	lwz      r0, 0x38(r29)
	lwz      r3, 0x30(r29)
	cmpw     r0, r3
	bne      lbl_80028CF0
	lwz      r0, 0x24(r29)
	addi     r4, r3, 1
	xoris    r3, r0, 0x8000
	subf     r0, r0, r4
	addc     r0, r0, r3
	subfe    r0, r0, r0
	andc     r0, r4, r0
	stw      r0, 0x30(r29)

lbl_80028CF0:
	lbz      r0, 0x6b(r29)
	cmplwi   r0, 0
	bne      lbl_80028D08

lbl_80028CFC:
	lbz      r4, 0(r31)
	cmplwi   r4, 0
	bne      lbl_80028A80

lbl_80028D08:
	li       r0, 0
	stb      r0, 0(r30)

lbl_80028D10:
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
 * Address:	80028D2C
 * Size:	000048
 */
extern "C" void JUTConsole_print_f_va_(JUTConsole* console, const char* format, va_list args)
{
	char buffer[1024];
	vsnprintf(buffer, sizeof(buffer), format, args);
	console->print(buffer);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void JUTConsole::dumpToTerminal(unsigned int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void JUTConsole::dumpToConsole(JUTConsole*, unsigned int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80028D74
 * Size:	0000DC
 */
void JUTConsole::scroll(int amount)
{
	if (amount < 0) {
		int var = field_0x30 - field_0x34;
		var     = field_0x30 - field_0x34 >= 0 ? var : var + field_0x24;

		if (amount < -var) {
			amount = -var;
		}
	} else if (amount > 0) {
		int var2 = field_0x38 - field_0x34;
		var2     = var2 >= 0 ? var2 : var2 + field_0x24;

		if (var2 + 1 <= mHeight) {
			amount = 0;
		} else {
			int var3 = field_0x38 - field_0x30;
			var3     = field_0x38 - field_0x30 >= 0 ? var3 : var3 + field_0x24;

			if (amount > (s32)(var3 - mHeight + 1)) {
				amount = var3 - mHeight + 1;
			}
		}
	}

	field_0x30 += amount;
	if (field_0x30 < 0) {
		field_0x30 += field_0x24;
	}
	if (field_0x30 >= field_0x24) {
		field_0x30 -= field_0x24;
	}
}

/*
 * --INFO--
 * Address:	80028E50
 * Size:	000024
 */
int JUTConsole::getUsedLine() const
{
	int line = field_0x38 - field_0x34;
	if (line >= 0) {
		return line;
	}
	return line + field_0x24;
}

/*
 * --INFO--
 * Address:	80028E74
 * Size:	000024
 */
int JUTConsole::getLineOffset() const
{
	int line = field_0x30 - field_0x34;
	if (line >= 0) {
		return line;
	}
	return line + field_0x24;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
JUTConsoleManager::JUTConsoleManager()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void __dt__Q27JGadget27TLinkList<JUTConsole, -24> Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
JUTConsoleManager::~JUTConsoleManager()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80028E98
 * Size:	000068
 */
JUTConsoleManager* JUTConsoleManager::createManager(JKRHeap* heap)
{
	if (heap == NULL) {
		heap = JKRHeap::sCurrentHeap;
	}
	JUTConsoleManager* manager = new (heap, 0) JUTConsoleManager();
	sManager                   = manager;
	return manager;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void JUTConsoleManager::destroyManager(JUTConsoleManager*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80028F00
 * Size:	000070
 */
void JUTConsoleManager::appendConsole(JUTConsole*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	addi     r5, r1, 0x14
	stw      r31, 0x2c(r1)
	mr       r31, r4
	addi     r6, r31, 0x18
	stw      r30, 0x28(r1)
	mr       r30, r3
	addi     r0, r30, 4
	addi     r3, r1, 0x10
	stw      r0, 0xc(r1)
	mr       r4, r30
	stw      r0, 8(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	bl
Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode
	lwz      r0, 0xc(r30)
	cmplwi   r0, 0
	bne      lbl_80028F58
	stw      r31, 0xc(r30)

lbl_80028F58:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80028F70
 * Size:	0000C8
 */
void JUTConsoleManager::removeConsole(JUTConsole*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r0, 0xc(r3)
	cmplw    r0, r31
	bne      lbl_80028FEC
	lwz      r0, 0(r30)
	cmplwi   r0, 1
	bgt      lbl_80028FB0
	li       r0, 0
	stw      r0, 0xc(r30)
	b        lbl_80028FEC

lbl_80028FB0:
	addi     r3, r30, 4
	lwz      r4, 8(r30)
	stw      r3, 0x14(r1)
	addi     r0, r4, -24
	cmplw    r31, r0
	stw      r3, 0x10(r1)
	beq      lbl_80028FD8
	lwz      r3, 0x18(r31)
	addi     r0, r3, -24
	b        lbl_80028FE8

lbl_80028FD8:
	lwz      r3, 4(r30)
	stw      r3, 0xc(r1)
	addi     r0, r3, -24
	stw      r3, 8(r1)

lbl_80028FE8:
	stw      r0, 0xc(r30)

lbl_80028FEC:
	bl       JUTGetWarningConsole
	cmplw    r3, r31
	bne      lbl_80029000
	li       r3, 0
	bl       JUTSetWarningConsole

lbl_80029000:
	bl       JUTGetReportConsole
	cmplw    r3, r31
	bne      lbl_80029014
	li       r3, 0
	bl       JUTSetReportConsole

lbl_80029014:
	mr       r3, r30
	addi     r4, r31, 0x18
	bl       Remove__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode
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
 * Address:	........
 * Size:	000008
 */
void JUTConsoleManager::getConsoleNumber() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80029038
 * Size:	0000CC
 */
void JUTConsoleManager::draw() const
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	lwz      r0, 4(r3)
	stw      r31, 0x5c(r1)
	lwz      r31, 0xc(r3)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r29, r3
	addi     r30, r29, 4
	stw      r30, 0xc(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x30(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x44(r1)
	stw      r30, 8(r1)
	stw      r30, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r30, 0x18(r1)
	stw      r30, 0x40(r1)
	stw      r30, 0x3c(r1)
	stw      r30, 0x24(r1)
	b        lbl_800290C0

lbl_8002909C:
	lwz      r3, 0x44(r1)
	addi     r3, r3, -24
	cmplw    r3, r31
	beq      lbl_800290B4
	li       r4, 1
	bl       doDraw__10JUTConsoleCFQ210JUTConsole12EConsoleType

lbl_800290B4:
	lwz      r3, 0x44(r1)
	lwz      r0, 0(r3)
	stw      r0, 0x44(r1)

lbl_800290C0:
	lwz      r0, 0x44(r1)
	cmplw    r0, r30
	stw      r0, 0x38(r1)
	stw      r0, 0x20(r1)
	bne      lbl_8002909C
	lwz      r3, 0xc(r29)
	cmplwi   r3, 0
	beq      lbl_800290E8
	li       r4, 0
	bl       doDraw__10JUTConsoleCFQ210JUTConsole12EConsoleType

lbl_800290E8:
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
 * Address:	80029104
 * Size:	00007C
 */
void JUTConsoleManager::drawDirect(bool) const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r0, 0x10(r3)
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	beq      lbl_80029164
	clrlwi.  r0, r4, 0x18
	beq      lbl_80029158
	bl       OSEnableInterrupts
	mr       r30, r3
	bl       VIGetRetraceCount
	mr       r31, r3

lbl_80029144:
	bl       VIGetRetraceCount
	cmplw    r31, r3
	beq      lbl_80029144
	mr       r3, r30
	bl       OSRestoreInterrupts

lbl_80029158:
	lwz      r3, 0x10(r29)
	li       r4, 2
	bl       doDraw__10JUTConsoleCFQ210JUTConsole12EConsoleType

lbl_80029164:
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
 * Address:	80029180
 * Size:	000124
 */
void JUTConsoleManager::setDirectConsole(JUTConsole*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r4
	stw      r29, 0x34(r1)
	mr       r29, r3
	lwz      r31, 0x10(r3)
	cmplwi   r31, 0
	beq      lbl_800291E8
	addi     r0, r29, 4
	mr       r4, r29
	stw      r0, 0xc(r1)
	addi     r3, r1, 0x20
	addi     r5, r1, 0x24
	addi     r6, r31, 0x18
	stw      r0, 8(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x24(r1)
	bl
Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode
	lwz      r0, 0xc(r29)
	cmplwi   r0, 0
	bne      lbl_800291E8
	stw      r31, 0xc(r29)

lbl_800291E8:
	cmplwi   r30, 0
	beq      lbl_80029284
	lwz      r0, 0xc(r29)
	cmplw    r0, r30
	bne      lbl_80029250
	lwz      r0, 0(r29)
	cmplwi   r0, 1
	bgt      lbl_80029214
	li       r0, 0
	stw      r0, 0xc(r29)
	b        lbl_80029250

lbl_80029214:
	addi     r3, r29, 4
	lwz      r4, 8(r29)
	stw      r3, 0x1c(r1)
	addi     r0, r4, -24
	cmplw    r30, r0
	stw      r3, 0x18(r1)
	beq      lbl_8002923C
	lwz      r3, 0x18(r30)
	addi     r0, r3, -24
	b        lbl_8002924C

lbl_8002923C:
	lwz      r3, 4(r29)
	stw      r3, 0x14(r1)
	addi     r0, r3, -24
	stw      r3, 0x10(r1)

lbl_8002924C:
	stw      r0, 0xc(r29)

lbl_80029250:
	bl       JUTGetWarningConsole
	cmplw    r3, r30
	bne      lbl_80029264
	li       r3, 0
	bl       JUTSetWarningConsole

lbl_80029264:
	bl       JUTGetReportConsole
	cmplw    r3, r30
	bne      lbl_80029278
	li       r3, 0
	bl       JUTSetReportConsole

lbl_80029278:
	mr       r3, r29
	addi     r4, r30, 0x18
	bl       Remove__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode

lbl_80029284:
	stw      r30, 0x10(r29)
	lwz      r0, 0x44(r1)
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
 * Address:	800292A4
 * Size:	000008
 */
void JUTSetReportConsole(void)
{
	/*
	stw      r3, sReportConsole@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800292AC
 * Size:	000008
 */
void JUTGetReportConsole(void)
{
	/*
	lwz      r3, sReportConsole@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800292B4
 * Size:	000008
 */
void JUTSetWarningConsole(void)
{
	/*
	stw      r3, sWarningConsole@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800292BC
 * Size:	000008
 */
void JUTGetWarningConsole(void)
{
	/*
	lwz      r3, sWarningConsole@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void JUTReportConsole_f_va(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800292C4
 * Size:	0000DC
 */
void JUTReportConsole_f(void)
{
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stw      r31, 0x17c(r1)
	stw      r30, 0x178(r1)
	bne      cr1, lbl_800292FC
	stfd     f1, 0x28(r1)
	stfd     f2, 0x30(r1)
	stfd     f3, 0x38(r1)
	stfd     f4, 0x40(r1)
	stfd     f5, 0x48(r1)
	stfd     f6, 0x50(r1)
	stfd     f7, 0x58(r1)
	stfd     f8, 0x60(r1)

lbl_800292FC:
	lwz      r30, sReportConsole@sda21(r13)
	addi     r11, r1, 0x188
	addi     r0, r1, 8
	lis      r12, 0x100
	cmplwi   r30, 0
	stw      r3, 8(r1)
	addi     r31, r1, 0x68
	stw      r4, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r12, 0x68(r1)
	stw      r11, 0x6c(r1)
	stw      r0, 0x70(r1)
	bne      lbl_8002935C
	mr       r5, r3
	mr       r6, r31
	addi     r3, r1, 0x74
	li       r4, 0x100
	bl       vsnprintf
	b        lbl_80029388

lbl_8002935C:
	lwz      r0, 0x58(r30)
	clrlwi.  r0, r0, 0x1e
	beq      lbl_80029388
	mr       r5, r3
	mr       r6, r31
	addi     r3, r1, 0x74
	li       r4, 0x100
	bl       vsnprintf
	lwz      r3, sReportConsole@sda21(r13)
	addi     r4, r1, 0x74
	bl       print__10JUTConsoleFPCc

lbl_80029388:
	lwz      r0, 0x184(r1)
	lwz      r31, 0x17c(r1)
	lwz      r30, 0x178(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/*
 * --INFO--
 * Address:	800293A0
 * Size:	00002C
 */
void JUTReportConsole(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	addi     r3, r2, lbl_80516598@sda21
	stw      r0, 0x14(r1)
	crclr    6
	bl       JUTReportConsole_f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void JUTWarningConsole_f_va(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800293CC
 * Size:	0000DC
 */
void JUTWarningConsole_f(void)
{
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stw      r31, 0x17c(r1)
	stw      r30, 0x178(r1)
	bne      cr1, lbl_80029404
	stfd     f1, 0x28(r1)
	stfd     f2, 0x30(r1)
	stfd     f3, 0x38(r1)
	stfd     f4, 0x40(r1)
	stfd     f5, 0x48(r1)
	stfd     f6, 0x50(r1)
	stfd     f7, 0x58(r1)
	stfd     f8, 0x60(r1)

lbl_80029404:
	lwz      r30, sReportConsole@sda21(r13)
	addi     r11, r1, 0x188
	addi     r0, r1, 8
	lis      r12, 0x100
	cmplwi   r30, 0
	stw      r3, 8(r1)
	addi     r31, r1, 0x68
	stw      r4, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r12, 0x68(r1)
	stw      r11, 0x6c(r1)
	stw      r0, 0x70(r1)
	bne      lbl_80029464
	mr       r5, r3
	mr       r6, r31
	addi     r3, r1, 0x74
	li       r4, 0x100
	bl       vsnprintf
	b        lbl_80029490

lbl_80029464:
	lwz      r0, 0x58(r30)
	clrlwi.  r0, r0, 0x1e
	beq      lbl_80029490
	mr       r5, r3
	mr       r6, r31
	addi     r3, r1, 0x74
	li       r4, 0x100
	bl       vsnprintf
	lwz      r3, sReportConsole@sda21(r13)
	addi     r4, r1, 0x74
	bl       print__10JUTConsoleFPCc

lbl_80029490:
	lwz      r0, 0x184(r1)
	lwz      r31, 0x17c(r1)
	lwz      r30, 0x178(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/*
 * --INFO--
 * Address:	800294A8
 * Size:	00002C
 */
void JUTWarningConsole(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	addi     r3, r2, lbl_80516598@sda21
	stw      r0, 0x14(r1)
	crclr    6
	bl       JUTReportConsole_f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
