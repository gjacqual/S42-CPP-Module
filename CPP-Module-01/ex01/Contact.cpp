/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacqual <gjacqual@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 03:50:56 by gjacqual          #+#    #+#             */
/*   Updated: 2022/05/28 23:57:57 by gjacqual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

void Contact::setFirstName(std::string string)
{
	Contact::firstName = string;
}

void Contact::setLastName(std::string string)
{
	Contact::lastName = string;
}

void Contact::setNickName(std::string string)
{
	Contact::nickName = string;
}

void Contact::setPhoneNumber(std::string string)
{
	Contact::phoneNumber = string;
}

void Contact::setDarkestSecret(std::string string)
{
	Contact::darkestSecret = string;
}

std::string	Contact::getFirstName(void)
{
	return firstName;
}

std::string	Contact::getLastName(void)
{
	return lastName;
}

std::string	Contact::getNickName(void)
{
	return nickName;
}

std::string	Contact::getPhoneNumber(void)
{
	return phoneNumber;
}

std::string	Contact::getDarkestSecret(void)
{
	return darkestSecret;
}

void	Contact::setContactData(void)
{
	std::string tmpFirst, tmpLast, tmpNick, tmpPhone, tmpSecret; 
	
	std::cout << "Enter First name: \t";
	std::getline(std::cin, tmpFirst);
	setFirstName(tmpFirst);
	std::cout << "Enter Last name: \t";
	std::getline(std::cin, tmpLast);
	setLastName(tmpLast);
	std::cout << "Enter Nick name: \t";
	std::getline(std::cin, tmpNick);
	setNickName(tmpNick);
	std::cout << "Enter Phone number: \t";
	std::getline(std::cin, tmpPhone);
	setPhoneNumber(tmpPhone);
	std::cout << "Enter Darkest secret: \t";
	std::getline(std::cin, tmpSecret);
	setDarkestSecret(tmpSecret);
}