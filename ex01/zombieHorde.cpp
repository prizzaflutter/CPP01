#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
   Zombie* z =  new(std::nothrow) Zombie[N];
    for (int i = 0; z && i < N; i++){
        z[i].setName(name);
    }
    return z;
}