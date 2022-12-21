#pragma once
#ifndef RandomGenerator_HEADER
#define RandomGenerator_HEADER
#include "Header.h"
class RandomGenerator
{
private:
	string randomNum;
	static string destinations[MAX][3];
public:
	int getRandom(int min, int max);
	string getRandomNumber();
	void setRandomNum(string randomNum);
	void randomIDGen();
	string** randomDestinations();
	void displayChosenDestinations(string** chosenDestinations);
	int randomOfNumSeat();
	string randomFlightNumGen(int uptoHowManyLettersRequired, int divisible);
	string randomGateGen();
};
#endif // !RandomGenerator_HEADER