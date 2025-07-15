/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:24:24 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/04 12:33:20 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " says: ";
    j->makeSound(); // should print dog sound

    std::cout << i->getType() << " says: ";
    i->makeSound(); // should print cat sound

    std::cout << meta->getType() << " says: ";
    meta->makeSound(); // should print generic sound

    delete meta;
    delete j;
    delete i;

    return 0;
}
