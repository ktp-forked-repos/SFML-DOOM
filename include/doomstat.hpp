#pragma once

#include <string>
#include <sstream>

namespace patch
{
    template < typename T > std::string to_string(const T& n)
    {
        std::ostringstream stm;
        stm << n;
        return stm.str();
    }
}

#ifndef BACKUPTICS
#define BACKUPTICS		12
#endif
#ifndef MAXNETNODES
#define MAXNETNODES 8
#endif

// We need globally shared data structures,
//  for defining the global state variables.
#include "doomdata.hpp"
#include "d_net.hpp"

// We need the playr data structure as well.
class player_t;
struct wbstartstruct_t;
#include <fstream>

// ------------------------
// Command line parameters.
//
extern  bool	nomonsters;	// checkparm of -nomonsters
extern  bool	respawnparm;	// checkparm of -respawn
extern  bool	fastparm;	// checkparm of -fast

// Set if homebrew PWAD stuff has been added.
extern  bool	modifiedgame;


// -------------------------------------------
// Selected skill type, map etc.
//

// Defaults for menu, methinks.
extern  skill_t		startskill;
extern  int             startepisode;
extern	int		startmap;

extern  bool		autostart;

// Selected by user. 
extern  skill_t         gameskill;
extern  int		gameepisode;
extern  int		gamemap;

// Nightmare mode flag, single player.
extern  bool         respawnmonsters;

// Netgame? Only true if >1 player.
extern  bool	netgame;

// Flag: true only if started as net deathmatch.
// An enum might handle altdeath/cooperative better.
extern  bool	deathmatch;	
	
// -------------------------
// Internal parameters for sound rendering.
// These have been taken from the DOS version,
//  but are not (yet) supported with Linux
//  (e.g. no sound volume adjustment with menu.

// Current music/sfx card - index useless
//  w/o a reference LUT in a sound module.
// Ideally, this would use indices found
//  in: /usr/include/linux/soundcard.h
extern int snd_MusicDevice;
extern int snd_SfxDevice;
// Config file? Same disclaimer as above.
extern int snd_DesiredMusicDevice;
extern int snd_DesiredSfxDevice;


// -------------------------
// Status flags for refresh.
//

// Depending on view size - no status bar?
// Note that there is no way to disable the
//  status bar explicitely.
extern  bool statusbaractive;

extern  bool automapactive;	// In AutoMap mode?
extern  bool	menuactive;	// Menu overlayed?
extern  bool	paused;		// Game Pause?


extern  bool		viewactive;

extern  bool		nodrawers;
extern  bool		noblit;

extern	int		viewwindowx;
extern	int		viewwindowy;
extern	int		viewheight;
extern	int		viewwidth;
extern	int		scaledviewwidth;






// This one is related to the 3-screen display mode.
// ANG90 = left side, ANG270 = right
extern  int	viewangleoffset;

// Player taking events, and displaying.
extern  int	consoleplayer;	
extern  int	displayplayer;


// -------------------------------------
// Scores, rating.
// Statistics on a given map, for intermission.
//
extern  int	totalkills;
extern	int	totalitems;
extern	int	totalsecret;

// Timer, for scores.
extern  int	levelstarttic;	// gametic at level start
extern  int	leveltime;	// tics in game play for par



// --------------------------------------
// DEMO playback/recording related stuff.
// No demo, there is a human player in charge?
// Disable save/end game?
extern  bool	usergame;

//?
extern  bool	demoplayback;
extern  bool	demorecording;

// Quit after playing a demo from cmdline.
extern  bool		singledemo;	




//?
extern  gamestate_t     gamestate;






//-----------------------------
// Internal parameters, fixed.
// These are set by the engine, and not changed
//  according to user inputs. Partly load from
//  WAD, partly set at startup time.



extern	int		gametic;


// Bookkeeping on players - state.
extern	player_t	players[MAXPLAYERS];

// Alive? Disconnected?
extern  bool		playeringame[MAXPLAYERS];


// Player spawn spots for deathmatch.
#define MAX_DM_STARTS   10
extern  mapthing_t      deathmatchstarts[MAX_DM_STARTS];
extern  mapthing_t*	deathmatch_p;

// Player spawn spots.
extern  mapthing_t      playerstarts[MAXPLAYERS];

// Intermission stats.
// Parameters for world map / intermission.
extern  wbstartstruct_t		wminfo;	


// LUT of ammunition limits for each kind.
// This doubles with BackPack powerup item.
extern  int		maxammo[NUMAMMO];





//-----------------------------------------
// Internal parameters, used for engine.
//

// File handling stuff.
extern	char			basedefault[1024];
extern  bool	        verboseOutput;

// if true, load all graphics at level load
extern  bool         precache;


// wipegamestate can be set to -1
//  to force a wipe on the next draw
extern  gamestate_t     wipegamestate;

extern  int             mouseSensitivity;
//?
// debug flag to cancel adaptiveness
extern  bool         singletics;	

extern  int             bodyqueslot;



// Needed to store the number of the dummy sky flat.
// Used for rendering,
//  as well as tracking projectiles etc.
extern int		skyflatnum;



// Netgame stuff (buffers and pointers, i.e. indices).

// This is ???
struct doomcom_t;
extern  doomcom_t*	doomcom;

// This points inside doomcom.
struct doomdata_t;
extern  doomdata_t*	netbuffer;	


struct ticcmd_t;
extern  ticcmd_t	localcmds[BACKUPTICS];
extern	int		rndindex;

extern	int		maketic;
extern  int             nettics[MAXNETNODES];

extern  ticcmd_t        netcmds[MAXPLAYERS][BACKUPTICS];
extern	int		ticdup;