/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:33:11 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 16:53:21 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(Ice const &to_copy);
    Ice& operator=(Ice const &original);
    ~Ice();
    AMateria* clone() const;
    void use(ICharacter& target); // Ice: "* shoots an ice bolt at <name> *"
};
