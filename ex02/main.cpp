/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:34:57 by pschemit          #+#    #+#             */
/*   Updated: 2023/06/13 17:58:53 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap ash("test");
    ash.attack("Gun");
    ash.takeDamage(10);
    ash.beRepaired(10);
    ash.highFivesGuys();

    return 0;
}
