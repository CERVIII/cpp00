/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:57:13 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/17 20:23:57 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

std::string	get_info(std::string msg)
{
	std::string dst;

	std::cout << msg;
	while (1)
	{
		std::getline(std::cin, dst);
		if (dst.empty())
			std::cout << "Empty field not valid! Please, try again." << std::endl << msg;
		else
			break;
	}
	return (dst);
}

PhoneBook PhoneBook::add_contact(PhoneBook pb, int i)
{
	Contact new_contact(get_info("First name: "), get_info("Last name: "),
						get_info("Nickname: "), get_info("Phone number: "), 
						get_info("Darkest secret: "));
	pb.contact[i] = new_contact;
	return (pb);
}

PhoneBook PhoneBook::del_contact(PhoneBook pb)
{
	int i;

	i = 0;
	while (i < 7)
	{
		pb.contact[i] = pb.contact[i + 1];
		i++;
	}
	return (pb);
}

void	PhoneBook::search(PhoneBook pb)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (pb.contact[i].isnull(pb.contact[i]))
			break;
		pb.contact[i].print_contact();
		i++;
	}
}