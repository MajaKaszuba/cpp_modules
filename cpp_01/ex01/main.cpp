/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 09:55:41 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/03 10:06:11 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void) {
	int N = 5;
	Zombie *horde = zombieHorde(N, "Zombo");

	if (!horde)
		return 1;

	// check if there is N zombies in horde
	for (int i = 0; i < N; i++) {
		std::cout << "Zombie " << i + 1 << " ";
		horde[i].announce();
	}

	delete [] horde;

	return 0;
}
