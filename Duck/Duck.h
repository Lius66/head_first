#pragma once
#include"FlyBehavior.h"
#include"QuackBehavior.h"
#include<iostream>
#include<string>

class Duck
{
public:
	Duck();
	~Duck();
	void swim();
	void display();
	virtual void performQuack();
	virtual void performFly();
	void setFlyBehavior(FlyBehavior* fb);
	void setQuackBehavior(QuackBehavior* qb);
public:
	QuackBehavior* quackBehavior_;
	FlyBehavior* flyBehavior_;

};

