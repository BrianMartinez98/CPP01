/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:52:11 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:52:12 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(): _name("NONAME") {}

Zombie::~Zombie()
{
    std::cout << "\033[31m" << this->_name << ": Destroyed.\033[0m" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << "\033[32m" << this->_name << ": BraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}

void Zombie::setName(const std::string& name)
{
    this->_name = name;
}