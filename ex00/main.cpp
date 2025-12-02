# include "Zombie.hpp"

int main () {
    std::cout << "===========================---===================================" << std::endl;
    std::cout <<  "-----------------> new Zombie started <-------------------" << std::endl; 
    Zombie *ze = newZombie("askour");
    std::cout <<  "-----------------> new Zombie finished <-------------------" << std::endl; 
    
    std::cout << "----------------------------" << std::endl;

    std::cout <<  "------------------> new randomChump started <------------------------" << std::endl; 
    randomChump("idriss");
    std::cout <<  "-------------------> new randomChump finished <---------------------" << std::endl; 

    delete ze;
}
