/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:20:58 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/28 19:15:40 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_form_name;
	bool				_form_signed;
	const int			_grade_to_sign;
	const int			_grade_to_execute;

public:
	Form();
	Form(const std::string &name, int sign, int execute);
	Form(const Form& oth);
	Form& operator=(const Form& oth);
	~Form();

	const std::string	getFormName() const { return _form_name; };
	bool				getFormSigned() const { return _form_signed; };
	int					getGradeToSign() const { return _grade_to_sign; };
	int					getGradeToExecute() const { return _grade_to_execute; };

	void				beSigned(Bureaucrat &bur);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Grade is too high!");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Grade is too low!");
		}
	};
};

std::ostream &operator<<(std::ostream &os, Form const &f);
