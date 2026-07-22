/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:55:22 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:55:40 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int getIndex(const std::string& level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            return i;
    }
    return -1;
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }
    
    Harl harl;

    switch (getIndex(av[1]))
    {
        case 0:
            harl.complain("DEBUG");
            std::cout << std::endl;
            /* FALLTHROUGH */
        case 1:
            harl.complain("INFO");
            std::cout << std::endl;
            /* FALLTHROUGH */
        case 2:
            harl.complain("WARNING");
            std::cout << std::endl;
            /* FALLTHROUGH */
        case 3:
            harl.complain("ERROR");
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }

    return 0;
}
