/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:53:27 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:54:08 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{ 
    private:
        std::string _name;
        Weapon*     _weapon;
    
    public:
        HumanB(const std::string& name);
        ~HumanB();
        
        void attack() const;
        void setWeapon(Weapon& weapon); 
};

#endif
