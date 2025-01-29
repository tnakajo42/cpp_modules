/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakajo <tnakajo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:47:26 by tnakajo           #+#    #+#             */
/*   Updated: 2025/01/29 10:01:33 by tnakajo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac < 2)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (ac > 1 && av[i])
	{
		j = 0;
		while (i > 0 && av[i][j])
		{
			cout << (char)toupper(av[i][j]);
			j++;
		}
		i++;
	}
	cout << endl; /* "\n" */
	return (0);
}
