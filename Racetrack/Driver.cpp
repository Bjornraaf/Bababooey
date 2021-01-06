#include "Driver.h"

Driver::Driver(std::string aName, std::string aLastName, std::string aBirthday, std::string aAge, std::string aAverageLaptime)
{
	name = aName;
	lastName = aLastName;
	birthday = aBirthday;
	age = aAge;
	averageLaptime = aAverageLaptime;
}

Driver::~Driver() {}

std::string Driver::Input()
{
	return std::string();
}

std::string Driver::GetName()
{
	return name;
}

std::string Driver::GetLastName()
{
	return lastName;
}

std::string Driver::GetBirthday()
{
	return birthday;
}

std::string Driver::GetAge()
{
	return age;
}

std::string Driver::GetAverageLaptime()
{
	return averageLaptime;
}

void Driver::SetName(std::string aName)
{
	if (aName.size() < 50)
	{
		name = aName;
	}
	else
	{
		std::cout << "Too long max 50 char";
	}
}

void Driver::SetLastName(std::string aLastName)
{
	
}

void Driver::SetBirthday(std::string aBirthday)
{
	
}

void Driver::SetAge(std::string aAge)
{
}

void Driver::SetAverageLaptime(std::string aAverageLaptime)
{
}











