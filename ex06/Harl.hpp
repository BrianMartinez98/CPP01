/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vruiz-ru <vruiz-ru@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:01:31 by vruiz-ru          #+#    #+#             */
/*   Updated: 2026/06/16 14:31:49 by vruiz-ru         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
    private:

        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    public:
        Harl();
        ~Harl();

        void complain(std::string level);
};

#endif