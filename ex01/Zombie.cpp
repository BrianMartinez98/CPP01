/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 19:09:23 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 12:40:30 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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