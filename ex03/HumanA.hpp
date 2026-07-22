/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 22:33:21 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 13:21:20 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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