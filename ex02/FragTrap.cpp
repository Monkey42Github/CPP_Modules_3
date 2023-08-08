/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:34:16 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/13 17:34:29 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_hit_point = 100;
    this->_energy_points = 50;
    this->_Attack_damage = 30;

    std::cout << "FragTrap " << this->_name << " constructed." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " destructed." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if ( this->_energy_points <= 0 ) {
        std::cout << "FragTrap " << this->_name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "FragTrap "<< this->_name << " high fives everybody." << std::endl;
    this->_energy_points -= 1;
}
