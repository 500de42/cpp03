#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << this->Name << " ScavTrap attack function called" << std::endl;
    if (this->EnergyPoint == 0)
    {
        std::cout << "Energy point its 0" << std::endl;
        return ;
    }
    if (this->HItPoint == 0)
    {
        std::cout << "HItPoint point its 0" << std::endl;
        return ;
    }
    std::cout << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
    this->EnergyPoint--;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->Name << " Destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "ScavTrap Constructor called" << std::endl;
    this->HItPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

void ScavTrap::guardGate()
{
    std::cout << this->Name << " is now in gate keeper mode" << std::endl;
}