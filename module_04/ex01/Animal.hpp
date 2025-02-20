/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:37:57 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 21:14:34 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal {
protected: // only family can access
    std::string type;
public:
    Animal();
    Animal(std::string type);
    Animal(Animal const &src);
    Animal &operator=(Animal const &ani);
    virtual ~Animal();

    virtual void makeSound() const;
    std::string getType() const;
};
