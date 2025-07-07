/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:03:03 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/03 13:08:07 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : _raw(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Int constructor
Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    _raw = n << _fracBits;  // Przesunięcie w lewo o 8 bitów
}

// Float constructor
Fixed::Fixed(const float f) {
    std::cout << "Float constructor called" << std::endl;
    _raw = roundf(f * (1 << _fracBits));
}

// Copy constructor
Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    _raw = other._raw;
}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        _raw = other._raw;
    }
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// getRawBits
int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return _raw;
}

// setRawBits
void Fixed::setRawBits(int const raw) {
    _raw = raw;
}

// toFloat
float Fixed::toFloat() const {
    return (float)_raw / (1 << _fracBits);
}

// toInt
int Fixed::toInt() const {
    return _raw >> _fracBits;
}

// Operator <<
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}
