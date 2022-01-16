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
int getParamSeqTrackMax(void);
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
int getParamDopplarMoveTime(void);
u8 getParamDistanceParameterMoveTime(void);
int getParamDummyObjectLifeTime(void);
int getParamDummyObjectMax(void);
u8 getParamSeqMuteVolumeSePlay(void);
int getParamSeqMuteMoveSpeedSePlay(void);
uint getParamAudioCameraMax(void);
u8 getParamSeqParameterLines(void);
u8 getParamStreamParameterLines(void);
short getParamSeDistanceWaitMax(void);
} // namespace JAIGlobalParameter

#endif
