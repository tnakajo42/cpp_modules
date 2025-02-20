/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:34:25 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 19:06:40 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/Spark.hpp"
#include "../include/Thunder.hpp"
#include "../include/ThunderBolt.hpp"
#include "../include/ThunderShock.hpp"
#include "../include/ThunderWave.hpp"
#include "../include/Character.hpp"

#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;	

	std::cout << "====================" << std::endl;

	IMateriaSource* thunderMateria = new MateriaSource();
	thunderMateria->learnMateria(new Spark());
	thunderMateria->learnMateria(new Thunder());
	thunderMateria->learnMateria(new ThunderBolt());
	thunderMateria->learnMateria(new ThunderShock());
	thunderMateria->learnMateria(new ThunderWave());

	ICharacter* pikachu = new Character("pikachu");

	AMateria* thunderTmp;
	thunderTmp = thunderMateria->createMateria("spark"); // 65 damages
	pikachu->equip(thunderTmp);
	thunderTmp = thunderMateria->createMateria("thunder"); // 110 damages
	pikachu->equip(thunderTmp);
	thunderTmp = thunderMateria->createMateria("thunderBolt"); // 90 damages
	pikachu->equip(thunderTmp);
	thunderTmp = thunderMateria->createMateria("thunderShock"); // 40 damages
	pikachu->equip(thunderTmp);
	thunderTmp = thunderMateria->createMateria("thunderWave"); // 0 damages
	pikachu->equip(thunderTmp);

	ICharacter* charmander = new Character("charmander");
	pikachu->use(0, *charmander);
	pikachu->use(1, *charmander);
	pikachu->use(2, *charmander);
	pikachu->use(3, *charmander);
	pikachu->use(4, *charmander);

	pikachu->unequip(1);
	pikachu->use(1, *charmander);

	pikachu->use(3, *charmander); // ThunderShock: "* attacks <name> 40 damages *"

	delete charmander;
	delete pikachu;
	delete thunderMateria;

	return 0;
}
