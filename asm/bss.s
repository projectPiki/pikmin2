.include "macros.inc"
.section .bss  # 0x804EFC20 - 0x8051467C

# global BSS
# object-light.cpp
.global saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light
saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light:
	.skip 0x48
# object-actor.cpp
.global saoVVOutput___Q214JStudio_JStage14TAdaptor_actor
saoVVOutput___Q214JStudio_JStage14TAdaptor_actor:
	.skip 0xD0
.global saoVVOutput_ANIMATION_FRAME___Q214JStudio_JStage14TAdaptor_actor
saoVVOutput_ANIMATION_FRAME___Q214JStudio_JStage14TAdaptor_actor:
	.skip 0x90
# object-camera.cpp
.global saoVVOutput___Q214JStudio_JStage15TAdaptor_camera
saoVVOutput___Q214JStudio_JStage15TAdaptor_camera:
	.skip 0xA0
# object-fog.cpp
.global saoVVOutput___Q214JStudio_JStage12TAdaptor_fog
saoVVOutput___Q214JStudio_JStage12TAdaptor_fog:
	.skip 0x60
# object-sound.cpp
.global saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound
saoVVOSetValue___Q214JStudio_JAudio14TAdaptor_sound:
	.skip 0x78
# JKRAram.cpp
.global sAramCommandList__7JKRAram
sAramCommandList__7JKRAram:
	.skip 0xC
# JKRAramHeap.cpp
.global sAramList__11JKRAramHeap
sAramList__11JKRAramHeap:
	.skip 0xC
# JKRAramPiece.cpp
.global sAramPieceCommandList__12JKRAramPiece
sAramPieceCommandList__12JKRAramPiece:
	.skip 0x24
.global mMutex__12JKRAramPiece
mMutex__12JKRAramPiece:
	.skip 0x18
# JKRDvdFile.cpp
.global sDvdList__10JKRDvdFile
sDvdList__10JKRDvdFile:
	.skip 0xC
# JKRDvdAramRipper.cpp
.global sDvdAramAsyncList__16JKRDvdAramRipper
sDvdAramAsyncList__16JKRDvdAramRipper:
	.skip 0xC
# JKRDvdRipper.cpp
.global sDvdAsyncList__12JKRDvdRipper
sDvdAsyncList__12JKRDvdRipper:
	.skip 0xC
# JKRFileLoader.cpp
.global sVolumeList__13JKRFileLoader
sVolumeList__13JKRFileLoader:
	.skip 0xC
# JKRThread.cpp
.global sThreadList__9JKRThread
sThreadList__9JKRThread:
	.skip 0x38
.global sTaskList__7JKRTask
sTaskList__7JKRTask:
	.skip 0xC
# JUTException.cpp
.global sMapFileList__12JUTException
sMapFileList__12JUTException:
	.skip 0xC
# JUTGamePad.cpp
.global mPadList__10JUTGamePad
mPadList__10JUTGamePad:
	.skip 0x188
.global mPadStatus__10JUTGamePad
mPadStatus__10JUTGamePad:
	.skip 0x30
.global mPadButton__10JUTGamePad
mPadButton__10JUTGamePad:
	.skip 0xC0
.global mPadMStick__10JUTGamePad
mPadMStick__10JUTGamePad:
	.skip 0x40
.global mPadSStick__10JUTGamePad
mPadSStick__10JUTGamePad:
	.skip 0x40
.global sPatternList__19JUTGamePadLongPress
sPatternList__19JUTGamePadLongPress:
	.skip 0xC
	.skip 0x1C
# JMATrigonometric.cpp
#.balign 32
.global sincosTable___5JMath
sincosTable___5JMath:
	.skip 0x6040
#.balign 32
.global atanTable___5JMath
atanTable___5JMath:
	.skip 0x1020
#.balign 32
.global asinAcosTable___5JMath
asinAcosTable___5JMath:
	.skip 0x1020
# J2DPane.cpp
.global static_mBounds__7J2DPane
static_mBounds__7J2DPane:
	.skip 0x10
# J3DSys.cpp
.global j3dSys
j3dSys:
	.skip 0x1A4
.global mCurrentMtx__6J3DSys
mCurrentMtx__6J3DSys:
	.skip 0x30
.global mCurrentS__6J3DSys
mCurrentS__6J3DSys:
	.skip 0xC
.global mParentS__6J3DSys
mParentS__6J3DSys:
	.skip 0xC
.global sTexCoordScaleTable__6J3DSys
sTexCoordScaleTable__6J3DSys:
	.skip 0x40
# J3DPacket.cpp
.global sGDLObj__17J3DDisplayListObj # technically goes with J3DPacket.cpp
sGDLObj__17J3DDisplayListObj:
	.skip 0x10
# J3DTevs.cpp
.global j3dTexCoordTable
j3dTexCoordTable:
	.skip 0x2528
.global j3dTevSwapTableTable
j3dTevSwapTableTable:
	.skip 0x400
.global j3dAlphaCmpTable
j3dAlphaCmpTable:
	.skip 0x300
.global j3dZModeTable
j3dZModeTable:
	.skip 0x60
# J3DShapeMtx.cpp
.global sMtxLoadCache__11J3DShapeMtx
sMtxLoadCache__11J3DShapeMtx:
	.skip 0x14
# J3DMtxBuffer.cpp
.global sNoUseDrawMtx__12J3DMtxBuffer
sNoUseDrawMtx__12J3DMtxBuffer:
	.skip 0x54
.global sNoUseNrmMtx__12J3DMtxBuffer
sNoUseNrmMtx__12J3DMtxBuffer:
	.skip 0x24
# JFWDisplay.cpp
.global sList__8JFWAlarm
sList__8JFWAlarm:
	.skip 0xC
# JASCmdStack.cpp
.global sCommandListOnce__10JASPortCmd
sCommandListOnce__10JASPortCmd:
	.skip 0x18
.global sCommandListStay__10JASPortCmd
sCommandListStay__10JASPortCmd:
	.skip 0xC
# JAIConst.cpp
.global nullCamera__Q27JAInter5Const
nullCamera__Q27JAInter5Const:
	.skip 0x68
.global nullActor__Q27JAInter5Const
nullActor__Q27JAInter5Const:
	.skip 0x14
.global camMtx__Q27JAInter5Const
camMtx__Q27JAInter5Const:
	.skip 0x30
.global camTrans__Q27JAInter5Const
camTrans__Q27JAInter5Const:
	.skip 0xC
.global camPreTrans__Q27JAInter5Const
camPreTrans__Q27JAInter5Const:
	.skip 0xC
# JAISystemInterface.cpp
.global systemPortCmd__Q27JAInter15SystemInterface
systemPortCmd__Q27JAInter15SystemInterface:
	.skip 0x18
# piki.cpp
.global pikiColors__Q24Game4Piki
pikiColors__Q24Game4Piki:
	.skip 0x40
.global pikiColorsCursor__Q24Game4Piki
pikiColorsCursor__Q24Game4Piki:
	.skip 0x20
# gameStat.cpp
.global formationPikis__Q24Game8GameStat
formationPikis__Q24Game8GameStat:
	.skip 0x220
.global workPikis__Q24Game8GameStat
workPikis__Q24Game8GameStat:
	.skip 0xE0
.global alivePikis__Q24Game8GameStat
alivePikis__Q24Game8GameStat:
	.skip 0x20
.global mePikis__Q24Game8GameStat
mePikis__Q24Game8GameStat:
	.skip 0x20
.global zikatuPikis__Q24Game8GameStat
zikatuPikis__Q24Game8GameStat:
	.skip 0x20
# gameDeathCount.cpp
.global mToday__Q24Game8BirthMgr
mToday__Q24Game8BirthMgr:
	.skip 0xC0
.global mCave__Q24Game8BirthMgr
mCave__Q24Game8BirthMgr:
	.skip 0x1C
.global mTotal__Q24Game8BirthMgr
mTotal__Q24Game8BirthMgr:
	.skip 0x1C
.global mToday__Q24Game8DeathMgr
mToday__Q24Game8DeathMgr:
	.skip 0x24
.global mCave__Q24Game8DeathMgr
mCave__Q24Game8DeathMgr:
	.skip 0x24
.global mTotal__Q24Game8DeathMgr
mTotal__Q24Game8DeathMgr:
	.skip 0x24
# pelletBirthBuffer.cpp
.global sArgs__Q24Game17PelletBirthBuffer
sArgs__Q24Game17PelletBirthBuffer:
	.skip 0x1400
# ogScreen.cpp
.global PikiIconTextureResTIMG__Q22og6Screen
PikiIconTextureResTIMG__Q22og6Screen:
	.skip 0x4C
# ogLifeGauge.cpp
.global msVal__Q32og6Screen18CallBack_LifeGauge # belongs in ogLifeGauge
msVal__Q32og6Screen18CallBack_LifeGauge:
	.skip 0x10
# ogCounterRV.cpp
.global msVal__Q32og6Screen18CallBack_CounterRV
msVal__Q32og6Screen18CallBack_CounterRV:
	.skip 0xC
# ogObjGround.cpp
.global msVal__Q32og9newScreen9ObjGround
msVal__Q32og9newScreen9ObjGround:
	.skip 0x28
# ogObjSMenuMap.cpp
.global msVal__Q32og9newScreen11ObjSMenuMap
msVal__Q32og9newScreen11ObjSMenuMap:
	.skip 0x50
# ogObjSMenuItem.cpp
.global msVal__Q32og9newScreen12ObjSMenuItem
msVal__Q32og9newScreen12ObjSMenuItem:
	.skip 0x20
# ogObjSMenuPause.cpp
.global msVal__Q32og9newScreen13ObjSMenuPause
msVal__Q32og9newScreen13ObjSMenuPause:
	.skip 0x44
# ogObjSMenuBase.cpp
.global msBaseVal__Q32og9newScreen12ObjSMenuBase
msBaseVal__Q32og9newScreen12ObjSMenuBase:
	.skip 0x1C
# ogObjCourseName.cpp
.global msVal__Q32og9newScreen13ObjCourseName
msVal__Q32og9newScreen13ObjCourseName:
	.skip 0x10
# ogObjKantei.cpp
.global msVal__Q32og9newScreen9ObjKantei
msVal__Q32og9newScreen9ObjKantei:
	.skip 0x40
# ogObjFloor.cpp
.global msVal__Q32og9newScreen8ObjFloor
msVal__Q32og9newScreen8ObjFloor:
	.skip 0x7C
# ogObjCave.cpp
.global msVal__Q32og9newScreen7ObjCave
msVal__Q32og9newScreen7ObjCave:
	.skip 0x4C
# ogObjAnaDemo.cpp
.global msVal__Q32og9newScreen10ObjAnaDemo
msVal__Q32og9newScreen10ObjAnaDemo:
	.skip 0x10
# ogObjChallenge2P.cpp
.global msVal__Q32og9newScreen14ObjChallenge2P
msVal__Q32og9newScreen14ObjChallenge2P:
	.skip 0x90
# ogObjContena.cpp
.global msVal__Q32og9newScreen10ObjContena
msVal__Q32og9newScreen10ObjContena:
	.skip 0x44
# ogObjSMenuPauseDoukutu.cpp
.global msVal__Q32og9newScreen20ObjSMenuPauseDoukutu
msVal__Q32og9newScreen20ObjSMenuPauseDoukutu:
	.skip 0xC
# ogObjUfo.cpp
.global msVal__Q32og9newScreen10ObjUfoMenu
msVal__Q32og9newScreen10ObjUfoMenu:
	.skip 0x28
# ogObjVs.cpp
.global msVal__Q32og9newScreen5ObjVs
msVal__Q32og9newScreen5ObjVs:
	.skip 0x34
# ogObjChallenge1P.cpp
.global msVal__Q32og9newScreen14ObjChallenge1P
msVal__Q32og9newScreen14ObjChallenge1P:
	.skip 0x6C
# ogObjChallengeBase.cpp
.global msBaseVal__Q32og9newScreen16ObjChallengeBase
msBaseVal__Q32og9newScreen16ObjChallengeBase:
	.skip 0x1C
# PSGame.cpp
.global newSeqName__6PSGame
newSeqName__6PSGame:
	.skip 0x20
# zukan2D.cpp
.global mScrollParm__Q28Morimura10TZukanBase
mScrollParm__Q28Morimura10TZukanBase:
	.skip 0x14
# hiScore2D.cpp
.global mScrollParm__Q28Morimura8THiScore
mScrollParm__Q28Morimura8THiScore:
	.skip 0x14
# vsSelect2D.cpp
.global mScrollParm__Q28Morimura9TVsSelect
mScrollParm__Q28Morimura9TVsSelect:
	.skip 0x14
# khWorldMap.cpp
.global msVal__Q32kh6Screen8WorldMap
msVal__Q32kh6Screen8WorldMap:
	.skip 0x7C
# khCaveResult.cpp
.global msVal__Q32kh6Screen13ObjCaveResult
msVal__Q32kh6Screen13ObjCaveResult:
	.skip 0x3C
# khReadyGo.cpp
.global msVal__Q32kh6Screen10ObjReadyGo
msVal__Q32kh6Screen10ObjReadyGo:
	.skip 0x18
# khFinalFloor.cpp
.global msVal__Q32kh6Screen13ObjFinalFloor
msVal__Q32kh6Screen13ObjFinalFloor:
	.skip 0xC
# khDayEndResult.cpp
.global msVal__Q32kh6Screen19ObjDayEndResultBase
msVal__Q32kh6Screen19ObjDayEndResultBase:
	.skip 0x54
# khFinalResult.cpp
.global msVal__Q32kh6Screen14ObjFinalResult
msVal__Q32kh6Screen14ObjFinalResult:
	.skip 0x24
# khWinLose.cpp
.global msVal__Q32kh6Screen10ObjWinLose
msVal__Q32kh6Screen10ObjWinLose:
	.skip 0x1C
# khWinLoseReason.cpp
.global msVal__Q32kh6Screen16ObjWinLoseReason
msVal__Q32kh6Screen16ObjWinLoseReason:
	.skip 0x1C
# sysMath.cpp
.global "zero__10Vector3<f>"
"zero__10Vector3<f>":
	.skip 0xC
# id32.cpp
.global eof__4ID32 # god damn it, this is static in the class definition but global linkage
eof__4ID32:
	.skip 0xC
# gameConfig.cpp
.global gGameConfig__4Game
gGameConfig__4Game:
	.skip 0x27C
# bootSection.cpp
.global sPikminTex__13TinyPikminMgr
sPikminTex__13TinyPikminMgr:
	.skip 0x14
	.skip 0x4
# THPPlayer.c
#.balign 8
.global ActivePlayer
ActivePlayer:
	.skip 0x1D0
# PSMainSide_CreaturePrm.cpp
.global sInsReal__3PSM
sInsReal__3PSM:
	.skip 0x1C
