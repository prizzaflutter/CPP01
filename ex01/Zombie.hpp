#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "iostream"

class Zombie {
    private:
        std::string name;
    public:
        ~Zombie( void );
        void announce();
        void setName(const std::string& new_name);

};

Zombie* zombieHorde( int N, std::string name );

#endif