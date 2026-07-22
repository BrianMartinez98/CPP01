/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:52:24 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:52:25 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        std::cout << "Error: The horde must have at least 1 zombie." << std::endl;
        return NULL;
    }

    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; i++)
        horde[i].setName(name);

    return horde;
}