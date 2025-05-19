#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "Constructor called" << std::endl;
    this->Name = Name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy <= 0)
    {
        std::cout << "Energy point its 0" << std::endl;
        return ;
    }
    std::cout << this->Name << " attacks " << target << ", causing <damage> points of damage!" << std::endl;
    this->Energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->Name << " has took " << amount << "damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy <= 0)
    {
        std::cout << "Energy point its 0" << std::endl;
        return ;
    }
    this->Energy--;
}
