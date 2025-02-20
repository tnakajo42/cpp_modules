/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:22:19 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 16:50:36 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * implement the necessary member functions
 */

#pragma once

#include <iostream>
#include <string>
// #include "Character.hpp" // for ICharacter class definition

class ICharacter; // to avoid circular dependency

class AMateria
{
protected:
    std::string _type;

public:
    AMateria();
    AMateria(std::string const &type);
    AMateria(AMateria const &to_copy);
    AMateria &operator=(AMateria const &original);
    virtual ~AMateria();

    std::string const &getType() const; // Returns the materia type

    /** 
     * This function is a pure virtual function
     * This function overloads Ice and Cure classes
     */
    virtual AMateria *clone() const = 0; // 0 means 純粋仮想関数

    /**
     * This function is a pure virtual function
     * This function is for the Character class
     */
    virtual void use(ICharacter& target);
};
