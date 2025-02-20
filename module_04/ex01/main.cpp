/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:34:25 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/19 15:41:30 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	const Animal* animal = new Animal();
	animal->makeSound();
	delete animal;

	Animal	*animals[3];
	
	for (int i = 0; i < 3; i++)
	{
		if (i % 2 == 0)
		{
			animals[i] = new Dog();
		}
		else
			animals[i] = new Cat();
	}

	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
		animals[i]->makeSound();

	for (int i = 0; i < 3; i++)
		delete animals[i];

	/*

	std::cout << "\n🧠 Let's start BRAIN 🧠\n" << std::endl;

	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat();
	Cat *cat3 = new Cat();
	Cat *cat4 = new Cat();
	Cat *cat5 = new Cat();
	Cat *cat6 = new Cat();
	Cat *cat7 = new Cat();
	Cat *cat8 = new Cat();
	Dog *dog1 = new Dog();

	cat1->getBrain()->setIdea("Cat Cafe Vibes: Set up a cozy space with lots of pillows, soft music, and a warm drink in hand—just like a cat would love lounging in the sun.", 0);
	cat2->getBrain()->setIdea("Laser Pointer Fun: Get a laser pointer and race around like a little kitten chasing after it. It's great for exercise and a good laugh!", 1);
	cat3->getBrain()->setIdea("Box Forts: Cats love boxes, so why not create your own fortress? Get creative with cardboard and design a human-sized playhouse.", 2);
	cat4->getBrain()->setIdea("Cat Nap: Take a nap during the day, preferably in a sunbeam, and make sure it’s a good one—no rush to wake up!", 3);
	cat5->getBrain()->setIdea("Food Whiskers: Try eating a snack that looks like it could be a cat treat (but tastier, of course)—think tuna or salmon in cute mini portions.", 4);
	cat6->getBrain()->setIdea("Chasing Shadows: Cats love chasing shadows and lights, so try moving around some light sources and see where they lead.", 5);
	cat7->getBrain()->setIdea("Stretch Like a Cat: Do a yoga session and focus on those stretching poses—cat pose, of course, is a must!", 6);
	cat8->getBrain()->setIdea("Cat Toy DIY: Create your own string or feather toy, and let your imagination run wild with what you could play with!", 7);
	dog1->getBrain()->setIdea("Dog Park: run, run, and run... !!", 8);

	std::cout << "cat1: " << cat1->getBrain()->getIdea(0) << std::endl;
	std::cout << "cat2: " << cat2->getBrain()->getIdea(1) << std::endl;
	std::cout << "cat3: " << cat3->getBrain()->getIdea(2) << std::endl;
	std::cout << "cat4: " << cat4->getBrain()->getIdea(3) << std::endl;
	std::cout << "cat5: " << cat5->getBrain()->getIdea(4) << std::endl;
	std::cout << "cat6: " << cat6->getBrain()->getIdea(5) << std::endl;
	std::cout << "cat7: " << cat7->getBrain()->getIdea(6) << std::endl;
	std::cout << "cat8: " << cat8->getBrain()->getIdea(7) << std::endl;
	std::cout << "dog1: " << dog1->getBrain()->getIdea(8) << std::endl;

	delete cat1;
	delete cat2;
	delete cat3;
	delete cat4;
	delete cat5;
	delete cat6;
	delete cat7;
	delete cat8;
	delete dog1;

	*/

	return 0;
}
