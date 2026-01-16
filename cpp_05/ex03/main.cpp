/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:30:47 by mkaszuba          #+#    #+#             */
/*   Updated: 2026/01/03 17:31:02 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
    Intern someRandomIntern;
    AForm* form;

    Bureaucrat alice("Alice", 1);

    form = someRandomIntern.makeForm("shrubbery creation", "home");
    if (form)
    {
        alice.signForm(*form);
        alice.executeForm(*form);
        delete form;
    }
    std::cout << std::endl;

    form = someRandomIntern.makeForm("robotomy request", "Bender");
    if (form)
    {
        alice.signForm(*form);
        alice.executeForm(*form);
        delete form;
    }
    std::cout << std::endl;

    form = someRandomIntern.makeForm("presidential pardon", "Marvin");
    if (form)
    {
        alice.signForm(*form);
        alice.executeForm(*form);
        delete form;
    }
    std::cout << std::endl;

    form = someRandomIntern.makeForm("unknown form", "Nobody");
    if (form)
        delete form;

    return 0;
}
