/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:45:32 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/17 20:15:53 by pcervill         ###   ########.fr       */
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

void Contact::print_contact()
{
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone number: " << number << std::endl;
	std::cout << "Darkest secret: " << secret << std::endl;
}