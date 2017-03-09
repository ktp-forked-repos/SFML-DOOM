
#include "sounds.hpp"

//
// Information about all the music
//

musicinfo_t S_music[] =
{
    { 0 },
    { "e1m1", 0 },
    { "e1m2", 0 },
    { "e1m3", 0 },
    { "e1m4", 0 },
    { "e1m5", 0 },
    { "e1m6", 0 },
    { "e1m7", 0 },
    { "e1m8", 0 },
    { "e1m9", 0 },
    { "e2m1", 0 },
    { "e2m2", 0 },
    { "e2m3", 0 },
    { "e2m4", 0 },
    { "e2m5", 0 },
    { "e2m6", 0 },
    { "e2m7", 0 },
    { "e2m8", 0 },
    { "e2m9", 0 },
    { "e3m1", 0 },
    { "e3m2", 0 },
    { "e3m3", 0 },
    { "e3m4", 0 },
    { "e3m5", 0 },
    { "e3m6", 0 },
    { "e3m7", 0 },
    { "e3m8", 0 },
    { "e3m9", 0 },
    { "inter", 0 },
    { "intro", 0 },
    { "bunny", 0 },
    { "victor", 0 },
    { "introa", 0 },
    { "runnin", 0 },
    { "stalks", 0 },
    { "countd", 0 },
    { "betwee", 0 },
    { "doom", 0 },
    { "the_da", 0 },
    { "shawn", 0 },
    { "ddtblu", 0 },
    { "in_cit", 0 },
    { "dead", 0 },
    { "stlks2", 0 },
    { "theda2", 0 },
    { "doom2", 0 },
    { "ddtbl2", 0 },
    { "runni2", 0 },
    { "dead2", 0 },
    { "stlks3", 0 },
    { "romero", 0 },
    { "shawn2", 0 },
    { "messag", 0 },
    { "count2", 0 },
    { "ddtbl3", 0 },
    { "ampie", 0 },
    { "theda3", 0 },
    { "adrian", 0 },
    { "messg2", 0 },
    { "romer2", 0 },
    { "tense", 0 },
    { "shawn3", 0 },
    { "openin", 0 },
    { "evil", 0 },
    { "ultima", 0 },
    { "read_m", 0 },
    { "dm2ttl", 0 },
    { "dm2int", 0 } 
};


//
// Information about all the sfx
//

sfxinfo_t S_sfx[] =
{
  // S_sfx[0] needs to be a dummy for odd reasons.
  { "none", -1 },

  { "pistol",   -1 },
  { "shotgn",   -1 },
  { "sgcock",   -1 },
  { "dshtgn",   -1 },
  { "dbopn",    -1 },
  { "dbcls",    -1 },
  { "dbload",   -1 },
  { "plasma",   -1 },
  { "bfg",      -1 },
  { "sawup",    -1 },
  { "sawidl",   -1 },
  { "sawful",   -1 },
  { "sawhit",   -1 },
  { "rlaunc",   -1 },
  { "rxplod",   -1 },
  { "firsht",   -1 },
  { "firxpl",   -1 },
  { "pstart",   -1 },
  { "pstop",    -1 },
  { "doropn",   -1 },
  { "dorcls",   -1 },
  { "stnmov",   -1 },
  { "swtchn",   -1 },
  { "swtchx",   -1 },
  { "plpain",   -1 },
  { "dmpain",   -1 },
  { "popain",   -1 },
  { "vipain",   -1 },
  { "mnpain",   -1 },
  { "pepain",   -1 },
  { "slop",     -1 },
  { "itemup",   -1 },
  { "wpnup",    -1 },
  { "oof",      -1 },
  { "telept",   -1 },
  { "posit1",   -1 },
  { "posit2",   -1 },
  { "posit3",   -1 },
  { "bgsit1",   -1 },
  { "bgsit2",   -1 },
  { "sgtsit",   -1 },
  { "cacsit",   -1 },
  { "brssit",   -1 },
  { "cybsit",   -1 },
  { "spisit",   -1 },
  { "bspsit",   -1 },
  { "kntsit",   -1 },
  { "vilsit",   -1 },
  { "mansit",   -1 },
  { "pesit",    -1 },
  { "sklatk",   -1 },
  { "sgtatk",   -1 },
  { "skepch",   -1 },
  { "vilatk",   -1 },
  { "claw",     -1 },
  { "skeswg",   -1 },
  { "pldeth",   -1 },
  { "pdiehi",   -1 },
  { "podth1",   -1 },
  { "podth2",   -1 },
  { "podth3",   -1 },
  { "bgdth1",   -1 },
  { "bgdth2",   -1 },
  { "sgtdth",   -1 },
  { "cacdth",   -1 },
  { "skldth",   -1 },
  { "brsdth",   -1 },
  { "cybdth",   -1 },
  { "spidth",   -1 },
  { "bspdth",   -1 },
  { "vildth",   -1 },
  { "kntdth",   -1 },
  { "pedth",    -1 },
  { "skedth",   -1 },
  { "posact",   -1 },
  { "bgact",    -1 },
  { "dmact",    -1 },
  { "bspact",   -1 },
  { "bspwlk",   -1 },
  { "vilact",   -1 },
  { "noway",    -1 },
  { "barexp",   -1 },
  { "punch",    -1 },
  { "hoof",     -1 },
  { "metal",    -1},
  { "chgun",    -1},
  { "tink",     -1},
  { "bdopn",    -1},
  { "bdcls",    -1},
  { "itmbk",    -1},
  { "flame",    -1},
  { "flamst",   -1},
  { "getpow",   -1},
  { "bospit",   -1},
  { "boscub",   -1},
  { "bossit",   -1},
  { "bospn",    -1},
  { "bosdth",   -1 },
  { "manatk",   -1 },
  { "mandth",   -1 },
  { "sssit",    -1 },
  { "ssdth",    -1 },
  { "keenpn",   -1 },
  { "keendt",   -1 },
  { "skeact",   -1 },
  { "skesit",   -1 },
  { "skeatk",   -1 },
  { "radio",    -1 } 
};

