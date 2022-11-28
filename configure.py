#!/usr/bin/env python3
LIBS = [
    {
        "lib": "JSystem",
        "cflags": "$cflags_base",
        "mwcc_version": "2.6",
        "host": True,
        "objects": [
            "JSystem/object/object-particle",
            "JSystem/JPA/control",
            "JSystem/resource",
            ["JSystem/data", True],
            "JSystem/processor",
            "JSystem/control",
            ["JSystem/JStudio/stb/data/stb-data-parse", True],
            "JSystem/functionvalue",
            "JSystem/JStudio/fvb/fvb",
            ["JSystem/JStudio/fvb/data/fvb-data", True],
            ["JSystem/JStudio/fvb/data/fvb-data-parse", True],
            "JSystem/JStudio/jstudio-control",
            ["JSystem/JStudio/data/jstudio-data", True],
            "JSystem/JStudio/jstudio-object",
            "JSystem/object/object-id",
            "JSystem/JStudio/stb/stb",
            ["JSystem/JStudio/stb/data/stb-data", True],
            "JSystem/JStudio/jstudio-math",
            "JSystem/object/object-light",
            "JSystem/object/object",
            "JSystem/object/object-actor",
            ["JSystem/object/object-ambientlight", True],
            "JSystem/object/object-camera",
            ["JSystem/object/object-fog", True],
            "JSystem/JSG/control",
            ["JSystem/object/object-message", True],
            "JSystem/object/control",
            "JSystem/object/object-sound",
            "JSystem/JAI/control",
            ["JSystem/J3D/J3DUDL", True],
            "JSystem/J3D/J3DUMotion",
            ["JSystem/J3D/J3DUShadow", True],
            "JSystem/J3D/J3DUMtxCache",
            "JSystem/JKR/JKRAram",
            "JSystem/JKR/JKRAramArchive",
            "JSystem/JKR/JKRAramBlock",
            "JSystem/JKR/JKRAramHeap",
            "JSystem/JKR/JKRAramPiece",
            ["JSystem/JKR/JKRAramStream", True],
            "JSystem/JKR/JKRArchivePri",
            "JSystem/JKR/JKRArchivePub",
            "JSystem/JKR/JKRCompArchive",
            "JSystem/JKR/JKRDecomp",
            ["JSystem/JKR/JKRDisposer", True],
            "JSystem/JKR/JKRDvdFile",
            "JSystem/JKR/JKRDvdAramRipper",
            "JSystem/JKR/JKRDvdArchive",
            "JSystem/JKR/JKRDvdRipper",
            "JSystem/JKR/JKRExpHeap",
            "JSystem/JKR/JKRFileCache",
            "JSystem/JKR/JKRFileFinder",
            ["JSystem/JKR/JKRFile", True],
            "JSystem/JKR/JKRFileLoader",
            "JSystem/JKR/JKRHeap",
            "JSystem/JKR/JKRMemArchive",
            "JSystem/JKR/JKRSolidHeap",
            "JSystem/JKR/JKRThread",
            ["JSystem/JSupport/JSUOutputStream", True],
            ["JSystem/JSupport/JSUInputStream", True],
            ["JSystem/JSupport/JSUList", True],
            ["JSystem/JSupport/JSUMemoryStream", True],
            ["JSystem/JSupport/JSUFileStream", True],
            "JSystem/binary",
            "JSystem/linklist",
            "JSystem/std/std-list",
            "JSystem/std/std-vector",
            "JSystem/JUT/JUTAssert",
            "JSystem/JUT/JUTConsole",
            "JSystem/JUT/JUTDbPrint",
            "JSystem/JUT/JUTDirectFile",
            "JSystem/JUT/JUTDirectPrint",
            "JSystem/JUT/JUTException",
            ["JSystem/JUT/JUTFader", True],
            ["JSystem/JUT/JUTFont", True],
            "JSystem/JUT/JUTGamePad",
            "JSystem/JUT/JUTGraphFifo",
            ["JSystem/JUT/JUTNameTab", True],
            "JSystem/JUT/JUTPalette",
            "JSystem/JUT/JUTProcBar",
            ["JSystem/JUT/JUTResFont", True],
            "JSystem/JUT/JUTResource",
            ["JSystem/JUT/JUTRomFont", True],
            ["JSystem/JUT/JUTFontData_Ascfont_fix12", True],
            "JSystem/JUT/JUTTexture",
            "JSystem/JUT/JUTVideo",
            "JSystem/JUT/JUTXfb",
            "JSystem/JUT/JUTCacheFont",
            "JSystem/JMath/JMath",
            ["JSystem/JMath/random", True],
            "JSystem/JMath/JMATrigonometric",
            ["JSystem/J2D/J2DOrthoGraph", True],
            ["JSystem/J2D/J2DPerspGraph", True],
            ["JSystem/J2D/J2DGrafContext", True],
            "JSystem/J2D/J2DPane",
            "JSystem/J2D/J2DPicture",
            "JSystem/J2D/J2DPrint",
            "JSystem/J2D/J2DScreen",
            "JSystem/J2D/J2DTextBox",
            "JSystem/J2D/J2DWindow",
            "JSystem/J2D/J2DWindowEx",
            "JSystem/J2D/J2DAnmLoader",
            "JSystem/J2D/J2DBloSaver",
            ["JSystem/J2D/J2DManage", True],
            "JSystem/J2D/J2DMatBlock",
            "JSystem/J2D/J2DMaterial",
            "JSystem/J2D/J2DMaterialFactory",
            "JSystem/J2D/J2DPictureEx",
            "JSystem/J2D/J2DTevs",
            "JSystem/J2D/J2DTextBoxEx",
            "JSystem/J2D/J2DAnimation",
            "JSystem/J3D/J3DSys",
            "JSystem/J3D/J3DVertex",
            "JSystem/J3D/J3DTransform",
            "JSystem/J3D/J3DPacket",
            "JSystem/J3D/J3DShape",
            "JSystem/J3D/J3DMaterial",
            "JSystem/J3D/J3DTevs",
            "JSystem/J3D/J3DDrawBuffer",
            "JSystem/J3D/J3DModel",
            "JSystem/J3D/J3DAnimation",
            "JSystem/J3D/J3DMaterialAnm",
            "JSystem/J3D/J3DCluster",
            "JSystem/J3D/J3DJoint",
            "JSystem/J3D/J3DMaterialFactory",
            ["JSystem/J3D/J3DBinaryFormat", True],
            "JSystem/J3D/J3DModelLoader",
            ["JSystem/J3D/J3DJointFactory", True],
            "JSystem/J3D/J3DShapeFactory",
            ["JSystem/J3D/J3DAnmLoader", True],
            ["JSystem/J3D/J3DModelSaver", True],
            "JSystem/J3D/J3DGD",
            "JSystem/J3D/J3DMatBlock",
            "JSystem/J3D/J3DModelData",
            "JSystem/J3D/J3DMaterialAttach",
            "JSystem/J3D/J3DMaterialFactory_v21",
            "JSystem/J3D/J3DShapeMtx",
            "JSystem/J3D/J3DModelLoaderCalcSize",
            "JSystem/J3D/J3DJointTree",
            "JSystem/J3D/J3DSkinDeform",
            ["JSystem/J3D/J3DShapeDraw", True],
            "JSystem/J3D/J3DMtxBuffer",
            ["JSystem/J3D/J3DShapeTable", True],
            "JSystem/JFW/JFWSystem",
            "JSystem/JFW/JFWDisplay",
            "JSystem/JPA/JPABaseShape",
            "JSystem/JPA/JPAChildShape",
            "JSystem/JPA/JPADynamicsBlock",
            "JSystem/JPA/JPAEmitter",
            "JSystem/JPA/JPAEmitterManager",
            "JSystem/JPA/JPAExTexShape",
            "JSystem/JPA/JPAExtraShape",
            "JSystem/JPA/JPAFieldBlock",
            ["JSystem/JPA/JPAKeyBlock", True],
            "JSystem/JPA/JPAMath",
            "JSystem/JPA/JPAParticle",
            "JSystem/JPA/JPAResource",
            "JSystem/JPA/JPAResourceLoader",
            "JSystem/JPA/JPAResourceManager",
            ["JSystem/JPA/JPATexture", True],
            ["JSystem/JSG/JSGSystem", True],
            ["JSystem/JSG/JSGCamera", True],
            ["JSystem/JSG/JSGObject", True],
            ["JSystem/JSG/JSGActor", True],
            "JSystem/JAS/JASWSParser",
            "JSystem/JAS/JASBankMgr",
            "JSystem/JAS/JASBasicBank",
            ["JSystem/JAS/JASBasicInst", True],
            "JSystem/JAS/JASBasicWaveBank",
            "JSystem/JAS/JASBNKParser",
            "JSystem/JAS/JASDrumSet",
            ["JSystem/JAS/JASInstEffect", True],
            "JSystem/JAS/JASInstRand",
            "JSystem/JAS/JASInstSense",
            "JSystem/JAS/JASSimpleWaveBank",
            "JSystem/JAS/JASWaveArcLoader",
            ["JSystem/JAS/JASWaveBank", True],
            ["JSystem/JAS/JASWaveBankMgr", True],
            ["JSystem/JAS/JASBank", True],
            ["JSystem/JAS/JASTrackPort", True],
            ["JSystem/JAS/JASOuterParam", True],
            "JSystem/JAS/JASPlayer_impl",
            "JSystem/JAS/JASRegisterParam",
            "JSystem/JAS/JASSeqCtrl",
            "JSystem/JAS/JASSeqParser",
            "JSystem/JAS/JASTrack",
            "JSystem/JAS/JASTrackInterrupt",
            "JSystem/JAS/JASOscillator",
            "JSystem/JAS/JASChannel",
            "JSystem/JAS/JASDriverIF",
            "JSystem/JAS/JASDSPChannel",
            "JSystem/JAS/JASDSPInterface",
            "JSystem/JAS/JASAudioThread",
            "JSystem/JAS/JASCalc",
            "JSystem/JAS/JASCallback",
            "JSystem/JAS/JASCmdStack",
            ["JSystem/JAS/JASDvdThread", True],
            "JSystem/JAS/JASHeapCtrl",
            ["JSystem/JAS/JASProbe", True],
            "JSystem/JAS/JASResArcLoader",
            "JSystem/JAS/JASReport",
            "JSystem/JAS/JASAiCtrl",
            ["JSystem/JAS/JASChannelUpdater", True],
            "JSystem/JAS/JASTaskThread",
            "JSystem/JAS/JASAramStream",
            "JSystem/dsp/dspproc",
            "JSystem/dsp/dsptask",
            "JSystem/dsp/osdsp",
            "JSystem/dsp/osdsp_task",
            "JSystem/JAI/JAIAnimation",
            "JSystem/JAI/JAIBankWave",
            "JSystem/JAI/JAIBasic",
            ["JSystem/JAI/JAIConst", True],
            "JSystem/JAI/JAIDummyObject",
            "JSystem/JAI/JAIFx",
            "JSystem/JAI/JAIGlobalParameter",
            "JSystem/JAI/JAIInitData",
            "JSystem/JAI/JAISeMgr",
            "JSystem/JAI/JAISequenceHeap",
            "JSystem/JAI/JAISequenceMgr",
            "JSystem/JAI/JAISound",
            "JSystem/JAI/JAISoundTable",
            "JSystem/JAI/JAIStreamMgr",
            "JSystem/JAI/JAISystemInterface",
            "JSystem/JAI/JAIObject",
            ["JSystem/JAD/JADHioNode", True],
            "JSystem/JAL/JALCalc",
            "JSystem/JAU/JAUData",
            "JSystem/JAU/JAUDataMgr",
        ],
    },
    {
        "lib": "Dolphin",
        "mwcc_version": "1.2.5",
        "cflags": "$cflags_base",
        "host": False,
        "objects": [
            ["Dolphin/mainloop", True],
            ["Dolphin/nubevent", True],
            ["Dolphin/nubinit", True],
            ["Dolphin/msg", True],
            "Dolphin/msgbuf",
            "Dolphin/serpoll",
            ["Dolphin/usr_put", True],
            ["Dolphin/dispatch", True],
            "Dolphin/msghndlr",
            "Dolphin/support",
            ["Dolphin/mutex_TRK", True],
            ["Dolphin/notify", True],
            ["Dolphin/flush_cache", True],
            ["Dolphin/mem_TRK", True],
            "Dolphin/targimpl",
            ["Dolphin/targsupp", True],
            "Dolphin/mpc_7xx_603e",
            "Dolphin/__exception",
            "Dolphin/dolphin_trk",
            ["Dolphin/main_TRK", True],
            "Dolphin/dolphin_trk_glue",
            ["Dolphin/targcont", True],
            ["Dolphin/target_options", True],
            "Dolphin/mslsupp",
            ["Dolphin/UDP_Stubs", True],
            ["Dolphin/ddh/main", True],
            "Dolphin/CircleBuffer",
            ["Dolphin/main", True],
            ["Dolphin/MWTrace", True],
            ["Dolphin/MWCriticalSection_gc", True],
            ["Dolphin/__va_arg", True],
            "Dolphin/global_destructor_chain",
            ["Dolphin/CPlusLibPPC", True],
            "Dolphin/NMWException",
            ["Dolphin/ptmf", True],
            "Dolphin/runtime",
            "Dolphin/__init_cpp_exceptions",
            "Dolphin/Gecko_ExceptionPPC",
            ["Dolphin/GCN_mem_alloc", True],
            ["Dolphin/abort_exit", True],
            "Dolphin/alloc",
            ["Dolphin/ansi_files", True],
            "Dolphin/ansi_fp",
            ["Dolphin/arith", True],
            ["Dolphin/buffer_io", True],
            ["Dolphin/critical_regions.gamecube", True],
            ["Dolphin/ctype", True],
            "Dolphin/direct_io",
            ["Dolphin/errno", True],
            ["Dolphin/file_io", True],
            ["Dolphin/FILE_POS", True],
            ["Dolphin/locale", True],
            ["Dolphin/mbstring", True],
            ["Dolphin/mem", True],
            "Dolphin/mem_funcs",
            ["Dolphin/misc_io", True],
            "Dolphin/printf",
            ["Dolphin/rand", True],
            ["Dolphin/float", True],
            "Dolphin/scanf",
            ["Dolphin/string", True],
            "Dolphin/strtold",
            "Dolphin/strtoul",
            ["Dolphin/wchar_io", True],
            ["Dolphin/uart_console_io_gcn", True],
            ["Dolphin/e_asin", True],
            ["Dolphin/e_atan2", True],
            ["Dolphin/e_exp", True],
            ["Dolphin/e_fmod", True],
            ["Dolphin/e_log", True],
            ["Dolphin/e_log10", True],
            ["Dolphin/e_pow", True],
            ["Dolphin/e_rem_pio2", True],
            ["Dolphin/k_cos", True],
            ["Dolphin/k_rem_pio2", True],
            ["Dolphin/k_sin", True],
            ["Dolphin/k_tan", True],
            ["Dolphin/s_atan", True],
            ["Dolphin/s_ceil", True],
            ["Dolphin/s_copysign", True],
            ["Dolphin/s_cos", True],
            ["Dolphin/s_floor", True],
            ["Dolphin/s_frexp", True],
            ["Dolphin/s_ldexp", True],
            ["Dolphin/s_modf", True],
            ["Dolphin/s_sin", True],
            ["Dolphin/s_tan", True],
            ["Dolphin/w_asin", True],
            ["Dolphin/w_atan2", True],
            ["Dolphin/w_exp", True],
            ["Dolphin/w_fmod", True],
            ["Dolphin/w_log10", True],
            ["Dolphin/w_pow", True],
            ["Dolphin/e_sqrt", True],
            ["Dolphin/math_ppc", True],
            ["Dolphin/w_sqrt", True],
            ["Dolphin/extras", True],
            "Dolphin/DebuggerDriver",
            "Dolphin/vi",
            ["Dolphin/AmcExi2Stubs", True],
            "Dolphin/ar",
            "Dolphin/arq",
            ["Dolphin/PPCArch", True],
            "Dolphin/CARDBios",
            "Dolphin/CARDUnlock",
            "Dolphin/CARDRdwr",
            "Dolphin/CARDBlock",
            "Dolphin/CARDDir",
            "Dolphin/CARDCheck",
            "Dolphin/CARDMount",
            "Dolphin/CARDFormat",
            "Dolphin/CARDOpen",
            "Dolphin/CARDCreate",
            "Dolphin/CARDRead",
            "Dolphin/CARDWrite",
            "Dolphin/CARDStat",
            "Dolphin/CARDNet",
            ["Dolphin/db", True],
            "Dolphin/dsp",
            ["Dolphin/dsp_debug", True],
            "Dolphin/dsp_task",
            "Dolphin/dvdlow",
            "Dolphin/dvdfs",
            "Dolphin/dvd",
            ["Dolphin/dvdqueue", True],
            ["Dolphin/dvderror", True],
            ["Dolphin/dvdidutils", True],
            ["Dolphin/dvdFatal", True],
            ["Dolphin/fstload", True],
            "Dolphin/EXIBios",
            "Dolphin/EXIUart",
            ["Dolphin/GDBase", True],
            "Dolphin/GDGeometry",
            "Dolphin/GXInit",
            "Dolphin/GXFifo",
            "Dolphin/GXAttr",
            "Dolphin/GXMisc",
            "Dolphin/GXGeometry",
            "Dolphin/GXFrameBuf",
            "Dolphin/GXLight",
            "Dolphin/GXTexture",
            ["Dolphin/GXBump", True],
            "Dolphin/GXTev",
            "Dolphin/GXPixel",
            "Dolphin/GXDisplayList",
            "Dolphin/GXTransform",
            "Dolphin/GXPerf",
            "Dolphin/mtx",
            "Dolphin/mtxvec",
            "Dolphin/mtx44",
            ["Dolphin/vec", True],
            ["Dolphin/odenotstub", True],
            ["Dolphin/OS", True],
            "Dolphin/OSAlarm",
            ["Dolphin/OSAlloc", True],
            ["Dolphin/OSArena", True],
            ["Dolphin/OSAudioSystem", True],
            ["Dolphin/OSCache", True],
            "Dolphin/OSContext",
            "Dolphin/OSError",
            "Dolphin/OSFont",
            "Dolphin/OSInterrupt",
            ["Dolphin/OSLink", True],
            ["Dolphin/OSMessage", True],
            "Dolphin/OSMemory",
            "Dolphin/OSMutex",
            "Dolphin/OSReboot",
            "Dolphin/OSReset",
            "Dolphin/OSResetSW",
            "Dolphin/OSRtc",
            ["Dolphin/OSSync", True],
            "Dolphin/OSThread",
            "Dolphin/OSTime",
            "Dolphin/__mem",
            ["Dolphin/__start", True],
            ["Dolphin/__ppc_eabi_init", True],
            "Dolphin/Padclamp",
            "Dolphin/Pad",
            "Dolphin/SIBios",
            ["Dolphin/SISamplingRate", True],
            "Dolphin/ai",
            "Dolphin/THPDec",
            "Dolphin/THPAudio",
            ["Dolphin/GBA", True],
            ["Dolphin/GBARead", True],
            ["Dolphin/GBAWrite", True],
            "Dolphin/GBAXfer",
        ],
    },
    {
        "lib": "plugProjectYamashitaU",
        "cflags": "$cflags_pikmin",
        "mwcc_version": "2.6",
        "host": True,
        "objects": [
            "plugProjectYamashitaU/enemyBase",
            ["plugProjectYamashitaU/pelplant", True],
            ["plugProjectYamashitaU/pelplantState", True],
            ["plugProjectYamashitaU/enemyInteractBattle", True],
            "plugProjectYamashitaU/generalEnemyMgr",
            ["plugProjectYamashitaU/kochappyAnimator", True],
            ["plugProjectYamashitaU/kochappy", True],
            "plugProjectYamashitaU/kochappyState",
            ["plugProjectYamashitaU/kochappyMgr", True],
            "plugProjectYamashitaU/enemyAction",
            ["plugProjectYamashitaU/chappy", True],
            "plugProjectYamashitaU/chappyState",
            ["plugProjectYamashitaU/chappyAnimator", True],
            ["plugProjectYamashitaU/chappyMgr", True],
            "plugProjectYamashitaU/lifeGaugeMgr",
            "plugProjectYamashitaU/carryInfoMgr",
            "plugProjectYamashitaU/gameLightMgr",
            "plugProjectYamashitaU/vtxAnm",
            ["plugProjectYamashitaU/enemyInfo", True],
            "plugProjectYamashitaU/farm",
            "plugProjectYamashitaU/farmMgr",
            "plugProjectYamashitaU/genEnemy",
            ["plugProjectYamashitaU/timeMgr", True],
            ["plugProjectYamashitaU/pelplantGenerator", True],
            ["plugProjectYamashitaU/enemyInteractActions", True],
            ["plugProjectYamashitaU/enemyAnimatorBase", True],
            "plugProjectYamashitaU/enemyStoneMgr",
            ["plugProjectYamashitaU/enemyStoenInfo", True],
            "plugProjectYamashitaU/enemyStoneDrawInfo",
            "plugProjectYamashitaU/enemyStoneObj",
            ["plugProjectYamashitaU/enemyParmsBase", True],
            ["plugProjectYamashitaU/walkSmokeEffect", True],
            ["plugProjectYamashitaU/ChappyBaseMgr", True],
            ["plugProjectYamashitaU/ChappyBase", True],
            ["plugProjectYamashitaU/BlueChappyMgr", True],
            ["plugProjectYamashitaU/BlueChappy", True],
            ["plugProjectYamashitaU/YellowChappyMgr", True],
            ["plugProjectYamashitaU/YellowChappy", True],
            ["plugProjectYamashitaU/BlueKochappyMgr", True],
            ["plugProjectYamashitaU/BlueKochappy", True],
            ["plugProjectYamashitaU/YellowKochappy", True],
            ["plugProjectYamashitaU/YellowKochappyMgr", True],
            ["plugProjectYamashitaU/KochappyBaseMgr", True],
            ["plugProjectYamashitaU/KochappyBase", True],
            ["plugProjectYamashitaU/enemyBlendAnimatorBase", True],
            ["plugProjectYamashitaU/enemyPelletInfo", True],
            ["plugProjectYamashitaU/enemyEffectNode", True],
            ["plugProjectYamashitaU/enemyMgrBase", True],
            ["plugProjectYamashitaU/enemyFSM", True],
            "plugProjectYamashitaU/singleGS_ZukanParms",
            ["plugProjectYamashitaU/treasureLightMgr", True],
            "plugProjectYamashitaU/effectAnimator",
        ],
    },
    {
        "lib": "plugProjectKandoU",
        "cflags": "$cflags_pikmin",
        "mwcc_version": "2.6",
        "host": True,
        "objects": [
            ["plugProjectKandoU/pikiAnimator", True],
            "plugProjectKandoU/collinfo",
            "plugProjectKandoU/gameDynamics",
            "plugProjectKandoU/creature",
            "plugProjectKandoU/fakePiki",
            "plugProjectKandoU/navi",
            "plugProjectKandoU/piki",
            "plugProjectKandoU/baseGameSection",
            "plugProjectKandoU/singleGameSection",
            "plugProjectKandoU/cellPyramid",
            "plugProjectKandoU/naviMgr",
            "plugProjectKandoU/pikiMgr",
            "plugProjectKandoU/mapMgr",
            "plugProjectKandoU/baseHIOSection",
            "plugProjectKandoU/naviWhistle",
            "plugProjectKandoU/pelletMgr",
            "plugProjectKandoU/routeMgr",
            "plugProjectKandoU/onyonMgr",
            ["plugProjectKandoU/objectTypes", True],
            "plugProjectKandoU/naviState",
            "plugProjectKandoU/pikiState",
            "plugProjectKandoU/interactPiki",
            "plugProjectKandoU/gameCPlate",
            ["plugProjectKandoU/updateMgr", True],
            "plugProjectKandoU/aiAction",
            "plugProjectKandoU/aiPrimitives",
            "plugProjectKandoU/aiFormation",
            "plugProjectKandoU/creatureStick",
            ["plugProjectKandoU/interactBattle", True],
            ["plugProjectKandoU/aiFree", True],
            "plugProjectKandoU/aiAttack",
            "plugProjectKandoU/aiTransport",
            "plugProjectKandoU/aiEnter",
            "plugProjectKandoU/pathfinder",
            "plugProjectKandoU/pelletState",
            "plugProjectKandoU/dynCreature",
            "plugProjectKandoU/gameGenerator",
            "plugProjectKandoU/genPiki",
            ["plugProjectKandoU/genNavi", True],
            "plugProjectKandoU/genItem",
            ["plugProjectKandoU/gameStages", True],
            "plugProjectKandoU/gameSeaMgr",
            "plugProjectKandoU/pikiAI",
            ["plugProjectKandoU/pelletConfig", True],
            "plugProjectKandoU/gameFootmark",
            "plugProjectKandoU/gameSystem",
            ["plugProjectKandoU/aiConstants", True],
            "plugProjectKandoU/gameMapParts",
            "plugProjectKandoU/vsGameSection",
            "plugProjectKandoU/gamePlatMgr",
            "plugProjectKandoU/itemGate",
            "plugProjectKandoU/itemMgr",
            "plugProjectKandoU/aiBreakGate",
            "plugProjectKandoU/gameStat",
            "plugProjectKandoU/itemHole",
            "plugProjectKandoU/itemHoney",
            "plugProjectKandoU/gameCaveInfo",
            "plugProjectKandoU/creatureLOD",
            "plugProjectKandoU/interactNavi",
            "plugProjectKandoU/itemPikihead",
            "plugProjectKandoU/itemPlant",
            "plugProjectKandoU/itemRock",
            ["plugProjectKandoU/aiBreakRock", True],
            "plugProjectKandoU/aiCrop",
            ["plugProjectKandoU/registItem", True],
            "plugProjectKandoU/gamePlayData",
            "plugProjectKandoU/itemCave",
            "plugProjectKandoU/itemBigFountain",
            "plugProjectKandoU/itemBridge",
            ["plugProjectKandoU/pikiContainer", True],
            "plugProjectKandoU/gameGeneratorCache",
            "plugProjectKandoU/itemTreasure",
            "plugProjectKandoU/itemDownFloor",
            ["plugProjectKandoU/kandoLib", True],
            "plugProjectKandoU/itemBarrel",
            "plugProjectKandoU/pelletNumber",
            "plugProjectKandoU/pelletCarcass",
            "plugProjectKandoU/pelletFruit",
            "plugProjectKandoU/pelletOtakara",
            "plugProjectKandoU/genPellet",
            "plugProjectKandoU/pelletItem",
            "plugProjectKandoU/mapMgrTraceMove",
            "plugProjectKandoU/efxModelObjects",
            "plugProjectKandoU/itemUjamushi",
            "plugProjectKandoU/aiWeed",
            "plugProjectKandoU/flockMgr",
            "plugProjectKandoU/itemWeed",
            ["plugProjectKandoU/aiBridge", True],
            "plugProjectKandoU/aiTeki",
            "plugProjectKandoU/singleGS_MainGame",
            "plugProjectKandoU/singleGS_CaveGame",
            "plugProjectKandoU/singleGS_MainResult",
            "plugProjectKandoU/singleGS_CaveResult",
            "plugProjectKandoU/singleGS_WorldMap",
            "plugProjectKandoU/singleGS_FileSelect",
            "plugProjectKandoU/gamePlayDataMemCard",
            ["plugProjectKandoU/baseHIOparms", True],
            ["plugProjectKandoU/radarInfo", True],
            ["plugProjectKandoU/singleGS_Movie", True],
            "plugProjectKandoU/navi_demoCheck",
            "plugProjectKandoU/singleGS_Zukan",
            "plugProjectKandoU/gameResultTexMgr",
            "plugProjectKandoU/gamePelletList",
            "plugProjectKandoU/vsGS_Title",
            "plugProjectKandoU/vsGS_Game",
            "plugProjectKandoU/vsGS_Result",
            ["plugProjectKandoU/vsGS_Load", True],
            "plugProjectKandoU/vsStageData",
            "plugProjectKandoU/cellMgrParms",
            "plugProjectKandoU/cellIterator",
            ["plugProjectKandoU/vsGS_VSGame", True],
            ["plugProjectKandoU/gameSoundEvent", True],
            "plugProjectKandoU/aiBattle",
            "plugProjectKandoU/gameDeathCount",
            "plugProjectKandoU/aiBore",
            ["plugProjectKandoU/mapPartsView", True],
            "plugProjectKandoU/singleGS_Ending",
            ["plugProjectKandoU/gameIconTexture", True],
            "plugProjectKandoU/gameTekiStat",
            ["plugProjectKandoU/gameHighscore", True],
            "plugProjectKandoU/gamePlayCommonData",
            ["plugProjectKandoU/pelletCarry", True],
            ["plugProjectKandoU/gameChallenge2D", True],
            ["plugProjectKandoU/vsTekiMgr", True],
            "plugProjectKandoU/vsCardMgr",
            "plugProjectKandoU/aiRescue",
            ["plugProjectKandoU/baseGameSectionDraw", True],
            ["plugProjectKandoU/singleGS_Load", True],
            "plugProjectKandoU/singleGS_DayEnd",
            "plugProjectKandoU/baseGameSectionKantei",
            ["plugProjectKandoU/sweepPrune", True],
            "plugProjectKandoU/texCaster",
            ["plugProjectKandoU/vsCoinOtakaraName", True],
            ["plugProjectKandoU/pelletBirthBuffer", True],
            ["plugProjectKandoU/vsFifo", True],
        ],
    },
    {
        "lib": "plugProjectNishimuraU",
        "cflags": "$cflags_pikmin",
        "mwcc_version": "2.6",
        "host": True,
        "objects": [
            "plugProjectNishimuraU/nslibmath",
            "plugProjectNishimuraU/ShadowCylinder",
            "plugProjectNishimuraU/playCamera",
            "plugProjectNishimuraU/shadowMgr",
            ["plugProjectNishimuraU/MapUnit", True],
            "plugProjectNishimuraU/MapNode",
            ["plugProjectNishimuraU/EnemyUnit", True],
            "plugProjectNishimuraU/RandMapMgr",
            ["plugProjectNishimuraU/RandMapDraw", True],
            ["plugProjectNishimuraU/RandMapChecker", True],
            "plugProjectNishimuraU/RandMapUnit",
            "plugProjectNishimuraU/RandEnemyUnit",
            ["plugProjectNishimuraU/DoorNode", True],
            ["plugProjectNishimuraU/MapUnitGenerator", True],
            ["plugProjectNishimuraU/MapCreator", True],
            "plugProjectNishimuraU/RandMapScore",
            ["plugProjectNishimuraU/ItemUnit", True],
            "plugProjectNishimuraU/RandItemUnit",
            ["plugProjectNishimuraU/GateUnit", True],
            ["plugProjectNishimuraU/RandGateUnit", True],
            ["plugProjectNishimuraU/ObjectLayout", True],
            "plugProjectNishimuraU/CameraMgr",
            "plugProjectNishimuraU/ContRumble",
            "plugProjectNishimuraU/RumbleMgr",
            ["plugProjectNishimuraU/PomAnimator", True],
            ["plugProjectNishimuraU/PomMgr", True],
            ["plugProjectNishimuraU/Pom", True],
            ["plugProjectNishimuraU/PomState", True],
            "plugProjectNishimuraU/FrogState",
            ["plugProjectNishimuraU/FrogAnimator", True],
            ["plugProjectNishimuraU/FrogMgr", True],
            "plugProjectNishimuraU/Frog",
            ["plugProjectNishimuraU/UjibMgr", True],
            "plugProjectNishimuraU/Ujib",
            "plugProjectNishimuraU/UjibState",
            ["plugProjectNishimuraU/UjibAnimator", True],
            ["plugProjectNishimuraU/KoganeState", True],
            ["plugProjectNishimuraU/KoganeMgr", True],
            "plugProjectNishimuraU/Kogane",
            ["plugProjectNishimuraU/KoganeAnimator", True],
            ["plugProjectNishimuraU/QurioneState", True],
            ["plugProjectNishimuraU/QurioneMgr", True],
            "plugProjectNishimuraU/Qurione",
            ["plugProjectNishimuraU/QurioneAnimator", True],
            ["plugProjectNishimuraU/RumbleData", True],
            ["plugProjectNishimuraU/MaroFrogMgr", True],
            "plugProjectNishimuraU/MaroFrog",
            ["plugProjectNishimuraU/RockState", True],
            ["plugProjectNishimuraU/RockAnimator", True],
            ["plugProjectNishimuraU/RockMgr", True],
            "plugProjectNishimuraU/Rock",
            "plugProjectNishimuraU/UjiaState",
            ["plugProjectNishimuraU/UjiaAnimator", True],
            ["plugProjectNishimuraU/UjiaMgr", True],
            "plugProjectNishimuraU/Ujia",
            "plugProjectNishimuraU/TobiState",
            ["plugProjectNishimuraU/TobiAnimator", True],
            ["plugProjectNishimuraU/TobiMgr", True],
            "plugProjectNishimuraU/Tobi",
            ["plugProjectNishimuraU/HibaState", True],
            ["plugProjectNishimuraU/HibaAnimator", True],
            ["plugProjectNishimuraU/HibaMgr", True],
            ["plugProjectNishimuraU/Hiba", True],
            ["plugProjectNishimuraU/GasHibaState", True],
            ["plugProjectNishimuraU/GasHibaAnimator", True],
            ["plugProjectNishimuraU/GasHibaMgr", True],
            ["plugProjectNishimuraU/GasHiba", True],
            ["plugProjectNishimuraU/ElecHibaState", True],
            ["plugProjectNishimuraU/ElecHibaAnimator", True],
            ["plugProjectNishimuraU/ElecHibaMgr", True],
            "plugProjectNishimuraU/ElecHiba",
            "plugProjectNishimuraU/SaraiState",
            ["plugProjectNishimuraU/SaraiAnimator", True],
            ["plugProjectNishimuraU/SaraiMgr", True],
            "plugProjectNishimuraU/Sarai",
            "plugProjectNishimuraU/TankState",
            ["plugProjectNishimuraU/TankAnimator", True],
            ["plugProjectNishimuraU/TankMgr", True],
            "plugProjectNishimuraU/Tank",
            ["plugProjectNishimuraU/CatfishMgr", True],
            ["plugProjectNishimuraU/Catfish", True],
            "plugProjectNishimuraU/TadpoleState",
            ["plugProjectNishimuraU/TadpoleAnimator", True],
            ["plugProjectNishimuraU/TadpoleMgr", True],
            "plugProjectNishimuraU/Tadpole",
            "plugProjectNishimuraU/ElecBugState",
            ["plugProjectNishimuraU/ElecBugAnimator", True],
            ["plugProjectNishimuraU/ElecBugMgr", True],
            "plugProjectNishimuraU/ElecBug",
            ["plugProjectNishimuraU/WtankMgr", True],
            ["plugProjectNishimuraU/Wtank", True],
            ["plugProjectNishimuraU/ArmorMgr", True],
            "plugProjectNishimuraU/Armor",
            "plugProjectNishimuraU/Mar",
            ["plugProjectNishimuraU/MarAnimator", True],
            ["plugProjectNishimuraU/MarMgr", True],
            "plugProjectNishimuraU/MarState",
            ["plugProjectNishimuraU/WealthyMgr", True],
            ["plugProjectNishimuraU/Wealthy", True],
            ["plugProjectNishimuraU/FartMgr", True],
            ["plugProjectNishimuraU/Fart", True],
            "plugProjectNishimuraU/ArmorState",
            ["plugProjectNishimuraU/ArmorAnimator", True],
            "plugProjectNishimuraU/QueenState",
            ["plugProjectNishimuraU/QueenAnimator", True],
            ["plugProjectNishimuraU/QueenMgr", True],
            "plugProjectNishimuraU/Queen",
            "plugProjectNishimuraU/BabyState",
            ["plugProjectNishimuraU/BabyAnimator", True],
            ["plugProjectNishimuraU/BabyMgr", True],
            "plugProjectNishimuraU/Baby",
            ["plugProjectNishimuraU/DemonMgr", True],
            "plugProjectNishimuraU/Demon",
            "plugProjectNishimuraU/QueenShadow",
            ["plugProjectNishimuraU/FireChappyMgr", True],
            ["plugProjectNishimuraU/FireChappy", True],
            "plugProjectNishimuraU/SnakeCrowState",
            ["plugProjectNishimuraU/SnakeCrowAnimator", True],
            ["plugProjectNishimuraU/SnakeCrowMgr", True],
            "plugProjectNishimuraU/SnakeCrow",
            "plugProjectNishimuraU/KumaChappyState",
            ["plugProjectNishimuraU/KumaChappyAnimator", True],
            ["plugProjectNishimuraU/KumaChappyMgr", True],
            "plugProjectNishimuraU/KumaChappy",
            "plugProjectNishimuraU/FuefukiState",
            ["plugProjectNishimuraU/FuefukiAnimator", True],
            ["plugProjectNishimuraU/FuefukiMgr", True],
            "plugProjectNishimuraU/Fuefuki",
            ["plugProjectNishimuraU/KoganemushiMgr", True],
            ["plugProjectNishimuraU/Koganemushi", True],
            ["plugProjectNishimuraU/FtankMgr", True],
            ["plugProjectNishimuraU/Ftank", True],
            ["plugProjectNishimuraU/RandPlantUnit", True],
            "plugProjectNishimuraU/HanachirashiState",
            ["plugProjectNishimuraU/HanachirashiAnimator", True],
            ["plugProjectNishimuraU/HanachirashiMgr", True],
            "plugProjectNishimuraU/Hanachirashi",
            ["plugProjectNishimuraU/DamagumoState", True],
            ["plugProjectNishimuraU/DamagumoAnimator", True],
            ["plugProjectNishimuraU/DamagumoMgr", True],
            "plugProjectNishimuraU/Damagumo",
            "plugProjectNishimuraU/IKSystemMgr",
            "plugProjectNishimuraU/IKSystemBase",
            "plugProjectNishimuraU/DamagumoShadow",
            ["plugProjectNishimuraU/KurageState", True],
            ["plugProjectNishimuraU/KurageAnimator", True],
            ["plugProjectNishimuraU/KurageMgr", True],
            "plugProjectNishimuraU/Kurage",
            "plugProjectNishimuraU/BombSaraiState",
            ["plugProjectNishimuraU/BombSaraiAnimator", True],
            ["plugProjectNishimuraU/BombSaraiMgr", True],
            "plugProjectNishimuraU/BombSarai",
            ["plugProjectNishimuraU/OtakaraBaseState", True],
            ["plugProjectNishimuraU/OtakaraBaseAnimator", True],
            ["plugProjectNishimuraU/OtakaraBaseMgr", True],
            "plugProjectNishimuraU/OtakaraBase",
            ["plugProjectNishimuraU/FireOtakaraMgr", True],
            ["plugProjectNishimuraU/FireOtakara", True],
            ["plugProjectNishimuraU/WaterOtakaraMgr", True],
            ["plugProjectNishimuraU/WaterOtakara", True],
            ["plugProjectNishimuraU/GasOtakaraMgr", True],
            ["plugProjectNishimuraU/GasOtakara", True],
            ["plugProjectNishimuraU/ElecOtakaraMgr", True],
            ["plugProjectNishimuraU/ElecOtakara", True],
            "plugProjectNishimuraU/ImomushiState",
            ["plugProjectNishimuraU/ImomushiAnimator", True],
            ["plugProjectNishimuraU/ImomushiMgr", True],
            "plugProjectNishimuraU/Imomushi",
            ["plugProjectNishimuraU/HoudaiState", True],
            ["plugProjectNishimuraU/HoudaiAnimator", True],
            ["plugProjectNishimuraU/HoudaiMgr", True],
            "plugProjectNishimuraU/HoudaiShadow",
            "plugProjectNishimuraU/Houdai",
            "plugProjectNishimuraU/HoudaiShotGun",
            ["plugProjectNishimuraU/LeafChappyMgr", True],
            ["plugProjectNishimuraU/LeafChappy", True],
            ["plugProjectNishimuraU/BigFootState", True],
            ["plugProjectNishimuraU/BigFootAnimator", True],
            ["plugProjectNishimuraU/BigFootMgr", True],
            "plugProjectNishimuraU/BigFootShadow",
            "plugProjectNishimuraU/BigFoot",
            "plugProjectNishimuraU/SnakeWholeState",
            ["plugProjectNishimuraU/SnakeWholeAnimator", True],
            ["plugProjectNishimuraU/SnakeWholeMgr", True],
            "plugProjectNishimuraU/SnakeWhole",
            "plugProjectNishimuraU/SnakeJointMgr",
            ["plugProjectNishimuraU/OniKurageState", True],
            ["plugProjectNishimuraU/OniKurageAnimator", True],
            ["plugProjectNishimuraU/OniKurageMgr", True],
            "plugProjectNishimuraU/OniKurage",
            ["plugProjectNishimuraU/BigTreasureState", True],
            ["plugProjectNishimuraU/BigTreasureMgr", True],
            "plugProjectNishimuraU/BigTreasureShadow",
            "plugProjectNishimuraU/BigTreasure",
            "plugProjectNishimuraU/KabutoState",
            ["plugProjectNishimuraU/KabutoAnimator", True],
            ["plugProjectNishimuraU/KabutoMgr", True],
            "plugProjectNishimuraU/Kabuto",
            "plugProjectNishimuraU/KumaKochappyState",
            ["plugProjectNishimuraU/KumaKochappyAnimator", True],
            ["plugProjectNishimuraU/KumaKochappyMgr", True],
            "plugProjectNishimuraU/KumaKochappy",
            "plugProjectNishimuraU/MiniHoudaiState",
            ["plugProjectNishimuraU/MiniHoudaiAnimator", True],
            ["plugProjectNishimuraU/MiniHoudaiMgr", True],
            "plugProjectNishimuraU/MiniHoudai",
            "plugProjectNishimuraU/MiniHoudaiShotGun",
            ["plugProjectNishimuraU/SokkuriState", True],
            ["plugProjectNishimuraU/SokkuriAnimator", True],
            ["plugProjectNishimuraU/SokkuriMgr", True],
            "plugProjectNishimuraU/Sokkuri",
            "plugProjectNishimuraU/JointShadowBase",
            "plugProjectNishimuraU/UmimushiShadow",
            ["plugProjectNishimuraU/HanaMgr", True],
            "plugProjectNishimuraU/Hana",
            "plugProjectNishimuraU/BigTreasureAttack",
            "plugProjectNishimuraU/SnakeCrowShadow",
            "plugProjectNishimuraU/SnakeWholeShadow",
            ["plugProjectNishimuraU/BombOtakaraMgr", True],
            ["plugProjectNishimuraU/BombOtakara", True],
            "plugProjectNishimuraU/DangoMushiState",
            ["plugProjectNishimuraU/DangoMushiMgr", True],
            "plugProjectNishimuraU/DangoMushi",
            ["plugProjectNishimuraU/GreenKabutoMgr", True],
            ["plugProjectNishimuraU/GreenKabuto", True],
            ["plugProjectNishimuraU/RedKabutoMgr", True],
            ["plugProjectNishimuraU/RedKabuto", True],
            ["plugProjectNishimuraU/FixKabutoMgr", True],
            ["plugProjectNishimuraU/FixKabuto", True],
            ["plugProjectNishimuraU/RandCapEnemyUnit", True],
            ["plugProjectNishimuraU/NormMiniHoudaiMgr", True],
            ["plugProjectNishimuraU/NormMiniHoudai", True],
            ["plugProjectNishimuraU/FixMiniHoudaiMgr", True],
            ["plugProjectNishimuraU/FixMiniHoudai", True],
            "plugProjectNishimuraU/TyreShadow",
        ],
    },
    {
        "lib": "plugProjectOgawaU",
        "cflags": "$cflags_pikmin",
        "mwcc_version": "2.6",
        "host": True,
        "objects": [
            ["plugProjectOgawaU/ogScreen", True],
            "plugProjectOgawaU/ogDopingScreen",
            "plugProjectOgawaU/ogPikminCounter",
            "plugProjectOgawaU/ogAnime",
            ["plugProjectOgawaU/ogCounter", True],
            "plugProjectOgawaU/ogLifeGauge",
            ["plugProjectOgawaU/ogSunMeter", True],
            ["plugProjectOgawaU/ogCatchPiki", True],
            ["plugProjectOgawaU/ogContenaCounter", True],
            "plugProjectOgawaU/ogMapCounter",
            "plugProjectOgawaU/ogAnimTextScreen",
            "plugProjectOgawaU/ogCallBackMessage",
            "plugProjectOgawaU/ogMenuMgr",
            ["plugProjectOgawaU/ogCallBackScreen", True],
            "plugProjectOgawaU/ogCounterRV",
            "plugProjectOgawaU/ogSE",
            ["plugProjectOgawaU/ogCounterDay", True],
            ["plugProjectOgawaU/testScene", True],
            "plugProjectOgawaU/testObj",
            "plugProjectOgawaU/ogSceneGround",
            "plugProjectOgawaU/ogObjGround",
            "plugProjectOgawaU/ogCopyPane",
            "plugProjectOgawaU/ogBloGroup",
            ["plugProjectOgawaU/DispMemberBase", True],
            ["plugProjectOgawaU/ogLib2D", True],
            "plugProjectOgawaU/ogObjSMenuMap",
            ["plugProjectOgawaU/ogSceneSMenuMap", True],
            "plugProjectOgawaU/ogObjSMenuItem",
            ["plugProjectOgawaU/ogSceneSMenuItem", True],
            ["plugProjectOgawaU/ogSceneSMenuPause", True],
            "plugProjectOgawaU/ogObjSMenuPause",
            "plugProjectOgawaU/ogObjSMenuBase",
            "plugProjectOgawaU/ogObjCourseName",
            ["plugProjectOgawaU/ogUtil", True],
            "plugProjectOgawaU/ogSceneCourseName",
            "plugProjectOgawaU/ogObjKantei",
            ["plugProjectOgawaU/ogSceneKantei", True],
            "plugProjectOgawaU/ogObjSpecialItem",
            ["plugProjectOgawaU/ogSceneSpecialItem", True],
            "plugProjectOgawaU/ogObjFloor",
            ["plugProjectOgawaU/ogSceneFloor", True],
            "plugProjectOgawaU/ogObjCave",
            ["plugProjectOgawaU/ogSceneCave", True],
            "plugProjectOgawaU/ogObjAnaDemo",
            ["plugProjectOgawaU/ogSceneAnaDemo", True],
            "plugProjectOgawaU/ogObjChallenge2P",
            ["plugProjectOgawaU/ogSceneChallenge2P", True],
            "plugProjectOgawaU/ogObjContena",
            ["plugProjectOgawaU/ogSceneContena", True],
            "plugProjectOgawaU/ogObjSMenuPauseDoukutu",
            ["plugProjectOgawaU/ogSceneSMenuPauseDoukutu", True],
            "plugProjectOgawaU/ogObjUfo",
            ["plugProjectOgawaU/ogSceneUfo", True],
            "plugProjectOgawaU/ogObjSave",
            ["plugProjectOgawaU/ogSceneSave", True],
            "plugProjectOgawaU/ogObjFinalMsg",
            ["plugProjectOgawaU/ogSceneFinalMsg", True],
            "plugProjectOgawaU/ogObjVs",
            ["plugProjectOgawaU/ogSceneVs", True],
            "plugProjectOgawaU/ogObjChallenge1P",
            ["plugProjectOgawaU/ogSceneChallenge1P", True],
            ["plugProjectOgawaU/ogScaleMgr", True],
            "plugProjectOgawaU/ogObjSMenuPauseVs",
            ["plugProjectOgawaU/ogSceneSMenuPauseVs", True],
            "plugProjectOgawaU/ogFuriko",
            "plugProjectOgawaU/ogCounterSlot",
            "plugProjectOgawaU/ogObjWorldMapInfoWindow0",
            ["plugProjectOgawaU/ogSceneWorldMapInfoWindow0", True],
            "plugProjectOgawaU/ogObjWorldMapInfoWindow1",
            ["plugProjectOgawaU/ogSceneWorldMapInfoWindow1", True],
            ["plugProjectOgawaU/ogTotalPokoScreen", True],
            "plugProjectOgawaU/ogObjChallengeBase",
            ["plugProjectOgawaU/ogSceneChallengeBase", True],
            "plugProjectOgawaU/ogCallBackPicture",
            ["plugProjectOgawaU/ogDrawAfter", True],
            "plugProjectOgawaU/ogOtakaraSensor",
            "plugProjectOgawaU/ogTitleMsg",
            ["plugProjectOgawaU/ogAngleMgr", True],
            ["plugProjectOgawaU/ogSceneSMenuCont", True],
            "plugProjectOgawaU/ogObjSMenuCont",
        ],
    },
    {
        "lib": "plugProjectHikinoU",
        "cflags": "$cflags_pikmin",
        "mwcc_version": "2.6",
        "host": True,
        "objects": [
            "plugProjectHikinoU/PSSeq",
            "plugProjectHikinoU/PSGame",
            "plugProjectHikinoU/PSSystemIF",
            "plugProjectHikinoU/PSAutoBgm",
            "plugProjectHikinoU/PSBnkMgr",
            "plugProjectHikinoU/PSTaskBase",
            ["plugProjectHikinoU/PSBgmTask", True],
            ["plugProjectHikinoU/PSCreatureMgr", True],
            ["plugProjectHikinoU/PSAutoBgm_MeloArranger", True],
            "plugProjectHikinoU/PSSe",
            "plugProjectHikinoU/PSSeBase",
            "plugProjectHikinoU/PSScene",
            ["plugProjectHikinoU/PSBgmTrack", True],
            "plugProjectHikinoU/PSDirector",
        ],
    },
    {
        "lib": "plugProjectMorimuraU",
        "cflags": "$cflags_pikmin",
        "mwcc_version": "2.6",
        "host": True,
        "objects": [
            "plugProjectMorimuraU/dayEndCount",
            "plugProjectMorimuraU/hurryUp2D",
            "plugProjectMorimuraU/gameOver2D",
            ["plugProjectMorimuraU/testBase", True],
            ["plugProjectMorimuraU/bombState", True],
            ["plugProjectMorimuraU/bombAnimator", True],
            ["plugProjectMorimuraU/bombMgr", True],
            "plugProjectMorimuraU/bomb",
            ["plugProjectMorimuraU/eggState", True],
            ["plugProjectMorimuraU/eggAnimator", True],
            ["plugProjectMorimuraU/eggMgr", True],
            ["plugProjectMorimuraU/egg", True],
            "plugProjectMorimuraU/panModokiState",
            ["plugProjectMorimuraU/panModokiAnimator", True],
            ["plugProjectMorimuraU/panModokiMgr", True],
            "plugProjectMorimuraU/panModoki",
            ["plugProjectMorimuraU/plantsMgr", True],
            ["plugProjectMorimuraU/plantsAnimator", True],
            ["plugProjectMorimuraU/plants", True],
            "plugProjectMorimuraU/kingChappyState",
            ["plugProjectMorimuraU/kingChappyMgr", True],
            "plugProjectMorimuraU/kingChappy",
            "plugProjectMorimuraU/miulinState",
            ["plugProjectMorimuraU/miulinAnimator", True],
            ["plugProjectMorimuraU/miulinMgr", True],
            "plugProjectMorimuraU/miulin",
            "plugProjectMorimuraU/jigumoState",
            ["plugProjectMorimuraU/jigumoAnimator", True],
            ["plugProjectMorimuraU/jigumoMgr", True],
            "plugProjectMorimuraU/jigumo",
            "plugProjectMorimuraU/enemyNestMgr",
            ["plugProjectMorimuraU/enemyNest", True],
            ["plugProjectMorimuraU/tamagoMushiState", True],
            ["plugProjectMorimuraU/tamagoMushiAnimator", True],
            "plugProjectMorimuraU/tamagoMushiMgr",
            "plugProjectMorimuraU/tamagoMushi",
            "plugProjectMorimuraU/zukan2D",
            "plugProjectMorimuraU/hiScore2D",
            "plugProjectMorimuraU/umiMushiState",
            ["plugProjectMorimuraU/umiMushiAnimator", True],
            ["plugProjectMorimuraU/umiMushiMgr", True],
            "plugProjectMorimuraU/umiMushi",
            "plugProjectMorimuraU/shijimiChouState",
            ["plugProjectMorimuraU/shijimiChouAnimator", True],
            ["plugProjectMorimuraU/shijimiChouMgr", True],
            "plugProjectMorimuraU/shijimiChou",
            "plugProjectMorimuraU/challengeSelect2D",
            "plugProjectMorimuraU/challengeResult2D",
            "plugProjectMorimuraU/vsSelect2D",
            "plugProjectMorimuraU/mrUtil",
            "plugProjectMorimuraU/scrollList",
            "plugProjectMorimuraU/mrWindow",
            ["plugProjectMorimuraU/blackManState", True],
            ["plugProjectMorimuraU/blackManAnimator", True],
            ["plugProjectMorimuraU/blackManMgr", True],
            "plugProjectMorimuraU/blackMan",
            ["plugProjectMorimuraU/tyreState", True],
            ["plugProjectMorimuraU/tyreAnimator", True],
            ["plugProjectMorimuraU/tyreMgr", True],
            "plugProjectMorimuraU/tyre",
        ],
    },
    {
        "lib": "plugProjectEbisawaU",
        "cflags": "$cflags_pikmin",
        "mwcc_version": "2.6",
        "host": True,
        "objects": [
            "plugProjectEbisawaU/efxBase",
            "plugProjectEbisawaU/efxEnemy",
            "plugProjectEbisawaU/efxObject",
            "plugProjectEbisawaU/efxPikmin",
            "plugProjectEbisawaU/particle2dMgr",
            ["plugProjectEbisawaU/efx2dBase", True],
            "plugProjectEbisawaU/efx2dEffect",
            "plugProjectEbisawaU/particleMgr",
            "plugProjectEbisawaU/ebiP2Title",
            "plugProjectEbisawaU/ebiP2TitleUnit",
            "plugProjectEbisawaU/ebiUtility",
            ["plugProjectEbisawaU/ebiP2TitleCamera", True],
            "plugProjectEbisawaU/ebiP2TitleLight",
            "plugProjectEbisawaU/ebiScreenMemoryCard",
            "plugProjectEbisawaU/efxTPkEffectMgr",
            "plugProjectEbisawaU/efxEnemyGeneral",
            ["plugProjectEbisawaU/ebi3DGraph", True],
            "plugProjectEbisawaU/ebiGeometry",
            "plugProjectEbisawaU/ebi2DGraph",
            "plugProjectEbisawaU/ebiScreenOption",
            "plugProjectEbisawaU/ebiScreenProgre",
            "plugProjectEbisawaU/ebiOptionMgr",
            "plugProjectEbisawaU/ebi2DCallBack",
            "plugProjectEbisawaU/ebiCardMgr",
            ["plugProjectEbisawaU/ebiScreenFramework", True],
            "plugProjectEbisawaU/ebiScreenPushStart",
            "plugProjectEbisawaU/ebiScreenFileSelect",
            "plugProjectEbisawaU/ebiScreenTitleMenu",
            "plugProjectEbisawaU/ebiSaveMgr",
            "plugProjectEbisawaU/ebiScreenSaveMenu",
            "plugProjectEbisawaU/ebiScreenFileSelect_Mgr",
            "plugProjectEbisawaU/ebiFileSelectMgr",
            "plugProjectEbisawaU/ebiCardMgr_Load",
            "plugProjectEbisawaU/ebiP2TitleCoordMgr",
            "plugProjectEbisawaU/ebiP2TitlePikmin",
            "plugProjectEbisawaU/ebiP2TitleKogane",
            "plugProjectEbisawaU/ebiP2TitleChappy",
            ["plugProjectEbisawaU/ebiScreenTMBack", True],
            "plugProjectEbisawaU/ebiMainTitleMgr",
            ["plugProjectEbisawaU/ebiP2TitleFog", True],
            "plugProjectEbisawaU/efxEnemyBoss",
            "plugProjectEbisawaU/ebiCardEReader",
            "plugProjectEbisawaU/ebiScreenOmake",
            "plugProjectEbisawaU/ebiOmakeMgr",
            "plugProjectEbisawaU/ebiScreenOmakeCardE",
            "plugProjectEbisawaU/ebiScreenOmakeGame",
            ["plugProjectEbisawaU/ebiScreenInfoWindow", True],
        ],
    },
    {
        "lib": "plugProjectKonoU",
        "cflags": "$cflags_pikmin",
        "mwcc_version": "2.6",
        "host": True,
        "objects": [
            "plugProjectKonoU/khWorldMap",
            "plugProjectKonoU/khCaveResult",
            ["plugProjectKonoU/khSceneLoader", True],
            "plugProjectKonoU/newGame2DMgr",
            "plugProjectKonoU/newScreenMgr",
            "plugProjectKonoU/khReadyGo",
            "plugProjectKonoU/khFinalFloor",
            "plugProjectKonoU/khDayEndResult",
            "plugProjectKonoU/khUtil",
            "plugProjectKonoU/khFinalResult",
            "plugProjectKonoU/khPayDept",
            "plugProjectKonoU/khWinLose",
            "plugProjectKonoU/khWinLoseReason",
            ["plugProjectKonoU/khMailSaveData", True],
        ],
    },
    {
        "lib": "sysBootupU",
        "cflags": "$cflags_base",
        "mwcc_version": "2.6",
        "host": True,
        "objects": [
            ["sysBootupU/sysBootup", True],
        ],
    },
    {
        "lib": "sysCommonU",
        "cflags": "$cflags_base",
        "mwcc_version": "2.6",
        "host": True,
        "objects": [
            ["sysCommonU/node", True],
            "sysCommonU/sysMath",
            ["sysCommonU/id32", True],
            ["sysCommonU/parameters", True],
            ["sysCommonU/stream", True],
            "sysCommonU/geometry",
            ["sysCommonU/mapCollision", True],
            "sysCommonU/camera",
            ["sysCommonU/tagparams", True],
            ["sysCommonU/sysTemplates", True],
            ["sysCommonU/mapCode", True],
            "sysCommonU/geomIntersection",
            "sysCommonU/geomOBBTree",
            "sysCommonU/geomTraceMove",
            "sysCommonU/geomCylinder",
            ["sysCommonU/geomClone", True],
        ],
    },
    {
        "lib": "sysGCU",
        "cflags": "$cflags_base",
        "mwcc_version": "2.6",
        "host": True,
        "objects": [
            "sysGCU/system",
            "sysGCU/section",
            "sysGCU/gameflow",
            ["sysGCU/menuSection", True],
            "sysGCU/dvdThread",
            ["sysGCU/appThread", True],
            ["sysGCU/controller", True],
            "sysGCU/graphics",
            "sysGCU/matMath",
            "sysGCU/sysShape",
            "sysGCU/reset",
            ["sysGCU/dvdStatus", True],
            ["sysGCU/sysTimers", True],
            ["sysGCU/modelMgr", True],
            "sysGCU/heapStatus",
            "sysGCU/light",
            "sysGCU/wipe",
            "sysGCU/moviePlayer",
            "sysGCU/JSTObjectActor",
            "sysGCU/JSTObjectCamera",
            "sysGCU/JSTObjectGameActor",
            "sysGCU/JSTObjectSystem",
            ["sysGCU/JSTFindCreature", True],
            "sysGCU/movieConfig",
            ["sysGCU/gameConfig", True],
            ["sysGCU/fogMgr", True],
            "sysGCU/aramMgr",
            "sysGCU/resourceMgr",
            ["sysGCU/resourceMgr2D", True],
            "sysGCU/sysMaterialAnim",
            "sysGCU/P2DScreen",
            "sysGCU/movieMessage",
            "sysGCU/moviePlayerPauseAndDraw",
            "sysGCU/JSTObjectSpecialActor",
            ["sysGCU/messageSequence", True],
            "sysGCU/messageMgr",
            "sysGCU/messageObj",
            "sysGCU/messageRendering",
            ["sysGCU/message", True],
            "sysGCU/modelEffect",
            ["sysGCU/messageReference", True],
            ["sysGCU/simpleMessage", True],
            ["sysGCU/sysShapeAnimation", True],
            "sysGCU/sysShapeModel",
            "sysGCU/windowMessage",
            "sysGCU/memoryCard",
            "sysGCU/pikmin2MemoryCardMgr",
            "sysGCU/commonSaveData",
            "sysGCU/bootSection",
            "sysGCU/titleSection",
            "sysGCU/loadResource",
            ["sysGCU/rootMenuSection", True],
            "sysGCU/demoSection",
            "sysGCU/THPAudioDecode",
            ["sysGCU/THPDraw", True],
            "sysGCU/THPPlayer",
            "sysGCU/THPRead",
            "sysGCU/THPVideoDecode",
            "sysGCU/pikmin2THPPlayer",
            "sysGCU/captionMgr",
            "sysGCU/captionMessage",
            "sysGCU/screenScene",
            "sysGCU/screenMgr",
            "sysGCU/screenObj",
            "sysGCU/JSTObjectParticleActor",
            "sysGCU/moviePlayerAudio",
            "sysGCU/illustratedBookMessage",
            ["sysGCU/sysDrawBuffer", True],
            ["sysGCU/dvdErrorMessage", True],
            "sysGCU/pikmin2AramMgr",
            ["sysGCU/messageAnalyzer", True],
        ],
    },
    {
        "lib": "utilityU",
        "cflags": "$cflags_base",
        "mwcc_version": "2.6",
        "host": True,
        "objects": [
            "utilityU/menu",
            "utilityU/PSMainSide_Director",
            "utilityU/PSMainSide_Factory",
            "utilityU/PSMainSide_ObjSound",
            "utilityU/PSMainSide_Demo",
            "utilityU/PSMainSide_Scene",
            "utilityU/PSMainSide_BossMgr",
            "utilityU/PSMainSide_Se",
            "utilityU/PSMainSide_DirectorMgr",
            "utilityU/PSMainSide_Sound",
            "utilityU/PSMainSide_TrackMap",
            "utilityU/PSMainSide_CreaturePrm",
            "utilityU/PSMainSide_ObjCalc",
        ],
    },
]

if __name__ == "__main__":
    import os
    import io
    import sys
    import argparse

    from shutil import which
    from tools import ninja_syntax

    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--version",
        dest="version",
        default="usa",
        help="version to build (usa)",
    )
    parser.add_argument(
        "--map",
        dest="map",
        action="store_true",
        help="generate map file",
    )
    parser.add_argument(
        "--no-check",
        dest="check",
        action="store_false",
        help="don't check hash of resulting dol",
    )
    parser.add_argument(
        "--static-libs",
        dest="static_libs",
        action="store_true",
        help="build and use static libs",
    )
    parser.add_argument(
        "--devkitppc",
        dest="devkitppc",
        help="path to devkitPPC",
    )
    if os.name != "nt" and not "_NT-" in os.uname().sysname:
        parser.add_argument(
            "--wine",
            dest="wine",
            help="path to wine (or wibo)",
        )
    parser.add_argument(
        "--build-dtk",
        dest="build_dtk",
        help="path to decomp-toolkit source",
    )
    args = parser.parse_args()

    # On Windows, we need this to use && in commands
    ALLOW_CHAIN = "cmd /c " if os.name == "nt" else ""

    out = io.StringIO()
    n = ninja_syntax.Writer(out)

    n.variable("ninja_required_version", "1.3")
    n.newline()

    n.comment("The arguments passed to configure.py, for rerunning it.")
    configure_args = sys.argv[1:]
    # Ignore DEVKITPPC env var on Windows
    if os.name != "nt" and "DEVKITPPC" in os.environ and not args.devkitppc:
        configure_args.extend(["--devkitppc", os.environ["DEVKITPPC"]])
    n.variable("configure_args", configure_args)
    n.newline()

    ###
    # Variables
    ###
    n.comment("Variables")
    n.variable("version", args.version.lower())
    if args.version.lower() == "usa":
        n.variable("version_num", "1")
    else:
        sys.exit(f'Invalid version "{args.version}"')
    n.variable("builddir", "build/pikmin2.$version")
    if args.devkitppc:
        n.variable("devkitppc", args.devkitppc)
    elif os.name == "nt":
        n.variable("devkitppc", "C:\devkitPro\devkitPPC")
    elif "DEVKITPPC" in os.environ:
        n.variable("devkitppc", os.environ["DEVKITPPC"])
    else:
        n.variable("devkitppc", "/opt/devkitpro/devkitPPC")
    n.variable(
        "cflags_base",
        "-proc gekko -nodefaults -Cpp_exceptions off -RTTI off -fp hard -fp_contract on -O4,p -maxerrors 1 -enum int -inline auto -str reuse -nosyspath -use_lmw_stmw on -MMD -DVERSION=$version_num -DNONMATCHING=0 -i include/",
    )
    n.variable(
        "cflags_pikmin",
        "-proc gekko -nodefaults -Cpp_exceptions off -RTTI off -fp hard -fp_contract on -O4,p -maxerrors 1 -enum int -inline auto -str reuse -nosyspath -use_lmw_stmw on -common on -MMD -DVERSION=$version_num -DNONMATCHING=0 -i include/",
    )
    # n.variable(
    #     "cflags_retro",
    #     "$cflags_base -use_lmw_stmw on -str reuse,pool,readonly -gccinc -inline deferred,noauto -common on",
    # )
    # n.variable(
    #     "cflags_runtime",
    #     "$cflags_base -use_lmw_stmw on -str reuse,pool,readonly -gccinc -inline deferred,auto",
    # )
    # n.variable("cflags_musyx", "$cflags_base -str reuse,pool,readonly")
    n.variable("asflags", "-mgekko -I include/ --defsym version=$version_num -W")
    ldflags = "-fp fmadd -nodefaults -lcf ldscript.lcf -w off"
    if args.map:
        n.variable("map", "$builddir/pikmin2UP.MAP")
        ldflags += " -map $map"
    n.variable("ldflags", ldflags)
    n.variable("mwcc_version", "2.6")
    n.variable("python", sys.executable)
    if os.name == "nt":
        n.variable("exe", ".exe")
    else:
        if "_NT-" in os.uname().sysname:
            # MSYS2
            n.variable("wine", "")
        elif args.wine:
            n.variable("wine", args.wine + " ")
        elif which("wibo") is not None:
            n.variable("wine", "wibo ")
        else:
            n.variable("wine", "wine ")
        n.variable("exe", "")
    n.newline()

    ###
    # Rules
    ###
    if os.name == "nt":
        n.comment("MWCC build")
        n.rule(
            name="mwcc",
            command="tools\\mwcc_compiler\\$mwcc_version\\mwcceppc.exe $cflags -c $in -o $basedir",
            description="MWCC $out",
            depfile="$basefile.d",
            deps="gcc",
        )
        n.newline()
        n.comment("MWCC build with franklite")
        n.rule(
            name="mwcc_frank",
            command=ALLOW_CHAIN
            + "tools\\mwcc_compiler\\$mwcc_version\\mwcceppc.exe $cflags -c $in -o $basedir && "
            + "$python tools/franklite.py $out $out",
            description="FRANK $out",
            depfile="$basefile.d",
            deps="gcc",
        )
        n.newline()
        n.comment("Link ELF file")
        n.rule(
            name="link",
            command="tools\\mwcc_compiler\\$mwcc_version\\mwldeppc.exe $ldflags -o $out @$out.rsp",
            description="LINK $out",
            rspfile="$out.rsp",
            rspfile_content="$in",
        )
        n.newline()
        n.comment("Assemble asm")
        n.rule(
            name="as",
            command="$devkitppc\\bin\\powerpc-eabi-as.exe $asflags -o $out $in -MD $out.d",
            description="AS $out",
            depfile="$out.d",
            deps="gcc",
        )
        n.newline()
        n.comment("Create static library")
        n.rule(
            name="ar",
            command="$devkitppc\\bin\\powerpc-eabi-ar.exe crs $out $in",
            description="AR $out",
        )
        n.newline()
    else:
        n.comment("MWCC build")
        n.rule(
            name="mwcc",
            command="${wine}tools/mwcc_compiler/$mwcc_version/mwcceppc.exe $cflags -c $in -o $basedir && "
            + "$python tools/transform-dep.py $basefile.d $basefile.d",
            description="MWCC $out",
            depfile="$basefile.d",
            deps="gcc",
        )
        n.newline()
        n.comment("MWCC build with franklite")
        n.rule(
            name="mwcc_frank",
            command="${wine}tools/mwcc_compiler/$mwcc_version/mwcceppc.exe $cflags -c $in -o $basedir && "
            + "$python tools/franklite.py $out $out && "
            + "$python tools/transform-dep.py $basefile.d $basefile.d",
            description="FRANK $out",
            depfile="$basefile.d",
            deps="gcc",
        )
        n.newline()
        n.comment("Link ELF file")
        n.rule(
            name="link",
            command="${wine}tools/mwcc_compiler/$mwcc_version/mwldeppc.exe $ldflags -o $out @$out.rsp",
            description="LINK $out",
            rspfile="$out.rsp",
            rspfile_content="$in",
        )
        n.newline()
        n.comment("Assemble asm")
        n.rule(
            name="as",
            command="$devkitppc/bin/powerpc-eabi-as $asflags -o $out $in -MD $out.d",
            description="AS $out",
            depfile="$out.d",
            deps="gcc",
        )
        n.newline()
        n.comment("Create static library")
        n.rule(
            name="ar",
            command="$devkitppc/bin/powerpc-eabi-ar crs $out $in",
            description="AR $out",
        )
        n.newline()
    n.comment("Host build")
    n.variable("host_cflags", "-I include/ -Wno-trigraphs")
    n.variable(
        "host_cppflags",
        "-std=c++98 -I include/ -fno-exceptions -fno-rtti -D_CRT_SECURE_NO_WARNINGS -Wno-trigraphs -Wno-c++11-extensions",
    )
    n.rule(
        name="host_cc",
        command="clang $host_cflags -c -o $out $in",
        description="host_cc $out",
    )
    n.rule(
        name="host_cpp",
        command="clang++ $host_cppflags -c -o $out $in",
        description="host_c++ $out",
    )
    n.newline()

    ###
    # Rules for source files
    ###
    n.comment("Source files")
    all_source_files = []
    all_host_source_files = []
    for lib in LIBS:
        inputs = []
        if "lib" in lib:
            lib_name = lib["lib"]
            n.comment(f"{lib_name}.a")
        else:
            n.comment("Loose files")
        for object in lib["objects"]:
            completed = None
            add_to_all = True
            if type(object) is list:
                if len(object) > 2:
                    add_to_all = object[2]
                completed = object[1]
                object = object[0]

            mwcc_version = lib["mwcc_version"]
            c_file = None
            if os.path.exists(os.path.join("src", f"{object}.cpp")):
                c_file = os.path.join("src", f"{object}.cpp")
            elif os.path.exists(os.path.join("src", f"{object}.c")):
                c_file = os.path.join("src", f"{object}.c")
            if c_file is not None:
                # if completed is None:
                #     print(f"Mark as incomplete: {c_file}")
                rule = "mwcc"
                if mwcc_version == "1.2.5e":
                    mwcc_version = "1.2.5"
                    rule = "mwcc_frank"
                n.build(
                    outputs=f"$builddir/src/{object}.o",
                    rule=rule,
                    inputs=c_file,
                    variables={
                        "mwcc_version": mwcc_version,
                        "cflags": lib["cflags"],
                        "basedir": os.path.dirname(f"$builddir/src/{object}"),
                        "basefile": f"$builddir/src/{object}",
                    },
                )
                if lib["host"]:
                    n.build(
                        outputs=f"$builddir/host/{object}.o",
                        rule="host_cc" if c_file.endswith(".c") else "host_cpp",
                        inputs=c_file,
                        variables={
                            "basedir": os.path.dirname(f"$builddir/src/{object}"),
                            "basefile": f"$builddir/src/{object}",
                        },
                    )
                    if add_to_all:
                        all_host_source_files.append(f"$builddir/host/{object}.o")
                if add_to_all:
                    all_source_files.append(f"$builddir/src/{object}.o")
            if os.path.exists(os.path.join("asm", f"{object}.s")):
                n.build(
                    outputs=f"$builddir/asm/{object}.o",
                    rule="as",
                    inputs=f"asm/{object}.s",
                )
            if completed:
                inputs.append(f"$builddir/src/{object}.o")
            else:
                inputs.append(f"$builddir/asm/{object}.o")
        if args.static_libs and "lib" in lib:
            lib_name = lib["lib"]
            n.build(
                outputs=f"$builddir/lib/{lib_name}.a",
                rule="ar",
                inputs=inputs,
            )
        n.newline()

    ###
    # Link
    ###
    n.comment("Link")
    inputs = []
    for lib in LIBS:
        if args.static_libs and "lib" in lib:
            lib_name = lib["lib"]
            inputs.append(f"$builddir/lib/{lib_name}.a")
        else:
            for object in lib["objects"]:
                completed = False

                if type(object) is list:
                    completed = object[1]
                    object = object[0]

                if completed:
                    inputs.append(f"$builddir/src/{object}.o")
                else:
                    inputs.append(f"$builddir/asm/{object}.o")
    if args.map:
        n.build(
            outputs="$builddir/main.elf",
            rule="link",
            inputs=inputs,
            implicit_outputs="$map",
        )
    else:
        n.build(
            outputs="$builddir/main.elf",
            rule="link",
            inputs=inputs,
        )
    n.newline()

    ###
    # Helper rule for building all source files
    ###
    n.comment("Build all source files")
    n.build(
        outputs="all_source",
        rule="phony",
        inputs=all_source_files,
    )
    n.newline()

    ###
    # Helper rule for building all source files, with a host compiler
    ###
    n.comment("Build all source files with a host compiler")
    n.build(
        outputs="all_source_host",
        rule="phony",
        inputs=all_host_source_files,
    )
    n.newline()

    ###
    # Tooling
    ###
    n.comment("decomp-toolkit")
    if args.build_dtk:
        n.variable("dtk", os.path.join("build", "tools", "release", "dtk$exe"))
        n.rule(
            name="cargo",
            command="cargo build --release --manifest-path $in --bin $bin --target-dir $target",
            description="CARGO $bin",
            depfile="$target/release/$bin.d",
            deps="gcc",
        )
        n.build(
            outputs="$dtk",
            rule="cargo",
            inputs=os.path.join(args.build_dtk, "Cargo.toml"),
            variables={
                "bin": "dtk",
                "target": os.path.join("build", "tools"),
            },
        )
    else:
        n.variable("dtk", os.path.join("build", "tools", "dtk$exe"))
        n.rule(
            name="download_dtk",
            command="$python tools/download_dtk.py $in $out",
            description="DOWNLOAD $out",
        )
        n.build(
            outputs="$dtk",
            rule="download_dtk",
            inputs="dtk_version",
            implicit=["tools/download_dtk.py"],
        )
    n.rule(
        name="elf2dol",
        command="$dtk elf2dol $in $out",
        description="DOL $out",
    )
    n.build(
        outputs="$builddir/main.dol",
        rule="elf2dol",
        inputs="$builddir/main.elf",
        implicit="$dtk",
    )
    n.newline()

    ###
    # Check DOL hash
    ###
    if args.check:
        n.comment("Check DOL hash")
        n.rule(
            name="check",
            command="$dtk shasum -c $in -o $out",
            description="CHECK $in",
        )
        n.build(
            outputs="$builddir/main.dol.ok",
            rule="check",
            inputs="sha1/pikmin2.$version.sha1",
            implicit=["$builddir/main.dol", "$dtk"],
        )
        n.newline()

    ###
    # Progress script
    ###
    if args.map:
        n.comment("Check progress")
        n.rule(
            name="progress",
            command="$python progress.py $in -o $out",
            description="PROGRESS $in",
        )
        n.build(
            outputs="$builddir/main.dol.progress",
            rule="progress",
            inputs=["$builddir/main.dol", "$map"],
        )
        n.newline()

    ###
    # Regenerate on change
    ###
    n.comment("Reconfigure on change")
    n.rule(
        name="configure",
        command="$python configure.py $configure_args",
        generator=True,
    )
    n.build(
        outputs="build.ninja",
        rule="configure",
        implicit=["configure.py", "tools/ninja_syntax.py"],
    )
    n.newline()

    ###
    # Default rule
    ###
    n.comment("Default rule")
    if args.check:
        dol_out = "$builddir/main.dol.ok"
    else:
        dol_out = "$builddir/main.dol"
    if args.map:
        n.default([dol_out, "$builddir/main.dol.progress"])
    else:
        n.default([dol_out])

    with open("build.ninja", "w") as f:
        f.write(out.getvalue())
    n.close()
