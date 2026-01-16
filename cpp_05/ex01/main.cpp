/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 15:17:07 by mkaszuba          #+#    #+#             */
/*   Updated: 2026/01/03 15:27:32 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "=== Bureaucrats & Forms ===\n" << std::endl;

	Bureaucrat alice("Alice", 42);
	Bureaucrat bob("Bob", 100);

	Form form1("TopSecret", 50, 30);
	Form form2("SimpleForm", 100, 50);

	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;

	std::cout << "\n=== Signing tests ===\n" << std::endl;

	alice.signForm(form1);

	bob.signForm(form1);

	bob.signForm(form2);

	alice.signForm(form1);

	std::cout << "\n=== Forms status after signing ===\n" << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;

	try
	{
		Form invalidForm("Impossible", 0, 50);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		Form invalidForm2("ImpossibleTooLow", 50, 151);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
