/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 15:16:29 by mkaszuba          #+#    #+#             */
/*   Updated: 2026/01/03 15:16:30 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	std::cout << "=== VALID BUREAUCRAT ===" << std::endl;
	try
	{
		Bureaucrat a("Alice", 42);
		std::cout << a << std::endl;

		a.incrementGrade();
		std::cout << "After increment: " << a << std::endl;

		a.decrementGrade();
		std::cout << "After decrement: " << a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\n=== TOO HIGH GRADE ===" << std::endl;
	try
	{
		Bureaucrat b("Bob", 0);
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\n=== TOO LOW GRADE ===" << std::endl;
	try
	{
		Bureaucrat c("Charlie", 151);
		std::cout << c << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\n=== INCREMENT OUT OF RANGE ===" << std::endl;
	try
	{
		Bureaucrat d("Diana", 1);
		std::cout << d << std::endl;
		d.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\n=== DECREMENT OUT OF RANGE ===" << std::endl;
	try
	{
		Bureaucrat e("Edward", 150);
		std::cout << e << std::endl;
		e.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
