# Linker order for every file, passed to the Metrowerks linker.

GROUP_0_FILES:=\
	$(BUILD_DIR)/asm/ctors.o\
	$(BUILD_DIR)/asm/dtors.o\

# JSystem organised by sublibraries
JSTUDIO_JPARTICLE:=\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio_JParticle/object-particle.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio_JParticle/control.o\

JMESSAGE:=\
	$(BUILD_DIR)/asm/JSystem/JMessage/resource.o\
	$(BUILD_DIR)/src/JSystem/JMessage/data.o\
	$(BUILD_DIR)/asm/JSystem/JMessage/processor.o\
	$(BUILD_DIR)/asm/JSystem/JMessage/control.o\

JSTUDIO:=\
	$(BUILD_DIR)/src/JSystem/JStudio/JStudio/stb-data-parse.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio/functionvalue.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio/fvb.o\
	$(BUILD_DIR)/src/JSystem/JStudio/JStudio/fvb-data.o\
	$(BUILD_DIR)/src/JSystem/JStudio/JStudio/fvb-data-parse.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio/jstudio-control.o\
	$(BUILD_DIR)/src/JSystem/JStudio/JStudio/jstudio-data.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio/jstudio-object.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio/object-id.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio/stb.o\
	$(BUILD_DIR)/src/JSystem/JStudio/JStudio/stb-data.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio/jstudio-math.o\

JSTUDIO_JSTAGE:=\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio_JStage/object-light.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio_JStage/object.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio_JStage/object-actor.o\
	$(BUILD_DIR)/src/JSystem/JStudio/JStudio_JStage/object-ambientlight.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio_JStage/object-camera.o\
	$(BUILD_DIR)/src/JSystem/JStudio/JStudio_JStage/object-fog.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio_JStage/control.o\

JSTUDIO_JMESSAGE:=\
	$(BUILD_DIR)/src/JSystem/JStudio/JStudio_JMessage/object-message.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio_JMessage/control.o\

JSTUDIO_JAUDIO:=\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio_JAudio/object-sound.o\
	$(BUILD_DIR)/asm/JSystem/JStudio/JStudio_JAudio/control.o\

J3DU:=\
	$(BUILD_DIR)/src/JSystem/J3DU/J3DUDL.o\
	$(BUILD_DIR)/asm/JSystem/J3DU/J3DUMotion.o\
	$(BUILD_DIR)/src/JSystem/J3DU/J3DUShadow.o\
	$(BUILD_DIR)/asm/JSystem/J3DU/J3DUMtxCache.o\

JKERNEL:=\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRAram.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRAramArchive.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRAramBlock.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRAramHeap.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRAramPiece.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRAramStream.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRArchivePri.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRArchivePub.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRCompArchive.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRDecomp.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRDisposer.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRDvdFile.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRDvdAramRipper.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRDvdArchive.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRDvdRipper.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRExpHeap.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRFileCache.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRFileFinder.o\
	$(BUILD_DIR)/src/JSystem/JKernel/JKRFile.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRFileLoader.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRHeap.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRMemArchive.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRSolidHeap.o\
	$(BUILD_DIR)/asm/JSystem/JKernel/JKRThread.o\

JSUPPORT:=\
	$(BUILD_DIR)/src/JSystem/JSupport/JSUOutputStream.o\
	$(BUILD_DIR)/src/JSystem/JSupport/JSUInputStream.o\
	$(BUILD_DIR)/src/JSystem/JSupport/JSUList.o\
	$(BUILD_DIR)/src/JSystem/JSupport/JSUMemoryStream.o\
	$(BUILD_DIR)/src/JSystem/JSupport/JSUFileStream.o\

JGADGET:=\
	$(BUILD_DIR)/asm/JSystem/JGadget/binary.o\
	$(BUILD_DIR)/asm/JSystem/JGadget/linklist.o\
	$(BUILD_DIR)/asm/JSystem/JGadget/std-list.o\
	$(BUILD_DIR)/asm/JSystem/JGadget/std-vector.o\

JUTILITY:=\
	$(BUILD_DIR)/asm/JSystem/JUtility/JUTAssert.o\
	$(BUILD_DIR)/asm/JSystem/JUtility/JUTConsole.o\
	$(BUILD_DIR)/asm/JSystem/JUtility/JUTDbPrint.o\
	$(BUILD_DIR)/asm/JSystem/JUtility/JUTDirectFile.o\
	$(BUILD_DIR)/asm/JSystem/JUtility/JUTDirectPrint.o\
	$(BUILD_DIR)/asm/JSystem/JUtility/JUTException.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTFader.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTFont.o\
	$(BUILD_DIR)/asm/JSystem/JUtility/JUTGamePad.o\
	$(BUILD_DIR)/asm/JSystem/JUtility/JUTGraphFifo.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTNameTab.o\
	$(BUILD_DIR)/asm/JSystem/JUtility/JUTPalette.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTProcBar.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTResFont.o\
	$(BUILD_DIR)/asm/JSystem/JUtility/JUTResource.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTRomFont.o\
	$(BUILD_DIR)/src/JSystem/JUtility/JUTFontData_Ascfont_fix12.o\
	$(BUILD_DIR)/asm/JSystem/JUtility/JUTTexture.o\
	$(BUILD_DIR)/asm/JSystem/JUtility/JUTVideo.o\
	$(BUILD_DIR)/asm/JSystem/JUtility/JUTXfb.o\
	$(BUILD_DIR)/asm/JSystem/JUtility/JUTCacheFont.o\

JMATH:=\
	$(BUILD_DIR)/asm/JSystem/JMath/JMath.o\
	$(BUILD_DIR)/src/JSystem/JMath/random.o\
	$(BUILD_DIR)/asm/JSystem/JMath/JMATrigonometric.o\

J2D:=\
	$(BUILD_DIR)/src/JSystem/J2D/J2DOrthoGraph.o\
	$(BUILD_DIR)/src/JSystem/J2D/J2DPerspGraph.o\
	$(BUILD_DIR)/src/JSystem/J2D/J2DGrafContext.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DPane.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DPicture.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DPrint.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DScreen.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DTextBox.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DWindow.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DWindowEx.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DAnmLoader.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DBloSaver.o\
	$(BUILD_DIR)/src/JSystem/J2D/J2DManage.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DMatBlock.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DMaterial.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DMaterialFactory.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DPictureEx.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DTevs.o\
	$(BUILD_DIR)/asm/JSystem/J2D/J2DTextBoxEx.o\
	$(BUILD_DIR)/src/JSystem/J2D/J2DAnimation.o\

J3D:=\
	$(BUILD_DIR)/src/JSystem/J3D/J3DSys.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DVertex.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DTransform.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DPacket.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DShape.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DMaterial.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DTevs.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DDrawBuffer.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DModel.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DAnimation.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DMaterialAnm.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DCluster.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DJoint.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DMaterialFactory.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DBinaryFormat.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DModelLoader.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DJointFactory.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DShapeFactory.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DAnmLoader.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DModelSaver.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DGD.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DMatBlock.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DModelData.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DMaterialAttach.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DMaterialFactory_v21.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DShapeMtx.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DModelLoaderCalcSize.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DJointTree.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DSkinDeform.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DShapeDraw.o\
	$(BUILD_DIR)/asm/JSystem/J3D/J3DMtxBuffer.o\
	$(BUILD_DIR)/src/JSystem/J3D/J3DShapeTable.o\

JFRAMEWORK:=\
	$(BUILD_DIR)/src/JSystem/JFramework/JFWSystem.o\
	$(BUILD_DIR)/src/JSystem/JFramework/JFWDisplay.o\

JPARTICLE:=\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPABaseShape.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPAChildShape.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPADynamicsBlock.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPAEmitter.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPAEmitterManager.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPAExTexShape.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPAExtraShape.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPAFieldBlock.o\
	$(BUILD_DIR)/src/JSystem/JParticle/JPAKeyBlock.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPAMath.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPAParticle.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPAResource.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPAResourceLoader.o\
	$(BUILD_DIR)/asm/JSystem/JParticle/JPAResourceManager.o\
	$(BUILD_DIR)/src/JSystem/JParticle/JPATexture.o\

JSTAGE:=\
	$(BUILD_DIR)/src/JSystem/JStage/JSGSystem.o\
	$(BUILD_DIR)/src/JSystem/JStage/JSGCamera.o\
	$(BUILD_DIR)/src/JSystem/JStage/JSGObject.o\
	$(BUILD_DIR)/src/JSystem/JStage/JSGActor.o\

# JAudio2, further divided into sublibraries
JAUDIO2_JAS:=\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASWSParser.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASBankMgr.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASBasicBank.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASBasicInst.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASBasicWaveBank.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASBNKParser.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASDrumSet.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASInstEffect.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASInstRand.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASInstSense.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASSimpleWaveBank.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASWaveArcLoader.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASWaveBank.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASWaveBankMgr.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASBank.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASTrackPort.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASOuterParam.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASPlayer_impl.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASRegisterParam.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASSeqCtrl.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASSeqParser.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASTrack.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASTrackInterrupt.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASOscillator.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASChannel.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASDriverIF.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASDSPChannel.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASDSPInterface.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASAudioThread.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASCalc.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASCallback.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASCmdStack.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASDvdThread.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASHeapCtrl.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASProbe.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASResArcLoader.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASReport.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASAiCtrl.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAS/JASChannelUpdater.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASTaskThread.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAS/JASAramStream.o\

JAUDIO2_DSP:=\
	$(BUILD_DIR)/asm/JSystem/JAudio2/dsp/dspproc.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/dsp/dsptask.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/dsp/osdsp.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/dsp/osdsp_task.o\

JAUDIO2_JAI:=\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIAnimation.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIBankWave.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIBasic.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAI/JAIConst.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIDummyObject.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIFx.o\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAI/JAIGlobalParameter.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIInitData.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAISeMgr.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAISequenceHeap.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAISequenceMgr.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAISound.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAISoundTable.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIStreamMgr.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAISystemInterface.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAI/JAIObject.o\

JAUDIO2_JAD:=\
	$(BUILD_DIR)/src/JSystem/JAudio2/JAD/JADHioNode.o\

JAUDIO2_JAL:=\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAL/JALCalc.o\

JAUDIO2_JAU:=\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAU/JAUData.o\
	$(BUILD_DIR)/asm/JSystem/JAudio2/JAU/JAUDataMgr.o\


# Dolphin sub-libraries have differing CFLAGS.
TRK_MINNOW_DOLPHIN:=\
	$(BUILD_DIR)/src/Dolphin/mainloop.o\
	$(BUILD_DIR)/src/Dolphin/nubevent.o\
	$(BUILD_DIR)/src/Dolphin/nubinit.o\
	$(BUILD_DIR)/src/Dolphin/msg.o\
	$(BUILD_DIR)/asm/Dolphin/msgbuf.o\
	$(BUILD_DIR)/asm/Dolphin/serpoll.o\
	$(BUILD_DIR)/src/Dolphin/usr_put.o\
	$(BUILD_DIR)/src/Dolphin/dispatch.o\
	$(BUILD_DIR)/asm/Dolphin/msghndlr.o\
	$(BUILD_DIR)/asm/Dolphin/support.o\
	$(BUILD_DIR)/src/Dolphin/mutex_TRK.o\
	$(BUILD_DIR)/src/Dolphin/notify.o\
	$(BUILD_DIR)/src/Dolphin/flush_cache.o\
	$(BUILD_DIR)/src/Dolphin/mem_TRK.o\
	$(BUILD_DIR)/asm/Dolphin/targimpl.o\
	$(BUILD_DIR)/src/Dolphin/targsupp.o\
	$(BUILD_DIR)/asm/Dolphin/mpc_7xx_603e.o\
	$(BUILD_DIR)/asm/Dolphin/__exception.o\
	$(BUILD_DIR)/asm/Dolphin/dolphin_trk.o\
	$(BUILD_DIR)/src/Dolphin/main_TRK.o\
	$(BUILD_DIR)/asm/Dolphin/dolphin_trk_glue.o\
	$(BUILD_DIR)/src/Dolphin/targcont.o\
	$(BUILD_DIR)/src/Dolphin/target_options.o\
	$(BUILD_DIR)/asm/Dolphin/mslsupp.o\
	$(BUILD_DIR)/src/Dolphin/UDP_Stubs.o\
	$(BUILD_DIR)/src/Dolphin/ddh/main.o\
	$(BUILD_DIR)/asm/Dolphin/CircleBuffer.o\
	$(BUILD_DIR)/src/Dolphin/main.o\
	$(BUILD_DIR)/src/Dolphin/MWTrace.o\
	$(BUILD_DIR)/src/Dolphin/MWCriticalSection_gc.o\

RUNTIME:=\
	$(BUILD_DIR)/src/Dolphin/__va_arg.o\
	$(BUILD_DIR)/asm/Dolphin/global_destructor_chain.o\
	$(BUILD_DIR)/src/Dolphin/CPlusLibPPC.o\
	$(BUILD_DIR)/asm/Dolphin/NMWException.o\
	$(BUILD_DIR)/src/Dolphin/ptmf.o\
	$(BUILD_DIR)/asm/Dolphin/runtime.o\
	$(BUILD_DIR)/asm/Dolphin/__init_cpp_exceptions.o\
	$(BUILD_DIR)/asm/Dolphin/Gecko_ExceptionPPC.o\
	$(BUILD_DIR)/src/Dolphin/GCN_mem_alloc.o\

MSL_C:=\
	$(BUILD_DIR)/src/Dolphin/abort_exit.o\
	$(BUILD_DIR)/asm/Dolphin/alloc.o\
	$(BUILD_DIR)/src/Dolphin/ansi_files.o\
	$(BUILD_DIR)/asm/Dolphin/ansi_fp.o\
	$(BUILD_DIR)/src/Dolphin/arith.o\
	$(BUILD_DIR)/src/Dolphin/buffer_io.o\
	$(BUILD_DIR)/src/Dolphin/critical_regions.gamecube.o\
	$(BUILD_DIR)/src/Dolphin/ctype.o\
	$(BUILD_DIR)/asm/Dolphin/direct_io.o\
	$(BUILD_DIR)/src/Dolphin/errno.o\
	$(BUILD_DIR)/src/Dolphin/file_io.o\
	$(BUILD_DIR)/src/Dolphin/FILE_POS.o\
	$(BUILD_DIR)/src/Dolphin/locale.o\
	$(BUILD_DIR)/src/Dolphin/mbstring.o\
	$(BUILD_DIR)/src/Dolphin/mem.o\
	$(BUILD_DIR)/asm/Dolphin/mem_funcs.o\
	$(BUILD_DIR)/src/Dolphin/misc_io.o\
	$(BUILD_DIR)/asm/Dolphin/printf.o\
	$(BUILD_DIR)/src/Dolphin/rand.o\
	$(BUILD_DIR)/src/Dolphin/float.o\
	$(BUILD_DIR)/asm/Dolphin/scanf.o\
	$(BUILD_DIR)/src/Dolphin/string.o\
	$(BUILD_DIR)/asm/Dolphin/strtold.o\
	$(BUILD_DIR)/asm/Dolphin/strtoul.o\
	$(BUILD_DIR)/src/Dolphin/wchar_io.o\
	$(BUILD_DIR)/src/Dolphin/uart_console_io_gcn.o\
	$(BUILD_DIR)/src/Dolphin/e_asin.o\
	$(BUILD_DIR)/src/Dolphin/e_atan2.o\
	$(BUILD_DIR)/src/Dolphin/e_exp.o\
	$(BUILD_DIR)/src/Dolphin/e_fmod.o\
	$(BUILD_DIR)/src/Dolphin/e_log.o\
	$(BUILD_DIR)/src/Dolphin/e_log10.o\
	$(BUILD_DIR)/src/Dolphin/e_pow.o\
	$(BUILD_DIR)/src/Dolphin/e_rem_pio2.o\
	$(BUILD_DIR)/src/Dolphin/k_cos.o\
	$(BUILD_DIR)/src/Dolphin/k_rem_pio2.o\
	$(BUILD_DIR)/src/Dolphin/k_sin.o\
	$(BUILD_DIR)/src/Dolphin/k_tan.o\
	$(BUILD_DIR)/src/Dolphin/s_atan.o\
	$(BUILD_DIR)/src/Dolphin/s_ceil.o\
	$(BUILD_DIR)/src/Dolphin/s_copysign.o\
	$(BUILD_DIR)/src/Dolphin/s_cos.o\
	$(BUILD_DIR)/src/Dolphin/s_floor.o\
	$(BUILD_DIR)/src/Dolphin/s_frexp.o\
	$(BUILD_DIR)/src/Dolphin/s_ldexp.o\
	$(BUILD_DIR)/src/Dolphin/s_modf.o\
	$(BUILD_DIR)/src/Dolphin/s_sin.o\
	$(BUILD_DIR)/src/Dolphin/s_tan.o\
	$(BUILD_DIR)/src/Dolphin/w_asin.o\
	$(BUILD_DIR)/src/Dolphin/w_atan2.o\
	$(BUILD_DIR)/src/Dolphin/w_exp.o\
	$(BUILD_DIR)/src/Dolphin/w_fmod.o\
	$(BUILD_DIR)/src/Dolphin/w_log10.o\
	$(BUILD_DIR)/src/Dolphin/w_pow.o\
	$(BUILD_DIR)/src/Dolphin/e_sqrt.o\
	$(BUILD_DIR)/src/Dolphin/math_ppc.o\
	$(BUILD_DIR)/src/Dolphin/w_sqrt.o\
	$(BUILD_DIR)/src/Dolphin/extras.o\

ODEMUEXI2:=\
	$(BUILD_DIR)/asm/Dolphin/DebuggerDriver.o\

VI:=\
	$(BUILD_DIR)/asm/Dolphin/vi.o\

AMCSTUBS:=\
	$(BUILD_DIR)/src/Dolphin/AmcExi2Stubs.o\

AR:=\
	$(BUILD_DIR)/asm/Dolphin/ar.o\
	$(BUILD_DIR)/asm/Dolphin/arq.o\

BASE:=\
	$(BUILD_DIR)/src/Dolphin/PPCArch.o\
	
CARD:=\
	$(BUILD_DIR)/asm/Dolphin/CARDBios.o\
	$(BUILD_DIR)/asm/Dolphin/CARDUnlock.o\
	$(BUILD_DIR)/asm/Dolphin/CARDRdwr.o\
	$(BUILD_DIR)/asm/Dolphin/CARDBlock.o\
	$(BUILD_DIR)/asm/Dolphin/CARDDir.o\
	$(BUILD_DIR)/asm/Dolphin/CARDCheck.o\
	$(BUILD_DIR)/asm/Dolphin/CARDMount.o\
	$(BUILD_DIR)/asm/Dolphin/CARDFormat.o\
	$(BUILD_DIR)/asm/Dolphin/CARDOpen.o\
	$(BUILD_DIR)/asm/Dolphin/CARDCreate.o\
	$(BUILD_DIR)/asm/Dolphin/CARDRead.o\
	$(BUILD_DIR)/asm/Dolphin/CARDWrite.o\
	$(BUILD_DIR)/asm/Dolphin/CARDStat.o\
	$(BUILD_DIR)/asm/Dolphin/CARDNet.o\

DB:=\
	$(BUILD_DIR)/src/Dolphin/db.o\

DSP:=\
	$(BUILD_DIR)/asm/Dolphin/dsp.o\
	$(BUILD_DIR)/src/Dolphin/dsp_debug.o\
	$(BUILD_DIR)/asm/Dolphin/dsp_task.o\

DVD:=\
	$(BUILD_DIR)/asm/Dolphin/dvdlow.o\
	$(BUILD_DIR)/asm/Dolphin/dvdfs.o\
	$(BUILD_DIR)/asm/Dolphin/dvd.o\
	$(BUILD_DIR)/src/Dolphin/dvdqueue.o\
	$(BUILD_DIR)/src/Dolphin/dvderror.o\
	$(BUILD_DIR)/src/Dolphin/dvdidutils.o\
	$(BUILD_DIR)/src/Dolphin/dvdFatal.o\
	$(BUILD_DIR)/src/Dolphin/fstload.o\

EXI:=\
	$(BUILD_DIR)/asm/Dolphin/EXIBios.o\
	$(BUILD_DIR)/asm/Dolphin/EXIUart.o\
	
GD:=\
	$(BUILD_DIR)/src/Dolphin/GDBase.o\
	$(BUILD_DIR)/asm/Dolphin/GDGeometry.o\

GX:=\
	$(BUILD_DIR)/asm/Dolphin/GXInit.o\
	$(BUILD_DIR)/asm/Dolphin/GXFifo.o\
	$(BUILD_DIR)/asm/Dolphin/GXAttr.o\
	$(BUILD_DIR)/asm/Dolphin/GXMisc.o\
	$(BUILD_DIR)/asm/Dolphin/GXGeometry.o\
	$(BUILD_DIR)/asm/Dolphin/GXFrameBuf.o\
	$(BUILD_DIR)/asm/Dolphin/GXLight.o\
	$(BUILD_DIR)/asm/Dolphin/GXTexture.o\
	$(BUILD_DIR)/src/Dolphin/GXBump.o\
	$(BUILD_DIR)/asm/Dolphin/GXTev.o\
	$(BUILD_DIR)/asm/Dolphin/GXPixel.o\
	$(BUILD_DIR)/asm/Dolphin/GXDisplayList.o\
	$(BUILD_DIR)/asm/Dolphin/GXTransform.o\
	$(BUILD_DIR)/asm/Dolphin/GXPerf.o\

MTX:=\
	$(BUILD_DIR)/asm/Dolphin/mtx.o\
	$(BUILD_DIR)/asm/Dolphin/mtxvec.o\
	$(BUILD_DIR)/asm/Dolphin/mtx44.o\
	$(BUILD_DIR)/src/Dolphin/vec.o\

ODENOTSTUB:=\
	$(BUILD_DIR)/src/Dolphin/odenotstub.o\

OS:=\
	$(BUILD_DIR)/src/Dolphin/OS.o\
	$(BUILD_DIR)/asm/Dolphin/OSAlarm.o\
	$(BUILD_DIR)/src/Dolphin/OSAlloc.o\
	$(BUILD_DIR)/src/Dolphin/OSArena.o\
	$(BUILD_DIR)/src/Dolphin/OSAudioSystem.o\
	$(BUILD_DIR)/src/Dolphin/OSCache.o\
	$(BUILD_DIR)/asm/Dolphin/OSContext.o\
	$(BUILD_DIR)/asm/Dolphin/OSError.o\
	$(BUILD_DIR)/asm/Dolphin/OSFont.o\
	$(BUILD_DIR)/asm/Dolphin/OSInterrupt.o\
	$(BUILD_DIR)/src/Dolphin/OSLink.o\
	$(BUILD_DIR)/src/Dolphin/OSMessage.o\
	$(BUILD_DIR)/asm/Dolphin/OSMemory.o\
	$(BUILD_DIR)/asm/Dolphin/OSMutex.o\
	$(BUILD_DIR)/asm/Dolphin/OSReboot.o\
	$(BUILD_DIR)/asm/Dolphin/OSReset.o\
	$(BUILD_DIR)/asm/Dolphin/OSResetSW.o\
	$(BUILD_DIR)/asm/Dolphin/OSRtc.o\
	$(BUILD_DIR)/src/Dolphin/OSSync.o\
	$(BUILD_DIR)/asm/Dolphin/OSThread.o\
	$(BUILD_DIR)/asm/Dolphin/OSTime.o\
	$(BUILD_DIR)/asm/Dolphin/__mem.o\
	$(BUILD_DIR)/src/Dolphin/__start.o\
	$(BUILD_DIR)/src/Dolphin/__ppc_eabi_init.o\

PAD:=\
	$(BUILD_DIR)/asm/Dolphin/Padclamp.o\
	$(BUILD_DIR)/asm/Dolphin/Pad.o\

SI:=\
	$(BUILD_DIR)/asm/Dolphin/SIBios.o\
	$(BUILD_DIR)/src/Dolphin/SISamplingRate.o\

AI:=\
	$(BUILD_DIR)/asm/Dolphin/ai.o\

THP:=\
	$(BUILD_DIR)/asm/Dolphin/THPDec.o\
	$(BUILD_DIR)/asm/Dolphin/THPAudio.o\

GBA:=\
	$(BUILD_DIR)/src/Dolphin/GBA.o\
	$(BUILD_DIR)/src/Dolphin/GBARead.o\
	$(BUILD_DIR)/src/Dolphin/GBAWrite.o\
	$(BUILD_DIR)/asm/Dolphin/GBAXfer.o

YAMASHITA:=\
	$(BUILD_DIR)/src/plugProjectYamashitaU/plugProjectYamashitaU.a\

KANDO:=\
	$(BUILD_DIR)/src/plugProjectKandoU/plugProjectKandoU.a\

NISHIMURA:=\
	$(BUILD_DIR)/src/plugProjectNishimuraU/plugProjectNishimuraU.a\

OGAWA:=\
	$(BUILD_DIR)/src/plugProjectOgawaU/plugProjectOgawaU.a\

HIKINO:=\
	$(BUILD_DIR)/src/plugProjectHikinoU/plugProjectHikinoU.a\

MORIMURA:=\
	$(BUILD_DIR)/src/plugProjectMorimuraU/plugProjectMorimuraU.a\

EBISAWA:=\
	$(BUILD_DIR)/src/plugProjectEbisawaU/plugProjectEbisawaU.a\

KONO:=\
	$(BUILD_DIR)/src/plugProjectKonoU/plugProjectKonoU.a\

BOOTUP:=\
	$(BUILD_DIR)/src/sysBootupU/sysBootupU.a\

COMMON:=\
	$(BUILD_DIR)/src/sysCommonU/sysCommonU.a\

GC:=\
	$(BUILD_DIR)/src/sysGCU/sysGCU.a\

UTILITY:=\
	$(BUILD_DIR)/src/utilityU/utilityU.a\

