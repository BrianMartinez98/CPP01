/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Weapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 14:51:07 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/10 15:17:49 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string type) : _type(type) {}
};

void	getType( std::string type );
void	setType( std::string type );

#endif

/*
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string type) : _type(type) {}
        const std::string& getType(void) const;
        void setType(std::string newType);
};

#endif
*/