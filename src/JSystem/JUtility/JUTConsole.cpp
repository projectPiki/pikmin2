#include "Dolphin/os.h"
#include "Dolphin/vi.h"
#include "JSystem/JGadget/linklist.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "types.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "JSystem/JUtility/JUTVideo.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JUtility/JUTDirectPrint.h"
#include "string.h"

JUTConsoleManager* JUTConsoleManager::sManager;
static JUTConsole* sReportConsole;
static JUTConsole* sWarningConsole;

/**
 * @note Address: 0x800280DC
 * @note Size: 0x88
 */
JUTConsole* JUTConsole::create(uint param_0, uint param_1, JKRHeap* param_2)
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

/**
 * @note Address: 0x80028164
 * @note Size: 0x98
 */
JUTConsole* JUTConsole::create(uint param_0, void* param_1, u32 param_2)
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

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
// void JUTConsole::destroy(JUTConsole*)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800281FC
 * @note Size: 0x100
 */
JUTConsole::JUTConsole(uint param_0, uint param_1, bool param_2)
{
	_2C       = param_2;
	_20       = param_0;
	mMaxLines = param_1;

	mPositionX = 30;
	mPositionY = 50;
	mHeight    = 20;

	if (mHeight > mMaxLines) {
		mHeight = mMaxLines;
	}

	mFont      = nullptr;
	mIsVisible = true;
	_69        = false;
	_6A        = false;
	_6B        = false;
	mOutput    = 1;

	_5C.set(0, 0, 0, 100);
	_60.set(0, 0, 0, 230);
	_64 = 8;
}

/**
 * @note Address: 0x800282FC
 * @note Size: 0x70
 */
JUTConsole::~JUTConsole() { JUTConsoleManager::sManager->JUTConsoleManager::removeConsole(this); };

/**
 * @note Address: 0x8002836C
 * @note Size: 0x10
 */
size_t JUTConsole::getObjectSizeFromBufferSize(uint b1, uint b2) { return (b1 + 2) * b2 + sizeof(JUTConsole); }

/**
 * @note Address: 0x8002837C
 * @note Size: 0x10
 */
size_t JUTConsole::getLineFromObjectSize(u32 param_1, uint param_2) { return (param_1 - sizeof(JUTConsole)) / (param_2 + 2); }

/**
 * @note Address: 0x8002838C
 * @note Size: 0x5C
 */
void JUTConsole::clear()
{
	_30 = 0;
	_34 = 0;
	_38 = 0;
	_3C = 0;

	for (int i = 0; i < (u32)mMaxLines; i++) {
		setLineAttr(i, 0);
	}
	mBuf[0] = 0xFF;
	mBuf[1] = 0;
}

/**
 * @note Address: 0x800283E8
 * @note Size: 0x55C
 */
void JUTConsole::doDraw(JUTConsole::EConsoleType inputType) const
{
	f32 fontYOffset;
	s32 changeLine_1;
	s32 changeLine_2;

	if (mIsVisible && (mFont || (inputType == CONSOLETYPE_Unk2))) {
		if (mHeight != 0) {
			bool testVal = (inputType == CONSOLETYPE_Active);
			fontYOffset  = 2.0f + mFontSizeY;

			if (inputType != CONSOLETYPE_Unk2) {
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
					TColorChoice = &this->_60;
				} else {
					TColorChoice = &this->_5C;
				}

				J2DFillBox((f32)(mPositionX - 2), (f32)(s32)((f32)mPositionY - fontYOffset), (f32)(s32)((mFontSizeX * (f32)_20) + 4.0f),
				           (f32)(s32)(fontYOffset * (f32)mHeight), (JUtility::TColor)*TColorChoice);

				mFont->setGX();
				if (testVal) {
					int colordiff = _38;
					int colorf30  = _30;

					s32 s = colorCheck(diffIndex(colorf30, colordiff), mHeight);
					if (s <= 0) {
						mFont->setCharColor(JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF));

					} else if (colorf30 == (s32)_34) {
						mFont->setCharColor(JUtility::TColor(0xFF, 0xE6, 0xE6, 0xFF));

					} else {
						mFont->setCharColor(JUtility::TColor(0xE6, 0xE6, 0xFF, 0xFF));
					}
				} else {
					mFont->setCharColor(JUtility::TColor(0xE6, 0xE6, 0xE6, 0xFF));
				}
			} else {
				JUTDirectPrint::sDirectPrint->erase(mPositionX - 3, mPositionY - 2, (_20 * 6) + 6, (s32)(fontYOffset * (f32)mHeight) + 4);
				JUTDirectPrint::sDirectPrint->setCharColor(JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF));
			}

			char* linePtr;
			s32 currLine = _30;
			s32 yFactor  = 0;

			do {
				linePtr = (char*)getLinePtr(currLine); // getLinePtr was fixed, it was adding to the array index not to the address
				if ((u8)linePtr[-1] != 0) {            // necessary explicit comparison

					if (inputType != 2) {
						f32 f1, f2, f3, f4;
						f2             = (((f32)yFactor * fontYOffset) + (f32)mPositionY);
						f4             = mFontSizeY;
						f1             = mPositionX;
						f3             = mFontSizeX;
						JUTFont* pFont = mFont;
						u32 lineLength = strlen((char*)linePtr);
						bool inputBool = true;

						pFont->drawString_size_scale(f1, f2, f3, f4, linePtr, lineLength, inputBool);

					} else {

						JUTDirectPrint::sDirectPrint->drawString((u16)mPositionX, (((f32)yFactor * fontYOffset) + (f32)mPositionY),
						                                         linePtr);
					}

					changeLine_1 = currLine + 1;
					yFactor += 1;
					changeLine_2 = changeLine_1 & ~(-((s32)mMaxLines <= (s32)changeLine_1));
					currLine     = changeLine_2;
				} else {
					break;
				}
			} while ((yFactor < mHeight) && (changeLine_2 != _34));
		}
	}
}

/**
 * @note Address: 0x800289A0
 * @note Size: 0x8C
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

/**
 * @note Address: 0x80028A2C
 * @note Size: 0x300
 */
void JUTConsole::print(const char* str)
{
	if (mOutput & 1) {
		const u8* r29 = (const u8*)str;
		u8* r28       = getLinePtr(_38) + _3C;
		while (*r29) {
			if (_6A && _34 == nextIndex(_38)) {
				break;
			}
			if (*r29 == '\n') {
				r29++;
				_3C = _20;
			} else if (*r29 == '\t') {
				r29++;
				while (_3C < _20) {
					*(r28++) = ' ';
					_3C++;
					if (_3C % _64 == 0) {
						break;
					}
				}
			} else if (mFont && mFont->isLeadByte(*r29)) {
				if (_3C + 1 < _20) {
					*(r28++) = *(r29++);
					*(r28++) = *(r29++);
					_3C++;
					_3C++;
				} else {
					*(r28++) = 0;
					_3C++;
				}
			} else {
				*(r28++) = *(r29++);
				_3C++;
			}

			if (_3C < _20) {
				continue;
			}
			*r28 = 0;
			_38  = nextIndex(_38);
			_3C  = 0;
			setLineAttr(_38, 0xff);
			r28          = getLinePtr(_38);
			*r28         = 0;
			int local_28 = diffIndex(_30, _38);
			if (local_28 == mHeight) {
				_30 = nextIndex(_30);
			}
			if (_38 == _34) {
				_34 = nextIndex(_34);
			}
			if (_38 == _30) {
				_30 = nextIndex(_30);
			}

			if (_6B) {
				break;
			}
		}
		*r28 = 0;
	}
}

/**
 * @note Address: 0x80028D2C
 * @note Size: 0x48
 */
extern "C" void JUTConsole_print_f_va_(JUTConsole* console, const char* format, va_list args)
{
	char buffer[0x400];
	vsnprintf(buffer, sizeof(buffer), format, args);
	console->print(buffer);
}

/**
 * @note Address: N/A
 * @note Size: 0x12C
 */
void JUTConsole::dumpToTerminal(uint)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x154
 */
void JUTConsole::dumpToConsole(JUTConsole*, uint)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80028D74
 * @note Size: 0xDC
 */
void JUTConsole::scroll(int amount)
{
	if (amount < 0) {
		int var = _30 - _34;
		var     = _30 - _34 >= 0 ? var : var + mMaxLines;

		if (amount < -var) {
			amount = -var;
		}
	} else if (amount > 0) {
		int var2 = _38 - _34;
		var2     = var2 >= 0 ? var2 : var2 + mMaxLines;

		if (var2 + 1 <= mHeight) {
			amount = 0;
		} else {
			int var3 = _38 - _30;
			var3     = _38 - _30 >= 0 ? var3 : var3 + mMaxLines;

			if (amount > (s32)(var3 - mHeight + 1)) {
				amount = var3 - mHeight + 1;
			}
		}
	}

	_30 += amount;
	if (_30 < 0) {
		_30 += mMaxLines;
	}
	if (_30 >= (u32)mMaxLines) {
		_30 -= mMaxLines;
	}
}

/**
 * @note Address: 0x80028E50
 * @note Size: 0x24
 */
int JUTConsole::getUsedLine() const
{
	int line = _38 - _34;
	if (line >= 0) {
		return line;
	}
	return line + mMaxLines;
}

/**
 * @note Address: 0x80028E74
 * @note Size: 0x24
 */
int JUTConsole::getLineOffset() const
{
	int line = _30 - _34;
	if (line >= 0) {
		return line;
	}
	return line + mMaxLines;
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
JUTConsoleManager::JUTConsoleManager()
{
	mActiveConsole = nullptr;
	mDirectConsole = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// void __dt__Q27JGadget27TLinkList<JUTConsole, -24> Fv()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
JUTConsoleManager::~JUTConsoleManager()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80028E98
 * @note Size: 0x68
 */
JUTConsoleManager* JUTConsoleManager::createManager(JKRHeap* heap)
{
	if (heap == nullptr) {
		heap = JKRHeap::sCurrentHeap;
	}
	JUTConsoleManager* manager = new (heap, 0) JUTConsoleManager();
	sManager                   = manager;
	return manager;
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void JUTConsoleManager::destroyManager(JUTConsoleManager*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80028F00
 * @note Size: 0x70
 */
void JUTConsoleManager::appendConsole(JUTConsole* console)
{
	mLinkList.Push_back(console);

	if (mActiveConsole == nullptr) {
		mActiveConsole = console;
	}
}

/**
 * @note Address: 0x80028F70
 * @note Size: 0xC8
 */
void JUTConsoleManager::removeConsole(JUTConsole* console)
{
	if (mActiveConsole == console) {
		if (mLinkList.size() <= 1) {
			mActiveConsole = nullptr;
		} else {
			mActiveConsole = console != &mLinkList.back() ? mLinkList.Element_toValue(console->mListNode.getNext()) : &mLinkList.front();
		}
	}

	if (JUTGetWarningConsole() == console)
		JUTSetWarningConsole(nullptr);
	if (JUTGetReportConsole() == console)
		JUTSetReportConsole(nullptr);

	mLinkList.Remove(console);
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JUTConsoleManager::getConsoleNumber() const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80029038
 * @note Size: 0xCC
 */
void JUTConsoleManager::draw() const
{
	ConsoleList::const_iterator iter = mLinkList.begin();
	ConsoleList::const_iterator end  = mLinkList.end();

	for (; iter != end; ++iter) {
		const JUTConsole* const console = &(*iter);
		if (console != mActiveConsole)
			console->doDraw(JUTConsole::CONSOLETYPE_Inactive);
	}

	if (mActiveConsole != nullptr)
		mActiveConsole->doDraw(JUTConsole::CONSOLETYPE_Active);
}

/**
 * @note Address: 0x80029104
 * @note Size: 0x7C
 */
void JUTConsoleManager::drawDirect(bool doRetrace) const
{
	if (!mDirectConsole) {
		return;
	}
	if (doRetrace) {
		int interrupts = OSEnableInterrupts();
		u32 count      = VIGetRetraceCount();
		do {
		} while (count == VIGetRetraceCount());
		OSRestoreInterrupts(interrupts);
	}
	mDirectConsole->doDraw(JUTConsole::CONSOLETYPE_Unk2);
}

/**
 * @note Address: 0x80029180
 * @note Size: 0x124
 */
void JUTConsoleManager::setDirectConsole(JUTConsole* console)
{
	if (mDirectConsole) {
		appendConsole(mDirectConsole);
	}

	if (console) {
		removeConsole(console);
	}
	mDirectConsole = console;
}

/**
 * @note Address: 0x800292A4
 * @note Size: 0x8
 */
void JUTSetReportConsole(JUTConsole* console) { sReportConsole = console; }

/**
 * @note Address: 0x800292AC
 * @note Size: 0x8
 */
JUTConsole* JUTGetReportConsole() { return sReportConsole; }

/**
 * @note Address: 0x800292B4
 * @note Size: 0x8
 */
void JUTSetWarningConsole(JUTConsole* console) { sWarningConsole = console; }

/**
 * @note Address: 0x800292BC
 * @note Size: 0x8
 */
JUTConsole* JUTGetWarningConsole() { return sWarningConsole; }

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
void JUTReportConsole_f_va(const char* fmt, va_list args)
{
	char buf[256];

	if (JUTGetReportConsole() == nullptr) {
		vsnprintf(buf, sizeof(buf), fmt, args);

	} else if (JUTGetReportConsole()->isAnyOutput()) {
		vsnprintf(buf, sizeof(buf), fmt, args);
		JUTGetReportConsole()->print(buf);
	}
}

/**
 * @note Address: 0x800292C4
 * @note Size: 0xDC
 */
void JUTReportConsole_f(char const* fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	JUTReportConsole_f_va(fmt, args);
	va_end(args);
}

/**
 * @note Address: 0x800293A0
 * @note Size: 0x2C
 */
void JUTReportConsole(char const* str) { JUTReportConsole_f("%s", str); }

/**
 * @note Address: 0x800293CC
 * @note Size: 0xDC
 * @warning This does not actually use the warning console.
 */
void JUTWarningConsole_f(char const* fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	JUTReportConsole_f_va(fmt, args);
	va_end(args);
}

/**
 * @note Address: 0x800294A8
 * @note Size: 0x2C
 * @warning This does not actually use the warning console.
 */
void JUTWarningConsole(char const* str) { JUTReportConsole_f("%s", str); }
