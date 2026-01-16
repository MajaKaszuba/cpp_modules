/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 21:35:51 by mkaszuba          #+#    #+#             */
/*   Updated: 2026/01/10 21:52:52 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *Base::generate()
{
    std::srand(std::time(0));
    int r = std::rand() % 3;
    if (r == 0) 
        return new A;
    else if (r == 1) 
        return new B;
    else
        return new C;
}

void  Base::identify(Base* p)
{
    if (dynamic_cast<A*>(p)) 
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p)) 
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p)) 
        std::cout << "C" << std::endl;
    else 
        std::cout << "Unknown" << std::endl;
}

void Base::identify(Base& p)
{
    try {
        (void)dynamic_cast<A&>(p); 
        std::cout << "A" << std::endl;
        return;
    } catch(...) {}
    try {
        (void)dynamic_cast<B&>(p); 
        std::cout << "B" << std::endl; 
        return;
    } catch(...) {}
    try {
        (void)dynamic_cast<C&>(p); 
        std::cout << "C" << std::endl; 
        return;
    } catch(...) {}
    std::cout << "Unknown" << std::endl;
}
