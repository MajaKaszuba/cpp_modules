/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 09:55:56 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/03 09:55:57 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
public:
    Zombie(); // Konstruktor bezargumentowy
    ~Zombie(); // Destruktor

    void setName(std::string name); // Ustawia imię zombie
    void announce() const; // Ogłasza się

private:
    std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
