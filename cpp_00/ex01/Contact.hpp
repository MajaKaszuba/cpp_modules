/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:05:37 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/05/12 13:58:31 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <string> //std::
# include <iostream> //wejscia i wyjscia z konsoli (<< i >>)
# include <iomanip> //setw

class Contact {
private: //tylko wewnatrz klasy
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public: //mozna uzywac z zewnatrz klasy
    void setContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds); //ustawia dane kontaktu
    void displayShort(int index) const; //wyswietla skrocona wersje do tabelki
    void displayFull() const; //wyswietla wszystko
    bool isEmpty() const; //sprawdza czy dane sa puste
};

#endif
