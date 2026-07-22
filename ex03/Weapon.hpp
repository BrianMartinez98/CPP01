/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:53:56 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:54:00 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
