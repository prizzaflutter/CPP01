#include "HumanB.hpp"


HumanB::HumanB(const std::string& new_name) : w(NULL){
    name = new_name;
}

void HumanB::attack()const{
    if (this->w){
        std::cout << this->name << " attacks with their " << this->w->getType() << std::endl;
    }else{
        std::cout << this->name << " has no Weapon!" << std::endl;
    }
}

void HumanB::setWeapon(Weapon& w) {
    this->w = &w;
}