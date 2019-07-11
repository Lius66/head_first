#include "Beverage.h"



Beverage::Beverage()
{
	description_ = "Unkown beverage";
}


Beverage::~Beverage()
{
}

std::string Beverage::getDescription()
{
	return description_;
}
