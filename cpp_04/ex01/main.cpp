/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:24:24 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/04 12:44:24 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; // powinien wywołać destruktory Dog, Brain i Animal
    delete i; // powinien wywołać destruktory Cat, Brain i Animal

    std::cout << "\n--- ARRAY TEST ---\n";
    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size / 2; ++i)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; ++i)
        animals[i] = new Cat();

    for (int i = 0; i < size; ++i)
        delete animals[i];

    std::cout << "\n--- DEEP COPY TEST ---\n";
    Dog basic;
    basic.getBrain()->setIdea(0, "Chase cat");

    Dog copy = basic;
    copy.getBrain()->setIdea(0, "Eat steak");

    std::cout << "Basic Dog Brain idea[0]: " << basic.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy  Dog Brain idea[0]: " << copy.getBrain()->getIdea(0) << std::endl;

    return 0;
}
