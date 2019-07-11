#pragma once
#include "Beverage.h"
class CondimentDecorator :
	public Beverage
{
public:
	CondimentDecorator();
	~CondimentDecorator();
	virtual std::string getDescription();
	virtual double cost() = 0;
public:
	std::string description_ = {};
};

