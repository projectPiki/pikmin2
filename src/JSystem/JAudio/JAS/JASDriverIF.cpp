#include "JSystem/JAudio/JAS/JASCallbackMgr.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "JSystem/JAudio/JAS/JASDsp.h"

namespace JASDriver {

static JASCallbackMgr sDspSyncCallback;
static JASCallbackMgr sSubFrameCallback;
static JASCallbackMgr sUpdateDacCallback;

// clang-format off
static const f32 C5BASE_PITCHTABLE[] = {
    0.0312500f, 0.0331080f, 0.0350770f, 0.0371620f, 0.0393720f, 0.0417130f, 0.0441940f, 0.0468220f,
    0.0496060f, 0.0525560f, 0.0556810f, 0.0589920f, 0.0625000f, 0.0662160f, 0.0701540f, 0.0743250f,
    0.0787450f, 0.0834270f, 0.0883880f, 0.0936440f, 0.0992130f, 0.1051120f, 0.1113620f, 0.1179840f,
    0.1250000f, 0.1324330f, 0.1403080f, 0.1486510f, 0.1574900f, 0.1668550f, 0.1767770f, 0.1872880f,
    0.1984250f, 0.2102240f, 0.2227250f, 0.2359690f, 0.2500000f, 0.2648660f, 0.2806160f, 0.2973020f,
    0.3149800f, 0.3337100f, 0.3535530f, 0.3745770f, 0.3968500f, 0.4204480f, 0.4454490f, 0.4719370f,
    0.5000000f, 0.5297320f, 0.5612310f, 0.5946040f, 0.6299610f, 0.6674200f, 0.7071070f, 0.7491540f,
    0.7937010f, 0.8408970f, 0.8908990f, 0.9438750f, 1.0000000f, 1.0594630f, 1.1224620f, 1.1892070f,
    1.2599210f, 1.3348400f, 1.4142140f, 1.4983070f, 1.5874010f, 1.6817930f, 1.7817980f, 1.8877490f,
    2.0000000f, 2.1189260f, 2.2449240f, 2.3784140f, 2.5198420f, 2.6696800f, 2.8284280f, 2.9966150f,
    3.1748030f, 3.3635860f, 3.5635960f, 3.7754980f, 4.0000000f, 4.2378530f, 4.4898490f, 4.7568290f,
    5.0396850f, 5.3393600f, 5.6568550f, 5.9932290f, 6.3496060f, 6.7271730f, 7.1271920f, 7.5509960f,
    8.0000000f, 8.4757050f, 8.9796970f, 9.5136580f, 10.079370f, 10.678720f, 11.313710f, 11.986459f,
    12.699211f, 13.454346f, 14.254383f, 15.101993f, 16.000000f, 16.951410f, 17.959394f, 19.027315f,
    20.158740f, 21.357440f, 22.627420f, 23.972918f, 25.398422f, 26.908691f, 28.508766f, 30.203985f, 
    32.000000f, 33.902820f, 35.918790f, 38.054630f, 40.317480f, 42.714880f, 45.254840f, 47.945835f,
};
// clang-format on

static u16 MAX_MIXERLEVEL         = 12000;
static u16 MAX_AUTOMIXERLEVEL     = 12000;
static u32 JAS_SYSTEM_OUTPUT_MODE = JASOUTPUT_Stereo;

/**
 * @note Address: 0x800A47D8
 * @note Size: 0x30
 */
f32 key2pitch_c5(int key)
{
	if (key < 0) {
		key = 0;
	} else if (0x7F < key) {
		key = 0x7F;
	}
	return C5BASE_PITCHTABLE[key];
}

/**
 * @note Address: 0x800A4808
 * @note Size: 0x50
 */
void setLevel(f32 channelLevel, f32 autoMixerLevel, f32 dspMixerLevel)
{
	MAX_MIXERLEVEL     = channelLevel * 16383.5f;
	MAX_AUTOMIXERLEVEL = autoMixerLevel * 16383.5f;
	JASDsp::setDSPMixerLevel(dspMixerLevel);
}

/**
 * @note Address: 0x800A4858
 * @note Size: 0x3C
 */
void setMixerLevel(f32 channelLevel, f32 dspMixerLevel)
{
	MAX_MIXERLEVEL = channelLevel * 16383.5f;
	JASDsp::setDSPMixerLevel(dspMixerLevel);
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void setChannelLevel(f32 channelLevel)
{
	// UNUSED FUNCTION
	MAX_MIXERLEVEL = channelLevel * 16383.5f;
}

/**
 * @note Address: 0x800A4894
 * @note Size: 0x24
 */
void setAutoLevel(f32 autoMixerLevel) { MAX_AUTOMIXERLEVEL = autoMixerLevel * 16383.5f; }

/**
 * @note Address: 0x800A48B8
 * @note Size: 0x20
 */
void setDSPLevel(f32 dspMixerLevel) { JASDsp::setDSPMixerLevel(dspMixerLevel); }

/**
 * @note Address: 0x800A48D8
 * @note Size: 0x8
 */
u16 getChannelLevel() { return MAX_MIXERLEVEL; }

/**
 * @note Address: 0x800A48E0
 * @note Size: 0x8
 */
u16 getAutoLevel() { return MAX_AUTOMIXERLEVEL; }

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
s16 getDSPLevel()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
f32 getChannelLevel_f32()
{
	// UNUSED FUNCTION
	return MAX_MIXERLEVEL / 16383.5f;
}

/**
 * @note Address: 0x800A48E8
 * @note Size: 0x30
 */
f32 getAutoLevel_f32() { return MAX_AUTOMIXERLEVEL / 16383.5f; }

/**
 * @note Address: 0x800A4918
 * @note Size: 0x20
 */
f32 getDSPLevel_f32() { return JASDsp::getDSPMixerLevel(); }

/**
 * @note Address: 0x800A4938
 * @note Size: 0x8
 */
void setOutputMode(u32 outputMode) { JAS_SYSTEM_OUTPUT_MODE = outputMode; }

/**
 * @note Address: 0x800A4940
 * @note Size: 0x8
 */
u32 getOutputMode() { return JAS_SYSTEM_OUTPUT_MODE; }

/**
 * @note Address: 0x800A4948
 * @note Size: 0x90
 */
bool rejectCallback(s32 (*callback)(void*), void* argument)
{
	bool value = sDspSyncCallback.reject(callback, argument);
	value |= sSubFrameCallback.reject(callback, argument);
	value |= sUpdateDacCallback.reject(callback, argument);
	return value;
}

/**
 * @note Address: 0x800A49D8
 * @note Size: 0x34
 */
bool registerDspSyncCallback(s32 (*callback)(void*), void* p2) { return sDspSyncCallback.regist(callback, p2); }

/**
 * @note Address: 0x800A4A0C
 * @note Size: 0x34
 */
bool registerSubFrameCallback(s32 (*callback)(void*), void* p2) { return sSubFrameCallback.regist(callback, p2); }

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
bool registerUpdateDacCallback(s32 (*callback)(void*), void* p2)
{
	// UNUSED FUNCTION
	return sUpdateDacCallback.regist(callback, p2);
}

/**
 * @note Address: 0x800A4A40
 * @note Size: 0x28
 */
void subframeCallback() { sSubFrameCallback.callback(); }

/**
 * @note Address: 0x800A4A68
 * @note Size: 0x28
 */
void DSPSyncCallback() { sDspSyncCallback.callback(); }

/**
 * @note Address: 0x800A4A90
 * @note Size: 0x28
 */
void updateDacCallback() { sUpdateDacCallback.callback(); }

} // namespace JASDriver
