/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:34:47 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/18 16:18:36 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &src);
    WrongAnimal &operator=(WrongAnimal const &ani);
    virtual ~WrongAnimal();

    void makeSound() const; // take out the virtual keyword
    std::string getType() const;
};
