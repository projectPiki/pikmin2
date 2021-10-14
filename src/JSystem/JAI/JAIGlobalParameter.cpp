

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
	.loc_0x0:
	  stw       r3, -0x7438(r13)
	  li        r0, 0x4
	  lwz       r3, -0x7498(r13)
	  stb       r0, 0xC(r3)
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
	.loc_0x0:
	  stw       r3, -0x7E98(r13)
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
	.loc_0x0:
	  stw       r3, -0x7E90(r13)
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
	.loc_0x0:
	  rlwinm    r0,r3,1,0,30
	  stw       r3, -0x7E88(r13)
	  stw       r0, -0x7E84(r13)
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
	.loc_0x0:
	  stw       r3, -0x7E84(r13)
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
	.loc_0x0:
	  stw       r3, -0x7E80(r13)
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
	.loc_0x0:
	  stw       r3, -0x7E7C(r13)
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
	.loc_0x0:
	  stfs      f1, -0x7E50(r13)
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
	.loc_0x0:
	  stfs      f1, -0x7E4C(r13)
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
	.loc_0x0:
	  stfs      f1, -0x7440(r13)
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
	.loc_0x0:
	  lwz       r4, -0x7498(r13)
	  lbz       r0, 0xE(r4)
	  rlwimi    r0,r3,3,28,28
	  stb       r0, 0xE(r4)
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
	.loc_0x0:
	  stw       r3, -0x7E78(r13)
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
	.loc_0x0:
	  stw       r3, -0x7E74(r13)
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
	.loc_0x0:
	  stw       r3, -0x7E70(r13)
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
	.loc_0x0:
	  stw       r3, -0x7E5C(r13)
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
	.loc_0x0:
	  stb       r3, -0x7EA0(r13)
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
	.loc_0x0:
	  stw       r3, -0x7E2C(r13)
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
	.loc_0x0:
	  stw       r3, -0x7E28(r13)
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
	.loc_0x0:
	  stw       r3, -0x7E24(r13)
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
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r3, 0x1
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  beq-      .loc_0x3C
	  bge-      .loc_0x28
	  cmpwi     r3, 0
	  bge-      .loc_0x34
	  b         .loc_0x48

	.loc_0x28:
	  cmpwi     r3, 0x3
	  bge-      .loc_0x48
	  b         .loc_0x44

	.loc_0x34:
	  li        r0, 0
	  b         .loc_0x48

	.loc_0x3C:
	  li        r0, 0x1
	  b         .loc_0x48

	.loc_0x44:
	  li        r0, 0x2

	.loc_0x48:
	  lwz       r4, -0x7498(r13)
	  stb       r3, 0xD(r4)
	  mr        r3, r0
	  bl        -0x9124
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
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
void JAIGlobalParameter::getParamSeCategoryMax()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x9BB8
	  lwz       r0, 0x14(r1)
	  rlwinm    r3,r3,0,24,31
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ADA94
 * Size:	000008
 */
void JAIGlobalParameter::getParamSoundSceneMax()
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7E98(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ADA9C
 * Size:	000008
 */
void JAIGlobalParameter::getParamSeRegistMax()
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7E94(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E90(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E8C(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E84(r13)
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
void JAIGlobalParameter::getParamAutoHeapMax()
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7E80(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ADAC4
 * Size:	000008
 */
void JAIGlobalParameter::getParamStayHeapMax()
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7E7C(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ADACC
 * Size:	000008
 */
void JAIGlobalParameter::getParamSeqPlayTrackMax()
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7E88(r13)
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
void JAIGlobalParameter::getParamDistanceMax()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x7E50(r13)
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
	.loc_0x0:
	  lfs       f1, -0x7E4C(r13)
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
	.loc_0x0:
	  lfs       f1, -0x7440(r13)
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
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0xB3C4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
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
	.loc_0x0:
	  lwz       r3, -0x7E78(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E74(r13)
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
	.loc_0x0:
	  lfs       f1, -0x7E48(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E70(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E6C(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E68(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E64(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E60(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E5C(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E3C(r13)
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
	.loc_0x0:
	  lbz       r3, -0x7EA0(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E38(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E34(r13)
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
	.loc_0x0:
	  lbz       r3, -0x7E9D(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E30(r13)
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
	.loc_0x0:
	  lwz       r3, -0x7E2C(r13)
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
	.loc_0x0:
	  lbz       r3, -0x7E9C(r13)
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
	.loc_0x0:
	  lbz       r3, -0x7E9B(r13)
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
	.loc_0x0:
	  lhz       r3, -0x7E0C(r13)
	  blr
	*/
}
