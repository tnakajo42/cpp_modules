/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:10:58 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/06 15:34:50 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>		// for std::distance
#include <stdexcept>	// for std::length_error

class Span
{
private:
	const unsigned int	_maxN;
	std::vector<int>	_vect; // you can try multiset here too
public:
	Span();
	Span(unsigned int num);
	Span(const Span &oth);
	Span& operator=(const Span& rhs);
	~Span();

	void	addNumber(int num);
	template <typename Iterator>
	void	addNumbers(Iterator begin, Iterator end);
	int		shortestSpan() const;
	int		longestSpan() const;
};

template <typename Iterator>
void	Span::addNumbers(Iterator begin, Iterator end)
{
	size_t count = std::distance(begin, end);
	if (_vect.size() + count > _maxN)
		throw	std::length_error("Span is overflowed \\(>.<)/");
	_vect.insert(_vect.end(), begin, end);
}
