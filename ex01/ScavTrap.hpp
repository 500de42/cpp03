#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap &copy);
        ScavTrap &operator=(const ScavTrap &copyAssignement);
        ~ScavTrap();
        virtual void attack(const std::string& target);
        void guardGate();
};

#endif
