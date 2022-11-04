#include "JSystem/JAI/JAIGlobalParameter.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80479688
    lbl_80479688:
        .asciz "JaiInit.aaf"
    .global lbl_80479694
    lbl_80479694:
        .asciz "AudioRes/"
        .skip 2
    .global lbl_804796A0
    lbl_804796A0:
        .asciz "JaiSeqs.arc"

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global distanceParameterMoveTime__18JAIGlobalParameter
    distanceParameterMoveTime__18JAIGlobalParameter:
        .byte 0x3
    .global audioSystemThreadPriority__18JAIGlobalParameter
    audioSystemThreadPriority__18JAIGlobalParameter:
        .byte 0x2
    .global audioDvdThreadPriority__18JAIGlobalParameter
    audioDvdThreadPriority__18JAIGlobalParameter:
        .byte 0x3
    .global seqMuteVolumeSePlay__18JAIGlobalParameter
    seqMuteVolumeSePlay__18JAIGlobalParameter:
        .byte 0x28
    .global seqParameterLines__18JAIGlobalParameter
    seqParameterLines__18JAIGlobalParameter:
        .byte 0x7
    .global streamParameterLines__18JAIGlobalParameter
    streamParameterLines__18JAIGlobalParameter:
        .byte 0x7
    .global seDistanceFxParameter__18JAIGlobalParameter
    seDistanceFxParameter__18JAIGlobalParameter:
        .byte 0x0
        .byte 0x96
    .global soundSceneMax__18JAIGlobalParameter
    soundSceneMax__18JAIGlobalParameter:
        .4byte 0x00000002
    .global seRegistMax__18JAIGlobalParameter
    seRegistMax__18JAIGlobalParameter:
        .4byte 0x00000014
    .global seTrackMax__18JAIGlobalParameter
    seTrackMax__18JAIGlobalParameter:
        .4byte 0x00000020
    .global seqTrackMax__18JAIGlobalParameter
    seqTrackMax__18JAIGlobalParameter:
        .4byte 0x00000020
    .global seqPlayTrackMax__18JAIGlobalParameter
    seqPlayTrackMax__18JAIGlobalParameter:
        .4byte 0x00000008
    .global seqControlBufferMax__18JAIGlobalParameter
    seqControlBufferMax__18JAIGlobalParameter:
        .4byte 0x00000008
    .global autoHeapMax__18JAIGlobalParameter
    autoHeapMax__18JAIGlobalParameter:
        .4byte 0x00000002
    .global stayHeapMax__18JAIGlobalParameter
    stayHeapMax__18JAIGlobalParameter:
        .4byte 0x00000002
    .global autoHeapRoomSize__18JAIGlobalParameter
    autoHeapRoomSize__18JAIGlobalParameter:
        .4byte 0x0000C000
    .global stayHeapSize__18JAIGlobalParameter
    stayHeapSize__18JAIGlobalParameter:
        .4byte 0x00010000
    .global initDataFileName__18JAIGlobalParameter
    initDataFileName__18JAIGlobalParameter:
        .4byte lbl_80479688
    .global wavePath__18JAIGlobalParameter
    wavePath__18JAIGlobalParameter:
        .4byte lbl_80516F28
    .global sequenceArchivesPath__18JAIGlobalParameter
    sequenceArchivesPath__18JAIGlobalParameter:
        .4byte lbl_80516F30
    .global streamPath__18JAIGlobalParameter
    streamPath__18JAIGlobalParameter:
        .4byte lbl_80516F38
    .global audioResPath__18JAIGlobalParameter
    audioResPath__18JAIGlobalParameter:
        .4byte lbl_80479694
    .global sequenceArchivesFileName__18JAIGlobalParameter
    sequenceArchivesFileName__18JAIGlobalParameter:
        .4byte lbl_804796A0
    .global inputGainDown__18JAIGlobalParameter
    inputGainDown__18JAIGlobalParameter:
        .float 0.5
    .global outputGainUp__18JAIGlobalParameter
    outputGainUp__18JAIGlobalParameter:
        .float 1.2
    .global distanceMax__18JAIGlobalParameter
    distanceMax__18JAIGlobalParameter:
        .float 5000.0
    .global maxVolumeDistance__18JAIGlobalParameter
    maxVolumeDistance__18JAIGlobalParameter:
        .float 1000.0
    .global seDolbyCenterValue__18JAIGlobalParameter
    seDolbyCenterValue__18JAIGlobalParameter:
        .float 30.0
    .global seDolbyFrontDistanceMax__18JAIGlobalParameter
    seDolbyFrontDistanceMax__18JAIGlobalParameter:
        .float -300.0
    .global seDolbyBehindDistanceMax__18JAIGlobalParameter
    seDolbyBehindDistanceMax__18JAIGlobalParameter:
        .float 1000.0
    .global dopplarMoveTime__18JAIGlobalParameter
    dopplarMoveTime__18JAIGlobalParameter:
        .4byte 0x0000000F
    .global dummyObjectLifeTime__18JAIGlobalParameter
    dummyObjectLifeTime__18JAIGlobalParameter:
        .4byte 0x00000258
    .global dummyObjectMax__18JAIGlobalParameter
    dummyObjectMax__18JAIGlobalParameter:
        .4byte 0x0000000A
    .global seqMuteMoveSpeedSePlay__18JAIGlobalParameter
    seqMuteMoveSpeedSePlay__18JAIGlobalParameter:
        .4byte 0x00000003
    .global audioCameraMax__18JAIGlobalParameter
    audioCameraMax__18JAIGlobalParameter:
        .4byte 0x00000001
    .global systemTrackMax__18JAIGlobalParameter
    systemTrackMax__18JAIGlobalParameter:
        .4byte 0x00000100
    .global systemRootTrackMax__18JAIGlobalParameter
    systemRootTrackMax__18JAIGlobalParameter:
        .4byte 0x00000010
    .global panDistanceMax__18JAIGlobalParameter
    panDistanceMax__18JAIGlobalParameter:
        .float 500.0
    .global panDistance2Max__18JAIGlobalParameter
    panDistance2Max__18JAIGlobalParameter:
        .float 1000.0
    .global panAngleParameter__18JAIGlobalParameter
    panAngleParameter__18JAIGlobalParameter:
        .float 12.0
    .global panAngleParameter2__18JAIGlobalParameter
    panAngleParameter2__18JAIGlobalParameter:
        .float 2.4
    .global dopplarParameter__18JAIGlobalParameter
    dopplarParameter__18JAIGlobalParameter:
        .float 3200.0
    .global seDistanceWaitMax__18JAIGlobalParameter
    seDistanceWaitMax__18JAIGlobalParameter:
        .4byte 0x000C0000
    .global seDistancepitchMax__18JAIGlobalParameter
    seDistancepitchMax__18JAIGlobalParameter:
        .float 0.2

    .section .sbss # 0x80514D80 - 0x80516360
    .global seDefaultFx__18JAIGlobalParameter
    seDefaultFx__18JAIGlobalParameter:
        .skip 0x4
    .global interfaceHeapSize__18JAIGlobalParameter
    interfaceHeapSize__18JAIGlobalParameter:
        .skip 0x4
    .global minDistanceVolume__18JAIGlobalParameter
    minDistanceVolume__18JAIGlobalParameter:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516F28
    lbl_80516F28:
        .asciz "Banks/"
        .skip 1
    .global lbl_80516F30
    lbl_80516F30:
        .asciz "Seqs/"
        .skip 2
    .global lbl_80516F38
    lbl_80516F38:
        .asciz "Stream/"
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamAudioSystemThreadPriority(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamAudioDvdThreadPriority(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JAIGlobalParameter::setParamInitFileLoadSwitch(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD950
 * Size:	000014
 */
void JAIGlobalParameter::setParamInitDataPointer(void*)
{
	/*
	stw      r3, aafPointer__Q27JAInter8InitData@sda21(r13)
	li       r0, 4
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	stb      r0, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamInterfaceHeapSize(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD964
 * Size:	000008
 */
void JAIGlobalParameter::setParamSoundSceneMax(unsigned long)
{
	/*
	stw      r3, soundSceneMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeRegistMax(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD96C
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeTrackMax(unsigned long)
{
	/*
	stw      r3, seTrackMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeqTrackMax(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD974
 * Size:	000010
 */
void JAIGlobalParameter::setParamSeqPlayTrackMax(unsigned long)
{
	/*
	slwi     r0, r3, 1
	stw      r3, seqPlayTrackMax__18JAIGlobalParameter@sda21(r13)
	stw      r0, seqControlBufferMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD984
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeqControlBufferMax(unsigned long)
{
	/*
	stw      r3, seqControlBufferMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamStreamControlBufferMax(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamStreamParameterBufferMax(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD98C
 * Size:	000008
 */
void JAIGlobalParameter::setParamAutoHeapMax(unsigned long)
{
	/*
	stw      r3, autoHeapMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD994
 * Size:	000008
 */
void JAIGlobalParameter::setParamStayHeapMax(unsigned long)
{
	/*
	stw      r3, stayHeapMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamInputGainDown(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamOutputGainUp(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD99C
 * Size:	000008
 */
void JAIGlobalParameter::setParamDistanceMax(float)
{
	/*
	stfs     f1, distanceMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD9A4
 * Size:	000008
 */
void JAIGlobalParameter::setParamMaxVolumeDistance(float)
{
	/*
	stfs     f1, maxVolumeDistance__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD9AC
 * Size:	000008
 */
void JAIGlobalParameter::setParamMinDistanceVolume(float)
{
	/*
	stfs     f1, minDistanceVolume__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeDistanceFxParameter(unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JAIGlobalParameter::setParamInitDataLoadOffFlag(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JAIGlobalParameter::setParamStreamUseOffFlag(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JAIGlobalParameter::setParamStreamDecodedBufferBlocks(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD9B4
 * Size:	000014
 */
void JAIGlobalParameter::setParamStreamInsideBufferCut(bool)
{
	/*
	lwz      r4, msBasic__8JAIBasic@sda21(r13)
	lbz      r0, 0xe(r4)
	rlwimi   r0, r3, 3, 0x1c, 0x1c
	stb      r0, 0xe(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD9C8
 * Size:	000008
 */
void JAIGlobalParameter::setParamAutoHeapRoomSize(unsigned long)
{
	/*
	stw      r3, autoHeapRoomSize__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD9D0
 * Size:	000008
 */
void JAIGlobalParameter::setParamStayHeapSize(unsigned long)
{
	/*
	stw      r3, stayHeapSize__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JAIGlobalParameter::setParamSeDolbyCenterValue(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeDolbyFrontDistanceMax(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeDolbyBehindDistanceMax(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD9D8
 * Size:	000008
 */
void JAIGlobalParameter::setParamInitDataFileName(char*)
{
	/*
	stw      r3, initDataFileName__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSoundTableFileName(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamWavePath(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSequenceArchivesPath(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamStreamPath(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamAudioResPath(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD9E0
 * Size:	000008
 */
void JAIGlobalParameter::setParamSequenceArchivesFileName(char*)
{
	/*
	stw      r3, sequenceArchivesFileName__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JAIGlobalParameter::setParamSeqEntryCancelFlag(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JAIGlobalParameter::setParamStreamEntryCancelFlag(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamDopplarMoveTime(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD9E8
 * Size:	000008
 */
void JAIGlobalParameter::setParamDistanceParameterMoveTime(unsigned char)
{
	/*
	stb      r3, distanceParameterMoveTime__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamDummyObjectLifeTime(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamDummyObjectMax(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeqMuteVolumeSePlay(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeqMuteMoveSpeedSePlay(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD9F0
 * Size:	000008
 */
void JAIGlobalParameter::setParamAudioCameraMax(unsigned long)
{
	/*
	stw      r3, audioCameraMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800AD9F8
 * Size:	000008
 */
void JAIGlobalParameter::setParamSystemTrackMax(long)
{
	/*
	stw      r3, systemTrackMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADA00
 * Size:	000008
 */
void JAIGlobalParameter::setParamSystemRootTrackMax(long)
{
	/*
	stw      r3, systemRootTrackMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JAIGlobalParameter::setParamPanDistanceMax(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JAIGlobalParameter::setParamPanAngleParameter(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamDopplarParameter(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeDistanceWaitMax(unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeDistancepitchMax(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamSeqParameterLines(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::setParamStreamParameterLines(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ADA08
 * Size:	000068
 */
void JAIGlobalParameter::setParamSoundOutputMode(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r3, 1
	stw      r0, 0x14(r1)
	li       r0, 1
	beq      lbl_800ADA44
	bge      lbl_800ADA30
	cmpwi    r3, 0
	bge      lbl_800ADA3C
	b        lbl_800ADA50

lbl_800ADA30:
	cmpwi    r3, 3
	bge      lbl_800ADA50
	b        lbl_800ADA4C

lbl_800ADA3C:
	li       r0, 0
	b        lbl_800ADA50

lbl_800ADA44:
	li       r0, 1
	b        lbl_800ADA50

lbl_800ADA4C:
	li       r0, 2

lbl_800ADA50:
	lwz      r4, msBasic__8JAIBasic@sda21(r13)
	stb      r3, 0xd(r4)
	mr       r3, r0
	bl       setOutputMode__9JASDriverFUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamAudioSystemThreadPriority()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamAudioDvdThreadPriority()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JAIGlobalParameter::getParamInitFileLoadSwitch()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamInitDataPointer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamInterfaceHeapSize()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ADA70
 * Size:	000024
 */
u8 JAIGlobalParameter::getParamSeCategoryMax()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       getCategotyMax__Q27JAInter10SoundTableFv
	lwz      r0, 0x14(r1)
	clrlwi   r3, r3, 0x18
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADA94
 * Size:	000008
 */
u32 JAIGlobalParameter::getParamSoundSceneMax()
{
	/*
	lwz      r3, soundSceneMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADA9C
 * Size:	000008
 */
int JAIGlobalParameter::getParamSeRegistMax()
{
	/*
	lwz      r3, seRegistMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADAA4
 * Size:	000008
 */
void JAIGlobalParameter::getParamSeTrackMax()
{
	/*
	lwz      r3, seTrackMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADAAC
 * Size:	000008
 */
void JAIGlobalParameter::getParamSeqTrackMax()
{
	/*
	lwz      r3, seqTrackMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADAB4
 * Size:	000008
 */
void JAIGlobalParameter::getParamSeqControlBufferMax()
{
	/*
	lwz      r3, seqControlBufferMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamStreamControlBufferMax()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamStreamParameterBufferMax()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ADABC
 * Size:	000008
 */
int JAIGlobalParameter::getParamAutoHeapMax()
{
	/*
	lwz      r3, autoHeapMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADAC4
 * Size:	000008
 */
int JAIGlobalParameter::getParamStayHeapMax()
{
	/*
	lwz      r3, stayHeapMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADACC
 * Size:	000008
 */
uint JAIGlobalParameter::getParamSeqPlayTrackMax()
{
	/*
	lwz      r3, seqPlayTrackMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamInputGainDown()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamOutputGainUp()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ADAD4
 * Size:	000008
 */
float JAIGlobalParameter::getParamDistanceMax()
{
	/*
	lfs      f1, distanceMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADADC
 * Size:	000008
 */
void JAIGlobalParameter::getParamMaxVolumeDistance()
{
	/*
	lfs      f1, maxVolumeDistance__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADAE4
 * Size:	000008
 */
void JAIGlobalParameter::getParamMinDistanceVolume()
{
	/*
	lfs      f1, minDistanceVolume__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void JAIGlobalParameter::getParamSoundOutputMode()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamSeDistanceFxParameter()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JAIGlobalParameter::getParamInitDataLoadOffFlag()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JAIGlobalParameter::getParamStreamUseOffFlag()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ADAEC
 * Size:	000020
 */
void JAIGlobalParameter::getParamStreamDecodedBufferBlocks()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       getDecodedBufferBlocks__Q27JAInter9StreamMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADB0C
 * Size:	000008
 */
void JAIGlobalParameter::getParamAutoHeapRoomSize()
{
	/*
	lwz      r3, autoHeapRoomSize__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADB14
 * Size:	000008
 */
void JAIGlobalParameter::getParamStayHeapSize()
{
	/*
	lwz      r3, stayHeapSize__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADB1C
 * Size:	000008
 */
void JAIGlobalParameter::getParamSeDolbyCenterValue()
{
	/*
	lfs      f1, seDolbyCenterValue__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamSeDolbyFrontDistanceMax()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamSeDolbyBehindDistanceMax()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ADB24
 * Size:	000008
 */
void JAIGlobalParameter::getParamInitDataFileName()
{
	/*
	lwz      r3, initDataFileName__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamSoundTableFileName()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ADB2C
 * Size:	000008
 */
void JAIGlobalParameter::getParamWavePath()
{
	/*
	lwz      r3, wavePath__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADB34
 * Size:	000008
 */
void JAIGlobalParameter::getParamSequenceArchivesPath()
{
	/*
	lwz      r3, sequenceArchivesPath__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADB3C
 * Size:	000008
 */
void JAIGlobalParameter::getParamStreamPath()
{
	/*
	lwz      r3, streamPath__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADB44
 * Size:	000008
 */
void JAIGlobalParameter::getParamAudioResPath()
{
	/*
	lwz      r3, audioResPath__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADB4C
 * Size:	000008
 */
void JAIGlobalParameter::getParamSequenceArchivesFileName()
{
	/*
	lwz      r3, sequenceArchivesFileName__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JAIGlobalParameter::getParamSeqEntryCancelFlag()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JAIGlobalParameter::getParamStreamEntryCancelFlag()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ADB54
 * Size:	000008
 */
void JAIGlobalParameter::getParamDopplarMoveTime()
{
	/*
	lwz      r3, dopplarMoveTime__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamDopplarParameter()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ADB5C
 * Size:	000008
 */
void JAIGlobalParameter::getParamDistanceParameterMoveTime()
{
	/*
	lbz      r3, distanceParameterMoveTime__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADB64
 * Size:	000008
 */
void JAIGlobalParameter::getParamDummyObjectLifeTime()
{
	/*
	lwz      r3, dummyObjectLifeTime__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADB6C
 * Size:	000008
 */
void JAIGlobalParameter::getParamDummyObjectMax()
{
	/*
	lwz      r3, dummyObjectMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADB74
 * Size:	000008
 */
void JAIGlobalParameter::getParamSeqMuteVolumeSePlay()
{
	/*
	lbz      r3, seqMuteVolumeSePlay__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADB7C
 * Size:	000008
 */
void JAIGlobalParameter::getParamSeqMuteMoveSpeedSePlay()
{
	/*
	lwz      r3, seqMuteMoveSpeedSePlay__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADB84
 * Size:	000008
 */
void JAIGlobalParameter::getParamAudioCameraMax()
{
	/*
	lwz      r3, audioCameraMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamSystemTrackMax()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIGlobalParameter::getParamSystemRootTrackMax()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ADB8C
 * Size:	000008
 */
void JAIGlobalParameter::getParamSeqParameterLines()
{
	/*
	lbz      r3, seqParameterLines__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADB94
 * Size:	000008
 */
void JAIGlobalParameter::getParamStreamParameterLines()
{
	/*
	lbz      r3, streamParameterLines__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800ADB9C
 * Size:	000008
 */
void JAIGlobalParameter::getParamSeDistanceWaitMax()
{
	/*
	lhz      r3, seDistanceWaitMax__18JAIGlobalParameter@sda21(r13)
	blr
	*/
}
