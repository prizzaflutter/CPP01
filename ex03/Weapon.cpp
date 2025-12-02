#include "Weapon.hpp"


Weapon::Weapon(const std::string& new_type){
    type = new_type;
};

Weapon::~Weapon(){};

const std::string& Weapon::getType() const {
    return type;
};

void Weapon::setType(const std::string& new_type){
    type = new_type;
};