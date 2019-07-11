#include "Duck.h"



Duck::Duck()
{
}


Duck::~Duck()
{
}

void Duck::swim()
{
	std::cout << "All duck float, even toyes\n";
}

void Duck::display()
{
	std::cout << "display function\n";
}

void Duck::performQuack()
{
	quackBehavior_->quack();
}

void Duck::performFly()
{
	flyBehavior_->fly();
}

void Duck::setFlyBehavior(FlyBehavior* fb)
{
	flyBehavior_ = fb;
}

void Duck::setQuackBehavior(QuackBehavior* qb)
{
	quackBehavior_ = qb;
}
