#include "JStudio/TAdaptor.h"
#include "JStudio/TObject.h"
#include "JStudio/TVariableValue.h"
#include "JStudio/data.h"
#include "JStudio/object.h"
#include "JSystem/JUT/TColor.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte "__sinit_jstudio-object_cpp"

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor
    sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor:
        .4byte 0x00000003
        .4byte 0x00000004
        .4byte 0x00000005
    .global sauVariableValue_3_ROTATION_XYZ__Q27JStudio14TAdaptor_actor
    sauVariableValue_3_ROTATION_XYZ__Q27JStudio14TAdaptor_actor:
        .4byte 0x00000006
        .4byte 0x00000007
        .4byte 0x00000008
    .global sauVariableValue_3_SCALING_XYZ__Q27JStudio14TAdaptor_actor
    sauVariableValue_3_SCALING_XYZ__Q27JStudio14TAdaptor_actor:
        .4byte 0x00000009
        .4byte 0x0000000A
        .4byte 0x0000000B
    .global sauVariableValue_3_COLOR_RGB__Q27JStudio21TAdaptor_ambientLight
    sauVariableValue_3_COLOR_RGB__Q27JStudio21TAdaptor_ambientLight:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
    .global sauVariableValue_4_COLOR_RGBA__Q27JStudio21TAdaptor_ambientLight
    sauVariableValue_4_COLOR_RGBA__Q27JStudio21TAdaptor_ambientLight:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0x00000003
    .global sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera
    sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
    .global sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio15TAdaptor_camera
    sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio15TAdaptor_camera:
        .4byte 0x00000003
        .4byte 0x00000004
        .4byte 0x00000005
    .global sauVariableValue_3_COLOR_RGB__Q27JStudio12TAdaptor_fog
    sauVariableValue_3_COLOR_RGB__Q27JStudio12TAdaptor_fog:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
    .global sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog
    sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0x00000003
    .global sauVariableValue_3_COLOR_RGB__Q27JStudio14TAdaptor_light
    sauVariableValue_3_COLOR_RGB__Q27JStudio14TAdaptor_light:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
    .global sauVariableValue_4_COLOR_RGBA__Q27JStudio14TAdaptor_light
    sauVariableValue_4_COLOR_RGBA__Q27JStudio14TAdaptor_light:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0x00000003
    .global sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_light
    sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_light:
        .4byte 0x00000004
        .4byte 0x00000005
        .4byte 0x00000006
    .global sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio14TAdaptor_light
    sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio14TAdaptor_light:
        .4byte 0x00000007
        .4byte 0x00000008
        .4byte 0x00000009
    .global sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio17TAdaptor_particle
    sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio17TAdaptor_particle:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
    .global sauVariableValue_3_ROTATION_XYZ__Q27JStudio17TAdaptor_particle
    sauVariableValue_3_ROTATION_XYZ__Q27JStudio17TAdaptor_particle:
        .4byte 0x00000003
        .4byte 0x00000004
        .4byte 0x00000005
    .global sauVariableValue_3_SCALING_XYZ__Q27JStudio17TAdaptor_particle
    sauVariableValue_3_SCALING_XYZ__Q27JStudio17TAdaptor_particle:
        .4byte 0x00000006
        .4byte 0x00000007
        .4byte 0x00000008
    .global sauVariableValue_3_COLOR_RGB__Q27JStudio17TAdaptor_particle
    sauVariableValue_3_COLOR_RGB__Q27JStudio17TAdaptor_particle:
        .4byte 0x00000009
        .4byte 0x0000000A
        .4byte 0x0000000B
    .global sauVariableValue_4_COLOR_RGBA__Q27JStudio17TAdaptor_particle
    sauVariableValue_4_COLOR_RGBA__Q27JStudio17TAdaptor_particle:
        .4byte 0x00000009
        .4byte 0x0000000A
        .4byte 0x0000000B
        .4byte 0x0000000C
    .global sauVariableValue_3_COLOR1_RGB__Q27JStudio17TAdaptor_particle
    sauVariableValue_3_COLOR1_RGB__Q27JStudio17TAdaptor_particle:
        .4byte 0x00000009
        .4byte 0x0000000A
        .4byte 0x0000000B
    .global sauVariableValue_4_COLOR1_RGBA__Q27JStudio17TAdaptor_particle
    sauVariableValue_4_COLOR1_RGBA__Q27JStudio17TAdaptor_particle:
        .4byte 0x00000009
        .4byte 0x0000000A
        .4byte 0x0000000B
        .4byte 0x0000000C
    .global sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_sound
    sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_sound:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_8049E698
    lbl_8049E698:
        .4byte 0x00000000
        .4byte 0x00000028
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000038
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000028
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000038
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000020
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0000003C
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0000003C
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000040
        .4byte 0x00000000
    .global lbl_8049E6F8
    lbl_8049E6F8:
        .4byte lbl_8000D254
        .4byte lbl_8000D204
        .4byte lbl_8000D214
        .4byte lbl_8000D224
        .4byte lbl_8000D254
        .4byte lbl_8000D254
        .4byte lbl_8000D254
        .4byte lbl_8000D254
        .4byte lbl_8000D254
        .4byte lbl_8000D254
        .4byte lbl_8000D254
        .4byte lbl_8000D254
        .4byte lbl_8000D254
        .4byte lbl_8000D254
        .4byte lbl_8000D254
        .4byte lbl_8000D254
        .4byte lbl_8000D234
        .4byte lbl_8000D254
        .4byte lbl_8000D244
        .4byte 0x00000000
        .4byte 0x0000003C
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000040
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000044
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000048
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0000004C
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000020
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000024
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000028
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0000002C
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000030
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000034
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000038
        .4byte 0x00000000
    .global lbl_8049E7D4
    lbl_8049E7D4:
        .4byte lbl_8000DCF8
        .4byte lbl_8000DCAC
        .4byte lbl_8000DCB8
        .4byte lbl_8000DCC4
        .4byte lbl_8000DCF8
        .4byte lbl_8000DCF8
        .4byte lbl_8000DCF8
        .4byte lbl_8000DCF8
        .4byte lbl_8000DCF8
        .4byte lbl_8000DCF8
        .4byte lbl_8000DCF8
        .4byte lbl_8000DCF8
        .4byte lbl_8000DCF8
        .4byte lbl_8000DCF8
        .4byte lbl_8000DCF8
        .4byte lbl_8000DCF8
        .4byte lbl_8000DCD0
        .4byte lbl_8000DCF8
        .4byte lbl_8000DCDC
    .global lbl_8049E820
    lbl_8049E820:
        .4byte lbl_8000DC48
        .4byte lbl_8000DBF8
        .4byte lbl_8000DC04
        .4byte lbl_8000DC10
        .4byte lbl_8000DC48
        .4byte lbl_8000DC48
        .4byte lbl_8000DC48
        .4byte lbl_8000DC48
        .4byte lbl_8000DC48
        .4byte lbl_8000DC48
        .4byte lbl_8000DC48
        .4byte lbl_8000DC48
        .4byte lbl_8000DC48
        .4byte lbl_8000DC48
        .4byte lbl_8000DC48
        .4byte lbl_8000DC48
        .4byte lbl_8000DC1C
        .4byte lbl_8000DC48
        .4byte lbl_8000DC28
    .global lbl_8049E86C
    lbl_8049E86C:
        .4byte lbl_8000DB54
        .4byte lbl_8000DB5C
        .4byte lbl_8000DB64
        .4byte lbl_8000DB9C
        .4byte lbl_8000DB6C
        .4byte lbl_8000DB74
        .4byte lbl_8000DB7C
        .4byte lbl_8000DBA8
        .4byte lbl_8000DB84
        .4byte lbl_8000DB8C
        .4byte lbl_8000DB94
        .4byte lbl_8000DBB4
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DA60
        .4byte lbl_8000DA7C
        .4byte lbl_8000DA98
        .4byte lbl_8000DAE0
        .4byte lbl_8000DAFC
        .4byte lbl_8000DB18
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000D9D4
        .4byte lbl_8000D9F0
        .4byte lbl_8000DB44
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DA0C
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DB4C
        .4byte lbl_8000DA28
        .4byte lbl_8000DBC0
        .4byte lbl_8000DA44
        .4byte lbl_8000DBC0
        .4byte lbl_8000DBC0
        .4byte lbl_8000DAC4
    .global lbl_8049E990
    lbl_8049E990:
        .4byte lbl_8000DFA4
        .4byte lbl_8000DF58
        .4byte lbl_8000DF64
        .4byte lbl_8000DF70
        .4byte lbl_8000DFA4
        .4byte lbl_8000DFA4
        .4byte lbl_8000DFA4
        .4byte lbl_8000DFA4
        .4byte lbl_8000DFA4
        .4byte lbl_8000DFA4
        .4byte lbl_8000DFA4
        .4byte lbl_8000DFA4
        .4byte lbl_8000DFA4
        .4byte lbl_8000DFA4
        .4byte lbl_8000DFA4
        .4byte lbl_8000DFA4
        .4byte lbl_8000DF7C
        .4byte lbl_8000DFA4
        .4byte lbl_8000DF88
        .4byte 0x00000000
        .4byte 0x00000020
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000024
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000028
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0000002C
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000030
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000034
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000038
        .4byte 0x00000000
    .global lbl_8049EA30
    lbl_8049EA30:
        .4byte lbl_8000E434
        .4byte lbl_8000E3E8
        .4byte lbl_8000E3F4
        .4byte lbl_8000E400
        .4byte lbl_8000E434
        .4byte lbl_8000E434
        .4byte lbl_8000E434
        .4byte lbl_8000E434
        .4byte lbl_8000E434
        .4byte lbl_8000E434
        .4byte lbl_8000E434
        .4byte lbl_8000E434
        .4byte lbl_8000E434
        .4byte lbl_8000E434
        .4byte lbl_8000E434
        .4byte lbl_8000E434
        .4byte lbl_8000E40C
        .4byte lbl_8000E434
        .4byte lbl_8000E418
    .global lbl_8049EA7C
    lbl_8049EA7C:
        .4byte lbl_8000E384
        .4byte lbl_8000E334
        .4byte lbl_8000E340
        .4byte lbl_8000E34C
        .4byte lbl_8000E384
        .4byte lbl_8000E384
        .4byte lbl_8000E384
        .4byte lbl_8000E384
        .4byte lbl_8000E384
        .4byte lbl_8000E384
        .4byte lbl_8000E384
        .4byte lbl_8000E384
        .4byte lbl_8000E384
        .4byte lbl_8000E384
        .4byte lbl_8000E384
        .4byte lbl_8000E384
        .4byte lbl_8000E358
        .4byte lbl_8000E384
        .4byte lbl_8000E364
    .global lbl_8049EAC8
    lbl_8049EAC8:
        .4byte lbl_8000E278
        .4byte lbl_8000E280
        .4byte lbl_8000E288
        .4byte lbl_8000E2C8
        .4byte lbl_8000E290
        .4byte lbl_8000E298
        .4byte lbl_8000E2A0
        .4byte lbl_8000E2DC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2B0
        .4byte lbl_8000E2A8
        .4byte lbl_8000E2B8
        .4byte lbl_8000E2C0
        .4byte lbl_8000E2F0
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E194
        .4byte lbl_8000E1B0
        .4byte lbl_8000E1CC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E2FC
        .4byte lbl_8000E1F8
        .4byte lbl_8000E214
        .4byte lbl_8000E230
        .4byte lbl_8000E24C
    .global lbl_8049EBC8
    lbl_8049EBC8:
        .4byte lbl_8000E6EC
        .4byte lbl_8000E6A0
        .4byte lbl_8000E6AC
        .4byte lbl_8000E6B8
        .4byte lbl_8000E6EC
        .4byte lbl_8000E6EC
        .4byte lbl_8000E6EC
        .4byte lbl_8000E6EC
        .4byte lbl_8000E6EC
        .4byte lbl_8000E6EC
        .4byte lbl_8000E6EC
        .4byte lbl_8000E6EC
        .4byte lbl_8000E6EC
        .4byte lbl_8000E6EC
        .4byte lbl_8000E6EC
        .4byte lbl_8000E6EC
        .4byte lbl_8000E6C4
        .4byte lbl_8000E6EC
        .4byte lbl_8000E6D0
    .global lbl_8049EC14
    lbl_8049EC14:
        .4byte lbl_8000E618
        .4byte lbl_8000E620
        .4byte lbl_8000E628
        .4byte lbl_8000E630
        .4byte lbl_8000E648
        .4byte lbl_8000E65C
        .4byte lbl_8000E67C
        .4byte lbl_8000E67C
        .4byte lbl_8000E67C
        .4byte lbl_8000E67C
        .4byte lbl_8000E67C
        .4byte lbl_8000E67C
        .4byte lbl_8000E67C
        .4byte lbl_8000E67C
        .4byte lbl_8000E638
        .4byte lbl_8000E640
        .4byte lbl_8000E670
    .global lbl_8049EC58
    lbl_8049EC58:
        .4byte 0x00000000
        .4byte 0x00000020
        .4byte 0x00000000
    .global lbl_8049EC64
    lbl_8049EC64:
        .4byte 0x00000000
        .4byte 0x00000024
        .4byte 0x00000000
    .global lbl_8049EC70
    lbl_8049EC70:
        .4byte lbl_8000EAFC
        .4byte lbl_8000EAB0
        .4byte lbl_8000EABC
        .4byte lbl_8000EAC8
        .4byte lbl_8000EAFC
        .4byte lbl_8000EAFC
        .4byte lbl_8000EAFC
        .4byte lbl_8000EAFC
        .4byte lbl_8000EAFC
        .4byte lbl_8000EAFC
        .4byte lbl_8000EAFC
        .4byte lbl_8000EAFC
        .4byte lbl_8000EAFC
        .4byte lbl_8000EAFC
        .4byte lbl_8000EAFC
        .4byte lbl_8000EAFC
        .4byte lbl_8000EAD4
        .4byte lbl_8000EAFC
        .4byte lbl_8000EAE0
    .global lbl_8049ECBC
    lbl_8049ECBC:
        .4byte lbl_8000EA54
        .4byte lbl_8000EA04
        .4byte lbl_8000EA10
        .4byte lbl_8000EA1C
        .4byte lbl_8000EA54
        .4byte lbl_8000EA54
        .4byte lbl_8000EA54
        .4byte lbl_8000EA54
        .4byte lbl_8000EA54
        .4byte lbl_8000EA54
        .4byte lbl_8000EA54
        .4byte lbl_8000EA54
        .4byte lbl_8000EA54
        .4byte lbl_8000EA54
        .4byte lbl_8000EA54
        .4byte lbl_8000EA54
        .4byte lbl_8000EA28
        .4byte lbl_8000EA54
        .4byte lbl_8000EA34
    .global lbl_8049ED08
    lbl_8049ED08:
        .4byte lbl_8000E950
        .4byte lbl_8000E958
        .4byte lbl_8000E960
        .4byte lbl_8000E9A8
        .4byte lbl_8000E968
        .4byte lbl_8000E970
        .4byte lbl_8000E978
        .4byte lbl_8000E9B4
        .4byte lbl_8000E930
        .4byte lbl_8000E938
        .4byte lbl_8000E940
        .4byte lbl_8000E948
        .4byte lbl_8000E990
        .4byte lbl_8000E99C
        .4byte lbl_8000E980
        .4byte lbl_8000E988
        .4byte lbl_8000E9C0
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E9CC
        .4byte lbl_8000E8DC
        .4byte lbl_8000E90C
    .global lbl_8049ED94
    lbl_8049ED94:
        .4byte 0x00000000
        .4byte 0x00000020
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000020
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000024
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000028
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0000002C
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000030
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000034
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000038
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0000003C
        .4byte 0x00000000
    .global lbl_8049EE00
    lbl_8049EE00:
        .4byte lbl_8000F144
        .4byte lbl_8000F0F8
        .4byte lbl_8000F104
        .4byte lbl_8000F110
        .4byte lbl_8000F144
        .4byte lbl_8000F144
        .4byte lbl_8000F144
        .4byte lbl_8000F144
        .4byte lbl_8000F144
        .4byte lbl_8000F144
        .4byte lbl_8000F144
        .4byte lbl_8000F144
        .4byte lbl_8000F144
        .4byte lbl_8000F144
        .4byte lbl_8000F144
        .4byte lbl_8000F144
        .4byte lbl_8000F11C
        .4byte lbl_8000F144
        .4byte lbl_8000F128
    .global lbl_8049EE4C
    lbl_8049EE4C:
        .4byte lbl_8000F09C
        .4byte lbl_8000F04C
        .4byte lbl_8000F058
        .4byte lbl_8000F064
        .4byte lbl_8000F09C
        .4byte lbl_8000F09C
        .4byte lbl_8000F09C
        .4byte lbl_8000F09C
        .4byte lbl_8000F09C
        .4byte lbl_8000F09C
        .4byte lbl_8000F09C
        .4byte lbl_8000F09C
        .4byte lbl_8000F09C
        .4byte lbl_8000F09C
        .4byte lbl_8000F09C
        .4byte lbl_8000F09C
        .4byte lbl_8000F070
        .4byte lbl_8000F09C
        .4byte lbl_8000F07C
    .global lbl_8049EE98
    lbl_8049EE98:
        .4byte lbl_8000EF38
        .4byte lbl_8000EF40
        .4byte lbl_8000EF48
        .4byte lbl_8000EFC0
        .4byte lbl_8000EF50
        .4byte lbl_8000EF58
        .4byte lbl_8000EF60
        .4byte lbl_8000EFCC
        .4byte lbl_8000EF68
        .4byte lbl_8000EF70
        .4byte lbl_8000EF78
        .4byte lbl_8000EFD8
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000EF80
        .4byte lbl_8000EF88
        .4byte lbl_8000EF90
        .4byte lbl_8000EF98
        .4byte lbl_8000EFE4
        .4byte lbl_8000EFF0
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000EE84
        .4byte lbl_8000EEBC
        .4byte lbl_8000EED8
        .4byte lbl_8000EEF4
        .4byte lbl_8000EF10
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000EE4C
        .4byte lbl_8000EFA0
        .4byte lbl_8000EFA8
        .4byte lbl_8000EFB0
        .4byte lbl_8000EFB8
        .4byte lbl_8000EFFC
        .4byte lbl_8000F008
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000F014
        .4byte lbl_8000EE68
        .4byte lbl_8000EEA0
        .4byte 0x00000000
        .4byte 0x00000020
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000024
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000028
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0000002C
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000030
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000034
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000038
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x0000003C
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000040
        .4byte 0x00000000
    .global lbl_8049F024
    lbl_8049F024:
        .4byte lbl_8000F5F4
        .4byte lbl_8000F5A8
        .4byte lbl_8000F5B4
        .4byte lbl_8000F5C0
        .4byte lbl_8000F5F4
        .4byte lbl_8000F5F4
        .4byte lbl_8000F5F4
        .4byte lbl_8000F5F4
        .4byte lbl_8000F5F4
        .4byte lbl_8000F5F4
        .4byte lbl_8000F5F4
        .4byte lbl_8000F5F4
        .4byte lbl_8000F5F4
        .4byte lbl_8000F5F4
        .4byte lbl_8000F5F4
        .4byte lbl_8000F5F4
        .4byte lbl_8000F5CC
        .4byte lbl_8000F5F4
        .4byte lbl_8000F5D8
    .global lbl_8049F070
    lbl_8049F070:
        .4byte lbl_8000F544
        .4byte lbl_8000F4F4
        .4byte lbl_8000F500
        .4byte lbl_8000F50C
        .4byte lbl_8000F544
        .4byte lbl_8000F544
        .4byte lbl_8000F544
        .4byte lbl_8000F544
        .4byte lbl_8000F544
        .4byte lbl_8000F544
        .4byte lbl_8000F544
        .4byte lbl_8000F544
        .4byte lbl_8000F544
        .4byte lbl_8000F544
        .4byte lbl_8000F544
        .4byte lbl_8000F544
        .4byte lbl_8000F518
        .4byte lbl_8000F544
        .4byte lbl_8000F524
    .global lbl_8049F0BC
    lbl_8049F0BC:
        .4byte lbl_8000F46C
        .4byte lbl_8000F474
        .4byte lbl_8000F47C
        .4byte lbl_8000F4AC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F388
        .4byte lbl_8000F3C0
        .4byte lbl_8000F3DC
        .4byte lbl_8000F3F8
        .4byte lbl_8000F414
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F440
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F350
        .4byte lbl_8000F484
        .4byte lbl_8000F48C
        .4byte lbl_8000F494
        .4byte lbl_8000F49C
        .4byte lbl_8000F4A4
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F4BC
        .4byte lbl_8000F36C
        .4byte lbl_8000F3A4
    .global __vt__Q27JStudio13TObject_sound
    __vt__Q27JStudio13TObject_sound:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JStudio13TObject_soundFv
        .4byte do_begin__Q27JStudio7TObjectFv
        .4byte do_end__Q27JStudio7TObjectFv
        .4byte do_paragraph__Q27JStudio13TObject_soundFUlPCvUl
        .4byte do_wait__Q27JStudio7TObjectFUl
        .4byte do_data__Q27JStudio7TObjectFPCvUlPCvUl
    .global __vt__Q27JStudio14TAdaptor_sound
    __vt__Q27JStudio14TAdaptor_sound:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q27JStudio16TObject_particle
    __vt__Q27JStudio16TObject_particle:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JStudio16TObject_particleFv
        .4byte do_begin__Q27JStudio7TObjectFv
        .4byte do_end__Q27JStudio7TObjectFv
        .4byte do_paragraph__Q27JStudio16TObject_particleFUlPCvUl
        .4byte do_wait__Q27JStudio7TObjectFUl
        .4byte do_data__Q27JStudio7TObjectFPCvUlPCvUl
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
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q27JStudio15TObject_message
    __vt__Q27JStudio15TObject_message:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JStudio15TObject_messageFv
        .4byte do_begin__Q27JStudio7TObjectFv
        .4byte do_end__Q27JStudio7TObjectFv
        .4byte do_paragraph__Q27JStudio15TObject_messageFUlPCvUl
        .4byte do_wait__Q27JStudio7TObjectFUl
        .4byte do_data__Q27JStudio7TObjectFPCvUlPCvUl
    .global __vt__Q27JStudio16TAdaptor_message
    __vt__Q27JStudio16TAdaptor_message:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl .4byte 0
    .global __vt__Q27JStudio13TObject_light
    __vt__Q27JStudio13TObject_light:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JStudio13TObject_lightFv
        .4byte do_begin__Q27JStudio7TObjectFv
        .4byte do_end__Q27JStudio7TObjectFv
        .4byte do_paragraph__Q27JStudio13TObject_lightFUlPCvUl
        .4byte do_wait__Q27JStudio7TObjectFUl
        .4byte do_data__Q27JStudio7TObjectFPCvUlPCvUl
    .global __vt__Q27JStudio14TAdaptor_light
    __vt__Q27JStudio14TAdaptor_light:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl .4byte 0
        .4byte 0
    .global __vt__Q27JStudio11TObject_fog
    __vt__Q27JStudio11TObject_fog:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JStudio11TObject_fogFv
        .4byte do_begin__Q27JStudio7TObjectFv
        .4byte do_end__Q27JStudio7TObjectFv
        .4byte do_paragraph__Q27JStudio11TObject_fogFUlPCvUl
        .4byte do_wait__Q27JStudio7TObjectFUl
        .4byte do_data__Q27JStudio7TObjectFPCvUlPCvUl
    .global __vt__Q27JStudio12TAdaptor_fog
    __vt__Q27JStudio12TAdaptor_fog:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl .global
   __vt__Q27JStudio14TObject_camera
    __vt__Q27JStudio14TObject_camera:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JStudio14TObject_cameraFv
        .4byte do_begin__Q27JStudio7TObjectFv
        .4byte do_end__Q27JStudio7TObjectFv
        .4byte do_paragraph__Q27JStudio14TObject_cameraFUlPCvUl
        .4byte do_wait__Q27JStudio7TObjectFUl
        .4byte do_data__Q27JStudio7TObjectFPCvUlPCvUl
    .global __vt__Q27JStudio15TAdaptor_camera
    __vt__Q27JStudio15TAdaptor_camera:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q27JStudio20TObject_ambientLight
    __vt__Q27JStudio20TObject_ambientLight:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JStudio20TObject_ambientLightFv
        .4byte do_begin__Q27JStudio7TObjectFv
        .4byte do_end__Q27JStudio7TObjectFv
        .4byte do_paragraph__Q27JStudio20TObject_ambientLightFUlPCvUl
        .4byte do_wait__Q27JStudio7TObjectFUl
        .4byte do_data__Q27JStudio7TObjectFPCvUlPCvUl
    .global __vt__Q27JStudio21TAdaptor_ambientLight
    __vt__Q27JStudio21TAdaptor_ambientLight:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl .global
   __vt__Q27JStudio13TObject_actor
    __vt__Q27JStudio13TObject_actor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JStudio13TObject_actorFv
        .4byte do_begin__Q27JStudio7TObjectFv
        .4byte do_end__Q27JStudio7TObjectFv
        .4byte do_paragraph__Q27JStudio13TObject_actorFUlPCvUl
        .4byte do_wait__Q27JStudio7TObjectFUl
        .4byte do_data__Q27JStudio7TObjectFPCvUlPCvUl
    .global __vt__Q27JStudio14TAdaptor_actor
    __vt__Q27JStudio14TAdaptor_actor:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl .4byte 0
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
        .4byte 0
    .global __vt__Q27JStudio7TObject
    __vt__Q27JStudio7TObject:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte do_begin__Q27JStudio7TObjectFv
        .4byte do_end__Q27JStudio7TObjectFv
        .4byte 0
        .4byte do_wait__Q27JStudio7TObjectFUl
        .4byte do_data__Q27JStudio7TObjectFPCvUlPCvUl
    .global __vt__Q27JStudio8TAdaptor
    __vt__Q27JStudio8TAdaptor:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
        .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
        .4byte
   adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl .global
   __vt__Q37JStudio14TVariableValue13TOutput_none_
    __vt__Q37JStudio14TVariableValue13TOutput_none_:
        .4byte 0
        .4byte 0
        .4byte
   __cl__Q37JStudio14TVariableValue13TOutput_none_CFfPQ27JStudio8TAdaptor .4byte
   __dt__Q37JStudio14TVariableValue13TOutput_none_Fv .global
   __vt__Q37JStudio14TVariableValue7TOutput
    __vt__Q37JStudio14TVariableValue7TOutput:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global lbl_8049F4A8
    lbl_8049F4A8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte
   "__cl__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_sound>CFfPQ27JStudio8TAdaptor"
        .4byte
   "__dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_sound>Fv"
    .global lbl_8049F4B8
    lbl_8049F4B8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte
   "__cl__Q37JStudio28@unnamed@jstudio_object_cpp@57TOutputVariableValue_BOOL_<Q27JStudio17TAdaptor_particle>CFfPQ27JStudio8TAdaptor"
        .4byte
   "__dt__Q37JStudio28@unnamed@jstudio_object_cpp@57TOutputVariableValue_BOOL_<Q27JStudio17TAdaptor_particle>Fv"
    .global lbl_8049F4C8
    lbl_8049F4C8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte
   "__cl__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_light>CFfPQ27JStudio8TAdaptor"
        .4byte
   "__dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_light>Fv"
    .global lbl_8049F4D8
    lbl_8049F4D8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte
   "__cl__Q37JStudio28@unnamed@jstudio_object_cpp@55TOutputVariableValue_BOOL_<Q27JStudio15TAdaptor_camera>CFfPQ27JStudio8TAdaptor"
        .4byte
   "__dt__Q37JStudio28@unnamed@jstudio_object_cpp@55TOutputVariableValue_BOOL_<Q27JStudio15TAdaptor_camera>Fv"
    .global lbl_8049F4E8
    lbl_8049F4E8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte
   "__cl__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_actor>CFfPQ27JStudio8TAdaptor"
        .4byte
   "__dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_actor>Fv"

    .section .sbss # 0x80514D80 - 0x80516360
    .global soOutput_none___Q27JStudio14TVariableValue
    soOutput_none___Q27JStudio14TVariableValue:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516408
    lbl_80516408:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516410
    lbl_80516410:
        .4byte 0x00000000
    .global lbl_80516414
    lbl_80516414:
        .4byte 0x437F0000
    .global sauVariableValue_2_DISTANCE_NEAR_FAR__Q27JStudio15TAdaptor_camera
    sauVariableValue_2_DISTANCE_NEAR_FAR__Q27JStudio15TAdaptor_camera:
        .4byte 0x00000008
        .4byte 0x00000009
    .global sauVariableValue_2_RANGE_BEGIN_END__Q27JStudio12TAdaptor_fog
    sauVariableValue_2_RANGE_BEGIN_END__Q27JStudio12TAdaptor_fog:
        .4byte 0x00000004
        .4byte 0x00000005
    .global sauVariableValue_2_DIRECTION_THETA_PHI__Q27JStudio14TAdaptor_light
    sauVariableValue_2_DIRECTION_THETA_PHI__Q27JStudio14TAdaptor_light:
        .4byte 0x0000000A
        .4byte 0x0000000B
    .global lbl_80516430
    lbl_80516430:
        .float 0.5
        .4byte 0x00000000
*/

namespace JStudio {

namespace {
template <typename Adaptor>
struct TOutputVariableValue_BOOL_ : public TVariableValue::TOutput {
	virtual void operator()(float, TAdaptor*) const; // _08
	virtual ~TOutputVariableValue_BOOL_() { }        // _0C
};

static TOutputVariableValue_BOOL_<TAdaptor_actor> soovv_actor_PARENT_ENABLE_;
static TOutputVariableValue_BOOL_<TAdaptor_actor> soovv_actor_RELATION_ENABLE_;
static TOutputVariableValue_BOOL_<TAdaptor_camera> soovv_camera_PARENT_ENABLE_;
static TOutputVariableValue_BOOL_<TAdaptor_camera> soovv_camera_TARGET_PARENT_ENABLE_;
static TOutputVariableValue_BOOL_<TAdaptor_light> soovv_light_ENABLE_;
static TOutputVariableValue_BOOL_<TAdaptor_particle> soovv_particle_PARENT_ENABLE_;
static TOutputVariableValue_BOOL_<TAdaptor_sound> soovv_sound_PARENT_ENABLE_;
} // namespace

/*
 * --INFO--
 * Address:	8000D068
 * Size:	000048
 * __dt__Q37JStudio14TVariableValue7TOutputFv
 */
TVariableValue::TOutput::~TOutput(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void TVariableValue::update(double, JStudio::TAdaptor*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000D0B0
 * Size:	000014
 */
void TVariableValue::update_immediate_(TVariableValue* p1, double p2)
{
	p1->_00 = p1->_0C;
	p1->_08 = nullptr;
}

/*
 * --INFO--
 * Address:	8000D0C4
 * Size:	00003C
 */
void TVariableValue::update_time_(TVariableValue* p1, double p2)
{
	p1->_00 = (f64)p1->_0C * (f64)p1->_04 * (f64)p2;
	/*
	stwu     r1, -0x10(r1)
	lis      r0, 0x4330
	lfd      f2, lbl_80516408@sda21(r2)
	lwz      r4, 4(r3)
	stw      r0, 8(r1)
	lfs      f3, 0xc(r3)
	stw      r4, 0xc(r1)
	lfd      f0, 8(r1)
	fsub     f0, f0, f2
	fmul     f0, f0, f1
	fmul     f0, f3, f0
	frsp     f0, f0
	stfs     f0, 0(r3)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000D100
 * Size:	000064
 */
void TVariableValue::update_functionValue_(JStudio::TVariableValue*, double)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfd      f2, lbl_80516408@sda21(r2)
	stw      r0, 0x24(r1)
	lis      r0, 0x4330
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r4, 4(r3)
	lwz      r3, 0xc(r3)
	stw      r4, 0xc(r1)
	lwz      r12, 0(r3)
	stw      r0, 8(r1)
	lwz      r12, 0x1c(r12)
	lfd      f0, 8(r1)
	fsub     f0, f0, f2
	fmul     f1, f0, f1
	mtctr    r12
	bctrl
	frsp     f0, f1
	stfs     f0, 0(r31)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000D164
 * Size:	00005C
 * __dt__Q37JStudio14TVariableValue13TOutput_none_Fv
 */
TVariableValue::TOutput_none_::~TOutput_none_(void) { }

/*
 * --INFO--
 * Address:	8000D1C0
 * Size:	000004
 */
void TVariableValue::TOutput_none_::operator()(float, JStudio::TAdaptor*) const { }

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
TAdaptor::~TAdaptor()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000D1C4
 * Size:	000004
 */
void TAdaptor::adaptor_do_prepare(JStudio::TObject const*) { }

/*
 * --INFO--
 * Address:	8000D1C8
 * Size:	000004
 */
void TAdaptor::adaptor_do_begin(JStudio::TObject const*) { }

/*
 * --INFO--
 * Address:	8000D1CC
 * Size:	000004
 */
void TAdaptor::adaptor_do_end(JStudio::TObject const*) { }

/*
 * --INFO--
 * Address:	8000D1D0
 * Size:	000004
 */
void TAdaptor::adaptor_do_update(JStudio::TObject const*, unsigned long) { }

/*
 * --INFO--
 * Address:	8000D1D4
 * Size:	000004
 */
void TAdaptor::adaptor_do_data(JStudio::TObject const*, void const*, unsigned long, void const*, unsigned long) { }

/*
 * --INFO--
 * Address:	8000D1D8
 * Size:	0000A0
 */
void TAdaptor::adaptor_setVariableValue(JStudio::TObject* object, unsigned long value, JStudio::data::TEOperationData operation,
                                        void const* p4, unsigned long p5)
{
	StaticCapsSetVariableValueFunction func;
	switch (operation) {
	case data::TEOD_Unknown_01:
		func = adaptor_setVariableValue_VOID_;
		break;
	case data::TEOD_Unknown_02:
		func = adaptor_setVariableValue_IMMEDIATE_;
		break;
	case data::TEOD_Unknown_03:
		func = adaptor_setVariableValue_TIME_;
		break;
	case data::TEOD_Unknown_10:
		func = adaptor_setVariableValue_FVR_NAME_;
		break;
	case data::TEOD_Unknown_12:
		func = adaptor_setVariableValue_FVR_INDEX_;
		break;
	case data::TEOD_Unknown_00:
	case data::TEOD_Unknown_04:
	case data::TEOD_Unknown_05:
	case data::TEOD_Unknown_06:
	case data::TEOD_Unknown_07:
	case data::TEOD_Unknown_08:
	case data::TEOD_Unknown_09:
	case data::TEOD_Unknown_0A:
	case data::TEOD_Unknown_0B:
	case data::TEOD_Unknown_0C:
	case data::TEOD_Unknown_0D:
	case data::TEOD_Unknown_0E:
	case data::TEOD_Unknown_0F:
	case data::TEOD_Unknown_11:
	default:
		return;
	}
	func(this, object, value, p4, p5);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void TAdaptor::adaptor_setVariableValue_n(JStudio::TObject* object, unsigned long const* values, unsigned long p3,
                                          JStudio::data::TEOperationData operation, void const* p5, unsigned long p6)
{
	// UNUSED FUNCTION
	StaticCapsSetVariableValueFunction func;
	u32 offset;
	switch (operation) {
	case data::TEOD_Unknown_01:
		offset = 0;
		func   = adaptor_setVariableValue_VOID_;
		break;
	case data::TEOD_Unknown_02:
		offset = 4;
		func   = adaptor_setVariableValue_IMMEDIATE_;
		break;
	case data::TEOD_Unknown_03:
		offset = 4;
		func   = adaptor_setVariableValue_TIME_;
		break;
	case data::TEOD_Unknown_10:
		return;
	case data::TEOD_Unknown_12:
		offset = 4;
		func   = adaptor_setVariableValue_FVR_INDEX_;
		break;
	case data::TEOD_Unknown_00:
	case data::TEOD_Unknown_04:
	case data::TEOD_Unknown_05:
	case data::TEOD_Unknown_06:
	case data::TEOD_Unknown_07:
	case data::TEOD_Unknown_08:
	case data::TEOD_Unknown_09:
	case data::TEOD_Unknown_0A:
	case data::TEOD_Unknown_0B:
	case data::TEOD_Unknown_0C:
	case data::TEOD_Unknown_0D:
	case data::TEOD_Unknown_0E:
	case data::TEOD_Unknown_0F:
	case data::TEOD_Unknown_11:
	default:
		return;
	}
	for (u32 i = 0; i < p3; i++) {
		func(this, object, values[i], p5, offset);
		p5 = ((u8*)p5) + offset;
	}
}

/*
 * --INFO--
 * Address:	8000D278
 * Size:	000044
 */
void TAdaptor::adaptor_setVariableValue_immediate(JStudio::TAdaptor::TSetVariableValue_immediate const* p1)
{
	for (u32 index; (index = p1->_00) != 0xFFFFFFFF; p1++) {
		_04[index].set(TVariableValue::update_immediate_, 0, p1->_04);
		// TVariableValue* tvv = _04 + index;
		// tvv->_08            = TVariableValue::update_immediate_;
		// tvv->_04            = 0;
		// tvv->_0C            = p1->_04;
	}
}

/*
 * --INFO--
 * Address:	8000D2BC
 * Size:	000070
 */
void TAdaptor::adaptor_setVariableValue_Vec(unsigned long const* indices, Vec const& value)
{
	_04[indices[0]].set(TVariableValue::update_immediate_, 0, value.x);
	_04[indices[1]].set(TVariableValue::update_immediate_, 0, value.y);
	_04[indices[2]].set(TVariableValue::update_immediate_, 0, value.z);
	// the following was barely off. just had a float regswap:
	// TVariableValue* tvv = _04 + indices[0];
	// tvv->_08            = TVariableValue::update_immediate_;
	// tvv->_04            = 0;
	// tvv->_0C            = value.x;
	// tvv                 = _04 + indices[1];
	// tvv->_08            = TVariableValue::update_immediate_;
	// tvv->_04            = 0;
	// tvv->_0C            = value.y;
	// tvv                 = _04 + indices[2];
	// tvv->_08            = TVariableValue::update_immediate_;
	// tvv->_04            = 0;
	// tvv->_0C            = value.z;
}

/*
 * --INFO--
 * Address:	8000D32C
 * Size:	000038
 */
void TAdaptor::adaptor_getVariableValue_Vec(Vec* p1, unsigned long const* p2) const
{
	p1->x = _04[p2[0]]._00;
	p1->y = _04[p2[1]]._00;
	p1->z = _04[p2[2]]._00;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void TAdaptor::adaptor_updateVariableValue_Vec(unsigned long const*, Vec const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000D364
 * Size:	0000E0
 */
void TAdaptor::adaptor_setVariableValue_GXColor(unsigned long const* p1, _GXColor const& p2)
{
	for (int i = 0; i < 4; i++) {
		_04[p1[i]].set(TVariableValue::update_immediate_, 0, ((u8 const*)&p2)[i]);
	}
}

/*
 * --INFO--
 * Address:	8000D444
 * Size:	00014C
 * adaptor_getVariableValue_GXColor__Q27JStudio8TAdaptorCFP8_GXColorPCUl
 */
void TAdaptor::adaptor_getVariableValue_GXColor(_GXColor*, unsigned long const*) const
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r5)
	  stwu      r1, -0x10(r1)
	  mulli     r0, r0, 0x14
	  lwz       r6, 0x4(r3)
	  lfs       f0, -0x7F50(r2)
	  lfsx      f1, r6, r0
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2C
	  li        r6, 0
	  b         .loc_0x50

	.loc_0x2C:
	  lfs       f0, -0x7F4C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x44
	  li        r6, 0xFF
	  b         .loc_0x50

	.loc_0x44:
	  fctiwz    f0, f1
	  stfd      f0, 0x8(r1)
	  lwz       r6, 0xC(r1)

	.loc_0x50:
	  lwz       r0, 0x4(r5)
	  stb       r6, 0x0(r4)
	  mulli     r0, r0, 0x14
	  lwz       r6, 0x4(r3)
	  lfs       f0, -0x7F50(r2)
	  lfsx      f1, r6, r0
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x7C
	  li        r6, 0
	  b         .loc_0xA0

	.loc_0x7C:
	  lfs       f0, -0x7F4C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x94
	  li        r6, 0xFF
	  b         .loc_0xA0

	.loc_0x94:
	  fctiwz    f0, f1
	  stfd      f0, 0x8(r1)
	  lwz       r6, 0xC(r1)

	.loc_0xA0:
	  lwz       r0, 0x8(r5)
	  stb       r6, 0x1(r4)
	  mulli     r0, r0, 0x14
	  lwz       r6, 0x4(r3)
	  lfs       f0, -0x7F50(r2)
	  lfsx      f1, r6, r0
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xCC
	  li        r6, 0
	  b         .loc_0xF0

	.loc_0xCC:
	  lfs       f0, -0x7F4C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xE4
	  li        r6, 0xFF
	  b         .loc_0xF0

	.loc_0xE4:
	  fctiwz    f0, f1
	  stfd      f0, 0x8(r1)
	  lwz       r6, 0xC(r1)

	.loc_0xF0:
	  lwz       r0, 0xC(r5)
	  stb       r6, 0x2(r4)
	  mulli     r0, r0, 0x14
	  lwz       r3, 0x4(r3)
	  lfs       f0, -0x7F50(r2)
	  lfsx      f1, r3, r0
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x11C
	  li        r0, 0
	  b         .loc_0x140

	.loc_0x11C:
	  lfs       f0, -0x7F4C(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x134
	  li        r0, 0xFF
	  b         .loc_0x140

	.loc_0x134:
	  fctiwz    f0, f1
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)

	.loc_0x140:
	  stb       r0, 0x3(r4)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000238
 */
void TAdaptor::adaptor_updateVariableValue_GXColor(unsigned long const*, _GXColor const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void TAdaptor::adaptor_updateVariableValue(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void TAdaptor::adaptor_updateVariableValue(JStudio::TObject*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000D590
 * Size:	000018
 */
void TAdaptor::adaptor_setVariableValue_VOID_(JStudio::TAdaptor* adaptor, JStudio::TObject* object, unsigned long p3, void const* p4,
                                              unsigned long p5)
{
	adaptor->_04[p3]._08 = nullptr;
	/*
	.loc_0x0:
	  mulli     r4, r5, 0x14
	  lwz       r3, 0x4(r3)
	  li        r5, 0
	  addi      r0, r4, 0x8
	  stwx      r5, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8000D5A8
 * Size:	00002C
 */
void TAdaptor::adaptor_setVariableValue_IMMEDIATE_(JStudio::TAdaptor* adaptor, JStudio::TObject* object, unsigned long p3, void const* p4,
                                                   unsigned long p5)
{
	adaptor->_04[p3].set(TVariableValue::update_immediate_, 0, *(f32*)p4);
}

/*
 * --INFO--
 * Address:	8000D5D4
 * Size:	00002C
 */
void TAdaptor::adaptor_setVariableValue_TIME_(JStudio::TAdaptor* adaptor, JStudio::TObject* object, unsigned long p3, void const* p4,
                                              unsigned long p5)
{
	adaptor->_04[p3].set(TVariableValue::update_time_, 0, *(f32*)p4);
}

/*
 * --INFO--
 * Address:	8000D600
 * Size:	000070
 */
void TAdaptor::adaptor_setVariableValue_FVR_NAME_(JStudio::TAdaptor* adaptor, JStudio::TObject* object, unsigned long p3, void const* p4,
                                                  unsigned long p5)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mulli     r0, r5, 0x14
	  mr        r5, r7
	  stw       r31, 0xC(r1)
	  lwz       r8, 0x4(r3)
	  lwz       r3, 0x14(r4)
	  mr        r4, r6
	  add       r31, r8, r0
	  addi      r3, r3, 0x60
	  bl        -0x16BC
	  cmplwi    r3, 0
	  bne-      .loc_0x40
	  li        r4, 0
	  b         .loc_0x44

	.loc_0x40:
	  lwz       r4, 0x14(r3)

	.loc_0x44:
	  lis       r3, 0x8001
	  li        r0, 0
	  subi      r3, r3, 0x2F00
	  stw       r3, 0x8(r31)
	  stw       r0, 0x4(r31)
	  stw       r4, 0xC(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8000D670
 * Size:	00006C
 */
void TAdaptor::adaptor_setVariableValue_FVR_INDEX_(JStudio::TAdaptor* adaptor, JStudio::TObject* object, unsigned long p3, void const* p4,
                                                   unsigned long p5)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mulli     r0, r5, 0x14
	  stw       r31, 0xC(r1)
	  lwz       r5, 0x4(r3)
	  lwz       r3, 0x14(r4)
	  lwz       r4, 0x0(r6)
	  add       r31, r5, r0
	  addi      r3, r3, 0x60
	  bl        -0x15F8
	  cmplwi    r3, 0
	  bne-      .loc_0x3C
	  li        r4, 0
	  b         .loc_0x40

	.loc_0x3C:
	  lwz       r4, 0x14(r3)

	.loc_0x40:
	  lis       r3, 0x8001
	  li        r0, 0
	  subi      r3, r3, 0x2F00
	  stw       r3, 0x8(r31)
	  stw       r0, 0x4(r31)
	  stw       r4, 0xC(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
TObject::~TObject()
{
	// UNUSED FUNCTION
	delete m_adaptor;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void TObject::forward_value(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000D6DC
 * Size:	00003C
 * do_begin__Q27JStudio7TObjectFv
 */
void TObject::do_begin()
{
	if (m_adaptor != nullptr) {
		m_adaptor->adaptor_do_begin(this);
	}
}

/*
 * --INFO--
 * Address:	8000D718
 * Size:	00003C
 * do_end__Q27JStudio7TObjectFv
 */
void TObject::do_end(void)
{
	if (m_adaptor != nullptr) {
		m_adaptor->adaptor_do_end(this);
	}
}

/*
 * --INFO--
 * Address:	8000D754
 * Size:	0000EC
 * do_wait__Q27JStudio7TObjectFUl
 */
void TObject::do_wait(unsigned long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r27, r4
	lwz      r31, 0x34(r3)
	cmplwi   r31, 0
	beq      lbl_8000D824
	lwz      r0, 8(r31)
	lwz      r3, 0x14(r26)
	mulli    r0, r0, 0x14
	lwz      r28, 4(r31)
	lfd      f31, 0x58(r3)
	add      r30, r28, r0
	b        lbl_8000D800

lbl_8000D79C:
	lwz      r3, 4(r28)
	mr       r29, r28
	addi     r28, r28, 0x14
	subfic   r0, r3, -1
	cmplw    r0, r27
	bgt      lbl_8000D7C0
	li       r0, -1
	stw      r0, 4(r29)
	b        lbl_8000D7C8

lbl_8000D7C0:
	add      r0, r3, r27
	stw      r0, 4(r29)

lbl_8000D7C8:
	lwz      r12, 8(r29)
	cmplwi   r12, 0
	beq      lbl_8000D800
	fmr      f1, f31
	mr       r3, r29
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r29)
	mr       r4, r31
	lfs      f1, 0(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8000D800:
	cmplw    r28, r30
	bne      lbl_8000D79C
	mr       r3, r31
	mr       r4, r26
	lwz      r12, 0(r31)
	mr       r5, r27
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_8000D824:
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	lmw      r26, 8(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000D840
 * Size:	00005C
 * do_data__Q27JStudio7TObjectFPCvUlPCvUl
 */
void TObject::do_data(void const* p1, unsigned long p2, void const* p3, unsigned long p4)
{
	if (m_adaptor != nullptr) {
		m_adaptor->adaptor_do_data(this, p1, p2, p3, p4);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 * __ct__Q27JStudio7TObjectFQ37JStudio4data9TE32BlockPCvUlPQ27JStudio8TAdaptor
 */
TObject::TObject(JStudio::data::TE32Block, void const*, unsigned long, JStudio::TAdaptor*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 * __ct__Q27JStudio7TObjectFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio8TAdaptor
 */
// TObject::TObject(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8000D89C
 * Size:	00005C
 * __dt__Q27JStudio14TAdaptor_actorFv
 */
TAdaptor_actor::~TAdaptor_actor(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 * __ct__Q27JStudio13TObject_actorFPCvUlPQ27JStudio14TAdaptor_actor
 */
TObject_actor::TObject_actor(void const* p1, unsigned long p2, JStudio::TAdaptor_actor* p3)
    : TObject(data::TE32B_ACTOR, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000D8F8
 * Size:	000058
 * __ct__Q27JStudio13TObject_actorFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio14TAdaptor_actor
 */
TObject_actor::TObject_actor(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor_actor* p2)
    : TObject(p1, p2)
{
}

/*
 * --INFO--
 * Address:	8000D950
 * Size:	000484
 */
void TObject_actor::do_paragraph(unsigned long, void const*, unsigned long)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r8,
sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@ha mr       r7,
r6 stw      r0, 0x44(r1) mr       r0, r5 addi     r10, r8,
sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@l stmw     r25,
0x24(r1) mr       r30, r3 lwz      r31, 0x34(r3) lis      r3, lbl_8049E698@ha
	addi     r3, r3, lbl_8049E698@l
	cmplwi   r31, 0
	beq      lbl_8000DDC0
	lis      r5, __ptmf_null@ha
	srwi     r6, r4, 5
	addi     r9, r5, __ptmf_null@l
	clrlwi   r4, r4, 0x1b
	lwz      r5, 4(r9)
	addi     r6, r6, -9
	lwz      r8, 0(r9)
	cmplwi   r6, 0x48
	stw      r5, 0xc(r1)
	stw      r8, 8(r1)
	lwz      r5, 8(r9)
	stw      r5, 0x10(r1)
	bgt      lbl_8000DDC0
	lis      r5, lbl_8049E86C@ha
	slwi     r6, r6, 2
	addi     r5, r5, lbl_8049E86C@l
	lwzx     r5, r5, r6
	mtctr    r5
	bctr
	.global  lbl_8000D9D4

lbl_8000D9D4:
	lwz      r6, 0xac(r3)
	lwz      r5, 0xb0(r3)
	lwz      r3, 0xb4(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000D9F0

lbl_8000D9F0:
	lwz      r6, 0xb8(r3)
	lwz      r5, 0xbc(r3)
	lwz      r3, 0xc0(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DA0C

lbl_8000DA0C:
	lwz      r6, 0xc4(r3)
	lwz      r5, 0xc8(r3)
	lwz      r3, 0xcc(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DA28

lbl_8000DA28:
	lwz      r6, 0xd0(r3)
	lwz      r5, 0xd4(r3)
	lwz      r3, 0xd8(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DA44

lbl_8000DA44:
	lwz      r6, 0xdc(r3)
	lwz      r5, 0xe0(r3)
	lwz      r3, 0xe4(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DA60

lbl_8000DA60:
	lwz      r6, 0xe8(r3)
	lwz      r5, 0xec(r3)
	lwz      r3, 0xf0(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DA7C

lbl_8000DA7C:
	lwz      r6, 0xf4(r3)
	lwz      r5, 0xf8(r3)
	lwz      r3, 0xfc(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DA98

lbl_8000DA98:
	lwz      r8, 0x100(r3)
	lis      r5,
"soovv_actor_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha lwz
r6, 0x104(r3) addi     r5, r5,
"soovv_actor_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@l lwz r3,
0x108(r3) mr       r28, r5 stw      r8, 8(r1) li       r29, 0xc stw      r6,
0xc(r1) stw      r3, 0x10(r1) b        lbl_8000DBC4 .global  lbl_8000DAC4

lbl_8000DAC4:
	lwz      r6, 0x10c(r3)
	lwz      r5, 0x110(r3)
	lwz      r3, 0x114(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DAE0

lbl_8000DAE0:
	lwz      r6, 0x118(r3)
	lwz      r5, 0x11c(r3)
	lwz      r3, 0x120(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DAFC

lbl_8000DAFC:
	lwz      r6, 0x124(r3)
	lwz      r5, 0x128(r3)
	lwz      r3, 0x12c(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000DDA8
	.global  lbl_8000DB18

lbl_8000DB18:
	lwz      r8, 0x130(r3)
	lis      r5,
"soovv_actor_RELATION_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha lwz
r6, 0x134(r3) addi     r5, r5,
"soovv_actor_RELATION_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@l lwz
r3, 0x138(r3) mr       r28, r5 stw      r8, 8(r1) li       r29, 0xd stw      r6,
0xc(r1) stw      r3, 0x10(r1) b        lbl_8000DBC4 .global  lbl_8000DB44

lbl_8000DB44:
	li       r5, 0
	b        lbl_8000DC8C
	.global  lbl_8000DB4C

lbl_8000DB4C:
	li       r5, 1
	b        lbl_8000DC8C
	.global  lbl_8000DB54

lbl_8000DB54:
	li       r5, 3
	b        lbl_8000DC8C
	.global  lbl_8000DB5C

lbl_8000DB5C:
	li       r5, 4
	b        lbl_8000DC8C
	.global  lbl_8000DB64

lbl_8000DB64:
	li       r5, 5
	b        lbl_8000DC8C
	.global  lbl_8000DB6C

lbl_8000DB6C:
	li       r5, 6
	b        lbl_8000DC8C
	.global  lbl_8000DB74

lbl_8000DB74:
	li       r5, 7
	b        lbl_8000DC8C
	.global  lbl_8000DB7C

lbl_8000DB7C:
	li       r5, 8
	b        lbl_8000DC8C
	.global  lbl_8000DB84

lbl_8000DB84:
	li       r5, 9
	b        lbl_8000DC8C
	.global  lbl_8000DB8C

lbl_8000DB8C:
	li       r5, 0xa
	b        lbl_8000DC8C
	.global  lbl_8000DB94

lbl_8000DB94:
	li       r5, 0xb
	b        lbl_8000DC8C
	.global  lbl_8000DB9C

lbl_8000DB9C:
	addi     r6, r10, 0
	li       r5, 3
	b        lbl_8000DCFC
	.global  lbl_8000DBA8

lbl_8000DBA8:
	addi     r6, r10, 0xc
	li       r5, 3
	b        lbl_8000DCFC
	.global  lbl_8000DBB4

lbl_8000DBB4:
	addi     r6, r10, 0x18
	li       r5, 3
	b        lbl_8000DCFC
	.global  lbl_8000DBC0

lbl_8000DBC0:
	b        lbl_8000DDC0

lbl_8000DBC4:
	cmpwi    r4, 0x13
	bge      lbl_8000DC70
	cmpwi    r4, 0x10
	bge      lbl_8000DBD8
	b        lbl_8000DC70

lbl_8000DBD8:
	cmplwi   r4, 0x12
	bgt      lbl_8000DC48
	lis      r5, lbl_8049E820@ha
	slwi     r3, r4, 2
	addi     r4, r5, lbl_8049E820@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr
	.global  lbl_8000DBF8

lbl_8000DBF8:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DC30
	.global  lbl_8000DC04

lbl_8000DC04:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DC30
	.global  lbl_8000DC10

lbl_8000DC10:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DC30
	.global  lbl_8000DC1C

lbl_8000DC1C:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DC30
	.global  lbl_8000DC28

lbl_8000DC28:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000DC30:
	mr       r3, r31
	mr       r4, r30
	mr       r5, r29
	mr       r6, r0
	mtctr    r12
	bctrl
	.global  lbl_8000DC48

lbl_8000DC48:
	mulli    r0, r29, 0x14
	lwz      r3, 4(r31)
	cmplwi   r28, 0
	add      r3, r3, r0
	beq      lbl_8000DC64
	mr       r0, r28
	b        lbl_8000DC68

lbl_8000DC64:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_8000DC68:
	stw      r0, 0x10(r3)
	b        lbl_8000DDC0

lbl_8000DC70:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop
	b        lbl_8000DDC0

lbl_8000DC8C:
	cmplwi   r4, 0x12
	bgt      lbl_8000DDC0
	lis      r6, lbl_8049E7D4@ha
	slwi     r3, r4, 2
	addi     r4, r6, lbl_8049E7D4@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr
	.global  lbl_8000DCAC

lbl_8000DCAC:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DCE4
	.global  lbl_8000DCB8

lbl_8000DCB8:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DCE4
	.global  lbl_8000DCC4

lbl_8000DCC4:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DCE4
	.global  lbl_8000DCD0

lbl_8000DCD0:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DCE4
	.global  lbl_8000DCDC

lbl_8000DCDC:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000DCE4:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	mtctr    r12
	bctrl
	.global  lbl_8000DCF8

lbl_8000DCF8:
	b        lbl_8000DDC0

lbl_8000DCFC:
	cmpwi    r4, 3
	mr       r29, r0
	beq      lbl_8000DD48
	bge      lbl_8000DD1C
	cmpwi    r4, 1
	beq      lbl_8000DD28
	bge      lbl_8000DD38
	b        lbl_8000DDC0

lbl_8000DD1C:
	cmpwi    r4, 0x12
	beq      lbl_8000DD58
	b        lbl_8000DDC0

lbl_8000DD28:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 0
	addi     r28, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DD64

lbl_8000DD38:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DD64

lbl_8000DD48:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000DD64

lbl_8000DD58:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000DD64:
	slwi     r0, r5, 2
	mr       r26, r6
	add      r25, r6, r0
	b        lbl_8000DD9C

lbl_8000DD74:
	mr       r12, r28
	mr       r3, r31
	mr       r4, r30
	mr       r6, r29
	mr       r7, r27
	lwz      r5, 0(r26)
	mtctr    r12
	addi     r26, r26, 4
	bctrl
	add      r29, r29, r27

lbl_8000DD9C:
	cmplw    r26, r25
	bne      lbl_8000DD74
	b        lbl_8000DDC0

lbl_8000DDA8:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop

lbl_8000DDC0:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000DDD4
 * Size:	00005C
 * __dt__Q27JStudio21TAdaptor_ambientLightFv
 */
TAdaptor_ambientLight::~TAdaptor_ambientLight() { }

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 * __ct__Q27JStudio20TObject_ambientLightFPCvUlPQ27JStudio21TAdaptor_ambientLight
 */
TObject_ambientLight::TObject_ambientLight(void const* p1, unsigned long p2, JStudio::TAdaptor_ambientLight* p3)
    : TObject(data::TE32B_AMBIENT_LIGHT, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000DE30
 * Size:	000058
 * __ct__Q27JStudio20TObject_ambientLightFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio21TAdaptor_ambientLight
 */
TObject_ambientLight::TObject_ambientLight(const JStudio::stb::data::TParse_TBlock_object& p1, JStudio::TAdaptor_ambientLight* p2)
    : TObject(p1, p2)
{
}

/*
 * --INFO--
 * Address:	8000DE88
 * Size:	0001DC
 * do_paragraph__Q27JStudio20TObject_ambientLightFUlPCvUl
 */
void TObject_ambientLight::do_paragraph(unsigned long p1, void const* p2, unsigned long p3)
{
	// if (m_adaptor == nullptr) {
	// 	return;
	// }
	// u32 value;
	// u32 v1                          = p1 >> 5;
	// data::TEOperationData operation = (data::TEOperationData)(p1 & 0x1F);
	// if (v1 <= 0x20) {
	// 	switch (v1) {
	// 	case 0x1D:
	// 		value = 0;
	// 		break;
	// 	case 0x1E:
	// 		value = 1;
	// 		break;
	// 	case 0x1F:
	// 		value = 2;
	// 		break;
	// 	case 0x20:
	// 		value = 3;
	// 		break;
	// 	// case 0x21:
	// 	// 	m_adaptor->adaptor_setVariableValue_n(this, TAdaptor_ambientLight::sauVariableValue_3_COLOR_RGB, 3, operation, p2, 0);
	// 	// 	return;
	// 	// case 0x22:
	// 	// 	m_adaptor->adaptor_setVariableValue_n(this, TAdaptor_ambientLight::sauVariableValue_4_COLOR_RGBA, 4, operation, p2, 0);
	// 	// 	return;
	// 	default:
	// 		return;
	// 	}
	// } else {
	// 	const u32* values;
	// 	u32 count;
	// 	switch (v1) {
	// 	case 0x21:
	// 		count  = 3;
	// 		values = TAdaptor_ambientLight::sauVariableValue_3_COLOR_RGB;
	// 		break;
	// 	case 0x22:
	// 		count  = 4;
	// 		values = TAdaptor_ambientLight::sauVariableValue_4_COLOR_RGBA;
	// 		break;
	// 	default:
	// 		return;
	// 	}
	// 	m_adaptor->adaptor_setVariableValue_n(this, values, count, operation, p2, 0);
	// }
	// m_adaptor->adaptor_setVariableValue(this, value, operation, p2, p3);
	if (m_adaptor == nullptr) {
		return;
	}
	u32 value;
	const u32* values;
	u32 count;
	u32 v1                          = p1 >> 5;
	data::TEOperationData operation = (data::TEOperationData)(p1 & 0x1F);
	switch (v1) {
	case 0x1D:
		value = 0;
		break;
	case 0x1E:
		value = 1;
		break;
	case 0x1F:
		value = 2;
		break;
	case 0x20:
		value = 3;
		break;
	case 0x21:
		count  = 3;
		values = TAdaptor_ambientLight::sauVariableValue_3_COLOR_RGB;
		goto multi;
		return;
	case 0x22:
		count  = 4;
		values = TAdaptor_ambientLight::sauVariableValue_4_COLOR_RGBA;
		goto multi;
		return;
	default:
		return;
	}
	m_adaptor->adaptor_setVariableValue(this, value, operation, p2, p3);
	return;
multi:
	m_adaptor->adaptor_setVariableValue_n(this, values, count, operation, p2, 0);
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  mr        r7, r6
	  stw       r0, 0x34(r1)
	  mr        r0, r5
	  stmw      r25, 0x14(r1)
	  mr        r30, r3
	  lwz       r31, 0x34(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x1C8
	  rlwinm    r3,r4,27,5,31
	  rlwinm    r6,r4,0,27,31
	  cmpwi     r3, 0x20
	  beq-      .loc_0x7C
	  bge-      .loc_0x54
	  cmpwi     r3, 0x1E
	  beq-      .loc_0x6C
	  bge-      .loc_0x74
	  cmpwi     r3, 0x1D
	  bge-      .loc_0x64
	  b         .loc_0x1C8

	.loc_0x54:
	  cmpwi     r3, 0x22
	  beq-      .loc_0x98
	  bge-      .loc_0x1C8
	  b         .loc_0x84

	.loc_0x64:
	  li        r5, 0
	  b         .loc_0xB0

	.loc_0x6C:
	  li        r5, 0x1
	  b         .loc_0xB0

	.loc_0x74:
	  li        r5, 0x2
	  b         .loc_0xB0

	.loc_0x7C:
	  li        r5, 0x3
	  b         .loc_0xB0

	.loc_0x84:
	  lis       r3, 0x8047
	  li        r4, 0x3
	  addi      r3, r3, 0x3374
	  mr        r5, r3
	  b         .loc_0x120

	.loc_0x98:
	  lis       r3, 0x8047
	  li        r4, 0x4
	  addi      r3, r3, 0x3380
	  mr        r5, r3
	  b         .loc_0x120
	  b         .loc_0x1C8

	.loc_0xB0:
	  cmplwi    r6, 0x12
	  bgt-      .loc_0x1C8
	  lis       r4, 0x804A
	  rlwinm    r3,r6,2,0,29
	  subi      r4, r4, 0x1670
	  lwzx      r3, r4, r3
	  mtctr     r3
	  bctr
	  lis       r3, 0x8001
	  subi      r12, r3, 0x2A70
	  b         .loc_0x108
	  lis       r3, 0x8001
	  subi      r12, r3, 0x2A58
	  b         .loc_0x108
	  lis       r3, 0x8001
	  subi      r12, r3, 0x2A2C
	  b         .loc_0x108
	  lis       r3, 0x8001
	  subi      r12, r3, 0x2A00
	  b         .loc_0x108
	  lis       r3, 0x8001
	  subi      r12, r3, 0x2990

	.loc_0x108:
	  mr        r3, r31
	  mr        r4, r30
	  mr        r6, r0
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C8

	.loc_0x120:
	  cmpwi     r6, 0x3
	  mr        r28, r0
	  beq-      .loc_0x16C
	  bge-      .loc_0x140
	  cmpwi     r6, 0x1
	  beq-      .loc_0x14C
	  bge-      .loc_0x15C
	  b         .loc_0x1C8

	.loc_0x140:
	  cmpwi     r6, 0x12
	  beq-      .loc_0x17C
	  b         .loc_0x1C8

	.loc_0x14C:
	  lis       r3, 0x8001
	  li        r27, 0
	  subi      r29, r3, 0x2A70
	  b         .loc_0x188

	.loc_0x15C:
	  lis       r3, 0x8001
	  li        r27, 0x4
	  subi      r29, r3, 0x2A58
	  b         .loc_0x188

	.loc_0x16C:
	  lis       r3, 0x8001
	  li        r27, 0x4
	  subi      r29, r3, 0x2A2C
	  b         .loc_0x188

	.loc_0x17C:
	  lis       r3, 0x8001
	  li        r27, 0x4
	  subi      r29, r3, 0x2990

	.loc_0x188:
	  rlwinm    r0,r4,2,0,29
	  mr        r26, r5
	  add       r25, r5, r0
	  b         .loc_0x1C0

	.loc_0x198:
	  mr        r12, r29
	  mr        r3, r31
	  mr        r4, r30
	  mr        r6, r28
	  mr        r7, r27
	  lwz       r5, 0x0(r26)
	  mtctr     r12
	  addi      r26, r26, 0x4
	  bctrl
	  add       r28, r28, r27

	.loc_0x1C0:
	  cmplw     r26, r25
	  bne+      .loc_0x198

	.loc_0x1C8:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8000E064
 * Size:	00005C
 * __dt__Q27JStudio15TAdaptor_cameraFv
 */
TAdaptor_camera::~TAdaptor_camera(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 * __ct__Q27JStudio14TObject_cameraFPCvUlPQ27JStudio15TAdaptor_camera
 */
TObject_camera::TObject_camera(void const* p1, unsigned long p2, JStudio::TAdaptor_camera* p3)
    : TObject(data::TE32B_CAMERA, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000E0C0
 * Size:	000058
 * __ct__Q27JStudio14TObject_cameraFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio15TAdaptor_camera
 */
TObject_camera::TObject_camera(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor_camera* p2)
    : TObject(p1, p2)
{
}

/*
 * --INFO--
 * Address:	8000E118
 * Size:	0003F8
 * do_paragraph__Q27JStudio14TObject_cameraFUlPCvUl
 */
void TObject_camera::do_paragraph(unsigned long, void const*, unsigned long)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	mr       r7, r6
	stw      r0, 0x44(r1)
	mr       r0, r5
	stmw     r25, 0x24(r1)
	mr       r30, r3
	lis      r3, lbl_8049E698@ha
	addi     r3, r3, lbl_8049E698@l
	lwz      r31, 0x34(r30)
	cmplwi   r31, 0
	beq      lbl_8000E4FC
	lis      r5, __ptmf_null@ha
	srwi     r6, r4, 5
	addi     r9, r5, __ptmf_null@l
	clrlwi   r4, r4, 0x1b
	lwz      r5, 4(r9)
	addi     r6, r6, -21
	lwz      r8, 0(r9)
	cmplwi   r6, 0x3f
	stw      r5, 0xc(r1)
	stw      r8, 8(r1)
	lwz      r5, 8(r9)
	stw      r5, 0x10(r1)
	bgt      lbl_8000E4FC
	lis      r5, lbl_8049EAC8@ha
	slwi     r6, r6, 2
	addi     r5, r5, lbl_8049EAC8@l
	lwzx     r5, r5, r6
	mtctr    r5
	bctr
	.global  lbl_8000E194

lbl_8000E194:
	lwz      r6, 0x344(r3)
	lwz      r5, 0x348(r3)
	lwz      r3, 0x34c(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000E4E4
	.global  lbl_8000E1B0

lbl_8000E1B0:
	lwz      r6, 0x350(r3)
	lwz      r5, 0x354(r3)
	lwz      r3, 0x358(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000E4E4
	.global  lbl_8000E1CC

lbl_8000E1CC:
	lwz      r8, 0x35c(r3)
	lis      r5,
"soovv_camera_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha lwz
r6, 0x360(r3) addi     r5, r5,
"soovv_camera_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@l lwz
r3, 0x364(r3) mr       r28, r5 stw      r8, 8(r1) li       r29, 0xa stw      r6,
0xc(r1) stw      r3, 0x10(r1) b        lbl_8000E300 .global  lbl_8000E1F8

lbl_8000E1F8:
	lwz      r6, 0x368(r3)
	lwz      r5, 0x36c(r3)
	lwz      r3, 0x370(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000E4E4
	.global  lbl_8000E214

lbl_8000E214:
	lwz      r6, 0x374(r3)
	lwz      r5, 0x378(r3)
	lwz      r3, 0x37c(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000E4E4
	.global  lbl_8000E230

lbl_8000E230:
	lwz      r6, 0x380(r3)
	lwz      r5, 0x384(r3)
	lwz      r3, 0x388(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000E4E4
	.global  lbl_8000E24C

lbl_8000E24C:
	lwz      r8, 0x38c(r3)
	lis      r5,
"soovv_camera_TARGET_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha
	lwz      r6, 0x390(r3)
	addi     r5, r5,
"soovv_camera_TARGET_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@l
	lwz      r3, 0x394(r3)
	mr       r28, r5
	stw      r8, 8(r1)
	li       r29, 0xb
	stw      r6, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000E300
	.global  lbl_8000E278

lbl_8000E278:
	li       r5, 0
	b        lbl_8000E3C8
	.global  lbl_8000E280

lbl_8000E280:
	li       r5, 1
	b        lbl_8000E3C8
	.global  lbl_8000E288

lbl_8000E288:
	li       r5, 2
	b        lbl_8000E3C8
	.global  lbl_8000E290

lbl_8000E290:
	li       r5, 3
	b        lbl_8000E3C8
	.global  lbl_8000E298

lbl_8000E298:
	li       r5, 4
	b        lbl_8000E3C8
	.global  lbl_8000E2A0

lbl_8000E2A0:
	li       r5, 5
	b        lbl_8000E3C8
	.global  lbl_8000E2A8

lbl_8000E2A8:
	li       r5, 6
	b        lbl_8000E3C8
	.global  lbl_8000E2B0

lbl_8000E2B0:
	li       r5, 7
	b        lbl_8000E3C8
	.global  lbl_8000E2B8

lbl_8000E2B8:
	li       r5, 8
	b        lbl_8000E3C8
	.global  lbl_8000E2C0

lbl_8000E2C0:
	li       r5, 9
	b        lbl_8000E3C8
	.global  lbl_8000E2C8

lbl_8000E2C8:
	lis      r3, sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera@ha
	li       r5, 3
	addi     r3, r3,
sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera@l mr       r6, r3
	b        lbl_8000E438
	.global  lbl_8000E2DC

lbl_8000E2DC:
	lis      r3,
sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio15TAdaptor_camera@ha li r5, 3
	addi     r3, r3,
sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio15TAdaptor_camera@l mr r6, r3
	b        lbl_8000E438
	.global  lbl_8000E2F0

lbl_8000E2F0:
	addi     r6, r2,
sauVariableValue_2_DISTANCE_NEAR_FAR__Q27JStudio15TAdaptor_camera@sda21 li r5, 2
	b        lbl_8000E438
	.global  lbl_8000E2FC

lbl_8000E2FC:
	b        lbl_8000E4FC

lbl_8000E300:
	cmpwi    r4, 0x13
	bge      lbl_8000E3AC
	cmpwi    r4, 0x10
	bge      lbl_8000E314
	b        lbl_8000E3AC

lbl_8000E314:
	cmplwi   r4, 0x12
	bgt      lbl_8000E384
	lis      r5, lbl_8049EA7C@ha
	slwi     r3, r4, 2
	addi     r4, r5, lbl_8049EA7C@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr
	.global  lbl_8000E334

lbl_8000E334:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E36C
	.global  lbl_8000E340

lbl_8000E340:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E36C
	.global  lbl_8000E34C

lbl_8000E34C:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E36C
	.global  lbl_8000E358

lbl_8000E358:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E36C
	.global  lbl_8000E364

lbl_8000E364:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000E36C:
	mr       r3, r31
	mr       r4, r30
	mr       r5, r29
	mr       r6, r0
	mtctr    r12
	bctrl
	.global  lbl_8000E384

lbl_8000E384:
	mulli    r0, r29, 0x14
	lwz      r3, 4(r31)
	cmplwi   r28, 0
	add      r3, r3, r0
	beq      lbl_8000E3A0
	mr       r0, r28
	b        lbl_8000E3A4

lbl_8000E3A0:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_8000E3A4:
	stw      r0, 0x10(r3)
	b        lbl_8000E4FC

lbl_8000E3AC:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop
	b        lbl_8000E4FC

lbl_8000E3C8:
	cmplwi   r4, 0x12
	bgt      lbl_8000E4FC
	lis      r6, lbl_8049EA30@ha
	slwi     r3, r4, 2
	addi     r4, r6, lbl_8049EA30@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr
	.global  lbl_8000E3E8

lbl_8000E3E8:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E420
	.global  lbl_8000E3F4

lbl_8000E3F4:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E420
	.global  lbl_8000E400

lbl_8000E400:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E420
	.global  lbl_8000E40C

lbl_8000E40C:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E420
	.global  lbl_8000E418

lbl_8000E418:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000E420:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	mtctr    r12
	bctrl
	.global  lbl_8000E434

lbl_8000E434:
	b        lbl_8000E4FC

lbl_8000E438:
	cmpwi    r4, 3
	mr       r29, r0
	beq      lbl_8000E484
	bge      lbl_8000E458
	cmpwi    r4, 1
	beq      lbl_8000E464
	bge      lbl_8000E474
	b        lbl_8000E4FC

lbl_8000E458:
	cmpwi    r4, 0x12
	beq      lbl_8000E494
	b        lbl_8000E4FC

lbl_8000E464:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 0
	addi     r28, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E4A0

lbl_8000E474:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E4A0

lbl_8000E484:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E4A0

lbl_8000E494:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000E4A0:
	slwi     r0, r5, 2
	mr       r26, r6
	add      r25, r6, r0
	b        lbl_8000E4D8

lbl_8000E4B0:
	mr       r12, r28
	mr       r3, r31
	mr       r4, r30
	mr       r6, r29
	mr       r7, r27
	lwz      r5, 0(r26)
	mtctr    r12
	addi     r26, r26, 4
	bctrl
	add      r29, r29, r27

lbl_8000E4D8:
	cmplw    r26, r25
	bne      lbl_8000E4B0
	b        lbl_8000E4FC

lbl_8000E4E4:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop

lbl_8000E4FC:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000E510
 * Size:	00005C
 * __dt__Q27JStudio12TAdaptor_fogFv
 */
TAdaptor_fog::~TAdaptor_fog(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 * __ct__Q27JStudio11TObject_fogFPCvUlPQ27JStudio12TAdaptor_fog
 */
TObject_fog::TObject_fog(void const* p1, unsigned long p2, JStudio::TAdaptor_fog* p3)
    : TObject(data::TE32B_FOG, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000E56C
 * Size:	000058
 * __ct__Q27JStudio11TObject_fogFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio12TAdaptor_fog
 */
TObject_fog::TObject_fog(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor_fog* p2)
    : TObject(p1, p2)
{
}

/*
 * --INFO--
 * Address:	8000E5C4
 * Size:	0001E8
 * do_paragraph__Q27JStudio11TObject_fogFUlPCvUl
 */
void TObject_fog::do_paragraph(unsigned long, void const*, unsigned long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	mr       r7, r6
	stw      r0, 0x34(r1)
	mr       r0, r5
	stmw     r25, 0x14(r1)
	mr       r30, r3
	lwz      r31, 0x34(r3)
	cmplwi   r31, 0
	beq      lbl_8000E798
	srwi     r3, r4, 5
	clrlwi   r6, r4, 0x1b
	addi     r4, r3, -29
	cmplwi   r4, 0x10
	bgt      lbl_8000E798
	lis      r3, lbl_8049EC14@ha
	slwi     r4, r4, 2
	addi     r3, r3, lbl_8049EC14@l
	lwzx     r3, r3, r4
	mtctr    r3
	bctr
	.global  lbl_8000E618

lbl_8000E618:
	li       r5, 0
	b        lbl_8000E680
	.global  lbl_8000E620

lbl_8000E620:
	li       r5, 1
	b        lbl_8000E680
	.global  lbl_8000E628

lbl_8000E628:
	li       r5, 2
	b        lbl_8000E680
	.global  lbl_8000E630

lbl_8000E630:
	li       r5, 3
	b        lbl_8000E680
	.global  lbl_8000E638

lbl_8000E638:
	li       r5, 4
	b        lbl_8000E680
	.global  lbl_8000E640

lbl_8000E640:
	li       r5, 5
	b        lbl_8000E680
	.global  lbl_8000E648

lbl_8000E648:
	lis      r3, sauVariableValue_3_COLOR_RGB__Q27JStudio12TAdaptor_fog@ha
	li       r4, 3
	addi     r3, r3, sauVariableValue_3_COLOR_RGB__Q27JStudio12TAdaptor_fog@l
	mr       r5, r3
	b        lbl_8000E6F0
	.global  lbl_8000E65C

lbl_8000E65C:
	lis      r3, sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog@ha
	li       r4, 4
	addi     r3, r3, sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog@l
	mr       r5, r3
	b        lbl_8000E6F0
	.global  lbl_8000E670

lbl_8000E670:
	addi     r5, r2,
sauVariableValue_2_RANGE_BEGIN_END__Q27JStudio12TAdaptor_fog@sda21 li       r4,
2 b        lbl_8000E6F0 .global  lbl_8000E67C

lbl_8000E67C:
	b        lbl_8000E798

lbl_8000E680:
	cmplwi   r6, 0x12
	bgt      lbl_8000E798
	lis      r4, lbl_8049EBC8@ha
	slwi     r3, r6, 2
	addi     r4, r4, lbl_8049EBC8@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr
	.global  lbl_8000E6A0

lbl_8000E6A0:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E6D8
	.global  lbl_8000E6AC

lbl_8000E6AC:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E6D8
	.global  lbl_8000E6B8

lbl_8000E6B8:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E6D8
	.global  lbl_8000E6C4

lbl_8000E6C4:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E6D8
	.global  lbl_8000E6D0

lbl_8000E6D0:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000E6D8:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	mtctr    r12
	bctrl
	.global  lbl_8000E6EC

lbl_8000E6EC:
	b        lbl_8000E798

lbl_8000E6F0:
	cmpwi    r6, 3
	mr       r28, r0
	beq      lbl_8000E73C
	bge      lbl_8000E710
	cmpwi    r6, 1
	beq      lbl_8000E71C
	bge      lbl_8000E72C
	b        lbl_8000E798

lbl_8000E710:
	cmpwi    r6, 0x12
	beq      lbl_8000E74C
	b        lbl_8000E798

lbl_8000E71C:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 0
	addi     r29, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E758

lbl_8000E72C:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E758

lbl_8000E73C:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000E758

lbl_8000E74C:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000E758:
	slwi     r0, r4, 2
	mr       r26, r5
	add      r25, r5, r0
	b        lbl_8000E790

lbl_8000E768:
	mr       r12, r29
	mr       r3, r31
	mr       r4, r30
	mr       r6, r28
	mr       r7, r27
	lwz      r5, 0(r26)
	mtctr    r12
	addi     r26, r26, 4
	bctrl
	add      r28, r28, r27

lbl_8000E790:
	cmplw    r26, r25
	bne      lbl_8000E768

lbl_8000E798:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000E7AC
 * Size:	00005C
 * __dt__Q27JStudio14TAdaptor_lightFv
 */
TAdaptor_light::~TAdaptor_light(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8000E7F0
	lis      r3, __vt__Q27JStudio14TAdaptor_light@ha
	addi     r0, r3, __vt__Q27JStudio14TAdaptor_light@l
	stw      r0, 0(r31)
	beq      lbl_8000E7E0
	lis      r3, __vt__Q27JStudio8TAdaptor@ha
	addi     r0, r3, __vt__Q27JStudio8TAdaptor@l
	stw      r0, 0(r31)

lbl_8000E7E0:
	extsh.   r0, r4
	ble      lbl_8000E7F0
	mr       r3, r31
	bl       __dl__FPv

lbl_8000E7F0:
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
 * Address:	........
 * Size:	00006C
 * __ct__Q27JStudio13TObject_lightFPCvUlPQ27JStudio14TAdaptor_light
 */
TObject_light::TObject_light(void const* p1, unsigned long p2, JStudio::TAdaptor_light* p3)
    : TObject(data::TE32B_LIGHT, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000E808
 * Size:	000058
 * __ct__Q27JStudio13TObject_lightFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio14TAdaptor_light
 */
TObject_light::TObject_light(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor_light* p2)
    : TObject(p1, p2)
{
}

/*
 * --INFO--
 * Address:	8000E860
 * Size:	000370
 * do_paragraph__Q27JStudio13TObject_lightFUlPCvUl
 */
void TObject_light::do_paragraph(unsigned long, void const*, unsigned long)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	mr       r7, r6
	stw      r0, 0x44(r1)
	mr       r0, r5
	stmw     r25, 0x24(r1)
	mr       r30, r3
	lis      r3,
sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@ha addi     r11,
r3, sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@l lwz r31,
0x34(r30) cmplwi   r31, 0 beq      lbl_8000EBBC lis      r3, __ptmf_null@ha srwi
r8, r4, 5 addi     r10, r3, __ptmf_null@l clrlwi   r4, r4, 0x1b lwz      r3,
4(r10) addi     r8, r8, -21 lwz      r9, 0(r10) cmplwi   r8, 0x22 stw      r3,
0xc(r1) stw      r9, 8(r1) lwz      r3, 8(r10) stw      r3, 0x10(r1) bgt
lbl_8000EBBC lis      r3, lbl_8049ED08@ha slwi     r8, r8, 2 addi     r3, r3,
lbl_8049ED08@l lwzx     r3, r3, r8 mtctr    r3 bctr .global  lbl_8000E8DC

lbl_8000E8DC:
	lis      r5, lbl_8049EC58@ha
	lis      r3,
"soovv_light_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha addi     r8,
r5, lbl_8049EC58@l lwz      r6, 0(r8) addi     r3, r3,
"soovv_light_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@l lwz      r5,
4(r8) mr       r29, r3 lwz      r3, 8(r8) stw      r6, 8(r1) stw      r5,
0xc(r1) stw      r3, 0x10(r1) b        lbl_8000E9D0 .global  lbl_8000E90C

lbl_8000E90C:
	lis      r3, lbl_8049EC64@ha
	addi     r8, r3, lbl_8049EC64@l
	lwz      r7, 0(r8)
	lwz      r3, 4(r8)
	lwz      r0, 8(r8)
	stw      r7, 8(r1)
	stw      r3, 0xc(r1)
	stw      r0, 0x10(r1)
	b        lbl_8000EBAC
	.global  lbl_8000E930

lbl_8000E930:
	li       r5, 0
	b        lbl_8000EA90
	.global  lbl_8000E938

lbl_8000E938:
	li       r5, 1
	b        lbl_8000EA90
	.global  lbl_8000E940

lbl_8000E940:
	li       r5, 2
	b        lbl_8000EA90
	.global  lbl_8000E948

lbl_8000E948:
	li       r5, 3
	b        lbl_8000EA90
	.global  lbl_8000E950

lbl_8000E950:
	li       r5, 4
	b        lbl_8000EA90
	.global  lbl_8000E958

lbl_8000E958:
	li       r5, 5
	b        lbl_8000EA90
	.global  lbl_8000E960

lbl_8000E960:
	li       r5, 6
	b        lbl_8000EA90
	.global  lbl_8000E968

lbl_8000E968:
	li       r5, 7
	b        lbl_8000EA90
	.global  lbl_8000E970

lbl_8000E970:
	li       r5, 8
	b        lbl_8000EA90
	.global  lbl_8000E978

lbl_8000E978:
	li       r5, 9
	b        lbl_8000EA90
	.global  lbl_8000E980

lbl_8000E980:
	li       r5, 0xa
	b        lbl_8000EA90
	.global  lbl_8000E988

lbl_8000E988:
	li       r5, 0xb
	b        lbl_8000EA90
	.global  lbl_8000E990

lbl_8000E990:
	addi     r6, r11, 0x74
	li       r5, 3
	b        lbl_8000EB00
	.global  lbl_8000E99C

lbl_8000E99C:
	addi     r6, r11, 0x80
	li       r5, 4
	b        lbl_8000EB00
	.global  lbl_8000E9A8

lbl_8000E9A8:
	addi     r6, r11, 0x90
	li       r5, 3
	b        lbl_8000EB00
	.global  lbl_8000E9B4

lbl_8000E9B4:
	addi     r6, r11, 0x9c
	li       r5, 3
	b        lbl_8000EB00
	.global  lbl_8000E9C0

lbl_8000E9C0:
	addi     r6, r2,
sauVariableValue_2_DIRECTION_THETA_PHI__Q27JStudio14TAdaptor_light@sda21 li r5,
2 b        lbl_8000EB00 .global  lbl_8000E9CC

lbl_8000E9CC:
	b        lbl_8000EBBC

lbl_8000E9D0:
	cmpwi    r4, 0x13
	bge      lbl_8000EA74
	cmpwi    r4, 0x10
	bge      lbl_8000E9E4
	b        lbl_8000EA74

lbl_8000E9E4:
	cmplwi   r4, 0x12
	bgt      lbl_8000EA54
	lis      r5, lbl_8049ECBC@ha
	slwi     r3, r4, 2
	addi     r4, r5, lbl_8049ECBC@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr
	.global  lbl_8000EA04

lbl_8000EA04:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EA3C
	.global  lbl_8000EA10

lbl_8000EA10:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EA3C
	.global  lbl_8000EA1C

lbl_8000EA1C:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EA3C
	.global  lbl_8000EA28

lbl_8000EA28:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EA3C
	.global  lbl_8000EA34

lbl_8000EA34:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000EA3C:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	li       r5, 0xc
	mtctr    r12
	bctrl
	.global  lbl_8000EA54

lbl_8000EA54:
	cmplwi   r29, 0
	lwz      r3, 4(r31)
	beq      lbl_8000EA68
	mr       r0, r29
	b        lbl_8000EA6C

lbl_8000EA68:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_8000EA6C:
	stw      r0, 0x100(r3)
	b        lbl_8000EBBC

lbl_8000EA74:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop
	b        lbl_8000EBBC

lbl_8000EA90:
	cmplwi   r4, 0x12
	bgt      lbl_8000EBBC
	lis      r6, lbl_8049EC70@ha
	slwi     r3, r4, 2
	addi     r4, r6, lbl_8049EC70@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr

lbl_8000EAB0:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EAE8

lbl_8000EABC:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EAE8

lbl_8000EAC8:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EAE8

lbl_8000EAD4:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EAE8

lbl_8000EAE0:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000EAE8:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	mtctr    r12
	bctrl

lbl_8000EAFC:
	b        lbl_8000EBBC

lbl_8000EB00:
	cmpwi    r4, 3
	mr       r28, r0
	beq      lbl_8000EB4C
	bge      lbl_8000EB20
	cmpwi    r4, 1
	beq      lbl_8000EB2C
	bge      lbl_8000EB3C
	b        lbl_8000EBBC

lbl_8000EB20:
	cmpwi    r4, 0x12
	beq      lbl_8000EB5C
	b        lbl_8000EBBC

lbl_8000EB2C:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 0
	addi     r29, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EB68

lbl_8000EB3C:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EB68

lbl_8000EB4C:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000EB68

lbl_8000EB5C:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000EB68:
	slwi     r0, r5, 2
	mr       r26, r6
	add      r25, r6, r0
	b        lbl_8000EBA0

lbl_8000EB78:
	mr       r12, r29
	mr       r3, r31
	mr       r4, r30
	mr       r6, r28
	mr       r7, r27
	lwz      r5, 0(r26)
	mtctr    r12
	addi     r26, r26, 4
	bctrl
	add      r28, r28, r27

lbl_8000EBA0:
	cmplw    r26, r25
	bne      lbl_8000EB78
	b        lbl_8000EBBC

lbl_8000EBAC:
	mr       r3, r31
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop

lbl_8000EBBC:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000EBD0
 * Size:	00005C
 * __dt__Q27JStudio16TAdaptor_messageFv
 */
TAdaptor_message::~TAdaptor_message(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 * __ct__Q27JStudio15TObject_messageFPCvUlPQ27JStudio16TAdaptor_message
 */
TObject_message::TObject_message(void const* p1, unsigned long p2, JStudio::TAdaptor_message* p3)
    : TObject(data::TE32B_MESSAGE, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000EC2C
 * Size:	000058
 * __ct__Q27JStudio15TObject_messageFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio16TAdaptor_message
 */
TObject_message::TObject_message(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor_message* p2)
    : TObject(p1, p2)
{
}

/*
 * --INFO--
 * Address:	8000EC84
 * Size:	000090
 * do_paragraph__Q27JStudio15TObject_messageFUlPCvUl
 */
void TObject_message::do_paragraph(unsigned long, void const*, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r3, 0x34(r3)
	cmplwi   r3, 0
	beq      lbl_8000ED04
	lis      r7, __ptmf_null@ha
	srwi     r9, r4, 5
	addi     r8, r7, __ptmf_null@l
	clrlwi   r4, r4, 0x1b
	lwz      r0, 4(r8)
	cmpwi    r9, 0x42
	lwz      r7, 0(r8)
	stw      r0, 0xc(r1)
	stw      r7, 8(r1)
	lwz      r0, 8(r8)
	stw      r0, 0x10(r1)
	beq      lbl_8000ECD0
	b        lbl_8000ED04

lbl_8000ECD0:
	lis      r7, lbl_8049ED94@ha
	addi     r9, r7, lbl_8049ED94@l
	lwz      r8, 0(r9)
	lwz      r7, 4(r9)
	lwz      r0, 8(r9)
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	stw      r0, 0x10(r1)
	b        lbl_8000ECF8
	b        lbl_8000ED04

lbl_8000ECF8:
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop

lbl_8000ED04:
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000ED14
 * Size:	00005C
 * __dt__Q27JStudio17TAdaptor_particleFv
 */
TAdaptor_particle::~TAdaptor_particle(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 * __ct__Q27JStudio16TObject_particleFPCvUlPQ27JStudio17TAdaptor_particle
 */
TObject_particle::TObject_particle(void const* p1, unsigned long p2, JStudio::TAdaptor_particle* p3)
    : TObject(data::TE32B_PARTICLE, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000ED70
 * Size:	000058
 * __ct__Q27JStudio16TObject_particleFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio17TAdaptor_particle
 */
TObject_particle::TObject_particle(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor_particle* p2)
    : TObject(p1, p2)
{
}

/*
 * --INFO--
 * Address:	8000EDC8
 * Size:	000458
 * do_paragraph__Q27JStudio16TObject_particleFUlPCvUl
 */
void TObject_particle::do_paragraph(unsigned long, void const*, unsigned long)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r8,
sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@ha mr       r7,
r6 stw      r0, 0x44(r1) mr       r0, r5 addi     r10, r8,
sauVariableValue_3_TRANSLATION_XYZ__Q27JStudio14TAdaptor_actor@l stmw     r25,
0x24(r1) mr       r30, r3 lwz      r31, 0x34(r3) lis      r3, lbl_8049E698@ha
	addi     r3, r3, lbl_8049E698@l
	cmplwi   r31, 0
	beq      lbl_8000F20C
	lis      r5, __ptmf_null@ha
	srwi     r6, r4, 5
	addi     r9, r5, __ptmf_null@l
	clrlwi   r4, r4, 0x1b
	lwz      r5, 4(r9)
	addi     r6, r6, -9
	lwz      r8, 0(r9)
	cmplwi   r6, 0x47
	stw      r5, 0xc(r1)
	stw      r8, 8(r1)
	lwz      r5, 8(r9)
	stw      r5, 0x10(r1)
	bgt      lbl_8000F20C
	lis      r5, lbl_8049EE98@ha
	slwi     r6, r6, 2
	addi     r5, r5, lbl_8049EE98@l
	lwzx     r5, r5, r6
	mtctr    r5
	bctr

lbl_8000EE4C:
	lwz      r6, 0x708(r3)
	lwz      r5, 0x70c(r3)
	lwz      r3, 0x710(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F1F4

lbl_8000EE68:
	lwz      r6, 0x714(r3)
	lwz      r5, 0x718(r3)
	lwz      r3, 0x71c(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F1F4

lbl_8000EE84:
	lwz      r6, 0x720(r3)
	lwz      r5, 0x724(r3)
	lwz      r3, 0x728(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F1F4

lbl_8000EEA0:
	lwz      r6, 0x72c(r3)
	lwz      r5, 0x730(r3)
	lwz      r3, 0x734(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F1F4

lbl_8000EEBC:
	lwz      r6, 0x738(r3)
	lwz      r5, 0x73c(r3)
	lwz      r3, 0x740(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F1F4

lbl_8000EED8:
	lwz      r6, 0x744(r3)
	lwz      r5, 0x748(r3)
	lwz      r3, 0x74c(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F1F4

lbl_8000EEF4:
	lwz      r6, 0x750(r3)
	lwz      r5, 0x754(r3)
	lwz      r3, 0x758(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F1F4

lbl_8000EF10:
	lwz      r8, 0x75c(r3)
	lis      r5,
"soovv_particle_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha lwz
r6, 0x760(r3) addi     r5, r5,
"soovv_particle_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@l lwz
r3, 0x764(r3) mr       r29, r5 stw      r8, 8(r1) stw      r6, 0xc(r1) stw r3,
0x10(r1) b        lbl_8000F018

lbl_8000EF38:
	li       r5, 0
	b        lbl_8000F0D8

lbl_8000EF40:
	li       r5, 1
	b        lbl_8000F0D8

lbl_8000EF48:
	li       r5, 2
	b        lbl_8000F0D8

lbl_8000EF50:
	li       r5, 3
	b        lbl_8000F0D8

lbl_8000EF58:
	li       r5, 4
	b        lbl_8000F0D8

lbl_8000EF60:
	li       r5, 5
	b        lbl_8000F0D8

lbl_8000EF68:
	li       r5, 6
	b        lbl_8000F0D8

lbl_8000EF70:
	li       r5, 7
	b        lbl_8000F0D8

lbl_8000EF78:
	li       r5, 8
	b        lbl_8000F0D8

lbl_8000EF80:
	li       r5, 9
	b        lbl_8000F0D8

lbl_8000EF88:
	li       r5, 0xa
	b        lbl_8000F0D8

lbl_8000EF90:
	li       r5, 0xb
	b        lbl_8000F0D8

lbl_8000EF98:
	li       r5, 0xc
	b        lbl_8000F0D8

lbl_8000EFA0:
	li       r5, 0xd
	b        lbl_8000F0D8

lbl_8000EFA8:
	li       r5, 0xe
	b        lbl_8000F0D8

lbl_8000EFB0:
	li       r5, 0xf
	b        lbl_8000F0D8

lbl_8000EFB8:
	li       r5, 0x10
	b        lbl_8000F0D8

lbl_8000EFC0:
	addi     r6, r10, 0xa8
	li       r5, 3
	b        lbl_8000F148

lbl_8000EFCC:
	addi     r6, r10, 0xb4
	li       r5, 3
	b        lbl_8000F148

lbl_8000EFD8:
	addi     r6, r10, 0xc0
	li       r5, 3
	b        lbl_8000F148

lbl_8000EFE4:
	addi     r6, r10, 0xcc
	li       r5, 3
	b        lbl_8000F148

lbl_8000EFF0:
	addi     r6, r10, 0xd8
	li       r5, 4
	b        lbl_8000F148

lbl_8000EFFC:
	addi     r6, r10, 0xe8
	li       r5, 3
	b        lbl_8000F148

lbl_8000F008:
	addi     r6, r10, 0xf4
	li       r5, 4
	b        lbl_8000F148

lbl_8000F014:
	b        lbl_8000F20C

lbl_8000F018:
	cmpwi    r4, 0x13
	bge      lbl_8000F0BC
	cmpwi    r4, 0x10
	bge      lbl_8000F02C
	b        lbl_8000F0BC

lbl_8000F02C:
	cmplwi   r4, 0x12
	bgt      lbl_8000F09C
	lis      r5, lbl_8049EE4C@ha
	slwi     r3, r4, 2
	addi     r4, r5, lbl_8049EE4C@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr

lbl_8000F04C:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F084

lbl_8000F058:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F084

lbl_8000F064:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F084

lbl_8000F070:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F084

lbl_8000F07C:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000F084:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	li       r5, 0x11
	mtctr    r12
	bctrl

lbl_8000F09C:
	cmplwi   r29, 0
	lwz      r3, 4(r31)
	beq      lbl_8000F0B0
	mr       r0, r29
	b        lbl_8000F0B4

lbl_8000F0B0:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_8000F0B4:
	stw      r0, 0x164(r3)
	b        lbl_8000F20C

lbl_8000F0BC:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop
	b        lbl_8000F20C

lbl_8000F0D8:
	cmplwi   r4, 0x12
	bgt      lbl_8000F20C
	lis      r6, lbl_8049EE00@ha
	slwi     r3, r4, 2
	addi     r4, r6, lbl_8049EE00@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr

lbl_8000F0F8:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F130

lbl_8000F104:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F130

lbl_8000F110:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F130

lbl_8000F11C:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F130

lbl_8000F128:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000F130:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	mtctr    r12
	bctrl

lbl_8000F144:
	b        lbl_8000F20C

lbl_8000F148:
	cmpwi    r4, 3
	mr       r28, r0
	beq      lbl_8000F194
	bge      lbl_8000F168
	cmpwi    r4, 1
	beq      lbl_8000F174
	bge      lbl_8000F184
	b        lbl_8000F20C

lbl_8000F168:
	cmpwi    r4, 0x12
	beq      lbl_8000F1A4
	b        lbl_8000F20C

lbl_8000F174:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 0
	addi     r29, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F1B0

lbl_8000F184:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F1B0

lbl_8000F194:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F1B0

lbl_8000F1A4:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r29, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000F1B0:
	slwi     r0, r5, 2
	mr       r26, r6
	add      r25, r6, r0
	b        lbl_8000F1E8

lbl_8000F1C0:
	mr       r12, r29
	mr       r3, r31
	mr       r4, r30
	mr       r6, r28
	mr       r7, r27
	lwz      r5, 0(r26)
	mtctr    r12
	addi     r26, r26, 4
	bctrl
	add      r28, r28, r27

lbl_8000F1E8:
	cmplw    r26, r25
	bne      lbl_8000F1C0
	b        lbl_8000F20C

lbl_8000F1F4:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop

lbl_8000F20C:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000F220
 * Size:	00005C
 * __dt__Q27JStudio14TAdaptor_soundFv
 */
TAdaptor_sound::~TAdaptor_sound(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 * __ct__Q27JStudio13TObject_soundFPCvUlPQ27JStudio14TAdaptor_sound
 */
TObject_sound::TObject_sound(void const* p1, unsigned long p2, JStudio::TAdaptor_sound* p3)
    : TObject(data::TE32B_SOUND, p1, p2, p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000F27C
 * Size:	000058
 * __ct__Q27JStudio13TObject_soundFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio14TAdaptor_sound
 */
TObject_sound::TObject_sound(JStudio::stb::data::TParse_TBlock_object const& p1, JStudio::TAdaptor_sound* p2)
    : TObject(p1, p2)
{
}

/*
 * --INFO--
 * Address:	8000F2D4
 * Size:	0003F8
 * do_paragraph__Q27JStudio13TObject_soundFUlPCvUl
 */
void TObject_sound::do_paragraph(unsigned long, void const*, unsigned long)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	mr       r7, r6
	stw      r0, 0x44(r1)
	mr       r0, r5
	stmw     r25, 0x24(r1)
	mr       r30, r3
	lis      r3, lbl_8049E698@ha
	addi     r3, r3, lbl_8049E698@l
	lwz      r31, 0x34(r30)
	cmplwi   r31, 0
	beq      lbl_8000F6B8
	lis      r5, __ptmf_null@ha
	srwi     r6, r4, 5
	addi     r9, r5, __ptmf_null@l
	clrlwi   r4, r4, 0x1b
	lwz      r5, 4(r9)
	addi     r6, r6, -21
	lwz      r8, 0(r9)
	cmplwi   r6, 0x3b
	stw      r5, 0xc(r1)
	stw      r8, 8(r1)
	lwz      r5, 8(r9)
	stw      r5, 0x10(r1)
	bgt      lbl_8000F6B8
	lis      r5, lbl_8049F0BC@ha
	slwi     r6, r6, 2
	addi     r5, r5, lbl_8049F0BC@l
	lwzx     r5, r5, r6
	mtctr    r5
	bctr

lbl_8000F350:
	lwz      r6, 0x920(r3)
	lwz      r5, 0x924(r3)
	lwz      r3, 0x928(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F6A0

lbl_8000F36C:
	lwz      r6, 0x92c(r3)
	lwz      r5, 0x930(r3)
	lwz      r3, 0x934(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F6A0

lbl_8000F388:
	lwz      r6, 0x938(r3)
	lwz      r5, 0x93c(r3)
	lwz      r3, 0x940(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F6A0

lbl_8000F3A4:
	lwz      r6, 0x944(r3)
	lwz      r5, 0x948(r3)
	lwz      r3, 0x94c(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F6A0

lbl_8000F3C0:
	lwz      r6, 0x950(r3)
	lwz      r5, 0x954(r3)
	lwz      r3, 0x958(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F6A0

lbl_8000F3DC:
	lwz      r6, 0x95c(r3)
	lwz      r5, 0x960(r3)
	lwz      r3, 0x964(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F6A0

lbl_8000F3F8:
	lwz      r6, 0x968(r3)
	lwz      r5, 0x96c(r3)
	lwz      r3, 0x970(r3)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	b        lbl_8000F6A0

lbl_8000F414:
	lwz      r8, 0x974(r3)
	lis      r5,
"soovv_sound_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha lwz
r6, 0x978(r3) addi     r5, r5,
"soovv_sound_PARENT_ENABLE___Q27JStudio28@unnamed@jstudio_object_cpp@"@l lwz r3,
0x97c(r3) mr       r28, r5 stw      r8, 8(r1) li       r29, 3 stw      r6,
0xc(r1) stw      r3, 0x10(r1) b        lbl_8000F4C0

lbl_8000F440:
	lwz      r8, 0x980(r3)
	lis      r5,
"soovv_sound_LOCATED___Q27JStudio28@unnamed@jstudio_object_cpp@"@ha lwz      r6,
0x984(r3) addi     r5, r5,
"soovv_sound_LOCATED___Q27JStudio28@unnamed@jstudio_object_cpp@"@l lwz      r3,
0x988(r3) mr       r28, r5 stw      r8, 8(r1) li       r29, 4 stw      r6,
0xc(r1) stw      r3, 0x10(r1) b        lbl_8000F4C0

lbl_8000F46C:
	li       r5, 0
	b        lbl_8000F588

lbl_8000F474:
	li       r5, 1
	b        lbl_8000F588

lbl_8000F47C:
	li       r5, 2
	b        lbl_8000F588

lbl_8000F484:
	li       r5, 5
	b        lbl_8000F588

lbl_8000F48C:
	li       r5, 6
	b        lbl_8000F588

lbl_8000F494:
	li       r5, 7
	b        lbl_8000F588

lbl_8000F49C:
	li       r5, 8
	b        lbl_8000F588

lbl_8000F4A4:
	li       r5, 9
	b        lbl_8000F588

lbl_8000F4AC:
	lis      r3, sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_sound@ha
	addi     r3, r3,
sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_sound@l mr       r5, r3 b
lbl_8000F5F8

lbl_8000F4BC:
	b        lbl_8000F6B8

lbl_8000F4C0:
	cmpwi    r4, 0x13
	bge      lbl_8000F56C
	cmpwi    r4, 0x10
	bge      lbl_8000F4D4
	b        lbl_8000F56C

lbl_8000F4D4:
	cmplwi   r4, 0x12
	bgt      lbl_8000F544
	lis      r5, lbl_8049F070@ha
	slwi     r3, r4, 2
	addi     r4, r5, lbl_8049F070@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr

lbl_8000F4F4:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F52C

lbl_8000F500:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F52C

lbl_8000F50C:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F52C

lbl_8000F518:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F52C

lbl_8000F524:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000F52C:
	mr       r3, r31
	mr       r4, r30
	mr       r5, r29
	mr       r6, r0
	mtctr    r12
	bctrl

lbl_8000F544:
	mulli    r0, r29, 0x14
	lwz      r3, 4(r31)
	cmplwi   r28, 0
	add      r3, r3, r0
	beq      lbl_8000F560
	mr       r0, r28
	b        lbl_8000F564

lbl_8000F560:
	addi     r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21

lbl_8000F564:
	stw      r0, 0x10(r3)
	b        lbl_8000F6B8

lbl_8000F56C:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop
	b        lbl_8000F6B8

lbl_8000F588:
	cmplwi   r4, 0x12
	bgt      lbl_8000F6B8
	lis      r6, lbl_8049F024@ha
	slwi     r3, r4, 2
	addi     r4, r6, lbl_8049F024@l
	lwzx     r3, r4, r3
	mtctr    r3
	bctr

lbl_8000F5A8:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F5E0

lbl_8000F5B4:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F5E0

lbl_8000F5C0:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F5E0

lbl_8000F5CC:
	lis      r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_NAME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F5E0

lbl_8000F5D8:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	addi     r12, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000F5E0:
	mr       r3, r31
	mr       r4, r30
	mr       r6, r0
	mtctr    r12
	bctrl

lbl_8000F5F4:
	b        lbl_8000F6B8

lbl_8000F5F8:
	cmpwi    r4, 3
	mr       r29, r0
	beq      lbl_8000F644
	bge      lbl_8000F618
	cmpwi    r4, 1
	beq      lbl_8000F624
	bge      lbl_8000F634
	b        lbl_8000F6B8

lbl_8000F618:
	cmpwi    r4, 0x12
	beq      lbl_8000F654
	b        lbl_8000F6B8

lbl_8000F624:
	lis      r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 0
	addi     r28, r3,
adaptor_setVariableValue_VOID___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F660

lbl_8000F634:
	lis      r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_IMMEDIATE___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F660

lbl_8000F644:
	lis      r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_TIME___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l
	b        lbl_8000F660

lbl_8000F654:
	lis      r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@ha
	li       r27, 4
	addi     r28, r3,
adaptor_setVariableValue_FVR_INDEX___Q27JStudio8TAdaptorFPQ27JStudio8TAdaptorPQ27JStudio7TObjectUlPCvUl@l

lbl_8000F660:
	mr       r26, r5
	addi     r25, r5, 0xc
	b        lbl_8000F694

lbl_8000F66C:
	mr       r12, r28
	mr       r3, r31
	mr       r4, r30
	mr       r6, r29
	mr       r7, r27
	lwz      r5, 0(r26)
	mtctr    r12
	addi     r26, r26, 4
	bctrl
	add      r29, r29, r27

lbl_8000F694:
	cmplw    r26, r25
	bne      lbl_8000F66C
	b        lbl_8000F6B8

lbl_8000F6A0:
	mr       r3, r31
	mr       r5, r0
	mr       r6, r7
	addi     r12, r1, 8
	bl       __ptmf_scall
	nop

lbl_8000F6B8:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000F6CC
 * Size:	000094
 *  __dt__Q27JStudio13TObject_soundFv
 */
TObject_sound::~TObject_sound() { }

/*
 * --INFO--
 * Address:	8000F760
 * Size:	000094
 * __dt__Q27JStudio16TObject_particleFv
 */
TObject_particle::~TObject_particle() { }

/*
 * --INFO--
 * Address:	8000F7F4
 * Size:	000094
 * __dt__Q27JStudio15TObject_messageFv
 */
TObject_message::~TObject_message() { }

/*
 * --INFO--
 * Address:	8000F888
 * Size:	000094
 * __dt__Q27JStudio13TObject_lightFv
 */
TObject_light::~TObject_light() { }

/*
 * --INFO--
 * Address:	8000F91C
 * Size:	000094
 * __dt__Q27JStudio11TObject_fogFv
 */
TObject_fog::~TObject_fog() { }

/*
 * --INFO--
 * Address:	8000F9B0
 * Size:	000094
 * __dt__Q27JStudio14TObject_cameraFv
 */
TObject_camera::~TObject_camera() { }

/*
 * --INFO--
 * Address:	8000FA44
 * Size:	000094
 * __dt__Q27JStudio20TObject_ambientLightFv
 */
TObject_ambientLight::~TObject_ambientLight() { }

/*
 * --INFO--
 * Address:	8000FAD8
 * Size:	000094
 * __dt__Q27JStudio13TObject_actorFv
 */
TObject_actor::~TObject_actor() { }

} // namespace JStudio

/*
 * --INFO--
 * Address:	8000FB6C
 * Size:	000284
 */
// void __sinit_jstudio - object_cpp(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	lis      r5, lbl_8049F4E8@ha
// 	lis      r3, lbl_8049E698@ha
// 	stw      r0, 0x14(r1)
// 	lis      r4, lbl_804EFCB0@ha
// 	addi     r8, r5, lbl_8049F4E8@l
// 	stw      r31, 0xc(r1)
// 	addi     r31, r4, lbl_804EFCB0@l
// 	lis      r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_actor>Fv"@ha
// 	stw      r30, 8(r1)
// 	addi     r30, r3, lbl_8049E698@l
// 	lis      r3, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	addi     r4, r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_actor>Fv"@l
// 	addi     r9, r3, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lwz      r7, 0(r30)
// 	stw      r9, 0xc(r31)
// 	addi     r3, r31, 0xc
// 	lwz      r6, 4(r30)
// 	addi     r5, r31, 0
// 	lwz      r0, 8(r30)
// 	stw      r8, 0xc(r31)
// 	stw      r7, 4(r3)
// 	stw      r6, 8(r3)
// 	stw      r0, 0xc(r3)
// 	bl       __register_global_object
// 	lis      r3, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r5, lbl_8049F4E8@ha
// 	addi     r0, r3, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_actor>Fv"@ha
// 	stw      r0, 0x28(r31)
// 	addi     r5, r5, lbl_8049F4E8@l
// 	lwz      r7, 0xc(r30)
// 	addi     r3, r31, 0x28
// 	lwz      r6, 0x10(r30)
// 	addi     r4, r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_actor>Fv"@l
// 	lwz      r0, 0x14(r30)
// 	stw      r5, 0x28(r31)
// 	addi     r5, r31, 0x1c
// 	stw      r7, 4(r3)
// 	stw      r6, 8(r3)
// 	stw      r0, 0xc(r3)
// 	bl       __register_global_object
// 	lis      r3, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r5, lbl_8049F4D8@ha
// 	addi     r0, r3, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@55TOutputVariableValue_BOOL_<Q27JStudio15TAdaptor_camera>Fv"@ha
// 	stw      r0, 0x44(r31)
// 	addi     r5, r5, lbl_8049F4D8@l
// 	lwz      r7, 0x18(r30)
// 	addi     r3, r31, 0x44
// 	lwz      r6, 0x1c(r30)
// 	addi     r4, r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@55TOutputVariableValue_BOOL_<Q27JStudio15TAdaptor_camera>Fv"@l
// 	lwz      r0, 0x20(r30)
// 	stw      r5, 0x44(r31)
// 	addi     r5, r31, 0x38
// 	stw      r7, 4(r3)
// 	stw      r6, 8(r3)
// 	stw      r0, 0xc(r3)
// 	bl       __register_global_object
// 	lis      r3, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r5, lbl_8049F4D8@ha
// 	addi     r0, r3, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@55TOutputVariableValue_BOOL_<Q27JStudio15TAdaptor_camera>Fv"@ha
// 	stw      r0, 0x60(r31)
// 	addi     r5, r5, lbl_8049F4D8@l
// 	lwz      r7, 0x24(r30)
// 	addi     r3, r31, 0x60
// 	lwz      r6, 0x28(r30)
// 	addi     r4, r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@55TOutputVariableValue_BOOL_<Q27JStudio15TAdaptor_camera>Fv"@l
// 	lwz      r0, 0x2c(r30)
// 	stw      r5, 0x60(r31)
// 	addi     r5, r31, 0x54
// 	stw      r7, 4(r3)
// 	stw      r6, 8(r3)
// 	stw      r0, 0xc(r3)
// 	bl       __register_global_object
// 	lis      r3, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r5, lbl_8049F4C8@ha
// 	addi     r0, r3, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_light>Fv"@ha
// 	stw      r0, 0x7c(r31)
// 	addi     r5, r5, lbl_8049F4C8@l
// 	lwz      r7, 0x30(r30)
// 	addi     r3, r31, 0x7c
// 	lwz      r6, 0x34(r30)
// 	addi     r4, r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_light>Fv"@l
// 	lwz      r0, 0x38(r30)
// 	stw      r5, 0x7c(r31)
// 	addi     r5, r31, 0x70
// 	stw      r7, 4(r3)
// 	stw      r6, 8(r3)
// 	stw      r0, 0xc(r3)
// 	bl       __register_global_object
// 	lis      r3, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r5, lbl_8049F4B8@ha
// 	addi     r0, r3, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@57TOutputVariableValue_BOOL_<Q27JStudio17TAdaptor_particle>Fv"@ha
// 	stw      r0, 0x98(r31)
// 	addi     r5, r5, lbl_8049F4B8@l
// 	lwz      r7, 0x3c(r30)
// 	addi     r3, r31, 0x98
// 	lwz      r6, 0x40(r30)
// 	addi     r4, r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@57TOutputVariableValue_BOOL_<Q27JStudio17TAdaptor_particle>Fv"@l
// 	lwz      r0, 0x44(r30)
// 	stw      r5, 0x98(r31)
// 	addi     r5, r31, 0x8c
// 	stw      r7, 4(r3)
// 	stw      r6, 8(r3)
// 	stw      r0, 0xc(r3)
// 	bl       __register_global_object
// 	lis      r3, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r5, lbl_8049F4A8@ha
// 	addi     r0, r3, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_sound>Fv"@ha
// 	stw      r0, 0xb4(r31)
// 	addi     r5, r5, lbl_8049F4A8@l
// 	lwz      r7, 0x48(r30)
// 	addi     r3, r31, 0xb4
// 	lwz      r6, 0x4c(r30)
// 	addi     r4, r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_sound>Fv"@l
// 	lwz      r0, 0x50(r30)
// 	stw      r5, 0xb4(r31)
// 	addi     r5, r31, 0xa8
// 	stw      r7, 4(r3)
// 	stw      r6, 8(r3)
// 	stw      r0, 0xc(r3)
// 	bl       __register_global_object
// 	lis      r3, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	lis      r5, lbl_8049F4A8@ha
// 	addi     r0, r3, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_sound>Fv"@ha
// 	stw      r0, 0xd0(r31)
// 	addi     r5, r5, lbl_8049F4A8@l
// 	lwz      r7, 0x54(r30)
// 	addi     r3, r31, 0xd0
// 	lwz      r6, 0x58(r30)
// 	addi     r4, r4,
// 	"__dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_sound>Fv"@l
// 	lwz      r0, 0x5c(r30)
// 	stw      r5, 0xd0(r31)
// 	addi     r5, r31, 0xc4
// 	stw      r7, 4(r3)
// 	stw      r6, 8(r3)
// 	stw      r0, 0xc(r3)
// 	bl       __register_global_object
// 	lis      r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
// 	addi     r0, r30, 0xdf0
// 	addi     r4, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
// 	lis      r3, __dt__Q37JStudio14TVariableValue13TOutput_none_Fv@ha
// 	stw      r4, soOutput_none___Q27JStudio14TVariableValue@sda21(r13)
// 	addi     r4, r3, __dt__Q37JStudio14TVariableValue13TOutput_none_Fv@l
// 	addi     r5, r31, 0xe0
// 	addi     r3, r13, soOutput_none___Q27JStudio14TVariableValue@sda21
// 	stw      r0, soOutput_none___Q27JStudio14TVariableValue@sda21(r13)
// 	bl       __register_global_object
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8000FDF0
 * Size:	00005C
 * __dt__Q37JStudio28@unnamed@jstudio_object_cpp@54TOutputVariableValue_BOOL_<Q27JStudio14TAdaptor_sound>Fv
 */
// void __dt__Q37JStudio28 @unnamed @jstudio_object_cpp @54TOutputVariableValue_BOOL_ < JStudio::TAdaptor_sound > Fv(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr.       r31, r3
// 	  beq-      .loc_0x44
// 	  lis       r3, 0x804A
// 	  subi      r0, r3, 0xB58
// 	  stw       r0, 0x0(r31)
// 	  beq-      .loc_0x34
// 	  lis       r3, 0x804A
// 	  subi      r0, r3, 0xB68
// 	  stw       r0, 0x0(r31)

// 	.loc_0x34:
// 	  extsh.    r0, r4
// 	  ble-      .loc_0x44
// 	  mr        r3, r31
// 	  bl        0x14284

// 	.loc_0x44:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r31
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8000FE4C
 * Size:	00005C
 */
// void __dt__Q37JStudio28 @unnamed @jstudio_object_cpp @57TOutputVariableValue_BOOL_ < JStudio::TAdaptor_particle > Fv(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr.       r31, r3
// 	  beq-      .loc_0x44
// 	  lis       r3, 0x804A
// 	  subi      r0, r3, 0xB48
// 	  stw       r0, 0x0(r31)
// 	  beq-      .loc_0x34
// 	  lis       r3, 0x804A
// 	  subi      r0, r3, 0xB68
// 	  stw       r0, 0x0(r31)

// 	.loc_0x34:
// 	  extsh.    r0, r4
// 	  ble-      .loc_0x44
// 	  mr        r3, r31
// 	  bl        0x14228

// 	.loc_0x44:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r31
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8000FEA8
 * Size:	00005C
 */
// void __dt__Q37JStudio28 @unnamed @jstudio_object_cpp @54TOutputVariableValue_BOOL_ < JStudio::TAdaptor_light > Fv(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr.       r31, r3
// 	  beq-      .loc_0x44
// 	  lis       r3, 0x804A
// 	  subi      r0, r3, 0xB38
// 	  stw       r0, 0x0(r31)
// 	  beq-      .loc_0x34
// 	  lis       r3, 0x804A
// 	  subi      r0, r3, 0xB68
// 	  stw       r0, 0x0(r31)

// 	.loc_0x34:
// 	  extsh.    r0, r4
// 	  ble-      .loc_0x44
// 	  mr        r3, r31
// 	  bl        0x141CC

// 	.loc_0x44:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r31
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8000FF04
 * Size:	00005C
 */
// void __dt__Q37JStudio28 @unnamed @jstudio_object_cpp @55TOutputVariableValue_BOOL_ < JStudio::TAdaptor_camera > Fv(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr.       r31, r3
// 	  beq-      .loc_0x44
// 	  lis       r3, 0x804A
// 	  subi      r0, r3, 0xB28
// 	  stw       r0, 0x0(r31)
// 	  beq-      .loc_0x34
// 	  lis       r3, 0x804A
// 	  subi      r0, r3, 0xB68
// 	  stw       r0, 0x0(r31)

// 	.loc_0x34:
// 	  extsh.    r0, r4
// 	  ble-      .loc_0x44
// 	  mr        r3, r31
// 	  bl        0x14170

// 	.loc_0x44:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r31
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8000FF60
 * Size:	00005C
 */
// void __dt__Q37JStudio28 @unnamed @jstudio_object_cpp @54TOutputVariableValue_BOOL_ < JStudio::TAdaptor_actor > Fv(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  stw       r31, 0xC(r1)
// 	  mr.       r31, r3
// 	  beq-      .loc_0x44
// 	  lis       r3, 0x804A
// 	  subi      r0, r3, 0xB18
// 	  stw       r0, 0x0(r31)
// 	  beq-      .loc_0x34
// 	  lis       r3, 0x804A
// 	  subi      r0, r3, 0xB68
// 	  stw       r0, 0x0(r31)

// 	.loc_0x34:
// 	  extsh.    r0, r4
// 	  ble-      .loc_0x44
// 	  mr        r3, r31
// 	  bl        0x14114

// 	.loc_0x44:
// 	  lwz       r0, 0x14(r1)
// 	  mr        r3, r31
// 	  lwz       r31, 0xC(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8000FFBC
 * Size:	00005C
 */
// void __cl__Q37JStudio28 @unnamed @jstudio_object_cpp @54TOutputVariableValue_BOOL_ < JStudio::TAdaptor_sound >
// CFfPQ27JStudio8TAdaptor(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  lfs       f0, -0x7F30(r2)
// 	  mr        r6, r3
// 	  stw       r0, 0x14(r1)
// 	  li        r0, 0
// 	  fcmpo     cr0, f1, f0
// 	  stw       r0, 0x8(r1)
// 	  cror      2, 0x1, 0x2
// 	  bne-      .loc_0x30
// 	  li        r0, 0x1
// 	  stw       r0, 0x8(r1)

// 	.loc_0x30:
// 	  mr        r3, r4
// 	  addi      r5, r1, 0x8
// 	  addi      r12, r6, 0x4
// 	  li        r4, 0x2
// 	  li        r6, 0x4
// 	  bl        0xB1B24
// 	  nop
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80010018
 * Size:	00005C
 */
// void __cl__Q37JStudio28 @unnamed @jstudio_object_cpp @57TOutputVariableValue_BOOL_ < JStudio::TAdaptor_particle
//     > CFfPQ27JStudio8TAdaptor(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  lfs       f0, -0x7F30(r2)
// 	  mr        r6, r3
// 	  stw       r0, 0x14(r1)
// 	  li        r0, 0
// 	  fcmpo     cr0, f1, f0
// 	  stw       r0, 0x8(r1)
// 	  cror      2, 0x1, 0x2
// 	  bne-      .loc_0x30
// 	  li        r0, 0x1
// 	  stw       r0, 0x8(r1)

// 	.loc_0x30:
// 	  mr        r3, r4
// 	  addi      r5, r1, 0x8
// 	  addi      r12, r6, 0x4
// 	  li        r4, 0x2
// 	  li        r6, 0x4
// 	  bl        0xB1AC8
// 	  nop
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80010074
 * Size:	00005C
 */
// void __cl__Q37JStudio28 @unnamed @jstudio_object_cpp @54TOutputVariableValue_BOOL_ < JStudio::TAdaptor_light >
// CFfPQ27JStudio8TAdaptor(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  lfs       f0, -0x7F30(r2)
// 	  mr        r6, r3
// 	  stw       r0, 0x14(r1)
// 	  li        r0, 0
// 	  fcmpo     cr0, f1, f0
// 	  stw       r0, 0x8(r1)
// 	  cror      2, 0x1, 0x2
// 	  bne-      .loc_0x30
// 	  li        r0, 0x1
// 	  stw       r0, 0x8(r1)

// 	.loc_0x30:
// 	  mr        r3, r4
// 	  addi      r5, r1, 0x8
// 	  addi      r12, r6, 0x4
// 	  li        r4, 0x2
// 	  li        r6, 0x4
// 	  bl        0xB1A6C
// 	  nop
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	800100D0
 * Size:	00005C
 */
// void __cl__Q37JStudio28 @unnamed @jstudio_object_cpp @55TOutputVariableValue_BOOL_ < JStudio::TAdaptor_camera
//     > CFfPQ27JStudio8TAdaptor(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  lfs       f0, -0x7F30(r2)
// 	  mr        r6, r3
// 	  stw       r0, 0x14(r1)
// 	  li        r0, 0
// 	  fcmpo     cr0, f1, f0
// 	  stw       r0, 0x8(r1)
// 	  cror      2, 0x1, 0x2
// 	  bne-      .loc_0x30
// 	  li        r0, 0x1
// 	  stw       r0, 0x8(r1)

// 	.loc_0x30:
// 	  mr        r3, r4
// 	  addi      r5, r1, 0x8
// 	  addi      r12, r6, 0x4
// 	  li        r4, 0x2
// 	  li        r6, 0x4
// 	  bl        0xB1A10
// 	  nop
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8001012C
 * Size:	00005C
 */
// void __cl__Q37JStudio28 @unnamed @jstudio_object_cpp @54TOutputVariableValue_BOOL_ < JStudio::TAdaptor_actor >
// CFfPQ27JStudio8TAdaptor(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  lfs       f0, -0x7F30(r2)
// 	  mr        r6, r3
// 	  stw       r0, 0x14(r1)
// 	  li        r0, 0
// 	  fcmpo     cr0, f1, f0
// 	  stw       r0, 0x8(r1)
// 	  cror      2, 0x1, 0x2
// 	  bne-      .loc_0x30
// 	  li        r0, 0x1
// 	  stw       r0, 0x8(r1)

// 	.loc_0x30:
// 	  mr        r3, r4
// 	  addi      r5, r1, 0x8
// 	  addi      r12, r6, 0x4
// 	  li        r4, 0x2
// 	  li        r6, 0x4
// 	  bl        0xB19B4
// 	  nop
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }
