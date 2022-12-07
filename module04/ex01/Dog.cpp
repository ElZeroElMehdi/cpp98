#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constructor" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog &New)
{
    this->type = New.type;
    delete this->_brain;
    this->_brain = new Brain();
}

Dog Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog: Assigment Operator" << std::endl;
    this->type = rhs.type;
    this->_brain = rhs._brain;
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "Dogs Sound" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
    delete this->_brain;
    std::cout << "Dog Destructor : deleting _brain" << std::endl;
}