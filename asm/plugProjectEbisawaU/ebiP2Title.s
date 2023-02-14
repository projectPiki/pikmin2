.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_ebiP2Title_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80495C58, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80495C58
.balign 4
.obj lbl_80495C64, local
	.asciz "ebiP2Title"
.endobj lbl_80495C64
.balign 4
.obj lbl_80495C70, local
	.asciz "TTitleMgr"
.endobj lbl_80495C70
.balign 4
.obj lbl_80495C7C, local
	.asciz "TTitleCameraParameters"
.endobj lbl_80495C7C
.balign 4
.obj lbl_80495C94, local # Shift-JIS
	.4byte 0x834A8381
	.4byte 0x83898B97
	.4byte 0x97A3838D
	.4byte 0x83530000
.endobj lbl_80495C94
.balign 4
.obj lbl_80495CA4, local
	.asciz "TTitleFogParameters"
.endobj lbl_80495CA4
.balign 4
.obj lbl_80495CB8, local # Shift-JIS
	.4byte 0x83748348
	.4byte 0x834F974C
	.4byte 0x8CF896B3
	.4byte 0x8CF80000
.endobj lbl_80495CB8
.balign 4
.obj lbl_80495CC8, local # Shift-JIS
	.asciz "TTitleParameters"
.endobj lbl_80495CC8
.balign 4
.obj lbl_80495CDC, local # Shift-JIS
	.4byte 0x89C28E8B
	.4byte 0x94CD88CD
	.4byte 0x588DC58F
	.4byte 0xAC000000
.endobj lbl_80495CDC
.balign 4
.obj lbl_80495CEC, local # Shift-JIS
	.4byte 0x89C28E8B
	.4byte 0x94CD88CD
	.4byte 0x588DC591
	.4byte 0xE5000000
.endobj lbl_80495CEC
.balign 4
.obj lbl_80495CFC, local # Shift-JIS
	.4byte 0x89C28E8B
	.4byte 0x94CD88CD
	.4byte 0x598DC58F
	.4byte 0xAC000000
.endobj lbl_80495CFC
.balign 4
.obj lbl_80495D0C, local # Shift-JIS
	.4byte 0x89C28E8B
	.4byte 0x94CD88CD
	.4byte 0x598DC591
	.4byte 0xE5000000
.endobj lbl_80495D0C
.balign 4
.obj lbl_80495D1C, local # Shift-JIS
	.4byte 0x8373834E
	.4byte 0x837E8393
	.4byte 0x89F08E55
	.4byte 0x92869053
	.4byte 0x8DC09557
	.4byte 0x58000000
.endobj lbl_80495D1C
.balign 4
.obj lbl_80495D34, local # Shift-JIS
	.4byte 0x8373834E
	.4byte 0x837E8393
	.4byte 0x89F08E55
	.4byte 0x92869053
	.4byte 0x8DC09557
	.4byte 0x59000000
.endobj lbl_80495D34
.balign 4
.obj lbl_80495D4C, local # Shift-JIS
	.4byte 0x8373834E
	.4byte 0x837E8393
	.4byte 0x89F08E55
	.4byte 0x94BC8C61
	.4byte 0x8DC58FAC
	.4byte 0x00000000
.endobj lbl_80495D4C
.balign 4
.obj lbl_80495D64, local # Shift-JIS
	.4byte 0x8373834E
	.4byte 0x837E8393
	.4byte 0x89F08E55
	.4byte 0x94BC8C61
	.4byte 0x8DC591E5
	.4byte 0x28834983
	.4byte 0x75835783
	.4byte 0x46834E83
	.4byte 0x67947A92
	.4byte 0x758CC08A
	.4byte 0x4594BC8C
	.4byte 0x61290000
.endobj lbl_80495D64
.balign 4
.obj lbl_80495D94, local # Shift-JIS
	.4byte 0x959782A0
	.4byte 0x82BD82E8
	.4byte 0x94CD88CD
	.4byte 0x82CC9790
	.4byte 0x90940000
.endobj lbl_80495D94
.balign 4
.obj lbl_80495DA8, local # Shift-JIS
	.4byte 0x42479597
	.4byte 0x8FF391D4
	.4byte 0x8E9E8AD4
	.4byte 0x28956229
	.4byte 0x00000000
.endobj lbl_80495DA8
.balign 4
.obj lbl_80495DBC, local # Shift-JIS
	.4byte 0x424F4944
	.4byte 0x318FF391
	.4byte 0xD48E9E8A
	.4byte 0xD4289562
	.4byte 0x29000000
.endobj lbl_80495DBC
.balign 4
.obj lbl_80495DD0, local # Shift-JIS
	.4byte 0x424F4944
	.4byte 0x328FF391
	.4byte 0xD48E9E8A
	.4byte 0xD4289562
	.4byte 0x29000000
.endobj lbl_80495DD0
.balign 4
.obj lbl_80495DE4, local # Shift-JIS
	.4byte 0x424F4944
	.4byte 0x338FF391
	.4byte 0xD48E9E8A
	.4byte 0xD4289562
	.4byte 0x29000000
.endobj lbl_80495DE4
.balign 4
.obj lbl_80495DF8, local # Shift-JIS
	.4byte 0x95978FF3
	.4byte 0x91D48E9E
	.4byte 0x8AD42895
	.4byte 0x62290000
.endobj lbl_80495DF8
.balign 4
.obj lbl_80495E08, local # Shift-JIS
	.4byte 0x93478FF3
	.4byte 0x91D48E9E
	.4byte 0x8AD42895
	.4byte 0x62290000
.endobj lbl_80495E08
.balign 4
.obj lbl_80495E18, local # Shift-JIS
	.4byte 0x50726573
	.4byte 0x73537461
	.4byte 0x72748A4A
	.4byte 0x8E6E8E9E
	.4byte 0x8AD42895
	.4byte 0x62290000
.endobj lbl_80495E18
.balign 4
.obj lbl_80495E30, local # Shift-JIS
	.4byte 0x834C815B
	.4byte 0x8EF382AF
	.4byte 0x82C282AF
	.4byte 0x8A4A8E6E
	.4byte 0x8E9E8AD4
	.4byte 0x28956229
	.4byte 0x00000000
.endobj lbl_80495E30
.balign 4
.obj lbl_80495E4C, local
	.asciz "LightMgr"
.endobj lbl_80495E4C
.balign 4
.obj lbl_80495E58, local # Shift-JIS
	.4byte 0x83818343
	.4byte 0x83938389
	.4byte 0x83438367
	.4byte 0x00000000
.endobj lbl_80495E58
.balign 4
.obj lbl_80495E68, local # Shift-JIS
	.4byte 0x83588379
	.4byte 0x834C8385
	.4byte 0x83898389
	.4byte 0x83438367
	.4byte 0x00000000
.endobj lbl_80495E68
.balign 4
.obj lbl_80495E7C, local
	.asciz "TAmbParms"
.endobj lbl_80495E7C
.balign 4
.obj lbl_80495E88, local # Shift-JIS
	.4byte 0x83418393
	.4byte 0x83728347
	.4byte 0x83938367
	.4byte 0x90465200
.endobj lbl_80495E88
.balign 4
.obj lbl_80495E98, local # Shift-JIS
	.4byte 0x83418393
	.4byte 0x83728347
	.4byte 0x83938367
	.4byte 0x90464700
.endobj lbl_80495E98
.balign 4
.obj lbl_80495EA8, local # Shift-JIS
	.4byte 0x83418393
	.4byte 0x83728347
	.4byte 0x83938367
	.4byte 0x90464200
.endobj lbl_80495EA8
.balign 4
.obj lbl_80495EB8, local # Shift-JIS
	.4byte 0x83418393
	.4byte 0x83728347
	.4byte 0x83938367
	.4byte 0x90464100
.endobj lbl_80495EB8
.balign 4
.obj lbl_80495EC8, local
	.asciz "TSpecParms"
.endobj lbl_80495EC8
.balign 4
.obj lbl_80495ED4, local # Shift-JIS
	.4byte 0x83898343
	.4byte 0x83679046
	.4byte 0x52000000
.endobj lbl_80495ED4
.balign 4
.obj lbl_80495EE0, local # Shift-JIS
	.4byte 0x83898343
	.4byte 0x83679046
	.4byte 0x47000000
.endobj lbl_80495EE0
.balign 4
.obj lbl_80495EEC, local # Shift-JIS
	.4byte 0x83898343
	.4byte 0x83679046
	.4byte 0x42000000
.endobj lbl_80495EEC
.balign 4
.obj lbl_80495EF8, local # Shift-JIS
	.4byte 0x83898343
	.4byte 0x83679046
	.4byte 0x41000000
.endobj lbl_80495EF8
.balign 4
.obj lbl_80495F04, local
	.asciz "TMainParms"
.endobj lbl_80495F04
.balign 4
.obj lbl_80495F10, local # Shift-JIS
	.4byte 0x8B9797A3
	.4byte 0x8CB8908A
	.4byte 0x2D8B9797
	.4byte 0xA3000000
.endobj lbl_80495F10
.balign 4
.obj lbl_80495F20, local # Shift-JIS
	.4byte 0x8B9797A3
	.4byte 0x8CB8908A
	.4byte 0x2D96BE82
	.4byte 0xE982B300
.endobj lbl_80495F20
.balign 4
.obj lbl_80495F30, local # Shift-JIS
	.4byte 0x834A8362
	.4byte 0x83678349
	.4byte 0x83748A70
	.4byte 0x93780000
.endobj lbl_80495F30
.balign 4
.obj lbl_80495F40, local
	.asciz "J3DDrawBuffer"
.endobj lbl_80495F40
.balign 4
.obj lbl_80495F50, local
	.asciz "TCoordMgr Main"
.endobj lbl_80495F50
.balign 4
.obj lbl_80495F60, local
	.asciz "TCoordMgr Sub"
.endobj lbl_80495F60
.balign 4
.obj lbl_80495F70, local
	.asciz "TTitleMgr::loadResource()"
.endobj lbl_80495F70
.balign 4
.obj lbl_80495F8C, local
	.asciz "TTitleMgr::loadResource--mount_arc"
.endobj lbl_80495F8C
.balign 4
.obj lbl_80495FB0, local
	.asciz "user/Ebisawa/title/title.szs"
.endobj lbl_80495FB0
.balign 4
.obj lbl_80495FD0, local
	.asciz "ebiP2Title.cpp"
.endobj lbl_80495FD0
.balign 4
.obj lbl_80495FE0, local
	.asciz "P2Assert"
.endobj lbl_80495FE0
.balign 4
.obj lbl_80495FEC, local
	.asciz "param/param_title.txt"
.endobj lbl_80495FEC
.balign 4
.obj lbl_80496004, local
	.asciz "logo/coordinate_eng"
.endobj lbl_80496004
.balign 4
.obj lbl_80496018, local
	.asciz "logo/coordinate_Nintendo"
.endobj lbl_80496018
.balign 4
.obj lbl_80496034, local
	.asciz "logo/coordinate_jpn"
.endobj lbl_80496034
.balign 4
.obj lbl_80496048, local
	.asciz "param/param_light_spring.txt"
.endobj lbl_80496048
.balign 4
.obj lbl_80496068, local
	.asciz "param/param_fog_spring.txt"
.endobj lbl_80496068
.balign 4
.obj lbl_80496084, local
	.asciz "param/param_light_summer.txt"
.endobj lbl_80496084
.balign 4
.obj lbl_804960A4, local
	.asciz "param/param_fog_summer.txt"
.endobj lbl_804960A4
.balign 4
.obj lbl_804960C0, local
	.asciz "param/param_light_autumn.txt"
.endobj lbl_804960C0
.balign 4
.obj lbl_804960E0, local
	.asciz "param/param_fog_autumn.txt"
.endobj lbl_804960E0
.balign 4
.obj lbl_804960FC, local
	.asciz "param/param_light_winter.txt"
.endobj lbl_804960FC
.balign 4
.obj lbl_8049611C, local
	.asciz "param/param_fog_winter.txt"
.endobj lbl_8049611C
.balign 4
.obj lbl_80496138, local
	.asciz "user/Ebisawa/title/bg_spring.szs"
.endobj lbl_80496138
.balign 4
.obj lbl_8049615C, local
	.asciz "user/Ebisawa/title/bg_summer.szs"
.endobj lbl_8049615C
.balign 4
.obj lbl_80496180, local
	.asciz "user/Ebisawa/title/bg_autumn.szs"
.endobj lbl_80496180
.balign 4
.obj lbl_804961A4, local
	.asciz "user/Ebisawa/title/bg_winter.szs"
.endobj lbl_804961A4
.balign 4
.obj lbl_804961C8, local
	.asciz "# %d/%d\r\n"
.endobj lbl_804961C8

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj lbl_804E7834, local
	.4byte .L_803C0214
	.4byte .L_803C046C
	.4byte .L_803C02F4
	.4byte .L_803C03B8
	.4byte .L_803C0218
	.4byte .L_803C026C
	.4byte .L_803C02C0
.endobj lbl_804E7834
.obj __vt__Q33ebi5title9TTitleMgr, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q33ebi5title9TTitleMgrFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q33ebi5title9TTitleMgrFv"
.endobj __vt__Q33ebi5title9TTitleMgr
.obj __vt__Q43ebi5title6Pikmin13TBoidParamMgr, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q43ebi5title6Pikmin13TBoidParamMgrFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q43ebi5title6Pikmin13TBoidParamMgr
.obj __vt__Q43ebi5title6Pikmin4TMgr, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q43ebi5title6Pikmin4TMgrFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q43ebi5title6Pikmin4TMgr
.obj __vt__Q43ebi5title6Kogane4TMgr, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q43ebi5title6Kogane4TMgrFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q43ebi5title6Kogane4TMgr
.obj __vt__Q43ebi5title6Chappy4TMgr, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q43ebi5title6Chappy4TMgrFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q43ebi5title6Chappy4TMgr
.obj __vt__Q33ebi5title9TCoordMgr, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q33ebi5title9TCoordMgrFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q33ebi5title9TCoordMgr
.obj __vt__8Viewport, weak
	.4byte 0
	.4byte 0
	.4byte __dt__8ViewportFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__8Viewport
.obj __vt__6FogMgr, weak
	.4byte 0
	.4byte 0
	.4byte __dt__6FogMgrFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__6FogMgr
.obj __vt__Q33ebi5title12TTitleFogMgr, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q33ebi5title12TTitleFogMgrFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q33ebi5title12TTitleFogMgr
.obj __vt__Q33ebi5title15TTitleCameraMgr, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q33ebi5title15TTitleCameraMgrFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__17Container<5Plane>FPv"
	.4byte "getNext__22ArrayContainer<5Plane>FPv"
	.4byte "getStart__22ArrayContainer<5Plane>Fv"
	.4byte "getEnd__22ArrayContainer<5Plane>Fv"
	.4byte "get__22ArrayContainer<5Plane>FPv"
	.4byte "getAt__22ArrayContainer<5Plane>Fi"
	.4byte "getTo__22ArrayContainer<5Plane>Fv"
	.4byte writeObject__9CullPlaneFR6StreamR5Plane
	.4byte readObject__9CullPlaneFR6StreamR5Plane
	.4byte "write__22ArrayContainer<5Plane>FR6Stream"
	.4byte read__Q33ebi5title15TTitleCameraMgrFR6Stream
	.4byte "alloc__22ArrayContainer<5Plane>Fi"
	.4byte "addOne__22ArrayContainer<5Plane>FR5Plane"
	.4byte "setArray__22ArrayContainer<5Plane>FP5Planei"
	.4byte getViewMatrix__6CameraFb
	.4byte getPosition__6CameraFv
	.4byte updatePlanes__6CameraFv
	.4byte updateScreenConstants__6CameraFv
	.4byte getLookAtPosition___12LookAtCameraFv
	.4byte getTargetDistance__6CameraFv
	.4byte getPositionPtr__6CameraFv
	.4byte on_getPositionPtr__12LookAtCameraFv
	.4byte getSoundPositionPtr__6CameraFv
	.4byte getSoundMatrixPtr__6CameraFv
	.4byte isSpecialCamera__6CameraFv
	.4byte updateMatrix__12LookAtCameraFv
	.4byte doUpdate__6CameraFv
	.4byte startVibration__12LookAtCameraFi
.endobj __vt__Q33ebi5title15TTitleCameraMgr
.obj __vt__Q33ebi5title11TBlackPlane, weak
	.4byte 0
	.4byte 0
	.4byte getCreatureType__Q33ebi5title8TObjBaseFv
	.4byte isCalc__Q33ebi5title8TObjBaseFv
.endobj __vt__Q33ebi5title11TBlackPlane
.obj __vt__Q33ebi5title12TBGEnemyBase, weak
	.4byte 0
	.4byte 0
	.4byte getCreatureType__Q33ebi5title8TObjBaseFv
	.4byte isCalc__Q33ebi5title8TObjBaseFv
.endobj __vt__Q33ebi5title12TBGEnemyBase
.obj __vt__12J3DFrameCtrl, weak
	.4byte 0
	.4byte 0
	.4byte __dt__12J3DFrameCtrlFv
.endobj __vt__12J3DFrameCtrl
.obj __vt__Q33ebi5title8TMapBase, weak
	.4byte 0
	.4byte 0
	.4byte getCreatureType__Q33ebi5title8TObjBaseFv
	.4byte isCalc__Q33ebi5title8TObjBaseFv
.endobj __vt__Q33ebi5title8TMapBase
.obj __vt__Q33ebi5title8TObjBase, weak
	.4byte 0
	.4byte 0
	.4byte getCreatureType__Q33ebi5title8TObjBaseFv
	.4byte isCalc__Q33ebi5title8TObjBaseFv
.endobj __vt__Q33ebi5title8TObjBase

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj titleMgr__Q23ebi5title, global
	.skip 0x4
.endobj titleMgr__Q23ebi5title
.obj _instance__Q33ebi5title9TTitleMgr, global
	.skip 0x4
.endobj _instance__Q33ebi5title9TTitleMgr
.obj boidCalcTimer$5256, local
	.skip 0x4
.endobj boidCalcTimer$5256
.obj init$5257, local
	.skip 0x1
.endobj init$5257

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051F6F8, local
	.float 0.0
.endobj lbl_8051F6F8
.obj lbl_8051F6FC, local
	.float -1.0
.endobj lbl_8051F6FC
.obj lbl_8051F700, local
	.float 1.0
.endobj lbl_8051F700
.obj lbl_8051F704, local
	.float 15.0
.endobj lbl_8051F704
.obj lbl_8051F708, local
	.float -1000.0
.endobj lbl_8051F708
.obj lbl_8051F70C, local
	.float 10000.0
.endobj lbl_8051F70C
.balign 4
.obj lbl_8051F710, local
	.asciz "Fovy"
.endobj lbl_8051F710
.balign 4
.obj lbl_8051F718, local
	.float 35.0
.endobj lbl_8051F718
.obj lbl_8051F71C, local
	.float 180.0
.endobj lbl_8051F71C
.balign 4
.obj lbl_8051F720, local
	.asciz "start z"
.endobj lbl_8051F720
.balign 4
.obj lbl_8051F728, local
	.float 100.0
.endobj lbl_8051F728
.obj lbl_8051F72C, local
	.float 1024.0
.endobj lbl_8051F72C
.balign 4
.obj lbl_8051F730, local
	.asciz "end z"
.endobj lbl_8051F730
.balign 4
.obj lbl_8051F738, local
	.float 2000.0
.endobj lbl_8051F738
.obj lbl_8051F73C, local
	.float 12800.0
.endobj lbl_8051F73C
.balign 4
.obj lbl_8051F740, local # Shift-JIS
	.4byte 0x90468140
	.4byte 0x52000000
.endobj lbl_8051F740
.balign 4
.obj lbl_8051F748, local # Shift-JIS
	.4byte 0x90468140
	.4byte 0x47000000
.endobj lbl_8051F748
.balign 4
.obj lbl_8051F750, local # Shift-JIS
	.4byte 0x90468140
	.4byte 0x42000000
.endobj lbl_8051F750
.balign 4
.obj lbl_8051F758, local # Shift-JIS
	.4byte 0x90468140
	.4byte 0x41000000
.endobj lbl_8051F758
.balign 4
.obj lbl_8051F760, local
	.float -400.0
.endobj lbl_8051F760
.obj lbl_8051F764, local
	.float -2000.0
.endobj lbl_8051F764
.obj lbl_8051F768, local
	.float 400.0
.endobj lbl_8051F768
.obj lbl_8051F76C, local
	.float -250.0
.endobj lbl_8051F76C
.obj lbl_8051F770, local
	.float 340.0
.endobj lbl_8051F770
.obj lbl_8051F774, local
	.float -640.0
.endobj lbl_8051F774
.obj lbl_8051F778, local
	.float 640.0
.endobj lbl_8051F778
.obj lbl_8051F77C, local
	.float -480.0
.endobj lbl_8051F77C
.obj lbl_8051F780, local
	.float 480.0
.endobj lbl_8051F780
.obj lbl_8051F784, local
	.float 500.0
.endobj lbl_8051F784
.obj lbl_8051F788, local
	.float 1000.0
.endobj lbl_8051F788
.obj lbl_8051F78C, local
	.float 600.0
.endobj lbl_8051F78C
.obj lbl_8051F790, local
	.float 30.0
.endobj lbl_8051F790
.obj lbl_8051F794, local
	.float 8.0
.endobj lbl_8051F794
.obj lbl_8051F798, local
	.float 3.0
.endobj lbl_8051F798
.obj lbl_8051F79C, local
	.float 60.0
.endobj lbl_8051F79C
.obj lbl_8051F7A0, local
	.float 10.0
.endobj lbl_8051F7A0
.obj lbl_8051F7A4, local
	.float 2.0
.endobj lbl_8051F7A4
.obj lbl_8051F7A8, local
	.float 3.5
.endobj lbl_8051F7A8
.balign 4
.obj lbl_8051F7AC, local # Shift-JIS
	.4byte 0x8CFC82AB
	.4byte 0x58000000
.endobj lbl_8051F7AC
.balign 4
.obj lbl_8051F7B4, local # Shift-JIS
	.4byte 0x8CFC82AB
	.4byte 0x59000000
.endobj lbl_8051F7B4
.balign 4
.obj lbl_8051F7BC, local # Shift-JIS
	.4byte 0x8CFC82AB
	.4byte 0x5A000000
.endobj lbl_8051F7BC
.balign 4
.obj lbl_8051F7C4, local # Shift-JIS
	.4byte 0x8CF591F2
	.4byte 0x00000000
.endobj lbl_8051F7C4
.balign 4
.obj lbl_8051F7CC, local
	.float 64.0
.endobj lbl_8051F7CC
.obj lbl_8051F7D0, local
	.float 512.0
.endobj lbl_8051F7D0
.balign 4
.obj lbl_8051F7D4, local # Shift-JIS
	.4byte 0x88CA9275
	.4byte 0x58000000
.endobj lbl_8051F7D4
.balign 4
.obj lbl_8051F7DC, local
	.float -10000.0
.endobj lbl_8051F7DC
.balign 4
.obj lbl_8051F7E0, local # Shift-JIS
	.4byte 0x88CA9275
	.4byte 0x59000000
.endobj lbl_8051F7E0
.balign 4
.obj lbl_8051F7E8, local
	.float 50000.0
.endobj lbl_8051F7E8
.balign 4
.obj lbl_8051F7EC, local # Shift-JIS
	.4byte 0x88CA9275
	.4byte 0x5A000000
.endobj lbl_8051F7EC
.balign 4
.obj lbl_8051F7F4, local
	.float 25.0
.endobj lbl_8051F7F4
.balign 8
.obj lbl_8051F7F8, local
	.8byte 0x4330000000000000
.endobj lbl_8051F7F8
.obj lbl_8051F800, local
	.float 32767.0
.endobj lbl_8051F800
.obj lbl_8051F804, local
	.float -0.7853982
.endobj lbl_8051F804
.obj lbl_8051F808, local
	.float 4.712389
.endobj lbl_8051F808
.obj lbl_8051F80C, local
	.float -325.9493
.endobj lbl_8051F80C
.obj lbl_8051F810, local
	.float 325.9493
.endobj lbl_8051F810
.balign 8
.obj lbl_8051F818, local
	.8byte 0x4330000080000000
.endobj lbl_8051F818
.balign 4
.obj lbl_8051F820, local
	.asciz ""
.endobj lbl_8051F820
.balign 4
.obj lbl_8051F824, local # tau
	.float 6.2831855
.endobj lbl_8051F824
.obj lbl_8051F828, local
	.float 0.2
.endobj lbl_8051F828
.obj lbl_8051F82C, local
	.float 0.4
.endobj lbl_8051F82C
.obj lbl_8051F830, local
	.float 0.6
.endobj lbl_8051F830

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q33ebi5title9TTitleMgrFv, global
/* 803BCD18 003B9C58  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BCD1C 003B9C5C  7C 08 02 A6 */	mflr r0
/* 803BCD20 003B9C60  3C 80 80 4F */	lis r4, __vt__5CNode@ha
/* 803BCD24 003B9C64  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BCD28 003B9C68  38 04 B5 28 */	addi r0, r4, __vt__5CNode@l
/* 803BCD2C 003B9C6C  38 80 00 00 */	li r4, 0
/* 803BCD30 003B9C70  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803BCD34 003B9C74  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803BCD38 003B9C78  7C 7E 1B 78 */	mr r30, r3
/* 803BCD3C 003B9C7C  3C 60 80 49 */	lis r3, lbl_80495C58@ha
/* 803BCD40 003B9C80  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803BCD44 003B9C84  3B E3 5C 58 */	addi r31, r3, lbl_80495C58@l
/* 803BCD48 003B9C88  38 7E 00 18 */	addi r3, r30, 0x18
/* 803BCD4C 003B9C8C  90 1E 00 00 */	stw r0, 0(r30)
/* 803BCD50 003B9C90  38 1F 00 18 */	addi r0, r31, 0x18
/* 803BCD54 003B9C94  90 9E 00 10 */	stw r4, 0x10(r30)
/* 803BCD58 003B9C98  90 9E 00 0C */	stw r4, 0xc(r30)
/* 803BCD5C 003B9C9C  90 9E 00 08 */	stw r4, 8(r30)
/* 803BCD60 003B9CA0  90 9E 00 04 */	stw r4, 4(r30)
/* 803BCD64 003B9CA4  90 1E 00 14 */	stw r0, 0x14(r30)
/* 803BCD68 003B9CA8  4B C6 02 65 */	bl __ct__11JKRDisposerFv
/* 803BCD6C 003B9CAC  3C 60 80 4E */	lis r3, __vt__Q33ebi5title9TTitleMgr@ha
/* 803BCD70 003B9CB0  3C A0 80 4E */	lis r5, __vt__Q33ebi5title8TObjBase@ha
/* 803BCD74 003B9CB4  38 63 78 50 */	addi r3, r3, __vt__Q33ebi5title9TTitleMgr@l
/* 803BCD78 003B9CB8  3C 80 80 4E */	lis r4, __vt__Q33ebi5title8TMapBase@ha
/* 803BCD7C 003B9CBC  90 7E 00 00 */	stw r3, 0(r30)
/* 803BCD80 003B9CC0  38 C3 00 10 */	addi r6, r3, 0x10
/* 803BCD84 003B9CC4  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803BCD88 003B9CC8  38 05 79 A8 */	addi r0, r5, __vt__Q33ebi5title8TObjBase@l
/* 803BCD8C 003B9CCC  90 DE 00 18 */	stw r6, 0x18(r30)
/* 803BCD90 003B9CD0  38 C0 00 00 */	li r6, 0
/* 803BCD94 003B9CD4  C0 42 13 98 */	lfs f2, lbl_8051F6F8@sda21(r2)
/* 803BCD98 003B9CD8  38 A4 79 98 */	addi r5, r4, __vt__Q33ebi5title8TMapBase@l
/* 803BCD9C 003B9CDC  90 1E 00 30 */	stw r0, 0x30(r30)
/* 803BCDA0 003B9CE0  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803BCDA4 003B9CE4  C0 22 13 9C */	lfs f1, lbl_8051F6FC@sda21(r2)
/* 803BCDA8 003B9CE8  38 7E 00 64 */	addi r3, r30, 0x64
/* 803BCDAC 003B9CEC  D0 5E 00 34 */	stfs f2, 0x34(r30)
/* 803BCDB0 003B9CF0  38 80 00 00 */	li r4, 0
/* 803BCDB4 003B9CF4  C0 02 13 A0 */	lfs f0, lbl_8051F700@sda21(r2)
/* 803BCDB8 003B9CF8  D0 5E 00 38 */	stfs f2, 0x38(r30)
/* 803BCDBC 003B9CFC  D0 5E 00 3C */	stfs f2, 0x3c(r30)
/* 803BCDC0 003B9D00  D0 3E 00 40 */	stfs f1, 0x40(r30)
/* 803BCDC4 003B9D04  D0 5E 00 44 */	stfs f2, 0x44(r30)
/* 803BCDC8 003B9D08  D0 1E 00 48 */	stfs f0, 0x48(r30)
/* 803BCDCC 003B9D0C  D0 5E 00 4C */	stfs f2, 0x4c(r30)
/* 803BCDD0 003B9D10  D0 5E 00 50 */	stfs f2, 0x50(r30)
/* 803BCDD4 003B9D14  D0 5E 00 54 */	stfs f2, 0x54(r30)
/* 803BCDD8 003B9D18  90 DE 00 58 */	stw r6, 0x58(r30)
/* 803BCDDC 003B9D1C  90 BE 00 30 */	stw r5, 0x30(r30)
/* 803BCDE0 003B9D20  90 1E 00 64 */	stw r0, 0x64(r30)
/* 803BCDE4 003B9D24  4B CA A8 95 */	bl init__12J3DFrameCtrlFs
/* 803BCDE8 003B9D28  3C 80 80 4E */	lis r4, __vt__12J3DFrameCtrl@ha
/* 803BCDEC 003B9D2C  38 7E 00 80 */	addi r3, r30, 0x80
/* 803BCDF0 003B9D30  38 04 79 8C */	addi r0, r4, __vt__12J3DFrameCtrl@l
/* 803BCDF4 003B9D34  38 80 00 00 */	li r4, 0
/* 803BCDF8 003B9D38  90 1E 00 80 */	stw r0, 0x80(r30)
/* 803BCDFC 003B9D3C  4B CA A8 7D */	bl init__12J3DFrameCtrlFs
/* 803BCE00 003B9D40  38 00 00 00 */	li r0, 0
/* 803BCE04 003B9D44  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BCE08 003B9D48  90 1E 00 9C */	stw r0, 0x9c(r30)
/* 803BCE0C 003B9D4C  90 1E 00 A0 */	stw r0, 0xa0(r30)
/* 803BCE10 003B9D50  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 803BCE14 003B9D54  90 1E 00 60 */	stw r0, 0x60(r30)
/* 803BCE18 003B9D58  90 1E 00 78 */	stw r0, 0x78(r30)
/* 803BCE1C 003B9D5C  90 1E 00 7C */	stw r0, 0x7c(r30)
/* 803BCE20 003B9D60  90 1E 00 94 */	stw r0, 0x94(r30)
/* 803BCE24 003B9D64  90 1E 00 98 */	stw r0, 0x98(r30)
/* 803BCE28 003B9D68  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BCE2C 003B9D6C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803BCE30 003B9D70  EC 21 00 24 */	fdivs f1, f1, f0
/* 803BCE34 003B9D74  4B D0 4D 19 */	bl __cvt_fp2unsigned
/* 803BCE38 003B9D78  90 7E 00 9C */	stw r3, 0x9c(r30)
/* 803BCE3C 003B9D7C  3C C0 80 4E */	lis r6, __vt__Q33ebi5title8TObjBase@ha
/* 803BCE40 003B9D80  3C A0 80 4E */	lis r5, __vt__Q33ebi5title12TBGEnemyBase@ha
/* 803BCE44 003B9D84  3C 80 80 4E */	lis r4, __vt__12J3DFrameCtrl@ha
/* 803BCE48 003B9D88  90 7E 00 A0 */	stw r3, 0xa0(r30)
/* 803BCE4C 003B9D8C  38 06 79 A8 */	addi r0, r6, __vt__Q33ebi5title8TObjBase@l
/* 803BCE50 003B9D90  C0 42 13 98 */	lfs f2, lbl_8051F6F8@sda21(r2)
/* 803BCE54 003B9D94  38 C0 00 00 */	li r6, 0
/* 803BCE58 003B9D98  90 1E 00 A4 */	stw r0, 0xa4(r30)
/* 803BCE5C 003B9D9C  38 A5 79 7C */	addi r5, r5, __vt__Q33ebi5title12TBGEnemyBase@l
/* 803BCE60 003B9DA0  C0 22 13 9C */	lfs f1, lbl_8051F6FC@sda21(r2)
/* 803BCE64 003B9DA4  38 04 79 8C */	addi r0, r4, __vt__12J3DFrameCtrl@l
/* 803BCE68 003B9DA8  D0 5E 00 A8 */	stfs f2, 0xa8(r30)
/* 803BCE6C 003B9DAC  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 803BCE70 003B9DB0  C0 02 13 A0 */	lfs f0, lbl_8051F700@sda21(r2)
/* 803BCE74 003B9DB4  38 80 00 00 */	li r4, 0
/* 803BCE78 003B9DB8  D0 5E 00 AC */	stfs f2, 0xac(r30)
/* 803BCE7C 003B9DBC  D0 5E 00 B0 */	stfs f2, 0xb0(r30)
/* 803BCE80 003B9DC0  D0 3E 00 B4 */	stfs f1, 0xb4(r30)
/* 803BCE84 003B9DC4  D0 5E 00 B8 */	stfs f2, 0xb8(r30)
/* 803BCE88 003B9DC8  D0 1E 00 BC */	stfs f0, 0xbc(r30)
/* 803BCE8C 003B9DCC  D0 5E 00 C0 */	stfs f2, 0xc0(r30)
/* 803BCE90 003B9DD0  D0 5E 00 C4 */	stfs f2, 0xc4(r30)
/* 803BCE94 003B9DD4  D0 5E 00 C8 */	stfs f2, 0xc8(r30)
/* 803BCE98 003B9DD8  90 DE 00 CC */	stw r6, 0xcc(r30)
/* 803BCE9C 003B9DDC  90 BE 00 A4 */	stw r5, 0xa4(r30)
/* 803BCEA0 003B9DE0  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 803BCEA4 003B9DE4  4B CA A7 D5 */	bl init__12J3DFrameCtrlFs
/* 803BCEA8 003B9DE8  38 E0 00 00 */	li r7, 0
/* 803BCEAC 003B9DEC  3C A0 80 4E */	lis r5, __vt__Q33ebi5title8TObjBase@ha
/* 803BCEB0 003B9DF0  90 FE 00 D0 */	stw r7, 0xd0(r30)
/* 803BCEB4 003B9DF4  3C 80 80 4E */	lis r4, __vt__Q33ebi5title11TBlackPlane@ha
/* 803BCEB8 003B9DF8  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803BCEBC 003B9DFC  38 C5 79 A8 */	addi r6, r5, __vt__Q33ebi5title8TObjBase@l
/* 803BCEC0 003B9E00  90 FE 00 E8 */	stw r7, 0xe8(r30)
/* 803BCEC4 003B9E04  38 A4 79 6C */	addi r5, r4, __vt__Q33ebi5title11TBlackPlane@l
/* 803BCEC8 003B9E08  C0 42 13 98 */	lfs f2, lbl_8051F6F8@sda21(r2)
/* 803BCECC 003B9E0C  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803BCED0 003B9E10  90 FE 00 EC */	stw r7, 0xec(r30)
/* 803BCED4 003B9E14  38 7E 01 20 */	addi r3, r30, 0x120
/* 803BCED8 003B9E18  C0 22 13 9C */	lfs f1, lbl_8051F6FC@sda21(r2)
/* 803BCEDC 003B9E1C  38 80 00 00 */	li r4, 0
/* 803BCEE0 003B9E20  90 DE 00 F0 */	stw r6, 0xf0(r30)
/* 803BCEE4 003B9E24  C0 02 13 A0 */	lfs f0, lbl_8051F700@sda21(r2)
/* 803BCEE8 003B9E28  D0 5E 00 F4 */	stfs f2, 0xf4(r30)
/* 803BCEEC 003B9E2C  D0 5E 00 F8 */	stfs f2, 0xf8(r30)
/* 803BCEF0 003B9E30  D0 5E 00 FC */	stfs f2, 0xfc(r30)
/* 803BCEF4 003B9E34  D0 3E 01 00 */	stfs f1, 0x100(r30)
/* 803BCEF8 003B9E38  D0 5E 01 04 */	stfs f2, 0x104(r30)
/* 803BCEFC 003B9E3C  D0 1E 01 08 */	stfs f0, 0x108(r30)
/* 803BCF00 003B9E40  D0 5E 01 0C */	stfs f2, 0x10c(r30)
/* 803BCF04 003B9E44  D0 5E 01 10 */	stfs f2, 0x110(r30)
/* 803BCF08 003B9E48  D0 5E 01 14 */	stfs f2, 0x114(r30)
/* 803BCF0C 003B9E4C  90 FE 01 18 */	stw r7, 0x118(r30)
/* 803BCF10 003B9E50  90 BE 00 F0 */	stw r5, 0xf0(r30)
/* 803BCF14 003B9E54  90 1E 01 20 */	stw r0, 0x120(r30)
/* 803BCF18 003B9E58  4B CA A7 61 */	bl init__12J3DFrameCtrlFs
/* 803BCF1C 003B9E5C  3C 80 80 4E */	lis r4, __vt__12J3DFrameCtrl@ha
/* 803BCF20 003B9E60  38 7E 01 3C */	addi r3, r30, 0x13c
/* 803BCF24 003B9E64  38 04 79 8C */	addi r0, r4, __vt__12J3DFrameCtrl@l
/* 803BCF28 003B9E68  38 80 00 00 */	li r4, 0
/* 803BCF2C 003B9E6C  90 1E 01 3C */	stw r0, 0x13c(r30)
/* 803BCF30 003B9E70  4B CA A7 49 */	bl init__12J3DFrameCtrlFs
/* 803BCF34 003B9E74  38 00 00 00 */	li r0, 0
/* 803BCF38 003B9E78  38 7E 01 54 */	addi r3, r30, 0x154
/* 803BCF3C 003B9E7C  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 803BCF40 003B9E80  90 1E 01 34 */	stw r0, 0x134(r30)
/* 803BCF44 003B9E84  90 1E 01 38 */	stw r0, 0x138(r30)
/* 803BCF48 003B9E88  90 1E 01 50 */	stw r0, 0x150(r30)
/* 803BCF4C 003B9E8C  48 02 71 75 */	bl __ct__Q43ebi5title6Pikmin4TMgrFv
/* 803BCF50 003B9E90  38 7E 0A E4 */	addi r3, r30, 0xae4
/* 803BCF54 003B9E94  48 02 A4 05 */	bl __ct__Q43ebi5title6Kogane4TMgrFv
/* 803BCF58 003B9E98  38 7E 0C F4 */	addi r3, r30, 0xcf4
/* 803BCF5C 003B9E9C  48 02 B6 7D */	bl __ct__Q43ebi5title6Chappy4TMgrFv
/* 803BCF60 003B9EA0  38 00 00 00 */	li r0, 0
/* 803BCF64 003B9EA4  3C 60 80 38 */	lis r3, "__ct__10Vector2<f>Fv"@ha
/* 803BCF68 003B9EA8  90 1E 0F 60 */	stw r0, 0xf60(r30)
/* 803BCF6C 003B9EAC  38 83 D0 B8 */	addi r4, r3, "__ct__10Vector2<f>Fv"@l
/* 803BCF70 003B9EB0  38 7E 0F 84 */	addi r3, r30, 0xf84
/* 803BCF74 003B9EB4  38 A0 00 00 */	li r5, 0
/* 803BCF78 003B9EB8  90 1E 0F 64 */	stw r0, 0xf64(r30)
/* 803BCF7C 003B9EBC  38 C0 00 08 */	li r6, 8
/* 803BCF80 003B9EC0  38 E0 01 F4 */	li r7, 0x1f4
/* 803BCF84 003B9EC4  90 1E 0F 68 */	stw r0, 0xf68(r30)
/* 803BCF88 003B9EC8  90 1E 0F 6C */	stw r0, 0xf6c(r30)
/* 803BCF8C 003B9ECC  90 1E 0F 74 */	stw r0, 0xf74(r30)
/* 803BCF90 003B9ED0  90 1E 0F 78 */	stw r0, 0xf78(r30)
/* 803BCF94 003B9ED4  90 1E 0F 7C */	stw r0, 0xf7c(r30)
/* 803BCF98 003B9ED8  90 1E 0F 80 */	stw r0, 0xf80(r30)
/* 803BCF9C 003B9EDC  4B D0 48 A1 */	bl __construct_array
/* 803BCFA0 003B9EE0  3C 60 80 3E */	lis r3, __ct__Q33ebi5title9TCoordMgrFv@ha
/* 803BCFA4 003B9EE4  3C A0 80 3C */	lis r5, __dt__Q33ebi5title9TCoordMgrFv@ha
/* 803BCFA8 003B9EE8  38 83 39 6C */	addi r4, r3, __ct__Q33ebi5title9TCoordMgrFv@l
/* 803BCFAC 003B9EEC  38 C0 10 7C */	li r6, 0x107c
/* 803BCFB0 003B9EF0  38 7E 1F 24 */	addi r3, r30, 0x1f24
/* 803BCFB4 003B9EF4  38 A5 E2 3C */	addi r5, r5, __dt__Q33ebi5title9TCoordMgrFv@l
/* 803BCFB8 003B9EF8  38 E0 00 02 */	li r7, 2
/* 803BCFBC 003B9EFC  4B D0 48 81 */	bl __construct_array
/* 803BCFC0 003B9F00  38 7E 40 20 */	addi r3, r30, 0x4020
/* 803BCFC4 003B9F04  48 06 80 D9 */	bl __ct__8ViewportFv
/* 803BCFC8 003B9F08  3B BE 40 78 */	addi r29, r30, 0x4078
/* 803BCFCC 003B9F0C  7F A3 EB 78 */	mr r3, r29
/* 803BCFD0 003B9F10  48 05 E4 C9 */	bl __ct__12LookAtCameraFv
/* 803BCFD4 003B9F14  3C 60 80 4E */	lis r3, __vt__Q33ebi5title15TTitleCameraMgr@ha
/* 803BCFD8 003B9F18  3C A0 63 61 */	lis r5, 0x63616D31@ha
/* 803BCFDC 003B9F1C  38 03 78 EC */	addi r0, r3, __vt__Q33ebi5title15TTitleCameraMgr@l
/* 803BCFE0 003B9F20  38 C0 00 00 */	li r6, 0
/* 803BCFE4 003B9F24  90 1D 00 00 */	stw r0, 0(r29)
/* 803BCFE8 003B9F28  38 7D 01 F4 */	addi r3, r29, 0x1f4
/* 803BCFEC 003B9F2C  38 1F 00 24 */	addi r0, r31, 0x24
/* 803BCFF0 003B9F30  38 9D 01 98 */	addi r4, r29, 0x198
/* 803BCFF4 003B9F34  90 7D 01 98 */	stw r3, 0x198(r29)
/* 803BCFF8 003B9F38  38 64 00 0C */	addi r3, r4, 0xc
/* 803BCFFC 003B9F3C  38 A5 6D 31 */	addi r5, r5, 0x63616D31@l
/* 803BD000 003B9F40  90 DD 01 9C */	stw r6, 0x19c(r29)
/* 803BD004 003B9F44  38 DF 00 3C */	addi r6, r31, 0x3c
/* 803BD008 003B9F48  90 1D 01 A0 */	stw r0, 0x1a0(r29)
/* 803BD00C 003B9F4C  48 05 66 4D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD010 003B9F50  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD014 003B9F54  3C A0 63 61 */	lis r5, 0x63616D34@ha
/* 803BD018 003B9F58  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD01C 003B9F5C  38 9D 01 98 */	addi r4, r29, 0x198
/* 803BD020 003B9F60  90 1D 01 A4 */	stw r0, 0x1a4(r29)
/* 803BD024 003B9F64  38 64 00 34 */	addi r3, r4, 0x34
/* 803BD028 003B9F68  C0 02 13 A4 */	lfs f0, lbl_8051F704@sda21(r2)
/* 803BD02C 003B9F6C  38 A5 6D 34 */	addi r5, r5, 0x63616D34@l
/* 803BD030 003B9F70  C0 22 13 A8 */	lfs f1, lbl_8051F708@sda21(r2)
/* 803BD034 003B9F74  38 C2 13 B0 */	addi r6, r2, lbl_8051F710@sda21
/* 803BD038 003B9F78  D0 1D 01 BC */	stfs f0, 0x1bc(r29)
/* 803BD03C 003B9F7C  C0 02 13 AC */	lfs f0, lbl_8051F70C@sda21(r2)
/* 803BD040 003B9F80  D0 3D 01 C4 */	stfs f1, 0x1c4(r29)
/* 803BD044 003B9F84  D0 1D 01 C8 */	stfs f0, 0x1c8(r29)
/* 803BD048 003B9F88  48 05 66 11 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD04C 003B9F8C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD050 003B9F90  C0 42 13 B8 */	lfs f2, lbl_8051F718@sda21(r2)
/* 803BD054 003B9F94  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD058 003B9F98  C0 22 13 A0 */	lfs f1, lbl_8051F700@sda21(r2)
/* 803BD05C 003B9F9C  90 1D 01 CC */	stw r0, 0x1cc(r29)
/* 803BD060 003B9FA0  38 7E 42 70 */	addi r3, r30, 0x4270
/* 803BD064 003B9FA4  C0 02 13 BC */	lfs f0, lbl_8051F71C@sda21(r2)
/* 803BD068 003B9FA8  D0 5D 01 E4 */	stfs f2, 0x1e4(r29)
/* 803BD06C 003B9FAC  D0 3D 01 EC */	stfs f1, 0x1ec(r29)
/* 803BD070 003B9FB0  D0 1D 01 F0 */	stfs f0, 0x1f0(r29)
/* 803BD074 003B9FB4  48 00 08 9D */	bl __ct__Q33ebi5title14TTitleLightMgrFv
/* 803BD078 003B9FB8  3B BE 47 88 */	addi r29, r30, 0x4788
/* 803BD07C 003B9FBC  7F A3 EB 78 */	mr r3, r29
/* 803BD080 003B9FC0  48 07 58 C9 */	bl __ct__6FogMgrFv
/* 803BD084 003B9FC4  3C 60 80 4E */	lis r3, __vt__Q33ebi5title12TTitleFogMgr@ha
/* 803BD088 003B9FC8  3C A0 66 67 */	lis r5, 0x66673130@ha
/* 803BD08C 003B9FCC  38 03 78 DC */	addi r0, r3, __vt__Q33ebi5title12TTitleFogMgr@l
/* 803BD090 003B9FD0  38 C0 00 00 */	li r6, 0
/* 803BD094 003B9FD4  90 1D 00 00 */	stw r0, 0(r29)
/* 803BD098 003B9FD8  38 7D 01 40 */	addi r3, r29, 0x140
/* 803BD09C 003B9FDC  38 1F 00 4C */	addi r0, r31, 0x4c
/* 803BD0A0 003B9FE0  38 9D 00 28 */	addi r4, r29, 0x28
/* 803BD0A4 003B9FE4  90 7D 00 28 */	stw r3, 0x28(r29)
/* 803BD0A8 003B9FE8  38 64 00 0C */	addi r3, r4, 0xc
/* 803BD0AC 003B9FEC  38 A5 31 30 */	addi r5, r5, 0x66673130@l
/* 803BD0B0 003B9FF0  90 DD 00 2C */	stw r6, 0x2c(r29)
/* 803BD0B4 003B9FF4  38 DF 00 60 */	addi r6, r31, 0x60
/* 803BD0B8 003B9FF8  90 1D 00 30 */	stw r0, 0x30(r29)
/* 803BD0BC 003B9FFC  48 05 65 9D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD0C0 003BA000  3C 60 80 4B */	lis r3, "__vt__7Parm<b>"@ha
/* 803BD0C4 003BA004  3C A0 66 67 */	lis r5, 0x66673030@ha
/* 803BD0C8 003BA008  38 03 00 80 */	addi r0, r3, "__vt__7Parm<b>"@l
/* 803BD0CC 003BA00C  38 9D 00 28 */	addi r4, r29, 0x28
/* 803BD0D0 003BA010  90 1D 00 34 */	stw r0, 0x34(r29)
/* 803BD0D4 003BA014  38 E0 00 01 */	li r7, 1
/* 803BD0D8 003BA018  38 00 00 00 */	li r0, 0
/* 803BD0DC 003BA01C  38 64 00 28 */	addi r3, r4, 0x28
/* 803BD0E0 003BA020  98 FD 00 4C */	stb r7, 0x4c(r29)
/* 803BD0E4 003BA024  38 A5 30 30 */	addi r5, r5, 0x66673030@l
/* 803BD0E8 003BA028  38 C2 13 C0 */	addi r6, r2, lbl_8051F720@sda21
/* 803BD0EC 003BA02C  98 1D 00 4E */	stb r0, 0x4e(r29)
/* 803BD0F0 003BA030  98 FD 00 4F */	stb r7, 0x4f(r29)
/* 803BD0F4 003BA034  48 05 65 65 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD0F8 003BA038  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD0FC 003BA03C  3C A0 66 67 */	lis r5, 0x66673031@ha
/* 803BD100 003BA040  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD104 003BA044  38 9D 00 28 */	addi r4, r29, 0x28
/* 803BD108 003BA048  90 1D 00 50 */	stw r0, 0x50(r29)
/* 803BD10C 003BA04C  38 64 00 50 */	addi r3, r4, 0x50
/* 803BD110 003BA050  C0 02 13 C8 */	lfs f0, lbl_8051F728@sda21(r2)
/* 803BD114 003BA054  38 A5 30 31 */	addi r5, r5, 0x66673031@l
/* 803BD118 003BA058  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD11C 003BA05C  38 C2 13 D0 */	addi r6, r2, lbl_8051F730@sda21
/* 803BD120 003BA060  D0 1D 00 68 */	stfs f0, 0x68(r29)
/* 803BD124 003BA064  C0 02 13 CC */	lfs f0, lbl_8051F72C@sda21(r2)
/* 803BD128 003BA068  D0 3D 00 70 */	stfs f1, 0x70(r29)
/* 803BD12C 003BA06C  D0 1D 00 74 */	stfs f0, 0x74(r29)
/* 803BD130 003BA070  48 05 65 29 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD134 003BA074  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD138 003BA078  3C A0 66 67 */	lis r5, 0x66673032@ha
/* 803BD13C 003BA07C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD140 003BA080  38 9D 00 28 */	addi r4, r29, 0x28
/* 803BD144 003BA084  90 1D 00 78 */	stw r0, 0x78(r29)
/* 803BD148 003BA088  38 64 00 78 */	addi r3, r4, 0x78
/* 803BD14C 003BA08C  C0 02 13 D8 */	lfs f0, lbl_8051F738@sda21(r2)
/* 803BD150 003BA090  38 A5 30 32 */	addi r5, r5, 0x66673032@l
/* 803BD154 003BA094  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD158 003BA098  38 C2 13 E0 */	addi r6, r2, lbl_8051F740@sda21
/* 803BD15C 003BA09C  D0 1D 00 90 */	stfs f0, 0x90(r29)
/* 803BD160 003BA0A0  C0 02 13 DC */	lfs f0, lbl_8051F73C@sda21(r2)
/* 803BD164 003BA0A4  D0 3D 00 98 */	stfs f1, 0x98(r29)
/* 803BD168 003BA0A8  D0 1D 00 9C */	stfs f0, 0x9c(r29)
/* 803BD16C 003BA0AC  48 05 64 ED */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD170 003BA0B0  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BD174 003BA0B4  3C A0 66 67 */	lis r5, 0x66673033@ha
/* 803BD178 003BA0B8  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803BD17C 003BA0BC  38 9D 00 28 */	addi r4, r29, 0x28
/* 803BD180 003BA0C0  90 1D 00 A0 */	stw r0, 0xa0(r29)
/* 803BD184 003BA0C4  38 E0 00 FF */	li r7, 0xff
/* 803BD188 003BA0C8  38 00 00 00 */	li r0, 0
/* 803BD18C 003BA0CC  38 64 00 A0 */	addi r3, r4, 0xa0
/* 803BD190 003BA0D0  90 FD 00 B8 */	stw r7, 0xb8(r29)
/* 803BD194 003BA0D4  38 A5 30 33 */	addi r5, r5, 0x66673033@l
/* 803BD198 003BA0D8  38 C2 13 E8 */	addi r6, r2, lbl_8051F748@sda21
/* 803BD19C 003BA0DC  90 1D 00 C0 */	stw r0, 0xc0(r29)
/* 803BD1A0 003BA0E0  90 FD 00 C4 */	stw r7, 0xc4(r29)
/* 803BD1A4 003BA0E4  48 05 64 B5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD1A8 003BA0E8  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BD1AC 003BA0EC  3C A0 66 67 */	lis r5, 0x66673034@ha
/* 803BD1B0 003BA0F0  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803BD1B4 003BA0F4  38 9D 00 28 */	addi r4, r29, 0x28
/* 803BD1B8 003BA0F8  90 1D 00 C8 */	stw r0, 0xc8(r29)
/* 803BD1BC 003BA0FC  38 E0 00 FF */	li r7, 0xff
/* 803BD1C0 003BA100  38 00 00 00 */	li r0, 0
/* 803BD1C4 003BA104  38 64 00 C8 */	addi r3, r4, 0xc8
/* 803BD1C8 003BA108  90 FD 00 E0 */	stw r7, 0xe0(r29)
/* 803BD1CC 003BA10C  38 A5 30 34 */	addi r5, r5, 0x66673034@l
/* 803BD1D0 003BA110  38 C2 13 F0 */	addi r6, r2, lbl_8051F750@sda21
/* 803BD1D4 003BA114  90 1D 00 E8 */	stw r0, 0xe8(r29)
/* 803BD1D8 003BA118  90 FD 00 EC */	stw r7, 0xec(r29)
/* 803BD1DC 003BA11C  48 05 64 7D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD1E0 003BA120  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BD1E4 003BA124  3C A0 66 67 */	lis r5, 0x66673035@ha
/* 803BD1E8 003BA128  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803BD1EC 003BA12C  38 9D 00 28 */	addi r4, r29, 0x28
/* 803BD1F0 003BA130  90 1D 00 F0 */	stw r0, 0xf0(r29)
/* 803BD1F4 003BA134  38 E0 00 FF */	li r7, 0xff
/* 803BD1F8 003BA138  38 00 00 00 */	li r0, 0
/* 803BD1FC 003BA13C  38 64 00 F0 */	addi r3, r4, 0xf0
/* 803BD200 003BA140  90 FD 01 08 */	stw r7, 0x108(r29)
/* 803BD204 003BA144  38 A5 30 35 */	addi r5, r5, 0x66673035@l
/* 803BD208 003BA148  38 C2 13 F8 */	addi r6, r2, lbl_8051F758@sda21
/* 803BD20C 003BA14C  90 1D 01 10 */	stw r0, 0x110(r29)
/* 803BD210 003BA150  90 FD 01 14 */	stw r7, 0x114(r29)
/* 803BD214 003BA154  48 05 64 45 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD218 003BA158  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BD21C 003BA15C  38 A0 00 FF */	li r5, 0xff
/* 803BD220 003BA160  38 63 AC 90 */	addi r3, r3, "__vt__7Parm<i>"@l
/* 803BD224 003BA164  38 00 00 00 */	li r0, 0
/* 803BD228 003BA168  90 7D 01 18 */	stw r3, 0x118(r29)
/* 803BD22C 003BA16C  38 7E 48 D4 */	addi r3, r30, 0x48d4
/* 803BD230 003BA170  38 80 00 01 */	li r4, 1
/* 803BD234 003BA174  90 BD 01 30 */	stw r5, 0x130(r29)
/* 803BD238 003BA178  90 1D 01 38 */	stw r0, 0x138(r29)
/* 803BD23C 003BA17C  90 BD 01 3C */	stw r5, 0x13c(r29)
/* 803BD240 003BA180  48 00 00 C5 */	bl __ct__Q33ebi5title16TTitleParametersFv
/* 803BD244 003BA184  38 60 00 01 */	li r3, 1
/* 803BD248 003BA188  38 00 00 00 */	li r0, 0
/* 803BD24C 003BA18C  98 7E 0F 54 */	stb r3, 0xf54(r30)
/* 803BD250 003BA190  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD254 003BA194  90 1E 0F 58 */	stw r0, 0xf58(r30)
/* 803BD258 003BA198  90 7E 0F 5C */	stw r3, 0xf5c(r30)
/* 803BD25C 003BA19C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BD260 003BA1A0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803BD264 003BA1A4  EC 21 00 24 */	fdivs f1, f1, f0
/* 803BD268 003BA1A8  4B D0 48 E5 */	bl __cvt_fp2unsigned
/* 803BD26C 003BA1AC  90 7E 0F 60 */	stw r3, 0xf60(r30)
/* 803BD270 003BA1B0  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD274 003BA1B4  90 7E 0F 64 */	stw r3, 0xf64(r30)
/* 803BD278 003BA1B8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BD27C 003BA1BC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803BD280 003BA1C0  EC 21 00 24 */	fdivs f1, f1, f0
/* 803BD284 003BA1C4  4B D0 48 C9 */	bl __cvt_fp2unsigned
/* 803BD288 003BA1C8  90 7E 0F 68 */	stw r3, 0xf68(r30)
/* 803BD28C 003BA1CC  38 00 00 00 */	li r0, 0
/* 803BD290 003BA1D0  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD294 003BA1D4  90 7E 0F 6C */	stw r3, 0xf6c(r30)
/* 803BD298 003BA1D8  98 1E 0F 70 */	stb r0, 0xf70(r30)
/* 803BD29C 003BA1DC  98 1E 0F 71 */	stb r0, 0xf71(r30)
/* 803BD2A0 003BA1E0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BD2A4 003BA1E4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803BD2A8 003BA1E8  EC 21 00 24 */	fdivs f1, f1, f0
/* 803BD2AC 003BA1EC  4B D0 48 A1 */	bl __cvt_fp2unsigned
/* 803BD2B0 003BA1F0  90 7E 0F 74 */	stw r3, 0xf74(r30)
/* 803BD2B4 003BA1F4  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD2B8 003BA1F8  90 7E 0F 78 */	stw r3, 0xf78(r30)
/* 803BD2BC 003BA1FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BD2C0 003BA200  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803BD2C4 003BA204  EC 21 00 24 */	fdivs f1, f1, f0
/* 803BD2C8 003BA208  4B D0 48 85 */	bl __cvt_fp2unsigned
/* 803BD2CC 003BA20C  90 7E 0F 7C */	stw r3, 0xf7c(r30)
/* 803BD2D0 003BA210  38 00 00 00 */	li r0, 0
/* 803BD2D4 003BA214  90 7E 0F 80 */	stw r3, 0xf80(r30)
/* 803BD2D8 003BA218  7F C3 F3 78 */	mr r3, r30
/* 803BD2DC 003BA21C  90 1E 40 1C */	stw r0, 0x401c(r30)
/* 803BD2E0 003BA220  90 1E 48 CC */	stw r0, 0x48cc(r30)
/* 803BD2E4 003BA224  90 1E 48 CC */	stw r0, 0x48cc(r30)
/* 803BD2E8 003BA228  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803BD2EC 003BA22C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803BD2F0 003BA230  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803BD2F4 003BA234  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BD2F8 003BA238  7C 08 03 A6 */	mtlr r0
/* 803BD2FC 003BA23C  38 21 00 20 */	addi r1, r1, 0x20
/* 803BD300 003BA240  4E 80 00 20 */	blr 
.endfn __ct__Q33ebi5title9TTitleMgrFv

.fn __ct__Q33ebi5title16TTitleParametersFv, weak
/* 803BD304 003BA244  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BD308 003BA248  7C 08 02 A6 */	mflr r0
/* 803BD30C 003BA24C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BD310 003BA250  7C 80 07 35 */	extsh. r0, r4
/* 803BD314 003BA254  3C 80 80 49 */	lis r4, lbl_80495C58@ha
/* 803BD318 003BA258  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BD31C 003BA25C  3B E4 5C 58 */	addi r31, r4, lbl_80495C58@l
/* 803BD320 003BA260  93 C1 00 08 */	stw r30, 8(r1)
/* 803BD324 003BA264  7C 7E 1B 78 */	mr r30, r3
/* 803BD328 003BA268  41 82 00 0C */	beq .L_803BD334
/* 803BD32C 003BA26C  38 1E 02 B4 */	addi r0, r30, 0x2b4
/* 803BD330 003BA270  90 1E 00 00 */	stw r0, 0(r30)
.L_803BD334:
/* 803BD334 003BA274  38 00 00 00 */	li r0, 0
/* 803BD338 003BA278  3C A0 74 70 */	lis r5, 0x74703034@ha
/* 803BD33C 003BA27C  90 1E 00 04 */	stw r0, 4(r30)
/* 803BD340 003BA280  38 1F 00 70 */	addi r0, r31, 0x70
/* 803BD344 003BA284  7F C4 F3 78 */	mr r4, r30
/* 803BD348 003BA288  38 7E 00 0C */	addi r3, r30, 0xc
/* 803BD34C 003BA28C  90 1E 00 08 */	stw r0, 8(r30)
/* 803BD350 003BA290  38 A5 30 34 */	addi r5, r5, 0x74703034@l
/* 803BD354 003BA294  38 DF 00 84 */	addi r6, r31, 0x84
/* 803BD358 003BA298  48 05 63 01 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD35C 003BA29C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD360 003BA2A0  3C A0 74 70 */	lis r5, 0x74703035@ha
/* 803BD364 003BA2A4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD368 003BA2A8  C0 02 14 00 */	lfs f0, lbl_8051F760@sda21(r2)
/* 803BD36C 003BA2AC  90 1E 00 0C */	stw r0, 0xc(r30)
/* 803BD370 003BA2B0  7F C4 F3 78 */	mr r4, r30
/* 803BD374 003BA2B4  C0 22 14 04 */	lfs f1, lbl_8051F764@sda21(r2)
/* 803BD378 003BA2B8  38 7E 00 34 */	addi r3, r30, 0x34
/* 803BD37C 003BA2BC  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 803BD380 003BA2C0  38 A5 30 35 */	addi r5, r5, 0x74703035@l
/* 803BD384 003BA2C4  C0 02 13 D8 */	lfs f0, lbl_8051F738@sda21(r2)
/* 803BD388 003BA2C8  38 DF 00 94 */	addi r6, r31, 0x94
/* 803BD38C 003BA2CC  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 803BD390 003BA2D0  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 803BD394 003BA2D4  48 05 62 C5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD398 003BA2D8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD39C 003BA2DC  3C A0 74 70 */	lis r5, 0x74703036@ha
/* 803BD3A0 003BA2E0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD3A4 003BA2E4  C0 02 14 08 */	lfs f0, lbl_8051F768@sda21(r2)
/* 803BD3A8 003BA2E8  90 1E 00 34 */	stw r0, 0x34(r30)
/* 803BD3AC 003BA2EC  7F C4 F3 78 */	mr r4, r30
/* 803BD3B0 003BA2F0  C0 22 14 04 */	lfs f1, lbl_8051F764@sda21(r2)
/* 803BD3B4 003BA2F4  38 7E 00 5C */	addi r3, r30, 0x5c
/* 803BD3B8 003BA2F8  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 803BD3BC 003BA2FC  38 A5 30 36 */	addi r5, r5, 0x74703036@l
/* 803BD3C0 003BA300  C0 02 13 D8 */	lfs f0, lbl_8051F738@sda21(r2)
/* 803BD3C4 003BA304  38 DF 00 A4 */	addi r6, r31, 0xa4
/* 803BD3C8 003BA308  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 803BD3CC 003BA30C  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 803BD3D0 003BA310  48 05 62 89 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD3D4 003BA314  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD3D8 003BA318  3C A0 74 70 */	lis r5, 0x74703037@ha
/* 803BD3DC 003BA31C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD3E0 003BA320  C0 02 14 0C */	lfs f0, lbl_8051F76C@sda21(r2)
/* 803BD3E4 003BA324  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 803BD3E8 003BA328  7F C4 F3 78 */	mr r4, r30
/* 803BD3EC 003BA32C  C0 22 14 04 */	lfs f1, lbl_8051F764@sda21(r2)
/* 803BD3F0 003BA330  38 7E 00 84 */	addi r3, r30, 0x84
/* 803BD3F4 003BA334  D0 1E 00 74 */	stfs f0, 0x74(r30)
/* 803BD3F8 003BA338  38 A5 30 37 */	addi r5, r5, 0x74703037@l
/* 803BD3FC 003BA33C  C0 02 13 D8 */	lfs f0, lbl_8051F738@sda21(r2)
/* 803BD400 003BA340  38 DF 00 B4 */	addi r6, r31, 0xb4
/* 803BD404 003BA344  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 803BD408 003BA348  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 803BD40C 003BA34C  48 05 62 4D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD410 003BA350  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD414 003BA354  3C A0 74 70 */	lis r5, 0x74703038@ha
/* 803BD418 003BA358  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD41C 003BA35C  C0 02 14 10 */	lfs f0, lbl_8051F770@sda21(r2)
/* 803BD420 003BA360  90 1E 00 84 */	stw r0, 0x84(r30)
/* 803BD424 003BA364  7F C4 F3 78 */	mr r4, r30
/* 803BD428 003BA368  C0 22 14 04 */	lfs f1, lbl_8051F764@sda21(r2)
/* 803BD42C 003BA36C  38 7E 00 AC */	addi r3, r30, 0xac
/* 803BD430 003BA370  D0 1E 00 9C */	stfs f0, 0x9c(r30)
/* 803BD434 003BA374  38 A5 30 38 */	addi r5, r5, 0x74703038@l
/* 803BD438 003BA378  C0 02 13 D8 */	lfs f0, lbl_8051F738@sda21(r2)
/* 803BD43C 003BA37C  38 DF 00 C4 */	addi r6, r31, 0xc4
/* 803BD440 003BA380  D0 3E 00 A4 */	stfs f1, 0xa4(r30)
/* 803BD444 003BA384  D0 1E 00 A8 */	stfs f0, 0xa8(r30)
/* 803BD448 003BA388  48 05 62 11 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD44C 003BA38C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD450 003BA390  3C A0 74 70 */	lis r5, 0x74703039@ha
/* 803BD454 003BA394  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD458 003BA398  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BD45C 003BA39C  90 1E 00 AC */	stw r0, 0xac(r30)
/* 803BD460 003BA3A0  7F C4 F3 78 */	mr r4, r30
/* 803BD464 003BA3A4  C0 22 14 14 */	lfs f1, lbl_8051F774@sda21(r2)
/* 803BD468 003BA3A8  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 803BD46C 003BA3AC  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 803BD470 003BA3B0  38 A5 30 39 */	addi r5, r5, 0x74703039@l
/* 803BD474 003BA3B4  C0 02 14 18 */	lfs f0, lbl_8051F778@sda21(r2)
/* 803BD478 003BA3B8  38 DF 00 DC */	addi r6, r31, 0xdc
/* 803BD47C 003BA3BC  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 803BD480 003BA3C0  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 803BD484 003BA3C4  48 05 61 D5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD488 003BA3C8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD48C 003BA3CC  3C A0 74 70 */	lis r5, 0x74703130@ha
/* 803BD490 003BA3D0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD494 003BA3D4  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BD498 003BA3D8  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 803BD49C 003BA3DC  7F C4 F3 78 */	mr r4, r30
/* 803BD4A0 003BA3E0  C0 22 14 1C */	lfs f1, lbl_8051F77C@sda21(r2)
/* 803BD4A4 003BA3E4  38 7E 00 FC */	addi r3, r30, 0xfc
/* 803BD4A8 003BA3E8  D0 1E 00 EC */	stfs f0, 0xec(r30)
/* 803BD4AC 003BA3EC  38 A5 31 30 */	addi r5, r5, 0x74703130@l
/* 803BD4B0 003BA3F0  C0 02 14 20 */	lfs f0, lbl_8051F780@sda21(r2)
/* 803BD4B4 003BA3F4  38 DF 00 F4 */	addi r6, r31, 0xf4
/* 803BD4B8 003BA3F8  D0 3E 00 F4 */	stfs f1, 0xf4(r30)
/* 803BD4BC 003BA3FC  D0 1E 00 F8 */	stfs f0, 0xf8(r30)
/* 803BD4C0 003BA400  48 05 61 99 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD4C4 003BA404  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD4C8 003BA408  3C A0 74 70 */	lis r5, 0x74703131@ha
/* 803BD4CC 003BA40C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD4D0 003BA410  C0 02 14 24 */	lfs f0, lbl_8051F784@sda21(r2)
/* 803BD4D4 003BA414  90 1E 00 FC */	stw r0, 0xfc(r30)
/* 803BD4D8 003BA418  7F C4 F3 78 */	mr r4, r30
/* 803BD4DC 003BA41C  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD4E0 003BA420  38 7E 01 24 */	addi r3, r30, 0x124
/* 803BD4E4 003BA424  D0 1E 01 14 */	stfs f0, 0x114(r30)
/* 803BD4E8 003BA428  38 A5 31 31 */	addi r5, r5, 0x74703131@l
/* 803BD4EC 003BA42C  C0 02 14 28 */	lfs f0, lbl_8051F788@sda21(r2)
/* 803BD4F0 003BA430  38 DF 01 0C */	addi r6, r31, 0x10c
/* 803BD4F4 003BA434  D0 3E 01 1C */	stfs f1, 0x11c(r30)
/* 803BD4F8 003BA438  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 803BD4FC 003BA43C  48 05 61 5D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD500 003BA440  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD504 003BA444  3C A0 74 70 */	lis r5, 0x74703133@ha
/* 803BD508 003BA448  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD50C 003BA44C  C0 02 14 2C */	lfs f0, lbl_8051F78C@sda21(r2)
/* 803BD510 003BA450  90 1E 01 24 */	stw r0, 0x124(r30)
/* 803BD514 003BA454  7F C4 F3 78 */	mr r4, r30
/* 803BD518 003BA458  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD51C 003BA45C  38 7E 01 4C */	addi r3, r30, 0x14c
/* 803BD520 003BA460  D0 1E 01 3C */	stfs f0, 0x13c(r30)
/* 803BD524 003BA464  38 A5 31 33 */	addi r5, r5, 0x74703133@l
/* 803BD528 003BA468  C0 02 14 28 */	lfs f0, lbl_8051F788@sda21(r2)
/* 803BD52C 003BA46C  38 DF 01 3C */	addi r6, r31, 0x13c
/* 803BD530 003BA470  D0 3E 01 44 */	stfs f1, 0x144(r30)
/* 803BD534 003BA474  D0 1E 01 48 */	stfs f0, 0x148(r30)
/* 803BD538 003BA478  48 05 61 21 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD53C 003BA47C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD540 003BA480  3C A0 74 70 */	lis r5, 0x74703530@ha
/* 803BD544 003BA484  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD548 003BA488  C0 02 14 30 */	lfs f0, lbl_8051F790@sda21(r2)
/* 803BD54C 003BA48C  90 1E 01 4C */	stw r0, 0x14c(r30)
/* 803BD550 003BA490  7F C4 F3 78 */	mr r4, r30
/* 803BD554 003BA494  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD558 003BA498  38 7E 01 74 */	addi r3, r30, 0x174
/* 803BD55C 003BA49C  D0 1E 01 64 */	stfs f0, 0x164(r30)
/* 803BD560 003BA4A0  38 A5 35 30 */	addi r5, r5, 0x74703530@l
/* 803BD564 003BA4A4  C0 02 13 C8 */	lfs f0, lbl_8051F728@sda21(r2)
/* 803BD568 003BA4A8  38 DF 01 50 */	addi r6, r31, 0x150
/* 803BD56C 003BA4AC  D0 3E 01 6C */	stfs f1, 0x16c(r30)
/* 803BD570 003BA4B0  D0 1E 01 70 */	stfs f0, 0x170(r30)
/* 803BD574 003BA4B4  48 05 60 E5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD578 003BA4B8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD57C 003BA4BC  3C A0 74 70 */	lis r5, 0x74703135@ha
/* 803BD580 003BA4C0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD584 003BA4C4  C0 02 14 34 */	lfs f0, lbl_8051F794@sda21(r2)
/* 803BD588 003BA4C8  90 1E 01 74 */	stw r0, 0x174(r30)
/* 803BD58C 003BA4CC  7F C4 F3 78 */	mr r4, r30
/* 803BD590 003BA4D0  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD594 003BA4D4  38 7E 01 9C */	addi r3, r30, 0x19c
/* 803BD598 003BA4D8  D0 1E 01 8C */	stfs f0, 0x18c(r30)
/* 803BD59C 003BA4DC  38 A5 31 35 */	addi r5, r5, 0x74703135@l
/* 803BD5A0 003BA4E0  C0 02 13 C8 */	lfs f0, lbl_8051F728@sda21(r2)
/* 803BD5A4 003BA4E4  38 DF 01 64 */	addi r6, r31, 0x164
/* 803BD5A8 003BA4E8  D0 3E 01 94 */	stfs f1, 0x194(r30)
/* 803BD5AC 003BA4EC  D0 1E 01 98 */	stfs f0, 0x198(r30)
/* 803BD5B0 003BA4F0  48 05 60 A9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD5B4 003BA4F4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD5B8 003BA4F8  3C A0 74 70 */	lis r5, 0x74703136@ha
/* 803BD5BC 003BA4FC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD5C0 003BA500  C0 02 14 38 */	lfs f0, lbl_8051F798@sda21(r2)
/* 803BD5C4 003BA504  90 1E 01 9C */	stw r0, 0x19c(r30)
/* 803BD5C8 003BA508  7F C4 F3 78 */	mr r4, r30
/* 803BD5CC 003BA50C  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD5D0 003BA510  38 7E 01 C4 */	addi r3, r30, 0x1c4
/* 803BD5D4 003BA514  D0 1E 01 B4 */	stfs f0, 0x1b4(r30)
/* 803BD5D8 003BA518  38 A5 31 36 */	addi r5, r5, 0x74703136@l
/* 803BD5DC 003BA51C  C0 02 14 3C */	lfs f0, lbl_8051F79C@sda21(r2)
/* 803BD5E0 003BA520  38 DF 01 78 */	addi r6, r31, 0x178
/* 803BD5E4 003BA524  D0 3E 01 BC */	stfs f1, 0x1bc(r30)
/* 803BD5E8 003BA528  D0 1E 01 C0 */	stfs f0, 0x1c0(r30)
/* 803BD5EC 003BA52C  48 05 60 6D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD5F0 003BA530  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD5F4 003BA534  3C A0 74 70 */	lis r5, 0x74703137@ha
/* 803BD5F8 003BA538  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD5FC 003BA53C  C0 02 14 38 */	lfs f0, lbl_8051F798@sda21(r2)
/* 803BD600 003BA540  90 1E 01 C4 */	stw r0, 0x1c4(r30)
/* 803BD604 003BA544  7F C4 F3 78 */	mr r4, r30
/* 803BD608 003BA548  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD60C 003BA54C  38 7E 01 EC */	addi r3, r30, 0x1ec
/* 803BD610 003BA550  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 803BD614 003BA554  38 A5 31 37 */	addi r5, r5, 0x74703137@l
/* 803BD618 003BA558  C0 02 14 3C */	lfs f0, lbl_8051F79C@sda21(r2)
/* 803BD61C 003BA55C  38 DF 01 8C */	addi r6, r31, 0x18c
/* 803BD620 003BA560  D0 3E 01 E4 */	stfs f1, 0x1e4(r30)
/* 803BD624 003BA564  D0 1E 01 E8 */	stfs f0, 0x1e8(r30)
/* 803BD628 003BA568  48 05 60 31 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD62C 003BA56C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD630 003BA570  3C A0 74 70 */	lis r5, 0x74703139@ha
/* 803BD634 003BA574  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD638 003BA578  C0 02 14 40 */	lfs f0, lbl_8051F7A0@sda21(r2)
/* 803BD63C 003BA57C  90 1E 01 EC */	stw r0, 0x1ec(r30)
/* 803BD640 003BA580  7F C4 F3 78 */	mr r4, r30
/* 803BD644 003BA584  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD648 003BA588  38 7E 02 14 */	addi r3, r30, 0x214
/* 803BD64C 003BA58C  D0 1E 02 04 */	stfs f0, 0x204(r30)
/* 803BD650 003BA590  38 A5 31 39 */	addi r5, r5, 0x74703139@l
/* 803BD654 003BA594  C0 02 14 3C */	lfs f0, lbl_8051F79C@sda21(r2)
/* 803BD658 003BA598  38 DF 01 A0 */	addi r6, r31, 0x1a0
/* 803BD65C 003BA59C  D0 3E 02 0C */	stfs f1, 0x20c(r30)
/* 803BD660 003BA5A0  D0 1E 02 10 */	stfs f0, 0x210(r30)
/* 803BD664 003BA5A4  48 05 5F F5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD668 003BA5A8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD66C 003BA5AC  3C A0 74 70 */	lis r5, 0x74703230@ha
/* 803BD670 003BA5B0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD674 003BA5B4  C0 02 14 38 */	lfs f0, lbl_8051F798@sda21(r2)
/* 803BD678 003BA5B8  90 1E 02 14 */	stw r0, 0x214(r30)
/* 803BD67C 003BA5BC  7F C4 F3 78 */	mr r4, r30
/* 803BD680 003BA5C0  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD684 003BA5C4  38 7E 02 3C */	addi r3, r30, 0x23c
/* 803BD688 003BA5C8  D0 1E 02 2C */	stfs f0, 0x22c(r30)
/* 803BD68C 003BA5CC  38 A5 32 30 */	addi r5, r5, 0x74703230@l
/* 803BD690 003BA5D0  C0 02 14 3C */	lfs f0, lbl_8051F79C@sda21(r2)
/* 803BD694 003BA5D4  38 DF 01 B0 */	addi r6, r31, 0x1b0
/* 803BD698 003BA5D8  D0 3E 02 34 */	stfs f1, 0x234(r30)
/* 803BD69C 003BA5DC  D0 1E 02 38 */	stfs f0, 0x238(r30)
/* 803BD6A0 003BA5E0  48 05 5F B9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD6A4 003BA5E4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD6A8 003BA5E8  3C A0 74 70 */	lis r5, 0x74703231@ha
/* 803BD6AC 003BA5EC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD6B0 003BA5F0  C0 02 14 40 */	lfs f0, lbl_8051F7A0@sda21(r2)
/* 803BD6B4 003BA5F4  90 1E 02 3C */	stw r0, 0x23c(r30)
/* 803BD6B8 003BA5F8  7F C4 F3 78 */	mr r4, r30
/* 803BD6BC 003BA5FC  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD6C0 003BA600  38 7E 02 64 */	addi r3, r30, 0x264
/* 803BD6C4 003BA604  D0 1E 02 54 */	stfs f0, 0x254(r30)
/* 803BD6C8 003BA608  38 A5 32 31 */	addi r5, r5, 0x74703231@l
/* 803BD6CC 003BA60C  C0 02 14 3C */	lfs f0, lbl_8051F79C@sda21(r2)
/* 803BD6D0 003BA610  38 DF 01 C0 */	addi r6, r31, 0x1c0
/* 803BD6D4 003BA614  D0 3E 02 5C */	stfs f1, 0x25c(r30)
/* 803BD6D8 003BA618  D0 1E 02 60 */	stfs f0, 0x260(r30)
/* 803BD6DC 003BA61C  48 05 5F 7D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD6E0 003BA620  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD6E4 003BA624  3C A0 74 70 */	lis r5, 0x74703232@ha
/* 803BD6E8 003BA628  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD6EC 003BA62C  C0 02 14 44 */	lfs f0, lbl_8051F7A4@sda21(r2)
/* 803BD6F0 003BA630  90 1E 02 64 */	stw r0, 0x264(r30)
/* 803BD6F4 003BA634  7F C4 F3 78 */	mr r4, r30
/* 803BD6F8 003BA638  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD6FC 003BA63C  38 7E 02 8C */	addi r3, r30, 0x28c
/* 803BD700 003BA640  D0 1E 02 7C */	stfs f0, 0x27c(r30)
/* 803BD704 003BA644  38 A5 32 32 */	addi r5, r5, 0x74703232@l
/* 803BD708 003BA648  C0 02 14 3C */	lfs f0, lbl_8051F79C@sda21(r2)
/* 803BD70C 003BA64C  38 DF 01 D8 */	addi r6, r31, 0x1d8
/* 803BD710 003BA650  D0 3E 02 84 */	stfs f1, 0x284(r30)
/* 803BD714 003BA654  D0 1E 02 88 */	stfs f0, 0x288(r30)
/* 803BD718 003BA658  48 05 5F 41 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BD71C 003BA65C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BD720 003BA660  C0 42 14 48 */	lfs f2, lbl_8051F7A8@sda21(r2)
/* 803BD724 003BA664  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BD728 003BA668  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BD72C 003BA66C  90 1E 02 8C */	stw r0, 0x28c(r30)
/* 803BD730 003BA670  7F C3 F3 78 */	mr r3, r30
/* 803BD734 003BA674  C0 02 14 3C */	lfs f0, lbl_8051F79C@sda21(r2)
/* 803BD738 003BA678  D0 5E 02 A4 */	stfs f2, 0x2a4(r30)
/* 803BD73C 003BA67C  D0 3E 02 AC */	stfs f1, 0x2ac(r30)
/* 803BD740 003BA680  D0 1E 02 B0 */	stfs f0, 0x2b0(r30)
/* 803BD744 003BA684  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BD748 003BA688  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BD74C 003BA68C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BD750 003BA690  7C 08 03 A6 */	mtlr r0
/* 803BD754 003BA694  38 21 00 10 */	addi r1, r1, 0x10
/* 803BD758 003BA698  4E 80 00 20 */	blr 
.endfn __ct__Q33ebi5title16TTitleParametersFv

.fn __dt__Q33ebi5title12TTitleFogMgrFv, weak
/* 803BD75C 003BA69C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BD760 003BA6A0  7C 08 02 A6 */	mflr r0
/* 803BD764 003BA6A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BD768 003BA6A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BD76C 003BA6AC  7C 9F 23 78 */	mr r31, r4
/* 803BD770 003BA6B0  93 C1 00 08 */	stw r30, 8(r1)
/* 803BD774 003BA6B4  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BD778 003BA6B8  41 82 00 38 */	beq .L_803BD7B0
/* 803BD77C 003BA6BC  3C 80 80 4E */	lis r4, __vt__Q33ebi5title12TTitleFogMgr@ha
/* 803BD780 003BA6C0  38 04 78 DC */	addi r0, r4, __vt__Q33ebi5title12TTitleFogMgr@l
/* 803BD784 003BA6C4  90 1E 00 00 */	stw r0, 0(r30)
/* 803BD788 003BA6C8  41 82 00 18 */	beq .L_803BD7A0
/* 803BD78C 003BA6CC  3C A0 80 4E */	lis r5, __vt__6FogMgr@ha
/* 803BD790 003BA6D0  38 80 00 00 */	li r4, 0
/* 803BD794 003BA6D4  38 05 78 CC */	addi r0, r5, __vt__6FogMgr@l
/* 803BD798 003BA6D8  90 1E 00 00 */	stw r0, 0(r30)
/* 803BD79C 003BA6DC  48 05 3D ED */	bl __dt__5CNodeFv
.L_803BD7A0:
/* 803BD7A0 003BA6E0  7F E0 07 35 */	extsh. r0, r31
/* 803BD7A4 003BA6E4  40 81 00 0C */	ble .L_803BD7B0
/* 803BD7A8 003BA6E8  7F C3 F3 78 */	mr r3, r30
/* 803BD7AC 003BA6EC  4B C6 69 09 */	bl __dl__FPv
.L_803BD7B0:
/* 803BD7B0 003BA6F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BD7B4 003BA6F4  7F C3 F3 78 */	mr r3, r30
/* 803BD7B8 003BA6F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BD7BC 003BA6FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BD7C0 003BA700  7C 08 03 A6 */	mtlr r0
/* 803BD7C4 003BA704  38 21 00 10 */	addi r1, r1, 0x10
/* 803BD7C8 003BA708  4E 80 00 20 */	blr 
.endfn __dt__Q33ebi5title12TTitleFogMgrFv

.fn __dt__6FogMgrFv, weak
/* 803BD7CC 003BA70C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BD7D0 003BA710  7C 08 02 A6 */	mflr r0
/* 803BD7D4 003BA714  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BD7D8 003BA718  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BD7DC 003BA71C  7C 9F 23 78 */	mr r31, r4
/* 803BD7E0 003BA720  93 C1 00 08 */	stw r30, 8(r1)
/* 803BD7E4 003BA724  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BD7E8 003BA728  41 82 00 28 */	beq .L_803BD810
/* 803BD7EC 003BA72C  3C A0 80 4E */	lis r5, __vt__6FogMgr@ha
/* 803BD7F0 003BA730  38 80 00 00 */	li r4, 0
/* 803BD7F4 003BA734  38 05 78 CC */	addi r0, r5, __vt__6FogMgr@l
/* 803BD7F8 003BA738  90 1E 00 00 */	stw r0, 0(r30)
/* 803BD7FC 003BA73C  48 05 3D 8D */	bl __dt__5CNodeFv
/* 803BD800 003BA740  7F E0 07 35 */	extsh. r0, r31
/* 803BD804 003BA744  40 81 00 0C */	ble .L_803BD810
/* 803BD808 003BA748  7F C3 F3 78 */	mr r3, r30
/* 803BD80C 003BA74C  4B C6 68 A9 */	bl __dl__FPv
.L_803BD810:
/* 803BD810 003BA750  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BD814 003BA754  7F C3 F3 78 */	mr r3, r30
/* 803BD818 003BA758  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BD81C 003BA75C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BD820 003BA760  7C 08 03 A6 */	mtlr r0
/* 803BD824 003BA764  38 21 00 10 */	addi r1, r1, 0x10
/* 803BD828 003BA768  4E 80 00 20 */	blr 
.endfn __dt__6FogMgrFv

.fn __dt__Q33ebi5title14TTitleLightMgrFv, weak
/* 803BD82C 003BA76C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BD830 003BA770  7C 08 02 A6 */	mflr r0
/* 803BD834 003BA774  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BD838 003BA778  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BD83C 003BA77C  7C 9F 23 78 */	mr r31, r4
/* 803BD840 003BA780  93 C1 00 08 */	stw r30, 8(r1)
/* 803BD844 003BA784  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BD848 003BA788  41 82 00 AC */	beq .L_803BD8F4
/* 803BD84C 003BA78C  3C 60 80 4E */	lis r3, __vt__Q33ebi5title14TTitleLightMgr@ha
/* 803BD850 003BA790  34 1E 00 A8 */	addic. r0, r30, 0xa8
/* 803BD854 003BA794  38 03 79 E4 */	addi r0, r3, __vt__Q33ebi5title14TTitleLightMgr@l
/* 803BD858 003BA798  90 1E 00 00 */	stw r0, 0(r30)
/* 803BD85C 003BA79C  41 82 00 1C */	beq .L_803BD878
/* 803BD860 003BA7A0  3C 80 80 4F */	lis r4, __vt__8LightObj@ha
/* 803BD864 003BA7A4  38 7E 00 A8 */	addi r3, r30, 0xa8
/* 803BD868 003BA7A8  38 04 BE B4 */	addi r0, r4, __vt__8LightObj@l
/* 803BD86C 003BA7AC  38 80 00 00 */	li r4, 0
/* 803BD870 003BA7B0  90 1E 00 A8 */	stw r0, 0xa8(r30)
/* 803BD874 003BA7B4  48 05 3D 15 */	bl __dt__5CNodeFv
.L_803BD878:
/* 803BD878 003BA7B8  34 1E 00 50 */	addic. r0, r30, 0x50
/* 803BD87C 003BA7BC  41 82 00 1C */	beq .L_803BD898
/* 803BD880 003BA7C0  3C 80 80 4F */	lis r4, __vt__8LightObj@ha
/* 803BD884 003BA7C4  38 7E 00 50 */	addi r3, r30, 0x50
/* 803BD888 003BA7C8  38 04 BE B4 */	addi r0, r4, __vt__8LightObj@l
/* 803BD88C 003BA7CC  38 80 00 00 */	li r4, 0
/* 803BD890 003BA7D0  90 1E 00 50 */	stw r0, 0x50(r30)
/* 803BD894 003BA7D4  48 05 3C F5 */	bl __dt__5CNodeFv
.L_803BD898:
/* 803BD898 003BA7D8  28 1E 00 00 */	cmplwi r30, 0
/* 803BD89C 003BA7DC  41 82 00 48 */	beq .L_803BD8E4
/* 803BD8A0 003BA7E0  3C 80 80 4F */	lis r4, __vt__8LightMgr@ha
/* 803BD8A4 003BA7E4  38 7E 00 34 */	addi r3, r30, 0x34
/* 803BD8A8 003BA7E8  38 04 BE 94 */	addi r0, r4, __vt__8LightMgr@l
/* 803BD8AC 003BA7EC  38 80 FF FF */	li r4, -1
/* 803BD8B0 003BA7F0  90 1E 00 00 */	stw r0, 0(r30)
/* 803BD8B4 003BA7F4  48 05 3C D5 */	bl __dt__5CNodeFv
/* 803BD8B8 003BA7F8  34 1E 00 18 */	addic. r0, r30, 0x18
/* 803BD8BC 003BA7FC  41 82 00 1C */	beq .L_803BD8D8
/* 803BD8C0 003BA800  3C 80 80 4B */	lis r4, __vt__15AmbientLightObj@ha
/* 803BD8C4 003BA804  38 7E 00 18 */	addi r3, r30, 0x18
/* 803BD8C8 003BA808  38 04 C4 60 */	addi r0, r4, __vt__15AmbientLightObj@l
/* 803BD8CC 003BA80C  38 80 00 00 */	li r4, 0
/* 803BD8D0 003BA810  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803BD8D4 003BA814  48 05 3C B5 */	bl __dt__5CNodeFv
.L_803BD8D8:
/* 803BD8D8 003BA818  7F C3 F3 78 */	mr r3, r30
/* 803BD8DC 003BA81C  38 80 00 00 */	li r4, 0
/* 803BD8E0 003BA820  48 05 3C A9 */	bl __dt__5CNodeFv
.L_803BD8E4:
/* 803BD8E4 003BA824  7F E0 07 35 */	extsh. r0, r31
/* 803BD8E8 003BA828  40 81 00 0C */	ble .L_803BD8F4
/* 803BD8EC 003BA82C  7F C3 F3 78 */	mr r3, r30
/* 803BD8F0 003BA830  4B C6 67 C5 */	bl __dl__FPv
.L_803BD8F4:
/* 803BD8F4 003BA834  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BD8F8 003BA838  7F C3 F3 78 */	mr r3, r30
/* 803BD8FC 003BA83C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BD900 003BA840  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BD904 003BA844  7C 08 03 A6 */	mtlr r0
/* 803BD908 003BA848  38 21 00 10 */	addi r1, r1, 0x10
/* 803BD90C 003BA84C  4E 80 00 20 */	blr 
.endfn __dt__Q33ebi5title14TTitleLightMgrFv

.fn __ct__Q33ebi5title14TTitleLightMgrFv, weak
/* 803BD910 003BA850  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BD914 003BA854  7C 08 02 A6 */	mflr r0
/* 803BD918 003BA858  3C 80 80 49 */	lis r4, lbl_80495C58@ha
/* 803BD91C 003BA85C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BD920 003BA860  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803BD924 003BA864  3B E4 5C 58 */	addi r31, r4, lbl_80495C58@l
/* 803BD928 003BA868  38 9F 01 F4 */	addi r4, r31, 0x1f4
/* 803BD92C 003BA86C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803BD930 003BA870  7C 7E 1B 78 */	mr r30, r3
/* 803BD934 003BA874  48 06 E1 59 */	bl __ct__8LightMgrFPc
/* 803BD938 003BA878  38 00 00 FF */	li r0, 0xff
/* 803BD93C 003BA87C  3C 60 80 4E */	lis r3, __vt__Q33ebi5title14TTitleLightMgr@ha
/* 803BD940 003BA880  98 01 00 10 */	stb r0, 0x10(r1)
/* 803BD944 003BA884  39 03 79 E4 */	addi r8, r3, __vt__Q33ebi5title14TTitleLightMgr@l
/* 803BD948 003BA888  38 7E 00 50 */	addi r3, r30, 0x50
/* 803BD94C 003BA88C  38 9F 02 00 */	addi r4, r31, 0x200
/* 803BD950 003BA890  98 01 00 11 */	stb r0, 0x11(r1)
/* 803BD954 003BA894  38 E1 00 14 */	addi r7, r1, 0x14
/* 803BD958 003BA898  38 A0 00 01 */	li r5, 1
/* 803BD95C 003BA89C  38 C0 00 02 */	li r6, 2
/* 803BD960 003BA8A0  98 01 00 12 */	stb r0, 0x12(r1)
/* 803BD964 003BA8A4  98 01 00 13 */	stb r0, 0x13(r1)
/* 803BD968 003BA8A8  91 1E 00 00 */	stw r8, 0(r30)
/* 803BD96C 003BA8AC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 803BD970 003BA8B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BD974 003BA8B4  48 06 DA F9 */	bl __ct__8LightObjFPc10_GXLightID14ELightTypeFlagQ28JUtility6TColor
/* 803BD978 003BA8B8  38 00 00 FF */	li r0, 0xff
/* 803BD97C 003BA8BC  38 7E 00 A8 */	addi r3, r30, 0xa8
/* 803BD980 003BA8C0  98 01 00 08 */	stb r0, 8(r1)
/* 803BD984 003BA8C4  38 9F 02 10 */	addi r4, r31, 0x210
/* 803BD988 003BA8C8  38 E1 00 0C */	addi r7, r1, 0xc
/* 803BD98C 003BA8CC  38 A0 00 80 */	li r5, 0x80
/* 803BD990 003BA8D0  98 01 00 09 */	stb r0, 9(r1)
/* 803BD994 003BA8D4  38 C0 00 04 */	li r6, 4
/* 803BD998 003BA8D8  98 01 00 0A */	stb r0, 0xa(r1)
/* 803BD99C 003BA8DC  98 01 00 0B */	stb r0, 0xb(r1)
/* 803BD9A0 003BA8E0  80 01 00 08 */	lwz r0, 8(r1)
/* 803BD9A4 003BA8E4  90 01 00 0C */	stw r0, 0xc(r1)
/* 803BD9A8 003BA8E8  48 06 DA C5 */	bl __ct__8LightObjFPc10_GXLightID14ELightTypeFlagQ28JUtility6TColor
/* 803BD9AC 003BA8EC  38 7E 01 00 */	addi r3, r30, 0x100
/* 803BD9B0 003BA8F0  48 00 00 39 */	bl __ct__Q33ebi5title18TTitleLightSettingFv
/* 803BD9B4 003BA8F4  7F C3 F3 78 */	mr r3, r30
/* 803BD9B8 003BA8F8  38 9E 00 50 */	addi r4, r30, 0x50
/* 803BD9BC 003BA8FC  48 06 E1 A9 */	bl registLightObj__8LightMgrFP8LightObj
/* 803BD9C0 003BA900  7F C3 F3 78 */	mr r3, r30
/* 803BD9C4 003BA904  38 9E 00 A8 */	addi r4, r30, 0xa8
/* 803BD9C8 003BA908  48 06 E1 9D */	bl registLightObj__8LightMgrFP8LightObj
/* 803BD9CC 003BA90C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BD9D0 003BA910  7F C3 F3 78 */	mr r3, r30
/* 803BD9D4 003BA914  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803BD9D8 003BA918  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803BD9DC 003BA91C  7C 08 03 A6 */	mtlr r0
/* 803BD9E0 003BA920  38 21 00 20 */	addi r1, r1, 0x20
/* 803BD9E4 003BA924  4E 80 00 20 */	blr 
.endfn __ct__Q33ebi5title14TTitleLightMgrFv

.fn __ct__Q33ebi5title18TTitleLightSettingFv, weak
/* 803BD9E8 003BA928  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BD9EC 003BA92C  7C 08 02 A6 */	mflr r0
/* 803BD9F0 003BA930  3C A0 74 6C */	lis r5, 0x746C3030@ha
/* 803BD9F4 003BA934  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BD9F8 003BA938  38 A5 30 30 */	addi r5, r5, 0x746C3030@l
/* 803BD9FC 003BA93C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BDA00 003BA940  93 C1 00 08 */	stw r30, 8(r1)
/* 803BDA04 003BA944  7C 7E 1B 78 */	mr r30, r3
/* 803BDA08 003BA948  38 1E 00 AC */	addi r0, r30, 0xac
/* 803BDA0C 003BA94C  3C 60 80 49 */	lis r3, lbl_80495C58@ha
/* 803BDA10 003BA950  90 1E 00 00 */	stw r0, 0(r30)
/* 803BDA14 003BA954  3B E3 5C 58 */	addi r31, r3, lbl_80495C58@l
/* 803BDA18 003BA958  38 00 00 00 */	li r0, 0
/* 803BDA1C 003BA95C  7F C4 F3 78 */	mr r4, r30
/* 803BDA20 003BA960  90 1E 00 04 */	stw r0, 4(r30)
/* 803BDA24 003BA964  38 1F 02 24 */	addi r0, r31, 0x224
/* 803BDA28 003BA968  38 7E 00 0C */	addi r3, r30, 0xc
/* 803BDA2C 003BA96C  38 DF 02 30 */	addi r6, r31, 0x230
/* 803BDA30 003BA970  90 1E 00 08 */	stw r0, 8(r30)
/* 803BDA34 003BA974  48 05 5C 25 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDA38 003BA978  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BDA3C 003BA97C  3C A0 74 6C */	lis r5, 0x746C3031@ha
/* 803BDA40 003BA980  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803BDA44 003BA984  38 E0 00 00 */	li r7, 0
/* 803BDA48 003BA988  90 1E 00 0C */	stw r0, 0xc(r30)
/* 803BDA4C 003BA98C  38 00 00 FF */	li r0, 0xff
/* 803BDA50 003BA990  7F C4 F3 78 */	mr r4, r30
/* 803BDA54 003BA994  38 7E 00 34 */	addi r3, r30, 0x34
/* 803BDA58 003BA998  90 FE 00 24 */	stw r7, 0x24(r30)
/* 803BDA5C 003BA99C  38 A5 30 31 */	addi r5, r5, 0x746C3031@l
/* 803BDA60 003BA9A0  38 DF 02 40 */	addi r6, r31, 0x240
/* 803BDA64 003BA9A4  90 FE 00 2C */	stw r7, 0x2c(r30)
/* 803BDA68 003BA9A8  90 1E 00 30 */	stw r0, 0x30(r30)
/* 803BDA6C 003BA9AC  48 05 5B ED */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDA70 003BA9B0  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BDA74 003BA9B4  3C A0 74 6C */	lis r5, 0x746C3032@ha
/* 803BDA78 003BA9B8  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803BDA7C 003BA9BC  38 E0 00 00 */	li r7, 0
/* 803BDA80 003BA9C0  90 1E 00 34 */	stw r0, 0x34(r30)
/* 803BDA84 003BA9C4  38 00 00 FF */	li r0, 0xff
/* 803BDA88 003BA9C8  7F C4 F3 78 */	mr r4, r30
/* 803BDA8C 003BA9CC  38 7E 00 5C */	addi r3, r30, 0x5c
/* 803BDA90 003BA9D0  90 FE 00 4C */	stw r7, 0x4c(r30)
/* 803BDA94 003BA9D4  38 A5 30 32 */	addi r5, r5, 0x746C3032@l
/* 803BDA98 003BA9D8  38 DF 02 50 */	addi r6, r31, 0x250
/* 803BDA9C 003BA9DC  90 FE 00 54 */	stw r7, 0x54(r30)
/* 803BDAA0 003BA9E0  90 1E 00 58 */	stw r0, 0x58(r30)
/* 803BDAA4 003BA9E4  48 05 5B B5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDAA8 003BA9E8  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BDAAC 003BA9EC  3C A0 74 6C */	lis r5, 0x746C3033@ha
/* 803BDAB0 003BA9F0  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803BDAB4 003BA9F4  38 E0 00 00 */	li r7, 0
/* 803BDAB8 003BA9F8  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 803BDABC 003BA9FC  38 00 00 FF */	li r0, 0xff
/* 803BDAC0 003BAA00  7F C4 F3 78 */	mr r4, r30
/* 803BDAC4 003BAA04  38 7E 00 84 */	addi r3, r30, 0x84
/* 803BDAC8 003BAA08  90 FE 00 74 */	stw r7, 0x74(r30)
/* 803BDACC 003BAA0C  38 A5 30 33 */	addi r5, r5, 0x746C3033@l
/* 803BDAD0 003BAA10  38 DF 02 60 */	addi r6, r31, 0x260
/* 803BDAD4 003BAA14  90 FE 00 7C */	stw r7, 0x7c(r30)
/* 803BDAD8 003BAA18  90 1E 00 80 */	stw r0, 0x80(r30)
/* 803BDADC 003BAA1C  48 05 5B 7D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDAE0 003BAA20  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BDAE4 003BAA24  38 A0 00 00 */	li r5, 0
/* 803BDAE8 003BAA28  38 63 AC 90 */	addi r3, r3, "__vt__7Parm<i>"@l
/* 803BDAEC 003BAA2C  38 00 00 FF */	li r0, 0xff
/* 803BDAF0 003BAA30  90 7E 00 84 */	stw r3, 0x84(r30)
/* 803BDAF4 003BAA34  38 7E 00 B0 */	addi r3, r30, 0xb0
/* 803BDAF8 003BAA38  38 80 00 01 */	li r4, 1
/* 803BDAFC 003BAA3C  90 BE 00 9C */	stw r5, 0x9c(r30)
/* 803BDB00 003BAA40  90 BE 00 A4 */	stw r5, 0xa4(r30)
/* 803BDB04 003BAA44  90 1E 00 A8 */	stw r0, 0xa8(r30)
/* 803BDB08 003BAA48  48 00 02 55 */	bl __ct__Q43ebi5title18TTitleLightSetting10TMainParmsFv
/* 803BDB0C 003BAA4C  38 7E 02 C8 */	addi r3, r30, 0x2c8
/* 803BDB10 003BAA50  38 80 00 01 */	li r4, 1
/* 803BDB14 003BAA54  48 00 00 21 */	bl __ct__Q43ebi5title18TTitleLightSetting10TSpecParmsFv
/* 803BDB18 003BAA58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BDB1C 003BAA5C  7F C3 F3 78 */	mr r3, r30
/* 803BDB20 003BAA60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BDB24 003BAA64  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BDB28 003BAA68  7C 08 03 A6 */	mtlr r0
/* 803BDB2C 003BAA6C  38 21 00 10 */	addi r1, r1, 0x10
/* 803BDB30 003BAA70  4E 80 00 20 */	blr 
.endfn __ct__Q33ebi5title18TTitleLightSettingFv

.fn __ct__Q43ebi5title18TTitleLightSetting10TSpecParmsFv, weak
/* 803BDB34 003BAA74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BDB38 003BAA78  7C 08 02 A6 */	mflr r0
/* 803BDB3C 003BAA7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BDB40 003BAA80  7C 80 07 35 */	extsh. r0, r4
/* 803BDB44 003BAA84  3C 80 80 49 */	lis r4, lbl_80495C58@ha
/* 803BDB48 003BAA88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BDB4C 003BAA8C  3B E4 5C 58 */	addi r31, r4, lbl_80495C58@l
/* 803BDB50 003BAA90  93 C1 00 08 */	stw r30, 8(r1)
/* 803BDB54 003BAA94  7C 7E 1B 78 */	mr r30, r3
/* 803BDB58 003BAA98  41 82 00 0C */	beq .L_803BDB64
/* 803BDB5C 003BAA9C  38 1E 01 4C */	addi r0, r30, 0x14c
/* 803BDB60 003BAAA0  90 1E 00 00 */	stw r0, 0(r30)
.L_803BDB64:
/* 803BDB64 003BAAA4  38 00 00 00 */	li r0, 0
/* 803BDB68 003BAAA8  3C A0 73 70 */	lis r5, 0x73703034@ha
/* 803BDB6C 003BAAAC  90 1E 00 04 */	stw r0, 4(r30)
/* 803BDB70 003BAAB0  38 1F 02 70 */	addi r0, r31, 0x270
/* 803BDB74 003BAAB4  7F C4 F3 78 */	mr r4, r30
/* 803BDB78 003BAAB8  38 7E 00 0C */	addi r3, r30, 0xc
/* 803BDB7C 003BAABC  90 1E 00 08 */	stw r0, 8(r30)
/* 803BDB80 003BAAC0  38 A5 30 34 */	addi r5, r5, 0x73703034@l
/* 803BDB84 003BAAC4  38 DF 02 7C */	addi r6, r31, 0x27c
/* 803BDB88 003BAAC8  48 05 5A D1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDB8C 003BAACC  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BDB90 003BAAD0  3C A0 73 70 */	lis r5, 0x73703035@ha
/* 803BDB94 003BAAD4  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803BDB98 003BAAD8  38 E0 00 FF */	li r7, 0xff
/* 803BDB9C 003BAADC  90 1E 00 0C */	stw r0, 0xc(r30)
/* 803BDBA0 003BAAE0  38 00 00 00 */	li r0, 0
/* 803BDBA4 003BAAE4  7F C4 F3 78 */	mr r4, r30
/* 803BDBA8 003BAAE8  38 7E 00 34 */	addi r3, r30, 0x34
/* 803BDBAC 003BAAEC  90 FE 00 24 */	stw r7, 0x24(r30)
/* 803BDBB0 003BAAF0  38 A5 30 35 */	addi r5, r5, 0x73703035@l
/* 803BDBB4 003BAAF4  38 DF 02 88 */	addi r6, r31, 0x288
/* 803BDBB8 003BAAF8  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 803BDBBC 003BAAFC  90 FE 00 30 */	stw r7, 0x30(r30)
/* 803BDBC0 003BAB00  48 05 5A 99 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDBC4 003BAB04  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BDBC8 003BAB08  3C A0 73 70 */	lis r5, 0x73703036@ha
/* 803BDBCC 003BAB0C  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803BDBD0 003BAB10  38 E0 00 FF */	li r7, 0xff
/* 803BDBD4 003BAB14  90 1E 00 34 */	stw r0, 0x34(r30)
/* 803BDBD8 003BAB18  38 00 00 00 */	li r0, 0
/* 803BDBDC 003BAB1C  7F C4 F3 78 */	mr r4, r30
/* 803BDBE0 003BAB20  38 7E 00 5C */	addi r3, r30, 0x5c
/* 803BDBE4 003BAB24  90 FE 00 4C */	stw r7, 0x4c(r30)
/* 803BDBE8 003BAB28  38 A5 30 36 */	addi r5, r5, 0x73703036@l
/* 803BDBEC 003BAB2C  38 DF 02 94 */	addi r6, r31, 0x294
/* 803BDBF0 003BAB30  90 1E 00 54 */	stw r0, 0x54(r30)
/* 803BDBF4 003BAB34  90 FE 00 58 */	stw r7, 0x58(r30)
/* 803BDBF8 003BAB38  48 05 5A 61 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDBFC 003BAB3C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BDC00 003BAB40  3C A0 73 70 */	lis r5, 0x73703037@ha
/* 803BDC04 003BAB44  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803BDC08 003BAB48  38 E0 00 FF */	li r7, 0xff
/* 803BDC0C 003BAB4C  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 803BDC10 003BAB50  38 00 00 00 */	li r0, 0
/* 803BDC14 003BAB54  7F C4 F3 78 */	mr r4, r30
/* 803BDC18 003BAB58  38 7E 00 84 */	addi r3, r30, 0x84
/* 803BDC1C 003BAB5C  90 FE 00 74 */	stw r7, 0x74(r30)
/* 803BDC20 003BAB60  38 A5 30 37 */	addi r5, r5, 0x73703037@l
/* 803BDC24 003BAB64  38 DF 02 A0 */	addi r6, r31, 0x2a0
/* 803BDC28 003BAB68  90 1E 00 7C */	stw r0, 0x7c(r30)
/* 803BDC2C 003BAB6C  90 FE 00 80 */	stw r7, 0x80(r30)
/* 803BDC30 003BAB70  48 05 5A 29 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDC34 003BAB74  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BDC38 003BAB78  3C A0 73 70 */	lis r5, 0x73703533@ha
/* 803BDC3C 003BAB7C  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803BDC40 003BAB80  38 E0 00 FF */	li r7, 0xff
/* 803BDC44 003BAB84  90 1E 00 84 */	stw r0, 0x84(r30)
/* 803BDC48 003BAB88  38 00 00 00 */	li r0, 0
/* 803BDC4C 003BAB8C  7F C4 F3 78 */	mr r4, r30
/* 803BDC50 003BAB90  38 7E 00 AC */	addi r3, r30, 0xac
/* 803BDC54 003BAB94  90 FE 00 9C */	stw r7, 0x9c(r30)
/* 803BDC58 003BAB98  38 A5 35 33 */	addi r5, r5, 0x73703533@l
/* 803BDC5C 003BAB9C  38 C2 14 4C */	addi r6, r2, lbl_8051F7AC@sda21
/* 803BDC60 003BABA0  90 1E 00 A4 */	stw r0, 0xa4(r30)
/* 803BDC64 003BABA4  90 FE 00 A8 */	stw r7, 0xa8(r30)
/* 803BDC68 003BABA8  48 05 59 F1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDC6C 003BABAC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BDC70 003BABB0  3C A0 73 70 */	lis r5, 0x73703534@ha
/* 803BDC74 003BABB4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BDC78 003BABB8  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BDC7C 003BABBC  90 1E 00 AC */	stw r0, 0xac(r30)
/* 803BDC80 003BABC0  7F C4 F3 78 */	mr r4, r30
/* 803BDC84 003BABC4  C0 22 13 9C */	lfs f1, lbl_8051F6FC@sda21(r2)
/* 803BDC88 003BABC8  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 803BDC8C 003BABCC  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 803BDC90 003BABD0  38 A5 35 34 */	addi r5, r5, 0x73703534@l
/* 803BDC94 003BABD4  C0 02 13 A0 */	lfs f0, lbl_8051F700@sda21(r2)
/* 803BDC98 003BABD8  38 C2 14 54 */	addi r6, r2, lbl_8051F7B4@sda21
/* 803BDC9C 003BABDC  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 803BDCA0 003BABE0  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 803BDCA4 003BABE4  48 05 59 B5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDCA8 003BABE8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BDCAC 003BABEC  3C A0 73 70 */	lis r5, 0x73703535@ha
/* 803BDCB0 003BABF0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BDCB4 003BABF4  C0 22 13 9C */	lfs f1, lbl_8051F6FC@sda21(r2)
/* 803BDCB8 003BABF8  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 803BDCBC 003BABFC  7F C4 F3 78 */	mr r4, r30
/* 803BDCC0 003BAC00  C0 02 13 A0 */	lfs f0, lbl_8051F700@sda21(r2)
/* 803BDCC4 003BAC04  38 7E 00 FC */	addi r3, r30, 0xfc
/* 803BDCC8 003BAC08  D0 3E 00 EC */	stfs f1, 0xec(r30)
/* 803BDCCC 003BAC0C  38 A5 35 35 */	addi r5, r5, 0x73703535@l
/* 803BDCD0 003BAC10  38 C2 14 5C */	addi r6, r2, lbl_8051F7BC@sda21
/* 803BDCD4 003BAC14  D0 3E 00 F4 */	stfs f1, 0xf4(r30)
/* 803BDCD8 003BAC18  D0 1E 00 F8 */	stfs f0, 0xf8(r30)
/* 803BDCDC 003BAC1C  48 05 59 7D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDCE0 003BAC20  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BDCE4 003BAC24  3C A0 73 70 */	lis r5, 0x73703536@ha
/* 803BDCE8 003BAC28  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BDCEC 003BAC2C  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BDCF0 003BAC30  90 1E 00 FC */	stw r0, 0xfc(r30)
/* 803BDCF4 003BAC34  7F C4 F3 78 */	mr r4, r30
/* 803BDCF8 003BAC38  C0 22 13 9C */	lfs f1, lbl_8051F6FC@sda21(r2)
/* 803BDCFC 003BAC3C  38 7E 01 24 */	addi r3, r30, 0x124
/* 803BDD00 003BAC40  D0 1E 01 14 */	stfs f0, 0x114(r30)
/* 803BDD04 003BAC44  38 A5 35 36 */	addi r5, r5, 0x73703536@l
/* 803BDD08 003BAC48  C0 02 13 A0 */	lfs f0, lbl_8051F700@sda21(r2)
/* 803BDD0C 003BAC4C  38 C2 14 64 */	addi r6, r2, lbl_8051F7C4@sda21
/* 803BDD10 003BAC50  D0 3E 01 1C */	stfs f1, 0x11c(r30)
/* 803BDD14 003BAC54  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 803BDD18 003BAC58  48 05 59 41 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDD1C 003BAC5C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BDD20 003BAC60  C0 42 14 6C */	lfs f2, lbl_8051F7CC@sda21(r2)
/* 803BDD24 003BAC64  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BDD28 003BAC68  C0 22 13 98 */	lfs f1, lbl_8051F6F8@sda21(r2)
/* 803BDD2C 003BAC6C  90 1E 01 24 */	stw r0, 0x124(r30)
/* 803BDD30 003BAC70  7F C3 F3 78 */	mr r3, r30
/* 803BDD34 003BAC74  C0 02 14 70 */	lfs f0, lbl_8051F7D0@sda21(r2)
/* 803BDD38 003BAC78  D0 5E 01 3C */	stfs f2, 0x13c(r30)
/* 803BDD3C 003BAC7C  D0 3E 01 44 */	stfs f1, 0x144(r30)
/* 803BDD40 003BAC80  D0 1E 01 48 */	stfs f0, 0x148(r30)
/* 803BDD44 003BAC84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BDD48 003BAC88  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BDD4C 003BAC8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BDD50 003BAC90  7C 08 03 A6 */	mtlr r0
/* 803BDD54 003BAC94  38 21 00 10 */	addi r1, r1, 0x10
/* 803BDD58 003BAC98  4E 80 00 20 */	blr 
.endfn __ct__Q43ebi5title18TTitleLightSetting10TSpecParmsFv

.fn __ct__Q43ebi5title18TTitleLightSetting10TMainParmsFv, weak
/* 803BDD5C 003BAC9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BDD60 003BACA0  7C 08 02 A6 */	mflr r0
/* 803BDD64 003BACA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BDD68 003BACA8  7C 80 07 35 */	extsh. r0, r4
/* 803BDD6C 003BACAC  3C 80 80 49 */	lis r4, lbl_80495C58@ha
/* 803BDD70 003BACB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BDD74 003BACB4  3B E4 5C 58 */	addi r31, r4, lbl_80495C58@l
/* 803BDD78 003BACB8  93 C1 00 08 */	stw r30, 8(r1)
/* 803BDD7C 003BACBC  7C 7E 1B 78 */	mr r30, r3
/* 803BDD80 003BACC0  41 82 00 0C */	beq .L_803BDD8C
/* 803BDD84 003BACC4  38 1E 02 14 */	addi r0, r30, 0x214
/* 803BDD88 003BACC8  90 1E 00 00 */	stw r0, 0(r30)
.L_803BDD8C:
/* 803BDD8C 003BACCC  38 00 00 00 */	li r0, 0
/* 803BDD90 003BACD0  3C A0 74 6C */	lis r5, 0x746C3034@ha
/* 803BDD94 003BACD4  90 1E 00 04 */	stw r0, 4(r30)
/* 803BDD98 003BACD8  38 1F 02 AC */	addi r0, r31, 0x2ac
/* 803BDD9C 003BACDC  7F C4 F3 78 */	mr r4, r30
/* 803BDDA0 003BACE0  38 7E 00 0C */	addi r3, r30, 0xc
/* 803BDDA4 003BACE4  90 1E 00 08 */	stw r0, 8(r30)
/* 803BDDA8 003BACE8  38 A5 30 34 */	addi r5, r5, 0x746C3034@l
/* 803BDDAC 003BACEC  38 DF 02 7C */	addi r6, r31, 0x27c
/* 803BDDB0 003BACF0  48 05 58 A9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDDB4 003BACF4  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BDDB8 003BACF8  3C A0 74 6C */	lis r5, 0x746C3035@ha
/* 803BDDBC 003BACFC  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803BDDC0 003BAD00  38 E0 00 FF */	li r7, 0xff
/* 803BDDC4 003BAD04  90 1E 00 0C */	stw r0, 0xc(r30)
/* 803BDDC8 003BAD08  38 00 00 00 */	li r0, 0
/* 803BDDCC 003BAD0C  7F C4 F3 78 */	mr r4, r30
/* 803BDDD0 003BAD10  38 7E 00 34 */	addi r3, r30, 0x34
/* 803BDDD4 003BAD14  90 FE 00 24 */	stw r7, 0x24(r30)
/* 803BDDD8 003BAD18  38 A5 30 35 */	addi r5, r5, 0x746C3035@l
/* 803BDDDC 003BAD1C  38 DF 02 88 */	addi r6, r31, 0x288
/* 803BDDE0 003BAD20  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 803BDDE4 003BAD24  90 FE 00 30 */	stw r7, 0x30(r30)
/* 803BDDE8 003BAD28  48 05 58 71 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDDEC 003BAD2C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BDDF0 003BAD30  3C A0 74 6C */	lis r5, 0x746C3036@ha
/* 803BDDF4 003BAD34  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803BDDF8 003BAD38  38 E0 00 FF */	li r7, 0xff
/* 803BDDFC 003BAD3C  90 1E 00 34 */	stw r0, 0x34(r30)
/* 803BDE00 003BAD40  38 00 00 00 */	li r0, 0
/* 803BDE04 003BAD44  7F C4 F3 78 */	mr r4, r30
/* 803BDE08 003BAD48  38 7E 00 5C */	addi r3, r30, 0x5c
/* 803BDE0C 003BAD4C  90 FE 00 4C */	stw r7, 0x4c(r30)
/* 803BDE10 003BAD50  38 A5 30 36 */	addi r5, r5, 0x746C3036@l
/* 803BDE14 003BAD54  38 DF 02 94 */	addi r6, r31, 0x294
/* 803BDE18 003BAD58  90 1E 00 54 */	stw r0, 0x54(r30)
/* 803BDE1C 003BAD5C  90 FE 00 58 */	stw r7, 0x58(r30)
/* 803BDE20 003BAD60  48 05 58 39 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDE24 003BAD64  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BDE28 003BAD68  3C A0 74 6C */	lis r5, 0x746C3037@ha
/* 803BDE2C 003BAD6C  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803BDE30 003BAD70  38 E0 00 FF */	li r7, 0xff
/* 803BDE34 003BAD74  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 803BDE38 003BAD78  38 00 00 00 */	li r0, 0
/* 803BDE3C 003BAD7C  7F C4 F3 78 */	mr r4, r30
/* 803BDE40 003BAD80  38 7E 00 84 */	addi r3, r30, 0x84
/* 803BDE44 003BAD84  90 FE 00 74 */	stw r7, 0x74(r30)
/* 803BDE48 003BAD88  38 A5 30 37 */	addi r5, r5, 0x746C3037@l
/* 803BDE4C 003BAD8C  38 DF 02 A0 */	addi r6, r31, 0x2a0
/* 803BDE50 003BAD90  90 1E 00 7C */	stw r0, 0x7c(r30)
/* 803BDE54 003BAD94  90 FE 00 80 */	stw r7, 0x80(r30)
/* 803BDE58 003BAD98  48 05 58 01 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDE5C 003BAD9C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803BDE60 003BADA0  3C A0 74 6C */	lis r5, 0x746C3530@ha
/* 803BDE64 003BADA4  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803BDE68 003BADA8  38 E0 00 FF */	li r7, 0xff
/* 803BDE6C 003BADAC  90 1E 00 84 */	stw r0, 0x84(r30)
/* 803BDE70 003BADB0  38 00 00 00 */	li r0, 0
/* 803BDE74 003BADB4  7F C4 F3 78 */	mr r4, r30
/* 803BDE78 003BADB8  38 7E 00 AC */	addi r3, r30, 0xac
/* 803BDE7C 003BADBC  90 FE 00 9C */	stw r7, 0x9c(r30)
/* 803BDE80 003BADC0  38 A5 35 30 */	addi r5, r5, 0x746C3530@l
/* 803BDE84 003BADC4  38 C2 14 74 */	addi r6, r2, lbl_8051F7D4@sda21
/* 803BDE88 003BADC8  90 1E 00 A4 */	stw r0, 0xa4(r30)
/* 803BDE8C 003BADCC  90 FE 00 A8 */	stw r7, 0xa8(r30)
/* 803BDE90 003BADD0  48 05 57 C9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDE94 003BADD4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BDE98 003BADD8  3C A0 74 6C */	lis r5, 0x746C3531@ha
/* 803BDE9C 003BADDC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BDEA0 003BADE0  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BDEA4 003BADE4  90 1E 00 AC */	stw r0, 0xac(r30)
/* 803BDEA8 003BADE8  7F C4 F3 78 */	mr r4, r30
/* 803BDEAC 003BADEC  C0 22 14 7C */	lfs f1, lbl_8051F7DC@sda21(r2)
/* 803BDEB0 003BADF0  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 803BDEB4 003BADF4  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 803BDEB8 003BADF8  38 A5 35 31 */	addi r5, r5, 0x746C3531@l
/* 803BDEBC 003BADFC  C0 02 13 AC */	lfs f0, lbl_8051F70C@sda21(r2)
/* 803BDEC0 003BAE00  38 C2 14 80 */	addi r6, r2, lbl_8051F7E0@sda21
/* 803BDEC4 003BAE04  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 803BDEC8 003BAE08  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 803BDECC 003BAE0C  48 05 57 8D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDED0 003BAE10  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BDED4 003BAE14  3C A0 74 6C */	lis r5, 0x746C3532@ha
/* 803BDED8 003BAE18  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BDEDC 003BAE1C  C0 02 14 28 */	lfs f0, lbl_8051F788@sda21(r2)
/* 803BDEE0 003BAE20  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 803BDEE4 003BAE24  7F C4 F3 78 */	mr r4, r30
/* 803BDEE8 003BAE28  C0 22 14 7C */	lfs f1, lbl_8051F7DC@sda21(r2)
/* 803BDEEC 003BAE2C  38 7E 00 FC */	addi r3, r30, 0xfc
/* 803BDEF0 003BAE30  D0 1E 00 EC */	stfs f0, 0xec(r30)
/* 803BDEF4 003BAE34  38 A5 35 32 */	addi r5, r5, 0x746C3532@l
/* 803BDEF8 003BAE38  C0 02 14 88 */	lfs f0, lbl_8051F7E8@sda21(r2)
/* 803BDEFC 003BAE3C  38 C2 14 8C */	addi r6, r2, lbl_8051F7EC@sda21
/* 803BDF00 003BAE40  D0 3E 00 F4 */	stfs f1, 0xf4(r30)
/* 803BDF04 003BAE44  D0 1E 00 F8 */	stfs f0, 0xf8(r30)
/* 803BDF08 003BAE48  48 05 57 51 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDF0C 003BAE4C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BDF10 003BAE50  3C A0 74 6C */	lis r5, 0x746C3533@ha
/* 803BDF14 003BAE54  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BDF18 003BAE58  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BDF1C 003BAE5C  90 1E 00 FC */	stw r0, 0xfc(r30)
/* 803BDF20 003BAE60  7F C4 F3 78 */	mr r4, r30
/* 803BDF24 003BAE64  C0 22 14 7C */	lfs f1, lbl_8051F7DC@sda21(r2)
/* 803BDF28 003BAE68  38 7E 01 24 */	addi r3, r30, 0x124
/* 803BDF2C 003BAE6C  D0 1E 01 14 */	stfs f0, 0x114(r30)
/* 803BDF30 003BAE70  38 A5 35 33 */	addi r5, r5, 0x746C3533@l
/* 803BDF34 003BAE74  C0 02 13 AC */	lfs f0, lbl_8051F70C@sda21(r2)
/* 803BDF38 003BAE78  38 C2 14 4C */	addi r6, r2, lbl_8051F7AC@sda21
/* 803BDF3C 003BAE7C  D0 3E 01 1C */	stfs f1, 0x11c(r30)
/* 803BDF40 003BAE80  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 803BDF44 003BAE84  48 05 57 15 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDF48 003BAE88  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BDF4C 003BAE8C  3C A0 74 6C */	lis r5, 0x746C3534@ha
/* 803BDF50 003BAE90  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BDF54 003BAE94  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BDF58 003BAE98  90 1E 01 24 */	stw r0, 0x124(r30)
/* 803BDF5C 003BAE9C  7F C4 F3 78 */	mr r4, r30
/* 803BDF60 003BAEA0  C0 22 13 9C */	lfs f1, lbl_8051F6FC@sda21(r2)
/* 803BDF64 003BAEA4  38 7E 01 4C */	addi r3, r30, 0x14c
/* 803BDF68 003BAEA8  D0 1E 01 3C */	stfs f0, 0x13c(r30)
/* 803BDF6C 003BAEAC  38 A5 35 34 */	addi r5, r5, 0x746C3534@l
/* 803BDF70 003BAEB0  C0 02 13 A0 */	lfs f0, lbl_8051F700@sda21(r2)
/* 803BDF74 003BAEB4  38 C2 14 54 */	addi r6, r2, lbl_8051F7B4@sda21
/* 803BDF78 003BAEB8  D0 3E 01 44 */	stfs f1, 0x144(r30)
/* 803BDF7C 003BAEBC  D0 1E 01 48 */	stfs f0, 0x148(r30)
/* 803BDF80 003BAEC0  48 05 56 D9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDF84 003BAEC4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BDF88 003BAEC8  3C A0 74 6C */	lis r5, 0x746C3535@ha
/* 803BDF8C 003BAECC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BDF90 003BAED0  C0 22 13 9C */	lfs f1, lbl_8051F6FC@sda21(r2)
/* 803BDF94 003BAED4  90 1E 01 4C */	stw r0, 0x14c(r30)
/* 803BDF98 003BAED8  7F C4 F3 78 */	mr r4, r30
/* 803BDF9C 003BAEDC  C0 02 13 A0 */	lfs f0, lbl_8051F700@sda21(r2)
/* 803BDFA0 003BAEE0  38 7E 01 74 */	addi r3, r30, 0x174
/* 803BDFA4 003BAEE4  D0 3E 01 64 */	stfs f1, 0x164(r30)
/* 803BDFA8 003BAEE8  38 A5 35 35 */	addi r5, r5, 0x746C3535@l
/* 803BDFAC 003BAEEC  38 C2 14 5C */	addi r6, r2, lbl_8051F7BC@sda21
/* 803BDFB0 003BAEF0  D0 3E 01 6C */	stfs f1, 0x16c(r30)
/* 803BDFB4 003BAEF4  D0 1E 01 70 */	stfs f0, 0x170(r30)
/* 803BDFB8 003BAEF8  48 05 56 A1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDFBC 003BAEFC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BDFC0 003BAF00  3C A0 74 6C */	lis r5, 0x746C3536@ha
/* 803BDFC4 003BAF04  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BDFC8 003BAF08  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BDFCC 003BAF0C  90 1E 01 74 */	stw r0, 0x174(r30)
/* 803BDFD0 003BAF10  7F C4 F3 78 */	mr r4, r30
/* 803BDFD4 003BAF14  C0 22 13 9C */	lfs f1, lbl_8051F6FC@sda21(r2)
/* 803BDFD8 003BAF18  38 7E 01 9C */	addi r3, r30, 0x19c
/* 803BDFDC 003BAF1C  D0 1E 01 8C */	stfs f0, 0x18c(r30)
/* 803BDFE0 003BAF20  38 A5 35 36 */	addi r5, r5, 0x746C3536@l
/* 803BDFE4 003BAF24  C0 02 13 A0 */	lfs f0, lbl_8051F700@sda21(r2)
/* 803BDFE8 003BAF28  38 DF 02 B8 */	addi r6, r31, 0x2b8
/* 803BDFEC 003BAF2C  D0 3E 01 94 */	stfs f1, 0x194(r30)
/* 803BDFF0 003BAF30  D0 1E 01 98 */	stfs f0, 0x198(r30)
/* 803BDFF4 003BAF34  48 05 56 65 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BDFF8 003BAF38  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BDFFC 003BAF3C  3C A0 74 6C */	lis r5, 0x746C3537@ha
/* 803BE000 003BAF40  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BE004 003BAF44  C0 02 13 AC */	lfs f0, lbl_8051F70C@sda21(r2)
/* 803BE008 003BAF48  90 1E 01 9C */	stw r0, 0x19c(r30)
/* 803BE00C 003BAF4C  7F C4 F3 78 */	mr r4, r30
/* 803BE010 003BAF50  C0 22 13 A0 */	lfs f1, lbl_8051F700@sda21(r2)
/* 803BE014 003BAF54  38 7E 01 C4 */	addi r3, r30, 0x1c4
/* 803BE018 003BAF58  D0 1E 01 B4 */	stfs f0, 0x1b4(r30)
/* 803BE01C 003BAF5C  38 A5 35 37 */	addi r5, r5, 0x746C3537@l
/* 803BE020 003BAF60  C0 02 14 88 */	lfs f0, lbl_8051F7E8@sda21(r2)
/* 803BE024 003BAF64  38 DF 02 C8 */	addi r6, r31, 0x2c8
/* 803BE028 003BAF68  D0 3E 01 BC */	stfs f1, 0x1bc(r30)
/* 803BE02C 003BAF6C  D0 1E 01 C0 */	stfs f0, 0x1c0(r30)
/* 803BE030 003BAF70  48 05 56 29 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BE034 003BAF74  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BE038 003BAF78  3C A0 74 6C */	lis r5, 0x746C3538@ha
/* 803BE03C 003BAF7C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BE040 003BAF80  C0 22 13 A0 */	lfs f1, lbl_8051F700@sda21(r2)
/* 803BE044 003BAF84  90 1E 01 C4 */	stw r0, 0x1c4(r30)
/* 803BE048 003BAF88  7F C4 F3 78 */	mr r4, r30
/* 803BE04C 003BAF8C  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BE050 003BAF90  38 7E 01 EC */	addi r3, r30, 0x1ec
/* 803BE054 003BAF94  D0 3E 01 DC */	stfs f1, 0x1dc(r30)
/* 803BE058 003BAF98  38 A5 35 38 */	addi r5, r5, 0x746C3538@l
/* 803BE05C 003BAF9C  38 DF 02 D8 */	addi r6, r31, 0x2d8
/* 803BE060 003BAFA0  D0 1E 01 E4 */	stfs f0, 0x1e4(r30)
/* 803BE064 003BAFA4  D0 3E 01 E8 */	stfs f1, 0x1e8(r30)
/* 803BE068 003BAFA8  48 05 55 F1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803BE06C 003BAFAC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803BE070 003BAFB0  C0 42 14 94 */	lfs f2, lbl_8051F7F4@sda21(r2)
/* 803BE074 003BAFB4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803BE078 003BAFB8  C0 22 13 A0 */	lfs f1, lbl_8051F700@sda21(r2)
/* 803BE07C 003BAFBC  90 1E 01 EC */	stw r0, 0x1ec(r30)
/* 803BE080 003BAFC0  7F C3 F3 78 */	mr r3, r30
/* 803BE084 003BAFC4  C0 02 13 BC */	lfs f0, lbl_8051F71C@sda21(r2)
/* 803BE088 003BAFC8  D0 5E 02 04 */	stfs f2, 0x204(r30)
/* 803BE08C 003BAFCC  D0 3E 02 0C */	stfs f1, 0x20c(r30)
/* 803BE090 003BAFD0  D0 1E 02 10 */	stfs f0, 0x210(r30)
/* 803BE094 003BAFD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BE098 003BAFD8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BE09C 003BAFDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BE0A0 003BAFE0  7C 08 03 A6 */	mtlr r0
/* 803BE0A4 003BAFE4  38 21 00 10 */	addi r1, r1, 0x10
/* 803BE0A8 003BAFE8  4E 80 00 20 */	blr 
.endfn __ct__Q43ebi5title18TTitleLightSetting10TMainParmsFv

.fn __dt__8LightObjFv, weak
/* 803BE0AC 003BAFEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BE0B0 003BAFF0  7C 08 02 A6 */	mflr r0
/* 803BE0B4 003BAFF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BE0B8 003BAFF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BE0BC 003BAFFC  7C 9F 23 78 */	mr r31, r4
/* 803BE0C0 003BB000  93 C1 00 08 */	stw r30, 8(r1)
/* 803BE0C4 003BB004  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BE0C8 003BB008  41 82 00 28 */	beq .L_803BE0F0
/* 803BE0CC 003BB00C  3C A0 80 4F */	lis r5, __vt__8LightObj@ha
/* 803BE0D0 003BB010  38 80 00 00 */	li r4, 0
/* 803BE0D4 003BB014  38 05 BE B4 */	addi r0, r5, __vt__8LightObj@l
/* 803BE0D8 003BB018  90 1E 00 00 */	stw r0, 0(r30)
/* 803BE0DC 003BB01C  48 05 34 AD */	bl __dt__5CNodeFv
/* 803BE0E0 003BB020  7F E0 07 35 */	extsh. r0, r31
/* 803BE0E4 003BB024  40 81 00 0C */	ble .L_803BE0F0
/* 803BE0E8 003BB028  7F C3 F3 78 */	mr r3, r30
/* 803BE0EC 003BB02C  4B C6 5F C9 */	bl __dl__FPv
.L_803BE0F0:
/* 803BE0F0 003BB030  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BE0F4 003BB034  7F C3 F3 78 */	mr r3, r30
/* 803BE0F8 003BB038  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BE0FC 003BB03C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BE100 003BB040  7C 08 03 A6 */	mtlr r0
/* 803BE104 003BB044  38 21 00 10 */	addi r1, r1, 0x10
/* 803BE108 003BB048  4E 80 00 20 */	blr 
.endfn __dt__8LightObjFv

.fn __dt__Q33ebi5title15TTitleCameraMgrFv, weak
/* 803BE10C 003BB04C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BE110 003BB050  7C 08 02 A6 */	mflr r0
/* 803BE114 003BB054  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BE118 003BB058  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BE11C 003BB05C  7C 7F 1B 79 */	or. r31, r3, r3
/* 803BE120 003BB060  93 C1 00 08 */	stw r30, 8(r1)
/* 803BE124 003BB064  7C 9E 23 78 */	mr r30, r4
/* 803BE128 003BB068  41 82 00 98 */	beq .L_803BE1C0
/* 803BE12C 003BB06C  3C 80 80 4E */	lis r4, __vt__Q33ebi5title15TTitleCameraMgr@ha
/* 803BE130 003BB070  38 04 78 EC */	addi r0, r4, __vt__Q33ebi5title15TTitleCameraMgr@l
/* 803BE134 003BB074  90 1F 00 00 */	stw r0, 0(r31)
/* 803BE138 003BB078  41 82 00 78 */	beq .L_803BE1B0
/* 803BE13C 003BB07C  3C 80 80 4F */	lis r4, __vt__12LookAtCamera@ha
/* 803BE140 003BB080  38 04 B7 A0 */	addi r0, r4, __vt__12LookAtCamera@l
/* 803BE144 003BB084  90 1F 00 00 */	stw r0, 0(r31)
/* 803BE148 003BB088  41 82 00 68 */	beq .L_803BE1B0
/* 803BE14C 003BB08C  3C 80 80 4F */	lis r4, __vt__6Camera@ha
/* 803BE150 003BB090  38 04 B8 20 */	addi r0, r4, __vt__6Camera@l
/* 803BE154 003BB094  90 1F 00 00 */	stw r0, 0(r31)
/* 803BE158 003BB098  41 82 00 58 */	beq .L_803BE1B0
/* 803BE15C 003BB09C  3C 80 80 4F */	lis r4, __vt__11CullFrustum@ha
/* 803BE160 003BB0A0  38 04 B8 9C */	addi r0, r4, __vt__11CullFrustum@l
/* 803BE164 003BB0A4  90 1F 00 00 */	stw r0, 0(r31)
/* 803BE168 003BB0A8  41 82 00 48 */	beq .L_803BE1B0
/* 803BE16C 003BB0AC  3C 80 80 4B */	lis r4, __vt__9CullPlane@ha
/* 803BE170 003BB0B0  38 04 0E 94 */	addi r0, r4, __vt__9CullPlane@l
/* 803BE174 003BB0B4  90 1F 00 00 */	stw r0, 0(r31)
/* 803BE178 003BB0B8  41 82 00 38 */	beq .L_803BE1B0
/* 803BE17C 003BB0BC  3C 80 80 4B */	lis r4, "__vt__22ArrayContainer<5Plane>"@ha
/* 803BE180 003BB0C0  38 04 0E 4C */	addi r0, r4, "__vt__22ArrayContainer<5Plane>"@l
/* 803BE184 003BB0C4  90 1F 00 00 */	stw r0, 0(r31)
/* 803BE188 003BB0C8  41 82 00 28 */	beq .L_803BE1B0
/* 803BE18C 003BB0CC  3C 80 80 4B */	lis r4, "__vt__17Container<5Plane>"@ha
/* 803BE190 003BB0D0  38 04 0E 20 */	addi r0, r4, "__vt__17Container<5Plane>"@l
/* 803BE194 003BB0D4  90 1F 00 00 */	stw r0, 0(r31)
/* 803BE198 003BB0D8  41 82 00 18 */	beq .L_803BE1B0
/* 803BE19C 003BB0DC  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 803BE1A0 003BB0E0  38 80 00 00 */	li r4, 0
/* 803BE1A4 003BB0E4  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 803BE1A8 003BB0E8  90 1F 00 00 */	stw r0, 0(r31)
/* 803BE1AC 003BB0EC  48 05 33 DD */	bl __dt__5CNodeFv
.L_803BE1B0:
/* 803BE1B0 003BB0F0  7F C0 07 35 */	extsh. r0, r30
/* 803BE1B4 003BB0F4  40 81 00 0C */	ble .L_803BE1C0
/* 803BE1B8 003BB0F8  7F E3 FB 78 */	mr r3, r31
/* 803BE1BC 003BB0FC  4B C6 5E F9 */	bl __dl__FPv
.L_803BE1C0:
/* 803BE1C0 003BB100  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BE1C4 003BB104  7F E3 FB 78 */	mr r3, r31
/* 803BE1C8 003BB108  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BE1CC 003BB10C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BE1D0 003BB110  7C 08 03 A6 */	mtlr r0
/* 803BE1D4 003BB114  38 21 00 10 */	addi r1, r1, 0x10
/* 803BE1D8 003BB118  4E 80 00 20 */	blr 
.endfn __dt__Q33ebi5title15TTitleCameraMgrFv

.fn __dt__8ViewportFv, weak
/* 803BE1DC 003BB11C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BE1E0 003BB120  7C 08 02 A6 */	mflr r0
/* 803BE1E4 003BB124  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BE1E8 003BB128  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BE1EC 003BB12C  7C 9F 23 78 */	mr r31, r4
/* 803BE1F0 003BB130  93 C1 00 08 */	stw r30, 8(r1)
/* 803BE1F4 003BB134  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BE1F8 003BB138  41 82 00 28 */	beq .L_803BE220
/* 803BE1FC 003BB13C  3C A0 80 4E */	lis r5, __vt__8Viewport@ha
/* 803BE200 003BB140  38 80 00 00 */	li r4, 0
/* 803BE204 003BB144  38 05 78 BC */	addi r0, r5, __vt__8Viewport@l
/* 803BE208 003BB148  90 1E 00 00 */	stw r0, 0(r30)
/* 803BE20C 003BB14C  48 05 33 7D */	bl __dt__5CNodeFv
/* 803BE210 003BB150  7F E0 07 35 */	extsh. r0, r31
/* 803BE214 003BB154  40 81 00 0C */	ble .L_803BE220
/* 803BE218 003BB158  7F C3 F3 78 */	mr r3, r30
/* 803BE21C 003BB15C  4B C6 5E 99 */	bl __dl__FPv
.L_803BE220:
/* 803BE220 003BB160  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BE224 003BB164  7F C3 F3 78 */	mr r3, r30
/* 803BE228 003BB168  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BE22C 003BB16C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BE230 003BB170  7C 08 03 A6 */	mtlr r0
/* 803BE234 003BB174  38 21 00 10 */	addi r1, r1, 0x10
/* 803BE238 003BB178  4E 80 00 20 */	blr 
.endfn __dt__8ViewportFv

.fn __dt__Q33ebi5title9TCoordMgrFv, weak
/* 803BE23C 003BB17C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BE240 003BB180  7C 08 02 A6 */	mflr r0
/* 803BE244 003BB184  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BE248 003BB188  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BE24C 003BB18C  7C 9F 23 78 */	mr r31, r4
/* 803BE250 003BB190  93 C1 00 08 */	stw r30, 8(r1)
/* 803BE254 003BB194  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BE258 003BB198  41 82 00 28 */	beq .L_803BE280
/* 803BE25C 003BB19C  3C A0 80 4E */	lis r5, __vt__Q33ebi5title9TCoordMgr@ha
/* 803BE260 003BB1A0  38 80 00 00 */	li r4, 0
/* 803BE264 003BB1A4  38 05 78 AC */	addi r0, r5, __vt__Q33ebi5title9TCoordMgr@l
/* 803BE268 003BB1A8  90 1E 00 00 */	stw r0, 0(r30)
/* 803BE26C 003BB1AC  48 05 33 1D */	bl __dt__5CNodeFv
/* 803BE270 003BB1B0  7F E0 07 35 */	extsh. r0, r31
/* 803BE274 003BB1B4  40 81 00 0C */	ble .L_803BE280
/* 803BE278 003BB1B8  7F C3 F3 78 */	mr r3, r30
/* 803BE27C 003BB1BC  4B C6 5E 39 */	bl __dl__FPv
.L_803BE280:
/* 803BE280 003BB1C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BE284 003BB1C4  7F C3 F3 78 */	mr r3, r30
/* 803BE288 003BB1C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BE28C 003BB1CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BE290 003BB1D0  7C 08 03 A6 */	mtlr r0
/* 803BE294 003BB1D4  38 21 00 10 */	addi r1, r1, 0x10
/* 803BE298 003BB1D8  4E 80 00 20 */	blr 
.endfn __dt__Q33ebi5title9TCoordMgrFv

.fn __dt__Q43ebi5title6Chappy4TMgrFv, weak
/* 803BE29C 003BB1DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BE2A0 003BB1E0  7C 08 02 A6 */	mflr r0
/* 803BE2A4 003BB1E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BE2A8 003BB1E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BE2AC 003BB1EC  7C 9F 23 78 */	mr r31, r4
/* 803BE2B0 003BB1F0  93 C1 00 08 */	stw r30, 8(r1)
/* 803BE2B4 003BB1F4  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BE2B8 003BB1F8  41 82 00 28 */	beq .L_803BE2E0
/* 803BE2BC 003BB1FC  3C A0 80 4E */	lis r5, __vt__Q43ebi5title6Chappy4TMgr@ha
/* 803BE2C0 003BB200  38 80 00 00 */	li r4, 0
/* 803BE2C4 003BB204  38 05 78 9C */	addi r0, r5, __vt__Q43ebi5title6Chappy4TMgr@l
/* 803BE2C8 003BB208  90 1E 00 00 */	stw r0, 0(r30)
/* 803BE2CC 003BB20C  48 05 32 BD */	bl __dt__5CNodeFv
/* 803BE2D0 003BB210  7F E0 07 35 */	extsh. r0, r31
/* 803BE2D4 003BB214  40 81 00 0C */	ble .L_803BE2E0
/* 803BE2D8 003BB218  7F C3 F3 78 */	mr r3, r30
/* 803BE2DC 003BB21C  4B C6 5D D9 */	bl __dl__FPv
.L_803BE2E0:
/* 803BE2E0 003BB220  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BE2E4 003BB224  7F C3 F3 78 */	mr r3, r30
/* 803BE2E8 003BB228  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BE2EC 003BB22C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BE2F0 003BB230  7C 08 03 A6 */	mtlr r0
/* 803BE2F4 003BB234  38 21 00 10 */	addi r1, r1, 0x10
/* 803BE2F8 003BB238  4E 80 00 20 */	blr 
.endfn __dt__Q43ebi5title6Chappy4TMgrFv

.fn __dt__Q43ebi5title6Kogane4TMgrFv, weak
/* 803BE2FC 003BB23C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BE300 003BB240  7C 08 02 A6 */	mflr r0
/* 803BE304 003BB244  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BE308 003BB248  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BE30C 003BB24C  7C 9F 23 78 */	mr r31, r4
/* 803BE310 003BB250  93 C1 00 08 */	stw r30, 8(r1)
/* 803BE314 003BB254  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BE318 003BB258  41 82 00 28 */	beq .L_803BE340
/* 803BE31C 003BB25C  3C A0 80 4E */	lis r5, __vt__Q43ebi5title6Kogane4TMgr@ha
/* 803BE320 003BB260  38 80 00 00 */	li r4, 0
/* 803BE324 003BB264  38 05 78 8C */	addi r0, r5, __vt__Q43ebi5title6Kogane4TMgr@l
/* 803BE328 003BB268  90 1E 00 00 */	stw r0, 0(r30)
/* 803BE32C 003BB26C  48 05 32 5D */	bl __dt__5CNodeFv
/* 803BE330 003BB270  7F E0 07 35 */	extsh. r0, r31
/* 803BE334 003BB274  40 81 00 0C */	ble .L_803BE340
/* 803BE338 003BB278  7F C3 F3 78 */	mr r3, r30
/* 803BE33C 003BB27C  4B C6 5D 79 */	bl __dl__FPv
.L_803BE340:
/* 803BE340 003BB280  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BE344 003BB284  7F C3 F3 78 */	mr r3, r30
/* 803BE348 003BB288  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BE34C 003BB28C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BE350 003BB290  7C 08 03 A6 */	mtlr r0
/* 803BE354 003BB294  38 21 00 10 */	addi r1, r1, 0x10
/* 803BE358 003BB298  4E 80 00 20 */	blr 
.endfn __dt__Q43ebi5title6Kogane4TMgrFv

.fn __dt__Q43ebi5title6Pikmin4TMgrFv, weak
/* 803BE35C 003BB29C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BE360 003BB2A0  7C 08 02 A6 */	mflr r0
/* 803BE364 003BB2A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BE368 003BB2A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BE36C 003BB2AC  7C 9F 23 78 */	mr r31, r4
/* 803BE370 003BB2B0  93 C1 00 08 */	stw r30, 8(r1)
/* 803BE374 003BB2B4  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BE378 003BB2B8  41 82 00 4C */	beq .L_803BE3C4
/* 803BE37C 003BB2BC  3C 60 80 4E */	lis r3, __vt__Q43ebi5title6Pikmin4TMgr@ha
/* 803BE380 003BB2C0  34 1E 02 B0 */	addic. r0, r30, 0x2b0
/* 803BE384 003BB2C4  38 03 78 7C */	addi r0, r3, __vt__Q43ebi5title6Pikmin4TMgr@l
/* 803BE388 003BB2C8  90 1E 00 00 */	stw r0, 0(r30)
/* 803BE38C 003BB2CC  41 82 00 1C */	beq .L_803BE3A8
/* 803BE390 003BB2D0  3C 80 80 4E */	lis r4, __vt__Q43ebi5title6Pikmin13TBoidParamMgr@ha
/* 803BE394 003BB2D4  38 7E 02 B0 */	addi r3, r30, 0x2b0
/* 803BE398 003BB2D8  38 04 78 6C */	addi r0, r4, __vt__Q43ebi5title6Pikmin13TBoidParamMgr@l
/* 803BE39C 003BB2DC  38 80 00 00 */	li r4, 0
/* 803BE3A0 003BB2E0  90 1E 02 B0 */	stw r0, 0x2b0(r30)
/* 803BE3A4 003BB2E4  48 05 31 E5 */	bl __dt__5CNodeFv
.L_803BE3A8:
/* 803BE3A8 003BB2E8  7F C3 F3 78 */	mr r3, r30
/* 803BE3AC 003BB2EC  38 80 00 00 */	li r4, 0
/* 803BE3B0 003BB2F0  48 05 31 D9 */	bl __dt__5CNodeFv
/* 803BE3B4 003BB2F4  7F E0 07 35 */	extsh. r0, r31
/* 803BE3B8 003BB2F8  40 81 00 0C */	ble .L_803BE3C4
/* 803BE3BC 003BB2FC  7F C3 F3 78 */	mr r3, r30
/* 803BE3C0 003BB300  4B C6 5C F5 */	bl __dl__FPv
.L_803BE3C4:
/* 803BE3C4 003BB304  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BE3C8 003BB308  7F C3 F3 78 */	mr r3, r30
/* 803BE3CC 003BB30C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BE3D0 003BB310  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BE3D4 003BB314  7C 08 03 A6 */	mtlr r0
/* 803BE3D8 003BB318  38 21 00 10 */	addi r1, r1, 0x10
/* 803BE3DC 003BB31C  4E 80 00 20 */	blr 
.endfn __dt__Q43ebi5title6Pikmin4TMgrFv

.fn __dt__12J3DFrameCtrlFv, weak
/* 803BE3E0 003BB320  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BE3E4 003BB324  7C 08 02 A6 */	mflr r0
/* 803BE3E8 003BB328  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BE3EC 003BB32C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BE3F0 003BB330  7C 7F 1B 79 */	or. r31, r3, r3
/* 803BE3F4 003BB334  41 82 00 1C */	beq .L_803BE410
/* 803BE3F8 003BB338  3C A0 80 4E */	lis r5, __vt__12J3DFrameCtrl@ha
/* 803BE3FC 003BB33C  7C 80 07 35 */	extsh. r0, r4
/* 803BE400 003BB340  38 05 79 8C */	addi r0, r5, __vt__12J3DFrameCtrl@l
/* 803BE404 003BB344  90 1F 00 00 */	stw r0, 0(r31)
/* 803BE408 003BB348  40 81 00 08 */	ble .L_803BE410
/* 803BE40C 003BB34C  4B C6 5C A9 */	bl __dl__FPv
.L_803BE410:
/* 803BE410 003BB350  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BE414 003BB354  7F E3 FB 78 */	mr r3, r31
/* 803BE418 003BB358  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BE41C 003BB35C  7C 08 03 A6 */	mtlr r0
/* 803BE420 003BB360  38 21 00 10 */	addi r1, r1, 0x10
/* 803BE424 003BB364  4E 80 00 20 */	blr 
.endfn __dt__12J3DFrameCtrlFv

.fn __dt__Q33ebi5title9TTitleMgrFv, global
/* 803BE428 003BB368  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BE42C 003BB36C  7C 08 02 A6 */	mflr r0
/* 803BE430 003BB370  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BE434 003BB374  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BE438 003BB378  7C 9F 23 78 */	mr r31, r4
/* 803BE43C 003BB37C  93 C1 00 08 */	stw r30, 8(r1)
/* 803BE440 003BB380  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BE444 003BB384  41 82 03 14 */	beq .L_803BE758
/* 803BE448 003BB388  3C 60 80 4E */	lis r3, __vt__Q33ebi5title9TTitleMgr@ha
/* 803BE44C 003BB38C  34 1E 47 88 */	addic. r0, r30, 0x4788
/* 803BE450 003BB390  38 63 78 50 */	addi r3, r3, __vt__Q33ebi5title9TTitleMgr@l
/* 803BE454 003BB394  38 00 00 00 */	li r0, 0
/* 803BE458 003BB398  90 7E 00 00 */	stw r3, 0(r30)
/* 803BE45C 003BB39C  38 63 00 10 */	addi r3, r3, 0x10
/* 803BE460 003BB3A0  90 7E 00 18 */	stw r3, 0x18(r30)
/* 803BE464 003BB3A4  90 0D 9A 2C */	stw r0, _instance__Q33ebi5title9TTitleMgr@sda21(r13)
/* 803BE468 003BB3A8  90 0D 9A 28 */	stw r0, titleMgr__Q23ebi5title@sda21(r13)
/* 803BE46C 003BB3AC  41 82 00 30 */	beq .L_803BE49C
/* 803BE470 003BB3B0  3C 60 80 4E */	lis r3, __vt__Q33ebi5title12TTitleFogMgr@ha
/* 803BE474 003BB3B4  34 1E 47 88 */	addic. r0, r30, 0x4788
/* 803BE478 003BB3B8  38 03 78 DC */	addi r0, r3, __vt__Q33ebi5title12TTitleFogMgr@l
/* 803BE47C 003BB3BC  90 1E 47 88 */	stw r0, 0x4788(r30)
/* 803BE480 003BB3C0  41 82 00 1C */	beq .L_803BE49C
/* 803BE484 003BB3C4  3C 80 80 4E */	lis r4, __vt__6FogMgr@ha
/* 803BE488 003BB3C8  38 7E 47 88 */	addi r3, r30, 0x4788
/* 803BE48C 003BB3CC  38 04 78 CC */	addi r0, r4, __vt__6FogMgr@l
/* 803BE490 003BB3D0  38 80 00 00 */	li r4, 0
/* 803BE494 003BB3D4  90 1E 47 88 */	stw r0, 0x4788(r30)
/* 803BE498 003BB3D8  48 05 30 F1 */	bl __dt__5CNodeFv
.L_803BE49C:
/* 803BE49C 003BB3DC  34 1E 42 70 */	addic. r0, r30, 0x4270
/* 803BE4A0 003BB3E0  41 82 00 90 */	beq .L_803BE530
/* 803BE4A4 003BB3E4  3C 80 80 4E */	lis r4, __vt__Q33ebi5title14TTitleLightMgr@ha
/* 803BE4A8 003BB3E8  34 7E 43 18 */	addic. r3, r30, 0x4318
/* 803BE4AC 003BB3EC  38 04 79 E4 */	addi r0, r4, __vt__Q33ebi5title14TTitleLightMgr@l
/* 803BE4B0 003BB3F0  90 1E 42 70 */	stw r0, 0x4270(r30)
/* 803BE4B4 003BB3F4  41 82 00 18 */	beq .L_803BE4CC
/* 803BE4B8 003BB3F8  3C 80 80 4F */	lis r4, __vt__8LightObj@ha
/* 803BE4BC 003BB3FC  38 04 BE B4 */	addi r0, r4, __vt__8LightObj@l
/* 803BE4C0 003BB400  90 1E 43 18 */	stw r0, 0x4318(r30)
/* 803BE4C4 003BB404  38 80 00 00 */	li r4, 0
/* 803BE4C8 003BB408  48 05 30 C1 */	bl __dt__5CNodeFv
.L_803BE4CC:
/* 803BE4CC 003BB40C  34 7E 42 C0 */	addic. r3, r30, 0x42c0
/* 803BE4D0 003BB410  41 82 00 18 */	beq .L_803BE4E8
/* 803BE4D4 003BB414  3C 80 80 4F */	lis r4, __vt__8LightObj@ha
/* 803BE4D8 003BB418  38 04 BE B4 */	addi r0, r4, __vt__8LightObj@l
/* 803BE4DC 003BB41C  90 1E 42 C0 */	stw r0, 0x42c0(r30)
/* 803BE4E0 003BB420  38 80 00 00 */	li r4, 0
/* 803BE4E4 003BB424  48 05 30 A5 */	bl __dt__5CNodeFv
.L_803BE4E8:
/* 803BE4E8 003BB428  34 1E 42 70 */	addic. r0, r30, 0x4270
/* 803BE4EC 003BB42C  41 82 00 44 */	beq .L_803BE530
/* 803BE4F0 003BB430  3C 80 80 4F */	lis r4, __vt__8LightMgr@ha
/* 803BE4F4 003BB434  38 7E 42 A4 */	addi r3, r30, 0x42a4
/* 803BE4F8 003BB438  38 04 BE 94 */	addi r0, r4, __vt__8LightMgr@l
/* 803BE4FC 003BB43C  38 80 FF FF */	li r4, -1
/* 803BE500 003BB440  90 1E 42 70 */	stw r0, 0x4270(r30)
/* 803BE504 003BB444  48 05 30 85 */	bl __dt__5CNodeFv
/* 803BE508 003BB448  34 7E 42 88 */	addic. r3, r30, 0x4288
/* 803BE50C 003BB44C  41 82 00 18 */	beq .L_803BE524
/* 803BE510 003BB450  3C 80 80 4B */	lis r4, __vt__15AmbientLightObj@ha
/* 803BE514 003BB454  38 04 C4 60 */	addi r0, r4, __vt__15AmbientLightObj@l
/* 803BE518 003BB458  90 1E 42 88 */	stw r0, 0x4288(r30)
/* 803BE51C 003BB45C  38 80 00 00 */	li r4, 0
/* 803BE520 003BB460  48 05 30 69 */	bl __dt__5CNodeFv
.L_803BE524:
/* 803BE524 003BB464  38 7E 42 70 */	addi r3, r30, 0x4270
/* 803BE528 003BB468  38 80 00 00 */	li r4, 0
/* 803BE52C 003BB46C  48 05 30 5D */	bl __dt__5CNodeFv
.L_803BE530:
/* 803BE530 003BB470  34 1E 40 78 */	addic. r0, r30, 0x4078
/* 803BE534 003BB474  41 82 00 A8 */	beq .L_803BE5DC
/* 803BE538 003BB478  3C 60 80 4E */	lis r3, __vt__Q33ebi5title15TTitleCameraMgr@ha
/* 803BE53C 003BB47C  34 1E 40 78 */	addic. r0, r30, 0x4078
/* 803BE540 003BB480  38 03 78 EC */	addi r0, r3, __vt__Q33ebi5title15TTitleCameraMgr@l
/* 803BE544 003BB484  90 1E 40 78 */	stw r0, 0x4078(r30)
/* 803BE548 003BB488  41 82 00 94 */	beq .L_803BE5DC
/* 803BE54C 003BB48C  3C 60 80 4F */	lis r3, __vt__12LookAtCamera@ha
/* 803BE550 003BB490  34 1E 40 78 */	addic. r0, r30, 0x4078
/* 803BE554 003BB494  38 03 B7 A0 */	addi r0, r3, __vt__12LookAtCamera@l
/* 803BE558 003BB498  90 1E 40 78 */	stw r0, 0x4078(r30)
/* 803BE55C 003BB49C  41 82 00 80 */	beq .L_803BE5DC
/* 803BE560 003BB4A0  3C 60 80 4F */	lis r3, __vt__6Camera@ha
/* 803BE564 003BB4A4  34 1E 40 78 */	addic. r0, r30, 0x4078
/* 803BE568 003BB4A8  38 03 B8 20 */	addi r0, r3, __vt__6Camera@l
/* 803BE56C 003BB4AC  90 1E 40 78 */	stw r0, 0x4078(r30)
/* 803BE570 003BB4B0  41 82 00 6C */	beq .L_803BE5DC
/* 803BE574 003BB4B4  3C 60 80 4F */	lis r3, __vt__11CullFrustum@ha
/* 803BE578 003BB4B8  34 1E 40 78 */	addic. r0, r30, 0x4078
/* 803BE57C 003BB4BC  38 03 B8 9C */	addi r0, r3, __vt__11CullFrustum@l
/* 803BE580 003BB4C0  90 1E 40 78 */	stw r0, 0x4078(r30)
/* 803BE584 003BB4C4  41 82 00 58 */	beq .L_803BE5DC
/* 803BE588 003BB4C8  3C 60 80 4B */	lis r3, __vt__9CullPlane@ha
/* 803BE58C 003BB4CC  34 1E 40 78 */	addic. r0, r30, 0x4078
/* 803BE590 003BB4D0  38 03 0E 94 */	addi r0, r3, __vt__9CullPlane@l
/* 803BE594 003BB4D4  90 1E 40 78 */	stw r0, 0x4078(r30)
/* 803BE598 003BB4D8  41 82 00 44 */	beq .L_803BE5DC
/* 803BE59C 003BB4DC  3C 60 80 4B */	lis r3, "__vt__22ArrayContainer<5Plane>"@ha
/* 803BE5A0 003BB4E0  34 1E 40 78 */	addic. r0, r30, 0x4078
/* 803BE5A4 003BB4E4  38 03 0E 4C */	addi r0, r3, "__vt__22ArrayContainer<5Plane>"@l
/* 803BE5A8 003BB4E8  90 1E 40 78 */	stw r0, 0x4078(r30)
/* 803BE5AC 003BB4EC  41 82 00 30 */	beq .L_803BE5DC
/* 803BE5B0 003BB4F0  3C 60 80 4B */	lis r3, "__vt__17Container<5Plane>"@ha
/* 803BE5B4 003BB4F4  34 1E 40 78 */	addic. r0, r30, 0x4078
/* 803BE5B8 003BB4F8  38 03 0E 20 */	addi r0, r3, "__vt__17Container<5Plane>"@l
/* 803BE5BC 003BB4FC  90 1E 40 78 */	stw r0, 0x4078(r30)
/* 803BE5C0 003BB500  41 82 00 1C */	beq .L_803BE5DC
/* 803BE5C4 003BB504  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 803BE5C8 003BB508  38 7E 40 78 */	addi r3, r30, 0x4078
/* 803BE5CC 003BB50C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 803BE5D0 003BB510  38 80 00 00 */	li r4, 0
/* 803BE5D4 003BB514  90 1E 40 78 */	stw r0, 0x4078(r30)
/* 803BE5D8 003BB518  48 05 2F B1 */	bl __dt__5CNodeFv
.L_803BE5DC:
/* 803BE5DC 003BB51C  34 1E 40 20 */	addic. r0, r30, 0x4020
/* 803BE5E0 003BB520  41 82 00 1C */	beq .L_803BE5FC
/* 803BE5E4 003BB524  3C 80 80 4E */	lis r4, __vt__8Viewport@ha
/* 803BE5E8 003BB528  38 7E 40 20 */	addi r3, r30, 0x4020
/* 803BE5EC 003BB52C  38 04 78 BC */	addi r0, r4, __vt__8Viewport@l
/* 803BE5F0 003BB530  38 80 00 00 */	li r4, 0
/* 803BE5F4 003BB534  90 1E 40 20 */	stw r0, 0x4020(r30)
/* 803BE5F8 003BB538  48 05 2F 91 */	bl __dt__5CNodeFv
.L_803BE5FC:
/* 803BE5FC 003BB53C  3C 80 80 3C */	lis r4, __dt__Q33ebi5title9TCoordMgrFv@ha
/* 803BE600 003BB540  38 7E 1F 24 */	addi r3, r30, 0x1f24
/* 803BE604 003BB544  38 84 E2 3C */	addi r4, r4, __dt__Q33ebi5title9TCoordMgrFv@l
/* 803BE608 003BB548  38 A0 10 7C */	li r5, 0x107c
/* 803BE60C 003BB54C  38 C0 00 02 */	li r6, 2
/* 803BE610 003BB550  4B D0 31 B5 */	bl __destroy_arr
/* 803BE614 003BB554  34 1E 0C F4 */	addic. r0, r30, 0xcf4
/* 803BE618 003BB558  41 82 00 1C */	beq .L_803BE634
/* 803BE61C 003BB55C  3C 80 80 4E */	lis r4, __vt__Q43ebi5title6Chappy4TMgr@ha
/* 803BE620 003BB560  38 7E 0C F4 */	addi r3, r30, 0xcf4
/* 803BE624 003BB564  38 04 78 9C */	addi r0, r4, __vt__Q43ebi5title6Chappy4TMgr@l
/* 803BE628 003BB568  38 80 00 00 */	li r4, 0
/* 803BE62C 003BB56C  90 1E 0C F4 */	stw r0, 0xcf4(r30)
/* 803BE630 003BB570  48 05 2F 59 */	bl __dt__5CNodeFv
.L_803BE634:
/* 803BE634 003BB574  34 1E 0A E4 */	addic. r0, r30, 0xae4
/* 803BE638 003BB578  41 82 00 1C */	beq .L_803BE654
/* 803BE63C 003BB57C  3C 80 80 4E */	lis r4, __vt__Q43ebi5title6Kogane4TMgr@ha
/* 803BE640 003BB580  38 7E 0A E4 */	addi r3, r30, 0xae4
/* 803BE644 003BB584  38 04 78 8C */	addi r0, r4, __vt__Q43ebi5title6Kogane4TMgr@l
/* 803BE648 003BB588  38 80 00 00 */	li r4, 0
/* 803BE64C 003BB58C  90 1E 0A E4 */	stw r0, 0xae4(r30)
/* 803BE650 003BB590  48 05 2F 39 */	bl __dt__5CNodeFv
.L_803BE654:
/* 803BE654 003BB594  34 1E 01 54 */	addic. r0, r30, 0x154
/* 803BE658 003BB598  41 82 00 38 */	beq .L_803BE690
/* 803BE65C 003BB59C  3C 80 80 4E */	lis r4, __vt__Q43ebi5title6Pikmin4TMgr@ha
/* 803BE660 003BB5A0  34 7E 04 04 */	addic. r3, r30, 0x404
/* 803BE664 003BB5A4  38 04 78 7C */	addi r0, r4, __vt__Q43ebi5title6Pikmin4TMgr@l
/* 803BE668 003BB5A8  90 1E 01 54 */	stw r0, 0x154(r30)
/* 803BE66C 003BB5AC  41 82 00 18 */	beq .L_803BE684
/* 803BE670 003BB5B0  3C 80 80 4E */	lis r4, __vt__Q43ebi5title6Pikmin13TBoidParamMgr@ha
/* 803BE674 003BB5B4  38 04 78 6C */	addi r0, r4, __vt__Q43ebi5title6Pikmin13TBoidParamMgr@l
/* 803BE678 003BB5B8  90 1E 04 04 */	stw r0, 0x404(r30)
/* 803BE67C 003BB5BC  38 80 00 00 */	li r4, 0
/* 803BE680 003BB5C0  48 05 2F 09 */	bl __dt__5CNodeFv
.L_803BE684:
/* 803BE684 003BB5C4  38 7E 01 54 */	addi r3, r30, 0x154
/* 803BE688 003BB5C8  38 80 00 00 */	li r4, 0
/* 803BE68C 003BB5CC  48 05 2E FD */	bl __dt__5CNodeFv
.L_803BE690:
/* 803BE690 003BB5D0  34 1E 00 F0 */	addic. r0, r30, 0xf0
/* 803BE694 003BB5D4  41 82 00 38 */	beq .L_803BE6CC
/* 803BE698 003BB5D8  3C 60 80 4E */	lis r3, __vt__Q33ebi5title11TBlackPlane@ha
/* 803BE69C 003BB5DC  34 1E 01 3C */	addic. r0, r30, 0x13c
/* 803BE6A0 003BB5E0  38 03 79 6C */	addi r0, r3, __vt__Q33ebi5title11TBlackPlane@l
/* 803BE6A4 003BB5E4  90 1E 00 F0 */	stw r0, 0xf0(r30)
/* 803BE6A8 003BB5E8  41 82 00 10 */	beq .L_803BE6B8
/* 803BE6AC 003BB5EC  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803BE6B0 003BB5F0  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803BE6B4 003BB5F4  90 1E 01 3C */	stw r0, 0x13c(r30)
.L_803BE6B8:
/* 803BE6B8 003BB5F8  34 1E 01 20 */	addic. r0, r30, 0x120
/* 803BE6BC 003BB5FC  41 82 00 10 */	beq .L_803BE6CC
/* 803BE6C0 003BB600  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803BE6C4 003BB604  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803BE6C8 003BB608  90 1E 01 20 */	stw r0, 0x120(r30)
.L_803BE6CC:
/* 803BE6CC 003BB60C  34 1E 00 A4 */	addic. r0, r30, 0xa4
/* 803BE6D0 003BB610  41 82 00 24 */	beq .L_803BE6F4
/* 803BE6D4 003BB614  3C 60 80 4E */	lis r3, __vt__Q33ebi5title12TBGEnemyBase@ha
/* 803BE6D8 003BB618  34 1E 00 D4 */	addic. r0, r30, 0xd4
/* 803BE6DC 003BB61C  38 03 79 7C */	addi r0, r3, __vt__Q33ebi5title12TBGEnemyBase@l
/* 803BE6E0 003BB620  90 1E 00 A4 */	stw r0, 0xa4(r30)
/* 803BE6E4 003BB624  41 82 00 10 */	beq .L_803BE6F4
/* 803BE6E8 003BB628  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803BE6EC 003BB62C  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803BE6F0 003BB630  90 1E 00 D4 */	stw r0, 0xd4(r30)
.L_803BE6F4:
/* 803BE6F4 003BB634  34 1E 00 30 */	addic. r0, r30, 0x30
/* 803BE6F8 003BB638  41 82 00 38 */	beq .L_803BE730
/* 803BE6FC 003BB63C  3C 60 80 4E */	lis r3, __vt__Q33ebi5title8TMapBase@ha
/* 803BE700 003BB640  34 1E 00 80 */	addic. r0, r30, 0x80
/* 803BE704 003BB644  38 03 79 98 */	addi r0, r3, __vt__Q33ebi5title8TMapBase@l
/* 803BE708 003BB648  90 1E 00 30 */	stw r0, 0x30(r30)
/* 803BE70C 003BB64C  41 82 00 10 */	beq .L_803BE71C
/* 803BE710 003BB650  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803BE714 003BB654  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803BE718 003BB658  90 1E 00 80 */	stw r0, 0x80(r30)
.L_803BE71C:
/* 803BE71C 003BB65C  34 1E 00 64 */	addic. r0, r30, 0x64
/* 803BE720 003BB660  41 82 00 10 */	beq .L_803BE730
/* 803BE724 003BB664  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803BE728 003BB668  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803BE72C 003BB66C  90 1E 00 64 */	stw r0, 0x64(r30)
.L_803BE730:
/* 803BE730 003BB670  38 7E 00 18 */	addi r3, r30, 0x18
/* 803BE734 003BB674  38 80 00 00 */	li r4, 0
/* 803BE738 003BB678  4B C5 E8 FD */	bl __dt__11JKRDisposerFv
/* 803BE73C 003BB67C  7F C3 F3 78 */	mr r3, r30
/* 803BE740 003BB680  38 80 00 00 */	li r4, 0
/* 803BE744 003BB684  48 05 2E 45 */	bl __dt__5CNodeFv
/* 803BE748 003BB688  7F E0 07 35 */	extsh. r0, r31
/* 803BE74C 003BB68C  40 81 00 0C */	ble .L_803BE758
/* 803BE750 003BB690  7F C3 F3 78 */	mr r3, r30
/* 803BE754 003BB694  4B C6 59 61 */	bl __dl__FPv
.L_803BE758:
/* 803BE758 003BB698  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BE75C 003BB69C  7F C3 F3 78 */	mr r3, r30
/* 803BE760 003BB6A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BE764 003BB6A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803BE768 003BB6A8  7C 08 03 A6 */	mtlr r0
/* 803BE76C 003BB6AC  38 21 00 10 */	addi r1, r1, 0x10
/* 803BE770 003BB6B0  4E 80 00 20 */	blr 
.endfn __dt__Q33ebi5title9TTitleMgrFv

.fn globalInstance__Q33ebi5title9TTitleMgrFv, global
/* 803BE774 003BB6B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BE778 003BB6B8  7C 08 02 A6 */	mflr r0
/* 803BE77C 003BB6BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BE780 003BB6C0  48 00 00 19 */	bl Instance__Q33ebi5title9TTitleMgrFv
/* 803BE784 003BB6C4  90 6D 9A 28 */	stw r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803BE788 003BB6C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BE78C 003BB6CC  7C 08 03 A6 */	mtlr r0
/* 803BE790 003BB6D0  38 21 00 10 */	addi r1, r1, 0x10
/* 803BE794 003BB6D4  4E 80 00 20 */	blr 
.endfn globalInstance__Q33ebi5title9TTitleMgrFv

.fn Instance__Q33ebi5title9TTitleMgrFv, global
/* 803BE798 003BB6D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BE79C 003BB6DC  7C 08 02 A6 */	mflr r0
/* 803BE7A0 003BB6E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BE7A4 003BB6E4  80 0D 9A 2C */	lwz r0, _instance__Q33ebi5title9TTitleMgr@sda21(r13)
/* 803BE7A8 003BB6E8  28 00 00 00 */	cmplwi r0, 0
/* 803BE7AC 003BB6EC  40 82 00 20 */	bne .L_803BE7CC
/* 803BE7B0 003BB6F0  38 60 4B 8C */	li r3, 0x4b8c
/* 803BE7B4 003BB6F4  4B C6 56 F1 */	bl __nw__FUl
/* 803BE7B8 003BB6F8  7C 60 1B 79 */	or. r0, r3, r3
/* 803BE7BC 003BB6FC  41 82 00 0C */	beq .L_803BE7C8
/* 803BE7C0 003BB700  4B FF E5 59 */	bl __ct__Q33ebi5title9TTitleMgrFv
/* 803BE7C4 003BB704  7C 60 1B 78 */	mr r0, r3
.L_803BE7C8:
/* 803BE7C8 003BB708  90 0D 9A 2C */	stw r0, _instance__Q33ebi5title9TTitleMgr@sda21(r13)
.L_803BE7CC:
/* 803BE7CC 003BB70C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BE7D0 003BB710  80 6D 9A 2C */	lwz r3, _instance__Q33ebi5title9TTitleMgr@sda21(r13)
/* 803BE7D4 003BB714  7C 08 03 A6 */	mtlr r0
/* 803BE7D8 003BB718  38 21 00 10 */	addi r1, r1, 0x10
/* 803BE7DC 003BB71C  4E 80 00 20 */	blr 
.endfn Instance__Q33ebi5title9TTitleMgrFv

.fn deleteInstance__Q33ebi5title9TTitleMgrFv, global
/* 803BE7E0 003BB720  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BE7E4 003BB724  7C 08 02 A6 */	mflr r0
/* 803BE7E8 003BB728  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BE7EC 003BB72C  80 6D 9A 2C */	lwz r3, _instance__Q33ebi5title9TTitleMgr@sda21(r13)
/* 803BE7F0 003BB730  28 03 00 00 */	cmplwi r3, 0
/* 803BE7F4 003BB734  41 82 00 24 */	beq .L_803BE818
/* 803BE7F8 003BB738  41 82 00 18 */	beq .L_803BE810
/* 803BE7FC 003BB73C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BE800 003BB740  38 80 00 01 */	li r4, 1
/* 803BE804 003BB744  81 8C 00 08 */	lwz r12, 8(r12)
/* 803BE808 003BB748  7D 89 03 A6 */	mtctr r12
/* 803BE80C 003BB74C  4E 80 04 21 */	bctrl 
.L_803BE810:
/* 803BE810 003BB750  38 00 00 00 */	li r0, 0
/* 803BE814 003BB754  90 0D 9A 2C */	stw r0, _instance__Q33ebi5title9TTitleMgr@sda21(r13)
.L_803BE818:
/* 803BE818 003BB758  38 00 00 00 */	li r0, 0
/* 803BE81C 003BB75C  90 0D 9A 28 */	stw r0, titleMgr__Q23ebi5title@sda21(r13)
/* 803BE820 003BB760  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BE824 003BB764  7C 08 03 A6 */	mtlr r0
/* 803BE828 003BB768  38 21 00 10 */	addi r1, r1, 0x10
/* 803BE82C 003BB76C  4E 80 00 20 */	blr 
.endfn deleteInstance__Q33ebi5title9TTitleMgrFv

.fn init__Q33ebi5title9TTitleMgrFv, global
/* 803BE830 003BB770  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803BE834 003BB774  7C 08 02 A6 */	mflr r0
/* 803BE838 003BB778  3C 80 80 49 */	lis r4, lbl_80495C58@ha
/* 803BE83C 003BB77C  38 A0 00 00 */	li r5, 0
/* 803BE840 003BB780  90 01 00 44 */	stw r0, 0x44(r1)
/* 803BE844 003BB784  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803BE848 003BB788  7C 7F 1B 78 */	mr r31, r3
/* 803BE84C 003BB78C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803BE850 003BB790  3B C4 5C 58 */	addi r30, r4, lbl_80495C58@l
/* 803BE854 003BB794  38 9E 02 E8 */	addi r4, r30, 0x2e8
/* 803BE858 003BB798  93 A1 00 34 */	stw r29, 0x34(r1)
/* 803BE85C 003BB79C  93 81 00 30 */	stw r28, 0x30(r1)
/* 803BE860 003BB7A0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BE864 003BB7A4  48 06 4A F9 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803BE868 003BB7A8  38 60 00 24 */	li r3, 0x24
/* 803BE86C 003BB7AC  4B C6 56 39 */	bl __nw__FUl
/* 803BE870 003BB7B0  7C 7D 1B 79 */	or. r29, r3, r3
/* 803BE874 003BB7B4  41 82 00 14 */	beq .L_803BE888
/* 803BE878 003BB7B8  4B CA 71 2D */	bl initialize__13J3DDrawBufferFv
/* 803BE87C 003BB7BC  7F A3 EB 78 */	mr r3, r29
/* 803BE880 003BB7C0  38 80 04 00 */	li r4, 0x400
/* 803BE884 003BB7C4  4B CA 71 89 */	bl allocBuffer__13J3DDrawBufferFUl
.L_803BE888:
/* 803BE888 003BB7C8  93 BF 48 CC */	stw r29, 0x48cc(r31)
/* 803BE88C 003BB7CC  3C 60 80 51 */	lis r3, j3dSys@ha
/* 803BE890 003BB7D0  38 83 F2 30 */	addi r4, r3, j3dSys@l
/* 803BE894 003BB7D4  38 60 00 24 */	li r3, 0x24
/* 803BE898 003BB7D8  80 1F 48 CC */	lwz r0, 0x48cc(r31)
/* 803BE89C 003BB7DC  90 04 00 48 */	stw r0, 0x48(r4)
/* 803BE8A0 003BB7E0  4B C6 56 05 */	bl __nw__FUl
/* 803BE8A4 003BB7E4  7C 7D 1B 79 */	or. r29, r3, r3
/* 803BE8A8 003BB7E8  41 82 00 14 */	beq .L_803BE8BC
/* 803BE8AC 003BB7EC  4B CA 70 F9 */	bl initialize__13J3DDrawBufferFv
/* 803BE8B0 003BB7F0  7F A3 EB 78 */	mr r3, r29
/* 803BE8B4 003BB7F4  38 80 04 00 */	li r4, 0x400
/* 803BE8B8 003BB7F8  4B CA 71 55 */	bl allocBuffer__13J3DDrawBufferFUl
.L_803BE8BC:
/* 803BE8BC 003BB7FC  93 BF 48 D0 */	stw r29, 0x48d0(r31)
/* 803BE8C0 003BB800  3C 60 80 51 */	lis r3, j3dSys@ha
/* 803BE8C4 003BB804  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 803BE8C8 003BB808  38 00 00 02 */	li r0, 2
/* 803BE8CC 003BB80C  80 9F 48 D0 */	lwz r4, 0x48d0(r31)
/* 803BE8D0 003BB810  90 83 00 4C */	stw r4, 0x4c(r3)
/* 803BE8D4 003BB814  90 04 00 0C */	stw r0, 0xc(r4)
/* 803BE8D8 003BB818  80 7F 48 CC */	lwz r3, 0x48cc(r31)
/* 803BE8DC 003BB81C  4B CA 71 B5 */	bl frameInit__13J3DDrawBufferFv
/* 803BE8E0 003BB820  80 7F 48 D0 */	lwz r3, 0x48d0(r31)
/* 803BE8E4 003BB824  4B CA 71 AD */	bl frameInit__13J3DDrawBufferFv
/* 803BE8E8 003BB828  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BE8EC 003BB82C  38 9E 02 E8 */	addi r4, r30, 0x2e8
/* 803BE8F0 003BB830  48 06 4A 75 */	bl heapStatusEnd__6SystemFPc
/* 803BE8F4 003BB834  C0 42 13 98 */	lfs f2, lbl_8051F6F8@sda21(r2)
/* 803BE8F8 003BB838  38 7F 40 78 */	addi r3, r31, 0x4078
/* 803BE8FC 003BB83C  C0 22 13 A0 */	lfs f1, lbl_8051F700@sda21(r2)
/* 803BE900 003BB840  D0 5F 41 EC */	stfs f2, 0x41ec(r31)
/* 803BE904 003BB844  C0 02 13 9C */	lfs f0, lbl_8051F6FC@sda21(r2)
/* 803BE908 003BB848  D0 3F 41 F0 */	stfs f1, 0x41f0(r31)
/* 803BE90C 003BB84C  D0 5F 41 F4 */	stfs f2, 0x41f4(r31)
/* 803BE910 003BB850  D0 5F 42 04 */	stfs f2, 0x4204(r31)
/* 803BE914 003BB854  D0 5F 42 08 */	stfs f2, 0x4208(r31)
/* 803BE918 003BB858  D0 1F 42 0C */	stfs f0, 0x420c(r31)
/* 803BE91C 003BB85C  C0 1F 41 EC */	lfs f0, 0x41ec(r31)
/* 803BE920 003BB860  D0 1F 41 F8 */	stfs f0, 0x41f8(r31)
/* 803BE924 003BB864  C0 1F 41 F0 */	lfs f0, 0x41f0(r31)
/* 803BE928 003BB868  D0 1F 41 FC */	stfs f0, 0x41fc(r31)
/* 803BE92C 003BB86C  C0 1F 41 F4 */	lfs f0, 0x41f4(r31)
/* 803BE930 003BB870  D0 1F 42 00 */	stfs f0, 0x4200(r31)
/* 803BE934 003BB874  C0 1F 41 FC */	lfs f0, 0x41fc(r31)
/* 803BE938 003BB878  EC 00 08 28 */	fsubs f0, f0, f1
/* 803BE93C 003BB87C  D0 1F 41 FC */	stfs f0, 0x41fc(r31)
/* 803BE940 003BB880  C0 1F 42 5C */	lfs f0, 0x425c(r31)
/* 803BE944 003BB884  D0 1F 40 A0 */	stfs f0, 0x40a0(r31)
/* 803BE948 003BB888  48 05 CD AD */	bl updateMatrix__12LookAtCameraFv
/* 803BE94C 003BB88C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BE950 003BB890  38 80 00 01 */	li r4, 1
/* 803BE954 003BB894  83 A3 00 24 */	lwz r29, 0x24(r3)
/* 803BE958 003BB898  7F A3 EB 78 */	mr r3, r29
/* 803BE95C 003BB89C  48 06 6C 0D */	bl allocateViewports__8GraphicsFi
/* 803BE960 003BB8A0  38 1F 40 78 */	addi r0, r31, 0x4078
/* 803BE964 003BB8A4  38 7F 40 20 */	addi r3, r31, 0x4020
/* 803BE968 003BB8A8  90 1F 40 64 */	stw r0, 0x4064(r31)
/* 803BE96C 003BB8AC  48 06 69 25 */	bl updateCameraAspect__8ViewportFv
/* 803BE970 003BB8B0  48 06 48 B5 */	bl getRenderModeObj__6SystemFv
/* 803BE974 003BB8B4  A3 83 00 06 */	lhz r28, 6(r3)
/* 803BE978 003BB8B8  48 06 48 AD */	bl getRenderModeObj__6SystemFv
/* 803BE97C 003BB8BC  A0 83 00 04 */	lhz r4, 4(r3)
/* 803BE980 003BB8C0  3C 00 43 30 */	lis r0, 0x4330
/* 803BE984 003BB8C4  C0 62 13 98 */	lfs f3, lbl_8051F6F8@sda21(r2)
/* 803BE988 003BB8C8  38 7F 40 20 */	addi r3, r31, 0x4020
/* 803BE98C 003BB8CC  90 81 00 1C */	stw r4, 0x1c(r1)
/* 803BE990 003BB8D0  38 81 00 08 */	addi r4, r1, 8
/* 803BE994 003BB8D4  C8 42 14 98 */	lfd f2, lbl_8051F7F8@sda21(r2)
/* 803BE998 003BB8D8  90 01 00 18 */	stw r0, 0x18(r1)
/* 803BE99C 003BB8DC  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 803BE9A0 003BB8E0  93 81 00 24 */	stw r28, 0x24(r1)
/* 803BE9A4 003BB8E4  EC 20 10 28 */	fsubs f1, f0, f2
/* 803BE9A8 003BB8E8  90 01 00 20 */	stw r0, 0x20(r1)
/* 803BE9AC 003BB8EC  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 803BE9B0 003BB8F0  D0 61 00 08 */	stfs f3, 8(r1)
/* 803BE9B4 003BB8F4  EC 00 10 28 */	fsubs f0, f0, f2
/* 803BE9B8 003BB8F8  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 803BE9BC 003BB8FC  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803BE9C0 003BB900  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803BE9C4 003BB904  48 06 69 BD */	bl "setRect__8ViewportFR7Rect<f>"
/* 803BE9C8 003BB908  7F A3 EB 78 */	mr r3, r29
/* 803BE9CC 003BB90C  38 9F 40 20 */	addi r4, r31, 0x4020
/* 803BE9D0 003BB910  48 06 6B F1 */	bl addViewport__8GraphicsFP8Viewport
/* 803BE9D4 003BB914  7F E3 FB 78 */	mr r3, r31
/* 803BE9D8 003BB918  38 9F 42 70 */	addi r4, r31, 0x4270
/* 803BE9DC 003BB91C  48 05 2A 2D */	bl add__5CNodeFP5CNode
/* 803BE9E0 003BB920  7F E3 FB 78 */	mr r3, r31
/* 803BE9E4 003BB924  38 9F 47 88 */	addi r4, r31, 0x4788
/* 803BE9E8 003BB928  48 05 2A 21 */	bl add__5CNodeFP5CNode
/* 803BE9EC 003BB92C  7F E3 FB 78 */	mr r3, r31
/* 803BE9F0 003BB930  38 9F 1F 24 */	addi r4, r31, 0x1f24
/* 803BE9F4 003BB934  48 05 2A 15 */	bl add__5CNodeFP5CNode
/* 803BE9F8 003BB938  38 1E 02 F8 */	addi r0, r30, 0x2f8
/* 803BE9FC 003BB93C  7F E3 FB 78 */	mr r3, r31
/* 803BEA00 003BB940  90 1F 1F 38 */	stw r0, 0x1f38(r31)
/* 803BEA04 003BB944  38 9F 2F A0 */	addi r4, r31, 0x2fa0
/* 803BEA08 003BB948  48 05 2A 01 */	bl add__5CNodeFP5CNode
/* 803BEA0C 003BB94C  38 1E 03 08 */	addi r0, r30, 0x308
/* 803BEA10 003BB950  7F E3 FB 78 */	mr r3, r31
/* 803BEA14 003BB954  90 1F 2F B4 */	stw r0, 0x2fb4(r31)
/* 803BEA18 003BB958  38 9F 01 54 */	addi r4, r31, 0x154
/* 803BEA1C 003BB95C  48 05 29 ED */	bl add__5CNodeFP5CNode
/* 803BEA20 003BB960  7F E3 FB 78 */	mr r3, r31
/* 803BEA24 003BB964  38 9F 0A E4 */	addi r4, r31, 0xae4
/* 803BEA28 003BB968  48 05 29 E1 */	bl add__5CNodeFP5CNode
/* 803BEA2C 003BB96C  7F E3 FB 78 */	mr r3, r31
/* 803BEA30 003BB970  38 9F 0C F4 */	addi r4, r31, 0xcf4
/* 803BEA34 003BB974  48 05 29 D5 */	bl add__5CNodeFP5CNode
/* 803BEA38 003BB978  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803BEA3C 003BB97C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803BEA40 003BB980  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 803BEA44 003BB984  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 803BEA48 003BB988  83 81 00 30 */	lwz r28, 0x30(r1)
/* 803BEA4C 003BB98C  7C 08 03 A6 */	mtlr r0
/* 803BEA50 003BB990  38 21 00 40 */	addi r1, r1, 0x40
/* 803BEA54 003BB994  4E 80 00 20 */	blr 
.endfn init__Q33ebi5title9TTitleMgrFv

.fn setLogo__Q33ebi5title9TTitleMgrFv, global
/* 803BEA58 003BB998  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BEA5C 003BB99C  7C 08 02 A6 */	mflr r0
/* 803BEA60 003BB9A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BEA64 003BB9A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BEA68 003BB9A8  7C 7F 1B 78 */	mr r31, r3
/* 803BEA6C 003BB9AC  38 7F 01 54 */	addi r3, r31, 0x154
/* 803BEA70 003BB9B0  48 02 5E C1 */	bl forceArriveDest__Q43ebi5title6Pikmin4TMgrFv
/* 803BEA74 003BB9B4  80 7F 0C F0 */	lwz r3, 0xcf0(r31)
/* 803BEA78 003BB9B8  48 02 8D 9D */	bl outOfCalc__Q43ebi5title6Kogane5TUnitFv
/* 803BEA7C 003BB9BC  80 7F 0F 50 */	lwz r3, 0xf50(r31)
/* 803BEA80 003BB9C0  48 02 A0 31 */	bl outOfCalc__Q43ebi5title6Chappy5TUnitFv
/* 803BEA84 003BB9C4  38 7F 00 F0 */	addi r3, r31, 0xf0
/* 803BEA88 003BB9C8  48 00 2E C9 */	bl setLogo__Q33ebi5title11TBlackPlaneFv
/* 803BEA8C 003BB9CC  38 00 00 01 */	li r0, 1
/* 803BEA90 003BB9D0  90 1F 0F 58 */	stw r0, 0xf58(r31)
/* 803BEA94 003BB9D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BEA98 003BB9D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BEA9C 003BB9DC  7C 08 03 A6 */	mtlr r0
/* 803BEAA0 003BB9E0  38 21 00 10 */	addi r1, r1, 0x10
/* 803BEAA4 003BB9E4  4E 80 00 20 */	blr 
.endfn setLogo__Q33ebi5title9TTitleMgrFv

.fn loadResource__Q33ebi5title9TTitleMgrFv, global
/* 803BEAA8 003BB9E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BEAAC 003BB9EC  7C 08 02 A6 */	mflr r0
/* 803BEAB0 003BB9F0  3C 80 80 49 */	lis r4, lbl_80495C58@ha
/* 803BEAB4 003BB9F4  38 A0 00 00 */	li r5, 0
/* 803BEAB8 003BB9F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BEABC 003BB9FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803BEAC0 003BBA00  3B E4 5C 58 */	addi r31, r4, lbl_80495C58@l
/* 803BEAC4 003BBA04  38 9F 03 18 */	addi r4, r31, 0x318
/* 803BEAC8 003BBA08  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803BEACC 003BBA0C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803BEAD0 003BBA10  7C 7D 1B 78 */	mr r29, r3
/* 803BEAD4 003BBA14  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BEAD8 003BBA18  48 06 48 85 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803BEADC 003BBA1C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BEAE0 003BBA20  38 9F 03 34 */	addi r4, r31, 0x334
/* 803BEAE4 003BBA24  38 A0 00 00 */	li r5, 0
/* 803BEAE8 003BBA28  48 06 48 75 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803BEAEC 003BBA2C  38 7F 03 58 */	addi r3, r31, 0x358
/* 803BEAF0 003BBA30  38 80 00 01 */	li r4, 1
/* 803BEAF4 003BBA34  38 A0 00 00 */	li r5, 0
/* 803BEAF8 003BBA38  38 C0 00 01 */	li r6, 1
/* 803BEAFC 003BBA3C  4B C5 C6 35 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 803BEB00 003BBA40  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BEB04 003BBA44  40 82 00 18 */	bne .L_803BEB1C
/* 803BEB08 003BBA48  38 7F 03 78 */	addi r3, r31, 0x378
/* 803BEB0C 003BBA4C  38 BF 03 88 */	addi r5, r31, 0x388
/* 803BEB10 003BBA50  38 80 01 02 */	li r4, 0x102
/* 803BEB14 003BBA54  4C C6 31 82 */	crclr 6
/* 803BEB18 003BBA58  4B C6 BB 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803BEB1C:
/* 803BEB1C 003BBA5C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BEB20 003BBA60  38 9F 03 34 */	addi r4, r31, 0x334
/* 803BEB24 003BBA64  48 06 48 41 */	bl heapStatusEnd__6SystemFPc
/* 803BEB28 003BBA68  7F A3 EB 78 */	mr r3, r29
/* 803BEB2C 003BBA6C  7F C4 F3 78 */	mr r4, r30
/* 803BEB30 003BBA70  38 BF 03 94 */	addi r5, r31, 0x394
/* 803BEB34 003BBA74  48 00 1E 89 */	bl readTitleParam__Q33ebi5title9TTitleMgrFP10JKRArchivePc
/* 803BEB38 003BBA78  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 803BEB3C 003BBA7C  38 83 41 FC */	addi r4, r3, gGameConfig__4Game@l
/* 803BEB40 003BBA80  80 04 01 C8 */	lwz r0, 0x1c8(r4)
/* 803BEB44 003BBA84  2C 00 00 00 */	cmpwi r0, 0
/* 803BEB48 003BBA88  41 82 00 28 */	beq .L_803BEB70
/* 803BEB4C 003BBA8C  7F C4 F3 78 */	mr r4, r30
/* 803BEB50 003BBA90  38 7D 1F 24 */	addi r3, r29, 0x1f24
/* 803BEB54 003BBA94  38 BF 03 AC */	addi r5, r31, 0x3ac
/* 803BEB58 003BBA98  48 02 50 D1 */	bl readCoordinate__Q33ebi5title9TCoordMgrFP10JKRArchivePc
/* 803BEB5C 003BBA9C  7F C4 F3 78 */	mr r4, r30
/* 803BEB60 003BBAA0  38 7D 2F A0 */	addi r3, r29, 0x2fa0
/* 803BEB64 003BBAA4  38 BF 03 C0 */	addi r5, r31, 0x3c0
/* 803BEB68 003BBAA8  48 02 50 C1 */	bl readCoordinate__Q33ebi5title9TCoordMgrFP10JKRArchivePc
/* 803BEB6C 003BBAAC  48 00 00 7C */	b .L_803BEBE8
.L_803BEB70:
/* 803BEB70 003BBAB0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BEB74 003BBAB4  80 03 00 D4 */	lwz r0, 0xd4(r3)
/* 803BEB78 003BBAB8  2C 00 00 05 */	cmpwi r0, 5
/* 803BEB7C 003BBABC  41 82 00 08 */	beq .L_803BEB84
/* 803BEB80 003BBAC0  48 00 00 48 */	b .L_803BEBC8
.L_803BEB84:
/* 803BEB84 003BBAC4  80 04 02 28 */	lwz r0, 0x228(r4)
/* 803BEB88 003BBAC8  2C 00 00 00 */	cmpwi r0, 0
/* 803BEB8C 003BBACC  41 82 00 18 */	beq .L_803BEBA4
/* 803BEB90 003BBAD0  7F C4 F3 78 */	mr r4, r30
/* 803BEB94 003BBAD4  38 7D 1F 24 */	addi r3, r29, 0x1f24
/* 803BEB98 003BBAD8  38 BF 03 AC */	addi r5, r31, 0x3ac
/* 803BEB9C 003BBADC  48 02 50 8D */	bl readCoordinate__Q33ebi5title9TCoordMgrFP10JKRArchivePc
/* 803BEBA0 003BBAE0  48 00 00 14 */	b .L_803BEBB4
.L_803BEBA4:
/* 803BEBA4 003BBAE4  7F C4 F3 78 */	mr r4, r30
/* 803BEBA8 003BBAE8  38 7D 1F 24 */	addi r3, r29, 0x1f24
/* 803BEBAC 003BBAEC  38 BF 03 DC */	addi r5, r31, 0x3dc
/* 803BEBB0 003BBAF0  48 02 50 79 */	bl readCoordinate__Q33ebi5title9TCoordMgrFP10JKRArchivePc
.L_803BEBB4:
/* 803BEBB4 003BBAF4  7F C4 F3 78 */	mr r4, r30
/* 803BEBB8 003BBAF8  38 7D 2F A0 */	addi r3, r29, 0x2fa0
/* 803BEBBC 003BBAFC  38 BF 03 C0 */	addi r5, r31, 0x3c0
/* 803BEBC0 003BBB00  48 02 50 69 */	bl readCoordinate__Q33ebi5title9TCoordMgrFP10JKRArchivePc
/* 803BEBC4 003BBB04  48 00 00 24 */	b .L_803BEBE8
.L_803BEBC8:
/* 803BEBC8 003BBB08  7F C4 F3 78 */	mr r4, r30
/* 803BEBCC 003BBB0C  38 7D 1F 24 */	addi r3, r29, 0x1f24
/* 803BEBD0 003BBB10  38 BF 03 AC */	addi r5, r31, 0x3ac
/* 803BEBD4 003BBB14  48 02 50 55 */	bl readCoordinate__Q33ebi5title9TCoordMgrFP10JKRArchivePc
/* 803BEBD8 003BBB18  7F C4 F3 78 */	mr r4, r30
/* 803BEBDC 003BBB1C  38 7D 2F A0 */	addi r3, r29, 0x2fa0
/* 803BEBE0 003BBB20  38 BF 03 C0 */	addi r5, r31, 0x3c0
/* 803BEBE4 003BBB24  48 02 50 45 */	bl readCoordinate__Q33ebi5title9TCoordMgrFP10JKRArchivePc
.L_803BEBE8:
/* 803BEBE8 003BBB28  80 1D 0F 5C */	lwz r0, 0xf5c(r29)
/* 803BEBEC 003BBB2C  2C 00 00 02 */	cmpwi r0, 2
/* 803BEBF0 003BBB30  41 82 00 6C */	beq .L_803BEC5C
/* 803BEBF4 003BBB34  40 80 00 14 */	bge .L_803BEC08
/* 803BEBF8 003BBB38  2C 00 00 00 */	cmpwi r0, 0
/* 803BEBFC 003BBB3C  41 82 00 18 */	beq .L_803BEC14
/* 803BEC00 003BBB40  40 80 00 38 */	bge .L_803BEC38
/* 803BEC04 003BBB44  48 00 00 9C */	b .L_803BECA0
.L_803BEC08:
/* 803BEC08 003BBB48  2C 00 00 04 */	cmpwi r0, 4
/* 803BEC0C 003BBB4C  40 80 00 94 */	bge .L_803BECA0
/* 803BEC10 003BBB50  48 00 00 70 */	b .L_803BEC80
.L_803BEC14:
/* 803BEC14 003BBB54  7F C4 F3 78 */	mr r4, r30
/* 803BEC18 003BBB58  38 7D 42 70 */	addi r3, r29, 0x4270
/* 803BEC1C 003BBB5C  38 BF 03 F0 */	addi r5, r31, 0x3f0
/* 803BEC20 003BBB60  48 00 33 39 */	bl loadSettingFile__Q33ebi5title14TTitleLightMgrFP10JKRArchivePc
/* 803BEC24 003BBB64  7F C4 F3 78 */	mr r4, r30
/* 803BEC28 003BBB68  38 7D 47 88 */	addi r3, r29, 0x4788
/* 803BEC2C 003BBB6C  38 BF 04 10 */	addi r5, r31, 0x410
/* 803BEC30 003BBB70  48 02 C6 8D */	bl loadSettingFile__Q33ebi5title12TTitleFogMgrFP10JKRArchivePc
/* 803BEC34 003BBB74  48 00 00 6C */	b .L_803BECA0
.L_803BEC38:
/* 803BEC38 003BBB78  7F C4 F3 78 */	mr r4, r30
/* 803BEC3C 003BBB7C  38 7D 42 70 */	addi r3, r29, 0x4270
/* 803BEC40 003BBB80  38 BF 04 2C */	addi r5, r31, 0x42c
/* 803BEC44 003BBB84  48 00 33 15 */	bl loadSettingFile__Q33ebi5title14TTitleLightMgrFP10JKRArchivePc
/* 803BEC48 003BBB88  7F C4 F3 78 */	mr r4, r30
/* 803BEC4C 003BBB8C  38 7D 47 88 */	addi r3, r29, 0x4788
/* 803BEC50 003BBB90  38 BF 04 4C */	addi r5, r31, 0x44c
/* 803BEC54 003BBB94  48 02 C6 69 */	bl loadSettingFile__Q33ebi5title12TTitleFogMgrFP10JKRArchivePc
/* 803BEC58 003BBB98  48 00 00 48 */	b .L_803BECA0
.L_803BEC5C:
/* 803BEC5C 003BBB9C  7F C4 F3 78 */	mr r4, r30
/* 803BEC60 003BBBA0  38 7D 42 70 */	addi r3, r29, 0x4270
/* 803BEC64 003BBBA4  38 BF 04 68 */	addi r5, r31, 0x468
/* 803BEC68 003BBBA8  48 00 32 F1 */	bl loadSettingFile__Q33ebi5title14TTitleLightMgrFP10JKRArchivePc
/* 803BEC6C 003BBBAC  7F C4 F3 78 */	mr r4, r30
/* 803BEC70 003BBBB0  38 7D 47 88 */	addi r3, r29, 0x4788
/* 803BEC74 003BBBB4  38 BF 04 88 */	addi r5, r31, 0x488
/* 803BEC78 003BBBB8  48 02 C6 45 */	bl loadSettingFile__Q33ebi5title12TTitleFogMgrFP10JKRArchivePc
/* 803BEC7C 003BBBBC  48 00 00 24 */	b .L_803BECA0
.L_803BEC80:
/* 803BEC80 003BBBC0  7F C4 F3 78 */	mr r4, r30
/* 803BEC84 003BBBC4  38 7D 42 70 */	addi r3, r29, 0x4270
/* 803BEC88 003BBBC8  38 BF 04 A4 */	addi r5, r31, 0x4a4
/* 803BEC8C 003BBBCC  48 00 32 CD */	bl loadSettingFile__Q33ebi5title14TTitleLightMgrFP10JKRArchivePc
/* 803BEC90 003BBBD0  7F C4 F3 78 */	mr r4, r30
/* 803BEC94 003BBBD4  38 7D 47 88 */	addi r3, r29, 0x4788
/* 803BEC98 003BBBD8  38 BF 04 C4 */	addi r5, r31, 0x4c4
/* 803BEC9C 003BBBDC  48 02 C6 21 */	bl loadSettingFile__Q33ebi5title12TTitleFogMgrFP10JKRArchivePc
.L_803BECA0:
/* 803BECA0 003BBBE0  7F C4 F3 78 */	mr r4, r30
/* 803BECA4 003BBBE4  38 7D 01 54 */	addi r3, r29, 0x154
/* 803BECA8 003BBBE8  48 02 56 25 */	bl setArchive__Q43ebi5title6Pikmin4TMgrFP10JKRArchive
/* 803BECAC 003BBBEC  7F C4 F3 78 */	mr r4, r30
/* 803BECB0 003BBBF0  38 7D 0A E4 */	addi r3, r29, 0xae4
/* 803BECB4 003BBBF4  48 02 87 ED */	bl setArchive__Q43ebi5title6Kogane4TMgrFP10JKRArchive
/* 803BECB8 003BBBF8  7F C4 F3 78 */	mr r4, r30
/* 803BECBC 003BBBFC  38 7D 0C F4 */	addi r3, r29, 0xcf4
/* 803BECC0 003BBC00  48 02 9A 69 */	bl setArchive__Q43ebi5title6Chappy4TMgrFP10JKRArchive
/* 803BECC4 003BBC04  80 1D 0F 5C */	lwz r0, 0xf5c(r29)
/* 803BECC8 003BBC08  3B C2 14 C0 */	addi r30, r2, lbl_8051F820@sda21
/* 803BECCC 003BBC0C  2C 00 00 02 */	cmpwi r0, 2
/* 803BECD0 003BBC10  41 82 00 34 */	beq .L_803BED04
/* 803BECD4 003BBC14  40 80 00 14 */	bge .L_803BECE8
/* 803BECD8 003BBC18  2C 00 00 00 */	cmpwi r0, 0
/* 803BECDC 003BBC1C  41 82 00 18 */	beq .L_803BECF4
/* 803BECE0 003BBC20  40 80 00 1C */	bge .L_803BECFC
/* 803BECE4 003BBC24  48 00 00 2C */	b .L_803BED10
.L_803BECE8:
/* 803BECE8 003BBC28  2C 00 00 04 */	cmpwi r0, 4
/* 803BECEC 003BBC2C  40 80 00 24 */	bge .L_803BED10
/* 803BECF0 003BBC30  48 00 00 1C */	b .L_803BED0C
.L_803BECF4:
/* 803BECF4 003BBC34  3B DF 04 E0 */	addi r30, r31, 0x4e0
/* 803BECF8 003BBC38  48 00 00 18 */	b .L_803BED10
.L_803BECFC:
/* 803BECFC 003BBC3C  3B DF 05 04 */	addi r30, r31, 0x504
/* 803BED00 003BBC40  48 00 00 10 */	b .L_803BED10
.L_803BED04:
/* 803BED04 003BBC44  3B DF 05 28 */	addi r30, r31, 0x528
/* 803BED08 003BBC48  48 00 00 08 */	b .L_803BED10
.L_803BED0C:
/* 803BED0C 003BBC4C  3B DF 05 4C */	addi r30, r31, 0x54c
.L_803BED10:
/* 803BED10 003BBC50  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BED14 003BBC54  38 9F 03 34 */	addi r4, r31, 0x334
/* 803BED18 003BBC58  38 A0 00 00 */	li r5, 0
/* 803BED1C 003BBC5C  48 06 46 41 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803BED20 003BBC60  7F C3 F3 78 */	mr r3, r30
/* 803BED24 003BBC64  38 80 00 01 */	li r4, 1
/* 803BED28 003BBC68  38 A0 00 00 */	li r5, 0
/* 803BED2C 003BBC6C  38 C0 00 01 */	li r6, 1
/* 803BED30 003BBC70  4B C5 C4 01 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 803BED34 003BBC74  7C 7E 1B 79 */	or. r30, r3, r3
/* 803BED38 003BBC78  40 82 00 18 */	bne .L_803BED50
/* 803BED3C 003BBC7C  38 7F 03 78 */	addi r3, r31, 0x378
/* 803BED40 003BBC80  38 BF 03 88 */	addi r5, r31, 0x388
/* 803BED44 003BBC84  38 80 01 56 */	li r4, 0x156
/* 803BED48 003BBC88  4C C6 31 82 */	crclr 6
/* 803BED4C 003BBC8C  4B C6 B8 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803BED50:
/* 803BED50 003BBC90  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BED54 003BBC94  38 9F 03 34 */	addi r4, r31, 0x334
/* 803BED58 003BBC98  48 06 46 0D */	bl heapStatusEnd__6SystemFPc
/* 803BED5C 003BBC9C  7F C4 F3 78 */	mr r4, r30
/* 803BED60 003BBCA0  38 7D 00 F0 */	addi r3, r29, 0xf0
/* 803BED64 003BBCA4  48 00 27 15 */	bl setArchive__Q33ebi5title11TBlackPlaneFP10JKRArchive
/* 803BED68 003BBCA8  7F C4 F3 78 */	mr r4, r30
/* 803BED6C 003BBCAC  38 7D 00 30 */	addi r3, r29, 0x30
/* 803BED70 003BBCB0  48 00 1F 55 */	bl setArchive__Q33ebi5title8TMapBaseFP10JKRArchive
/* 803BED74 003BBCB4  7F C4 F3 78 */	mr r4, r30
/* 803BED78 003BBCB8  38 7D 00 A4 */	addi r3, r29, 0xa4
/* 803BED7C 003BBCBC  48 00 24 2D */	bl setArchive__Q33ebi5title12TBGEnemyBaseFP10JKRArchive
/* 803BED80 003BBCC0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BED84 003BBCC4  38 9F 03 18 */	addi r4, r31, 0x318
/* 803BED88 003BBCC8  48 06 45 DD */	bl heapStatusEnd__6SystemFPc
/* 803BED8C 003BBCCC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BED90 003BBCD0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803BED94 003BBCD4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803BED98 003BBCD8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803BED9C 003BBCDC  7C 08 03 A6 */	mtlr r0
/* 803BEDA0 003BBCE0  38 21 00 20 */	addi r1, r1, 0x20
/* 803BEDA4 003BBCE4  4E 80 00 20 */	blr 
.endfn loadResource__Q33ebi5title9TTitleMgrFv

.fn initAfterLoadRes__Q33ebi5title9TTitleMgrFv, global
/* 803BEDA8 003BBCE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BEDAC 003BBCEC  7C 08 02 A6 */	mflr r0
/* 803BEDB0 003BBCF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BEDB4 003BBCF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BEDB8 003BBCF8  7C 7F 1B 78 */	mr r31, r3
/* 803BEDBC 003BBCFC  38 7F 01 54 */	addi r3, r31, 0x154
/* 803BEDC0 003BBD00  48 02 55 E5 */	bl initUnit__Q43ebi5title6Pikmin4TMgrFv
/* 803BEDC4 003BBD04  38 7F 0A E4 */	addi r3, r31, 0xae4
/* 803BEDC8 003BBD08  48 02 87 29 */	bl initUnit__Q43ebi5title6Kogane4TMgrFv
/* 803BEDCC 003BBD0C  38 7F 0C F4 */	addi r3, r31, 0xcf4
/* 803BEDD0 003BBD10  48 02 99 A9 */	bl initUnit__Q43ebi5title6Chappy4TMgrFv
/* 803BEDD4 003BBD14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BEDD8 003BBD18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BEDDC 003BBD1C  7C 08 03 A6 */	mtlr r0
/* 803BEDE0 003BBD20  38 21 00 10 */	addi r1, r1, 0x10
/* 803BEDE4 003BBD24  4E 80 00 20 */	blr 
.endfn initAfterLoadRes__Q33ebi5title9TTitleMgrFv

.fn setController__Q33ebi5title9TTitleMgrFP10Controller, global
/* 803BEDE8 003BBD28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BEDEC 003BBD2C  7C 08 02 A6 */	mflr r0
/* 803BEDF0 003BBD30  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BEDF4 003BBD34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BEDF8 003BBD38  7C 7F 1B 78 */	mr r31, r3
/* 803BEDFC 003BBD3C  90 83 40 1C */	stw r4, 0x401c(r3)
/* 803BEE00 003BBD40  80 63 0C F0 */	lwz r3, 0xcf0(r3)
/* 803BEE04 003BBD44  80 9F 40 1C */	lwz r4, 0x401c(r31)
/* 803BEE08 003BBD48  48 02 88 95 */	bl setController__Q43ebi5title6Kogane5TUnitFP10Controller
/* 803BEE0C 003BBD4C  80 7F 0F 50 */	lwz r3, 0xf50(r31)
/* 803BEE10 003BBD50  80 9F 40 1C */	lwz r4, 0x401c(r31)
/* 803BEE14 003BBD54  48 02 9B 1D */	bl setController__Q43ebi5title6Chappy5TUnitFP10Controller
/* 803BEE18 003BBD58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BEE1C 003BBD5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BEE20 003BBD60  7C 08 03 A6 */	mtlr r0
/* 803BEE24 003BBD64  38 21 00 10 */	addi r1, r1, 0x10
/* 803BEE28 003BBD68  4E 80 00 20 */	blr 
.endfn setController__Q33ebi5title9TTitleMgrFP10Controller

.fn inField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase, global
/* 803BEE2C 003BBD6C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BEE30 003BBD70  7C 08 02 A6 */	mflr r0
/* 803BEE34 003BBD74  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BEE38 003BBD78  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803BEE3C 003BBD7C  7C 9F 23 78 */	mr r31, r4
/* 803BEE40 003BBD80  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803BEE44 003BBD84  7C 7E 1B 78 */	mr r30, r3
/* 803BEE48 003BBD88  7F E3 FB 78 */	mr r3, r31
/* 803BEE4C 003BBD8C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803BEE50 003BBD90  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803BEE54 003BBD94  7D 89 03 A6 */	mtctr r12
/* 803BEE58 003BBD98  4E 80 04 21 */	bctrl 
/* 803BEE5C 003BBD9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BEE60 003BBDA0  41 82 00 24 */	beq .L_803BEE84
/* 803BEE64 003BBDA4  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BEE68 003BBDA8  38 61 00 08 */	addi r3, r1, 8
/* 803BEE6C 003BBDAC  38 9F 00 04 */	addi r4, r31, 4
/* 803BEE70 003BBDB0  D0 01 00 08 */	stfs f0, 8(r1)
/* 803BEE74 003BBDB4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803BEE78 003BBDB8  C0 1E 4A 10 */	lfs f0, 0x4a10(r30)
/* 803BEE7C 003BBDBC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803BEE80 003BBDC0  48 00 B3 65 */	bl "in__Q23ebi11EGECircle2fFP10Vector2<f>"
.L_803BEE84:
/* 803BEE84 003BBDC4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BEE88 003BBDC8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803BEE8C 003BBDCC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803BEE90 003BBDD0  7C 08 03 A6 */	mtlr r0
/* 803BEE94 003BBDD4  38 21 00 20 */	addi r1, r1, 0x20
/* 803BEE98 003BBDD8  4E 80 00 20 */	blr 
.endfn inField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase

.fn isCalc__Q33ebi5title8TObjBaseFv, weak
/* 803BEE9C 003BBDDC  38 60 00 01 */	li r3, 1
/* 803BEEA0 003BBDE0  4E 80 00 20 */	blr 
.endfn isCalc__Q33ebi5title8TObjBaseFv

.fn inViewField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase, global
/* 803BEEA4 003BBDE4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BEEA8 003BBDE8  7C 08 02 A6 */	mflr r0
/* 803BEEAC 003BBDEC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BEEB0 003BBDF0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803BEEB4 003BBDF4  7C 9F 23 78 */	mr r31, r4
/* 803BEEB8 003BBDF8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803BEEBC 003BBDFC  7C 7E 1B 78 */	mr r30, r3
/* 803BEEC0 003BBE00  7F E3 FB 78 */	mr r3, r31
/* 803BEEC4 003BBE04  81 9F 00 00 */	lwz r12, 0(r31)
/* 803BEEC8 003BBE08  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803BEECC 003BBE0C  7D 89 03 A6 */	mtctr r12
/* 803BEED0 003BBE10  4E 80 04 21 */	bctrl 
/* 803BEED4 003BBE14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BEED8 003BBE18  41 82 00 34 */	beq .L_803BEF0C
/* 803BEEDC 003BBE1C  C0 3F 00 24 */	lfs f1, 0x24(r31)
/* 803BEEE0 003BBE20  38 61 00 08 */	addi r3, r1, 8
/* 803BEEE4 003BBE24  C0 5E 49 70 */	lfs f2, 0x4970(r30)
/* 803BEEE8 003BBE28  38 9F 00 04 */	addi r4, r31, 4
/* 803BEEEC 003BBE2C  C0 1E 49 20 */	lfs f0, 0x4920(r30)
/* 803BEEF0 003BBE30  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803BEEF4 003BBE34  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803BEEF8 003BBE38  C0 5E 49 48 */	lfs f2, 0x4948(r30)
/* 803BEEFC 003BBE3C  C0 1E 48 F8 */	lfs f0, 0x48f8(r30)
/* 803BEF00 003BBE40  D0 01 00 08 */	stfs f0, 8(r1)
/* 803BEF04 003BBE44  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 803BEF08 003BBE48  48 00 B2 1D */	bl "in__Q23ebi8EGEBox2fFP10Vector2<f>f"
.L_803BEF0C:
/* 803BEF0C 003BBE4C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BEF10 003BBE50  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803BEF14 003BBE54  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803BEF18 003BBE58  7C 08 03 A6 */	mtlr r0
/* 803BEF1C 003BBE5C  38 21 00 20 */	addi r1, r1, 0x20
/* 803BEF20 003BBE60  4E 80 00 20 */	blr 
.endfn inViewField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase

.fn isInViewField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase, global
/* 803BEF24 003BBE64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BEF28 003BBE68  7C 08 02 A6 */	mflr r0
/* 803BEF2C 003BBE6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BEF30 003BBE70  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803BEF34 003BBE74  7C 9F 23 78 */	mr r31, r4
/* 803BEF38 003BBE78  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803BEF3C 003BBE7C  7C 7E 1B 78 */	mr r30, r3
/* 803BEF40 003BBE80  7F E3 FB 78 */	mr r3, r31
/* 803BEF44 003BBE84  81 9F 00 00 */	lwz r12, 0(r31)
/* 803BEF48 003BBE88  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803BEF4C 003BBE8C  7D 89 03 A6 */	mtctr r12
/* 803BEF50 003BBE90  4E 80 04 21 */	bctrl 
/* 803BEF54 003BBE94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BEF58 003BBE98  41 82 00 38 */	beq .L_803BEF90
/* 803BEF5C 003BBE9C  C0 3F 00 24 */	lfs f1, 0x24(r31)
/* 803BEF60 003BBEA0  38 61 00 08 */	addi r3, r1, 8
/* 803BEF64 003BBEA4  C0 5E 49 70 */	lfs f2, 0x4970(r30)
/* 803BEF68 003BBEA8  38 9F 00 04 */	addi r4, r31, 4
/* 803BEF6C 003BBEAC  C0 1E 49 20 */	lfs f0, 0x4920(r30)
/* 803BEF70 003BBEB0  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803BEF74 003BBEB4  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803BEF78 003BBEB8  C0 5E 49 48 */	lfs f2, 0x4948(r30)
/* 803BEF7C 003BBEBC  C0 1E 48 F8 */	lfs f0, 0x48f8(r30)
/* 803BEF80 003BBEC0  D0 01 00 08 */	stfs f0, 8(r1)
/* 803BEF84 003BBEC4  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 803BEF88 003BBEC8  48 00 B0 C5 */	bl "isIn__Q23ebi8EGEBox2fFR10Vector2<f>f"
/* 803BEF8C 003BBECC  48 00 00 08 */	b .L_803BEF94
.L_803BEF90:
/* 803BEF90 003BBED0  38 60 00 00 */	li r3, 0
.L_803BEF94:
/* 803BEF94 003BBED4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BEF98 003BBED8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803BEF9C 003BBEDC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803BEFA0 003BBEE0  7C 08 03 A6 */	mtlr r0
/* 803BEFA4 003BBEE4  38 21 00 20 */	addi r1, r1, 0x20
/* 803BEFA8 003BBEE8  4E 80 00 20 */	blr 
.endfn isInViewField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase

.fn "isOutViewField__Q33ebi5title9TTitleMgrFR10Vector2<f>f", global
/* 803BEFAC 003BBEEC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BEFB0 003BBEF0  7C 08 02 A6 */	mflr r0
/* 803BEFB4 003BBEF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BEFB8 003BBEF8  C0 43 49 70 */	lfs f2, 0x4970(r3)
/* 803BEFBC 003BBEFC  C0 03 49 20 */	lfs f0, 0x4920(r3)
/* 803BEFC0 003BBF00  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803BEFC4 003BBF04  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803BEFC8 003BBF08  C0 43 49 48 */	lfs f2, 0x4948(r3)
/* 803BEFCC 003BBF0C  C0 03 48 F8 */	lfs f0, 0x48f8(r3)
/* 803BEFD0 003BBF10  38 61 00 08 */	addi r3, r1, 8
/* 803BEFD4 003BBF14  D0 01 00 08 */	stfs f0, 8(r1)
/* 803BEFD8 003BBF18  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 803BEFDC 003BBF1C  48 00 B0 E1 */	bl "isOut__Q23ebi8EGEBox2fFR10Vector2<f>f"
/* 803BEFE0 003BBF20  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BEFE4 003BBF24  7C 08 03 A6 */	mtlr r0
/* 803BEFE8 003BBF28  38 21 00 20 */	addi r1, r1, 0x20
/* 803BEFEC 003BBF2C  4E 80 00 20 */	blr 
.endfn "isOutViewField__Q33ebi5title9TTitleMgrFR10Vector2<f>f"

.fn isOutViewField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase, global
/* 803BEFF0 003BBF30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BEFF4 003BBF34  7C 08 02 A6 */	mflr r0
/* 803BEFF8 003BBF38  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BEFFC 003BBF3C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803BF000 003BBF40  7C 9F 23 78 */	mr r31, r4
/* 803BF004 003BBF44  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803BF008 003BBF48  7C 7E 1B 78 */	mr r30, r3
/* 803BF00C 003BBF4C  7F E3 FB 78 */	mr r3, r31
/* 803BF010 003BBF50  81 9F 00 00 */	lwz r12, 0(r31)
/* 803BF014 003BBF54  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803BF018 003BBF58  7D 89 03 A6 */	mtctr r12
/* 803BF01C 003BBF5C  4E 80 04 21 */	bctrl 
/* 803BF020 003BBF60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BF024 003BBF64  41 82 00 38 */	beq .L_803BF05C
/* 803BF028 003BBF68  C0 3F 00 24 */	lfs f1, 0x24(r31)
/* 803BF02C 003BBF6C  38 61 00 08 */	addi r3, r1, 8
/* 803BF030 003BBF70  C0 5E 49 70 */	lfs f2, 0x4970(r30)
/* 803BF034 003BBF74  38 9F 00 04 */	addi r4, r31, 4
/* 803BF038 003BBF78  C0 1E 49 20 */	lfs f0, 0x4920(r30)
/* 803BF03C 003BBF7C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803BF040 003BBF80  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803BF044 003BBF84  C0 5E 49 48 */	lfs f2, 0x4948(r30)
/* 803BF048 003BBF88  C0 1E 48 F8 */	lfs f0, 0x48f8(r30)
/* 803BF04C 003BBF8C  D0 01 00 08 */	stfs f0, 8(r1)
/* 803BF050 003BBF90  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 803BF054 003BBF94  48 00 B0 69 */	bl "isOut__Q23ebi8EGEBox2fFR10Vector2<f>f"
/* 803BF058 003BBF98  48 00 00 08 */	b .L_803BF060
.L_803BF05C:
/* 803BF05C 003BBF9C  38 60 00 01 */	li r3, 1
.L_803BF060:
/* 803BF060 003BBFA0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BF064 003BBFA4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803BF068 003BBFA8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803BF06C 003BBFAC  7C 08 03 A6 */	mtlr r0
/* 803BF070 003BBFB0  38 21 00 20 */	addi r1, r1, 0x20
/* 803BF074 003BBFB4  4E 80 00 20 */	blr 
.endfn isOutViewField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase

.fn getPosOutOfViewField__Q33ebi5title9TTitleMgrFv, global
/* 803BF078 003BBFB8  C0 42 14 44 */	lfs f2, lbl_8051F7A4@sda21(r2)
/* 803BF07C 003BBFBC  C0 04 48 F8 */	lfs f0, 0x48f8(r4)
/* 803BF080 003BBFC0  C0 24 49 48 */	lfs f1, 0x4948(r4)
/* 803BF084 003BBFC4  EC 02 00 32 */	fmuls f0, f2, f0
/* 803BF088 003BBFC8  EC 22 00 72 */	fmuls f1, f2, f1
/* 803BF08C 003BBFCC  D0 03 00 00 */	stfs f0, 0(r3)
/* 803BF090 003BBFD0  D0 23 00 04 */	stfs f1, 4(r3)
/* 803BF094 003BBFD4  4E 80 00 20 */	blr 
.endfn getPosOutOfViewField__Q33ebi5title9TTitleMgrFv

.fn start__Q33ebi5title9TTitleMgrFv, global
/* 803BF098 003BBFD8  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 803BF09C 003BBFDC  7C 08 02 A6 */	mflr r0
/* 803BF0A0 003BBFE0  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 803BF0A4 003BBFE4  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 803BF0A8 003BBFE8  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 803BF0AC 003BBFEC  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 803BF0B0 003BBFF0  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 803BF0B4 003BBFF4  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 803BF0B8 003BBFF8  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 803BF0BC 003BBFFC  DB 81 00 B0 */	stfd f28, 0xb0(r1)
/* 803BF0C0 003BC000  F3 81 00 B8 */	psq_st f28, 184(r1), 0, qr0
/* 803BF0C4 003BC004  DB 61 00 A0 */	stfd f27, 0xa0(r1)
/* 803BF0C8 003BC008  F3 61 00 A8 */	psq_st f27, 168(r1), 0, qr0
/* 803BF0CC 003BC00C  DB 41 00 90 */	stfd f26, 0x90(r1)
/* 803BF0D0 003BC010  F3 41 00 98 */	psq_st f26, 152(r1), 0, qr0
/* 803BF0D4 003BC014  DB 21 00 80 */	stfd f25, 0x80(r1)
/* 803BF0D8 003BC018  F3 21 00 88 */	psq_st f25, 136(r1), 0, qr0
/* 803BF0DC 003BC01C  DB 01 00 70 */	stfd f24, 0x70(r1)
/* 803BF0E0 003BC020  F3 01 00 78 */	psq_st f24, 120(r1), 0, qr0
/* 803BF0E4 003BC024  DA E1 00 60 */	stfd f23, 0x60(r1)
/* 803BF0E8 003BC028  F2 E1 00 68 */	psq_st f23, 104(r1), 0, qr0
/* 803BF0EC 003BC02C  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 803BF0F0 003BC030  3C 80 80 51 */	lis r4, j3dSys@ha
/* 803BF0F4 003BC034  7C 7D 1B 78 */	mr r29, r3
/* 803BF0F8 003BC038  38 64 F2 30 */	addi r3, r4, j3dSys@l
/* 803BF0FC 003BC03C  4B C9 F2 C9 */	bl reinitGX__6J3DSysFv
/* 803BF100 003BC040  80 7D 48 CC */	lwz r3, 0x48cc(r29)
/* 803BF104 003BC044  4B CA 69 8D */	bl frameInit__13J3DDrawBufferFv
/* 803BF108 003BC048  80 7D 48 D0 */	lwz r3, 0x48d0(r29)
/* 803BF10C 003BC04C  4B CA 69 85 */	bl frameInit__13J3DDrawBufferFv
/* 803BF110 003BC050  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF114 003BC054  CB E2 14 B8 */	lfd f31, lbl_8051F818@sda21(r2)
/* 803BF118 003BC058  C3 C2 14 A0 */	lfs f30, lbl_8051F800@sda21(r2)
/* 803BF11C 003BC05C  7F BE EB 78 */	mr r30, r29
/* 803BF120 003BC060  C3 A2 14 A8 */	lfs f29, lbl_8051F808@sda21(r2)
/* 803BF124 003BC064  3B 63 71 A0 */	addi r27, r3, sincosTable___5JMath@l
/* 803BF128 003BC068  C3 82 14 A4 */	lfs f28, lbl_8051F804@sda21(r2)
/* 803BF12C 003BC06C  3B E0 00 00 */	li r31, 0
/* 803BF130 003BC070  C3 62 13 98 */	lfs f27, lbl_8051F6F8@sda21(r2)
/* 803BF134 003BC074  3F 80 43 30 */	lis r28, 0x4330
/* 803BF138 003BC078  C3 22 14 B0 */	lfs f25, lbl_8051F810@sda21(r2)
.L_803BF13C:
/* 803BF13C 003BC07C  4B D0 A4 65 */	bl rand
/* 803BF140 003BC080  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803BF144 003BC084  93 81 00 18 */	stw r28, 0x18(r1)
/* 803BF148 003BC088  C2 FD 4A 10 */	lfs f23, 0x4a10(r29)
/* 803BF14C 003BC08C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 803BF150 003BC090  C3 1D 49 E8 */	lfs f24, 0x49e8(r29)
/* 803BF154 003BC094  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 803BF158 003BC098  EC 00 F8 28 */	fsubs f0, f0, f31
/* 803BF15C 003BC09C  EC 00 F0 24 */	fdivs f0, f0, f30
/* 803BF160 003BC0A0  EF 5D E0 3A */	fmadds f26, f29, f0, f28
/* 803BF164 003BC0A4  4B D0 A4 3D */	bl rand
/* 803BF168 003BC0A8  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803BF16C 003BC0AC  93 81 00 20 */	stw r28, 0x20(r1)
/* 803BF170 003BC0B0  EC 17 C0 28 */	fsubs f0, f23, f24
/* 803BF174 003BC0B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BF178 003BC0B8  FC 1A D8 40 */	fcmpo cr0, f26, f27
/* 803BF17C 003BC0BC  C8 21 00 20 */	lfd f1, 0x20(r1)
/* 803BF180 003BC0C0  EC 21 F8 28 */	fsubs f1, f1, f31
/* 803BF184 003BC0C4  EC 21 F0 24 */	fdivs f1, f1, f30
/* 803BF188 003BC0C8  EC 60 C0 7A */	fmadds f3, f0, f1, f24
/* 803BF18C 003BC0CC  40 80 00 30 */	bge .L_803BF1BC
/* 803BF190 003BC0D0  C0 02 14 AC */	lfs f0, lbl_8051F80C@sda21(r2)
/* 803BF194 003BC0D4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF198 003BC0D8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803BF19C 003BC0DC  EC 1A 00 32 */	fmuls f0, f26, f0
/* 803BF1A0 003BC0E0  FC 00 00 1E */	fctiwz f0, f0
/* 803BF1A4 003BC0E4  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 803BF1A8 003BC0E8  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803BF1AC 003BC0EC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF1B0 003BC0F0  7C 03 04 2E */	lfsx f0, r3, r0
/* 803BF1B4 003BC0F4  FC 20 00 50 */	fneg f1, f0
/* 803BF1B8 003BC0F8  48 00 00 28 */	b .L_803BF1E0
.L_803BF1BC:
/* 803BF1BC 003BC0FC  C0 02 14 B0 */	lfs f0, lbl_8051F810@sda21(r2)
/* 803BF1C0 003BC100  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF1C4 003BC104  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803BF1C8 003BC108  EC 1A 00 32 */	fmuls f0, f26, f0
/* 803BF1CC 003BC10C  FC 00 00 1E */	fctiwz f0, f0
/* 803BF1D0 003BC110  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 803BF1D4 003BC114  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803BF1D8 003BC118  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF1DC 003BC11C  7C 23 04 2E */	lfsx f1, r3, r0
.L_803BF1E0:
/* 803BF1E0 003BC120  C0 1D 49 C0 */	lfs f0, 0x49c0(r29)
/* 803BF1E4 003BC124  FC 1A D8 40 */	fcmpo cr0, f26, f27
/* 803BF1E8 003BC128  EC 43 00 7A */	fmadds f2, f3, f1, f0
/* 803BF1EC 003BC12C  40 80 00 08 */	bge .L_803BF1F4
/* 803BF1F0 003BC130  FF 40 D0 50 */	fneg f26, f26
.L_803BF1F4:
/* 803BF1F4 003BC134  EC 3A 06 72 */	fmuls f1, f26, f25
/* 803BF1F8 003BC138  3B FF 00 01 */	addi r31, r31, 1
/* 803BF1FC 003BC13C  C0 1D 49 98 */	lfs f0, 0x4998(r29)
/* 803BF200 003BC140  2C 1F 01 F4 */	cmpwi r31, 0x1f4
/* 803BF204 003BC144  FC 20 08 1E */	fctiwz f1, f1
/* 803BF208 003BC148  D8 21 00 38 */	stfd f1, 0x38(r1)
/* 803BF20C 003BC14C  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 803BF210 003BC150  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF214 003BC154  7C 7B 02 14 */	add r3, r27, r0
/* 803BF218 003BC158  C0 23 00 04 */	lfs f1, 4(r3)
/* 803BF21C 003BC15C  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 803BF220 003BC160  D0 1E 0F 84 */	stfs f0, 0xf84(r30)
/* 803BF224 003BC164  D0 5E 0F 88 */	stfs f2, 0xf88(r30)
/* 803BF228 003BC168  3B DE 00 08 */	addi r30, r30, 8
/* 803BF22C 003BC16C  41 80 FF 10 */	blt .L_803BF13C
/* 803BF230 003BC170  38 7D 01 54 */	addi r3, r29, 0x154
/* 803BF234 003BC174  38 9D 0F 84 */	addi r4, r29, 0xf84
/* 803BF238 003BC178  48 02 54 31 */	bl "setStartPos__Q43ebi5title6Pikmin4TMgrFP10Vector2<f>"
/* 803BF23C 003BC17C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF240 003BC180  CB 62 14 B8 */	lfd f27, lbl_8051F818@sda21(r2)
/* 803BF244 003BC184  C3 82 14 A0 */	lfs f28, lbl_8051F800@sda21(r2)
/* 803BF248 003BC188  7F BE EB 78 */	mr r30, r29
/* 803BF24C 003BC18C  C3 A2 14 A8 */	lfs f29, lbl_8051F808@sda21(r2)
/* 803BF250 003BC190  3B 83 71 A0 */	addi r28, r3, sincosTable___5JMath@l
/* 803BF254 003BC194  C3 C2 14 A4 */	lfs f30, lbl_8051F804@sda21(r2)
/* 803BF258 003BC198  3B E0 00 00 */	li r31, 0
/* 803BF25C 003BC19C  C3 E2 13 98 */	lfs f31, lbl_8051F6F8@sda21(r2)
/* 803BF260 003BC1A0  3F 60 43 30 */	lis r27, 0x4330
/* 803BF264 003BC1A4  C3 22 14 B0 */	lfs f25, lbl_8051F810@sda21(r2)
.L_803BF268:
/* 803BF268 003BC1A8  4B D0 A3 39 */	bl rand
/* 803BF26C 003BC1AC  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803BF270 003BC1B0  93 61 00 38 */	stw r27, 0x38(r1)
/* 803BF274 003BC1B4  C3 1D 4A 10 */	lfs f24, 0x4a10(r29)
/* 803BF278 003BC1B8  90 01 00 3C */	stw r0, 0x3c(r1)
/* 803BF27C 003BC1BC  C2 FD 49 E8 */	lfs f23, 0x49e8(r29)
/* 803BF280 003BC1C0  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 803BF284 003BC1C4  EC 00 D8 28 */	fsubs f0, f0, f27
/* 803BF288 003BC1C8  EC 00 E0 24 */	fdivs f0, f0, f28
/* 803BF28C 003BC1CC  EF 5D F0 3A */	fmadds f26, f29, f0, f30
/* 803BF290 003BC1D0  4B D0 A3 11 */	bl rand
/* 803BF294 003BC1D4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803BF298 003BC1D8  93 61 00 30 */	stw r27, 0x30(r1)
/* 803BF29C 003BC1DC  EC 18 B8 28 */	fsubs f0, f24, f23
/* 803BF2A0 003BC1E0  90 01 00 34 */	stw r0, 0x34(r1)
/* 803BF2A4 003BC1E4  FC 1A F8 40 */	fcmpo cr0, f26, f31
/* 803BF2A8 003BC1E8  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 803BF2AC 003BC1EC  EC 21 D8 28 */	fsubs f1, f1, f27
/* 803BF2B0 003BC1F0  EC 21 E0 24 */	fdivs f1, f1, f28
/* 803BF2B4 003BC1F4  EC 60 B8 7A */	fmadds f3, f0, f1, f23
/* 803BF2B8 003BC1F8  40 80 00 30 */	bge .L_803BF2E8
/* 803BF2BC 003BC1FC  C0 02 14 AC */	lfs f0, lbl_8051F80C@sda21(r2)
/* 803BF2C0 003BC200  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF2C4 003BC204  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803BF2C8 003BC208  EC 1A 00 32 */	fmuls f0, f26, f0
/* 803BF2CC 003BC20C  FC 00 00 1E */	fctiwz f0, f0
/* 803BF2D0 003BC210  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 803BF2D4 003BC214  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803BF2D8 003BC218  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF2DC 003BC21C  7C 03 04 2E */	lfsx f0, r3, r0
/* 803BF2E0 003BC220  FC 20 00 50 */	fneg f1, f0
/* 803BF2E4 003BC224  48 00 00 28 */	b .L_803BF30C
.L_803BF2E8:
/* 803BF2E8 003BC228  C0 02 14 B0 */	lfs f0, lbl_8051F810@sda21(r2)
/* 803BF2EC 003BC22C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF2F0 003BC230  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803BF2F4 003BC234  EC 1A 00 32 */	fmuls f0, f26, f0
/* 803BF2F8 003BC238  FC 00 00 1E */	fctiwz f0, f0
/* 803BF2FC 003BC23C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 803BF300 003BC240  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BF304 003BC244  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF308 003BC248  7C 23 04 2E */	lfsx f1, r3, r0
.L_803BF30C:
/* 803BF30C 003BC24C  C0 1D 49 C0 */	lfs f0, 0x49c0(r29)
/* 803BF310 003BC250  FC 1A F8 40 */	fcmpo cr0, f26, f31
/* 803BF314 003BC254  EC 43 00 7A */	fmadds f2, f3, f1, f0
/* 803BF318 003BC258  40 80 00 08 */	bge .L_803BF320
/* 803BF31C 003BC25C  FF 40 D0 50 */	fneg f26, f26
.L_803BF320:
/* 803BF320 003BC260  EC 3A 06 72 */	fmuls f1, f26, f25
/* 803BF324 003BC264  3B FF 00 01 */	addi r31, r31, 1
/* 803BF328 003BC268  C0 1D 49 98 */	lfs f0, 0x4998(r29)
/* 803BF32C 003BC26C  2C 1F 01 F4 */	cmpwi r31, 0x1f4
/* 803BF330 003BC270  FC 20 08 1E */	fctiwz f1, f1
/* 803BF334 003BC274  D8 21 00 18 */	stfd f1, 0x18(r1)
/* 803BF338 003BC278  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 803BF33C 003BC27C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF340 003BC280  7C 7C 02 14 */	add r3, r28, r0
/* 803BF344 003BC284  C0 23 00 04 */	lfs f1, 4(r3)
/* 803BF348 003BC288  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 803BF34C 003BC28C  D0 1E 0F 84 */	stfs f0, 0xf84(r30)
/* 803BF350 003BC290  D0 5E 0F 88 */	stfs f2, 0xf88(r30)
/* 803BF354 003BC294  3B DE 00 08 */	addi r30, r30, 8
/* 803BF358 003BC298  41 80 FF 10 */	blt .L_803BF268
/* 803BF35C 003BC29C  38 7D 1F 24 */	addi r3, r29, 0x1f24
/* 803BF360 003BC2A0  38 9D 0F 84 */	addi r4, r29, 0xf84
/* 803BF364 003BC2A4  48 02 47 AD */	bl "copyCoordinate__Q33ebi5title9TCoordMgrFP10Vector2<f>"
/* 803BF368 003BC2A8  38 7D 01 54 */	addi r3, r29, 0x154
/* 803BF36C 003BC2AC  38 9D 0F 84 */	addi r4, r29, 0xf84
/* 803BF370 003BC2B0  48 02 54 5D */	bl "setDestPos__Q43ebi5title6Pikmin4TMgrFP10Vector2<f>"
/* 803BF374 003BC2B4  80 7D 0C F0 */	lwz r3, 0xcf0(r29)
/* 803BF378 003BC2B8  48 02 84 9D */	bl outOfCalc__Q43ebi5title6Kogane5TUnitFv
/* 803BF37C 003BC2BC  80 7D 0F 50 */	lwz r3, 0xf50(r29)
/* 803BF380 003BC2C0  48 02 97 31 */	bl outOfCalc__Q43ebi5title6Chappy5TUnitFv
/* 803BF384 003BC2C4  38 7D 00 F0 */	addi r3, r29, 0xf0
/* 803BF388 003BC2C8  48 00 23 C9 */	bl start__Q33ebi5title11TBlackPlaneFv
/* 803BF38C 003BC2CC  38 7D 00 F0 */	addi r3, r29, 0xf0
/* 803BF390 003BC2D0  48 00 24 61 */	bl updateBeforeCamera__Q33ebi5title11TBlackPlaneFv
/* 803BF394 003BC2D4  38 61 00 08 */	addi r3, r1, 8
/* 803BF398 003BC2D8  38 9D 00 F0 */	addi r4, r29, 0xf0
/* 803BF39C 003BC2DC  48 00 26 01 */	bl getCameraPos__Q33ebi5title11TBlackPlaneFv
/* 803BF3A0 003BC2E0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803BF3A4 003BC2E4  38 7D 40 78 */	addi r3, r29, 0x4078
/* 803BF3A8 003BC2E8  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 803BF3AC 003BC2EC  C0 01 00 08 */	lfs f0, 8(r1)
/* 803BF3B0 003BC2F0  D0 1D 41 EC */	stfs f0, 0x41ec(r29)
/* 803BF3B4 003BC2F4  D0 3D 41 F0 */	stfs f1, 0x41f0(r29)
/* 803BF3B8 003BC2F8  D0 5D 41 F4 */	stfs f2, 0x41f4(r29)
/* 803BF3BC 003BC2FC  48 00 2B 01 */	bl update__Q33ebi5title15TTitleCameraMgrFv
/* 803BF3C0 003BC300  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BF3C4 003BC304  C0 22 14 40 */	lfs f1, lbl_8051F7A0@sda21(r2)
/* 803BF3C8 003BC308  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803BF3CC 003BC30C  EC 21 00 24 */	fdivs f1, f1, f0
/* 803BF3D0 003BC310  4B D0 27 7D */	bl __cvt_fp2unsigned
/* 803BF3D4 003BC314  90 7D 0F 68 */	stw r3, 0xf68(r29)
/* 803BF3D8 003BC318  38 00 00 00 */	li r0, 0
/* 803BF3DC 003BC31C  90 7D 0F 6C */	stw r3, 0xf6c(r29)
/* 803BF3E0 003BC320  98 1D 0F 70 */	stb r0, 0xf70(r29)
/* 803BF3E4 003BC324  98 1D 0F 71 */	stb r0, 0xf71(r29)
/* 803BF3E8 003BC328  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BF3EC 003BC32C  C0 3D 4B 78 */	lfs f1, 0x4b78(r29)
/* 803BF3F0 003BC330  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803BF3F4 003BC334  EC 21 00 24 */	fdivs f1, f1, f0
/* 803BF3F8 003BC338  4B D0 27 55 */	bl __cvt_fp2unsigned
/* 803BF3FC 003BC33C  90 7D 0F 74 */	stw r3, 0xf74(r29)
/* 803BF400 003BC340  90 7D 0F 78 */	stw r3, 0xf78(r29)
/* 803BF404 003BC344  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BF408 003BC348  C0 3D 4B 50 */	lfs f1, 0x4b50(r29)
/* 803BF40C 003BC34C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803BF410 003BC350  EC 21 00 24 */	fdivs f1, f1, f0
/* 803BF414 003BC354  4B D0 27 39 */	bl __cvt_fp2unsigned
/* 803BF418 003BC358  90 7D 0F 7C */	stw r3, 0xf7c(r29)
/* 803BF41C 003BC35C  90 7D 0F 80 */	stw r3, 0xf80(r29)
/* 803BF420 003BC360  38 7D 01 54 */	addi r3, r29, 0x154
/* 803BF424 003BC364  48 02 59 29 */	bl startDemo__Q43ebi5title6Pikmin4TMgrFv
/* 803BF428 003BC368  38 7D 00 F0 */	addi r3, r29, 0xf0
/* 803BF42C 003BC36C  48 00 23 25 */	bl start__Q33ebi5title11TBlackPlaneFv
/* 803BF430 003BC370  38 7D 00 A4 */	addi r3, r29, 0xa4
/* 803BF434 003BC374  48 00 1E C5 */	bl start__Q33ebi5title12TBGEnemyBaseFv
/* 803BF438 003BC378  7F A3 EB 78 */	mr r3, r29
/* 803BF43C 003BC37C  38 80 00 01 */	li r4, 1
/* 803BF440 003BC380  48 00 08 21 */	bl startState__Q33ebi5title9TTitleMgrFQ43ebi5title9TTitleMgr9enumState
/* 803BF444 003BC384  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 803BF448 003BC388  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 803BF44C 003BC38C  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 803BF450 003BC390  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 803BF454 003BC394  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 803BF458 003BC398  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 803BF45C 003BC39C  E3 81 00 B8 */	psq_l f28, 184(r1), 0, qr0
/* 803BF460 003BC3A0  CB 81 00 B0 */	lfd f28, 0xb0(r1)
/* 803BF464 003BC3A4  E3 61 00 A8 */	psq_l f27, 168(r1), 0, qr0
/* 803BF468 003BC3A8  CB 61 00 A0 */	lfd f27, 0xa0(r1)
/* 803BF46C 003BC3AC  E3 41 00 98 */	psq_l f26, 152(r1), 0, qr0
/* 803BF470 003BC3B0  CB 41 00 90 */	lfd f26, 0x90(r1)
/* 803BF474 003BC3B4  E3 21 00 88 */	psq_l f25, 136(r1), 0, qr0
/* 803BF478 003BC3B8  CB 21 00 80 */	lfd f25, 0x80(r1)
/* 803BF47C 003BC3BC  E3 01 00 78 */	psq_l f24, 120(r1), 0, qr0
/* 803BF480 003BC3C0  CB 01 00 70 */	lfd f24, 0x70(r1)
/* 803BF484 003BC3C4  E2 E1 00 68 */	psq_l f23, 104(r1), 0, qr0
/* 803BF488 003BC3C8  CA E1 00 60 */	lfd f23, 0x60(r1)
/* 803BF48C 003BC3CC  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 803BF490 003BC3D0  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 803BF494 003BC3D4  7C 08 03 A6 */	mtlr r0
/* 803BF498 003BC3D8  38 21 00 F0 */	addi r1, r1, 0xf0
/* 803BF49C 003BC3DC  4E 80 00 20 */	blr 
.endfn start__Q33ebi5title9TTitleMgrFv

.fn breakup__Q33ebi5title9TTitleMgrFv, global
/* 803BF4A0 003BC3E0  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 803BF4A4 003BC3E4  7C 08 02 A6 */	mflr r0
/* 803BF4A8 003BC3E8  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 803BF4AC 003BC3EC  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 803BF4B0 003BC3F0  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 803BF4B4 003BC3F4  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 803BF4B8 003BC3F8  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 803BF4BC 003BC3FC  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 803BF4C0 003BC400  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 803BF4C4 003BC404  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 803BF4C8 003BC408  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 803BF4CC 003BC40C  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 803BF4D0 003BC410  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 803BF4D4 003BC414  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 803BF4D8 003BC418  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 803BF4DC 003BC41C  DB 21 00 70 */	stfd f25, 0x70(r1)
/* 803BF4E0 003BC420  F3 21 00 78 */	psq_st f25, 120(r1), 0, qr0
/* 803BF4E4 003BC424  DB 01 00 60 */	stfd f24, 0x60(r1)
/* 803BF4E8 003BC428  F3 01 00 68 */	psq_st f24, 104(r1), 0, qr0
/* 803BF4EC 003BC42C  DA E1 00 50 */	stfd f23, 0x50(r1)
/* 803BF4F0 003BC430  F2 E1 00 58 */	psq_st f23, 88(r1), 0, qr0
/* 803BF4F4 003BC434  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 803BF4F8 003BC438  7C 7D 1B 78 */	mr r29, r3
/* 803BF4FC 003BC43C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF500 003BC440  CB 62 14 B8 */	lfd f27, lbl_8051F818@sda21(r2)
/* 803BF504 003BC444  7F BE EB 78 */	mr r30, r29
/* 803BF508 003BC448  C3 82 14 A0 */	lfs f28, lbl_8051F800@sda21(r2)
/* 803BF50C 003BC44C  3B 83 71 A0 */	addi r28, r3, sincosTable___5JMath@l
/* 803BF510 003BC450  C3 A2 14 A8 */	lfs f29, lbl_8051F808@sda21(r2)
/* 803BF514 003BC454  3B E0 00 00 */	li r31, 0
/* 803BF518 003BC458  C3 C2 14 A4 */	lfs f30, lbl_8051F804@sda21(r2)
/* 803BF51C 003BC45C  3F 60 43 30 */	lis r27, 0x4330
/* 803BF520 003BC460  C3 E2 13 98 */	lfs f31, lbl_8051F6F8@sda21(r2)
/* 803BF524 003BC464  C3 22 14 B0 */	lfs f25, lbl_8051F810@sda21(r2)
.L_803BF528:
/* 803BF528 003BC468  4B D0 A0 79 */	bl rand
/* 803BF52C 003BC46C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803BF530 003BC470  93 61 00 08 */	stw r27, 8(r1)
/* 803BF534 003BC474  C2 FD 4A 10 */	lfs f23, 0x4a10(r29)
/* 803BF538 003BC478  90 01 00 0C */	stw r0, 0xc(r1)
/* 803BF53C 003BC47C  C3 1D 49 E8 */	lfs f24, 0x49e8(r29)
/* 803BF540 003BC480  C8 01 00 08 */	lfd f0, 8(r1)
/* 803BF544 003BC484  EC 00 D8 28 */	fsubs f0, f0, f27
/* 803BF548 003BC488  EC 00 E0 24 */	fdivs f0, f0, f28
/* 803BF54C 003BC48C  EF 5D F0 3A */	fmadds f26, f29, f0, f30
/* 803BF550 003BC490  4B D0 A0 51 */	bl rand
/* 803BF554 003BC494  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803BF558 003BC498  93 61 00 10 */	stw r27, 0x10(r1)
/* 803BF55C 003BC49C  EC 17 C0 28 */	fsubs f0, f23, f24
/* 803BF560 003BC4A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BF564 003BC4A4  FC 1A F8 40 */	fcmpo cr0, f26, f31
/* 803BF568 003BC4A8  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 803BF56C 003BC4AC  EC 21 D8 28 */	fsubs f1, f1, f27
/* 803BF570 003BC4B0  EC 21 E0 24 */	fdivs f1, f1, f28
/* 803BF574 003BC4B4  EC 60 C0 7A */	fmadds f3, f0, f1, f24
/* 803BF578 003BC4B8  40 80 00 30 */	bge .L_803BF5A8
/* 803BF57C 003BC4BC  C0 02 14 AC */	lfs f0, lbl_8051F80C@sda21(r2)
/* 803BF580 003BC4C0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF584 003BC4C4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803BF588 003BC4C8  EC 1A 00 32 */	fmuls f0, f26, f0
/* 803BF58C 003BC4CC  FC 00 00 1E */	fctiwz f0, f0
/* 803BF590 003BC4D0  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 803BF594 003BC4D4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 803BF598 003BC4D8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF59C 003BC4DC  7C 03 04 2E */	lfsx f0, r3, r0
/* 803BF5A0 003BC4E0  FC 20 00 50 */	fneg f1, f0
/* 803BF5A4 003BC4E4  48 00 00 28 */	b .L_803BF5CC
.L_803BF5A8:
/* 803BF5A8 003BC4E8  C0 02 14 B0 */	lfs f0, lbl_8051F810@sda21(r2)
/* 803BF5AC 003BC4EC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF5B0 003BC4F0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803BF5B4 003BC4F4  EC 1A 00 32 */	fmuls f0, f26, f0
/* 803BF5B8 003BC4F8  FC 00 00 1E */	fctiwz f0, f0
/* 803BF5BC 003BC4FC  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 803BF5C0 003BC500  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BF5C4 003BC504  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF5C8 003BC508  7C 23 04 2E */	lfsx f1, r3, r0
.L_803BF5CC:
/* 803BF5CC 003BC50C  C0 1D 49 C0 */	lfs f0, 0x49c0(r29)
/* 803BF5D0 003BC510  FC 1A F8 40 */	fcmpo cr0, f26, f31
/* 803BF5D4 003BC514  EC 43 00 7A */	fmadds f2, f3, f1, f0
/* 803BF5D8 003BC518  40 80 00 08 */	bge .L_803BF5E0
/* 803BF5DC 003BC51C  FF 40 D0 50 */	fneg f26, f26
.L_803BF5E0:
/* 803BF5E0 003BC520  EC 3A 06 72 */	fmuls f1, f26, f25
/* 803BF5E4 003BC524  3B FF 00 01 */	addi r31, r31, 1
/* 803BF5E8 003BC528  C0 1D 49 98 */	lfs f0, 0x4998(r29)
/* 803BF5EC 003BC52C  2C 1F 01 F4 */	cmpwi r31, 0x1f4
/* 803BF5F0 003BC530  FC 20 08 1E */	fctiwz f1, f1
/* 803BF5F4 003BC534  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 803BF5F8 003BC538  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803BF5FC 003BC53C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF600 003BC540  7C 7C 02 14 */	add r3, r28, r0
/* 803BF604 003BC544  C0 23 00 04 */	lfs f1, 4(r3)
/* 803BF608 003BC548  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 803BF60C 003BC54C  D0 1E 0F 84 */	stfs f0, 0xf84(r30)
/* 803BF610 003BC550  D0 5E 0F 88 */	stfs f2, 0xf88(r30)
/* 803BF614 003BC554  3B DE 00 08 */	addi r30, r30, 8
/* 803BF618 003BC558  41 80 FF 10 */	blt .L_803BF528
/* 803BF61C 003BC55C  38 7D 01 54 */	addi r3, r29, 0x154
/* 803BF620 003BC560  38 9D 0F 84 */	addi r4, r29, 0xf84
/* 803BF624 003BC564  48 02 51 A9 */	bl "setDestPos__Q43ebi5title6Pikmin4TMgrFP10Vector2<f>"
/* 803BF628 003BC568  38 7D 01 54 */	addi r3, r29, 0x154
/* 803BF62C 003BC56C  48 02 54 4D */	bl quickAssemble__Q43ebi5title6Pikmin4TMgrFv
/* 803BF630 003BC570  80 7D 0C F0 */	lwz r3, 0xcf0(r29)
/* 803BF634 003BC574  48 02 81 B1 */	bl goHome__Q43ebi5title6Kogane5TUnitFv
/* 803BF638 003BC578  80 7D 0F 50 */	lwz r3, 0xf50(r29)
/* 803BF63C 003BC57C  48 02 94 45 */	bl goHome__Q43ebi5title6Chappy5TUnitFv
/* 803BF640 003BC580  7F A3 EB 78 */	mr r3, r29
/* 803BF644 003BC584  38 80 00 01 */	li r4, 1
/* 803BF648 003BC588  48 00 06 19 */	bl startState__Q33ebi5title9TTitleMgrFQ43ebi5title9TTitleMgr9enumState
/* 803BF64C 003BC58C  38 60 00 01 */	li r3, 1
/* 803BF650 003BC590  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 803BF654 003BC594  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 803BF658 003BC598  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 803BF65C 003BC59C  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 803BF660 003BC5A0  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 803BF664 003BC5A4  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 803BF668 003BC5A8  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 803BF66C 003BC5AC  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 803BF670 003BC5B0  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 803BF674 003BC5B4  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 803BF678 003BC5B8  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 803BF67C 003BC5BC  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 803BF680 003BC5C0  E3 21 00 78 */	psq_l f25, 120(r1), 0, qr0
/* 803BF684 003BC5C4  CB 21 00 70 */	lfd f25, 0x70(r1)
/* 803BF688 003BC5C8  E3 01 00 68 */	psq_l f24, 104(r1), 0, qr0
/* 803BF68C 003BC5CC  CB 01 00 60 */	lfd f24, 0x60(r1)
/* 803BF690 003BC5D0  E2 E1 00 58 */	psq_l f23, 88(r1), 0, qr0
/* 803BF694 003BC5D4  CA E1 00 50 */	lfd f23, 0x50(r1)
/* 803BF698 003BC5D8  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 803BF69C 003BC5DC  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 803BF6A0 003BC5E0  7C 08 03 A6 */	mtlr r0
/* 803BF6A4 003BC5E4  38 21 00 E0 */	addi r1, r1, 0xe0
/* 803BF6A8 003BC5E8  4E 80 00 20 */	blr 
.endfn breakup__Q33ebi5title9TTitleMgrFv

.fn startKogane__Q33ebi5title9TTitleMgrFv, global
/* 803BF6AC 003BC5EC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803BF6B0 003BC5F0  7C 08 02 A6 */	mflr r0
/* 803BF6B4 003BC5F4  90 01 00 44 */	stw r0, 0x44(r1)
/* 803BF6B8 003BC5F8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803BF6BC 003BC5FC  7C 7F 1B 78 */	mr r31, r3
/* 803BF6C0 003BC600  38 7F 01 54 */	addi r3, r31, 0x154
/* 803BF6C4 003BC604  48 02 5B 59 */	bl isAssemble__Q43ebi5title6Pikmin4TMgrFv
/* 803BF6C8 003BC608  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BF6CC 003BC60C  40 82 00 0C */	bne .L_803BF6D8
/* 803BF6D0 003BC610  38 00 00 00 */	li r0, 0
/* 803BF6D4 003BC614  48 00 00 50 */	b .L_803BF724
.L_803BF6D8:
/* 803BF6D8 003BC618  80 7F 0C F0 */	lwz r3, 0xcf0(r31)
/* 803BF6DC 003BC61C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BF6E0 003BC620  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803BF6E4 003BC624  7D 89 03 A6 */	mtctr r12
/* 803BF6E8 003BC628  4E 80 04 21 */	bctrl 
/* 803BF6EC 003BC62C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BF6F0 003BC630  41 82 00 0C */	beq .L_803BF6FC
/* 803BF6F4 003BC634  38 00 00 00 */	li r0, 0
/* 803BF6F8 003BC638  48 00 00 2C */	b .L_803BF724
.L_803BF6FC:
/* 803BF6FC 003BC63C  80 7F 0F 50 */	lwz r3, 0xf50(r31)
/* 803BF700 003BC640  81 83 00 00 */	lwz r12, 0(r3)
/* 803BF704 003BC644  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803BF708 003BC648  7D 89 03 A6 */	mtctr r12
/* 803BF70C 003BC64C  4E 80 04 21 */	bctrl 
/* 803BF710 003BC650  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BF714 003BC654  41 82 00 0C */	beq .L_803BF720
/* 803BF718 003BC658  38 00 00 00 */	li r0, 0
/* 803BF71C 003BC65C  48 00 00 08 */	b .L_803BF724
.L_803BF720:
/* 803BF720 003BC660  38 00 00 01 */	li r0, 1
.L_803BF724:
/* 803BF724 003BC664  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803BF728 003BC668  40 82 00 0C */	bne .L_803BF734
/* 803BF72C 003BC66C  38 60 00 00 */	li r3, 0
/* 803BF730 003BC670  48 00 01 08 */	b .L_803BF838
.L_803BF734:
/* 803BF734 003BC674  4B D0 9E 6D */	bl rand
/* 803BF738 003BC678  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803BF73C 003BC67C  3C 00 43 30 */	lis r0, 0x4330
/* 803BF740 003BC680  90 61 00 1C */	stw r3, 0x1c(r1)
/* 803BF744 003BC684  C8 62 14 B8 */	lfd f3, lbl_8051F818@sda21(r2)
/* 803BF748 003BC688  90 01 00 18 */	stw r0, 0x18(r1)
/* 803BF74C 003BC68C  C0 42 14 A0 */	lfs f2, lbl_8051F800@sda21(r2)
/* 803BF750 003BC690  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 803BF754 003BC694  C0 22 14 C4 */	lfs f1, lbl_8051F824@sda21(r2)
/* 803BF758 003BC698  EC 60 18 28 */	fsubs f3, f0, f3
/* 803BF75C 003BC69C  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BF760 003BC6A0  C0 9F 4A 10 */	lfs f4, 0x4a10(r31)
/* 803BF764 003BC6A4  EC 43 10 24 */	fdivs f2, f3, f2
/* 803BF768 003BC6A8  EC 61 00 B2 */	fmuls f3, f1, f2
/* 803BF76C 003BC6AC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803BF770 003BC6B0  40 80 00 30 */	bge .L_803BF7A0
/* 803BF774 003BC6B4  C0 02 14 AC */	lfs f0, lbl_8051F80C@sda21(r2)
/* 803BF778 003BC6B8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF77C 003BC6BC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803BF780 003BC6C0  EC 03 00 32 */	fmuls f0, f3, f0
/* 803BF784 003BC6C4  FC 00 00 1E */	fctiwz f0, f0
/* 803BF788 003BC6C8  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 803BF78C 003BC6CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BF790 003BC6D0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF794 003BC6D4  7C 03 04 2E */	lfsx f0, r3, r0
/* 803BF798 003BC6D8  FC 20 00 50 */	fneg f1, f0
/* 803BF79C 003BC6DC  48 00 00 28 */	b .L_803BF7C4
.L_803BF7A0:
/* 803BF7A0 003BC6E0  C0 02 14 B0 */	lfs f0, lbl_8051F810@sda21(r2)
/* 803BF7A4 003BC6E4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF7A8 003BC6E8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803BF7AC 003BC6EC  EC 03 00 32 */	fmuls f0, f3, f0
/* 803BF7B0 003BC6F0  FC 00 00 1E */	fctiwz f0, f0
/* 803BF7B4 003BC6F4  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 803BF7B8 003BC6F8  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803BF7BC 003BC6FC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF7C0 003BC700  7C 23 04 2E */	lfsx f1, r3, r0
.L_803BF7C4:
/* 803BF7C4 003BC704  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BF7C8 003BC708  EC 44 00 72 */	fmuls f2, f4, f1
/* 803BF7CC 003BC70C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803BF7D0 003BC710  40 80 00 08 */	bge .L_803BF7D8
/* 803BF7D4 003BC714  FC 60 18 50 */	fneg f3, f3
.L_803BF7D8:
/* 803BF7D8 003BC718  C0 22 14 B0 */	lfs f1, lbl_8051F810@sda21(r2)
/* 803BF7DC 003BC71C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF7E0 003BC720  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BF7E4 003BC724  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803BF7E8 003BC728  EC 23 00 72 */	fmuls f1, f3, f1
/* 803BF7EC 003BC72C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803BF7F0 003BC730  38 81 00 10 */	addi r4, r1, 0x10
/* 803BF7F4 003BC734  38 A1 00 08 */	addi r5, r1, 8
/* 803BF7F8 003BC738  D0 01 00 08 */	stfs f0, 8(r1)
/* 803BF7FC 003BC73C  FC 20 08 1E */	fctiwz f1, f1
/* 803BF800 003BC740  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803BF804 003BC744  D8 21 00 30 */	stfd f1, 0x30(r1)
/* 803BF808 003BC748  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803BF80C 003BC74C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF810 003BC750  7C 63 02 14 */	add r3, r3, r0
/* 803BF814 003BC754  C0 03 00 04 */	lfs f0, 4(r3)
/* 803BF818 003BC758  EC 04 00 32 */	fmuls f0, f4, f0
/* 803BF81C 003BC75C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803BF820 003BC760  80 7F 0C F0 */	lwz r3, 0xcf0(r31)
/* 803BF824 003BC764  48 02 7F 75 */	bl "startZigzagWalk__Q43ebi5title6Kogane5TUnitFR10Vector2<f>R10Vector2<f>"
/* 803BF828 003BC768  7F E3 FB 78 */	mr r3, r31
/* 803BF82C 003BC76C  38 80 00 03 */	li r4, 3
/* 803BF830 003BC770  48 00 04 31 */	bl startState__Q33ebi5title9TTitleMgrFQ43ebi5title9TTitleMgr9enumState
/* 803BF834 003BC774  38 60 00 01 */	li r3, 1
.L_803BF838:
/* 803BF838 003BC778  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803BF83C 003BC77C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803BF840 003BC780  7C 08 03 A6 */	mtlr r0
/* 803BF844 003BC784  38 21 00 40 */	addi r1, r1, 0x40
/* 803BF848 003BC788  4E 80 00 20 */	blr 
.endfn startKogane__Q33ebi5title9TTitleMgrFv

.fn startChappy__Q33ebi5title9TTitleMgrFv, global
/* 803BF84C 003BC78C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803BF850 003BC790  7C 08 02 A6 */	mflr r0
/* 803BF854 003BC794  90 01 00 44 */	stw r0, 0x44(r1)
/* 803BF858 003BC798  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803BF85C 003BC79C  7C 7F 1B 78 */	mr r31, r3
/* 803BF860 003BC7A0  38 7F 01 54 */	addi r3, r31, 0x154
/* 803BF864 003BC7A4  48 02 59 B9 */	bl isAssemble__Q43ebi5title6Pikmin4TMgrFv
/* 803BF868 003BC7A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BF86C 003BC7AC  40 82 00 0C */	bne .L_803BF878
/* 803BF870 003BC7B0  38 00 00 00 */	li r0, 0
/* 803BF874 003BC7B4  48 00 00 50 */	b .L_803BF8C4
.L_803BF878:
/* 803BF878 003BC7B8  80 7F 0C F0 */	lwz r3, 0xcf0(r31)
/* 803BF87C 003BC7BC  81 83 00 00 */	lwz r12, 0(r3)
/* 803BF880 003BC7C0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803BF884 003BC7C4  7D 89 03 A6 */	mtctr r12
/* 803BF888 003BC7C8  4E 80 04 21 */	bctrl 
/* 803BF88C 003BC7CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BF890 003BC7D0  41 82 00 0C */	beq .L_803BF89C
/* 803BF894 003BC7D4  38 00 00 00 */	li r0, 0
/* 803BF898 003BC7D8  48 00 00 2C */	b .L_803BF8C4
.L_803BF89C:
/* 803BF89C 003BC7DC  80 7F 0F 50 */	lwz r3, 0xf50(r31)
/* 803BF8A0 003BC7E0  81 83 00 00 */	lwz r12, 0(r3)
/* 803BF8A4 003BC7E4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803BF8A8 003BC7E8  7D 89 03 A6 */	mtctr r12
/* 803BF8AC 003BC7EC  4E 80 04 21 */	bctrl 
/* 803BF8B0 003BC7F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BF8B4 003BC7F4  41 82 00 0C */	beq .L_803BF8C0
/* 803BF8B8 003BC7F8  38 00 00 00 */	li r0, 0
/* 803BF8BC 003BC7FC  48 00 00 08 */	b .L_803BF8C4
.L_803BF8C0:
/* 803BF8C0 003BC800  38 00 00 01 */	li r0, 1
.L_803BF8C4:
/* 803BF8C4 003BC804  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803BF8C8 003BC808  40 82 00 0C */	bne .L_803BF8D4
/* 803BF8CC 003BC80C  38 60 00 00 */	li r3, 0
/* 803BF8D0 003BC810  48 00 01 08 */	b .L_803BF9D8
.L_803BF8D4:
/* 803BF8D4 003BC814  4B D0 9C CD */	bl rand
/* 803BF8D8 003BC818  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803BF8DC 003BC81C  3C 00 43 30 */	lis r0, 0x4330
/* 803BF8E0 003BC820  90 61 00 1C */	stw r3, 0x1c(r1)
/* 803BF8E4 003BC824  C8 62 14 B8 */	lfd f3, lbl_8051F818@sda21(r2)
/* 803BF8E8 003BC828  90 01 00 18 */	stw r0, 0x18(r1)
/* 803BF8EC 003BC82C  C0 42 14 A0 */	lfs f2, lbl_8051F800@sda21(r2)
/* 803BF8F0 003BC830  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 803BF8F4 003BC834  C0 22 14 C4 */	lfs f1, lbl_8051F824@sda21(r2)
/* 803BF8F8 003BC838  EC 60 18 28 */	fsubs f3, f0, f3
/* 803BF8FC 003BC83C  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BF900 003BC840  C0 9F 4A 10 */	lfs f4, 0x4a10(r31)
/* 803BF904 003BC844  EC 43 10 24 */	fdivs f2, f3, f2
/* 803BF908 003BC848  EC 61 00 B2 */	fmuls f3, f1, f2
/* 803BF90C 003BC84C  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803BF910 003BC850  40 80 00 30 */	bge .L_803BF940
/* 803BF914 003BC854  C0 02 14 AC */	lfs f0, lbl_8051F80C@sda21(r2)
/* 803BF918 003BC858  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF91C 003BC85C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803BF920 003BC860  EC 03 00 32 */	fmuls f0, f3, f0
/* 803BF924 003BC864  FC 00 00 1E */	fctiwz f0, f0
/* 803BF928 003BC868  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 803BF92C 003BC86C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BF930 003BC870  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF934 003BC874  7C 03 04 2E */	lfsx f0, r3, r0
/* 803BF938 003BC878  FC 20 00 50 */	fneg f1, f0
/* 803BF93C 003BC87C  48 00 00 28 */	b .L_803BF964
.L_803BF940:
/* 803BF940 003BC880  C0 02 14 B0 */	lfs f0, lbl_8051F810@sda21(r2)
/* 803BF944 003BC884  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF948 003BC888  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803BF94C 003BC88C  EC 03 00 32 */	fmuls f0, f3, f0
/* 803BF950 003BC890  FC 00 00 1E */	fctiwz f0, f0
/* 803BF954 003BC894  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 803BF958 003BC898  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803BF95C 003BC89C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF960 003BC8A0  7C 23 04 2E */	lfsx f1, r3, r0
.L_803BF964:
/* 803BF964 003BC8A4  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BF968 003BC8A8  EC 44 00 72 */	fmuls f2, f4, f1
/* 803BF96C 003BC8AC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803BF970 003BC8B0  40 80 00 08 */	bge .L_803BF978
/* 803BF974 003BC8B4  FC 60 18 50 */	fneg f3, f3
.L_803BF978:
/* 803BF978 003BC8B8  C0 22 14 B0 */	lfs f1, lbl_8051F810@sda21(r2)
/* 803BF97C 003BC8BC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BF980 003BC8C0  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803BF984 003BC8C4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803BF988 003BC8C8  EC 23 00 72 */	fmuls f1, f3, f1
/* 803BF98C 003BC8CC  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803BF990 003BC8D0  38 81 00 10 */	addi r4, r1, 0x10
/* 803BF994 003BC8D4  38 A1 00 08 */	addi r5, r1, 8
/* 803BF998 003BC8D8  D0 01 00 08 */	stfs f0, 8(r1)
/* 803BF99C 003BC8DC  FC 20 08 1E */	fctiwz f1, f1
/* 803BF9A0 003BC8E0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803BF9A4 003BC8E4  D8 21 00 30 */	stfd f1, 0x30(r1)
/* 803BF9A8 003BC8E8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803BF9AC 003BC8EC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BF9B0 003BC8F0  7C 63 02 14 */	add r3, r3, r0
/* 803BF9B4 003BC8F4  C0 03 00 04 */	lfs f0, 4(r3)
/* 803BF9B8 003BC8F8  EC 04 00 32 */	fmuls f0, f4, f0
/* 803BF9BC 003BC8FC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803BF9C0 003BC900  80 7F 0F 50 */	lwz r3, 0xf50(r31)
/* 803BF9C4 003BC904  48 02 90 69 */	bl "startZigzagWalk__Q43ebi5title6Chappy5TUnitFR10Vector2<f>R10Vector2<f>"
/* 803BF9C8 003BC908  7F E3 FB 78 */	mr r3, r31
/* 803BF9CC 003BC90C  38 80 00 03 */	li r4, 3
/* 803BF9D0 003BC910  48 00 02 91 */	bl startState__Q33ebi5title9TTitleMgrFQ43ebi5title9TTitleMgr9enumState
/* 803BF9D4 003BC914  38 60 00 01 */	li r3, 1
.L_803BF9D8:
/* 803BF9D8 003BC918  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803BF9DC 003BC91C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803BF9E0 003BC920  7C 08 03 A6 */	mtlr r0
/* 803BF9E4 003BC924  38 21 00 40 */	addi r1, r1, 0x40
/* 803BF9E8 003BC928  4E 80 00 20 */	blr 
.endfn startChappy__Q33ebi5title9TTitleMgrFv

.fn boidToAssemble__Q33ebi5title9TTitleMgrFl, global
/* 803BF9EC 003BC92C  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 803BF9F0 003BC930  7C 08 02 A6 */	mflr r0
/* 803BF9F4 003BC934  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 803BF9F8 003BC938  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 803BF9FC 003BC93C  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 803BFA00 003BC940  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 803BFA04 003BC944  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 803BFA08 003BC948  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 803BFA0C 003BC94C  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 803BFA10 003BC950  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 803BFA14 003BC954  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 803BFA18 003BC958  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 803BFA1C 003BC95C  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 803BFA20 003BC960  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 803BFA24 003BC964  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 803BFA28 003BC968  DB 21 00 70 */	stfd f25, 0x70(r1)
/* 803BFA2C 003BC96C  F3 21 00 78 */	psq_st f25, 120(r1), 0, qr0
/* 803BFA30 003BC970  DB 01 00 60 */	stfd f24, 0x60(r1)
/* 803BFA34 003BC974  F3 01 00 68 */	psq_st f24, 104(r1), 0, qr0
/* 803BFA38 003BC978  DA E1 00 50 */	stfd f23, 0x50(r1)
/* 803BFA3C 003BC97C  F2 E1 00 58 */	psq_st f23, 88(r1), 0, qr0
/* 803BFA40 003BC980  BF 41 00 38 */	stmw r26, 0x38(r1)
/* 803BFA44 003BC984  7C 7B 1B 78 */	mr r27, r3
/* 803BFA48 003BC988  7C 9C 23 78 */	mr r28, r4
/* 803BFA4C 003BC98C  80 63 0C F0 */	lwz r3, 0xcf0(r3)
/* 803BFA50 003BC990  48 02 7D 95 */	bl goHome__Q43ebi5title6Kogane5TUnitFv
/* 803BFA54 003BC994  80 7B 0F 50 */	lwz r3, 0xf50(r27)
/* 803BFA58 003BC998  48 02 90 29 */	bl goHome__Q43ebi5title6Chappy5TUnitFv
/* 803BFA5C 003BC99C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BFA60 003BC9A0  CB 62 14 B8 */	lfd f27, lbl_8051F818@sda21(r2)
/* 803BFA64 003BC9A4  C3 82 14 A0 */	lfs f28, lbl_8051F800@sda21(r2)
/* 803BFA68 003BC9A8  7F 7D DB 78 */	mr r29, r27
/* 803BFA6C 003BC9AC  C3 A2 14 A8 */	lfs f29, lbl_8051F808@sda21(r2)
/* 803BFA70 003BC9B0  3B 43 71 A0 */	addi r26, r3, sincosTable___5JMath@l
/* 803BFA74 003BC9B4  C3 C2 14 A4 */	lfs f30, lbl_8051F804@sda21(r2)
/* 803BFA78 003BC9B8  3B C0 00 00 */	li r30, 0
/* 803BFA7C 003BC9BC  C3 E2 13 98 */	lfs f31, lbl_8051F6F8@sda21(r2)
/* 803BFA80 003BC9C0  3F E0 43 30 */	lis r31, 0x4330
/* 803BFA84 003BC9C4  C3 22 14 B0 */	lfs f25, lbl_8051F810@sda21(r2)
.L_803BFA88:
/* 803BFA88 003BC9C8  4B D0 9B 19 */	bl rand
/* 803BFA8C 003BC9CC  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803BFA90 003BC9D0  93 E1 00 08 */	stw r31, 8(r1)
/* 803BFA94 003BC9D4  C2 FB 4A 10 */	lfs f23, 0x4a10(r27)
/* 803BFA98 003BC9D8  90 01 00 0C */	stw r0, 0xc(r1)
/* 803BFA9C 003BC9DC  C3 1B 49 E8 */	lfs f24, 0x49e8(r27)
/* 803BFAA0 003BC9E0  C8 01 00 08 */	lfd f0, 8(r1)
/* 803BFAA4 003BC9E4  EC 00 D8 28 */	fsubs f0, f0, f27
/* 803BFAA8 003BC9E8  EC 00 E0 24 */	fdivs f0, f0, f28
/* 803BFAAC 003BC9EC  EF 5D F0 3A */	fmadds f26, f29, f0, f30
/* 803BFAB0 003BC9F0  4B D0 9A F1 */	bl rand
/* 803BFAB4 003BC9F4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803BFAB8 003BC9F8  93 E1 00 10 */	stw r31, 0x10(r1)
/* 803BFABC 003BC9FC  EC 17 C0 28 */	fsubs f0, f23, f24
/* 803BFAC0 003BCA00  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BFAC4 003BCA04  FC 1A F8 40 */	fcmpo cr0, f26, f31
/* 803BFAC8 003BCA08  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 803BFACC 003BCA0C  EC 21 D8 28 */	fsubs f1, f1, f27
/* 803BFAD0 003BCA10  EC 21 E0 24 */	fdivs f1, f1, f28
/* 803BFAD4 003BCA14  EC 60 C0 7A */	fmadds f3, f0, f1, f24
/* 803BFAD8 003BCA18  40 80 00 30 */	bge .L_803BFB08
/* 803BFADC 003BCA1C  C0 02 14 AC */	lfs f0, lbl_8051F80C@sda21(r2)
/* 803BFAE0 003BCA20  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BFAE4 003BCA24  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803BFAE8 003BCA28  EC 1A 00 32 */	fmuls f0, f26, f0
/* 803BFAEC 003BCA2C  FC 00 00 1E */	fctiwz f0, f0
/* 803BFAF0 003BCA30  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 803BFAF4 003BCA34  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 803BFAF8 003BCA38  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BFAFC 003BCA3C  7C 03 04 2E */	lfsx f0, r3, r0
/* 803BFB00 003BCA40  FC 20 00 50 */	fneg f1, f0
/* 803BFB04 003BCA44  48 00 00 28 */	b .L_803BFB2C
.L_803BFB08:
/* 803BFB08 003BCA48  C0 02 14 B0 */	lfs f0, lbl_8051F810@sda21(r2)
/* 803BFB0C 003BCA4C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803BFB10 003BCA50  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803BFB14 003BCA54  EC 1A 00 32 */	fmuls f0, f26, f0
/* 803BFB18 003BCA58  FC 00 00 1E */	fctiwz f0, f0
/* 803BFB1C 003BCA5C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 803BFB20 003BCA60  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803BFB24 003BCA64  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BFB28 003BCA68  7C 23 04 2E */	lfsx f1, r3, r0
.L_803BFB2C:
/* 803BFB2C 003BCA6C  C0 1B 49 C0 */	lfs f0, 0x49c0(r27)
/* 803BFB30 003BCA70  FC 1A F8 40 */	fcmpo cr0, f26, f31
/* 803BFB34 003BCA74  EC 43 00 7A */	fmadds f2, f3, f1, f0
/* 803BFB38 003BCA78  40 80 00 08 */	bge .L_803BFB40
/* 803BFB3C 003BCA7C  FF 40 D0 50 */	fneg f26, f26
.L_803BFB40:
/* 803BFB40 003BCA80  EC 3A 06 72 */	fmuls f1, f26, f25
/* 803BFB44 003BCA84  3B DE 00 01 */	addi r30, r30, 1
/* 803BFB48 003BCA88  C0 1B 49 98 */	lfs f0, 0x4998(r27)
/* 803BFB4C 003BCA8C  2C 1E 01 F4 */	cmpwi r30, 0x1f4
/* 803BFB50 003BCA90  FC 20 08 1E */	fctiwz f1, f1
/* 803BFB54 003BCA94  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 803BFB58 003BCA98  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803BFB5C 003BCA9C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803BFB60 003BCAA0  7C 7A 02 14 */	add r3, r26, r0
/* 803BFB64 003BCAA4  C0 23 00 04 */	lfs f1, 4(r3)
/* 803BFB68 003BCAA8  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 803BFB6C 003BCAAC  D0 1D 0F 84 */	stfs f0, 0xf84(r29)
/* 803BFB70 003BCAB0  D0 5D 0F 88 */	stfs f2, 0xf88(r29)
/* 803BFB74 003BCAB4  3B BD 00 08 */	addi r29, r29, 8
/* 803BFB78 003BCAB8  41 80 FF 10 */	blt .L_803BFA88
/* 803BFB7C 003BCABC  2C 1C 00 00 */	cmpwi r28, 0
/* 803BFB80 003BCAC0  40 82 00 14 */	bne .L_803BFB94
/* 803BFB84 003BCAC4  38 7B 1F 24 */	addi r3, r27, 0x1f24
/* 803BFB88 003BCAC8  38 9B 0F 84 */	addi r4, r27, 0xf84
/* 803BFB8C 003BCACC  48 02 3F 85 */	bl "copyCoordinate__Q33ebi5title9TCoordMgrFP10Vector2<f>"
/* 803BFB90 003BCAD0  48 00 00 18 */	b .L_803BFBA8
.L_803BFB94:
/* 803BFB94 003BCAD4  2C 1C 00 01 */	cmpwi r28, 1
/* 803BFB98 003BCAD8  40 82 00 10 */	bne .L_803BFBA8
/* 803BFB9C 003BCADC  38 7B 2F A0 */	addi r3, r27, 0x2fa0
/* 803BFBA0 003BCAE0  38 9B 0F 84 */	addi r4, r27, 0xf84
/* 803BFBA4 003BCAE4  48 02 3F 6D */	bl "copyCoordinate__Q33ebi5title9TCoordMgrFP10Vector2<f>"
.L_803BFBA8:
/* 803BFBA8 003BCAE8  38 7B 01 54 */	addi r3, r27, 0x154
/* 803BFBAC 003BCAEC  38 9B 0F 84 */	addi r4, r27, 0xf84
/* 803BFBB0 003BCAF0  48 02 4C 1D */	bl "setDestPos__Q43ebi5title6Pikmin4TMgrFP10Vector2<f>"
/* 803BFBB4 003BCAF4  7F 63 DB 78 */	mr r3, r27
/* 803BFBB8 003BCAF8  38 80 00 04 */	li r4, 4
/* 803BFBBC 003BCAFC  48 00 00 A5 */	bl startState__Q33ebi5title9TTitleMgrFQ43ebi5title9TTitleMgr9enumState
/* 803BFBC0 003BCB00  38 00 00 00 */	li r0, 0
/* 803BFBC4 003BCB04  38 60 00 01 */	li r3, 1
/* 803BFBC8 003BCB08  98 1B 0F 70 */	stb r0, 0xf70(r27)
/* 803BFBCC 003BCB0C  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 803BFBD0 003BCB10  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 803BFBD4 003BCB14  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 803BFBD8 003BCB18  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 803BFBDC 003BCB1C  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 803BFBE0 003BCB20  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 803BFBE4 003BCB24  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 803BFBE8 003BCB28  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 803BFBEC 003BCB2C  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 803BFBF0 003BCB30  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 803BFBF4 003BCB34  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 803BFBF8 003BCB38  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 803BFBFC 003BCB3C  E3 21 00 78 */	psq_l f25, 120(r1), 0, qr0
/* 803BFC00 003BCB40  CB 21 00 70 */	lfd f25, 0x70(r1)
/* 803BFC04 003BCB44  E3 01 00 68 */	psq_l f24, 104(r1), 0, qr0
/* 803BFC08 003BCB48  CB 01 00 60 */	lfd f24, 0x60(r1)
/* 803BFC0C 003BCB4C  E2 E1 00 58 */	psq_l f23, 88(r1), 0, qr0
/* 803BFC10 003BCB50  CA E1 00 50 */	lfd f23, 0x50(r1)
/* 803BFC14 003BCB54  BB 41 00 38 */	lmw r26, 0x38(r1)
/* 803BFC18 003BCB58  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 803BFC1C 003BCB5C  7C 08 03 A6 */	mtlr r0
/* 803BFC20 003BCB60  38 21 00 E0 */	addi r1, r1, 0xe0
/* 803BFC24 003BCB64  4E 80 00 20 */	blr 
.endfn boidToAssemble__Q33ebi5title9TTitleMgrFl

.fn isControllerOK__Q33ebi5title9TTitleMgrFv, global
/* 803BFC28 003BCB68  80 03 0F 74 */	lwz r0, 0xf74(r3)
/* 803BFC2C 003BCB6C  28 00 00 00 */	cmplwi r0, 0
/* 803BFC30 003BCB70  40 82 00 0C */	bne .L_803BFC3C
/* 803BFC34 003BCB74  38 60 00 01 */	li r3, 1
/* 803BFC38 003BCB78  4E 80 00 20 */	blr 
.L_803BFC3C:
/* 803BFC3C 003BCB7C  38 60 00 00 */	li r3, 0
/* 803BFC40 003BCB80  4E 80 00 20 */	blr 
.endfn isControllerOK__Q33ebi5title9TTitleMgrFv

.fn isPressStart__Q33ebi5title9TTitleMgrFv, global
/* 803BFC44 003BCB84  80 03 0F 7C */	lwz r0, 0xf7c(r3)
/* 803BFC48 003BCB88  28 00 00 00 */	cmplwi r0, 0
/* 803BFC4C 003BCB8C  40 82 00 0C */	bne .L_803BFC58
/* 803BFC50 003BCB90  38 60 00 01 */	li r3, 1
/* 803BFC54 003BCB94  4E 80 00 20 */	blr 
.L_803BFC58:
/* 803BFC58 003BCB98  38 60 00 00 */	li r3, 0
/* 803BFC5C 003BCB9C  4E 80 00 20 */	blr 
.endfn isPressStart__Q33ebi5title9TTitleMgrFv

.fn startState__Q33ebi5title9TTitleMgrFQ43ebi5title9TTitleMgr9enumState, global
/* 803BFC60 003BCBA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803BFC64 003BCBA4  7C 08 02 A6 */	mflr r0
/* 803BFC68 003BCBA8  2C 04 00 04 */	cmpwi r4, 4
/* 803BFC6C 003BCBAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803BFC70 003BCBB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803BFC74 003BCBB4  7C 7F 1B 78 */	mr r31, r3
/* 803BFC78 003BCBB8  90 83 0F 58 */	stw r4, 0xf58(r3)
/* 803BFC7C 003BCBBC  41 82 00 28 */	beq .L_803BFCA4
/* 803BFC80 003BCBC0  40 80 00 14 */	bge .L_803BFC94
/* 803BFC84 003BCBC4  2C 04 00 02 */	cmpwi r4, 2
/* 803BFC88 003BCBC8  41 82 00 A0 */	beq .L_803BFD28
/* 803BFC8C 003BCBCC  40 80 00 C8 */	bge .L_803BFD54
/* 803BFC90 003BCBD0  48 00 00 E0 */	b .L_803BFD70
.L_803BFC94:
/* 803BFC94 003BCBD4  2C 04 00 06 */	cmpwi r4, 6
/* 803BFC98 003BCBD8  41 82 00 64 */	beq .L_803BFCFC
/* 803BFC9C 003BCBDC  40 80 00 D4 */	bge .L_803BFD70
/* 803BFCA0 003BCBE0  48 00 00 30 */	b .L_803BFCD0
.L_803BFCA4:
/* 803BFCA4 003BCBE4  C0 3F 4A 88 */	lfs f1, 0x4a88(r31)
/* 803BFCA8 003BCBE8  38 7F 01 54 */	addi r3, r31, 0x154
/* 803BFCAC 003BCBEC  48 02 4E 55 */	bl startBoid1__Q43ebi5title6Pikmin4TMgrFf
/* 803BFCB0 003BCBF0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BFCB4 003BCBF4  C0 3F 4A 88 */	lfs f1, 0x4a88(r31)
/* 803BFCB8 003BCBF8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803BFCBC 003BCBFC  EC 21 00 24 */	fdivs f1, f1, f0
/* 803BFCC0 003BCC00  4B D0 1E 8D */	bl __cvt_fp2unsigned
/* 803BFCC4 003BCC04  90 7F 0F 60 */	stw r3, 0xf60(r31)
/* 803BFCC8 003BCC08  90 7F 0F 64 */	stw r3, 0xf64(r31)
/* 803BFCCC 003BCC0C  48 00 00 A4 */	b .L_803BFD70
.L_803BFCD0:
/* 803BFCD0 003BCC10  C0 3F 4A B0 */	lfs f1, 0x4ab0(r31)
/* 803BFCD4 003BCC14  38 7F 01 54 */	addi r3, r31, 0x154
/* 803BFCD8 003BCC18  48 02 4E B9 */	bl startBoid2__Q43ebi5title6Pikmin4TMgrFf
/* 803BFCDC 003BCC1C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BFCE0 003BCC20  C0 3F 4A B0 */	lfs f1, 0x4ab0(r31)
/* 803BFCE4 003BCC24  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803BFCE8 003BCC28  EC 21 00 24 */	fdivs f1, f1, f0
/* 803BFCEC 003BCC2C  4B D0 1E 61 */	bl __cvt_fp2unsigned
/* 803BFCF0 003BCC30  90 7F 0F 60 */	stw r3, 0xf60(r31)
/* 803BFCF4 003BCC34  90 7F 0F 64 */	stw r3, 0xf64(r31)
/* 803BFCF8 003BCC38  48 00 00 78 */	b .L_803BFD70
.L_803BFCFC:
/* 803BFCFC 003BCC3C  C0 3F 4A D8 */	lfs f1, 0x4ad8(r31)
/* 803BFD00 003BCC40  38 7F 01 54 */	addi r3, r31, 0x154
/* 803BFD04 003BCC44  48 02 4F 1D */	bl startBoid3__Q43ebi5title6Pikmin4TMgrFf
/* 803BFD08 003BCC48  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BFD0C 003BCC4C  C0 3F 4A D8 */	lfs f1, 0x4ad8(r31)
/* 803BFD10 003BCC50  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803BFD14 003BCC54  EC 21 00 24 */	fdivs f1, f1, f0
/* 803BFD18 003BCC58  4B D0 1E 35 */	bl __cvt_fp2unsigned
/* 803BFD1C 003BCC5C  90 7F 0F 60 */	stw r3, 0xf60(r31)
/* 803BFD20 003BCC60  90 7F 0F 64 */	stw r3, 0xf64(r31)
/* 803BFD24 003BCC64  48 00 00 4C */	b .L_803BFD70
.L_803BFD28:
/* 803BFD28 003BCC68  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BFD2C 003BCC6C  C0 3F 4B 00 */	lfs f1, 0x4b00(r31)
/* 803BFD30 003BCC70  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803BFD34 003BCC74  EC 21 00 24 */	fdivs f1, f1, f0
/* 803BFD38 003BCC78  4B D0 1E 15 */	bl __cvt_fp2unsigned
/* 803BFD3C 003BCC7C  90 7F 0F 60 */	stw r3, 0xf60(r31)
/* 803BFD40 003BCC80  90 7F 0F 64 */	stw r3, 0xf64(r31)
/* 803BFD44 003BCC84  38 7F 00 30 */	addi r3, r31, 0x30
/* 803BFD48 003BCC88  C0 3F 4A 60 */	lfs f1, 0x4a60(r31)
/* 803BFD4C 003BCC8C  48 00 11 99 */	bl startWind__Q33ebi5title8TMapBaseFf
/* 803BFD50 003BCC90  48 00 00 20 */	b .L_803BFD70
.L_803BFD54:
/* 803BFD54 003BCC94  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BFD58 003BCC98  C0 3F 4B 28 */	lfs f1, 0x4b28(r31)
/* 803BFD5C 003BCC9C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803BFD60 003BCCA0  EC 21 00 24 */	fdivs f1, f1, f0
/* 803BFD64 003BCCA4  4B D0 1D E9 */	bl __cvt_fp2unsigned
/* 803BFD68 003BCCA8  90 7F 0F 60 */	stw r3, 0xf60(r31)
/* 803BFD6C 003BCCAC  90 7F 0F 64 */	stw r3, 0xf64(r31)
.L_803BFD70:
/* 803BFD70 003BCCB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803BFD74 003BCCB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803BFD78 003BCCB8  7C 08 03 A6 */	mtlr r0
/* 803BFD7C 003BCCBC  38 21 00 10 */	addi r1, r1, 0x10
/* 803BFD80 003BCCC0  4E 80 00 20 */	blr 
.endfn startState__Q33ebi5title9TTitleMgrFQ43ebi5title9TTitleMgr9enumState

.fn update__Q33ebi5title9TTitleMgrFv, global
/* 803BFD84 003BCCC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803BFD88 003BCCC8  7C 08 02 A6 */	mflr r0
/* 803BFD8C 003BCCCC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803BFD90 003BCCD0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803BFD94 003BCCD4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803BFD98 003BCCD8  7C 7E 1B 78 */	mr r30, r3
/* 803BFD9C 003BCCDC  80 03 0F 58 */	lwz r0, 0xf58(r3)
/* 803BFDA0 003BCCE0  2C 00 00 00 */	cmpwi r0, 0
/* 803BFDA4 003BCCE4  41 82 04 18 */	beq .L_803C01BC
/* 803BFDA8 003BCCE8  80 7E 0F 68 */	lwz r3, 0xf68(r30)
/* 803BFDAC 003BCCEC  28 03 00 00 */	cmplwi r3, 0
/* 803BFDB0 003BCCF0  41 82 00 0C */	beq .L_803BFDBC
/* 803BFDB4 003BCCF4  38 03 FF FF */	addi r0, r3, -1
/* 803BFDB8 003BCCF8  90 1E 0F 68 */	stw r0, 0xf68(r30)
.L_803BFDBC:
/* 803BFDBC 003BCCFC  80 7E 0F 74 */	lwz r3, 0xf74(r30)
/* 803BFDC0 003BCD00  28 03 00 00 */	cmplwi r3, 0
/* 803BFDC4 003BCD04  41 82 00 0C */	beq .L_803BFDD0
/* 803BFDC8 003BCD08  38 03 FF FF */	addi r0, r3, -1
/* 803BFDCC 003BCD0C  90 1E 0F 74 */	stw r0, 0xf74(r30)
.L_803BFDD0:
/* 803BFDD0 003BCD10  80 7E 0F 7C */	lwz r3, 0xf7c(r30)
/* 803BFDD4 003BCD14  28 03 00 00 */	cmplwi r3, 0
/* 803BFDD8 003BCD18  41 82 00 0C */	beq .L_803BFDE4
/* 803BFDDC 003BCD1C  38 03 FF FF */	addi r0, r3, -1
/* 803BFDE0 003BCD20  90 1E 0F 7C */	stw r0, 0xf7c(r30)
.L_803BFDE4:
/* 803BFDE4 003BCD24  38 7E 01 54 */	addi r3, r30, 0x154
/* 803BFDE8 003BCD28  48 02 54 35 */	bl isAssemble__Q43ebi5title6Pikmin4TMgrFv
/* 803BFDEC 003BCD2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BFDF0 003BCD30  40 82 00 0C */	bne .L_803BFDFC
/* 803BFDF4 003BCD34  38 00 00 00 */	li r0, 0
/* 803BFDF8 003BCD38  48 00 00 50 */	b .L_803BFE48
.L_803BFDFC:
/* 803BFDFC 003BCD3C  80 7E 0C F0 */	lwz r3, 0xcf0(r30)
/* 803BFE00 003BCD40  81 83 00 00 */	lwz r12, 0(r3)
/* 803BFE04 003BCD44  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803BFE08 003BCD48  7D 89 03 A6 */	mtctr r12
/* 803BFE0C 003BCD4C  4E 80 04 21 */	bctrl 
/* 803BFE10 003BCD50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BFE14 003BCD54  41 82 00 0C */	beq .L_803BFE20
/* 803BFE18 003BCD58  38 00 00 00 */	li r0, 0
/* 803BFE1C 003BCD5C  48 00 00 2C */	b .L_803BFE48
.L_803BFE20:
/* 803BFE20 003BCD60  80 7E 0F 50 */	lwz r3, 0xf50(r30)
/* 803BFE24 003BCD64  81 83 00 00 */	lwz r12, 0(r3)
/* 803BFE28 003BCD68  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803BFE2C 003BCD6C  7D 89 03 A6 */	mtctr r12
/* 803BFE30 003BCD70  4E 80 04 21 */	bctrl 
/* 803BFE34 003BCD74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BFE38 003BCD78  41 82 00 0C */	beq .L_803BFE44
/* 803BFE3C 003BCD7C  38 00 00 00 */	li r0, 0
/* 803BFE40 003BCD80  48 00 00 08 */	b .L_803BFE48
.L_803BFE44:
/* 803BFE44 003BCD84  38 00 00 01 */	li r0, 1
.L_803BFE48:
/* 803BFE48 003BCD88  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803BFE4C 003BCD8C  41 82 00 0C */	beq .L_803BFE58
/* 803BFE50 003BCD90  38 00 00 01 */	li r0, 1
/* 803BFE54 003BCD94  98 1E 0F 71 */	stb r0, 0xf71(r30)
.L_803BFE58:
/* 803BFE58 003BCD98  88 1E 0F 71 */	lbz r0, 0xf71(r30)
/* 803BFE5C 003BCD9C  28 00 00 00 */	cmplwi r0, 0
/* 803BFE60 003BCDA0  41 82 00 80 */	beq .L_803BFEE0
/* 803BFE64 003BCDA4  80 7E 40 1C */	lwz r3, 0x401c(r30)
/* 803BFE68 003BCDA8  28 03 00 00 */	cmplwi r3, 0
/* 803BFE6C 003BCDAC  41 82 00 74 */	beq .L_803BFEE0
/* 803BFE70 003BCDB0  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 803BFE74 003BCDB4  54 60 06 73 */	rlwinm. r0, r3, 0, 0x19, 0x19
/* 803BFE78 003BCDB8  41 82 00 14 */	beq .L_803BFE8C
/* 803BFE7C 003BCDBC  7F C3 F3 78 */	mr r3, r30
/* 803BFE80 003BCDC0  38 80 00 00 */	li r4, 0
/* 803BFE84 003BCDC4  4B FF FB 69 */	bl boidToAssemble__Q33ebi5title9TTitleMgrFl
/* 803BFE88 003BCDC8  48 00 00 18 */	b .L_803BFEA0
.L_803BFE8C:
/* 803BFE8C 003BCDCC  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 803BFE90 003BCDD0  41 82 00 10 */	beq .L_803BFEA0
/* 803BFE94 003BCDD4  7F C3 F3 78 */	mr r3, r30
/* 803BFE98 003BCDD8  38 80 00 01 */	li r4, 1
/* 803BFE9C 003BCDDC  4B FF FB 51 */	bl boidToAssemble__Q33ebi5title9TTitleMgrFl
.L_803BFEA0:
/* 803BFEA0 003BCDE0  80 7E 40 1C */	lwz r3, 0x401c(r30)
/* 803BFEA4 003BCDE4  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 803BFEA8 003BCDE8  54 60 05 6B */	rlwinm. r0, r3, 0, 0x15, 0x15
/* 803BFEAC 003BCDEC  41 82 00 24 */	beq .L_803BFED0
/* 803BFEB0 003BCDF0  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 803BFEB4 003BCDF4  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 803BFEB8 003BCDF8  80 03 01 C8 */	lwz r0, 0x1c8(r3)
/* 803BFEBC 003BCDFC  2C 00 00 00 */	cmpwi r0, 0
/* 803BFEC0 003BCE00  40 82 00 20 */	bne .L_803BFEE0
/* 803BFEC4 003BCE04  7F C3 F3 78 */	mr r3, r30
/* 803BFEC8 003BCE08  4B FF F9 85 */	bl startChappy__Q33ebi5title9TTitleMgrFv
/* 803BFECC 003BCE0C  48 00 00 14 */	b .L_803BFEE0
.L_803BFED0:
/* 803BFED0 003BCE10  54 60 05 29 */	rlwinm. r0, r3, 0, 0x14, 0x14
/* 803BFED4 003BCE14  41 82 00 0C */	beq .L_803BFEE0
/* 803BFED8 003BCE18  7F C3 F3 78 */	mr r3, r30
/* 803BFEDC 003BCE1C  4B FF F7 D1 */	bl startKogane__Q33ebi5title9TTitleMgrFv
.L_803BFEE0:
/* 803BFEE0 003BCE20  80 1E 0F 68 */	lwz r0, 0xf68(r30)
/* 803BFEE4 003BCE24  28 00 00 00 */	cmplwi r0, 0
/* 803BFEE8 003BCE28  40 82 02 D4 */	bne .L_803C01BC
/* 803BFEEC 003BCE2C  88 1E 0F 70 */	lbz r0, 0xf70(r30)
/* 803BFEF0 003BCE30  3B E0 00 00 */	li r31, 0
/* 803BFEF4 003BCE34  28 00 00 00 */	cmplwi r0, 0
/* 803BFEF8 003BCE38  40 82 00 C4 */	bne .L_803BFFBC
/* 803BFEFC 003BCE3C  38 7E 01 54 */	addi r3, r30, 0x154
/* 803BFF00 003BCE40  48 02 53 1D */	bl isAssemble__Q43ebi5title6Pikmin4TMgrFv
/* 803BFF04 003BCE44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BFF08 003BCE48  40 82 00 0C */	bne .L_803BFF14
/* 803BFF0C 003BCE4C  38 00 00 00 */	li r0, 0
/* 803BFF10 003BCE50  48 00 00 50 */	b .L_803BFF60
.L_803BFF14:
/* 803BFF14 003BCE54  80 7E 0C F0 */	lwz r3, 0xcf0(r30)
/* 803BFF18 003BCE58  81 83 00 00 */	lwz r12, 0(r3)
/* 803BFF1C 003BCE5C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803BFF20 003BCE60  7D 89 03 A6 */	mtctr r12
/* 803BFF24 003BCE64  4E 80 04 21 */	bctrl 
/* 803BFF28 003BCE68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BFF2C 003BCE6C  41 82 00 0C */	beq .L_803BFF38
/* 803BFF30 003BCE70  38 00 00 00 */	li r0, 0
/* 803BFF34 003BCE74  48 00 00 2C */	b .L_803BFF60
.L_803BFF38:
/* 803BFF38 003BCE78  80 7E 0F 50 */	lwz r3, 0xf50(r30)
/* 803BFF3C 003BCE7C  81 83 00 00 */	lwz r12, 0(r3)
/* 803BFF40 003BCE80  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803BFF44 003BCE84  7D 89 03 A6 */	mtctr r12
/* 803BFF48 003BCE88  4E 80 04 21 */	bctrl 
/* 803BFF4C 003BCE8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BFF50 003BCE90  41 82 00 0C */	beq .L_803BFF5C
/* 803BFF54 003BCE94  38 00 00 00 */	li r0, 0
/* 803BFF58 003BCE98  48 00 00 08 */	b .L_803BFF60
.L_803BFF5C:
/* 803BFF5C 003BCE9C  38 00 00 01 */	li r0, 1
.L_803BFF60:
/* 803BFF60 003BCEA0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803BFF64 003BCEA4  40 82 00 0C */	bne .L_803BFF70
/* 803BFF68 003BCEA8  38 00 00 00 */	li r0, 0
/* 803BFF6C 003BCEAC  48 00 00 38 */	b .L_803BFFA4
.L_803BFF70:
/* 803BFF70 003BCEB0  38 00 00 02 */	li r0, 2
/* 803BFF74 003BCEB4  90 1E 0F 58 */	stw r0, 0xf58(r30)
/* 803BFF78 003BCEB8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803BFF7C 003BCEBC  C0 3E 4B 00 */	lfs f1, 0x4b00(r30)
/* 803BFF80 003BCEC0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803BFF84 003BCEC4  EC 21 00 24 */	fdivs f1, f1, f0
/* 803BFF88 003BCEC8  4B D0 1B C5 */	bl __cvt_fp2unsigned
/* 803BFF8C 003BCECC  90 7E 0F 60 */	stw r3, 0xf60(r30)
/* 803BFF90 003BCED0  90 7E 0F 64 */	stw r3, 0xf64(r30)
/* 803BFF94 003BCED4  38 7E 00 30 */	addi r3, r30, 0x30
/* 803BFF98 003BCED8  C0 3E 4A 60 */	lfs f1, 0x4a60(r30)
/* 803BFF9C 003BCEDC  48 00 0F 49 */	bl startWind__Q33ebi5title8TMapBaseFf
/* 803BFFA0 003BCEE0  38 00 00 01 */	li r0, 1
.L_803BFFA4:
/* 803BFFA4 003BCEE4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803BFFA8 003BCEE8  41 82 01 D0 */	beq .L_803C0178
/* 803BFFAC 003BCEEC  38 00 00 01 */	li r0, 1
/* 803BFFB0 003BCEF0  3B E0 00 01 */	li r31, 1
/* 803BFFB4 003BCEF4  98 1E 0F 70 */	stb r0, 0xf70(r30)
/* 803BFFB8 003BCEF8  48 00 01 C0 */	b .L_803C0178
.L_803BFFBC:
/* 803BFFBC 003BCEFC  4B D0 95 E5 */	bl rand
/* 803BFFC0 003BCF00  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803BFFC4 003BCF04  3C 00 43 30 */	lis r0, 0x4330
/* 803BFFC8 003BCF08  90 61 00 0C */	stw r3, 0xc(r1)
/* 803BFFCC 003BCF0C  C8 62 14 B8 */	lfd f3, lbl_8051F818@sda21(r2)
/* 803BFFD0 003BCF10  90 01 00 08 */	stw r0, 8(r1)
/* 803BFFD4 003BCF14  C0 22 14 A0 */	lfs f1, lbl_8051F800@sda21(r2)
/* 803BFFD8 003BCF18  C8 41 00 08 */	lfd f2, 8(r1)
/* 803BFFDC 003BCF1C  C0 02 14 C8 */	lfs f0, lbl_8051F828@sda21(r2)
/* 803BFFE0 003BCF20  EC 42 18 28 */	fsubs f2, f2, f3
/* 803BFFE4 003BCF24  EC 22 08 24 */	fdivs f1, f2, f1
/* 803BFFE8 003BCF28  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803BFFEC 003BCF2C  40 80 00 1C */	bge .L_803C0008
/* 803BFFF0 003BCF30  7F C3 F3 78 */	mr r3, r30
/* 803BFFF4 003BCF34  4B FF F6 B9 */	bl startKogane__Q33ebi5title9TTitleMgrFv
/* 803BFFF8 003BCF38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803BFFFC 003BCF3C  41 82 01 7C */	beq .L_803C0178
/* 803C0000 003BCF40  3B E0 00 01 */	li r31, 1
/* 803C0004 003BCF44  48 00 01 74 */	b .L_803C0178
.L_803C0008:
/* 803C0008 003BCF48  C0 02 14 CC */	lfs f0, lbl_8051F82C@sda21(r2)
/* 803C000C 003BCF4C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803C0010 003BCF50  40 80 00 48 */	bge .L_803C0058
/* 803C0014 003BCF54  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 803C0018 003BCF58  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 803C001C 003BCF5C  80 03 01 C8 */	lwz r0, 0x1c8(r3)
/* 803C0020 003BCF60  2C 00 00 00 */	cmpwi r0, 0
/* 803C0024 003BCF64  41 82 00 1C */	beq .L_803C0040
/* 803C0028 003BCF68  7F C3 F3 78 */	mr r3, r30
/* 803C002C 003BCF6C  4B FF F6 81 */	bl startKogane__Q33ebi5title9TTitleMgrFv
/* 803C0030 003BCF70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803C0034 003BCF74  41 82 01 44 */	beq .L_803C0178
/* 803C0038 003BCF78  3B E0 00 01 */	li r31, 1
/* 803C003C 003BCF7C  48 00 01 3C */	b .L_803C0178
.L_803C0040:
/* 803C0040 003BCF80  7F C3 F3 78 */	mr r3, r30
/* 803C0044 003BCF84  4B FF F8 09 */	bl startChappy__Q33ebi5title9TTitleMgrFv
/* 803C0048 003BCF88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803C004C 003BCF8C  41 82 01 2C */	beq .L_803C0178
/* 803C0050 003BCF90  3B E0 00 01 */	li r31, 1
/* 803C0054 003BCF94  48 00 01 24 */	b .L_803C0178
.L_803C0058:
/* 803C0058 003BCF98  C0 02 14 D0 */	lfs f0, lbl_8051F830@sda21(r2)
/* 803C005C 003BCF9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803C0060 003BCFA0  40 80 00 64 */	bge .L_803C00C4
/* 803C0064 003BCFA4  80 1E 0F 58 */	lwz r0, 0xf58(r30)
/* 803C0068 003BCFA8  2C 00 00 03 */	cmpwi r0, 3
/* 803C006C 003BCFAC  40 82 00 0C */	bne .L_803C0078
/* 803C0070 003BCFB0  38 80 00 00 */	li r4, 0
/* 803C0074 003BCFB4  48 00 00 40 */	b .L_803C00B4
.L_803C0078:
/* 803C0078 003BCFB8  38 00 00 06 */	li r0, 6
/* 803C007C 003BCFBC  38 7E 01 54 */	addi r3, r30, 0x154
/* 803C0080 003BCFC0  90 1E 0F 58 */	stw r0, 0xf58(r30)
/* 803C0084 003BCFC4  C0 3E 4A D8 */	lfs f1, 0x4ad8(r30)
/* 803C0088 003BCFC8  48 02 4B 99 */	bl startBoid3__Q43ebi5title6Pikmin4TMgrFf
/* 803C008C 003BCFCC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803C0090 003BCFD0  C0 3E 4A D8 */	lfs f1, 0x4ad8(r30)
/* 803C0094 003BCFD4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803C0098 003BCFD8  EC 21 00 24 */	fdivs f1, f1, f0
/* 803C009C 003BCFDC  4B D0 1A B1 */	bl __cvt_fp2unsigned
/* 803C00A0 003BCFE0  90 7E 0F 60 */	stw r3, 0xf60(r30)
/* 803C00A4 003BCFE4  38 00 00 00 */	li r0, 0
/* 803C00A8 003BCFE8  38 80 00 01 */	li r4, 1
/* 803C00AC 003BCFEC  90 7E 0F 64 */	stw r3, 0xf64(r30)
/* 803C00B0 003BCFF0  98 1E 0F 70 */	stb r0, 0xf70(r30)
.L_803C00B4:
/* 803C00B4 003BCFF4  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 803C00B8 003BCFF8  41 82 00 C0 */	beq .L_803C0178
/* 803C00BC 003BCFFC  3B E0 00 01 */	li r31, 1
/* 803C00C0 003BD000  48 00 00 B8 */	b .L_803C0178
.L_803C00C4:
/* 803C00C4 003BD004  38 7E 01 54 */	addi r3, r30, 0x154
/* 803C00C8 003BD008  48 02 51 55 */	bl isAssemble__Q43ebi5title6Pikmin4TMgrFv
/* 803C00CC 003BD00C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803C00D0 003BD010  40 82 00 0C */	bne .L_803C00DC
/* 803C00D4 003BD014  38 00 00 00 */	li r0, 0
/* 803C00D8 003BD018  48 00 00 50 */	b .L_803C0128
.L_803C00DC:
/* 803C00DC 003BD01C  80 7E 0C F0 */	lwz r3, 0xcf0(r30)
/* 803C00E0 003BD020  81 83 00 00 */	lwz r12, 0(r3)
/* 803C00E4 003BD024  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803C00E8 003BD028  7D 89 03 A6 */	mtctr r12
/* 803C00EC 003BD02C  4E 80 04 21 */	bctrl 
/* 803C00F0 003BD030  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803C00F4 003BD034  41 82 00 0C */	beq .L_803C0100
/* 803C00F8 003BD038  38 00 00 00 */	li r0, 0
/* 803C00FC 003BD03C  48 00 00 2C */	b .L_803C0128
.L_803C0100:
/* 803C0100 003BD040  80 7E 0F 50 */	lwz r3, 0xf50(r30)
/* 803C0104 003BD044  81 83 00 00 */	lwz r12, 0(r3)
/* 803C0108 003BD048  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803C010C 003BD04C  7D 89 03 A6 */	mtctr r12
/* 803C0110 003BD050  4E 80 04 21 */	bctrl 
/* 803C0114 003BD054  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803C0118 003BD058  41 82 00 0C */	beq .L_803C0124
/* 803C011C 003BD05C  38 00 00 00 */	li r0, 0
/* 803C0120 003BD060  48 00 00 08 */	b .L_803C0128
.L_803C0124:
/* 803C0124 003BD064  38 00 00 01 */	li r0, 1
.L_803C0128:
/* 803C0128 003BD068  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803C012C 003BD06C  40 82 00 0C */	bne .L_803C0138
/* 803C0130 003BD070  38 00 00 00 */	li r0, 0
/* 803C0134 003BD074  48 00 00 38 */	b .L_803C016C
.L_803C0138:
/* 803C0138 003BD078  38 00 00 02 */	li r0, 2
/* 803C013C 003BD07C  90 1E 0F 58 */	stw r0, 0xf58(r30)
/* 803C0140 003BD080  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803C0144 003BD084  C0 3E 4B 00 */	lfs f1, 0x4b00(r30)
/* 803C0148 003BD088  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803C014C 003BD08C  EC 21 00 24 */	fdivs f1, f1, f0
/* 803C0150 003BD090  4B D0 19 FD */	bl __cvt_fp2unsigned
/* 803C0154 003BD094  90 7E 0F 60 */	stw r3, 0xf60(r30)
/* 803C0158 003BD098  90 7E 0F 64 */	stw r3, 0xf64(r30)
/* 803C015C 003BD09C  38 7E 00 30 */	addi r3, r30, 0x30
/* 803C0160 003BD0A0  C0 3E 4A 60 */	lfs f1, 0x4a60(r30)
/* 803C0164 003BD0A4  48 00 0D 81 */	bl startWind__Q33ebi5title8TMapBaseFf
/* 803C0168 003BD0A8  38 00 00 01 */	li r0, 1
.L_803C016C:
/* 803C016C 003BD0AC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803C0170 003BD0B0  41 82 00 08 */	beq .L_803C0178
/* 803C0174 003BD0B4  3B E0 00 01 */	li r31, 1
.L_803C0178:
/* 803C0178 003BD0B8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803C017C 003BD0BC  41 82 00 24 */	beq .L_803C01A0
/* 803C0180 003BD0C0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803C0184 003BD0C4  C0 22 14 40 */	lfs f1, lbl_8051F7A0@sda21(r2)
/* 803C0188 003BD0C8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803C018C 003BD0CC  EC 21 00 24 */	fdivs f1, f1, f0
/* 803C0190 003BD0D0  4B D0 19 BD */	bl __cvt_fp2unsigned
/* 803C0194 003BD0D4  90 7E 0F 68 */	stw r3, 0xf68(r30)
/* 803C0198 003BD0D8  90 7E 0F 6C */	stw r3, 0xf6c(r30)
/* 803C019C 003BD0DC  48 00 00 20 */	b .L_803C01BC
.L_803C01A0:
/* 803C01A0 003BD0E0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803C01A4 003BD0E4  C0 22 14 38 */	lfs f1, lbl_8051F798@sda21(r2)
/* 803C01A8 003BD0E8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803C01AC 003BD0EC  EC 21 00 24 */	fdivs f1, f1, f0
/* 803C01B0 003BD0F0  4B D0 19 9D */	bl __cvt_fp2unsigned
/* 803C01B4 003BD0F4  90 7E 0F 68 */	stw r3, 0xf68(r30)
/* 803C01B8 003BD0F8  90 7E 0F 6C */	stw r3, 0xf6c(r30)
.L_803C01BC:
/* 803C01BC 003BD0FC  7F C3 F3 78 */	mr r3, r30
/* 803C01C0 003BD100  48 00 00 1D */	bl updateState__Q33ebi5title9TTitleMgrFv
/* 803C01C4 003BD104  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803C01C8 003BD108  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803C01CC 003BD10C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803C01D0 003BD110  7C 08 03 A6 */	mtlr r0
/* 803C01D4 003BD114  38 21 00 20 */	addi r1, r1, 0x20
/* 803C01D8 003BD118  4E 80 00 20 */	blr 
.endfn update__Q33ebi5title9TTitleMgrFv

.fn updateState__Q33ebi5title9TTitleMgrFv, global
/* 803C01DC 003BD11C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803C01E0 003BD120  7C 08 02 A6 */	mflr r0
/* 803C01E4 003BD124  90 01 00 54 */	stw r0, 0x54(r1)
/* 803C01E8 003BD128  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803C01EC 003BD12C  7C 7F 1B 78 */	mr r31, r3
/* 803C01F0 003BD130  80 03 0F 58 */	lwz r0, 0xf58(r3)
/* 803C01F4 003BD134  28 00 00 06 */	cmplwi r0, 6
/* 803C01F8 003BD138  41 81 02 74 */	bgt .L_803C046C
/* 803C01FC 003BD13C  3C 60 80 4E */	lis r3, lbl_804E7834@ha
/* 803C0200 003BD140  54 00 10 3A */	slwi r0, r0, 2
/* 803C0204 003BD144  38 63 78 34 */	addi r3, r3, lbl_804E7834@l
/* 803C0208 003BD148  7C 03 00 2E */	lwzx r0, r3, r0
/* 803C020C 003BD14C  7C 09 03 A6 */	mtctr r0
/* 803C0210 003BD150  4E 80 04 20 */	bctr 
.L_803C0214:
/* 803C0214 003BD154  48 00 03 00 */	b .L_803C0514
.L_803C0218:
/* 803C0218 003BD158  80 7F 0F 60 */	lwz r3, 0xf60(r31)
/* 803C021C 003BD15C  28 03 00 00 */	cmplwi r3, 0
/* 803C0220 003BD160  41 82 00 0C */	beq .L_803C022C
/* 803C0224 003BD164  38 03 FF FF */	addi r0, r3, -1
/* 803C0228 003BD168  90 1F 0F 60 */	stw r0, 0xf60(r31)
.L_803C022C:
/* 803C022C 003BD16C  80 1F 0F 60 */	lwz r0, 0xf60(r31)
/* 803C0230 003BD170  28 00 00 00 */	cmplwi r0, 0
/* 803C0234 003BD174  40 82 02 38 */	bne .L_803C046C
/* 803C0238 003BD178  38 00 00 05 */	li r0, 5
/* 803C023C 003BD17C  38 7F 01 54 */	addi r3, r31, 0x154
/* 803C0240 003BD180  90 1F 0F 58 */	stw r0, 0xf58(r31)
/* 803C0244 003BD184  C0 3F 4A B0 */	lfs f1, 0x4ab0(r31)
/* 803C0248 003BD188  48 02 49 49 */	bl startBoid2__Q43ebi5title6Pikmin4TMgrFf
/* 803C024C 003BD18C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803C0250 003BD190  C0 3F 4A B0 */	lfs f1, 0x4ab0(r31)
/* 803C0254 003BD194  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803C0258 003BD198  EC 21 00 24 */	fdivs f1, f1, f0
/* 803C025C 003BD19C  4B D0 18 F1 */	bl __cvt_fp2unsigned
/* 803C0260 003BD1A0  90 7F 0F 60 */	stw r3, 0xf60(r31)
/* 803C0264 003BD1A4  90 7F 0F 64 */	stw r3, 0xf64(r31)
/* 803C0268 003BD1A8  48 00 02 04 */	b .L_803C046C
.L_803C026C:
/* 803C026C 003BD1AC  80 7F 0F 60 */	lwz r3, 0xf60(r31)
/* 803C0270 003BD1B0  28 03 00 00 */	cmplwi r3, 0
/* 803C0274 003BD1B4  41 82 00 0C */	beq .L_803C0280
/* 803C0278 003BD1B8  38 03 FF FF */	addi r0, r3, -1
/* 803C027C 003BD1BC  90 1F 0F 60 */	stw r0, 0xf60(r31)
.L_803C0280:
/* 803C0280 003BD1C0  80 1F 0F 60 */	lwz r0, 0xf60(r31)
/* 803C0284 003BD1C4  28 00 00 00 */	cmplwi r0, 0
/* 803C0288 003BD1C8  40 82 01 E4 */	bne .L_803C046C
/* 803C028C 003BD1CC  38 00 00 06 */	li r0, 6
/* 803C0290 003BD1D0  38 7F 01 54 */	addi r3, r31, 0x154
/* 803C0294 003BD1D4  90 1F 0F 58 */	stw r0, 0xf58(r31)
/* 803C0298 003BD1D8  C0 3F 4A D8 */	lfs f1, 0x4ad8(r31)
/* 803C029C 003BD1DC  48 02 49 85 */	bl startBoid3__Q43ebi5title6Pikmin4TMgrFf
/* 803C02A0 003BD1E0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803C02A4 003BD1E4  C0 3F 4A D8 */	lfs f1, 0x4ad8(r31)
/* 803C02A8 003BD1E8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803C02AC 003BD1EC  EC 21 00 24 */	fdivs f1, f1, f0
/* 803C02B0 003BD1F0  4B D0 18 9D */	bl __cvt_fp2unsigned
/* 803C02B4 003BD1F4  90 7F 0F 60 */	stw r3, 0xf60(r31)
/* 803C02B8 003BD1F8  90 7F 0F 64 */	stw r3, 0xf64(r31)
/* 803C02BC 003BD1FC  48 00 01 B0 */	b .L_803C046C
.L_803C02C0:
/* 803C02C0 003BD200  80 7F 0F 60 */	lwz r3, 0xf60(r31)
/* 803C02C4 003BD204  28 03 00 00 */	cmplwi r3, 0
/* 803C02C8 003BD208  41 82 00 0C */	beq .L_803C02D4
/* 803C02CC 003BD20C  38 03 FF FF */	addi r0, r3, -1
/* 803C02D0 003BD210  90 1F 0F 60 */	stw r0, 0xf60(r31)
.L_803C02D4:
/* 803C02D4 003BD214  80 1F 0F 60 */	lwz r0, 0xf60(r31)
/* 803C02D8 003BD218  28 00 00 00 */	cmplwi r0, 0
/* 803C02DC 003BD21C  40 82 01 90 */	bne .L_803C046C
/* 803C02E0 003BD220  38 7F 01 54 */	addi r3, r31, 0x154
/* 803C02E4 003BD224  48 02 47 0D */	bl assemble__Q43ebi5title6Pikmin4TMgrFv
/* 803C02E8 003BD228  38 00 00 01 */	li r0, 1
/* 803C02EC 003BD22C  90 1F 0F 58 */	stw r0, 0xf58(r31)
/* 803C02F0 003BD230  48 00 01 7C */	b .L_803C046C
.L_803C02F4:
/* 803C02F4 003BD234  80 7F 0F 60 */	lwz r3, 0xf60(r31)
/* 803C02F8 003BD238  28 03 00 00 */	cmplwi r3, 0
/* 803C02FC 003BD23C  41 82 00 0C */	beq .L_803C0308
/* 803C0300 003BD240  38 03 FF FF */	addi r0, r3, -1
/* 803C0304 003BD244  90 1F 0F 60 */	stw r0, 0xf60(r31)
.L_803C0308:
/* 803C0308 003BD248  80 9F 0F 64 */	lwz r4, 0xf64(r31)
/* 803C030C 003BD24C  3C 60 43 30 */	lis r3, 0x4330
/* 803C0310 003BD250  90 61 00 28 */	stw r3, 0x28(r1)
/* 803C0314 003BD254  C0 9F 48 F8 */	lfs f4, 0x48f8(r31)
/* 803C0318 003BD258  28 04 00 00 */	cmplwi r4, 0
/* 803C031C 003BD25C  90 81 00 2C */	stw r4, 0x2c(r1)
/* 803C0320 003BD260  C0 3F 49 20 */	lfs f1, 0x4920(r31)
/* 803C0324 003BD264  C8 62 14 98 */	lfd f3, lbl_8051F7F8@sda21(r2)
/* 803C0328 003BD268  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 803C032C 003BD26C  EC A1 20 28 */	fsubs f5, f1, f4
/* 803C0330 003BD270  C0 42 13 A0 */	lfs f2, lbl_8051F700@sda21(r2)
/* 803C0334 003BD274  EC 00 18 28 */	fsubs f0, f0, f3
/* 803C0338 003BD278  EC C5 00 24 */	fdivs f6, f5, f0
/* 803C033C 003BD27C  41 82 00 30 */	beq .L_803C036C
/* 803C0340 003BD280  80 1F 0F 60 */	lwz r0, 0xf60(r31)
/* 803C0344 003BD284  90 61 00 30 */	stw r3, 0x30(r1)
/* 803C0348 003BD288  90 01 00 34 */	stw r0, 0x34(r1)
/* 803C034C 003BD28C  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 803C0350 003BD290  90 81 00 3C */	stw r4, 0x3c(r1)
/* 803C0354 003BD294  EC 20 18 28 */	fsubs f1, f0, f3
/* 803C0358 003BD298  90 61 00 38 */	stw r3, 0x38(r1)
/* 803C035C 003BD29C  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 803C0360 003BD2A0  EC 00 18 28 */	fsubs f0, f0, f3
/* 803C0364 003BD2A4  EC 01 00 24 */	fdivs f0, f1, f0
/* 803C0368 003BD2A8  48 00 00 08 */	b .L_803C0370
.L_803C036C:
/* 803C036C 003BD2AC  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
.L_803C0370:
/* 803C0370 003BD2B0  EC 02 00 28 */	fsubs f0, f2, f0
/* 803C0374 003BD2B4  C0 3F 49 48 */	lfs f1, 0x4948(r31)
/* 803C0378 003BD2B8  38 7F 01 54 */	addi r3, r31, 0x154
/* 803C037C 003BD2BC  38 81 00 14 */	addi r4, r1, 0x14
/* 803C0380 003BD2C0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803C0384 003BD2C4  EC 05 20 3A */	fmadds f0, f5, f0, f4
/* 803C0388 003BD2C8  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803C038C 003BD2CC  EC 00 30 2A */	fadds f0, f0, f6
/* 803C0390 003BD2D0  C0 3F 49 70 */	lfs f1, 0x4970(r31)
/* 803C0394 003BD2D4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803C0398 003BD2D8  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 803C039C 003BD2DC  48 02 49 15 */	bl startWindBlow__Q43ebi5title6Pikmin4TMgrFRQ23ebi8EGEBox2f
/* 803C03A0 003BD2E0  80 1F 0F 60 */	lwz r0, 0xf60(r31)
/* 803C03A4 003BD2E4  28 00 00 00 */	cmplwi r0, 0
/* 803C03A8 003BD2E8  40 82 00 C4 */	bne .L_803C046C
/* 803C03AC 003BD2EC  38 00 00 01 */	li r0, 1
/* 803C03B0 003BD2F0  90 1F 0F 58 */	stw r0, 0xf58(r31)
/* 803C03B4 003BD2F4  48 00 00 B8 */	b .L_803C046C
.L_803C03B8:
/* 803C03B8 003BD2F8  80 7F 0F 60 */	lwz r3, 0xf60(r31)
/* 803C03BC 003BD2FC  28 03 00 00 */	cmplwi r3, 0
/* 803C03C0 003BD300  41 82 00 0C */	beq .L_803C03CC
/* 803C03C4 003BD304  38 03 FF FF */	addi r0, r3, -1
/* 803C03C8 003BD308  90 1F 0F 60 */	stw r0, 0xf60(r31)
.L_803C03CC:
/* 803C03CC 003BD30C  80 7F 0C F0 */	lwz r3, 0xcf0(r31)
/* 803C03D0 003BD310  48 02 74 7D */	bl isController__Q43ebi5title6Kogane5TUnitFv
/* 803C03D4 003BD314  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803C03D8 003BD318  40 82 00 14 */	bne .L_803C03EC
/* 803C03DC 003BD31C  80 7F 0F 50 */	lwz r3, 0xf50(r31)
/* 803C03E0 003BD320  48 02 87 09 */	bl isController__Q43ebi5title6Chappy5TUnitFv
/* 803C03E4 003BD324  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803C03E8 003BD328  41 82 00 20 */	beq .L_803C0408
.L_803C03EC:
/* 803C03EC 003BD32C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803C03F0 003BD330  C0 22 14 40 */	lfs f1, lbl_8051F7A0@sda21(r2)
/* 803C03F4 003BD334  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803C03F8 003BD338  EC 21 00 24 */	fdivs f1, f1, f0
/* 803C03FC 003BD33C  4B D0 17 51 */	bl __cvt_fp2unsigned
/* 803C0400 003BD340  90 7F 0F 60 */	stw r3, 0xf60(r31)
/* 803C0404 003BD344  90 7F 0F 64 */	stw r3, 0xf64(r31)
.L_803C0408:
/* 803C0408 003BD348  80 1F 0F 60 */	lwz r0, 0xf60(r31)
/* 803C040C 003BD34C  28 00 00 00 */	cmplwi r0, 0
/* 803C0410 003BD350  40 82 00 14 */	bne .L_803C0424
/* 803C0414 003BD354  80 7F 0C F0 */	lwz r3, 0xcf0(r31)
/* 803C0418 003BD358  48 02 73 CD */	bl goHome__Q43ebi5title6Kogane5TUnitFv
/* 803C041C 003BD35C  80 7F 0F 50 */	lwz r3, 0xf50(r31)
/* 803C0420 003BD360  48 02 86 61 */	bl goHome__Q43ebi5title6Chappy5TUnitFv
.L_803C0424:
/* 803C0424 003BD364  80 7F 0F 50 */	lwz r3, 0xf50(r31)
/* 803C0428 003BD368  81 83 00 00 */	lwz r12, 0(r3)
/* 803C042C 003BD36C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803C0430 003BD370  7D 89 03 A6 */	mtctr r12
/* 803C0434 003BD374  4E 80 04 21 */	bctrl 
/* 803C0438 003BD378  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803C043C 003BD37C  40 82 00 30 */	bne .L_803C046C
/* 803C0440 003BD380  80 7F 0C F0 */	lwz r3, 0xcf0(r31)
/* 803C0444 003BD384  81 83 00 00 */	lwz r12, 0(r3)
/* 803C0448 003BD388  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803C044C 003BD38C  7D 89 03 A6 */	mtctr r12
/* 803C0450 003BD390  4E 80 04 21 */	bctrl 
/* 803C0454 003BD394  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803C0458 003BD398  40 82 00 14 */	bne .L_803C046C
/* 803C045C 003BD39C  38 7F 01 54 */	addi r3, r31, 0x154
/* 803C0460 003BD3A0  48 02 45 91 */	bl assemble__Q43ebi5title6Pikmin4TMgrFv
/* 803C0464 003BD3A4  38 00 00 01 */	li r0, 1
/* 803C0468 003BD3A8  90 1F 0F 58 */	stw r0, 0xf58(r31)
.L_803C046C:
/* 803C046C 003BD3AC  38 7F 42 70 */	addi r3, r31, 0x4270
/* 803C0470 003BD3B0  81 9F 42 70 */	lwz r12, 0x4270(r31)
/* 803C0474 003BD3B4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803C0478 003BD3B8  7D 89 03 A6 */	mtctr r12
/* 803C047C 003BD3BC  4E 80 04 21 */	bctrl 
/* 803C0480 003BD3C0  38 7F 00 F0 */	addi r3, r31, 0xf0
/* 803C0484 003BD3C4  48 00 13 6D */	bl updateBeforeCamera__Q33ebi5title11TBlackPlaneFv
/* 803C0488 003BD3C8  38 61 00 08 */	addi r3, r1, 8
/* 803C048C 003BD3CC  38 9F 00 F0 */	addi r4, r31, 0xf0
/* 803C0490 003BD3D0  48 00 15 0D */	bl getCameraPos__Q33ebi5title11TBlackPlaneFv
/* 803C0494 003BD3D4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803C0498 003BD3D8  38 7F 40 78 */	addi r3, r31, 0x4078
/* 803C049C 003BD3DC  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 803C04A0 003BD3E0  C0 01 00 08 */	lfs f0, 8(r1)
/* 803C04A4 003BD3E4  D0 1F 41 EC */	stfs f0, 0x41ec(r31)
/* 803C04A8 003BD3E8  D0 3F 41 F0 */	stfs f1, 0x41f0(r31)
/* 803C04AC 003BD3EC  D0 5F 41 F4 */	stfs f2, 0x41f4(r31)
/* 803C04B0 003BD3F0  48 00 1A 0D */	bl update__Q33ebi5title15TTitleCameraMgrFv
/* 803C04B4 003BD3F4  3C 80 80 51 */	lis r4, j3dSys@ha
/* 803C04B8 003BD3F8  38 7F 41 BC */	addi r3, r31, 0x41bc
/* 803C04BC 003BD3FC  38 84 F2 30 */	addi r4, r4, j3dSys@l
/* 803C04C0 003BD400  4B D2 9E 0D */	bl PSMTXCopy
/* 803C04C4 003BD404  38 7F 00 F0 */	addi r3, r31, 0xf0
/* 803C04C8 003BD408  48 00 14 39 */	bl updateAfterCamera__Q33ebi5title11TBlackPlaneFv
/* 803C04CC 003BD40C  38 7F 01 54 */	addi r3, r31, 0x154
/* 803C04D0 003BD410  48 02 3F F1 */	bl update__Q43ebi5title6Pikmin4TMgrFv
/* 803C04D4 003BD414  80 7F 0C F0 */	lwz r3, 0xcf0(r31)
/* 803C04D8 003BD418  48 02 76 59 */	bl update__Q43ebi5title6Kogane5TUnitFv
/* 803C04DC 003BD41C  80 7F 0F 50 */	lwz r3, 0xf50(r31)
/* 803C04E0 003BD420  48 02 89 35 */	bl update__Q43ebi5title6Chappy5TUnitFv
/* 803C04E4 003BD424  38 7F 00 30 */	addi r3, r31, 0x30
/* 803C04E8 003BD428  48 00 0A 45 */	bl update__Q33ebi5title8TMapBaseFv
/* 803C04EC 003BD42C  38 7F 00 A4 */	addi r3, r31, 0xa4
/* 803C04F0 003BD430  48 00 0E 65 */	bl update__Q33ebi5title12TBGEnemyBaseFv
/* 803C04F4 003BD434  7F E3 FB 78 */	mr r3, r31
/* 803C04F8 003BD438  48 00 00 31 */	bl checkEncounter___Q33ebi5title9TTitleMgrFv
/* 803C04FC 003BD43C  80 9F 0C F0 */	lwz r4, 0xcf0(r31)
/* 803C0500 003BD440  38 7F 01 54 */	addi r3, r31, 0x154
/* 803C0504 003BD444  48 02 48 F5 */	bl enemyPushOut__Q43ebi5title6Pikmin4TMgrFPQ33ebi5title8TObjBase
/* 803C0508 003BD448  80 9F 0F 50 */	lwz r4, 0xf50(r31)
/* 803C050C 003BD44C  38 7F 01 54 */	addi r3, r31, 0x154
/* 803C0510 003BD450  48 02 48 E9 */	bl enemyPushOut__Q43ebi5title6Pikmin4TMgrFPQ33ebi5title8TObjBase
.L_803C0514:
/* 803C0514 003BD454  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803C0518 003BD458  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803C051C 003BD45C  7C 08 03 A6 */	mtlr r0
/* 803C0520 003BD460  38 21 00 50 */	addi r1, r1, 0x50
/* 803C0524 003BD464  4E 80 00 20 */	blr 
.endfn updateState__Q33ebi5title9TTitleMgrFv

.fn checkEncounter___Q33ebi5title9TTitleMgrFv, global
/* 803C0528 003BD468  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803C052C 003BD46C  7C 08 02 A6 */	mflr r0
/* 803C0530 003BD470  90 01 00 34 */	stw r0, 0x34(r1)
/* 803C0534 003BD474  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803C0538 003BD478  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803C053C 003BD47C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803C0540 003BD480  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803C0544 003BD484  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803C0548 003BD488  93 81 00 10 */	stw r28, 0x10(r1)
/* 803C054C 003BD48C  88 0D 9A 34 */	lbz r0, init$5257@sda21(r13)
/* 803C0550 003BD490  7C 7F 1B 78 */	mr r31, r3
/* 803C0554 003BD494  7C 00 07 75 */	extsb. r0, r0
/* 803C0558 003BD498  40 82 00 14 */	bne .L_803C056C
/* 803C055C 003BD49C  38 60 00 00 */	li r3, 0
/* 803C0560 003BD4A0  38 00 00 01 */	li r0, 1
/* 803C0564 003BD4A4  90 6D 9A 30 */	stw r3, boidCalcTimer$5256@sda21(r13)
/* 803C0568 003BD4A8  98 0D 9A 34 */	stb r0, init$5257@sda21(r13)
.L_803C056C:
/* 803C056C 003BD4AC  80 6D 9A 30 */	lwz r3, boidCalcTimer$5256@sda21(r13)
/* 803C0570 003BD4B0  38 03 00 01 */	addi r0, r3, 1
/* 803C0574 003BD4B4  2C 00 00 0A */	cmpwi r0, 0xa
/* 803C0578 003BD4B8  90 0D 9A 30 */	stw r0, boidCalcTimer$5256@sda21(r13)
/* 803C057C 003BD4BC  41 80 00 0C */	blt .L_803C0588
/* 803C0580 003BD4C0  38 00 00 00 */	li r0, 0
/* 803C0584 003BD4C4  90 0D 9A 30 */	stw r0, boidCalcTimer$5256@sda21(r13)
.L_803C0588:
/* 803C0588 003BD4C8  80 AD 9A 30 */	lwz r5, boidCalcTimer$5256@sda21(r13)
/* 803C058C 003BD4CC  3C 60 66 66 */	lis r3, 0x66666667@ha
/* 803C0590 003BD4D0  38 83 66 67 */	addi r4, r3, 0x66666667@l
/* 803C0594 003BD4D4  1C 05 01 F4 */	mulli r0, r5, 0x1f4
/* 803C0598 003BD4D8  2C 05 00 09 */	cmpwi r5, 9
/* 803C059C 003BD4DC  7C 04 00 96 */	mulhw r0, r4, r0
/* 803C05A0 003BD4E0  7C 00 16 70 */	srawi r0, r0, 2
/* 803C05A4 003BD4E4  54 03 0F FE */	srwi r3, r0, 0x1f
/* 803C05A8 003BD4E8  7C C0 1A 14 */	add r6, r0, r3
/* 803C05AC 003BD4EC  40 82 00 0C */	bne .L_803C05B8
/* 803C05B0 003BD4F0  3B A0 01 F4 */	li r29, 0x1f4
/* 803C05B4 003BD4F4  48 00 00 1C */	b .L_803C05D0
.L_803C05B8:
/* 803C05B8 003BD4F8  38 05 00 01 */	addi r0, r5, 1
/* 803C05BC 003BD4FC  1C 00 01 F4 */	mulli r0, r0, 0x1f4
/* 803C05C0 003BD500  7C 04 00 96 */	mulhw r0, r4, r0
/* 803C05C4 003BD504  7C 00 16 70 */	srawi r0, r0, 2
/* 803C05C8 003BD508  54 03 0F FE */	srwi r3, r0, 0x1f
/* 803C05CC 003BD50C  7F A0 1A 14 */	add r29, r0, r3
.L_803C05D0:
/* 803C05D0 003BD510  7C DC 33 78 */	mr r28, r6
/* 803C05D4 003BD514  48 00 01 50 */	b .L_803C0724
.L_803C05D8:
/* 803C05D8 003BD518  7F 84 E3 78 */	mr r4, r28
/* 803C05DC 003BD51C  38 7F 01 54 */	addi r3, r31, 0x154
/* 803C05E0 003BD520  48 02 4C AD */	bl getUnit__Q43ebi5title6Pikmin4TMgrFl
/* 803C05E4 003BD524  81 83 00 00 */	lwz r12, 0(r3)
/* 803C05E8 003BD528  7C 7E 1B 78 */	mr r30, r3
/* 803C05EC 003BD52C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803C05F0 003BD530  7D 89 03 A6 */	mtctr r12
/* 803C05F4 003BD534  4E 80 04 21 */	bctrl 
/* 803C05F8 003BD538  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803C05FC 003BD53C  41 82 01 24 */	beq .L_803C0720
/* 803C0600 003BD540  80 7F 0C F0 */	lwz r3, 0xcf0(r31)
/* 803C0604 003BD544  C3 E2 14 28 */	lfs f31, lbl_8051F788@sda21(r2)
/* 803C0608 003BD548  81 83 00 00 */	lwz r12, 0(r3)
/* 803C060C 003BD54C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803C0610 003BD550  7D 89 03 A6 */	mtctr r12
/* 803C0614 003BD554  4E 80 04 21 */	bctrl 
/* 803C0618 003BD558  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803C061C 003BD55C  41 82 00 84 */	beq .L_803C06A0
/* 803C0620 003BD560  80 7F 0C F0 */	lwz r3, 0xcf0(r31)
/* 803C0624 003BD564  C0 1E 00 08 */	lfs f0, 8(r30)
/* 803C0628 003BD568  C0 43 00 08 */	lfs f2, 8(r3)
/* 803C062C 003BD56C  C0 23 00 04 */	lfs f1, 4(r3)
/* 803C0630 003BD570  EC 42 00 28 */	fsubs f2, f2, f0
/* 803C0634 003BD574  C0 1E 00 04 */	lfs f0, 4(r30)
/* 803C0638 003BD578  C0 62 13 98 */	lfs f3, lbl_8051F6F8@sda21(r2)
/* 803C063C 003BD57C  EC 21 00 28 */	fsubs f1, f1, f0
/* 803C0640 003BD580  EC 42 00 B2 */	fmuls f2, f2, f2
/* 803C0644 003BD584  EC 81 10 7A */	fmadds f4, f1, f1, f2
/* 803C0648 003BD588  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 803C064C 003BD58C  40 81 00 18 */	ble .L_803C0664
/* 803C0650 003BD590  40 81 00 10 */	ble .L_803C0660
/* 803C0654 003BD594  FC 00 20 34 */	frsqrte f0, f4
/* 803C0658 003BD598  EC 60 01 32 */	fmuls f3, f0, f4
/* 803C065C 003BD59C  48 00 00 08 */	b .L_803C0664
.L_803C0660:
/* 803C0660 003BD5A0  FC 60 20 90 */	fmr f3, f4
.L_803C0664:
/* 803C0664 003BD5A4  C0 02 14 28 */	lfs f0, lbl_8051F788@sda21(r2)
/* 803C0668 003BD5A8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803C066C 003BD5AC  40 80 00 34 */	bge .L_803C06A0
/* 803C0670 003BD5B0  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803C0674 003BD5B4  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 803C0678 003BD5B8  40 81 00 1C */	ble .L_803C0694
/* 803C067C 003BD5BC  EC 21 10 7A */	fmadds f1, f1, f1, f2
/* 803C0680 003BD5C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803C0684 003BD5C4  40 81 00 14 */	ble .L_803C0698
/* 803C0688 003BD5C8  FC 00 08 34 */	frsqrte f0, f1
/* 803C068C 003BD5CC  EC 20 00 72 */	fmuls f1, f0, f1
/* 803C0690 003BD5D0  48 00 00 08 */	b .L_803C0698
.L_803C0694:
/* 803C0694 003BD5D4  FC 20 00 90 */	fmr f1, f0
.L_803C0698:
/* 803C0698 003BD5D8  FF E0 08 90 */	fmr f31, f1
/* 803C069C 003BD5DC  90 7E 00 68 */	stw r3, 0x68(r30)
.L_803C06A0:
/* 803C06A0 003BD5E0  80 7F 0F 50 */	lwz r3, 0xf50(r31)
/* 803C06A4 003BD5E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803C06A8 003BD5E8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803C06AC 003BD5EC  7D 89 03 A6 */	mtctr r12
/* 803C06B0 003BD5F0  4E 80 04 21 */	bctrl 
/* 803C06B4 003BD5F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803C06B8 003BD5F8  41 82 00 68 */	beq .L_803C0720
/* 803C06BC 003BD5FC  80 7F 0F 50 */	lwz r3, 0xf50(r31)
/* 803C06C0 003BD600  C0 1E 00 08 */	lfs f0, 8(r30)
/* 803C06C4 003BD604  C0 43 00 08 */	lfs f2, 8(r3)
/* 803C06C8 003BD608  C0 23 00 04 */	lfs f1, 4(r3)
/* 803C06CC 003BD60C  EC 42 00 28 */	fsubs f2, f2, f0
/* 803C06D0 003BD610  C0 1E 00 04 */	lfs f0, 4(r30)
/* 803C06D4 003BD614  C0 62 13 98 */	lfs f3, lbl_8051F6F8@sda21(r2)
/* 803C06D8 003BD618  EC 21 00 28 */	fsubs f1, f1, f0
/* 803C06DC 003BD61C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 803C06E0 003BD620  EC 81 10 7A */	fmadds f4, f1, f1, f2
/* 803C06E4 003BD624  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 803C06E8 003BD628  40 81 00 18 */	ble .L_803C0700
/* 803C06EC 003BD62C  40 81 00 10 */	ble .L_803C06FC
/* 803C06F0 003BD630  FC 00 20 34 */	frsqrte f0, f4
/* 803C06F4 003BD634  EC 60 01 32 */	fmuls f3, f0, f4
/* 803C06F8 003BD638  48 00 00 08 */	b .L_803C0700
.L_803C06FC:
/* 803C06FC 003BD63C  FC 60 20 90 */	fmr f3, f4
.L_803C0700:
/* 803C0700 003BD640  FC 03 F8 40 */	fcmpo cr0, f3, f31
/* 803C0704 003BD644  40 80 00 1C */	bge .L_803C0720
/* 803C0708 003BD648  C0 02 13 98 */	lfs f0, lbl_8051F6F8@sda21(r2)
/* 803C070C 003BD64C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 803C0710 003BD650  40 81 00 0C */	ble .L_803C071C
/* 803C0714 003BD654  EC 21 10 7A */	fmadds f1, f1, f1, f2
/* 803C0718 003BD658  FC 01 00 40 */	fcmpo cr0, f1, f0
.L_803C071C:
/* 803C071C 003BD65C  90 7E 00 68 */	stw r3, 0x68(r30)
.L_803C0720:
/* 803C0720 003BD660  3B 9C 00 01 */	addi r28, r28, 1
.L_803C0724:
/* 803C0724 003BD664  7C 1C E8 00 */	cmpw r28, r29
/* 803C0728 003BD668  41 80 FE B0 */	blt .L_803C05D8
/* 803C072C 003BD66C  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803C0730 003BD670  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803C0734 003BD674  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803C0738 003BD678  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803C073C 003BD67C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803C0740 003BD680  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803C0744 003BD684  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803C0748 003BD688  7C 08 03 A6 */	mtlr r0
/* 803C074C 003BD68C  38 21 00 30 */	addi r1, r1, 0x30
/* 803C0750 003BD690  4E 80 00 20 */	blr 
.endfn checkEncounter___Q33ebi5title9TTitleMgrFv

.fn draw__Q33ebi5title9TTitleMgrFv, global
/* 803C0754 003BD694  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803C0758 003BD698  7C 08 02 A6 */	mflr r0
/* 803C075C 003BD69C  90 01 00 74 */	stw r0, 0x74(r1)
/* 803C0760 003BD6A0  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 803C0764 003BD6A4  7C 7F 1B 78 */	mr r31, r3
/* 803C0768 003BD6A8  93 C1 00 68 */	stw r30, 0x68(r1)
/* 803C076C 003BD6AC  93 A1 00 64 */	stw r29, 0x64(r1)
/* 803C0770 003BD6B0  80 03 0F 58 */	lwz r0, 0xf58(r3)
/* 803C0774 003BD6B4  2C 00 00 00 */	cmpwi r0, 0
/* 803C0778 003BD6B8  41 82 02 28 */	beq .L_803C09A0
/* 803C077C 003BD6BC  80 1F 0F 5C */	lwz r0, 0xf5c(r31)
/* 803C0780 003BD6C0  2C 00 00 03 */	cmpwi r0, 3
/* 803C0784 003BD6C4  40 82 00 C8 */	bne .L_803C084C
/* 803C0788 003BD6C8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803C078C 003BD6CC  80 63 00 24 */	lwz r3, 0x24(r3)
/* 803C0790 003BD6D0  3B C3 01 90 */	addi r30, r3, 0x190
/* 803C0794 003BD6D4  7F C3 F3 78 */	mr r3, r30
/* 803C0798 003BD6D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 803C079C 003BD6DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803C07A0 003BD6E0  7D 89 03 A6 */	mtctr r12
/* 803C07A4 003BD6E4  4E 80 04 21 */	bctrl 
/* 803C07A8 003BD6E8  38 00 00 FF */	li r0, 0xff
/* 803C07AC 003BD6EC  7F C3 F3 78 */	mr r3, r30
/* 803C07B0 003BD6F0  98 01 00 2C */	stb r0, 0x2c(r1)
/* 803C07B4 003BD6F4  38 81 00 18 */	addi r4, r1, 0x18
/* 803C07B8 003BD6F8  38 A1 00 1C */	addi r5, r1, 0x1c
/* 803C07BC 003BD6FC  38 C1 00 20 */	addi r6, r1, 0x20
/* 803C07C0 003BD700  98 01 00 2D */	stb r0, 0x2d(r1)
/* 803C07C4 003BD704  38 E1 00 24 */	addi r7, r1, 0x24
/* 803C07C8 003BD708  98 01 00 2E */	stb r0, 0x2e(r1)
/* 803C07CC 003BD70C  98 01 00 2F */	stb r0, 0x2f(r1)
/* 803C07D0 003BD710  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803C07D4 003BD714  90 01 00 24 */	stw r0, 0x24(r1)
/* 803C07D8 003BD718  90 01 00 20 */	stw r0, 0x20(r1)
/* 803C07DC 003BD71C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 803C07E0 003BD720  90 01 00 18 */	stw r0, 0x18(r1)
/* 803C07E4 003BD724  4B C7 5E A9 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 803C07E8 003BD728  48 06 2A 3D */	bl getRenderModeObj__6SystemFv
/* 803C07EC 003BD72C  A3 A3 00 06 */	lhz r29, 6(r3)
/* 803C07F0 003BD730  48 06 2A 35 */	bl getRenderModeObj__6SystemFv
/* 803C07F4 003BD734  A0 83 00 04 */	lhz r4, 4(r3)
/* 803C07F8 003BD738  3C 00 43 30 */	lis r0, 0x4330
/* 803C07FC 003BD73C  C0 62 13 98 */	lfs f3, lbl_8051F6F8@sda21(r2)
/* 803C0800 003BD740  7F C3 F3 78 */	mr r3, r30
/* 803C0804 003BD744  90 81 00 54 */	stw r4, 0x54(r1)
/* 803C0808 003BD748  38 81 00 40 */	addi r4, r1, 0x40
/* 803C080C 003BD74C  C8 42 14 98 */	lfd f2, lbl_8051F7F8@sda21(r2)
/* 803C0810 003BD750  90 01 00 50 */	stw r0, 0x50(r1)
/* 803C0814 003BD754  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 803C0818 003BD758  93 A1 00 5C */	stw r29, 0x5c(r1)
/* 803C081C 003BD75C  EC 20 10 28 */	fsubs f1, f0, f2
/* 803C0820 003BD760  90 01 00 58 */	stw r0, 0x58(r1)
/* 803C0824 003BD764  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 803C0828 003BD768  EC 23 08 2A */	fadds f1, f3, f1
/* 803C082C 003BD76C  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 803C0830 003BD770  EC 00 10 28 */	fsubs f0, f0, f2
/* 803C0834 003BD774  D0 61 00 44 */	stfs f3, 0x44(r1)
/* 803C0838 003BD778  EC 03 00 2A */	fadds f0, f3, f0
/* 803C083C 003BD77C  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 803C0840 003BD780  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 803C0844 003BD784  4B C7 5F 91 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
/* 803C0848 003BD788  48 00 00 C8 */	b .L_803C0910
.L_803C084C:
/* 803C084C 003BD78C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803C0850 003BD790  80 63 00 24 */	lwz r3, 0x24(r3)
/* 803C0854 003BD794  3B A3 01 90 */	addi r29, r3, 0x190
/* 803C0858 003BD798  7F A3 EB 78 */	mr r3, r29
/* 803C085C 003BD79C  81 9D 00 00 */	lwz r12, 0(r29)
/* 803C0860 003BD7A0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803C0864 003BD7A4  7D 89 03 A6 */	mtctr r12
/* 803C0868 003BD7A8  4E 80 04 21 */	bctrl 
/* 803C086C 003BD7AC  39 00 00 00 */	li r8, 0
/* 803C0870 003BD7B0  38 00 00 FF */	li r0, 0xff
/* 803C0874 003BD7B4  99 01 00 28 */	stb r8, 0x28(r1)
/* 803C0878 003BD7B8  7F A3 EB 78 */	mr r3, r29
/* 803C087C 003BD7BC  38 81 00 08 */	addi r4, r1, 8
/* 803C0880 003BD7C0  38 A1 00 0C */	addi r5, r1, 0xc
/* 803C0884 003BD7C4  99 01 00 29 */	stb r8, 0x29(r1)
/* 803C0888 003BD7C8  38 C1 00 10 */	addi r6, r1, 0x10
/* 803C088C 003BD7CC  38 E1 00 14 */	addi r7, r1, 0x14
/* 803C0890 003BD7D0  99 01 00 2A */	stb r8, 0x2a(r1)
/* 803C0894 003BD7D4  98 01 00 2B */	stb r0, 0x2b(r1)
/* 803C0898 003BD7D8  80 01 00 28 */	lwz r0, 0x28(r1)
/* 803C089C 003BD7DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803C08A0 003BD7E0  90 01 00 10 */	stw r0, 0x10(r1)
/* 803C08A4 003BD7E4  90 01 00 0C */	stw r0, 0xc(r1)
/* 803C08A8 003BD7E8  90 01 00 08 */	stw r0, 8(r1)
/* 803C08AC 003BD7EC  4B C7 5D E1 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 803C08B0 003BD7F0  48 06 29 75 */	bl getRenderModeObj__6SystemFv
/* 803C08B4 003BD7F4  A3 C3 00 06 */	lhz r30, 6(r3)
/* 803C08B8 003BD7F8  48 06 29 6D */	bl getRenderModeObj__6SystemFv
/* 803C08BC 003BD7FC  A0 83 00 04 */	lhz r4, 4(r3)
/* 803C08C0 003BD800  3C 00 43 30 */	lis r0, 0x4330
/* 803C08C4 003BD804  C0 62 13 98 */	lfs f3, lbl_8051F6F8@sda21(r2)
/* 803C08C8 003BD808  7F A3 EB 78 */	mr r3, r29
/* 803C08CC 003BD80C  90 81 00 5C */	stw r4, 0x5c(r1)
/* 803C08D0 003BD810  38 81 00 30 */	addi r4, r1, 0x30
/* 803C08D4 003BD814  C8 42 14 98 */	lfd f2, lbl_8051F7F8@sda21(r2)
/* 803C08D8 003BD818  90 01 00 58 */	stw r0, 0x58(r1)
/* 803C08DC 003BD81C  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 803C08E0 003BD820  93 C1 00 54 */	stw r30, 0x54(r1)
/* 803C08E4 003BD824  EC 20 10 28 */	fsubs f1, f0, f2
/* 803C08E8 003BD828  90 01 00 50 */	stw r0, 0x50(r1)
/* 803C08EC 003BD82C  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 803C08F0 003BD830  EC 23 08 2A */	fadds f1, f3, f1
/* 803C08F4 003BD834  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 803C08F8 003BD838  EC 00 10 28 */	fsubs f0, f0, f2
/* 803C08FC 003BD83C  D0 61 00 34 */	stfs f3, 0x34(r1)
/* 803C0900 003BD840  EC 03 00 2A */	fadds f0, f3, f0
/* 803C0904 003BD844  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 803C0908 003BD848  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 803C090C 003BD84C  4B C7 5E C9 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
.L_803C0910:
/* 803C0910 003BD850  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803C0914 003BD854  38 80 00 00 */	li r4, 0
/* 803C0918 003BD858  80 63 00 24 */	lwz r3, 0x24(r3)
/* 803C091C 003BD85C  48 06 4C D5 */	bl getViewport__8GraphicsFi
/* 803C0920 003BD860  7C 7D 1B 78 */	mr r29, r3
/* 803C0924 003BD864  48 06 4B 21 */	bl setViewport__8ViewportFv
/* 803C0928 003BD868  7F A3 EB 78 */	mr r3, r29
/* 803C092C 003BD86C  48 06 48 75 */	bl setProjection__8ViewportFv
/* 803C0930 003BD870  38 7F 40 78 */	addi r3, r31, 0x4078
/* 803C0934 003BD874  48 05 A4 11 */	bl setProjection__6CameraFv
/* 803C0938 003BD878  38 7F 42 70 */	addi r3, r31, 0x4270
/* 803C093C 003BD87C  38 9F 41 BC */	addi r4, r31, 0x41bc
/* 803C0940 003BD880  48 00 18 49 */	bl setCameraMtx__Q33ebi5title14TTitleLightMgrFPA4_f
/* 803C0944 003BD884  38 7F 47 88 */	addi r3, r31, 0x4788
/* 803C0948 003BD888  38 9F 40 78 */	addi r4, r31, 0x4078
/* 803C094C 003BD88C  48 02 A8 59 */	bl setGX__Q33ebi5title12TTitleFogMgrFR6Camera
/* 803C0950 003BD890  3C 60 80 51 */	lis r3, j3dSys@ha
/* 803C0954 003BD894  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 803C0958 003BD898  4B C9 D2 B5 */	bl drawInit__6J3DSysFv
/* 803C095C 003BD89C  3C 60 80 51 */	lis r3, j3dSys@ha
/* 803C0960 003BD8A0  38 00 00 03 */	li r0, 3
/* 803C0964 003BD8A4  3B C3 F2 30 */	addi r30, r3, j3dSys@l
/* 803C0968 003BD8A8  90 1E 00 50 */	stw r0, 0x50(r30)
/* 803C096C 003BD8AC  80 7F 48 CC */	lwz r3, 0x48cc(r31)
/* 803C0970 003BD8B0  4B CA 57 4D */	bl draw__13J3DDrawBufferCFv
/* 803C0974 003BD8B4  38 00 00 04 */	li r0, 4
/* 803C0978 003BD8B8  90 1E 00 50 */	stw r0, 0x50(r30)
/* 803C097C 003BD8BC  80 7F 48 D0 */	lwz r3, 0x48d0(r31)
/* 803C0980 003BD8C0  4B CA 57 3D */	bl draw__13J3DDrawBufferCFv
/* 803C0984 003BD8C4  3C 60 80 51 */	lis r3, j3dSys@ha
/* 803C0988 003BD8C8  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 803C098C 003BD8CC  4B C9 DA 39 */	bl reinitGX__6J3DSysFv
/* 803C0990 003BD8D0  80 7F 48 CC */	lwz r3, 0x48cc(r31)
/* 803C0994 003BD8D4  4B CA 50 FD */	bl frameInit__13J3DDrawBufferFv
/* 803C0998 003BD8D8  80 7F 48 D0 */	lwz r3, 0x48d0(r31)
/* 803C099C 003BD8DC  4B CA 50 F5 */	bl frameInit__13J3DDrawBufferFv
.L_803C09A0:
/* 803C09A0 003BD8E0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803C09A4 003BD8E4  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 803C09A8 003BD8E8  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 803C09AC 003BD8EC  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 803C09B0 003BD8F0  7C 08 03 A6 */	mtlr r0
/* 803C09B4 003BD8F4  38 21 00 70 */	addi r1, r1, 0x70
/* 803C09B8 003BD8F8  4E 80 00 20 */	blr 
.endfn draw__Q33ebi5title9TTitleMgrFv

.fn readTitleParam__Q33ebi5title9TTitleMgrFP10JKRArchivePc, global
/* 803C09BC 003BD8FC  94 21 FB D0 */	stwu r1, -0x430(r1)
/* 803C09C0 003BD900  7C 08 02 A6 */	mflr r0
/* 803C09C4 003BD904  90 01 04 34 */	stw r0, 0x434(r1)
/* 803C09C8 003BD908  93 E1 04 2C */	stw r31, 0x42c(r1)
/* 803C09CC 003BD90C  7C 7F 1B 78 */	mr r31, r3
/* 803C09D0 003BD910  7C 83 23 78 */	mr r3, r4
/* 803C09D4 003BD914  81 84 00 00 */	lwz r12, 0(r4)
/* 803C09D8 003BD918  7C A4 2B 78 */	mr r4, r5
/* 803C09DC 003BD91C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803C09E0 003BD920  7D 89 03 A6 */	mtctr r12
/* 803C09E4 003BD924  4E 80 04 21 */	bctrl 
/* 803C09E8 003BD928  28 03 00 00 */	cmplwi r3, 0
/* 803C09EC 003BD92C  41 82 00 38 */	beq .L_803C0A24
/* 803C09F0 003BD930  7C 64 1B 78 */	mr r4, r3
/* 803C09F4 003BD934  38 61 00 08 */	addi r3, r1, 8
/* 803C09F8 003BD938  38 A0 FF FF */	li r5, -1
/* 803C09FC 003BD93C  48 05 4E FD */	bl __ct__9RamStreamFPvi
/* 803C0A00 003BD940  38 00 00 01 */	li r0, 1
/* 803C0A04 003BD944  2C 00 00 01 */	cmpwi r0, 1
/* 803C0A08 003BD948  90 01 00 14 */	stw r0, 0x14(r1)
/* 803C0A0C 003BD94C  40 82 00 0C */	bne .L_803C0A18
/* 803C0A10 003BD950  38 00 00 00 */	li r0, 0
/* 803C0A14 003BD954  90 01 04 1C */	stw r0, 0x41c(r1)
.L_803C0A18:
/* 803C0A18 003BD958  38 7F 48 D4 */	addi r3, r31, 0x48d4
/* 803C0A1C 003BD95C  38 81 00 08 */	addi r4, r1, 8
/* 803C0A20 003BD960  48 05 2D D5 */	bl read__10ParametersFR6Stream
.L_803C0A24:
/* 803C0A24 003BD964  80 01 04 34 */	lwz r0, 0x434(r1)
/* 803C0A28 003BD968  83 E1 04 2C */	lwz r31, 0x42c(r1)
/* 803C0A2C 003BD96C  7C 08 03 A6 */	mtlr r0
/* 803C0A30 003BD970  38 21 04 30 */	addi r1, r1, 0x430
/* 803C0A34 003BD974  4E 80 00 20 */	blr 
.endfn readTitleParam__Q33ebi5title9TTitleMgrFP10JKRArchivePc

.fn __dt__Q43ebi5title6Pikmin13TBoidParamMgrFv, weak
/* 803C0A38 003BD978  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803C0A3C 003BD97C  7C 08 02 A6 */	mflr r0
/* 803C0A40 003BD980  90 01 00 14 */	stw r0, 0x14(r1)
/* 803C0A44 003BD984  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803C0A48 003BD988  7C 9F 23 78 */	mr r31, r4
/* 803C0A4C 003BD98C  93 C1 00 08 */	stw r30, 8(r1)
/* 803C0A50 003BD990  7C 7E 1B 79 */	or. r30, r3, r3
/* 803C0A54 003BD994  41 82 00 28 */	beq .L_803C0A7C
/* 803C0A58 003BD998  3C A0 80 4E */	lis r5, __vt__Q43ebi5title6Pikmin13TBoidParamMgr@ha
/* 803C0A5C 003BD99C  38 80 00 00 */	li r4, 0
/* 803C0A60 003BD9A0  38 05 78 6C */	addi r0, r5, __vt__Q43ebi5title6Pikmin13TBoidParamMgr@l
/* 803C0A64 003BD9A4  90 1E 00 00 */	stw r0, 0(r30)
/* 803C0A68 003BD9A8  48 05 0B 21 */	bl __dt__5CNodeFv
/* 803C0A6C 003BD9AC  7F E0 07 35 */	extsh. r0, r31
/* 803C0A70 003BD9B0  40 81 00 0C */	ble .L_803C0A7C
/* 803C0A74 003BD9B4  7F C3 F3 78 */	mr r3, r30
/* 803C0A78 003BD9B8  4B C6 36 3D */	bl __dl__FPv
.L_803C0A7C:
/* 803C0A7C 003BD9BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803C0A80 003BD9C0  7F C3 F3 78 */	mr r3, r30
/* 803C0A84 003BD9C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803C0A88 003BD9C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803C0A8C 003BD9CC  7C 08 03 A6 */	mtlr r0
/* 803C0A90 003BD9D0  38 21 00 10 */	addi r1, r1, 0x10
/* 803C0A94 003BD9D4  4E 80 00 20 */	blr 
.endfn __dt__Q43ebi5title6Pikmin13TBoidParamMgrFv

.fn read__Q33ebi5title15TTitleCameraMgrFR6Stream, weak
/* 803C0A98 003BD9D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803C0A9C 003BD9DC  7C 08 02 A6 */	mflr r0
/* 803C0AA0 003BD9E0  38 63 01 98 */	addi r3, r3, 0x198
/* 803C0AA4 003BD9E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803C0AA8 003BD9E8  48 05 2D 4D */	bl read__10ParametersFR6Stream
/* 803C0AAC 003BD9EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803C0AB0 003BD9F0  7C 08 03 A6 */	mtlr r0
/* 803C0AB4 003BD9F4  38 21 00 10 */	addi r1, r1, 0x10
/* 803C0AB8 003BD9F8  4E 80 00 20 */	blr 
.endfn read__Q33ebi5title15TTitleCameraMgrFR6Stream

.fn doUpdate__6CameraFv, weak
/* 803C0ABC 003BD9FC  4E 80 00 20 */	blr 
.endfn doUpdate__6CameraFv

.fn getCreatureType__Q33ebi5title8TObjBaseFv, weak
/* 803C0AC0 003BDA00  38 60 FF FF */	li r3, -1
/* 803C0AC4 003BDA04  4E 80 00 20 */	blr 
.endfn getCreatureType__Q33ebi5title8TObjBaseFv

.fn __sinit_ebiP2Title_cpp, local
/* 803C0AC8 003BDA08  3C 80 80 51 */	lis r4, __float_nan@ha
/* 803C0ACC 003BDA0C  38 00 FF FF */	li r0, -1
/* 803C0AD0 003BDA10  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 803C0AD4 003BDA14  3C 60 80 4E */	lis r3, govNAN___Q24Game5P2JST@ha
/* 803C0AD8 003BDA18  90 0D 9A 20 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 803C0ADC 003BDA1C  D4 03 78 28 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 803C0AE0 003BDA20  D0 0D 9A 24 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 803C0AE4 003BDA24  D0 03 00 04 */	stfs f0, 4(r3)
/* 803C0AE8 003BDA28  D0 03 00 08 */	stfs f0, 8(r3)
/* 803C0AEC 003BDA2C  4E 80 00 20 */	blr 
.endfn __sinit_ebiP2Title_cpp

.fn "@24@__dt__Q33ebi5title9TTitleMgrFv", weak
/* 803C0AF0 003BDA30  38 63 FF E8 */	addi r3, r3, -24
/* 803C0AF4 003BDA34  4B FF D9 34 */	b __dt__Q33ebi5title9TTitleMgrFv
.endfn "@24@__dt__Q33ebi5title9TTitleMgrFv"
