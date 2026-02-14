/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:41:10 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/03 15:50:23 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie* z = newZombie("HeapZombie");
    z->announce();
    delete z;

    randomChump("StackZombie");
    return 0;
}
