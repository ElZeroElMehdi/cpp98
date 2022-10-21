/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:43:37 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/21 22:02:03 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


# include <iostream>
# include <string>
# include <cctype>
# include <stdlib.h>

class Contact
{
    private:
        int index;
        std::string firstName;
        std::string lastName;
        std::string nickname;
		std::string numberPhone;
		std::string darkestSecret;
    public:
        void setFirstName(std::string fn);
        void setLastName(std::string ln);
        void setNickname(std::string nn);
        void setIndex(int i);
		void setNumberPhone(std::string np);
		void setDarkestSecret(std::string ds);
        int getIndex();
        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
};

#endif