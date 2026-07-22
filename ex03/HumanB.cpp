/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 22:36:29 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 13:19:51 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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