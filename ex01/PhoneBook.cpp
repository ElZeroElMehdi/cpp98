#include "PhoneBook.hpp"

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
        // void showContacts(){
        //     std::cout << "Index     |First Name|Last Name |Nickname  " << std::endl;
        //     for (int i = 0; i < this->maxindex; i++){
        //         std::cout << this->contacts[i].getIndex() << "|";
        //         std::cout << this->contacts[i].getFirstName() << "|";
        //         std::cout << this->contacts[i].getLastName() << "|";
        //         std::cout << this->contacts[i].getNickname() << std::endl;
        //     }
        // }
        void searchContact(){
            std::string index;
            std::cout << "Enter index: ";
            std::cin >> index;
            for (int i = 0; i < this->maxindex; i++){
                if (this->contacts[i].getIndex() == std::stoi(index)){
                    std::cout << "First Name: " << this->contacts[i].getFirstName() << std::endl;
                    std::cout << "Last Name: " << this->contacts[i].getLastName() << std::endl;
                    std::cout << "Nickname: " << this->contacts[i].getNickname() << std::endl;
                }
            }
        }
};


int main(){
    PhoneBook pb;
    std::string input;
    while (1){
        std::cout << "Enter command: ";
        std::cin >> input;
        if (!input[0])
        {
            std::cout << "bad input EOF" << std::endl;
            break;
        }
        if (input == "ADD")
            pb.addContact();
        else if (input == "SEARCH")
            pb.searchContact();
        else if (input == "EXIT")
            break;
    }
    return 0;
}