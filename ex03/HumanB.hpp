/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 22:36:47 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 13:21:25 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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