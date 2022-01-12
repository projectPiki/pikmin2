#include "types.h"

#include "DvdStatus.h"

#ifndef _DVDERRORMESSAGE_DEFINES
#define _DVDERRORMESSAGE_DEFINES
#define DEM_REMOVE_CONST_CHAR(arr) const_cast<char*>(arr)
#define DEM_REMOVE_CONST_U32(arr)  const_cast<u32*>(arr)
#define DEM_U32_TO_CHAR(arr)       reinterpret_cast<char*>(DEM_REMOVE_CONST_U32(arr))
#endif

// Japanese

const extern u32 DEM_JPN_Loading[] = { 0x82E682DD, 0x8D9E82DD, 0x928682C5, 0x82B78142, 0x00000000 };

const extern u32 DEM_JPN_Error[]
    = { 0x83478389, 0x815B82AA, 0x94AD90B6, 0x82B582DC, 0x82B582BD, 0x81420A96, 0x7B91CC82, 0xCC837083, 0x8F815B83, 0x7B835E83,
	    0x9382F089, 0x9F82B582, 0xC493648C, 0xB982F00A, 0x4F464682, 0xC982B581, 0x41967B91, 0xCC82CC82, 0xC682E882, 0xA082C282,
	    0xA982A290, 0xE096BE8F, 0x9182CC0A, 0x8E778EA6, 0x82C982B5, 0x82BD82AA, 0x82C182C4, 0x82AD82BE, 0x82B382A2, 0x81420000 };

const extern u32 DEM_JPN_DiscReadFail[] = { 0x83668342, 0x8358834E, 0x82F082E6, 0x82DF82DC, 0x82B982F1, 0x82C582B5, 0x82BD8142, 0x0A82AD82,
	                                        0xED82B582, 0xAD82CD81, 0x41967B91, 0xCC82CC82, 0xC682E882, 0xA082C282, 0xA982A290, 0xE096BE8F,
	                                        0x9182F00A, 0x82A882E6, 0x82DD82AD, 0x82BE82B3, 0x82A28142, 0x00000000 };

const extern u32 DEM_JPN_DiscAskInsert[] = { 0x8373834E, 0x837E8393, 0x825182CC, 0x83668342, 0x8358834E, 0x82F0835A,
	                                         0x83628367, 0x82B582C4, 0x0A82AD82, 0xBE82B382, 0xA2814200 };

const extern u32 DEM_JPN_DiscCoverOpen[] = {
	0x83668342, 0x8358834E, 0x834A836F, 0x815B82AA, 0x8A4A82A2, 0x82C482A2, 0x82DC82B7, 0x81420A83, 0x51815B83, 0x8082F091, 0xB182AF82,
	0xE98FEA8D, 0x8782CD81, 0x41836683, 0x42835883, 0x4E834A83, 0x6F815B82, 0xF00A95C2, 0x82DF82C4, 0x82AD82BE, 0x82B382A2, 0x81420000,
};

// English

const extern char DEM_ENG_Loading[] = { "Now loading." };

const extern char DEM_ENG_Error[] = { "An error has occurred.Turn the \npower off and refer to the "
	                                  "\nNintendo GameCube Instruction \nBooklet for further instructions." };

const extern char DEM_ENG_DiscReadFail[] = { "The Game Disc could not be read.\nPlease read the Nintendo \nGameCube "
	                                         "Instruction Booklet \nfor more information." };

const extern char DEM_ENG_DiscAskInsert[] = { "Please insert the PIKMIN 2 \nGame Disc." };

const extern char DEM_ENG_DiscCoverOpen[] = { "The Disc Cover is open. If you \nwant to continue the game, \nplease "
	                                          "close the Disc Cover." };

// German

const extern char DEM_GER_Loading[] = { "\xF6Now loading." };

const extern char DEM_GER_Error[] = { "Ein Fehler ist aufgetreten.\nBitte schalten Sie den NINTENDO GAMECUBE "
	                                  "aus und lesen Sie die Bedienungsanleitung, um weitere Informationen "
	                                  "zu erhalten." };

const extern char DEM_GER_DiscReadFail[] = { "Diese Game Disc kann nicht gelesen werden.\nBitte lesen Sie die "
	                                         "Bedienungsanleitung, um weitere Informationen zu erhalten." };

const extern char DEM_GER_DiscAskInsert[] = { "Bitte legen Sie die PIKMIN 2 Game Disc ein." };

/*
 * Der Disc-Deckel ist ge�FFnet.
 * Bitte den Disc-Deckel schlie�en,
 * um mit dem Spiel fortzufahren.
 */
const extern u32 DEM_GER_DiscCoverOpen[]
    = { 0x44657220, 0x44697363, 0x2D446563, 0x6B656C20, 0x69737420, 0x6765F646, 0x466E6574, 0x2E0A4269,
	    0x74746520, 0x64656E20, 0x44697363, 0x2D446563, 0x6B656C20, 0x7363686C, 0x6965DF65, 0x6E2C0A75,
	    0x6D206D69, 0x74206465, 0x6D205370, 0x69656C20, 0x666F7274, 0x7A756661, 0x6872656E, 0x2E000000 };

// French

const extern u32 DEM_FRA_Error[]
    = { 0x556E6520, 0x65727265, 0x75722065, 0x73742073, 0x75727665, 0x6E75652E, 0x0A457465, 0x69676E65, 0x7A206C61,
	    0x20636F6E, 0x736F6C65, 0x20657420, 0x72E966E9, 0x72657A2D, 0x766F7573, 0x20617520, 0x6D616E75, 0x656C2064,
	    0x27696E73, 0x74727563, 0x74696F6E, 0x73204E49, 0x4E54454E, 0x444F2047, 0x414D4543, 0x55424520, 0x706F7572,
	    0x20646520, 0x706C7573, 0x20616D70, 0x6C657320, 0x696E666F, 0x726D6174, 0x696F6E73, 0x2E000000 };

const extern u32 DEM_FRA_DiscReadFail[] = { 0x4C61206C, 0x65637475, 0x72652064, 0x75206469, 0x73717565, 0x206120E9, 0x63686F75,
	                                        0xE92E0A56, 0x6575696C, 0x6C657A20, 0x766F7573, 0x2072E966, 0xE9726572, 0x20617520,
	                                        0x6D616E75, 0x656C2064, 0x27696E73, 0x74727563, 0x74696F6E, 0x73204E49, 0x4E54454E,
	                                        0x444F2047, 0x414D4543, 0x55424520, 0x706F7572, 0x20646520, 0x706C7573, 0x20616D70,
	                                        0x6C657320, 0x696E666F, 0x726D6174, 0x696F6E73, 0x2E000000 };

const extern u32 DEM_FRA_DiscAskInsert[]
    = { 0x56657569, 0x6C6C657A, 0x20696E73, 0xE9726572, 0x206C6520, 0x64697371, 0x75652050, 0x494B4D49, 0x4E20322E, 0x00000000 };

const extern u32 DEM_FRA_DiscCoverOpen[]
    = { 0x4C652063, 0x6F757665, 0x72636C65, 0x20657374, 0x206F7576, 0x6572742E, 0x0A506F75, 0x7220636F, 0x6E74696E, 0x75657220,
	    0xE0206A6F, 0x7565722C, 0x0A766575, 0x696C6C65, 0x7A206665, 0x726D6572, 0x206C6520, 0x636F7576, 0x6572636C, 0x652E0000 };

// Spanish

const extern char DEM_SPA_Error[] = { "Se ha producido un error.\nApaga la consola y consulta el manual de "
	                                  "instrucciones de NINTENDO GAMECUBE para obtener mas informacion." };

const extern u32 DEM_SPA_DiscReadFail[]
    = { 0x4E6F2073, 0x65207075, 0x65646520, 0x6C656572, 0x20656C20, 0x64697363, 0x6F2E0A43, 0x6F6E7375, 0x6C746120, 0x656C206D,
	    0x616E7561, 0x6C206465, 0x20696E73, 0x74727563, 0x63696F6E, 0x65732064, 0x65204E49, 0x4E54454E, 0x444F2047, 0x414D4543,
	    0x55424520, 0x70617261, 0x206F6274, 0x656E6572, 0x206DE173, 0x20696E66, 0x6F726D61, 0x6369D36E, 0x2E000000 };

const extern char DEM_SPA_DiscAskInsert[] = { "Coloca el disco de PIKMIN 2." };

const extern char DEM_SPA_DiscCoverOpen[] = { "La tapa esta abierta. \nSi quieres seguir jugando, debes cerrar la tapa." };

// Italian

const extern u32 DEM_ITA_Error[]
    = { 0x536920E8, 0x20766572, 0x69666963, 0x61746F20, 0x756E2065, 0x72726F72, 0x652E0A53, 0x7065676E, 0x6920284F, 0x46462920, 0x6520636F,
	    0x6E74726F, 0x6C6C6120, 0x696C206D, 0x616E7561, 0x6C652064, 0x27697374, 0x72757A69, 0x6F6E6920, 0x64656C20, 0x4E494E54, 0x454E444F,
	    0x2047414D, 0x45435542, 0x45207065, 0x7220756C, 0x74657269, 0x6F726920, 0x696E6469, 0x63617A69, 0x6F6E692E, 0x00000000 };

const extern char DEM_ITA_DiscReadFail[] = { "Impossibile leggere il disco di gioco.\nConsulta il manuale "
	                                         "d'istruzioni del NINTENDO GAMECUBE per ulteriori indicazioni." };

const extern char DEM_ITA_DiscAskInsert[] = { "Inserisci il disco di gioco PIKMIN 2." };

const extern char DEM_ITA_DiscCoverOpen[] = { "Il coperchio del disco e aperto.\nSe vuoi proseguire nel gioco, "
	                                          "chiudi il coperchio del disco." };

namespace DvdError {
char* gMessage_jpn[]
    = { DEM_U32_TO_CHAR(DEM_JPN_Loading),       DEM_U32_TO_CHAR(DEM_JPN_Error),         DEM_U32_TO_CHAR(DEM_JPN_DiscReadFail),
	    DEM_U32_TO_CHAR(DEM_JPN_DiscAskInsert), DEM_U32_TO_CHAR(DEM_JPN_DiscCoverOpen), DEM_U32_TO_CHAR(DEM_JPN_DiscAskInsert) };

char* gMessage_eng[] = { DEM_REMOVE_CONST_CHAR(DEM_ENG_Loading),       DEM_REMOVE_CONST_CHAR(DEM_ENG_Error),
	                     DEM_REMOVE_CONST_CHAR(DEM_ENG_DiscReadFail),  DEM_REMOVE_CONST_CHAR(DEM_ENG_DiscAskInsert),
	                     DEM_REMOVE_CONST_CHAR(DEM_ENG_DiscCoverOpen), DEM_REMOVE_CONST_CHAR(DEM_ENG_DiscAskInsert) };

char* gMessage_ger[] = { DEM_REMOVE_CONST_CHAR(DEM_GER_Loading),      DEM_REMOVE_CONST_CHAR(DEM_GER_Error),
	                     DEM_REMOVE_CONST_CHAR(DEM_GER_DiscReadFail), DEM_REMOVE_CONST_CHAR(DEM_GER_DiscAskInsert),
	                     DEM_U32_TO_CHAR(DEM_GER_DiscCoverOpen),      DEM_REMOVE_CONST_CHAR(DEM_GER_DiscAskInsert) };

char* gMessage_fra[]
    = { DEM_REMOVE_CONST_CHAR(DEM_ENG_Loading), DEM_U32_TO_CHAR(DEM_FRA_Error),         DEM_U32_TO_CHAR(DEM_FRA_DiscReadFail),
	    DEM_U32_TO_CHAR(DEM_FRA_DiscAskInsert), DEM_U32_TO_CHAR(DEM_FRA_DiscCoverOpen), DEM_U32_TO_CHAR(DEM_FRA_DiscAskInsert) };

char* gMessage_spa[] = { DEM_REMOVE_CONST_CHAR(DEM_ENG_Loading),       DEM_REMOVE_CONST_CHAR(DEM_SPA_Error),
	                     DEM_U32_TO_CHAR(DEM_SPA_DiscReadFail),        DEM_REMOVE_CONST_CHAR(DEM_SPA_DiscAskInsert),
	                     DEM_REMOVE_CONST_CHAR(DEM_SPA_DiscCoverOpen), DEM_REMOVE_CONST_CHAR(DEM_SPA_DiscAskInsert) };

char* gMessage_ita[] = { DEM_REMOVE_CONST_CHAR(DEM_ENG_Loading),       DEM_U32_TO_CHAR(DEM_ITA_Error),
	                     DEM_REMOVE_CONST_CHAR(DEM_ITA_DiscReadFail),  DEM_REMOVE_CONST_CHAR(DEM_ITA_DiscAskInsert),
	                     DEM_REMOVE_CONST_CHAR(DEM_ITA_DiscCoverOpen), DEM_REMOVE_CONST_CHAR(DEM_ITA_DiscAskInsert) };

} // namespace DvdError
