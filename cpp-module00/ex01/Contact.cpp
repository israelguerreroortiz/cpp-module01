/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:32:01 by iisraa11          #+#    #+#             */
/*   Updated: 2026/01/23 16:59:35 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact() {};
bool Contact::setFirstName(void)
{
    std::cout << "Enter your first name: ";
    std::getline(std::cin, firstName);
    while (firstName.empty())
    {
        std::cout << "First name cannot be empty. Please enter a valid first name." << std::endl;
        if (!std::getline(std::cin, firstName)) return false;
    }
    this->firstName = firstName;
    return true;
}
std::string Contact::getFirstName(void)
{
    return (firstName);
}

bool Contact::setLastName(void)
{
    std::cout << "Enter your last name: ";
    std::getline(std::cin, lastName);
    while (lastName.empty())
    {
        std::cout << "Last name cannot be empty. Please enter a valid last name." << std::endl;
        if(!std::getline(std::cin, lastName)) return false;
    }
    this->lastName = lastName;
    return true;
}

std::string Contact::getLastName(void)
{
    return (lastName);
}

bool Contact::setNickname(void)
{
    std::cout << "Enter your nickname: ";
    std::getline(std::cin, nickname);
    while (nickname.empty())
    {
        std::cout << "Nickname cannot be empty. Please enter a valid nickname." << std::endl;
        if (!std::getline(std::cin, nickname)) return false;
    }
    this->nickname = nickname;
    return true;
}
std::string Contact::getNickname(void)
{
    return (nickname);
}
bool Contact::setDarkestSecret(void)
{
    std::cout << "Enter your darkest secret: ";
    std::getline(std::cin, darkestSecret);
    while (darkestSecret.empty())
    {
        std::cout << "Darkest secret cannot be empty. Please enter a valid darkest secret." << std::endl;
        if (!std::getline(std::cin, darkestSecret)) return false;
    }
    this->darkestSecret = darkestSecret;
    return true;
}
std::string Contact::getDarkestSecret(void)
{
    return (darkestSecret);
}
bool Contact::setNumber(void)
{
    std::cout << "Enter your phone number: ";
    std::getline(std::cin, number);
    while (number.empty())
    {
        std::cout << "Phone number cannot be empty. Please enter a valid phone number." << std::endl;
        if (!std::getline(std::cin, number)) return false;
    }
    this->number = number;
    return true;
}
std::string Contact::getNumber(void)
{
    return (number);
}