/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:32:23 by iisraa11          #+#    #+#             */
/*   Updated: 2026/01/23 16:58:43 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
    private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string number;
    std::string darkestSecret;
    public:
    Contact();
    bool setFirstName(void);
    std::string getFirstName(void);
    bool setLastName(void);
    std::string getLastName(void);
    bool setNickname(void);
    std::string getNickname(void);
    bool setDarkestSecret(void);
    std::string getDarkestSecret(void);
    bool setNumber(void);
    std::string getNumber(void);
};

#endif