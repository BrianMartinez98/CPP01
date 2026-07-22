/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 19:08:56 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 12:43:45 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    const int NUM_ZOMBIES = 8;

    std::cout << "\n--- CREATING THE HORDE OF " << NUM_ZOMBIES << " ZOMBIES ---" << std::endl;
    
    Zombie* myHorde = zombieHorde(NUM_ZOMBIES, "Infected");

    if (myHorde == NULL)
    {
        std::cout << "The horde could not be created." << std::endl;
        return 1;
    }

    std::cout << "\n--- THE HORDE SALUTES YOU ---" << std::endl;
    for (int i = 0; i < NUM_ZOMBIES; i++)
        myHorde[i].announce();

    std::cout << "\n--- KILLING THE HORDE (delete[]) ---" << std::endl;
    delete[] myHorde;

    std::cout << "\n--- END OF PROGRAM ---" << std::endl;
    return 0;
}