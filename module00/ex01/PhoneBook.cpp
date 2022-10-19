/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:21:43 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/19 12:27:01 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int validIndex(std::string index)
{
	if (index.length() > 1)
		return -1;
	else if (index[0] < '0' || index[0] > '7')
		return -1;
	else
		return 1;
}
class PhoneBook{
    public:
        int maxindex;
        Contact contacts[8];
        PhoneBook(){
            this->maxindex = 0;
			
        }
         void addContact(){
            if (this->maxindex == 8)
                this->maxindex = 0;
            std::string fn;
            std::string ln;
            std::string nn;
            std::cout << "Enter first name: ";
            std::cin >> fn;
            std::cout << "Enter last name: ";
            std::cin >> ln;
            std::cout << "Enter nickname: ";
            std::cin >> nn;
            this->contacts[this->maxindex].setFirstName(fn);
            this->contacts[this->maxindex].setLastName(ln);
            this->contacts[this->maxindex].setNickname(nn);
            this->contacts[this->maxindex].setIndex(this->maxindex);
            this->maxindex++;
        }

        int searchContact(){
            std::string index;
            std::cout << "Enter index: ";
            if (!std::getline(std::cin, index))
			{
				std::cout<< "\n oops bad hacker";
				return -1;
			}
			while (validIndex(index) == -1)
            {
                std::cout << "bad input, retry again : ";
				if (!std::getline(std::cin, index))
				{
					std::cout<< "\n oops bad hacker";
					return -1;
				}
            }
            for (int i = 0; i < this->maxindex; i++){
                if (this->contacts[i].getIndex() == std::stoi(index)){
                    std::cout << "index : " << this->contacts[i].getIndex();
                    std::cout << " | First Name: " << this->contacts[i].getFirstName();
                    std::cout << "| Last Name: " << this->contacts[i].getLastName();
                    std::cout << "| Nickname: " << this->contacts[i].getNickname();
					std::cout << std::endl;
                }
            }
			return 1;
        }
};


int main(){
    PhoneBook	pb;
    std::string input;
    while (1){
        std::cout << "ADD SEARCH EXIT" << std::endl;
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
				break;
		}
        else if (input == "EXIT")
            break;
    }
    return 0;
}