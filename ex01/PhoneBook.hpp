#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>

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
#endif