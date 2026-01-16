/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:45:29 by mkaszuba          #+#    #+#             */
/*   Updated: 2026/01/10 21:14:52 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
    Data d;
    d.name = "Example";
    d.value = 42;

    std::cout << "Original Data address: " << &d << std::endl;
    std::cout << "Original Data values: name = " << d.name << ", value = " << d.value << std::endl;

    uintptr_t raw = Serializer::serialize(&d);
    std::cout << "Serialized value (uintptr_t): " << raw << std::endl;

    Data* deserialized = Serializer::deserialize(raw);
    std::cout << "Deserialized Data address: " << deserialized << std::endl;
    std::cout << "Deserialized Data values: name = " << deserialized->name
              << ", value = " << deserialized->value << std::endl;

    if (deserialized == &d)
        std::cout << "Success: deserialized pointer matches original!" << std::endl;
    else
        std::cout << "Error: pointers do not match!" << std::endl;

    return 0;
}