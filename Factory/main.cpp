#include"AbstractorFactory.h"
#include"AbstractorProductA.h"
#include"AbstractorPeoductB.h"
#include"ConcreteFactory1.h"
#include"ConcreteFactory2.h"

#include<iostream>

int main() {

	AbstractorFactory* fc1 = new ConcreteFactory1();
	AbstractorProductA* pA1 = fc1->CreateProductA();
	AbstractorProductB* pB1 = fc1->CreateProductB();

	pA1->use();
	pB1->eat();

	AbstractorFactory* fc2 = new ConcreteFractory2();
	AbstractorProductA* pA2 = fc2->CreateProductA();
	AbstractorProductB* pB2 = fc2->CreateProductB();
	pA2->use();
	pB2->eat();

	system("pause");
	return 0;
}