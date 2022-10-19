/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:21:43 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/19 15:46:20 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int validIndex(std::string index)
{
	if (index.length() > 1 || (index[0] < '0' || index[0] > '7'))
	{
		std::cout<< "the index is out range 0-7\n";
		return (-1);
	}
	else
		return 1;
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
         void addContact()
		 {
			if (this->index == 8)
				this->index = 0;
            std::string fn;
            std::string ln;
            std::string nn;
            std::cout << "Enter first name: ";
            std::getline(std::cin, fn);
            std::cout << "Enter last name: ";
            std::getline(std::cin, ln);
            std::cout << "Enter nickname: ";
            std::getline(std::cin, nn);
            this->contacts[this->index].setFirstName(fn);
            this->contacts[this->index].setLastName(ln);
            this->contacts[this->index].setNickname(nn);
            this->contacts[this->index].setIndex(this->index);
            if (this->maxindex < 8)
				this->maxindex++;
			this->index++;
        }

        int searchContact(){
            std::string index;
			ShowContact();
            std::cout << "Enter index: ";
            if (!std::getline(std::cin, index))
				return -1;
			if (validIndex(index) != -1)
            	ShowContact(std::stoi(index));
			return 1;
        }

		void ShowContact()
		{
			std::cout << "index : " ;
            std::cout << " | First Name: ";
            std::cout << "| Last Name: ";
            std::cout << "| Nickname: ";
			std::cout << std::endl;
			for (int i = 0; i < this->maxindex; i++){
                std::cout << this->contacts[i].getIndex();
                std::cout << "  |"<< this->contacts[i].getFirstName();
                std::cout << "  |"<< this->contacts[i].getLastName();
                std::cout << "  |"<< this->contacts[i].getNickname();
				std::cout << std::endl;
            }
		}
		void ShowContact(int index)
		{
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
        if (input == "ADD")
        	pb.addContact();
        else if (input == "SEARCH")
        {
			if(pb.searchContact() == -1)
			{
				std::cout << "Oops Bad Hacker\n";
				break;
			}
		}
        else if (input == "EXIT")
            break;
		else
			std::cout << "error : \"" << input << "\" commad not fund\n";
    }
    return 0;
}