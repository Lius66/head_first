#include "MallardDuck.h"



MallardDuck::MallardDuck()
{
	setQuackBehavior(new Quack());
	setFlyBehavior(new FlyWithWings());
}


MallardDuck::~MallardDuck()
{
	delete quackBehavior_;
	delete flyBehavior_;
}

//void MallardDuck::performQuack()
//{
//}
