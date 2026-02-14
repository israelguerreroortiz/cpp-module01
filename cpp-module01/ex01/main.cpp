/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:43:26 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/04 10:56:35 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
   Zombie *horde =  zombieHorde(5, "Mbappe");
   int i = 0;
   while (i < 5)
   {
        horde[i].announce();
        i++;
   }
   delete[] horde;
}