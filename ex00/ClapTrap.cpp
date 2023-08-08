/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:01:42 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/13 17:01:43 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_point(10), _energy_points(10), _Attack_damage(0)
{
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    std::cout << "copy constructor called" << std::endl;
    *this = rhs;
    return;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& rhs)
{
    this->_name = rhs._name;
    this->_hit_point = rhs._hit_point;
    this->_energy_points = rhs._energy_points;
    this->_Attack_damage = rhs._Attack_damage;
    return *this;
}


void    ClapTrap::attack(std::string const& target )
{
    if ( _energy_points <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _Attack_damage << " points of damage!" << std::endl;
    _energy_points -=1;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if ( _hit_point <= amount)
    {
        std::cout << "ClapTrap " <<  _name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
    _hit_point -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if ( _energy_points <= amount)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
    _energy_points -= 1;
    _hit_point += amount;
}

