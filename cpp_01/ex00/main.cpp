/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:26:42 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/05/13 14:16:24 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    // Zombie dynamiczne - trzeba usunac
    Zombie* heapZombie = newZombie("Zombiesław");
    heapZombie->announce();
    delete heapZombie; //USUN ZOMBIE STWORZONE PRZEZ NEW ZOMBIE

    // Zombie lokalne – automatycznie sie usunie
    randomChump("Colesław");

    return 0;
}
