#pragma once
#include"AbstractorPeoductB.h"
#include"AbstractorProductA.h"

class AbstractorFactory {
public :
	virtual AbstractorProductA* CreateProductA() = 0;
	virtual AbstractorProductB* CreateProductB() = 0;
};