#pragma once
#include"AbstractorFactory.h"
#include"ProduteA2.h"
#include"ProductorB2.h"
class ConcreteFractory2
	:public AbstractorFactory {
public:
	AbstractorProductA* CreateProductA() override;
	AbstractorProductB* CreateProductB() override;
};