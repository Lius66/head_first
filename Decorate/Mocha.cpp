#include "Mocha.h"



Mocha::Mocha(Beverage* beverage)
{
	cost_ = 0.2;
	this->beverage_ = beverage;
	description_ =" add Mocha";
}


Mocha::~Mocha()
{
}

std::string Mocha::getDescription()
{
	return beverage_->getDescription() + description_;
}

double Mocha::cost()
{
	return beverage_->cost() + cost_;
}
