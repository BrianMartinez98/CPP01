/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:50:50 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:51:20 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "\n--- CREANDO ZOMBI EN EL HEAP ---" << std::endl;
   
    Zombie* HeapZombie = newZombie("Heap");

    HeapZombie->announce();
    
    std::cout << "\n--- CREANDO ZOMBI EN EL STACK ---" << std::endl;

    randomChump("Stack");

    std::cout << "\n--- DESTRUYENDO ZOMBI DEL HEAP ---" << std::endl;

    delete HeapZombie;

    std::cout << "\n--- FIN DEL PROGRAMA ---" << std::endl;
    return 0;
}
