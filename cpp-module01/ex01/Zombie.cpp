/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:05:52 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/04 13:01:51 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(const std::string& name)
{
    this->name = name;
}
Zombie::~Zombie(void)
{
    std::cout << name << std::endl;
}
void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzZ..." << std::endl;
}

void Zombie::setName(const std::string& name)
{
    this->name = name;
    
}

const std::string Zombie::getName(void) const
{
    return (name);
}