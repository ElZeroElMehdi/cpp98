/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:21:43 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/20 15:24:43 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int validIndex(std::string index)
{
	if (index.length() > 1 || std::isdigit(index[0]) == 0 || (index[0] < '0' || index[0] > '7'))
	{
		std::cout<< "the index is out of the range 0-7\n";
		return (-1);
	}
	else
		return 1;
}

int isAllSpace(std::string pr)
{
	int i = 0;

	while (pr[i])
	{
		if (pr[i] == 32)
		    i++;
        else
			return (1);
	}
	return (-1);
}

std::string t10char(std::string str)
{
    std::string str1;
    int         at = 0;
    
	if (str.length() > 9)
	{
        str1 = str.substr(0, 9);
        str1.append(".");
    }
    else if (str.length() == 9)
    {
        str1 = str;
        str1.append(".");
    }
	else
	{
        at = 10 - str.length();
        for (int i = 0 ; i < at ; i++)
        {
            str1.append(" ");
        }
        str1.append(str);
    }
    return (str1);
}

class PhoneBook{
    public:
        int maxindex;
        int index;
        Contact contacts[8];
        PhoneBook(){
            this->maxindex = 0;
            this->index = 0;
        }
        int addContact()
		{
			if (this->index == 8)
				this->index = 0;
            std::string fn;
            std::string ln;
            std::string nn;
            std::cout << "Enter first name: ";
			if (!std::getline(std::cin, fn) || fn.empty() || isAllSpace(fn) == -1)
				return -1;
            std::cout << "Enter last name: ";
			if (!std::getline(std::cin, ln) || ln.empty() || isAllSpace(ln) == -1)
				return -1;
            std::cout << "Enter nickname: ";
			if (!std::getline(std::cin, nn) || nn.empty() || isAllSpace(nn) == -1)
				return -1;
            this->contacts[this->index].setFirstName(fn);
            this->contacts[this->index].setLastName(ln);
            this->contacts[this->index].setNickname(nn);
            this->contacts[this->index].setIndex(this->index);
            if (this->maxindex < 8)
				this->maxindex++;
			this->index++;
			return 1;
        }

        int searchContact(){
            std::string index;
			ShowContact();
            std::cout << "Enter index: ";
            if (!std::getline(std::cin, index))
				return -1;
			if (validIndex(index) != -1)
				ShowContact(std::atoi(&index[0]));
			return 1;
        }

		void ShowContact()
		{
			std::cout << "index     ";
            std::cout << "|first name";
            std::cout << "| Last Name";
            std::cout << "|  Nickname";
			std::cout << std::endl;
			for (int i = 0; i < this->maxindex; i++){
                std::cout<<"         " << this->contacts[i].getIndex();
                std::cout << "|" << t10char(this->contacts[i].getFirstName());
                std::cout << "|"<< t10char(this->contacts[i].getLastName());
                std::cout << "|"<< t10char(this->contacts[i].getNickname());
				std::cout << std::endl;
            }
		}
		void ShowContact(int index)
		{
			if (index >= this->maxindex)
			{
				std::cout << "this index out of range\n";
				return;
			}
			for (int i = 0; i < this->maxindex; i++){
                if (this->contacts[i].getIndex() == index){
                    std::cout << "index : " << this->contacts[i].getIndex();
                    std::cout << " | First Name: " << this->contacts[i].getFirstName();
                    std::cout << "| Last Name: " << this->contacts[i].getLastName();
                    std::cout << "| Nickname: " << this->contacts[i].getNickname();
					std::cout << std::endl;
                }
            }
		}
};


int main(){
    PhoneBook	pb;
    std::string input;
    std::cout << "****************************************" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "*   commands :ADD | SEARCH | EXIT.    *" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "****************************************" << std::endl;
    while (1)
	{
        std::cout << "Enter command: ";
		if (!std::getline(std::cin, input))
        {
            std::cout << "bad input\n";
            break;
        }
        if (input == "ADD" || input == "add")
        {
			if (pb.addContact() == -1)
			{
				std::cout << "Oops Bad Hacker\n";
				break;
			}
		}
        else if (input == "SEARCH" || input == "search")
        {
			if(pb.searchContact() == -1)
			{
				std::cout << "Oops Bad Hacker\n";
				break;
			}
		}
        else if (input == "EXIT" || input == "exit")
            break;
		else
			std::cout << "error : \"" << input << "\" commad not fund\n";
    }
    return 0;
}