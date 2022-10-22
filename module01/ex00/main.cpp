/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:25:00 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/22 21:27:12 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int  main()
{
    Zombie  *zombie = newZombie("mehdi");
	zombie->announce();
    randomChump("Random Zombie");
    delete zombie;
    return 0;
}