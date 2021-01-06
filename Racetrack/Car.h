#include <string>
#include <iostream>
#include "Driver.h"
#include <vector>

#pragma once
class Car
{
public:
	Car(std::string aTeamName, std::string aRaceNumber, std::string aRaceNumber2);
	~Car();

	void AddDrivers(Driver* aAddDrivers);				
	void RemoveDriver(int allDrivers);			
	std::vector<Driver*> GetDrivers();			

	void SetTeamName(std::string aTeamName);
	std::string GetTeamName();
	
	void SetRaceNumber(std::string aRaceNumber);//verander naar Int later
	std::string GetRaceNumber();

	void SetRaceNumber2(std::string aRaceNumber2);//verander naar Int later
	std::string GetRaceNumber2();

	void SetNumOfDrivers(int aNumOfDrivers);
	int GetNumOfDrivers();

private:
	void Init();
	std::string teamName;
	std::string raceNumber;
	std::string raceNumber2;
	std::vector <Driver*> drivers;
	int allDrivers;
	int numOfDrivers;
protected:
};

