/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:12:14 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/03 16:17:19 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Konstruktor
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constructed!" << std::endl;
}

// Destruktor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destructed." << std::endl;
}

// Nadpisany attack()
void ScavTrap::attack(const std::string& target) {
    if (_hitPoints == 0 || _energyPoints == 0) {
        std::cout << "ScavTrap " << _name << " is out of energy or dead and can't attack!" << std::endl;
        return;
    }

    _energyPoints--;
    std::cout << "ScavTrap " << _name << " viciously attacks " << target
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

// Nowa zdolność
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " has entered Gate keeper mode." << std::endl;
}
