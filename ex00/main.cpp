#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap clap("test");
    clap.attack("Gun");
    clap.takeDamage(1);

    return 0;
}
