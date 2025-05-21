#include "ScavTrap.hpp"

ClapTrap::ClapTrap() : HItPoint(10), EnergyPoint(10),AttackDamage(0)
{
    std::cout << "ClapTrap default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name), HItPoint(10),EnergyPoint(10), AttackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->Name = copy.Name;
	this->HItPoint = copy.HItPoint;
	this->EnergyPoint = copy.EnergyPoint;
	this->AttackDamage = copy.AttackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copyAssignement)
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

void ClapTrap::attack(const std::string &target)
{
	if (this->EnergyPoint <= 0)
	{
		std::cout << "EnergyPoint point its 0" << std::endl;
		return ;
	}
	if (this->HItPoint == 0)
	{
		std::cout << "HItPoint point its 0" << std::endl;
		return ;
	}
	std::cout << this->Name << " AttackDamages " << target << ", causing ~~points of damage !" << std::endl;
	this->EnergyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HItPoint == 0)
	{
		std::cout << this->Name << " HItPoint point its 0" << std::endl;
		return ;
	}
	this->HItPoint -= amount;
	std::cout << this->Name << " has took " << amount << " damage!";
	std::cout << " ,HItPoint point remaining " << this->HItPoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoint <= 0)
	{
		std::cout << this->Name << " EnergyPoint point its 0" << std::endl;
		return ;
	}
	if (this->HItPoint == 0)
	{
		std::cout << "HItPoint point its 0" << std::endl;
		return ;
	}
	this->HItPoint += amount;
	std::cout << this->Name << " " << amount << "-point repair";
	std::cout << " ,HItPoint point sold " << this->HItPoint << std::endl;
	this->EnergyPoint--;
}