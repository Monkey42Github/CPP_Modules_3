/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:35:49 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/13 17:36:02 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_hit_point = 100;
    this->_energy_points = 50;
    this->_Attack_damage = 20;

    std::cout << "ScavTrap " << this->_name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " destructed." << std::endl;
}

void    ScavTrap::attack(std::string const& target)
{
    if (_energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_Attack_damage << " points of damage!" << std::endl;
    _energy_points -=1;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now Gate keeper mode !" << std::endl;
}
