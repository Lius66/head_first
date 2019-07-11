#pragma once
#include"AbstractorFactory.h"
#include"ProduteA1.h"
#include"ProductorB1.h"
class ConcreteFactory1
	:public AbstractorFactory {
public:
	AbstractorProductA* CreateProductA()override;
	AbstractorProductB* CreateProductB()override;
};