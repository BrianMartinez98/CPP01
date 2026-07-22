/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:51:05 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:51:08 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name){
}

Zombie::~Zombie(){
    std::cout << "\033[31m" << this->name << ": Destroyed.\033[0m" << std::endl;
}

void Zombie::announce(void) const{
    std::cout << "\033[32m" << this->name << ": BraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}
