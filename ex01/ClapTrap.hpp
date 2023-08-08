/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:10:01 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/13 17:10:02 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string     _name;
        unsigned int    _hit_point;
        unsigned int    _energy_points;
        unsigned int    _Attack_damage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap(void);
        ClapTrap(const ClapTrap &);
        ClapTrap &operator=(const ClapTrap& rhs);

        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif