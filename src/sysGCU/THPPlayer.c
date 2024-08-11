#include "THP/THPPlayer.h"
#include "THP/THPRead.h"
#include "THP/THPVideoDecode.h"
#include "THP/THPAudioDecode.h"
#include "THP/THPDraw.h"
#include "JSystem/JUtility/JUTException.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "PSM/THPDinamics.h"
#include "Dolphin/ai.h"
#include "string.h"

static u32 WorkBuffer[16] ATTRIBUTE_ALIGN(32); // TODO, figure out if this is a struct
static OSMessageQueue PrepareReadyQueue;
static OSMessageQueue UsedTextureSetQueue;
static OSMessage UsedTextureSetMessage[3];
static s16 SoundBuffer[2][1120] ATTRIBUTE_ALIGN(32); // unsure if correct, could be a struct

THPPlayer ActivePlayer;

static BOOL Initialized;
static void* PrepareReadyMessage;
static VIRetraceCallback OldVIPostCallback;
static int SoundBufferIndex;
static s16* LastAudioBuffer;
static s16* CurAudioBuffer;

// clang-format off
static u16 VolumeTable[128] = {
	0, 2, 8, 18, 32, 50, 73, 99, 130,
	164, 203, 245, 292, 343, 398, 457, 520,
	587, 658, 733, 812, 895, 983, 1074, 1170,
	1269, 1373, 1481, 1592, 1708, 1828, 1952, 2080,
	2212, 2348, 2488, 2632, 2781, 2933, 3090, 3250,
	3415, 3583, 3756, 3933, 4114, 4298, 4487, 4680,
	4877, 5079, 5284, 5493, 5706, 5924, 6145, 6371,
	6600, 6834, 7072, 7313, 7559, 7809, 8063, 8321,
	8583, 8849, 9119, 9394, 9672, 9954, 10241, 10531,
	10826, 11125, 11427, 11734, 12045, 12360, 12679, 13002,
	13329, 13660, 13995, 14335, 14678, 15025, 15377, 15732,
	16092, 16456, 16823, 17195, 17571, 17951, 18335, 18723,
	19115, 19511, 19911, 20316, 20724, 21136, 21553, 21974,
	22398, 22827, 23260, 23696, 24137, 24582, 25031, 25484,
	25941, 26402, 26868, 27337, 27810, 28288, 28769, 29255,
	29744, 30238, 30736, 31238, 31744, 32254, -32768
};
// clang-format on

// forward declare statics
static s16* audioCallbackWithMSound(s32 p1);
static void PlayControl(u32);
static BOOL ProperTimingForStart();
static BOOL ProperTimingForGettingNextFrame();
static void PushUsedTextureSet(OSMessage msg);
static OSMessage PopUsedTextureSet();
static void MixAudio(s16*, s16*, u32);

/**
 * @note Address: 0x8044DE38
 * @note Size: 0xA8
 */
static s16* audioCallbackWithMSound(s32 p1)
{
	if (ActivePlayer.mIsOpen == FALSE || ActivePlayer.mInternalState != 2 || ActivePlayer.mAudioExist == 0) {
		return nullptr;
	}

	BOOL enable = OSEnableInterrupts();
	SoundBufferIndex ^= 1;
	MixAudio(SoundBuffer[SoundBufferIndex], nullptr, p1);
	OSRestoreInterrupts(enable);

	return SoundBuffer[SoundBufferIndex];
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
static void audioInitWithMSound() { JASDriver::registerMixCallback(audioCallbackWithMSound, MixMode_InterLeave); }

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
static void audioQuitWithMSound() { JASDriver::registerMixCallback(nullptr, MixMode_Mono); }

/**
 * @note Address: 0x8044DEE0
 * @note Size: 0xD8
 */
BOOL THPPlayerInit(int _)
{
	if (Initialized == FALSE) {
		memset(&ActivePlayer, 0, sizeof(THPPlayer));
		LCEnable();
		OSInitMessageQueue(&UsedTextureSetQueue, UsedTextureSetMessage, 3);

		if (THPInit() == FALSE) {
			return FALSE;
		}

		BOOL inter       = OSDisableInterrupts();
		SoundBufferIndex = 0;
		LastAudioBuffer  = nullptr;
		CurAudioBuffer   = nullptr;
		audioInitWithMSound();
		OSRestoreInterrupts(inter);

		memset(&SoundBuffer, 0, sizeof(SoundBuffer));
		DCFlushRange(&SoundBuffer, sizeof(SoundBuffer));
		Initialized = TRUE;
	}

	return TRUE;
}

/**
 * @note Address: 0x8044DFB8
 * @note Size: 0x34
 */
void THPPlayerQuit()
{
	LCDisable();
	audioQuitWithMSound();
	Initialized = FALSE;
}

/**
 * @note Address: 0x8044DFEC
 * @note Size: 0x334
 */
BOOL THPPlayerOpen(const char* fileName, BOOL onMemory)
{
	u32 readOffset;
	int i;

	if (Initialized == FALSE) {
		return FALSE;
	}

	if (ActivePlayer.mIsOpen) {
		return FALSE;
	}

	memset(&ActivePlayer.mVideoInfo, 0, sizeof(THPVideoInfo));
	memset(&ActivePlayer.mAudioInfo, 0, sizeof(THPAudioInfo));

	if (DVDOpen((char*)fileName, &ActivePlayer.mFileInfo) == FALSE) {
		return FALSE;
	}

	gTHPReaderDvdAccess = 1;
	if (DVDReadPrio(&ActivePlayer.mFileInfo, WorkBuffer, 64, 0, 2) < 0) {
		DVDClose(&ActivePlayer.mFileInfo);
		return FALSE;
	}
	gTHPReaderDvdAccess = 0;

	memcpy(&ActivePlayer.mHeader.mMagic, WorkBuffer, sizeof(THPHeader));

	if (strcmp(ActivePlayer.mHeader.mMagic, "THP") != 0) {
		DVDClose(&ActivePlayer.mFileInfo);
		return FALSE;
	}

	if (ActivePlayer.mHeader.mVersion != 0x11000) {
		DVDClose(&ActivePlayer.mFileInfo);
		return FALSE;
	}

	gTHPReaderDvdAccess = 1;
	readOffset          = ActivePlayer.mHeader.mCompInfoDataOffsets;
	if (DVDReadPrio(&ActivePlayer.mFileInfo, WorkBuffer, 32, readOffset, 2) < 0) {
		DVDClose(&ActivePlayer.mFileInfo);
		return FALSE;
	}
	gTHPReaderDvdAccess = 0;

	memcpy(&ActivePlayer.mCompInfo, WorkBuffer, sizeof(THPFrameCompInfo));
	readOffset += sizeof(THPFrameCompInfo);
	ActivePlayer.mAudioExist = 0;

	for (i = 0; i < ActivePlayer.mCompInfo.mNumComponents; i++) {
		switch (ActivePlayer.mCompInfo.mFrameComp[i]) {
		case 0: {
			gTHPReaderDvdAccess = 1;
			if (DVDReadPrio(&ActivePlayer.mFileInfo, WorkBuffer, 32, readOffset, 2) < 0) {
				DVDClose(&ActivePlayer.mFileInfo);
				return FALSE;
			}
			gTHPReaderDvdAccess = 0;

			memcpy(&ActivePlayer.mVideoInfo, WorkBuffer, sizeof(THPVideoInfo));
			readOffset += sizeof(THPVideoInfo);
			break;
		}
		case 1: {
			gTHPReaderDvdAccess = 1;
			if (DVDReadPrio(&ActivePlayer.mFileInfo, WorkBuffer, 32, readOffset, 2) < 0) {
				DVDClose(&ActivePlayer.mFileInfo);
				return FALSE;
			}
			gTHPReaderDvdAccess = 0;

			memcpy(&ActivePlayer.mAudioInfo, WorkBuffer, sizeof(THPAudioInfo));
			readOffset += sizeof(THPAudioInfo);
			ActivePlayer.mAudioExist = 1;
			break;
		}

		default:
			return FALSE;
		}
	}

	ActivePlayer.mInternalState = 0;
	ActivePlayer.mState         = 0;
	ActivePlayer.mPlayFlag      = 0;
	ActivePlayer.mIsOnMemory    = onMemory;
	ActivePlayer.mIsOpen        = TRUE;
	ActivePlayer.mCurVolume     = 127.0f;
	ActivePlayer.mTargetVolume  = 127.0f;
	ActivePlayer.mRampCount     = 0;

	return TRUE;
}

/**
 * @note Address: 0x8044E320
 * @note Size: 0x54
 */
BOOL THPPlayerClose()
{
	if (ActivePlayer.mIsOpen && ActivePlayer.mState == 0) {
		ActivePlayer.mIsOpen = FALSE;
		DVDClose(&ActivePlayer.mFileInfo);
		return TRUE;
	}

	return FALSE;
}

/**
 * @note Address: 0x8044E374
 * @note Size: 0xB0
 */
u32 THPPlayerCalcNeedMemory()
{
	if (ActivePlayer.mIsOpen) {
		u32 size = ActivePlayer.mIsOnMemory ? ALIGN_NEXT(ActivePlayer.mHeader.mMovieDataSize, 32)
		                                    : ALIGN_NEXT(ActivePlayer.mHeader.mBufferSize, 32) * 10;

		size += ALIGN_NEXT(ActivePlayer.mVideoInfo.mXSize * ActivePlayer.mVideoInfo.mYSize, 32) * 3;
		size += ALIGN_NEXT(ActivePlayer.mVideoInfo.mXSize * ActivePlayer.mVideoInfo.mYSize / 4, 32) * 3;
		size += ALIGN_NEXT(ActivePlayer.mVideoInfo.mXSize * ActivePlayer.mVideoInfo.mYSize / 4, 32) * 3;

		if (ActivePlayer.mAudioExist) {
			size += ALIGN_NEXT(ActivePlayer.mHeader.mAudioMaxSamples * 4, 32) * 3;
		}

		return size + 0x1000;
	}

	return 0;
}

/**
 * @note Address: 0x8044E424
 * @note Size: 0x210
 */
BOOL THPPlayerSetBuffer(u8* data)
{
	u8* workPtr;
	u32 ySampleSize;
	u32 uvSampleSize;
	int i;
	if (ActivePlayer.mIsOpen && ActivePlayer.mState == 0) {
		u8* workPtr = data;
		if (ActivePlayer.mIsOnMemory) {
			ActivePlayer.mMovieData = data;
			workPtr += ActivePlayer.mHeader.mMovieDataSize;
		} else {

			for (i = 0; i < ARRAY_SIZE(ActivePlayer.mReadBuffer); i++) {
				ActivePlayer.mReadBuffer[i].mPtr = workPtr;
				workPtr += ALIGN_NEXT(ActivePlayer.mHeader.mBufferSize, 32);
			}
		}

		ySampleSize  = ALIGN_NEXT(ActivePlayer.mVideoInfo.mXSize * ActivePlayer.mVideoInfo.mYSize, 32);
		uvSampleSize = ALIGN_NEXT(ActivePlayer.mVideoInfo.mXSize * ActivePlayer.mVideoInfo.mYSize / 4, 32);

		for (i = 0; i < ARRAY_SIZE(ActivePlayer.mTextureSet); i++) {
			ActivePlayer.mTextureSet[i].mYTexture = workPtr;

			DCInvalidateRange(workPtr, ySampleSize);
			workPtr += ySampleSize;

			ActivePlayer.mTextureSet[i].mUTexture = workPtr;
			DCInvalidateRange(workPtr, uvSampleSize);
			workPtr += uvSampleSize;

			ActivePlayer.mTextureSet[i].mVTexture = workPtr;
			DCInvalidateRange(workPtr, uvSampleSize);
			workPtr += uvSampleSize;
		}

		if (ActivePlayer.mAudioExist) {
			for (i = 0; i < ARRAY_SIZE(ActivePlayer.mAudioBuffer); i++) {
				ActivePlayer.mAudioBuffer[i].mBuffer      = (s16*)workPtr;
				ActivePlayer.mAudioBuffer[i].mCurPtr      = (s16*)workPtr;
				ActivePlayer.mAudioBuffer[i].mValidSample = 0;
				workPtr += ALIGN_NEXT(ActivePlayer.mHeader.mAudioMaxSamples * 4, 32);
			}
		}

		ActivePlayer.mThpWorkArea = workPtr;
		return TRUE;
	}

	return FALSE;
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
void InitAllMessageQueue()
{
	int i;
	if (ActivePlayer.mIsOnMemory == FALSE) {
		for (i = 0; i < 10; i++) {
			PushFreeReadBuffer((OSMessage*)&ActivePlayer.mReadBuffer[i]);
		}
	}

	for (i = 0; i < 3; i++) {
		PushFreeTextureSet((OSMessage*)&ActivePlayer.mTextureSet[i]);
	}

	if (ActivePlayer.mAudioExist) {
		for (i = 0; i < 3; i++) {
			PushFreeAudioBuffer((OSMessage*)&ActivePlayer.mAudioBuffer[i]);
		}
	}
	OSInitMessageQueue(&PrepareReadyQueue, &PrepareReadyMessage, 1);
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
BOOL WaitUntilPrepare()
{
	OSMessage msg;

	OSReceiveMessage(&PrepareReadyQueue, &msg, OS_MESSAGE_BLOCK);

	if ((BOOL)msg) {
		return TRUE;
	} else {
		return FALSE;
	}
}

/**
 * @note Address: 0x8044E634
 * @note Size: 0x30
 */
void PrepareReady(int msg) { OSSendMessage(&PrepareReadyQueue, (OSMessage)msg, OS_MESSAGE_BLOCK); }

/**
 * @note Address: 0x8044E664
 * @note Size: 0x394
 */
BOOL THPPlayerPrepare(int frame, u8 flag, int audioTrack)
{
	u8* threadData;
	if (ActivePlayer.mIsOpen && ActivePlayer.mState == 0) {
		if (frame > 0) {
			if (ActivePlayer.mHeader.mOffsetDataOffsets == 0) {
				return FALSE;
			}

			if (ActivePlayer.mHeader.mNumFrames > frame) {
				gTHPReaderDvdAccess = 1;
				if (DVDReadPrio(&ActivePlayer.mFileInfo, WorkBuffer, 0x20, ActivePlayer.mHeader.mOffsetDataOffsets + (frame - 1) * 4, 2)
				    < 0) {
					return FALSE;
				}
				gTHPReaderDvdAccess = 0;

				ActivePlayer.mInitOffset    = ActivePlayer.mHeader.mMovieDataOffsets + WorkBuffer[0];
				ActivePlayer.mInitReadFrame = frame;
				ActivePlayer.mInitReadSize  = WorkBuffer[1] - WorkBuffer[0];

			} else {
				return FALSE;
			}

		} else {
			ActivePlayer.mInitOffset    = ActivePlayer.mHeader.mMovieDataOffsets;
			ActivePlayer.mInitReadSize  = ActivePlayer.mHeader.mFirstFrameSize;
			ActivePlayer.mInitReadFrame = frame;
		}

		if (ActivePlayer.mAudioExist) {
			if (audioTrack < 0 || audioTrack >= ActivePlayer.mAudioInfo.mSndNumTracks) {
				return FALSE;
			}
			ActivePlayer.mCurAudioTrack = audioTrack;
		}

		ActivePlayer.mPlayFlag         = flag & 1;
		ActivePlayer.mVideoDecodeCount = 0;

		if (ActivePlayer.mIsOnMemory) {
			gTHPReaderDvdAccess = 1;
			if (DVDReadPrio(&ActivePlayer.mFileInfo, ActivePlayer.mMovieData, ActivePlayer.mHeader.mMovieDataSize,
			                ActivePlayer.mHeader.mMovieDataOffsets, 2)
			    < 0) {
				return FALSE;
			}

			gTHPReaderDvdAccess = 0;

			threadData = ActivePlayer.mMovieData + ActivePlayer.mInitOffset - ActivePlayer.mHeader.mMovieDataOffsets;
			CreateVideoDecodeThread(14, threadData);

			if (ActivePlayer.mAudioExist) {
				CreateAudioDecodeThread(12, threadData);
			}

		} else {
			JUT_ASSERTLINE(789, CreateVideoDecodeThread(14, 0), "CreateVideoDecodeThread failure.\n");

			if (ActivePlayer.mAudioExist) {
				JUT_ASSERTLINE(801, CreateAudioDecodeThread(12, nullptr), "CreateAudioDecodeThread failure.\n");
			}
			JUT_ASSERTLINE(812, CreateReadThread(8), "CreateReadThread failure.\n");
		}

		// ActivePlayer.mCurVideoNumber = -1;
		// ActivePlayer.mCurAudioNumber = 0;

		InitAllMessageQueue();
		VideoDecodeThreadStart();

		if (ActivePlayer.mAudioExist) {
			AudioDecodeThreadStart();
		}

		if (ActivePlayer.mIsOnMemory == 0) {
			ReadThreadStart();
		}

		if (!WaitUntilPrepare()) {
			return FALSE;
		}

		ActivePlayer.mState           = 1;
		ActivePlayer.mInternalState   = 0;
		ActivePlayer.mDispTextureSet  = nullptr;
		ActivePlayer.mPlayAudioBuffer = nullptr;
		ActivePlayer.mCurVideoNumber  = 0;
		ActivePlayer.mCurAudioNumber  = 0;

		OldVIPostCallback = VISetPostRetraceCallback(PlayControl);

		OSReport("THPPlayerPrepare()終了\n"); // 'THPPlayerPrepare end'

		return TRUE;
	}

	return FALSE;
}

/**
 * @note Address: 0x8044E9F8
 * @note Size: 0x60
 */
BOOL THPPlayerPlay()
{
	if (ActivePlayer.mIsOpen && (ActivePlayer.mState == 1 || ActivePlayer.mState == 4)) {
		ActivePlayer.mState        = 2;
		ActivePlayer.mPrevCount    = 0;
		ActivePlayer.mCurCount     = 0;
		ActivePlayer.mRetraceCount = -1;

		return TRUE;
	}
	return FALSE;
}

/**
 * @note Address: 0x8044EA58
 * @note Size: 0xD0
 */
void THPPlayerStop()
{
	if (ActivePlayer.mIsOpen && ActivePlayer.mState != 0) {
		ActivePlayer.mInternalState = 0;
		ActivePlayer.mState         = 0;

		VISetPostRetraceCallback(OldVIPostCallback);

		if (ActivePlayer.mIsOnMemory == 0) {
			DVDCancel(&ActivePlayer.mFileInfo.cBlock);
			ReadThreadCancel();
		}

		VideoDecodeThreadCancel();

		if (ActivePlayer.mAudioExist) {
			AudioDecodeThreadCancel();
			audioQuitWithMSound();

			OSReport("オーディオ関係を初期化\n"); // 'initialize audio-related information'
		}

		while (PopUsedTextureSet() != 0) {
			;
		}

		ActivePlayer.mRampCount  = 0;
		ActivePlayer.mCurVolume  = ActivePlayer.mTargetVolume;
		ActivePlayer.mDvdError   = 0;
		ActivePlayer.mVideoError = 0;
	}
}

/**
 * @note Address: 0x8044EB28
 * @note Size: 0x3C
 */
BOOL THPPlayerPause()
{
	if (ActivePlayer.mIsOpen && ActivePlayer.mState == 2) {
		ActivePlayer.mInternalState = 4;
		ActivePlayer.mState         = 4;
		return TRUE;
	}
	return FALSE;
}

/**
 * @note Address: 0x8044EB64
 * @note Size: 0x2B8
 */
static void PlayControl(u32 retraceCnt)
{
	THPTextureSet* decodedTexture;

	if (OldVIPostCallback != nullptr) {
		OldVIPostCallback(retraceCnt);
	}

	decodedTexture = (THPTextureSet*)-1;
	if (ActivePlayer.mIsOpen && ActivePlayer.mState == 2) {
		if (ActivePlayer.mDvdError || ActivePlayer.mVideoError) {
			ActivePlayer.mState         = 5;
			ActivePlayer.mInternalState = 5;
			return;
		}

		if (++ActivePlayer.mRetraceCount == 0) {
			if (ProperTimingForStart()) {
				if (ActivePlayer.mAudioExist) {
					if (ActivePlayer.mCurVideoNumber - ActivePlayer.mCurAudioNumber <= 1) {
						decodedTexture = (THPTextureSet*)PopDecodedTextureSet(0);

						ActivePlayer.mVideoDecodeCount--;
						ActivePlayer.mCurVideoNumber++;

					} else {
						ActivePlayer.mInternalState = 2;
					}
				} else {
					decodedTexture = (THPTextureSet*)PopDecodedTextureSet(0);
				}

			} else {
				ActivePlayer.mRetraceCount = -1;
			}

		} else {
			if (ActivePlayer.mRetraceCount == 1) {
				ActivePlayer.mInternalState = 2;
			}

			if (ProperTimingForGettingNextFrame()) {
				if (ActivePlayer.mAudioExist) {
					if (ActivePlayer.mCurVideoNumber - ActivePlayer.mCurAudioNumber <= 1) {
						decodedTexture = (THPTextureSet*)PopDecodedTextureSet(0);
						ActivePlayer.mVideoDecodeCount--;
						ActivePlayer.mCurVideoNumber++;
					}

				} else {
					decodedTexture = (THPTextureSet*)PopDecodedTextureSet(0);
				}
			}
		}

		if (decodedTexture && decodedTexture != (THPTextureSet*)-1) {
			if (ActivePlayer.mDispTextureSet) {
				PushUsedTextureSet(ActivePlayer.mDispTextureSet);
			}
			ActivePlayer.mDispTextureSet = decodedTexture;
		}

		if ((ActivePlayer.mPlayFlag & 1) == 0) {
			if (ActivePlayer.mAudioExist) {
				int audioFrame = ActivePlayer.mCurAudioNumber + ActivePlayer.mInitReadFrame;
				if (audioFrame == ActivePlayer.mHeader.mNumFrames && ActivePlayer.mPlayAudioBuffer == NULL) {
					ActivePlayer.mInternalState = 3;
					ActivePlayer.mState         = 3;
				}
			} else {
				int curFrame = ActivePlayer.mDispTextureSet != NULL
				                 ? ActivePlayer.mDispTextureSet->mFrameNumber + ActivePlayer.mInitReadFrame
				                 : ActivePlayer.mInitReadFrame - 1;
				if (curFrame == ActivePlayer.mHeader.mNumFrames - 1 && decodedTexture == NULL) {
					ActivePlayer.mInternalState = 3;
					ActivePlayer.mState         = 3;
				}
			}
		}
	}
}

/**
 * @note Address: 0x8044EE1C
 * @note Size: 0x6C
 */
static BOOL ProperTimingForStart()
{
	if (ActivePlayer.mVideoInfo.mVideoType & 1) {
		if (VIGetNextField() == 0) {
			return TRUE;
		}
	} else if (ActivePlayer.mVideoInfo.mVideoType & 2) {
		if (VIGetNextField() == 1) {
			return TRUE;
		}
	} else {
		return TRUE;
	}

	return FALSE;
}

/**
 * @note Address: 0x8044EE88
 * @note Size: 0x140
 */
static BOOL ProperTimingForGettingNextFrame()
{
	if (ActivePlayer.mVideoInfo.mVideoType & 1) {
		if (VIGetNextField() == 0) {
			return TRUE;
		}
	} else if (ActivePlayer.mVideoInfo.mVideoType & 2) {
		if (VIGetNextField() == 1) {
			return TRUE;
		}
	} else {
		int rate = ActivePlayer.mHeader.mFrameRate * 100.0f;
		if (VIGetTvFormat() == VI_PAL) {
			ActivePlayer.mCurCount = ActivePlayer.mRetraceCount * rate / 5000;
		} else {
			ActivePlayer.mCurCount = ActivePlayer.mRetraceCount * rate / 5994;
		}

		if (ActivePlayer.mPrevCount != ActivePlayer.mCurCount) {
			ActivePlayer.mPrevCount = ActivePlayer.mCurCount;
			return TRUE;
		}
	}

	return FALSE;
}

/**
 * @note Address: 0x8044EFC8
 * @note Size: 0xD8
 */
int THPPlayerDrawCurrentFrame(GXRenderModeObj* obj, int x, int y, int polyWidth, int polyHeight)
{
	int frame;
	if (ActivePlayer.mIsOpen && ActivePlayer.mState != 0 && ActivePlayer.mDispTextureSet) {
		THPGXYuv2RgbSetup(obj);
		THPGXYuv2RgbDraw((u32*)ActivePlayer.mDispTextureSet->mYTexture, (u32*)ActivePlayer.mDispTextureSet->mUTexture,
		                 (u32*)ActivePlayer.mDispTextureSet->mVTexture, x, y, ActivePlayer.mVideoInfo.mXSize,
		                 ActivePlayer.mVideoInfo.mYSize, polyWidth, polyHeight);
		THPGXRestore();
		frame = (ActivePlayer.mDispTextureSet->mFrameNumber + ActivePlayer.mInitReadFrame) % ActivePlayer.mHeader.mNumFrames;
	} else {
		frame = -1;
	}
	return frame;
}

/**
 * @note Address: 0x8044F0A0
 * @note Size: 0x48
 */
BOOL THPPlayerGetVideoInfo(void* dst)
{
	if (ActivePlayer.mIsOpen) {
		memcpy(dst, &ActivePlayer.mVideoInfo, sizeof(THPVideoInfo));
		return TRUE;
	}

	return FALSE;
}

/**
 * @note Address: 0x8044F0E8
 * @note Size: 0x48
 */
BOOL THPPlayerGetAudioInfo(void* dst)
{
	if (ActivePlayer.mIsOpen) {
		memcpy(dst, &ActivePlayer.mAudioInfo, sizeof(THPAudioInfo));
		return TRUE;
	}

	return FALSE;
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
u32 THPPlayerGetTotalFrame()
{
	if (ActivePlayer.mIsOpen) {
		return ActivePlayer.mHeader.mNumFrames;
	}

	return 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
u8 THPPlayerGetState(void) { return ActivePlayer.mState; }

/**
 * @note Address: 0x8044F130
 * @note Size: 0x30
 */
static void PushUsedTextureSet(OSMessage msg) { OSSendMessage(&UsedTextureSetQueue, msg, OS_MESSAGE_NOBLOCK); }

/**
 * @note Address: 0x8044F160
 * @note Size: 0x44
 */
static OSMessage PopUsedTextureSet()
{
	OSMessage msg;
	if (OSReceiveMessage(&UsedTextureSetQueue, &msg, OS_MESSAGE_NOBLOCK) == 1)
		return msg;

	return nullptr;
}

/**
 * @note Address: 0x8044F1A4
 * @note Size: 0x70
 */
void THPPlayerDrawDone()
{
	GXDrawDone();
	if (Initialized) {
		while (TRUE) {
			OSMessage msg = PopUsedTextureSet();
			if (msg) {
				PushFreeTextureSet((OSMessage*)msg);
			} else {
				break;
			}
		}
	}
}

/**
 * @note Address: 0x8044F214
 * @note Size: 0x250
 */
static void MixAudio(s16* buf, s16* buf2, u32 n)
{
	if (ActivePlayer.mIsOpen && ActivePlayer.mInternalState == 2 && ActivePlayer.mAudioExist) {
		u32 lastSample;
		u32 n2;
		int i;
		s16* aBuf;
		n2   = n;
		aBuf = buf;
		s16* curPtr;
		int vol2, vol1;
		u16 volFromTable;

		do {
			do {
				if (ActivePlayer.mPlayAudioBuffer == nullptr) {
					ActivePlayer.mPlayAudioBuffer = (THPAudioBuffer*)PopDecodedAudioBuffer(0);
					if (ActivePlayer.mPlayAudioBuffer == nullptr) {
						memset(aBuf, 0, n2 * 4);
						return;
					}
					ActivePlayer.mCurAudioNumber++;
				}
			} while ((lastSample = ActivePlayer.mPlayAudioBuffer->mValidSample) == 0);

			if (lastSample >= n2) {
				lastSample = n2;
			}

			curPtr = ActivePlayer.mPlayAudioBuffer->mCurPtr;

			for (i = 0; i < lastSample; i++) {
				if (ActivePlayer.mRampCount != 0) {
					ActivePlayer.mRampCount--;
					ActivePlayer.mCurVolume += ActivePlayer.mDeltaVolume;
				} else {
					ActivePlayer.mCurVolume = ActivePlayer.mTargetVolume;
				}

				volFromTable = VolumeTable[(int)ActivePlayer.mCurVolume];
				vol1         = SHORT_FLOAT_MAX * PSM::sTHPDinamicsProc.dinamics((volFromTable * curPtr[0] >> 15) / SHORT_FLOAT_MAX);
				// clamp volume
				if (vol1 < -32768) {
					vol1 = -32768;
				}
				if (vol1 > 32767) {
					vol1 = 32767;
				}
				*aBuf++ = vol1;

				vol2 = SHORT_FLOAT_MAX * PSM::sTHPDinamicsProc.dinamics((volFromTable * curPtr[1] >> 15) / SHORT_FLOAT_MAX);
				if (vol2 < -32768) {
					vol2 = -32768;
				}
				if (vol2 > 32767) {
					vol2 = 32767;
				}
				*aBuf++ = vol2;

				curPtr += 2;
			}

			n2 -= lastSample;
			ActivePlayer.mPlayAudioBuffer->mValidSample -= lastSample;
			ActivePlayer.mPlayAudioBuffer->mCurPtr = curPtr;

			if ((ActivePlayer.mPlayAudioBuffer)->mValidSample == 0) {
				PushFreeAudioBuffer(ActivePlayer.mPlayAudioBuffer);
				ActivePlayer.mPlayAudioBuffer = nullptr;
			}

			if (n2 == 0) {
				break;
			}

		} while (true);

	} else {
		memset(buf, 0, n * 4);
	}
}

/**
 * @note Address: 0x8044F464
 * @note Size: 0x128
 */
BOOL THPPlayerSetVolume(int vol, int duration)
{
	u32 numSamples;
	BOOL interrupt;
	if (ActivePlayer.mIsOpen && ActivePlayer.mAudioExist) {
		numSamples = AIGetDSPSampleRate() == 0 ? 32 : 48;

		// clamp volume
		if (vol > 127) {
			vol = 127;
		}
		if (vol < 0) {
			vol = 0;
		}

		// clamp duration
		if (duration > 60000) {
			duration = 60000;
		}
		if (duration < 0) {
			duration = 0;
		}

		interrupt = OSDisableInterrupts();

		ActivePlayer.mTargetVolume = vol;
		if (duration != 0) {
			ActivePlayer.mRampCount   = numSamples * duration;
			ActivePlayer.mDeltaVolume = (ActivePlayer.mTargetVolume - ActivePlayer.mCurVolume) / ActivePlayer.mRampCount;
		} else {
			ActivePlayer.mRampCount = 0;
			ActivePlayer.mCurVolume = ActivePlayer.mTargetVolume;
		}
		OSRestoreInterrupts(interrupt);

		return TRUE;
	}
	return FALSE;
}
