/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:45:32 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/18 14:36:25 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

Contact::Contact(std::string _firstName, std::string _lastName, std::string _nickName, std::string _number, std::string _secret)
{
	firstName = _firstName;
	lastName = _lastName;
	nickName = _nickName;
	number = _number;
	secret = _secret;
}

int Contact::isnull(Contact contact)
{
	if (contact.firstName.empty())
		return (1);
	return (0);
}

void Contact::print_contact(Contact contact, int i)
{
	if (i == 0)
	{
		std::cout << "First name: " << firstName << std::endl;
		std::cout << "Last name: " << lastName << std::endl;
		std::cout << "Nickname: " << nickName << std::endl;
		std::cout << "Phone number: " << number << std::endl;
		std::cout << "Darkest secret: " << secret << std::endl;
	}
	else if (i == 1)
	{
		if (contact.firstName.length() > 10)
			std::cout << std::setw(9) << contact.firstName.substr(0, 9) << ".│";
		else
			std::cout << std::setw(10) << contact.firstName << "│";
	}
	else if (i == 2)
	{
		if (contact.lastName.length() > 10)
			std::cout << std::setw(9) << contact.lastName.substr(0, 9) << ".│";
		else
			std::cout << std::setw(10) << contact.lastName << "│";
	}
	else if (i == 3)
	{
		if (contact.nickName.length() > 10)
			std::cout << std::setw(9) << contact.nickName.substr(0, 9) << ".│";
		else
			std::cout << std::setw(10) << contact.nickName << "│";
	}
}