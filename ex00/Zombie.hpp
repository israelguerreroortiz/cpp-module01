/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:02:47 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/03 16:19:22 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie {
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
    private:
        std::string name;
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );