//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	// {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	/* {"",	"music",	0,	11},*/
	//{"",	"pacpackages",	0,	8},
	//{"",	"news",		0,	6},
	/* {"",	"crypto",	0,	13}, */
	/* {"",	"price bat \"Basic Attention Token\" 🦁",	0,	20}, */
	/* {"",	"price btc Bitcoin 💰",				0,	21}, */
	/* {"",	"price lbc \"LBRY Token\" 📚",			0,	22}, */
	//{"",	"torrent",	20,	7},
	/* {"",	"memory",	10,	14}, */
	/* {"",	"cpu",		10,	18}, */
	/* {"",	"moonphase",	18000,	17}, */
	//{"",	"weather",	18000,	5},
	//{"",	"mailbox",	180,	12},
	/* {"",	"nettraf",	1,	16}, */
	//{"",	"volume",	0,	10},
	//{"",	"battery",	5,	3},
	//{"",	"clock",	60,	1},
	//{"",	"internet",	5,	4},
	//{"",	"help-icon",	0,	15},
	{"", "$HOME/.dotfiles/scripts/blocks/mpd", 1, 6},
	{"", "$HOME/.dotfiles/scripts/blocks/filesystem", 5, 5},
	{"", "$HOME/.dotfiles/scripts/blocks/packages", 300, 4},
	{"", "$HOME/.dotfiles/scripts/blocks/network", 5, 3},
	{"", "$HOME/.dotfiles/scripts/blocks/clock", 2, 1},
	{"", "$HOME/.dotfiles/scripts/blocks/volume", 2, 5},
	{"", "$HOME/.dotfiles/scripts/blocks/battery", 5, 2},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
//static char *delim = " \u2016 ";
//static char *delim = " \u2502 ";
static char *delim = " \u2551 ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
