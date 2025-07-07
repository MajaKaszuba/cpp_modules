/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:03:01 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/03 13:08:14 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath> // dla roundf

class Fixed {
private:
    int _raw;
    static const int _fracBits = 8;

public:
    Fixed();                       // Default constructor
    Fixed(const int n);            // Int constructor
    Fixed(const float f);          // Float constructor
    Fixed(const Fixed &other);     // Copy constructor
    Fixed &operator=(const Fixed &other); // Copy assignment operator
    ~Fixed();                     // Destructor

    int getRawBits() const;
    void setRawBits(int const raw);

    float toFloat() const;
    int toInt() const;
};

// Operator << przeciążony poza klasą
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
