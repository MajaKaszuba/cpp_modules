/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:28:43 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/03 16:32:52 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name) 
    : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), _name(name) {
    _hitPoints = FragTrap::_hitPoints;       // 100
    _energyPoints = ScavTrap::_energyPoints; // 50
    _attackDamage = FragTrap::_attackDamage; // 30

    std::cout << "DiamondTrap " << _name << " constructed!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _name << " destructed." << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << _name
              << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}
