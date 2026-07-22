/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 11:05:11 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:52:57 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string* stringPTR = &str;

    std::string& stringREF = str;

    std::cout << "=== Direcciones de memoria ===" << std::endl;

    std::cout << "Direccion de str:       " << &str << std::endl;

    std::cout << "Direccion en stringPTR: " << stringPTR << std::endl;

    std::cout << "Direccion de stringREF: " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "=== Valores ===" << std::endl;

    std::cout << "str:        " << str << std::endl;

    std::cout << "*stringPTR: " << *stringPTR << std::endl;

    std::cout << "stringREF:  " << stringREF << std::endl;

    return (0);
}
