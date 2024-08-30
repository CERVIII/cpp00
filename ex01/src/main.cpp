/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:44:16 by pcervill          #+#    #+#             */
/*   Updated: 2024/08/30 18:52:17 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main (void)
{
	std::string command;

	while (1)
	{
		std::cout << "Enter the comand: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, command);
		std::cout << "Command: " << command << std::endl;
		command.erase(0, command.find_first_not_of(" \t\v\f\r"));
		while (isspace(command[command.length() - 1]))
			command.erase(command.find_last_not_of(" \t\v\f\r") + 1, command[command.length() - 1]);
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			std::cout << "ADD" << std::endl;
		else if (command == "SEARCH")
			std::cout << "SEARCH" << std::endl;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}