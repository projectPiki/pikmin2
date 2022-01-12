#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__9JAIStream
    __vt__9JAIStream:
        .4byte 0
        .4byte 0
        .4byte setPortData__9JAIStreamFUcUs
        .4byte getPortData__9JAIStreamFUc
        .4byte start__8JAISoundFUl
        .4byte stop__9JAIStreamFUl
        .4byte release__8JAISoundFv
        .4byte setVolume__9JAIStreamFfUlUc
        .4byte getVolume__9JAIStreamFUc
        .4byte setPan__9JAIStreamFfUlUc
        .4byte getPan__9JAIStreamFUc
        .4byte setPitch__9JAIStreamFfUlUc
        .4byte getPitch__9JAIStreamFUc
        .4byte setFxmix__9JAIStreamFfUlUc
        .4byte getFxmix__9JAIStreamFUc
        .4byte setDolby__9JAIStreamFfUlUc
        .4byte getDolby__9JAIStreamFUc
        .4byte setTempoProportion__8JAISoundFfUl
        .4byte getTempoProportion__8JAISoundFv
        .4byte setVolumeU7__9JAIStreamFUcUlUc
        .4byte getVolumeU7__9JAIStreamFUc
        .4byte setPanU7__9JAIStreamFUcUlUc
        .4byte getPanU7__9JAIStreamFUc
        .4byte setFxmixU7__9JAIStreamFUcUlUc
        .4byte getFxmixU7__9JAIStreamFUc
        .4byte setDolbyU7__9JAIStreamFUcUlUc
        .4byte getDolbyU7__9JAIStreamFUc
        .4byte setDirectVolume__8JAISoundFfUl
        .4byte setDirectPan__8JAISoundFfUl
        .4byte setDirectPitch__8JAISoundFfUl
        .4byte setDirectFxmix__8JAISoundFfUl
        .4byte setDirectDolby__8JAISoundFfUl
        .4byte setDemoVolume__8JAISoundFfUl
        .4byte setDemoPan__8JAISoundFfUl
        .4byte setDemoPitch__8JAISoundFfUl
        .4byte setDemoFxmix__8JAISoundFfUl
        .4byte setDemoDolby__8JAISoundFfUl
        .4byte setDemoVolumeU7__8JAISoundFUcUl
        .4byte setDemoPanU7__8JAISoundFUcUl
        .4byte setDemoFxmixU7__8JAISoundFUcUl
        .4byte setDemoDolbyU7__8JAISoundFUcUl
        .4byte getFadeCounter__9JAIStreamFv
        .4byte setPrepareFlag__9JAIStreamFUc
        .4byte checkReady__9JAIStreamFv
        .4byte setDistanceParameterMoveTime__8JAISoundFUc
        .4byte setAdjustPriority__8JAISoundFs
        .4byte setPositionDopplarCommon__8JAISoundFUl
        .4byte setDistanceVolumeCommon__8JAISoundFfUc
        .4byte setDistancePanCommon__8JAISoundFv
        .4byte setDistanceDolbyCommon__8JAISoundFv
        .4byte
   initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
        .4byte onGet__8JAISoundFv
        .4byte onRelease__8JAISoundFv
    .global __vt__5JAISe
    __vt__5JAISe:
        .4byte 0
        .4byte 0
        .4byte setPortData__5JAISeFUcUs
        .4byte getPortData__5JAISeFUc
        .4byte start__8JAISoundFUl
        .4byte stop__5JAISeFUl
        .4byte release__8JAISoundFv
        .4byte setVolume__5JAISeFfUlUc
        .4byte getVolume__5JAISeFUc
        .4byte setPan__5JAISeFfUlUc
        .4byte getPan__5JAISeFUc
        .4byte setPitch__5JAISeFfUlUc
        .4byte getPitch__5JAISeFUc
        .4byte setFxmix__5JAISeFfUlUc
        .4byte getFxmix__5JAISeFUc
        .4byte setDolby__5JAISeFfUlUc
        .4byte getDolby__5JAISeFUc
        .4byte setTempoProportion__8JAISoundFfUl
        .4byte getTempoProportion__8JAISoundFv
        .4byte setVolumeU7__5JAISeFUcUlUc
        .4byte getVolumeU7__5JAISeFUc
        .4byte setPanU7__5JAISeFUcUlUc
        .4byte getPanU7__5JAISeFUc
        .4byte setFxmixU7__5JAISeFUcUlUc
        .4byte getFxmixU7__5JAISeFUc
        .4byte setDolbyU7__5JAISeFUcUlUc
        .4byte getDolbyU7__5JAISeFUc
        .4byte setDirectVolume__8JAISoundFfUl
        .4byte setDirectPan__8JAISoundFfUl
        .4byte setDirectPitch__8JAISoundFfUl
        .4byte setDirectFxmix__8JAISoundFfUl
        .4byte setDirectDolby__8JAISoundFfUl
        .4byte setDemoVolume__8JAISoundFfUl
        .4byte setDemoPan__8JAISoundFfUl
        .4byte setDemoPitch__8JAISoundFfUl
        .4byte setDemoFxmix__8JAISoundFfUl
        .4byte setDemoDolby__8JAISoundFfUl
        .4byte setDemoVolumeU7__8JAISoundFUcUl
        .4byte setDemoPanU7__8JAISoundFUcUl
        .4byte setDemoFxmixU7__8JAISoundFUcUl
        .4byte setDemoDolbyU7__8JAISoundFUcUl
        .4byte getFadeCounter__5JAISeFv
        .4byte setPrepareFlag__8JAISoundFUc
        .4byte checkReady__8JAISoundFv
        .4byte setDistanceParameterMoveTime__8JAISoundFUc
        .4byte setAdjustPriority__8JAISoundFs
        .4byte setPositionDopplarCommon__8JAISoundFUl
        .4byte setDistanceVolumeCommon__8JAISoundFfUc
        .4byte setDistancePanCommon__8JAISoundFv
        .4byte setDistanceDolbyCommon__8JAISoundFv
        .4byte
   initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
        .4byte onGet__8JAISoundFv
        .4byte onRelease__8JAISoundFv
        .4byte setSeDistanceParameters__5JAISeFv
        .4byte setSeDistanceVolume__5JAISeFUc
        .4byte setSeDistancePan__5JAISeFUc
        .4byte setSeDistancePitch__5JAISeFUc
        .4byte setSeDistanceFxmix__5JAISeFUc
        .4byte setSeDistanceFir__5JAISeFUc
        .4byte setSeDistanceDolby__5JAISeFUc
        .4byte setSePositionDopplar__5JAISeFv
    .global __vt__11JAISequence
    __vt__11JAISequence:
        .4byte 0
        .4byte 0
        .4byte setPortData__11JAISequenceFUcUs
        .4byte getPortData__11JAISequenceFUc
        .4byte start__8JAISoundFUl
        .4byte stop__11JAISequenceFUl
        .4byte release__8JAISoundFv
        .4byte setVolume__11JAISequenceFfUlUc
        .4byte getVolume__11JAISequenceFUc
        .4byte setPan__11JAISequenceFfUlUc
        .4byte getPan__11JAISequenceFUc
        .4byte setPitch__11JAISequenceFfUlUc
        .4byte getPitch__11JAISequenceFUc
        .4byte setFxmix__11JAISequenceFfUlUc
        .4byte getFxmix__11JAISequenceFUc
        .4byte setDolby__11JAISequenceFfUlUc
        .4byte getDolby__11JAISequenceFUc
        .4byte setTempoProportion__11JAISequenceFfUl
        .4byte getTempoProportion__11JAISequenceFv
        .4byte setVolumeU7__11JAISequenceFUcUlUc
        .4byte getVolumeU7__11JAISequenceFUc
        .4byte setPanU7__11JAISequenceFUcUlUc
        .4byte getPanU7__11JAISequenceFUc
        .4byte setFxmixU7__11JAISequenceFUcUlUc
        .4byte getFxmixU7__11JAISequenceFUc
        .4byte setDolbyU7__11JAISequenceFUcUlUc
        .4byte getDolbyU7__11JAISequenceFUc
        .4byte setDirectVolume__8JAISoundFfUl
        .4byte setDirectPan__8JAISoundFfUl
        .4byte setDirectPitch__8JAISoundFfUl
        .4byte setDirectFxmix__8JAISoundFfUl
        .4byte setDirectDolby__8JAISoundFfUl
        .4byte setDemoVolume__8JAISoundFfUl
        .4byte setDemoPan__8JAISoundFfUl
        .4byte setDemoPitch__8JAISoundFfUl
        .4byte setDemoFxmix__8JAISoundFfUl
        .4byte setDemoDolby__8JAISoundFfUl
        .4byte setDemoVolumeU7__8JAISoundFUcUl
        .4byte setDemoPanU7__8JAISoundFUcUl
        .4byte setDemoFxmixU7__8JAISoundFUcUl
        .4byte setDemoDolbyU7__8JAISoundFUcUl
        .4byte getFadeCounter__11JAISequenceFv
        .4byte setPrepareFlag__11JAISequenceFUc
        .4byte checkReady__11JAISequenceFv
        .4byte setDistanceParameterMoveTime__8JAISoundFUc
        .4byte setAdjustPriority__8JAISoundFs
        .4byte setPositionDopplarCommon__8JAISoundFUl
        .4byte setDistanceVolumeCommon__8JAISoundFfUc
        .4byte setDistancePanCommon__8JAISoundFv
        .4byte setDistanceDolbyCommon__8JAISoundFv
        .4byte
   initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
        .4byte onGet__8JAISoundFv
        .4byte onRelease__8JAISoundFv
    .global __vt__8JAISound
    __vt__8JAISound:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte start__8JAISoundFUl
        .4byte stop__8JAISoundFUl
        .4byte release__8JAISoundFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte setTempoProportion__8JAISoundFfUl
        .4byte getTempoProportion__8JAISoundFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte setDirectVolume__8JAISoundFfUl
        .4byte setDirectPan__8JAISoundFfUl
        .4byte setDirectPitch__8JAISoundFfUl
        .4byte setDirectFxmix__8JAISoundFfUl
        .4byte setDirectDolby__8JAISoundFfUl
        .4byte setDemoVolume__8JAISoundFfUl
        .4byte setDemoPan__8JAISoundFfUl
        .4byte setDemoPitch__8JAISoundFfUl
        .4byte setDemoFxmix__8JAISoundFfUl
        .4byte setDemoDolby__8JAISoundFfUl
        .4byte setDemoVolumeU7__8JAISoundFUcUl
        .4byte setDemoPanU7__8JAISoundFUcUl
        .4byte setDemoFxmixU7__8JAISoundFUcUl
        .4byte setDemoDolbyU7__8JAISoundFUcUl
        .4byte 0
        .4byte setPrepareFlag__8JAISoundFUc
        .4byte checkReady__8JAISoundFv
        .4byte setDistanceParameterMoveTime__8JAISoundFUc
        .4byte setAdjustPriority__8JAISoundFs
        .4byte setPositionDopplarCommon__8JAISoundFUl
        .4byte setDistanceVolumeCommon__8JAISoundFfUc
        .4byte setDistancePanCommon__8JAISoundFv
        .4byte setDistanceDolbyCommon__8JAISoundFv
        .4byte
   initParameter__8JAISoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo
        .4byte onGet__8JAISoundFv
        .4byte onRelease__8JAISoundFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global _port$2234
    _port$2234:
        .skip 0x2
    .global _port$2291
    _port$2291:
        .skip 0x2
    .global init$2292
    init$2292:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516FE0
    lbl_80516FE0:
        .float 1.0
    .global lbl_80516FE4
    lbl_80516FE4:
        .4byte 0x00000000
    .global lbl_80516FE8
    lbl_80516FE8:
        .float 0.5
        .4byte 0x00000000
    .global lbl_80516FF0
    lbl_80516FF0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516FF8
    lbl_80516FF8:
        .4byte 0x3FE00000
        .4byte 0x00000000
    .global lbl_80517000
    lbl_80517000:
        .4byte 0x40080000
        .4byte 0x00000000
    .global lbl_80517008
    lbl_80517008:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80517010
    lbl_80517010:
        .float 0.1
    .global lbl_80517014
    lbl_80517014:
        .4byte 0x40000000
    .global lbl_80517018
    lbl_80517018:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80517020
    lbl_80517020:
        .4byte 0x42FE0000
    .global lbl_80517024
    lbl_80517024:
        .4byte 0x4F800000
    .global lbl_80517028
    lbl_80517028:
        .4byte 0x447A0000
    .global lbl_8051702C
    lbl_8051702C:
        .4byte 0x41800000
    .global lbl_80517030
    lbl_80517030:
        .4byte 0x43400000
    .global lbl_80517034
    lbl_80517034:
        .float -1.0
    .global lbl_80517038
    lbl_80517038:
        .4byte 0x41200000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
JAISound::JAISound()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<JAISound>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B3838
 * Size:	0000EC
 */
JAISequence::JAISequence()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r4, r29
	mr       r30, r4
	bl       __ct__10JSUPtrLinkFPv
	lis      r4, __vt__8JAISound@ha
	li       r3, 0
	addi     r4, r4, __vt__8JAISound@l
	li       r0, 0xa
	stw      r4, 0x10(r30)
	stb      r3, 0x15(r30)
	stb      r0, 0x16(r30)
	stw      r3, 0x38(r30)
	lwz      r31, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamAudioCameraMax__18JAIGlobalParameterFv
	mulli    r3, r3, 0x1c
	mr       r4, r31
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x34(r30)
	lis      r3, __vt__11JAISequence@ha
	addi     r0, r3, __vt__11JAISequence@l
	lfs      f0, lbl_80516FE0@sda21(r2)
	stw      r0, 0x10(r29)
	lis      r3, __defctor__Q27JAInter11MoveParaSetFv@ha
	addi     r4, r3, __defctor__Q27JAInter11MoveParaSetFv@l
	li       r0, 0
	stfs     f0, 0x4c(r29)
	addi     r3, r29, 0x58
	li       r5, 0
	li       r6, 0x10
	stfs     f0, 0x48(r29)
	li       r7, 0x10
	stw      r0, 0x54(r29)
	bl       __construct_array
	lis      r4, __defctor__Q27JAInter11MoveParaSetFv@ha
	addi     r3, r29, 0x158
	addi     r4, r4, __defctor__Q27JAInter11MoveParaSetFv@l
	li       r5, 0
	li       r6, 0x10
	li       r7, 0x14
	bl       __construct_array
	addi     r3, r29, 0x30c
	bl       __ct__8JASTrackFv
	addi     r3, r29, 0x674
	bl       __ct__13JASOuterParamFv
	lwz      r0, 0x24(r1)
	mr       r3, r29
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
JAInter::SeqParameter::~SeqParameter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
JAISound::~JAISound()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B3924
 * Size:	000154
 */
JAISe::JAISe()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	mr       r4, r31
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	bl       __ct__10JSUPtrLinkFPv
	lis      r4, __vt__8JAISound@ha
	li       r3, 0
	addi     r4, r4, __vt__8JAISound@l
	li       r0, 0xa
	stw      r4, 0x10(r29)
	stb      r3, 0x15(r29)
	stb      r0, 0x16(r29)
	stw      r3, 0x38(r29)
	lwz      r30, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamAudioCameraMax__18JAIGlobalParameterFv
	mulli    r3, r3, 0x1c
	mr       r4, r30
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x34(r29)
	lis      r3, __vt__5JAISe@ha
	addi     r0, r3, __vt__5JAISe@l
	li       r5, 0
	lis      r3, __defctor__Q27JAInter11MoveParaSetFv@ha
	stw      r0, 0x10(r31)
	addi     r4, r3, __defctor__Q27JAInter11MoveParaSetFv@l
	li       r6, 0x10
	addi     r3, r31, 0x6c
	li       r7, 0x10
	bl       __construct_array
	lis      r4, __defctor__Q27JAInter11MoveParaSetFv@ha
	addi     r3, r31, 0x16c
	addi     r4, r4, __defctor__Q27JAInter11MoveParaSetFv@l
	li       r5, 0
	li       r6, 0x10
	li       r7, 8
	bl       __construct_array
	lis      r4, __ct__Q27JAInter19MoveParaSetInitHalfFv@ha
	addi     r3, r31, 0x1ec
	addi     r4, r4, __ct__Q27JAInter19MoveParaSetInitHalfFv@l
	li       r5, 0
	li       r6, 0x10
	li       r7, 8
	bl       __construct_array
	lis      r4, __defctor__Q27JAInter11MoveParaSetFv@ha
	addi     r3, r31, 0x26c
	addi     r4, r4, __defctor__Q27JAInter11MoveParaSetFv@l
	li       r5, 0
	li       r6, 0x10
	li       r7, 8
	bl       __construct_array
	lis      r4, __ct__Q27JAInter19MoveParaSetInitZeroFv@ha
	addi     r3, r31, 0x2ec
	addi     r4, r4, __ct__Q27JAInter19MoveParaSetInitZeroFv@l
	li       r5, 0
	li       r6, 0x10
	li       r7, 8
	bl       __construct_array
	lis      r4, __ct__Q27JAInter19MoveParaSetInitZeroFv@ha
	addi     r3, r31, 0x36c
	addi     r4, r4, __ct__Q27JAInter19MoveParaSetInitZeroFv@l
	li       r5, 0
	li       r6, 0x10
	li       r7, 8
	bl       __construct_array
	lis      r4, __defctor__Q27JAInter11MoveParaSetFv@ha
	addi     r3, r31, 0x3ec
	addi     r4, r4, __defctor__Q27JAInter11MoveParaSetFv@l
	li       r5, 0
	li       r6, 0x10
	li       r7, 8
	bl       __construct_array
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3A78
 * Size:	0000AC
 */
JAIStream::JAIStream()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r4, r29
	mr       r30, r4
	bl       __ct__10JSUPtrLinkFPv
	lis      r4, __vt__8JAISound@ha
	li       r3, 0
	addi     r4, r4, __vt__8JAISound@l
	li       r0, 0xa
	stw      r4, 0x10(r30)
	stb      r3, 0x15(r30)
	stb      r0, 0x16(r30)
	stw      r3, 0x38(r30)
	lwz      r31, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       getParamAudioCameraMax__18JAIGlobalParameterFv
	mulli    r3, r3, 0x1c
	mr       r4, r31
	li       r5, 0x20
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x34(r30)
	lis      r3, __vt__9JAIStream@ha
	addi     r0, r3, __vt__9JAIStream@l
	li       r5, 0
	lis      r3, __defctor__Q27JAInter11MoveParaSetFv@ha
	stw      r0, 0x10(r29)
	addi     r4, r3, __defctor__Q27JAInter11MoveParaSetFv@l
	li       r6, 0x10
	addi     r3, r29, 0x64
	li       r7, 0x14
	bl       __construct_array
	lwz      r0, 0x24(r1)
	mr       r3, r29
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000114
 */
void JAISound::initMultiMoveParameter(JAInter::MoveParaSet*, unsigned char, unsigned long, float, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B3B24
 * Size:	000024
 */
void JAISe::getSeCategoryNumber()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x20(r3)
	bl       changeIDToCategory__Q27JAInter5SeMgrFUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3B48
 * Size:	00000C
 */
void JAISound::getSwBit()
{
	/*
	lwz      r3, 0x44(r3)
	lwz      r3, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3B54
 * Size:	000010
 */
void JAISound::checkSwBit(unsigned long)
{
	/*
	lwz      r3, 0x44(r3)
	lwz      r0, 0(r3)
	and      r3, r4, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3B64
 * Size:	00000C
 */
void JAISound::getInfoPriority()
{
	/*
	lwz      r3, 0x44(r3)
	lbz      r3, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3B70
 * Size:	000018
 */
void JAISound::clearMainSoundPPointer()
{
	/*
	lwz      r3, 0x40(r3)
	cmplwi   r3, 0
	beqlr
	li       r0, 0
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3B88
 * Size:	000014
 */
void JAISound::release()
{
	/*
	lwz      r4, 0x40(r3)
	li       r0, 0
	stw      r0, 0(r4)
	stw      r0, 0x40(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3B9C
 * Size:	00004C
 */
void JAISound::start(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0x10(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	stw      r31, 0x28(r30)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3BE8
 * Size:	000030
 */
void JAISound::stop(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	mr       r0, r3
	mr       r4, r0
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	bl       stopSoundHandle__8JAIBasicFP8JAISoundUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3C18
 * Size:	000078
 */
void JAISound::setPrepareFlag(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lis      r0, 0xc000
	lwz      r5, 0x20(r3)
	rlwinm   r6, r5, 0, 0, 1
	cmpw     r6, r0
	beq      lbl_800B3C70
	bge      lbl_800B3C50
	lis      r5, 0x80000001@ha
	addi     r0, r5, 0x80000001@l
	cmpw     r6, r0
	bge      lbl_800B3C80
	b        lbl_800B3C5C

lbl_800B3C50:
	cmpwi    r6, 0
	beq      lbl_800B3C80
	b        lbl_800B3C80

lbl_800B3C5C:
	lwz      r12, 0x10(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	b        lbl_800B3C80

lbl_800B3C70:
	lwz      r12, 0x10(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl

lbl_800B3C80:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3C90
 * Size:	000020
 */
void JAIStream::setPrepareFlag(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       setStreamPrepareFlag__9JAIStreamFUc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3CB0
 * Size:	000020
 */
void JAISequence::setPrepareFlag(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       setSeqPrepareFlag__11JAISequenceFUc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3CD0
 * Size:	000078
 */
void JAISound::checkReady()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lis      r0, 0xc000
	lwz      r4, 0x20(r3)
	rlwinm   r5, r4, 0, 0, 1
	cmpw     r5, r0
	beq      lbl_800B3D28
	bge      lbl_800B3D08
	lis      r4, 0x80000001@ha
	addi     r0, r4, 0x80000001@l
	cmpw     r5, r0
	bge      lbl_800B3D38
	b        lbl_800B3D14

lbl_800B3D08:
	cmpwi    r5, 0
	beq      lbl_800B3D38
	b        lbl_800B3D38

lbl_800B3D14:
	lwz      r12, 0x10(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	b        lbl_800B3D38

lbl_800B3D28:
	lwz      r12, 0x10(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl

lbl_800B3D38:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3D48
 * Size:	000020
 */
void JAIStream::checkReady()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       checkStreamReady__9JAIStreamFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3D68
 * Size:	000020
 */
void JAISequence::checkReady()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       checkSeqReady__11JAISequenceFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3D88
 * Size:	000154
 */
void JAISound::setDistanceVolumeCommon(float, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	lbz      r0, 0x18(r3)
	cmplwi   r0, 4
	beq      lbl_800B3DAC
	mulli    r0, r0, 0x1c
	lwz      r3, 0x34(r3)
	add      r3, r3, r0
	lfs      f2, 0x18(r3)
	b        lbl_800B3DEC

lbl_800B3DAC:
	lwz      r6, 0x34(r3)
	li       r7, 1
	lwz      r5, audioCameraMax__18JAIGlobalParameter@sda21(r13)
	lfs      f2, 0x18(r6)
	b        lbl_800B3DE0

lbl_800B3DC0:
	clrlwi   r0, r7, 0x18
	mulli    r3, r0, 0x1c
	addi     r0, r3, 0x18
	lfsx     f0, r6, r0
	fcmpo    cr0, f0, f2
	bge      lbl_800B3DDC
	fmr      f2, f0

lbl_800B3DDC:
	addi     r7, r7, 1

lbl_800B3DE0:
	clrlwi   r0, r7, 0x18
	cmplw    r0, r5
	blt      lbl_800B3DC0

lbl_800B3DEC:
	lfs      f0, maxVolumeDistance__18JAIGlobalParameter@sda21(r13)
	fcmpo    cr0, f2, f0
	bge      lbl_800B3E00
	lfs      f1, lbl_80516FE0@sda21(r2)
	b        lbl_800B3ED4

lbl_800B3E00:
	clrlwi   r0, r4, 0x18
	fsubs    f2, f2, f0
	cmplwi   r0, 3
	fsubs    f3, f1, f0
	ble      lbl_800B3E48
	clrlwi   r3, r4, 0x1e
	lis      r0, 0x4330
	addi     r3, r3, 1
	li       r5, 1
	slw      r3, r5, r3
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80516FF0@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fdivs    f3, f3, f0
	b        lbl_800B3E7C

lbl_800B3E48:
	cmplwi   r0, 0
	beq      lbl_800B3E7C
	clrlwi   r0, r4, 0x1e
	li       r3, 1
	slw      r3, r3, r0
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r0, 8(r1)
	lfd      f1, lbl_80516FF0@sda21(r2)
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fmuls    f3, f3, f0

lbl_800B3E7C:
	fcmpo    cr0, f2, f3
	bge      lbl_800B3EBC
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 3
	ble      lbl_800B3EA0
	fdivs    f0, f2, f3
	lfs      f1, lbl_80516FE0@sda21(r2)
	fsubs    f1, f1, f0
	b        lbl_800B3ED4

lbl_800B3EA0:
	fdivs    f0, f2, f3
	lfs      f2, lbl_80516FE0@sda21(r2)
	lfs      f3, minDistanceVolume__18JAIGlobalParameter@sda21(r13)
	fsubs    f1, f2, f3
	fsubs    f0, f2, f0
	fmadds   f1, f1, f0, f3
	b        lbl_800B3ED4

lbl_800B3EBC:
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 3
	ble      lbl_800B3ED0
	lfs      f1, lbl_80516FE4@sda21(r2)
	b        lbl_800B3ED4

lbl_800B3ED0:
	lfs      f1, minDistanceVolume__18JAIGlobalParameter@sda21(r13)

lbl_800B3ED4:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B3EDC
 * Size:	00015C
 */
void JAISound::setDistancePanCommon()
{
	/*
	stwu     r1, -0x10(r1)
	lwz      r0, audioCameraMax__18JAIGlobalParameter@sda21(r13)
	cmplwi   r0, 1
	bne      lbl_800B3FFC
	lwz      r3, 0x34(r3)
	lfs      f0, lbl_80516FE0@sda21(r2)
	lfs      f2, 0(r3)
	lfs      f1, 8(r3)
	fabs     f2, f2
	fabs     f3, f1
	frsp     f1, f2
	frsp     f2, f3
	fmr      f4, f1
	fmr      f3, f2
	fcmpo    cr0, f1, f0
	bge      lbl_800B3F2C
	fcmpo    cr0, f2, f0
	bge      lbl_800B3F2C
	lfs      f1, lbl_80516FE8@sda21(r2)
	b        lbl_800B4030

lbl_800B3F2C:
	lfs      f0, panDistanceMax__18JAIGlobalParameter@sda21(r13)
	fcmpo    cr0, f0, f1
	bge      lbl_800B3F3C
	fmr      f4, f0

lbl_800B3F3C:
	fcmpo    cr0, f0, f2
	bge      lbl_800B3F48
	fmr      f3, f0

lbl_800B3F48:
	lfs      f1, lbl_80516FE4@sda21(r2)
	lfs      f2, 0(r3)
	fcmpu    cr0, f1, f2
	bne      lbl_800B3F6C
	lfs      f0, 8(r3)
	fcmpu    cr0, f1, f0
	bne      lbl_800B3F6C
	lfs      f0, lbl_80516FE8@sda21(r2)
	b        lbl_800B3FF4

lbl_800B3F6C:
	lfs      f0, lbl_80516FE4@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_800B3FA8
	fcmpo    cr0, f4, f3
	cror     2, 1, 2
	bne      lbl_800B3FA8
	lfs      f2, panDistance2Max__18JAIGlobalParameter@sda21(r13)
	lfs      f1, panAngleParameter__18JAIGlobalParameter@sda21(r13)
	fsubs    f0, f2, f3
	lfs      f3, lbl_80516FE0@sda21(r2)
	fsubs    f2, f2, f4
	fmuls    f0, f1, f0
	fdivs    f0, f2, f0
	fsubs    f0, f3, f0
	b        lbl_800B3FF4

lbl_800B3FA8:
	lfs      f0, lbl_80516FE4@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_800B3FE0
	fcmpo    cr0, f4, f3
	cror     2, 1, 2
	bne      lbl_800B3FE0
	lfs      f2, panDistance2Max__18JAIGlobalParameter@sda21(r13)
	lfs      f1, panAngleParameter__18JAIGlobalParameter@sda21(r13)
	fsubs    f0, f2, f3
	fsubs    f2, f2, f4
	fmuls    f0, f1, f0
	fdivs    f0, f2, f0
	b        lbl_800B3FF4

lbl_800B3FE0:
	lfs      f0, panAngleParameter2__18JAIGlobalParameter@sda21(r13)
	lfs      f1, lbl_80516FE8@sda21(r2)
	fmuls    f0, f0, f3
	fdivs    f0, f2, f0
	fadds    f0, f1, f0

lbl_800B3FF4:
	fmr      f1, f0
	b        lbl_800B4030

lbl_800B3FFC:
	lbz      r0, 0x18(r3)
	cmplwi   r0, 4
	beq      lbl_800B402C
	clrlwi   r3, r0, 0x1f
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r0, 8(r1)
	lfd      f1, lbl_80516FF0@sda21(r2)
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f1, f0, f1
	b        lbl_800B4030

lbl_800B402C:
	lfs      f1, lbl_80516FE8@sda21(r2)

lbl_800B4030:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B4038
 * Size:	000270
 */
void JAISound::setPositionDopplarCommon(unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	lfs      f0, lbl_80516FE4@sda21(r2)
	lwz      r3, 0x34(r3)
	lfs      f6, 4(r3)
	lfs      f2, 0x10(r3)
	fmuls    f1, f6, f6
	lfs      f5, 0(r3)
	lfs      f3, 0xc(r3)
	fsubs    f9, f6, f2
	lfs      f7, 8(r3)
	fmadds   f1, f5, f5, f1
	lfs      f2, 0x14(r3)
	fsubs    f8, f5, f3
	fmadds   f4, f7, f7, f1
	fsubs    f10, f7, f2
	fcmpo    cr0, f4, f0
	ble      lbl_800B40C4
	frsqrte  f1, f4
	lfd      f3, lbl_80516FF8@sda21(r2)
	lfd      f2, lbl_80517000@sda21(r2)
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f0, f1, f0
	fmul     f4, f4, f0
	frsp     f4, f4
	b        lbl_800B4148

lbl_800B40C4:
	lfd      f0, lbl_80517008@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_800B40DC
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)
	b        lbl_800B4148

lbl_800B40DC:
	stfs     f4, 0xc(r1)
	lis      r0, 0x7f80
	lwz      r5, 0xc(r1)
	rlwinm   r3, r5, 0, 1, 8
	cmpw     r3, r0
	beq      lbl_800B4104
	bge      lbl_800B4134
	cmpwi    r3, 0
	beq      lbl_800B411C
	b        lbl_800B4134

lbl_800B4104:
	clrlwi.  r0, r5, 9
	beq      lbl_800B4114
	li       r0, 1
	b        lbl_800B4138

lbl_800B4114:
	li       r0, 2
	b        lbl_800B4138

lbl_800B411C:
	clrlwi.  r0, r5, 9
	beq      lbl_800B412C
	li       r0, 5
	b        lbl_800B4138

lbl_800B412C:
	li       r0, 3
	b        lbl_800B4138

lbl_800B4134:
	li       r0, 4

lbl_800B4138:
	cmpwi    r0, 1
	bne      lbl_800B4148
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)

lbl_800B4148:
	fadds    f1, f6, f9
	lfs      f0, lbl_80516FE4@sda21(r2)
	fadds    f2, f5, f8
	fadds    f3, f7, f10
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fmadds   f5, f3, f3, f1
	fcmpo    cr0, f5, f0
	ble      lbl_800B41B4
	frsqrte  f1, f5
	lfd      f3, lbl_80516FF8@sda21(r2)
	lfd      f2, lbl_80517000@sda21(r2)
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f5, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f5, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f5, f0, f2
	fmul     f0, f1, f0
	fmul     f0, f5, f0
	frsp     f0, f0
	b        lbl_800B4240

lbl_800B41B4:
	lfd      f0, lbl_80517008@sda21(r2)
	fcmpo    cr0, f5, f0
	bge      lbl_800B41CC
	lis      r3, __float_nan@ha
	lfs      f0, __float_nan@l(r3)
	b        lbl_800B4240

lbl_800B41CC:
	stfs     f5, 8(r1)
	lis      r0, 0x7f80
	lwz      r5, 8(r1)
	rlwinm   r3, r5, 0, 1, 8
	cmpw     r3, r0
	beq      lbl_800B41F4
	bge      lbl_800B4224
	cmpwi    r3, 0
	beq      lbl_800B420C
	b        lbl_800B4224

lbl_800B41F4:
	clrlwi.  r0, r5, 9
	beq      lbl_800B4204
	li       r0, 1
	b        lbl_800B4228

lbl_800B4204:
	li       r0, 2
	b        lbl_800B4228

lbl_800B420C:
	clrlwi.  r0, r5, 9
	beq      lbl_800B421C
	li       r0, 5
	b        lbl_800B4228

lbl_800B421C:
	li       r0, 3
	b        lbl_800B4228

lbl_800B4224:
	li       r0, 4

lbl_800B4228:
	cmpwi    r0, 1
	bne      lbl_800B423C
	lis      r3, __float_nan@ha
	lfs      f0, __float_nan@l(r3)
	b        lbl_800B4240

lbl_800B423C:
	fmr      f0, f5

lbl_800B4240:
	srwi     r3, r4, 8
	lis      r0, 0x4330
	mullw    r3, r3, r3
	stw      r0, 0x10(r1)
	lfd      f2, lbl_80517018@sda21(r2)
	fsubs    f4, f4, f0
	lfs      f3, dopplarParameter__18JAIGlobalParameter@sda21(r13)
	lfs      f5, lbl_80516FE0@sda21(r2)
	stw      r3, 0x14(r1)
	lfs      f0, lbl_80517010@sda21(r2)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fdivs    f1, f3, f1
	fdivs    f1, f4, f1
	fsubs    f1, f5, f1
	fdivs    f1, f5, f1
	fcmpo    cr0, f1, f0
	bge      lbl_800B4290
	fmr      f1, f0
	b        lbl_800B42A0

lbl_800B4290:
	lfs      f0, lbl_80517014@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_800B42A0
	fmr      f1, f0

lbl_800B42A0:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B42A8
 * Size:	000074
 */
void JAISound::setDistanceDolbyCommon()
{
	/*
	lwz      r0, 0x3c(r3)
	lwz      r3, 0x34(r3)
	cmplwi   r0, 0
	beq      lbl_800B42C8
	lfs      f1, 8(r3)
	lfs      f2, seDolbyFrontDistanceMax__18JAIGlobalParameter@sda21(r13)
	fcmpo    cr0, f1, f2
	bge      lbl_800B42D0

lbl_800B42C8:
	lfs      f1, lbl_80516FE4@sda21(r2)
	blr

lbl_800B42D0:
	lfs      f0, lbl_80516FE4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_800B42F0
	fsubs    f0, f2, f1
	lfs      f1, seDolbyCenterValue__18JAIGlobalParameter@sda21(r13)
	fmuls    f0, f1, f0
	fdivs    f1, f0, f2
	blr

lbl_800B42F0:
	lfs      f0, seDolbyBehindDistanceMax__18JAIGlobalParameter@sda21(r13)
	fcmpo    cr0, f1, f0
	bge      lbl_800B4314
	fdivs    f0, f1, f0
	lfs      f2, seDolbyCenterValue__18JAIGlobalParameter@sda21(r13)
	lfs      f1, lbl_80517020@sda21(r2)
	fsubs    f1, f1, f2
	fmadds   f1, f1, f0, f2
	blr

lbl_800B4314:
	lfs      f1, lbl_80517020@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B431C
 * Size:	000088
 */
void JAISequence::setSeqInterVolume(unsigned char, float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	rlwinm   r4, r4, 4, 0x14, 0x1b
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r4, 0x158
	mr       r4, r5
	add      r3, r30, r3
	bl       set__Q27JAInter11MoveParaSetFfUl
	cmpwi    r3, 1
	bne      lbl_800B436C
	clrlwi   r0, r31, 0x18
	li       r4, 1
	lwz      r5, 0x2cc(r30)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2cc(r30)

lbl_800B436C:
	lwz      r4, 0x308(r30)
	cmplwi   r4, 0
	beq      lbl_800B438C
	cmpwi    r3, 2
	beq      lbl_800B438C
	lwz      r0, 8(r4)
	oris     r0, r0, 4
	stw      r0, 8(r4)

lbl_800B438C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B43A4
 * Size:	000088
 */
void JAISequence::setSeqInterPan(unsigned char, float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm   r0, r4, 4, 0x14, 0x1b
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r4, r5
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x298(r3)
	add      r3, r3, r0
	bl       set__Q27JAInter11MoveParaSetFfUl
	cmpwi    r3, 1
	bne      lbl_800B43F4
	clrlwi   r0, r31, 0x18
	li       r4, 1
	lwz      r5, 0x2d0(r30)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2d0(r30)

lbl_800B43F4:
	lwz      r4, 0x308(r30)
	cmplwi   r4, 0
	beq      lbl_800B4414
	cmpwi    r3, 2
	beq      lbl_800B4414
	lwz      r0, 8(r4)
	oris     r0, r0, 8
	stw      r0, 8(r4)

lbl_800B4414:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B442C
 * Size:	000088
 */
void JAISequence::setSeqInterPitch(unsigned char, float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm   r0, r4, 4, 0x14, 0x1b
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r4, r5
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x29c(r3)
	add      r3, r3, r0
	bl       set__Q27JAInter11MoveParaSetFfUl
	cmpwi    r3, 1
	bne      lbl_800B447C
	clrlwi   r0, r31, 0x18
	li       r4, 1
	lwz      r5, 0x2d4(r30)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2d4(r30)

lbl_800B447C:
	lwz      r4, 0x308(r30)
	cmplwi   r4, 0
	beq      lbl_800B449C
	cmpwi    r3, 2
	beq      lbl_800B449C
	lwz      r0, 8(r4)
	oris     r0, r0, 0x10
	stw      r0, 8(r4)

lbl_800B449C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAISequence::setSeqInterFxmix(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void JAISequence::setSeqInterDolby(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAISequence::setSeqTempoProportion(float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void JAISequence::setSeqPortData(unsigned char, unsigned short, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JAISequence::setWaveReadMode(long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAISequence::setTrackVolume(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void JAISequence::setTrackVolumeMulti(unsigned char, unsigned long, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void JAISequence::setTrackMuteSwitch(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JAISequence::setTrackMuteSwitchMulti(unsigned long, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B44B4
 * Size:	000028
 */
void JAISequence::setTrackInterruptSwitch(unsigned char, unsigned char)
{
	/*
	lwz      r6, 0x300(r3)
	clrlwi   r0, r4, 0x18
	stbx     r5, r6, r0
	lwz      r3, 0x308(r3)
	cmplwi   r3, 0
	beqlr
	lwz      r0, 8(r3)
	oris     r0, r0, 0x80
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAISequence::setTrackPan(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void JAISequence::setTrackPanMulti(unsigned char, unsigned long, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAISequence::setTrackPitch(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void JAISequence::setTrackPitchMulti(unsigned char, unsigned long, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B44DC
 * Size:	0000B0
 */
void JAISequence::setTrackFxmix(unsigned char, float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	blt      lbl_800B4520
	lwz      r4, 0x308(r30)
	clrlwi   r0, r31, 0x18
	li       r3, 1
	lwz      r4, 4(r4)
	slw      r0, r3, r0
	and.     r0, r4, r0
	beq      lbl_800B4574

lbl_800B4520:
	lwz      r3, 0x2b4(r30)
	rlwinm   r0, r31, 4, 0x14, 0x1b
	mr       r4, r5
	add      r3, r3, r0
	bl       set__Q27JAInter11MoveParaSetFfUl
	cmpwi    r3, 1
	bne      lbl_800B4554
	clrlwi   r0, r31, 0x18
	li       r4, 1
	lwz      r5, 0x2ec(r30)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2ec(r30)

lbl_800B4554:
	lwz      r4, 0x308(r30)
	cmplwi   r4, 0
	beq      lbl_800B4574
	cmpwi    r3, 2
	beq      lbl_800B4574
	lwz      r0, 8(r4)
	ori      r0, r0, 0x800
	stw      r0, 8(r4)

lbl_800B4574:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void JAISequence::setTrackFxmixMulti(unsigned char, unsigned long, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void JAISequence::setTrackDolby(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void JAISequence::setTrackDolbyMulti(unsigned char, unsigned long, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B458C
 * Size:	0000D0
 */
void JAISequence::setTrackPortData(unsigned char, unsigned char, unsigned short)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r7, 0x308(r3)
	cmplwi   r7, 0
	beq      lbl_800B463C
	lbz      r0, 0x15(r28)
	cmplwi   r0, 4
	blt      lbl_800B45E8
	bl       getTrackPortRoute__8JAISoundFUcUc
	mr       r4, r3
	mr       r5, r31
	addi     r3, r28, 0x30c
	bl       writePortApp__8JASTrackFUlUs
	b        lbl_800B4628

lbl_800B45E8:
	lwz      r4, 8(r7)
	clrlwi   r3, r29, 0x18
	li       r5, 1
	clrlwi   r0, r30, 0x18
	ori      r6, r4, 0x1000
	rlwinm   r4, r29, 2, 0x16, 0x1d
	stw      r6, 8(r7)
	slw      r3, r5, r3
	slw      r0, r5, r0
	lwz      r5, 0x2f8(r28)
	or       r3, r5, r3
	stw      r3, 0x2f8(r28)
	lwz      r5, 0x2fc(r28)
	lwzx     r3, r5, r4
	or       r0, r3, r0
	stwx     r0, r5, r4

lbl_800B4628:
	lwz      r4, 0x2bc(r28)
	rlwinm   r3, r29, 2, 0x16, 0x1d
	rlwinm   r0, r30, 1, 0x17, 0x1e
	lwzx     r3, r4, r3
	sthx     r31, r3, r0

lbl_800B463C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
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
 * Address:	........
 * Size:	000114
 */
void JAISe::setSeInterRandomPara(float*, unsigned long, float, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B465C
 * Size:	000158
 */
void JAISe::setSeInterVolume(unsigned char, float, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	clrlwi.  r6, r6, 0x18
	fmr      f31, f1
	mr       r29, r3
	mr       r30, r4
	mr       r31, r5
	beq      lbl_800B4774
	lis      r3, 0x0019660D@ha
	lwz      r4, random__Q27JAInter5Const@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lis      r5, 0x02040811@ha
	mullw    r3, r4, r0
	lfs      f0, lbl_80516FE0@sda21(r2)
	addi     r4, r5, 0x02040811@l
	lfs      f2, lbl_80517024@sda21(r2)
	addis    r3, r3, 0x3c6f
	addi     r0, r3, -3233
	mulli    r3, r6, 0x3e8
	stw      r0, random__Q27JAInter5Const@sda21(r13)
	srwi     r0, r0, 9
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	mulhwu   r4, r4, r3
	lfs      f1, 8(r1)
	fsubs    f0, f1, f0
	subf     r0, r4, r3
	srwi     r0, r0, 1
	fmuls    f1, f2, f0
	add      r0, r0, r4
	srwi     r28, r0, 6
	bl       __cvt_fp2unsigned
	slwi     r5, r28, 1
	lis      r0, 0x4330
	divwu    r4, r3, r5
	stw      r0, 0x10(r1)
	lfd      f4, lbl_80517018@sda21(r2)
	stw      r28, 0x1c(r1)
	lfs      f1, lbl_80517028@sda21(r2)
	stw      r0, 0x18(r1)
	mullw    r0, r4, r5
	lfd      f2, 0x18(r1)
	lfs      f0, lbl_80516FE0@sda21(r2)
	fsubs    f2, f2, f4
	subf     r3, r0, r3
	addi     r0, r3, 1
	stw      r0, 0x14(r1)
	lfd      f3, 0x10(r1)
	fsubs    f3, f3, f4
	fsubs    f2, f3, f2
	fdivs    f2, f2, f1
	fadds    f1, f31, f2
	fcmpo    cr0, f1, f0
	ble      lbl_800B4758
	fmr      f31, f0
	b        lbl_800B4774

lbl_800B4758:
	lfs      f1, lbl_80516FE4@sda21(r2)
	fsubs    f0, f1, f2
	fcmpo    cr0, f31, f0
	bge      lbl_800B4770
	fmr      f31, f1
	b        lbl_800B4774

lbl_800B4770:
	fadds    f31, f31, f2

lbl_800B4774:
	rlwinm   r3, r30, 4, 0x14, 0x1b
	fmr      f1, f31
	addi     r3, r3, 0x16c
	mr       r4, r31
	add      r3, r29, r3
	bl       set__Q27JAInter11MoveParaSetFfUl
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B47B4
 * Size:	000158
 */
void JAISe::setSeInterPan(unsigned char, float, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	clrlwi.  r6, r6, 0x18
	fmr      f31, f1
	mr       r29, r3
	mr       r30, r4
	mr       r31, r5
	beq      lbl_800B48CC
	lis      r3, 0x0019660D@ha
	lwz      r4, random__Q27JAInter5Const@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lis      r5, 0x02040811@ha
	mullw    r3, r4, r0
	lfs      f0, lbl_80516FE0@sda21(r2)
	addi     r4, r5, 0x02040811@l
	lfs      f2, lbl_80517024@sda21(r2)
	addis    r3, r3, 0x3c6f
	addi     r0, r3, -3233
	mulli    r3, r6, 0x3e8
	stw      r0, random__Q27JAInter5Const@sda21(r13)
	srwi     r0, r0, 9
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	mulhwu   r4, r4, r3
	lfs      f1, 8(r1)
	fsubs    f0, f1, f0
	subf     r0, r4, r3
	srwi     r0, r0, 1
	fmuls    f1, f2, f0
	add      r0, r0, r4
	srwi     r28, r0, 6
	bl       __cvt_fp2unsigned
	slwi     r5, r28, 1
	lis      r0, 0x4330
	divwu    r4, r3, r5
	stw      r0, 0x10(r1)
	lfd      f4, lbl_80517018@sda21(r2)
	stw      r28, 0x1c(r1)
	lfs      f1, lbl_80517028@sda21(r2)
	stw      r0, 0x18(r1)
	mullw    r0, r4, r5
	lfd      f2, 0x18(r1)
	lfs      f0, lbl_80516FE0@sda21(r2)
	fsubs    f2, f2, f4
	subf     r3, r0, r3
	addi     r0, r3, 1
	stw      r0, 0x14(r1)
	lfd      f3, 0x10(r1)
	fsubs    f3, f3, f4
	fsubs    f2, f3, f2
	fdivs    f2, f2, f1
	fadds    f1, f31, f2
	fcmpo    cr0, f1, f0
	ble      lbl_800B48B0
	fmr      f31, f0
	b        lbl_800B48CC

lbl_800B48B0:
	lfs      f1, lbl_80516FE4@sda21(r2)
	fsubs    f0, f1, f2
	fcmpo    cr0, f31, f0
	bge      lbl_800B48C8
	fmr      f31, f1
	b        lbl_800B48CC

lbl_800B48C8:
	fadds    f31, f31, f2

lbl_800B48CC:
	rlwinm   r3, r30, 4, 0x14, 0x1b
	fmr      f1, f31
	addi     r3, r3, 0x1ec
	mr       r4, r31
	add      r3, r29, r3
	bl       set__Q27JAInter11MoveParaSetFfUl
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00014C
 */
void JAISe::setSeInterPitch(unsigned char, float, unsigned long, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void JAISe::setSeInterFxmix(unsigned char, float, unsigned long, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JAISe::setSeInterFir(unsigned char, unsigned char, unsigned long, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B490C
 * Size:	000158
 */
void JAISe::setSeInterDolby(unsigned char, float, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	clrlwi.  r6, r6, 0x18
	fmr      f31, f1
	mr       r29, r3
	mr       r30, r4
	mr       r31, r5
	beq      lbl_800B4A24
	lis      r3, 0x0019660D@ha
	lwz      r4, random__Q27JAInter5Const@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lis      r5, 0x02040811@ha
	mullw    r3, r4, r0
	lfs      f0, lbl_80516FE0@sda21(r2)
	addi     r4, r5, 0x02040811@l
	lfs      f2, lbl_80517024@sda21(r2)
	addis    r3, r3, 0x3c6f
	addi     r0, r3, -3233
	mulli    r3, r6, 0x3e8
	stw      r0, random__Q27JAInter5Const@sda21(r13)
	srwi     r0, r0, 9
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	mulhwu   r4, r4, r3
	lfs      f1, 8(r1)
	fsubs    f0, f1, f0
	subf     r0, r4, r3
	srwi     r0, r0, 1
	fmuls    f1, f2, f0
	add      r0, r0, r4
	srwi     r28, r0, 6
	bl       __cvt_fp2unsigned
	slwi     r5, r28, 1
	lis      r0, 0x4330
	divwu    r4, r3, r5
	stw      r0, 0x10(r1)
	lfd      f4, lbl_80517018@sda21(r2)
	stw      r28, 0x1c(r1)
	lfs      f1, lbl_80517028@sda21(r2)
	stw      r0, 0x18(r1)
	mullw    r0, r4, r5
	lfd      f2, 0x18(r1)
	lfs      f0, lbl_80516FE0@sda21(r2)
	fsubs    f2, f2, f4
	subf     r3, r0, r3
	addi     r0, r3, 1
	stw      r0, 0x14(r1)
	lfd      f3, 0x10(r1)
	fsubs    f3, f3, f4
	fsubs    f2, f3, f2
	fdivs    f2, f2, f1
	fadds    f1, f31, f2
	fcmpo    cr0, f1, f0
	ble      lbl_800B4A08
	fmr      f31, f0
	b        lbl_800B4A24

lbl_800B4A08:
	lfs      f1, lbl_80516FE4@sda21(r2)
	fsubs    f0, f1, f2
	fcmpo    cr0, f31, f0
	bge      lbl_800B4A20
	fmr      f31, f1
	b        lbl_800B4A24

lbl_800B4A20:
	fadds    f31, f31, f2

lbl_800B4A24:
	rlwinm   r3, r30, 4, 0x14, 0x1b
	fmr      f1, f31
	addi     r3, r3, 0x3ec
	mr       r4, r31
	add      r3, r29, r3
	bl       set__Q27JAInter11MoveParaSetFfUl
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void JAISe::setSePortData(unsigned char, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void JAISe::getSePortData(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B4A64
 * Size:	00012C
 */
void JAISe::setSeDistanceParameters()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x15(r3)
	lbz      r31, 0x19(r3)
	cmplwi   r0, 2
	bne      lbl_800B4A90
	li       r31, 0

lbl_800B4A90:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0x10(r30)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0x10(r30)
	lwz      r12, 0xdc(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0x10(r30)
	lwz      r12, 0xe0(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0x10(r30)
	lwz      r12, 0xf0(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0x10(r30)
	lwz      r12, 0xe4(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0x10(r30)
	lwz      r12, 0xe8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x44(r30)
	lwz      r0, 0(r3)
	rlwinm.  r0, r0, 0, 0x15, 0x15
	bne      lbl_800B4B60
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	lwz      r4, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0x10(r30)
	li       r5, 3
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_800B4B60:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0x10(r30)
	lwz      r12, 0xec(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B4B90
 * Size:	000030
 */
void JAISe::setFxmix(float, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	rlwinm   r5, r5, 4, 0x14, 0x1b
	stw      r0, 0x14(r1)
	mr       r0, r3
	addi     r3, r5, 0x2ec
	add      r3, r0, r3
	bl       set__Q27JAInter11MoveParaSetFfUl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B4BC0
 * Size:	000070
 */
void JAISe::setSeDistanceVolume(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, 0x44(r3)
	lwz      r4, 0(r4)
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	bne      lbl_800B4C08
	lwz      r12, 0x10(r3)
	rlwinm   r4, r4, 0x10, 0x1d, 0x1f
	lfs      f1, distanceMax__18JAIGlobalParameter@sda21(r13)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	b        lbl_800B4C0C

lbl_800B4C08:
	lfs      f1, lbl_80516FE0@sda21(r2)

lbl_800B4C0C:
	addi     r3, r30, 0x1ac
	clrlwi   r4, r31, 0x18
	bl       set__Q27JAInter11MoveParaSetFfUl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B4C30
 * Size:	000074
 */
void JAISe::setSeDistancePan(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_80516FE8@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x1a(r3)
	cmplwi   r0, 0
	bne      lbl_800B4C70
	lwz      r12, 0x10(r3)
	lwz      r12, 0xc0(r12)
	mtctr    r12
	bctrl
	b        lbl_800B4C80

lbl_800B4C70:
	lwz      r3, 0x38(r30)
	cmplwi   r3, 0
	beq      lbl_800B4C80
	lfs      f1, 0x38(r3)

lbl_800B4C80:
	addi     r3, r30, 0x22c
	clrlwi   r4, r31, 0x18
	bl       set__Q27JAInter11MoveParaSetFfUl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B4CA4
 * Size:	000138
 */
void JAISe::setSeDistancePitch(unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f1, lbl_80516FE0@sda21(r2)
	stw      r0, 0x24(r1)
	lwz      r5, 0x44(r3)
	lwz      r0, 0(r5)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_800B4D34
	lis      r5, 0x0019660D@ha
	lwz      r6, random__Q27JAInter5Const@sda21(r13)
	addi     r5, r5, 0x0019660D@l
	lis      r0, 0x4330
	mullw    r5, r6, r5
	stw      r0, 0x18(r1)
	lfs      f4, lbl_8051702C@sda21(r2)
	lfd      f3, lbl_80516FF0@sda21(r2)
	lfs      f0, lbl_80517030@sda21(r2)
	addis    r5, r5, 0x3c6f
	addi     r5, r5, -3233
	srwi     r0, r5, 9
	stw      r5, random__Q27JAInter5Const@sda21(r13)
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	lfs      f2, 8(r1)
	fsubs    f2, f2, f1
	fmuls    f2, f4, f2
	fctiwz   f2, f2
	stfd     f2, 0x10(r1)
	lwz      r0, 0x14(r1)
	clrlwi   r0, r0, 0x1c
	xoris    r0, r0, 0x8000
	stw      r0, 0x1c(r1)
	lfd      f2, 0x18(r1)
	fsubs    f2, f2, f3
	fdivs    f0, f2, f0
	fsubs    f1, f1, f0

lbl_800B4D34:
	lwz      r5, 0x44(r3)
	lwz      r6, 0(r5)
	rlwinm.  r0, r6, 0, 0x11, 0x11
	beq      lbl_800B4D90
	rlwinm.  r0, r6, 0, 0x1e, 0x1e
	bne      lbl_800B4D90
	rlwinm.  r0, r6, 0, 0x16, 0x17
	bne      lbl_800B4D90
	lwz      r0, audioCameraMax__18JAIGlobalParameter@sda21(r13)
	cmplwi   r0, 1
	bne      lbl_800B4D90
	lwz      r5, 0x34(r3)
	lfs      f0, distanceMax__18JAIGlobalParameter@sda21(r13)
	lfs      f2, 0x18(r5)
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_800B4D84
	lfs      f0, seDistancepitchMax__18JAIGlobalParameter@sda21(r13)
	fadds    f1, f1, f0
	b        lbl_800B4D90

lbl_800B4D84:
	fdivs    f0, f2, f0
	lfs      f2, seDistancepitchMax__18JAIGlobalParameter@sda21(r13)
	fmadds   f1, f2, f0, f1

lbl_800B4D90:
	rlwinm.  r0, r6, 0, 0x18, 0x19
	beq      lbl_800B4DC0
	lbz      r5, 0x17(r3)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	lfd      f3, lbl_80517018@sda21(r2)
	stw      r5, 0x1c(r1)
	lfs      f0, lbl_80517030@sda21(r2)
	lfd      f2, 0x18(r1)
	fsubs    f2, f2, f3
	fdivs    f0, f2, f0
	fadds    f1, f1, f0

lbl_800B4DC0:
	addi     r3, r3, 0x2ac
	clrlwi   r4, r4, 0x18
	bl       set__Q27JAInter11MoveParaSetFfUl
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B4DDC
 * Size:	000080
 */
void JAISe::setSePositionDopplar()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x15(r3)
	lwz      r31, dopplarMoveTime__18JAIGlobalParameter@sda21(r13)
	cmplwi   r0, 2
	bne      lbl_800B4E08
	li       r31, 1

lbl_800B4E08:
	lwz      r3, 0x44(r30)
	lwz      r0, 0(r3)
	rlwinm.  r4, r0, 0, 0x16, 0x17
	beq      lbl_800B4E44
	lwz      r0, audioCameraMax__18JAIGlobalParameter@sda21(r13)
	cmplwi   r0, 1
	bne      lbl_800B4E44
	lwz      r12, 0x10(r30)
	mr       r3, r30
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r30, 0x27c
	bl       set__Q27JAInter11MoveParaSetFfUl

lbl_800B4E44:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B4E5C
 * Size:	0000C8
 */
void JAISe::setSeDistanceFxmix(unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r5, 0x44(r3)
	lhz      r6, seDefaultFx__18JAIGlobalParameter@sda21(r13)
	lwz      r0, 0(r5)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_800B4ED4
	lwz      r0, audioCameraMax__18JAIGlobalParameter@sda21(r13)
	cmplwi   r0, 1
	bne      lbl_800B4ED4
	lwz      r5, 0x34(r3)
	lfs      f0, distanceMax__18JAIGlobalParameter@sda21(r13)
	lfs      f1, 0x18(r5)
	fcmpo    cr0, f1, f0
	bge      lbl_800B4ED0
	fdivs    f0, f1, f0
	lhz      r5, seDistanceFxParameter__18JAIGlobalParameter@sda21(r13)
	lis      r0, 0x4330
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r5, 0xc(r1)
	stw      r0, 8(r1)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r6, 0x14(r1)
	b        lbl_800B4ED4

lbl_800B4ED0:
	lhz      r6, seDistanceFxParameter__18JAIGlobalParameter@sda21(r13)

lbl_800B4ED4:
	clrlwi   r0, r6, 0x10
	cmplwi   r0, 0x7f
	ble      lbl_800B4EE4
	li       r6, 0x7f

lbl_800B4EE4:
	clrlwi   r5, r6, 0x18
	lis      r0, 0x4330
	stw      r5, 0x14(r1)
	addi     r3, r3, 0x32c
	lfd      f2, lbl_80517018@sda21(r2)
	clrlwi   r4, r4, 0x18
	stw      r0, 0x10(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	bl       set__Q27JAInter11MoveParaSetFfUl
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B4F24
 * Size:	000004
 */
void JAISe::setSeDistanceFir(unsigned char) { }

/*
 * --INFO--
 * Address:	800B4F28
 * Size:	0000A4
 */
void JAISe::setSeDistanceDolby(unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f1, lbl_80516FE4@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lbz      r0, 0x1a(r3)
	cmplwi   r0, 0
	bne      lbl_800B4F68
	lwz      r12, 0x10(r3)
	lwz      r12, 0xc4(r12)
	mtctr    r12
	bctrl
	b        lbl_800B4F78

lbl_800B4F68:
	lwz      r3, 0x38(r30)
	cmplwi   r3, 0
	beq      lbl_800B4F78
	lfs      f1, 0x3c(r3)

lbl_800B4F78:
	fctiwz   f0, f1
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	addi     r3, r30, 0x42c
	lfd      f2, lbl_80517018@sda21(r2)
	clrlwi   r4, r31, 0x18
	stfd     f0, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lwz      r0, 0xc(r1)
	clrlwi   r0, r0, 0x18
	stw      r0, 0x14(r1)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	bl       set__Q27JAInter11MoveParaSetFfUl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIStream::setStreamMode(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterVolume(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterPan(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterPitch(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterFxmix(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void JAIStream::setStreamInterDolby(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B4FCC
 * Size:	00000C
 */
void JAIStream::setStreamPrepareFlag(unsigned char)
{
	/*
	lwz      r3, streamUpdate__Q27JAInter9StreamMgr@sda21(r13)
	stb      r4, 2(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B4FD8
 * Size:	000040
 */
void JAIStream::checkStreamReady()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x15(r3)
	cmplwi   r0, 3
	bne      lbl_800B5004
	bl       getSystemStatus__Q27JAInter9StreamMgrFv
	cmplwi   r3, 1
	bne      lbl_800B5004
	li       r3, 1
	b        lbl_800B5008

lbl_800B5004:
	li       r3, 0

lbl_800B5008:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5018
 * Size:	0000A0
 */
void JAIStream::setChannelVolume(unsigned char, float, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	mr       r31, r5
	stw      r30, 0x10(r1)
	mr       r30, r4
	stw      r29, 0xc(r1)
	mr       r29, r3
	bl       getChannelMax__Q27JAInter9StreamMgrFv
	fmr      f1, f31
	lwz      r3, 0x1c8(r29)
	rlwinm   r0, r30, 4, 0x14, 0x1b
	mr       r4, r31
	add      r3, r3, r0
	bl       set__Q27JAInter11MoveParaSetFfUl
	cmpwi    r3, 1
	bne      lbl_800B5080
	clrlwi   r0, r30, 0x18
	li       r4, 1
	lwz      r5, 0x1b8(r29)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x1b8(r29)

lbl_800B5080:
	cmpwi    r3, 2
	beq      lbl_800B5098
	lwz      r3, 0x1b4(r29)
	lwz      r0, 0x18(r3)
	ori      r0, r0, 0x40
	stw      r0, 0x18(r3)

lbl_800B5098:
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	lwz      r29, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B50B8
 * Size:	0000A0
 */
void JAIStream::setChannelPan(unsigned char, float, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	mr       r31, r5
	stw      r30, 0x10(r1)
	mr       r30, r4
	stw      r29, 0xc(r1)
	mr       r29, r3
	bl       getChannelMax__Q27JAInter9StreamMgrFv
	fmr      f1, f31
	lwz      r3, 0x1cc(r29)
	rlwinm   r0, r30, 4, 0x14, 0x1b
	mr       r4, r31
	add      r3, r3, r0
	bl       set__Q27JAInter11MoveParaSetFfUl
	cmpwi    r3, 1
	bne      lbl_800B5120
	clrlwi   r0, r30, 0x18
	li       r4, 1
	lwz      r5, 0x1bc(r29)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x1bc(r29)

lbl_800B5120:
	cmpwi    r3, 2
	beq      lbl_800B5138
	lwz      r3, 0x1b4(r29)
	lwz      r0, 0x18(r3)
	ori      r0, r0, 0x80
	stw      r0, 0x18(r3)

lbl_800B5138:
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	lwz      r29, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JAIStream::setChannelFxmix(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JAIStream::setChannelDolby(unsigned char, float, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAIStream::getChannelVolume(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAIStream::getChannelPan(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAIStream::getChannelFxmix(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JAIStream::getChannelDolby(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B5158
 * Size:	0001E8
 */
void JAISound::setPauseMode(unsigned char, unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lis      r0, 0xc000
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r4
	lwz      r6, 0x20(r3)
	rlwinm   r4, r6, 0, 0, 1
	cmpw     r4, r0
	beq      lbl_800B5264
	bge      lbl_800B5328
	lis      r3, 0x80000001@ha
	addi     r0, r3, 0x80000001@l
	cmpw     r4, r0
	bge      lbl_800B5328
	addic.   r0, r31, 0x48
	beq      lbl_800B5328
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 3
	bne      lbl_800B51B4
	li       r30, 4

lbl_800B51B4:
	clrlwi.  r0, r30, 0x18
	beq      lbl_800B520C
	cmpwi    r0, 2
	beq      lbl_800B51F8
	bge      lbl_800B525C
	cmpwi    r0, 1
	bge      lbl_800B51D4
	b        lbl_800B525C

lbl_800B51D4:
	mr       r3, r31
	mr       r4, r5
	lwz      r12, 0x10(r31)
	li       r5, 1
	li       r6, 0xb
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	b        lbl_800B525C

lbl_800B51F8:
	addi     r3, r31, 0x30c
	li       r4, 1
	li       r5, 1
	bl       pause__8JASTrackFbb
	b        lbl_800B525C

lbl_800B520C:
	lbz      r0, 0x2c1(r31)
	cmpwi    r0, 2
	beq      lbl_800B524C
	bge      lbl_800B525C
	cmpwi    r0, 1
	bge      lbl_800B5228
	b        lbl_800B525C

lbl_800B5228:
	mr       r3, r31
	lfs      f1, lbl_80516FE0@sda21(r2)
	lwz      r12, 0x10(r31)
	li       r4, 1
	li       r5, 0xb
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_800B525C

lbl_800B524C:
	addi     r3, r31, 0x30c
	li       r4, 0
	li       r5, 1
	bl       pause__8JASTrackFbb

lbl_800B525C:
	stb      r30, 0x2c1(r31)
	b        lbl_800B5328

lbl_800B5264:
	addic.   r0, r31, 0x48
	beq      lbl_800B5328
	clrlwi.  r0, r30, 0x18
	beq      lbl_800B52DC
	cmpwi    r0, 2
	beq      lbl_800B52CC
	bge      lbl_800B5324
	cmpwi    r0, 1
	bge      lbl_800B528C
	b        lbl_800B5324

lbl_800B528C:
	clrlwi   r4, r5, 0x18
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	li       r4, 1
	lwz      r12, 0x10(r3)
	li       r5, 0xb
	stw      r0, 8(r1)
	lfd      f2, lbl_80517018@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	fsubs    f1, f1, f2
	lwz      r12, 0x1c(r12)
	fdivs    f1, f1, f0
	mtctr    r12
	bctrl
	b        lbl_800B5324

lbl_800B52CC:
	bl       getStreamObjectPointer__Q27JAInter9StreamMgrFv
	li       r4, 1
	bl       pause__13JASAramStreamFb
	b        lbl_800B5324

lbl_800B52DC:
	lbz      r0, 0x48(r31)
	cmpwi    r0, 2
	beq      lbl_800B5318
	bge      lbl_800B5324
	cmpwi    r0, 1
	bge      lbl_800B52F8
	b        lbl_800B5324

lbl_800B52F8:
	lwz      r12, 0x10(r3)
	li       r4, 1
	lfs      f1, lbl_80516FE0@sda21(r2)
	li       r5, 0xb
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_800B5324

lbl_800B5318:
	bl       getStreamObjectPointer__Q27JAInter9StreamMgrFv
	li       r4, 0
	bl       pause__13JASAramStreamFb

lbl_800B5324:
	stb      r30, 0x48(r31)

lbl_800B5328:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5340
 * Size:	000084
 */
void JAIStream::setVolume(float, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	rlwinm   r3, r5, 4, 0x14, 0x1b
	addi     r3, r3, 0x64
	add      r3, r30, r3
	bl       set__Q27JAInter11MoveParaSetFfUl
	cmpwi    r3, 1
	bne      lbl_800B538C
	clrlwi   r0, r31, 0x18
	li       r4, 1
	lwz      r5, 0x50(r30)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x50(r30)

lbl_800B538C:
	lwz      r4, 0x1b4(r30)
	cmplwi   r4, 0
	beq      lbl_800B53AC
	cmpwi    r3, 2
	beq      lbl_800B53AC
	lwz      r0, 0x18(r4)
	oris     r0, r0, 4
	stw      r0, 0x18(r4)

lbl_800B53AC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B53C4
 * Size:	0000AC
 */
void JAISequence::setVolumeU7(unsigned char, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	clrlwi   r4, r4, 0x18
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 0x24(r1)
	lis      r0, 0x4330
	lfs      f0, lbl_80517020@sda21(r2)
	stw      r4, 0xc(r1)
	rlwinm   r4, r6, 4, 0x14, 0x1b
	stw      r0, 8(r1)
	lfd      f1, 8(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	fsubs    f1, f1, f2
	stw      r30, 0x18(r1)
	mr       r30, r3
	addi     r3, r4, 0x158
	mr       r4, r5
	fdivs    f1, f1, f0
	add      r3, r30, r3
	bl       set__Q27JAInter11MoveParaSetFfUl
	cmpwi    r3, 1
	bne      lbl_800B5438
	clrlwi   r0, r31, 0x18
	li       r4, 1
	lwz      r5, 0x2cc(r30)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2cc(r30)

lbl_800B5438:
	lwz      r4, 0x308(r30)
	cmplwi   r4, 0
	beq      lbl_800B5458
	cmpwi    r3, 2
	beq      lbl_800B5458
	lwz      r0, 8(r4)
	oris     r0, r0, 4
	stw      r0, 8(r4)

lbl_800B5458:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5470
 * Size:	00000C
 */
void JAISequence::setSeqPrepareFlag(unsigned char)
{
	/*
	lwz      r3, 0x308(r3)
	stb      r4, 2(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B547C
 * Size:	00002C
 */
void JAISequence::checkSeqReady()
{
	/*
	lbz      r0, 0x15(r3)
	cmplwi   r0, 2
	bne      lbl_800B54A0
	lwz      r3, 0x2c4(r3)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_800B54A0
	li       r3, 1
	blr

lbl_800B54A0:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B54A8
 * Size:	00002C
 */
void JAISequence::getSeqInterVolume(unsigned char)
{
	/*
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B54BC
	cmplwi   r0, 5
	bne      lbl_800B54CC

lbl_800B54BC:
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 0x15c(r3)
	blr

lbl_800B54CC:
	lfs      f1, lbl_80517034@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqInterPan(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqInterPitch(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqInterFxmix(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqInterDolby(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JAISequence::getSeqTempoProportion()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAISequence::getSeqPortData(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void JAISequence::getTrackParameterU7(unsigned char, char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void JAISequence::getTrackParameterF32(unsigned char, char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAISound::getPointer(unsigned char, char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JAISequence::getTrackPortData(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void JAISe::getSeParametermeterF32(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JAIStream::getStreamInterVolume(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAIStream::getStreamInterPan(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAIStream::getStreamInterPitch(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAIStream::getStreamInterFxmix(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JAIStream::getStreamInterDolby(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAISound::getActorGroundNumber()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B54D4
 * Size:	00003C
 */
void JAISound::getTrackPortRoute(unsigned char, unsigned char)
{
	/*
	lwz      r0, 0x20(r3)
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_800B54FC
	rlwinm   r3, r4, 0x1c, 0x1c, 0x1f
	rlwinm   r0, r4, 4, 0x18, 0x1b
	rlwinm   r5, r5, 0x10, 8, 0xf
	addis    r4, r3, 0x2000
	add      r3, r0, r5
	add      r3, r4, r3
	blr

lbl_800B54FC:
	clrlwi   r3, r4, 0x1c
	rlwinm   r0, r5, 0x10, 8, 0xf
	addis    r3, r3, 0x1000
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAISe::getSeInfoPointer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B5510
 * Size:	000088
 */
void JAISound::checkSoundHandle(unsigned long, void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm   r0, r4, 0, 0, 1
	stw      r31, 0xc(r1)
	li       r31, 0
	lwz      r6, 0x20(r3)
	rlwinm   r4, r6, 0, 0, 1
	cmplw    r4, r0
	beq      lbl_800B5550
	lwz      r12, 0x10(r3)
	li       r4, 0
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_800B5580

lbl_800B5550:
	lwz      r4, 0x44(r3)
	lbz      r0, 4(r5)
	lbz      r4, 4(r4)
	cmplw    r4, r0
	bgt      lbl_800B557C
	lwz      r12, 0x10(r3)
	li       r4, 0
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_800B5580

lbl_800B557C:
	li       r31, 1

lbl_800B5580:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5598
 * Size:	00004C
 */
void JAISequence::getFadeCounter()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r3, 0x14(r3)
	bl       getPlayTrackInfo__Q27JAInter11SequenceMgrFUl
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_800B55C8
	lwz      r3, 0x28(r31)
	b        lbl_800B55D0

lbl_800B55C8:
	lwz      r3, 0x1d4(r31)
	addi     r3, r3, -1

lbl_800B55D0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B55E4
 * Size:	00000C
 */
void JAISe::getFadeCounter()
{
	/*
	lwz      r3, 0x1d8(r3)
	addi     r3, r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B55F0
 * Size:	000024
 */
void JAIStream::getFadeCounter()
{
	/*
	lwz      r4, 0x1b4(r3)
	lwz      r0, 0x18(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_800B5608
	lwz      r3, 0x28(r3)
	blr

lbl_800B5608:
	lwz      r3, 0xe0(r3)
	addi     r3, r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5614
 * Size:	0000E8
 */
void JAISound::initParameter(void*, JAInter::Actor*, unsigned long, unsigned long, unsigned char, JAInter::SoundInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r6, 0x20(r3)
	  beq-      .loc_0x64
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x38(r31)
	  lwz       r0, 0x0(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  lwz       r0, 0x4(r5)
	  stw       r0, 0x3C(r31)
	  lwz       r0, 0xC(r5)
	  stw       r0, 0x30(r31)
	  b         .loc_0x58

	.loc_0x48:
	  li        r0, 0
	  stw       r0, 0x3C(r31)
	  lwz       r0, 0xC(r5)
	  stw       r0, 0x30(r31)

	.loc_0x58:
	  lbz       r0, 0x10(r5)
	  stb       r0, 0x1A(r31)
	  b         .loc_0x78

	.loc_0x64:
	  li        r0, 0
	  stw       r0, 0x38(r31)
	  stw       r0, 0x3C(r31)
	  stb       r0, 0x1A(r31)
	  stw       r0, 0x30(r31)

	.loc_0x78:
	  stw       r4, 0x40(r31)
	  li        r0, 0xA
	  stw       r7, 0x28(r31)
	  stb       r8, 0x18(r31)
	  stw       r9, 0x44(r31)
	  stb       r0, 0x16(r31)
	  bl        -0x7B48
	  stb       r3, 0x19(r31)
	  li        r0, 0
	  sth       r0, 0x1C(r31)
	  stw       r0, 0x2C(r31)
	  lwz       r0, 0x3C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xC8
	  bl        -0x7BF0
	  lfs       f0, -0x7328(r2)
	  lwz       r3, 0x34(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x18(r3)
	  b         .loc_0xD4

	.loc_0xC8:
	  lfs       f0, -0x737C(r2)
	  lwz       r3, 0x34(r31)
	  stfs      f0, 0x18(r3)

	.loc_0xD4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B56FC
 * Size:	000070
 */
void JAInter::LinkSound::init(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0x20
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0xc
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	or.      r31, r3, r3
	beq      lbl_800B5730
	bl       initiate__10JSUPtrListFv

lbl_800B5730:
	stw      r31, 0(r30)
	li       r3, 0xc
	li       r5, 0x20
	lwz      r4, msCurrentHeap__8JAIBasic@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	or.      r31, r3, r3
	beq      lbl_800B5750
	bl       initiate__10JSUPtrListFv

lbl_800B5750:
	stw      r31, 4(r30)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B576C
 * Size:	00007C
 */
void JAInter::LinkSound::getSound(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0(r3)
	lwz      r31, 0(r3)
	cmplwi   r31, 0
	beq      lbl_800B57C8
	mr       r4, r31
	bl       remove__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 4(r29)
	mr       r4, r31
	bl       prepend__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0(r31)
	lwz      r12, 0x10(r3)
	mr       r30, r3
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl

lbl_800B57C8:
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B57E8
 * Size:	000004
 */
void JAISound::onGet() { }

/*
 * --INFO--
 * Address:	800B57EC
 * Size:	000068
 */
void JAInter::LinkSound::releaseSound(JAISound*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_800B5828
	lwz      r3, 4(r30)
	bl       remove__10JSUPtrListFP10JSUPtrLink
	clrlwi.  r0, r3, 0x18
	beq      lbl_800B5828
	lwz      r3, 0(r30)
	mr       r4, r31
	bl       prepend__10JSUPtrListFP10JSUPtrLink

lbl_800B5828:
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5854
 * Size:	000004
 */
void JAISound::onRelease() { }

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JAInter::LinkSound::getFreeStartFirstObject(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JAInter::LinkSound::getUsedEndFirstObject(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B5858
 * Size:	000098
 */
void JAInter::MoveParaSet::set(float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_800B587C
	lfs      f0, 4(r3)
	fcmpu    cr0, f0, f1
	bne      lbl_800B587C
	li       r3, 2
	b        lbl_800B58E8

lbl_800B587C:
	cmplwi   r0, 0
	beq      lbl_800B5898
	lfs      f0, 0(r3)
	fcmpu    cr0, f0, f1
	bne      lbl_800B5898
	li       r3, 2
	b        lbl_800B58E8

lbl_800B5898:
	cmplwi   r4, 0
	stfs     f1, 0(r3)
	bne      lbl_800B58B0
	stfs     f1, 4(r3)
	li       r3, 0
	b        lbl_800B58E8

lbl_800B58B0:
	addi     r4, r4, 1
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	lfs      f3, 4(r3)
	stw      r0, 8(r1)
	lfs      f2, 0(r3)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 8(r3)
	stw      r4, 0xc(r3)
	li       r3, 1

lbl_800B58E8:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B58F0
 * Size:	00004C
 */
void JAInter::MoveParaSet::move(void)
{
	/*
	lwz      r4, 0xc(r3)
	cmplwi   r4, 0
	bne      lbl_800B5904
	li       r0, 0
	b        lbl_800B5934

lbl_800B5904:
	addic.   r0, r4, -1
	stw      r0, 0xc(r3)
	beq      lbl_800B5928
	lfs      f1, 4(r3)
	li       r0, 1
	lfs      f0, 8(r3)
	fsubs    f0, f1, f0
	stfs     f0, 4(r3)
	b        lbl_800B5934

lbl_800B5928:
	lfs      f0, 0(r3)
	li       r0, 0
	stfs     f0, 4(r3)

lbl_800B5934:
	mr       r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B593C
 * Size:	00002C
 */
void JAIStream::getVolume(unsigned char)
{
	/*
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B5950
	cmplwi   r0, 5
	bne      lbl_800B5960

lbl_800B5950:
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 0x68(r3)
	blr

lbl_800B5960:
	lfs      f1, lbl_80517034@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5968
 * Size:	0000E4
 */
void JAIStream::setPan(float, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	rlwinm   r0, r5, 4, 0x14, 0x1b
	lwz      r6, 0x1a8(r3)
	add      r7, r6, r0
	lwz      r0, 0xc(r7)
	cmplwi   r0, 0
	bne      lbl_800B5998
	lfs      f0, 4(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B5998
	li       r6, 2
	b        lbl_800B5A04

lbl_800B5998:
	cmplwi   r0, 0
	beq      lbl_800B59B4
	lfs      f0, 0(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B59B4
	li       r6, 2
	b        lbl_800B5A04

lbl_800B59B4:
	cmplwi   r4, 0
	stfs     f1, 0(r7)
	bne      lbl_800B59CC
	stfs     f1, 4(r7)
	li       r6, 0
	b        lbl_800B5A04

lbl_800B59CC:
	addi     r4, r4, 1
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	li       r6, 1
	lfs      f3, 4(r7)
	stw      r0, 8(r1)
	lfs      f2, 0(r7)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 8(r7)
	stw      r4, 0xc(r7)

lbl_800B5A04:
	cmpwi    r6, 1
	bne      lbl_800B5A24
	clrlwi   r0, r5, 0x18
	li       r4, 1
	lwz      r5, 0x58(r3)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x58(r3)

lbl_800B5A24:
	lwz      r3, 0x1b4(r3)
	cmplwi   r3, 0
	beq      lbl_800B5A44
	cmpwi    r6, 2
	beq      lbl_800B5A44
	lwz      r0, 0x18(r3)
	oris     r0, r0, 8
	stw      r0, 0x18(r3)

lbl_800B5A44:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5A4C
 * Size:	000030
 */
void JAIStream::getPan(unsigned char)
{
	/*
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B5A60
	cmplwi   r0, 5
	bne      lbl_800B5A74

lbl_800B5A60:
	lwz      r3, 0x1a8(r3)
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 4(r3)
	blr

lbl_800B5A74:
	lfs      f1, lbl_80517034@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5A7C
 * Size:	0000E4
 */
void JAIStream::setPitch(float, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	rlwinm   r0, r5, 4, 0x14, 0x1b
	lwz      r6, 0x1a4(r3)
	add      r7, r6, r0
	lwz      r0, 0xc(r7)
	cmplwi   r0, 0
	bne      lbl_800B5AAC
	lfs      f0, 4(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B5AAC
	li       r6, 2
	b        lbl_800B5B18

lbl_800B5AAC:
	cmplwi   r0, 0
	beq      lbl_800B5AC8
	lfs      f0, 0(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B5AC8
	li       r6, 2
	b        lbl_800B5B18

lbl_800B5AC8:
	cmplwi   r4, 0
	stfs     f1, 0(r7)
	bne      lbl_800B5AE0
	stfs     f1, 4(r7)
	li       r6, 0
	b        lbl_800B5B18

lbl_800B5AE0:
	addi     r4, r4, 1
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	li       r6, 1
	lfs      f3, 4(r7)
	stw      r0, 8(r1)
	lfs      f2, 0(r7)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 8(r7)
	stw      r4, 0xc(r7)

lbl_800B5B18:
	cmpwi    r6, 1
	bne      lbl_800B5B38
	clrlwi   r0, r5, 0x18
	li       r4, 1
	lwz      r5, 0x54(r3)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x54(r3)

lbl_800B5B38:
	lwz      r3, 0x1b4(r3)
	cmplwi   r3, 0
	beq      lbl_800B5B58
	cmpwi    r6, 2
	beq      lbl_800B5B58
	lwz      r0, 0x18(r3)
	oris     r0, r0, 0x10
	stw      r0, 0x18(r3)

lbl_800B5B58:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5B60
 * Size:	000030
 */
void JAIStream::getPitch(unsigned char)
{
	/*
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B5B74
	cmplwi   r0, 5
	bne      lbl_800B5B88

lbl_800B5B74:
	lwz      r3, 0x1a4(r3)
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 4(r3)
	blr

lbl_800B5B88:
	lfs      f1, lbl_80517034@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5B90
 * Size:	0000E4
 */
void JAIStream::setFxmix(float, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	rlwinm   r0, r5, 4, 0x14, 0x1b
	lwz      r6, 0x1ac(r3)
	add      r7, r6, r0
	lwz      r0, 0xc(r7)
	cmplwi   r0, 0
	bne      lbl_800B5BC0
	lfs      f0, 4(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B5BC0
	li       r6, 2
	b        lbl_800B5C2C

lbl_800B5BC0:
	cmplwi   r0, 0
	beq      lbl_800B5BDC
	lfs      f0, 0(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B5BDC
	li       r6, 2
	b        lbl_800B5C2C

lbl_800B5BDC:
	cmplwi   r4, 0
	stfs     f1, 0(r7)
	bne      lbl_800B5BF4
	stfs     f1, 4(r7)
	li       r6, 0
	b        lbl_800B5C2C

lbl_800B5BF4:
	addi     r4, r4, 1
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	li       r6, 1
	lfs      f3, 4(r7)
	stw      r0, 8(r1)
	lfs      f2, 0(r7)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 8(r7)
	stw      r4, 0xc(r7)

lbl_800B5C2C:
	cmpwi    r6, 1
	bne      lbl_800B5C4C
	clrlwi   r0, r5, 0x18
	li       r4, 1
	lwz      r5, 0x5c(r3)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x5c(r3)

lbl_800B5C4C:
	lwz      r3, 0x1b4(r3)
	cmplwi   r3, 0
	beq      lbl_800B5C6C
	cmpwi    r6, 2
	beq      lbl_800B5C6C
	lwz      r0, 0x18(r3)
	oris     r0, r0, 0x20
	stw      r0, 0x18(r3)

lbl_800B5C6C:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5C74
 * Size:	000030
 */
void JAIStream::getFxmix(unsigned char)
{
	/*
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B5C88
	cmplwi   r0, 5
	bne      lbl_800B5C9C

lbl_800B5C88:
	lwz      r3, 0x1ac(r3)
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 4(r3)
	blr

lbl_800B5C9C:
	lfs      f1, lbl_80517034@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5CA4
 * Size:	0000E4
 */
void JAIStream::setDolby(float, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	rlwinm   r0, r5, 4, 0x14, 0x1b
	lwz      r6, 0x1b0(r3)
	add      r7, r6, r0
	lwz      r0, 0xc(r7)
	cmplwi   r0, 0
	bne      lbl_800B5CD4
	lfs      f0, 4(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B5CD4
	li       r6, 2
	b        lbl_800B5D40

lbl_800B5CD4:
	cmplwi   r0, 0
	beq      lbl_800B5CF0
	lfs      f0, 0(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B5CF0
	li       r6, 2
	b        lbl_800B5D40

lbl_800B5CF0:
	cmplwi   r4, 0
	stfs     f1, 0(r7)
	bne      lbl_800B5D08
	stfs     f1, 4(r7)
	li       r6, 0
	b        lbl_800B5D40

lbl_800B5D08:
	addi     r4, r4, 1
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	li       r6, 1
	lfs      f3, 4(r7)
	stw      r0, 8(r1)
	lfs      f2, 0(r7)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 8(r7)
	stw      r4, 0xc(r7)

lbl_800B5D40:
	cmpwi    r6, 1
	bne      lbl_800B5D60
	clrlwi   r0, r5, 0x18
	li       r4, 1
	lwz      r5, 0x60(r3)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x60(r3)

lbl_800B5D60:
	lwz      r3, 0x1b4(r3)
	cmplwi   r3, 0
	beq      lbl_800B5D80
	cmpwi    r6, 2
	beq      lbl_800B5D80
	lwz      r0, 0x18(r3)
	oris     r0, r0, 0x40
	stw      r0, 0x18(r3)

lbl_800B5D80:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5D88
 * Size:	000030
 */
void JAIStream::getDolby(unsigned char)
{
	/*
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B5D9C
	cmplwi   r0, 5
	bne      lbl_800B5DB0

lbl_800B5D9C:
	lwz      r3, 0x1b0(r3)
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 4(r3)
	blr

lbl_800B5DB0:
	lfs      f1, lbl_80517034@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5DB8
 * Size:	000058
 */
void JAIStream::setVolumeU7(unsigned char, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	clrlwi   r4, r4, 0x18
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 0x14(r1)
	lis      r0, 0x4330
	lfs      f0, lbl_80517020@sda21(r2)
	stw      r4, 0xc(r1)
	mr       r4, r5
	lwz      r12, 0x10(r3)
	mr       r5, r6
	stw      r0, 8(r1)
	lwz      r12, 0x1c(r12)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5E10
 * Size:	000040
 */
void JAIStream::getVolumeU7(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80517020@sda21(r2)
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5E50
 * Size:	000058
 */
void JAIStream::setPanU7(unsigned char, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	clrlwi   r4, r4, 0x18
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 0x14(r1)
	lis      r0, 0x4330
	lfs      f0, lbl_80517020@sda21(r2)
	stw      r4, 0xc(r1)
	mr       r4, r5
	lwz      r12, 0x10(r3)
	mr       r5, r6
	stw      r0, 8(r1)
	lwz      r12, 0x24(r12)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5EA8
 * Size:	000040
 */
void JAIStream::getPanU7(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80517020@sda21(r2)
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5EE8
 * Size:	000058
 */
void JAIStream::setFxmixU7(unsigned char, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	clrlwi   r4, r4, 0x18
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 0x14(r1)
	lis      r0, 0x4330
	lfs      f0, lbl_80517020@sda21(r2)
	stw      r4, 0xc(r1)
	mr       r4, r5
	lwz      r12, 0x10(r3)
	mr       r5, r6
	stw      r0, 8(r1)
	lwz      r12, 0x34(r12)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5F40
 * Size:	000040
 */
void JAIStream::getFxmixU7(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80517020@sda21(r2)
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5F80
 * Size:	000058
 */
void JAIStream::setDolbyU7(unsigned char, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	clrlwi   r4, r4, 0x18
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 0x14(r1)
	lis      r0, 0x4330
	lfs      f0, lbl_80517020@sda21(r2)
	stw      r4, 0xc(r1)
	mr       r4, r5
	lwz      r12, 0x10(r3)
	mr       r5, r6
	stw      r0, 8(r1)
	lwz      r12, 0x3c(r12)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B5FD8
 * Size:	000040
 */
void JAIStream::getDolbyU7(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80517020@sda21(r2)
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6018
 * Size:	000004
 */
void JAIStream::setPortData(unsigned char, unsigned short) { }

/*
 * --INFO--
 * Address:	800B601C
 * Size:	00000C
 */
void JAIStream::getPortData(unsigned char)
{
	/*
	lis      r3, 0x0000FFFF@ha
	addi     r3, r3, 0x0000FFFF@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6028
 * Size:	000004
 */
void JAISound::setTempoProportion(float, unsigned long) { }

/*
 * --INFO--
 * Address:	800B602C
 * Size:	000008
 */
void JAISound::getTempoProportion()
{
	/*
	lfs      f1, lbl_80516FE0@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6034
 * Size:	000030
 */
void JAISound::setDirectVolume(float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 6
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6064
 * Size:	000030
 */
void JAISound::setDirectPan(float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 6
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6094
 * Size:	000030
 */
void JAISound::setDirectPitch(float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 6
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B60C4
 * Size:	000030
 */
void JAISound::setDirectFxmix(float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 6
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B60F4
 * Size:	000030
 */
void JAISound::setDirectDolby(float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 6
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6124
 * Size:	000030
 */
void JAISound::setDemoVolume(float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 2
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6154
 * Size:	000030
 */
void JAISound::setDemoPan(float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 2
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6184
 * Size:	000030
 */
void JAISound::setDemoPitch(float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 2
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B61B4
 * Size:	000030
 */
void JAISound::setDemoFxmix(float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 2
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B61E4
 * Size:	000030
 */
void JAISound::setDemoDolby(float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 2
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6214
 * Size:	000030
 */
void JAISound::setDemoVolumeU7(unsigned char, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 2
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6244
 * Size:	000030
 */
void JAISound::setDemoPanU7(unsigned char, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 2
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6274
 * Size:	000030
 */
void JAISound::setDemoFxmixU7(unsigned char, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 2
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B62A4
 * Size:	000030
 */
void JAISound::setDemoDolbyU7(unsigned char, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 2
	stw      r0, 0x14(r1)
	lwz      r12, 0x10(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B62D4
 * Size:	000008
 */
void JAISound::setDistanceParameterMoveTime(unsigned char a1)
{
	// Generated from stb r4, 0x19(r3)
	_19 = a1;
}

/*
 * --INFO--
 * Address:	800B62DC
 * Size:	000008
 */
void JAISound::setAdjustPriority(short a1)
{
	// Generated from sth r4, 0x1C(r3)
	_1C = a1;
}

/*
 * --INFO--
 * Address:	800B62E4
 * Size:	000010
 */
void JAISe::getVolume(unsigned char)
{
	/*
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 0x170(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B62F4
 * Size:	000090
 */
void JAISe::setPan(float, unsigned long, unsigned char)
{
	/*
	rlwinm   r0, r5, 4, 0x14, 0x1b
	stwu     r1, -0x10(r1)
	add      r6, r3, r0
	lwz      r5, 0x1f8(r6)
	cmplwi   r5, 0
	bne      lbl_800B6318
	lfs      f0, 0x1f0(r6)
	fcmpu    cr0, f0, f1
	beq      lbl_800B637C

lbl_800B6318:
	cmplwi   r5, 0
	beq      lbl_800B6330
	add      r5, r3, r0
	lfs      f0, 0x1ec(r5)
	fcmpu    cr0, f0, f1
	beq      lbl_800B637C

lbl_800B6330:
	add      r5, r3, r0
	cmplwi   r4, 0
	stfs     f1, 0x1ec(r5)
	bne      lbl_800B6348
	stfs     f1, 0x1f0(r5)
	b        lbl_800B637C

lbl_800B6348:
	addi     r3, r4, 1
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f3, 0x1f0(r5)
	stw      r0, 8(r1)
	lfs      f2, 0x1ec(r5)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 0x1f4(r5)
	stw      r3, 0x1f8(r6)

lbl_800B637C:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6384
 * Size:	000010
 */
void JAISe::getPan(unsigned char)
{
	/*
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 0x1f0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6394
 * Size:	000090
 */
void JAISe::setPitch(float, unsigned long, unsigned char)
{
	/*
	rlwinm   r0, r5, 4, 0x14, 0x1b
	stwu     r1, -0x10(r1)
	add      r6, r3, r0
	lwz      r5, 0x278(r6)
	cmplwi   r5, 0
	bne      lbl_800B63B8
	lfs      f0, 0x270(r6)
	fcmpu    cr0, f0, f1
	beq      lbl_800B641C

lbl_800B63B8:
	cmplwi   r5, 0
	beq      lbl_800B63D0
	add      r5, r3, r0
	lfs      f0, 0x26c(r5)
	fcmpu    cr0, f0, f1
	beq      lbl_800B641C

lbl_800B63D0:
	add      r5, r3, r0
	cmplwi   r4, 0
	stfs     f1, 0x26c(r5)
	bne      lbl_800B63E8
	stfs     f1, 0x270(r5)
	b        lbl_800B641C

lbl_800B63E8:
	addi     r3, r4, 1
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f3, 0x270(r5)
	stw      r0, 8(r1)
	lfs      f2, 0x26c(r5)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 0x274(r5)
	stw      r3, 0x278(r6)

lbl_800B641C:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6424
 * Size:	000010
 */
void JAISe::getPitch(unsigned char)
{
	/*
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 0x270(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6434
 * Size:	000010
 */
void JAISe::getFxmix(unsigned char)
{
	/*
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 0x2f0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6444
 * Size:	000090
 */
void JAISe::setDolby(float, unsigned long, unsigned char)
{
	/*
	rlwinm   r0, r5, 4, 0x14, 0x1b
	stwu     r1, -0x10(r1)
	add      r6, r3, r0
	lwz      r5, 0x3f8(r6)
	cmplwi   r5, 0
	bne      lbl_800B6468
	lfs      f0, 0x3f0(r6)
	fcmpu    cr0, f0, f1
	beq      lbl_800B64CC

lbl_800B6468:
	cmplwi   r5, 0
	beq      lbl_800B6480
	add      r5, r3, r0
	lfs      f0, 0x3ec(r5)
	fcmpu    cr0, f0, f1
	beq      lbl_800B64CC

lbl_800B6480:
	add      r5, r3, r0
	cmplwi   r4, 0
	stfs     f1, 0x3ec(r5)
	bne      lbl_800B6498
	stfs     f1, 0x3f0(r5)
	b        lbl_800B64CC

lbl_800B6498:
	addi     r3, r4, 1
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f3, 0x3f0(r5)
	stw      r0, 8(r1)
	lfs      f2, 0x3ec(r5)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 0x3f4(r5)
	stw      r3, 0x3f8(r6)

lbl_800B64CC:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B64D4
 * Size:	000010
 */
void JAISe::getDolby(unsigned char)
{
	/*
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 0x3f0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B64E4
 * Size:	0000B4
 */
void JAISe::setVolumeU7(unsigned char, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	clrlwi   r4, r4, 0x18
	lis      r0, 0x4330
	rlwinm   r6, r6, 4, 0x14, 0x1b
	stw      r4, 0xc(r1)
	add      r7, r3, r6
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 8(r1)
	lwz      r0, 0x178(r7)
	lfd      f1, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	cmplwi   r0, 0
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	bne      lbl_800B652C
	lfs      f0, 0x170(r7)
	fcmpu    cr0, f0, f1
	beq      lbl_800B6590

lbl_800B652C:
	cmplwi   r0, 0
	beq      lbl_800B6544
	add      r4, r3, r6
	lfs      f0, 0x16c(r4)
	fcmpu    cr0, f0, f1
	beq      lbl_800B6590

lbl_800B6544:
	add      r4, r3, r6
	cmplwi   r5, 0
	stfs     f1, 0x16c(r4)
	bne      lbl_800B655C
	stfs     f1, 0x170(r4)
	b        lbl_800B6590

lbl_800B655C:
	addi     r3, r5, 1
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f3, 0x170(r4)
	stw      r0, 8(r1)
	lfs      f2, 0x16c(r4)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 0x174(r4)
	stw      r3, 0x178(r7)

lbl_800B6590:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6598
 * Size:	00002C
 */
void JAISe::getVolumeU7(unsigned char)
{
	/*
	rlwinm   r0, r4, 4, 0x14, 0x1b
	stwu     r1, -0x10(r1)
	add      r3, r3, r0
	lfs      f1, lbl_80517020@sda21(r2)
	lfs      f0, 0x170(r3)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B65C4
 * Size:	0000B4
 */
void JAISe::setPanU7(unsigned char, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	clrlwi   r4, r4, 0x18
	lis      r0, 0x4330
	rlwinm   r6, r6, 4, 0x14, 0x1b
	stw      r4, 0xc(r1)
	add      r7, r3, r6
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 8(r1)
	lwz      r0, 0x1f8(r7)
	lfd      f1, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	cmplwi   r0, 0
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	bne      lbl_800B660C
	lfs      f0, 0x1f0(r7)
	fcmpu    cr0, f0, f1
	beq      lbl_800B6670

lbl_800B660C:
	cmplwi   r0, 0
	beq      lbl_800B6624
	add      r4, r3, r6
	lfs      f0, 0x1ec(r4)
	fcmpu    cr0, f0, f1
	beq      lbl_800B6670

lbl_800B6624:
	add      r4, r3, r6
	cmplwi   r5, 0
	stfs     f1, 0x1ec(r4)
	bne      lbl_800B663C
	stfs     f1, 0x1f0(r4)
	b        lbl_800B6670

lbl_800B663C:
	addi     r3, r5, 1
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f3, 0x1f0(r4)
	stw      r0, 8(r1)
	lfs      f2, 0x1ec(r4)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 0x1f4(r4)
	stw      r3, 0x1f8(r7)

lbl_800B6670:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6678
 * Size:	00002C
 */
void JAISe::getPanU7(unsigned char)
{
	/*
	rlwinm   r0, r4, 4, 0x14, 0x1b
	stwu     r1, -0x10(r1)
	add      r3, r3, r0
	lfs      f1, lbl_80517020@sda21(r2)
	lfs      f0, 0x1f0(r3)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B66A4
 * Size:	0000B4
 */
void JAISe::setFxmixU7(unsigned char, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	clrlwi   r4, r4, 0x18
	lis      r0, 0x4330
	rlwinm   r6, r6, 4, 0x14, 0x1b
	stw      r4, 0xc(r1)
	add      r7, r3, r6
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 8(r1)
	lwz      r0, 0x2f8(r7)
	lfd      f1, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	cmplwi   r0, 0
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	bne      lbl_800B66EC
	lfs      f0, 0x2f0(r7)
	fcmpu    cr0, f0, f1
	beq      lbl_800B6750

lbl_800B66EC:
	cmplwi   r0, 0
	beq      lbl_800B6704
	add      r4, r3, r6
	lfs      f0, 0x2ec(r4)
	fcmpu    cr0, f0, f1
	beq      lbl_800B6750

lbl_800B6704:
	add      r4, r3, r6
	cmplwi   r5, 0
	stfs     f1, 0x2ec(r4)
	bne      lbl_800B671C
	stfs     f1, 0x2f0(r4)
	b        lbl_800B6750

lbl_800B671C:
	addi     r3, r5, 1
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f3, 0x2f0(r4)
	stw      r0, 8(r1)
	lfs      f2, 0x2ec(r4)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 0x2f4(r4)
	stw      r3, 0x2f8(r7)

lbl_800B6750:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6758
 * Size:	00002C
 */
void JAISe::getFxmixU7(unsigned char)
{
	/*
	rlwinm   r0, r4, 4, 0x14, 0x1b
	stwu     r1, -0x10(r1)
	add      r3, r3, r0
	lfs      f1, lbl_80517020@sda21(r2)
	lfs      f0, 0x2f0(r3)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6784
 * Size:	0000B4
 */
void JAISe::setDolbyU7(unsigned char, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	clrlwi   r4, r4, 0x18
	lis      r0, 0x4330
	rlwinm   r6, r6, 4, 0x14, 0x1b
	stw      r4, 0xc(r1)
	add      r7, r3, r6
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 8(r1)
	lwz      r0, 0x3f8(r7)
	lfd      f1, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	cmplwi   r0, 0
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	bne      lbl_800B67CC
	lfs      f0, 0x3f0(r7)
	fcmpu    cr0, f0, f1
	beq      lbl_800B6830

lbl_800B67CC:
	cmplwi   r0, 0
	beq      lbl_800B67E4
	add      r4, r3, r6
	lfs      f0, 0x3ec(r4)
	fcmpu    cr0, f0, f1
	beq      lbl_800B6830

lbl_800B67E4:
	add      r4, r3, r6
	cmplwi   r5, 0
	stfs     f1, 0x3ec(r4)
	bne      lbl_800B67FC
	stfs     f1, 0x3f0(r4)
	b        lbl_800B6830

lbl_800B67FC:
	addi     r3, r5, 1
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f3, 0x3f0(r4)
	stw      r0, 8(r1)
	lfs      f2, 0x3ec(r4)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 0x3f4(r4)
	stw      r3, 0x3f8(r7)

lbl_800B6830:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6838
 * Size:	00002C
 */
void JAISe::getDolbyU7(unsigned char)
{
	/*
	rlwinm   r0, r4, 4, 0x14, 0x1b
	stwu     r1, -0x10(r1)
	add      r3, r3, r0
	lfs      f1, lbl_80517020@sda21(r2)
	lfs      f0, 0x3f0(r3)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6864
 * Size:	000130
 */
void JAISe::setPortData(unsigned char, unsigned short)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r4
	lbz      r0, 0x15(r3)
	cmplwi   r0, 1
	bne      lbl_800B68BC
	rlwinm   r0, r28, 1, 0x17, 0x1e
	clrlwi   r5, r28, 0x18
	add      r4, r3, r0
	sth      r29, 0x48(r4)
	li       r0, 1
	slw      r0, r0, r5
	lhz      r4, 0x68(r3)
	or       r0, r4, r0
	sth      r0, 0x68(r3)
	b        lbl_800B6974

lbl_800B68BC:
	lwz      r30, seHandle__Q27JAInter5SeMgr@sda21(r13)
	lbz      r31, 0x14(r3)
	lwz      r7, 0x308(r30)
	cmplwi   r7, 0
	beq      lbl_800B6974
	lbz      r0, 0x15(r30)
	cmplwi   r0, 4
	blt      lbl_800B6924
	lwz      r0, 0x20(r30)
	addi     r3, r30, 0x30c
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_800B6908
	rlwinm   r4, r31, 0x1c, 0x1c, 0x1f
	rlwinm   r6, r28, 0x10, 8, 0xf
	rlwinm   r0, r31, 4, 0x18, 0x1b
	addis    r5, r4, 0x2000
	add      r4, r0, r6
	add      r4, r5, r4
	b        lbl_800B6918

lbl_800B6908:
	clrlwi   r4, r31, 0x1c
	rlwinm   r0, r28, 0x10, 8, 0xf
	addis    r4, r4, 0x1000
	add      r4, r4, r0

lbl_800B6918:
	mr       r5, r29
	bl       writePortApp__8JASTrackFUlUs
	b        lbl_800B6960

lbl_800B6924:
	lwz      r3, 8(r7)
	li       r5, 1
	clrlwi   r0, r28, 0x18
	rlwinm   r4, r31, 2, 0x16, 0x1d
	ori      r6, r3, 0x1000
	slw      r3, r5, r31
	stw      r6, 8(r7)
	slw      r0, r5, r0
	lwz      r5, 0x2f8(r30)
	or       r3, r5, r3
	stw      r3, 0x2f8(r30)
	lwz      r5, 0x2fc(r30)
	lwzx     r3, r5, r4
	or       r0, r3, r0
	stwx     r0, r5, r4

lbl_800B6960:
	lwz      r4, 0x2bc(r30)
	rlwinm   r3, r31, 2, 0x16, 0x1d
	rlwinm   r0, r28, 1, 0x17, 0x1e
	lwzx     r3, r4, r3
	sthx     r29, r3, r0

lbl_800B6974:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
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
 * Address:	800B6994
 * Size:	0000AC
 */
void JAISe::getPortData(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x20(r3)
	rlwinm.  r0, r0, 0, 0, 1
	bne      lbl_800B6A2C
	lbz      r0, init$2292@sda21(r13)
	lbz      r6, 0x14(r3)
	extsb.   r0, r0
	lwz      r5, seHandle__Q27JAInter5SeMgr@sda21(r13)
	bne      lbl_800B69D4
	lis      r3, 0x0000FFFF@ha
	li       r0, 1
	addi     r3, r3, 0x0000FFFF@l
	stb      r0, init$2292@sda21(r13)
	sth      r3, _port$2291@sda21(r13)

lbl_800B69D4:
	lbz      r0, 0x15(r5)
	cmplwi   r0, 4
	blt      lbl_800B6A24
	lwz      r0, 0x20(r5)
	addi     r3, r5, 0x30c
	rlwinm.  r0, r0, 0, 0x14, 0x14
	beq      lbl_800B6A0C
	rlwinm   r5, r6, 0x1c, 0x1c, 0x1f
	rlwinm   r4, r4, 0x10, 8, 0xf
	rlwinm   r0, r6, 4, 0x18, 0x1b
	addis    r5, r5, 0x2000
	add      r4, r0, r4
	add      r4, r5, r4
	b        lbl_800B6A1C

lbl_800B6A0C:
	clrlwi   r5, r6, 0x1c
	rlwinm   r0, r4, 0x10, 8, 0xf
	addis    r4, r5, 0x1000
	add      r4, r4, r0

lbl_800B6A1C:
	addi     r5, r13, _port$2291@sda21
	bl       readPortApp__8JASTrackFUlPUs

lbl_800B6A24:
	lhz      r3, _port$2291@sda21(r13)
	b        lbl_800B6A30

lbl_800B6A2C:
	li       r3, 0

lbl_800B6A30:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6A40
 * Size:	000030
 */
void JAISequence::getPan(unsigned char)
{
	/*
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B6A54
	cmplwi   r0, 5
	bne      lbl_800B6A68

lbl_800B6A54:
	lwz      r3, 0x298(r3)
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 4(r3)
	blr

lbl_800B6A68:
	lfs      f1, lbl_80517034@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6A70
 * Size:	000030
 */
void JAISequence::getPitch(unsigned char)
{
	/*
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B6A84
	cmplwi   r0, 5
	bne      lbl_800B6A98

lbl_800B6A84:
	lwz      r3, 0x29c(r3)
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 4(r3)
	blr

lbl_800B6A98:
	lfs      f1, lbl_80517034@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6AA0
 * Size:	0000E4
 */
void JAISequence::setFxmix(float, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	rlwinm   r0, r5, 4, 0x14, 0x1b
	lwz      r6, 0x2a0(r3)
	add      r7, r6, r0
	lwz      r0, 0xc(r7)
	cmplwi   r0, 0
	bne      lbl_800B6AD0
	lfs      f0, 4(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B6AD0
	li       r6, 2
	b        lbl_800B6B3C

lbl_800B6AD0:
	cmplwi   r0, 0
	beq      lbl_800B6AEC
	lfs      f0, 0(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B6AEC
	li       r6, 2
	b        lbl_800B6B3C

lbl_800B6AEC:
	cmplwi   r4, 0
	stfs     f1, 0(r7)
	bne      lbl_800B6B04
	stfs     f1, 4(r7)
	li       r6, 0
	b        lbl_800B6B3C

lbl_800B6B04:
	addi     r4, r4, 1
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	li       r6, 1
	lfs      f3, 4(r7)
	stw      r0, 8(r1)
	lfs      f2, 0(r7)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 8(r7)
	stw      r4, 0xc(r7)

lbl_800B6B3C:
	cmpwi    r6, 1
	bne      lbl_800B6B5C
	clrlwi   r0, r5, 0x18
	li       r4, 1
	lwz      r5, 0x2d8(r3)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2d8(r3)

lbl_800B6B5C:
	lwz      r3, 0x308(r3)
	cmplwi   r3, 0
	beq      lbl_800B6B7C
	cmpwi    r6, 2
	beq      lbl_800B6B7C
	lwz      r0, 8(r3)
	oris     r0, r0, 0x20
	stw      r0, 8(r3)

lbl_800B6B7C:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6B84
 * Size:	000030
 */
void JAISequence::getFxmix(unsigned char)
{
	/*
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B6B98
	cmplwi   r0, 5
	bne      lbl_800B6BAC

lbl_800B6B98:
	lwz      r3, 0x2a0(r3)
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 4(r3)
	blr

lbl_800B6BAC:
	lfs      f1, lbl_80517034@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6BB4
 * Size:	000110
 */
void JAISequence::setDolby(float, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	lwz      r6, msBasic__8JAIBasic@sda21(r13)
	lbz      r0, 0xd(r6)
	cmplwi   r0, 2
	beq      lbl_800B6BE4
	lwz      r6, 0x2a4(r3)
	rlwinm   r0, r5, 4, 0x14, 0x1b
	lfs      f1, lbl_80516FE4@sda21(r2)
	add      r6, r6, r0
	lfs      f0, 4(r6)
	fcmpu    cr0, f1, f0
	beq      lbl_800B6CBC

lbl_800B6BE4:
	lwz      r6, 0x2a4(r3)
	rlwinm   r0, r5, 4, 0x14, 0x1b
	add      r7, r6, r0
	lwz      r0, 0xc(r7)
	cmplwi   r0, 0
	bne      lbl_800B6C10
	lfs      f0, 4(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B6C10
	li       r6, 2
	b        lbl_800B6C7C

lbl_800B6C10:
	cmplwi   r0, 0
	beq      lbl_800B6C2C
	lfs      f0, 0(r7)
	fcmpu    cr0, f0, f1
	bne      lbl_800B6C2C
	li       r6, 2
	b        lbl_800B6C7C

lbl_800B6C2C:
	cmplwi   r4, 0
	stfs     f1, 0(r7)
	bne      lbl_800B6C44
	stfs     f1, 4(r7)
	li       r6, 0
	b        lbl_800B6C7C

lbl_800B6C44:
	addi     r4, r4, 1
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	li       r6, 1
	lfs      f3, 4(r7)
	stw      r0, 8(r1)
	lfs      f2, 0(r7)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 8(r7)
	stw      r4, 0xc(r7)

lbl_800B6C7C:
	cmpwi    r6, 1
	bne      lbl_800B6C9C
	clrlwi   r0, r5, 0x18
	li       r4, 1
	lwz      r5, 0x2dc(r3)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2dc(r3)

lbl_800B6C9C:
	lwz      r3, 0x308(r3)
	cmplwi   r3, 0
	beq      lbl_800B6CBC
	cmpwi    r6, 2
	beq      lbl_800B6CBC
	lwz      r0, 8(r3)
	oris     r0, r0, 0x40
	stw      r0, 8(r3)

lbl_800B6CBC:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6CC4
 * Size:	000030
 */
void JAISequence::getDolby(unsigned char)
{
	/*
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B6CD8
	cmplwi   r0, 5
	bne      lbl_800B6CEC

lbl_800B6CD8:
	lwz      r3, 0x2a4(r3)
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 4(r3)
	blr

lbl_800B6CEC:
	lfs      f1, lbl_80517034@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6CF4
 * Size:	000098
 */
void JAISequence::setTempoProportion(float, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	lwz      r0, 0x54(r3)
	cmplwi   r0, 0
	bne      lbl_800B6D10
	lfs      f0, 0x4c(r3)
	fcmpu    cr0, f0, f1
	beq      lbl_800B6D6C

lbl_800B6D10:
	cmplwi   r0, 0
	beq      lbl_800B6D24
	lfs      f0, 0x48(r3)
	fcmpu    cr0, f0, f1
	beq      lbl_800B6D6C

lbl_800B6D24:
	cmplwi   r4, 0
	stfs     f1, 0x48(r3)
	bne      lbl_800B6D38
	stfs     f1, 0x4c(r3)
	b        lbl_800B6D6C

lbl_800B6D38:
	addi     r4, r4, 1
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	lfs      f3, 0x4c(r3)
	stw      r0, 8(r1)
	lfs      f2, 0x48(r3)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 0x50(r3)
	stw      r4, 0x54(r3)

lbl_800B6D6C:
	lwz      r3, 0x308(r3)
	cmplwi   r3, 0
	beq      lbl_800B6D84
	lwz      r0, 8(r3)
	ori      r0, r0, 4
	stw      r0, 8(r3)

lbl_800B6D84:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6D8C
 * Size:	000024
 */
void JAISequence::getTempoProportion()
{
	/*
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B6DA0
	cmplwi   r0, 5
	bne      lbl_800B6DA8

lbl_800B6DA0:
	lfs      f1, 0x4c(r3)
	blr

lbl_800B6DA8:
	lfs      f1, lbl_80517034@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6DB0
 * Size:	000048
 */
void JAISequence::getVolumeU7(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B6DC8
	cmplwi   r0, 5
	bne      lbl_800B6DD8

lbl_800B6DC8:
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 0x15c(r3)
	b        lbl_800B6DDC

lbl_800B6DD8:
	lfs      f1, lbl_80517034@sda21(r2)

lbl_800B6DDC:
	lfs      f0, lbl_80517020@sda21(r2)
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6DF8
 * Size:	000148
 */
void JAISequence::setPanU7(unsigned char, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	rlwinm   r0, r6, 4, 0x14, 0x1b
	lwz      r7, 0x298(r3)
	add      r8, r7, r0
	lwz      r9, 0xc(r8)
	cmplwi   r9, 0
	bne      lbl_800B6E4C
	clrlwi   r7, r4, 0x18
	lis      r0, 0x4330
	stw      r7, 0xc(r1)
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f3, 4(r8)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpu    cr0, f3, f0
	bne      lbl_800B6E4C
	li       r7, 2
	b        lbl_800B6EF8

lbl_800B6E4C:
	cmplwi   r9, 0
	beq      lbl_800B6E8C
	clrlwi   r7, r4, 0x18
	lis      r0, 0x4330
	stw      r7, 0xc(r1)
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f3, 0(r8)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpu    cr0, f3, f0
	bne      lbl_800B6E8C
	li       r7, 2
	b        lbl_800B6EF8

lbl_800B6E8C:
	clrlwi   r0, r4, 0x18
	lis      r4, 0x4330
	stw      r0, 0xc(r1)
	cmplwi   r5, 0
	lfd      f3, lbl_80517018@sda21(r2)
	stw      r4, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f3
	fdivs    f0, f1, f0
	stfs     f0, 0(r8)
	bne      lbl_800B6EC8
	stfs     f0, 4(r8)
	li       r7, 0
	b        lbl_800B6EF8

lbl_800B6EC8:
	addi     r0, r5, 1
	stw      r4, 8(r1)
	lfs      f2, 4(r8)
	li       r7, 1
	stw      r0, 0xc(r1)
	lfs      f1, 0(r8)
	lfd      f0, 8(r1)
	fsubs    f1, f2, f1
	fsubs    f0, f0, f3
	fdivs    f0, f1, f0
	stfs     f0, 8(r8)
	stw      r0, 0xc(r8)

lbl_800B6EF8:
	cmpwi    r7, 1
	bne      lbl_800B6F18
	clrlwi   r0, r6, 0x18
	li       r4, 1
	lwz      r5, 0x2d0(r3)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2d0(r3)

lbl_800B6F18:
	lwz      r3, 0x308(r3)
	cmplwi   r3, 0
	beq      lbl_800B6F38
	cmpwi    r7, 2
	beq      lbl_800B6F38
	lwz      r0, 8(r3)
	oris     r0, r0, 8
	stw      r0, 8(r3)

lbl_800B6F38:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6F40
 * Size:	00004C
 */
void JAISequence::getPanU7(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B6F58
	cmplwi   r0, 5
	bne      lbl_800B6F6C

lbl_800B6F58:
	lwz      r3, 0x298(r3)
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 4(r3)
	b        lbl_800B6F70

lbl_800B6F6C:
	lfs      f1, lbl_80517034@sda21(r2)

lbl_800B6F70:
	lfs      f0, lbl_80517020@sda21(r2)
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B6F8C
 * Size:	000148
 */
void JAISequence::setFxmixU7(unsigned char, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	rlwinm   r0, r6, 4, 0x14, 0x1b
	lwz      r7, 0x2a0(r3)
	add      r8, r7, r0
	lwz      r9, 0xc(r8)
	cmplwi   r9, 0
	bne      lbl_800B6FE0
	clrlwi   r7, r4, 0x18
	lis      r0, 0x4330
	stw      r7, 0xc(r1)
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f3, 4(r8)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpu    cr0, f3, f0
	bne      lbl_800B6FE0
	li       r7, 2
	b        lbl_800B708C

lbl_800B6FE0:
	cmplwi   r9, 0
	beq      lbl_800B7020
	clrlwi   r7, r4, 0x18
	lis      r0, 0x4330
	stw      r7, 0xc(r1)
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f3, 0(r8)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpu    cr0, f3, f0
	bne      lbl_800B7020
	li       r7, 2
	b        lbl_800B708C

lbl_800B7020:
	clrlwi   r0, r4, 0x18
	lis      r4, 0x4330
	stw      r0, 0xc(r1)
	cmplwi   r5, 0
	lfd      f3, lbl_80517018@sda21(r2)
	stw      r4, 8(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f3
	fdivs    f0, f1, f0
	stfs     f0, 0(r8)
	bne      lbl_800B705C
	stfs     f0, 4(r8)
	li       r7, 0
	b        lbl_800B708C

lbl_800B705C:
	addi     r0, r5, 1
	stw      r4, 8(r1)
	lfs      f2, 4(r8)
	li       r7, 1
	stw      r0, 0xc(r1)
	lfs      f1, 0(r8)
	lfd      f0, 8(r1)
	fsubs    f1, f2, f1
	fsubs    f0, f0, f3
	fdivs    f0, f1, f0
	stfs     f0, 8(r8)
	stw      r0, 0xc(r8)

lbl_800B708C:
	cmpwi    r7, 1
	bne      lbl_800B70AC
	clrlwi   r0, r6, 0x18
	li       r4, 1
	lwz      r5, 0x2d8(r3)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2d8(r3)

lbl_800B70AC:
	lwz      r3, 0x308(r3)
	cmplwi   r3, 0
	beq      lbl_800B70CC
	cmpwi    r7, 2
	beq      lbl_800B70CC
	lwz      r0, 8(r3)
	oris     r0, r0, 0x20
	stw      r0, 8(r3)

lbl_800B70CC:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B70D4
 * Size:	00004C
 */
void JAISequence::getFxmixU7(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B70EC
	cmplwi   r0, 5
	bne      lbl_800B7100

lbl_800B70EC:
	lwz      r3, 0x2a0(r3)
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 4(r3)
	b        lbl_800B7104

lbl_800B7100:
	lfs      f1, lbl_80517034@sda21(r2)

lbl_800B7104:
	lfs      f0, lbl_80517020@sda21(r2)
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B7120
 * Size:	000134
 */
void JAISequence::setDolbyU7(unsigned char, unsigned long, unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	clrlwi   r4, r4, 0x18
	lis      r0, 0x4330
	lfd      f2, lbl_80517018@sda21(r2)
	stw      r4, 0xc(r1)
	lfs      f0, lbl_80517020@sda21(r2)
	stw      r0, 8(r1)
	lwz      r4, msBasic__8JAIBasic@sda21(r13)
	lfd      f1, 8(r1)
	lbz      r0, 0xd(r4)
	fsubs    f1, f1, f2
	cmplwi   r0, 2
	fdivs    f1, f1, f0
	beq      lbl_800B7174
	lwz      r4, 0x2a4(r3)
	rlwinm   r0, r6, 4, 0x14, 0x1b
	lfs      f1, lbl_80516FE4@sda21(r2)
	add      r4, r4, r0
	lfs      f0, 4(r4)
	fcmpu    cr0, f1, f0
	beq      lbl_800B724C

lbl_800B7174:
	lwz      r4, 0x2a4(r3)
	rlwinm   r0, r6, 4, 0x14, 0x1b
	add      r8, r4, r0
	lwz      r0, 0xc(r8)
	cmplwi   r0, 0
	bne      lbl_800B71A0
	lfs      f0, 4(r8)
	fcmpu    cr0, f0, f1
	bne      lbl_800B71A0
	li       r7, 2
	b        lbl_800B720C

lbl_800B71A0:
	cmplwi   r0, 0
	beq      lbl_800B71BC
	lfs      f0, 0(r8)
	fcmpu    cr0, f0, f1
	bne      lbl_800B71BC
	li       r7, 2
	b        lbl_800B720C

lbl_800B71BC:
	cmplwi   r5, 0
	stfs     f1, 0(r8)
	bne      lbl_800B71D4
	stfs     f1, 4(r8)
	li       r7, 0
	b        lbl_800B720C

lbl_800B71D4:
	addi     r4, r5, 1
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	li       r7, 1
	lfs      f3, 4(r8)
	stw      r0, 8(r1)
	lfs      f2, 0(r8)
	lfd      f1, lbl_80517018@sda21(r2)
	lfd      f0, 8(r1)
	fsubs    f2, f3, f2
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	stfs     f0, 8(r8)
	stw      r4, 0xc(r8)

lbl_800B720C:
	cmpwi    r7, 1
	bne      lbl_800B722C
	clrlwi   r0, r6, 0x18
	li       r4, 1
	lwz      r5, 0x2dc(r3)
	slw      r0, r4, r0
	or       r0, r5, r0
	stw      r0, 0x2dc(r3)

lbl_800B722C:
	lwz      r3, 0x308(r3)
	cmplwi   r3, 0
	beq      lbl_800B724C
	cmpwi    r7, 2
	beq      lbl_800B724C
	lwz      r0, 8(r3)
	oris     r0, r0, 0x40
	stw      r0, 8(r3)

lbl_800B724C:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B7254
 * Size:	00004C
 */
void JAISequence::getDolbyU7(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	lbz      r0, 0x15(r3)
	cmplwi   r0, 4
	beq      lbl_800B726C
	cmplwi   r0, 5
	bne      lbl_800B7280

lbl_800B726C:
	lwz      r3, 0x2a4(r3)
	rlwinm   r0, r4, 4, 0x14, 0x1b
	add      r3, r3, r0
	lfs      f1, 4(r3)
	b        lbl_800B7284

lbl_800B7280:
	lfs      f1, lbl_80517034@sda21(r2)

lbl_800B7284:
	lfs      f0, lbl_80517020@sda21(r2)
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B72A0
 * Size:	00017C
 */
void JAISequence::setPortData(unsigned char, unsigned short)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f1, lbl_80516FE4@sda21(r2)
	stw      r0, 0x44(r1)
	stmw     r27, 0x2c(r1)
	mr       r30, r3
	rlwinm   r28, r4, 4, 0x14, 0x1b
	mr       r31, r4
	add      r29, r30, r28
	mr       r27, r5
	lfs      f0, 0x5c(r29)
	fcmpu    cr0, f1, f0
	bne      lbl_800B7310
	lbz      r0, 0x15(r30)
	cmplwi   r0, 3
	blt      lbl_800B7310
	addi     r3, r30, 0x30c
	rlwinm   r4, r31, 0x10, 8, 0xf
	addi     r5, r1, 8
	bl       readPortApp__8JASTrackFUlPUs
	lhz      r3, 8(r1)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lfd      f1, lbl_80517018@sda21(r2)
	stw      r3, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0x5c(r29)

lbl_800B7310:
	add      r3, r30, r28
	lwz      r4, 0x64(r3)
	cmplwi   r4, 0
	bne      lbl_800B7350
	clrlwi   r3, r27, 0x10
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f1, lbl_80517018@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, 0x5c(r29)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fcmpu    cr0, f2, f0
	bne      lbl_800B7350
	li       r5, 2
	b        lbl_800B73C8

lbl_800B7350:
	cmplwi   r4, 0
	beq      lbl_800B738C
	clrlwi   r3, r27, 0x10
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	add      r3, r30, r28
	lfd      f1, lbl_80517018@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, 0x58(r3)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fcmpu    cr0, f2, f0
	bne      lbl_800B738C
	li       r5, 2
	b        lbl_800B73C8

lbl_800B738C:
	clrlwi   r4, r27, 0x10
	lis      r0, 0x4330
	stw      r4, 0x14(r1)
	add      r3, r30, r28
	lfd      f2, lbl_80517018@sda21(r2)
	li       r5, 0
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	stw      r4, 0x1c(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x18(r1)
	lfd      f0, 0x18(r1)
	stfs     f1, 0x58(r3)
	fsubs    f0, f0, f2
	stfs     f0, 0x5c(r29)

lbl_800B73C8:
	cmpwi    r5, 1
	bne      lbl_800B73E8
	clrlwi   r0, r31, 0x18
	li       r3, 1
	lwz      r4, 0x2c8(r30)
	slw      r0, r3, r0
	or       r0, r4, r0
	stw      r0, 0x2c8(r30)

lbl_800B73E8:
	lwz      r3, 0x308(r30)
	cmplwi   r3, 0
	beq      lbl_800B7408
	cmpwi    r5, 2
	beq      lbl_800B7408
	lwz      r0, 8(r3)
	ori      r0, r0, 0x10
	stw      r0, 8(r3)

lbl_800B7408:
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B741C
 * Size:	000030
 */
void JAISequence::getPortData(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x30c
	addi     r5, r13, _port$2234@sda21
	stw      r0, 0x14(r1)
	rlwinm   r4, r4, 0x10, 8, 0xf
	bl       readPortApp__8JASTrackFUlPUs
	lwz      r0, 0x14(r1)
	lhz      r3, _port$2234@sda21(r13)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
