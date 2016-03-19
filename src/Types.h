#pragma once

typedef DWORD Void;
typedef DWORD Any;
typedef DWORD uint;
typedef DWORD Hash;
typedef DWORD ScrHandle;
typedef int Entity;
typedef int Player;
typedef int FireId;
typedef int Ped;
typedef int Vehicle;
typedef int Cam;
typedef int CarGenerator;
typedef int Group;
typedef int Train;
typedef int Pickup;
typedef int Object;
typedef int Weapon;
typedef int Interior;
typedef int Texture;
typedef int TextureDict;
typedef int CoverPoint;
typedef int Camera;
typedef int TaskSequence;
typedef int ColourIndex;
typedef int Sphere;
typedef int Blip;

#define MAX_PLAYERS 31

struct Blip_t {
public:
    __int32 iID; //0x0000
    __int8 iID2; //0x0004
    char _0x0005[3];
    BYTE N000010FB; //0x0008 (80 = moves with player, some values will turn icon into map cursor and break it)
    char _0x0009[7];
    float x;
    float y;
    float z;
    char _0x001C[6];
    BYTE bFocused; //0x0022   (Focused? 0100 0000)
    char _0x0023[5];
    char* szMessage; //0x0028 If not null, contains the string of whatever the blip says when selected.
    char _0x0030[16];
    int iIcon; //0x0040
    char _0x0044[4];
    DWORD dwColor; //0x0048 (Sometimes works?)
    char _0x004C[4];
    float fScale; //0x0050
    __int16 iRotation; //0x0054 Heading
    BYTE bInfoIDType; //0x0056 GET_BLIP_INFO_ID_TYPE
    BYTE bZIndex; //0x0057
    BYTE bDisplay; //0x0058  Also Visibility 0010
    BYTE bAlpha; //0x0059
};//Size=0x005A

struct BlipEntry {
public:
    Blip_t* m_pBlip; //0x0000
};//Size=0x0008

struct BlipList {
public:
    BlipEntry m_Blips[1500]; //0x0000
    char _0x2EE0[56];
};//Size=0x2F18

#pragma pack(push, 1)
typedef struct {
    float x;
    DWORD _paddingx;
    float y;
    DWORD _paddingy;
    float z;
    DWORD _paddingz;
} Vector3;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
    BYTE red;
    BYTE green;
    BYTE blue;
    BYTE alpha;
} color_t;
#pragma pack(pop)

typedef struct {
    float x;
    float y;
    float z;
} vector3_t;

enum WeaponTints {
    WEAPONTINT_NORMAL,
    WEAPONTINT_GREEN,
    WEAPONTINT_GOLD,
    WEAPONTINT_PINK,
    WEAPONTINT_ARMY,
    WEAPONTINT_LSPD,
    WEAPONTINT_ORANGE,
    WEAPONTINT_PLATINUM
};

enum BlipIcons {
    BLIP_CIRCLE = 1,
    BLIP_COP = 3,
    BLIP_PLAYERARROW = 6,
    BLIP_NORTH = 7,
    BLIP_WAYPOINT = 8,
    BLIP_TRANSLUCENTCIRCLE = 9,
    BLIP_COPHELICOPTER = 15,
    BLIP_JET = 16,
    BLIP_CABLECAR = 36,
    BLIP_RACEFLAG = 38,
    BLIP_OWNEDPROPERTY = 40,
    BLIP_SPEECHBUBLE = 47,
    BLIP_SQUAREGARAGE = 50,
    BLIP_PILL = 51,
    BLIP_CONVIENCESTOREMP = 52,
    BLIP_TAXI = 56,
    BLIP_CONVIENCESTORE = 59,
    BLIP_SHERIF = 60,
    BLIP_PARAMEDIC = 61,
    BLIP_HELICOPTER = 64,
    BLIP_QUESTIONMARK = 66,
    BLIP_TRUCK = 67,
    BLIP_HOOK = 68,
    BLIP_BARBERSHOP = 71,
    BLIP_PAYNSPRAY = 72,
    BLIP_CLOTHINGSTORE = 73,
    BLIP_TATTOOSTORE = 75,
    BLIP_MICHAEL = 78,
    BLIP_SKULL = 84,
    BLIP_SANANDREASFLIGHTSCHOOL = 90,
    BLIP_BAR = 93,
    BLIP_PARACHUTING = 94,
    BLIP_CARWASH = 100,
    BLIP_DARTS = 103,
    BLIP_GOLF = 109,
    BLIP_AMMUNATION = 110,
    BLIP_SHOOTINGRANGE = 119,
    BLIP_STRIPCLUB = 121,
    BLIP_TENNIS = 122,
    BLIP_TRIATHLON = 126,
    BLIP_OFFROADMOTOATVRACE = 127,
    BLIP_SPEECHBUBLE2 = 133,
    BLIP_KEY = 134,
    BLIP_MOVIES = 135,
    BLIP_MUSIC = 136,
    BLIP_ASSAULTRIFLE = 150,
    BLIP_GRENADE = 152,
    BLIP_HEALTH = 153,
    BLIP_RPG = 157,
    BLIP_SHOTGUN = 158,
    BLIP_MAC10 = 159,
    BLIP_SNIPERRIFLE = 160,
    BLIP_POINTOFINTREST = 162,
    BLIP_PASSIVEPLAYER = 163,
    BLIP_PLAYERPAUSED = 164,
    BLIP_MINIGUN = 173,
    BLIP_GRENADELAUNCHER = 174,
    BLIP_BODYARMOR = 175,
    BLIP_YOGA = 197,
    BLIP_CAR = 225,
    BLIP_FAIRGROUNDRIDE = 266,
    BLIP_SPAGHETTIO = 270,
    BLIP_DOGBONE = 273,
    BLIP_DEADPLAYER = 274,
    BLIP_SIMEON = 293,
    BLIP_BOUNTY = 303,
    BLIP_MISSION = 304,
    BLIP_SURVIVAL = 305,
    BLIP_SPECIALCRATE = 306,
    BLIP_PLANEVEHICLE = 307,
    BLIP_SUBMARINE = 308,
    BLIP_DEATHMATCH = 310,
    BLIP_ARMWRESTLE = 311,
    BLIP_AMMUNATIONWITHRANGE = 313,
    BLIP_STUNTPLANETIMETRIAL = 314,
    BLIP_STREETRACE = 315,
    BLIP_SEARACE = 316,
    BLIP_MOTORCYCLE = 348,
    BLIP_HOUSEFORSALEMP = 350,
    BLIP_AMMODROP = 351,
    BLIP_HELIBLADESENEMY = 353,
    BLIP_GARAGE = 357,
    BLIP_MASKSHOP = 362,
    BLIP_GARAGEFORSALE = 369,
    BLIP_HELIPADFORSALE = 370,
    BLIP_DOCKFORSALE = 371,
    BLIP_HELIPADFORSALE2 = 372,
    BLIP_OWNEDPROPERTY2 = 374,
    BLIP_HOUSEFORSALE = 375,
    BLIP_BIKERACE = 376,
    BLIP_TEAMDEATHMATCH = 378,
    BLIP_VEHICLEDEATHMATCH = 380,
    BLIP_PAPARAZZO = 389,
    BLIP_BULLSHARKTESTOSTRONE = 403,
    BLIP_GANGATTACK = 406,
    BLIP_CAPTURE = 408,
    BLIP_LASTTEAMSTANDING = 409,
    BLIP_BOATVEHICLE = 410,
    BLIP_RPLOGO = 416,
    BLIP_PLAYERINHOUSE = 417,
    BLIP_BOUNTYINHOUSE = 418,
    BLIP_AMERICANFLAG = 419,
    BLIP_TANK = 421,
    BLIP_HELICOPTERBLADES = 422,
    BLIP_PLANE = 423,
    BLIP_JET2 = 424,
    BLIP_INSURGENT = 426,
    BLIP_BOAT = 427,
    BLIP_HEISTSROOM = 428,
    BLIP_DOLLARSIGN = 431,
};

enum BlipColors {
    BLIPCOLOR_NONE = 0x0,
    BLIPCOLOR_RED = 0x1,
    BLIPCOLOR_GREEN = 0x2,
    BLIPCOLOR_BLUE = 0x3,
    BLIPCOLOR_PLAYER = 0x4,
    BLIPCOLOR_YELLOWMISSION = 0x5,
    BLIPCOLOR_FRIENDLYVEHICLE = 0x26,
    BLIPCOLOR_MICHAEL = 0x2A,
    BLIPCOLOR_FRANKLIN = 0x2B,
    BLIPCOLOR_TREAVOR = 0x2C,
    BLIPCOLOR_REDMISSION = 0x31,
    BLIPCOLOR_MISSIONVEHICLE = 0x36,
    BLIPCOLOR_YELLOWMISSION2 = 0x3C,
    BLIPCOLOR_MISSION = 0x42,
    BLIPCOLOR_WAYPOINT = 0x53
};

enum ExplosionTypes {
    EXPLOSION_GRENADE,
    EXPLOSION_GRENADELAUNCHER,
    EXPLOSION_STICKYBOMB,
    EXPLOSION_MOLOTOV,
    EXPLOSION_ROCKET,
    EXPLOSION_TANKSHELL,
    EXPLOSION_HI_OCTANE,
    EXPLOSION_CAR,
    EXPLOSION_PLANE,
    EXPLOSION_PETROL_PUMP,
    EXPLOSION_BIKE,
    EXPLOSION_DIR_STEAM,
    EXPLOSION_DIR_FLAME,
    EXPLOSION_DIR_WATER_HYDRANT,
    EXPLOSION_DIR_GAS_CANISTER,
    EXPLOSION_BOAT,
    EXPLOSION_SHIP_DESTROY,
    EXPLOSION_TRUCK,
    EXPLOSION_BULLET,
    EXPLOSION_SMOKEGRENADELAUNCHER,
    EXPLOSION_SMOKEGRENADE,
    EXPLOSION_BZGAS,
    EXPLOSION_FLARE,
    EXPLOSION_GAS_CANISTER,
    EXPLOSION_EXTINGUISHER,
    EXPLOSION_PROGRAMMABLEAR,
    EXPLOSION_TRAIN,
    EXPLOSION_BARREL,
    EXPLOSION_PROPANE,
    EXPLOSION_BLIMP,
    EXPLOSION_DIR_FLAME_EXPLODE,
    EXPLOSION_TANKER,
    EXPLOSION_PLANE_ROCKET,
    EXPLOSION_VEHICLE_BULLET,
    EXPLOSION_GAS_TANK,
    EXPLOSION_BIRD_CRAP
};

enum RadioStationIndexes {
    RADIO_LSROCKRADIO,
    RADIO_NONSTOPPOPFM,
    RADIO_RADIOLOSSANTOS,
    RADIO_CHANNELX,
    RADIO_WCTR,
    RADIO_REBELRADIO,
    RADIO_SOULWAX, //POOPWAX #hitmewiththosememesterbeams
    RADIO_EASTLOSFM,
    RADIO_WESTCOASTCLASSICS,
    RADIO_BLUEARK,
    RADIO_WORLDWIDEFM,
    RADIO_FLYLO,
    RADIO_THELOWDOWN,
    RADIO_THELAB,
    RADIO_RADIOMIRRORPARK,
    RADIO_SPACE1032,
    RADIO_VINEWOODBOULEVARD,
    RADIO_SELFRADIO,
    RADIO_BLANECOUNTYTALK,
    RADIO_HIDDENRADIOAMBIENTTV,
    RADIO_OFF
};