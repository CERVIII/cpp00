/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:44:16 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/17 20:31:00 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int	main (void)
{
	std::string command;
	PhoneBook	pb;
	int i;

	i = 0;
	while (1)
	{
		std::cout << "Enter the comand: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, command);
		command.erase(0, command.find_first_not_of(" \t\v\f\r"));
		while (isspace(command[command.length() - 1]))
			command.erase(command.find_last_not_of(" \t\v\f\r") + 1, command[command.length() - 1]);
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			if (i > 7)
			{
				while (1)
				{
					std::cout << "Attention! Maximum number of contacts reached, if you continue the oldest contact will be deleated in order to add the new one. (Y/N): ";
					std::getline(std::cin, command);
					command.erase(0, command.find_first_not_of(" \t\v\f\r"));
					while (isspace(command[command.length() - 1]))
						command.erase(command.find_last_not_of(" \t\v\f\r") + 1, command[command.length() - 1]);
					if (command == "Y")
					{
						pb = pb.del_contact(pb);
						i = 7;
						break;
					}
					else if (command == "N")
						break;
					else
						std::cout << "Not valid entrance!, try again." << std::endl;
				}
			}
			if (i < 8)
			{
				pb = pb.add_contact(pb, i);
				i++;
			}
		}
		else if (command == "SEARCH")
		{
			pb.search(pb);
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}