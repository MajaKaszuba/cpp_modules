/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:26:49 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/05/13 13:46:56 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Tworzy zombie (lokalnie, na stosie), nadaje imie i wywoluje announce
void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
    // Zombie zostanie zniszczony automatycznie po skonczeniu funkcji
}
