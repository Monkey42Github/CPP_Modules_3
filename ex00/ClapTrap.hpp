#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string     _name;
        unsigned int    _hit_point;
        unsigned int    _energy_points;
        unsigned int    _Attack_damage;

    public:
        ClapTrap();
        ClapTrap( std::string name );
        ~ClapTrap(void);
        ClapTrap( const ClapTrap & );
        ClapTrap &operator=(const ClapTrap& rhs);

        void    attack( const std::string &target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
};

#endif