#include "JSystem/JAS/JASCallbackMgr.h"
#include "JSystem/JAS/JASDriver.h"
#include "JSystem/JAS/JASDsp.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JASDriverIF_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global C5BASE_PITCHTABLE__9JASDriver
    C5BASE_PITCHTABLE__9JASDriver:
        .float 0.03125
        .float 0.033108
        .float 0.035077
        .float 0.037162
        .4byte 0x3D214489
        .4byte 0x3D2ADB40
        .4byte 0x3D3504C5
        .4byte 0x3D3FC86D
        .4byte 0x3D4B2FA9
        .4byte 0x3D5744F6
        .4byte 0x3D6411C3
        .4byte 0x3D71A198
        .4byte 0x3D800000
        .4byte 0x3D879C41
        .4byte 0x3D8FACE6
        .4byte 0x3D9837B5
        .4byte 0x3DA1450F
        .4byte 0x3DAADBC6
        .4byte 0x3DB504C5
        .4byte 0x3DBFC86D
        .4byte 0x3DCB302F
        .4byte 0x3DD744F6
        .4byte 0x3DE411C3
        .4byte 0x3DF1A198
        .float 0.125
        .4byte 0x3E079C84
        .4byte 0x3E0FACE6
        .4byte 0x3E1837F8
        .4byte 0x3E21450F
        .4byte 0x3E2ADC0A
        .4byte 0x3E350508
        .4byte 0x3E3FC86D
        .4byte 0x3E4B2FEC
        .4byte 0x3E5744F6
        .4byte 0x3E641206
        .4byte 0x3E71A1DC
        .float 0.25
        .4byte 0x3E879C84
        .4byte 0x3E8FACE6
        .4byte 0x3E9837F8
        .4byte 0x3EA1450F
        .4byte 0x3EAADC0A
        .4byte 0x3EB504E6
        .4byte 0x3EBFC88E
        .float 0.39685
        .4byte 0x3ED744F6
        .4byte 0x3EE411E4
        .4byte 0x3EF1A1BA
        .float 0.5
        .4byte 0x3F079C84
        .4byte 0x3F0FACD6
        .4byte 0x3F1837F8
        .4byte 0x3F214520
        .4byte 0x3F2ADC0A
        .4byte 0x3F3504F7
        .4byte 0x3F3FC88E
        .4byte 0x3F4B2FFD
        .4byte 0x3F574507
        .4byte 0x3F6411F5
        .4byte 0x3F71A1CB
        .float 1.0
        .4byte 0x3F879C7C
        .4byte 0x3F8FACD6
        .4byte 0x3F9837EF
        .4byte 0x3FA14517
        .4byte 0x3FAADC0A
        .4byte 0x3FB504F7
        .4byte 0x3FBFC886
        .4byte 0x3FCB2FF5
        .4byte 0x3FD744FE
        .4byte 0x3FE411F5
        .4byte 0x3FF1A1C2
        .4byte 0x40000000
        .4byte 0x40079C7C
        .4byte 0x400FACD6
        .4byte 0x401837EF
        .4byte 0x40214517
        .4byte 0x402ADC0A
        .4byte 0x403504F7
        .4byte 0x403FC88A
        .4byte 0x404B2FF9
        .4byte 0x405744FE
        .4byte 0x406411F5
        .4byte 0x4071A1C2
        .4byte 0x40800000
        .4byte 0x40879C7E
        .4byte 0x408FACD8
        .4byte 0x409837F1
        .4byte 0x40A14519
        .4byte 0x40AADC0A
        .4byte 0x40B504F5
        .4byte 0x40BFC888
        .4byte 0x40CB2FF9
        .4byte 0x40D74500
        .4byte 0x40E411F5
        .4byte 0x40F1A1C2
        .4byte 0x41000000
        .4byte 0x41079C7D
        .4byte 0x410FACD7
        .4byte 0x411837F1
        .4byte 0x41214519
        .4byte 0x412ADC0A
        .4byte 0x413504F5
        .4byte 0x413FC889
        .4byte 0x414B2FF8
        .4byte 0x41574500
        .4byte 0x416411F4
        .4byte 0x4171A1C3
        .4byte 0x41800000
        .4byte 0x41879C7D
        .4byte 0x418FACD7
        .4byte 0x419837F1
        .4byte 0x41A14519
        .4byte 0x41AADC0A
        .4byte 0x41B504F5
        .4byte 0x41BFC889
        .4byte 0x41CB2FF8
        .4byte 0x41D74500
        .4byte 0x41E411F4
        .4byte 0x41F1A1C3
        .4byte 0x42000000
        .4byte 0x42079C7D
        .4byte 0x420FACD7
        .4byte 0x421837F1
        .4byte 0x42214519
        .4byte 0x422ADC0A
        .4byte 0x423504F5
        .4byte 0x423FC889
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global MAX_MIXERLEVEL__9JASDriver
    MAX_MIXERLEVEL__9JASDriver:
        .2byte 0x2ee0
    .global MAX_AUTOMIXERLEVEL__9JASDriver
    MAX_AUTOMIXERLEVEL__9JASDriver:
        .2byte 0x2ee0
    .global JAS_SYSTEM_OUTPUT_MODE__9JASDriver
    JAS_SYSTEM_OUTPUT_MODE__9JASDriver:
        .4byte 1

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516E50
    lbl_80516E50:
        .4byte 0x467FFE00
        .4byte 0x00000000
    .global lbl_80516E58
    lbl_80516E58:
        .4byte 0x43300000
        .4byte 0x00000000
*/

JASCallbackMgr JASDriver::sDspSyncCallback;
JASCallbackMgr JASDriver::sSubFrameCallback;
JASCallbackMgr JASDriver::sUpdateDacCallback;

/*
 * --INFO--
 * Address:	800A47D8
 * Size:	000030
 */
float JASDriver::key2pitch_c5(int key)
{
	if (key < 0) {
		key = 0;
	} else if (0x7F < key) {
		key = 0x7F;
	}
	return C5BASE_PITCHTABLE[key];
}

/*
 * --INFO--
 * Address:	800A4808
 * Size:	000050
 */
void JASDriver::setLevel(float channelLevel, float autoMixerLevel, float dspMixerLevel)
{
	MAX_MIXERLEVEL     = channelLevel * 16383.5f;
	MAX_AUTOMIXERLEVEL = autoMixerLevel * 16383.5f;
	JASDsp::setDSPMixerLevel(dspMixerLevel);
}

/*
 * --INFO--
 * Address:	800A4858
 * Size:	00003C
 */
void JASDriver::setMixerLevel(float channelLevel, float dspMixerLevel)
{
	MAX_MIXERLEVEL = channelLevel * 16383.5f;
	JASDsp::setDSPMixerLevel(dspMixerLevel);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASDriver::setChannelLevel(float channelLevel)
{
	// UNUSED FUNCTION
	MAX_MIXERLEVEL = channelLevel * 16383.5f;
}

/*
 * --INFO--
 * Address:	800A4894
 * Size:	000024
 */
void JASDriver::setAutoLevel(float autoMixerLevel) { MAX_AUTOMIXERLEVEL = autoMixerLevel * 16383.5f; }

/*
 * --INFO--
 * Address:	800A48B8
 * Size:	000020
 */
void JASDriver::setDSPLevel(float dspMixerLevel) { JASDsp::setDSPMixerLevel(dspMixerLevel); }

/*
 * --INFO--
 * Address:	800A48D8
 * Size:	000008
 */
u16 JASDriver::getChannelLevel() { return MAX_MIXERLEVEL; }

/*
 * --INFO--
 * Address:	800A48E0
 * Size:	000008
 */
u16 JASDriver::getAutoLevel() { return MAX_AUTOMIXERLEVEL; }

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
s16 JASDriver::getDSPLevel()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
float JASDriver::getChannelLevel_f32()
{
	// UNUSED FUNCTION
	return MAX_MIXERLEVEL / 16383.5f;
}

/*
 * --INFO--
 * Address:	800A48E8
 * Size:	000030
 */
float JASDriver::getAutoLevel_f32() { return MAX_AUTOMIXERLEVEL / 16383.5f; }

/*
 * --INFO--
 * Address:	800A4918
 * Size:	000020
 */
float JASDriver::getDSPLevel_f32() { return JASDsp::getDSPMixerLevel(); }

/*
 * --INFO--
 * Address:	800A4938
 * Size:	000008
 */
void JASDriver::setOutputMode(unsigned long outputMode) { JAS_SYSTEM_OUTPUT_MODE = outputMode; }

/*
 * --INFO--
 * Address:	800A4940
 * Size:	000008
 */
u32 JASDriver::getOutputMode() { return JAS_SYSTEM_OUTPUT_MODE; }

/*
 * --INFO--
 * Address:	800A4948
 * Size:	000090
 */
bool JASDriver::rejectCallback(long (*callback)(void*), void* p2)
{
	bool v1 = false;
	v1 |= sDspSyncCallback.reject(callback, p2);
	v1 |= sSubFrameCallback.reject(callback, p2);
	v1 |= sUpdateDacCallback.reject(callback, p2);
	return v1;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, sDspSyncCallback__9JASDriver@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	addi     r30, r5, sDspSyncCallback__9JASDriver@l
	stw      r29, 0x14(r1)
	mr       r29, r4
	mr       r5, r29
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r4, r28
	addi     r3, r30, 0
	bl       reject__14JASCallbackMgrFPFPv_lPv
	mr       r31, r3
	mr       r4, r28
	mr       r5, r29
	addi     r3, r30, 0x80
	bl       reject__14JASCallbackMgrFPFPv_lPv
	or       r0, r31, r3
	mr       r4, r28
	mr       r5, r29
	addi     r3, r30, 0x100
	clrlwi   r30, r0, 0x18
	bl       reject__14JASCallbackMgrFPFPv_lPv
	or       r0, r30, r3
	lwz      r31, 0x1c(r1)
	clrlwi   r3, r0, 0x18
	lwz      r0, 0x24(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A49D8
 * Size:	000034
 */
bool JASDriver::registerDspSyncCallback(long (*callback)(void*), void* p2) { return sDspSyncCallback.regist(callback, p2); }

/*
 * --INFO--
 * Address:	800A4A0C
 * Size:	000034
 */
bool JASDriver::registerSubFrameCallback(long (*callback)(void*), void* p2) { return sSubFrameCallback.regist(callback, p2); }

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
bool JASDriver::registerUpdateDacCallback(long (*callback)(void*), void* p2)
{
	// UNUSED FUNCTION
	return sUpdateDacCallback.regist(callback, p2);
}

/*
 * --INFO--
 * Address:	800A4A40
 * Size:	000028
 */
void JASDriver::subframeCallback() { sSubFrameCallback.callback(); }

/*
 * --INFO--
 * Address:	800A4A68
 * Size:	000028
 */
void JASDriver::DSPSyncCallback() { sDspSyncCallback.callback(); }

/*
 * --INFO--
 * Address:	800A4A90
 * Size:	000028
 */
void JASDriver::updateDacCallback() { sUpdateDacCallback.callback(); }

/*
 * --INFO--
 * Address:	800A4AB8
 * Size:	000080
 */
// void __sinit_JASDriverIF_cpp(void) { }

/*
 * --INFO--
 * Address:	800A4B38
 * Size:	000010
 */
// JASCallbackMgr::TCallback::TCallback(void) { }
