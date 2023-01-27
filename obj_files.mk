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

DOLPHIN:=\
	$(BUILD_DIR)/src/Dolphin.a\

YAMASHITA:=\
	$(BUILD_DIR)/src/plugProjectYamashitaU.a\

KANDO:=\
	$(BUILD_DIR)/src/plugProjectKandoU.a\

NISHIMURA:=\
	$(BUILD_DIR)/src/plugProjectNishimuraU.a\

OGAWA:=\
	$(BUILD_DIR)/src/plugProjectOgawaU.a\

HIKINO:=\
	$(BUILD_DIR)/src/plugProjectHikinoU.a\

MORIMURA:=\
	$(BUILD_DIR)/src/plugProjectMorimuraU.a\

EBISAWA:=\
	$(BUILD_DIR)/src/plugProjectEbisawaU.a\

KONO:=\
	$(BUILD_DIR)/src/plugProjectKonoU.a\

BOOTUP:=\
	$(BUILD_DIR)/src/sysBootupU.a\

COMMON:=\
	$(BUILD_DIR)/src/sysCommonU.a\

GC:=\
	$(BUILD_DIR)/src/sysGCU.a\

UTILITY:=\
	$(BUILD_DIR)/src/utilityU.a\

