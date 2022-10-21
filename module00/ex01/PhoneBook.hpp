/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:21:50 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/21 22:01:18 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <stdlib.h>
#include "Contact.hpp"

int validIndex(std::string index);
int isAllSpace(std::string pr);
std::string t10char(std::string str);

class PhoneBook{
    public:
        int maxindex;
        int index;
        Contact contacts[8];
		PhoneBook();
		int addContact();
		int searchContact();
		void ShowContact();
		void ShowContact(int index);
};


#endif