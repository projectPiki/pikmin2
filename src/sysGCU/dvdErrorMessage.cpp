#include "types.h"

#include "DvdStatus.h"

namespace DvdError {
char* gMessage_jpn[] = {
	"よみ込み中です。",
	"エラーが発生しました。\n本体のパワーボタンを押して電源を\nOFFにし、本体のとりあつかい説明書の\n指示にしたがってください。",
	"ディスクをよめませんでした。\nくわしくは、本体のとりあつかい説明書を\nおよみください。",
	"ピクミン２のディスクをセットして\nください。",
	"ディスクカバーが開いています。\nゲームを続ける場合は、ディスクカバーを\n閉めてください。",
	"ピクミン２のディスクをセットして\nください。",
};

#if defined(VERSION_JP)
char* gMessage_eng[] = {
	"Now loading.",
	"An error has occurred.\nTurn the power off and refer to the Nintendo GameCube Instruction Booklet for further instructions.",
	"The Game Disc could not be read.\nPlease read the \nNintendo GameCube Instruction\nBooklet for more information.",
	"Please insert the PIKMIN2 Game Disc.",
	"The Disc Cover is open. \nIf you want to continue the game, please close the Disc ",
	"Please insert the PIKMIN2 Game Disc.",
};
#elif defined(VERSION_PAL)
char* gMessage_eng[] = {
	"Now loading",
	"An error has occurred.Turn the \npower off and refer to the \nNintendo GameCube Instruction \nBooklet for further instructions.",
	"The Game Disc could not be read.\nPlease read the Nintendo \nGameCube Instruction Booklet \nfor more information.",
	"Please insert the PIKMIN 2 \nGame Disc.",
	"The Disc Cover is open. If you \nwant to continue the game, \nplease close the Disc Cover.",
	"Please insert the PIKMIN 2 \nGame Disc.",
};
#else
char* gMessage_eng[] = {
	"Now loading.",
	"An error has occurred.Turn the \npower off and refer to the "
	"\nNintendo GameCube Instruction \nBooklet for further instructions.",
	"The Game Disc could not be read.\nPlease read the Nintendo \nGameCube Instruction Booklet \nfor more information.",
	"Please insert the PIKMIN 2 \nGame Disc.",
	"The Disc Cover is open. If you \nwant to continue the game, \nplease close the Disc Cover.",
	"Please insert the PIKMIN 2 \nGame Disc.",
};
#endif

#if defined(VERSION_JP)
char* gMessage_ger[] = {
	"\366Now loading.",
	"Ein Fehler ist aufgetreten.\nBitte schalten Sie den NINTENDO GAMECUBE aus und lesen Sie die Bedienungsanleitung, um weitere "
	"Informationen zu erhalten.",
	"Diese Game Disc kann nicht gelesen werden.\nBitte lesen Sie die Bedienungsanleitung, um weitere Informationen zu erhalten.",
	"Bitte legen Sie die PIKMIN2 Game Disc ein.",
	"Der Disc-Deckel ist ge\366FFnet.\nBitte den Disc-Deckel schlie\337en,\num mit dem Spiel fortzufahren.",
	"Bitte legen Sie die PIKMIN2 Game Disc ein.",
};
#elif defined(VERSION_PAL)
char* gMessage_ger[] = {
	"Ladevorgang",
	"Ein Fehler ist aufgetreten.\nBitte schalten Sie \nden NINTENDO GAMECUBE aus und \nlesen Sie die Bedienungsanleitung, \num weitere "
	"Informationen zu \nerhalten.",
	"Diese Game Disc kann nicht \ngelesen werden. \nBitte lesen Sie die \nBedienungsanleitung, um weitere \nInformationen zu erhalten.",
	"Bitte legen Sie die PIKMIN 2 \nGame Disc ein.",
	"Der Disc-Deckel ist ge\366ffnet.\nBitte den Disc-Deckel schlie\337en,\num mit dem Spiel fortzufahren.",
	"Bitte legen Sie die PIKMIN 2 \nGame Disc ein.",
};
#else
char* gMessage_ger[] = {
	"\xF6Now loading.",
	"Ein Fehler ist aufgetreten.\nBitte schalten Sie den NINTENDO GAMECUBE "
	"aus und lesen Sie die Bedienungsanleitung, um weitere Informationen "
	"zu erhalten.",
	"Diese Game Disc kann nicht gelesen werden.\nBitte lesen Sie die "
	"Bedienungsanleitung, um weitere Informationen zu erhalten.",
	"Bitte legen Sie die PIKMIN 2 Game Disc ein.",
	"Der Disc-Deckel ist ge\xF6"
	"FFnet.\nBitte den Disc-Deckel schlie\xDF"
	"en,\num mit dem Spiel fortzufahren.",
	"Bitte legen Sie die PIKMIN 2 Game Disc ein.",
};
#endif

#if defined(VERSION_JP)
char* gMessage_fra[] = {
	"Now loading.",
	"Une erreur est survenue.\nEteignez la console et r\351f\351rez-vous au manuel d'instructions NINTENDO GAMECUBE pour de plus amples "
	"informations.",
	"La lecture du disque a \351chou\351.\nVeuillez vous r\351f\351rer au manuel d'instructions NINTENDO GAMECUBE pour de plus amples "
	"informations.",
	"Veuillez ins\351rer le disque PIKMIN2.",
	"Le couvercle est ouvert.\nPour continuer \340 jouer,\nveuillez fermer le couvercle.",
	"Veuillez ins\351rer le disque PIKMIN2.",
};
#elif defined(VERSION_PAL)
char* gMessage_fra[] = {
	"Chargement en cours...",
	"Une erreur est survenue.\nEteignez la console et r\351f\351rez-vous \nau manuel d'instructions \nNINTENDO GAMECUBE pour de plus "
	"\namples informations.",
	"La lecture du disque a \351chou\351.\nVeuillez vous r\351f\351rer au manuel \nd'instructions NINTENDO GAMECUBE \npour de plus amples "
	"informations.",
	"Veuillez ins\351rer le disque PIKMIN 2.",
	"Le couvercle est ouvert.\nPour continuer \340 jouer,\nveuillez fermer le couvercle.",
	"Veuillez ins\351rer le disque PIKMIN 2.",
};
#else
char* gMessage_fra[] = {
	"Now loading.",
	"Une erreur est survenue.\nEteignez la console et r\xE9"
	"f\xE9rez-vous au manuel d'instructions NINTENDO GAMECUBE pour de plus amples informations.",
	"La lecture du disque a \xE9"
	"chou\xE9.\nVeuillez vous r\xE9"
	"f\xE9rer au manuel d'instructions NINTENDO GAMECUBE pour de plus amples informations.",
	"Veuillez ins\xE9rer le disque PIKMIN 2.",
	"Le couvercle est ouvert.\nPour continuer \xE0 jouer,\nveuillez fermer le couvercle.",
	"Veuillez ins\xE9rer le disque PIKMIN 2.",
};
#endif

#if defined(VERSION_JP)
char* gMessage_spa[] = {
	"Now loading.",
	"Se ha producido un error.\nApaga la consola y consulta el manual de instrucciones de NINTENDO GAMECUBE para obtener mas informacion.",
	"No se puede leer el disco.\nConsulta el manual de instrucciones de NINTENDO GAMECUBE para obtener m\341s informaci\323n.",
	"Coloca el disco de PIKMIN2.",
	"La tapa esta abierta. \nSi quieres seguir jugando, debes cerrar la tapa.",
	"Coloca el disco de PIKMIN2.",
};
#elif defined(VERSION_PAL)
char* gMessage_spa[] = {
	"Cargando...",
	"Se ha producido un error.\nApaga la consola y consulta el \nmanual de instrucciones de \nNINTENDO GAMECUBE para obtener \nmas "
	"informacion.",
	"No se puede leer el disco.\nConsulta el manual de instrucciones \nde NINTENDO GAMECUBE para \nobtener m\341s informaci\323n.",
	"Coloca el disco de PIKMIN 2.",
	"La tapa esta abierta. \nSi quieres seguir jugando, \ndebes cerrar la tapa.",
	"Coloca el disco de PIKMIN 2.",
};
#else
char* gMessage_spa[] = {
	"Now loading.",
	"Se ha producido un error.\nApaga la consola y consulta el manual de instrucciones de NINTENDO GAMECUBE para obtener mas informacion.",
	"No se puede leer el disco.\nConsulta el manual de instrucciones de NINTENDO GAMECUBE para obtener m\xE1s informaci\xD3n.",
	"Coloca el disco de PIKMIN 2.",
	"La tapa esta abierta. \nSi quieres seguir jugando, debes cerrar la tapa.",
	"Coloca el disco de PIKMIN 2.",
};
#endif

#if defined(VERSION_JP)
char* gMessage_ita[] = {
	"Now loading.",
	"Si \350 verificato un errore.\nSpegni (OFF) e controlla il manuale d'istruzioni del NINTENDO GAMECUBE per ulteriori indicazioni.",
	"Impossibile leggere il disco di gioco.\nConsulta il manuale d'istruzioni del NINTENDO GAMECUBE per ulteriori indicazioni.",
	"Inserisci il disco di gioco PIKMIN2.",
	"Il coperchio del disco e aperto.\nSe vuoi proseguire nel gioco, chiudi il coperchio del disco.",
	"Inserisci il disco di gioco PIKMIN2.",
};
#elif defined(VERSION_PAL)
char* gMessage_ita[] = {
	"Caricamento in corso...",
	"Si \350 verificato un errore.\nSpegni (OFF) e controlla il manuale \nd'istruzioni del NINTENDO \nGAMECUBE per ulteriori indicazioni.",
	"Impossibile leggere il disco \ndi gioco. Consulta il manuale \nd'istruzioni del NINTENDO \nGAMECUBE per ulteriori indicazioni.",
	"Inserisci il disco di gioco PIKMIN 2.",
	"Il coperchio del disco e aperto.\nSe vuoi proseguire nel gioco, \nchiudi il coperchio del disco.",
	"Inserisci il disco di gioco PIKMIN 2.",
};
#else
char* gMessage_ita[] = {
	"Now loading.",
	"Si \xE8 verificato un errore.\nSpegni (OFF) e controlla il manuale d'istruzioni del NINTENDO GAMECUBE per ulteriori indicazioni.",
	"Impossibile leggere il disco di gioco.\nConsulta il manuale d'istruzioni del NINTENDO GAMECUBE per ulteriori indicazioni.",
	"Inserisci il disco di gioco PIKMIN 2.",
	"Il coperchio del disco e aperto.\nSe vuoi proseguire nel gioco, chiudi il coperchio del disco.",
	"Inserisci il disco di gioco PIKMIN 2.",
};
#endif

} // namespace DvdError
