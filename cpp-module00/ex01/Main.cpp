/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:23:14 by iisraa11          #+#    #+#             */
/*   Updated: 2026/01/26 13:07:40 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

bool handleAdd(PhoneBook &phonebook)
{
    Contact contact;

    if (!contact.setFirstName()) return false;
    if (!contact.setLastName())  return false;
    if (!contact.setNickname())  return false;
    if (!contact.setNumber()) return false;
    if (!contact.setDarkestSecret()) return false;

    phonebook.addContact(contact);
    return true;
}


int main (void)
{
    PhoneBook phonebook;
    std::string input;
    std::cout << "Write ADD to add a contact, SEARCH to display contacts, or EXIT to quit the program." << std::endl;
    if (!std::getline(std::cin, input))
            return 1;
    while(input != "EXIT")
    {
        if (input == "ADD")
        {
            if (!handleAdd(phonebook))
                return 1;
        }
        else if (input == "SEARCH")
        {
           phonebook.searchContact();
        }
        else
        {
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
        }
        std::cout << "Write ADD to add a contact, SEARCH to display contacts, or EXIT to quit the program." << std::endl;
        if (!std::getline(std::cin, input))
            return 1;
    }
    return 0;
}