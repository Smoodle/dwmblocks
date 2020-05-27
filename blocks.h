//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.scripts/blocks/music", 2, 0},
	{"", "~/.scripts/blocks/updates", 600, 0},
	{"", "~/.scripts/blocks/disk", 300, 0},
	{"", "~/.scripts/blocks/cpu", 10, 0},
	{"", "~/.scripts/blocks/ram", 10, 0},
	{"", "~/.scripts/blocks/date", 60, 0},
	{"", "~/.scripts/blocks/time", 5, 20},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
