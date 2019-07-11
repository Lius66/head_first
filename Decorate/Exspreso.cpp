#include "Exspreso.h"



Exspreso::Exspreso()
{
	cost_ = 1.0;
	description_ = "Expreso";
}


Exspreso::~Exspreso()
{
}

std::string Exspreso::getDescription()
{
	return description_;
}

double Exspreso::cost()
{
	return cost_;
}
