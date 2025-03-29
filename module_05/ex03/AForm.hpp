/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:20:58 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/28 22:08:09 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	_form_name;
	bool				_form_signed;
	const int			_grade_to_sign;
	const int			_grade_to_execute;

public:
	AForm();
	AForm(const std::string &name, int sign, int execute);
	AForm(const AForm& oth);
	AForm& operator=(const AForm& oth);
	virtual ~AForm();

	const std::string&	getFormName() const { return _form_name; };
	bool				getFormSigned() const { return _form_signed; };
	int					getGradeToSign() const { return _grade_to_sign; };
	int					getGradeToExecute() const { return _grade_to_execute; };
	void				beSigned(Bureaucrat const &bur);
	
	virtual void		execute(Bureaucrat const &exec) const = 0;
	void				exeCheck(Bureaucrat const &exec) const;

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

	class ExecuteNotSigned : public std::exception
	{
		public :
			virtual char const *what() const throw()
			{
				return ("Form is not signed!");
			}
	};

	class FileOpeningFail : public std::exception
	{
		public :
			virtual char const *what() const throw()
			{
				return ("File cannot be opened!");
			}
	};
};

std::ostream &operator<<(std::ostream &os, AForm const &f);
