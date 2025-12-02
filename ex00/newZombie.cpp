#include "Zombie.hpp"

Zombie* newZombie(std::string name){
    Zombie* z = new(std::nothrow) Zombie(name);
    if (z) z->announce();
    return z;
}