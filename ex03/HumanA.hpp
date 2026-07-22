/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:53:17 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:54:12 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
    
    private:
        std::string _name;
        Weapon&     _weapon;
    
    public:
        HumanA(const std::string& name, Weapon& weapon);
        ~HumanA();
        
        void attack() const;
};

#endif
