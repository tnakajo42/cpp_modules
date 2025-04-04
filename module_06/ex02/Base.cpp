/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 21:46:10 by tnakajo           #+#    #+#             */
/*   Updated: 2025/04/01 21:30:21 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * dynamic_cast is exclusively used for handling polymorphism. 
 * You can cast a pointer or reference to any polymorphic type to any other class type 
 * (a polymorphic type has at least one virtual function, declared or inherited). 
 * You can use it for more than just casting downwards
 *  – you can cast sideways or even up another chain. 
 * The dynamic_cast will seek out the desired object and return it if possible. 
 * If it can't, it will return nullptr in the case of a pointer, 
 * or throw std::bad_cast in the case of a reference.
 * 
 * dynamic_cast has some limitations, though. 
 * It doesn't work if there are multiple objects of the same type in the inheritance hierarchy 
 * (the so-called 'dreaded diamond') and you aren't using virtual inheritance. 
 * It also can only go through public inheritance
 *  - it will always fail to travel through protected or private inheritance. 
 * This is rarely an issue, however, as such forms of inheritance are rare.
 */

#include "./inc/Base.hpp"
#include "./inc/A.hpp"
#include "./inc/B.hpp"
#include "./inc/C.hpp"

Base::~Base() {}

Base* generate()
{
	time_t seed = std::time(0);
	int	rand_i = seed % 3;
	std::cout << "now: " << seed << std::endl;
	// int	rand_i = std::rand() % 3;

	switch (rand_i)
	{
	case 0:
		std::cout << "-->A<--" << std::endl;
		return new A();
	case 1:
		std::cout << "-->B<--" << std::endl;
		return new B();
	case 2:
		std::cout << "-->C<--" << std::endl;
		return new C();
	default:
		return NULL;
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "'A' is pointed" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "'B' is pointed" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "'C' is pointed" << std::endl;
	else
		std::cout << "Nobody knows" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "'A' is referenced" << std::endl;
        return ;
	}
	catch (std::exception &e) {}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "'B' is referenced" << std::endl;
        return ;
	} catch (std::exception &e) {}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "'C' is referenced" << std::endl;
        return ;
	} catch (std::exception &e) {}

	std::cout << "Unknown Type" << std::endl;
}
