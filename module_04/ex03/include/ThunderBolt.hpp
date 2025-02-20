/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ThunderBolt.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:33:08 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 18:51:01 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "Character.hpp"

class ThunderBolt : public AMateria
{
public:
    ThunderBolt();
    ThunderBolt(ThunderBolt const &to_copy);
    ThunderBolt& operator=(ThunderBolt const &original);
    ~ThunderBolt();
    AMateria* clone() const;
    void use(ICharacter& target);
    /**
     * Spark: "* attacks <name> 65 damages *"
     * Thunder: "* attacks <name> 110 damages *" 
     * ThunderBolt: "* attacks <name> 90 damages *"
     * ThunderShock: "* attacks <name> 40 damages *"
     * ThunderWave: "* attacks <name> 0 damages *"
     */
};
