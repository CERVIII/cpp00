/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:45:26 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/18 12:55:19 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
	# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class	PhoneBook
{
	private:
		Contact contact[8];
	public:
		PhoneBook();
		~PhoneBook();

		PhoneBook	add_contact(PhoneBook pb, int i);
		PhoneBook	del_contact(PhoneBook pb);
		void		search(PhoneBook pb);
};

#endif