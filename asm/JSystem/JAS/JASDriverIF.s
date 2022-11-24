.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_JASDriverIF_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
C5BASE_PITCHTABLE__9JASDriver: # local object
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

.section .bss  # 0x804EFC20 - 0x8051467C
.lcomm sDspSyncCallback__9JASDriver, 0x80, 4
.lcomm sSubFrameCallback__9JASDriver, 0x80, 4
.lcomm sUpdateDacCallback__9JASDriver, 0x80, 4

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
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
.balign 8
lbl_80516E50:
	.float 16383.5
.balign 8
lbl_80516E58:
	.4byte 0x43300000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global key2pitch_c5__9JASDriverFi
key2pitch_c5__9JASDriverFi:
/* 800A47D8 000A1718  2C 03 00 00 */	cmpwi r3, 0
/* 800A47DC 000A171C  40 80 00 0C */	bge .L_800A47E8
/* 800A47E0 000A1720  38 60 00 00 */	li r3, 0
/* 800A47E4 000A1724  48 00 00 10 */	b .L_800A47F4
.L_800A47E8:
/* 800A47E8 000A1728  2C 03 00 7F */	cmpwi r3, 0x7f
/* 800A47EC 000A172C  40 81 00 08 */	ble .L_800A47F4
/* 800A47F0 000A1730  38 60 00 7F */	li r3, 0x7f
.L_800A47F4:
/* 800A47F4 000A1734  3C 80 80 48 */	lis r4, C5BASE_PITCHTABLE__9JASDriver@ha
/* 800A47F8 000A1738  54 60 10 3A */	slwi r0, r3, 2
/* 800A47FC 000A173C  38 64 8E 70 */	addi r3, r4, C5BASE_PITCHTABLE__9JASDriver@l
/* 800A4800 000A1740  7C 23 04 2E */	lfsx f1, r3, r0
/* 800A4804 000A1744  4E 80 00 20 */	blr 

.global setLevel__9JASDriverFfff
setLevel__9JASDriverFfff:
/* 800A4808 000A1748  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800A480C 000A174C  7C 08 02 A6 */	mflr r0
/* 800A4810 000A1750  C0 02 8A F0 */	lfs f0, lbl_80516E50@sda21(r2)
/* 800A4814 000A1754  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A4818 000A1758  EC 80 00 72 */	fmuls f4, f0, f1
/* 800A481C 000A175C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 800A4820 000A1760  FC 20 18 90 */	fmr f1, f3
/* 800A4824 000A1764  FC 40 20 1E */	fctiwz f2, f4
/* 800A4828 000A1768  FC 00 00 1E */	fctiwz f0, f0
/* 800A482C 000A176C  D8 41 00 08 */	stfd f2, 8(r1)
/* 800A4830 000A1770  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 800A4834 000A1774  80 61 00 0C */	lwz r3, 0xc(r1)
/* 800A4838 000A1778  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A483C 000A177C  B0 6D 81 10 */	sth r3, MAX_MIXERLEVEL__9JASDriver@sda21(r13)
/* 800A4840 000A1780  B0 0D 81 12 */	sth r0, MAX_AUTOMIXERLEVEL__9JASDriver@sda21(r13)
/* 800A4844 000A1784  48 00 0B 79 */	bl setDSPMixerLevel__6JASDspFf
/* 800A4848 000A1788  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800A484C 000A178C  7C 08 03 A6 */	mtlr r0
/* 800A4850 000A1790  38 21 00 20 */	addi r1, r1, 0x20
/* 800A4854 000A1794  4E 80 00 20 */	blr 

.global setMixerLevel__9JASDriverFff
setMixerLevel__9JASDriverFff:
/* 800A4858 000A1798  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A485C 000A179C  7C 08 02 A6 */	mflr r0
/* 800A4860 000A17A0  C0 02 8A F0 */	lfs f0, lbl_80516E50@sda21(r2)
/* 800A4864 000A17A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A4868 000A17A8  EC 00 00 72 */	fmuls f0, f0, f1
/* 800A486C 000A17AC  FC 20 10 90 */	fmr f1, f2
/* 800A4870 000A17B0  FC 00 00 1E */	fctiwz f0, f0
/* 800A4874 000A17B4  D8 01 00 08 */	stfd f0, 8(r1)
/* 800A4878 000A17B8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800A487C 000A17BC  B0 0D 81 10 */	sth r0, MAX_MIXERLEVEL__9JASDriver@sda21(r13)
/* 800A4880 000A17C0  48 00 0B 3D */	bl setDSPMixerLevel__6JASDspFf
/* 800A4884 000A17C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A4888 000A17C8  7C 08 03 A6 */	mtlr r0
/* 800A488C 000A17CC  38 21 00 10 */	addi r1, r1, 0x10
/* 800A4890 000A17D0  4E 80 00 20 */	blr 

.global setAutoLevel__9JASDriverFf
setAutoLevel__9JASDriverFf:
/* 800A4894 000A17D4  C0 02 8A F0 */	lfs f0, lbl_80516E50@sda21(r2)
/* 800A4898 000A17D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A489C 000A17DC  EC 00 00 72 */	fmuls f0, f0, f1
/* 800A48A0 000A17E0  FC 00 00 1E */	fctiwz f0, f0
/* 800A48A4 000A17E4  D8 01 00 08 */	stfd f0, 8(r1)
/* 800A48A8 000A17E8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800A48AC 000A17EC  B0 0D 81 12 */	sth r0, MAX_AUTOMIXERLEVEL__9JASDriver@sda21(r13)
/* 800A48B0 000A17F0  38 21 00 10 */	addi r1, r1, 0x10
/* 800A48B4 000A17F4  4E 80 00 20 */	blr 

.global setDSPLevel__9JASDriverFf
setDSPLevel__9JASDriverFf:
/* 800A48B8 000A17F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A48BC 000A17FC  7C 08 02 A6 */	mflr r0
/* 800A48C0 000A1800  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A48C4 000A1804  48 00 0A F9 */	bl setDSPMixerLevel__6JASDspFf
/* 800A48C8 000A1808  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A48CC 000A180C  7C 08 03 A6 */	mtlr r0
/* 800A48D0 000A1810  38 21 00 10 */	addi r1, r1, 0x10
/* 800A48D4 000A1814  4E 80 00 20 */	blr 

.global getChannelLevel__9JASDriverFv
getChannelLevel__9JASDriverFv:
/* 800A48D8 000A1818  A0 6D 81 10 */	lhz r3, MAX_MIXERLEVEL__9JASDriver@sda21(r13)
/* 800A48DC 000A181C  4E 80 00 20 */	blr 

.global getAutoLevel__9JASDriverFv
getAutoLevel__9JASDriverFv:
/* 800A48E0 000A1820  A0 6D 81 12 */	lhz r3, MAX_AUTOMIXERLEVEL__9JASDriver@sda21(r13)
/* 800A48E4 000A1824  4E 80 00 20 */	blr 

.global getAutoLevel_f32__9JASDriverFv
getAutoLevel_f32__9JASDriverFv:
/* 800A48E8 000A1828  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A48EC 000A182C  3C 00 43 30 */	lis r0, 0x4330
/* 800A48F0 000A1830  C8 42 8A F8 */	lfd f2, lbl_80516E58@sda21(r2)
/* 800A48F4 000A1834  A0 6D 81 12 */	lhz r3, MAX_AUTOMIXERLEVEL__9JASDriver@sda21(r13)
/* 800A48F8 000A1838  90 01 00 08 */	stw r0, 8(r1)
/* 800A48FC 000A183C  C0 02 8A F0 */	lfs f0, lbl_80516E50@sda21(r2)
/* 800A4900 000A1840  90 61 00 0C */	stw r3, 0xc(r1)
/* 800A4904 000A1844  C8 21 00 08 */	lfd f1, 8(r1)
/* 800A4908 000A1848  EC 21 10 28 */	fsubs f1, f1, f2
/* 800A490C 000A184C  EC 21 00 24 */	fdivs f1, f1, f0
/* 800A4910 000A1850  38 21 00 10 */	addi r1, r1, 0x10
/* 800A4914 000A1854  4E 80 00 20 */	blr 

.global getDSPLevel_f32__9JASDriverFv
getDSPLevel_f32__9JASDriverFv:
/* 800A4918 000A1858  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A491C 000A185C  7C 08 02 A6 */	mflr r0
/* 800A4920 000A1860  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A4924 000A1864  48 00 0A BD */	bl getDSPMixerLevel__6JASDspFv
/* 800A4928 000A1868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A492C 000A186C  7C 08 03 A6 */	mtlr r0
/* 800A4930 000A1870  38 21 00 10 */	addi r1, r1, 0x10
/* 800A4934 000A1874  4E 80 00 20 */	blr 

.global setOutputMode__9JASDriverFUl
setOutputMode__9JASDriverFUl:
/* 800A4938 000A1878  90 6D 81 14 */	stw r3, JAS_SYSTEM_OUTPUT_MODE__9JASDriver@sda21(r13)
/* 800A493C 000A187C  4E 80 00 20 */	blr 

.global getOutputMode__9JASDriverFv
getOutputMode__9JASDriverFv:
/* 800A4940 000A1880  80 6D 81 14 */	lwz r3, JAS_SYSTEM_OUTPUT_MODE__9JASDriver@sda21(r13)
/* 800A4944 000A1884  4E 80 00 20 */	blr 

.global rejectCallback__9JASDriverFPFPv_lPv
rejectCallback__9JASDriverFPFPv_lPv:
/* 800A4948 000A1888  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800A494C 000A188C  7C 08 02 A6 */	mflr r0
/* 800A4950 000A1890  3C A0 80 4F */	lis r5, sDspSyncCallback__9JASDriver@ha
/* 800A4954 000A1894  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A4958 000A1898  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800A495C 000A189C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800A4960 000A18A0  3B C5 05 68 */	addi r30, r5, sDspSyncCallback__9JASDriver@l
/* 800A4964 000A18A4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800A4968 000A18A8  7C 9D 23 78 */	mr r29, r4
/* 800A496C 000A18AC  7F A5 EB 78 */	mr r5, r29
/* 800A4970 000A18B0  93 81 00 10 */	stw r28, 0x10(r1)
/* 800A4974 000A18B4  7C 7C 1B 78 */	mr r28, r3
/* 800A4978 000A18B8  7F 84 E3 78 */	mr r4, r28
/* 800A497C 000A18BC  38 7E 00 00 */	addi r3, r30, 0
/* 800A4980 000A18C0  48 00 1C 1D */	bl reject__14JASCallbackMgrFPFPv_lPv
/* 800A4984 000A18C4  7C 7F 1B 78 */	mr r31, r3
/* 800A4988 000A18C8  7F 84 E3 78 */	mr r4, r28
/* 800A498C 000A18CC  7F A5 EB 78 */	mr r5, r29
/* 800A4990 000A18D0  38 7E 00 80 */	addi r3, r30, 0x80
/* 800A4994 000A18D4  48 00 1C 09 */	bl reject__14JASCallbackMgrFPFPv_lPv
/* 800A4998 000A18D8  7F E0 1B 78 */	or r0, r31, r3
/* 800A499C 000A18DC  7F 84 E3 78 */	mr r4, r28
/* 800A49A0 000A18E0  7F A5 EB 78 */	mr r5, r29
/* 800A49A4 000A18E4  38 7E 01 00 */	addi r3, r30, 0x100
/* 800A49A8 000A18E8  54 1E 06 3E */	clrlwi r30, r0, 0x18
/* 800A49AC 000A18EC  48 00 1B F1 */	bl reject__14JASCallbackMgrFPFPv_lPv
/* 800A49B0 000A18F0  7F C0 1B 78 */	or r0, r30, r3
/* 800A49B4 000A18F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800A49B8 000A18F8  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 800A49BC 000A18FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800A49C0 000A1900  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800A49C4 000A1904  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800A49C8 000A1908  83 81 00 10 */	lwz r28, 0x10(r1)
/* 800A49CC 000A190C  7C 08 03 A6 */	mtlr r0
/* 800A49D0 000A1910  38 21 00 20 */	addi r1, r1, 0x20
/* 800A49D4 000A1914  4E 80 00 20 */	blr 

.global registerDspSyncCallback__9JASDriverFPFPv_lPv
registerDspSyncCallback__9JASDriverFPFPv_lPv:
/* 800A49D8 000A1918  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A49DC 000A191C  7C 08 02 A6 */	mflr r0
/* 800A49E0 000A1920  3C A0 80 4F */	lis r5, sDspSyncCallback__9JASDriver@ha
/* 800A49E4 000A1924  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A49E8 000A1928  7C 60 1B 78 */	mr r0, r3
/* 800A49EC 000A192C  38 65 05 68 */	addi r3, r5, sDspSyncCallback__9JASDriver@l
/* 800A49F0 000A1930  7C 85 23 78 */	mr r5, r4
/* 800A49F4 000A1934  7C 04 03 78 */	mr r4, r0
/* 800A49F8 000A1938  48 00 1B 09 */	bl regist__14JASCallbackMgrFPFPv_lPv
/* 800A49FC 000A193C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A4A00 000A1940  7C 08 03 A6 */	mtlr r0
/* 800A4A04 000A1944  38 21 00 10 */	addi r1, r1, 0x10
/* 800A4A08 000A1948  4E 80 00 20 */	blr 

.global registerSubFrameCallback__9JASDriverFPFPv_lPv
registerSubFrameCallback__9JASDriverFPFPv_lPv:
/* 800A4A0C 000A194C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A4A10 000A1950  7C 08 02 A6 */	mflr r0
/* 800A4A14 000A1954  3C A0 80 4F */	lis r5, sSubFrameCallback__9JASDriver@ha
/* 800A4A18 000A1958  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A4A1C 000A195C  7C 60 1B 78 */	mr r0, r3
/* 800A4A20 000A1960  38 65 05 E8 */	addi r3, r5, sSubFrameCallback__9JASDriver@l
/* 800A4A24 000A1964  7C 85 23 78 */	mr r5, r4
/* 800A4A28 000A1968  7C 04 03 78 */	mr r4, r0
/* 800A4A2C 000A196C  48 00 1A D5 */	bl regist__14JASCallbackMgrFPFPv_lPv
/* 800A4A30 000A1970  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A4A34 000A1974  7C 08 03 A6 */	mtlr r0
/* 800A4A38 000A1978  38 21 00 10 */	addi r1, r1, 0x10
/* 800A4A3C 000A197C  4E 80 00 20 */	blr 

.global subframeCallback__9JASDriverFv
subframeCallback__9JASDriverFv:
/* 800A4A40 000A1980  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A4A44 000A1984  7C 08 02 A6 */	mflr r0
/* 800A4A48 000A1988  3C 60 80 4F */	lis r3, sSubFrameCallback__9JASDriver@ha
/* 800A4A4C 000A198C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A4A50 000A1990  38 63 05 E8 */	addi r3, r3, sSubFrameCallback__9JASDriver@l
/* 800A4A54 000A1994  48 00 1C 59 */	bl callback__14JASCallbackMgrFv
/* 800A4A58 000A1998  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A4A5C 000A199C  7C 08 03 A6 */	mtlr r0
/* 800A4A60 000A19A0  38 21 00 10 */	addi r1, r1, 0x10
/* 800A4A64 000A19A4  4E 80 00 20 */	blr 

.global DSPSyncCallback__9JASDriverFv
DSPSyncCallback__9JASDriverFv:
/* 800A4A68 000A19A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A4A6C 000A19AC  7C 08 02 A6 */	mflr r0
/* 800A4A70 000A19B0  3C 60 80 4F */	lis r3, sDspSyncCallback__9JASDriver@ha
/* 800A4A74 000A19B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A4A78 000A19B8  38 63 05 68 */	addi r3, r3, sDspSyncCallback__9JASDriver@l
/* 800A4A7C 000A19BC  48 00 1C 31 */	bl callback__14JASCallbackMgrFv
/* 800A4A80 000A19C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A4A84 000A19C4  7C 08 03 A6 */	mtlr r0
/* 800A4A88 000A19C8  38 21 00 10 */	addi r1, r1, 0x10
/* 800A4A8C 000A19CC  4E 80 00 20 */	blr 

.global updateDacCallback__9JASDriverFv
updateDacCallback__9JASDriverFv:
/* 800A4A90 000A19D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A4A94 000A19D4  7C 08 02 A6 */	mflr r0
/* 800A4A98 000A19D8  3C 60 80 4F */	lis r3, sUpdateDacCallback__9JASDriver@ha
/* 800A4A9C 000A19DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A4AA0 000A19E0  38 63 06 68 */	addi r3, r3, sUpdateDacCallback__9JASDriver@l
/* 800A4AA4 000A19E4  48 00 1C 09 */	bl callback__14JASCallbackMgrFv
/* 800A4AA8 000A19E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A4AAC 000A19EC  7C 08 03 A6 */	mtlr r0
/* 800A4AB0 000A19F0  38 21 00 10 */	addi r1, r1, 0x10
/* 800A4AB4 000A19F4  4E 80 00 20 */	blr 

fn local __sinit_JASDriverIF_cpp
/* 800A4AB8 000A19F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A4ABC 000A19FC  7C 08 02 A6 */	mflr r0
/* 800A4AC0 000A1A00  3C 80 80 4F */	lis r4, sDspSyncCallback__9JASDriver@ha
/* 800A4AC4 000A1A04  3C 60 80 0A */	lis r3, __ct__Q214JASCallbackMgr9TCallbackFv@ha
/* 800A4AC8 000A1A08  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A4ACC 000A1A0C  38 A0 00 00 */	li r5, 0
/* 800A4AD0 000A1A10  38 C0 00 08 */	li r6, 8
/* 800A4AD4 000A1A14  38 E0 00 10 */	li r7, 0x10
/* 800A4AD8 000A1A18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800A4ADC 000A1A1C  3B E4 05 68 */	addi r31, r4, sDspSyncCallback__9JASDriver@l
/* 800A4AE0 000A1A20  38 83 4B 38 */	addi r4, r3, __ct__Q214JASCallbackMgr9TCallbackFv@l
/* 800A4AE4 000A1A24  38 7F 00 00 */	addi r3, r31, 0
/* 800A4AE8 000A1A28  48 01 CD 55 */	bl __construct_array
/* 800A4AEC 000A1A2C  3C 80 80 0A */	lis r4, __ct__Q214JASCallbackMgr9TCallbackFv@ha
/* 800A4AF0 000A1A30  38 7F 00 80 */	addi r3, r31, 0x80
/* 800A4AF4 000A1A34  38 84 4B 38 */	addi r4, r4, __ct__Q214JASCallbackMgr9TCallbackFv@l
/* 800A4AF8 000A1A38  38 A0 00 00 */	li r5, 0
/* 800A4AFC 000A1A3C  38 C0 00 08 */	li r6, 8
/* 800A4B00 000A1A40  38 E0 00 10 */	li r7, 0x10
/* 800A4B04 000A1A44  48 01 CD 39 */	bl __construct_array
/* 800A4B08 000A1A48  3C 80 80 0A */	lis r4, __ct__Q214JASCallbackMgr9TCallbackFv@ha
/* 800A4B0C 000A1A4C  38 7F 01 00 */	addi r3, r31, 0x100
/* 800A4B10 000A1A50  38 84 4B 38 */	addi r4, r4, __ct__Q214JASCallbackMgr9TCallbackFv@l
/* 800A4B14 000A1A54  38 A0 00 00 */	li r5, 0
/* 800A4B18 000A1A58  38 C0 00 08 */	li r6, 8
/* 800A4B1C 000A1A5C  38 E0 00 10 */	li r7, 0x10
/* 800A4B20 000A1A60  48 01 CD 1D */	bl __construct_array
/* 800A4B24 000A1A64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A4B28 000A1A68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800A4B2C 000A1A6C  7C 08 03 A6 */	mtlr r0
/* 800A4B30 000A1A70  38 21 00 10 */	addi r1, r1, 0x10
/* 800A4B34 000A1A74  4E 80 00 20 */	blr 
end __sinit_JASDriverIF_cpp

.global __ct__Q214JASCallbackMgr9TCallbackFv
__ct__Q214JASCallbackMgr9TCallbackFv:
/* 800A4B38 000A1A78  38 00 00 00 */	li r0, 0
/* 800A4B3C 000A1A7C  90 03 00 00 */	stw r0, 0(r3)
/* 800A4B40 000A1A80  90 03 00 04 */	stw r0, 4(r3)
/* 800A4B44 000A1A84  4E 80 00 20 */	blr 
