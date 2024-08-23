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
#include "Dolphin/__start.h"

static GXRenderModeObj localNtsc608x448IntDfProg = { VI_TVMODE_NTSC_PROG,
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

static GXRenderModeObj localNtsc608x448IntDf = { VI_TVMODE_NTSC_INT,
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

static GXRenderModeObj localPal608x448IntDf = { VI_TVMODE_PAL_INT,
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

static GXRenderModeObj localPal60608x448IntDf = { VI_TVMODE_EURGB60_INT,
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

static GXRenderModeObj* sRenderModeTable[4]
    = { &localNtsc608x448IntDfProg, &localNtsc608x448IntDf, &localPal608x448IntDf, &localPal60608x448IntDf };

System::ERenderMode System::mRenderMode;
System* sys;
System::GXVerifyArg System::sVerifyArg;

bool sUseABXCommand = true;

static JUTException::ExCallbackObject exCallbackObject;

// pre-declare statics
static void preUserCallback(u16, OSContext*, u32, u32);

/**
 * @note Address: 0x80421EC4
 * @note Size: 0xA0
 */
static void Pikmin2DefaultMemoryErrorRoutine(void* address, u32 size, int alignment)
{
	JUT_PANICLINE(99, "Memory Alloc Error!\n%x (size %d) align(%d)\nRestTotal=%d\nRestFree =%d\n", address, size, alignment,
	              static_cast<JKRHeap*>(address)->getTotalFreeSize(), static_cast<JKRHeap*>(address)->getFreeSize());

	OSPanic(__FILE__, 101, "abort\n");
}

/**
 * @note Address: 0x80421F64
 * @note Size: 0x188
 */
static void kando_panic_f(bool r3, const char* file, int line, const char* format, ...)
{
	va_list list;
	va_start(list, format);

	JUTConsole* console  = JUTException::sConsole;
	JUTException* except = JUTException::sErrorManager;
	OSErrorHandler func  = (OSErrorHandler)preUserCallback;

	char buffer[260];
	vsnprintf(buffer, 255, format, list);
	if (!except) {
		OSPanic(file, line, buffer);
	}

	OSContext* context = &JFWSystem::mainThread->mThread->context;
	char dest[sizeof(OSContext)];
	memcpy(dest, context, sizeof(OSContext));
	except->mStackPointer = (void*)((u32*)dest)[1];

	exCallbackObject.mErrorHandler = func;
	exCallbackObject.mError        = 255;
	exCallbackObject.mContext      = context;
	exCallbackObject._0C           = 0;
	exCallbackObject._10           = 0;

	if (!console || (console && !(console->mOutput & 2))) {
		OSReport("%s in \"%s\" on line %d\n", buffer, file, line);
	}

	if (console) {
		console->print_f("%s in \"%s\" on\n line %d\n", buffer, file, line);
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

/**
 * @note Address: 0x804220EC
 * @note Size: 0x118
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
		// if current input is correct, go to next input, otherwise reset back to 0
		if (input) {
			i = ((inputs[i] == input) ? i + 1 : 0);
		}
	}

	sUseABXCommand = true;
	if (JUTException::sConsole) {
		JUTException::sConsole->startPrint(3, "--- Game debug information ---\n");
		JUTConsoleManager::sManager->drawDirect(true);
	} else {
		OSReport("コンソールがありません\n"); // 'no console'
	}
}

/**
 * @note Address: 0x80422204
 * @note Size: 0x2C
 */
void myTask(void* data) { sys->mCardMgr->cardProc(data); }

/**
 * @note Address: 0x80422230
 * @note Size: 0x54
 */
System::FragmentationChecker::FragmentationChecker(char* name, bool)
{
	mName     = name;
	u32 free  = JKRGetCurrentHeap()->getFreeSize();
	u32 total = JKRGetCurrentHeap()->getTotalFreeSize();
	mSize     = total - free;
}

/**
 * @note Address: 0x80422284
 * @note Size: 0x5C
 */
System::FragmentationChecker::~FragmentationChecker()
{
	JKRGetCurrentHeap()->getFreeSize();
	JKRGetCurrentHeap()->getTotalFreeSize();
}

/**
 * @note Address: 0x804222E0
 * @note Size: 0x3C
 */
int System::assert_fragmentation(char*)
{
	u32 free  = JKRGetCurrentHeap()->getFreeSize();
	u32 total = JKRGetCurrentHeap()->getTotalFreeSize();
	if (free < total) {
		return; // probably commented out code?
	}
}

/**
 * @note Address: 0x8042231C
 * @note Size: 0x10
 */
void System::enableCPULockDetector(int locks)
{
	mCpuRetraceCount = 0;
	mCpuLockCount    = locks;
}

/**
 * @note Address: 0x8042232C
 * @note Size: 0x18
 */
int System::disableCPULockDetector()
{
	int locks        = mCpuLockCount;
	mCpuLockCount    = 0;
	mCpuRetraceCount = 0;
	return locks;
}

static const char aramStrmName[] = "aramStrm";

/**
 * @note Address: 0x80422344
 * @note Size: 0xA4
 */
void retraceCallback(u32)
{
	sys->mCpuRetraceCount++;
	if (DVDGetDriveStatus() == DVD_STATE_BUSY) {
		sys->mCpuRetraceCount = 0;
	}

	if ((int)sys->mCpuLockCount > 0 && (int)sys->mCpuRetraceCount > (int)sys->mCpuLockCount) {
		sUseABXCommand = false;
		OSReport("cpuLockCount %d retraceCount %d\n", sys->mCpuLockCount, sys->mCpuRetraceCount);
		kando_panic_f(true, "system/retrace", 0, "CPU LOCKED!");
	}
}

/**
 * @note Address: 0x804223E8
 * @note Size: 0x11C
 */
System::System()
    : mSysHeap(nullptr)
    , mGameFlow(nullptr)
    , mDvdStatus(nullptr)
    , mDisplay(nullptr)
    , mDeltaTime(SINGLE_FRAME_LENGTH)
    , mPlayData(nullptr)
    , mFrameRate(1.0f)
    , mRegion(System::LANG_English)
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

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
System::~System()
{
	// UNUSED FUNCTION
}

char* cMapFileName = "/pikmin2UP.map"; // !!

/**
 * @note Address: 0x80422504
 * @note Size: 0x214
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

/**
 * @note Address: 0x80422718
 * @note Size: 0xE8
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

/**
 * @note Address: 0x80422800
 * @note Size: 0x120
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

/**
 * @note Address: 0x80422920
 * @note Size: 0x54
 */
void System::createRomFont(JKRHeap* heap) { mRomFont = new JUTRomFont(heap); }

/**
 * @note Address: 0x80422974
 * @note Size: 0x50
 */
void System::destroyRomFont()
{
	delete mRomFont;
	mRomFont = nullptr;
}

/**
 * @note Address: 0x804229C4
 * @note Size: 0x1B8
 */
void System::createSoundSystem()
{
	sys->heapStatusStart("SoundSystem", nullptr);
	JKRHeap* old = JKRHeap::getCurrentHeap();

	P2ASSERTLINE(1158, old);
	P2ASSERTLINE(1161, gResMgr2D);

	JKRHeap* resHeap    = gResMgr2D->mHeap;
	JKRExpHeap* newheap = makeExpHeap(resHeap->getFreeSize(), resHeap, true);

	P2ASSERTLINE(1165, newheap);
	newheap->becomeCurrentHeap();

	void* file = JKRGetResource("PSound.aaf", JKRMountDvdDrive("/AudioRes", newheap, nullptr));

	P2ASSERTLINE(1173, file);

	PSM::Factory* factory = new PSM::Factory;
	factory->mMakeSeFunc  = PSM::SeSound::makeSeSound;
	factory->mHeap        = old;
	factory->mHeapSize    = 0x900000;
	factory->mAafFile     = file;
	factory->newSoundSystem();

	JKRSolidHeap* newheap2 = makeSolidHeap(old->getFreeSize(), old, true);
	newheap2->becomeCurrentHeap();

	// something in these inlines is doing bad regalloc things. or not enough bad regalloc things. not sure.
	static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr())->newAndSetGlobalScene();
	newheap2->adjustSize();

	old->becomeCurrentHeap();
	newheap->destroy();

	sys->heapStatusEnd("SoundSystem");
	gResMgr2D->mRemainingSize = gResMgr2D->mHeapSize;
}

/**
 * @note Address: 0x80422B7C
 * @note Size: 0xE8
 */
void System::loadSoundResource()
{
	JKRHeap* old          = JKRGetCurrentHeap();
	JKRSolidHeap* newheap = makeSolidHeap(old->getFreeSize(), old, true);
	newheap->becomeCurrentHeap();

	// something in these inlines is doing bad regalloc things. or not enough bad regalloc things. not sure.
	PSSystem::Scene* scene = PSMGetSceneMgrCheck()->mScenes;
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

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
System::GXVerifyArg::GXVerifyArg()
{
	mUnused00 = 1;
	mUnused04 = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void System::setGXVerifyLevel(System::GXVerifyArg&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void System::clearGXVerifyLevel()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80422C64
 * @note Size: 0xF8
 */
void System::initialize()
{
	if (RENDER_INFO_STORE->mIdentifier == 'vald') {                         // magic stored from reset
		System::setRenderMode((ERenderMode)RENDER_INFO_STORE->mRenderMode); // render mode is stored after magic
	} else {
		System::setRenderMode(RM_NTSC_Standard);
	}

	OSInitFastCast();

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
}

/**
 * @note Address: 0x80422D5C
 * @note Size: 0x94
 */
void System::loadResourceFirst()
{
	Delegate<System>* delegate = new (mSysHeap, 0) Delegate<System>(this, &constructWithDvdAccessFirst);

	dvdLoadUseCallBack(&mThreadCommand, delegate);
}

/**
 * @note Address: 0x80422DF0
 * @note Size: 0x94
 */
void System::loadResourceSecond()
{
	Delegate<System>* delegate = new (mSysHeap, 0) Delegate<System>(this, &constructWithDvdAccessSecond);

	dvdLoadUseCallBack(&mThreadCommand, delegate);
}

/**
 * @note Address: 0x80422E84
 * @note Size: 0x34
 */
int System::run()
{
	mGameFlow->run();
	return 0;
}

/**
 * @note Address: 0x80422EB8
 * @note Size: 0x58
 */
f32 System::getTime() { return OSTicksToMilliseconds(OSGetTick()); }

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void System::checkOptionBlockSaveFlag()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80422F10
 * @note Size: 0x10
 */
void System::clearOptionBlockSaveFlag() { mPlayData->mDoSaveOptions = false; }

/**
 * @note Address: 0x80422F20
 * @note Size: 0x10
 */
void System::setOptionBlockSaveFlag() { mPlayData->mDoSaveOptions = true; }

/**
 * @note Address: 0x80422F30
 * @note Size: 0x8
 */
Game::CommonSaveData::Mgr* System::getPlayCommonData() { return mPlayData; }

/**
 * @note Address: 0x80422F38
 * @note Size: 0x58
 */
void System::dvdLoadUseCallBack(DvdThreadCommand* command, IDelegate* delegate)
{
	if (mDvdThread) {
		command->loadUseCallBack(delegate);
		mDvdThread->sendCommand(command);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void System::dvdLoadArchive(DvdThreadCommand*, char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void System::dvdLoadArchiveTemporary(DvdThreadCommand*, char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void System::dvdLoadFile(DvdThreadCommand*, char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void System::dvdLoadSync(DvdThreadCommand*, DvdThread::ESyncBlockFlag)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void System::dvdLoadSyncAll(DvdThread::ESyncBlockFlag)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80422F90
 * @note Size: 0x54
 */
void System::deleteThreads()
{
	if (mDvdThread) {
		delete mDvdThread;
		mDvdThread = nullptr;
	}
}

/**
 * @note Address: 0x80423070
 * @note Size: 0x10
 */
JFWDisplay* System::setCurrentDisplay(JFWDisplay* display)
{
	JFWDisplay* old = mDisplay;
	mDisplay        = display;
	return old;
}

/**
 * @note Address: 0x80423080
 * @note Size: 0x1C
 */
JFWDisplay* System::clearCurrentDisplay(JFWDisplay* display)
{
	if (mDisplay == display) {
		mDisplay = nullptr;
	}

	return nullptr;
}

/**
 * @note Address: 0x8042309C
 * @note Size: 0x3C
 */
bool System::beginFrame()
{
	mCpuRetraceCount = 0;
	JUTGamePad::read();
	mDvdStatus->update();
}

/**
 * @note Address: 0x804230D8
 * @note Size: 0x5C
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

/**
 * @note Address: 0x80423134
 * @note Size: 0x48
 */
void System::beginRender()
{
	activeGP();
	CARDProbe(0);
	mDisplay->beginRender();
}

/**
 * @note Address: 0x8042317C
 * @note Size: 0x98
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

/**
 * @note Address: 0x80423214
 * @note Size: 0x10
 */
System::ERenderMode System::setRenderMode(ERenderMode mode)
{
	ERenderMode currMode = mRenderMode;
	mRenderMode          = mode;
	return currMode;
}

/**
 * @note Address: 0x80423224
 * @note Size: 0x18
 */
_GXRenderModeObj* System::getRenderModeObj() { return sRenderModeTable[mRenderMode]; }

/**
 * @note Address: 0x8042323C
 * @note Size: 0x120
 */
void System::changeRenderMode(ERenderMode newmode)
{
	JUTVideo* mgr = JUTVideo::getManager();
	P2ASSERTLINE(1889, mgr);

	if (mRenderMode != newmode) {
		mRenderMode = newmode;
		VISetBlack(TRUE);
		VIFlush();
		VIWaitForRetrace();
		mgr->setRenderMode(getRenderModeObj());
	}

	switch (newmode) {
	case RM_NTSC_Standard:
		OSSetProgressiveMode(0);
		break;
	case RM_NTSC_Progressive:
		OSSetProgressiveMode(1);
		break;
	case RM_PAL_Standard:
		OSSetEuRgb60Mode(0);
		break;
	case RM_PAL_60Hz:
		OSSetEuRgb60Mode(1);
		break;
	default:
		JUT_PANICLINE(1921, "unknown renderMode:%d \n", newmode);
	}

	mPlayData->setDeflicker();
}

/**
 * @note Address: 0x8042335C
 * @note Size: 0x8
 */
u32 System::heapStatusStart(char*, JKRHeap*) { return 0; }

/**
 * @note Address: 0x80423364
 * @note Size: 0x4
 */
void System::heapStatusEnd(char*) { }

/**
 * @note Address: 0x80423368
 * @note Size: 0x4
 */
void System::heapStatusDump(bool) { }

/**
 * @note Address: 0x8042336C
 * @note Size: 0x4
 */
void System::heapStatusIndividual() { }

/**
 * @note Address: 0x80423370
 * @note Size: 0x4
 */
void System::heapStatusNormal() { }

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void System::heapStatusDumpNode()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80423374
 * @note Size: 0x28
 */
void System::resetOn(bool doResetToMenu)
{
	ResetManager* mgr = mResetMgr;
	mgr->setFlag(RESETFLAG_ResetInputEntered);
	if (doResetToMenu) {
		mgr->setFlag(RESETFLAG_DoResetToMenu);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void System::resetOff()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8042339C
 * @note Size: 0x14
 */
void System::resetPermissionOn() { mResetMgr->setFlag(RESETFLAG_ResetAllowed); }

/**
 * @note Address: 0x804233B0
 * @note Size: 0x18
 */
bool System::isResetActive() { return mResetMgr->mState; }

/**
 * @note Address: 0x804233C8
 * @note Size: 0x14
 */
void System::activeGP() { mResetMgr->setFlag(RESETFLAG_GPProcessing); }

/**
 * @note Address: 0x804233DC
 * @note Size: 0x14
 */
void System::inactiveGP() { mResetMgr->resetFlag(RESETFLAG_GPProcessing); }

/**
 * @note Address: 0x804233F0
 * @note Size: 0x24
 */
bool System::isDvdErrorOccured() { return mDvdStatus->isErrorOccured(); }

/**
 * @note Address: 0x80423414
 * @note Size: 0x34
 */
void System::initCurrentHeapMutex()
{
	OSInitMutex(this);
	mBackupHeap = nullptr;
}

/**
 * @note Address: 0x80423448
 * @note Size: 0x70
 */
void System::startChangeCurrentHeap(JKRHeap* newheap)
{
	OSLockMutex(this);
	P2ASSERTLINE(2033, !mBackupHeap);
	mBackupHeap = JKRGetCurrentHeap();
	newheap->becomeCurrentHeap();
}

/**
 * @note Address: 0x804234B8
 * @note Size: 0x68
 */
void System::endChangeCurrentHeap()
{
	P2ASSERTLINE(2041, mBackupHeap);
	mBackupHeap->becomeCurrentHeap();
	mBackupHeap = nullptr;
	OSUnlockMutex(this);
}

/**
 * @note Address: 0x80423520
 * @note Size: 0x4
 */
void System::addGenNode(CNode*) { }

/**
 * @note Address: 0x80423524
 * @note Size: 0x4
 */
void System::initGenNode() { }

/**
 * @note Address: 0x80423528
 * @note Size: 0x4
 */
void System::refreshGenNode() { }

/**
 * @note Address: 0x8042352C
 * @note Size: 0xA0
 */
void System::setFrameRate(int newFactor)
{
	JFWDisplay* display = mDisplay;
	JUT_ASSERTLINE(2343, display, "no display");
	mFrameRate          = (f32)newFactor;
	mDeltaTime          = mFrameRate / 60.0f;
	display->mFrameRate = newFactor;
	display->mTickRate  = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
void System::forceFinishSection()
{
	// just for weak function spawning
	((ISectionMgr*)mGameFlow)->getCurrentSection();
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x804235D4
 * @note Size: 0x60
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

/**
 * @note Address: 0x80423634
 * @note Size: 0x5C
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
