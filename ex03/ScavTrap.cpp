#include "ScavTrap.hpp"
#include "FragTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->HItPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called for " << this->Name << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "ScavTrap Constructor called" << std::endl;
    this->HItPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copyAssignement)
{
    std::cout << "ScavTrap copy called" << std::endl;
    if (this->Name != copyAssignement.Name)
		this->Name = copyAssignement.Name;
	if (this->AttackDamage != copyAssignement.AttackDamage)
		this->AttackDamage = copyAssignement.AttackDamage;
	if (this->HItPoint != copyAssignement.HItPoint)
		this->HItPoint = copyAssignement.HItPoint;
	if (this->EnergyPoint != copyAssignement.EnergyPoint)
		this->EnergyPoint = copyAssignement.EnergyPoint;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    //std::cout << this->Name << " ScavTrap attack function called" << std::endl;
	if (this->EnergyPoint <= 0)
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

void ScavTrap::guardGate()
{
    std::cout << this->Name << " ScavTrap is now in gate keeper mode" << std::endl;
}

unsigned int ScavTrap::get_attack()
{
    return 20;
}

unsigned int ScavTrap::get_hit()
{
    return 100;
}

unsigned int ScavTrap::get_energy()
{
    return 50;
}
