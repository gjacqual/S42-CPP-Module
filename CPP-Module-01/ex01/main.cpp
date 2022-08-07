/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacqual <gjacqual@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:24:53 by gjacqual          #+#    #+#             */
/*   Updated: 2022/05/28 23:41:51 by gjacqual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "pbmain.hpp"

int main(void)
{
	PhoneBook 	phoneBook;
	std::string	cmd;
	
	std::cout << PROMPT << PLEASE_ENTER << std::endl;

	while (1)
	{
		std::cout << PROMPT;
		std::getline(std::cin, cmd);
		if (cmd == "EXIT" || std::cin.eof())
		{
			std::cout << PROMPT << EXIT_MSG <<std::endl;
			return 0;
		}
		else if (cmd == "ADD")
		{
			phoneBook.addContact();
		}
		else if (cmd == "SEARCH")
		{
			phoneBook.searchContact();
		}
		else
			std::cout << PROMPT << ERROR_MSG <<std::endl;
	}
	return 0;
}
