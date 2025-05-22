#include "DiamondTrap.hpp"

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond Name: " << this->Name << ", ClapTrap Name: " << ClapTrap::Name << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name"),FragTrap(Name), ScavTrap(Name), Name(Name)
{
    this->HItPoint = FragTrap::HItPoint;
    this->EnergyPoint = ScavTrap::EnergyPoint;
    this->AttackDamage = FragTrap::AttackDamage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}
DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap default destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    this->Name = copy.Name;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copyAssignement)
{
    ClapTrap::operator=(copyAssignement);
    this->Name = copyAssignement.Name;
    return (*this);
}
