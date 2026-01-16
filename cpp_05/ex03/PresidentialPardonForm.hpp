/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:17:50 by mkaszuba          #+#    #+#             */
/*   Updated: 2026/01/03 17:17:51 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
private:
    std::string _target;

public:
    // Konstruktor z targetem
    PresidentialPardonForm(const std::string &target);

    // Konstruktor kopiujący i operator=
    PresidentialPardonForm(const PresidentialPardonForm &other);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

    // Destruktor
    ~PresidentialPardonForm();

    // Nadpisanie funkcji czysto wirtualnej z AForm
    void executeConcrete() const;
};

#endif
