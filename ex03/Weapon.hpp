/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 21:37:55 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 13:23:54 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon 
{
    
    private:
        std::string type;
    
    public:
        Weapon(const std::string& type);
        ~Weapon();
        
        const std::string& getType() const;
        void setType(const std::string& type);
};

#endif