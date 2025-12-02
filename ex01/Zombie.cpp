#include "Zombie.hpp"

void Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

Zombie::~Zombie(){
    std::cout << name << ": destroyed." << std::endl;
};

void Zombie::setName(const std::string& new_name){
    name = new_name;
}