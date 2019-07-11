#include "ConcreteFactory1.h"

AbstractorProductA* ConcreteFactory1::CreateProductA()
{
	return new ProduteA1();
}

AbstractorProductB * ConcreteFactory1::CreateProductB()
{
	return new ProductorB1();
}
