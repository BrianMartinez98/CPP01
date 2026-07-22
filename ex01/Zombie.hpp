/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:52:19 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:52:20 by brimarti         ###   ########.fr       */
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
    Zombie();
    ~Zombie();

    void announce(void) const;
    void setName(const std::string& name);
};

Zombie* zombieHorde(int N, std::string name);

#endif