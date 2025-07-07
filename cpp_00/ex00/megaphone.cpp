/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:31:24 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/05/12 13:27:28 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>  // pozwala nam używać std::cout (czyli wypisywać tekst na ekran)
#include <cctype>    // zawiera funkcję toupper(), która zamienia litery na wielkie

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; //std::cout wypisuje, << to operator wypisywania
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string arg = argv[i]; //std::string tworzy stringa arg
            for (size_t j = 0; j < arg.length(); j++)
                std::cout << (char)std::toupper(arg[j]);
        }
        std::cout << std::endl; //std::endl kończy linijkę i robi enter
    }
    return (0);
}
