/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:25:03 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/22 21:25:04 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string smiya);
        void setName(std::string name);
        void announce();
        ~Zombie();
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif