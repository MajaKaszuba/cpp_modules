/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:02:06 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/03 16:22:58 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap ft("Max");

    ft.attack("target dummy");
    ft.takeDamage(20);
    ft.beRepaired(10);
    ft.highFivesGuys();

    return 0;
}
