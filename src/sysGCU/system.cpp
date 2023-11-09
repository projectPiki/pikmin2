#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JKernel/JKRFileCache.h"
#include "JSystem/JFramework/JFWSystem.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "JSystem/JUtility/JUTVideo.h"
#include "P2Macros.h"
#include "PSM/Factory.h"
#include "System.h"
#include "ResetManager.h"
#include "Resource.h"
#include "DvdStatus.h"
#include "GameFlow.h"
#include "Controller.h"
#include "ARAM.h"
#include "Pikmin2ARAM.h"
#include "MemoryCardMgr.h"
#include "Game/GameConfig.h"
#include "P2JME/P2JME.h"
#include "Game/PelletList.h"
#include "Game/gameStages.h"
#include "Game/gamePlayData.h"
#include "Game/MoviePlayer.h"
#include "PSSystem/PSGame.h"
#include "Dolphin/rand.h"
#include "Dolphin/card.h"
#include "Game/Data.h"
#include "JSystem/JFramework/JFWDisplay.h"
#include "PSSystem/PSSystemIF.h"
#include "LoadResource.h"

GXRenderModeObj localNtsc608x448IntDfProg = { VI_TVMODE_NTSC_PROG,
	                                          608, // fbWidth
	                                          448, // efbHeight
	                                          448, // xfbHeight
	                                          27,  // viXOrigin
	                                          16,  // viYOrigin
	                                          666, // viWidth
	                                          448, // viHeight
	                                          VI_XFBMODE_SF,
	                                          0, // field_rendering
	                                          0, // aa
	                                          { 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6 },
	                                          { 0, 0, 21, 22, 21, 0, 0 } };

GXRenderModeObj localNtsc608x448IntDf = { VI_TVMODE_NTSC_INT,
	                                      608, // fbWidth
	                                      448, // efbHeight
	                                      448, // xfbHeight
	                                      27,  // viXOrigin
	                                      16,  // viYOrigin
	                                      666, // viWidth
	                                      448, // viHeight
	                                      VI_XFBMODE_DF,
	                                      0, // field_rendering
	                                      0, // aa
	                                      { 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6 },
	                                      { 7, 7, 12, 12, 12, 7, 7 } };

GXRenderModeObj localPal608x448IntDf = { VI_TVMODE_PAL_INT,
	                                     608, // fbWidth
	                                     448, // efbHeight
	                                     538, // xfbHeight
	                                     25,  // viXOrigin
	                                     18,  // viYOrigin
	                                     670, // viWidth
	                                     538, // viHeight
	                                     VI_XFBMODE_DF,
	                                     0, // field_rendering
	                                     0, // aa
	                                     { 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6 },
	                                     { 7, 7, 12, 12, 12, 7, 7 } };

GXRenderModeObj localPal60608x448IntDf = { VI_TVMODE_EURGB60_INT,
	                                       608, // fbWidth
	                                       448, // efbHeight
	                                       448, // xfbHeight
	                                       27,  // viXOrigin
	                                       16,  // viYOrigin
	                                       666, // viWidth
	                                       448, // viHeight
	                                       VI_XFBMODE_DF,
	                                       0, // field_rendering
	                                       0, // aa
	                                       { 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6 },
	                                       { 7, 7, 12, 12, 12, 7, 7 } };

GXRenderModeObj* sRenderModeTable[4]
    = { &localNtsc608x448IntDfProg, &localNtsc608x448IntDf, &localPal608x448IntDf, &localPal60608x448IntDf };

System::ERenderMode System::mRenderMode;
System* sys;
System::GXVerifyArg System::sVerifyArg;

bool sUseABXCommand = true;

struct CallbackObject {
	u32* funcPtr;
	u8 filler[14 - 4];
};

extern CallbackObject exCallbackObject;

/*
 * --INFO--
 * Address:	80421EC4
 * Size:	0000A0
 */
void Pikmin2DefaultMemoryErrorRoutine(void* address, u32 size, int alignment)
{
	JUT_PANICLINE(99, "Memory Alloc Error!\n%x (size %d) align(%d)\nRestTotal=%d\nRestFree =%d\n", address, size, alignment,
	              static_cast<JKRHeap*>(address)->getTotalFreeSize(), static_cast<JKRHeap*>(address)->getFreeSize());

	OSPanic("system.cpp", 101, "abort\n");
}

/*
 * --INFO--
 * Address:	80421F64
 * Size:	000188
 */
void kando_panic_f(bool r3, const char* r4, int line, const char* r6, ...)
{
	va_list list;
	va_start(list, r6);
	JUTConsole* console = JUTException::sConsole;

	char buffer[0xFF];
	vsnprintf(buffer, sizeof(buffer), r6, list);
	if (!console) {
		OSPanic(r4, line, buffer);
	}

	char dest[4];
	memcpy(dest, JFWSystem::mainThread->mThread, 0x2C8);

	void* unknown                              = 0;
	JUTException::sErrorManager->mStackPointer = unknown;
	exCallbackObject.funcPtr                   = (u32*)preUserCallback;

	if (!console || (console && !(console->mOutput & 2))) {
		OSReport("%s in \"%s\" on line %d\n", buffer, r4, line);
	}

	if (console) {
		console->print_f("%s in \"%s\" on\n line %d\n", buffer, r4, line);
	}

	OSSendMessage(&JUTException::sMessageQueue, (OSMessage*)&exCallbackObject, true);
	OSSuspendThread(OSGetCurrentThread());

	/*
	.loc_0x0:
	  stwu      r1, -0x460(r1)
	  mflr      r0
	  stw       r0, 0x464(r1)
	  stmw      r26, 0x448(r1)
	  mr        r29, r4
	  mr        r30, r5
	  bne-      cr1, .loc_0x3C
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x3C:
	  addi      r11, r1, 0x468
	  addi      r0, r1, 0x8
	  lis       r12, 0x400
	  stw       r3, 0x8(r1)
	  lis       r3, 0x8042
	  lwz       r31, -0x775C(r13)
	  stw       r4, 0xC(r1)
	  addi      r28, r3, 0x20EC
	  addi      r27, r1, 0x68
	  lwz       r26, -0x7770(r13)
	  stw       r5, 0x10(r1)
	  addi      r3, r1, 0x74
	  mr        r5, r6
	  li        r4, 0xFF
	  stw       r6, 0x14(r1)
	  mr        r6, r27
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  stw       r12, 0x68(r1)
	  stw       r11, 0x6C(r1)
	  stw       r0, 0x70(r1)
	  bl        -0x35A998
	  cmplwi    r26, 0
	  bne-      .loc_0xB8
	  mr        r3, r29
	  mr        r4, r30
	  addi      r5, r1, 0x74
	  crclr     6, 0x6
	  bl        -0x3348AC

	.loc_0xB8:
	  lwz       r4, -0x7630(r13)
	  addi      r3, r1, 0x178
	  li        r5, 0x2C8
	  lwz       r27, 0x2C(r4)
	  mr        r4, r27
	  bl        -0x41CE94
	  lwz       r0, 0x17C(r1)
	  lis       r4, 0x804F
	  cmplwi    r31, 0
	  li        r3, 0xFF
	  stw       r0, 0xA0(r26)
	  li        r0, 0
	  stwu      r28, 0x7C20(r4)
	  sth       r3, 0x4(r4)
	  stw       r27, 0x8(r4)
	  stw       r0, 0xC(r4)
	  stw       r0, 0x10(r4)
	  beq-      .loc_0x110
	  beq-      .loc_0x12C
	  lwz       r0, 0x58(r31)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x12C

	.loc_0x110:
	  lis       r3, 0x804A
	  mr        r5, r29
	  subi      r3, r3, 0x67E4
	  mr        r6, r30
	  addi      r4, r1, 0x74
	  crclr     6, 0x6
	  bl        -0x3349A0

	.loc_0x12C:
	  cmplwi    r31, 0
	  beq-      .loc_0x154
	  lis       r4, 0x804A
	  mr        r3, r31
	  subi      r4, r4, 0x67CC
	  mr        r6, r29
	  mr        r7, r30
	  addi      r5, r1, 0x74
	  crclr     6, 0x6
	  bl        -0x3F9714

	.loc_0x154:
	  lis       r3, 0x804A
	  lis       r4, 0x804F
	  addi      r3, r3, 0x3A8
	  li        r5, 0x1
	  addi      r4, r4, 0x7C20
	  bl        -0x332BB0
	  bl        -0x33070C
	  bl        -0x32F958
	  lmw       r26, 0x448(r1)
	  lwz       r0, 0x464(r1)
	  mtlr      r0
	  addi      r1, r1, 0x460
	  blr
	  */
}

// static const char unusedStrSystem[] = "%s in \"%s\" on\n line %d\n";

/*
 * --INFO--
 * Address:	804220EC
 * Size:	000118
 */
void preUserCallback(u16, OSContext*, u32, u32)
{
	sys->disableCPULockDetector();

	u32 track;
	// the inputs needed to open the crash log
	u16 inputs[11] = { Controller::PRESS_A,
		               Controller::PRESS_B,
		               Controller::PRESS_X,
		               Controller::PRESS_R,
		               Controller::PRESS_L,
		               Controller::PRESS_DPAD_LEFT,
		               Controller::PRESS_DPAD_DOWN,
		               Controller::PRESS_DPAD_UP,
		               Controller::PRESS_DPAD_RIGHT,
		               Controller::PRESS_Z,
		               0 };

	int i = 0;
	// wait until all required inputs are in before passing, disable this if you want instant crash log
	while (inputs[i]) {
		u32 input;
		JUTException::waitTime(100);
		JUTException::sErrorManager->readPad(&input, nullptr);
		if (input) {
			i += ((u8)input == (u8)inputs[i]);
		}
	}

	sUseABXCommand = true;
	if (JUTException::sConsole) {
		JUTException::sConsole->startPrint(3, "--- Game debug information ---\n");
		JUTConsoleManager::sManager->drawDirect(true);
	} else {
		OSReport("ƒRƒ“ƒ\[ƒ‹‚ª‚ ‚è‚Ü‚¹‚ñ\n");
	}
	/*
	    stwu     r1, -0x40(r1)
	    mflr     r0
	    lis      r4, gStrSystem_CPP@ha
	    stw      r0, 0x44(r1)
	    stw      r31, 0x3c(r1)
	    stw      r30, 0x38(r1)
	    addi     r30, r4, gStrSystem_CPP@l
	    stw      r29, 0x34(r1)
	    stw      r28, 0x30(r1)
	    lwz      r3, sys@sda21(r13)
	    bl       disableCPULockDetector__6SystemFv
	    lwz      r7, 0x84(r30)
	    addi     r31, r1, 0xc
	    lwz      r6, 0x88(r30)
	    li       r28, 0
	    lwz      r5, 0x8c(r30)
	    lwz      r4, 0x90(r30)
	    lwz      r3, 0x94(r30)
	    lhz      r0, 0x98(r30)
	    stw      r7, 0xc(r1)
	    stw      r6, 0x10(r1)
	    stw      r5, 0x14(r1)
	    stw      r4, 0x18(r1)
	    stw      r3, 0x1c(r1)
	    sth      r0, 0x20(r1)
	    b        lbl_80422190

	lbl_80422154:
	    li       r3, 0x64
	    bl       waitTime__12JUTExceptionFl
	    lwz      r3, sErrorManager__12JUTException@sda21(r13)
	    addi     r4, r1, 8
	    li       r5, 0
	    bl       readPad__12JUTExceptionFPUlPUl
	    lwz      r0, 8(r1)
	    cmplwi   r0, 0
	    beq      lbl_80422190
	    subf     r3, r29, r0
	    subf     r0, r0, r29
	    nor      r3, r3, r0
	    addi     r0, r28, 1
	    srawi    r3, r3, 0x1f
	    and      r28, r0, r3

	lbl_80422190:
	    slwi     r0, r28, 1
	    lhzx     r29, r31, r0
	    cmplwi   r29, 0
	    bne      lbl_80422154
	    lwz      r3, sConsole__12JUTException@sda21(r13)
	    li       r0, 1
	    stb      r0, sUseABXCommand@sda21(r13)
	    cmplwi   r3, 0
	    beq      lbl_804221D8
	    stb      r0, 0x68(r3)
	    li       r0, 3
	    addi     r4, r30, 0x9c
	    stw      r0, 0x58(r3)
	    bl       print__10JUTConsoleFPCc
	    lwz      r3, sManager__17JUTConsoleManager@sda21(r13)
	    li       r4, 1
	    bl       drawDirect__17JUTConsoleManagerCFb
	    b        lbl_804221E4

	lbl_804221D8:
	    addi     r3, r30, 0xbc
	    crclr    6
	    bl       OSReport

	lbl_804221E4:
	    lwz      r0, 0x44(r1)
	    lwz      r31, 0x3c(r1)
	    lwz      r30, 0x38(r1)
	    lwz      r29, 0x34(r1)
	    lwz      r28, 0x30(r1)
	    mtlr     r0
	    addi     r1, r1, 0x40
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80422204
 * Size:	00002C
 */
void myTask(void* data) { sys->mCardMgr->cardProc(data); }

/*
 * --INFO--
 * Address:	80422230
 * Size:	000054
 */
System::FragmentationChecker::FragmentationChecker(char* name, bool)
{
	mName     = name;
	u32 free  = JKRGetCurrentHeap()->getFreeSize();
	u32 total = JKRGetCurrentHeap()->getTotalFreeSize();
	mSize     = total - free;
}

/*
 * --INFO--
 * Address:	80422284
 * Size:	00005C
 */
System::FragmentationChecker::~FragmentationChecker()
{
	JKRGetCurrentHeap()->getFreeSize();
	JKRGetCurrentHeap()->getTotalFreeSize();
}

/*
 * --INFO--
 * Address:	804222E0
 * Size:	00003C
 */
int System::assert_fragmentation(char*)
{
	u32 free  = JKRGetCurrentHeap()->getFreeSize();
	u32 total = JKRGetCurrentHeap()->getTotalFreeSize();
	if (free < total) {
		return; // probably commented out code?
	}
}

/*
 * --INFO--
 * Address:	8042231C
 * Size:	000010
 */
void System::enableCPULockDetector(int locks)
{
	mCpuRetraceCount = 0;
	mCpuLockCount    = locks;
}

/*
 * --INFO--
 * Address:	8042232C
 * Size:	000018
 */
int System::disableCPULockDetector()
{
	int locks        = mCpuLockCount;
	mCpuLockCount    = 0;
	mCpuRetraceCount = 0;
	return locks;
}

static const char aramStrmName[] = "aramStrm";

/*
 * --INFO--
 * Address:	80422344
 * Size:	0000A4
 */
void retraceCallback(u32)
{
	sys->mCpuRetraceCount++;
	if (DVDGetDriveStatus() == 1) {
		sys->mCpuRetraceCount = 0;
	}

	if ((int)sys->mCpuLockCount > 0 && (int)sys->mCpuRetraceCount > (int)sys->mCpuLockCount) {
		sUseABXCommand = false;
		OSReport("cpuLockCount %d retraceCount %d\n", sys->mCpuLockCount, sys->mCpuRetraceCount);
		kando_panic_f(1, "system/retrace", 0, "CPU LOCKED!");
	}
}

/*
 * --INFO--
 * Address:	804223E8
 * Size:	00011C
 */
System::System()
    : mSysHeap(nullptr)
    , mGameFlow(nullptr)
    , mDvdStatus(nullptr)
    , mDisplay(nullptr)
    , mDeltaTime(SINGLE_FRAME_LENGTH)
    , mPlayData(nullptr)
    , mFpsFactor(1.0f)
    , mRegion(System::LANG_ENGLISH)
{
	sys            = this;
	sUseABXCommand = true;
	initCurrentHeapMutex();
	JKRHeap* heap = JKRGetCurrentHeap();
	mSysHeap      = JKRExpHeap::create(0x428000, nullptr, true);
	mSysHeap->becomeCurrentHeap();
	mHeapStatus = new HeapStatus;
	construct();
	heap->becomeCurrentHeap();
	mGfx = nullptr;
	JUTVideo::sManager->setPostRetraceCallback(retraceCallback);
	mFlags.clear();
	mSysHeap->getTotalFreeSize();
	mSysHeap->getTotalFreeSize();
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
System::~System()
{
	// UNUSED FUNCTION
}

char* cMapFileName = "/pikmin2UP.map"; // !!

/*
 * --INFO--
 * Address:	80422504
 * Size:	000214
 */
void System::construct()
{
	heapStatusStart("construct", nullptr);
	srand(OSGetTick());

	_30 = 0;
	_34 = 0;

	heapStatusStart("DvdThread", nullptr);
	mDvdThread = new DvdThread(0x8000, 16, 29);
	heapStatusEnd("DvdThread");

	heapStatusStart("SysTimers", nullptr);
	mTimers = new SysTimers;
	heapStatusEnd("SysTimers");

	heapStatusStart("ResetManager", nullptr);
	mResetMgr = new ResetManager(0.5f);
	heapStatusEnd("ResetManager");

	mCardMgr = new Game::MemoryCard::Mgr;
	mCardMgr->init();

	mTask = JKRTask::create(1, 17, 0x4000, nullptr);
	mTask->request(myTask, nullptr, nullptr);

	heapStatusStart("ARAMMgr", nullptr);
	ARAM::Mgr::init();
	Pikmin2ARAM::Mgr::init();
	heapStatusEnd("ARAMMgr");

	heapStatusStart("ResourceMgr2D", nullptr);
	Resource::Mgr2D::init(JKRGetCurrentHeap());
	heapStatusEnd("ResourceMgr2D");

	mPlayData  = new Game::CommonSaveData::Mgr;
	mDvdStatus = new DvdStatus;
	LoadResource::Mgr::init();

	mGameFlow = new GameFlow;

	heapStatusEnd("construct");
}

/*
 * --INFO--
 * Address:	80422718
 * Size:	0000E8
 */
void System::constructWithDvdAccessFirst()
{
	P2ASSERTLINE(1013, JKRGetCurrentHeap()->getHeapType() == 'EXPH');

	JKRHeap* old = JKRGetCurrentHeap();
	mSysHeap->becomeCurrentHeap();

	heapStatusStart("constructWithDvdAccess1st", nullptr);
	Game::gGameConfig.load("gameConfig.ini");
	createSoundSystem();
	heapStatusEnd("constructWithDvdAccess1st");

	mSysHeap->getTotalFreeSize();
	mSysHeap->getTotalFreeSize();
	mSysHeap->getFreeSize();
	mSysHeap->getFreeSize();
	old->becomeCurrentHeap();
	heapStatusDump(true);
}

/*
 * --INFO--
 * Address:	80422800
 * Size:	000120
 */
void System::constructWithDvdAccessSecond()
{
	loadSoundResource();

	P2ASSERTLINE(1064, JKRGetCurrentHeap()->getHeapType() == 'EXPH');

	JKRExpHeap* old = static_cast<JKRExpHeap*>(JKRGetCurrentHeap());
	mSysHeap->becomeCurrentHeap();

	heapStatusStart("constructWithDvdAccess2nd", nullptr);
	heapStatusStart("P2JME::Mgr", nullptr);
	P2JME::Mgr::create(old);
	heapStatusEnd("P2JME::Mgr");
	Game::PelletList::Mgr::globalInstance();
	Game::stageList = new Game::Stages;
	Game::PlayData::construct();
	Game::MovieList::construct();
	heapStatusEnd("constructWithDvdAccess2nd");

	mSysHeap->getTotalFreeSize();
	mSysHeap->getTotalFreeSize();
	mSysHeap->getFreeSize();
	mSysHeap->getFreeSize();
	old->becomeCurrentHeap();
	heapStatusDump(true);
}

/*
 * --INFO--
 * Address:	80422920
 * Size:	000054
 */
void System::createRomFont(JKRHeap* heap) { mRomFont = new JUTRomFont(heap); }

/*
 * --INFO--
 * Address:	80422974
 * Size:	000050
 */
void System::destroyRomFont()
{
	delete mRomFont;
	mRomFont = nullptr;
}

/*
 * --INFO--
 * Address:	804229C4
 * Size:	0001B8
 */
void System::createSoundSystem()
{
	sys->heapStatusStart("SoundSystem", nullptr);
	JKRHeap* old = JKRGetCurrentHeap();

	P2ASSERTLINE(1158, JKRGetCurrentHeap());
	P2ASSERTLINE(1161, gResMgr2D);

	JKRHeap* resHeap    = gResMgr2D->mHeap;
	u32 size            = resHeap->getFreeSize();
	JKRExpHeap* newheap = JKRExpHeap::create(size, resHeap, true);

	P2ASSERTLINE(1165, newheap);
	newheap->becomeCurrentHeap();

	JKRFileCache* arc = JKRFileCache::mount("/AudioRes", newheap, nullptr);
	void* file        = JKRFileLoader::getGlbResource("PSound.aaf", arc);

	P2ASSERTLINE(1173, file);

	PSM::Factory* factory = new PSM::Factory;
	factory->mMakeSeFunc  = PSM::SeSound::makeSeSound;
	factory->mHeap        = old;
	factory->mHeapSize    = 0x900000;
	factory->mAafFile     = file;
	factory->newSoundSystem();

	JKRSolidHeap* newheap2 = JKRSolidHeap::create(old->getFreeSize(), old, true);
	newheap2->becomeCurrentHeap();

	PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
	mgr->newAndSetGlobalScene();
	newheap2->adjustSize();

	old->becomeCurrentHeap();
	resHeap->destroy();

	sys->heapStatusEnd("SoundSystem");
	gResMgr2D->mRemainingSize = gResMgr2D->mHeapSize;

	/*
	    stwu     r1, -0x20(r1)
	    mflr     r0
	    lis      r4, gStrSystem_CPP@ha
	    li       r5, 0
	    stw      r0, 0x24(r1)
	    stmw     r27, 0xc(r1)
	    addi     r29, r4, gStrSystem_CPP@l
	    addi     r4, r29, 0x1d4
	    lwz      r3, sys@sda21(r13)
	    bl       heapStatusStart__6SystemFPcP7JKRHeap
	    lwz      r31, sCurrentHeap__7JKRHeap@sda21(r13)
	    cmplwi   r31, 0
	    bne      lbl_80422A0C
	    addi     r3, r29, 0
	    addi     r5, r29, 0x174
	    li       r4, 0x486
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422A0C:
	    lwz      r0, gResMgr2D@sda21(r13)
	    cmplwi   r0, 0
	    bne      lbl_80422A2C
	    addi     r3, r29, 0
	    addi     r5, r29, 0x174
	    li       r4, 0x489
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422A2C:
	    lwz      r3, gResMgr2D@sda21(r13)
	    lwz      r27, 4(r3)
	    mr       r3, r27
	    bl       getFreeSize__7JKRHeapFv
	    mr       r4, r27
	    li       r5, 1
	    bl       create__10JKRExpHeapFUlP7JKRHeapb
	    or.      r28, r3, r3
	    bne      lbl_80422A64
	    addi     r3, r29, 0
	    addi     r5, r29, 0x174
	    li       r4, 0x48d
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422A64:
	    mr       r3, r28
	    bl       becomeCurrentHeap__7JKRHeapFv
	    mr       r4, r28
	    addi     r3, r29, 0x1e0
	    li       r5, 0
	    bl       mount__12JKRFileCacheFPCcP7JKRHeapPCc
	    mr       r4, r3
	    addi     r3, r29, 0x1ec
	    bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	    or.      r30, r3, r3
	    bne      lbl_80422AA4
	    addi     r3, r29, 0
	    addi     r5, r29, 0x174
	    li       r4, 0x495
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422AA4:
	    li       r3, 0x1c
	    bl       __nw__FUl
	    or.      r27, r3, r3
	    beq      lbl_80422AC4
	    bl       __ct__Q26PSGame10SysFactoryFv
	    lis      r3, __vt__Q23PSM7Factory@ha
	    addi     r0, r3, __vt__Q23PSM7Factory@l
	    stw      r0, 0x10(r27)

	lbl_80422AC4:
	    lis      r3, makeSeSound__Q23PSM7SeSoundFv@ha
	    lis      r0, 0x90
	    addi     r4, r3, makeSeSound__Q23PSM7SeSoundFv@l
	    mr       r3, r27
	    stw      r4, 0xc(r27)
	    stw      r31, 0(r27)
	    stw      r0, 4(r27)
	    stw      r30, 8(r27)
	    bl       newSoundSystem__Q26PSGame10SysFactoryFv
	    mr       r3, r31
	    bl       getFreeSize__7JKRHeapFv
	    mr       r4, r31
	    li       r5, 1
	    bl       create__12JKRSolidHeapFUlP7JKRHeapb
	    mr       r27, r3
	    bl       becomeCurrentHeap__7JKRHeapFv
	    lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	    cmplwi   r0, 0
	    bne      lbl_80422B24
	    addi     r3, r29, 0x1f8
	    addi     r5, r29, 0x174
	    li       r4, 0x1d3
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422B24:
	    lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	    lwz      r12, 0(r3)
	    lwz      r12, 0x10(r12)
	    mtctr    r12
	    bctrl
	    mr       r3, r27
	    bl       adjustSize__12JKRSolidHeapFv
	    mr       r3, r31
	    bl       becomeCurrentHeap__7JKRHeapFv
	    mr       r3, r28
	    bl       destroy__7JKRHeapFv
	    lwz      r3, sys@sda21(r13)
	    addi     r4, r29, 0x1d4
	    bl       heapStatusEnd__6SystemFPc
	    lwz      r3, gResMgr2D@sda21(r13)
	    lwz      r0, 8(r3)
	    stw      r0, 0xc(r3)
	    lmw      r27, 0xc(r1)
	    lwz      r0, 0x24(r1)
	    mtlr     r0
	    addi     r1, r1, 0x20
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80422B7C
 * Size:	0000E8
 */
void System::loadSoundResource()
{
	JKRHeap* old = JKRGetCurrentHeap();

	JKRSolidHeap* newheap = JKRSolidHeap::create(old->getFreeSize(), old, true);
	newheap->becomeCurrentHeap();

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	PSM::Scene_Global* scene = static_cast<PSM::Scene_Global*>(mgr->mScenes);
	P2ASSERTLINE(1245, scene);

	scene->scene1stLoadSync();
	newheap->adjustSize();
	old->becomeCurrentHeap();
	/*
	    stwu     r1, -0x20(r1)
	    mflr     r0
	    lis      r3, gStrSystem_CPP@ha
	    stw      r0, 0x24(r1)
	    stw      r31, 0x1c(r1)
	    addi     r31, r3, gStrSystem_CPP@l
	    stw      r30, 0x18(r1)
	    stw      r29, 0x14(r1)
	    stw      r28, 0x10(r1)
	    lwz      r28, sCurrentHeap__7JKRHeap@sda21(r13)
	    mr       r3, r28
	    bl       getFreeSize__7JKRHeapFv
	    mr       r4, r28
	    li       r5, 1
	    bl       create__12JKRSolidHeapFUlP7JKRHeapb
	    mr       r30, r3
	    bl       becomeCurrentHeap__7JKRHeapFv
	    lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	    cmplwi   r0, 0
	    bne      lbl_80422BE0
	    addi     r3, r31, 0x1f8
	    addi     r5, r31, 0x174
	    li       r4, 0x1d3
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422BE0:
	    lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	    cmplwi   r29, 0
	    bne      lbl_80422C00
	    addi     r3, r31, 0x1f8
	    addi     r5, r31, 0x174
	    li       r4, 0x1dc
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422C00:
	    lwz      r29, 4(r29)
	    cmplwi   r29, 0
	    bne      lbl_80422C20
	    addi     r3, r31, 0
	    addi     r5, r31, 0x174
	    li       r4, 0x4dd
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80422C20:
	    mr       r3, r29
	    lwz      r12, 0(r29)
	    lwz      r12, 0x14(r12)
	    mtctr    r12
	    bctrl
	    mr       r3, r30
	    bl       adjustSize__12JKRSolidHeapFv
	    mr       r3, r28
	    bl       becomeCurrentHeap__7JKRHeapFv
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
 * Address:	........
 * Size:	000014
 */
System::GXVerifyArg::GXVerifyArg()
{
	_00 = 1;
	_04 = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void System::setGXVerifyLevel(System::GXVerifyArg&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void System::clearGXVerifyLevel()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80422C64
 * Size:	0000F8
 */
void System::initialize()
{
	// not whats actually being compared here but I have no clue
	if (sys->_2C == 'vald') {
		System::setRenderMode(mRenderMode);
	} else {
		System::setRenderMode(NTSC_Standard);
	}

	JFWSystem::CSetUpParam::maxStdHeaps      = 1;
	JFWSystem::CSetUpParam::sysHeapSize      = 0xa0000;
	JFWSystem::CSetUpParam::fifoBufSize      = 0x70800;
	JFWSystem::CSetUpParam::aramAudioBufSize = 0x900000;
	JFWSystem::CSetUpParam::aramGraphBufSize = 0xffffffff;

	JFWSystem::CSetUpParam::renderMode = getRenderModeObj();
	JFWSystem::init();
	JUTException::sErrorManager->setGamePad((JUTGamePad*)-1); // wack
	JUTException::setPreUserCallback(preUserCallback);
	JUTException::sErrorManager->mPrintWaitTime1 = 0;
	JUTException::sErrorManager->mPrintWaitTime0 = 0;
	JKRHeap::setErrorHandler(Pikmin2DefaultMemoryErrorRoutine);
	JKRHeap::sRootHeap->becomeCurrentHeap();
	JUTException::appendMapFile(cMapFileName);
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    lis      r5, 0x80700000@ha
	    stw      r0, 0x14(r1)
	    lwz      r4, 0x80700000@l(r5)
	    addis    r0, r4, 0x899f
	    cmplwi   r0, 0x6c64
	    bne      lbl_80422C90
	    lbz      r3, 4(r5)
	    bl       setRenderMode__6SystemFQ26System11ERenderMode
	    b        lbl_80422C98

	lbl_80422C90:
	    li       r3, 0
	    bl       setRenderMode__6SystemFQ26System11ERenderMode

	lbl_80422C98:
	    li       r3, 4
	    oris     r3, r3, 4
	    mtspr    0x392, r3
	    li       r3, 5
	    oris     r3, r3, 5
	    mtspr    0x393, r3
	    li       r3, 6
	    oris     r3, r3, 6
	    mtspr    0x394, r3
	    li       r3, 7
	    oris     r3, r3, 7
	    mtspr    0x395, r3
	    lis      r4, 0x00070800@ha
	    addi     r5, r4, 0x00070800@l
	    li       r7, 1
	    lis      r6, 0xa
	    lis      r4, 0x90
	    li       r0, -1
	    stw      r7, maxStdHeaps__Q29JFWSystem11CSetUpParam@sda21(r13)
	    stw      r6, sysHeapSize__Q29JFWSystem11CSetUpParam@sda21(r13)
	    stw      r5, fifoBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
	    stw      r4, aramAudioBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
	    stw      r0, aramGraphBufSize__Q29JFWSystem11CSetUpParam@sda21(r13)
	    bl       getRenderModeObj__6SystemFv
	    stw      r3, renderMode__Q29JFWSystem11CSetUpParam@sda21(r13)
	    bl       init__9JFWSystemFv
	    lwz      r5, sErrorManager__12JUTException@sda21(r13)
	    li       r0, -1
	    lis      r4, preUserCallback__FUsP9OSContextUlUl@ha
	    stw      r0, 0x84(r5)
	    addi     r3, r4, preUserCallback__FUsP9OSContextUlUl@l
	    stw      r0, 0x88(r5)
	    bl       setPreUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v
	    lwz      r5, sErrorManager__12JUTException@sda21(r13)
	    li       r0, 0
	    lis      r4, Pikmin2DefaultMemoryErrorRoutine__FPvUli@ha
	    stw      r0, 0x90(r5)
	    addi     r3, r4, Pikmin2DefaultMemoryErrorRoutine__FPvUli@l
	    lwz      r4, sErrorManager__12JUTException@sda21(r13)
	    stw      r0, 0x8c(r4)
	    bl       setErrorHandler__7JKRHeapFPFPvUli_v
	    lwz      r3, sRootHeap__7JKRHeap@sda21(r13)
	    bl       becomeCurrentHeap__7JKRHeapFv
	    lwz      r3, cMapFileName@sda21(r13)
	    bl       appendMapFile__12JUTExceptionFPCc
	    lwz      r0, 0x14(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	80422D5C
 * Size:	000094
 */
void System::loadResourceFirst()
{
	Delegate<System>* delegate = new (mSysHeap, 0) Delegate<System>(this, &constructWithDvdAccessFirst);

	dvdLoadUseCallBack(&mThreadCommand, delegate);
}

/*
 * --INFO--
 * Address:	80422DF0
 * Size:	000094
 */
void System::loadResourceSecond()
{
	Delegate<System>* delegate = new (mSysHeap, 0) Delegate<System>(this, &constructWithDvdAccessSecond);

	dvdLoadUseCallBack(&mThreadCommand, delegate);
}

/*
 * --INFO--
 * Address:	80422E84
 * Size:	000034
 */
int System::run()
{
	mGameFlow->run();
	return EXIT_SUCCESS;
}

/*
 * --INFO--
 * Address:	80422EB8
 * Size:	000058
 */
f32 System::getTime()
{
	return (int)(OSGetTick() / 1000);
	/*
	    stwu     r1, -0x10(r1)
	    mflr     r0
	    stw      r0, 0x14(r1)
	    bl       OSGetTick
	    lis      r5, 0x800000F8@ha
	    lis      r4, 0x10624DD3@ha
	    lwz      r5, 0x800000F8@l(r5)
	    lis      r0, 0x4330
	    addi     r4, r4, 0x10624DD3@l
	    stw      r0, 8(r1)
	    srwi     r0, r5, 2
	    lfd      f1, lbl_80520420@sda21(r2)
	    mulhwu   r0, r4, r0
	    srwi     r0, r0, 6
	    divwu    r0, r3, r0
	    stw      r0, 0xc(r1)
	    lfd      f0, 8(r1)
	    fsubs    f1, f0, f1
	    lwz      r0, 0x14(r1)
	    mtlr     r0
	    addi     r1, r1, 0x10
	    blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void System::checkOptionBlockSaveFlag()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80422F10
 * Size:	000010
 */
void System::clearOptionBlockSaveFlag() { mPlayData->mChallengeOpen = false; }

/*
 * --INFO--
 * Address:	80422F20
 * Size:	000010
 */
void System::setOptionBlockSaveFlag() { mPlayData->mChallengeOpen = true; }

/*
 * --INFO--
 * Address:	80422F30
 * Size:	000008
 */
Game::CommonSaveData::Mgr* System::getPlayCommonData() { return mPlayData; }

/*
 * --INFO--
 * Address:	80422F38
 * Size:	000058
 */
void System::dvdLoadUseCallBack(DvdThreadCommand* command, IDelegate* delegate)
{
	if (mDvdThread) {
		command->loadUseCallBack(delegate);
		mDvdThread->sendCommand(command);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void System::dvdLoadArchive(DvdThreadCommand*, char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void System::dvdLoadArchiveTemporary(DvdThreadCommand*, char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void System::dvdLoadFile(DvdThreadCommand*, char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void System::dvdLoadSync(DvdThreadCommand*, DvdThread::ESyncBlockFlag)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void System::dvdLoadSyncAll(DvdThread::ESyncBlockFlag)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80422F90
 * Size:	000054
 */
void System::deleteThreads()
{
	if (mDvdThread) {
		delete mDvdThread;
		mDvdThread = nullptr;
	}
}

/*
 * --INFO--
 * Address:	80423070
 * Size:	000010
 */
JFWDisplay* System::setCurrentDisplay(JFWDisplay* display)
{
	JFWDisplay* old = mDisplay;
	mDisplay        = display;
	return old;
}

/*
 * --INFO--
 * Address:	80423080
 * Size:	00001C
 */
JFWDisplay* System::clearCurrentDisplay(JFWDisplay* display)
{
	if (mDisplay == display) {
		mDisplay = nullptr;
	}

	return nullptr;
}

/*
 * --INFO--
 * Address:	8042309C
 * Size:	00003C
 */
bool System::beginFrame()
{
	mCpuRetraceCount = 0;
	JUTGamePad::read();
	mDvdStatus->update();
}

/*
 * --INFO--
 * Address:	804230D8
 * Size:	00005C
 */
void System::endFrame()
{
	mDisplay->endFrame();
	inactiveGP();
	mResetMgr->update();
	if (JKRThreadSwitch::sManager) {
		JKRThreadSwitch::sManager->loopProc();
	}
}

/*
 * --INFO--
 * Address:	80423134
 * Size:	000048
 */
void System::beginRender()
{
	activeGP();
	CARDProbe(0);
	mDisplay->beginRender();
}

/*
 * --INFO--
 * Address:	8042317C
 * Size:	000098
 */
void System::endRender()
{
	PSSystem::SysIF* sysif;
	if (sysif = PSSystem::spSysIF) {
		sys->mTimers->_start("sound", true);
		sysif->mainLoop();
		sys->mTimers->_stop("sound");
	}
	mDvdStatus->draw();
	mResetMgr->draw();
	mDisplay->endRender();
}

/*
 * --INFO--
 * Address:	80423214
 * Size:	000010
 */
System::ERenderMode System::setRenderMode(ERenderMode mode)
{
	ERenderMode currMode = mRenderMode;
	mRenderMode          = mode;
	return currMode;
}

/*
 * --INFO--
 * Address:	80423224
 * Size:	000018
 */
_GXRenderModeObj* System::getRenderModeObj() { return sRenderModeTable[mRenderMode]; }

/*
 * --INFO--
 * Address:	8042323C
 * Size:	000120
 */
void System::changeRenderMode(ERenderMode newmode)
{
	JUTVideo* mgr = JUTVideo::sManager;
	P2ASSERTLINE(1889, mgr);

	if (mRenderMode != newmode) {
		mRenderMode = newmode;
		VISetBlack(TRUE);
		VIFlush();
		VIWaitForRetrace();
		mgr->setRenderMode(getRenderModeObj());
	}

	switch (newmode) {
	case NTSC_Standard:
		OSSetProgressiveMode(0);
		break;
	case NTSC_Progressive:
		OSSetProgressiveMode(1);
		break;
	case PAL_Standard:
		OSSetEuRgb60Mode(0);
		break;
	case PAL_60Hz:
		OSSetEuRgb60Mode(1);
		break;
	default:
		JUT_PANICLINE(1921, "unknown renderMode:%d \n", newmode);
	}

	mPlayData->setDeflicker();
}

/*
 * --INFO--
 * Address:	8042335C
 * Size:	000008
 */
u32 System::heapStatusStart(char*, JKRHeap*) { return 0; }

/*
 * --INFO--
 * Address:	80423364
 * Size:	000004
 */
void System::heapStatusEnd(char*) { }

/*
 * --INFO--
 * Address:	80423368
 * Size:	000004
 */
void System::heapStatusDump(bool) { }

/*
 * --INFO--
 * Address:	8042336C
 * Size:	000004
 */
void System::heapStatusIndividual() { }

/*
 * --INFO--
 * Address:	80423370
 * Size:	000004
 */
void System::heapStatusNormal() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void System::heapStatusDumpNode()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80423374
 * Size:	000028
 */
void System::resetOn(bool flag)
{
	ResetManager* mgr = mResetMgr;
	mgr->mFlags.set(1);
	if (flag) {
		mgr->mFlags.set(8);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void System::resetOff()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042339C
 * Size:	000014
 */
void System::resetPermissionOn() { mResetMgr->mFlags.typeView |= 0x10000000; }

/*
 * --INFO--
 * Address:	804233B0
 * Size:	000018
 */
bool System::isResetActive() { return mResetMgr->mState; }

/*
 * --INFO--
 * Address:	804233C8
 * Size:	000014
 */
void System::activeGP() { mResetMgr->mFlags.set(2); }

/*
 * --INFO--
 * Address:	804233DC
 * Size:	000014
 */
void System::inactiveGP() { mResetMgr->mFlags.unset(2); }

/*
 * --INFO--
 * Address:	804233F0
 * Size:	000024
 */
bool System::isDvdErrorOccured() { return mDvdStatus->isErrorOccured(); }

/*
 * --INFO--
 * Address:	80423414
 * Size:	000034
 */
void System::initCurrentHeapMutex()
{
	OSInitMutex(this);
	mBackupHeap = nullptr;
}

/*
 * --INFO--
 * Address:	80423448
 * Size:	000070
 */
void System::startChangeCurrentHeap(JKRHeap* newheap)
{
	OSLockMutex(this);
	P2ASSERTLINE(2033, !mBackupHeap);
	mBackupHeap = JKRGetCurrentHeap();
	newheap->becomeCurrentHeap();
}

/*
 * --INFO--
 * Address:	804234B8
 * Size:	000068
 */
void System::endChangeCurrentHeap()
{
	P2ASSERTLINE(2041, mBackupHeap);
	mBackupHeap->becomeCurrentHeap();
	mBackupHeap = nullptr;
	OSUnlockMutex(this);
}

/*
 * --INFO--
 * Address:	80423520
 * Size:	000004
 */
void System::addGenNode(CNode*) { }

/*
 * --INFO--
 * Address:	80423524
 * Size:	000004
 */
void System::initGenNode() { }

/*
 * --INFO--
 * Address:	80423528
 * Size:	000004
 */
void System::refreshGenNode() { }

/*
 * --INFO--
 * Address:	8042352C
 * Size:	0000A0
 */
void System::setFrameRate(int newFactor)
{
	JFWDisplay* display = mDisplay;
	JUT_ASSERTLINE(2343, display, "no display\n");
	mFpsFactor                   = (f32)newFactor;
	mDeltaTime                   = mFpsFactor / 60.0f;
	display->mSecondsPer60Frames = newFactor;
	display->mTickRate           = 0;
	/*
	    stwu     r1, -0x20(r1)
	    mflr     r0
	    stw      r0, 0x24(r1)
	    stw      r31, 0x1c(r1)
	    stw      r30, 0x18(r1)
	    mr       r30, r4
	    stw      r29, 0x14(r1)
	    mr       r29, r3
	    lwz      r31, 0x4c(r3)
	    cmplwi   r31, 0
	    bne      lbl_80423574
	    lis      r3, gStrSystem_CPP@ha
	    lis      r5, lbl_804999E4@ha
	    addi     r3, r3, gStrSystem_CPP@l
	    li       r4, 0x927
	    addi     r5, r5, lbl_804999E4@l
	    crclr    6
	    bl       panic_f__12JUTExceptionFPCciPCce

	lbl_80423574:
	    xoris    r0, r30, 0x8000
	    lis      r3, 0x4330
	    stw      r0, 0xc(r1)
	    li       r0, 0
	    lfd      f2, lbl_80520438@sda21(r2)
	    stw      r3, 8(r1)
	    lfs      f0, lbl_80520430@sda21(r2)
	    lfd      f1, 8(r1)
	    fsubs    f1, f1, f2
	    stfs     f1, 0x64(r29)
	    lfs      f1, 0x64(r29)
	    fdivs    f0, f1, f0
	    stfs     f0, 0x54(r29)
	    sth      r30, 0x1c(r31)
	    stw      r0, 0x20(r31)
	    lwz      r31, 0x1c(r1)
	    lwz      r30, 0x18(r1)
	    lwz      r0, 0x24(r1)
	    lwz      r29, 0x14(r1)
	    mtlr     r0
	    addi     r1, r1, 0x20
	    blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void System::forceFinishSection()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804235D4
 * Size:	000060
 */
bool System::dvdLoadSyncNoBlock(DvdThreadCommand* command)
{
	DvdThread* thread = mDvdThread;

	bool check;
	if (thread) {
		check = thread->sync(command, (DvdThread::ESyncBlockFlag)1);
	} else {
		check = true;
	}

	if (check) {
		check = !mDvdStatus->isErrorOccured();
	}
	return check;
}

/*
 * --INFO--
 * Address:	80423634
 * Size:	00005C
 */
int System::dvdLoadSyncAllNoBlock()
{
	if (mDvdStatus->isErrorOccured()) {
		return -1;
	} else {
		if (mDvdThread) {
			return mDvdThread->syncAll((DvdThread::ESyncBlockFlag)1);
		} else {
			return 0;
		}
	}
}
