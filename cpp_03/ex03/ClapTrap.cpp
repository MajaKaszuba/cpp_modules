/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:00:48 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/03 16:00:50 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Konstruktor
ClapTrap::ClapTrap(const std::string& name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " created with 10 HP, 10 energy, 0 attack damage." << std::endl;
}

// Destruktor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed." << std::endl;
}

// Atakuje przeciwnika — wypisujemy komunikat, zużywamy 1 punkt energii jeśli możliwe
void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0) {
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target
				  << ", causing " << _attackDamage << " points of damage!" << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " has no energy or is dead and cannot attack." << std::endl;
	}
}

// Otrzymuje obrażenia i zmniejsza HP (do 0 minimum)
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount) {
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage and is now dead!" << std::endl;
	} else {
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	}
}

// Naprawia siebie, zwiększając HP i zużywając 1 punkt energii, jeśli to możliwe
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0) {
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " has no energy or is dead and cannot repair." << std::endl;
	}
}
