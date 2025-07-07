/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:02:06 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/03 16:34:00 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap dt("Max");

    dt.attack("dummy");
    dt.takeDamage(20);
    dt.beRepaired(10);
    dt.guardGate();       // metoda pochodząca ze ScavTrap
    dt.highFivesGuys();   // metoda po FragTrap
    dt.whoAmI();

    return 0;
}
