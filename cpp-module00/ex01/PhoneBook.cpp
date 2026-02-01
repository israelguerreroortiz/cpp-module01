/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:32:44 by iisraa11          #+#    #+#             */
/*   Updated: 2026/01/24 17:34:01 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
   indexList = 0;
    numContacts = 0;
}
void PhoneBook::addContact(Contact contact)
{
    if (indexList == 8)
       indexList = 0;
    list[indexList] = contact;
   indexList++;
    if (numContacts < 8)
        numContacts++;
}
void PhoneBook::printColumn(const std::string &str)
{
    std::string out;

    if (str.length() > 10)
        out = str.substr(0, 9) + ".";
    else
        out = str;

    std::cout << std::setw(10) << out;
}

void PhoneBook::searchContact(void)
{   
    std::string input;
    int i = 0;
    while (i < numContacts)
    {
        std::cout << std::setw(10) << i << " | ";
        printColumn(list[i].getFirstName());
        std::cout << " | ";
        printColumn(list[i].getLastName());
        std::cout << " | ";
        printColumn(list[i].getNickname());
        std::cout << std::endl;
        i++;
    }
}
