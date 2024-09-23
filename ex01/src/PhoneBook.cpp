/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:57:13 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/18 21:22:32 by pcervill         ###   ########.fr       */
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

int isnum(std::string str, int i)
{
	if (str.size() != 1)
		return (0);
	if (str[0] >= '0' && str[0] <= ('0' + i))
		return (1);
	return (0);
}

void	PhoneBook::search(PhoneBook pb)
{
	int i;
	int max;
	std::string index;

	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│" << std::setw(10) << "Index" << "│";
	std::cout << std::setw(10) << "First name" << "│";
	std::cout << std::setw(10) << "Last name" << "│";
	std::cout << std::setw(10) << "Nickname" << "│" << std::endl;
	i = 0;
	while (i < 8)
	{
		if (pb.contact[i].isnull(pb.contact[i]))
			break;
		std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
		std::cout << "│" << std::setw(10) << i << "│";
		pb.contact[i].print_contact(pb.contact[i], 1);
		pb.contact[i].print_contact(pb.contact[i], 2);
		pb.contact[i].print_contact(pb.contact[i], 3);
		std::cout << std::endl;
		i++;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
	max = i -1;
	while (1)
	{
		std::cout << "Enter the index of the contact you want to see: ";
		getline(std::cin, index);
		index.erase(0, index.find_first_not_of(" \t\v\f\r"));
        while (std::isspace(index[index.length() - 1]))
            index.erase(index.find_last_not_of(" \t\v\r\f") + 1, index[index.length() - 1]);
		if (isnum(index, max))
		{
			i = (int)index[0] - '0';
			pb.contact[i].print_contact(pb.contact[i], 0);
			break;
		}
		else
			std::cout << "Invalid index" << std::endl;
	}
	return ;
}