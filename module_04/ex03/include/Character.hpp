/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:27:38 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 18:59:48 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Implement the Materias concrete classes Ice and Cure.
 * Use their name in lowercase ("ice" for Ice, "cure" for Cure) 
 * to set their types. Of course, their member function 
 * clone() will return a new instance of the same type 
 * (i.e., if you clone an Ice Materia, you will get a new Ice Materia).
 * The use(ICharacter&) member function will display:
 * • Ice: "* shoots an ice bolt at <name> *"
 * • Cure: "* heals <name>’s wounds *"
 * <name> is the name of the Character passed as parameter. 
 * Don’t print the angle brackets (< and >).
 * 
 * While assigning a Materia to another, 
 * copying the type doesn’t make sense.
 */

#pragma once

#include <iostream>
#include <string>
#include <vector>  // for memory leaks (storing unequipped Materias)
#include "Ice.hpp"
#include "Cure.hpp"
#include "Spark.hpp"
#include "Thunder.hpp"
#include "ThunderBolt.hpp"
#include "ThunderShock.hpp"
#include "ThunderWave.hpp"
#include "AMateria.hpp"

class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0; // The Character can equip up to 4 different Materias
    virtual void unequip(int idx) = 0; // Do not delete the Materia!
    virtual void use(int idx, ICharacter& target) = 0;
};

class Character: public ICharacter
{
private:
    std::string const _name; // const because it should not change
    AMateria *_inventory[4]; // The Character possesses an inventory of 4 slots, which means 4 Materias at most
    std::vector<AMateria*> _unequipped; // to store unequipped Materias

public:
    Character(void);
    Character(std::string const &name);
    Character(Character const &to_copy);
    Character &operator=(Character const &original);
    virtual ~Character();

    void equip(AMateria *m);
    void unequip(int idx); // Watch out for NULL pointers (memory leaks)
    void use(int idx, ICharacter &target); // idx is the Materia to be used
    std::string const &getName(void) const;
};
