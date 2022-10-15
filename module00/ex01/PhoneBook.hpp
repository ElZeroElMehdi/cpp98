/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:21:50 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/13 22:21:51 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
        int index;
        std::string firstName;
        std::string lastName;
        std::string nickname;
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

std::string::size_type sz;  // alias of size_t
#endif