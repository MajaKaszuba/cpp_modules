/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:26:54 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/05/13 13:47:57 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie {
private:
    std::string name;

public:
    Zombie(std::string name); // Konstruktor tworzy zombie z podanym imieniem
    ~Zombie(); // Destruktor informuje ze zombie został zniszczony

    void announce(); // Funkcja która wypisuje ogłoszenie zombie
};

#endif