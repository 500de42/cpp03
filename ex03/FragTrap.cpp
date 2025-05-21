#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->Name << " says: \"High five everyone! 😄\"" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->HItPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->Name << " destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

