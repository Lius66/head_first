#include "Whip.h"



Whip::Whip(Beverage* beverage)
{
	cost_ = 0.12;
	this->beverage_ = beverage;
	description_ = beverage_->description_+" add whip";
}


Whip::~Whip()
{
}

std::string Whip::getDescription()
{
	return beverage_->getDescription()+description_;
}

double Whip::cost()
{
	return beverage_->cost() + cost_;
}
