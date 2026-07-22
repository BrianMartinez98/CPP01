/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 19:39:20 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 14:37:17 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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