/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 12:58:59 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 13:43:02 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Replacer.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Error: Invalid number of arguments." << std::endl;
        std::cerr << "Use: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string s1 = av[2];

    if (s1.empty())
    {                 
        std::cerr << "Error: The search string (s1) cannot be empty." << std::endl;
        return 1;
    }

    Replacer textProcessor(av[1], s1, av[3]);

    if (!textProcessor.replaceWords())
        return 1;

    return 0;
}
