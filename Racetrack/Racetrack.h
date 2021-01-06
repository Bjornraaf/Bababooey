#include <string>
#include <iostream>
#include "Race.h"
#include <vector>

#pragma once
class Racetrack
{
public:

	Racetrack(std::string aTrackName, std::string aPhoneNumber, std::string aAdress, std::string aPostalCode); //Constructor
	~Racetrack(); //Destructor

	void SetTrackName(std::string aTrackName);
	std::string GetTrackName();

	void SetPhoneNumber(std::string aPhoneNumber);
	std::string GetPhoneNumber();

	void SetAdress(std::string aAdress);
	std::string GetAdress();

	void SetPostalCode(std::string aPostalCode);
	std::string GetPostalCode();

	void AddRaces(Race* aAddRaces);
	std::vector <Race*> GetRaces();
	void RemoveRaces(int allCars);

private:
	std::string trackName;
	std::string phoneNumber;
	std::string adress;
	std::string postalCode;
	int allRaces;
	int numOfRaces;

	std::vector <Race*> races;

	void Init();
protected:
};



