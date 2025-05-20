#include "ScavTrap.hpp"

void ScavTrap::Attack(const std::string& target)
{

}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : Name(Name), 
{
    std::cout << "ScavTrap Constructor called" << std::endl;
}
