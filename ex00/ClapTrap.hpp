#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
  protected:
	std::string Name;
	unsigned int HItPoint; // Health
	unsigned int EnergyPoint;
	unsigned int AttackDamage;

  public:
	// constructeur
	ClapTrap();
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator=(const ClapTrap &copyAssignement);
	~ClapTrap();
	//////////////////////////////////////
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif