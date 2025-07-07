/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:05:47 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/05/12 13:36:09 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
private:
    Contact contacts[8]; //tablica kontaktow (max 8)
    int totalContacts; //ile juz dodano

public:
    PhoneBook(); //konstruktor (inicjuje totalContacts)
    void addContact();
    void searchContacts() const;
};

#endif
