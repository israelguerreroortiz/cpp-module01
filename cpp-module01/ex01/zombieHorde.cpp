/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:06:27 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/03 16:32:59 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde (int N, std::string name)
{
    if (N <= 0)
        return (NULL);
    Zombie *horde = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return horde;
}