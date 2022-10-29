/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:21:19 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/29 18:37:01 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <sstream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string smiya);
        ~Zombie();
        void announce();
        void setName(std::string name);
};

Zombie* ZombieHorde(int N, std::string name);

#endif