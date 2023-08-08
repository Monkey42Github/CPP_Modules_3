/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:10:04 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/13 17:56:52 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap ash("Test");
    ash.attack("Gun");
    ash.takeDamage(10);
    ash.beRepaired(10);
    ash.guardGate();

    return 0;
}
