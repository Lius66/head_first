#include "HouseBlender.h"



HouseBlender::HouseBlender()
{
	desccription_ = "House blender";
}


HouseBlender::~HouseBlender()
{
}

std::string HouseBlender::getDescription()
{
	return desccription_;
}

double HouseBlender::cost()
{
	return 0.89;
}
