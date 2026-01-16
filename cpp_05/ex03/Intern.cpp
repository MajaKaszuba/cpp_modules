/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:30:26 by mkaszuba          #+#    #+#             */
/*   Updated: 2026/01/03 17:32:01 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern() {}
Intern::Intern(const Intern &other) { (void)other; }
Intern &Intern::operator=(const Intern &other) { (void)other; return *this; }
Intern::~Intern() {}

static AForm* makeShrubbery(const std::string &target) { return new ShrubberyCreationForm(target); }
static AForm* makeRobotomy(const std::string &target) { return new RobotomyRequestForm(target); }
static AForm* makePresidential(const std::string &target) { return new PresidentialPardonForm(target); }

AForm* Intern::makeForm(const std::string &formName, const std::string &target) const
{
    struct FormPair {
        std::string name;
        AForm* (*create)(const std::string &target);
    };

    FormPair forms[] = {
        {"shrubbery creation", makeShrubbery},
        {"robotomy request", makeRobotomy},
        {"presidential pardon", makePresidential}
    };

    for (int i = 0; i < 3; ++i)
    {
        if (forms[i].name == formName)
        {
            std::cout << "Intern creates " << formName << std::endl;
            return forms[i].create(target);
        }
    }

    std::cout << "Intern couldn’t create " << formName << std::endl;
    return NULL;
}
