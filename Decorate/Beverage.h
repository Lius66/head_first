#pragma once
#include<string>
class Beverage
{
	
public:
	Beverage();
	~Beverage();
	virtual std::string getDescription();
	virtual double cost() = 0;
public:
	std::string description_ = {};
};

