/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 21:21:51 by mkaszuba          #+#    #+#             */
/*   Updated: 2026/01/10 21:58:11 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
public:
    virtual ~Base() {}
    static Base* generate();
    static void identify(Base* p);
    static void identify(Base& p);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif
