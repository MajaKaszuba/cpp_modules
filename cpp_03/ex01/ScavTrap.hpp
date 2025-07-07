/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:11:34 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/03 16:16:24 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    // Konstruktor
    ScavTrap(const std::string& name);

    // Destruktor
    ~ScavTrap();

    // Nadpisana metoda attack
    void attack(const std::string& target);

    // Nowa zdolność
    void guardGate();
};

#endif
