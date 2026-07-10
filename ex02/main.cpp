/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 11:05:11 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/10 11:24:31 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // Permite usar std::cout
#include <string>   // Permite usar el tipo std::string

int main()
{
    // Creamos una variable de tipo string y la inicializamos.
    std::string str = "HI THIS IS BRAIN";

    // Creamos un puntero a un std::string.
    // El operador '&' obtiene la dirección de memoria de 'str'.
    // stringPTR guarda esa dirección.
    std::string* stringPTR = &str;

    // Creamos una referencia a 'str'.
    // stringREF no es una copia, es simplemente otro nombre para la misma variable.
    std::string& stringREF = str;

    std::cout << "=== Direcciones de memoria ===" << std::endl;

    // '&str' devuelve la dirección donde está almacenada la variable.
    std::cout << "Direccion de str:       " << &str << std::endl;

    // El puntero ya contiene una dirección, por eso no hace falta '&'.
    // Esta dirección debería ser la misma que la de 'str'.
    std::cout << "Direccion en stringPTR: " << stringPTR << std::endl;

    // Una referencia es un alias de la variable.
    // Su dirección también es la misma que la de 'str'.
    std::cout << "Direccion de stringREF: " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "=== Valores ===" << std::endl;

    // Imprime directamente el contenido de la variable.
    std::cout << "str:        " << str << std::endl;

    // '*' desreferencia el puntero.
    // Significa: "ve a la dirección que guarda el puntero
    // y muestra el valor que hay allí".
    std::cout << "*stringPTR: " << *stringPTR << std::endl;

    // Como una referencia es un alias, se usa igual que una variable normal.
    std::cout << "stringREF:  " << stringREF << std::endl;

    return (0);
}
