#include"Duck.h"
#include"MallardDuck.h"
int main() {
	Duck mallard = *(new MallardDuck());
	mallard.performFly();
	mallard.performQuack();

	system("pause");
	return 0;

}