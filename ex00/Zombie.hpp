/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 11:05:14 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/10 11:05:15 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string name) : _name(name) {}
		~Zombie( void );
		void	announce( void );
};

void 	randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif