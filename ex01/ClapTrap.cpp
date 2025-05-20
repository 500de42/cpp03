#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name) : Name(Name), Hit(10), Energy(10),Attack(0)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    this->Name = copy.Name;
    this->Hit = copy.Hit;
    this->Energy = copy.Energy;
    this->Attack = copy.Attack;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copyAssignement)
{
    if (this->Name != copyAssignement.Name)
        this->Name = copyAssignement.Name;
    if (this->Attack != copyAssignement.Attack)
        this->Attack = copyAssignement.Attack;
    if (this->Hit != copyAssignement.Hit)
        this->Hit = copyAssignement.Hit;
    if (this->Energy != copyAssignement.Energy)
        this->Energy = copyAssignement.Energy;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy <= 0)
    {
        std::cout << "Energy point its 0" << std::endl;
        return ;
    }
    if (this->Hit == 0)
    {
        std::cout << "Hit point its 0" << std::endl;
        return ;
    }
    std::cout << this->Name << " attacks " << target << ", causing ~~ points of damage!" << std::endl;
    this->Energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hit == 0)
    {
        std::cout << this->Name << " Hit point its 0" << std::endl;
        return ;
    }
    this->Hit -= amount;
    std::cout << this->Name << " has took " << amount << " damage!";
    std::cout << " ,Hit point remaining " << this->Hit << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy <= 0)
    {
        std::cout << this->Name << " Energy point its 0" << std::endl;
        return ;
    }
    if (this->Hit == 0)
    {
        std::cout << "Hit point its 0" << std::endl;
        return ;
    }
    this->Hit += amount;
    std::cout << this->Name << " " << amount << "-point repair";
    std::cout << " ,Hit point sold " << this->Hit << std::endl;
    this->Energy--;
}
