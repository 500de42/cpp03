#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->HItPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
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

FragTrap &FragTrap::operator=(const FragTrap &copyAssignement)
{
	if (this->Name != copyAssignement.Name)
		this->Name = copyAssignement.Name;
	if (this->AttackDamage != copyAssignement.AttackDamage)
		this->AttackDamage = copyAssignement.AttackDamage;
	if (this->HItPoint != copyAssignement.HItPoint)
		this->HItPoint = copyAssignement.HItPoint;
	if (this->EnergyPoint != copyAssignement.EnergyPoint)
		this->EnergyPoint = copyAssignement.EnergyPoint;
	return (*this);
}
