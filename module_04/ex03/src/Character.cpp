/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:33:18 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 18:41:05 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(void) : _name("default") {}

Character::Character(std::string const &name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    // std::cout << "Character" << this->_name << " constructor called" << std::endl;
}

Character::Character(Character const &to_copy) : _name(to_copy._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (to_copy._inventory[i])
            this->_inventory[i] = to_copy._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
}

Character &Character::operator=(Character const &original)
{
    if (this != &original)
    {
        // this->_name = original._name; // no need, it's const
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i])
                delete this->_inventory[i];
            if (original._inventory[i])
                this->_inventory[i] = original._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    // delete unequip()ed materia
    for (size_t i = 0; i < _unequipped.size(); i++)
    {
        delete this->_unequipped[i];
    }
    _unequipped.clear();
    // std::cout << "Character destructor called" << std::endl;
}

void Character::equip(AMateria *m)
{
    if (!m)
    {
        std::cout << "[ERROR] Cannot equip NULL materia" << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            // std::cout << "Materia " << m->getType() << " equipped" << std::endl;
            return;
        }
    }
    std::cout << "[ERROR] Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
        std::cout << "[ERROR] Invalid index" << std::endl;
    else if (!this->_inventory[idx])
        std::cout << "[ERROR] No materia at index " << idx << std::endl;
    else
    {
        this->_unequipped.push_back(this->_inventory[idx]);
        this->_inventory[idx] = NULL; //do not delete, only remove reference
        // std::cout << "Materia unequipped" << std::endl;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= 4)
        std::cout << "[ERROR] Invalid index" << std::endl;
    else if (!this->_inventory[idx])
        std::cout << "[ERROR] No materia at index " << idx << std::endl;
    else
    {
        this->_inventory[idx]->use(target);
        // std::cout << "Materia used" << std::endl;
    }
}

std::string const &Character::getName() const
{
    return this->_name;
}

// ICharacter::~ICharacter()
// {
//     std::cout << "ICharacter destructor called" << std::endl;
// }
