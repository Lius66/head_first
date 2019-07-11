#pragma once
#include "Beverage.h"
class Exspreso :
	public Beverage
{
public:
	Exspreso();
	~Exspreso();
	std::string getDescription() override;
	double cost() override;
public:
	std::string description_ = {};
	double cost_;
};

