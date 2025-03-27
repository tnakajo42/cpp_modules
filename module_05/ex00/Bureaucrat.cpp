/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:13:24 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/27 20:09:13 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Unnamed"), _grade(150) {};

Bureaucrat::Bureaucrat(const std::string &name, int grade)
	 : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& oth)
	 : _name(oth._name), _grade(oth._grade) {};

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& oth)
{
	if (this != &oth)
		_grade = oth._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {};

// good
void Bureaucrat::promote()
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

// bad
void Bureaucrat::demote(void) {
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return os; 
}
