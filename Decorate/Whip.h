#pragma once
#include "CondimentDecorator.h"
class Whip :
	public CondimentDecorator
{
public:
	Whip(Beverage* beverage);
	~Whip();
	std::string getDescription()override;
	double cost()override;
public:
	Beverage* beverage_ = {};
	std::string description_;
	double cost_ = 0.12;
};

