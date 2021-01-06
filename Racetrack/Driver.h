#include <String>
#include <iostream>
#pragma once
class Driver
{
	public:
		Driver(std::string aName, std::string aLastName, std::string aBirthday, std::string aAge, std::string aAverageLaptime); //Constructor
		~Driver(); //Destructor
			
		std::string Input();

		void SetName(std::string aName);
		std::string GetName();

		void SetLastName(std::string aLastName);
		std::string GetLastName();

		void SetBirthday(std::string aBirthday);//verander naar Int later
		std::string GetBirthday();

		void SetAge(std::string aAge); // misschien naar int Veranderen
		std::string GetAge();

		void SetAverageLaptime(std::string aAverageLaptime);//verander naar Int later
		std::string GetAverageLaptime();

	private:
		std::string name;
		std::string lastName;
		std::string birthday;
		std::string age;
		std::string averageLaptime;

	protected:
};
