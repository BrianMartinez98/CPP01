/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brimarti <brimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 22:54:43 by brimarti          #+#    #+#             */
/*   Updated: 2026/07/22 22:54:44 by brimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <string>

class Replacer 
{
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;

        std::string _processLine(const std::string& line) const;

    public:
        Replacer(const std::string& filename, const std::string& s1, const std::string& s2);
        ~Replacer();

        bool replaceWords() const;
};

#endif
