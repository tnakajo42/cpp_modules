/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:15:59 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 19:21:20 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat(void);
    Cat(const Cat &to_copy);
    Cat& operator=(const Cat &original);
    ~Cat(void);

    virtual void makeSound() const;
};
