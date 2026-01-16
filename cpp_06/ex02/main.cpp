/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 21:23:26 by mkaszuba          #+#    #+#             */
/*   Updated: 2026/01/10 21:57:07 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    Base* obj = Base::generate();
    
    std::cout << "Identify by pointer: ";
    Base::identify(obj);

    std::cout << "Identify by reference: ";
    Base::identify(*obj);

    delete obj;
    return 0;
}
