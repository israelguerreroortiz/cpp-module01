/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:02:27 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/04 15:12:59 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
public:
    HumanA(const std::string &name, Weapon &weapon);
    ~HumanA();
    void attack() const;
private:
    std::string name;
    Weapon &weapon;
};
