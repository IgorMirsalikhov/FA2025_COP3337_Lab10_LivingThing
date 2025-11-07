#include <iostream>
#include "classes.hpp"

int main(void) {
	std::string input;
    std::cin >> input;
	if (input == "Cat")
		LivingThingTreePrinter::print(Cat());
	else if (input == "Sardine")
		LivingThingTreePrinter::print(Sardine());
	else if (input == "Animal")
		LivingThingTreePrinter::print(Animal());
	else if (input == "Fish")
		LivingThingTreePrinter::print(Fish());
	else if (input == "Bass")
		LivingThingTreePrinter::print(Bass());
	else if (input == "Mammal")
		LivingThingTreePrinter::print(Mammal());
	else if (input == "Tiger")
		LivingThingTreePrinter::print(Tiger());
	else if (input == "Plant")
		LivingThingTreePrinter::print(Plant());
	else if (input == "Flower")
		LivingThingTreePrinter::print(Flower());

	return 0;
}
