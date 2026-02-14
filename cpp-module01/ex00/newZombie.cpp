/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:22:18 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/03 15:35:44 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
    if (name.empty())
        return (NULL);
    Zombie *zombie = new Zombie(name);
    if (!zombie)
    {
        delete zombie;
        return (NULL);
    }
    return zombie;
}