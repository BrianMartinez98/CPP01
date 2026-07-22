/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:47:22 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 13:37:05 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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