#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :
        FragTrap();
        FragTrap(std::string Name);
        ~FragTrap();
        FragTrap(const FragTrap &copy);
        FragTrap &operator=(const FragTrap &copyAssignement);
        void highFivesGuys(void);
        static unsigned int get_attack();
        static unsigned int get_energy();
        static unsigned int get_hit();
};

#endif