/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacqual <gjacqual@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:10:21 by gjacqual          #+#    #+#             */
/*   Updated: 2022/05/07 02:40:16 by gjacqual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>	// header file for I/O organization
#include <ctype.h>	// for toupper function

int	main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
