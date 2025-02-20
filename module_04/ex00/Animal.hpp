/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:37:57 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 21:14:02 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;
public:
    Animal();
    Animal(std::string type);
    Animal(Animal const &src); // this constant is for the object not to change
    Animal &operator=(Animal const &ani);
    virtual ~Animal();

    virtual void makeSound() const; // this constant is for the function not to change the object
    std::string getType() const;
};
