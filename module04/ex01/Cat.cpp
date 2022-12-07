#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Constructor" << std::endl;
    this->type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(const Cat &New):Animal()
{
    this->type = New.type;
    delete this->_brain;
    this->_brain = new Brain();
}

Cat Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat: Assigment Operator" << std::endl;
    this->type = rhs.type;
    delete this->_brain;
    this->_brain = new Brain();
    return(*this);
}


void Cat::makeSound() const
{
    std::cout << "Cats Sound" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
    delete this->_brain;
    std::cout << "Cat Destructor : deleting _brain" << std::endl;
}