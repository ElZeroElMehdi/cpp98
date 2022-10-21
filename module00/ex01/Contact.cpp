/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:53:07 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/21 21:54:38 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string fn)
{
	this->firstName = fn;
}
void Contact::setLastName(std::string ln)
{
	this->lastName = ln;
}
void Contact::setNickname(std::string nn)
{
	this->nickname = nn;
}

void Contact::setIndex(int i)
{
	this->index = i;
}
void Contact::setNumberPhone(std::string np)
{
	this->numberPhone = np;
}
void Contact::setDarkestSecret(std::string ds)
{
	this->darkestSecret = ds;
}

int Contact::getIndex()
{
	return this->index;
}

std::string Contact::getFirstName()
{
	return this->firstName;
}

std::string Contact::getLastName()
{
	return this->lastName;
}

std::string Contact::getNickname()
{
	return this->nickname;
}