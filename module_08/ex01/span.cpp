/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:38:48 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/05 20:42:56 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/span.hpp"

Span::Span() : _maxN(0) {}
Span::Span(unsigned int num) : _maxN(num) {}
Span::Span(const Span &oth) : _maxN(oth._maxN), _vect(oth._vect) {}
Span& Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		if (rhs._vect.size() > _maxN)
			throw std::length_error("The number is out of bounds(N)");
		_vect = rhs._vect;
	}
	return *this;
}
Span::~Span() {}

void	Span::addNumber(int num)
{
	if(_vect.size() >= _maxN)
		throw	std::length_error("Span is full, can't add number \\(>.<)/");
	_vect.push_back(num);
}

int		Span::shortestSpan() const
{
	int					shortestSpan;
	int					diff;
	std::vector<int>	sortVect;

	if (_vect.size() < 2)
		throw	std::runtime_error("The number is too short to cmp \\(>.<)/");
	sortVect = _vect;
	std::sort(sortVect.begin(), sortVect.end());
	shortestSpan = sortVect[1] - sortVect[0];
	for (unsigned int i = 0; i < sortVect.size() - 1; i++)
	{
		diff = sortVect[i + 1] - sortVect[i];
		if (diff < shortestSpan)
			shortestSpan = diff;
	}
	return shortestSpan;
}
// int		Span::longestSpan() const
// {
// 	std::vector<int>::const_iterator	iterMin;
// 	std::vector<int>::const_iterator	iterMax;
// 	int 								minNum;
// 	int 								maxNum;

// 	if (_vect.size() < 2)
// 		throw	std::runtime_error("The number is too short to cmp");
// 	iterMin = std::min_element(_vect.begin(), _vect.end());
// 	iterMax = std::max_element(_vect.begin(), _vect.end());
// 	minNum = *iterMin;
// 	maxNum = *iterMax;
// 	return (maxNum - minNum);
// }

int		Span::longestSpan() const
{
	if (_vect.size() < 2)
		throw	std::runtime_error("The number is too short to cmp");
	return *std::max_element(_vect.begin(), _vect.end()) - *std::min_element(_vect.begin(), _vect.end());
}
