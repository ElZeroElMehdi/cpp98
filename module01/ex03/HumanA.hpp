/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:51:43 by eelmoham          #+#    #+#             */
/*   Updated: 2022/11/02 18:35:20 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
    	Weapon &WeaponA ;
        std::string name;
    public:
        HumanA(std::string _name, Weapon &WeaponA);
		void setName(std::string nm);
		std::string getName();
		void setWeapon(Weapon &_WeaponA);
        void attack();
		HumanA();
		~HumanA();
};

#endif