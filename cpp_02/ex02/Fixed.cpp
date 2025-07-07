/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:29:45 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/03 15:14:44 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Canonicals
Fixed::Fixed() : _fpValue(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) {
    // std::cout << "Int constructor called" << std::endl;
    _fpValue = i << _bits;
}

Fixed::Fixed(const float f) {
    // std::cout << "Float constructor called" << std::endl;
    _fpValue = roundf(f * (1 << _bits));
}

Fixed::Fixed(const Fixed& other) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        _fpValue = other.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

// Getters & Setters
int Fixed::getRawBits() const {
    return _fpValue;
}

void Fixed::setRawBits(int const raw) {
    // std::cout << "setRawBits called" << std::endl;
    _fpValue = raw;
}

float Fixed::toFloat() const {
    return static_cast<float>(_fpValue) / (1 << _bits);
}

int Fixed::toInt() const {
    return _fpValue >> _bits;
}

// Comparison operators
bool Fixed::operator>(const Fixed& other) const { return _fpValue > other._fpValue; }
bool Fixed::operator<(const Fixed& other) const { return _fpValue < other._fpValue; }
bool Fixed::operator>=(const Fixed& other) const { return _fpValue >= other._fpValue; }
bool Fixed::operator<=(const Fixed& other) const { return _fpValue <= other._fpValue; }
bool Fixed::operator==(const Fixed& other) const { return _fpValue == other._fpValue; }
bool Fixed::operator!=(const Fixed& other) const { return _fpValue != other._fpValue; }

// Arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result._fpValue = _fpValue + other._fpValue;
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result._fpValue = _fpValue - other._fpValue;
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result._fpValue = (_fpValue * other._fpValue) >> _bits;
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    Fixed result;
    result._fpValue = (_fpValue << _bits) / other._fpValue;
    return result;
}

// Increment / Decrement
Fixed& Fixed::operator++() {
    _fpValue++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    _fpValue++;
    return temp;
}

Fixed& Fixed::operator--() {
    _fpValue--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    _fpValue--;
    return temp;
}

// Min & Max without ternary
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    if (a < b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    if (a < b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    if (a > b)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    if (a > b)
        return a;
    return b;
}

// Stream operator
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}
