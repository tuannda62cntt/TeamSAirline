#pragma once
#ifndef User_Header
#define User_Header
#include "Header.h"
#include "FlightReservation.h"
#include "DisplayArtwork.h"
class User
{
protected:
	string adminUserNameAndPassword[10][2];
public:
	void displayMainMenu();
	void mainProgram();
};
#endif // !User_Header

