#pragma once
#include"AbstractorPeoductB.h"
class ProductorB2 :
	public AbstractorProductB
{
public:
	ProductorB2();
	~ProductorB2();
	void eat() override;
};

