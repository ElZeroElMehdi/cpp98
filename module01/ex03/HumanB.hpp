/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:51:57 by eelmoham          #+#    #+#             */
/*   Updated: 2022/11/02 18:52:02 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
        std::string name; 
        Weapon *WeaponB;
    public:
        HumanB(std::string _name);
        HumanB();
		void setName(std::string nm);
		std::string getName();
		void setWeapon(Weapon &wp);
        void attack();
		~HumanB();
};

#endif