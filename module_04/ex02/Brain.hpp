/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:14:02 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/18 19:00:09 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
protected:
    std::string ideas[100];

public:
    Brain();
    Brain(Brain const &brain);
    Brain &operator=(Brain const &brain);
    virtual ~Brain();

    std::string getIdea(int i) const;
    void setIdea(std::string idea, int i);
};
