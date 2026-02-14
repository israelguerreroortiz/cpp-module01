/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:06:13 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/04 13:01:20 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie {
    public:
        Zombie(void);
        Zombie(const std::string& name);
        ~Zombie(void);
        void announce(void);
        void setName(const std::string& name);
        const std::string getName(void) const;
    private:
        std::string name;
};

Zombie* zombieHorde (int N, const std::string& name);