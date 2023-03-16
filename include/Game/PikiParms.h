#ifndef _GAME_PIKIPARMS_H
#define _GAME_PIKIPARMS_H

#include "Game/FakePiki.h"

namespace Game {
struct PikiParms : public FakePikiParms {
	struct Parms : public Parameters {
		Parms()
		    : Parameters(nullptr, "Piki::Parms")
		    , mP000(this, 'p000', "歩く速度", 84.0f, 0.0f, 500.0f)                     // 'walking speed'
		    , mRunningSpeed(this, 'p001', "走る速度", 120.0f, 0.0f, 500.0f)            // 'running speed'
		    , mP054(this, 'p054', "花ピキスピード", 170.0f, 0.0f, 500.0f)              // 'flower pikmin speed'
		    , mP065(this, 'p065', "つぼみスピード", 140.0f, 0.0f, 500.0f)              // 'bud speed'
		    , mP038(this, 'p038', "ピキ表\示スケール", 1.0f, 0.1f, 10.0f)              // 'piki display scale'
		    , mP003(this, 'p003', "標準ライフ", 100.0f, 0.0f, 1000.0f)                 // 'normal life'
		    , mP010(this, 'p010', "のっぽライフ", 150.0f, 0.0f, 1000.0f)               // 'tall life'
		    , mP011(this, 'p011', "でぶライフ", 200.0f, 0.0f, 1000.0f)                 // 'fat life'
		    , mP004(this, 'p004', "青 攻撃力", 10.f, 0.0f, 1000.0f)                    // 'blue attack power'
		    , mP012(this, 'p012', "赤 攻撃力", 15.0f, 0.0f, 1000.0f)                   // 'red attack power'
		    , mP013(this, 'p013', "黄 攻撃力", 10.0f, 0.0f, 1000.0f)                   // 'yellow attack power'
		    , _440(this, 'P003', "黒　攻撃力", 10.0f, 1.0f, 30.0f)                     // 'black attack power'
		    , _468(this, 'P004', "白　攻撃力", 1.0f, 1.0f, 30.0f)                      // 'white attack power'
		    , mP005(this, 'p005', "つぼみに必要なエネルギー数", 1, 1, 100)             // 'number of energy required for bud'
		    , mP006(this, 'p006', "花に必要なエネルギー数", 2, 1, 100)                 // 'number of energy required for flower'
		    , mP007(this, 'p007', "ノーマルピキのスケール", 0.8f, 0.0f, 2.0f)          // 'normal piki scale'
		    , mP008(this, 'p008', "のっぽピキのスケール", 1.5f, 0.0f, 2.0f)            // 'tall piki scale'
		    , mP009(this, 'p009', "ふとっちょピキのスケール", 1.2f, 0.0f, 2.0f)        // 'fatty piki scale'
		    , mP014(this, 'p014', "つぶれ総時間", 5.0f, 0.0f, 10.0f)                   // 'total crush time'
		    , mP015(this, 'p015', "ぺったんこ時間", 3.0f, 0.0f, 10.0f)                 // 'flat time'
		    , mP016(this, 'p016', "波時間", 1.0f, 0.0f, 10.0f)                         // 'wave time'
		    , mP037(this, 'p037', "Wave Attac 攻撃範囲", 40.0f, 0.0f, 200.0f)          // 'wave attac range'
		    , mP017(this, 'p017', "ASIBUMI 開始スピード", 5.0f, 0.0f, 500.0f)          // 'ASIBUMI start speed' (stepping?)
		    , mP018(this, 'p018', "WALK 開始スピード", 35.0f, 0.0f, 500.0f)            // 'WALK start speed'
		    , mP019(this, 'p019', "RUN 開始スピード", 70.0f, 0.0f, 500.0f)             // 'RUN start speed'
		    , mP020(this, 'p020', "ESCAPE 開始スピード", 160.0f, 0.0f, 500.0f)         // 'ESCAPE start speed'
		    , mP021(this, 'p021', "WALK 再生フレーム数(min)", 30.0f, 0.0f, 300.0f)     // 'WALK playback frame count (min)'
		    , mP022(this, 'p022', "WALK 再生フレーム数(max)", 60.0f, 0.0f, 300.0f)     // 'WALK playback frame count (max)'
		    , mP023(this, 'p023', "RUN 再生フレーム数(min)", 30.0f, 0.0f, 300.0f)      // 'RUN playback frame count (min)'
		    , mP024(this, 'p024', "RUN 再生フレーム数(max)", 60.0f, 0.0f, 300.0f)      // 'RUN playback frame count (max)'
		    , mP025(this, 'p025', "ESCAPE 再生フレーム数(min)", 30.0f, 0.0f, 300.0f)   // 'ESCAPE playback frame count (min)'
		    , mP026(this, 'p026', "ESCAPE 再生フレーム数(max)", 60.0f, 0.0f, 300.0f)   // 'ESCAPE playback frame count (max)'
		    , mP027(this, 'p027', "当たりサイズ(min)", 6.0f, 0.0f, 100.0f)             // 'hit size (min)'
		    , mP034(this, 'p034', "当たりサイズ(max)", 10.0f, 0.0f, 100.0f)            // 'hit size (max)'
		    , mP028(this, 'p028', "重さの逆数", 100.0f, 0.0f, 2000.0f)                 // 'inverse of weight'
		    , mP039(this, 'p039', "地面当たりサイズ", 8.0f, 0.0f, 100.0f)              // 'ground size'
		    , mP029(this, 'p029', "white 距離", 600.0f, 0.0f, 10000.0f)                // 'white distance'
		    , mP030(this, 'p030', "gray 距離", 1000.0f, 0.0f, 10000.0f)                // 'gray distance'
		    , mP031(this, 'p031', "迷子時間", 10.0f, 0.0f, 1000.0f)                    // 'lost child time'
		    , mP032(this, 'p032', "white 距離(Free)", 200.0f, 0.0f, 10000.0f)          // 'white distance (Free)'
		    , mP033(this, 'p033', "gray 距離(Free)", 800.0f, 0.0f, 10000.0f)           // 'gray distance (Free)'
		    , mP035(this, 'p035', "壁を押し始める時間(Dynamic)", 0.6f, 0.0f, 10.0f)    // 'time to start pushing against the wall (Dynamic)'
		    , mP036(this, 'p036', "壁を押し始める時間(Static)", 0.6f, 0.0f, 10.0f)     // 'time to start pushing against the wall (Static)'
		    , mP040(this, 'p040', "フリーになるまでの時間", 15.0f, 1.0f, 1080.0f)      // 'time to free'
		    , mP041(this, 'p041', "敵のサーチエリア", 60.0f, 1.0f, 1000.0f)            // 'enemy search area'
		    , mP042(this, 'p042', "Pelletのサーチエリア", 30.0f, 1.0f, 1000.0f)        // 'pellet search area'
		    , _9B8(this, 'P010', "農耕岩のサーチエリア", 30.0f, 1.0f, 1000.0f)         // 'agricultural rock search area' (lmao)
		    , _9E0(this, 'P011', "農耕岩のサーチエリア", 40.0f, 1.0f, 1000.0f)         // 'agricultural rock search area' (mistake?)
		    , _A08(this, 'P012', "橋のサーチエリア", 100.0f, 1.0f, 1000.0f)            // 'bridge search area'
		    , _A30(this, 'P013', "壊す岩のサーチエリア", 30.0f, 1.0f, 1000.0f)         // 'breaking rock search area'
		    , _A58(this, 'P014', "掘り出し物サーチエリア", 30.0f, 1.0f, 1000.0f)       // 'bargain search area' (lmao??)
		    , _A80(this, 'P015', "農耕植物のサーチエリア", 30.0f, 1.0f, 1000.0f)       // 'agricultural plant search area'
		    , mP043(this, 'p043', "はじかれて起きるまでの最長時間", 0.7f, 0.0f, 10.0f) // 'max time to wake up after being repelled'
		    , mP074(this, 'p074', "はじかれて起きるまでの最小時間", 0.7f, 0.0f, 10.0f) // 'min time to wake up after being repelled'
		    , mP044(this, 'p044', "leaf->bud    の時間（秒）", 10.0f, 1.0f, 1000.0f)   // 'leaf->bud time (seconds)'
		    , mP045(this, 'p045', "bud->flower  の時間（秒）", 10.0f, 1.0f, 1000.0f)   // 'bud->flower time (seconds)'
		    , mP046(this, 'p046', "flower->seed の時間（秒）", 10.0f, 1.0f, 1000.0f)   // 'flower->seed time (seconds)'
		    , mP047(this, 'p047', "seed->leaf   の時間（秒）", 10.0f, 1.0f, 1000.0f)   // 'seed->leaf time (seconds)'
		    , mP048(this, 'p048', "花ピキ重力率", 0.01f, 0.0f, 1.0f)                   // 'flower piki gravity rate'
		    , mP049(this, 'p049', "taneupTime（秒）", 1.0f, 0.0f, 300.0f)              // 'taneupTime (seconds)' (seed?)
		    , mP050(this, 'p050', "hatugaTime（秒）", 1.0f, 0.0f, 300.0f)              // 'hatugaTime (seconds)' (bud?)
		    , mP051(this, 'p051', "growupTime（秒）", 4.0f, 0.0f, 300.0f)              // 'growupTime (seconds)'
		    , mP052(this, 'p052', "kareTime（秒）", 4.0f, 0.0f, 300.0f)                // 'kareTime (seconds)' (he? boyfriend?)
		    , mP053(this, 'p053', "rebirthTime（秒）", 1.0f, 0.0f, 300.0f)             // 'rebirthTime (seconds)'
		    , mP055(this, 'p055', "火に包まれて死ぬまでの時間", 3.0f, 0.0f, 30.0f)     // 'time until death in fire'
		    , mP056(this, 'p056', "花ピキが種として再生する確率", 0.8f, 0.0f, 1.0f)    // 'probability of flower piki regenerating as seeds'
		    , mP057(this, 'p057', "爆発までの時間", 2.0f, 0.0f, 60.0f)                 // 'time to detonation/explosion'
		    , mP058(this, 'p058', "爆弾効果範囲", 50.0f, 0.0f, 1000.0f)                // 'bomb area of effect'
		    , mP059(this, 'p059', "爆弾ダメージ量 水門", 200.0f, 0.0f, 1000.0f)        // 'bomb damage floodgate'
		    , mP075(this, 'p075', "爆弾ダメージ Orima", 10.0f, 0.0f, 1000.0f)          // 'bomb damage olimar'
		    , mP076(this, 'p076', "爆弾ダメージ Teki", 120.0f, 0.0f, 1000.0f)          // 'bomb damage teki/enemy'
		    , mP077(this, 'p077', "爆弾ダメージ Piki", 765.0f, 0.0f, 1000.0f)          // 'bomb damage piki'
		    , mP060(this, 'p060', "日没生き残り範囲", 200.0f, 0.0f, 5000.0f)           // 'sunset survival range'
		    , mP061(this, 'p061', "隊列起動距離", 250.0f, 0.0f, 5000.0f)               // 'platform launch distance'
		    , mP062(this, 'p062', "おぼれフレーム数", 30, 0, 300)                      // 'number of drowning frames'
		    , mP063(this, 'p063', "おぼれフレーム数（ばらつき）", 10, 0, 300)          // 'number of drowning frames (variation)'
		    , mP064(this, 'p064', "壁押しあきらめ時間", 5.0f, 1.0f, 120.0f)            // 'time to give up pushing against the wall'
		    , mP066(this, 'p066', "BOMB サーチ距離", 300.0f, 0.0f, 1000.0f)            // 'BOMB search distance'
		    , mP067(this, 'p067', "BOMB throw Min", 110.0f, 0.0f, 1000.0f)
		    , mP068(this, 'p068', "BOMB throw Max", 160.0f, 0.0f, 1000.0f)
		    , mP069(this, 'p069', "BOMB 置き逃げ時間", 1.5f, 0.0f, 60.0f)            // 'BOMB leave time'
		    , mP070(this, 'p070', "BOMB 投げスピード", 150.0f, 0.0f, 1000.0f)        // 'BOMB throw speed'
		    , mP071(this, 'p071', "BOMB 警告範囲", 300.0f, 0.0f, 1000.0f)            // 'BOMB warning range'
		    , mP072(this, 'p072', "BOMB 間、タイム", 0.65f, 0.0f, 10.0f)             // 'BOMB, between time'
		    , mP073(this, 'p073', "BOMB セット距離", 50.0f, 0.0f, 1000.0f)           // 'BOMB set distance'
		    , _FD0(this, 'P000', "新色のスケール", 1.2f, 0.5f, 2.0f)                 // 'new color scale'
		    , _FF8(this, 'P001', "白スピード倍率", 2.0f, 1.0f, 3.0f)                 // 'white speed multiplier'
		    , _1020(this, 'P002', "黒スピード倍率", 0.6f, 0.1f, 3.0f)                // 'black speed multiplier'
		    , _1048(this, 'P005', "黒　運搬能\力", 0.5f, 0.0f, 5.0f)                 // 'black carrying capacity'
		    , _1070(this, 'P006', "白　運搬能\力", 1.5f, 0.0f, 5.0f)                 // 'white carrying capacity'
		    , _1098(this, 'P020', "つぼみ|運搬ボーナス", 0.5f, 0.0f, 2.0f)           // 'bud | carrying bonus'
		    , _10C0(this, 'P021', "はな|運搬ボーナス", 1.0f, 0.0f, 2.0f)             // 'flower | carrying bonus'
		    , _10E8(this, 'P018', "運搬 MAX FACTOR", 0.7f, 0.0f, 2.0f)               // 'carrying MAX FACTOR'
		    , _1110(this, 'P019', "運搬 MAX FACTOR", 0.35f, 0.0f, 2.0f)              // 'carrying MAX FACTOR' (mistake?)
		    , _1138(this, 'P007', "ドーピング持続時間", 30.0f, 0.0f, 200.0f)         // 'doping duration'
		    , _1160(this, 'P008', "ドーピングピキ 攻撃", 25.0f, 0.0f, 100.0f)        // 'doping piki attack'
		    , _1188(this, 'P009', "ドーピングピキ スピード", 190.0f, 0.0f, 220.0f)   // 'doping piki speed'
		    , _11B0(this, 'P016', "クラゲ消化時間", 16.0f, 0.0f, 120.0f)             // 'jellyfish digestion time'
		    , _11D8(this, 'P017', "ドシン半径", 60.0f, 0.0f, 1000.0f)                // 'doshin radius' (pound radius?)
		    , _1200(this, 'P022', "黒ヒップアタックダメージ", 100.0f, 0.0f, 1000.0f) // 'black hip attack damage'
		{
		}

		// _27C-_288	= Parameters
		Parm<f32> mP000;         // _288
		Parm<f32> mRunningSpeed; // _2B0, p001
		Parm<f32> mP054;         // _2D8
		Parm<f32> mP065;         // _300
		Parm<f32> mP038;         // _328
		Parm<f32> mP003;         // _350
		Parm<f32> mP010;         // _378
		Parm<f32> mP011;         // _3A0
		Parm<f32> mP004;         // _3C8
		Parm<f32> mP012;         // _3F0
		Parm<f32> mP013;         // _418
		Parm<f32> _440;          // _440, P003
		Parm<f32> _468;          // _468, P004
		Parm<int> mP005;         // _490
		Parm<int> mP006;         // _4B8
		Parm<f32> mP007;         // _4E0
		Parm<f32> mP008;         // _508
		Parm<f32> mP009;         // _530
		Parm<f32> mP014;         // _558
		Parm<f32> mP015;         // _580
		Parm<f32> mP016;         // _5A8
		Parm<f32> mP037;         // _5D0
		Parm<f32> mP017;         // _5F8
		Parm<f32> mP018;         // _620
		Parm<f32> mP019;         // _648
		Parm<f32> mP020;         // _670
		Parm<f32> mP021;         // _698
		Parm<f32> mP022;         // _6C0
		Parm<f32> mP023;         // _6E8
		Parm<f32> mP024;         // _710
		Parm<f32> mP025;         // _738
		Parm<f32> mP026;         // _760
		Parm<f32> mP027;         // _788
		Parm<f32> mP034;         // _7B0
		Parm<f32> mP028;         // _7D8
		Parm<f32> mP039;         // _800
		Parm<f32> mP029;         // _828
		Parm<f32> mP030;         // _850
		Parm<f32> mP031;         // _878
		Parm<f32> mP032;         // _8A0
		Parm<f32> mP033;         // _8C8
		Parm<f32> mP035;         // _8F0
		Parm<f32> mP036;         // _918
		Parm<f32> mP040;         // _940
		Parm<f32> mP041;         // _968
		Parm<f32> mP042;         // _990
		Parm<f32> _9B8;          // _9B8, P010
		Parm<f32> _9E0;          // _9E0, P011
		Parm<f32> _A08;          // _A08, P012
		Parm<f32> _A30;          // _A30, P013
		Parm<f32> _A58;          // _A58, P014
		Parm<f32> _A80;          // _A80, P015
		Parm<f32> mP043;         // _AA8
		Parm<f32> mP074;         // _AD0
		Parm<f32> mP044;         // _AF8
		Parm<f32> mP045;         // _B20
		Parm<f32> mP046;         // _B48
		Parm<f32> mP047;         // _B70
		Parm<f32> mP048;         // _B98
		Parm<f32> mP049;         // _BC0
		Parm<f32> mP050;         // _BE8
		Parm<f32> mP051;         // _C10
		Parm<f32> mP052;         // _C38
		Parm<f32> mP053;         // _C60
		Parm<f32> mP055;         // _C88
		Parm<f32> mP056;         // _CB0
		Parm<f32> mP057;         // _CD8
		Parm<f32> mP058;         // _D00
		Parm<f32> mP059;         // _D28
		Parm<f32> mP075;         // _D50
		Parm<f32> mP076;         // _D78
		Parm<f32> mP077;         // _DA0
		Parm<f32> mP060;         // _DC8
		Parm<f32> mP061;         // _DF0
		Parm<int> mP062;         // _E18
		Parm<int> mP063;         // _E40
		Parm<f32> mP064;         // _E68
		Parm<f32> mP066;         // _E90
		Parm<f32> mP067;         // _EB8
		Parm<f32> mP068;         // _EE0
		Parm<f32> mP069;         // _F08
		Parm<f32> mP070;         // _F30
		Parm<f32> mP071;         // _F58
		Parm<f32> mP072;         // _F80
		Parm<f32> mP073;         // _FA8
		Parm<f32> _FD0;          // _FD0, P000
		Parm<f32> _FF8;          // _FF8, P001
		Parm<f32> _1020;         // _1020, P002
		Parm<f32> _1048;         // _1048, P005
		Parm<f32> _1070;         // _1070, P006
		Parm<f32> _1098;         // _1098, P020
		Parm<f32> _10C0;         // _10C0, P021
		Parm<f32> _10E8;         // _10E8, P018 "(transport) MAX FACTOR"
		Parm<f32> _1110;         // _1110, P019 "(transport) MAX FACTOR"
		Parm<f32> _1138;         // _1138, P007
		Parm<f32> _1160;         // _1160, P008
		Parm<f32> _1188;         // _1188, P009
		Parm<f32> _11B0;         // _11B0, P016
		Parm<f32> _11D8;         // _11D8, P017
		Parm<f32> _1200;         // _1200, P022
		                         // _1228 = IParameters ptr
	};

	PikiParms()
	    : mPikiParms()
	{
		mCreatureProps.mProps.mFriction.mValue      = 0.1f;
		mCreatureProps.mProps.mFaceDirAdjust.mValue = 0.8f;
		mCreatureProps.mProps.mAccel.mValue         = 0.14f;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		CreatureParms::read(stream);
		mFakePikiParms.read(stream);
		mPikiParms.read(stream);
	}

	// _00-_D8  = CreatureParms
	// _D8 		  = VTBL
	// _DC-_27C	= FakePikiParms
	Parms mPikiParms; // _27C
};

} // namespace Game

#endif
