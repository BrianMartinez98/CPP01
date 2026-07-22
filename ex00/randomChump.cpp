/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 00:56:50 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 11:30:23 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie stackZombie(name);
    
    stackZombie.announce();
}
