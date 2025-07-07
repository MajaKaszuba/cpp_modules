/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 12:24:04 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/04 13:05:15 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Animal.hpp
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal& other);
	virtual ~Animal();

	Animal& operator=(const Animal& other);

	std::string getType() const;

	// To uczyni klasę abstrakcyjną:
	virtual void makeSound() const = 0;
};

#endif
