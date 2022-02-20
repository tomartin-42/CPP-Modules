#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* Wrongmeta = new WrongAnimal(); 
	const WrongAnimal* Wrongi = new WrongCat(); 

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	Wrongmeta->makeSound();
	Wrongi->makeSound();

	delete j;
	delete i;
	delete meta;
	delete Wrongmeta;
	delete Wrongi;
}
