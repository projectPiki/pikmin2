LIBS = [
    {
        "lib": "JStudio_JParticle",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JStudio_JParticle/object-particle", False],
            ["JSystem/JStudio_JParticle/control", True],
        ],
    },
    {
        "lib": "JMessage",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JMessage/resource", False],
            ["JSystem/JMessage/data", True],
            ["JSystem/JMessage/processor", False],
            ["JSystem/JMessage/control", False],
        ],
    },
    {
        "lib": "JStudio",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JStudio/stb-data-parse", True],
            ["JSystem/JStudio/functionvalue", False],
            ["JSystem/JStudio/fvb", False],
            ["JSystem/JStudio/fvb-data", True],
            ["JSystem/JStudio/fvb-data-parse", True],
            ["JSystem/JStudio/jstudio-control", False],
            ["JSystem/JStudio/jstudio-data", True],
            ["JSystem/JStudio/jstudio-object", False],
            ["JSystem/JStudio/object-id", False],
            ["JSystem/JStudio/stb", False],
            ["JSystem/JStudio/stb-data", True],
            ["JSystem/JStudio/jstudio-math", False],
        ],
    },
    {
        "lib": "JStudio_JStage",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JStudio_JStage/object-light", False],
            ["JSystem/JStudio_JStage/object", True],
            ["JSystem/JStudio_JStage/object-actor", False],
            ["JSystem/JStudio_JStage/object-ambientlight", True],
            ["JSystem/JStudio_JStage/object-camera", False],
            ["JSystem/JStudio_JStage/object-fog", True],
            ["JSystem/JStudio_JStage/control", True],
        ],
    },
    {
        "lib": "JStudio_JMessage",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JStudio_JMessage/object-message", True],
            ["JSystem/JStudio_JMessage/control", True],
        ],
    },
    {
        "lib": "JStudio_JAudio",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JStudio_JAudio/object-sound", False],
            ["JSystem/JStudio_JAudio/control", True],
        ],
    },
    {
        "lib": "J3DU",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/J3DU/J3DUDL", True],
            ["JSystem/J3DU/J3DUMotion", False],
            ["JSystem/J3DU/J3DUShadow", True],
            ["JSystem/J3DU/J3DUMtxCache", True],
        ],
    },
    {
        "lib": "JKernel",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JKernel/JKRAram", True],
            ["JSystem/JKernel/JKRAramArchive", True],
            ["JSystem/JKernel/JKRAramBlock", True],
            ["JSystem/JKernel/JKRAramHeap", True],
            ["JSystem/JKernel/JKRAramPiece", True],
            ["JSystem/JKernel/JKRAramStream", True],
            ["JSystem/JKernel/JKRArchivePri", True],
            ["JSystem/JKernel/JKRArchivePub", True],
            ["JSystem/JKernel/JKRCompArchive", True],
            ["JSystem/JKernel/JKRDecomp", True],
            ["JSystem/JKernel/JKRDisposer", True],
            ["JSystem/JKernel/JKRDvdFile", True],
            ["JSystem/JKernel/JKRDvdAramRipper", True],
            ["JSystem/JKernel/JKRDvdArchive", True],
            ["JSystem/JKernel/JKRDvdRipper", True],
            ["JSystem/JKernel/JKRExpHeap", True],
            ["JSystem/JKernel/JKRFileCache", True],
            ["JSystem/JKernel/JKRFileFinder", True],
            ["JSystem/JKernel/JKRFile", True],
            ["JSystem/JKernel/JKRFileLoader", True],
            ["JSystem/JKernel/JKRHeap", False],
            ["JSystem/JKernel/JKRMemArchive", True],
            ["JSystem/JKernel/JKRSolidHeap", True, {"mw_version": "1.3.2"}],
            ["JSystem/JKernel/JKRThread", True],
        ],
    },
    {
        "lib": "JSupport",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JSupport/JSUOutputStream", True],
            ["JSystem/JSupport/JSUInputStream", True],
            ["JSystem/JSupport/JSUList", True],
            ["JSystem/JSupport/JSUMemoryStream", True],
            ["JSystem/JSupport/JSUFileStream", True],
        ],
    },
    {
        "lib": "JGadget",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JGadget/binary", True],
            ["JSystem/JGadget/linklist", True],
            ["JSystem/JGadget/std-list", False],
            ["JSystem/JGadget/std-vector", False],
        ],
    },
    {
        "lib": "JUtility",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JUtility/JUTAssert", True],
            ["JSystem/JUtility/JUTConsole", True],
            ["JSystem/JUtility/JUTDbPrint", True],
            ["JSystem/JUtility/JUTDirectFile", True],
            ["JSystem/JUtility/JUTDirectPrint", True],
            ["JSystem/JUtility/JUTException", True],
            ["JSystem/JUtility/JUTFader", True],
            ["JSystem/JUtility/JUTFont", True],
            ["JSystem/JUtility/JUTGamePad", False],
            ["JSystem/JUtility/JUTGraphFifo", True],
            ["JSystem/JUtility/JUTNameTab", True],
            ["JSystem/JUtility/JUTPalette", True],
            ["JSystem/JUtility/JUTProcBar", True],
            ["JSystem/JUtility/JUTResFont", True],
            ["JSystem/JUtility/JUTResource", True],
            ["JSystem/JUtility/JUTRomFont", True],
            ["JSystem/JUtility/JUTFontData_Ascfont_fix12", True],
            ["JSystem/JUtility/JUTTexture", True],
            ["JSystem/JUtility/JUTVideo", True],
            ["JSystem/JUtility/JUTXfb", True],
            ["JSystem/JUtility/JUTCacheFont", True],
        ],
    },
    {
        "lib": "JMath",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JMath/JMath", True],
            ["JSystem/JMath/random", True],
            ["JSystem/JMath/JMATrigonometric", True],
        ],
    },
    {
        "lib": "J2D",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/J2D/J2DOrthoGraph", True],
            ["JSystem/J2D/J2DPerspGraph", True],
            ["JSystem/J2D/J2DGrafContext", True],
            ["JSystem/J2D/J2DPane", False],
            ["JSystem/J2D/J2DPicture", False],
            ["JSystem/J2D/J2DPrint", False],
            ["JSystem/J2D/J2DScreen", False],
            ["JSystem/J2D/J2DTextBox", True],
            ["JSystem/J2D/J2DWindow", False],
            ["JSystem/J2D/J2DWindowEx", False],
            ["JSystem/J2D/J2DAnmLoader", True],
            ["JSystem/J2D/J2DBloSaver", False],
            ["JSystem/J2D/J2DManage", True],
            ["JSystem/J2D/J2DMatBlock", False],
            ["JSystem/J2D/J2DMaterial", False],
            ["JSystem/J2D/J2DMaterialFactory", False],
            ["JSystem/J2D/J2DPictureEx", False],
            ["JSystem/J2D/J2DTevs", False],
            ["JSystem/J2D/J2DTextBoxEx", False],
            ["JSystem/J2D/J2DAnimation", True],
        ],
    },
    {
        "lib": "J3D",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/J3D/J3DSys", True],
            ["JSystem/J3D/J3DVertex", True],
            ["JSystem/J3D/J3DTransform", False],
            ["JSystem/J3D/J3DPacket", True],
            ["JSystem/J3D/J3DShape", False],
            ["JSystem/J3D/J3DMaterial", False],
            ["JSystem/J3D/J3DTevs", False],
            ["JSystem/J3D/J3DDrawBuffer", True],
            ["JSystem/J3D/J3DModel", False],
            ["JSystem/J3D/J3DAnimation", False],
            ["JSystem/J3D/J3DMaterialAnm", False],
            ["JSystem/J3D/J3DCluster", False],
            ["JSystem/J3D/J3DJoint", False],
            ["JSystem/J3D/J3DMaterialFactory", False],
            ["JSystem/J3D/J3DBinaryFormat", True],
            ["JSystem/J3D/J3DModelLoader", False],
            ["JSystem/J3D/J3DJointFactory", True],
            ["JSystem/J3D/J3DShapeFactory", True],
            ["JSystem/J3D/J3DAnmLoader", True],
            ["JSystem/J3D/J3DModelSaver", True],
            ["JSystem/J3D/J3DGD", False],
            ["JSystem/J3D/J3DMatBlock", False],
            ["JSystem/J3D/J3DModelData", True],
            ["JSystem/J3D/J3DMaterialAttach", False],
            ["JSystem/J3D/J3DMaterialFactory_v21", False],
            ["JSystem/J3D/J3DShapeMtx", False],
            ["JSystem/J3D/J3DModelLoaderCalcSize", False],
            ["JSystem/J3D/J3DJointTree", False],
            ["JSystem/J3D/J3DSkinDeform", True],
            ["JSystem/J3D/J3DShapeDraw", True],
            ["JSystem/J3D/J3DMtxBuffer", False],
            ["JSystem/J3D/J3DShapeTable", True],
        ],
    },
    {
        "lib": "JFramework",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JFramework/JFWSystem", True],
            ["JSystem/JFramework/JFWDisplay", True],
        ],
    },
    {
        "lib": "JParticle",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JParticle/JPABaseShape", False],
            ["JSystem/JParticle/JPAChildShape", True],
            ["JSystem/JParticle/JPADynamicsBlock", False],
            ["JSystem/JParticle/JPAEmitter", True],
            ["JSystem/JParticle/JPAEmitterManager", False],
            ["JSystem/JParticle/JPAExTexShape", True],
            ["JSystem/JParticle/JPAExtraShape", True],
            ["JSystem/JParticle/JPAFieldBlock", False],
            ["JSystem/JParticle/JPAKeyBlock", True],
            ["JSystem/JParticle/JPAMath", False],
            ["JSystem/JParticle/JPAParticle", False],
            ["JSystem/JParticle/JPAResource", False],
            ["JSystem/JParticle/JPAResourceLoader", False],
            ["JSystem/JParticle/JPAResourceManager", True],
            ["JSystem/JParticle/JPATexture", True],
        ],
    },
    {
        "lib": "JStage",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JStage/JSGSystem", True],
            ["JSystem/JStage/JSGCamera", True],
            ["JSystem/JStage/JSGObject", True],
            ["JSystem/JStage/JSGActor", True],
        ],
    },
    {
        "lib": "JAudio_JAS",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JAudio/JAS/JASWSParser", False],
            ["JSystem/JAudio/JAS/JASBankMgr", True],
            ["JSystem/JAudio/JAS/JASBasicBank", True],
            ["JSystem/JAudio/JAS/JASBasicInst", True],
            ["JSystem/JAudio/JAS/JASBasicWaveBank", False],
            ["JSystem/JAudio/JAS/JASBNKParser", False],
            ["JSystem/JAudio/JAS/JASDrumSet", True],
            ["JSystem/JAudio/JAS/JASInstEffect", True],
            ["JSystem/JAudio/JAS/JASInstRand", False],
            ["JSystem/JAudio/JAS/JASInstSense", False],
            ["JSystem/JAudio/JAS/JASSimpleWaveBank", True],
            ["JSystem/JAudio/JAS/JASWaveArcLoader", True],
            ["JSystem/JAudio/JAS/JASWaveBank", True],
            ["JSystem/JAudio/JAS/JASWaveBankMgr", True],
            ["JSystem/JAudio/JAS/JASBank", True],
            ["JSystem/JAudio/JAS/JASTrackPort", True],
            ["JSystem/JAudio/JAS/JASOuterParam", True],
            ["JSystem/JAudio/JAS/JASPlayer_impl", True],
            ["JSystem/JAudio/JAS/JASRegisterParam", True],
            ["JSystem/JAudio/JAS/JASSeqCtrl", True],
            ["JSystem/JAudio/JAS/JASSeqParser", False],
            ["JSystem/JAudio/JAS/JASTrack", False],
            ["JSystem/JAudio/JAS/JASTrackInterrupt", True],
            ["JSystem/JAudio/JAS/JASOscillator", False],
            ["JSystem/JAudio/JAS/JASChannel", False],
            ["JSystem/JAudio/JAS/JASDriverIF", True],
            ["JSystem/JAudio/JAS/JASDSPChannel", False],
            ["JSystem/JAudio/JAS/JASDSPInterface", True],
            ["JSystem/JAudio/JAS/JASAudioThread", True],
            ["JSystem/JAudio/JAS/JASCalc", True],
            ["JSystem/JAudio/JAS/JASCallback", True],
            ["JSystem/JAudio/JAS/JASCmdStack", True],
            ["JSystem/JAudio/JAS/JASDvdThread", True],
            ["JSystem/JAudio/JAS/JASHeapCtrl", False],
            ["JSystem/JAudio/JAS/JASProbe", True],
            ["JSystem/JAudio/JAS/JASResArcLoader", True],
            ["JSystem/JAudio/JAS/JASReport", True],
            ["JSystem/JAudio/JAS/JASAiCtrl", False],
            ["JSystem/JAudio/JAS/JASChannelUpdater", True],
            ["JSystem/JAudio/JAS/JASTaskThread", False],
            ["JSystem/JAudio/JAS/JASAramStream", False],
        ],
    },
    {
        "lib": "JAudio_DSP",
        "cflags": "$cflags_pikmin -lang=c++ -func_align 32 -inline noauto -common off -use_lmw_stmw off",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JAudio/dsp/dspproc", True],
            ["JSystem/JAudio/dsp/dsptask", False],
            ["JSystem/JAudio/dsp/osdsp", True],
            ["JSystem/JAudio/dsp/osdsp_task", True],
        ],
    },
    {
        "lib": "JAudio_JAI",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JAudio/JAI/JAIAnimation", False],
            ["JSystem/JAudio/JAI/JAIBankWave", False],
            ["JSystem/JAudio/JAI/JAIBasic", False],
            ["JSystem/JAudio/JAI/JAIConst", True],
            ["JSystem/JAudio/JAI/JAIDummyObject", True],
            ["JSystem/JAudio/JAI/JAIFx", False],
            ["JSystem/JAudio/JAI/JAIGlobalParameter", True],
            ["JSystem/JAudio/JAI/JAIInitData", False],
            ["JSystem/JAudio/JAI/JAISeMgr", False],
            ["JSystem/JAudio/JAI/JAISequenceHeap", False],
            ["JSystem/JAudio/JAI/JAISequenceMgr", False],
            ["JSystem/JAudio/JAI/JAISound", False],
            ["JSystem/JAudio/JAI/JAISoundTable", False],
            ["JSystem/JAudio/JAI/JAIStreamMgr", False],
            ["JSystem/JAudio/JAI/JAISystemInterface", False],
            ["JSystem/JAudio/JAI/JAIObject", False],
        ],
    },
    {
        "lib": "JAudio_JAD",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JAudio/JAD/JADHioNode", True],
        ],
    },
    {
        "lib": "JAudio_JAL",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JAudio/JAL/JALCalc", True],
        ],
    },
    {
        "lib": "JAudio_JAU",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["JSystem/JAudio/JAU/JAUData", True],
            ["JSystem/JAudio/JAU/JAUDataMgr", True],
        ],
    },
    {
        "lib": "TRK_MINNOW_DOLPHIN",
        "mw_version": "2.6",
        "cflags": "$cflags_base -inline deferred -sdata 0 -sdata2 0",
        "host": False,
        "objects": [
            ["Dolphin/TRK_MINNOW_DOLPHIN/mainloop", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/nubevent", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/nubinit", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/msg", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/msgbuf", False],
            [
                "Dolphin/TRK_MINNOW_DOLPHIN/serpoll",
                True,
                {"cflags": "$cflags_base -inline deferred -sdata 8"},
            ],
            ["Dolphin/TRK_MINNOW_DOLPHIN/usr_put", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/dispatch", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/msghndlr", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/support", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/mutex_TRK", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/notify", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/flush_cache", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/mem_TRK", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/targimpl", False],
            [
                "Dolphin/TRK_MINNOW_DOLPHIN/targsupp",
                True,
                {"cflags": "$cflags_base -inline deferred -func_align 32"},
            ],
            ["Dolphin/TRK_MINNOW_DOLPHIN/mpc_7xx_603e", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/__exception", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/dolphin_trk", False],
            ["Dolphin/TRK_MINNOW_DOLPHIN/main_TRK", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/dolphin_trk_glue", False],
            ["Dolphin/TRK_MINNOW_DOLPHIN/targcont", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/target_options", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/mslsupp", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/UDP_Stubs", True],
            [
                "Dolphin/TRK_MINNOW_DOLPHIN/ddh/main",
                True,
                {"cflags": "$cflags_base -inline deferred -sdata 8"},
            ],
            ["Dolphin/TRK_MINNOW_DOLPHIN/CircleBuffer", True],
            [
                "Dolphin/TRK_MINNOW_DOLPHIN/gdev/main",
                True,
                {"cflags": "$cflags_base -inline deferred -sdata 8"},
            ],
            ["Dolphin/TRK_MINNOW_DOLPHIN/MWTrace", True],
            ["Dolphin/TRK_MINNOW_DOLPHIN/MWCriticalSection_gc", True],
        ],
    },
    {
        "lib": "Runtime",
        "mw_version": "2.6",
        "cflags": "$cflags_base -inline deferred",
        "host": False,
        "objects": [
            ["Dolphin/Runtime/__va_arg", True],
            ["Dolphin/Runtime/global_destructor_chain", True],
            ["Dolphin/Runtime/CPlusLibPPC", True],
            [
                "Dolphin/Runtime/NMWException",
                True,
                {"cflags": "$cflags_base -inline deferred -Cpp_exceptions on"},
            ],
            ["Dolphin/Runtime/ptmf", True],
            ["Dolphin/Runtime/runtime", True],
            ["Dolphin/Runtime/__init_cpp_exceptions", True],
            [
                "Dolphin/Runtime/Gecko_ExceptionPPC",
                True,
                {"cflags": "$cflags_base -inline deferred -Cpp_exceptions on"},
            ],
            ["Dolphin/Runtime/GCN_mem_alloc", True],
            ["Dolphin/Runtime/__mem", True],
        ],
    },
    {
        "lib": "MSL_C",
        "mw_version": "2.6",
        "cflags": "$cflags_base -inline deferred",
        "host": False,
        "objects": [
            ["Dolphin/MSL_C/PPC_EABI/abort_exit", True],
            ["Dolphin/MSL_C/MSL_Common/alloc", True],
            ["Dolphin/MSL_C/MSL_Common/ansi_files", True],
            [
                "Dolphin/MSL_C/MSL_Common_Embedded/ansi_fp",
                True,
                {"cflags": "$cflags_base -inline deferred -str pool"},
            ],
            ["Dolphin/MSL_C/MSL_Common/arith", True],
            ["Dolphin/MSL_C/MSL_Common/buffer_io", True],
            ["Dolphin/MSL_C/PPC_EABI/critical_regions.gamecube", True],
            ["Dolphin/MSL_C/MSL_Common/ctype", True],
            ["Dolphin/MSL_C/MSL_Common/direct_io", True],
            ["Dolphin/MSL_C/MSL_Common/errno", True],
            ["Dolphin/MSL_C/MSL_Common/file_io", True],
            ["Dolphin/MSL_C/MSL_Common/FILE_POS", True],
            [
                "Dolphin/MSL_C/MSL_Common/locale",
                True,
                {"cflags": "$cflags_base -str pool"},
            ],
            [
                "Dolphin/MSL_C/MSL_Common/mbstring",
                True,
                {"cflags": "$cflags_base -inline noauto,deferred"},
            ],
            ["Dolphin/MSL_C/MSL_Common/mem", True],
            ["Dolphin/MSL_C/MSL_Common/mem_funcs", True],
            ["Dolphin/MSL_C/MSL_Common/misc_io", True],
            [
                "Dolphin/MSL_C/MSL_Common/printf",
                True,
                {"cflags": "$cflags_base -inline deferred -str pool"},
            ],
            ["Dolphin/MSL_C/MSL_Common/rand", True],
            ["Dolphin/MSL_C/MSL_Common/float", True],
            ["Dolphin/MSL_C/MSL_Common/scanf", True],
            ["Dolphin/MSL_C/MSL_Common/string", True],
            ["Dolphin/MSL_C/MSL_Common/strtold", True],
            ["Dolphin/MSL_C/MSL_Common/strtoul", True],
            ["Dolphin/MSL_C/MSL_Common/wchar_io", True],
            ["Dolphin/MSL_C/PPC_EABI/uart_console_io_gcn", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_asin", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_atan2", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_exp", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_fmod", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_log", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_log10", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_pow", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_rem_pio2", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_cos", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_rem_pio2", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_sin", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/k_tan", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_atan", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ceil", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_copysign", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_cos", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_floor", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_frexp", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_ldexp", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_modf", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_sin", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/s_tan", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_asin", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_atan2", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_exp", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_fmod", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_log10", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_pow", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/e_sqrt", True],
            ["Dolphin/MSL_C/PPC_EABI/math_ppc", True],
            ["Dolphin/MSL_C/MSL_Common_Embedded/Math/Double_precision/w_sqrt", True],
            ["Dolphin/MSL_C/MSL_Common/extras", True],
        ],
    },
    {
        "lib": "OdemuExi2",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -inline deferred",
        "host": False,
        "objects": [
            ["Dolphin/OdemuExi2/DebuggerDriver", True],
        ],
    },
    {
        "lib": "vi",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -str noreadonly",
        "host": False,
        "objects": [
            ["Dolphin/vi/vi", True],
        ],
    },
    {
        "lib": "amcstubs",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base",
        "host": False,
        "objects": [
            ["Dolphin/amcstubs/AmcExi2Stubs", True],
        ],
    },
    {
        "lib": "ar",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -str noreadonly",
        "host": False,
        "objects": [
            ["Dolphin/ar/ar", True],
            ["Dolphin/ar/arq", True],
        ],
    },
    {
        "lib": "base",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base",
        "host": False,
        "objects": [
            ["Dolphin/base/PPCArch", True],
        ],
    },
    {
        "lib": "card",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -str noreadonly",
        "host": False,
        "objects": [
            ["Dolphin/card/CARDBios", True],
            ["Dolphin/card/CARDUnlock", True],
            ["Dolphin/card/CARDRdwr", True],
            ["Dolphin/card/CARDBlock", True],
            ["Dolphin/card/CARDDir", True],
            ["Dolphin/card/CARDCheck", True],
            ["Dolphin/card/CARDMount", True],
            ["Dolphin/card/CARDFormat", True],
            ["Dolphin/card/CARDOpen", True],
            ["Dolphin/card/CARDCreate", True],
            ["Dolphin/card/CARDRead", True],
            ["Dolphin/card/CARDWrite", True],
            ["Dolphin/card/CARDStat", True],
            ["Dolphin/card/CARDNet", True],
        ],
    },
    {
        "lib": "db",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -str noreadonly",
        "host": False,
        "objects": [
            ["Dolphin/db/db", True],
        ],
    },
    {
        "lib": "dsp",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -str noreadonly",
        "host": False,
        "objects": [
            ["Dolphin/dsp/dsp", True],
            ["Dolphin/dsp/dsp_debug", True],
            ["Dolphin/dsp/dsp_task", True],
        ],
    },
    {
        "lib": "dvd",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -str noreadonly",
        "host": False,
        "objects": [
            ["Dolphin/dvd/dvdlow", True],
            ["Dolphin/dvd/dvdfs", True],
            ["Dolphin/dvd/dvd", True],
            ["Dolphin/dvd/dvdqueue", True],
            ["Dolphin/dvd/dvderror", True],
            ["Dolphin/dvd/dvdidutils", True],
            ["Dolphin/dvd/dvdFatal", True],
            ["Dolphin/dvd/fstload", True],
        ],
    },
    {
        "lib": "exi",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -str noreadonly",
        "host": False,
        "objects": [
            ["Dolphin/exi/EXIBios", True],
            ["Dolphin/exi/EXIUart", True],
        ],
    },
    {
        "lib": "gd",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base",
        "host": False,
        "objects": [
            ["Dolphin/gd/GDBase", True],
            ["Dolphin/gd/GDGeometry", True],
        ],
    },
    {
        "lib": "gx",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -str noreadonly -fp_contract off",
        "host": False,
        "objects": [
            ["Dolphin/gx/GXInit", True],
            ["Dolphin/gx/GXFifo", True],
            ["Dolphin/gx/GXAttr", True],
            ["Dolphin/gx/GXMisc", True],
            ["Dolphin/gx/GXGeometry", True],
            ["Dolphin/gx/GXFrameBuf", True],
            ["Dolphin/gx/GXLight", True],
            ["Dolphin/gx/GXTexture", True],
            ["Dolphin/gx/GXBump", True],
            ["Dolphin/gx/GXTev", True],
            ["Dolphin/gx/GXPixel", True],
            ["Dolphin/gx/GXDisplayList", True],
            ["Dolphin/gx/GXTransform", True],
            ["Dolphin/gx/GXPerf", True],
        ],
    },
    {
        "lib": "mtx",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base",
        "host": False,
        "objects": [
            ["Dolphin/mtx/mtx", True],
            ["Dolphin/mtx/mtxvec", True],
            ["Dolphin/mtx/mtx44", True],
            ["Dolphin/mtx/vec", True],
        ],
    },
    {
        "lib": "odenotstub",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base",
        "host": False,
        "objects": [
            ["Dolphin/odenotstub/odenotstub", True],
        ],
    },
    {
        "lib": "os",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -str noreadonly",
        "host": False,
        "objects": [
            ["Dolphin/os/OS", True],
            ["Dolphin/os/OSAlarm", True],
            ["Dolphin/os/OSAlloc", True],
            ["Dolphin/os/OSArena", True],
            ["Dolphin/os/OSAudioSystem", True],
            ["Dolphin/os/OSCache", True],
            ["Dolphin/os/OSContext", True],
            ["Dolphin/os/OSError", True],
            ["Dolphin/os/OSFont", False],
            ["Dolphin/os/OSInterrupt", True],
            ["Dolphin/os/OSLink", True],
            ["Dolphin/os/OSMessage", True],
            ["Dolphin/os/OSMemory", True],
            ["Dolphin/os/OSMutex", True],
            ["Dolphin/os/OSReboot", True],
            ["Dolphin/os/OSReset", True],
            ["Dolphin/os/OSResetSW", True],
            ["Dolphin/os/OSRtc", True],
            ["Dolphin/os/OSSync", True],
            ["Dolphin/os/OSThread", True],
            ["Dolphin/os/OSTime", True],
            ["Dolphin/os/__start", True],
            ["Dolphin/os/__ppc_eabi_init", True],
        ],
    },
    {
        "lib": "pad",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -fp_contract off -str noreadonly",
        "host": False,
        "objects": [
            ["Dolphin/pad/Padclamp", True],
            ["Dolphin/pad/Pad", True],
        ],
    },
    {
        "lib": "si",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -str noreadonly",
        "host": False,
        "objects": [
            ["Dolphin/si/SIBios", True],
            ["Dolphin/si/SISamplingRate", True],
        ],
    },
    {
        "lib": "ai",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -str noreadonly",
        "host": False,
        "objects": [
            ["Dolphin/ai/ai", True],
        ],
    },
    {
        "lib": "thp",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -str noreadonly",
        "host": False,
        "objects": [
            ["Dolphin/thp/THPDec", True],
            ["Dolphin/thp/THPAudio", True],
        ],
    },
    {
        "lib": "gba",
        "mw_version": "1.2.5n",
        "cflags": "$cflags_base -str noreadonly",
        "host": False,
        "objects": [
            ["Dolphin/gba/GBA", True],
            ["Dolphin/gba/GBARead", True],
            ["Dolphin/gba/GBAWrite", True],
            ["Dolphin/gba/GBAXfer", True],
        ],
    },
    {
        "lib": "plugProjectYamashitaU",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["plugProjectYamashitaU/enemyBase", True],
            ["plugProjectYamashitaU/pelplant", True],
            ["plugProjectYamashitaU/pelplantState", True],
            ["plugProjectYamashitaU/enemyInteractBattle", True],
            ["plugProjectYamashitaU/generalEnemyMgr", False],
            ["plugProjectYamashitaU/kochappyAnimator", True],
            ["plugProjectYamashitaU/kochappy", True],
            ["plugProjectYamashitaU/kochappyState", False],
            ["plugProjectYamashitaU/kochappyMgr", True],
            ["plugProjectYamashitaU/enemyAction", False],
            ["plugProjectYamashitaU/chappy", True],
            ["plugProjectYamashitaU/chappyState", False],
            ["plugProjectYamashitaU/chappyAnimator", True],
            ["plugProjectYamashitaU/chappyMgr", True],
            ["plugProjectYamashitaU/lifeGaugeMgr", False],
            ["plugProjectYamashitaU/carryInfoMgr", False],
            ["plugProjectYamashitaU/gameLightMgr", False],
            ["plugProjectYamashitaU/vtxAnm", False],
            ["plugProjectYamashitaU/enemyInfo", True],
            ["plugProjectYamashitaU/farm", True],
            ["plugProjectYamashitaU/farmMgr", True],
            ["plugProjectYamashitaU/genEnemy", True],
            ["plugProjectYamashitaU/timeMgr", True],
            ["plugProjectYamashitaU/pelplantGenerator", True],
            ["plugProjectYamashitaU/enemyInteractActions", True],
            ["plugProjectYamashitaU/enemyAnimatorBase", True],
            ["plugProjectYamashitaU/enemyStoneMgr", True],
            ["plugProjectYamashitaU/enemyStoenInfo", True],
            ["plugProjectYamashitaU/enemyStoneDrawInfo", False],
            ["plugProjectYamashitaU/enemyStoneObj", True],
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
            ["plugProjectYamashitaU/singleGS_ZukanParms", False],
            ["plugProjectYamashitaU/treasureLightMgr", True],
            ["plugProjectYamashitaU/effectAnimator", True],
        ],
    },
    {
        "lib": "plugProjectKandoU",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["plugProjectKandoU/pikiAnimator", True],
            ["plugProjectKandoU/collinfo", False],
            ["plugProjectKandoU/gameDynamics", False],
            ["plugProjectKandoU/creature", True],
            ["plugProjectKandoU/fakePiki", False],
            ["plugProjectKandoU/navi", False],
            ["plugProjectKandoU/piki", False],
            ["plugProjectKandoU/baseGameSection", False],
            ["plugProjectKandoU/singleGameSection", False],
            ["plugProjectKandoU/cellPyramid", False],
            ["plugProjectKandoU/naviMgr", True],
            ["plugProjectKandoU/pikiMgr", False],
            ["plugProjectKandoU/mapMgr", False],
            ["plugProjectKandoU/baseHIOSection", True],
            ["plugProjectKandoU/naviWhistle", False],
            ["plugProjectKandoU/pelletMgr", False],
            ["plugProjectKandoU/routeMgr", False],
            ["plugProjectKandoU/onyonMgr", True],
            ["plugProjectKandoU/objectTypes", True],
            ["plugProjectKandoU/naviState", False],
            ["plugProjectKandoU/pikiState", False],
            ["plugProjectKandoU/interactPiki", True],
            ["plugProjectKandoU/gameCPlate", False],
            ["plugProjectKandoU/updateMgr", True],
            ["plugProjectKandoU/aiAction", True],
            ["plugProjectKandoU/aiPrimitives", False],
            ["plugProjectKandoU/aiFormation", False],
            ["plugProjectKandoU/creatureStick", True],
            ["plugProjectKandoU/interactBattle", True],
            ["plugProjectKandoU/aiFree", True],
            ["plugProjectKandoU/aiAttack", True],
            ["plugProjectKandoU/aiTransport", True],
            ["plugProjectKandoU/aiEnter", False],
            ["plugProjectKandoU/pathfinder", False],
            ["plugProjectKandoU/pelletState", False],
            ["plugProjectKandoU/dynCreature", False],
            ["plugProjectKandoU/gameGenerator", True],
            ["plugProjectKandoU/genPiki", True],
            ["plugProjectKandoU/genNavi", True],
            ["plugProjectKandoU/genItem", True],
            ["plugProjectKandoU/gameStages", True],
            ["plugProjectKandoU/gameSeaMgr", True],
            ["plugProjectKandoU/pikiAI", True],
            ["plugProjectKandoU/pelletConfig", True],
            ["plugProjectKandoU/gameFootmark", True],
            ["plugProjectKandoU/gameSystem", True],
            ["plugProjectKandoU/aiConstants", True],
            ["plugProjectKandoU/gameMapParts", False],
            ["plugProjectKandoU/vsGameSection", True],
            ["plugProjectKandoU/gamePlatMgr", True],
            ["plugProjectKandoU/itemGate", False],
            ["plugProjectKandoU/itemMgr", False],
            ["plugProjectKandoU/aiBreakGate", False],
            ["plugProjectKandoU/gameStat", True],
            ["plugProjectKandoU/itemHole", False],
            ["plugProjectKandoU/itemHoney", False],
            ["plugProjectKandoU/gameCaveInfo", False],
            ["plugProjectKandoU/creatureLOD", False],
            ["plugProjectKandoU/interactNavi", True],
            ["plugProjectKandoU/itemPikihead", False],
            ["plugProjectKandoU/itemPlant", False],
            ["plugProjectKandoU/itemRock", False],
            ["plugProjectKandoU/aiBreakRock", True],
            ["plugProjectKandoU/aiCrop", True],
            ["plugProjectKandoU/registItem", True],
            ["plugProjectKandoU/gamePlayData", False],
            ["plugProjectKandoU/itemCave", False],
            ["plugProjectKandoU/itemBigFountain", False],
            ["plugProjectKandoU/itemBridge", False],
            ["plugProjectKandoU/pikiContainer", True],
            ["plugProjectKandoU/gameGeneratorCache", False],
            ["plugProjectKandoU/itemTreasure", True],
            ["plugProjectKandoU/itemDownFloor", False],
            ["plugProjectKandoU/kandoLib", True],
            ["plugProjectKandoU/itemBarrel", True],
            ["plugProjectKandoU/pelletNumber", True],
            ["plugProjectKandoU/pelletCarcass", True],
            ["plugProjectKandoU/pelletFruit", True],
            ["plugProjectKandoU/pelletOtakara", True],
            ["plugProjectKandoU/genPellet", True],
            ["plugProjectKandoU/pelletItem", True],
            ["plugProjectKandoU/mapMgrTraceMove", False],
            ["plugProjectKandoU/efxModelObjects", True],
            ["plugProjectKandoU/itemUjamushi", False],
            ["plugProjectKandoU/aiWeed", True],
            ["plugProjectKandoU/flockMgr", False],
            ["plugProjectKandoU/itemWeed", False],
            ["plugProjectKandoU/aiBridge", True],
            ["plugProjectKandoU/aiTeki", True],
            ["plugProjectKandoU/singleGS_MainGame", False],
            ["plugProjectKandoU/singleGS_CaveGame", False],
            ["plugProjectKandoU/singleGS_MainResult", False],
            ["plugProjectKandoU/singleGS_CaveResult", False],
            ["plugProjectKandoU/singleGS_WorldMap", True],
            ["plugProjectKandoU/singleGS_FileSelect", True],
            ["plugProjectKandoU/gamePlayDataMemCard", False],
            ["plugProjectKandoU/baseHIOparms", True],
            ["plugProjectKandoU/radarInfo", True],
            ["plugProjectKandoU/singleGS_Movie", True],
            ["plugProjectKandoU/navi_demoCheck", False],
            ["plugProjectKandoU/singleGS_Zukan", False],
            ["plugProjectKandoU/gameResultTexMgr", True],
            ["plugProjectKandoU/gamePelletList", True],
            ["plugProjectKandoU/vsGS_Title", True],
            ["plugProjectKandoU/vsGS_Game", True],
            ["plugProjectKandoU/vsGS_Result", True],
            ["plugProjectKandoU/vsGS_Load", True],
            ["plugProjectKandoU/vsStageData", True],
            ["plugProjectKandoU/cellMgrParms", True],
            ["plugProjectKandoU/cellIterator", False],
            ["plugProjectKandoU/vsGS_VSGame", True],
            ["plugProjectKandoU/gameSoundEvent", True],
            ["plugProjectKandoU/aiBattle", True],
            ["plugProjectKandoU/gameDeathCount", True],
            ["plugProjectKandoU/aiBore", True],
            ["plugProjectKandoU/mapPartsView", True],
            ["plugProjectKandoU/singleGS_Ending", True],
            ["plugProjectKandoU/gameIconTexture", True],
            ["plugProjectKandoU/gameTekiStat", True],
            ["plugProjectKandoU/gameHighscore", True],
            ["plugProjectKandoU/gamePlayCommonData", True],
            ["plugProjectKandoU/pelletCarry", True],
            ["plugProjectKandoU/gameChallenge2D", True],
            ["plugProjectKandoU/vsTekiMgr", True],
            ["plugProjectKandoU/vsCardMgr", False],
            ["plugProjectKandoU/aiRescue", True],
            ["plugProjectKandoU/baseGameSectionDraw", True],
            ["plugProjectKandoU/singleGS_Load", True],
            ["plugProjectKandoU/singleGS_DayEnd", False],
            ["plugProjectKandoU/baseGameSectionKantei", False],
            ["plugProjectKandoU/sweepPrune", True],
            ["plugProjectKandoU/texCaster", False],
            ["plugProjectKandoU/vsCoinOtakaraName", True],
            ["plugProjectKandoU/pelletBirthBuffer", True],
            ["plugProjectKandoU/vsFifo", True],
        ],
    },
    {
        "lib": "plugProjectNishimuraU",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["plugProjectNishimuraU/nslibmath", False],
            ["plugProjectNishimuraU/ShadowCylinder", False],
            ["plugProjectNishimuraU/playCamera", False],
            ["plugProjectNishimuraU/shadowMgr", True],
            ["plugProjectNishimuraU/MapUnit", True],
            ["plugProjectNishimuraU/MapNode", True],
            ["plugProjectNishimuraU/EnemyUnit", True],
            ["plugProjectNishimuraU/RandMapMgr", False],
            ["plugProjectNishimuraU/RandMapDraw", True],
            ["plugProjectNishimuraU/RandMapChecker", True],
            ["plugProjectNishimuraU/RandMapUnit", False],
            ["plugProjectNishimuraU/RandEnemyUnit", False],
            ["plugProjectNishimuraU/DoorNode", True],
            ["plugProjectNishimuraU/MapUnitGenerator", True],
            ["plugProjectNishimuraU/MapCreator", True],
            ["plugProjectNishimuraU/RandMapScore", False],
            ["plugProjectNishimuraU/ItemUnit", True],
            ["plugProjectNishimuraU/RandItemUnit", True],
            ["plugProjectNishimuraU/GateUnit", True],
            ["plugProjectNishimuraU/RandGateUnit", True],
            ["plugProjectNishimuraU/ObjectLayout", True],
            ["plugProjectNishimuraU/CameraMgr", True],
            ["plugProjectNishimuraU/ContRumble", False],
            ["plugProjectNishimuraU/RumbleMgr", True],
            ["plugProjectNishimuraU/PomAnimator", True],
            ["plugProjectNishimuraU/PomMgr", True],
            ["plugProjectNishimuraU/Pom", True],
            ["plugProjectNishimuraU/PomState", True],
            ["plugProjectNishimuraU/FrogState", False],
            ["plugProjectNishimuraU/FrogAnimator", True],
            ["plugProjectNishimuraU/FrogMgr", True],
            ["plugProjectNishimuraU/Frog", True],
            ["plugProjectNishimuraU/UjibMgr", True],
            ["plugProjectNishimuraU/Ujib", False],
            ["plugProjectNishimuraU/UjibState", False],
            ["plugProjectNishimuraU/UjibAnimator", True],
            ["plugProjectNishimuraU/KoganeState", True],
            ["plugProjectNishimuraU/KoganeMgr", True],
            ["plugProjectNishimuraU/Kogane", False],
            ["plugProjectNishimuraU/KoganeAnimator", True],
            ["plugProjectNishimuraU/QurioneState", True],
            ["plugProjectNishimuraU/QurioneMgr", True],
            ["plugProjectNishimuraU/Qurione", True],
            ["plugProjectNishimuraU/QurioneAnimator", True],
            ["plugProjectNishimuraU/RumbleData", True],
            ["plugProjectNishimuraU/MaroFrogMgr", True],
            ["plugProjectNishimuraU/MaroFrog", True],
            ["plugProjectNishimuraU/RockState", True],
            ["plugProjectNishimuraU/RockAnimator", True],
            ["plugProjectNishimuraU/RockMgr", True],
            ["plugProjectNishimuraU/Rock", False],
            ["plugProjectNishimuraU/UjiaState", False],
            ["plugProjectNishimuraU/UjiaAnimator", True],
            ["plugProjectNishimuraU/UjiaMgr", True],
            ["plugProjectNishimuraU/Ujia", False],
            ["plugProjectNishimuraU/TobiState", False],
            ["plugProjectNishimuraU/TobiAnimator", True],
            ["plugProjectNishimuraU/TobiMgr", True],
            ["plugProjectNishimuraU/Tobi", False],
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
            ["plugProjectNishimuraU/ElecHiba", False],
            ["plugProjectNishimuraU/SaraiState", False],
            ["plugProjectNishimuraU/SaraiAnimator", True],
            ["plugProjectNishimuraU/SaraiMgr", True],
            ["plugProjectNishimuraU/Sarai", True],
            ["plugProjectNishimuraU/TankState", False],
            ["plugProjectNishimuraU/TankAnimator", True],
            ["plugProjectNishimuraU/TankMgr", True],
            ["plugProjectNishimuraU/Tank", True],
            ["plugProjectNishimuraU/CatfishMgr", True],
            ["plugProjectNishimuraU/Catfish", True],
            ["plugProjectNishimuraU/TadpoleState", True],
            ["plugProjectNishimuraU/TadpoleAnimator", True],
            ["plugProjectNishimuraU/TadpoleMgr", True],
            ["plugProjectNishimuraU/Tadpole", True],
            ["plugProjectNishimuraU/ElecBugState", False],
            ["plugProjectNishimuraU/ElecBugAnimator", True],
            ["plugProjectNishimuraU/ElecBugMgr", True],
            ["plugProjectNishimuraU/ElecBug", False],
            ["plugProjectNishimuraU/WtankMgr", True],
            ["plugProjectNishimuraU/Wtank", True],
            ["plugProjectNishimuraU/ArmorMgr", True],
            ["plugProjectNishimuraU/Armor", False],
            ["plugProjectNishimuraU/Mar", False],
            ["plugProjectNishimuraU/MarAnimator", True],
            ["plugProjectNishimuraU/MarMgr", True],
            ["plugProjectNishimuraU/MarState", False],
            ["plugProjectNishimuraU/WealthyMgr", True],
            ["plugProjectNishimuraU/Wealthy", True],
            ["plugProjectNishimuraU/FartMgr", True],
            ["plugProjectNishimuraU/Fart", True],
            ["plugProjectNishimuraU/ArmorState", False],
            ["plugProjectNishimuraU/ArmorAnimator", True],
            ["plugProjectNishimuraU/QueenState", False],
            ["plugProjectNishimuraU/QueenAnimator", True],
            ["plugProjectNishimuraU/QueenMgr", True],
            ["plugProjectNishimuraU/Queen", False],
            ["plugProjectNishimuraU/BabyState", False],
            ["plugProjectNishimuraU/BabyAnimator", True],
            ["plugProjectNishimuraU/BabyMgr", True],
            ["plugProjectNishimuraU/Baby", True],
            ["plugProjectNishimuraU/DemonMgr", True],
            ["plugProjectNishimuraU/Demon", True],
            ["plugProjectNishimuraU/QueenShadow", True],
            ["plugProjectNishimuraU/FireChappyMgr", True],
            ["plugProjectNishimuraU/FireChappy", True],
            ["plugProjectNishimuraU/SnakeCrowState", False],
            ["plugProjectNishimuraU/SnakeCrowAnimator", True],
            ["plugProjectNishimuraU/SnakeCrowMgr", True],
            ["plugProjectNishimuraU/SnakeCrow", False],
            ["plugProjectNishimuraU/KumaChappyState", False],
            ["plugProjectNishimuraU/KumaChappyAnimator", True],
            ["plugProjectNishimuraU/KumaChappyMgr", True],
            ["plugProjectNishimuraU/KumaChappy", False],
            ["plugProjectNishimuraU/FuefukiState", True],
            ["plugProjectNishimuraU/FuefukiAnimator", True],
            ["plugProjectNishimuraU/FuefukiMgr", True],
            ["plugProjectNishimuraU/Fuefuki", True],
            ["plugProjectNishimuraU/KoganemushiMgr", True],
            ["plugProjectNishimuraU/Koganemushi", True],
            ["plugProjectNishimuraU/FtankMgr", True],
            ["plugProjectNishimuraU/Ftank", True],
            ["plugProjectNishimuraU/RandPlantUnit", True],
            ["plugProjectNishimuraU/HanachirashiState", False],
            ["plugProjectNishimuraU/HanachirashiAnimator", True],
            ["plugProjectNishimuraU/HanachirashiMgr", True],
            ["plugProjectNishimuraU/Hanachirashi", False],
            ["plugProjectNishimuraU/DamagumoState", True],
            ["plugProjectNishimuraU/DamagumoAnimator", True],
            ["plugProjectNishimuraU/DamagumoMgr", True],
            ["plugProjectNishimuraU/Damagumo", True],
            ["plugProjectNishimuraU/IKSystemMgr", True],
            ["plugProjectNishimuraU/IKSystemBase", True],
            ["plugProjectNishimuraU/DamagumoShadow", True],
            ["plugProjectNishimuraU/KurageState", True],
            ["plugProjectNishimuraU/KurageAnimator", True],
            ["plugProjectNishimuraU/KurageMgr", True],
            ["plugProjectNishimuraU/Kurage", True],
            ["plugProjectNishimuraU/BombSaraiState", False],
            ["plugProjectNishimuraU/BombSaraiAnimator", True],
            ["plugProjectNishimuraU/BombSaraiMgr", True],
            ["plugProjectNishimuraU/BombSarai", True],
            ["plugProjectNishimuraU/OtakaraBaseState", True],
            ["plugProjectNishimuraU/OtakaraBaseAnimator", True],
            ["plugProjectNishimuraU/OtakaraBaseMgr", True],
            ["plugProjectNishimuraU/OtakaraBase", True],
            ["plugProjectNishimuraU/FireOtakaraMgr", True],
            ["plugProjectNishimuraU/FireOtakara", True],
            ["plugProjectNishimuraU/WaterOtakaraMgr", True],
            ["plugProjectNishimuraU/WaterOtakara", True],
            ["plugProjectNishimuraU/GasOtakaraMgr", True],
            ["plugProjectNishimuraU/GasOtakara", True],
            ["plugProjectNishimuraU/ElecOtakaraMgr", True],
            ["plugProjectNishimuraU/ElecOtakara", True],
            ["plugProjectNishimuraU/ImomushiState", False],
            ["plugProjectNishimuraU/ImomushiAnimator", True],
            ["plugProjectNishimuraU/ImomushiMgr", True],
            ["plugProjectNishimuraU/Imomushi", False],
            ["plugProjectNishimuraU/HoudaiState", True],
            ["plugProjectNishimuraU/HoudaiAnimator", True],
            ["plugProjectNishimuraU/HoudaiMgr", True],
            ["plugProjectNishimuraU/HoudaiShadow", True],
            ["plugProjectNishimuraU/Houdai", True],
            ["plugProjectNishimuraU/HoudaiShotGun", False],
            ["plugProjectNishimuraU/LeafChappyMgr", True],
            ["plugProjectNishimuraU/LeafChappy", True],
            ["plugProjectNishimuraU/BigFootState", True],
            ["plugProjectNishimuraU/BigFootAnimator", True],
            ["plugProjectNishimuraU/BigFootMgr", True],
            ["plugProjectNishimuraU/BigFootShadow", True],
            ["plugProjectNishimuraU/BigFoot", True],
            ["plugProjectNishimuraU/SnakeWholeState", True],
            ["plugProjectNishimuraU/SnakeWholeAnimator", True],
            ["plugProjectNishimuraU/SnakeWholeMgr", True],
            ["plugProjectNishimuraU/SnakeWhole", False],
            ["plugProjectNishimuraU/SnakeJointMgr", False],
            ["plugProjectNishimuraU/OniKurageState", True],
            ["plugProjectNishimuraU/OniKurageAnimator", True],
            ["plugProjectNishimuraU/OniKurageMgr", True],
            ["plugProjectNishimuraU/OniKurage", False],
            ["plugProjectNishimuraU/BigTreasureState", True],
            ["plugProjectNishimuraU/BigTreasureMgr", True],
            ["plugProjectNishimuraU/BigTreasureShadow", False],
            ["plugProjectNishimuraU/BigTreasure", True],
            ["plugProjectNishimuraU/KabutoState", False],
            ["plugProjectNishimuraU/KabutoAnimator", True],
            ["plugProjectNishimuraU/KabutoMgr", True],
            ["plugProjectNishimuraU/Kabuto", False],
            ["plugProjectNishimuraU/KumaKochappyState", False],
            ["plugProjectNishimuraU/KumaKochappyAnimator", True],
            ["plugProjectNishimuraU/KumaKochappyMgr", True],
            ["plugProjectNishimuraU/KumaKochappy", True],
            ["plugProjectNishimuraU/MiniHoudaiState", False],
            ["plugProjectNishimuraU/MiniHoudaiAnimator", True],
            ["plugProjectNishimuraU/MiniHoudaiMgr", True],
            ["plugProjectNishimuraU/MiniHoudai", False],
            ["plugProjectNishimuraU/MiniHoudaiShotGun", False],
            ["plugProjectNishimuraU/SokkuriState", True],
            ["plugProjectNishimuraU/SokkuriAnimator", True],
            ["plugProjectNishimuraU/SokkuriMgr", True],
            ["plugProjectNishimuraU/Sokkuri", True],
            ["plugProjectNishimuraU/JointShadowBase", False],
            ["plugProjectNishimuraU/UmimushiShadow", False],
            ["plugProjectNishimuraU/HanaMgr", True],
            ["plugProjectNishimuraU/Hana", True],
            ["plugProjectNishimuraU/BigTreasureAttack", False],
            ["plugProjectNishimuraU/SnakeCrowShadow", False],
            ["plugProjectNishimuraU/SnakeWholeShadow", False],
            ["plugProjectNishimuraU/BombOtakaraMgr", True],
            ["plugProjectNishimuraU/BombOtakara", True],
            ["plugProjectNishimuraU/DangoMushiState", False],
            ["plugProjectNishimuraU/DangoMushiMgr", True],
            ["plugProjectNishimuraU/DangoMushi", False],
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
            ["plugProjectNishimuraU/TyreShadow", False],
        ],
    },
    {
        "lib": "plugProjectOgawaU",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["plugProjectOgawaU/ogScreen", True],
            ["plugProjectOgawaU/ogDopingScreen", True],
            ["plugProjectOgawaU/ogPikminCounter", True],
            ["plugProjectOgawaU/ogAnime", True],
            ["plugProjectOgawaU/ogCounter", True],
            ["plugProjectOgawaU/ogLifeGauge", True],
            ["plugProjectOgawaU/ogSunMeter", True],
            ["plugProjectOgawaU/ogCatchPiki", True],
            ["plugProjectOgawaU/ogContenaCounter", True],
            ["plugProjectOgawaU/ogMapCounter", True],
            ["plugProjectOgawaU/ogAnimTextScreen", True],
            ["plugProjectOgawaU/ogCallBackMessage", True],
            ["plugProjectOgawaU/ogMenuMgr", False],
            ["plugProjectOgawaU/ogCallBackScreen", True],
            ["plugProjectOgawaU/ogCounterRV", False],
            ["plugProjectOgawaU/ogSE", True],
            ["plugProjectOgawaU/ogCounterDay", True],
            ["plugProjectOgawaU/testScene", True],
            ["plugProjectOgawaU/testObj", True],
            ["plugProjectOgawaU/ogSceneGround", True],
            ["plugProjectOgawaU/ogObjGround", True],
            ["plugProjectOgawaU/ogCopyPane", False],
            ["plugProjectOgawaU/ogBloGroup", True],
            ["plugProjectOgawaU/DispMemberBase", True],
            ["plugProjectOgawaU/ogLib2D", True],
            ["plugProjectOgawaU/ogObjSMenuMap", False],
            ["plugProjectOgawaU/ogSceneSMenuMap", True],
            ["plugProjectOgawaU/ogObjSMenuItem", False],
            ["plugProjectOgawaU/ogSceneSMenuItem", True],
            ["plugProjectOgawaU/ogSceneSMenuPause", True],
            ["plugProjectOgawaU/ogObjSMenuPause", True],
            ["plugProjectOgawaU/ogObjSMenuBase", True],
            ["plugProjectOgawaU/ogObjCourseName", True],
            ["plugProjectOgawaU/ogUtil", True],
            ["plugProjectOgawaU/ogSceneCourseName", True],
            ["plugProjectOgawaU/ogObjKantei", True],
            ["plugProjectOgawaU/ogSceneKantei", True],
            ["plugProjectOgawaU/ogObjSpecialItem", True],
            ["plugProjectOgawaU/ogSceneSpecialItem", True],
            ["plugProjectOgawaU/ogObjFloor", True],
            ["plugProjectOgawaU/ogSceneFloor", True],
            ["plugProjectOgawaU/ogObjCave", True],
            ["plugProjectOgawaU/ogSceneCave", True],
            ["plugProjectOgawaU/ogObjAnaDemo", True],
            ["plugProjectOgawaU/ogSceneAnaDemo", True],
            ["plugProjectOgawaU/ogObjChallenge2P", True],
            ["plugProjectOgawaU/ogSceneChallenge2P", True],
            ["plugProjectOgawaU/ogObjContena", False],
            ["plugProjectOgawaU/ogSceneContena", True],
            ["plugProjectOgawaU/ogObjSMenuPauseDoukutu", True],
            ["plugProjectOgawaU/ogSceneSMenuPauseDoukutu", True],
            ["plugProjectOgawaU/ogObjUfo", True],
            ["plugProjectOgawaU/ogSceneUfo", True],
            ["plugProjectOgawaU/ogObjSave", True],
            ["plugProjectOgawaU/ogSceneSave", True],
            ["plugProjectOgawaU/ogObjFinalMsg", True],
            ["plugProjectOgawaU/ogSceneFinalMsg", True],
            ["plugProjectOgawaU/ogObjVs", False],
            ["plugProjectOgawaU/ogSceneVs", True],
            ["plugProjectOgawaU/ogObjChallenge1P", True],
            ["plugProjectOgawaU/ogSceneChallenge1P", True],
            ["plugProjectOgawaU/ogScaleMgr", True],
            ["plugProjectOgawaU/ogObjSMenuPauseVs", True],
            ["plugProjectOgawaU/ogSceneSMenuPauseVs", True],
            ["plugProjectOgawaU/ogFuriko", False],
            ["plugProjectOgawaU/ogCounterSlot", False],
            ["plugProjectOgawaU/ogObjWorldMapInfoWindow0", True],
            ["plugProjectOgawaU/ogSceneWorldMapInfoWindow0", True],
            ["plugProjectOgawaU/ogObjWorldMapInfoWindow1", True],
            ["plugProjectOgawaU/ogSceneWorldMapInfoWindow1", True],
            ["plugProjectOgawaU/ogTotalPokoScreen", True],
            ["plugProjectOgawaU/ogObjChallengeBase", True],
            ["plugProjectOgawaU/ogSceneChallengeBase", True],
            ["plugProjectOgawaU/ogCallBackPicture", True],
            ["plugProjectOgawaU/ogDrawAfter", True],
            ["plugProjectOgawaU/ogOtakaraSensor", True],
            ["plugProjectOgawaU/ogTitleMsg", False],
            ["plugProjectOgawaU/ogAngleMgr", True],
            ["plugProjectOgawaU/ogSceneSMenuCont", True],
            ["plugProjectOgawaU/ogObjSMenuCont", True],
        ],
    },
    {
        "lib": "plugProjectHikinoU",
        "cflags": "$cflags_pikmin -sym on",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["plugProjectHikinoU/PSSeq", False],
            ["plugProjectHikinoU/PSGame", False],
            ["plugProjectHikinoU/PSSystemIF", False],
            ["plugProjectHikinoU/PSAutoBgm", False],
            ["plugProjectHikinoU/PSBnkMgr", False],
            ["plugProjectHikinoU/PSTaskBase", True],
            ["plugProjectHikinoU/PSBgmTask", True],
            ["plugProjectHikinoU/PSCreatureMgr", True],
            ["plugProjectHikinoU/PSAutoBgm_MeloArranger", True],
            ["plugProjectHikinoU/PSSe", False],
            ["plugProjectHikinoU/PSSeBase", True],
            ["plugProjectHikinoU/PSScene", True],
            ["plugProjectHikinoU/PSBgmTrack", True],
            ["plugProjectHikinoU/PSDirector", False],
        ],
    },
    {
        "lib": "plugProjectMorimuraU",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["plugProjectMorimuraU/dayEndCount", False],
            ["plugProjectMorimuraU/hurryUp2D", False],
            ["plugProjectMorimuraU/gameOver2D", True],
            ["plugProjectMorimuraU/testBase", True],
            ["plugProjectMorimuraU/bombState", True],
            ["plugProjectMorimuraU/bombAnimator", True],
            ["plugProjectMorimuraU/bombMgr", True],
            ["plugProjectMorimuraU/bomb", True],
            ["plugProjectMorimuraU/eggState", True],
            ["plugProjectMorimuraU/eggAnimator", True],
            ["plugProjectMorimuraU/eggMgr", True],
            ["plugProjectMorimuraU/egg", True],
            ["plugProjectMorimuraU/panModokiState", False],
            ["plugProjectMorimuraU/panModokiAnimator", True],
            ["plugProjectMorimuraU/panModokiMgr", True],
            ["plugProjectMorimuraU/panModoki", False],
            ["plugProjectMorimuraU/plantsMgr", True],
            ["plugProjectMorimuraU/plantsAnimator", True],
            ["plugProjectMorimuraU/plants", True],
            ["plugProjectMorimuraU/kingChappyState", False],
            ["plugProjectMorimuraU/kingChappyMgr", True],
            ["plugProjectMorimuraU/kingChappy", False],
            ["plugProjectMorimuraU/miulinState", True],
            ["plugProjectMorimuraU/miulinAnimator", True],
            ["plugProjectMorimuraU/miulinMgr", True],
            ["plugProjectMorimuraU/miulin", False],
            ["plugProjectMorimuraU/jigumoState", True],
            ["plugProjectMorimuraU/jigumoAnimator", True],
            ["plugProjectMorimuraU/jigumoMgr", True],
            ["plugProjectMorimuraU/jigumo", False],
            ["plugProjectMorimuraU/enemyNestMgr", True],
            ["plugProjectMorimuraU/enemyNest", True],
            ["plugProjectMorimuraU/tamagoMushiState", True],
            ["plugProjectMorimuraU/tamagoMushiAnimator", True],
            ["plugProjectMorimuraU/tamagoMushiMgr", True],
            ["plugProjectMorimuraU/tamagoMushi", False],
            ["plugProjectMorimuraU/zukan2D", False],
            ["plugProjectMorimuraU/hiScore2D", False],
            ["plugProjectMorimuraU/umiMushiState", True],
            ["plugProjectMorimuraU/umiMushiAnimator", True],
            ["plugProjectMorimuraU/umiMushiMgr", True],
            ["plugProjectMorimuraU/umiMushi", False],
            ["plugProjectMorimuraU/shijimiChouState", True],
            ["plugProjectMorimuraU/shijimiChouAnimator", True],
            ["plugProjectMorimuraU/shijimiChouMgr", True],
            ["plugProjectMorimuraU/shijimiChou", False],
            ["plugProjectMorimuraU/challengeSelect2D", False],
            ["plugProjectMorimuraU/challengeResult2D", False],
            ["plugProjectMorimuraU/vsSelect2D", False],
            ["plugProjectMorimuraU/mrUtil", True],
            ["plugProjectMorimuraU/scrollList", False],
            ["plugProjectMorimuraU/mrWindow", True],
            ["plugProjectMorimuraU/blackManState", True],
            ["plugProjectMorimuraU/blackManAnimator", True],
            ["plugProjectMorimuraU/blackManMgr", True],
            ["plugProjectMorimuraU/blackMan", False],
            ["plugProjectMorimuraU/tyreState", True],
            ["plugProjectMorimuraU/tyreAnimator", True],
            ["plugProjectMorimuraU/tyreMgr", True],
            ["plugProjectMorimuraU/tyre", False],
        ],
    },
    {
        "lib": "plugProjectEbisawaU",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["plugProjectEbisawaU/efxBase", False],
            ["plugProjectEbisawaU/efxEnemy", False],
            ["plugProjectEbisawaU/efxObject", False],
            ["plugProjectEbisawaU/efxPikmin", False],
            ["plugProjectEbisawaU/particle2dMgr", False],
            ["plugProjectEbisawaU/efx2dBase", True],
            ["plugProjectEbisawaU/efx2dEffect", False],
            ["plugProjectEbisawaU/particleMgr", False],
            ["plugProjectEbisawaU/ebiP2Title", False],
            ["plugProjectEbisawaU/ebiP2TitleUnit", True],
            ["plugProjectEbisawaU/ebiUtility", True],
            ["plugProjectEbisawaU/ebiP2TitleCamera", True],
            ["plugProjectEbisawaU/ebiP2TitleLight", True],
            ["plugProjectEbisawaU/ebiScreenMemoryCard", False],
            ["plugProjectEbisawaU/efxTPkEffectMgr", True],
            ["plugProjectEbisawaU/efxEnemyGeneral", True],
            ["plugProjectEbisawaU/ebi3DGraph", True],
            ["plugProjectEbisawaU/ebiGeometry", True],
            ["plugProjectEbisawaU/ebi2DGraph", False],
            ["plugProjectEbisawaU/ebiScreenOption", True],
            ["plugProjectEbisawaU/ebiScreenProgre", True],
            ["plugProjectEbisawaU/ebiOptionMgr", True],
            ["plugProjectEbisawaU/ebi2DCallBack", False],
            ["plugProjectEbisawaU/ebiCardMgr", True],
            ["plugProjectEbisawaU/ebiScreenFramework", True],
            ["plugProjectEbisawaU/ebiScreenPushStart", True],
            ["plugProjectEbisawaU/ebiScreenFileSelect", False, {"cflags": "$cflags_pikmin -sym on"}],
            ["plugProjectEbisawaU/ebiScreenTitleMenu", True],
            ["plugProjectEbisawaU/ebiSaveMgr", True],
            ["plugProjectEbisawaU/ebiScreenSaveMenu", False],
            ["plugProjectEbisawaU/ebiScreenFileSelect_Mgr", False, {"cflags": "$cflags_pikmin -sym on"}],
            ["plugProjectEbisawaU/ebiFileSelectMgr", True, {"cflags": "$cflags_pikmin"}],
            ["plugProjectEbisawaU/ebiCardMgr_Load", True],
            ["plugProjectEbisawaU/ebiP2TitleCoordMgr", True],
            ["plugProjectEbisawaU/ebiP2TitlePikmin", False, {"cflags": "$cflags_pikmin -sym on"}],
            ["plugProjectEbisawaU/ebiP2TitleKogane", True, {"cflags": "$cflags_pikmin -sym on"}],
            ["plugProjectEbisawaU/ebiP2TitleChappy", True, {"cflags": "$cflags_pikmin -sym on"}],
            ["plugProjectEbisawaU/ebiScreenTMBack", True, {"cflags": "$cflags_pikmin -sym on"}],
            ["plugProjectEbisawaU/ebiMainTitleMgr", False, {"cflags": "$cflags_pikmin -sym on"}],
            ["plugProjectEbisawaU/ebiP2TitleFog", True],
            ["plugProjectEbisawaU/efxEnemyBoss", False, {"cflags": "$cflags_pikmin -sym on"}],
            ["plugProjectEbisawaU/ebiCardEReader", True],
            ["plugProjectEbisawaU/ebiScreenOmake", False, {"cflags": "$cflags_pikmin -sym on"}],
            ["plugProjectEbisawaU/ebiOmakeMgr", False, {"cflags": "$cflags_pikmin -sym on"}],
            ["plugProjectEbisawaU/ebiScreenOmakeCardE", False, {"cflags": "$cflags_pikmin -sym on"}],
            ["plugProjectEbisawaU/ebiScreenOmakeGame", True, {"cflags": "$cflags_pikmin -sym on"}],
            ["plugProjectEbisawaU/ebiScreenInfoWindow", True, {"cflags": "$cflags_pikmin -sym on"}],
        ],
    },
    {
        "lib": "plugProjectKonoU",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["plugProjectKonoU/khWorldMap", False],
            ["plugProjectKonoU/khCaveResult", False],
            ["plugProjectKonoU/khSceneLoader", True],
            ["plugProjectKonoU/newGame2DMgr", True],
            ["plugProjectKonoU/newScreenMgr", True],
            ["plugProjectKonoU/khReadyGo", True],
            ["plugProjectKonoU/khFinalFloor", True],
            ["plugProjectKonoU/khDayEndResult", False],
            ["plugProjectKonoU/khUtil", True],
            ["plugProjectKonoU/khFinalResult", False],
            ["plugProjectKonoU/khPayDept", True],
            ["plugProjectKonoU/khWinLose", True],
            ["plugProjectKonoU/khWinLoseReason", True],
            ["plugProjectKonoU/khMailSaveData", True],
        ],
    },
    {
        "lib": "sysBootupU",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["sysBootupU/sysBootup", True],
        ],
    },
    {
        "lib": "sysCommonU",
        "cflags": "$cflags_pikmin",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["sysCommonU/node", True],
            ["sysCommonU/sysMath", False],
            ["sysCommonU/id32", True],
            ["sysCommonU/parameters", True],
            ["sysCommonU/stream", True],
            ["sysCommonU/geometry", False],
            ["sysCommonU/mapCollision", True],
            ["sysCommonU/camera", False],
            ["sysCommonU/tagparams", True],
            ["sysCommonU/sysTemplates", True],
            ["sysCommonU/mapCode", True],
            ["sysCommonU/geomIntersection", False],
            ["sysCommonU/geomOBBTree", False],
            ["sysCommonU/geomTraceMove", False],
            ["sysCommonU/geomCylinder", False],
            ["sysCommonU/geomClone", True],
        ],
    },
    {
        "lib": "sysGCU",
        "cflags": "$cflags_pikmin -lang=c++",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["sysGCU/system", False],
            ["sysGCU/section", False],
            ["sysGCU/gameflow", True],
            ["sysGCU/menuSection", True],
            ["sysGCU/dvdThread", True],
            ["sysGCU/appThread", True],
            ["sysGCU/controller", True],
            ["sysGCU/graphics", False],
            ["sysGCU/matMath", False],
            ["sysGCU/sysShape", False],
            ["sysGCU/reset", True],
            ["sysGCU/dvdStatus", True],
            ["sysGCU/sysTimers", True],
            ["sysGCU/modelMgr", True],
            ["sysGCU/heapStatus", False],
            ["sysGCU/light", True],
            ["sysGCU/wipe", True],
            ["sysGCU/moviePlayer", False],
            ["sysGCU/JSTObjectActor", False],
            ["sysGCU/JSTObjectCamera", False],
            ["sysGCU/JSTObjectGameActor", False],
            ["sysGCU/JSTObjectSystem", False],
            ["sysGCU/JSTFindCreature", True],
            ["sysGCU/movieConfig", True],
            ["sysGCU/gameConfig", True],
            ["sysGCU/fogMgr", True],
            ["sysGCU/aramMgr", False],
            ["sysGCU/resourceMgr", False],
            ["sysGCU/resourceMgr2D", True],
            ["sysGCU/sysMaterialAnim", False],
            ["sysGCU/P2DScreen", False],
            ["sysGCU/movieMessage", False],
            ["sysGCU/moviePlayerPauseAndDraw", True],
            ["sysGCU/JSTObjectSpecialActor", True],
            ["sysGCU/messageSequence", True],
            ["sysGCU/messageMgr", False],
            ["sysGCU/messageObj", False],
            ["sysGCU/messageRendering", False],
            ["sysGCU/message", True],
            ["sysGCU/modelEffect", True],
            ["sysGCU/messageReference", True],
            ["sysGCU/simpleMessage", True],
            ["sysGCU/sysShapeAnimation", True],
            ["sysGCU/sysShapeModel", False],
            ["sysGCU/windowMessage", False],
            ["sysGCU/memoryCard", False],
            ["sysGCU/pikmin2MemoryCardMgr", False],
            ["sysGCU/commonSaveData", True],
            ["sysGCU/bootSection", False],
            ["sysGCU/titleSection", False],
            ["sysGCU/loadResource", False],
            ["sysGCU/rootMenuSection", True],
            ["sysGCU/demoSection", True],
            ["sysGCU/THPAudioDecode", True],
            ["sysGCU/THPDraw", True],
            ["sysGCU/THPPlayer", True],
            ["sysGCU/THPRead", True],
            ["sysGCU/THPVideoDecode", True],
            ["sysGCU/pikmin2THPPlayer", True],
            ["sysGCU/captionMgr", True],
            ["sysGCU/captionMessage", False],
            ["sysGCU/screenScene", True],
            ["sysGCU/screenMgr", False],
            ["sysGCU/screenObj", True],
            ["sysGCU/JSTObjectParticleActor", False],
            ["sysGCU/moviePlayerAudio", True],
            ["sysGCU/illustratedBookMessage", True],
            ["sysGCU/sysDrawBuffer", True],
            ["sysGCU/dvdErrorMessage", True],
            ["sysGCU/pikmin2AramMgr", True],
            ["sysGCU/messageAnalyzer", True],
        ],
    },
    {
        "lib": "utilityU",
        "cflags": "$cflags_pikmin -sym on",
        "mw_version": "2.6",
        "host": True,
        "objects": [
            ["utilityU/menu", False],
            ["utilityU/PSMainSide_Director", False],
            ["utilityU/PSMainSide_Factory", False],
            ["utilityU/PSMainSide_ObjSound", False],
            ["utilityU/PSMainSide_Demo", False],
            ["utilityU/PSMainSide_Scene", False],
            ["utilityU/PSMainSide_BossMgr", False],
            ["utilityU/PSMainSide_Se", False],
            ["utilityU/PSMainSide_DirectorMgr", False],
            ["utilityU/PSMainSide_Sound", False],
            ["utilityU/PSMainSide_TrackMap", False],
            ["utilityU/PSMainSide_CreaturePrm", False],
            ["utilityU/PSMainSide_ObjCalc", False],
        ],
    },
]


def main():
    import os
    import io
    import sys
    import argparse
    import json

    from pathlib import Path
    from shutil import which
    from tools import ninja_syntax

    if sys.version_info < (3, 8):
        sys.exit("Python 3.8 or later required.")

    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--version",
        "-v",
        dest="version",
        default="usa",
        help="version to build (usa, usa.demo)",
    )
    parser.add_argument(
        "--map",
        "-m",
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
        "--no-static-libs",
        dest="static_libs",
        action="store_false",
        help="don't build and use static libs",
    )
    parser.add_argument(
        "--powerpc",
        dest="powerpc",
        type=Path,
        default=Path("tools/powerpc"),
        help="path to powerpc-eabi tools",
    )
    if os.name != "nt" and not "_NT-" in os.uname().sysname:
        parser.add_argument(
            "--wine",
            dest="wine",
            type=Path,
            help="path to wine (or wibo)",
        )
    parser.add_argument(
        "--build-dtk",
        dest="build_dtk",
        type=Path,
        help="path to decomp-toolkit source",
    )
    parser.add_argument(
        "--debug",
        "-d",
        dest="debug",
        action="store_true",
        help="build with debug info (non-matching)",
    )
    parser.add_argument(
        "--compilers",
        dest="compilers",
        type=Path,
        default=Path("tools/mwcc_compiler"),
        help="path to compilers",
    )
    parser.add_argument(
        "--build-dir",
        dest="build_dir",
        type=Path,
        default=Path("build"),
        help="base build directory",
    )
    parser.add_argument(
        "--context",
        "-c",
        dest="context",
        action="store_true",
        help="generate context files for decomp.me",
    )
    args = parser.parse_args()

    # On Windows, we need this to use && in commands
    chain = "cmd /c " if os.name == "nt" else ""

    out = io.StringIO()
    n = ninja_syntax.Writer(out)

    n.variable("ninja_required_version", "1.3")
    n.newline()

    n.comment("The arguments passed to configure.py, for rerunning it.")
    configure_args = sys.argv[1:]
    n.variable("configure_args", configure_args)
    n.variable("python", f'"{sys.executable}"')
    n.newline()

    ###
    # Variables
    ###
    n.comment("Variables")
    version = args.version.lower()
    if args.version.lower() == "usa":
        version_num = "2"
    elif args.version.lower() == "usa.demo":
        version_num = "1"
    else:
        sys.exit(f'Invalid version "{args.version}"')
    build_path = args.build_dir / f"pikmin2.{version}"

    cflags_base = f"-proc gekko -nodefaults -Cpp_exceptions off -RTTI off -fp hard -fp_contract on -O4,p -maxerrors 1 -enum int -inline auto -str reuse,readonly -nosyspath -use_lmw_stmw on -sdata 8 -sdata2 8 -DVERNUM={version_num} -i include -i include/stl"
    if args.debug:
        cflags_base += " -sym on -D_DEBUG"
    else:
        cflags_base += " -DNDEBUG -w off"
    n.variable("cflags_base", cflags_base)
    n.variable("cflags_pikmin", "$cflags_base -common on")

    asflags = f"-mgekko -I include --defsym version={version_num} -W --strip-local-absolute -gdwarf-2"
    n.variable("asflags", asflags)

    ldflags = "-fp fmadd -nodefaults -lcf ldscript.lcf"
    if args.map:
        map_path = build_path / "pikmin2UP.MAP"
        ldflags += f" -map {map_path} -mapunused"
    if args.debug:
        ldflags += " -g"
    else:
        ldflags += " -w off"
    n.variable("ldflags", ldflags)

    mw_link_version = "2.6"
    n.variable("mw_version", mw_link_version)
    if os.name == "nt":
        exe = ".exe"
        wine = ""
    else:
        if "_NT-" in os.uname().sysname:
            # MSYS2
            wine = ""
        elif args.wine:
            wine = f"{args.wine} "
        elif which("wibo") is not None:
            wine = "wibo "
        else:
            wine = "wine "
        exe = ""
    n.newline()

    ###
    # Tooling
    ###
    tools_path = Path("tools")

    def path(input):
        if input is None:
            return None
        elif isinstance(input, list):
            return list(map(str, input))
        else:
            return [str(input)]

    n.comment("decomp-toolkit")
    if args.build_dtk:
        dtk = tools_path / "release" / f"dtk{exe}"
        n.rule(
            name="cargo",
            command="cargo build --release --manifest-path $in --bin $bin --target-dir $target",
            description="CARGO $bin",
            depfile=path(Path("$target") / "release" / "$bin.d"),
            deps="gcc",
        )
        n.build(
            outputs=path(dtk),
            rule="cargo",
            inputs=path(args.build_dtk / "Cargo.toml"),
            variables={
                "bin": "dtk",
                "target": tools_path,
            },
        )
    else:
        dtk = tools_path / f"dtk{exe}"
        download_dtk = tools_path / "download_dtk.py"
        n.rule(
            name="download_dtk",
            command=f"$python {download_dtk} $in $out",
            description="DOWNLOAD $out",
        )
        n.build(
            outputs=path(dtk),
            rule="download_dtk",
            inputs=path([tools_path / "dtk_version"]),
            implicit=path([download_dtk]),
        )
    n.newline()

    # FIXME: Manual downloads because ninja doesn't play nice with directories,
    # replace with automated system like dtk uses if workaround is found
    if args.powerpc == Path("tools/powerpc") and not Path("tools/powerpc").exists():
        import tools.download_ppc

        tools.download_ppc.main()

    if args.compilers == Path("tools/mwcc_compiler") and not Path("tools/mwcc_compiler").exists():
        import tools.download_mwcc

        tools.download_mwcc.main()

    ###
    # Rules
    ###
    compiler_path = args.compilers / "$mw_version"
    mwcc = compiler_path / "mwcceppc.exe"
    mwld = compiler_path / "mwldeppc.exe"
    gnu_as = args.powerpc / f"powerpc-eabi-as{exe}"

    mwcc_cmd = f"{chain}{wine}{mwcc} $cflags -MMD -c $in -o $basedir"
    if args.context:
        mwcc_cmd += " && $python tools/decompctx.py $cfile -r -q"
    mwld_cmd = f"{wine}{mwld} $ldflags -o $out @$out.rsp"
    as_cmd = (
        f"{chain}{gnu_as} $asflags -o $out $in -MD $out.d"
        + f" && {dtk} elf fixup $out $out"
    )
    ar_cmd = f"{dtk} ar create $out @$out.rsp"

    if os.name != "nt":
        transform_dep = tools_path / "transform-dep.py"
        transform_dep_cmd = f" && $python {transform_dep} $basefile.d $basefile.d"
        mwcc_cmd += transform_dep_cmd

    n.comment("Link ELF file")
    n.rule(
        name="link",
        command=mwld_cmd,
        description="LINK $out",
        rspfile="$out.rsp",
        rspfile_content="$in_newline",
    )
    n.newline()

    n.comment("MWCC build")
    n.rule(
        name="mwcc",
        command=mwcc_cmd,
        description="MWCC $out",
        depfile="$basefile.d",
        deps="gcc",
    )
    n.newline()

    n.comment("Assemble asm")
    n.rule(
        name="as",
        command=as_cmd,
        description="AS $out",
        depfile="$out.d",
        deps="gcc",
    )
    n.newline()

    n.comment("Create static library")
    n.rule(
        name="ar",
        command=ar_cmd,
        description="AR $out",
        rspfile="$out.rsp",
        rspfile_content="$in_newline",
    )
    n.newline()

    n.comment("Host build")
    n.variable("host_cflags", "-I include -Wno-trigraphs")
    n.variable(
        "host_cppflags",
        "-std=c++98 -I include -fno-exceptions -fno-rtti -D_CRT_SECURE_NO_WARNINGS -Wno-trigraphs -Wno-c++11-extensions",
    )
    n.rule(
        name="host_cc",
        command="clang $host_cflags -c -o $out $in",
        description="CC $out",
    )
    n.rule(
        name="host_cpp",
        command="clang++ $host_cppflags -c -o $out $in",
        description="CXX $out",
    )
    n.newline()

    ###
    # Rules for source files
    ###
    n.comment("Source files")
    src_path = Path("src")
    asm_path = Path("asm")
    build_src_path = build_path / "src"
    build_host_path = build_path / "host"
    build_asm_path = build_path / "asm"
    build_lib_path = build_path / "lib"

    objdiff_config = {
        "min_version": "0.4.3",
        "custom_make": "ninja",
        "build_target": True,
        "watch_patterns": [
            "*.c",
            "*.cp",
            "*.cpp",
            "*.h",
            "*.hpp",
            "*.py",
        ],
        "units": [],
    }

    source_inputs = []
    host_source_inputs = []
    link_inputs = []
    used_compiler_versions = set()
    for lib in LIBS:
        inputs = []
        if "lib" in lib:
            lib_name = lib["lib"]
            n.comment(f"{lib_name}.a")
        else:
            n.comment("Loose files")

        for object in lib["objects"]:
            completed = False
            options = {
                "add_to_all": True,
                "mw_version": None,
                "cflags": None,
            }
            if type(object) is list:
                if len(object) > 1:
                    completed = object[1]
                if len(object) > 2:
                    options.update(object[2])
                object = object[0]

            cflags = options["cflags"] or lib["cflags"]
            mw_version = options["mw_version"] or lib["mw_version"]
            used_compiler_versions.add(mw_version)

            # objdiff config
            unit_config = {
                "name": object,
                "complete": completed,
            }

            c_file = None
            if os.path.exists(src_path / f"{object}.cpp"):
                c_file = src_path / f"{object}.cpp"
            elif os.path.exists(src_path / f"{object}.cp"):
                c_file = src_path / f"{object}.cp"
            elif os.path.exists(src_path / f"{object}.c"):
                c_file = src_path / f"{object}.c"
            elif os.path.exists(src_path / f"{object}.C"):
                c_file = src_path / f"{object}.C"
            elif os.path.exists(src_path / f"{object}.s"): # specifically for __exception.s
                n.build(
                    outputs=path(build_src_path / f"{object}.o"),
                    rule="as",
                    inputs=path(src_path / f"{object}.s"),
                    implicit=path(dtk),
                )
            if c_file is not None:
                n.build(
                    outputs=path(build_src_path / f"{object}.o"),
                    rule="mwcc",
                    inputs=path(c_file),
                    variables={
                        "mw_version": mw_version,
                        "cflags": options["cflags"] or lib["cflags"],
                        "basedir": os.path.dirname(build_src_path / f"{object}"),
                        "basefile": path(build_src_path / f"{object}"),
                        "cfile": path(c_file),
                    },
                    implicit_outputs = None if not args.context else (str(c_file) + ".ctx")
                )
                if lib["host"]:
                    n.build(
                        outputs=path(build_host_path / f"{object}.o"),
                        rule="host_cc" if c_file.suffix == ".c" else "host_cpp",
                        inputs=path(c_file),
                        variables={
                            "basedir": os.path.dirname(build_host_path / object),
                            "basefile": path(build_host_path / object),
                        },
                    )
                    if options["add_to_all"]:
                        host_source_inputs.append(build_host_path / f"{object}.o")
                if options["add_to_all"]:
                    source_inputs.append(build_src_path / f"{object}.o")
                unit_config["base_path"] = str(build_src_path / f"{object}.o")
            if os.path.exists(asm_path / f"{object}.s"):
                n.build(
                    outputs=path(build_asm_path / f"{object}.o"),
                    rule="as",
                    inputs=path(asm_path / f"{object}.s"),
                    implicit=path(dtk),
                )
            unit_config["target_path"] = str(build_asm_path / f"{object}.o")
            objdiff_config["units"].append(unit_config)
            if completed:
                inputs.append(build_src_path / f"{object}.o")
            else:
                inputs.append(build_asm_path / f"{object}.o")
        if args.static_libs and "lib" in lib:
            lib_name = lib["lib"]
            n.build(
                outputs=path(build_lib_path / f"{lib_name}.a"),
                rule="ar",
                inputs=path(inputs),
                implicit=path(dtk),
            )
            link_inputs.append(build_lib_path / f"{lib_name}.a")
        else:
            link_inputs.extend(inputs)
        n.newline()

    # Check if all compiler versions exist
    for mw_version in used_compiler_versions:
        mw_path = args.compilers / mw_version / "mwcceppc.exe"
        if not os.path.exists(mw_path):
            print(f"Compiler {mw_path} does not exist")
            exit(1)

    # Check if linker exists
    mw_path = args.compilers / mw_link_version / "mwldeppc.exe"
    if not os.path.exists(mw_path):
        print(f"Linker {mw_path} does not exist")
        exit(1)

    ###
    # Link
    ###
    n.comment("Link")
    if args.map:
        n.build(
            outputs=path(build_path / "main.elf"),
            rule="link",
            inputs=path(link_inputs),
            implicit_outputs=path(map_path),
        )
    else:
        n.build(
            outputs=path(build_path / "main.elf"),
            rule="link",
            inputs=path(link_inputs),
        )
    n.newline()

    ###
    # Helper rule for building all source files
    ###
    n.comment("Build all source files")
    n.build(
        outputs="all_source",
        rule="phony",
        inputs=path(source_inputs),
    )
    n.newline()

    ###
    # Helper rule for building all source files, with a host compiler
    ###
    n.comment("Build all source files with a host compiler")
    n.build(
        outputs="all_source_host",
        rule="phony",
        inputs=path(host_source_inputs),
    )
    n.newline()

    ###
    # Generate DOL
    ###
    n.comment("Generate DOL")
    n.rule(
        name="elf2dol",
        command=f"{dtk} elf2dol $in $out",
        description="DOL $out",
    )
    n.build(
        outputs=path(build_path / "main.dol"),
        rule="elf2dol",
        inputs=path(build_path / "main.elf"),
        implicit=path(dtk),
    )
    n.newline()

    ###
    # Check DOL hash
    ###
    if args.check:
        n.comment("Check DOL hash")
        n.rule(
            name="check",
            command=f"{dtk} shasum -c $in -o $out",
            description="CHECK $in",
        )
        n.build(
            outputs=path(build_path / "main.dol.ok"),
            rule="check",
            inputs=f"sha1/pikmin2.{version}.sha1",
            implicit=path([build_path / "main.dol", dtk]),
        )
        n.newline()

    ###
    # Progress script
    ###
    if args.map:
        n.comment("Check progress")
        calc_progress = tools_path / "calcprogress.py"
        n.rule(
            name="progress",
            command=f"$python {calc_progress} $in -o $out",
            description="PROGRESS $in",
        )
        n.build(
            outputs=path(build_path / "main.dol.progress"),
            rule="progress",
            inputs=path([build_path / "main.dol", map_path]),
            implicit=path([calc_progress, build_path / "main.dol.ok"]),
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
        implicit=path(["configure.py", tools_path / "ninja_syntax.py"]),
    )
    n.newline()

    ###
    # Default rule
    ###
    n.comment("Default rule")
    if args.check:
        dol_out = build_path / "main.dol.ok"
    else:
        dol_out = build_path / "main.dol"
    if args.map:
        n.default(path([dol_out, build_path / "main.dol.progress"]))
    else:
        n.default(path([dol_out]))

    ###
    # Write build.ninja
    ###
    with open("build.ninja", "w") as f:
        f.write(out.getvalue())
    n.close()

    ###
    # Write objdiff config
    ###
    with open("objdiff.json", "w") as w:
        json.dump(objdiff_config, w, indent=4)


if __name__ == "__main__":
    main()
