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
JUTConsole* JUTConsole::create(uint bufferSize, uint bufferCount, JKRHeap* heap)
{
	JUTConsoleManager* consoleManager = JUTConsoleManager::sManager;

	u32 byteCount = getObjectSizeFromBufferSize(bufferSize, bufferCount);
	void* buffer  = JKRHeap::alloc(byteCount, 0, heap);
	u8* memory    = (u8*)buffer;

	JUTConsole* console = new (memory) JUTConsole(bufferSize, bufferCount, true);
	console->mBuf       = memory + sizeof(JUTConsole);
	console->clear();

	consoleManager->appendConsole(console);
	return console;
}

/**
 * @note Address: 0x80028164
 * @note Size: 0x98
 */
JUTConsole* JUTConsole::create(uint bufferSize, void* memory, u32 objectSize)
{
	JUTConsoleManager* mgr = JUTConsoleManager::sManager;
	u32 byteCount          = getLineFromObjectSize(objectSize, bufferSize);
	u8* mem                = (u8*)memory;
	JUTConsole* console    = new (mem) JUTConsole(bufferSize, byteCount, false);
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
JUTConsole::JUTConsole(uint bufferSize, uint maxLines, bool unused)
{
	mUnusedFlag = unused;
	mLineLength = bufferSize;
	mMaxLines   = maxLines;

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

	mInactiveConsoleColor.set(0, 0, 0, 100);
	mActiveConsoleColor.set(0, 0, 0, 230);
	mTabWidth = 8;
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
size_t JUTConsole::getObjectSizeFromBufferSize(uint bufferSize, uint bufferCount)
{
	return (bufferSize + 2) * bufferCount + sizeof(JUTConsole);
}
/**
 * @note Address: 0x8002837C
 * @note Size: 0x10
 */
size_t JUTConsole::getLineFromObjectSize(u32 objectSize, uint bufferSize) { return (objectSize - sizeof(JUTConsole)) / (bufferSize + 2); }
/**
 * @note Address: 0x8002838C
 * @note Size: 0x5C
 */
void JUTConsole::clear()
{
	mCurrentLineIndex  = 0;
	mStartLineIndex    = 0;
	mCurrentLineIndex_ = 0;
	mLineOffset        = 0;

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
void JUTConsole::doDraw(JUTConsole::EConsoleType consoleType) const
{
	f32 fontYOffset;
	s32 changeLine_1;
	s32 changeLine_2;

	if (mIsVisible && (mFont || (consoleType == CONSOLETYPE_Unk2))) {
		if (mHeight != 0) {
			bool isActiveConsole = (consoleType == CONSOLETYPE_Active);
			fontYOffset          = 2.0f + mFontSizeY;

			if (consoleType != CONSOLETYPE_Unk2) {
				if (JUTVideo::getManager() == nullptr) {
					J2DOrthoGraph ortho(0.0f, 0.0f, 640.0f, 480.0f, -1.0f, 1.0f);
					ortho.setPort();

				} else {
					J2DOrthoGraph ortho(0.0f, 0.0f, (f32)JUTVideo::getManager()->getFbWidth(), (f32)JUTVideo::getManager()->getEfbHeight(),
					                    -1.0f, 1.0f);
					ortho.setPort();
				}

				const JUtility::TColor* TColorChoice;

				if (isActiveConsole) {
					TColorChoice = &this->mActiveConsoleColor;
				} else {
					TColorChoice = &this->mInactiveConsoleColor;
				}

				J2DFillBox((f32)(mPositionX - 2), (f32)(s32)((f32)mPositionY - fontYOffset),
				           (f32)(s32)((mFontSizeX * (f32)mLineLength) + 4.0f), (f32)(s32)(fontYOffset * (f32)mHeight),
				           (JUtility::TColor)*TColorChoice);

				mFont->setGX();
				if (isActiveConsole) {
					int startIndex = mCurrentLineIndex;
					int endIndex   = mCurrentLineIndex_;

					s32 s = checkColorDifference(diffIndex(startIndex, endIndex), mHeight);
					if (s <= 0) {
						mFont->setCharColor(JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF));

					} else if (startIndex == (s32)mStartLineIndex) {
						mFont->setCharColor(JUtility::TColor(0xFF, 0xE6, 0xE6, 0xFF));

					} else {
						mFont->setCharColor(JUtility::TColor(0xE6, 0xE6, 0xFF, 0xFF));
					}
				} else {
					mFont->setCharColor(JUtility::TColor(0xE6, 0xE6, 0xE6, 0xFF));
				}
			} else {
				JUTDirectPrint::sDirectPrint->erase(mPositionX - 3, mPositionY - 2, (mLineLength * 6) + 6,
				                                    (s32)(fontYOffset * (f32)mHeight) + 4);
				JUTDirectPrint::sDirectPrint->setCharColor(JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF));
			}

			char* linePtr;
			s32 currLine = mCurrentLineIndex;
			s32 yFactor  = 0;

			do {
				linePtr = (char*)getLinePtr(currLine); // getLinePtr was fixed, it was adding to the array index not to the address
				if ((u8)linePtr[-1] != 0) {            // necessary explicit comparison

					if (consoleType != 2) {
						f32 posX, posY, scaleX, scaleY;
						posY           = (((f32)yFactor * fontYOffset) + (f32)mPositionY);
						scaleY         = mFontSizeY;
						posX           = mPositionX;
						scaleX         = mFontSizeX;
						JUTFont* pFont = mFont;
						u32 lineLength = strlen((char*)linePtr);
						bool inputBool = true;

						pFont->drawString_size_scale(posX, posY, scaleX, scaleY, linePtr, lineLength, inputBool);

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
			} while ((yFactor < mHeight) && (changeLine_2 != mStartLineIndex));
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
		const u8* currentChar = (const u8*)str;
		u8* lineChar          = getLinePtr(mCurrentLineIndex_) + mLineOffset;
		while (*currentChar) {
			if (_6A && mStartLineIndex == nextIndex(mCurrentLineIndex_)) {
				break;
			}
			if (*currentChar == '\n') {
				currentChar++;
				mLineOffset = mLineLength;
			} else if (*currentChar == '\t') {
				currentChar++;
				while (mLineOffset < mLineLength) {
					*(lineChar++) = ' ';
					mLineOffset++;
					if (mLineOffset % mTabWidth == 0) {
						break;
					}
				}
			} else if (mFont && mFont->isLeadByte(*currentChar)) {
				if (mLineOffset + 1 < mLineLength) {
					*(lineChar++) = *(currentChar++);
					*(lineChar++) = *(currentChar++);
					mLineOffset++;
					mLineOffset++;
				} else {
					*(lineChar++) = 0;
					mLineOffset++;
				}
			} else {
				*(lineChar++) = *(currentChar++);
				mLineOffset++;
			}

			if (mLineOffset < mLineLength) {
				continue;
			}

			*lineChar          = 0;
			mCurrentLineIndex_ = nextIndex(mCurrentLineIndex_);
			mLineOffset        = 0;
			setLineAttr(mCurrentLineIndex_, 0xff);
			lineChar  = getLinePtr(mCurrentLineIndex_);
			*lineChar = 0;
			int diff  = diffIndex(mCurrentLineIndex, mCurrentLineIndex_);
			if (diff == mHeight) {
				mCurrentLineIndex = nextIndex(mCurrentLineIndex);
			}
			if (mCurrentLineIndex_ == mStartLineIndex) {
				mStartLineIndex = nextIndex(mStartLineIndex);
			}
			if (mCurrentLineIndex_ == mCurrentLineIndex) {
				mCurrentLineIndex = nextIndex(mCurrentLineIndex);
			}

			if (_6B) {
				break;
			}
		}
		*lineChar = 0;
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
		int indexDiff = mCurrentLineIndex - mStartLineIndex;
		indexDiff     = mCurrentLineIndex - mStartLineIndex >= 0 ? indexDiff : indexDiff + mMaxLines;

		if (amount < -indexDiff) {
			amount = -indexDiff;
		}
	} else if (amount > 0) {
		int var2 = mCurrentLineIndex_ - mStartLineIndex;
		var2     = var2 >= 0 ? var2 : var2 + mMaxLines;

		if (var2 + 1 <= mHeight) {
			amount = 0;
		} else {
			int var3 = mCurrentLineIndex_ - mCurrentLineIndex;
			var3     = mCurrentLineIndex_ - mCurrentLineIndex >= 0 ? var3 : var3 + mMaxLines;

			if (amount > (s32)(var3 - mHeight + 1)) {
				amount = var3 - mHeight + 1;
			}
		}
	}

	mCurrentLineIndex += amount;
	if (mCurrentLineIndex < 0) {
		mCurrentLineIndex += mMaxLines;
	}

	if (mCurrentLineIndex >= (u32)mMaxLines) {
		mCurrentLineIndex -= mMaxLines;
	}
}

/**
 * @note Address: 0x80028E50
 * @note Size: 0x24
 */
int JUTConsole::getUsedLine() const
{
	int line = mCurrentLineIndex_ - mStartLineIndex;

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
	int line = mCurrentLineIndex - mStartLineIndex;

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
