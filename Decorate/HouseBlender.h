#pragma once
#include"Beverage.h"
class HouseBlender: public Beverage
{
public:
	HouseBlender();
	~HouseBlender();
	std::string getDescription()override;
	double cost()override;
public:
	std::string desccription_ = {};
};

