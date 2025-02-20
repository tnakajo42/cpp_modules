/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:34:25 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/19 15:40:48 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* animal = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "dog->getType() : " << j->getType() << " " << std::endl;
	std::cout << "cat->getType() : " << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	animal->makeSound();

	std::cout << std::endl;

	// const WrongAnimal* w_animal = new WrongAnimal();
	// const WrongAnimal* w_cat = new WrongCat();

	// std::cout << "❌w_cat->getType() : " << w_cat->getType() << " " << std::endl;
	// std::cout << "❌w_animal->getType() : " << w_animal->getType() << " " << std::endl;

	// w_cat->makeSound();
	// w_animal->makeSound();

	delete animal;
	delete j;
	delete i;
	// delete w_animal;
	// delete w_cat;

	return 0;
}
