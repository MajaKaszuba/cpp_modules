/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 09:56:03 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/03 09:56:04 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0)
        return nullptr;

    Zombie* horde = new Zombie[N]; // tablica zombie na heapie

    for (int i = 0; i < N; ++i) {
        horde[i].setName(name); // ustawienie imienia dla każdego zombie
    }

    return horde;
}
