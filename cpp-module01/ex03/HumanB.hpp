/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:06:16 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/04 13:31:17 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
public:
    HumanB(const std::string &name);
    HumanB(const std::string &name, Weapon &weapon);
    ~HumanB();
    void setWeapon(Weapon &weapon);
    void attack() const;
private:
    std::string name;
    Weapon *weapon;
};