/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:53:24 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:54:10 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name) : _name(name), _weapon(NULL){
}

HumanB::~HumanB(){
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack() const
{
    if (this->_weapon != NULL) 
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
        
    else
        std::cout << this->_name << " attacks with their bare hands" << std::endl;
}
