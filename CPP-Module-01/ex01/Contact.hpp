/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacqual <gjacqual@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:02:22 by gjacqual          #+#    #+#             */
/*   Updated: 2022/05/13 20:10:09 by gjacqual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


#include <iostream>
#include <iomanip>
#include <string>


class Contact
{
	std::string firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
public:
	Contact( void );
	~Contact( void );
	
	void setFirstName(std::string string);
	void setLastName(std::string string);
	void setNickName(std::string string);
	void setPhoneNumber(std::string string);
	void setDarkestSecret(std::string string);

	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickName(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkestSecret(void);

	void	setContactData(void);
		
};

#endif