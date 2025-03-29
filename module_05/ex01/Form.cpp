/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:13:24 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/28 20:12:35 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
 : _form_name("Unnamed"), _form_signed(false), _grade_to_sign(150), _grade_to_execute(150) {};

Form::Form(const std::string &name, int sign, int execute)
 : _form_name(name), _form_signed(false), _grade_to_sign(sign), _grade_to_execute(execute)
{
	if (sign < 1 || execute < 1) throw Form::GradeTooHighException();
	if (sign > 150 || execute > 150) throw Form::GradeTooLowException();
}

Form::Form(const Form& oth)
 : _form_name(oth._form_name), _form_signed(oth._form_signed), _grade_to_sign(oth._grade_to_sign), _grade_to_execute(oth._grade_to_execute) {};

Form& Form::operator=(const Form& oth)
{
	if (this != &oth) _form_signed = oth._form_signed;
	return *this;
}

Form::~Form() {};

void	Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > _grade_to_sign) throw Form::GradeTooLowException();
	_form_signed = true;
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << "Name of form [" << f.getFormName();
	if (f.getFormSigned())
		os << "] has been signed.";
	else
	{
		os << "] is not signed." << std::endl;
		os << "The grade to sign is " << f.getGradeToSign() << std::endl;
		os << "The grade to execute is " << f.getGradeToExecute() << std::endl;
	}
	return os; 
}
