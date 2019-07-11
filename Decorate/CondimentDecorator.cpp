#include "CondimentDecorator.h"



CondimentDecorator::CondimentDecorator()
{
	description_ = "Unkonw decorator";
}


CondimentDecorator::~CondimentDecorator()
{
}

std::string CondimentDecorator::getDescription()
{
	return description_;
}
