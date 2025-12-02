#include "Zombie.hpp"

int main (){
    Zombie* ze = zombieHorde(10, "idriss");
    for (int i = 0; ze && i < 10; i++){
        ze[i].announce();
    }
    delete[] ze;
    return 0;
}