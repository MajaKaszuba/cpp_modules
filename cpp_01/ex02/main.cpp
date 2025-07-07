/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:10:24 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/03 10:17:51 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    // 1. Tworzymy zmienną typu string
    std::string brain = "HI THIS IS BRAIN";

    // 2. Wskaźnik (przechowuje adres zmiennej brain)
    std::string* stringPTR = &brain;

    // 3. Referencja (alias do brain)
    std::string& stringREF = brain;

    // Adresy
    std::cout << "Memory address of brain:     " << &brain << std::endl;
    std::cout << "Memory address in stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address in stringREF: " << &stringREF << std::endl;

    // Wartości
    std::cout << "Value of brain:              " << brain << std::endl;
    std::cout << "Value pointed by stringPTR:  " << *stringPTR << std::endl;
    std::cout << "Value pointed by stringREF:  " << stringREF << std::endl;

    return 0;
}
