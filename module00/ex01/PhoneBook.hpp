/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:21:50 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/19 10:52:02 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <stdlib.h>

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
        void setFirstName(std::string fn){
            this->firstName = fn;
        }
        void setLastName(std::string ln){
            this->lastName = ln;
        }
        void setNickname(std::string nn){
            this->nickname = nn;
        }
		
        void setIndex(int i){
            this->index = i;
        }
		void setNumberPhone(std::string np)
		{
			this->numberPhone = np;
		}
		void setDarkestSecret(std::string ds)
		{
			this->darkestSecret = ds;
		}
		
        int getIndex(){
            return this->index;
        }
		
        std::string getFirstName(){
            return this->firstName;
        }
		
        std::string getLastName(){
            return this->lastName;
        }
		
        std::string getNickname(){
            return this->nickname;
        }
};

int validIndxe(std::string index);

#endif