/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:06:53 by iisraa11          #+#    #+#             */
/*   Updated: 2026/01/22 12:17:58 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;
    }
    else
    {
        int argvIndex = 1;
        int charIndex;
        std::string str;
        while(argv[argvIndex])
        {
            charIndex = 0;
            str = argv[argvIndex];
            while(str[charIndex])
            {
                std::cout << (char)toupper(str[charIndex]);
                charIndex++;
            }
            if (argvIndex != argc - 1)
                std::cout << " ";
            argvIndex++;
        }
    }
    return 0;
}
