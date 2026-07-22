/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 19:10:12 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 12:39:57 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
  private:
    std::string _name;

  public:
    Zombie();
    ~Zombie();

    void announce(void) const;
    void setName(const std::string& name);
};

Zombie* zombieHorde(int N, std::string name);

#endif