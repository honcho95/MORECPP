#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl; 
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other)
{
    std::cout << "Copy WrongCat contructor called." << std::endl; 
}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
    std::cout << "Copy WrongCat assignement operator called." << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat Sound" << std::endl;
}
