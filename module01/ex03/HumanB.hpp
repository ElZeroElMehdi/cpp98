/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:51:57 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/24 22:07:19 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
        std::string name;
        HumanB();
        HumanB(std::string _name);
        Weapon WeaponB;
		void setWeapon(Weapon wp);
        void attack();
};

#endif