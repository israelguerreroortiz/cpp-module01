/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:26:22 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/04 13:04:33 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
public:
    Weapon(const std::string& type);
    ~Weapon();
    const std::string& getType() const;
    void setType(const std::string& type);
private:
    std::string type;
};