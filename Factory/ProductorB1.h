#pragma once
#include "AbstractorPeoductB.h"
class ProductorB1 :
	public AbstractorProductB
{
public:
	ProductorB1();
	~ProductorB1();
	void eat()override;
};

