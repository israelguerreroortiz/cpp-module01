/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 11:33:42 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/04 12:24:30 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Memory address of the string variable: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "Value of string variable: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}