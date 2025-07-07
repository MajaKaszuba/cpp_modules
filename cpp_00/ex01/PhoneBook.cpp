/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:05:45 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/05/12 13:55:18 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : totalContacts(0) {}

void PhoneBook::addContact() {
    std::string fn, ln, nn, pn, ds;

    std::cout << "First name: ";
    std::getline(std::cin, fn); //wczytuje caly wiersz (np. z imieniem)
    std::cout << "Last name: ";
    std::getline(std::cin, ln);
    std::cout << "Nickname: ";
    std::getline(std::cin, nn);
    std::cout << "Phone number: ";
    std::getline(std::cin, pn);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, ds);

    if (fn.empty() || ln.empty() || nn.empty() || pn.empty() || ds.empty())
    {
        std::cout << "Fields cannot be empty!" << std::endl;
        return;
    }

    int index = totalContacts % 8;
    contacts[index].setContact(fn, ln, nn, pn, ds);
    totalContacts++;
}

void PhoneBook::searchContacts() const {
    std::cout << std::setw(10) << "Index" << "|" //setw formatuje kolumny na szerokosc 10 znakow
              << std::setw(10) << "First name" << "|"
              << std::setw(10) << "Last name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        if (!contacts[i].isEmpty())
            contacts[i].displayShort(i);
    }

    std::cout << "Enter index to view: ";
    std::string input;
    std::getline(std::cin, input);
    if (input.length() == 1 && isdigit(input[0]))
    {
        int i = input[0] - '0';
        if ((i >= 0) && (i < 8) && (!contacts[i].isEmpty()))
        {
            contacts[i].displayFull();
            return;
        }
    }
    std::cout << "Invalid index!" << std::endl;
}
