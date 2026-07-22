/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:53:49 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:54:03 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
