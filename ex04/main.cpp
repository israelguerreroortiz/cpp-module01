/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 12:23:25 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/12 12:36:21 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main (int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: <filename> <string1> <string2>" << std::endl;
    }
    std::string filename = argv[1];
    std::string string1 = argv[2];
    std::string string2 = argv[3];
    std::ifstream inputFile;
    std::ofstream outputFile;
    std::string line;

    inputFile.open(filename.c_str());
    outputFile.open((filename + ".replace").c_str());
    
    while (std::getline(inputFile, line))
    {
        size_t pos = line.find(string1);
        while (pos != std::string::npos)
        {
            line = line.substr(0, pos) + string2 + line.substr(pos + string1.length());
            pos = line.find(string1, pos + string2.length());
        }
        outputFile << line << std::endl;
    }
    outputFile.close();
    inputFile.close();
    return (0);
}