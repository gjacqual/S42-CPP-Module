/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacqual <gjacqual@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:51:03 by gjacqual          #+#    #+#             */
/*   Updated: 2022/05/29 01:18:09 by gjacqual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	counterCont = 0;
	i = 0;
	return;
}

PhoneBook::~PhoneBook( void )
{
	return;
}

void	PhoneBook::addContact( void )
{
	
	contacts[i].setContactData();
	i++;
	i = i % CONTACT_MAX_SIZE;
	if (counterCont < CONTACT_MAX_SIZE)
		counterCont++;
	
}

void	PhoneBook::searchContact( void )
{
	if (!counterCont)
		std::cout << EMPTY_PHONEBOOK << std::endl;
	else
	{
		PhoneBook::printList();	
	}
}

static std::string printTruncateStr(std::string string)
{
	std::cout << std::setw(10);
	if (string.size() > COL_LEN)
	{
		string.insert(9, ".");
		string.resize(10);
		std::cout << string;
	}
	else
		std::cout << string;
	
	return (string);
}

void	PhoneBook::printList( void )
{
	std::cout << "|     INDEX|FIRST NAME| LAST NAME| NICK NAME|" << std::endl;
	
	for(int i = 0; i < counterCont; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		printTruncateStr(contacts[i].getFirstName());
		std::cout << "|";
		printTruncateStr(contacts[i].getLastName());
		std::cout << "|";
		printTruncateStr(contacts[i].getNickName());
		std::cout << "|" << std::endl;
	 
	}
	printListItem();
	return;
}

void	PhoneBook::printListItem( void )
{
	std::string	indexStr;
	int		indexBook;
	
	std::cout << "\n*Write the contact's index*" << std::endl;
	std::cout << "#-->";
	std::getline(std::cin, indexStr);
	if (indexStr.size() != 1 || !isdigit(indexStr[0]))
	{
		std::cout << "*Incorrect input!* " << std::endl;
		return;	
	}
	indexBook = atoi(indexStr.c_str());
	while (indexBook < 1 || indexBook > i)
	{
		 std::cout << "*There is no such index in the list" << std::endl;
		 return;
	}			
	std::cout << "First name: " << contacts[indexBook - 1].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[indexBook - 1].getLastName() << std::endl;
	std::cout << "Nick name: " << contacts[indexBook - 1].getNickName() << std::endl;
	std::cout << "Phone number: " << contacts[indexBook - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[indexBook - 1].getDarkestSecret() << std::endl;
}
