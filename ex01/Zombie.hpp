/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 11:04:42 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/10 11:04:43 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <sstream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie( void ) : _name() {}
		Zombie( std::string name ) : _name(name) {}
		~Zombie( void );
		void	announce( void );
		void	setName( std::string name );
};

void 	randomChump( std::string name );
Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif