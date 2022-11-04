#ifndef _JSYSTEM_JAI_JAIGLOBALPARAMETER
#define _JSYSTEM_JAI_JAIGLOBALPARAMETER

#include "types.h"

namespace JAIGlobalParameter {
void setParamInitDataPointer(void*);
void setParamSoundSceneMax(u32);
void setParamSeTrackMax(u32);
void setParamSeqPlayTrackMax(u32);
void setParamSeqControlBufferMax(u32);
void setParamAutoHeapMax(u32);
void setParamStayHeapMax(u32);
void setParamDistanceMax(float);
void setParamMaxVolumeDistance(float);
void setParamMinDistanceVolume(float);
void setParamStreamInsideBufferCut(bool);
void setParamAutoHeapRoomSize(u32);
void setParamStayHeapSize(u32);
void setParamInitDataFileName(char*);
void setParamSequenceArchivesFileName(char*);
void setParamDistanceParameterMoveTime(u8);
void setParamAudioCameraMax(u32);
void setParamSystemTrackMax(long);
void setParamSystemRootTrackMax(long);
void setParamSoundOutputMode(u32);
u8 getParamSeCategoryMax(void);
u32 getParamSoundSceneMax(void);
int getParamSeRegistMax(void);
uint getParamSeTrackMax(void);
u32 getParamSeqTrackMax(void);
int getParamSeqControlBufferMax(void);
int getParamAutoHeapMax(void);
int getParamStayHeapMax(void);
uint getParamSeqPlayTrackMax(void);
float getParamDistanceMax(void);
float getParamMaxVolumeDistance(void);
float getParamMinDistanceVolume(void);
int getParamStreamDecodedBufferBlocks(void);
int getParamAutoHeapRoomSize(void);
u32 getParamStayHeapSize(void);
float getParamSeDolbyCenterValue(void);
char* getParamInitDataFileName(void);
char* getParamWavePath(void);
char* getParamSequenceArchivesPath(void);
char* getParamStreamPath(void);
char* getParamAudioResPath(void);
char* getParamSequenceArchivesFileName(void);
u32 getParamDopplarMoveTime(void);
u8 getParamDistanceParameterMoveTime(void);
int getParamDummyObjectLifeTime(void);
int getParamDummyObjectMax(void);
u8 getParamSeqMuteVolumeSePlay(void);
int getParamSeqMuteMoveSpeedSePlay(void);
u32 getParamAudioCameraMax(void);
u8 getParamSeqParameterLines(void);
u8 getParamStreamParameterLines(void);
short getParamSeDistanceWaitMax(void);

extern const u8 distanceParameterMoveTime;
extern const u8 audioSystemThreadPriority;
extern const u8 audioDvdThreadPriority;
extern const u8 seqMuteVolumeSePlay;
extern const u8 seqParameterLines;
extern const u8 streamParameterLines;
extern const u16 seDistanceFxParameter;
// ...
extern const u32 autoHeapMax;
extern const u32 stayHeapMax;
extern const u32 autoHeapRoomSize;
extern const u32 stayHeapSize;
extern const char* initDataFileName;
extern const char* wavePath;
extern const char* sequenceArchivesPath;
extern const char* streamPath;
extern const char* audioResPath;
extern const char* sequenceArchivesFileName;
extern const float inputGainDown;
extern const float outputGainUp;
extern const float distanceMax;
extern const float maxVolumeDistance;
extern const float seDolbyCenterValue;
extern const float seDolbyFrontDistanceMax;
extern const float seDolbyBehindDistanceMax;
extern u32 dopplarMoveTime;
extern const int dummyObjectLifeTime;
extern const int dummyObjectMax;
extern const int seqMuteMoveSpeedSePlay;
extern u32 audioCameraMax;
extern const s32 systemTrackMax;
extern const s32 systemRootTrackMax;
extern const float panDistanceMax;
extern const float panDistance2Max;
extern const float panAngleParameter;
extern const float panAngleParameter2;
extern const float dopplarParameter;
extern const s16 seDistanceWaitMax;
extern const float seDistancepitchMax;

extern u16 seDefaultFx;
extern u32 interfaceHeapSize;
extern float minDistanceVolume;
} // namespace JAIGlobalParameter

#endif
