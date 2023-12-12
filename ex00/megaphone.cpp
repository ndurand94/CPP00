/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndurand <ndurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:28:15 by ndurand           #+#    #+#             */
/*   Updated: 2023/12/11 17:15:28 by ndurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	std::string str;
	

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < ac; i++)
		{
			str = av[i];
			int	len = str.length();
			for (int j = 0; j < len; j++)
				std::cout << (char)(toupper(str[j]));
		}
	std::cout << std::endl;
	return 0;
}