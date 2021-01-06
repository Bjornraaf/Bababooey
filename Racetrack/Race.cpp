#include "Race.h"


Race::Race(std::string aRaceName, std::string aDate)
{
	raceName = aRaceName;
	date = aDate;
	Init();
}

Race::~Race(){}

void Race::SetRaceName(std::string aRaceName)
{
	raceName = aRaceName;
}

void Race::SetDate(std::string aDate)
{
	date = aDate;
}

std::string Race::GetRaceName()
{
	return raceName;
}

void Race::AddCar(Car* aAddCars)
{
	cars.push_back(aAddCars);					
}

void Race::RemoveCars(int allCars)
{
	cars.erase(cars.begin() + allCars);	
}

std::vector<Car*> Race::GetCars()
{
	return cars;
}

std::string Race::GetDate()
{
	return date;
}

#pragma endregion

void Race::Init()
{
	for (int i = 0; i < 5; i++)
	{
		cars.push_back(new Car(std::to_string(i) + " Mercedes AMG Petronas Formula One Team ", "44", "77"));
		numOfCars++;
	}

	Car* car1 = new Car("Red Bull Racing ", "33", "11");
	AddCar(car1);

	RemoveCars(2);

	std::cout << "Aantal Cars: " << numOfCars << std::endl;
}
