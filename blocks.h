//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.scripts/bar/music", 5, 0},
	{"", "~/.scripts/bar/recording", 5, 0},
	{"", "~/.scripts/bar/updates", 500, 0},
	//{"", "~/.scripts/bar/battery", 5, 0},
	//{"", "~/.scripts/bar/disk", 300, 0},
	{"", "~/.scripts/bar/volume", 3, 0},
	{"", "~/.scripts/bar/cpu", 10, 0},
	{"", "~/.scripts/bar/ram", 10, 0},
	{"", "~/.scripts/bar/datetime", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
