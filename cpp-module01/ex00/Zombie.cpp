/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:36:09 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/03 15:58:54 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
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