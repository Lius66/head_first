#include"Mocha.h"
#include"Whip.h"
#include"Exspreso.h"
#include<iostream>
int main() {
	Beverage* beverage = new Exspreso();
	std::cout << beverage->getDescription() << " :" << beverage->cost() << std::endl;
	auto b = new Mocha(beverage);
	std::cout << b->getDescription() << " :" << b->cost() << std::endl;
	//delete beverage;
	auto c = new Mocha(b);
	std::cout << c->getDescription() << " :" << c->cost() << std::endl;
	//delete b;
	auto d = new Whip(c);
	std::cout << d->getDescription() << " :" << d->cost() << std::endl;
	//delete c;
	//delete d;

	system("pause");

	return 0;
}