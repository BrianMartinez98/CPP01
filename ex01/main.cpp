/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:51:49 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:51:53 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
