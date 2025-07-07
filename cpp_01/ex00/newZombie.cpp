/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:26:47 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/05/13 13:46:04 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Tworzy zombie (dynamicznie, na stercie), nadaje imie i zwraca wskaznik
Zombie* newZombie(std::string name)
{
    return (new Zombie(name));
}
