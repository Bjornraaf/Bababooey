#include "Car.h"

Car::Car(std::string aTeamName, std::string aRaceNumber, std::string aRaceNumber2)
{
	teamName = aTeamName;
	raceNumber = aRaceNumber;
	raceNumber2 = aRaceNumber2;
	Init();
}

Car::~Car() {}

std::string Car::GetTeamName()
{
	return teamName;
}

std::string Car::GetRaceNumber()
{
	return raceNumber;
}

std::string Car::GetRaceNumber2()
{
	return raceNumber2;
}

int Car::GetNumOfDrivers()
{
	return numOfDrivers;
}

void Car::AddDrivers(Driver* aAddDrivers)
{
	drivers.push_back(aAddDrivers);					
}

void Car::RemoveDriver(int allStudents)
{
	drivers.erase(drivers.begin() + allDrivers);	
}

std::vector<Driver*> Car::GetDrivers()
{
	return drivers;									
}

void Car::SetTeamName(std::string aTeamName)
{
	teamName = aTeamName;
}

void Car::SetRaceNumber(std::string aRaceNumber)
{
	raceNumber = aRaceNumber;
}

void Car::SetRaceNumber2(std::string aRaceNumber2)
{
	raceNumber2 = aRaceNumber2;
}

void Car::SetNumOfDrivers(int aNumOfDrivers)
{
	numOfDrivers = aNumOfDrivers;
}

#pragma endregion


void Car::Init()
{
	for (int i = 0; i < 10; i++)  
	{
		drivers.push_back(new Driver(std::to_string(i) + " |Lewis ", "Hamilton|", "7 januari 1985", "|35|", "1.07,637|"));
		numOfDrivers++;
	}

	Driver* driver1 = new Driver("|Valtteri ", "Bottas|", "28 augustus 1989", "|31|", "1.07,891|");
	AddDrivers(driver1);

	RemoveDriver(2);																				

	std::cout << "Aantal Drivers: " << numOfDrivers << std::endl;
}

