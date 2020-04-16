//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Command		    Upd Interval	Upd Signal*/
	/*{"bar_pctimer",   0,		        9},*/
	/*{"ramcleaner",    300,	        9},*/
	{"wallpaper",       1200,	        5},
	{"bar_reminder",    10800,	        5},
	{"bar_volume",      0,		        6},
	{"bar_screen",      0,		        10},
	{"bar_dfhome",	    600,	        0},
	{"bar_dfroot",	    600,	        0},
	{"bar_memory",	    120,	        0},
	{"bar_network",	    300,	        4},
	{"bar_battery",	    30,		        5},
	{"bar_clock",	    30,		        5},
};

//sets delimeter between status commands.
static const char delim[4] = " | ";
