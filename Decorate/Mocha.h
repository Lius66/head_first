#pragma once
#include "CondimentDecorator.h"
class Mocha :
	public CondimentDecorator
{
	
public:
	Mocha(Beverage* beverage);
	~Mocha();
	std::string getDescription()override;
	double cost()override;
public:
	std::string description_ = {};
	Beverage *beverage_ = {};
	double cost_;
};

