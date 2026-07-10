/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 11:05:26 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/10 15:02:48 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie( void )
{
	std::cout << _name << " destroyed\n";
}

void Zombie::announce( void )
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}