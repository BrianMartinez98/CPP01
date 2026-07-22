/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 00:55:02 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 11:33:55 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name){
}

Zombie::~Zombie(){
    std::cout << "\033[31m" << this->name << ": Destroyed.\033[0m" << std::endl;
}

void Zombie::announce(void) const{
    std::cout << "\033[32m" << this->name << ": BraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}



