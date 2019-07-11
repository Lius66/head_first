#include "ConcreteFactory2.h"

AbstractorProductA * ConcreteFractory2::CreateProductA()
{
	return new ProduteA2();
}

AbstractorProductB * ConcreteFractory2::CreateProductB()
{
	return new ProductorB2();
}
