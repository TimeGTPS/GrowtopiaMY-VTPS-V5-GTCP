#pragma once
#include "stdafx.h"
#include <cctype>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <fstream>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <locale>
#include <sstream>
#include <sstream>
#include <string>
#include <time.h>
#include <vector>
#include "json.hpp"
#include "enet/enet.h"
/**
 * \brief 
 */
#define BlastProperties_Null 0
/**
 * \brief 
 */
#define BlastProperties_RandomDeco1 1
/**
 * \brief 
 */
#define BlastProperties_RandomDeco2 2
/**
 * \brief 
 */
#define BlastProperties_WaterLevelD2 4
#ifdef _WIN32
#include <windows.h>
bool scanrunning = false;
typedef __int8 __int8_t;
typedef __int16 __int16_t;
#elif __APPLE__ || __linux__
typedef unsigned int DWORD;
#endif
typedef unsigned char BYTE;
#pragma warning(disable:4996)
using namespace std;
bool logs = false;
using json = nlohmann::json;
#define REGISTRATION
/*const char* ip = "remotemysql.com";
const char* user = "MLn24BtQMq";
const char* pass = "3jzstnFbx9";
const char* database = "MLn24BtQMq";
MYSQL* conn;
MYSQL_RES* res;
MYSQL* conn3;
MYSQL_RES* res3;
bool Connected = false;*/
int configPort = 9412;
ENetHost* server;
long long int lastSave = 0;
int coredatasize = 0;
int cId = 1;
BYTE* itemsDat = nullptr;
int itemsDatSize = 0;
int resultnbr1 = 0;
int resultnbr2 = 0;
int specialdrop = 0;
int hasil = 0;
int prize = 0;
//game ~ start
bool game1status = false;
int betamount = 0;
bool game2status = false;
int bet2amount = 0;
//game ~ end
bool serverIsFrozen = false;
bool usedgenworld = false;
bool useduranusblast = false;
int genwidth = 0;
int genheight = 0;
int genforeground = 0;
int genbedrock = 0;
int genbackground = 0;
long long int quest = 0;
bool restartForUpdate = false;
long long int restartTime = 0;
unsigned short tipqueue = 0;
bool worldproperlock;
int serverhash;
int serverversion;
int serverport;
int serverrolecount;
bool HarvestEvent = false;
bool FarmingEvent = false;
bool GrowganothEvent = false;
bool ValentineEvent = false;
bool SuperpineappleEvent = false;
bool WinterfestEvent = false;
bool SurgeryDay = false;

int DailyItem = 0;
int DailyItemCount = 0;

string CacheIP = "sebcache.i7.lt";

enum LabelStyles
{
	LABEL_BIG,
	LABEL_SMALL
};

enum SpacerTypes
{
	SPACER_BIG,
	SPACER_SMALL
};

enum CheckboxTypes
{
	CHECKBOX_SELECTED,
	CHECKBOX_NOT_SELECTED
};

struct AllStores
{
	string fg = "";
	string storeName = "";
	string whose = "";
	int notifications = 0;
};

/*double GetTickCount(void) 
{
  struct timespec now;
  if (clock_gettime(CLOCK_MONOTONIC, &now))
    return 0;
  return now.tv_sec * 1000.0 + now.tv_nsec / 1000000.0;
}*/

inline void toUpperCase(std::string& str)
{
	std::transform(str.begin(), str.end(), str.begin(), ::toupper);
}

template <typename T>
void Remove(std::basic_string<T>& Str, const T* CharsToRemove)
{
	typename std::basic_string<T>::size_type pos = 0;
	while ((pos = Str.find_first_of(CharsToRemove, pos)) != std::basic_string<T>::npos)
	{
		Str.erase(pos, 1);
	}
}

inline string ReadAllFile(const string& fileName)
{
	const ifstream f(fileName);
	stringstream ss;
	ss << f.rdbuf();
	return ss.str();
}

inline std::string currentDateTime()
{
	auto now = time(nullptr);
	struct tm tstruct;
	char buf[80];
	// ReSharper disable once CppDeprecatedEntity
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y/%m/%d %X", &tstruct);
	return buf;
}

inline void sendData(ENetPeer* peer, int num, char* data, const int len)
{
	const auto packet = enet_packet_create(nullptr, len + 5, ENET_PACKET_FLAG_RELIABLE);
	memcpy(packet->data, &num, 4);
	if (data != nullptr)
	{
		memcpy(packet->data + 2, data, len);
	}
	char zero = 0;
	memcpy(packet->data + 2 + len, &zero, 1);
	enet_peer_send(peer, 0, packet);
	enet_host_flush(server);
}

inline int getPacketId(char* data)
{
	return *data;
}

inline char* getPacketData(char* data)
{
	return data + 4;
}

/*inline void SendConsole(const string text, const string type)
{
	time_t currentTime;
	time(&currentTime);
	// ReSharper disable once CppDeprecatedEntity
	const auto localTime = localtime(&currentTime);
	const auto Hour = localTime->tm_hour;
	const auto Min = localTime->tm_min;
	const auto Sec = localTime->tm_sec;
	cout << "[" + to_string(Hour) + ":" + to_string(Min) + ":" + to_string(Sec) + " " + type + """]: " << text << endl;
}*/

inline string space2underscore(std::string text)
{
	for (string::iterator it = text.begin(); it != text.end(); ++it)
	{
		if (*it == ' ')
		{
			*it = '_';
		}
	}
	return text;
}

inline void SendConsole(const string text, const string type)
{
	time_t currentTime;
	time(&currentTime);
	// ReSharper disable once CppDeprecatedEntity
	const auto localTime = localtime(&currentTime);
	const auto Hour = localTime->tm_hour;
	const auto Min = localTime->tm_min;
	const auto Sec = localTime->tm_sec;
	
	}

/*inline void ConnectToDatabase()
{
	conn = mysql_init(nullptr);
	conn = mysql_real_connect(conn, ip, user, pass, database, 0, nullptr, 0);
	if (conn == nullptr) return;
	if (conn != nullptr)
	{
		SendConsole("Connected to database succesfully!", "MYSQL");
		Connected = true;
	}
	else
	{
		SendConsole("Connection to mysql has failed!", "MYSQL");
		system("PAUSE");
		Connected = false;
		return;
	}
}*/

void SendPacket(ENetPeer* peer, const char* data)
{
	ENetPacket* packet = enet_packet_create(data, strlen(data) + 1, ENET_PACKET_FLAG_RELIABLE);
	enet_peer_send(peer, 0, packet);
}

inline void LoadEvents()
{
	/*Load Event Data*/
	/*string HarvestFestival;
	ifstream fdar("events/harvestfestival.txt");
	fdar >> HarvestFestival;
	fdar.close();
	if (HarvestFestival == "true")
	{
		HarvestEvent = true;
	}
	string Farming;
	ifstream fdars("events/farming.txt");
	fdars >> Farming;
	fdars.close();
	if (Farming == "true")
	{
		FarmingEvent = true;
	}
	string Growganoth;
	ifstream fdarsw("events/growganoth.txt");
	fdarsw >> Growganoth;
	fdarsw.close();
	if (Growganoth == "true")
	{
		GrowganothEvent = true;
	}
	string Valentine;
	ifstream fdarsw111("events/valentine.txt");
	fdarsw111 >> Valentine;
	fdarsw111.close();
	if (Valentine == "true")
	{
		ValentineEvent = true;
	}*/
	/*Event Data Finish*/



	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	timePtr->tm_wday;
	switch (timePtr->tm_wday)
	{
	case 1:
	{
		DailyItem = 5040;
		DailyItemCount = 200;
		//SendConsole("Today is monday!", "DAY");
		GrowganothEvent = true;
		//SendConsole("Growganoth Event Active!", "EVENT");
		specialdrop = 5040;
		//SendConsole("Todays special drop is " + to_string(specialdrop) + "!", "DAY");
		break;
	}
	case 2:
	{
		DailyItem = 5042;
		DailyItemCount = 200;
		//SendConsole("Today is tuesday!", "DAY");
		HarvestEvent = true;
		//SendConsole("Harvest Festival Active!", "EVENT");
		specialdrop = 5042;
		//SendConsole("Todays special drop is " + to_string(specialdrop) + "!", "DAY");
		break;
	}
	case 3:
	{
		DailyItem = 5044;
		DailyItemCount = 200;
		//SendConsole("Today is wednesday!", "DAY");
		FarmingEvent = true;
		SurgeryDay = true;
		//SendConsole("Farming Event Active!", "EVENT");
		specialdrop = 5044;
		//SendConsole("Todays special drop is " + to_string(specialdrop) + "!", "DAY");
		break;
	}
	case 4:
	{
		DailyItem = 5044;
		DailyItemCount = 200;
		//SendConsole("Today is thursday!", "DAY");
		ValentineEvent = true;
		//SendConsole("Valentine Event Active!", "EVENT");
		specialdrop = 5044;
		//SendConsole("Todays special drop is " + to_string(specialdrop) + "!", "DAY");
		break;
	}
	case 5:
	{
		DailyItem = 5034;
		DailyItemCount = 200;
		//SendConsole("Today is friday!", "DAY");
		specialdrop = 5034;
		//SendConsole("Todays special drop is " + to_string(specialdrop) + "!", "DAY");
		break;
	}
	case 6:
	{
		DailyItem = 5036;
		DailyItemCount = 200;
		//SendConsole("Today is saturday!", "DAY");
		specialdrop = 5036;
		//SendConsole("Todays special drop is " + to_string(specialdrop) + "!", "DAY");
		break;
	}
	case 0:
	{
		DailyItem = 5038;
		DailyItemCount = 200;
		//SendConsole("Today is sunday!", "DAY");
		specialdrop = 5038;
		//SendConsole("Todays special drop is " + to_string(specialdrop) + "!", "DAY");
		break;
	}
	default: break;
	}



}

inline string text_encode(char* text)
{
	string ret = "";
	while (text[0] != 0)
	{
		switch (text[0])
		{
		case '\n':
			ret += "\\n";
			break;
		case '\t':
			ret += "\\t";
			break;
		case '\b':
			ret += "\\b";
			break;
		case '\\':
			ret += "\\\\";
			break;
		case '\r':
			ret += "\\r";
			break;
		default:
			ret += text[0];
			break;
		}
		text++;
	}
	return ret;
}

inline int ch2n(char x)
{
	switch (x)
	{
	case '0':
		return 0;
	case '1':
		return 1;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	case 'A':
		return 10;
	case 'B':
		return 11;
	case 'C':
		return 12;
	case 'D':
		return 13;
	case 'E':
		return 14;
	case 'F':
		return 15;
	default:
		break;
	}
	return 0;
}

inline char* GetTextPointerFromPacket(ENetPacket* packet)
{
	char zero = 0;
	memcpy(packet->data + packet->dataLength - 1, &zero, 1);
	return reinterpret_cast<char*>(packet->data + 4);
}

inline BYTE* GetStructPointerFromTankPacket(ENetPacket* packet)
{
	const unsigned int packetLenght = packet->dataLength;
	BYTE* result = nullptr;
	if (packetLenght >= 0x3C)
	{
		BYTE* packetData = packet->data;
		result = packetData + 4;
		if (*static_cast<BYTE*>(packetData + 16) & 8)
		{
			if (packetLenght < *reinterpret_cast<int*>(packetData + 56) + 60)
			{
				result = nullptr;
			}
		}
		else
		{
			int zero = 0;
			memcpy(packetData + 56, &zero, 4);
		}
	}
	return result;
}

std::vector<std::string> splitIntoLines(const std::string& string) {
	std::stringstream stream(string);
	std::vector<std::string> res;
	while (1) {
		std::string line;
		std::getline(stream, line);
		if (!stream.good())
			break;
		res.push_back(line);
	}
	return res;
}

inline int GetMessageTypeFromPacket(ENetPacket* packet)
{
	int result;
	if (packet->dataLength > 3u)
	{
		result = *(packet->data);
	}
	else
	{
		result = 0;
	}
	return result;
}

inline vector<string> explode(const string& delimiter, const string& str)
{
	vector<string> arr;
	const int strleng = str.length();
	const int delleng = delimiter.length();
	if (delleng == 0)
		return arr;
	int i = 0;
	int k = 0;
	while (i < strleng)
	{
		int j = 0;
		while (i + j < strleng && j < delleng && str[i + j] == delimiter[j])
			j++;
		if (j == delleng)
		{
			arr.push_back(str.substr(k, i - k));
			i += delleng;
			k = i;
		}
		else
		{
			i++;
		}
	}
	arr.push_back(str.substr(k, i - k));
	return arr;
}

inline string getStrLower(string txt)
{
	string ret;
	for (char c : txt) ret += tolower(c);
	return ret;
}

inline string getStrUpper(string txt)
{
	string ret;
	for (char c : txt) ret += toupper(c);
	return ret;
}

inline bool has_only_digits(const string s)
{
	return s.find_first_not_of("0123456789") == string::npos;
}

inline bool has_only_digits_wnegative(const string s)
{
	return s.find_first_not_of("-0123456789") == string::npos;
}

static inline void ltrim(string& s)
{
	s.erase(s.begin(), find_if(s.begin(), s.end(), [](int ch)
	{
		return !isspace(ch);
	}));
}

static inline void rtrim(string& s)
{
	s.erase(find_if(s.rbegin(), s.rend(), [](int ch)
	{
		return !isspace(ch);
	}).base(), s.end());
}

static inline void trim(string& s)
{
	ltrim(s);
	rtrim(s);
}

static inline string trimString(string s)
{
	trim(s);
	return s;
}

inline int countSpaces(string& str)
{
	auto count = 0;
	const int length = str.length();
	for (auto i = 0; i < length; i++)
	{
		const int c = str[i];
		if (isspace(c))
			count++;
	}
	return count;
}

inline void removeExtraSpaces(string& str)
{
	const int n = str.length();
	auto i = 0, j = -1;
	auto spaceFound = false;
	// ReSharper disable once CppPossiblyErroneousEmptyStatements
	while (++j < n && str[j] == ' ');
	while (j < n)
	{
		if (str[j] != ' ')
		{
			if ((str[j] == '.' || str[j] == ',' ||
					str[j] == '?') && i - 1 >= 0 &&
				str[i - 1] == ' ')
				str[i - 1] = str[j++];
			else
				str[i++] = str[j++];
			spaceFound = false;
		}
		else if (str[j++] == ' ')
		{
			if (!spaceFound)
			{
				str[i++] = ' ';
				spaceFound = true;
			}
		}
	}
	if (i <= 1)
		str.erase(str.begin() + i, str.end());
	else
		str.erase(str.begin() + i, str.end());
}

inline ifstream::pos_type filesize(const char* filename)
{
	std::ifstream in(filename, std::ifstream::ate | std::ifstream::binary);
	return in.tellg();
}

inline uint32_t HashString(unsigned char* str, const int len)
{
	if (!str) return 0;
	auto n = static_cast<unsigned char*>(str);
	uint32_t acc = 0x55555555;
	if (len == 0)
	{
		while (*n)
			acc = (acc >> 27) + (acc << 5) + *n++;
	}
	else
	{
		for (int i = 0; i < len; i++)
		{
			acc = (acc >> 27) + (acc << 5) + *n++;
		}
	}
	return acc;
}

inline unsigned char* getA(const string fileName, int* pSizeOut, bool bAddBasePath, bool bAutoDecompress)
{
	// ReSharper disable once CppDeprecatedEntity
	const auto fp = fopen(fileName.c_str(), "rb");
	if (!fp)
	{
		SendConsole("File not found (getA)", "ERROR");
		if (!fp) return nullptr;
	}
	fseek(fp, 0, SEEK_END);
	*pSizeOut = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	const auto pData = static_cast<unsigned char*>(new unsigned char[((*pSizeOut) + 1)]);
	if (!pData)
	{
		printf("Out of memory opening %s?", fileName.c_str());
		return nullptr;
	}
	pData[*pSizeOut] = 0;
	fread(pData, *pSizeOut, 1, fp);
	fclose(fp);
	return pData;
}

inline string hexStr(BYTE* data, int len)
{
	std::stringstream ss;
	ss << std::hex;
	for (auto i(0); i < len; ++i)
	{
		ss << std::hex << std::setfill('0');
		ss << std::setw(2) << static_cast<int>(data[i]);
	}
	return ss.str();
}

class GTDialog
{
public:
	string dialogstr = "";
	void addSpacer(SpacerTypes type);
	void addLabelWithIcon(string text, int tileid, LabelStyles type);
	void addLabelWithIconButton(string text, int tileid, string buttontext);
	void addButton(string buttonname, string buttontext);
	void addPicker(string pickername, string pickertext, string headText);
	void addCheckbox(string checkboxname, string string, CheckboxTypes type);
	void addTextBox(string str);
	void addSmallText(string str);
	void addItemWithCustomText(string itemID, string textUnderButton, string buttonName);
	void addStaticBlueFrame(string itemID, string textUnderFrame, string buttonName, bool isEndLine);
	void addInputBox(string name, string text, string cont, int size);
	void addStaticBlueFrameWithIdCountText(string itemID, string count, string textUnderFrame, string buttonName, bool isEndLine);
	void addQuickExit();
	void addNewLineAfterFrame();
	void endDialog(string name, string accept, string nvm);
	void addCustom(string name);
	string finishDialog() const;

	explicit operator string() const
	{
		return this->dialogstr;
	}
};

inline void GTDialog::addSpacer(const SpacerTypes type)
{
	switch (type)
	{
	case SPACER_BIG:
		this->dialogstr.append("add_spacer|big|\n");
		break;
	case SPACER_SMALL:
		this->dialogstr.append("add_spacer|small|\n");
		break;
	default:
		break;
	}
}

inline void GTDialog::addItemWithCustomText(const string itemID, const string textUnderButton, const string buttonName)
{
	this->dialogstr.append("\nadd_button_with_icon|" + buttonName + "|" + textUnderButton + "|staticBlueFrame|" + itemID + "|");
}

inline void GTDialog::addNewLineAfterFrame()
{
	this->dialogstr.append("\nadd_button_with_icon||END_LIST|noflags|0|0|");
}

inline void GTDialog::addPicker(const string pickername, const string pickertext, const string headText)
{
	this->dialogstr.append("\nadd_item_picker|" + pickername + "|" + pickertext + "|" + headText + "|");
}

inline void GTDialog::addStaticBlueFrame(const string itemID, const string textUnderFrame, const string buttonName, const bool isEndLine)
{
	if (isEndLine == false)
	{
		this->dialogstr.append("\nadd_button_with_icon|" + buttonName + "||staticBlueFrame|" + itemID + "|" + textUnderFrame + "|");
	}
	else
	{
		this->dialogstr.append("\nadd_button_with_icon||END_LIST|noflags|0|0|\nadd_button_with_icon|" + buttonName + "||staticBlueFrame|" + itemID + "|" + textUnderFrame + "|");
	}
}

inline void GTDialog::addStaticBlueFrameWithIdCountText(const string itemID, string count, const string textUnderFrame, const string buttonName, const bool isEndLine)
{
	if (isEndLine == false)
	{
		this->dialogstr.append("\nadd_button_with_icon|" + buttonName + "|" + textUnderFrame + "|frame|" + itemID + "|" + count + "|");
	}
	else
	{
		this->dialogstr.append("\nadd_button_with_icon||END_LIST|noflags|0|0|\nadd_button_with_icon|" + buttonName + "|" + textUnderFrame + "|frame|" + itemID + "|" + count + "|");
	}
}

inline void GTDialog::addLabelWithIcon(const string text, const int tileid, const LabelStyles type)
{
	switch (type)
	{
	case LABEL_BIG:
		this->dialogstr.append("add_label_with_icon|big|" + text + "|left|" + to_string(tileid) + "|\n");
		break;
	case LABEL_SMALL:
		this->dialogstr.append("add_label_with_icon|small|" + text + "|left|" + to_string(tileid) + "|\n");
		break;
	default:
		break;
	}
}

inline void GTDialog::addLabelWithIconButton(const string text, const int tileid, const string buttontext)
{
	this->dialogstr.append(
		"add_label_with_icon_button||" + text + "|left|" + to_string(tileid) + "|" + buttontext + "|\n");
}

inline void GTDialog::addButton(const string buttonname, const string buttontext)
{
	this->dialogstr.append("add_button|" + buttonname + "|" + buttontext + "|noflags|0|0|\n");
}

inline void GTDialog::addCheckbox(const string checkboxname, const string string, const CheckboxTypes type)
{
	switch (type)
	{
	case CHECKBOX_SELECTED:
		this->dialogstr.append("add_checkbox|" + checkboxname + "|" + string + "|1|\n");
		break;
	case CHECKBOX_NOT_SELECTED:
		this->dialogstr.append("add_checkbox|" + checkboxname + "|" + string + "|0|\n");
		break;
	default:
		break;
	}
}

inline void GTDialog::addTextBox(const string str)
{
	this->dialogstr.append("add_textbox|" + str + "|left|\n");
}

inline void GTDialog::addSmallText(const string str)
{
	this->dialogstr.append("add_smalltext|" + str + "|\n");
}

inline void GTDialog::addInputBox(const string name, const string text, const string cont, const int size)
{
	this->dialogstr.append("add_text_input|" + name + "|" + text + "|" + cont + "|" + to_string(size) + "|\n");
}

inline void GTDialog::addQuickExit()
{
	this->dialogstr.append("add_quick_exit|\n");
}

inline void GTDialog::endDialog(const string name, const string accept, const string nvm)
{
	this->dialogstr.append("end_dialog|" + name + "|" + nvm + "|" + accept + "|\n");
}

inline void GTDialog::addCustom(const string name)
{
	this->dialogstr.append(name + "\n");
}

inline string GTDialog::finishDialog() const
{
	return this->dialogstr;
}
