#include <string>
#include <iostream>
#include "Car.h"
#include <vector>

#pragma once
class Race
{
public:

	Race(std::string aRaceName, std::string aDate); //Constructor
	~Race(); //Destructor

	void SetRaceName(std::string aRaceName);
	std::string GetRaceName();

	void AddCar(Car* aAddOneCar);
	std::vector <Car*> GetCars();
	void RemoveCars(int allCars);			
	
	void SetDate(std::string aDate); //verander naar Int later
	std::string GetDate();

private:
	void Init();
	std::string raceName;
	std::string date;
	std::vector <Car*> cars;
	int allCars;
	int numOfCars;
protected:
};

