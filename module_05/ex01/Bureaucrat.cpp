/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:13:24 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/28 20:11:02 by tnakajo          ###   ########.fr       */
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
void Bureaucrat::demote() {
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

// sign form
/**
 * successfully, it will print something like:
 * <bureaucrat> signed <form>
 * Otherwise, it will print something like:
 * <bureaucrat> couldn’t sign <form> because <reason>.
 */
void Bureaucrat::signForm(Form& f)
{
	try
	{
		f.beSigned(*this);
		std::cout << "<" << this->getName() << "> signed " << f.getFormName() << std::endl; 
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cout << "<" << this->getName() << "> couldn't sign " << f.getFormName();
		std::cout << " because <" << e.what() << ">" << std::endl;
	}
	// Removed below: Since beSigned checks if the bureaucrat’s grade is too low (bur.getGrade() > _grade_to_sign) and throws GradeTooLowException, GradeTooHighException is never triggered here.
	// catch (const Form::GradeTooHighException& e)
	// {
	// 	std::cout << "<" << this->getName() << "> couldn't sign " << f.getFormName();
	// 	std::cout << " because " << e.what() << ">" << std::endl;
	// }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return os; 
}
