#pragma once
#include "Duck.h"
#include"QuackBehavior.h"
#include"Quack.h"
#include"FlyBehavior.h"
#include"FlyWithWings.h"
class MallardDuck :
	public Duck
{
public:
	MallardDuck();
	~MallardDuck();
	/*void performQuack()override;
	void performFly()override;*/

};

