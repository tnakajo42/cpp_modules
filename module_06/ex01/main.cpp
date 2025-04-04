/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 22:43:02 by tnakajo           #+#    #+#             */
/*   Updated: 2025/03/31 23:19:54 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Serializer.hpp"

int main ()
{
	Data new_data;
	std::cout << "Address of data        : " << &new_data << std::endl;
	new_data.val = 42;
	std::cout << "Value assigned         : " << new_data.val << std::endl;
	uintptr_t serialized = Serializer::serualize(&new_data);
	std::cout << "Address of serial data : " << &serialized << std::endl;
	// std::cout << "serialized data        : " << serialized->data << std::endl; // error
	Data* deserialized = Serializer::deserialize(serialized);
	std::cout << "deserialized data      : " << deserialized << std::endl;

	if (deserialized == &new_data)
		std::cout << "value deserialized     : " << deserialized->val << std::endl;
	else
		std::cout << "Serialization and Deserializaton Failed !" << std::endl;
}
