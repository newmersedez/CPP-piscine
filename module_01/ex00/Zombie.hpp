#pragma once

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string _name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void announce(void);
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );
