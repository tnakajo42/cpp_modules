/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalerConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 21:46:17 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/31 22:17:48 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <limits>
#include <sstream>
#include <cctype>
#include <iomanip>

class ScalerConverter
{
private:
	ScalerConverter();
	ScalerConverter(const ScalerConverter& oth);
	ScalerConverter& operator=(const ScalerConverter& oth);
	~ScalerConverter();

	static void	convertInt(const std::string &input);
	static void	convertChar(const std::string &input);
	static void	convertFloat(const std::string &input);
	static void	convertDouble(const std::string &input);

	class BadInputException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return "Bad input";
		}
	};

public:
	static void	convert(const std::string &input);
};
