/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 10:56:37 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/10 11:17:49 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        std::cout << "Error: The horde must have at least 1 zombie." << std::endl;
        return NULL;
    }
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        std::stringstream ss;
        ss << name << (i + 1);
        horde[i].setName(ss.str());
    }
    return (horde);
}
