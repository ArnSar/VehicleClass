#include "Vehicle.h"
#include <iostream>
#include <string>

Vehicle::Vehicle(std::string make, int mph, bool isCar)
{
	m_make = make;
	m_mph = mph;
	m_isCar = isCar;
}

std::string Vehicle::GetMake()
{
	return m_make;
}

bool::Vehicle::isSpeeding()
{
	if (m_isCar)
	{
		if (m_mph > 35)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (m_mph > 25)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}


void displaySign(Vehicle v)
{
	if (v.isSpeeding())
	{
		std::cout << v.GetMake() << ", you are going too fast." << std::endl;
	}
	else
	{
		std::cout << v.GetMake() << ", good job following the speed limit!" << std::endl;
	}
}
