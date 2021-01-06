#include <iostream>
#include "Driver.h"
#include "Car.h"
#include "Race.h"
#include "Racetrack.h"


int main()
{

	Racetrack* myRacetrack = new Racetrack("CM.com Circuit Zandvoort, ", "023 574 0740, ","Burgemeester van Alphenstraat 108, " ,"2041 KP Zandvoort");

	std::cout << myRacetrack->GetTrackName()<< "\n" << myRacetrack->GetPhoneNumber()<< "\n" << myRacetrack->GetAdress()<< "\n" << myRacetrack->GetPostalCode() << "\n" << std::endl;

	std::cout << myRacetrack->GetTrackName() << "\n" << "Has These Races:"<< "\n" << std::endl;

	for (Race* R : myRacetrack->GetRaces())		
	{
		std::cout << R->GetRaceName() << "vind plaats op:" << R->GetDate() << std::endl;
		for (Car* C : R->GetCars())
		{
			std::cout << C->GetTeamName() << C->GetRaceNumber()<< "&" << C->GetRaceNumber2() << std::endl;
			for (Driver* D : C->GetDrivers())
			{
				std::cout << D->GetName(),
				std::cout << D->GetLastName(),
				std::cout << D->GetBirthday(),
				std::cout << D->GetAge(),
				std::cout << D->GetAverageLaptime() << std::endl;

			}
		}
	}
	return 0;
}

Racetrack::Racetrack(std::string aTrackName, std::string aPhoneNumber, std::string aAdress, std::string aPostalCode)
{
	trackName = aTrackName;
	phoneNumber = aPhoneNumber;
	adress = aAdress;
	postalCode = aPostalCode;
	Init();
}

Racetrack::~Racetrack(){}

void Racetrack::SetTrackName(std::string aTrackName)
{
	trackName = aTrackName;
}

std::string Racetrack::GetTrackName()
{
	return trackName;
}

void Racetrack::SetPhoneNumber(std::string aPhoneNumber)
{
	phoneNumber = aPhoneNumber;
}

std::string Racetrack::GetPhoneNumber()
{
	return phoneNumber;
}

void Racetrack::SetAdress(std::string aAdress)
{
	adress = aAdress;
}

std::string Racetrack::GetAdress()
{
	return adress;
}

void Racetrack::SetPostalCode(std::string aPostalCode)
{
	postalCode = aPostalCode;
}

std::string Racetrack::GetPostalCode()
{
	return postalCode;
}

void Racetrack::AddRaces(Race* aAddRaces)
{
	races.push_back(aAddRaces);					
}

void Racetrack::RemoveRaces(int allRaces)
{
	races.erase(races.begin() + allRaces);	
}

std::vector<Race*> Racetrack::GetRaces()
{
	return races;
}

#pragma endregion

void Racetrack::Init()
{
	for (int i = 0; i < 5; i++)
	{
		races.push_back(new Race("Dutch GP ", "06-12-2020"));
		numOfRaces++;
	}

	Race* race1 = new Race("Belgium GP ", "15-12-2020");
	AddRaces(race1);

	RemoveRaces(0);

	std::cout << "Aantal Races: "<< numOfRaces << std::endl;
}


