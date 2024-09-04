/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:45:32 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/04 15:36:43 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::setContact(std::string _firstName, std::string _lastName, std::string _nickName, std::string _number, std::string _secret)
{
	firstName = _firstName;
	lastName = _lastName;
	nickName = _nickName;
	number = _number;
	secret = _secret;
}