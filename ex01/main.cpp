/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 11:05:11 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/10 11:08:56 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"
#include <iostream>

int main(void)
{
    const int NUM_ZOMBIES = N;

    std::cout << "\n--- CREATING THE HORDE OF " << NUM_ZOMBIES << " ZOMBIES ---" << std::endl;
    Zombie* myHorde = zombieHorde(NUM_ZOMBIES, "Infected");

    if (myHorde == NULL)
    {
        std::cout << "The horde could not be created." << std::endl;
        return (1);
    }

    std::cout << "\n--- THE HORDE SALUTES YOU ---" << std::endl;
    for (int i = 0; i < NUM_ZOMBIES; i++)
        myHorde[i].announce();

    std::cout << "\n--- KILLING THE HORDE (delete[]) ---" << std::endl;
    delete[] myHorde;

    std::cout << "\n--- END OF PROGRAM ---" << std::endl;
    return (0);
}
