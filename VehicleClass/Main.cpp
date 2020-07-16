#include "Vehicle.h"
#include <iostream>




int main()
{
	std::cout << "Enter car make, speed, and whether it is a car or truck(c or t). Type stop to finish." << std::endl;

	std::string make;
	int speed;
	std::string type;
	bool isCar;

	while (true)
	{
		std::cin >> make;
		std::cin >> speed;
		std::cin >> type;

		if (type == "c")
		{
			isCar = true;
		}
		else if (type == "t")
		{
			isCar = false;
		}
		else
		{
			std::cout << "Invalid vehicle type." << std::endl;
		}
		
		Vehicle v1(make, speed, isCar);

		displaySign(v1);

		std::cout << "Would you like to stop? (Press y to stop, any other key to continue." << std::endl;
		std::string stop;
		std::cin >> stop;
		if (stop == "y")
		{
			break;
		}
		else
		{
			std::cout << "OK. Enter another make, speed, and type." << std::endl;
		}
	}

	
}