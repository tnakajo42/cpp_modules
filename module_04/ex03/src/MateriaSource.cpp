/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:30:45 by tnakajo           #+#    #+#             */
/*   Updated: 2025/02/20 18:43:34 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    // std::cout << "MateriaSource constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
    count = 0;
}

MateriaSource::MateriaSource(MateriaSource const &to_copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (to_copy.materia[i])
        {
            if (this->materia[i])
                delete this->materia[i];
            materia[i] = to_copy.materia[i]->clone();
        }
        else
            materia[i] = NULL;
    }
    // std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = to_copy;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &original)
{
    if (this != &original)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->materia[i])
                delete this->materia[i];
            if (original.materia[i])
                this->materia[i] = original.materia[i]->clone();
            else
                this->materia[i] = NULL;
        }
    }
    // std::cout << "MateriaSource assignment operator called" << std::endl;
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i])
            delete this->materia[i];
    }
    // std::cout << "MateriaSource destructor called" << std::endl;
}

// IMateriaSource::~IMateriaSource() {
//     std::cout << "IMateriaSource destructor called" << std::endl;
// }

void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;

    if (!m)
    {
        std::cout << "[ERROR] MateriaSource learnMateria() failed: NULL materia" << std::endl;
        return;
    }
    while(i < 4 && this->materia[i])
        i++;
    if (i < 4)
    {
        // std::cout << "MateriaSource learnMateria() called" << std::endl;
        this->materia[i] = m; // Store the original pointer
    }
    else
    {
        std::cout << "[ERROR] MateriaSource learnMateria() failed" << std::endl;
        delete m;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    int i = 0;

    while (i < 4 && this->materia[i] && this->materia[i]->getType() != type)
        i++;
    if (i < 4 && this->materia[i])
    {
        // std::cout << "MateriaSource createMateria() called" << std::endl;
        return this->materia[i]->clone();
    }
    else
    {
        std::cout << "MateriaSource createMateria() failed" << std::endl;
        return NULL;
    }
}
