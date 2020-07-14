#pragma once
#include <iostream>
#include <vector>
#include <string>

class Vehicle
{
public:
	Vehicle(std::string make, int mph, bool type);
	std::string GetMake();
	bool isSpeeding();

	std::string m_make;
	int m_mph;
	bool m_isCar;
};

void displaySign(Vehicle v);
