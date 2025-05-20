#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap(std::string Name);
        ~ScavTrap();
        void Attack(const std::string& target);
        void guardGate();
};

