#include "Vehicle.h"
#include <iostream>




int main()
{
	Vehicle v1("BMW", 23, true);
	Vehicle v2("Honda", 56, false);

	displaySign(v1);
	displaySign(v2);
}