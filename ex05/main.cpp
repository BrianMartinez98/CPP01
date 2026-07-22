/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:55:02 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:55:03 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
# include <iostream>

int main()
{
    Harl harl;

    std::cout << "--- TEST 1: DEBUG ---" << std::endl;
    harl.complain("DEBUG");
    std::cout << "\n--- TEST 2: INFO ---" << std::endl;
    harl.complain("INFO");
     std::cout << "\n--- TEST 3: WARNING ---" << std::endl;
    harl.complain("WARNING");
    std::cout << "\n--- TEST 4: ERROR ---" << std::endl;
    harl.complain("ERROR");
    std::cout << "\n--- UNKNOWN COMPLAINT TEST ---" << std::endl;
    harl.complain("MISSING_KETCHUP");

    return 0;
}