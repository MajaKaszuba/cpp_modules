/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 19:20:35 by mkaszuba          #+#    #+#             */
/*   Updated: 2026/01/10 20:21:01 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}

static bool isInt(const std::string &s)
{
    char *end;
    strtol(s.c_str(), &end, 10);
    return (*end == '\0');
}

static bool isPseudoLiteral(const std::string &s)
{
	return (s == "nan" || s == "+inf" || s == "-inf"
		|| s == "nanf" || s == "+inff" || s == "-inff");
}

void ScalarConverter::convert(const std::string &literal)
{
	if (isPseudoLiteral(literal))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
        if (literal == "nanf" || literal == "+inff" || literal == "-inff")
        {
            std::cout << "float: " << literal << std::endl;
            std::cout << "double: " << literal.substr(0, literal.size() - 1) << std::endl;
        }
        else
        {
            std::cout << "float: " << literal << "f" << std::endl;
            std::cout << "double: " << literal << std::endl;
        }
		return;
	}
    if (literal.length() == 1 && !std::isdigit(literal[0]))
    {
        char c = literal[0];
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
        return;
    }
    if (isInt(literal))
    {
        long val = strtol(literal.c_str(), 0, 10);
        if (val >= 32 && val <= 126)
            std::cout << "char: '" << static_cast<char>(val) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << val << std::endl;
        std::cout << "float: " << static_cast<float>(val) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(val) << ".0" << std::endl;
        return;
    }
    char *end;
    float fVal = strtof(literal.c_str(), &end);
    if (*end == 'f' && *(end + 1) == '\0')
    {
        if (fVal >= 32 && fVal <= 126)
            std::cout << "char: '" << static_cast<char>(fVal) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;

        if (fVal >= static_cast<float>(INT_MIN) && fVal <= static_cast<float>(INT_MAX))
            std::cout << "int: " << static_cast<int>(fVal) << std::endl;
        else
            std::cout << "int: impossible" << std::endl;

        std::cout << "float: " << fVal << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(fVal) << ".0" << std::endl;
        return;
    }
    double dVal = strtod(literal.c_str(), &end);
    if (*end == '\0')
    {
        if (dVal >= 32 && dVal <= 126)
            std::cout << "char: '" << static_cast<char>(dVal) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;

        if (dVal >= static_cast<double>(INT_MIN) && dVal <= static_cast<double>(INT_MAX))
            std::cout << "int: " << static_cast<int>(dVal) << std::endl;
        else
            std::cout << "int: impossible" << std::endl;

        if (dVal >= -FLT_MAX && dVal <= FLT_MAX)
            std::cout << "float: " << static_cast<float>(dVal) << ".0f" << std::endl;
        else
            std::cout << "float: impossible" << std::endl;

        std::cout << "double: " << dVal << ".0" <<  std::endl;
        return;
    }
	std::cout << "Invalid literal" << std::endl;
}