/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:20:58 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/27 19:47:40 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat& oth);
	Bureaucrat& operator=(const Bureaucrat& oth);
	~Bureaucrat();

	std::string getName() const { return _name; };
	int			getGrade() const { return _grade; };

	void		promote();
	void		demote();

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

/**
 * operator<< takes std::ostream reference 'o' and Bureaucrat const reference 'src'
 * Bureaucrat object is sent to the output stream (o)
 * and then the modified stream is returned
 */
std::ostream &operator<<(std::ostream &o, Bureaucrat const& src);
