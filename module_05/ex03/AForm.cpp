/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:13:24 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/28 17:16:08 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
 : _form_name("Unnamed"), _form_signed(false), _grade_to_sign(150), _grade_to_execute(150) {};

AForm::AForm(const std::string &name, int sign, int execute)
 : _form_name(name), _form_signed(false), _grade_to_sign(sign), _grade_to_execute(execute)
{
	if (sign < 1 || execute < 1) throw AForm::GradeTooHighException();
	if (sign > 150 || execute > 150) throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& oth)
 : _form_name(oth._form_name), _form_signed(oth._form_signed), _grade_to_sign(oth._grade_to_sign), _grade_to_execute(oth._grade_to_execute) {};

AForm& AForm::operator=(const AForm& oth)
{
	if (this != &oth) _form_signed = oth._form_signed;
	return *this;
}

AForm::~AForm() {};

void	AForm::beSigned(Bureaucrat const &bur)
{
	if (bur.getGrade() > _grade_to_sign) throw AForm::GradeTooLowException();
	_form_signed = true;
}

void AForm::exeCheck(Bureaucrat const &exec) const
{
	if (!this->getFormSigned())
		throw AForm::ExecuteNotSigned();
	if (exec.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException(); 
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
	os << "Name of form [" << f.getFormName();
	if (f.getFormSigned())
		os << "] has been signed." << std::endl;
	else
	{
		os << "] is not signed." << std::endl;
		os << "The grade to sign is " << f.getGradeToSign() << std::endl;
		os << "The grade to execute is " << f.getGradeToExecute() << std::endl;
	}
	return os; 
}
