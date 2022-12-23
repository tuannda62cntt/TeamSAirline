#include "DisplayArtwork.h"

void DisplayArtwork::welcomeScreen(int option)
{
	if (option == 1)
	{
		printf("%10s888       888          888                                                888                    888     888                      d8888 d8b         888 d8b\n", " ");
		printf("%10s888   o   888          888                                                888                    888     888                     d88888 Y8P         888 Y8P\n", " ");
		printf("%10s888  d8b  888          888                                                888                    888     888                    d88P888             888\n", " ");
		printf("%10s888 d888b 888  .d88b.  888  .d8888b  .d88b.  88888b.d88b.   .d88b.        888888  .d88b.         Y88b   d88P 88888b.           d88P 888 888 888d888 888 888 88888b.   .d88b.  .d8888b\n", " ");
		printf("%10s888d88888b888 d8P  Y8b 888 d88P\"    d88\"\"88b 888 \"888 \"88b d8P  Y8b       888    d88\"\"88b         Y88b d88P  888 \"88b         d88P  888 888 888P\"   888 888 888 \"88b d8P  Y8b 88K\n", " ");
		printf("%10s88888P Y88888 88888888 888 888      888  888 888  888  888 88888888       888    888  888          Y88o88P   888  888        d88P   888 888 888     888 888 888  888 88888888 \"Y8888b.\n", " ");
		printf("%10s8888P   Y8888 Y8b.     888 Y88b.    Y88..88P 888  888  888 Y8b.           Y88b.  Y88..88P           Y888P    888  888       d8888888888 888 888     888 888 888  888 Y8b.          X88\n", " ");
		printf("%10s888P     Y888  \"Y8888  888  \"Y8888P  \"Y88P\"  888  888  888  \"Y8888         \"Y888  \"Y88P\"             Y8P     888  888      d88P     888 888 888     888 888 888  888  \"Y8888   88888P'\n", " ");
	}
	else if (option == 2)
	{
		printf("%70s d888b   .d88b.   .d88b.  d8888b. d8888b. db    db d88888b\n", " ");
		printf("%70s88' Y8b .8P  Y8. .8P  Y8. 88  `8D 88  `8D `8b  d8' 88'    \n", " ");
		printf("%70s88      88    88 88    88 88   88 88oooY'  `8bd8'  88ooooo\n", " ");
		printf("%70s88  ooo 88    88 88    88 88   88 88~~~b.    88    88~~~~~\n", " ");
		printf("%70s88. ~8~ `8b  d8' `8b  d8' 88  .8D 88   8D    88    88.    \n", " ");
		printf("%70s Y888P   `Y88P'   `Y88P'  Y8888D' Y8888P'    YP    Y88888P\n", " ");
	}
}

void DisplayArtwork::userScreen(int option)
{
	if (option == 1)
	{
		printf("%60s .d8b.  d8888b. .88b  d88. d888888b d8b   db      db       .d88b.   d888b  d888888b d8b   db\n", " ");
		printf("%60sd8' `8b 88  `8D 88'YbdP`88   `88'   888o  88      88      .8P  Y8. 88' Y8b   `88'   888o  88\n", " ");
		printf("%60s88ooo88 88   88 88  88  88    88    88V8o 88      88      88    88 88         88    88V8o 88\n", " ");
		printf("%60s88~~~88 88   88 88  88  88    88    88 V8o88      88      88    88 88  ooo    88    88 V8o88\n", " ");
		printf("%60s88   88 88  .8D 88  88  88   .88.   88  V888      88booo. `8b  d8' 88. ~8~   .88.   88  V888\n", " ");
		printf("%60sYP   YP Y8888D' YP  YP  YP Y888888P VP   V8P      Y88888P  `Y88P'   Y888P  Y888888P VP   V8P\n", " ");
	}
	else if (option == 2)
	{
		printf("%60s .d8b.  d8888b. .88b  d88. d888888b d8b   db      .d8888. d888888b  d888b  d8b   db db    db d8888b.\n", " ");
		printf("%60sd8' `8b 88  `8D 88'YbdP`88   `88'   888o  88      88'  YP   `88'   88' Y8b 888o  88 88    88 88  `8D\n", " ");
		printf("%60s88ooo88 88   88 88  88  88    88    88V8o 88      `8bo.      88    88      88V8o 88 88    88 88oodD'\n", " ");
		printf("%60s88~~~88 88   88 88  88  88    88    88 V8o88        `Y8b.    88    88  ooo 88 V8o88 88    88 88~~~  \n", " ");
		printf("%60s88   88 88  .8D 88  88  88   .88.   88  V888      db   8D   .88.   88. ~8~ 88  V888 88b  d88 88     \n", " ");
		printf("%60sYP   YP Y8888D' YP  YP  YP Y888888P VP   V8P      `8888Y' Y888888P  Y888P  VP   V8P ~Y8888P' 88     \n", " ");
	}
	else if (option == 3)
	{
		printf("%50s .o88b. db    db .d8888. d888888b  .d88b.  .88b  d88. d88888b d8888b.      db       .d88b.   d888b  d888888b d8b   db\n", " ");
		printf("%50sd8P  Y8 88    88 88'  YP `~~88~~' .8P  Y8. 88'YbdP`88 88'     88  `8D      88      .8P  Y8. 88' Y8b   `88'   888o  88\n", " ");
		printf("%50s8P      88    88 `8bo.      88    88    88 88  88  88 88ooooo 88oobY'      88      88    88 88         88    88V8o 88\n", " ");
		printf("%50s8b      88    88   `Y8b.    88    88    88 88  88  88 88~~~~~ 88`8b        88      88    88 88  ooo    88    88 V8o88\n", " ");
		printf("%50sY8b  d8 88b  d88 db   8D    88    `8b  d8' 88  88  88 88.     88 `88.      88booo. `8b  d8' 88. ~8~   .88.   88  V888\n", " ");
		printf("%50s `Y88P' ~Y8888P' `8888Y'    YP     `Y88P'  YP  YP  YP Y88888P 88   YD      Y88888P  `Y88P'   Y888P  Y888888P VP   V8P\n", " ");
	}
	else if (option == 4)
	{
		printf("%50s .o88b. db    db .d8888. d888888b  .d88b.  .88b  d88. d88888b d8888b.      .d8888. d888888b  d888b  d8b   db db    db d8888b.\n", " ");
		printf("%50sd8P  Y8 88    88 88'  YP `~~88~~' .8P  Y8. 88'YbdP`88 88'     88  `8D      88'  YP   `88'   88' Y8b 888o  88 88    88 88  `8D\n", " ");
		printf("%50s8P      88    88 `8bo.      88    88    88 88  88  88 88ooooo 88oobY'      `8bo.      88    88      88V8o 88 88    88 88oodD'\n", " ");
		printf("%50s8b      88    88   `Y8b.    88    88    88 88  88  88 88~~~~~ 88`8b          `Y8b.    88    88  ooo 88 V8o88 88    88 88~~~  \n", " ");
		printf("%50sY8b  d8 88b  d88 db   8D    88    `8b  d8' 88  88  88 88.     88 `88.      db   8D   .88.   88. ~8~ 88  V888 88b  d88 88     \n", " ");
		printf("%50s `Y88P' ~Y8888P' `8888Y'    YP     `Y88P'  YP  YP  YP Y88888P 88   YD      `8888Y' Y888888P  Y888P  VP   V8P ~Y8888P' 88     \n", " ");
	}
	else return;
}

void DisplayArtwork::customerScreen(int option)
{
	if (option == 1)
	{
		printf("%50sd8888b.  .d88b.   .d88b.  db   dD      d88888b db      d888888b  d888b  db   db d888888b\n", " ");
		printf("%50s88  `8D .8P  Y8. .8P  Y8. 88 ,8P'      88'     88        `88'   88' Y8b 88   88 `~~88~~'\n", " ");
		printf("%50s88oooY' 88    88 88    88 88,8P        88ooo   88         88    88      88ooo88    88   \n", " ");
		printf("%50s88~~~b. 88    88 88    88 88`8b        88~~~   88         88    88  ooo 88~~~88    88   \n", " ");
		printf("%50s88   8D `8b  d8' `8b  d8' 88 `88.      88      88booo.   .88.   88. ~8~ 88   88    88   \n", " ");
		printf("%50sY8888P'  `Y88P'   `Y88P'  YP   YD      YP      Y88888P Y888888P  Y888P  YP   YP    YP   \n", " ");
	}
	else if (option == 2)
	{
		printf("%50sd88888b d8888b. d888888b d888888b      d888888b d8b   db d88888b  .d88b. \n", " ");
		printf("%50s88'     88  `8D   `88'   `~~88~~'        `88'   888o  88 88'     .8P  Y8.\n", " ");
		printf("%50s88ooooo 88   88    88       88            88    88V8o 88 88ooo   88    88\n", " ");
		printf("%50s88~~~~~ 88   88    88       88            88    88 V8o88 88~~~   88    88\n", " ");
		printf("%50s88.     88  .8D   .88.      88           .88.   88  V888 88      `8b  d8'\n", " ");
		printf("%50sY88888P Y8888D' Y888888P    YP         Y888888P VP   V8P YP       `Y88P' \n", " ");
	}
	else if (option == 3)
	{
		printf("%50sd8888b. d88888b db      d88888b d888888b d88888b       .d8b.   .o88b.  .o88b.  .d88b.  db    db d8b   db d888888b\n", " ");
		printf("%50s88  `8D 88'     88      88'     `~~88~~' 88'          d8' `8b d8P  Y8 d8P  Y8 .8P  Y8. 88    88 888o  88 `~~88~~'\n", " ");
		printf("%50s88   88 88ooooo 88      88ooooo    88    88ooooo      88ooo88 8P      8P      88    88 88    88 88V8o 88    88   \n", " ");
		printf("%50s88   88 88~~~~~ 88      88~~~~~    88    88~~~~~      88~~~88 8b      8b      88    88 88    88 88 V8o88    88   \n", " ");
		printf("%50s88  .8D 88.     88booo. 88.        88    88.          88   88 Y8b  d8 Y8b  d8 `8b  d8' 88b  d88 88  V888    88   \n", " ");
		printf("%50sY8888D' Y88888P Y88888P Y88888P    YP    Y88888P      YP   YP  `Y88P'  `Y88P'  `Y88P'  ~Y8888P' VP   V8P    YP   \n", " ");
	}
	else if (option == 4)
	{
		printf("%50sd88888b db      d888888b  d888b  db   db d888888b      .d8888.  .o88b. db   db d88888b d8888b. db    db db      d88888b\n", " ");
		printf("%50s88'     88        `88'   88' Y8b 88   88 `~~88~~'      88'  YP d8P  Y8 88   88 88'     88  `8D 88    88 88      88'    \n", " ");
		printf("%50s88ooo   88         88    88      88ooo88    88         `8bo.   8P      88ooo88 88ooooo 88   88 88    88 88      88ooooo\n", " ");
		printf("%50s88~~~   88         88    88  ooo 88~~~88    88           `Y8b. 8b      88~~~88 88~~~~~ 88   88 88    88 88      88~~~~~\n", " ");
		printf("%50s88      88booo.   .88.   88. ~8~ 88   88    88         db   8D Y8b  d8 88   88 88.     88  .8D 88b  d88 88booo. 88.    \n", " ");
		printf("%50sYP      Y88888P Y888888P  Y888P  YP   YP    YP         `8888Y'  `Y88P' YP   YP Y88888P Y8888D' ~Y8888P' Y88888P Y88888P\n", " ");
	}
	else if (option == 5)
	{
		printf("%50s .o88b.  .d8b.  d8b   db  .o88b. d88888b db           d88888b db      d888888b  d888b  db   db d888888b\n", " ");
		printf("%50sd8P  Y8 d8' `8b 888o  88 d8P  Y8 88'     88           88'     88        `88'   88' Y8b 88   88 `~~88~~'\n", " ");
		printf("%50s8P      88ooo88 88V8o 88 8P      88ooooo 88           88ooo   88         88    88      88ooo88    88   \n", " ");
		printf("%50s8b      88~~~88 88 V8o88 8b      88~~~~~ 88           88~~~   88         88    88  ooo 88~~~88    88   \n", " ");
		printf("%50sY8b  d8 88   88 88  V888 Y8b  d8 88.     88booo.      88      88booo.   .88.   88. ~8~ 88   88    88   \n", " ");
		printf("%50s `Y88P' YP   YP VP   V8P  `Y88P' Y88888P Y88888P      YP      Y88888P Y888888P  Y888P  YP   YP    YP   \n", " ");
	}
	else if (option == 6)
	{
		printf("%40sd8888b. d88888b  d888b  d888888b .d8888. d888888b d88888b d8888b. d88888b d8888b.      d88888b db      d888888b  d888b  db   db d888888b .d8888.\n", " ");
		printf("%40s88  `8D 88'     88' Y8b   `88'   88'  YP `~~88~~' 88'     88  `8D 88'     88  `8D      88'     88        `88'   88' Y8b 88   88 `~~88~~' 88'  YP\n", " ");
		printf("%40s88oobY' 88ooooo 88         88    `8bo.      88    88ooooo 88oobY' 88ooooo 88   88      88ooo   88         88    88      88ooo88    88    `8bo.  \n", " ");
		printf("%40s88`8b   88~~~~~ 88  ooo    88      `Y8b.    88    88~~~~~ 88`8b   88~~~~~ 88   88      88~~~   88         88    88  ooo 88~~~88    88      `Y8b.\n", " ");
		printf("%40s88 `88. 88.     88. ~8~   .88.   db   8D    88    88.     88 `88. 88.     88  .8D      88      88booo.   .88.   88. ~8~ 88   88    88    db   8D\n", " ");
		printf("%40s88   YD Y88888P  Y888P  Y888888P `8888Y'    YP    Y88888P 88   YD Y88888P Y8888D'      YP      Y88888P Y888888P  Y888P  YP   YP    YP    `8888Y'\n", " ");
	}
	else
	{
		printf("%50sdb       .d88b.   d888b   d888b  d88888b d8888b.       .d88b.  db    db d888888b\n", " ");
		printf("%50s88      .8P  Y8. 88' Y8b 88' Y8b 88'     88  `8D      .8P  Y8. 88    88 `~~88~~'\n", " ");
		printf("%50s88      88    88 88      88      88ooooo 88   88      88    88 88    88    88   \n", " ");
		printf("%50s88      88    88 88  ooo 88  ooo 88~~~~~ 88   88      88    88 88    88    88   \n", " ");
		printf("%50s88booo. `8b  d8' 88. ~8~ 88. ~8~ 88.     88  .8D      `8b  d8' 88b  d88    88   \n", " ");
		printf("%50sY88888P  `Y88P'   Y888P   Y888P  Y88888P Y8888D'       `Y88P'  ~Y8888P'    YP   \n", " ");
	}
}

void DisplayArtwork::adminScreen(int option)
{
	if (option == 1)
	{
		printf("%50sd8b   db d88888b db   d8b   db       .o88b. db    db .d8888. d888888b  .d88b.  .88b  d88. d88888b d8888b.\n", " ");
		printf("%50s888o  88 88'     88   I8I   88      d8P  Y8 88    88 88'  YP `~~88~~' .8P  Y8. 88'YbdP`88 88'     88  `8D\n", " ");
		printf("%50s88V8o 88 88ooooo 88   I8I   88      8P      88    88 `8bo.      88    88    88 88  88  88 88ooooo 88oobY'\n", " ");
		printf("%50s88 V8o88 88~~~~~ Y8   I8I   88      8b      88    88   `Y8b.    88    88    88 88  88  88 88~~~~~ 88`8b  \n", " ");
		printf("%50s88  V888 88.     `8b d8'8b d8'      Y8b  d8 88b  d88 db   8D    88    `8b  d8' 88  88  88 88.     88 `88.\n", " ");
		printf("%50sVP   V8P Y88888P  `8b8' `8d8'        `Y88P' ~Y8888P' `8888Y'    YP     `Y88P'  YP  YP  YP Y88888P 88   YD\n", " ");
	}
	else if (option == 2)
	{
		printf("%50s.d8888. d88888b  .d8b.  d8888b.  .o88b. db   db       .o88b. db    db .d8888. d888888b  .d88b.  .88b  d88. d88888b d8888b.\n", " ");
		printf("%50s88'  YP 88'     d8' `8b 88  `8D d8P  Y8 88   88      d8P  Y8 88    88 88'  YP `~~88~~' .8P  Y8. 88'YbdP`88 88'     88  `8D\n", " ");
		printf("%50s`8bo.   88ooooo 88ooo88 88oobY' 8P      88ooo88      8P      88    88 `8bo.      88    88    88 88  88  88 88ooooo 88oobY'\n", " ");
		printf("%50s  `Y8b. 88~~~~~ 88~~~88 88`8b   8b      88~~~88      8b      88    88   `Y8b.    88    88    88 88  88  88 88~~~~~ 88`8b  \n", " ");
		printf("%50sdb   8D 88.     88   88 88 `88. Y8b  d8 88   88      Y8b  d8 88b  d88 db   8D    88    `8b  d8' 88  88  88 88.     88 `88.\n", " ");
		printf("%50s`8888Y' Y88888P YP   YP 88   YD  `Y88P' YP   YP       `Y88P' ~Y8888P' `8888Y'    YP     `Y88P'  YP  YP  YP Y88888P 88   YD\n", " ");
	}
	else if (option == 3)
	{
		printf("%50s .d8b.  db      db           d8888b.  .d8b.  .d8888. .d8888. d88888b d8b   db  d888b  d88888b d8888b. .d8888.\n", " ");
		printf("%50sd8' `8b 88      88           88  `8D d8' `8b 88'  YP 88'  YP 88'     888o  88 88' Y8b 88'     88  `8D 88'  YP\n", " ");
		printf("%50s88ooo88 88      88           88oodD' 88ooo88 `8bo.   `8bo.   88ooooo 88V8o 88 88      88ooooo 88oobY' `8bo.  \n", " ");
		printf("%50s88~~~88 88      88           88~~~   88~~~88   `Y8b.   `Y8b. 88~~~~~ 88 V8o88 88  ooo 88~~~~~ 88`8b     `Y8b.\n", " ");
		printf("%50s88   88 88booo. 88booo.      88      88   88 db   8D db   8D 88.     88  V888 88. ~8~ 88.     88 `88. db   8D\n", " ");
		printf("%50sYP   YP Y88888P Y88888P      88      YP   YP `8888Y' `8888Y' Y88888P VP   V8P  Y888P  Y88888P 88   YD `8888Y'\n", " ");
	}
	else if (option == 4)
	{
		printf("%50sd8888b. d88888b db      d88888b d888888b d88888b      d88888b db      d888888b  d888b  db   db d888888b\n", " ");
		printf("%50s88  `8D 88'     88      88'     `~~88~~' 88'          88'     88        `88'   88' Y8b 88   88 `~~88~~'\n", " ");
		printf("%50s88   88 88ooooo 88      88ooooo    88    88ooooo      88ooo   88         88    88      88ooo88    88   \n", " ");
		printf("%50s88   88 88~~~~~ 88      88~~~~~    88    88~~~~~      88~~~   88         88    88  ooo 88~~~88    88   \n", " ");
		printf("%50s88  .8D 88.     88booo. 88.        88    88.          88      88booo.   .88.   88. ~8~ 88   88    88   \n", " ");
		printf("%50sY8888D' Y88888P Y88888P Y88888P    YP    Y88888P      YP      Y88888P Y888888P  Y888P  YP   YP    YP   \n", " ");
	}
}