/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalerConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 21:46:10 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/31 22:41:47 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * static_cast is the first cast you should attempt to use. 
 * It does things like implicit conversions between types 
 * (such as int to float, or pointer to void*), 
 * and it can also call explicit conversion functions (or implicit ones). 
 * In many cases, explicitly stating static_cast isn't necessary, 
 * but it's important to note that the T(something) syntax is equivalent 
 * to (T)something and should be avoided (more on that later). 
 * A T(something, something_else) is safe, however, and guaranteed to call the constructor.
 * 
 * static_cast can also cast through inheritance hierarchies. 
 * It is unnecessary when casting upwards (towards a base class), 
 * but when casting downwards it can be used 
 * as long as it doesn't cast through virtual inheritance. 
 * It does not do checking, however, and it is undefined behavior 
 * to static_cast down a hierarchy to a type that isn't actually the type of the object.
 */

#include "./inc/ScalerConverter.hpp"

ScalerConverter::ScalerConverter() {}
ScalerConverter::ScalerConverter(const ScalerConverter& oth) { (void)oth; }
ScalerConverter& ScalerConverter::operator=(const ScalerConverter& oth) { (void)oth; return *this; }
ScalerConverter::~ScalerConverter() {}

void ScalerConverter::convert(const std::string &input)
{
	std::cerr << "int:    ";
	try	{ convertInt(input); }
	catch (const std::exception &e) { std::cerr << e.what() << std::endl; }

	std::cerr << "char:   ";
	try { convertChar(input); }
	catch (const std::exception &e) { std::cerr << e.what() << std::endl; }

	std::cerr << "float:  ";
	try { convertFloat(input); }
	catch (const std::exception &e) { std::cerr << e.what() << std::endl; }

	std::cerr << "double: ";
	try { convertDouble(input); }
	catch (const std::exception &e) { std::cerr << e.what() << std::endl; }
}

void	ScalerConverter::convertInt(const std::string &input)
{
	if (input == "nan" || input == "-inf" || input == "+inf" || \
		input == "nanf" || input == "-inff" || input == "+inff")
		throw BadInputException();
	if (input.length() == 1 && !std::isdigit(static_cast<unsigned char>(input[0])))
	{
		std::cout << static_cast<int>(input[0]) << std::endl;
		return ;
	}
	std::istringstream iss(input); // input string stream
	int i;
	if (!(iss >> i) || !iss.eof()) // same as std::stoi
		throw BadInputException();
	std::cout << i << std::endl;
}

void	ScalerConverter::convertChar(const std::string &input)
{
	if (input == "nan" || input == "-inf" || input == "+inf" || \
		input == "nanf" || input == "-inff" || input == "+inff")
		throw BadInputException();
	if (input.length() == 1 && !std::isdigit(static_cast<unsigned char>(input[0])))
	{
		char c = input[0];
		std::cout << "'" << c << "'" << std::endl;
	}
	else
	{
		std::istringstream iss(input);
		int i;
		if (!(iss >> i))
			throw BadInputException();
		if (i < 0 || i > 127)
			std::cout << "impossible" << std::endl;
		else if (i < 32 || i > 127)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	}
	return ;
}

void	ScalerConverter::convertFloat(const std::string &input)
{
	std::cout << std::fixed;
	if (input == "nanf" || input == "-inff" || input == "+inff")
	{
		std::cout << input << std::endl;  
		return ;
	}
	std::istringstream iss(input);
	float f;
	if (!(iss >> f))
		throw BadInputException();
	int precision = 1;
	size_t	pos = input.find('.');
	if (pos != std::string::npos)
		precision = std::min(static_cast<size_t>(6), input.length() - pos - 1); // float has limited precision (~6-7 digits)
	std::cout << std::setprecision(precision) << f << "f" << std::endl;
}

void	ScalerConverter::convertDouble(const std::string &input)
{
	if (input == "nan" || input == "-inf" || input == "+inf")
	{
		std::cout << input << std::endl;
		return ;
	}
	std::istringstream iss(input);
	double	d;
	if (!(iss >> d))
		throw BadInputException();
	std::cout << d << std::endl;
}
