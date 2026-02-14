/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:50:39 by iisraa11          #+#    #+#             */
/*   Updated: 2026/02/13 10:16:36 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Harl
{
public:
    Harl();
    ~Harl();
    void complain( std::string level );
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};