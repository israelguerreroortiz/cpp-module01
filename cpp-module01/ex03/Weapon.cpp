/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:17:27 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/04 15:56:49 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type)
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(const std::string& type)
{
    this->type = type;
}