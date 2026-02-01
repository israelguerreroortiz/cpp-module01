/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iisraa11 <iisraa11@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:28:17 by iisraa11          #+#    #+#             */
/*   Updated: 2026/01/24 17:33:53 by iisraa11         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

class PhoneBook {
    private:
    Contact list[8];
    int indexList;
    int numContacts;
    bool full;
    void printColumn(const std::string &str);
    public:
    PhoneBook();
    void addContact(Contact contact);
    void searchContact(void);
};

#endif