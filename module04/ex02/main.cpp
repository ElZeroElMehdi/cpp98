#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    {
        Dog *Pablo = new Dog();
        Pablo->makeSound();
        delete Pablo;
    }
    system("leaks Abstract");
    return 0;
}