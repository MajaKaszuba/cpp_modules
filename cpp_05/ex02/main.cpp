/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:19:29 by mkaszuba          #+#    #+#             */
/*   Updated: 2026/01/03 17:22:04 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
    Bureaucrat alice("Alice", 1);
    Bureaucrat bob("Bob", 150);

    ShrubberyCreationForm shrubForm("home");
    std::cout << shrubForm << std::endl;

    bob.signForm(shrubForm);
    alice.signForm(shrubForm);

    std::cout << shrubForm << std::endl;

    bob.executeForm(shrubForm);
    alice.executeForm(shrubForm);

    std::cout << std::endl;

    RobotomyRequestForm roboForm("Marvin");
    std::cout << roboForm << std::endl;

    bob.signForm(roboForm);
    alice.signForm(roboForm);

    bob.executeForm(roboForm);
    alice.executeForm(roboForm);

    std::cout << std::endl;

    PresidentialPardonForm pardonForm("Marvin");
    std::cout << pardonForm << std::endl;

    bob.signForm(pardonForm);
    alice.signForm(pardonForm);

    bob.executeForm(pardonForm);
    alice.executeForm(pardonForm);

    return 0;
}
