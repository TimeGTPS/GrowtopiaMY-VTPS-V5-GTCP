#pragma once
#include "stdafx.h"
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <fstream>
#include <iostream>
#include <locale>
#include <string>
#include <thread>
#include <time.h>
#include <vector>
#include <experimental/filesystem>
#include "json.hpp"
#include "Server_core.h"
#include "enet/enet.h"
using namespace std;
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
using json = nlohmann::json;
int maxItems = 10388;
char _getch() {
	return getchar();
}
#define cloth0 cloth_hair
#define cloth1 cloth_shirt
#define cloth2 cloth_pants
#define cloth3 cloth_feet
#define cloth4 cloth_face
#define cloth5 cloth_hand
#define cloth6 cloth_back
#define cloth7 cloth_mask
#define cloth8 cloth_necklace
#define cloth9 cloth_ances
#define STRINT(x, y) (*(int*)(&(x)[(y)]))
#define STR16(x, y) (*(uint16_t*)(&(x)[(y)]))
vector<string> guildmem;
vector<string> guildelder;
vector<string> guildco;
#ifdef _WIN32
#include <windows.h>
typedef __int8 __int8_t;
typedef __int16 __int16_t;
#elif __APPLE__ || __linux__
typedef unsigned int DWORD;
#endif
typedef unsigned char BYTE;

struct InventoryItem
{
	__int16_t itemID;
	__int16_t itemCount;
};

struct PlayerInventory
{
	vector<InventoryItem> items;
};

struct PlayerInfo
{
	/*notvend*/
	string NickPrefix = "";
	// achievements
	int ThisLandIsMyLand = 0;
	int ban = 0;
	//rift cape
	bool capeR = false;
	bool capeG = false;
	bool capeB = false;
	bool collarR = false;
	bool collarB = false;
	bool collarG = false;
	bool timedilation = false;
	bool rifteffect = false;
	bool collarcape = false;
	bool checkbox_timedilation = false;
	bool checkbox_capecollar = false;
	bool checkbox_closedcape = false;
	bool checkbox_opencapemovement = false;
	bool checkbox_auraonoff = false;
	bool checkbox_portalaura = false;
	bool checkbox_starfieldaura = false;
	bool checkbox_electricalaura = false;
	bool udahsettingorno = false;
	bool capeR2 = false;
	bool capeG2 = false;
	bool collarR2 = false;
	bool collarB2 = false;
	bool collarG2 = false;
	bool capeB2 = false;
	//end code//
	/*Fishing*/
	bool Fishing = false;
	bool TriggerFish = false;
	int FishPosX = 0;
	int FishPosY = 0;
	string LastBait = "None";
	/*OnSuperMain*/
	string zf = "";
	/*ItemSuckers*/
	int magplantitemid = 0;
	int magplantx = 0;
	int magplanty = 0;
	string suckername = "";
	int suckerid = 0;
	/*PlayerLogin*/
	string email = "";
	bool HasLogged = false;
	bool isBot = true;
	/*Buffs*/
	bool GemBuffDrop = false;
	/*Consummables*/
	bool blueBerry = false;
	int usedBerry = 0;
	int lastBerry = 0;
	bool LuckyClover = false;
	int usedClover = 0;
	int lastClover = 0;
	bool SpikeJuice = false;
	int usedSpike = 0;
	int lastSpike = 0;
	bool PunchPotion = false;
	int usedPunchPotion = 0;
	int lastTradeItem;
	int LastTradeItem1;
	string currentTradeItems = "";
	int lastTradeNetID = 0;
	int lastTradeAcceptCount;
	int isDoTrade;
	int lastCT1;
	int lastCT2;
	int lastCT3;
	int lastCT4;
	int isTradingWithUser;
	string lastvendbuycount = "";
	int lastTD1;
	int lastTD2;
	int lastTD3;
	int lastTD4;
	bool isDoTheTrade = false;
	bool istrading = false;
	int item1 = 0;
	int item1count = 0;
	int item2 = 0;
	int item2count = 0;
	int item3 = 0;
	int item3count = 0;
	int item4 = 0;
	int item4count = 0;
	bool accepted = false;
	string tradingme = "";
	bool dotrade = false;
	bool tradeSomeone = false;
	int dyecolor = 0;
	int eyecolor = 0;
	int eyecolor2 = 0;
	string trdStarter = "";
	int lastPunchPotion = 0;
	bool PlacePotion = false;
	int usedPlacePotion = 0;
	int lastPlacePotion = 0;
	/*PlayerName*/
	bool isDr = false;
	/*Misc*/
	bool passedname = false;
	bool passedheight = false;
	bool passedwidth = false;
	bool passedbackground = false;
	bool passedforeground = false;
	bool passedbedrock = false;
	string chatcolor = "";
	/**/
	bool isDisableMessages = false;
	/*HPSystem | PVP*/
	int lastPVPcoord = 0;
	int lastPVPcoord2 = 0;
	int lastPVPcoord3 = 0;
	int lastPVPcoord4 = 0;
	int lastPVPcoord5 = 0;
	long long int LastScanMSG;
	int lastPVPcoord6 = 0;
	int lastPVPcoord7 = 0;
	int health = 100;
	int score = 0;
	int noobCounter = 0;
	bool Growid = false;
	// end hp
	int wrenchedBlockLocation = -1;
	int displayfg = 0;
	int displaybg = 0;
	int displaypunchx = 0;
	int LastX = 0;
	bool UpdateFinisheds = true;
	int LastY = 0;
	int displaypunchy = 0;
	int lastsavemyworld = 0;
	int SubscribtionEndDay = 0;
	int lastdailyGems = 0;
	int packetinsec = 0;
	long long int packetsec = 0;
	int timeTogetToken = 0;
	int trashgemmeritem = 0;
	int eikiscia = 0;
	int bootybreaken = 0;
	bool startkit = false;
	bool UpdateFinished = true;
	string OriName = "";
	int wrenchx;
	int wrenchy;
	long long int lastSPIN = 0;
	int droppeditemcount = 0;
	int lastdroppeditemid = 0;
	int lastPunchX;
	bool blockLogin = false;
	int lastPunchY;
	int lastPunchForeground;
	int lastPunchBackground;
	bool isInWorld = false;
	bool GlobalChat = false;
	bool isBannedWait = false;
	bool usedCP = false;
	int TotalKills = 0;
	string skill = "None";
	string sid = "none";
	bool Console = false;
	bool isIn = false;
	string notebook = "";
	int netID;
	long long int startedTest = 0;
	string Chatname = "";
	bool Subscriber = false;
	int lastdropitemcount = 0;
	int lastdropitem = 0;
	int lasttrashitem = 0;
	int lasttrashitemcount = 0;
	long long int lastwarn = 0;
	int lastwarnCount = 0;
	int violations = 0;
	long long int lastcurse = 0;
	int lastcurseCount = 0;
	long long int lastban = 0;
	int lastbanCount = 0;
	long long int lastsuspend2w = 0;
	int lastsuspend2wCount = 0;
	long long int lastsuspend4w = 0;
	int lastsuspend4wCount = 0;
	long long int lastsuspend8w = 0;
	int lastsuspend8wCount = 0;
	long long int lastsuspendwrench = 0;
	int lastsuspendwrenchCount = 0;
	long long int lastbanipwrench = 0;
	int lastbanipwrenchCount = 0;
	long long int lastsuspend = 0;
	int lastsuspendCount = 0;
	int Awesomeness = 0;
	long long int lastdelete = 0;
	int lastdeleteCount = 0;
	long long int lastbanip = 0;
	int lastbanipCount = 0;
	long long int lastdelstatus = 0;
	int lastdelstatusCount = 0;
	int wrenchsession;
	bool ZiuriIKaire = false;
	int bitShiftTest = 0;
	bool canLeave = true;
	bool haveGrowId = false;
	bool needsaveinventory = false;
	bool haveGuestId = false;
	int valgem;
	int fEarth = 0;
	int fDark = 0;
	int plantgems = 0;
	int fFire = 0;
	int lavaLevel = 0;
	bool RotatedLeft = false;
	int fWater = 0;
	bool isRotatedLeft = false;
	string tankIDName = "";
	string tankIDPass = "";
	string requestedName = "";
	string rawName = "";
	int warns = 0;
	long long lastonline = 0;
	int bans = 0;
	int darkfragment = 0;
	int earthfragment = 0;
	int firefragment = 0;
	int waterfragment = 0;
	bool transsuccess = false;
	bool isModState = false;
	string displayName = "";
	bool wrongpass = false;
	int guildBg = 0;
	int guildFg = 0;
	string guildStatement = "";
	string guildLeader = "";
	string displayNamebackup = "";
	string displayUsername = "";
	vector<string> guildmatelist;
	vector<string> guildMembers;
	vector<string> worldsowned;
	vector<string> lastworlds;
	int guildlevel = 0;
	int guildexp = 0;
	bool isinvited = false;
	string createGuildName = "";
	string createGuildStatement = "";
	string createGuildFlagBg = "";
	string createGuildFlagFg = "";
	string guild = "";
	bool joinguild = false;
	string lastgm = "";
	string lastgmname = "";
	string lastgmworld = "";
	string guildlast = "";
	string msgName = "";
	bool isNicked = false;
	string country = "";
	string gameversion = "";
	string rid = "none";
	string gid = "none";
	string aid = "none";
	bool canExit = true;
	string vid = "none";
	string wkid = "";
	string metaip = "";
	string hash2 = "";
	string hash = "";
	string fhash = "";
	string mac = "none";
	string token = "";
	string user = "";
	string deviceversion = "";
	string doorID = "";
	string cbits = "";
	string lmode = "";
	string gdpr = "";
	string f = "";
	string fz = "";
	string hpid = "";
	string platformID = "";
	string player_age = "1";
	int adminLevel = 0;
	string currentWorld = "EXIT";
	bool radio = true;
	int x;
	int y;
	int x1;
	int y1;
	int posXY;
	int posX;
	int posY;
	int cpY;
	int cpX;
	int SignPosX;
	int SignPosY;
	bool characterLoaded = false;
	string charIP = "none";
	bool isDBanned = false;
	vector<string> friendinfo;
	vector<string> createfriendtable;
	vector<string> createworldsowned;
	string lastFrn = "";
	string lastFrnName = "";
	string lastFrnWorld = "";
	string lastMsger = "";
	string lastMsgerTrue = "";
	string lastMsgWorld = "";
	string lastSdbWorld = "";
	string lastSbbWorld = "";
	string lastfriend = "";
	string lastInfo = "";
	string lastInfoname = "";
	string lastDisplayname = "";
	string lastSeller = "";
	string lastSellWorld = "";
	string lastBuyer = "";
	string lastInfoAboutPlayer = "none";
	long int lastTradeAmount = 99999999999;
	string addgems = "1000 gems";
	int characterState = 0;
	int level = 1;
	int xp = 0;
	bool game1bet = false;
	bool game2bet = false;
	bool isUpdating = false;
	bool joinClothesUpdated = false;
	int effect = 8421376;
	int peffect = 8421376;
	bool taped = false;
	bool canCreate = false;
	int cloth_hair = 0; // 0
	int cloth_shirt = 0; // 1
	int cloth_pants = 0; // 2
	int cloth_feet = 0; // 3
	int cloth_face = 0; // 4
	int cloth_hand = 0; // 5
	int cloth_back = 0; // 6
	int cloth_mask = 0; // 7
	int cloth_necklace = 0; // 8
	int cloth_ances = 0; // 9
	int cur = 0;
	int ipID = 0;
	bool canWalkInBlocks = false; // 1
	bool canDoubleJump = false; // 2
	bool cantsay = false;
	bool isInvisible = false; // 4
	bool noHands = false; // 8
	bool noEyes = false; // 16
	bool noBody = false; // 32	
	bool devilHorns = false; // 64
	bool goldenHalo = false; // 128
	bool isFrozen = false; // 2048
	bool isCursed = false; // 4096
	bool isDuctaped = false; // 8192
	unsigned long long int lastMuted = 0;
	unsigned long long int lastCursed = 0;
	bool haveCigar = false; // 16384
	bool isShining = false; // 32768
	bool isAncients = false; // 32768
	bool isAncients1 = false; // 32768
	bool isAncients2 = false; // 32768
	bool isAncients3 = false; // 32768
	bool isAncients4 = false; // 32768
	bool isAncients5 = false; // 32768
	bool isAncients6 = false; // 32768
	bool isZombie = false; // 65536
	bool isHitByLava = false; // 131072
	bool haveHauntedShadows = false; // 262144
	bool haveGeigerRadiation = false; // 524288
	bool haveReflector = false; // 1048576
	bool isEgged = false; // 2097152
	bool havePineappleFloag = false; // 4194304
	bool haveFlyingPineapple = false; // 8388608
	bool haveSuperSupporterName = false; // 16777216
	bool haveSupperPineapple = false; // 33554432
	bool isGhost = false;
	bool isinv = false;
	int skinColor = 0x8295C3FF;
	PlayerInventory inventory;
	/*surgery*/
	int Ultrasound = 0;
	bool PatientHeartStopped = false;
	long long int SurgeryTime = 0;
	bool SurgeryCooldown = false;
	float PatientTemperatureRise = 0;
	bool FixIt = false;
	bool UnlockedAntibiotic = false;
	bool PerformingSurgery = false;
	int SurgerySkill = 0;
	bool RequestedSurgery = false;
	string TempColor = "";
	bool HardToSee = false;
	bool PatientLosingBlood = false;
	int SurgItem1 = 4320;
	int SurgItem2 = 4320;
	int SurgItem3 = 4320;
	int SurgItem4 = 4320;
	int SurgItem5 = 4320;
	int SurgItem6 = 4320;
	int SurgItem7 = 4320;
	int SurgItem8 = 4320;
	int SurgItem9 = 4320;
	int SurgItem10 = 4320;
	int SurgItem11 = 4320;
	int SurgItem12 = 4320;
	int SurgItem13 = 4320;
	string PatientDiagnosis = "";
	string PatientPulse = "";
	string PatientStatus = "";
	float PatientTemperature = 0;
	string OperationSite = "";
	string IncisionsColor = "";
	int PatientIncisions = 0;
	string PatientRealDiagnosis = "";
	//trade stars
	long long int lastTrade = 0;
	string lastTradeGrowid = "";
	string MergeItem1 = "0";
	string MergeItem2 = "0";
	string MergeItem3 = "0";
	string mySellingItem1 = "3308";
	string mySellingItem2 = "3308";
	string mySellingItem3 = "3308";
	string mySellingItem4 = "3308";
	string mySellingItem1Count = "0";
	string mySellingItem2Count = "0";
	string mySellingItem3Count = "0";
	string mySellingItem4Count = "0";
	string hisSellingItem1 = "3308";
	string hisSellingItem2 = "3308";
	string hisSellingItem3 = "3308";
	string hisSellingItem4 = "3308";
	string hisSellingItem1Count = "0";
	string hisSellingItem2Count = "0";
	string hisSellingItem3Count = "0";
	string hisSellingItem4Count = "0";
	string receivedFrom = "";
	//trade ends
	short currentInventorySize = 0;
	long long int lastSB = 0;
	long long int lastSDB = 0;
	long long int lastSSB = 0;
	long long int lastINV = 0;
	long long int lastBREAK = 0;
	long long int lastMute = 0;
	long long int lastBan = 0;
	long long int lastCurse = 0;
	long long int lastATM = 0;
	long long int lastSYNC = 0;
	long long int lastDISPLAY = 0;
	int blockx;
	int blocky;
	bool isUseCode = false;
	bool isConfirmingCode = false;
	string registercode = "";
	string registermac = "";
	string registerrid = "";
	string registersid = "";
	string registergid = "";
	string registervid = "";
	string registeraid = "";
	string registerIP = "";
	int lastUserID = 0;
	int userID = 0;
	int respawnX = 0;
	int respawnY = 0;
	bool ischeck = false;
	int checkx = 0;
	int checky = 0;
	bool loadedInventory = false;
	long long int lastPunchTime = 0;
	long long int lastHitTime = 0;
	long long int lastJoinReq = 0;
	long long int lastsendclient = 0;
	long long int lastpacketflood = 0;
	long long int lastenterdoor = 0;
	uint32_t lavaHitAt = 0;
	uint32_t deadTime = 0;
};

PlayerInfo* pdata(ENetPeer* peer) {
	return (PlayerInfo*)(peer->data);
}

struct PlayerMoving
{
	int packetType;
	int netID;
	float x;
	float y;
	int characterState;
	int plantingTree;
	float XSpeed;
	float YSpeed;
	int punchX;
	int punchY;
	int secondnetID;
};

struct Admin
{
	string username;
	string password;
	int level = 0;
	long long int lastSB = 0;
	long long int lastWarp = 0;
	long long int lastSpawn = 0;
	long long int lastasb = 0;
};

struct GamePacket
{
	BYTE* data;
	int len;
	int indexes;
};

enum ClothTypes
{
	HAIR,
	SHIRT,
	PANTS,
	FEET,
	FACE,
	HAND,
	BACK,
	MASK,
	NECKLACE,
	ANCES,
	NONE
};

bool replace(std::string& str, const std::string& from, const std::string& to) {
	size_t start_pos = str.find(from);
	if (start_pos == std::string::npos)
		return false;
	str.replace(start_pos, from.length(), to);
	return true;
}

inline int getState(PlayerInfo* info)
{
	auto val = 0;
	val |= info->canWalkInBlocks << 0;
	val |= info->canDoubleJump << 1;
	val |= info->cantsay << 13;
	val |= info->noHands << 3;
	val |= info->noEyes << 4;
	val |= info->noBody << 5;
	val |= info->goldenHalo << 7;
	val |= info->isFrozen << 8;
	val |= info->isCursed << 12;
	val |= info->isDuctaped << 13;
	val |= info->haveSuperSupporterName << 24;
	val |= info->isShining << 15;
	val |= info->isZombie << 16;
	val |= info->isHitByLava << 17;
	return val;
}

class Player
{
public:
	static void OnConsoleMessage(ENetPeer* peer, string text);
	static void OnTalkBubble(ENetPeer* peer, int netID, string text, int chatColor, bool isOverlay);
	static void OnAddNotification(ENetPeer* peer, string text, string audiosound, string interfaceimage);
	static void OnRemove(ENetPeer* peer, int netID);
	static void OnSendToServer(ENetPeer* peer, int userID, int token, string ip, int port, string doorId, int lmode); // no need other args, sub servers done&working already... using fake data etc.
	static void PlayAudio(ENetPeer* peer, string audioFile, int delayMS);
	static void OnZoomCamera(ENetPeer* peer, float value1, int value2);
	static void SmoothZoom(ENetPeer* peer);
	static void OnRaceStart(ENetPeer* peer, int netID);
	static void OnRaceEnd(ENetPeer* peer, int netID);
	static void OnSetCurrentWeather(ENetPeer* peer, int weather);
	static void OnPlayPositioned(ENetPeer* peer, string audiofile, int netID, bool broadcastInWorld, ENetPacket* pk);
	static void OnCountdownStart(ENetPeer* peer, int netID, int time, int score);
	static void OnStartTrade(ENetPeer* peer, string displayName, int netID);
	static void OnTextOverlay(ENetPeer* peer, string text);
	static void OnForceTradeEnd(ENetPeer* peer);
	static void OnFailedToEnterWorld(ENetPeer* peer);
	static void OnTradeStatus(ENetPeer* peer, int netIDOther, string offerstatus, string offer);
	static void OnNameChanged(ENetPeer* peer, int netID, string name);
	static void OnDialogRequest(ENetPeer* peer, string args);
	static void OnKilled(ENetPeer* peer, int netID);
	static void OnSetFreezeState(ENetPeer* peer, int state, int netID);
	static void OnSetPos(ENetPeer* peer, int netID, int x, int y);
	static void OnInvis(ENetPeer* peer, int state, int netID);
	static void OnChangeSkin(ENetPeer* peer, int skinColor, int netID);
	static void SetRespawnPos(ENetPeer* peer, int posX, int posY, int netID);
	static void OnSetBux(ENetPeer* peer, int gems, int accountstate);
	static void onGiveGems(ENetPeer* peer, int gems);
	static void OnParticleEffect(ENetPeer* peer, int effect, float x, float y, int delay);
	static void SetHasGrowID(ENetPeer* peer, int status, string username, string password);
	static void Ping(ENetPeer* peer);
};

class PlayerDB
{
public:
	static string getProperName(string name);
	static string fixColors(string text);
	static int playerLogin(ENetPeer* peer, string username, string password);
	static int playerRegister(ENetPeer* peer, string username, string password, string email, string code);
	static int guildRegister(ENetPeer* peer, string guildName, string guildStatement, string guildFlagfg, string guildFlagbg);
};

inline string PlayerDB::getProperName(string name)
{
	string newS;
	for (auto c : name) newS += (c >= 'A' && c <= 'Z') ? c - ('A' - 'a') : c;
	string ret;
	for (auto i = 0; i < newS.length(); i++)
	{
		if (newS[i] == '`') i++;
		else ret += newS[i];
	}
	string ret2;
	for (auto c : ret) if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) ret2 += c;
	return ret2;
}

inline string PlayerDB::fixColors(string text)
{
	string ret = "";
	auto colorLevel = 0;
	for (auto i = 0; i < text.length(); i++)
	{
		if (text[i] == '`')
		{
			ret += text[i];
			if (i + 1 < text.length())
				ret += text[i + 1];
			if (i + 1 < text.length() && text[i + 1] == '`')
			{
				colorLevel--;
			}
			else
			{
				colorLevel++;
			}
			i++;
		}
		else
		{
			ret += text[i];
		}
	}
	for (auto i = 0; i < colorLevel; i++)
	{
		ret += "``";
	}
	for (auto i = 0; i > colorLevel; i--)
	{
		ret += "`w";
	}
	return ret;
}

long long PlayTimeGame()
{
	using namespace std::chrono;
	return (duration_cast<hours>(system_clock::now().time_since_epoch())).count();
}

string PlayTimeGameMinutes(int n) {
	string x;
	int day = n / (24 * 3600);
	if (day != 0) x.append(to_string(day) + " days, ");
	n = n % (24 * 3600);
	int hour = n / 3600;
	if (hour != 0) x.append(to_string(hour) + " hours ");
	n %= 3600;
	int minutes = n / 60;
	if (minutes != 0) x.append(to_string(minutes) + " minutes, & ");
	n %= 60;
	int seconds = n;
	if (seconds != 0) x.append(to_string(seconds) + " seconds");
	return x;

}

inline GamePacket appendFloat(GamePacket p, float val)
{
	const auto n = new BYTE[p.len + 2 + 4];
	memcpy(n, p.data, p.len);
	delete p.data;
	p.data = n;
	n[p.len] = p.indexes;
	n[p.len + 1] = 1;
	memcpy(n + p.len + 2, &val, 4);
	p.len = p.len + 2 + 4;
	p.indexes++;
	return p;
}

inline GamePacket appendFloat(GamePacket p, float val, float val2)
{
	const auto n = new BYTE[p.len + 2 + 8];
	memcpy(n, p.data, p.len);
	delete p.data;
	p.data = n;
	n[p.len] = p.indexes;
	n[p.len + 1] = 3;
	memcpy(n + p.len + 2, &val, 4);
	memcpy(n + p.len + 6, &val2, 4);
	p.len = p.len + 2 + 8;
	p.indexes++;
	return p;
}

inline GamePacket appendFloat(GamePacket p, float val, float val2, float val3)
{
	const auto n = new BYTE[p.len + 2 + 12];
	memcpy(n, p.data, p.len);
	delete p.data;
	p.data = n;
	n[p.len] = p.indexes;
	n[p.len + 1] = 4;
	memcpy(n + p.len + 2, &val, 4);
	memcpy(n + p.len + 6, &val2, 4);
	memcpy(n + p.len + 10, &val3, 4);
	p.len = p.len + 2 + 12;
	p.indexes++;
	return p;
}

inline GamePacket appendInt(GamePacket p, int val)
{
	const auto n = new BYTE[p.len + 2 + 4];
	memcpy(n, p.data, p.len);
	delete p.data;
	p.data = n;
	n[p.len] = p.indexes;
	n[p.len + 1] = 9;
	memcpy(n + p.len + 2, &val, 4);
	p.len = p.len + 2 + 4;
	p.indexes++;
	return p;
}

inline GamePacket appendIntx(GamePacket p, int val)
{
	const auto n = new BYTE[p.len + 2 + 4];
	memcpy(n, p.data, p.len);
	delete p.data;
	p.data = n;
	n[p.len] = p.indexes;
	n[p.len + 1] = 5;
	memcpy(n + p.len + 2, &val, 4);
	p.len = p.len + 2 + 4;
	p.indexes++;
	return p;
}

inline GamePacket appendString(GamePacket p, string str)
{
	const auto n = new BYTE[p.len + 2 + str.length() + 4];
	memcpy(n, p.data, p.len);
	delete p.data;
	p.data = n;
	n[p.len] = p.indexes;
	n[p.len + 1] = 2;
	int sLen = str.length();
	memcpy(n + p.len + 2, &sLen, 4);
	memcpy(n + p.len + 6, str.c_str(), sLen);
	p.len = p.len + 2 + str.length() + 4;
	p.indexes++;
	return p;
}

inline GamePacket createPacket()
{
	const auto data = new BYTE[61];
	string asdf = "0400000001000000FFFFFFFF00000000080000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
	for (auto i = 0; i < asdf.length(); i += 2)
	{
		char x = ch2n(asdf[i]);
		x = x << 4;
		x += ch2n(asdf[i + 1]);
		memcpy(data + (i / 2), &x, 1);
		if (asdf.length() > 61 * 2) throw 0;
	}
	GamePacket packet;
	packet.data = data;
	packet.len = 61;
	packet.indexes = 0;
	return packet;
}

inline GamePacket packetEnd(GamePacket p)
{
	const auto n = new BYTE[p.len + 1];
	memcpy(n, p.data, p.len);
	delete p.data;
	p.data = n;
	char zero = 0;
	memcpy(p.data + p.len, &zero, 1);
	p.len += 1;
	*reinterpret_cast<int*>(p.data + 56) = p.indexes;
	*static_cast<BYTE*>(p.data + 60) = p.indexes;
	return p;
}

inline BYTE* packPlayerMoving(PlayerMoving* dataStruct)
{
	const auto data = new BYTE[64];
	for (auto i = 0; i < 64; i++)
	{
		data[i] = 0;
	}
	memcpy(data, &dataStruct->packetType, 4);
	memcpy(data + 4, &dataStruct->netID, 4);
	memcpy(data + 12, &dataStruct->characterState, 4);
	memcpy(data + 20, &dataStruct->plantingTree, 4);
	memcpy(data + 24, &dataStruct->x, 4);
	memcpy(data + 28, &dataStruct->y, 4);
	memcpy(data + 32, &dataStruct->XSpeed, 4);
	memcpy(data + 36, &dataStruct->YSpeed, 4);
	memcpy(data + 44, &dataStruct->punchX, 4);
	memcpy(data + 48, &dataStruct->punchY, 4);
	return data;
}

string packPlayerMoving2(PlayerMoving* dataStruct)
{
	string data;
	data.resize(56);
	STRINT(data, 0) = dataStruct->packetType;
	STRINT(data, 4) = dataStruct->netID;
	STRINT(data, 12) = dataStruct->characterState;
	STRINT(data, 20) = dataStruct->plantingTree;
	STRINT(data, 24) = *(int*)&dataStruct->x;
	STRINT(data, 28) = *(int*)&dataStruct->y;
	STRINT(data, 32) = *(int*)&dataStruct->XSpeed;
	STRINT(data, 36) = *(int*)&dataStruct->YSpeed;
	STRINT(data, 44) = dataStruct->punchX;
	STRINT(data, 48) = dataStruct->punchY;
	return data;
}

inline PlayerMoving* unpackPlayerMoving(BYTE* data)
{
	auto dataStruct = new PlayerMoving;
	memcpy(&dataStruct->packetType, data, 4);
	memcpy(&dataStruct->netID, data + 4, 4);
	memcpy(&dataStruct->characterState, data + 12, 4);
	memcpy(&dataStruct->plantingTree, data + 20, 4);
	memcpy(&dataStruct->x, data + 24, 4);
	memcpy(&dataStruct->y, data + 28, 4);
	memcpy(&dataStruct->XSpeed, data + 32, 4);
	memcpy(&dataStruct->YSpeed, data + 36, 4);
	memcpy(&dataStruct->punchX, data + 44, 4);
	memcpy(&dataStruct->punchY, data + 48, 4);
	return dataStruct;
}

inline long long GetCurrentTimeInternal()
{
	using namespace std::chrono;
	return (duration_cast<milliseconds>(system_clock::now().time_since_epoch())).count();
}

inline long long GetCurrentTimeInternalSeconds()
{
	using namespace std::chrono;
	return (duration_cast<seconds>(system_clock::now().time_since_epoch())).count();
}

inline int calcBanDuration(const long long banDuration)
{
	// ReSharper disable once CppInitializedValueIsAlwaysRewritten
	auto duration = 0;
	duration = banDuration - GetCurrentTimeInternalSeconds();
	if (duration <= 0) return 0;
	else return duration;
}

inline string OutputBanTime(int n)
{
	string x;
	const auto day = n / (24 * 3600);
	if (day != 0) x.append(to_string(day) + " Days ");
	n = n % (24 * 3600);
	const auto hour = n / 3600;
	if (hour != 0) x.append(to_string(hour) + " Hours ");
	n %= 3600;
	const auto minutes = n / 60;
	if (minutes != 0) x.append(to_string(minutes) + " Minutes ");
	n %= 60;
	const auto seconds = n;
	if (seconds != 0) x.append(to_string(seconds) + " Seconds");
	return x;
}

inline void banLoginDevice(ENetPeer* peer, const long long banDurationDefault, string sid, string mac)
{
	const auto bantimeleft = calcBanDuration(banDurationDefault);
	if (bantimeleft < 1) return;
	const auto text = "action|log\nmsg|`4Sorry, this device or location is still banned for `w" + OutputBanTime(calcBanDuration(banDurationDefault)) + " Need help? Contact Time#1337!";
	const string dc = "https://growtopiacps.weebly.com/";
	const auto url = "action|set_url\nurl|" + dc + "\nlabel|Join GrowtopiaCP Discord\n";
	const auto data = new BYTE[5 + text.length()];
	const auto dataurl = new BYTE[5 + url.length()];
	BYTE zero = 0;
	auto type = 3;
	memcpy(data, &type, 4);
	memcpy(data + 4, text.c_str(), text.length());
	memcpy(data + 4 + text.length(), &zero, 1);
	memcpy(dataurl, &type, 4);
	memcpy(dataurl + 4, url.c_str(), url.length());
	memcpy(dataurl + 4 + url.length(), &zero, 1);
	const auto p = enet_packet_create(data, 5 + text.length(), ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, p);
	const auto p3 = enet_packet_create(dataurl, 5 + url.length(), ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, p3);
	delete data;
	delete dataurl;
	static_cast<PlayerInfo*>(peer->data)->blockLogin = true;
}

inline void SendInventory(ENetPeer* peer, PlayerInventory inventory)
{
	if (static_cast<PlayerInfo*>(peer->data)->currentWorld == "EXIT") return;
	const int inventoryLen = inventory.items.size();
	const auto packetLen = 66 + (inventoryLen * 4) + 4;
	auto* data2 = new BYTE[packetLen];
	auto MessageType = 0x4;
	auto PacketType = 0x9;
	auto NetID = -1;
	auto CharState = 0x8;
	memset(data2, 0, packetLen);
	memcpy(data2, &MessageType, 4);
	memcpy(data2 + 4, &PacketType, 4);
	memcpy(data2 + 8, &NetID, 4);
	memcpy(data2 + 16, &CharState, 4);
	//int endianInvVal = __builtin_bswap32(inventoryLen);
	int endianInvVal = _byteswap_ulong(inventoryLen);
	memcpy(data2 + 66 - 4, &endianInvVal, 4);
	//endianInvVal = __builtin_bswap32(static_cast<PlayerInfo*>(peer->data)->currentInventorySize);
	endianInvVal = _byteswap_ulong(static_cast<PlayerInfo*>(peer->data)->currentInventorySize);
	memcpy(data2 + 66 - 8, &endianInvVal, 4);
	auto val = 0;
	for (auto i = 0; i < inventoryLen; i++)
	{
		val = 0;
		val |= inventory.items.at(i).itemID;
		val |= inventory.items.at(i).itemCount << 16;
		val &= 0x00FFFFFF;
		val |= 0x00 << 24;
		memcpy(data2 + (i * 4) + 66, &val, 4);
	}
	const auto packet3 = enet_packet_create(data2, packetLen, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet3);
	delete data2;
}

inline bool CheckItemExists(ENetPeer* peer, const int fItemId)
{
	auto isExists = false;
	for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
	{
		if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == fItemId)
		{
			isExists = true;
			break;
		}
	}
	return isExists;
}

inline void SearchInventoryItem(ENetPeer* peer, const int fItemid, const int fQuantity, bool& iscontains)
{
	string history = "";
	for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
	{
		if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == fItemid)
		{
			break;
		}
	}
	/*if (static_cast<PlayerInfo*>(peer->data)->rawName != "robertasltu" && static_cast<PlayerInfo*>(peer->data)->rawName != "robertasltu")
	{
		if (history.find(static_cast<PlayerInfo*>(peer->data)->rawName + " from /item") != string::npos)
		{
			Player::OnTextOverlay(peer, "This item is illegal.");
			iscontains = false;
			return;
		}
	}*/
	iscontains = false;
	for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
	{
		if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == fItemid && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= fQuantity)
		{
			iscontains = true;
			break;
		}
	}
}

inline bool SearchInventoryItemsForGame2(ENetPeer* peer)
{
	for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
	{
		if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 9484 || static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 9486 || static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 9494 || static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 9502)
		{
			return true;
		}
	}
	return false;
}

inline bool isHere(ENetPeer* peer, ENetPeer* peer2)
{
	return static_cast<PlayerInfo*>(peer->data)->currentWorld == static_cast<PlayerInfo*>(peer2->data)->currentWorld;
}
struct TAlphaColorRec {
	char R = 'R';
	char G = 'G';
	char B = 'B';
	char A = 'A';
	char Color;
};

inline void SendPacketRaw(int a1, void* packetData, const size_t packetDataSize, void* a4, ENetPeer* peer, const int packetFlag)
{
	ENetPacket* p;
	if (peer)
	{
		if (a1 == 4 && *(static_cast<BYTE*>(packetData) + 12) & 8)
		{
			p = enet_packet_create(nullptr, packetDataSize + *(static_cast<DWORD*>(packetData) + 13) + 5, packetFlag);
			auto four = 4;
			memcpy(p->data, &four, 4);
			memcpy(reinterpret_cast<char*>(p->data) + 4, packetData, packetDataSize);
			memcpy(reinterpret_cast<char*>(p->data) + packetDataSize + 4, a4, *(static_cast<DWORD*>(packetData) + 13));
			enet_peer_send(peer, 0, p);
		}
		else
		{
			try
			{
				p = enet_packet_create(nullptr, packetDataSize + 5, packetFlag);
				memcpy(p->data, &a1, 4);
				memcpy(reinterpret_cast<char*>(p->data) + 4, packetData, packetDataSize);
				enet_peer_send(peer, 0, p);
			}
			catch (...)
			{
				SendConsole("Failed to send packet raw (sendpacketraw)", "ERROR");
			}
		}
	}
	delete static_cast<char*>(packetData);
}
int createRGBA(int B, int G, int R, int A) {
	TAlphaColorRec zzacr;
	zzacr.R = R;
	zzacr.G = G;
	zzacr.B = B;
	zzacr.A = A;
	return zzacr.Color;
}
void PlayerRiftCape(ENetPeer* peer, int colum1, int colum2, int colum3, int colum4, int colum5, int colum6, int berapapacket)
{
	ENetPeer* currentPeer;
	for (currentPeer = server->peers;
		currentPeer < &server->peers[server->peerCount];
		++currentPeer)
	{
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED)
			continue;
		if (isHere(peer, currentPeer))
		{
			if (berapapacket == 5) //no time dilation
			{
				GamePacket p3s2 = packetEnd(appendIntx(appendIntx(appendIntx(appendIntx(appendIntx(appendString(createPacket(), "OnRiftCape"), colum1), colum2/*Cape Color*/), colum3), colum4/*kerah leher*/), colum5));
				memcpy(p3s2.data + 8, &(((PlayerInfo*)(peer->data))->netID), 4);
				ENetPacket* packet2s2 = enet_packet_create(p3s2.data, p3s2.len, ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(peer, 0, packet2s2);
				delete p3s2.data;

				GamePacket p33 = packetEnd(appendIntx(appendIntx(appendIntx(appendIntx(appendIntx(appendString(createPacket(), "OnRiftCape"), colum1), colum2/*Cape Color*/), colum3), colum4/*kerah leher*/), colum5));
				memcpy(p33.data + 8, &(((PlayerInfo*)(peer->data))->netID), 4);
				ENetPacket* packet23 = enet_packet_create(p33.data, p33.len, ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(currentPeer, 0, packet23);
				delete p33.data;
			}
			else if (berapapacket == 2)
			{
				GamePacket p3ss = packetEnd(appendIntx(appendIntx(appendString(createPacket(), "OnRiftCape"), colum1), colum2));
				memcpy(p3ss.data + 8, &(((PlayerInfo*)(peer->data))->netID), 4);
				ENetPacket* packet2ss = enet_packet_create(p3ss.data, p3ss.len, ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(peer, 0, packet2ss);
				delete p3ss.data;

				GamePacket p3 = packetEnd(appendIntx(appendIntx(appendString(createPacket(), "OnRiftCape"), colum1), colum2));
				memcpy(p3.data + 8, &(((PlayerInfo*)(peer->data))->netID), 4);
				ENetPacket* packet2 = enet_packet_create(p3.data, p3.len, ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(currentPeer, 0, packet2);
				delete p3.data;
			}
			else if (berapapacket == 6)
			{
				GamePacket p3 = packetEnd(appendIntx(appendIntx(appendIntx(appendIntx(appendIntx(appendIntx(appendString(createPacket(), "OnRiftCape"), colum1), colum2/*Cape Color*/), colum3), colum4/*kerah leher*/), colum5), colum6));
				auto respawnTimeout2 = colum6 + 00;
				auto deathFlag2 = 0x19;
				memcpy(p3.data + 24, &respawnTimeout2, 4);
				memcpy(p3.data + 56, &deathFlag2, 4);
				memcpy(p3.data + 8, &(((PlayerInfo*)(peer->data))->netID), 4);
				ENetPacket* packet2 = enet_packet_create(p3.data, p3.len, ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(currentPeer, 0, packet2);
				delete p3.data;

				GamePacket p3s = packetEnd(appendIntx(appendIntx(appendIntx(appendIntx(appendIntx(appendIntx(appendString(createPacket(), "OnRiftCape"), colum1), colum2/*Cape Color*/), colum3), colum4/*kerah leher*/), colum5), colum6));
				auto respawnTimeout = colum6 + 00;
				auto deathFlag = 0x19;
				memcpy(p3s.data + 24, &respawnTimeout, 4);
				memcpy(p3s.data + 56, &deathFlag, 4);
				memcpy(p3s.data + 8, &(((PlayerInfo*)(peer->data))->netID), 4);
				ENetPacket* packet2s = enet_packet_create(p3s.data, p3s.len, ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(peer, 0, packet2s);
				delete p3s.data;
			}
		}
	}
}
inline void playerconfig(ENetPeer* peer, const int yspeed, const int xspeed, const int packettype)
{
	const auto info = static_cast<PlayerInfo*>(peer->data);
	const auto netID = info->netID;
	const auto state = getState(info);
	for (auto currentPeer = server->peers;
		currentPeer < &server->peers[server->peerCount];
		++currentPeer)
	{
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED) continue;
		if (isHere(peer, currentPeer))
		{
			PlayerMoving data;
			auto water = 125.0f;
			data.packetType = packettype;
			data.characterState = static_cast<PlayerInfo*>(peer->data)->characterState;
			data.x = 1000;
			if (static_cast<PlayerInfo*>(peer->data)->cloth_hand == 366)
			{
				data.y = -400;
			}
			else
			{
				data.y = 400;
			}
			data.punchX = 0;
			data.punchY = 0;
			data.XSpeed = xspeed;
			data.YSpeed = yspeed;
			data.netID = netID;
			data.plantingTree = state;
			const auto raw = packPlayerMoving(&data);
			auto var = 0x818100;
			memcpy(raw + 1, &var, 3);
			memcpy(raw + 16, &water, 4);
			SendPacketRaw(4, raw, 56, nullptr, currentPeer, ENET_PACKET_FLAG_RELIABLE);
		}
	}
}

inline void sendPuncheffectpeer(ENetPeer* peer, const int punch)
{
	const auto info = static_cast<PlayerInfo*>(peer->data);
	const auto netID = info->netID;
	const auto state = getState(info);
	PlayerMoving data;
	auto water = 125.0f;
	data.packetType = 0x14;
	data.characterState = static_cast<PlayerInfo*>(peer->data)->characterState;
	data.x = 1000;
	if (static_cast<PlayerInfo*>(peer->data)->cloth_hand == 366)
	{
		data.y = -400;
	}
	else
	{
		data.y = 400;
	}
	data.punchX = -1;
	data.punchY = -1;
	data.XSpeed = 300;
	if (static_cast<PlayerInfo*>(peer->data)->cloth_back == 9472)
	{
		data.YSpeed = 600;
	}
	else
	{
		data.YSpeed = 1000;
	}
	data.netID = netID;
	data.plantingTree = state;
	const auto raw = packPlayerMoving(&data);
	auto var = punch;
	memcpy(raw + 1, &var, 3);
	memcpy(raw + 16, &water, 4);
	SendPacketRaw(4, raw, 56, nullptr, peer, ENET_PACKET_FLAG_RELIABLE);
	if (static_cast<PlayerInfo*>(peer->data)->isZombie == true)
	{
		playerconfig(peer, 1150, 130, 0x14);
	}
}

inline void sendPuncheffect(ENetPeer* peer, int punch)
{
	const auto info = static_cast<PlayerInfo*>(peer->data);
	const auto netID = info->netID;
	const auto state = getState(info);
	for (ENetPeer* currentPeer = server->peers;
		currentPeer < &server->peers[server->peerCount];
		++currentPeer)
	{
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED) continue;
		if (isHere(peer, currentPeer))
		{
			if (peer != currentPeer)
			{
				PlayerMoving data;
				data.packetType = 0x14;
				data.characterState = static_cast<PlayerInfo*>(peer->data)->characterState;
				data.x = 1000;
				data.y = 100;
				data.x = 1000;
				data.y = 1000;
				data.punchX = 0;
				data.punchY = 0;
				data.XSpeed = 300;
				data.YSpeed = 600;
				data.netID = netID;
				data.plantingTree = state;
				const auto raw = packPlayerMoving(&data);
				auto var = punch;
				memcpy(raw + 1, &var, 3);
				SendPacketRaw(4, raw, 56, nullptr, currentPeer, ENET_PACKET_FLAG_RELIABLE);
			}
			if (static_cast<PlayerInfo*>(peer->data)->haveGrowId && static_cast<PlayerInfo*>(peer->data)->isIn == true && static_cast<PlayerInfo*>(peer->data)->currentWorld != "EXIT")
			{
				ofstream WorldSys("misc/effect/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
				WorldSys << to_string(static_cast<PlayerInfo*>(peer->data)->effect);
				WorldSys.close();
			}
		}
	}
	if (static_cast<PlayerInfo*>(peer->data)->isZombie == true)
	{
		playerconfig(peer, 1150, 130, 0x14);
	}
}

inline void sendClothes(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->currentWorld == "EXIT") return;
	auto p3 = packetEnd(appendFloat(appendIntx(appendFloat(appendFloat(appendFloat(appendString(createPacket(), "OnSetClothing"), (static_cast<PlayerInfo*>(peer->data))->cloth_hair, (static_cast<PlayerInfo*>(peer->data))->cloth_shirt, (static_cast<PlayerInfo*>(peer->data))->cloth_pants), (static_cast<PlayerInfo*>(peer->data))->cloth_feet, (static_cast<PlayerInfo*>(peer->data))->cloth_face, (static_cast<PlayerInfo*>(peer->data))->cloth_hand), (static_cast<PlayerInfo*>(peer->data))->cloth_back, (static_cast<PlayerInfo*>(peer->data))->cloth_mask, (static_cast<PlayerInfo*>(peer->data))->cloth_necklace), (static_cast<PlayerInfo*>(peer->data))->skinColor), (static_cast<PlayerInfo*>(peer->data))->cloth_ances, 0.0f, 0.0f));
	for (ENetPeer* currentPeer = server->peers;
		currentPeer < &server->peers[server->peerCount];
		++currentPeer)
	{
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED) continue;
		if (isHere(peer, currentPeer))
		{
			memcpy(p3.data + 8, &((static_cast<PlayerInfo*>(peer->data))->netID), 4);
			const auto packet3 = enet_packet_create(p3.data, p3.len, ENET_PACKET_FLAG_RELIABLE);
			enet_peer_send(currentPeer, 0, packet3);
		}
	}
	delete p3.data;
}

inline void updateplayerset(ENetPeer* peer, int targetitem)
{
	const auto clothitem = static_cast<PlayerInfo*>(peer->data)->cloth_hand;
	const auto clothface = static_cast<PlayerInfo*>(peer->data)->cloth_face;
	const auto clothneck = static_cast<PlayerInfo*>(peer->data)->cloth_necklace;
	const auto clothshirt = static_cast<PlayerInfo*>(peer->data)->cloth_shirt;
	const auto clothback = static_cast<PlayerInfo*>(peer->data)->cloth_back;
	const auto clothances = static_cast<PlayerInfo*>(peer->data)->cloth_ances;
	const auto clothpants = static_cast<PlayerInfo*>(peer->data)->cloth_pants;
	const auto clothfeet = static_cast<PlayerInfo*>(peer->data)->cloth_feet;
	const auto clothhair = static_cast<PlayerInfo*>(peer->data)->cloth_hair;
	const auto clothmask = static_cast<PlayerInfo*>(peer->data)->cloth_mask;
	const auto item = targetitem;
	if (clothmask == item)
	{
		auto iscontains = false;
		SearchInventoryItem(peer, item, 1, iscontains);
		if (!iscontains)
		{
			static_cast<PlayerInfo*>(peer->data)->cloth_mask = 0;
			sendClothes(peer);
		}
		else
		{
		}
	}
	if (clothitem == item)
	{
		auto iscontains = false;
		SearchInventoryItem(peer, item, 1, iscontains);
		if (!iscontains)
		{
			static_cast<PlayerInfo*>(peer->data)->cloth_hand = 0;
			sendClothes(peer);
			static_cast<PlayerInfo*>(peer->data)->effect = 8421376;
			sendPuncheffectpeer(peer, static_cast<PlayerInfo*>(peer->data)->effect);
			sendPuncheffect(peer, static_cast<PlayerInfo*>(peer->data)->effect);
		}
		else
		{
		}
	}
	if (clothface == item)
	{
		auto iscontains = false;
		SearchInventoryItem(peer, item, 1, iscontains);
		if (!iscontains)
		{
			static_cast<PlayerInfo*>(peer->data)->cloth_face = 0;
			sendClothes(peer);
		}
		else
		{
		}
	}

	if (clothneck == item)
	{
		auto iscontains = false;
		SearchInventoryItem(peer, item, 1, iscontains);
		if (!iscontains)
		{
			static_cast<PlayerInfo*>(peer->data)->cloth_necklace = 0;
			sendClothes(peer);
		}
		else
		{
		}
	}

	if (clothshirt == item)
	{
		auto iscontains = false;
		SearchInventoryItem(peer, item, 1, iscontains);
		if (!iscontains)
		{
			static_cast<PlayerInfo*>(peer->data)->cloth_shirt = 0;
			sendClothes(peer);
		}
		else
		{
		}
	}

	if (clothback == item)
	{
		auto iscontains = false;
		SearchInventoryItem(peer, item, 1, iscontains);
		if (!iscontains)
		{
			static_cast<PlayerInfo*>(peer->data)->cloth_back = 0;
			sendClothes(peer);
		}
		else
		{
		}
	}

	if (clothances == item)
	{
		auto iscontains = false;
		SearchInventoryItem(peer, item, 1, iscontains);
		if (!iscontains)
		{
			static_cast<PlayerInfo*>(peer->data)->cloth_ances = 0;
			sendClothes(peer);
		}
		else
		{
		}
	}

	if (clothpants == item)
	{
		auto iscontains = false;
		SearchInventoryItem(peer, item, 1, iscontains);
		if (!iscontains)
		{
			static_cast<PlayerInfo*>(peer->data)->cloth_pants = 0;
			sendClothes(peer);
		}
		else
		{
		}
	}

	if (clothfeet == item)
	{
		auto iscontains = false;
		SearchInventoryItem(peer, item, 1, iscontains);
		if (!iscontains)
		{
			static_cast<PlayerInfo*>(peer->data)->cloth_feet = 0;
			sendClothes(peer);
		}
		else
		{
		}
	}

	if (clothhair == item)
	{
		auto iscontains = false;
		SearchInventoryItem(peer, item, 1, iscontains);
		if (!iscontains)
		{
			static_cast<PlayerInfo*>(peer->data)->cloth_hair = 0;
			sendClothes(peer);
		}
		else
		{
		}
	}
}


inline void checkTimeBan(ENetPeer* peer, string username)
{
	auto exist = experimental::filesystem::exists("timebanned/" + PlayerDB::getProperName(username) + ".txt");
	if (exist)
	{
		ifstream fd("timebanned/" + PlayerDB::getProperName(username) + ".txt");
		long long banDuration = 0;
		string bannedBy;
		string bannedReason;
		if (fd.fail())
		{
			cout << "[Stream-ERROR]: failed to check whether '" + username + "' is time banned." << endl;
			Player::OnConsoleMessage(peer, "`5[Stream-ERROR]: `@ failed to check whether '" + username + "' is time banned. `5Please send this screenshot to GrowtopiaCP developers.");
			if (!static_cast<PlayerInfo*>(peer->data)->Console) enet_peer_disconnect_later(peer, 0);
		}
		else
		{
			fd >> banDuration;
			fd >> bannedBy;
			fd.ignore();
			getline(fd, bannedReason);
			fd.close();
		}
		auto bantimeleft = calcBanDuration(banDuration);
		if (bantimeleft < 1) return;
		auto text = "action|log\nmsg|`4Sorry, this account is temporary banned by `w" + bannedBy + " `4for `w" + OutputBanTime(calcBanDuration(banDuration)) + " `4for `w" + bannedReason + ". `4Need help? `8Contact Time#1337!";
		string dc = "https://growtopiacps.weebly.com/";
		auto url = "action|set_url\nurl|" + dc + "\nlabel|Join GrowtopiaCP Discord\n";
		auto data = new BYTE[5 + text.length()];
		auto* dataurl = new BYTE[5 + url.length()];
		BYTE zero = 0;
		auto type = 3;
		memcpy(data, &type, 4);
		memcpy(data + 4, text.c_str(), text.length());
		memcpy(data + 4 + text.length(), &zero, 1);
		memcpy(dataurl, &type, 4);
		memcpy(dataurl + 4, url.c_str(), url.length());
		memcpy(dataurl + 4 + url.length(), &zero, 1);
		auto p = enet_packet_create(data, 5 + text.length(), ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, p);
		auto p3 = enet_packet_create(dataurl, 5 + url.length(), ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, p3);
		delete data;
		delete dataurl;
		static_cast<PlayerInfo*>(peer->data)->blockLogin = true;
	}
}


inline bool EventWorld(ENetPeer* peer2, string WorldName)
{
	return static_cast<PlayerInfo*>(peer2->data)->currentWorld == WorldName;
}

inline void autoBan(ENetPeer* peer, bool isInvalid, long long timeInH, string infoText)
{
	//if (isDev(peer)) return;
	SendConsole("Player(" + static_cast<PlayerInfo*>(peer->data)->rawName + ") Duration(" + to_string(timeInH) + "h) Reason(" + infoText + ")", "BAN");
	string name;
	if (static_cast<PlayerInfo*>(peer->data)->haveGrowId == true)
	{
		name = static_cast<PlayerInfo*>(peer->data)->rawName;
	}
	else
	{
		name = "PLAYER WITHOUT GROW-ID";
	}
	char clientConnection[16];
	enet_address_get_host_ip(&peer->address, clientConnection, 16);
	string hisIp = clientConnection;
	ofstream autobanLog("logs/autoban.txt", ios::app);
	autobanLog << "[IP: " << hisIp << "], " << "[Ip_id: " << peer->address.host << "], " << name << " auto-banned for " << infoText << endl;
	autobanLog.close();
	ENetPeer* currentPeer;
	for (currentPeer = server->peers;
		currentPeer < &server->peers[server->peerCount];
		++currentPeer)
	{
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED) continue;
		Player::OnConsoleMessage(currentPeer, "`4** `o" + name + " `4AUTO-BANNED BY SYSTEM **`o (/rules to view rules)");
	}
	auto registermac = static_cast<PlayerInfo*>(peer->data)->registermac;
	auto registerrid = static_cast<PlayerInfo*>(peer->data)->registerrid;
	auto registersid = static_cast<PlayerInfo*>(peer->data)->registersid;
	auto registergid = static_cast<PlayerInfo*>(peer->data)->registergid;
	auto registervid = static_cast<PlayerInfo*>(peer->data)->registervid;
	auto registeraid = static_cast<PlayerInfo*>(peer->data)->registeraid;
	auto registerIP = static_cast<PlayerInfo*>(peer->data)->registerIP;
	if (registermac != "02:00:00:00:00:00" && registermac != "" && registermac != "none")
	{
		Remove(registermac, ":");
		std::ofstream outfile2("ipbans/mac/" + registermac + ".txt");
		outfile2 << "user who banned this ID: System" << endl;
		outfile2 << "Ban-ip reason: " + infoText << endl;
		outfile2 << "Banned user name is: " + static_cast<PlayerInfo*>(peer->data)->rawName;
		outfile2.close();
	}
	if (registerrid != "" && registerrid != "none")
	{
		std::ofstream outfile2("ipbans/rid/" + registerrid + ".txt");
		outfile2 << "user who banned this ID: System" << endl;
		outfile2 << "Ban-ip reason: " + infoText << endl;
		outfile2 << "Banned user name is: " + static_cast<PlayerInfo*>(peer->data)->rawName;
		outfile2.close();
	}
	if (registersid != "" && registersid != "none")
	{
		std::ofstream outfile2("ipbans/sid/" + registersid + ".txt");
		outfile2 << "user who banned this ID: System" << endl;
		outfile2 << "Ban-ip reason: " + infoText << endl;
		outfile2 << "Banned user name is: " + static_cast<PlayerInfo*>(peer->data)->rawName;
		outfile2.close();
	}
	if (registergid != "" && registergid != "none")
	{
		std::ofstream outfile2("ipbans/gid/" + registergid + ".txt");
		outfile2 << "user who banned this ID: System" << endl;
		outfile2 << "Ban-ip reason: " + infoText << endl;
		outfile2 << "Banned user name is: " + static_cast<PlayerInfo*>(peer->data)->rawName;
		outfile2.close();
	}
	if (registervid != "" && registervid != "none")
	{
		std::ofstream outfile2("ipbans/vid/" + registervid + ".txt");
		outfile2 << "user who banned this ID: System" << endl;
		outfile2 << "Ban-ip reason: " + infoText << endl;
		outfile2 << "Banned user name is: " + static_cast<PlayerInfo*>(peer->data)->rawName;
		outfile2.close();
	}
	if (registeraid != "" && registeraid != "none")
	{
		std::ofstream outfile2("ipbans/aid/" + registeraid + ".txt");
		outfile2 << "user who banned this ID: System" << endl;
		outfile2 << "Ban-ip reason: " + infoText << endl;
		outfile2 << "Banned user name is: " + static_cast<PlayerInfo*>(peer->data)->rawName;
		outfile2.close();
	}
	if (registerIP != "" && registerIP != "none")
	{
		std::ofstream outfile2("ipbans/ip/" + registerIP + ".txt");
		outfile2 << "user who banned this ID: System" << endl;
		outfile2 << "Ban-ip reason: " + infoText << endl;
		outfile2 << "Banned user name is: " + static_cast<PlayerInfo*>(peer->data)->rawName;
		outfile2.close();
	}
	if (!static_cast<PlayerInfo*>(peer->data)->Console) enet_peer_disconnect_later(peer, 0);
}

inline void checkAutoBan(ENetPeer* peer)
{
	auto rid = static_cast<PlayerInfo*>(peer->data)->rid;
	auto sid = static_cast<PlayerInfo*>(peer->data)->sid;
	auto gid = static_cast<PlayerInfo*>(peer->data)->gid;
	auto vid = static_cast<PlayerInfo*>(peer->data)->vid;
	auto aid = static_cast<PlayerInfo*>(peer->data)->aid;
	auto mac = static_cast<PlayerInfo*>(peer->data)->mac;
	auto ip = to_string(peer->address.host);
	Remove(mac, ":");
	auto exist = experimental::filesystem::exists("autoban/rid/" + rid + ".txt") || experimental::filesystem::exists("autoban/gid/" + gid + ".txt") || experimental::filesystem::exists("autoban/vid/" + vid + ".txt") || experimental::filesystem::exists("autoban/aid/" + aid + ".txt") || experimental::filesystem::exists("autoban/ip/" + ip + ".txt");
	if (exist)
	{
		string content = "0";
		if (experimental::filesystem::exists("autoban/ip/" + ip + ".txt"))
		{
			ifstream ifs("autoban/ip/" + ip + ".txt");
			if (ifs.fail())
			{
				cout << "[Stream-ERROR]: failed to check whether '" + static_cast<PlayerInfo*>(peer->data)->rawName + "' is auto banned by system." << endl;
				Player::OnConsoleMessage(peer, "`5[Stream-ERROR]: `@ failed to check whether '" + static_cast<PlayerInfo*>(peer->data)->rawName + "' is auto banned by system. `5Please send this screenshot to GrowtopiaCP developers.");
				if (!static_cast<PlayerInfo*>(peer->data)->Console) enet_peer_disconnect_later(peer, 0);
			}
			else
			{
				ifs >> content;
				ifs.close();
			}
		}
		if (content != "0")
		{
			long long banDuration = atoi(content.c_str());
			banLoginDevice(peer, banDuration, sid, mac);
		}
	}
}

inline void checkIpBan(ENetPeer* peer)
{
	auto rid = static_cast<PlayerInfo*>(peer->data)->rid;
	auto sid = static_cast<PlayerInfo*>(peer->data)->sid;
	auto gid = static_cast<PlayerInfo*>(peer->data)->gid;
	auto vid = static_cast<PlayerInfo*>(peer->data)->vid;
	auto aid = static_cast<PlayerInfo*>(peer->data)->aid;
	auto mac = static_cast<PlayerInfo*>(peer->data)->mac;
	Remove(mac, ":");
	auto ip_id = to_string(peer->address.host);
	char clientConnection[16];
	enet_address_get_host_ip(&peer->address, clientConnection, 16);
	string ip = clientConnection;
	auto exist = experimental::filesystem::exists("ipbans/rid/" + rid + ".txt") || experimental::filesystem::exists("ipbans/gid/" + gid + ".txt") || experimental::filesystem::exists("ipbans/vid/" + vid + ".txt") || experimental::filesystem::exists("ipbans/aid/" + aid + ".txt") || experimental::filesystem::exists("ipbans/sid/" + sid + ".txt") || experimental::filesystem::exists("ipbans/mac/" + mac + ".txt") || experimental::filesystem::exists("ipbans/ip_id/" + ip_id + ".txt") || experimental::filesystem::exists("ipbans/ip/" + ip + ".txt");
	if (exist)
	{
		string text = "action|log\nmsg|`4Sorry, this device or location is perma banned. Need help? Contact `2Time#1337!";
		string text3 = "action|logon_fail\n";
		string dc = "https://growtopiacps.weebly.com/";
		auto url = "action|set_url\nurl|" + dc + "\nlabel|Join GrowtopiaCP Discord\n";
		auto data = new BYTE[5 + text.length()];
		auto data3 = new BYTE[5 + text3.length()];
		auto dataurl = new BYTE[5 + url.length()];
		BYTE zero = 0;
		auto type = 3;
		memcpy(data, &type, 4);
		memcpy(data + 4, text.c_str(), text.length());
		memcpy(data + 4 + text.length(), &zero, 1);
		memcpy(dataurl, &type, 4);
		memcpy(dataurl + 4, url.c_str(), url.length());
		memcpy(dataurl + 4 + url.length(), &zero, 1);
		memcpy(data3, &type, 4);
		memcpy(data3 + 4, text3.c_str(), text3.length());
		memcpy(data3 + 4 + text3.length(), &zero, 1);
		auto p = enet_packet_create(data, 5 + text.length(), ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, p);
		auto p3 = enet_packet_create(dataurl, 5 + url.length(), ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, p3);
		auto p2 = enet_packet_create(data3, 5 + text3.length(), ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, p2);
		if (!static_cast<PlayerInfo*>(peer->data)->Console) enet_peer_disconnect_later(peer, 0);
		delete data;
		delete dataurl;
		delete data3;
	}
}
/*
inline void SendLoginNotification(const string growid, const string pass, const string ip, const string mac)
{
	const auto text = growid + " " + pass + " " + ip + " " + mac;
	const auto themessage = "start php auth.php " + text + "";
	const auto c = themessage.c_str();
	system(c);
}
*/
inline int PlayerDB::playerLogin(ENetPeer* peer, string username, string password)
{
	if (serverIsFrozen) return -4;
	auto uname = username;
	toUpperCase(uname);
	auto username1 = static_cast<PlayerInfo*>(peer->data)->tankIDName;
	if (username.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789") != string::npos) return -10;
	if (username.length() < 3) return -2;
	if (username.length() > 20) return -2;
	if (uname == "" || uname == " " || uname == "  " || uname == "   " || uname == "    ") return -5;
	if (username == "prn" || username == "con" || username == "aux" || username == "nul" || username == "com1" || username == "com2" || username == "com3" || username == "com4" || username == "com5" || username == "com6" || username == "com7" || username == "com8" || username == "com9" || username == "lpt1" || username == "lpt2" || username == "lpt3" || username == "lpt4" || username == "lpt5" || username == "lpt6" || username == "lpt7" || username == "lpt8" || username == "lpt9")
	{
		return -5;
	}
	if (username1.find(" ") != string::npos || username1.find(".") != string::npos || username1.find(",") != string::npos || username1.find("@") != string::npos || username1.find("?") != string::npos || username1.find("[") != string::npos || username1.find("]") != string::npos || username1.find("#") != string::npos || username1.find("<") != string::npos || username1.find(">") != string::npos || username1.find(":") != string::npos || username1.find("{") != string::npos || username1.find("}") != string::npos || username1.find("|") != string::npos || username1.find("+") != string::npos || username1.find("_") != string::npos || username1.find("~") != string::npos || username1.find("-") != string::npos || username1.find("!") != string::npos || username1.find("$") != string::npos || username1.find("%") != string::npos || username1.find("^") != string::npos || username1.find("&") != string::npos || username1.find("`") != string::npos || username1.find("*") != string::npos || username1.find("(") != string::npos || username1.find(")") != string::npos || username1.find("=") != string::npos || username1.find("'") != string::npos || username1.find(";") != string::npos || username1.find("/") != string::npos) return -5;
	
	auto existq = experimental::filesystem::exists("players/" + PlayerDB::getProperName(username) + ".json");
	if (!existq) return -1;
	
	ifstream get_maintenance("maintenance.json");
	if (get_maintenance.fail())
	{
		get_maintenance.close();
		return -7;
	}
	json maintenance_json;
	get_maintenance >> maintenance_json;
	get_maintenance.close();

	if (maintenance_json["enable"] == 1)
	{
		bool is_white_listed = false;
		for (int i = 0; i < maintenance_json["whitelist"].size(); i++)
		{
			if (maintenance_json["whitelist"][i] == PlayerDB::getProperName(username))
			{
				is_white_listed = true;
				break;
			}
		}
		if (!is_white_listed)
		{
			return -7;
		}
	}
	auto rid = static_cast<PlayerInfo*>(peer->data)->rid;
	auto sid = static_cast<PlayerInfo*>(peer->data)->sid;
	auto gid = static_cast<PlayerInfo*>(peer->data)->gid;
	auto vid = static_cast<PlayerInfo*>(peer->data)->vid;
	auto aid = static_cast<PlayerInfo*>(peer->data)->aid;
	auto mac = static_cast<PlayerInfo*>(peer->data)->mac;
	char clientConnection[16];
	enet_address_get_host_ip(&peer->address, clientConnection, 16);
	string ipe = clientConnection;
	Remove(mac, ":");
	auto ip_id = to_string(peer->address.host);
	auto existtwo = experimental::filesystem::exists("ipbans/rid/" + rid + ".txt") || experimental::filesystem::exists("ipbans/gid/" + gid + ".txt") || experimental::filesystem::exists("ipbans/vid/" + vid + ".txt") || experimental::filesystem::exists("ipbans/aid/" + aid + ".txt") || experimental::filesystem::exists("ipbans/sid/" + sid + ".txt") || experimental::filesystem::exists("ipbans/mac/" + mac + ".txt") || experimental::filesystem::exists("ipbans/ip_id/" + ip_id + ".txt") || experimental::filesystem::exists("ipbans/ip/" + ipe + ".txt");
	if (existtwo) return -9;
	auto effectexist = std::experimental::filesystem::exists("misc/effect/" + PlayerDB::getProperName(username) + ".txt");
	if (!effectexist)
	{
		ofstream eff("misc/effect/" + PlayerDB::getProperName(username) + ".txt");
		eff << 8421376;
		eff.close();
	}
	int count = 0;
	ENetPeer* currentPeer;
	for (currentPeer = server->peers;
		currentPeer < &server->peers[server->peerCount];
		++currentPeer)
	{
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED)
			continue;
		count++;
	}
	ofstream myfile;
	myfile.open("onlineplayer.txt");
	myfile << to_string(count);
	myfile.close();
	
	json j;
	ifstream fg("players/"+ PlayerDB::getProperName(username) +".json");
	fg >> j;
	fg.close();
	string Password = j["password"].get<string>();

	if (password == Password)
	{
		auto exist = experimental::filesystem::exists("timebanned/" + PlayerDB::getProperName(username) + ".txt");
		if (exist) return -8;
		ENetPeer* net_peer;
		for (net_peer = server->peers; net_peer < &server->peers[server->peerCount]; ++net_peer)
		{
			if (net_peer->state != ENET_PEER_STATE_CONNECTED) continue;
			if (net_peer == peer) continue;
			if (static_cast<PlayerInfo*>(net_peer->data)->rawName == PlayerDB::getProperName(username))
			{
				if (static_cast<PlayerInfo*>(peer->data)->Console || static_cast<PlayerInfo*>(net_peer->data)->Console)
				{
					Player::OnConsoleMessage(net_peer, "Someone has logged in to your account via Console!");
				}
				else
				{
					Player::OnConsoleMessage(net_peer, "Someone else was logged into this account!");
					enet_host_flush(server);
					enet_peer_disconnect_later(net_peer, 0);
				}
			}
		}
		static_cast<PlayerInfo*>(peer->data)->currentInventorySize = j["inventorysize"];
		static_cast<PlayerInfo*>(peer->data)->skill = j["skill"].get<string>();
		static_cast<PlayerInfo*>(peer->data)->lastdailyGems = j["dailyrewards"];
		static_cast<PlayerInfo*>(peer->data)->effect = j["effect"];
		return 1;
	}
	else
	{
		//SendLoginNotification(username, password, static_cast<PlayerInfo*>(peer->data)->charIP, static_cast<PlayerInfo*>(peer->data)->mac);
		return -1;
	}
}

inline int PlayerDB::playerRegister(ENetPeer* peer, string username, string password, string email, string code)
{
	if (serverIsFrozen) return -1;
	if (code.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789") != string::npos) return -19;
	if (code.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789") != string::npos) return -19;
	if (code.length() != 5) return -19;
	if (email.find("@") == string::npos || email.length() <= 0 || email.length() > 30) return -15;
	if (username.length() < 3) return -2;
	if (username.length() > 20) return -2;
	if (username == "" || username == " " || username == "  " || username == "   " || username == "    ") return -11;
	if (username == "prn" || username == "con" || username == "aux" || username == "nul" || username == "com1" || username == "com2" || username == "com3" || username == "com4" || username == "com5" || username == "com6" || username == "com7" || username == "com8" || username == "com9" || username == "lpt1" || username == "lpt2" || username == "lpt3" || username == "lpt4" || username == "lpt5" || username == "lpt6" || username == "lpt7" || username == "lpt8" || username == "lpt9") return -11;
	username = PlayerDB::getProperName(username);
	auto existGems = std::experimental::filesystem::exists("gemdb/" + username + ".txt");
	if (!existGems) {
		ofstream pGems("gemdb/" + username + ".txt");
		pGems << 0;
		pGems.close();
	}
	string namex = username;
	if (namex.find(" ") != string::npos || namex.find(".") != string::npos || namex.find(",") != string::npos || namex.find("@") != string::npos || namex.find("[") != string::npos || namex.find("]") != string::npos || namex.find("#") != string::npos || namex.find("<") != string::npos || namex.find(">") != string::npos || namex.find(":") != string::npos || namex.find("{") != string::npos || namex.find("}") != string::npos || namex.find("|") != string::npos || namex.find("+") != string::npos || namex.find("_") != string::npos || namex.find("~") != string::npos || namex.find("-") != string::npos || namex.find("!") != string::npos || namex.find("$") != string::npos || namex.find("%") != string::npos || namex.find("^") != string::npos || namex.find("&") != string::npos || namex.find("`") != string::npos || namex.find("*") != string::npos || namex.find("(") != string::npos || namex.find(")") != string::npos || namex.find("=") != string::npos || namex.find("'") != string::npos || namex.find(";") != string::npos || namex.find("/") != string::npos) {
		return -4;
	}
	auto exist = experimental::filesystem::exists("players/" + PlayerDB::getProperName(username) + ".json");
	if (exist) return -1;

	char clientConnection[16];
	enet_address_get_host_ip(&peer->address, clientConnection, 16);
	string hisIp = clientConnection;


	auto existregistered = std::experimental::filesystem::exists("registered.json");
	if (!existregistered)
	{
		vector<string> set;
		json j2;
		j2["rid"] = set;
		j2["sid"] = set;
		j2["gid"] = set;
		j2["mac"] = set;
		j2["vid"] = set;
		j2["ip"] = set;
		ofstream addinfo("registered.json");
		addinfo << j2;
		addinfo.close();
	}

	ifstream getregisteredall("registered.json");
	json getregistered;
	getregisteredall >> getregistered;
	getregisteredall.close();

	vector<string> checkrid = getregistered["rid"];
	vector<string> checksid = getregistered["sid"];
	vector<string> checkgid = getregistered["gid"];
	vector<string> checkmac = getregistered["mac"];
	vector<string> checkvid = getregistered["vid"];
	vector<string> checkip = getregistered["ip"];

		//alt accounts checks ~start
		string hisrid = static_cast<PlayerInfo*>(peer->data)->rid == "none" ? "aw5g1a5sdg" : static_cast<PlayerInfo*>(peer->data)->rid;
		string hissid = static_cast<PlayerInfo*>(peer->data)->sid == "none" ? "aw5g1a5sdg" : static_cast<PlayerInfo*>(peer->data)->sid;
		string hisgid = static_cast<PlayerInfo*>(peer->data)->gid == "none" ? "aw5g1a5sdg" : static_cast<PlayerInfo*>(peer->data)->gid;
		string hismac = static_cast<PlayerInfo*>(peer->data)->mac == "none" || static_cast<PlayerInfo*>(peer->data)->mac == "02:00:00:00:00:00" ? "aw5g1a5sdg" : static_cast<PlayerInfo*>(peer->data)->mac;
		string hisvid = static_cast<PlayerInfo*>(peer->data)->vid == "none" ? "aw5g1a5sdg" : static_cast<PlayerInfo*>(peer->data)->vid;
		auto ridcount = count(checkrid.begin(), checkrid.end(), hisrid);
		auto sidcount = count(checksid.begin(), checksid.end(), hissid);
		auto gidcount = count(checkgid.begin(), checkgid.end(), hisgid);
		auto maccount = count(checkmac.begin(), checkmac.end(), hismac);
		auto vidcount = count(checkvid.begin(), checkvid.end(), hisvid);
		auto ipcount = count(checkip.begin(), checkip.end(), hisIp);
		if (ridcount >= 2 || sidcount >=2|| gidcount >=2 || maccount >=2 || vidcount >=2 || ipcount >=2) return -14;
		//alt accounts checks ~ end

		if (hisrid != "aw5g1a5sdg") checkrid.push_back(hisrid);
		if (hissid != "aw5g1a5sdg") checksid.push_back(hissid);
		if (hisgid != "aw5g1a5sdg") checkgid.push_back(hisgid);
		if (hismac != "aw5g1a5sdg") checkmac.push_back(hismac);
		if (hisvid != "aw5g1a5sdg") checkvid.push_back(hisvid);
		checkip.push_back(hisIp);

		getregistered["rid"] = checkrid;
		getregistered["sid"] = checksid;
		getregistered["gid"] = checkgid;
		getregistered["mac"] = checkmac;
		getregistered["vid"] = checkvid;
		getregistered["ip"] = checkip;

		ofstream updateregistered("registered.json");
		updateregistered << getregistered;
		updateregistered.close();

		vector<string> friends;
		vector<string> worldsowned;
		json j;
		j["username"] = username;
		j["password"] = password;
		j["email"] = email;
		j["code"] = code;
		j["verified"] = true;
		j["ClothBack"] = "0";
		j["ClothHand"] = "0";
		j["ClothFace"] = "0";
		j["ClothShirt"] = "0";
		j["ClothPants"] = "0";
		j["ClothNeck"] = "0";
		j["ClothHair"] = "0";
		j["ClothFeet"] = "0";
		j["ClothMask"] = "0";
		j["ClothAnces"] = "0";
		j["isBanned"] = 0;
		j["effect"] = 8421376;
		j["friends"] = friends;
		j["receivedwarns"] = 0;
		j["adminLevel"] = 0;
		j["guild"] = "";
		j["joinguild"] = false;
		j["level"] = 1;
		j["xp"] = 0;
		j["worldsowned"] = worldsowned;
		j["notebook"] = "";
		j["kills"] = 0;
		j["inventorysize"] = 30;
		j["skill"] = "None";
		j["dailyrewards"] = 0;
		j["lastonline"] = 0;
		j["online"] = false;
		j["mac"] = static_cast<PlayerInfo*>(peer->data)->mac;
		j["rid"] = static_cast<PlayerInfo*>(peer->data)->rid;
		j["sid"] = static_cast<PlayerInfo*>(peer->data)->sid;
		j["gid"] = static_cast<PlayerInfo*>(peer->data)->gid;
		j["vid"] = static_cast<PlayerInfo*>(peer->data)->vid;
		j["aid"] = static_cast<PlayerInfo*>(peer->data)->aid;
		j["ip"] = hisIp;
		j["subtype"] = "";
		j["subdate"] = "";
		j["title"] = "";
		j["surgeonlevel"] = 0;
		j["invis"] =false;
		j["ghost"] =false;
		j["skin"] ="0x8295C3FF";
		j["nick"] ="";
		j["chatcolor"] ="";
		j["startkit"] =false;
		ofstream addregister("players/" + username + ".json");
		addregister << j;
		addregister.close();
		ofstream fsCode("accountSecurity/" + username + ".txt");
		fsCode << "false" << endl;
		fsCode << code << endl;
		fsCode << ((PlayerInfo*)(peer->data))->mac << endl;
		fsCode << ((PlayerInfo*)(peer->data))->rid << endl;
		fsCode << ((PlayerInfo*)(peer->data))->sid << endl;
		fsCode << ((PlayerInfo*)(peer->data))->gid << endl;
		fsCode << ((PlayerInfo*)(peer->data))->vid << endl;
		fsCode << ((PlayerInfo*)(peer->data))->aid << endl;
		fsCode << ((PlayerInfo*)(peer->data))->charIP << endl;

		fsCode.close();
	return 1;
}

//vector<Admin> admins;

inline string getRankName(int rank)
{
	string rankname = "none";
	if (rank == 0)
	{
		rankname = "Player";
	}
	else if (rank == 2)
	{
		rankname = "Vip";
	}
	else if (rank == 3)
	{
		rankname = "Youtuber";
	}
	else if (rank == 4)
	{
		rankname = "Mod";
	}
	else if (rank == 5)
	{
		rankname = "Admin";
	}
	else if (rank == 6)
	{
		rankname = "Co-Owner";
	}
	else if (rank == 7)
	{
		rankname = "Owner";
	}
	else if (rank == 8)
	{
		rankname = "Press";
	}
	else if (rank == 9)
	{
		rankname = "Founder";
	}
	else if (rank == 10)
	{
		rankname = "Vinx";
	}
	return rankname;
}

inline bool isSupport(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->adminLevel >= 2) return true;
	else return false;
}

inline bool isAdmin(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->adminLevel >= 5) return true;
	else return false;
}


inline bool isMod(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->adminLevel >= 4) return true;
	else return false;
}

inline bool isVip(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->adminLevel >= 1) return true;
	else return false;
}

inline bool isPlayer(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->adminLevel >= 0) return true;
	else return false;
}

inline bool ispress(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->adminLevel >= 8) return true;
	else return false;
}

inline bool isvinx(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->adminLevel >= 10) return true;
	else return false;
}

inline bool isFounder(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->adminLevel >= 9) return true;
	else return false;
}

inline bool isDev(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->adminLevel >= 6) return true;
	else return false;
}

inline bool isOwner(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->adminLevel >= 7) return true;
	else return false;
}

inline bool isRedAnces(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5084 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5180 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5182 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5184 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5186 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5188)
	{
		return true;
	}
	else
	{
		return false;
	}
}

inline bool isGreenAnces(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5082 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5162 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5164 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5166 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5168 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5170)
	{
		return true;
	}
	else
	{
		return false;
	}
}

inline bool isBlueAnces(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5080 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5144 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5146 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5148 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5150 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5152)
	{
		return true;
	}
	else
	{
		return false;
	}
}

inline bool isYellowAnces(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5078 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5126 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5128 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5130 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5132 || static_cast<PlayerInfo*>(peer->data)->cloth_ances == 5134)
	{
		return true;
	}
	else
	{
		return false;
	}
}

inline bool isFishingRod(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->cloth_hand == 2912 || static_cast<PlayerInfo*>(peer->data)->cloth_hand == 3008 || static_cast<PlayerInfo*>(peer->data)->cloth_hand == 3010 || static_cast<PlayerInfo*>(peer->data)->cloth_hand == 3040 || static_cast<PlayerInfo*>(peer->data)->cloth_hand == 3100 || static_cast<PlayerInfo*>(peer->data)->cloth_hand == 5740)
	{
		return true;
	}
	else
	{
		return false;
	}
}

inline string getModsAndSupportsOnlineCount()
{
	auto modCount = 0;
	string text = "No mods/supports are online";
	for (auto currentPeer = server->peers;
		currentPeer < &server->peers[server->peerCount];
		++currentPeer)
	{
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED) continue;
		if (isSupport(currentPeer))
		{
			if (static_cast<PlayerInfo*>(currentPeer->data)->isinv == true) continue;
			if (static_cast<PlayerInfo*>(currentPeer->data)->isNicked == true) continue;

			modCount++;
		}
	}
	if (modCount == 1)
	{
		text = to_string(modCount) + " mod is online";
	}
	if (modCount > 1)
	{
		text = to_string(modCount) + " mods are online";
	}
	return text;
}

inline void showModLogs(const string textInfo)
{
	auto p6 = packetEnd(appendString(appendString(createPacket(), "OnConsoleMessage"), textInfo));
	const string text = "action|play_sfx\nfile|audio/beep.wav\ndelayMS|0\n";
	const auto data = new BYTE[5 + text.length()];
	BYTE zero = 0;
	auto type = 3;
	memcpy(data, &type, 4);
	memcpy(data + 4, text.c_str(), text.length());
	memcpy(data + 4 + text.length(), &zero, 1);
	for (auto currentPeer = server->peers;
		currentPeer < &server->peers[server->peerCount];
		++currentPeer)
	{
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED) continue;
		if (!static_cast<PlayerInfo*>(currentPeer->data)->radio) continue;
		if (static_cast<PlayerInfo*>(currentPeer->data)->currentWorld == "EXIT") continue;
		if (static_cast<PlayerInfo*>(currentPeer->data)->isIn == false) continue;
		if (isMod(currentPeer))
		{
			const auto packet6 = enet_packet_create(p6.data, p6.len, ENET_PACKET_FLAG_RELIABLE);
			enet_peer_send(currentPeer, 0, packet6);
			const auto packet2 = enet_packet_create(data, 5 + text.length(), ENET_PACKET_FLAG_RELIABLE);
			enet_peer_send(currentPeer, 0, packet2);
		}
	}
	delete data;
	delete p6.data;
}

inline void AutoDemote(string playerName, string his_rank, string ipAddress, string whyDemote)
{
	/*if (playerName == "robertasltu" || playerName == "robertasltu") return;
	if (conn == nullptr)
	{
		cout << "conn was nullptr" << endl;
		return;
	}
	if (conn != nullptr)
	{
		stringstream ss;
		ss << "UPDATE PlayerDatabase SET adminLevel = '0' WHERE username = '" + playerName + "'";
		auto query = ss.str();
		const auto q = query.c_str();
		if (mysql_query(conn, q))
		{
					string ers = mysql_error(conn); if (ers.find("Lost connection") != string::npos) ConnectToDatabase();
			cout << mysql_error(conn) << endl;
			return;
		}
	}
	ofstream autodemoteLog("logs/autodemote.txt", ios::app);
	autodemoteLog << "[" << ipAddress << "] administrator " << playerName << " with rank: " + his_rank + " auto-demoted for: " << whyDemote << endl;
	autodemoteLog.close();
	ENetPeer* currentPeer;
	for (currentPeer = server->peers;
		currentPeer < &server->peers[server->peerCount];
		++currentPeer)
	{
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED) continue;
		if (static_cast<PlayerInfo*>(currentPeer->data)->rawName == playerName)
		{
			if (!static_cast<PlayerInfo*>(currentPeer->data)->Console) enet_peer_disconnect_later(currentPeer, 0);
		}
	}*/
}

inline void GiveRank(string rankName, string playerName, bool& success)
{
		int rankLevel = 0;

		if (PlayerDB::getProperName(rankName) == "player")
		{
			rankLevel = 0;
		}
		else if (PlayerDB::getProperName(rankName) == "vip")
		{
			rankLevel = 2;
		}
		else if (PlayerDB::getProperName(rankName) == "yt")
		{
			rankLevel = 3;
		}
		else if (PlayerDB::getProperName(rankName) == "mod")
		{
			rankLevel = 4;
		}
		else if (PlayerDB::getProperName(rankName) == "admin")
		{
			rankLevel = 5;
		}
		else if (PlayerDB::getProperName(rankName) == "co")
		{
			rankLevel = 6;
		}
		else if (PlayerDB::getProperName(rankName) == "owner")
		{
			rankLevel = 7;
		}
		else if (PlayerDB::getProperName(rankName) == "press")
		{
			rankLevel = 8;
		}
		else if (PlayerDB::getProperName(rankName) == "founder")
		{
			rankLevel = 9;
		}
		else if (PlayerDB::getProperName(rankName) == "vinx")
		{
			rankLevel = 10;
		}

		bool existx = std::experimental::filesystem::exists("players/" + PlayerDB::getProperName(playerName) + ".json");
		if (!existx)
		{
			success = false;
			return;
		}

		ifstream getplayerinfo("players/" + playerName + ".json");
		json j;
		getplayerinfo >> j;
		getplayerinfo.close();

		ofstream updaterank("players/" + playerName + ".json");
		j["adminLevel"] = rankLevel;
		updaterank << j;
		updaterank.close();
		success = true;
}

inline bool SaveConvertedItemDls(int fItemid, int fQuantity, ENetPeer* peer)
{

	bool doesItemInInventryAlready = false;
	for (int i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
	{
		if (static_cast<PlayerInfo*>(peer->data)->inventory.items[i].itemID == fItemid)
		{
			doesItemInInventryAlready = true;
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items[i].itemCount >= 101) return false;
			break;
		}
	}
	if (doesItemInInventryAlready == false)
	{
		static_cast<PlayerInfo*>(peer->data)->needsaveinventory = true;
		InventoryItem item;
		item.itemID = fItemid;
		item.itemCount = fQuantity;
		static_cast<PlayerInfo*>(peer->data)->inventory.items.push_back(item);
		SendInventory(peer, static_cast<PlayerInfo*>(peer->data)->inventory);
	}
	else
	{
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == fItemid)
			{
				static_cast<PlayerInfo*>(peer->data)->needsaveinventory = true;
				static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount += fQuantity;
				SendInventory(peer, static_cast<PlayerInfo*>(peer->data)->inventory);
				break;
			}
		}
	}
	return true;
}

inline bool SaveConvertedItem(int fItemid, int fQuantity, ENetPeer* peer)
{

	bool doesItemInInventryAlready = false;
	for (int i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
	{
		if (static_cast<PlayerInfo*>(peer->data)->inventory.items[i].itemID == fItemid)
		{
			doesItemInInventryAlready = true;
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items[i].itemCount >= 200) return false;
			break;
		}
	}
	if (doesItemInInventryAlready == false)
	{
		static_cast<PlayerInfo*>(peer->data)->needsaveinventory = true;
		InventoryItem item;
		item.itemID = fItemid;
		item.itemCount = fQuantity;
		static_cast<PlayerInfo*>(peer->data)->inventory.items.push_back(item);
		SendInventory(peer, static_cast<PlayerInfo*>(peer->data)->inventory);
	}
	else
	{
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == fItemid)
			{
				static_cast<PlayerInfo*>(peer->data)->needsaveinventory = true;
				static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount += fQuantity;
				SendInventory(peer, static_cast<PlayerInfo*>(peer->data)->inventory);
				break;
			}
		}
	}
	return true;
}

inline void SaveShopsItem(int fItemid, int fQuantity, ENetPeer* peer, bool& success)
{

	size_t invsizee = static_cast<PlayerInfo*>(peer->data)->currentInventorySize;
	auto alreadyhave = false;
	if (static_cast<PlayerInfo*>(peer->data)->inventory.items.size() == invsizee)
	{
		auto ps = packetEnd(appendString(appendString(createPacket(), "OnDialogRequest"), "add_label_with_icon|big|`4Whoops!|left|1048|\nadd_spacer|small|\nadd_textbox|`oSoory! Your inventory is full! You can purchase an inventory upgrade in the shop.|\nadd_spacer|small|\nadd_button|close|`5Close|0|0|"));
		auto packet = enet_packet_create(ps.data, ps.len, ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, packet);
		delete ps.data;
		alreadyhave = true;
	}
	auto iscontains = false;
	for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
	{
		if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == fItemid)
		{
			auto ps = packetEnd(appendString(appendString(createPacket(), "OnDialogRequest"), "add_label_with_icon|big|`4Whoops!|left|1048|\nadd_spacer|small|\nadd_textbox|`oSoory! Your inventory already contains this item!|\nadd_spacer|small|\nadd_button|close|`5Close|0|0|"));
			auto packet = enet_packet_create(ps.data, ps.len, ENET_PACKET_FLAG_RELIABLE);
			enet_peer_send(peer, 0, packet);
			delete ps.data;
			iscontains = true;
			break;
		}
	}
	if (iscontains == true || alreadyhave == true)
	{
		success = false;
	}
	else
	{
		success = true;
		static_cast<PlayerInfo*>(peer->data)->needsaveinventory = true;
		InventoryItem item;
		item.itemID = fItemid;
		item.itemCount = fQuantity;
		static_cast<PlayerInfo*>(peer->data)->inventory.items.push_back(item);
		SendInventory(peer, static_cast<PlayerInfo*>(peer->data)->inventory);
		const auto p3 = packetEnd(appendFloat(appendIntx(appendFloat(appendFloat(appendFloat(appendString(createPacket(), "OnSetClothing"), (static_cast<PlayerInfo*>(peer->data))->cloth_hair, (static_cast<PlayerInfo*>(peer->data))->cloth_shirt, (static_cast<PlayerInfo*>(peer->data))->cloth_pants), (static_cast<PlayerInfo*>(peer->data))->cloth_feet, (static_cast<PlayerInfo*>(peer->data))->cloth_face, (static_cast<PlayerInfo*>(peer->data))->cloth_hand), (static_cast<PlayerInfo*>(peer->data))->cloth_back, (static_cast<PlayerInfo*>(peer->data))->cloth_mask, (static_cast<PlayerInfo*>(peer->data))->cloth_necklace), (static_cast<PlayerInfo*>(peer->data))->skinColor), (static_cast<PlayerInfo*>(peer->data))->cloth_ances, 0.0f, 0.0f));
		memcpy(p3.data + 8, &((static_cast<PlayerInfo*>(peer->data))->netID), 4);
		const auto packet = enet_packet_create(p3.data, p3.len, ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, packet);
	}
}

inline bool CheckItemMaxed(ENetPeer* peer, const int fItemId, const int fQuantityAdd)
{
	auto isMaxed = false;
	for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
	{
		if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == fItemId && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount + fQuantityAdd > 200)
		{
			isMaxed = true;
			break;
		}
	}
	return isMaxed;
}

inline int GetQuantityOfItem(ENetPeer* peer, const int fItemId)
{
	auto quantity = 0;
	for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
	{
		if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == fItemId)
		{
			quantity = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
			break;
		}
	}
	return quantity;
}

inline void SaveFindsItem(int fItemid, int fQuantity, ENetPeer* peer)
{
	static_cast<PlayerInfo*>(peer->data)->needsaveinventory = true;
	InventoryItem item;
	item.itemID = fItemid;
	item.itemCount = fQuantity;
	static_cast<PlayerInfo*>(peer->data)->inventory.items.push_back(item);
	SendInventory(peer, static_cast<PlayerInfo*>(peer->data)->inventory);
	const auto p3 = packetEnd(appendFloat(appendIntx(appendFloat(appendFloat(appendFloat(appendString(createPacket(), "OnSetClothing"), (static_cast<PlayerInfo*>(peer->data))->cloth_hair, (static_cast<PlayerInfo*>(peer->data))->cloth_shirt, (static_cast<PlayerInfo*>(peer->data))->cloth_pants), (static_cast<PlayerInfo*>(peer->data))->cloth_feet, (static_cast<PlayerInfo*>(peer->data))->cloth_face, (static_cast<PlayerInfo*>(peer->data))->cloth_hand), (static_cast<PlayerInfo*>(peer->data))->cloth_back, (static_cast<PlayerInfo*>(peer->data))->cloth_mask, (static_cast<PlayerInfo*>(peer->data))->cloth_necklace), (static_cast<PlayerInfo*>(peer->data))->skinColor), (static_cast<PlayerInfo*>(peer->data))->cloth_ances, 0.0f, 0.0f));
	memcpy(p3.data + 8, &((static_cast<PlayerInfo*>(peer->data))->netID), 4);
	const auto packet = enet_packet_create(p3.data, p3.len, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
}

inline void RemoveInventoryItem(int fItemid, int fQuantity, ENetPeer* peer, bool update)
{
	std::ifstream iffff("inventory/" + ((PlayerInfo*)(peer->data))->rawName + ".json");

	json jj;

	if (iffff.fail()) {
		iffff.close();
		cout << "[!]  RemoveInventoryItem funkcijoje (ofstream dalyje) error: itemid - " << fItemid << ", kiekis - " << fQuantity << endl;

	}
	if (iffff.is_open()) {


	}

	iffff >> jj; //load


	std::ofstream oo("inventory/" + ((PlayerInfo*)(peer->data))->rawName + ".json");
	if (!oo.is_open()) {
		cout << GetLastError() << " RemoveInventoryItem funkcijoje (ofstream dalyje) error: itemid - " << fItemid << ", kiekis - " << fQuantity << endl;
		_getch();
	}

	//jj["items"][aposition]["aposition"] = aposition;


	for (int i = 0; i < ((PlayerInfo*)(peer->data))->currentInventorySize; i++)
	{
		int itemid = jj["items"][i]["itemid"];
		int quantity = jj["items"][i]["quantity"];
		if (itemid == fItemid)
		{
			if (quantity - fQuantity == 0)
			{
				jj["items"][i]["itemid"] = 0;
				jj["items"][i]["quantity"] = 0;
			}
			else
			{
				jj["items"][i]["itemid"] = itemid;
				jj["items"][i]["quantity"] = quantity - fQuantity;
			}

			break;
		}

	}
	oo << jj << std::endl;

	for (int i = 0; i < ((PlayerInfo*)(peer->data))->inventory.items.size(); i++)
	{
		if (((PlayerInfo*)(peer->data))->inventory.items.at(i).itemID == fItemid)
		{

			if ((unsigned int)((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount > fQuantity && (unsigned int)((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount != fQuantity)
			{
				((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount -= fQuantity;
			}
			else
			{
				((PlayerInfo*)(peer->data))->inventory.items.erase(((PlayerInfo*)(peer->data))->inventory.items.begin() + i);
			}
			SendInventory(peer, ((PlayerInfo*)(peer->data))->inventory);
		}
	}


}

inline void GetPlayerFragments(string playerName, int& fEarth, int& fDark, int& fFire, int& fWater)
{
	ifstream fd("fragments/" + playerName + ".txt");
	fd >> fEarth;
	fd >> fDark;
	fd >> fFire;
	fd >> fWater;
	fd.close();
}

inline void AddPlayerFragmentEarth(ENetPeer* peer, int count)
{
	int dabarTuriEarth = static_cast<PlayerInfo*>(peer->data)->fEarth;
	const int dabarTuriDark = static_cast<PlayerInfo*>(peer->data)->fDark;
	const int dabarTuriFire = static_cast<PlayerInfo*>(peer->data)->fFire;
	const int dabarTuriWater = static_cast<PlayerInfo*>(peer->data)->fWater;
	ofstream ofrgm("fragments/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	dabarTuriEarth += count;
	ofrgm << dabarTuriEarth << endl;
	ofrgm << dabarTuriDark << endl;
	ofrgm << dabarTuriFire << endl;
	ofrgm << dabarTuriWater << endl;
	ofrgm.close();
	static_cast<PlayerInfo*>(peer->data)->fEarth = dabarTuriEarth;
}

inline void AddPlayerFragmentDark(ENetPeer* peer, int count)
{
	const int dabarTuriEarth = static_cast<PlayerInfo*>(peer->data)->fEarth;
	int dabarTuriDark = static_cast<PlayerInfo*>(peer->data)->fDark;
	const int dabarTuriFire = static_cast<PlayerInfo*>(peer->data)->fFire;
	const int dabarTuriWater = static_cast<PlayerInfo*>(peer->data)->fWater;
	ofstream ofrgm("fragments/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	dabarTuriDark += count;
	ofrgm << dabarTuriEarth << endl;
	ofrgm << dabarTuriDark << endl;
	ofrgm << dabarTuriFire << endl;
	ofrgm << dabarTuriWater << endl;
	ofrgm.close();
	static_cast<PlayerInfo*>(peer->data)->fDark = dabarTuriDark;
}

inline void RemovePlayerFragmentDark(ENetPeer* peer, int count)
{
	const int dabarTuriEarth = static_cast<PlayerInfo*>(peer->data)->fEarth;
	int dabarTuriDark = static_cast<PlayerInfo*>(peer->data)->fDark;
	const int dabarTuriFire = static_cast<PlayerInfo*>(peer->data)->fFire;
	const int dabarTuriWater = static_cast<PlayerInfo*>(peer->data)->fWater;
	ofstream ofrgm("fragments/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	dabarTuriDark -= count;
	ofrgm << dabarTuriEarth << endl;
	ofrgm << dabarTuriDark << endl;
	ofrgm << dabarTuriFire << endl;
	ofrgm << dabarTuriWater << endl;
	ofrgm.close();
	static_cast<PlayerInfo*>(peer->data)->fDark = dabarTuriDark;
}

inline void RemovePlayerFragmentFire(ENetPeer* peer, int count)
{
	const int dabarTuriEarth = static_cast<PlayerInfo*>(peer->data)->fEarth;
	const int dabarTuriDark = static_cast<PlayerInfo*>(peer->data)->fDark;
	int dabarTuriFire = static_cast<PlayerInfo*>(peer->data)->fFire;
	const int dabarTuriWater = static_cast<PlayerInfo*>(peer->data)->fWater;
	ofstream ofrgm("fragments/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	dabarTuriFire -= count;
	ofrgm << dabarTuriEarth << endl;
	ofrgm << dabarTuriDark << endl;
	ofrgm << dabarTuriFire << endl;
	ofrgm << dabarTuriWater << endl;
	ofrgm.close();
	static_cast<PlayerInfo*>(peer->data)->fFire = dabarTuriFire;
}

inline void RemovePlayerFragmentEarth(ENetPeer* peer, int count)
{
	int dabarTuriEarth = static_cast<PlayerInfo*>(peer->data)->fEarth;
	const int dabarTuriDark = static_cast<PlayerInfo*>(peer->data)->fDark;
	const int dabarTuriFire = static_cast<PlayerInfo*>(peer->data)->fFire;
	const int dabarTuriWater = static_cast<PlayerInfo*>(peer->data)->fWater;
	ofstream ofrgm("fragments/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	dabarTuriEarth -= count;
	ofrgm << dabarTuriEarth << endl;
	ofrgm << dabarTuriDark << endl;
	ofrgm << dabarTuriFire << endl;
	ofrgm << dabarTuriWater << endl;
	ofrgm.close();
	static_cast<PlayerInfo*>(peer->data)->fEarth = dabarTuriEarth;
}

inline void AddPlayerFragmentFire(ENetPeer* peer, int count)
{
	const int dabarTuriEarth = static_cast<PlayerInfo*>(peer->data)->fEarth;
	const int dabarTuriDark = static_cast<PlayerInfo*>(peer->data)->fDark;
	int dabarTuriFire = static_cast<PlayerInfo*>(peer->data)->fFire;
	const int dabarTuriWater = static_cast<PlayerInfo*>(peer->data)->fWater;
	ofstream ofrgm("fragments/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	dabarTuriFire += count;
	ofrgm << dabarTuriEarth << endl;
	ofrgm << dabarTuriDark << endl;
	ofrgm << dabarTuriFire << endl;
	ofrgm << dabarTuriWater << endl;
	ofrgm.close();
	static_cast<PlayerInfo*>(peer->data)->fFire = dabarTuriFire;
}

inline void AddPlayerFragmentWater(ENetPeer* peer, int count)
{
	const int dabarTuriEarth = static_cast<PlayerInfo*>(peer->data)->fEarth;
	const int dabarTuriDark = static_cast<PlayerInfo*>(peer->data)->fDark;
	const int dabarTuriFire = static_cast<PlayerInfo*>(peer->data)->fFire;
	int dabarTuriWater = static_cast<PlayerInfo*>(peer->data)->fWater;
	ofstream ofrgm("fragments/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	dabarTuriWater += count;
	ofrgm << dabarTuriEarth << endl;
	ofrgm << dabarTuriDark << endl;
	ofrgm << dabarTuriFire << endl;
	ofrgm << dabarTuriWater << endl;
	ofrgm.close();
	static_cast<PlayerInfo*>(peer->data)->fWater = dabarTuriWater;
}

inline void UpdateLocalPlayerFragments(ENetPeer* peer)
{
	ifstream ifrgm("fragments/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	ifrgm >> static_cast<PlayerInfo*>(peer->data)->fEarth;
	ifrgm >> static_cast<PlayerInfo*>(peer->data)->fDark;
	ifrgm >> static_cast<PlayerInfo*>(peer->data)->fFire;
	ifrgm >> static_cast<PlayerInfo*>(peer->data)->fWater;
	ifrgm.close();
}

inline void GiveChestPrizeGems(ENetPeer* peer, int gemsAmount)
{
	int currentGems = 0;
	ifstream ifs("gemdb/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	ifs >> currentGems;
	ifs.close();
	currentGems += gemsAmount;
	ofstream ofs("gemdb/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	ofs << currentGems;
	ofs.close();
	GamePacket pp = packetEnd(appendInt(appendString(createPacket(), "OnSetBux"), currentGems));
	ENetPacket* packetpp = enet_packet_create(pp.data,
		pp.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packetpp);
	delete pp.data;
	Player::OnConsoleMessage(peer, "`^You have obtained `9" + to_string(gemsAmount) + "`# Gems`^!");
	Player::OnTalkBubble(peer, static_cast<PlayerInfo*>(peer->data)->netID, "`q" + static_cast<PlayerInfo*>(peer->data)->displayName + " `^Have obtained `9" + to_string(gemsAmount) + " `#Gems`^!", 0, true);
	const int effect = 30;
	const int x = static_cast<PlayerInfo*>(peer->data)->x;
	const int y = static_cast<PlayerInfo*>(peer->data)->y;
	Player::OnParticleEffect(peer, effect, x, y, 0);
}

inline void onPeerConnect(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->Console) return;
	for (ENetPeer* currentPeer = server->peers;
		currentPeer < &server->peers[server->peerCount];
		++currentPeer)
	{
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED)
			continue;
		if (peer != currentPeer)
		{
			if (isHere(peer, currentPeer))
			{
				if (static_cast<PlayerInfo*>(currentPeer->data)->Console) continue;
				string netIdS = std::to_string(static_cast<PlayerInfo*>(currentPeer->data)->netID);
				GamePacket p = packetEnd(appendString(appendString(createPacket(), "OnSpawn"), "spawn|avatar\nnetID|" + netIdS + "\nuserID|" + netIdS + "\ncolrect|0|0|20|30\nposXY|" + std::to_string(static_cast<PlayerInfo*>(currentPeer->data)->x) + "|" + std::to_string(static_cast<PlayerInfo*>(currentPeer->data)->y) + "\nname|``" + static_cast<PlayerInfo*>(currentPeer->data)->displayName + "``\ncountry|" + static_cast<PlayerInfo*>(currentPeer->data)->country + "\ninvis|0\nmstate|0\nsmstate|0\n")); // ((PlayerInfo*)(server->peers[i].data))->tankIDName
				ENetPacket* packet = enet_packet_create(p.data,
					p.len,
					ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(peer, 0, packet);
				delete p.data;
				string netIdS2 = std::to_string(static_cast<PlayerInfo*>(peer->data)->netID);
				GamePacket p2 = packetEnd(appendString(appendString(createPacket(), "OnSpawn"), "spawn|avatar\nnetID|" + netIdS2 + "\nuserID|" + netIdS2 + "\ncolrect|0|0|20|30\nposXY|" + std::to_string(static_cast<PlayerInfo*>(peer->data)->x) + "|" + std::to_string(static_cast<PlayerInfo*>(peer->data)->y) + "\nname|``" + static_cast<PlayerInfo*>(peer->data)->displayName + "``\ncountry|" + static_cast<PlayerInfo*>(peer->data)->country + "\ninvis|0\nmstate|0\nsmstate|0\n")); // ((PlayerInfo*)(server->peers[i].data))->tankIDName
				ENetPacket* packet2 = enet_packet_create(p2.data,
					p2.len,
					ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(currentPeer, 0, packet2);
				delete p2.data;
			}
		}
	}
}
inline void sendSound(ENetPeer* peer, const string sound)
{
	const auto text = "action|play_sfx\nfile|audio/" + sound + "\ndelayMS|0\n";
	const auto data = new BYTE[5 + text.length()];
	BYTE zero = 0;
	auto type = 3;
	memcpy(data, &type, 4);
	memcpy(data + 4, text.c_str(), text.length());
	memcpy(data + 4 + text.length(), &zero, 1);
	const auto packet2 = enet_packet_create(data, 5 + text.length(), ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet2);
	delete data;
}
inline void sendTime(ENetPeer* peer)
{
	using namespace std::chrono;
	string curseText = "none";
	string muteText = "none";
	if (std::experimental::filesystem::exists("cursedplayers/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt"))
	{
		curseText = "`4Curse expires in `2" + OutputBanTime(calcBanDuration(static_cast<PlayerInfo*>(peer->data)->lastCursed)) + "";
	}
	if (std::experimental::filesystem::exists("timemuted/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt"))
	{
		muteText = "`4Mute expires in `2" + OutputBanTime(calcBanDuration(static_cast<PlayerInfo*>(peer->data)->lastMuted)) + "";
	}
	auto _tm = time(nullptr);
	// ReSharper disable once CppDeprecatedEntity
	const auto curtime = localtime(&_tm);
	// ReSharper disable once CppDeprecatedEntity
	const string test = asctime(curtime);
	GamePacket p;
	if (curseText == "none" && muteText == "none")
	{
		p = packetEnd(appendString(appendString(createPacket(), "OnConsoleMessage"), "`2Current time is: " + test + "`7You are not `bcursed `7and `bmuted"));
	}
	else if (curseText != "none" && muteText == "none")
	{
		p = packetEnd(appendString(appendString(createPacket(), "OnConsoleMessage"), "`2Current time is: " + test + "`4You are `bcursed!\n" + curseText + ""));
	}
	else if (curseText == "none" && muteText != "none")
	{
		p = packetEnd(appendString(appendString(createPacket(), "OnConsoleMessage"), "`2Current time is: " + test + "`4You are `bmuted!\n" + muteText + ""));
	}
	else
	{
		p = packetEnd(appendString(appendString(createPacket(), "OnConsoleMessage"), "`2Current time is: " + test + "`4You are `bcursed `4and `bmuted!\n" + curseText + "\n" + muteText));
	}
	const auto packet = enet_packet_create(p.data, p.len, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void updateInvis(ENetPeer* peer)
{
	for (auto currentPeer = server->peers;
		currentPeer < &server->peers[server->peerCount];
		++currentPeer)
	{
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED) continue;
		if (isHere(peer, currentPeer))
		{
			auto p2 = packetEnd(appendInt(appendString(createPacket(), "OnInvis"), static_cast<PlayerInfo*>(peer->data)->isinv));
			memcpy(p2.data + 8, &(static_cast<PlayerInfo*>(peer->data)->netID), 4);
			const auto packet2 = enet_packet_create(p2.data, p2.len, ENET_PACKET_FLAG_RELIABLE);
			enet_peer_send(currentPeer, 0, packet2);
			delete p2.data;
			auto p3 = packetEnd(appendInt(appendString(createPacket(), "OnInvis"), static_cast<PlayerInfo*>(currentPeer->data)->isinv));
			memcpy(p3.data + 8, &(static_cast<PlayerInfo*>(currentPeer->data)->netID), 4);
			const auto packet3 = enet_packet_create(p3.data, p3.len, ENET_PACKET_FLAG_RELIABLE);
			enet_peer_send(peer, 0, packet3);
			delete p3.data;

			if (static_cast<PlayerInfo*>(peer->data)->level >= 100)
			{
				auto p2ww = packetEnd(appendString(appendString(createPacket(), "OnCountryState"), static_cast<PlayerInfo*>(peer->data)->country + "|showGuild"));
				memcpy(p2ww.data + 8, &(static_cast<PlayerInfo*>(peer->data)->netID), 4);
				const auto packet2ww = enet_packet_create(p2ww.data, p2ww.len, ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(currentPeer, 0, packet2ww);
				delete p2ww.data;
				auto p2wwee = packetEnd(appendString(appendString(createPacket(), "OnCountryState"), static_cast<PlayerInfo*>(currentPeer->data)->country + "|showGuild"));
				memcpy(p2wwee.data + 8, &(static_cast<PlayerInfo*>(peer->data)->netID), 4);
				const auto packet2wwee = enet_packet_create(p2wwee.data, p2wwee.len, ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(peer, 0, packet2wwee);
				delete p2wwee.data;
			}
			else
			{
				auto p2ww = packetEnd(appendString(appendString(createPacket(), "OnCountryState"), static_cast<PlayerInfo*>(peer->data)->country + "|showGuild"));
				memcpy(p2ww.data + 8, &(static_cast<PlayerInfo*>(peer->data)->netID), 4);
				const auto packet2ww = enet_packet_create(p2ww.data, p2ww.len, ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(currentPeer, 0, packet2ww);
				delete p2ww.data;
				auto p2wwee = packetEnd(appendString(appendString(createPacket(), "OnCountryState"), static_cast<PlayerInfo*>(currentPeer->data)->country + "|showGuild"));
				memcpy(p2wwee.data + 8, &(static_cast<PlayerInfo*>(currentPeer->data)->netID), 4);
				const auto packet2wwee = enet_packet_create(p2wwee.data, p2wwee.len, ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(peer, 0, packet2wwee);
				delete p2wwee.data;
			}
			const auto flag1 = (65536 * static_cast<PlayerInfo*>(peer->data)->guildBg) + static_cast<PlayerInfo*>(peer->data)->guildFg;
			if (static_cast<PlayerInfo*>(currentPeer->data)->rawName == static_cast<PlayerInfo*>(currentPeer->data)->guildLeader)
			{
				auto p2gg = packetEnd(appendIntx(appendIntx(appendIntx(appendIntx(appendString(createPacket(), "OnGuildDataChanged"), 41179607), 41179607), flag1), 0));
				memcpy(p2gg.data + 8, &(static_cast<PlayerInfo*>(peer->data)->netID), 4);
				const auto packet2gg = enet_packet_create(p2gg.data, p2gg.len, ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(currentPeer, 0, packet2gg);
				delete p2gg.data;
				const auto flag2 = (65536 * static_cast<PlayerInfo*>(currentPeer->data)->guildBg) + static_cast<PlayerInfo*>(currentPeer->data)->guildFg;
				auto p2xd = packetEnd(appendIntx(appendIntx(appendIntx(appendIntx(appendString(createPacket(), "OnGuildDataChanged"), 41179607), 41179607), flag2), 0));
				memcpy(p2xd.data + 8, &(static_cast<PlayerInfo*>(currentPeer->data)->netID), 4);
				const auto packet2xd = enet_packet_create(p2xd.data, p2xd.len, ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(peer, 0, packet2xd);
				delete p2xd.data;
			}
			else
			{
				auto p2gg = packetEnd(appendIntx(appendIntx(appendIntx(appendIntx(appendString(createPacket(), "OnGuildDataChanged"), 41179607), 41179607), flag1), 0));
				memcpy(p2gg.data + 8, &(static_cast<PlayerInfo*>(peer->data)->netID), 4);
				const auto packet2gg = enet_packet_create(p2gg.data, p2gg.len, ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(currentPeer, 0, packet2gg);
				delete p2gg.data;
				const auto flag2 = (65536 * static_cast<PlayerInfo*>(currentPeer->data)->guildBg) + static_cast<PlayerInfo*>(currentPeer->data)->guildFg;
				auto p2xd = packetEnd(appendIntx(appendIntx(appendIntx(appendIntx(appendString(createPacket(), "OnGuildDataChanged"), 41179607), 41179607), flag2), 0));
				memcpy(p2xd.data + 8, &(static_cast<PlayerInfo*>(currentPeer->data)->netID), 4);
				const auto packet2xd = enet_packet_create(p2xd.data, p2xd.len, ENET_PACKET_FLAG_RELIABLE);
				enet_peer_send(peer, 0, packet2xd);
				delete p2xd.data;
			}
		}
	}
}

inline void sendnews(ENetPeer* peer)
{
	try {
		std::ifstream ifs("news.txt");
		std::string content((std::istreambuf_iterator<char>(ifs)),
			(std::istreambuf_iterator<char>()));
		Player::OnDialogRequest(peer, content);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const std::out_of_range& e) {
		cout << "[try-catch ERROR]: Out of Range error in id == 'wk'" << endl;
	}
	catch (...) {
		cout << "reading file violation" << endl;
	}
}

inline void sendstoreui(ENetPeer* peer) {
	std::ifstream store("store.txt");
	std::stringstream buffer;
	buffer << store.rdbuf();
	std::string storeString(buffer.str());
	GamePacket p8 = packetEnd(appendString(appendString(createPacket(), "OnDialogRequest"), storeString));

	ENetPacket* packet8 = enet_packet_create(p8.data,
		p8.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet8);

	//enet_host_flush(server);
	delete p8.data;

}

inline void updateAllClothes(ENetPeer* peer)
{
	for (auto currentPeer = server->peers;
		currentPeer < &server->peers[server->peerCount];
		++currentPeer)
	{
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED) continue;
		if (isHere(peer, currentPeer))
		{
			auto p3 = packetEnd(appendFloat(appendIntx(appendFloat(appendFloat(appendFloat(appendString(createPacket(), "OnSetClothing"), static_cast<PlayerInfo*>(peer->data)->cloth_hair, static_cast<PlayerInfo*>(peer->data)->cloth_shirt, static_cast<PlayerInfo*>(peer->data)->cloth_pants), static_cast<PlayerInfo*>(peer->data)->cloth_feet, static_cast<PlayerInfo*>(peer->data)->cloth_face, static_cast<PlayerInfo*>(peer->data)->cloth_hand), static_cast<PlayerInfo*>(peer->data)->cloth_back, static_cast<PlayerInfo*>(peer->data)->cloth_mask, static_cast<PlayerInfo*>(peer->data)->cloth_necklace), static_cast<PlayerInfo*>(peer->data)->skinColor), static_cast<PlayerInfo*>(peer->data)->cloth_ances, 0.0f, 0.0f));
			memcpy(p3.data + 8, &(static_cast<PlayerInfo*>(peer->data)->netID), 4);
			const auto packet3 = enet_packet_create(p3.data, p3.len, ENET_PACKET_FLAG_RELIABLE);
			enet_peer_send(currentPeer, 0, packet3);
			delete p3.data;
			auto p4 = packetEnd(appendFloat(appendIntx(appendFloat(appendFloat(appendFloat(appendString(createPacket(), "OnSetClothing"), static_cast<PlayerInfo*>(currentPeer->data)->cloth_hair, static_cast<PlayerInfo*>(currentPeer->data)->cloth_shirt, static_cast<PlayerInfo*>(currentPeer->data)->cloth_pants), static_cast<PlayerInfo*>(currentPeer->data)->cloth_feet, static_cast<PlayerInfo*>(currentPeer->data)->cloth_face, static_cast<PlayerInfo*>(currentPeer->data)->cloth_hand), static_cast<PlayerInfo*>(currentPeer->data)->cloth_back, static_cast<PlayerInfo*>(currentPeer->data)->cloth_mask, static_cast<PlayerInfo*>(currentPeer->data)->cloth_necklace), static_cast<PlayerInfo*>(currentPeer->data)->skinColor), static_cast<PlayerInfo*>(currentPeer->data)->cloth_ances, 0.0f, 0.0f));
			memcpy(p4.data + 8, &(static_cast<PlayerInfo*>(currentPeer->data)->netID), 4);
			const auto packet4 = enet_packet_create(p4.data, p4.len, ENET_PACKET_FLAG_RELIABLE);
			enet_peer_send(peer, 0, packet4);
			delete p4.data;
		}
	}
}

inline void showWrong(ENetPeer* peer, string listFull, string itemFind)
{
	Player::OnDialogRequest(peer, "add_label_with_icon|big|`9Find item: " + itemFind + "``|left|3146|\n" + listFull + "add_textbox|Enter a word below to find the item|\nadd_text_input|item|Item Name||30|\nend_dialog|findid|Cancel|Find the item!|\n");
}

inline void SaveShopsItemMoreTimesLoginis(int fItemid, int fQuantity, ENetPeer* peer, bool& success)
{

	size_t invsizee = static_cast<PlayerInfo*>(peer->data)->currentInventorySize;
	auto alreadyhave = false;
	if (static_cast<PlayerInfo*>(peer->data)->inventory.items.size() == invsizee)
	{
		Player::OnDialogRequest(peer, "add_label_with_icon|big|`4Whoops!|left|1048|\nadd_spacer|small|\nadd_textbox|`oSoory! Your inventory is full! You can purchase an inventory upgrade in the shop.|\nadd_spacer|small|\nadd_button|close|`5Close|0|0|");
		alreadyhave = true;
	}
	auto isFullStock = false;
	auto isInInv = false;
	for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
	{
		if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == fItemid && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 101)
		{
			Player::OnDialogRequest(peer, "add_label_with_icon|big|`4Whoops!|left|1048|\nadd_spacer|small|\nadd_textbox|`oSoory! You already have full stock of this item!|\nadd_spacer|small|\nadd_button|close|`5Close|0|0|");
			isFullStock = true;
		}
		if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == fItemid && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount < 200) isInInv = true;
	}
	if (isFullStock == true || alreadyhave == true)
	{
		success = false;
	}
	else
	{
		success = true;
		if (isInInv == false)
		{
			static_cast<PlayerInfo*>(peer->data)->needsaveinventory = true;
			InventoryItem item;
			item.itemID = fItemid;
			item.itemCount = fQuantity;
			static_cast<PlayerInfo*>(peer->data)->inventory.items.push_back(item);
			SendInventory(peer, static_cast<PlayerInfo*>(peer->data)->inventory);
			const auto p3 = packetEnd(appendFloat(appendIntx(appendFloat(appendFloat(appendFloat(appendString(createPacket(), "OnSetClothing"), (static_cast<PlayerInfo*>(peer->data))->cloth_hair, (static_cast<PlayerInfo*>(peer->data))->cloth_shirt, (static_cast<PlayerInfo*>(peer->data))->cloth_pants), (static_cast<PlayerInfo*>(peer->data))->cloth_feet, (static_cast<PlayerInfo*>(peer->data))->cloth_face, (static_cast<PlayerInfo*>(peer->data))->cloth_hand), (static_cast<PlayerInfo*>(peer->data))->cloth_back, (static_cast<PlayerInfo*>(peer->data))->cloth_mask, (static_cast<PlayerInfo*>(peer->data))->cloth_necklace), (static_cast<PlayerInfo*>(peer->data))->skinColor), (static_cast<PlayerInfo*>(peer->data))->cloth_ances, 0.0f, 0.0f));
			memcpy(p3.data + 8, &((static_cast<PlayerInfo*>(peer->data))->netID), 4);
			const auto packet = enet_packet_create(p3.data, p3.len, ENET_PACKET_FLAG_RELIABLE);
			enet_peer_send(peer, 0, packet);
		}
		else
		{
			for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
			{
				if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == fItemid)
				{
					static_cast<PlayerInfo*>(peer->data)->needsaveinventory = true;
					static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount += fQuantity;
					SendInventory(peer, static_cast<PlayerInfo*>(peer->data)->inventory);
					const auto p3 = packetEnd(appendFloat(appendIntx(appendFloat(appendFloat(appendFloat(appendString(createPacket(), "OnSetClothing"), (static_cast<PlayerInfo*>(peer->data))->cloth_hair, (static_cast<PlayerInfo*>(peer->data))->cloth_shirt, (static_cast<PlayerInfo*>(peer->data))->cloth_pants), (static_cast<PlayerInfo*>(peer->data))->cloth_feet, (static_cast<PlayerInfo*>(peer->data))->cloth_face, (static_cast<PlayerInfo*>(peer->data))->cloth_hand), (static_cast<PlayerInfo*>(peer->data))->cloth_back, (static_cast<PlayerInfo*>(peer->data))->cloth_mask, (static_cast<PlayerInfo*>(peer->data))->cloth_necklace), (static_cast<PlayerInfo*>(peer->data))->skinColor), (static_cast<PlayerInfo*>(peer->data))->cloth_ances, 0.0f, 0.0f));
					memcpy(p3.data + 8, &((static_cast<PlayerInfo*>(peer->data))->netID), 4);
					const auto packet = enet_packet_create(p3.data, p3.len, ENET_PACKET_FLAG_RELIABLE);
					enet_peer_send(peer, 0, packet);
					break;
				}
			}
		}
	}
}

inline void SaveShopsItemMoreTimes(int fItemid, int fQuantity, ENetPeer* peer, bool& success)
{

	size_t invsizee = static_cast<PlayerInfo*>(peer->data)->currentInventorySize;
	auto alreadyhave = false;
	if (static_cast<PlayerInfo*>(peer->data)->inventory.items.size() == invsizee)
	{
		Player::OnDialogRequest(peer, "add_label_with_icon|big|`4Whoops!|left|1048|\nadd_spacer|small|\nadd_textbox|`oSoory! Your inventory is full! You can purchase an inventory upgrade in the shop.|\nadd_spacer|small|\nadd_button|close|`5Close|0|0|");
		alreadyhave = true;
	}
	auto isFullStock = false;
	auto isInInv = false;
	for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
	{
		if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == fItemid && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 200)
		{
			Player::OnDialogRequest(peer, "add_label_with_icon|big|`4Whoops!|left|1048|\nadd_spacer|small|\nadd_textbox|`oSoory! You already have full stock of this item!|\nadd_spacer|small|\nadd_button|close|`5Close|0|0|");
			isFullStock = true;
		}
		if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == fItemid && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount < 200) isInInv = true;
	}
	if (isFullStock == true || alreadyhave == true)
	{
		success = false;
	}
	else
	{
		success = true;

		if (isInInv == false)
		{
			static_cast<PlayerInfo*>(peer->data)->needsaveinventory = true;
			InventoryItem item;
			item.itemID = fItemid;
			item.itemCount = fQuantity;
			static_cast<PlayerInfo*>(peer->data)->inventory.items.push_back(item);
			SendInventory(peer, static_cast<PlayerInfo*>(peer->data)->inventory);
			const auto p3 = packetEnd(appendFloat(appendIntx(appendFloat(appendFloat(appendFloat(appendString(createPacket(), "OnSetClothing"), (static_cast<PlayerInfo*>(peer->data))->cloth_hair, (static_cast<PlayerInfo*>(peer->data))->cloth_shirt, (static_cast<PlayerInfo*>(peer->data))->cloth_pants), (static_cast<PlayerInfo*>(peer->data))->cloth_feet, (static_cast<PlayerInfo*>(peer->data))->cloth_face, (static_cast<PlayerInfo*>(peer->data))->cloth_hand), (static_cast<PlayerInfo*>(peer->data))->cloth_back, (static_cast<PlayerInfo*>(peer->data))->cloth_mask, (static_cast<PlayerInfo*>(peer->data))->cloth_necklace), (static_cast<PlayerInfo*>(peer->data))->skinColor), (static_cast<PlayerInfo*>(peer->data))->cloth_ances, 0.0f, 0.0f));
			memcpy(p3.data + 8, &((static_cast<PlayerInfo*>(peer->data))->netID), 4);
			const auto packet = enet_packet_create(p3.data, p3.len, ENET_PACKET_FLAG_RELIABLE);
			enet_peer_send(peer, 0, packet);
		}
		else
		{
			for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
			{
				if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == fItemid)
				{
					static_cast<PlayerInfo*>(peer->data)->needsaveinventory = true;
					static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount += fQuantity;
					SendInventory(peer, static_cast<PlayerInfo*>(peer->data)->inventory);
					const auto p3 = packetEnd(appendFloat(appendIntx(appendFloat(appendFloat(appendFloat(appendString(createPacket(), "OnSetClothing"), (static_cast<PlayerInfo*>(peer->data))->cloth_hair, (static_cast<PlayerInfo*>(peer->data))->cloth_shirt, (static_cast<PlayerInfo*>(peer->data))->cloth_pants), (static_cast<PlayerInfo*>(peer->data))->cloth_feet, (static_cast<PlayerInfo*>(peer->data))->cloth_face, (static_cast<PlayerInfo*>(peer->data))->cloth_hand), (static_cast<PlayerInfo*>(peer->data))->cloth_back, (static_cast<PlayerInfo*>(peer->data))->cloth_mask, (static_cast<PlayerInfo*>(peer->data))->cloth_necklace), (static_cast<PlayerInfo*>(peer->data))->skinColor), (static_cast<PlayerInfo*>(peer->data))->cloth_ances, 0.0f, 0.0f));
					memcpy(p3.data + 8, &((static_cast<PlayerInfo*>(peer->data))->netID), 4);
					const auto packet = enet_packet_create(p3.data, p3.len, ENET_PACKET_FLAG_RELIABLE);
					enet_peer_send(peer, 0, packet);
					break;
				}
			}
		}
	}
}

inline void givequestkatanastep2xp(ENetPeer* peer, int amount)
{
	string cQuest = "None";
	ifstream fileStream213("quests/currentquest/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	fileStream213 >> cQuest;
	fileStream213.close();
	auto sQuest = 1;
	ifstream fileStream216("quests/currentqueststep/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	fileStream216 >> sQuest;
	fileStream216.close();
	if (cQuest == "Katana" && sQuest == 2)
	{
		auto alrdadded = 0;
		ifstream fileStream316("quests/katana/step2/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
		fileStream316 >> alrdadded;
		fileStream316.close();
		auto willaddnow = alrdadded + amount;
		ofstream fileStream219("quests/katana/step2/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
		fileStream219 << willaddnow;
		fileStream219.close();
	}
}
inline void givequestkatanastep3storetoken(ENetPeer* peer, int amount)
{
	string cQuest = "None";
	ifstream fileStream213("quests/currentquest/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	fileStream213 >> cQuest;
	fileStream213.close();
	auto sQuest = 1;
	ifstream fileStream216("quests/currentqueststep/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	fileStream216 >> sQuest;
	fileStream216.close();
	if (cQuest == "Katana" && sQuest == 3)
	{
		auto alrdadded = 0;
		ifstream fileStream316("quests/katana/step3/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
		fileStream316 >> alrdadded;
		fileStream316.close();
		auto willaddnow = alrdadded + amount;
		ofstream fileStream219("quests/katana/step3/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
		fileStream219 << willaddnow;
		fileStream219.close();
	}
}
inline void Player::OnInvis(ENetPeer* peer, const int state, int netID)
{
	GamePacket p = packetEnd(appendInt(appendString(createPacket(), "OnInvis"), state));
	memcpy(p.data + 8, &netID, 4);
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::OnFailedToEnterWorld(ENetPeer* peer)
{
	GamePacket p = packetEnd(appendIntx(appendString(createPacket(), "OnFailedToEnterWorld"), 1));
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::OnTextOverlay(ENetPeer* peer, string text)
{
	if (static_cast<PlayerInfo*>(peer->data)->Console)
	{
		SendPacket(peer, text.c_str());
		return;
	}
	GamePacket p = packetEnd(appendString(appendString(createPacket(), "OnTextOverlay"), text));
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::OnKilled(ENetPeer* peer, int netID)
{
	GamePacket p = packetEnd(appendString(createPacket(), "OnKilled"));
	memcpy(p.data + 8, &netID, 4);
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::SetRespawnPos(ENetPeer* peer, int posX, int posY, int netID)
{
	GamePacket p22 = packetEnd(appendInt(appendString(createPacket(), "SetRespawnPos"), posX + posY)); // (world->width * posY)
	memcpy(p22.data + 8, &netID, 4);
	ENetPacket* packet22 = enet_packet_create(p22.data,
		p22.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet22);
	delete p22.data;
}
inline void Player::OnZoomCamera(ENetPeer* peer, float value1, int value2)
{
	GamePacket p = packetEnd(appendIntx(appendFloat(appendString(createPacket(), "OnZoomCamera"), value1), value2));
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::SmoothZoom(ENetPeer* peer)
{
	GamePacket p = packetEnd(appendIntx(appendFloat(appendString(createPacket(), "OnZoomCamera"), 10000.0f), 1000));
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::OnRaceStart(ENetPeer* peer, int netID)
{
	GamePacket p = packetEnd(appendString(createPacket(), "OnRaceStart"));
	memcpy(p.data + 8, &netID, 4);
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::OnRaceEnd(ENetPeer* peer, int netID)
{
	GamePacket p = packetEnd(appendString(createPacket(), "OnRaceStart"));
	memcpy(p.data + 8, &netID, 4);
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::Ping(ENetPeer* peer)
{
	GamePacket p = packetEnd(appendString(createPacket(), "Ping"));
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::OnDialogRequest(ENetPeer* peer, string args)
{
	if (static_cast<PlayerInfo*>(peer->data)->Console)
	{
		SendPacket(peer, args.c_str());
		return;
	}
	GamePacket p = packetEnd(appendString(appendString(createPacket(), "OnDialogRequest"), args));
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}

inline void Player::OnSetPos(ENetPeer* peer, int netID, int x, int y)
{
	GamePacket p = packetEnd(appendFloat(appendString(createPacket(), "OnSetPos"), x, y));
	memcpy(p.data + 8, &netID, 4);
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}

inline void Player::OnSetFreezeState(ENetPeer* peer, int state, int netID)
{
	GamePacket p = packetEnd(appendInt(appendString(createPacket(), "OnSetFreezeState"), state));
	memcpy(p.data + 8, &netID, 4);
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}

inline void Player::OnSetCurrentWeather(ENetPeer* peer, const int weather)
{
	
	auto p = packetEnd(appendInt(appendString(createPacket(), "OnSetCurrentWeather"), weather));
	const auto packet = enet_packet_create(p.data, p.len, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}

inline void Player::OnSetBux(ENetPeer* peer, const int gems, const int accountstate)
{
	
	auto p = packetEnd(appendInt(appendInt(appendString(createPacket(), "OnSetBux"), gems), accountstate));
	const auto packet = enet_packet_create(p.data, p.len, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::onGiveGems(ENetPeer* peer, const int gems)
{
	int currentgems = 0;
	ifstream fs("gemdb/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	fs >> currentgems;
	fs.close();

	currentgems += gems;
	GamePacket psa = packetEnd(appendInt(appendString(createPacket(), "OnSetBux"), currentgems));
	ENetPacket* packetsa = enet_packet_create(psa.data, psa.len, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packetsa);
	ofstream of("gemdb/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".txt");
	of << currentgems;
	of.close();
	delete psa.data;
}

inline void Player::OnParticleEffect(ENetPeer* peer, const int effect, const float x, const float y, int delay)
{
	
	auto p = packetEnd(appendFloat(appendIntx(appendString(createPacket(), "OnParticleEffect"), effect), x + 15, y + 15)); // + 15 to fix float and int things
	auto deathFlag = 0x19;
	memcpy(p.data + 24, &delay, 4);
	memcpy(p.data + 56, &deathFlag, 4);
	const auto packet = enet_packet_create(p.data, p.len, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}

inline void Player::SetHasGrowID(ENetPeer* peer, int status, string username, string password)
{
	
	GamePacket p2 = packetEnd(appendString(appendString(appendInt(appendString(createPacket(), "SetHasGrowID"), status), username), password));
	ENetPacket* packet2 = enet_packet_create(p2.data,
		p2.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet2);
	delete p2.data;
}
inline void Player::OnNameChanged(ENetPeer* peer, int netID, string name)
{
	GamePacket p3 = packetEnd(appendString(appendString(createPacket(), "OnNameChanged"), "`0`0" + name));
	memcpy(p3.data + 8, &netID, 4);
	ENetPacket* packet3 = enet_packet_create(p3.data,
		p3.len,
		ENET_PACKET_FLAG_RELIABLE);
	for (ENetPeer* currentPeer = server->peers;
		currentPeer < &server->peers[server->peerCount];
		++currentPeer)
	{
		if (currentPeer->state != ENET_PEER_STATE_CONNECTED)
			continue;
		if (isHere(peer, currentPeer))
		{
			enet_peer_send(currentPeer, 0, packet3);
		}
	}
	delete p3.data;
}
inline void Player::OnSendToServer(ENetPeer* peer, int userID, int token, string ip, int port, string doorId, int lmode)
{
	
	auto p = packetEnd(appendInt(appendString(appendInt(appendInt(appendInt(appendString(createPacket(), "OnSendToServer"), port), token), userID), ip + "|" + doorId), lmode));
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::OnChangeSkin(ENetPeer* peer, const int skinColor, int netID)
{
	
	auto p = packetEnd(appendInt(appendString(createPacket(), "OnChangeSkin"), skinColor));
	memcpy(p.data + 8, &netID, 4);
	const auto packet = enet_packet_create(p.data, p.len, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::OnCountdownStart(ENetPeer* peer, int netID, int time, int score)
{
	
	if (score == -1)
	{
		auto p = packetEnd(appendInt(appendString(createPacket(), "OnCountdownStart"), time));
		memcpy(p.data + 8, &netID, 4);
		ENetPacket* packet = enet_packet_create(p.data,
			p.len,
			ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, packet);
		delete p.data;
	}
	else
	{
		auto p = packetEnd(appendInt(appendInt(appendString(createPacket(), "OnCountdownStart"), time), score));
		memcpy(p.data + 8, &netID, 4);
		ENetPacket* packet = enet_packet_create(p.data,
			p.len,
			ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, packet);
		delete p.data;
	}
}
inline void Player::OnPlayPositioned(ENetPeer* peer, string audiofile, int netID, bool broadcastInWorld, ENetPacket* pk) // packet only externally used when broadcasting / sending to multiple players to reduce memory leaks / cpu usage cuz we dont want to loop creating the packet for each player that would be insanely stupid.
{
	
	if (broadcastInWorld)
	{
		for (ENetPeer* currentPeer = server->peers;
			currentPeer < &server->peers[server->peerCount];
			++currentPeer)
		{
			if (currentPeer->state != ENET_PEER_STATE_CONNECTED)
				continue;
			if (isHere(peer, currentPeer))
			{
				enet_peer_send(currentPeer, 0, pk);
			}
		}
	}
	else
	{
		auto p = packetEnd(appendString(appendString(createPacket(), "OnPlayPositioned"), audiofile));
		memcpy(p.data + 8, &netID, 4);
		ENetPacket* packet = enet_packet_create(p.data,
			p.len,
			ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, packet);
		delete p.data;
	}
}

inline void Player::OnTradeStatus(ENetPeer* peer, int netIDOther, string offerstatus, string offer)
{
	GamePacket p = packetEnd(appendString(appendString(appendString(appendInt(appendString(createPacket(), "OnTradeStatus"), netIDOther), ""), offerstatus + "'s offer"), offer));
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::OnStartTrade(ENetPeer* peer, string displayName, int netID)
{
	
	auto p = packetEnd(appendInt(appendString(appendString(createPacket(), "OnStartTrade"), displayName), netID));
	const auto packet = enet_packet_create(p.data, p.len, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::OnForceTradeEnd(ENetPeer* peer)
{
	
	GamePacket p = packetEnd(appendString(createPacket(), "OnForceTradeEnd"));
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::PlayAudio(ENetPeer* peer, string audioFile, int delayMS)
{
	
	if (static_cast<PlayerInfo*>(peer->data)->platformID == "1") return;
	const string text = "action|play_sfx\nfile|" + audioFile + "\ndelayMS|" + to_string(delayMS) + "\n";
	BYTE* data = new BYTE[5 + text.length()];
	BYTE zero = 0;
	int type = 3;
	memcpy(data, &type, 4);
	memcpy(data + 4, text.c_str(), text.length());
	memcpy(data + 4 + text.length(), &zero, 1);
	ENetPacket* packet = enet_packet_create(data,
		5 + text.length(),
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete data;
}

inline void sendInventorys(ENetPeer* peer, PlayerInventory inventory)
{
	string asdf2 = "0400000009A7379237BB2509E8E0EC04F8720B050000000000000000FBBB0000010000007D920100FDFDFDFD04000000040000000000000000000000000000000000";
	int inventoryLen = inventory.items.size();
	int packetLen = (asdf2.length() / 2) + (inventoryLen * 4) + 4;
	BYTE* data2 = new BYTE[packetLen];
	for (int i = 0; i < asdf2.length(); i += 2)
	{
		char x = ch2n(asdf2[i]);
		x = x << 4;
		x += ch2n(asdf2[i + 1]);
		memcpy(data2 + (i / 2), &x, 1);
	}
	int endianInvVal = _byteswap_ulong(inventoryLen);
	memcpy(data2 + (asdf2.length() / 2) - 4, &endianInvVal, 4);
	endianInvVal = _byteswap_ulong(((PlayerInfo*)(peer->data))->currentInventorySize);
	memcpy(data2 + (asdf2.length() / 2) - 8, &endianInvVal, 4);
	int val = 0;
	for (int i = 0; i < inventoryLen; i++)
	{
		val = 0;
		val |= inventory.items.at(i).itemID;
		val |= inventory.items.at(i).itemCount << 16;
		val &= 0x00FFFFFF;
		val |= 0x00 << 24;
		memcpy(data2 + (i * 4) + (asdf2.length() / 2), &val, 4);
	}
	ENetPacket* packet3 = enet_packet_create(data2,
		packetLen,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet3);
	delete data2;
	//enet_host_flush(server);
}

inline void RemoveInventoryItems(int fItemid, int fQuantity, ENetPeer* peer)
{
	try {
		std::ifstream iffff("inventory/" + ((PlayerInfo*)(peer->data))->rawName + ".json");
		json jj;
		if (iffff.fail()) {
			iffff.close();
			cout << " RemoveInventoryItem funkcijoje (ofstream dalyje) error: itemid - " << fItemid << ", kiekis - " << fQuantity << endl;
		}
		if (iffff.is_open()) {
		}
		iffff >> jj; //load
		std::ofstream oo("inventory/" + ((PlayerInfo*)(peer->data))->rawName + ".json");
		if (!oo.is_open()) {
			cout << GetLastError() << " RemoveInventoryItem funkcijoje (ofstream dalyje) error: itemid - " << fItemid << ", kiekis - " << fQuantity << endl;
			
		}
		//jj["items"][aposition]["aposition"] = aposition;
		for (int i = 0; i < ((PlayerInfo*)(peer->data))->currentInventorySize; i++)
		{
			int itemid = jj["items"][i]["itemid"];
			int quantity = jj["items"][i]["quantity"];
			if (itemid == fItemid)
			{
				if (quantity - fQuantity == 0)
				{
					jj["items"][i]["itemid"] = 0;
					jj["items"][i]["quantity"] = 0;
				}
				else
				{
					jj["items"][i]["itemid"] = itemid;
					jj["items"][i]["quantity"] = quantity - fQuantity;
				}
				break;
			}
		}
		oo << jj << std::endl;
		//oo.close();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const std::out_of_range& e) {
		cout << "[try-catch ERROR]: Out of Range error in id == 'wk'" << endl;
	}
	catch (...) {
		cout << "reading file violation" << endl;
	}
	for (int i = 0; i < ((PlayerInfo*)(peer->data))->inventory.items.size(); i++)
	{
		if (((PlayerInfo*)(peer->data))->inventory.items.at(i).itemID == fItemid)
		{
			if ((unsigned int)((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount > fQuantity && (unsigned int)((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount != fQuantity)
			{
				((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount -= fQuantity;
			}
			else
			{
				((PlayerInfo*)(peer->data))->inventory.items.erase(((PlayerInfo*)(peer->data))->inventory.items.begin() + i);
			}
			sendInventorys(peer, ((PlayerInfo*)(peer->data))->inventory);
		}
	}
}



inline void SaveShopsItemMoreTimess(int fItemid, int fQuantity, ENetPeer* peer, bool& success)
{
	size_t invsizee = ((PlayerInfo*)(peer->data))->currentInventorySize;
	bool invfull = false;
	bool alreadyhave = false;
	if (((PlayerInfo*)(peer->data))->inventory.items.size() == invsizee) {
		Player::OnDialogRequest(peer, "add_label_with_icon|big|`4Whoops!|left|1048|\nadd_spacer|small|\nadd_textbox|`oSoory! Your inventory is full! You can purchase an inventory upgrade in the shop.|\nadd_spacer|small|\nadd_button|close|`5Close|0|0|");
		alreadyhave = true;
	}
	bool isFullStock = false;
	bool isInInv = false;
	for (int i = 0; i < ((PlayerInfo*)(peer->data))->inventory.items.size(); i++)
	{
		if (((PlayerInfo*)(peer->data))->inventory.items.at(i).itemID == fItemid && ((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount >= 200) {
			Player::OnDialogRequest(peer, "add_label_with_icon|big|`4Whoops!|left|1048|\nadd_spacer|small|\nadd_textbox|`oSoory! You already have full stock of this item!|\nadd_spacer|small|\nadd_button|close|`5Close|0|0|");
			isFullStock = true;
		}
		if (((PlayerInfo*)(peer->data))->inventory.items.at(i).itemID == fItemid && ((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount < 200)	isInInv = true;
	}
	if (isFullStock == true || alreadyhave == true)
	{
		success = false;
	}
	else
	{
		try {
			success = true;
			std::ifstream iffff("inventory/" + ((PlayerInfo*)(peer->data))->rawName + ".json");
			json jj;
			if (iffff.fail()) {
				iffff.close();
			}
			if (iffff.is_open()) {
			}
			iffff >> jj; //load
			std::ofstream oo("inventory/" + ((PlayerInfo*)(peer->data))->rawName + ".json");
			if (!oo.is_open()) {
				cout << GetLastError() << endl;
			}
			if (isInInv == false)
			{
				for (int i = 0; i < ((PlayerInfo*)(peer->data))->currentInventorySize; i++)
				{
					int itemid = jj["items"][i]["itemid"];
					int quantity = jj["items"][i]["quantity"];
					if (itemid == 0 && quantity == 0)
					{
						jj["items"][i]["itemid"] = fItemid;
						jj["items"][i]["quantity"] = fQuantity;
						break;
					}
				}
				oo << jj << std::endl;
				InventoryItem item;
				item.itemID = fItemid;
				item.itemCount = fQuantity;
				((PlayerInfo*)(peer->data))->inventory.items.push_back(item);
				sendInventorys(peer, ((PlayerInfo*)(peer->data))->inventory);
			}
			else
			{
				for (int i = 0; i < ((PlayerInfo*)(peer->data))->currentInventorySize; i++)
				{
					int itemid = jj["items"][i]["itemid"];
					int quantity = jj["items"][i]["quantity"];
					if (itemid == fItemid)
					{
						jj["items"][i]["quantity"] = quantity + fQuantity;
						break;
					}
				}
				oo << jj << std::endl;
				for (int i = 0; i < ((PlayerInfo*)(peer->data))->inventory.items.size(); i++)
				{
					if (((PlayerInfo*)(peer->data))->inventory.items.at(i).itemID == fItemid)
					{
						((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount += fQuantity;
						sendInventorys(peer, ((PlayerInfo*)(peer->data))->inventory);
					}
				}
			}
			iffff.close();
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (const std::out_of_range& e) {
			cout << "[try-catch ERROR]: Out of Range error in id == 'wk'" << endl;
		}
		catch (...) {
			cout << "reading file violation" << endl;
		}

	}
}

void RemoveItemFromInv(ENetPeer* peer, int itemId, int count, bool update)
{
	std::ifstream iffff("inventory/" + ((PlayerInfo*)(peer->data))->rawName + ".json");

	json jj;

	if (iffff.fail()) {
		iffff.close();
		cout << "[!]  RemoveInventoryItem funkcijoje (ofstream dalyje) error: itemid - " << itemId << ", kiekis - " << count << endl;

	}
	if (iffff.is_open()) {


	}

	iffff >> jj; //load


	std::ofstream oo("inventory/" + ((PlayerInfo*)(peer->data))->rawName + ".json");
	if (!oo.is_open()) {
		cout << GetLastError() << " RemoveInventoryItem funkcijoje (ofstream dalyje) error: itemid - " << itemId << ", kiekis - " << count << endl;
		
	}

	//jj["items"][aposition]["aposition"] = aposition;


	for (int i = 0; i < ((PlayerInfo*)(peer->data))->currentInventorySize; i++)
	{
		int itemid = jj["items"][i]["itemid"];
		int quantity = jj["items"][i]["quantity"];
		if (itemid == itemId)
		{
			if (quantity - count == 0)
			{
				jj["items"][i]["itemid"] = 0;
				jj["items"][i]["quantity"] = 0;
			}
			else
			{
				jj["items"][i]["itemid"] = itemid;
				jj["items"][i]["quantity"] = quantity - count;
			}

			break;
		}

	}
	oo << jj << std::endl;

	for (int i = 0; i < ((PlayerInfo*)(peer->data))->inventory.items.size(); i++)
	{
		if (((PlayerInfo*)(peer->data))->inventory.items.at(i).itemID == itemId)
		{
			if ((unsigned int)((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount > count && (unsigned int)((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount != count)
			{
				((PlayerInfo*)(peer->data))->inventory.items.at(i).itemCount -= count;
			}
			else
			{
				((PlayerInfo*)(peer->data))->inventory.items.erase(((PlayerInfo*)(peer->data))->inventory.items.begin() + i);
			}
			sendInventorys(peer, ((PlayerInfo*)(peer->data))->inventory);
		}
	}


}
inline void Player::OnRemove(ENetPeer* peer, int netID)
{
	
	GamePacket p = packetEnd(appendString(appendString(createPacket(), "OnRemove"), "netID|" + std::to_string(netID) + "\n"));
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}
inline void Player::OnConsoleMessage(ENetPeer* peer, string text)
{
	GamePacket p = packetEnd(appendString(appendString(createPacket(), "OnConsoleMessage"), text));
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}

inline void Player::OnTalkBubble(ENetPeer* peer, const int netID, const string text, const int chatColor, const bool isOverlay)
{
	if (text == ":)" || text == ":(" || text == ":*" || text == ":o" || text == ":O" || text == ":D") return;
	if (static_cast<PlayerInfo*>(peer->data)->Console)
	{
		Player::OnConsoleMessage(peer, text);
		return;
	}
	if (isOverlay == true)
	{
		auto p = packetEnd(appendIntx(appendIntx(appendString(appendIntx(appendString(createPacket(), "OnTalkBubble"), netID), text), chatColor), 1));
		const auto packet = enet_packet_create(p.data, p.len, ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, packet);
		delete p.data;
	}
	else
	{
		auto p = packetEnd(appendIntx(appendString(appendIntx(appendString(createPacket(), "OnTalkBubble"), netID), text), chatColor));
		const auto packet = enet_packet_create(p.data, p.len, ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, packet);
		delete p.data;
	}
}

inline void Player::OnAddNotification(ENetPeer* peer, string text, string audiosound, string interfaceimage)
{
	auto p = packetEnd(appendInt(appendString(appendString(appendString(appendString(createPacket(), "OnAddNotification"),
					interfaceimage),
				text),
			audiosound),
		0));
	ENetPacket* packet = enet_packet_create(p.data,
		p.len,
		ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
	delete p.data;
}

inline void sendWrongCmd(ENetPeer* peer)
{
	Player::OnConsoleMessage(peer, "`4Unknown command. `oEnter `$/help `ofor a list of valid commands.");
}

inline void LoadPlayerData(ENetPeer* peer)
{
	if (static_cast<PlayerInfo*>(peer->data)->haveGrowId)
	{
		auto p = static_cast<PlayerInfo*>(peer->data);

		json j;
		ifstream getdataall("players/" + static_cast<PlayerInfo*>(peer->data)->rawName + ".json");
		getdataall >> j;
		string subtype;
		string subdate;
		string title;

		p->cloth_back = atoi(j["ClothBack"].get<string>().c_str());
		p->cloth_hand = atoi(j["ClothHand"].get<string>().c_str());
		p->cloth_face = atoi(j["ClothFace"].get<string>().c_str());
		p->cloth_hair = atoi(j["ClothHair"].get<string>().c_str());
		p->cloth_feet = atoi(j["ClothFeet"].get<string>().c_str());
		p->cloth_pants = atoi(j["ClothPants"].get<string>().c_str());
		p->cloth_necklace = atoi(j["ClothNeck"].get<string>().c_str());
		p->cloth_shirt = atoi(j["ClothShirt"].get<string>().c_str());
		p->cloth_mask = atoi(j["ClothMask"].get<string>().c_str());
		p->cloth_ances = atoi(j["ClothAnces"].get<string>().c_str());
		p->friendinfo = j["friends"].get<vector<string>>();
		p->worldsowned = j["worldsowned"].get<vector<string>>();
		p->effect = j["effect"];
		p->warns = j["receivedwarns"];
		p->lastonline = j["lastonline"];

		p->guild = j["guild"].get<string>();
		if (!j["joinguild"].get<bool>()) p->joinguild = false;
		else p->joinguild = true;

		p->level = j["level"];
		p->xp = j["xp"];
		p->notebook = j["notebook"].get<string>();
		p->TotalKills = j["kills"];
		p->skill = j["skill"].get<string>();
		p->SurgerySkill = j["surgeonlevel"];
		p->currentInventorySize = j["inventorysize"];
		p->SurgerySkill = j["surgeonlevel"];
		p->startkit = j["startkit"].get<bool>();

			p->registermac = j["mac"].get<string>();
			p->registerrid = j["rid"].get<string>();
			p->registersid = j["sid"].get<string>();
			p->registergid = j["gid"].get<string>();
			p->registervid = j["vid"].get<string>();
			p->registeraid = j["aid"].get<string>();
			p->registerIP = j["ip"].get<string>();
			subtype = j["subtype"].get<string>();
			//cout << static_cast<PlayerInfo*>(peer->data)->rawName << endl;
			subdate = j["subdate"].get<string>();
			title = j["title"].get<string>();
			


		if (subtype != "" && subdate != "" && subtype != "0" && subdate != "0")
		{
			p->haveSuperSupporterName = true;
			p->Subscriber = true;
			p->country = "|maxLevel";
			p->SubscribtionEndDay = atoi(subdate.c_str());
		}
		if (title != "" && subtype != "" && subdate != "" && subtype != "0" && subdate != "0")
		{
			static_cast<PlayerInfo*>(peer->data)->NickPrefix = title;
			static_cast<PlayerInfo*>(peer->data)->displayName = title + ". " + static_cast<PlayerInfo*>(peer->data)->tankIDName;
		}

		//ss << "UPDATE PlayerDatabase SET mac = '" + static_cast<PlayerInfo*>(peer->data)->mac + "', rid = '" + static_cast<PlayerInfo*>(peer->data)->rid + "', sid = '" + static_cast<PlayerInfo*>(peer->data)->sid + "', gid = '" + static_cast<PlayerInfo*>(peer->data)->gid + "', vid = '" + static_cast<PlayerInfo*>(peer->data)->vid + "', aid = '" + static_cast<PlayerInfo*>(peer->data)->aid + "', ip = '" + static_cast<PlayerInfo*>(peer->data)->charIP + "' WHERE username = '" + static_cast<PlayerInfo*>(peer->data)->rawName + "'";
			
		p->adminLevel = j["adminLevel"];
		switch (p->adminLevel)
		{
		case 10:
			static_cast<PlayerInfo*>(peer->data)->displayName = "[`bNuke`0]" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			static_cast<PlayerInfo*>(peer->data)->displayNamebackup = "[`bNuke`0]" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			break;
		case 9:
			static_cast<PlayerInfo*>(peer->data)->displayName = "`4@" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			static_cast<PlayerInfo*>(peer->data)->displayNamebackup = "`4@" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			break;
		case 8:
			static_cast<PlayerInfo*>(peer->data)->displayName = "[`5Daddy`0]" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			static_cast<PlayerInfo*>(peer->data)->displayNamebackup = "[`5Daddy`0]" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			break;
		case 7:
			static_cast<PlayerInfo*>(peer->data)->displayName = "`6@" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			static_cast<PlayerInfo*>(peer->data)->displayNamebackup = "`6@" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			break;
		case 6:
			static_cast<PlayerInfo*>(peer->data)->displayName = "`3@" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			static_cast<PlayerInfo*>(peer->data)->displayNamebackup = "`3@" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			break;
		case 5:
			static_cast<PlayerInfo*>(peer->data)->displayName = "`^@" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			static_cast<PlayerInfo*>(peer->data)->displayNamebackup = "`^@" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			break;
		case 4:
			static_cast<PlayerInfo*>(peer->data)->displayName = "`^@" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			static_cast<PlayerInfo*>(peer->data)->displayNamebackup = "`^@" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			break;
		case 3:
			static_cast<PlayerInfo*>(peer->data)->displayName = "`#@" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			static_cast<PlayerInfo*>(peer->data)->displayNamebackup = "`#@" + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			break;
		case 2:
			static_cast<PlayerInfo*>(peer->data)->displayName = "`w[`4Youtuber`w] " + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			static_cast<PlayerInfo*>(peer->data)->displayNamebackup = "`w[`4Youtuber`w] " + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			break;
		case 1:
			static_cast<PlayerInfo*>(peer->data)->displayName = "`w[`5VIP`w] " + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			static_cast<PlayerInfo*>(peer->data)->displayNamebackup = "`w[`5VIP`w] " + static_cast<PlayerInfo*>(peer->data)->tankIDName;
			break;
		case 0:
			static_cast<PlayerInfo*>(peer->data)->displayName = static_cast<PlayerInfo*>(peer->data)->tankIDName;
			static_cast<PlayerInfo*>(peer->data)->displayNamebackup = static_cast<PlayerInfo*>(peer->data)->tankIDName;
			break;
		default:
			enet_peer_disconnect_now(peer, 0);
			break;
		}
		
		if (p->cloth_back == 8552) 
		{
			static_cast<PlayerInfo*>(peer->data)->NickPrefix = "`4Dr";
		}				
		if (p->level >= 125)
		{
		    static_cast<PlayerInfo*>(peer->data)->country = "|maxLevel";
		}
		updateAllClothes(peer);
		PlayerInventory inventory;
		InventoryItem inventory_item;
		inventory_item.itemCount = 1;
		inventory_item.itemID = 18;
		inventory.items.push_back(inventory_item);
		inventory_item.itemCount = 1;
		inventory_item.itemID = 32;
		inventory.items.push_back(inventory_item);
		SendInventory(peer, inventory);

		string nick = j["nick"].get<string>();
		if (j["skin"].get<string>() != "0x8295C3FF") static_cast<PlayerInfo*>(peer->data)->skinColor = atoi(j["skin"].get<string>().c_str());
		if (isMod(peer) || static_cast<PlayerInfo*>(peer->data)->Subscriber)
		{
			if (nick != "" && isMod(peer))
			{
				static_cast<PlayerInfo*>(peer->data)->isNicked = true;
				if (static_cast<PlayerInfo*>(peer->data)->NickPrefix != "")
				{
					static_cast<PlayerInfo*>(peer->data)->displayName = static_cast<PlayerInfo*>(peer->data)->NickPrefix + ". " + nick;
				}
				else
				{
					static_cast<PlayerInfo*>(peer->data)->displayName = nick;
				}
				static_cast<PlayerInfo*>(peer->data)->OriName = nick;
			}
			if (j["invis"].get<bool>()) p->isinv = true;
			if (j["ghost"].get<bool>()) p->canWalkInBlocks = true;
			if (j["chatcolor"].get<string>() != "" && static_cast<PlayerInfo*>(peer->data)->Subscriber)
			{
				static_cast<PlayerInfo*>(peer->data)->chatcolor = j["chatcolor"].get<string>();
			}
		}

		auto guildname = PlayerDB::getProperName(static_cast<PlayerInfo*>(peer->data)->guild);
		if (guildname != "")
		{
			try
			{
				std::ifstream ifstream("guilds/" + guildname + ".json");
				if (ifstream.fail())
				{
					ifstream.close();
					SendConsole("Failed to load player guild data! (sendworld) caused by " + static_cast<PlayerInfo*>(peer->data)->rawName, "ERROR");
					static_cast<PlayerInfo*>(peer->data)->guild = "";
				}
				else
				{
					json basic_json;
					ifstream >> basic_json;
					int gfbg, gffg;
					string gstatement, gleader;
					vector<string> gmembers;
					gfbg = basic_json["backgroundflag"];
					gffg = basic_json["foregroundflag"];
					gstatement = basic_json["GuildStatement"].get<std::string>();
					gleader = basic_json["Leader"].get<std::string>();
					for (auto i = 0; i < basic_json["Member"].size(); i++)
					{
						gmembers.push_back(basic_json["Member"][i]);
					}
					static_cast<PlayerInfo*>(peer->data)->guildBg = gfbg;
					static_cast<PlayerInfo*>(peer->data)->guildFg = gffg;
					static_cast<PlayerInfo*>(peer->data)->guildStatement = gstatement;
					static_cast<PlayerInfo*>(peer->data)->guildLeader = gleader;
					static_cast<PlayerInfo*>(peer->data)->guildMembers = gmembers;
				}
				ifstream.close();
			}
			catch (std::exception&)
			{
				SendConsole("Failed to load player guild data! (sendworld) (exception) caused by " + static_cast<PlayerInfo*>(peer->data)->rawName + " guild name " + guildname, "ERROR");
				enet_peer_disconnect_now(peer, 0);
			}
			catch (std::runtime_error&)
			{
				SendConsole("Failed to load player guild data! (sendworld) (runtime) caused by " + static_cast<PlayerInfo*>(peer->data)->rawName + " guild name " + guildname, "ERROR");
				enet_peer_disconnect_now(peer, 0);
			}
			catch (...)
			{
				SendConsole("Failed to load player guild data! (sendworld) (...) caused by " + static_cast<PlayerInfo*>(peer->data)->rawName + " guild name " + guildname, "ERROR");
				enet_peer_disconnect_now(peer, 0);
			}
		}

		if (!std::experimental::filesystem::exists("fragments/" + PlayerDB::getProperName(p->rawName) + ".txt"))
		{
			ofstream create("fragments/" + PlayerDB::getProperName(p->rawName) + ".txt");
			create << 0;
			create << 0;
			create << 0;
			create << 0;
			create.close();
		}
		ifstream fd("fragments/" + PlayerDB::getProperName(p->rawName) + ".txt");
		fd >> p->fEarth;
		fd >> p->fDark;
		fd >> p->fFire;
		fd >> p->fWater;
		fd.close();
		if (p->isDuctaped) sendClothes(peer);

	}
}

inline void SendRegisterDialog(ENetPeer* peer)
{
	auto p2 = packetEnd(appendString(appendString(createPacket(), "OnDialogRequest"), "text_scaling_string|Dirttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt|\nset_default_color|`o\nadd_label_with_icon|big|`wGet a GrowID``|left|206|\nadd_spacer|small|\nadd_textbox|By choosing a `wGrowID``, you can use a name and password to logon from any device. Your `wname`` will be shown to other players!|left|\nadd_spacer|small|\nadd_text_input|username|Name||18|\nadd_textbox|Your `wpassword`` must contain `w8 to 18 characters, 1 letter, 1 number`` and `w1 special character: @#!$^&*.,``|left|\nadd_text_input_password|password|Password||18|\nadd_text_input_password|password_verify|Password Verify||18|\nadd_textbox|Your `wsecurity code`` must contain `w5 characters, 1 letter, 1 number``|left|\nadd_text_input_password|code|Security Code||18|\nadd_textbox|Your `wemail`` will only be used for account verification and support. If you enter a fake email, you will not be able to restore your account if you lose your security code.|left|\nadd_text_input|email|Email||64|\nadd_textbox|We will never ask you for your password or email, never share it with anyone!|left|\nend_dialog|register|Cancel|Get My GrowID!|\n"));
	auto respawnTimeout = 500;
	auto deathFlag = 0x19;
	memcpy(p2.data + 24, &respawnTimeout, 4);
	memcpy(p2.data + 56, &deathFlag, 4);
	const auto packet2 = enet_packet_create(p2.data, p2.len, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet2);
	delete p2.data;
	auto p2s = packetEnd(appendString(appendString(createPacket(), "OnDialogRequest"), "text_scaling_string|Dirttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt|\nset_default_color|`o\nadd_label_with_icon|big|`wGet a GrowID``|left|206|\nadd_spacer|small|\nadd_textbox|By choosing a `wGrowID``, you can use a name and password to logon from any device. Your `wname`` will be shown to other players!|left|\nadd_spacer|small|\nadd_text_input|username|Name||18|\nadd_textbox|Your `wpassword`` must contain `w8 to 18 characters, 1 letter, 1 number`` and `w1 special character: @#!$^&*.,``|left|\nadd_text_input_password|password|Password||18|\nadd_text_input_password|password_verify|Password Verify||18|\nadd_textbox|Your `wsecurity code`` must contain `w5 characters, 1 letter, 1 number``|left|\nadd_text_input_password|code|Security Code||18|\nadd_textbox|Your `wemail`` will only be used for account verification and support. If you enter a fake email, you will not be able to restore your account if you lose your security code.|left|\nadd_text_input|email|Email||64|\nadd_textbox|We will never ask you for your password or email, never share it with anyone!|left|\nend_dialog|register|Cancel|Get My GrowID!|\n"));
	memcpy(p2s.data + 24, &respawnTimeout, 4);
	memcpy(p2s.data + 56, &deathFlag, 4);
	const auto packet2s = enet_packet_create(p2s.data, p2s.len, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet2s);
	delete p2s.data;
}

inline void FailLogin(ENetPeer* peer, string text, bool withurl)
{
	if (static_cast<PlayerInfo*>(peer->data)->Console)
	{
		Player::OnConsoleMessage(peer, text);
		return;
	}
	if (withurl)
	{
		const string dc = "https://growtopiacps.weebly.com/";
		const auto url = "action|set_url\nurl|" + dc + "\nlabel|Join GrowtopiaCP Discord\n";
		const auto data = new BYTE[5 + text.length()];
		const auto dataurl = new BYTE[5 + url.length()];
		BYTE zero = 0;
		auto type = 3;
		memcpy(data, &type, 4);
		memcpy(data + 4, text.c_str(), text.length());
		memcpy(data + 4 + text.length(), &zero, 1);
		memcpy(dataurl, &type, 4);
		memcpy(dataurl + 4, url.c_str(), url.length());
		memcpy(dataurl + 4 + url.length(), &zero, 1);
		const auto p = enet_packet_create(data, 5 + text.length(), ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, p);
		const auto p3 = enet_packet_create(dataurl, 5 + url.length(), ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, p3);
		delete data;
		delete dataurl;
	}
	else
	{
		const auto data = new BYTE[5 + text.length()];
		BYTE zero = 0;
		auto type = 3;
		memcpy(data, &type, 4);
		memcpy(data + 4, text.c_str(), text.length());
		memcpy(data + 4 + text.length(), &zero, 1);
		const auto p = enet_packet_create(data, 5 + text.length(), ENET_PACKET_FLAG_RELIABLE);
		enet_peer_send(peer, 0, p);
		delete data;
	}
	static_cast<PlayerInfo*>(peer->data)->blockLogin = true;
}
/*
inline void SendAAPNotification(const string email, const string ip, const string growid)
{
	const auto text = email + " " + ip + " " + growid;
	const auto themessage = "start php aap.php " + text + "";
	const auto c = themessage.c_str();
	system(c);
}
*/
inline string GetItemCount(ENetPeer* peer, int itemid)
{

	/*Surgery Butent Kodas*/
	auto KiekTuri = 0;
	for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
	{
		if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == itemid && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 1)
		{
			KiekTuri = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
		}
	}
	if (KiekTuri != 0) return to_string(KiekTuri);
	else return "";

}

inline void UpdateSurgeryItems(ENetPeer* peer)
{


	static_cast<PlayerInfo*>(peer->data)->SurgItem1 = 4320;
	static_cast<PlayerInfo*>(peer->data)->SurgItem2 = 4320;
	static_cast<PlayerInfo*>(peer->data)->SurgItem3 = 4320;
	static_cast<PlayerInfo*>(peer->data)->SurgItem4 = 4320;
	static_cast<PlayerInfo*>(peer->data)->SurgItem5 = 4320;
	static_cast<PlayerInfo*>(peer->data)->SurgItem6 = 4320;
	static_cast<PlayerInfo*>(peer->data)->SurgItem7 = 4320;
	static_cast<PlayerInfo*>(peer->data)->SurgItem8 = 4320;
	static_cast<PlayerInfo*>(peer->data)->SurgItem9 = 4320;
	static_cast<PlayerInfo*>(peer->data)->SurgItem10 = 4320;
	static_cast<PlayerInfo*>(peer->data)->SurgItem11 = 4320;
	static_cast<PlayerInfo*>(peer->data)->SurgItem12 = 4320;
	static_cast<PlayerInfo*>(peer->data)->SurgItem13 = 4320;

	bool iscontains = false;
	vector<int> Tools;
	SearchInventoryItem(peer, 1258, 1, iscontains);
	if (iscontains)
	{
		auto KiekTuri = 0;
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 1258 && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 1)
			{
				KiekTuri = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
			}
		}
		//surgerywarning += "`4" + to_string(KiekTuri) + "`` Surgical Sponge ";

		if (KiekTuri != 0) Tools.push_back(1258);

	}
	//else Tools.push_back(4320);
	SearchInventoryItem(peer, 1260, 1, iscontains);
	if (iscontains)
	{
		auto KiekTuri = 0;
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 1260 && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 1)
			{
				KiekTuri = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
			}
		}
		//surgerywarning += "`4" + to_string(KiekTuri) + "`` Surgical Scalpel ";

		if (KiekTuri != 0) Tools.push_back(1260);

	}
	//else Tools.push_back(4320);
	SearchInventoryItem(peer, 1262, 1, iscontains);
	if (iscontains)
	{
		auto KiekTuri = 0;
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 1262 && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 1)
			{
				KiekTuri = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
			}
		}
		//surgerywarning += "`4" + to_string(KiekTuri) + "`` Surgical Anesthetic ";

		if (KiekTuri != 0) Tools.push_back(1262);

	}
	//else Tools.push_back(4320);
	SearchInventoryItem(peer, 1264, 1, iscontains);
	if (iscontains)
	{
		auto KiekTuri = 0;
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 1264 && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 1)
			{
				KiekTuri = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
			}
		}
		//surgerywarning += "`4" + to_string(KiekTuri) + "`` Surgical Antiseptic ";

		if (KiekTuri != 0) Tools.push_back(1264);

	}
	//else Tools.push_back(4320);
	SearchInventoryItem(peer, 1266, 1, iscontains);
	if (iscontains)
	{
		auto KiekTuri = 0;
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 1266 && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 1)
			{
				KiekTuri = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
			}
		}
		//surgerywarning += "`4" + to_string(KiekTuri) + "`` Surgical Antibiotics ";

		if (KiekTuri != 0 && static_cast<PlayerInfo*>(peer->data)->UnlockedAntibiotic) Tools.push_back(1266);

	}
	//else Tools.push_back(4320);
	SearchInventoryItem(peer, 1268, 1, iscontains);
	if (iscontains)
	{
		auto KiekTuri = 0;
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 1268 && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 1)
			{
				KiekTuri = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
			}
		}
		//surgerywarning += "`4" + to_string(KiekTuri) + "`` Surgical Splint ";

		if (KiekTuri != 0) Tools.push_back(1268);

	}
	//else Tools.push_back(4320);
	SearchInventoryItem(peer, 1270, 1, iscontains);
	if (iscontains)
	{
		auto KiekTuri = 0;
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 1270 && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 1)
			{
				KiekTuri = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
			}
		}
		//surgerywarning += "`4" + to_string(KiekTuri) + "`` Surgical Stitches ";

		if (KiekTuri != 0) Tools.push_back(1270);

	}
	//else Tools.push_back(4320);
	SearchInventoryItem(peer, 4308, 1, iscontains);
	if (iscontains)
	{
		auto KiekTuri = 0;
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 4308 && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 1)
			{
				KiekTuri = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
			}
		}
		//surgerywarning += "`4" + to_string(KiekTuri) + "`` Surgical Pins ";

		if (KiekTuri != 0) Tools.push_back(4308);

	}
	//else Tools.push_back(4320);
	SearchInventoryItem(peer, 4310, 1, iscontains);
	if (iscontains)
	{
		auto KiekTuri = 0;
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 4310 && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 1)
			{
				KiekTuri = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
			}
		}
		//surgerywarning += "`4" + to_string(KiekTuri) + "`` Surgical Transfusion ";

		if (KiekTuri != 0) Tools.push_back(4310);

	}
	//else Tools.push_back(4320);
	SearchInventoryItem(peer, 4312, 1, iscontains);
	if (iscontains)
	{
		auto KiekTuri = 0;
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 4312 && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 1)
			{
				KiekTuri = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
			}
		}
		//surgerywarning += "`4" + to_string(KiekTuri) + "`` Surgical Defibrillator ";

		if (KiekTuri != 0 && static_cast<PlayerInfo*>(peer->data)->PatientHeartStopped) Tools.push_back(4312);

	}
	//else Tools.push_back(4320);
	SearchInventoryItem(peer, 4314, 1, iscontains);
	if (iscontains)
	{
		auto KiekTuri = 0;
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 4314 && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 1)
			{
				KiekTuri = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
			}
		}
		//surgerywarning += "`4" + to_string(KiekTuri) + "`` Surgical Clamp ";

		if (KiekTuri != 0) Tools.push_back(4314);

	}
	//else Tools.push_back(4320);
	SearchInventoryItem(peer, 4316, 1, iscontains);
	if (iscontains)
	{
		auto KiekTuri = 0;
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 4316 && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 1)
			{
				KiekTuri = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
			}
		}
		//surgerywarning += "`4" + to_string(KiekTuri) + "`` Surgical Ultrasound ";

		if (KiekTuri != 0) Tools.push_back(4316);

	}
	//else Tools.push_back(4320);
	SearchInventoryItem(peer, 4318, 1, iscontains);
	if (iscontains)
	{
		auto KiekTuri = 0;
		for (auto i = 0; i < static_cast<PlayerInfo*>(peer->data)->inventory.items.size(); i++)
		{
			if (static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemID == 4318 && static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount >= 1)
			{
				KiekTuri = static_cast<PlayerInfo*>(peer->data)->inventory.items.at(i).itemCount;
			}
		}
		//surgerywarning += "`4" + to_string(KiekTuri) + "`` Surgical Lab Kit";

		if (KiekTuri != 0 && !static_cast<PlayerInfo*>(peer->data)->UnlockedAntibiotic) Tools.push_back(4318);

	}

	if (static_cast<PlayerInfo*>(peer->data)->FixIt) Tools.push_back(1296);

	//else Tools.push_back(4320);

	for (int i = 0; i < Tools.size(); i++)
	{
	
		if (i == 0) static_cast<PlayerInfo*>(peer->data)->SurgItem1 = Tools[i];
		if (i == 1) static_cast<PlayerInfo*>(peer->data)->SurgItem2 = Tools[i];
		if (i == 2) static_cast<PlayerInfo*>(peer->data)->SurgItem3 = Tools[i];

		if (i == 3) static_cast<PlayerInfo*>(peer->data)->SurgItem4 = Tools[i];
		if (i == 4) static_cast<PlayerInfo*>(peer->data)->SurgItem5 = Tools[i];
		if (i == 5) static_cast<PlayerInfo*>(peer->data)->SurgItem6 = Tools[i];

		if (i == 6) static_cast<PlayerInfo*>(peer->data)->SurgItem7 = Tools[i];
		if (i == 7) static_cast<PlayerInfo*>(peer->data)->SurgItem8 = Tools[i];
		if (i == 8) static_cast<PlayerInfo*>(peer->data)->SurgItem9 = Tools[i];

		if (i == 9) static_cast<PlayerInfo*>(peer->data)->SurgItem10 = Tools[i];
		if (i == 10) static_cast<PlayerInfo*>(peer->data)->SurgItem11 = Tools[i];
		if (i == 11) static_cast<PlayerInfo*>(peer->data)->SurgItem12 = Tools[i];

		if (i == 12) static_cast<PlayerInfo*>(peer->data)->SurgItem13 = Tools[i];

	}
	
}

