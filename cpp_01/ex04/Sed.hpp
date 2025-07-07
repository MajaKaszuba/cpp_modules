/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <mkaszuba@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:39:40 by mkaszuba          #+#    #+#             */
/*   Updated: 2025/07/03 10:43:13 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <fstream>
#include <iostream>

class Sed {
public:
    Sed(const std::string& filename, const std::string& s1, const std::string& s2);
    void replaceInFile();

private:
    std::string _filename;
    std::string _s1;
    std::string _s2;

    std::string replaceAll(const std::string& line);
};

#endif
