#include "Zombie.hpp"

void Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};


Zombie::Zombie(const std::string& class_name){
    name = class_name;
}

Zombie::~Zombie(){
    std::cout << name << ": destroyed." << std::endl;
}