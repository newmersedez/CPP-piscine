#include "Zombie.hpp"

Zombie::Zombie()
{
    this->_name = "lorphan";
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " is dead" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
