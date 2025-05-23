#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HItPoint(10),EnergyPoint(10), AttackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name), HItPoint(10),EnergyPoint(10), AttackDamage(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
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
	if (this->EnergyPoint == 0)
	{
		std::cout << this->Name << "EnergyPoint its 0 attack it's impossible" << std::endl;
		return ;
	}
	if (this->HItPoint == 0)
	{
		std::cout << this->Name << " HitPoint its 0 attack it's impossible" << std::endl;
		return ;
	}
	std::cout << this->Name << " attack " << target << ", causing " << this->AttackDamage << " damage points!" << std::endl;
	this->EnergyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HItPoint == 0)
	{
		std::cout  << " hitpoint is already at 0 "<< this->Name << " can't take any more damage" << std::endl;
		return ;
	}
	if (amount > this->HItPoint)
		this->HItPoint = 0;
	else
		this->HItPoint -= amount;
	std::cout << this->Name << " has took " << amount << " damage!";
	std::cout << " ,HitPoint remaining " << this->HItPoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoint <= 0)
	{
		std::cout << this->Name << " EnergyPoint at 0 repair impossible" << std::endl;
		return ;
	}
	if (this->HItPoint == 0)
	{
		std::cout << this->Name << " HitPoint at 0 repair impossible" << std::endl;
		return ;
	}
	this->HItPoint += amount;
	std::cout << this->Name << " " << amount << "-point repair";
	std::cout << " ,HitPoint sold " << this->HItPoint << std::endl;
	this->EnergyPoint--;
}

