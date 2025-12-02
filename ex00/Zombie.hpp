#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "iostream"

class Zombie {
    private:
        std::string name;
    public:
        void announce();
        Zombie(const std::string& class_name);
        ~Zombie( void );

};

Zombie* newZombie(std::string name);

void randomChump(std::string name);

#endif