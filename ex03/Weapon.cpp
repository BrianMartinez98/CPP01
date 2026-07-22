/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 22:18:51 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 13:24:03 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type){
}

Weapon::~Weapon(){
}


const std::string& Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(const std::string& type)
{
    this->type = type;
}