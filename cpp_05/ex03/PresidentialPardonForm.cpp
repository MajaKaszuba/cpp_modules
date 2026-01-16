/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:17:59 by mkaszuba          #+#    #+#             */
/*   Updated: 2026/01/03 17:18:00 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Konstruktor
PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

// Konstruktor kopiujący
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
    : AForm(other), _target(other._target)
{
}

// Operator przypisania
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}

// Destruktor
PresidentialPardonForm::~PresidentialPardonForm() {}

// Nadpisanie executeConcrete
void PresidentialPardonForm::executeConcrete() const
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
