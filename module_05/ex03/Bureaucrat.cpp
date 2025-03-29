/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:13:24 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/28 22:26:06 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Unnamed"), _grade(150) {};

Bureaucrat::Bureaucrat(const std::string &name, int grade)
	 : _name(name), _grade(grade)
{
	if (grade < 1) throw Bureaucrat::GradeTooHighException();
	if (grade > 150) throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& oth)
	 : _name(oth._name), _grade(oth._grade) {};

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& oth)
{
	if (this != &oth) _grade = oth._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {};

void	Bureaucrat::promote()
{
	if (_grade <= 1) throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::demote(void) {
	if (_grade >= 150) throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(AForm &f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << "<" << this->getName() << "> signed " << f.getFormName() << std::endl; 
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cout << "<" << this->getName() << "> couldn't sign " << f.getFormName();
		std::cout << " because <" << e.what() << ">" << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &f) const
{
	try
	{
		f.execute(*this);
		std::cout << "<" << this->getName() << "> executed " << f.getFormName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "<" << this->getName() << "> couldn't execute " << f.getFormName();
		std::cout << " because <" << e.what() << ">" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return os; 
}
