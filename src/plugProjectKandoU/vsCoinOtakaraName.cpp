extern const char lbl_80483EE8[12];
extern const char lbl_80483EF4[16];
extern const char lbl_80483F04[16];
extern const char lbl_80483F14[20];
// replace the externs with the strings themselves once data's split
struct VsOtakaraName {
	static const char* cCoin;
	static const char* cBedamaBlue;
	static const char* cBedamaRed;
	static const char* cBedamaYellow;
	static float cBedamaYellowDepth;
};
const char* VsOtakaraName::cCoin = lbl_80483EE8;
const char* VsOtakaraName::cBedamaBlue = lbl_80483EF4;
const char* VsOtakaraName::cBedamaRed = lbl_80483F04;
const char* VsOtakaraName::cBedamaYellow = lbl_80483F14;
float VsOtakaraName::cBedamaYellowDepth = 20.0f;
