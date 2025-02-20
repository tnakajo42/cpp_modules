/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:13:41 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/18 19:10:42 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &brain)
{
    std::cout << "AB (Artificial Brain) copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
}

Brain &Brain::operator=(Brain const &brain)
{
    std::cout << "AB (Artificial Brain) assignation operator called" << std::endl;
    if (this != &brain)
        for (int i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int i) const
{
    if (i < 0 || i >= 100)
        return "You have reached the limit of the Free plan. Give the evaluator 10 euros to unlock this feature.";
    return "[Idea] " + this->ideas[i];
}

void Brain::setIdea(std::string idea, int i)
{
    if (i < 0 || i >= 100)
    {
        std::cout << "You have reached the limit of the Free plan. Give the evaluator 10 euros to unlock this feature." << std::endl;
        return ;
    }
    this->ideas[i] = idea;
}
